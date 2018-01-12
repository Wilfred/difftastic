#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 1203
#define SYMBOL_COUNT 264
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
  anon_sym_void = 56,
  anon_sym_byte = 57,
  anon_sym_short = 58,
  anon_sym_int = 59,
  anon_sym_long = 60,
  anon_sym_char = 61,
  anon_sym_float = 62,
  anon_sym_double = 63,
  anon_sym_AT = 64,
  anon_sym_EQ = 65,
  anon_sym_open = 66,
  anon_sym_module = 67,
  anon_sym_requires = 68,
  anon_sym_exports = 69,
  anon_sym_to = 70,
  anon_sym_opens = 71,
  anon_sym_uses = 72,
  anon_sym_provides = 73,
  anon_sym_with = 74,
  anon_sym_transitive = 75,
  anon_sym_static = 76,
  anon_sym_package = 77,
  anon_sym_import = 78,
  anon_sym_class = 79,
  anon_sym_public = 80,
  anon_sym_protected = 81,
  anon_sym_private = 82,
  anon_sym_abstract = 83,
  anon_sym_final = 84,
  anon_sym_strictfp = 85,
  anon_sym_default = 86,
  anon_sym_synchronized = 87,
  anon_sym_native = 88,
  anon_sym_extends = 89,
  anon_sym_implements = 90,
  anon_sym_this = 91,
  anon_sym_super = 92,
  anon_sym_new = 93,
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
  sym_unann_type = 212,
  sym_unann_primitive_type = 213,
  sym_unann_class_or_interface_type = 214,
  sym_unann_array_type = 215,
  sym_method_header = 216,
  sym_method_declarator = 217,
  sym__formal_parameter_list = 218,
  sym_formal_parameter = 219,
  sym_receiver_parameter = 220,
  sym_last_formal_parameter = 221,
  sym_throws = 222,
  sym_exception_type_list = 223,
  sym_exception_type = 224,
  sym_method_body = 225,
  sym_block = 226,
  sym_block_statements = 227,
  sym_block_statement = 228,
  sym_local_variable_declaration_statement = 229,
  sym_local_variable_declaration = 230,
  sym_method_declaration = 231,
  sym_method_name = 232,
  aux_sym_program_repeat1 = 233,
  aux_sym_character_literal_repeat1 = 234,
  aux_sym_inferred_formal_parameter_list_repeat1 = 235,
  aux_sym_if_then_statement_repeat1 = 236,
  aux_sym_type_arguments_repeat1 = 237,
  aux_sym_class_or_interface_type_repeat1 = 238,
  aux_sym_class_or_interface_type_repeat2 = 239,
  aux_sym_dims_repeat1 = 240,
  aux_sym_element_value_pair_list_repeat1 = 241,
  aux_sym_element_value_array_initializer_repeat1 = 242,
  aux_sym_module_declaration_repeat1 = 243,
  aux_sym_module_identifier_repeat1 = 244,
  aux_sym_module_directive_repeat1 = 245,
  aux_sym_module_directive_repeat2 = 246,
  aux_sym_module_directive_repeat3 = 247,
  aux_sym_normal_class_declaration_repeat1 = 248,
  aux_sym_type_parameter_list_repeat1 = 249,
  aux_sym_type_bound_repeat1 = 250,
  aux_sym_interface_type_list_repeat1 = 251,
  aux_sym_class_body_repeat1 = 252,
  aux_sym_dims_exprs_repeat1 = 253,
  aux_sym_class_literal_repeat1 = 254,
  aux_sym_class_or_interface_type_to_instantiate_repeat1 = 255,
  aux_sym_argument_list_repeat1 = 256,
  aux_sym_annotation_type_body_repeat1 = 257,
  aux_sym_interface_body_repeat1 = 258,
  aux_sym_variable_declarator_list_repeat1 = 259,
  aux_sym_array_initializer_repeat1 = 260,
  aux_sym_formal_parameters_repeat1 = 261,
  aux_sym_exception_type_list_repeat1 = 262,
  aux_sym_block_statements_repeat1 = 263,
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
  [anon_sym_void] = "void",
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
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(89);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'i')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(280);
      if (lookahead == 'o')
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(281);
      if (lookahead == 't')
        ADVANCE(282);
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
          ('e' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'm')
        ADVANCE(131);
      if (lookahead == 'n')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 280:
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
    case 281:
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
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 284:
      if (lookahead == '!')
        ADVANCE(285);
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
        ADVANCE(286);
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
        ADVANCE(287);
      if (lookahead == 'c')
        ADVANCE(295);
      if (lookahead == 'd')
        ADVANCE(300);
      if (lookahead == 'e')
        ADVANCE(307);
      if (lookahead == 'f')
        ADVANCE(322);
      if (lookahead == 'i')
        ADVANCE(327);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(352);
      if (lookahead == 'p')
        ADVANCE(357);
      if (lookahead == 'r')
        ADVANCE(387);
      if (lookahead == 's')
        ADVANCE(395);
      if (lookahead == 't')
        ADVANCE(422);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead == 'w')
        ADVANCE(434);
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
        SKIP(284);
      END_STATE();
    case 285:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 287:
      if (lookahead == 'b')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 's')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 't')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'r')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'a')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'c')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 't')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 295:
      if (lookahead == 'l')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'a')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 's')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 's')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 300:
      if (lookahead == 'e')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'f')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'a')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'u')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'l')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 't')
        ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 307:
      if (lookahead == 'l')
        ADVANCE(308);
      if (lookahead == 'x')
        ADVANCE(311);
      END_STATE();
    case 308:
      if (lookahead == 's')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'e')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == ' ')
        ADVANCE(113);
      END_STATE();
    case 311:
      if (lookahead == 'p')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(317);
      END_STATE();
    case 312:
      if (lookahead == 'o')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'r')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 't')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 's')
        ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 317:
      if (lookahead == 'e')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'n')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'd')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 's')
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 322:
      if (lookahead == 'i')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'n')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'a')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'l')
        ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 327:
      if (lookahead == 'f')
        ADVANCE(328);
      if (lookahead == 'm')
        ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 329:
      if (lookahead == 'p')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'l')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'e')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'm')
        ADVANCE(333);
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
      if (lookahead == 't')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 's')
        ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 338:
      if (lookahead == 'o')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'd')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'u')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'l')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'e')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 344:
      if (lookahead == 'a')
        ADVANCE(345);
      if (lookahead == 'e')
        ADVANCE(350);
      END_STATE();
    case 345:
      if (lookahead == 't')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'i')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'v')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'e')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 350:
      if (lookahead == 'w')
        ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 352:
      if (lookahead == 'p')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 'e')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'n')
        ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == 's')
        ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_opens);
      END_STATE();
    case 357:
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead == 'r')
        ADVANCE(364);
      if (lookahead == 'u')
        ADVANCE(382);
      END_STATE();
    case 358:
      if (lookahead == 'c')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'k')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'a')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 'g')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'e')
        ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 364:
      if (lookahead == 'i')
        ADVANCE(365);
      if (lookahead == 'o')
        ADVANCE(370);
      END_STATE();
    case 365:
      if (lookahead == 'v')
        ADVANCE(366);
      END_STATE();
    case 366:
      if (lookahead == 'a')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 't')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'e')
        ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 370:
      if (lookahead == 't')
        ADVANCE(371);
      if (lookahead == 'v')
        ADVANCE(377);
      END_STATE();
    case 371:
      if (lookahead == 'e')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'c')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 't')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'e')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'd')
        ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 377:
      if (lookahead == 'i')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'd')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'e')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 's')
        ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 382:
      if (lookahead == 'b')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'l')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'i')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'c')
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 387:
      if (lookahead == 'e')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'q')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'u')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'i')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 395:
      if (lookahead == 't')
        ADVANCE(396);
      if (lookahead == 'u')
        ADVANCE(407);
      if (lookahead == 'y')
        ADVANCE(411);
      END_STATE();
    case 396:
      if (lookahead == 'a')
        ADVANCE(397);
      if (lookahead == 'r')
        ADVANCE(401);
      END_STATE();
    case 397:
      if (lookahead == 't')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'i')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'c')
        ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 401:
      if (lookahead == 'i')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'c')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == 't')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'f')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'p')
        ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 407:
      if (lookahead == 'p')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'e')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'r')
        ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 411:
      if (lookahead == 'n')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'c')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'h')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 'r')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'o')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'n')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'i')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'z')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'e')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'd')
        ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 422:
      if (lookahead == 'h')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'i')
        ADVANCE(424);
      if (lookahead == 'r')
        ADVANCE(426);
      END_STATE();
    case 424:
      if (lookahead == 's')
        ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 426:
      if (lookahead == 'o')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'w')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 's')
        ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 430:
      if (lookahead == 's')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'e')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 's')
        ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 434:
      if (lookahead == 'i')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 't')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'h')
        ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 438:
      if (lookahead == '\n')
        SKIP(438);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(439);
      if (lookahead == '\\')
        ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(443);
      if (lookahead != 0)
        ADVANCE(443);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(441);
      if (lookahead != 0)
        ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 444:
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
        ADVANCE(445);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(67);
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
        SKIP(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 445:
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(447);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(448);
      if (lookahead == 'i')
        ADVANCE(449);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'n')
        ADVANCE(452);
      if (lookahead == 'p')
        ADVANCE(453);
      if (lookahead == 's')
        ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 448:
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
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 453:
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
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(286);
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
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(89);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(448);
      if (lookahead == 'i')
        ADVANCE(459);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'n')
        ADVANCE(452);
      if (lookahead == 'p')
        ADVANCE(453);
      if (lookahead == 's')
        ADVANCE(281);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == 's')
        ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(89);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(448);
      if (lookahead == 'i')
        ADVANCE(459);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(452);
      if (lookahead == 'o')
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(447);
      if (lookahead == 'd')
        ADVANCE(465);
      if (lookahead == 'f')
        ADVANCE(466);
      if (lookahead == 'i')
        ADVANCE(449);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 's')
        ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 468:
      if (lookahead == '&')
        ADVANCE(469);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == ':')
        ADVANCE(470);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '>')
        ADVANCE(471);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == 'e')
        ADVANCE(472);
      if (lookahead == 'i')
        ADVANCE(474);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 470:
      if (lookahead == ':')
        ADVANCE(53);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 472:
      if (lookahead == 'x')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == 't')
        ADVANCE(317);
      END_STATE();
    case 474:
      if (lookahead == 'm')
        ADVANCE(329);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(447);
      if (lookahead == 'd')
        ADVANCE(465);
      if (lookahead == 'f')
        ADVANCE(466);
      if (lookahead == 'i')
        ADVANCE(449);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 's')
        ADVANCE(467);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == ':')
        ADVANCE(470);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(479);
      if (lookahead == '>')
        ADVANCE(471);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 480:
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
        ADVANCE(481);
      if (lookahead == 'n')
        ADVANCE(482);
      if (lookahead == 't')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(480);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 483:
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
        ADVANCE(484);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == ':')
        ADVANCE(485);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(486);
      if (lookahead == '=')
        ADVANCE(487);
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
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(89);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'i')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(280);
      if (lookahead == 'o')
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(281);
      if (lookahead == 't')
        ADVANCE(282);
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
        SKIP(483);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(16);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 487:
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(286);
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
        ADVANCE(448);
      if (lookahead == 'i')
        ADVANCE(449);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'n')
        ADVANCE(452);
      if (lookahead == 'p')
        ADVANCE(453);
      if (lookahead == 's')
        ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == 's')
        ADVANCE(461);
      if (lookahead == 't')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '&')
        ADVANCE(469);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == ':')
        ADVANCE(470);
      if (lookahead == '>')
        ADVANCE(471);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == 't')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 495:
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
        ADVANCE(496);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'n')
        ADVANCE(154);
      if (lookahead == 'p')
        ADVANCE(453);
      if (lookahead == 's')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(497);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(495);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 498:
      if (lookahead == '!')
        ADVANCE(285);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(499);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(500);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(501);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(502);
      if (lookahead == '=')
        ADVANCE(487);
      if (lookahead == '>')
        ADVANCE(503);
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
        SKIP(498);
      END_STATE();
    case 499:
      if (lookahead == '&')
        ADVANCE(7);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(56);
      END_STATE();
    case 503:
      if (lookahead == '>')
        ADVANCE(63);
      END_STATE();
    case 504:
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
        ADVANCE(280);
      if (lookahead == 'o')
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(281);
      if (lookahead == 't')
        ADVANCE(282);
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
        SKIP(504);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(506);
      if (lookahead == 's')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '<')
        ADVANCE(278);
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
        ADVANCE(31);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == 's')
        ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(510);
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
  [2] = {.lex_state = 284},
  [3] = {.lex_state = 284},
  [4] = {.lex_state = 284},
  [5] = {.lex_state = 438},
  [6] = {.lex_state = 284},
  [7] = {.lex_state = 444},
  [8] = {.lex_state = 446},
  [9] = {.lex_state = 444},
  [10] = {.lex_state = 444},
  [11] = {.lex_state = 444},
  [12] = {.lex_state = 444},
  [13] = {.lex_state = 444},
  [14] = {.lex_state = 454},
  [15] = {.lex_state = 250},
  [16] = {.lex_state = 444},
  [17] = {.lex_state = 458},
  [18] = {.lex_state = 444},
  [19] = {.lex_state = 460},
  [20] = {.lex_state = 444},
  [21] = {.lex_state = 444},
  [22] = {.lex_state = 444},
  [23] = {.lex_state = 250},
  [24] = {.lex_state = 250},
  [25] = {.lex_state = 284},
  [26] = {.lex_state = 284},
  [27] = {.lex_state = 284},
  [28] = {.lex_state = 284},
  [29] = {.lex_state = 284},
  [30] = {.lex_state = 463},
  [31] = {.lex_state = 463},
  [32] = {.lex_state = 250},
  [33] = {.lex_state = 250},
  [34] = {.lex_state = 250},
  [35] = {.lex_state = 250},
  [36] = {.lex_state = 458},
  [37] = {.lex_state = 464},
  [38] = {.lex_state = 250},
  [39] = {.lex_state = 444},
  [40] = {.lex_state = 444},
  [41] = {.lex_state = 444},
  [42] = {.lex_state = 444},
  [43] = {.lex_state = 284},
  [44] = {.lex_state = 250},
  [45] = {.lex_state = 250},
  [46] = {.lex_state = 458},
  [47] = {.lex_state = 284},
  [48] = {.lex_state = 438},
  [49] = {.lex_state = 438},
  [50] = {.lex_state = 444},
  [51] = {.lex_state = 468},
  [52] = {.lex_state = 444},
  [53] = {.lex_state = 444},
  [54] = {.lex_state = 468},
  [55] = {.lex_state = 468},
  [56] = {.lex_state = 444},
  [57] = {.lex_state = 444},
  [58] = {.lex_state = 475},
  [59] = {.lex_state = 475},
  [60] = {.lex_state = 475},
  [61] = {.lex_state = 444},
  [62] = {.lex_state = 446},
  [63] = {.lex_state = 475},
  [64] = {.lex_state = 250},
  [65] = {.lex_state = 446},
  [66] = {.lex_state = 446},
  [67] = {.lex_state = 446},
  [68] = {.lex_state = 475},
  [69] = {.lex_state = 475},
  [70] = {.lex_state = 475},
  [71] = {.lex_state = 475},
  [72] = {.lex_state = 250},
  [73] = {.lex_state = 250},
  [74] = {.lex_state = 250},
  [75] = {.lex_state = 464},
  [76] = {.lex_state = 446},
  [77] = {.lex_state = 284},
  [78] = {.lex_state = 284},
  [79] = {.lex_state = 284},
  [80] = {.lex_state = 444},
  [81] = {.lex_state = 463},
  [82] = {.lex_state = 463},
  [83] = {.lex_state = 444},
  [84] = {.lex_state = 284},
  [85] = {.lex_state = 250},
  [86] = {.lex_state = 284},
  [87] = {.lex_state = 444},
  [88] = {.lex_state = 284},
  [89] = {.lex_state = 284},
  [90] = {.lex_state = 284},
  [91] = {.lex_state = 477},
  [92] = {.lex_state = 444},
  [93] = {.lex_state = 250},
  [94] = {.lex_state = 444},
  [95] = {.lex_state = 444},
  [96] = {.lex_state = 444},
  [97] = {.lex_state = 444},
  [98] = {.lex_state = 444},
  [99] = {.lex_state = 444},
  [100] = {.lex_state = 284},
  [101] = {.lex_state = 444},
  [102] = {.lex_state = 444},
  [103] = {.lex_state = 444},
  [104] = {.lex_state = 464},
  [105] = {.lex_state = 464},
  [106] = {.lex_state = 444},
  [107] = {.lex_state = 464},
  [108] = {.lex_state = 250},
  [109] = {.lex_state = 284},
  [110] = {.lex_state = 284},
  [111] = {.lex_state = 444},
  [112] = {.lex_state = 444},
  [113] = {.lex_state = 284},
  [114] = {.lex_state = 478},
  [115] = {.lex_state = 444},
  [116] = {.lex_state = 250},
  [117] = {.lex_state = 284},
  [118] = {.lex_state = 250},
  [119] = {.lex_state = 250},
  [120] = {.lex_state = 250},
  [121] = {.lex_state = 444},
  [122] = {.lex_state = 284},
  [123] = {.lex_state = 454},
  [124] = {.lex_state = 444},
  [125] = {.lex_state = 444},
  [126] = {.lex_state = 458},
  [127] = {.lex_state = 458},
  [128] = {.lex_state = 284},
  [129] = {.lex_state = 284},
  [130] = {.lex_state = 438},
  [131] = {.lex_state = 444},
  [132] = {.lex_state = 444},
  [133] = {.lex_state = 444},
  [134] = {.lex_state = 468},
  [135] = {.lex_state = 464},
  [136] = {.lex_state = 444},
  [137] = {.lex_state = 468},
  [138] = {.lex_state = 468},
  [139] = {.lex_state = 444},
  [140] = {.lex_state = 250},
  [141] = {.lex_state = 444},
  [142] = {.lex_state = 446},
  [143] = {.lex_state = 446},
  [144] = {.lex_state = 477},
  [145] = {.lex_state = 475},
  [146] = {.lex_state = 284},
  [147] = {.lex_state = 250},
  [148] = {.lex_state = 444},
  [149] = {.lex_state = 284},
  [150] = {.lex_state = 250},
  [151] = {.lex_state = 284},
  [152] = {.lex_state = 475},
  [153] = {.lex_state = 284},
  [154] = {.lex_state = 475},
  [155] = {.lex_state = 444},
  [156] = {.lex_state = 446},
  [157] = {.lex_state = 250},
  [158] = {.lex_state = 464},
  [159] = {.lex_state = 475},
  [160] = {.lex_state = 446},
  [161] = {.lex_state = 444},
  [162] = {.lex_state = 250},
  [163] = {.lex_state = 480},
  [164] = {.lex_state = 444},
  [165] = {.lex_state = 250},
  [166] = {.lex_state = 444},
  [167] = {.lex_state = 284},
  [168] = {.lex_state = 284},
  [169] = {.lex_state = 250},
  [170] = {.lex_state = 284},
  [171] = {.lex_state = 284},
  [172] = {.lex_state = 250},
  [173] = {.lex_state = 444},
  [174] = {.lex_state = 444},
  [175] = {.lex_state = 458},
  [176] = {.lex_state = 444},
  [177] = {.lex_state = 444},
  [178] = {.lex_state = 284},
  [179] = {.lex_state = 284},
  [180] = {.lex_state = 250},
  [181] = {.lex_state = 250},
  [182] = {.lex_state = 458},
  [183] = {.lex_state = 444},
  [184] = {.lex_state = 284},
  [185] = {.lex_state = 250},
  [186] = {.lex_state = 250},
  [187] = {.lex_state = 284},
  [188] = {.lex_state = 468},
  [189] = {.lex_state = 468},
  [190] = {.lex_state = 468},
  [191] = {.lex_state = 468},
  [192] = {.lex_state = 284},
  [193] = {.lex_state = 464},
  [194] = {.lex_state = 284},
  [195] = {.lex_state = 284},
  [196] = {.lex_state = 284},
  [197] = {.lex_state = 284},
  [198] = {.lex_state = 284},
  [199] = {.lex_state = 444},
  [200] = {.lex_state = 444},
  [201] = {.lex_state = 284},
  [202] = {.lex_state = 444},
  [203] = {.lex_state = 444},
  [204] = {.lex_state = 284},
  [205] = {.lex_state = 284},
  [206] = {.lex_state = 464},
  [207] = {.lex_state = 464},
  [208] = {.lex_state = 284},
  [209] = {.lex_state = 444},
  [210] = {.lex_state = 446},
  [211] = {.lex_state = 444},
  [212] = {.lex_state = 284},
  [213] = {.lex_state = 478},
  [214] = {.lex_state = 284},
  [215] = {.lex_state = 284},
  [216] = {.lex_state = 444},
  [217] = {.lex_state = 444},
  [218] = {.lex_state = 250},
  [219] = {.lex_state = 483},
  [220] = {.lex_state = 444},
  [221] = {.lex_state = 488},
  [222] = {.lex_state = 444},
  [223] = {.lex_state = 284},
  [224] = {.lex_state = 284},
  [225] = {.lex_state = 488},
  [226] = {.lex_state = 284},
  [227] = {.lex_state = 488},
  [228] = {.lex_state = 250},
  [229] = {.lex_state = 284},
  [230] = {.lex_state = 284},
  [231] = {.lex_state = 250},
  [232] = {.lex_state = 444},
  [233] = {.lex_state = 284},
  [234] = {.lex_state = 444},
  [235] = {.lex_state = 458},
  [236] = {.lex_state = 458},
  [237] = {.lex_state = 284},
  [238] = {.lex_state = 284},
  [239] = {.lex_state = 250},
  [240] = {.lex_state = 480},
  [241] = {.lex_state = 444},
  [242] = {.lex_state = 468},
  [243] = {.lex_state = 444},
  [244] = {.lex_state = 468},
  [245] = {.lex_state = 444},
  [246] = {.lex_state = 468},
  [247] = {.lex_state = 444},
  [248] = {.lex_state = 250},
  [249] = {.lex_state = 480},
  [250] = {.lex_state = 444},
  [251] = {.lex_state = 468},
  [252] = {.lex_state = 284},
  [253] = {.lex_state = 250},
  [254] = {.lex_state = 284},
  [255] = {.lex_state = 284},
  [256] = {.lex_state = 284},
  [257] = {.lex_state = 475},
  [258] = {.lex_state = 284},
  [259] = {.lex_state = 284},
  [260] = {.lex_state = 475},
  [261] = {.lex_state = 444},
  [262] = {.lex_state = 444},
  [263] = {.lex_state = 250},
  [264] = {.lex_state = 250},
  [265] = {.lex_state = 446},
  [266] = {.lex_state = 250},
  [267] = {.lex_state = 284},
  [268] = {.lex_state = 444},
  [269] = {.lex_state = 250},
  [270] = {.lex_state = 458},
  [271] = {.lex_state = 250},
  [272] = {.lex_state = 463},
  [273] = {.lex_state = 284},
  [274] = {.lex_state = 250},
  [275] = {.lex_state = 250},
  [276] = {.lex_state = 250},
  [277] = {.lex_state = 463},
  [278] = {.lex_state = 284},
  [279] = {.lex_state = 284},
  [280] = {.lex_state = 444},
  [281] = {.lex_state = 250},
  [282] = {.lex_state = 489},
  [283] = {.lex_state = 444},
  [284] = {.lex_state = 444},
  [285] = {.lex_state = 444},
  [286] = {.lex_state = 284},
  [287] = {.lex_state = 284},
  [288] = {.lex_state = 250},
  [289] = {.lex_state = 444},
  [290] = {.lex_state = 284},
  [291] = {.lex_state = 468},
  [292] = {.lex_state = 458},
  [293] = {.lex_state = 284},
  [294] = {.lex_state = 250},
  [295] = {.lex_state = 454},
  [296] = {.lex_state = 444},
  [297] = {.lex_state = 444},
  [298] = {.lex_state = 444},
  [299] = {.lex_state = 458},
  [300] = {.lex_state = 464},
  [301] = {.lex_state = 458},
  [302] = {.lex_state = 458},
  [303] = {.lex_state = 284},
  [304] = {.lex_state = 458},
  [305] = {.lex_state = 284},
  [306] = {.lex_state = 458},
  [307] = {.lex_state = 458},
  [308] = {.lex_state = 284},
  [309] = {.lex_state = 284},
  [310] = {.lex_state = 444},
  [311] = {.lex_state = 250},
  [312] = {.lex_state = 250},
  [313] = {.lex_state = 284},
  [314] = {.lex_state = 250},
  [315] = {.lex_state = 250},
  [316] = {.lex_state = 458},
  [317] = {.lex_state = 250},
  [318] = {.lex_state = 458},
  [319] = {.lex_state = 444},
  [320] = {.lex_state = 458},
  [321] = {.lex_state = 458},
  [322] = {.lex_state = 250},
  [323] = {.lex_state = 250},
  [324] = {.lex_state = 250},
  [325] = {.lex_state = 444},
  [326] = {.lex_state = 468},
  [327] = {.lex_state = 468},
  [328] = {.lex_state = 492},
  [329] = {.lex_state = 477},
  [330] = {.lex_state = 468},
  [331] = {.lex_state = 468},
  [332] = {.lex_state = 284},
  [333] = {.lex_state = 468},
  [334] = {.lex_state = 444},
  [335] = {.lex_state = 444},
  [336] = {.lex_state = 444},
  [337] = {.lex_state = 444},
  [338] = {.lex_state = 444},
  [339] = {.lex_state = 444},
  [340] = {.lex_state = 444},
  [341] = {.lex_state = 444},
  [342] = {.lex_state = 444},
  [343] = {.lex_state = 444},
  [344] = {.lex_state = 444},
  [345] = {.lex_state = 444},
  [346] = {.lex_state = 444},
  [347] = {.lex_state = 284},
  [348] = {.lex_state = 480},
  [349] = {.lex_state = 444},
  [350] = {.lex_state = 284},
  [351] = {.lex_state = 284},
  [352] = {.lex_state = 284},
  [353] = {.lex_state = 250},
  [354] = {.lex_state = 444},
  [355] = {.lex_state = 444},
  [356] = {.lex_state = 284},
  [357] = {.lex_state = 284},
  [358] = {.lex_state = 444},
  [359] = {.lex_state = 478},
  [360] = {.lex_state = 284},
  [361] = {.lex_state = 444},
  [362] = {.lex_state = 444},
  [363] = {.lex_state = 444},
  [364] = {.lex_state = 488},
  [365] = {.lex_state = 488},
  [366] = {.lex_state = 284},
  [367] = {.lex_state = 444},
  [368] = {.lex_state = 483},
  [369] = {.lex_state = 284},
  [370] = {.lex_state = 284},
  [371] = {.lex_state = 284},
  [372] = {.lex_state = 444},
  [373] = {.lex_state = 250},
  [374] = {.lex_state = 284},
  [375] = {.lex_state = 250},
  [376] = {.lex_state = 480},
  [377] = {.lex_state = 444},
  [378] = {.lex_state = 284},
  [379] = {.lex_state = 284},
  [380] = {.lex_state = 444},
  [381] = {.lex_state = 284},
  [382] = {.lex_state = 250},
  [383] = {.lex_state = 250},
  [384] = {.lex_state = 444},
  [385] = {.lex_state = 444},
  [386] = {.lex_state = 468},
  [387] = {.lex_state = 468},
  [388] = {.lex_state = 444},
  [389] = {.lex_state = 446},
  [390] = {.lex_state = 284},
  [391] = {.lex_state = 250},
  [392] = {.lex_state = 250},
  [393] = {.lex_state = 446},
  [394] = {.lex_state = 475},
  [395] = {.lex_state = 468},
  [396] = {.lex_state = 284},
  [397] = {.lex_state = 250},
  [398] = {.lex_state = 475},
  [399] = {.lex_state = 284},
  [400] = {.lex_state = 475},
  [401] = {.lex_state = 475},
  [402] = {.lex_state = 250},
  [403] = {.lex_state = 250},
  [404] = {.lex_state = 284},
  [405] = {.lex_state = 250},
  [406] = {.lex_state = 250},
  [407] = {.lex_state = 458},
  [408] = {.lex_state = 458},
  [409] = {.lex_state = 444},
  [410] = {.lex_state = 458},
  [411] = {.lex_state = 458},
  [412] = {.lex_state = 463},
  [413] = {.lex_state = 250},
  [414] = {.lex_state = 463},
  [415] = {.lex_state = 444},
  [416] = {.lex_state = 250},
  [417] = {.lex_state = 250},
  [418] = {.lex_state = 284},
  [419] = {.lex_state = 284},
  [420] = {.lex_state = 489},
  [421] = {.lex_state = 284},
  [422] = {.lex_state = 489},
  [423] = {.lex_state = 284},
  [424] = {.lex_state = 489},
  [425] = {.lex_state = 493},
  [426] = {.lex_state = 493},
  [427] = {.lex_state = 284},
  [428] = {.lex_state = 284},
  [429] = {.lex_state = 284},
  [430] = {.lex_state = 284},
  [431] = {.lex_state = 284},
  [432] = {.lex_state = 284},
  [433] = {.lex_state = 250},
  [434] = {.lex_state = 284},
  [435] = {.lex_state = 458},
  [436] = {.lex_state = 250},
  [437] = {.lex_state = 444},
  [438] = {.lex_state = 284},
  [439] = {.lex_state = 284},
  [440] = {.lex_state = 446},
  [441] = {.lex_state = 444},
  [442] = {.lex_state = 495},
  [443] = {.lex_state = 458},
  [444] = {.lex_state = 250},
  [445] = {.lex_state = 458},
  [446] = {.lex_state = 458},
  [447] = {.lex_state = 454},
  [448] = {.lex_state = 444},
  [449] = {.lex_state = 444},
  [450] = {.lex_state = 284},
  [451] = {.lex_state = 284},
  [452] = {.lex_state = 250},
  [453] = {.lex_state = 458},
  [454] = {.lex_state = 477},
  [455] = {.lex_state = 444},
  [456] = {.lex_state = 284},
  [457] = {.lex_state = 284},
  [458] = {.lex_state = 284},
  [459] = {.lex_state = 444},
  [460] = {.lex_state = 250},
  [461] = {.lex_state = 250},
  [462] = {.lex_state = 250},
  [463] = {.lex_state = 284},
  [464] = {.lex_state = 284},
  [465] = {.lex_state = 284},
  [466] = {.lex_state = 444},
  [467] = {.lex_state = 250},
  [468] = {.lex_state = 458},
  [469] = {.lex_state = 250},
  [470] = {.lex_state = 468},
  [471] = {.lex_state = 444},
  [472] = {.lex_state = 468},
  [473] = {.lex_state = 444},
  [474] = {.lex_state = 468},
  [475] = {.lex_state = 492},
  [476] = {.lex_state = 477},
  [477] = {.lex_state = 468},
  [478] = {.lex_state = 284},
  [479] = {.lex_state = 284},
  [480] = {.lex_state = 284},
  [481] = {.lex_state = 284},
  [482] = {.lex_state = 284},
  [483] = {.lex_state = 284},
  [484] = {.lex_state = 284},
  [485] = {.lex_state = 284},
  [486] = {.lex_state = 284},
  [487] = {.lex_state = 284},
  [488] = {.lex_state = 284},
  [489] = {.lex_state = 464},
  [490] = {.lex_state = 284},
  [491] = {.lex_state = 250},
  [492] = {.lex_state = 250},
  [493] = {.lex_state = 464},
  [494] = {.lex_state = 284},
  [495] = {.lex_state = 284},
  [496] = {.lex_state = 284},
  [497] = {.lex_state = 284},
  [498] = {.lex_state = 284},
  [499] = {.lex_state = 284},
  [500] = {.lex_state = 444},
  [501] = {.lex_state = 444},
  [502] = {.lex_state = 444},
  [503] = {.lex_state = 284},
  [504] = {.lex_state = 284},
  [505] = {.lex_state = 444},
  [506] = {.lex_state = 284},
  [507] = {.lex_state = 284},
  [508] = {.lex_state = 444},
  [509] = {.lex_state = 478},
  [510] = {.lex_state = 444},
  [511] = {.lex_state = 444},
  [512] = {.lex_state = 444},
  [513] = {.lex_state = 284},
  [514] = {.lex_state = 480},
  [515] = {.lex_state = 444},
  [516] = {.lex_state = 458},
  [517] = {.lex_state = 284},
  [518] = {.lex_state = 284},
  [519] = {.lex_state = 250},
  [520] = {.lex_state = 284},
  [521] = {.lex_state = 284},
  [522] = {.lex_state = 284},
  [523] = {.lex_state = 284},
  [524] = {.lex_state = 284},
  [525] = {.lex_state = 250},
  [526] = {.lex_state = 250},
  [527] = {.lex_state = 458},
  [528] = {.lex_state = 284},
  [529] = {.lex_state = 250},
  [530] = {.lex_state = 250},
  [531] = {.lex_state = 458},
  [532] = {.lex_state = 284},
  [533] = {.lex_state = 250},
  [534] = {.lex_state = 444},
  [535] = {.lex_state = 444},
  [536] = {.lex_state = 468},
  [537] = {.lex_state = 444},
  [538] = {.lex_state = 446},
  [539] = {.lex_state = 446},
  [540] = {.lex_state = 475},
  [541] = {.lex_state = 475},
  [542] = {.lex_state = 475},
  [543] = {.lex_state = 250},
  [544] = {.lex_state = 284},
  [545] = {.lex_state = 444},
  [546] = {.lex_state = 250},
  [547] = {.lex_state = 458},
  [548] = {.lex_state = 444},
  [549] = {.lex_state = 250},
  [550] = {.lex_state = 284},
  [551] = {.lex_state = 498},
  [552] = {.lex_state = 250},
  [553] = {.lex_state = 284},
  [554] = {.lex_state = 284},
  [555] = {.lex_state = 284},
  [556] = {.lex_state = 284},
  [557] = {.lex_state = 284},
  [558] = {.lex_state = 284},
  [559] = {.lex_state = 284},
  [560] = {.lex_state = 284},
  [561] = {.lex_state = 498},
  [562] = {.lex_state = 498},
  [563] = {.lex_state = 284},
  [564] = {.lex_state = 250},
  [565] = {.lex_state = 444},
  [566] = {.lex_state = 250},
  [567] = {.lex_state = 284},
  [568] = {.lex_state = 444},
  [569] = {.lex_state = 489},
  [570] = {.lex_state = 284},
  [571] = {.lex_state = 444},
  [572] = {.lex_state = 444},
  [573] = {.lex_state = 444},
  [574] = {.lex_state = 284},
  [575] = {.lex_state = 284},
  [576] = {.lex_state = 444},
  [577] = {.lex_state = 444},
  [578] = {.lex_state = 250},
  [579] = {.lex_state = 250},
  [580] = {.lex_state = 458},
  [581] = {.lex_state = 250},
  [582] = {.lex_state = 458},
  [583] = {.lex_state = 284},
  [584] = {.lex_state = 284},
  [585] = {.lex_state = 250},
  [586] = {.lex_state = 458},
  [587] = {.lex_state = 458},
  [588] = {.lex_state = 284},
  [589] = {.lex_state = 250},
  [590] = {.lex_state = 458},
  [591] = {.lex_state = 250},
  [592] = {.lex_state = 446},
  [593] = {.lex_state = 444},
  [594] = {.lex_state = 458},
  [595] = {.lex_state = 284},
  [596] = {.lex_state = 284},
  [597] = {.lex_state = 284},
  [598] = {.lex_state = 284},
  [599] = {.lex_state = 477},
  [600] = {.lex_state = 284},
  [601] = {.lex_state = 284},
  [602] = {.lex_state = 284},
  [603] = {.lex_state = 284},
  [604] = {.lex_state = 284},
  [605] = {.lex_state = 488},
  [606] = {.lex_state = 284},
  [607] = {.lex_state = 284},
  [608] = {.lex_state = 284},
  [609] = {.lex_state = 284},
  [610] = {.lex_state = 284},
  [611] = {.lex_state = 284},
  [612] = {.lex_state = 284},
  [613] = {.lex_state = 284},
  [614] = {.lex_state = 250},
  [615] = {.lex_state = 250},
  [616] = {.lex_state = 464},
  [617] = {.lex_state = 458},
  [618] = {.lex_state = 444},
  [619] = {.lex_state = 284},
  [620] = {.lex_state = 284},
  [621] = {.lex_state = 250},
  [622] = {.lex_state = 458},
  [623] = {.lex_state = 468},
  [624] = {.lex_state = 284},
  [625] = {.lex_state = 444},
  [626] = {.lex_state = 284},
  [627] = {.lex_state = 444},
  [628] = {.lex_state = 284},
  [629] = {.lex_state = 250},
  [630] = {.lex_state = 444},
  [631] = {.lex_state = 250},
  [632] = {.lex_state = 458},
  [633] = {.lex_state = 444},
  [634] = {.lex_state = 284},
  [635] = {.lex_state = 284},
  [636] = {.lex_state = 468},
  [637] = {.lex_state = 468},
  [638] = {.lex_state = 444},
  [639] = {.lex_state = 468},
  [640] = {.lex_state = 468},
  [641] = {.lex_state = 444},
  [642] = {.lex_state = 444},
  [643] = {.lex_state = 464},
  [644] = {.lex_state = 464},
  [645] = {.lex_state = 284},
  [646] = {.lex_state = 284},
  [647] = {.lex_state = 284},
  [648] = {.lex_state = 284},
  [649] = {.lex_state = 444},
  [650] = {.lex_state = 444},
  [651] = {.lex_state = 444},
  [652] = {.lex_state = 444},
  [653] = {.lex_state = 284},
  [654] = {.lex_state = 284},
  [655] = {.lex_state = 444},
  [656] = {.lex_state = 444},
  [657] = {.lex_state = 444},
  [658] = {.lex_state = 444},
  [659] = {.lex_state = 444},
  [660] = {.lex_state = 444},
  [661] = {.lex_state = 504},
  [662] = {.lex_state = 444},
  [663] = {.lex_state = 488},
  [664] = {.lex_state = 284},
  [665] = {.lex_state = 250},
  [666] = {.lex_state = 250},
  [667] = {.lex_state = 488},
  [668] = {.lex_state = 284},
  [669] = {.lex_state = 458},
  [670] = {.lex_state = 284},
  [671] = {.lex_state = 250},
  [672] = {.lex_state = 284},
  [673] = {.lex_state = 284},
  [674] = {.lex_state = 284},
  [675] = {.lex_state = 458},
  [676] = {.lex_state = 458},
  [677] = {.lex_state = 250},
  [678] = {.lex_state = 250},
  [679] = {.lex_state = 468},
  [680] = {.lex_state = 250},
  [681] = {.lex_state = 284},
  [682] = {.lex_state = 444},
  [683] = {.lex_state = 444},
  [684] = {.lex_state = 284},
  [685] = {.lex_state = 250},
  [686] = {.lex_state = 444},
  [687] = {.lex_state = 284},
  [688] = {.lex_state = 250},
  [689] = {.lex_state = 284},
  [690] = {.lex_state = 284},
  [691] = {.lex_state = 284},
  [692] = {.lex_state = 284},
  [693] = {.lex_state = 284},
  [694] = {.lex_state = 284},
  [695] = {.lex_state = 284},
  [696] = {.lex_state = 498},
  [697] = {.lex_state = 498},
  [698] = {.lex_state = 250},
  [699] = {.lex_state = 444},
  [700] = {.lex_state = 250},
  [701] = {.lex_state = 250},
  [702] = {.lex_state = 250},
  [703] = {.lex_state = 250},
  [704] = {.lex_state = 250},
  [705] = {.lex_state = 250},
  [706] = {.lex_state = 250},
  [707] = {.lex_state = 250},
  [708] = {.lex_state = 250},
  [709] = {.lex_state = 284},
  [710] = {.lex_state = 284},
  [711] = {.lex_state = 284},
  [712] = {.lex_state = 493},
  [713] = {.lex_state = 284},
  [714] = {.lex_state = 284},
  [715] = {.lex_state = 444},
  [716] = {.lex_state = 284},
  [717] = {.lex_state = 284},
  [718] = {.lex_state = 458},
  [719] = {.lex_state = 458},
  [720] = {.lex_state = 458},
  [721] = {.lex_state = 458},
  [722] = {.lex_state = 284},
  [723] = {.lex_state = 250},
  [724] = {.lex_state = 458},
  [725] = {.lex_state = 458},
  [726] = {.lex_state = 458},
  [727] = {.lex_state = 250},
  [728] = {.lex_state = 458},
  [729] = {.lex_state = 284},
  [730] = {.lex_state = 250},
  [731] = {.lex_state = 284},
  [732] = {.lex_state = 250},
  [733] = {.lex_state = 284},
  [734] = {.lex_state = 284},
  [735] = {.lex_state = 444},
  [736] = {.lex_state = 444},
  [737] = {.lex_state = 444},
  [738] = {.lex_state = 284},
  [739] = {.lex_state = 444},
  [740] = {.lex_state = 284},
  [741] = {.lex_state = 284},
  [742] = {.lex_state = 250},
  [743] = {.lex_state = 464},
  [744] = {.lex_state = 250},
  [745] = {.lex_state = 444},
  [746] = {.lex_state = 284},
  [747] = {.lex_state = 284},
  [748] = {.lex_state = 284},
  [749] = {.lex_state = 284},
  [750] = {.lex_state = 284},
  [751] = {.lex_state = 505},
  [752] = {.lex_state = 458},
  [753] = {.lex_state = 250},
  [754] = {.lex_state = 508},
  [755] = {.lex_state = 444},
  [756] = {.lex_state = 508},
  [757] = {.lex_state = 284},
  [758] = {.lex_state = 444},
  [759] = {.lex_state = 250},
  [760] = {.lex_state = 284},
  [761] = {.lex_state = 284},
  [762] = {.lex_state = 458},
  [763] = {.lex_state = 284},
  [764] = {.lex_state = 468},
  [765] = {.lex_state = 284},
  [766] = {.lex_state = 444},
  [767] = {.lex_state = 284},
  [768] = {.lex_state = 250},
  [769] = {.lex_state = 284},
  [770] = {.lex_state = 444},
  [771] = {.lex_state = 458},
  [772] = {.lex_state = 468},
  [773] = {.lex_state = 468},
  [774] = {.lex_state = 284},
  [775] = {.lex_state = 284},
  [776] = {.lex_state = 284},
  [777] = {.lex_state = 284},
  [778] = {.lex_state = 444},
  [779] = {.lex_state = 444},
  [780] = {.lex_state = 444},
  [781] = {.lex_state = 444},
  [782] = {.lex_state = 284},
  [783] = {.lex_state = 284},
  [784] = {.lex_state = 284},
  [785] = {.lex_state = 284},
  [786] = {.lex_state = 284},
  [787] = {.lex_state = 250},
  [788] = {.lex_state = 250},
  [789] = {.lex_state = 454},
  [790] = {.lex_state = 250},
  [791] = {.lex_state = 444},
  [792] = {.lex_state = 444},
  [793] = {.lex_state = 460},
  [794] = {.lex_state = 444},
  [795] = {.lex_state = 284},
  [796] = {.lex_state = 284},
  [797] = {.lex_state = 284},
  [798] = {.lex_state = 284},
  [799] = {.lex_state = 284},
  [800] = {.lex_state = 284},
  [801] = {.lex_state = 284},
  [802] = {.lex_state = 284},
  [803] = {.lex_state = 284},
  [804] = {.lex_state = 250},
  [805] = {.lex_state = 458},
  [806] = {.lex_state = 284},
  [807] = {.lex_state = 488},
  [808] = {.lex_state = 488},
  [809] = {.lex_state = 284},
  [810] = {.lex_state = 250},
  [811] = {.lex_state = 284},
  [812] = {.lex_state = 284},
  [813] = {.lex_state = 250},
  [814] = {.lex_state = 250},
  [815] = {.lex_state = 284},
  [816] = {.lex_state = 250},
  [817] = {.lex_state = 444},
  [818] = {.lex_state = 444},
  [819] = {.lex_state = 444},
  [820] = {.lex_state = 444},
  [821] = {.lex_state = 444},
  [822] = {.lex_state = 444},
  [823] = {.lex_state = 284},
  [824] = {.lex_state = 444},
  [825] = {.lex_state = 444},
  [826] = {.lex_state = 284},
  [827] = {.lex_state = 250},
  [828] = {.lex_state = 250},
  [829] = {.lex_state = 250},
  [830] = {.lex_state = 444},
  [831] = {.lex_state = 250},
  [832] = {.lex_state = 250},
  [833] = {.lex_state = 250},
  [834] = {.lex_state = 250},
  [835] = {.lex_state = 250},
  [836] = {.lex_state = 250},
  [837] = {.lex_state = 250},
  [838] = {.lex_state = 250},
  [839] = {.lex_state = 284},
  [840] = {.lex_state = 284},
  [841] = {.lex_state = 284},
  [842] = {.lex_state = 284},
  [843] = {.lex_state = 284},
  [844] = {.lex_state = 284},
  [845] = {.lex_state = 284},
  [846] = {.lex_state = 498},
  [847] = {.lex_state = 498},
  [848] = {.lex_state = 498},
  [849] = {.lex_state = 284},
  [850] = {.lex_state = 284},
  [851] = {.lex_state = 284},
  [852] = {.lex_state = 444},
  [853] = {.lex_state = 284},
  [854] = {.lex_state = 458},
  [855] = {.lex_state = 458},
  [856] = {.lex_state = 458},
  [857] = {.lex_state = 250},
  [858] = {.lex_state = 458},
  [859] = {.lex_state = 458},
  [860] = {.lex_state = 458},
  [861] = {.lex_state = 284},
  [862] = {.lex_state = 284},
  [863] = {.lex_state = 284},
  [864] = {.lex_state = 250},
  [865] = {.lex_state = 284},
  [866] = {.lex_state = 284},
  [867] = {.lex_state = 284},
  [868] = {.lex_state = 250},
  [869] = {.lex_state = 284},
  [870] = {.lex_state = 284},
  [871] = {.lex_state = 444},
  [872] = {.lex_state = 444},
  [873] = {.lex_state = 250},
  [874] = {.lex_state = 284},
  [875] = {.lex_state = 250},
  [876] = {.lex_state = 284},
  [877] = {.lex_state = 284},
  [878] = {.lex_state = 250},
  [879] = {.lex_state = 444},
  [880] = {.lex_state = 250},
  [881] = {.lex_state = 284},
  [882] = {.lex_state = 444},
  [883] = {.lex_state = 284},
  [884] = {.lex_state = 444},
  [885] = {.lex_state = 444},
  [886] = {.lex_state = 444},
  [887] = {.lex_state = 284},
  [888] = {.lex_state = 284},
  [889] = {.lex_state = 284},
  [890] = {.lex_state = 444},
  [891] = {.lex_state = 284},
  [892] = {.lex_state = 284},
  [893] = {.lex_state = 284},
  [894] = {.lex_state = 444},
  [895] = {.lex_state = 284},
  [896] = {.lex_state = 284},
  [897] = {.lex_state = 444},
  [898] = {.lex_state = 458},
  [899] = {.lex_state = 477},
  [900] = {.lex_state = 250},
  [901] = {.lex_state = 444},
  [902] = {.lex_state = 284},
  [903] = {.lex_state = 510},
  [904] = {.lex_state = 284},
  [905] = {.lex_state = 284},
  [906] = {.lex_state = 284},
  [907] = {.lex_state = 284},
  [908] = {.lex_state = 250},
  [909] = {.lex_state = 458},
  [910] = {.lex_state = 284},
  [911] = {.lex_state = 250},
  [912] = {.lex_state = 284},
  [913] = {.lex_state = 284},
  [914] = {.lex_state = 284},
  [915] = {.lex_state = 468},
  [916] = {.lex_state = 284},
  [917] = {.lex_state = 444},
  [918] = {.lex_state = 444},
  [919] = {.lex_state = 444},
  [920] = {.lex_state = 250},
  [921] = {.lex_state = 284},
  [922] = {.lex_state = 444},
  [923] = {.lex_state = 444},
  [924] = {.lex_state = 250},
  [925] = {.lex_state = 284},
  [926] = {.lex_state = 444},
  [927] = {.lex_state = 284},
  [928] = {.lex_state = 284},
  [929] = {.lex_state = 284},
  [930] = {.lex_state = 284},
  [931] = {.lex_state = 284},
  [932] = {.lex_state = 284},
  [933] = {.lex_state = 284},
  [934] = {.lex_state = 250},
  [935] = {.lex_state = 444},
  [936] = {.lex_state = 454},
  [937] = {.lex_state = 444},
  [938] = {.lex_state = 284},
  [939] = {.lex_state = 444},
  [940] = {.lex_state = 284},
  [941] = {.lex_state = 250},
  [942] = {.lex_state = 458},
  [943] = {.lex_state = 250},
  [944] = {.lex_state = 284},
  [945] = {.lex_state = 284},
  [946] = {.lex_state = 284},
  [947] = {.lex_state = 284},
  [948] = {.lex_state = 284},
  [949] = {.lex_state = 284},
  [950] = {.lex_state = 284},
  [951] = {.lex_state = 284},
  [952] = {.lex_state = 444},
  [953] = {.lex_state = 444},
  [954] = {.lex_state = 444},
  [955] = {.lex_state = 444},
  [956] = {.lex_state = 444},
  [957] = {.lex_state = 444},
  [958] = {.lex_state = 284},
  [959] = {.lex_state = 250},
  [960] = {.lex_state = 250},
  [961] = {.lex_state = 284},
  [962] = {.lex_state = 284},
  [963] = {.lex_state = 284},
  [964] = {.lex_state = 284},
  [965] = {.lex_state = 284},
  [966] = {.lex_state = 284},
  [967] = {.lex_state = 498},
  [968] = {.lex_state = 498},
  [969] = {.lex_state = 444},
  [970] = {.lex_state = 284},
  [971] = {.lex_state = 284},
  [972] = {.lex_state = 444},
  [973] = {.lex_state = 458},
  [974] = {.lex_state = 458},
  [975] = {.lex_state = 284},
  [976] = {.lex_state = 284},
  [977] = {.lex_state = 444},
  [978] = {.lex_state = 250},
  [979] = {.lex_state = 284},
  [980] = {.lex_state = 284},
  [981] = {.lex_state = 284},
  [982] = {.lex_state = 444},
  [983] = {.lex_state = 444},
  [984] = {.lex_state = 250},
  [985] = {.lex_state = 444},
  [986] = {.lex_state = 444},
  [987] = {.lex_state = 284},
  [988] = {.lex_state = 444},
  [989] = {.lex_state = 284},
  [990] = {.lex_state = 284},
  [991] = {.lex_state = 250},
  [992] = {.lex_state = 284},
  [993] = {.lex_state = 284},
  [994] = {.lex_state = 250},
  [995] = {.lex_state = 444},
  [996] = {.lex_state = 444},
  [997] = {.lex_state = 444},
  [998] = {.lex_state = 444},
  [999] = {.lex_state = 444},
  [1000] = {.lex_state = 444},
  [1001] = {.lex_state = 284},
  [1002] = {.lex_state = 444},
  [1003] = {.lex_state = 284},
  [1004] = {.lex_state = 284},
  [1005] = {.lex_state = 444},
  [1006] = {.lex_state = 444},
  [1007] = {.lex_state = 444},
  [1008] = {.lex_state = 250},
  [1009] = {.lex_state = 468},
  [1010] = {.lex_state = 444},
  [1011] = {.lex_state = 250},
  [1012] = {.lex_state = 284},
  [1013] = {.lex_state = 284},
  [1014] = {.lex_state = 250},
  [1015] = {.lex_state = 458},
  [1016] = {.lex_state = 444},
  [1017] = {.lex_state = 284},
  [1018] = {.lex_state = 250},
  [1019] = {.lex_state = 250},
  [1020] = {.lex_state = 250},
  [1021] = {.lex_state = 284},
  [1022] = {.lex_state = 284},
  [1023] = {.lex_state = 284},
  [1024] = {.lex_state = 284},
  [1025] = {.lex_state = 284},
  [1026] = {.lex_state = 444},
  [1027] = {.lex_state = 458},
  [1028] = {.lex_state = 284},
  [1029] = {.lex_state = 250},
  [1030] = {.lex_state = 284},
  [1031] = {.lex_state = 284},
  [1032] = {.lex_state = 250},
  [1033] = {.lex_state = 444},
  [1034] = {.lex_state = 284},
  [1035] = {.lex_state = 444},
  [1036] = {.lex_state = 284},
  [1037] = {.lex_state = 284},
  [1038] = {.lex_state = 284},
  [1039] = {.lex_state = 284},
  [1040] = {.lex_state = 444},
  [1041] = {.lex_state = 284},
  [1042] = {.lex_state = 284},
  [1043] = {.lex_state = 284},
  [1044] = {.lex_state = 284},
  [1045] = {.lex_state = 284},
  [1046] = {.lex_state = 284},
  [1047] = {.lex_state = 284},
  [1048] = {.lex_state = 284},
  [1049] = {.lex_state = 498},
  [1050] = {.lex_state = 498},
  [1051] = {.lex_state = 458},
  [1052] = {.lex_state = 284},
  [1053] = {.lex_state = 284},
  [1054] = {.lex_state = 444},
  [1055] = {.lex_state = 284},
  [1056] = {.lex_state = 284},
  [1057] = {.lex_state = 284},
  [1058] = {.lex_state = 284},
  [1059] = {.lex_state = 284},
  [1060] = {.lex_state = 284},
  [1061] = {.lex_state = 250},
  [1062] = {.lex_state = 444},
  [1063] = {.lex_state = 284},
  [1064] = {.lex_state = 284},
  [1065] = {.lex_state = 284},
  [1066] = {.lex_state = 444},
  [1067] = {.lex_state = 284},
  [1068] = {.lex_state = 284},
  [1069] = {.lex_state = 284},
  [1070] = {.lex_state = 444},
  [1071] = {.lex_state = 284},
  [1072] = {.lex_state = 444},
  [1073] = {.lex_state = 284},
  [1074] = {.lex_state = 250},
  [1075] = {.lex_state = 250},
  [1076] = {.lex_state = 284},
  [1077] = {.lex_state = 284},
  [1078] = {.lex_state = 250},
  [1079] = {.lex_state = 250},
  [1080] = {.lex_state = 284},
  [1081] = {.lex_state = 250},
  [1082] = {.lex_state = 284},
  [1083] = {.lex_state = 284},
  [1084] = {.lex_state = 284},
  [1085] = {.lex_state = 284},
  [1086] = {.lex_state = 284},
  [1087] = {.lex_state = 284},
  [1088] = {.lex_state = 284},
  [1089] = {.lex_state = 284},
  [1090] = {.lex_state = 444},
  [1091] = {.lex_state = 284},
  [1092] = {.lex_state = 444},
  [1093] = {.lex_state = 284},
  [1094] = {.lex_state = 250},
  [1095] = {.lex_state = 444},
  [1096] = {.lex_state = 510},
  [1097] = {.lex_state = 468},
  [1098] = {.lex_state = 250},
  [1099] = {.lex_state = 444},
  [1100] = {.lex_state = 458},
  [1101] = {.lex_state = 250},
  [1102] = {.lex_state = 284},
  [1103] = {.lex_state = 458},
  [1104] = {.lex_state = 284},
  [1105] = {.lex_state = 284},
  [1106] = {.lex_state = 284},
  [1107] = {.lex_state = 284},
  [1108] = {.lex_state = 284},
  [1109] = {.lex_state = 444},
  [1110] = {.lex_state = 284},
  [1111] = {.lex_state = 284},
  [1112] = {.lex_state = 458},
  [1113] = {.lex_state = 250},
  [1114] = {.lex_state = 284},
  [1115] = {.lex_state = 284},
  [1116] = {.lex_state = 250},
  [1117] = {.lex_state = 284},
  [1118] = {.lex_state = 250},
  [1119] = {.lex_state = 284},
  [1120] = {.lex_state = 284},
  [1121] = {.lex_state = 250},
  [1122] = {.lex_state = 444},
  [1123] = {.lex_state = 250},
  [1124] = {.lex_state = 250},
  [1125] = {.lex_state = 250},
  [1126] = {.lex_state = 250},
  [1127] = {.lex_state = 250},
  [1128] = {.lex_state = 250},
  [1129] = {.lex_state = 250},
  [1130] = {.lex_state = 250},
  [1131] = {.lex_state = 458},
  [1132] = {.lex_state = 284},
  [1133] = {.lex_state = 284},
  [1134] = {.lex_state = 444},
  [1135] = {.lex_state = 284},
  [1136] = {.lex_state = 284},
  [1137] = {.lex_state = 284},
  [1138] = {.lex_state = 284},
  [1139] = {.lex_state = 284},
  [1140] = {.lex_state = 444},
  [1141] = {.lex_state = 250},
  [1142] = {.lex_state = 284},
  [1143] = {.lex_state = 444},
  [1144] = {.lex_state = 444},
  [1145] = {.lex_state = 250},
  [1146] = {.lex_state = 284},
  [1147] = {.lex_state = 284},
  [1148] = {.lex_state = 250},
  [1149] = {.lex_state = 510},
  [1150] = {.lex_state = 284},
  [1151] = {.lex_state = 250},
  [1152] = {.lex_state = 250},
  [1153] = {.lex_state = 284},
  [1154] = {.lex_state = 284},
  [1155] = {.lex_state = 458},
  [1156] = {.lex_state = 284},
  [1157] = {.lex_state = 284},
  [1158] = {.lex_state = 284},
  [1159] = {.lex_state = 284},
  [1160] = {.lex_state = 284},
  [1161] = {.lex_state = 284},
  [1162] = {.lex_state = 284},
  [1163] = {.lex_state = 284},
  [1164] = {.lex_state = 284},
  [1165] = {.lex_state = 284},
  [1166] = {.lex_state = 250},
  [1167] = {.lex_state = 284},
  [1168] = {.lex_state = 284},
  [1169] = {.lex_state = 284},
  [1170] = {.lex_state = 284},
  [1171] = {.lex_state = 284},
  [1172] = {.lex_state = 284},
  [1173] = {.lex_state = 498},
  [1174] = {.lex_state = 498},
  [1175] = {.lex_state = 458},
  [1176] = {.lex_state = 284},
  [1177] = {.lex_state = 284},
  [1178] = {.lex_state = 284},
  [1179] = {.lex_state = 250},
  [1180] = {.lex_state = 444},
  [1181] = {.lex_state = 284},
  [1182] = {.lex_state = 284},
  [1183] = {.lex_state = 250},
  [1184] = {.lex_state = 444},
  [1185] = {.lex_state = 284},
  [1186] = {.lex_state = 284},
  [1187] = {.lex_state = 250},
  [1188] = {.lex_state = 284},
  [1189] = {.lex_state = 284},
  [1190] = {.lex_state = 284},
  [1191] = {.lex_state = 284},
  [1192] = {.lex_state = 284},
  [1193] = {.lex_state = 284},
  [1194] = {.lex_state = 444},
  [1195] = {.lex_state = 284},
  [1196] = {.lex_state = 250},
  [1197] = {.lex_state = 284},
  [1198] = {.lex_state = 250},
  [1199] = {.lex_state = 284},
  [1200] = {.lex_state = 284},
  [1201] = {.lex_state = 284},
  [1202] = {.lex_state = 284},
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
    [anon_sym_void] = ACTIONS(3),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_open] = ACTIONS(42),
    [anon_sym_module] = ACTIONS(44),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_package] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [sym_integral_type] = STATE(58),
    [sym_floating_point_type] = STATE(58),
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
    [anon_sym_boolean] = ACTIONS(80),
    [anon_sym_byte] = ACTIONS(82),
    [anon_sym_short] = ACTIONS(82),
    [anon_sym_int] = ACTIONS(82),
    [anon_sym_long] = ACTIONS(82),
    [anon_sym_char] = ACTIONS(82),
    [anon_sym_float] = ACTIONS(84),
    [anon_sym_double] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_static] = ACTIONS(88),
    [anon_sym_public] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_abstract] = ACTIONS(88),
    [anon_sym_final] = ACTIONS(88),
    [anon_sym_strictfp] = ACTIONS(88),
    [anon_sym_default] = ACTIONS(88),
    [anon_sym_synchronized] = ACTIONS(88),
    [anon_sym_native] = ACTIONS(88),
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
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(58),
  },
  [12] = {
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(100),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(58),
  },
  [13] = {
    [anon_sym_DOT] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(104),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(58),
  },
  [14] = {
    [sym_package_or_type_name] = STATE(82),
    [anon_sym_interface] = ACTIONS(106),
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(58),
  },
  [15] = {
    [anon_sym_module] = ACTIONS(110),
    [sym_comment] = ACTIONS(58),
  },
  [16] = {
    [sym_module_identifier] = STATE(85),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(58),
  },
  [17] = {
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_boolean] = ACTIONS(116),
    [anon_sym_byte] = ACTIONS(116),
    [anon_sym_short] = ACTIONS(116),
    [anon_sym_int] = ACTIONS(116),
    [anon_sym_long] = ACTIONS(116),
    [anon_sym_char] = ACTIONS(116),
    [anon_sym_float] = ACTIONS(116),
    [anon_sym_double] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(114),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_class] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_abstract] = ACTIONS(116),
    [anon_sym_final] = ACTIONS(116),
    [anon_sym_strictfp] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_synchronized] = ACTIONS(116),
    [anon_sym_native] = ACTIONS(116),
    [anon_sym_interface] = ACTIONS(116),
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
    [sym_identifier] = ACTIONS(108),
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
    [anon_sym_default] = ACTIONS(140),
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
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_boolean] = ACTIONS(116),
    [anon_sym_byte] = ACTIONS(116),
    [anon_sym_short] = ACTIONS(116),
    [anon_sym_int] = ACTIONS(116),
    [anon_sym_long] = ACTIONS(116),
    [anon_sym_char] = ACTIONS(116),
    [anon_sym_float] = ACTIONS(116),
    [anon_sym_double] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_open] = ACTIONS(181),
    [anon_sym_module] = ACTIONS(181),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_package] = ACTIONS(181),
    [anon_sym_class] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_abstract] = ACTIONS(116),
    [anon_sym_final] = ACTIONS(116),
    [anon_sym_strictfp] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_synchronized] = ACTIONS(116),
    [anon_sym_native] = ACTIONS(116),
    [anon_sym_interface] = ACTIONS(116),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(58),
  },
  [31] = {
    [sym__semicolon] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
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
    [anon_sym_default] = ACTIONS(185),
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
    [anon_sym_RBRACE] = ACTIONS(189),
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
    [anon_sym_default] = ACTIONS(191),
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
    [anon_sym_RBRACE] = ACTIONS(195),
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
    [anon_sym_default] = ACTIONS(197),
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
    [anon_sym_RBRACE] = ACTIONS(201),
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
    [anon_sym_default] = ACTIONS(203),
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
    [anon_sym_RBRACE] = ACTIONS(207),
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
    [anon_sym_default] = ACTIONS(209),
    [anon_sym_synchronized] = ACTIONS(209),
    [anon_sym_native] = ACTIONS(209),
    [anon_sym_interface] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(58),
  },
  [36] = {
    [anon_sym_LT] = ACTIONS(213),
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
    [anon_sym_default] = ACTIONS(215),
    [anon_sym_synchronized] = ACTIONS(215),
    [anon_sym_native] = ACTIONS(215),
    [anon_sym_interface] = ACTIONS(215),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(58),
  },
  [37] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [sym_unann_type] = STATE(106),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_class_or_interface_type_repeat1] = STATE(107),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
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
    [anon_sym_RBRACE] = ACTIONS(223),
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
    [anon_sym_default] = ACTIONS(225),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_open] = ACTIONS(42),
    [anon_sym_module] = ACTIONS(44),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_package] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_package] = ACTIONS(249),
    [sym_comment] = ACTIONS(58),
  },
  [46] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(251),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(253),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_this] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(94),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(58),
  },
  [59] = {
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_this] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(100),
    [sym_identifier] = ACTIONS(287),
    [sym_comment] = ACTIONS(58),
  },
  [60] = {
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_this] = ACTIONS(102),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(104),
    [sym_identifier] = ACTIONS(289),
    [sym_comment] = ACTIONS(58),
  },
  [61] = {
    [sym_package_or_type_name] = STATE(143),
    [sym_identifier] = ACTIONS(291),
    [sym_comment] = ACTIONS(58),
  },
  [62] = {
    [anon_sym_boolean] = ACTIONS(116),
    [anon_sym_byte] = ACTIONS(116),
    [anon_sym_short] = ACTIONS(116),
    [anon_sym_int] = ACTIONS(116),
    [anon_sym_long] = ACTIONS(116),
    [anon_sym_char] = ACTIONS(116),
    [anon_sym_float] = ACTIONS(116),
    [anon_sym_double] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(114),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_abstract] = ACTIONS(116),
    [anon_sym_final] = ACTIONS(116),
    [anon_sym_strictfp] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_synchronized] = ACTIONS(116),
    [anon_sym_native] = ACTIONS(116),
    [sym_identifier] = ACTIONS(118),
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
    [anon_sym_boolean] = ACTIONS(299),
    [anon_sym_byte] = ACTIONS(299),
    [anon_sym_short] = ACTIONS(299),
    [anon_sym_int] = ACTIONS(299),
    [anon_sym_long] = ACTIONS(299),
    [anon_sym_char] = ACTIONS(299),
    [anon_sym_float] = ACTIONS(299),
    [anon_sym_double] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_abstract] = ACTIONS(116),
    [anon_sym_final] = ACTIONS(116),
    [anon_sym_strictfp] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_synchronized] = ACTIONS(116),
    [anon_sym_native] = ACTIONS(116),
    [sym_identifier] = ACTIONS(302),
    [sym_comment] = ACTIONS(58),
  },
  [66] = {
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
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
    [anon_sym_native] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [67] = {
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
    [anon_sym_default] = ACTIONS(215),
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
    [sym_integral_type] = STATE(58),
    [sym_floating_point_type] = STATE(58),
    [sym__annotation] = STATE(158),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [sym_unann_type] = STATE(159),
    [sym_unann_primitive_type] = STATE(69),
    [sym_unann_class_or_interface_type] = STATE(70),
    [sym_unann_array_type] = STATE(71),
    [anon_sym_boolean] = ACTIONS(80),
    [anon_sym_byte] = ACTIONS(82),
    [anon_sym_short] = ACTIONS(82),
    [anon_sym_int] = ACTIONS(82),
    [anon_sym_long] = ACTIONS(82),
    [anon_sym_char] = ACTIONS(82),
    [anon_sym_float] = ACTIONS(84),
    [anon_sym_double] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [76] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(62),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(160),
    [sym_unann_type] = STATE(161),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_static] = ACTIONS(88),
    [anon_sym_public] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_abstract] = ACTIONS(88),
    [anon_sym_final] = ACTIONS(88),
    [anon_sym_strictfp] = ACTIONS(88),
    [anon_sym_default] = ACTIONS(88),
    [anon_sym_synchronized] = ACTIONS(88),
    [anon_sym_native] = ACTIONS(88),
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
    [anon_sym_default] = ACTIONS(335),
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
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_boolean] = ACTIONS(345),
    [anon_sym_byte] = ACTIONS(345),
    [anon_sym_short] = ACTIONS(345),
    [anon_sym_int] = ACTIONS(345),
    [anon_sym_long] = ACTIONS(345),
    [anon_sym_char] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(345),
    [anon_sym_double] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_open] = ACTIONS(345),
    [anon_sym_module] = ACTIONS(345),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_package] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(345),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_synchronized] = ACTIONS(345),
    [anon_sym_native] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(345),
    [sym_identifier] = ACTIONS(347),
    [sym_comment] = ACTIONS(58),
  },
  [83] = {
    [sym_module_identifier] = STATE(165),
    [sym_identifier] = ACTIONS(112),
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
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
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
    [anon_sym_RBRACE] = ACTIONS(383),
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
    [anon_sym_default] = ACTIONS(385),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(158),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [sym_unann_type] = STATE(209),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
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
    [anon_sym_GT] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_COMMA] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(421),
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
    [anon_sym_default] = ACTIONS(423),
    [anon_sym_synchronized] = ACTIONS(423),
    [anon_sym_native] = ACTIONS(423),
    [anon_sym_interface] = ACTIONS(423),
    [sym_identifier] = ACTIONS(425),
    [sym_comment] = ACTIONS(58),
  },
  [117] = {
    [sym_statement] = STATE(223),
    [sym_if_then_statement] = STATE(224),
    [sym__annotation] = STATE(221),
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
    [anon_sym_if] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_synchronized] = ACTIONS(433),
    [anon_sym_native] = ACTIONS(433),
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
    [anon_sym_RBRACE] = ACTIONS(437),
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
    [anon_sym_default] = ACTIONS(439),
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
    [anon_sym_default] = ACTIONS(445),
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
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
    [anon_sym_native] = ACTIONS(185),
    [anon_sym_interface] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [127] = {
    [anon_sym_LT] = ACTIONS(463),
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
    [anon_sym_default] = ACTIONS(465),
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
    [sym_identifier] = ACTIONS(345),
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
    [anon_sym_default] = ACTIONS(335),
    [anon_sym_synchronized] = ACTIONS(335),
    [anon_sym_native] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(58),
  },
  [143] = {
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(501),
    [anon_sym_boolean] = ACTIONS(345),
    [anon_sym_byte] = ACTIONS(345),
    [anon_sym_short] = ACTIONS(345),
    [anon_sym_int] = ACTIONS(345),
    [anon_sym_long] = ACTIONS(345),
    [anon_sym_char] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(345),
    [anon_sym_double] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_synchronized] = ACTIONS(345),
    [anon_sym_native] = ACTIONS(345),
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
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(62),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_static] = ACTIONS(88),
    [anon_sym_public] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_abstract] = ACTIONS(88),
    [anon_sym_final] = ACTIONS(88),
    [anon_sym_strictfp] = ACTIONS(88),
    [anon_sym_default] = ACTIONS(88),
    [anon_sym_synchronized] = ACTIONS(88),
    [anon_sym_native] = ACTIONS(88),
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
    [anon_sym_default] = ACTIONS(465),
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
    [anon_sym_RBRACE] = ACTIONS(563),
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
    [anon_sym_default] = ACTIONS(565),
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
    [anon_sym_RBRACE] = ACTIONS(573),
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
    [anon_sym_default] = ACTIONS(575),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [anon_sym_RBRACE] = ACTIONS(597),
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
    [anon_sym_default] = ACTIONS(599),
    [anon_sym_synchronized] = ACTIONS(599),
    [anon_sym_native] = ACTIONS(599),
    [anon_sym_interface] = ACTIONS(599),
    [sym_identifier] = ACTIONS(601),
    [sym_comment] = ACTIONS(58),
  },
  [182] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [anon_sym_RBRACE] = ACTIONS(607),
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
    [anon_sym_default] = ACTIONS(609),
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
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
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
    [anon_sym_boolean] = ACTIONS(345),
    [anon_sym_byte] = ACTIONS(345),
    [anon_sym_short] = ACTIONS(345),
    [anon_sym_int] = ACTIONS(345),
    [anon_sym_long] = ACTIONS(345),
    [anon_sym_char] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(345),
    [anon_sym_double] = ACTIONS(345),
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
    [sym_integral_type] = STATE(58),
    [sym_floating_point_type] = STATE(58),
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
    [anon_sym_boolean] = ACTIONS(80),
    [anon_sym_byte] = ACTIONS(82),
    [anon_sym_short] = ACTIONS(82),
    [anon_sym_int] = ACTIONS(82),
    [anon_sym_long] = ACTIONS(82),
    [anon_sym_char] = ACTIONS(82),
    [anon_sym_float] = ACTIONS(84),
    [anon_sym_double] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_static] = ACTIONS(88),
    [anon_sym_public] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_abstract] = ACTIONS(88),
    [anon_sym_final] = ACTIONS(88),
    [anon_sym_strictfp] = ACTIONS(88),
    [anon_sym_default] = ACTIONS(88),
    [anon_sym_synchronized] = ACTIONS(88),
    [anon_sym_native] = ACTIONS(88),
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
    [anon_sym_GT] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_LBRACE] = ACTIONS(691),
    [anon_sym_DOT] = ACTIONS(693),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_AT] = ACTIONS(691),
    [anon_sym_EQ] = ACTIONS(691),
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
    [anon_sym_LPAREN] = ACTIONS(705),
    [sym_comment] = ACTIONS(58),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(707),
    [sym__semicolon] = ACTIONS(707),
    [sym_decimal_integer_literal] = ACTIONS(709),
    [sym_hex_integer_literal] = ACTIONS(709),
    [sym_octal_integer_literal] = ACTIONS(709),
    [sym_binary_integer_literal] = ACTIONS(709),
    [sym_decimal_floating_point_literal] = ACTIONS(709),
    [sym_hex_floating_point_literal] = ACTIONS(711),
    [anon_sym_true] = ACTIONS(709),
    [anon_sym_false] = ACTIONS(709),
    [anon_sym_SQUOTE] = ACTIONS(707),
    [sym_string_literal] = ACTIONS(707),
    [sym_null_literal] = ACTIONS(709),
    [anon_sym_GT] = ACTIONS(709),
    [anon_sym_LT] = ACTIONS(709),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [anon_sym_GT_EQ] = ACTIONS(707),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [anon_sym_BANG_EQ] = ACTIONS(707),
    [anon_sym_AMP_AMP] = ACTIONS(707),
    [anon_sym_PIPE_PIPE] = ACTIONS(707),
    [anon_sym_PLUS] = ACTIONS(709),
    [anon_sym_DASH] = ACTIONS(709),
    [anon_sym_STAR] = ACTIONS(707),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_AMP] = ACTIONS(709),
    [anon_sym_PIPE] = ACTIONS(709),
    [anon_sym_CARET] = ACTIONS(707),
    [anon_sym_PERCENT] = ACTIONS(707),
    [anon_sym_LT_LT] = ACTIONS(707),
    [anon_sym_GT_GT] = ACTIONS(709),
    [anon_sym_GT_GT_GT] = ACTIONS(707),
    [anon_sym_LPAREN] = ACTIONS(707),
    [anon_sym_RPAREN] = ACTIONS(707),
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_QMARK] = ACTIONS(707),
    [anon_sym_COLON] = ACTIONS(707),
    [anon_sym_BANG] = ACTIONS(709),
    [anon_sym_TILDE] = ACTIONS(707),
    [anon_sym_PLUS_PLUS] = ACTIONS(707),
    [anon_sym_DASH_DASH] = ACTIONS(707),
    [anon_sym_LBRACE] = ACTIONS(707),
    [anon_sym_RBRACE] = ACTIONS(707),
    [anon_sym_RBRACK] = ACTIONS(707),
    [anon_sym_boolean] = ACTIONS(709),
    [anon_sym_byte] = ACTIONS(709),
    [anon_sym_short] = ACTIONS(709),
    [anon_sym_int] = ACTIONS(709),
    [anon_sym_long] = ACTIONS(709),
    [anon_sym_char] = ACTIONS(709),
    [anon_sym_float] = ACTIONS(709),
    [anon_sym_double] = ACTIONS(709),
    [anon_sym_AT] = ACTIONS(707),
    [anon_sym_open] = ACTIONS(709),
    [anon_sym_module] = ACTIONS(709),
    [anon_sym_static] = ACTIONS(709),
    [anon_sym_package] = ACTIONS(709),
    [anon_sym_import] = ACTIONS(709),
    [anon_sym_class] = ACTIONS(709),
    [anon_sym_public] = ACTIONS(709),
    [anon_sym_protected] = ACTIONS(709),
    [anon_sym_private] = ACTIONS(709),
    [anon_sym_abstract] = ACTIONS(709),
    [anon_sym_final] = ACTIONS(709),
    [anon_sym_strictfp] = ACTIONS(709),
    [anon_sym_default] = ACTIONS(709),
    [anon_sym_synchronized] = ACTIONS(709),
    [anon_sym_native] = ACTIONS(709),
    [anon_sym_interface] = ACTIONS(709),
    [sym_identifier] = ACTIONS(711),
    [sym_comment] = ACTIONS(58),
  },
  [220] = {
    [sym_package_or_type_name] = STATE(365),
    [sym_identifier] = ACTIONS(713),
    [sym_comment] = ACTIONS(58),
  },
  [221] = {
    [anon_sym_boolean] = ACTIONS(116),
    [anon_sym_byte] = ACTIONS(116),
    [anon_sym_short] = ACTIONS(116),
    [anon_sym_int] = ACTIONS(116),
    [anon_sym_long] = ACTIONS(116),
    [anon_sym_char] = ACTIONS(116),
    [anon_sym_float] = ACTIONS(116),
    [anon_sym_double] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(114),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_class] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_abstract] = ACTIONS(116),
    [anon_sym_final] = ACTIONS(116),
    [anon_sym_strictfp] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_synchronized] = ACTIONS(116),
    [anon_sym_native] = ACTIONS(116),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(58),
  },
  [222] = {
    [sym_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(58),
  },
  [223] = {
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
    [anon_sym_synchronized] = ACTIONS(717),
    [anon_sym_native] = ACTIONS(717),
    [sym_comment] = ACTIONS(58),
  },
  [224] = {
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
    [anon_sym_synchronized] = ACTIONS(719),
    [anon_sym_native] = ACTIONS(719),
    [sym_comment] = ACTIONS(58),
  },
  [225] = {
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
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
    [anon_sym_native] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [226] = {
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_elseif] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(207),
    [anon_sym_static] = ACTIONS(207),
    [anon_sym_class] = ACTIONS(207),
    [anon_sym_public] = ACTIONS(207),
    [anon_sym_protected] = ACTIONS(207),
    [anon_sym_private] = ACTIONS(207),
    [anon_sym_abstract] = ACTIONS(207),
    [anon_sym_final] = ACTIONS(207),
    [anon_sym_strictfp] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(207),
    [anon_sym_synchronized] = ACTIONS(207),
    [anon_sym_native] = ACTIONS(207),
    [sym_comment] = ACTIONS(58),
  },
  [227] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym_unann_type] = STATE(367),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(213),
    [anon_sym_static] = ACTIONS(215),
    [anon_sym_class] = ACTIONS(215),
    [anon_sym_public] = ACTIONS(215),
    [anon_sym_protected] = ACTIONS(215),
    [anon_sym_private] = ACTIONS(215),
    [anon_sym_abstract] = ACTIONS(215),
    [anon_sym_final] = ACTIONS(215),
    [anon_sym_strictfp] = ACTIONS(215),
    [anon_sym_default] = ACTIONS(215),
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
    [sym__annotation] = STATE(221),
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
    [anon_sym_if] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_synchronized] = ACTIONS(433),
    [anon_sym_native] = ACTIONS(433),
    [sym_comment] = ACTIONS(58),
  },
  [230] = {
    [sym__semicolon] = ACTIONS(725),
    [sym_comment] = ACTIONS(58),
  },
  [231] = {
    [sym__annotation] = STATE(17),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_modifier] = STATE(127),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_static] = ACTIONS(727),
    [anon_sym_class] = ACTIONS(729),
    [anon_sym_public] = ACTIONS(727),
    [anon_sym_protected] = ACTIONS(727),
    [anon_sym_private] = ACTIONS(727),
    [anon_sym_abstract] = ACTIONS(727),
    [anon_sym_final] = ACTIONS(727),
    [anon_sym_strictfp] = ACTIONS(727),
    [anon_sym_default] = ACTIONS(727),
    [anon_sym_synchronized] = ACTIONS(727),
    [anon_sym_native] = ACTIONS(727),
    [sym_comment] = ACTIONS(58),
  },
  [232] = {
    [sym_module_identifier] = STATE(373),
    [sym_identifier] = ACTIONS(112),
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
    [anon_sym_default] = ACTIONS(335),
    [anon_sym_synchronized] = ACTIONS(335),
    [anon_sym_native] = ACTIONS(335),
    [anon_sym_interface] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(58),
  },
  [236] = {
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_DOT] = ACTIONS(735),
    [anon_sym_boolean] = ACTIONS(345),
    [anon_sym_byte] = ACTIONS(345),
    [anon_sym_short] = ACTIONS(345),
    [anon_sym_int] = ACTIONS(345),
    [anon_sym_long] = ACTIONS(345),
    [anon_sym_char] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(345),
    [anon_sym_double] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(345),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_synchronized] = ACTIONS(345),
    [anon_sym_native] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(345),
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
    [anon_sym_RBRACE] = ACTIONS(737),
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
    [anon_sym_default] = ACTIONS(739),
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
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(511),
    [sym_comment] = ACTIONS(58),
  },
  [253] = {
    [anon_sym_RPAREN] = ACTIONS(773),
    [sym_comment] = ACTIONS(58),
  },
  [254] = {
    [sym__semicolon] = ACTIONS(775),
    [anon_sym_RPAREN] = ACTIONS(775),
    [anon_sym_COMMA] = ACTIONS(775),
    [anon_sym_EQ] = ACTIONS(777),
    [sym_comment] = ACTIONS(58),
  },
  [255] = {
    [anon_sym_this] = ACTIONS(779),
    [sym_comment] = ACTIONS(58),
  },
  [256] = {
    [sym__semicolon] = ACTIONS(781),
    [anon_sym_RPAREN] = ACTIONS(781),
    [anon_sym_COMMA] = ACTIONS(781),
    [anon_sym_EQ] = ACTIONS(781),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(62),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_static] = ACTIONS(88),
    [anon_sym_public] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_abstract] = ACTIONS(88),
    [anon_sym_final] = ACTIONS(88),
    [anon_sym_strictfp] = ACTIONS(88),
    [anon_sym_default] = ACTIONS(88),
    [anon_sym_synchronized] = ACTIONS(88),
    [anon_sym_native] = ACTIONS(88),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [anon_sym_RBRACE] = ACTIONS(805),
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
    [anon_sym_default] = ACTIONS(807),
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
    [anon_sym_default] = ACTIONS(813),
    [anon_sym_synchronized] = ACTIONS(813),
    [anon_sym_native] = ACTIONS(813),
    [anon_sym_interface] = ACTIONS(813),
    [sym_identifier] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [273] = {
    [anon_sym_RPAREN] = ACTIONS(817),
    [anon_sym_EQ] = ACTIONS(819),
    [sym_comment] = ACTIONS(58),
  },
  [274] = {
    [anon_sym_RPAREN] = ACTIONS(817),
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
    [anon_sym_default] = ACTIONS(829),
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
    [anon_sym_RBRACE] = ACTIONS(839),
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
    [anon_sym_default] = ACTIONS(841),
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
    [anon_sym_RBRACE] = ACTIONS(855),
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
    [anon_sym_default] = ACTIONS(857),
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
    [anon_sym_default] = ACTIONS(871),
    [anon_sym_synchronized] = ACTIONS(871),
    [anon_sym_native] = ACTIONS(871),
    [anon_sym_interface] = ACTIONS(871),
    [sym_identifier] = ACTIONS(873),
    [sym_comment] = ACTIONS(58),
  },
  [293] = {
    [sym_statement] = STATE(223),
    [sym_if_then_statement] = STATE(224),
    [sym__annotation] = STATE(221),
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
    [anon_sym_if] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(875),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_synchronized] = ACTIONS(433),
    [anon_sym_native] = ACTIONS(433),
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
    [anon_sym_RBRACE] = ACTIONS(877),
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
    [anon_sym_default] = ACTIONS(879),
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
    [anon_sym_default] = ACTIONS(209),
    [anon_sym_synchronized] = ACTIONS(209),
    [anon_sym_native] = ACTIONS(209),
    [anon_sym_interface] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(58),
  },
  [300] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [sym_unann_type] = STATE(106),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_class_or_interface_type_repeat1] = STATE(107),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(891),
    [sym_comment] = ACTIONS(58),
  },
  [301] = {
    [sym__semicolon] = ACTIONS(893),
    [anon_sym_LT] = ACTIONS(893),
    [anon_sym_LBRACE] = ACTIONS(893),
    [anon_sym_RBRACE] = ACTIONS(893),
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
    [anon_sym_default] = ACTIONS(895),
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
    [anon_sym_default] = ACTIONS(901),
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
    [anon_sym_default] = ACTIONS(225),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(909),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(911),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(913),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [307] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [anon_sym_RBRACE] = ACTIONS(931),
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
    [anon_sym_default] = ACTIONS(933),
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
    [anon_sym_default] = ACTIONS(939),
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
    [anon_sym_RBRACE] = ACTIONS(943),
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
    [anon_sym_default] = ACTIONS(945),
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
    [anon_sym_default] = ACTIONS(951),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(909),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(911),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(913),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [321] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [anon_sym_RBRACE] = ACTIONS(961),
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
    [anon_sym_default] = ACTIONS(963),
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
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
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
    [anon_sym_GT] = ACTIONS(1017),
    [anon_sym_RPAREN] = ACTIONS(1017),
    [anon_sym_COMMA] = ACTIONS(1017),
    [anon_sym_LBRACE] = ACTIONS(1017),
    [anon_sym_DOT] = ACTIONS(1019),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_AT] = ACTIONS(1017),
    [anon_sym_EQ] = ACTIONS(1017),
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
    [anon_sym_default] = ACTIONS(335),
    [anon_sym_synchronized] = ACTIONS(335),
    [anon_sym_native] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(58),
  },
  [365] = {
    [anon_sym_LPAREN] = ACTIONS(1031),
    [anon_sym_DOT] = ACTIONS(1033),
    [anon_sym_boolean] = ACTIONS(345),
    [anon_sym_byte] = ACTIONS(345),
    [anon_sym_short] = ACTIONS(345),
    [anon_sym_int] = ACTIONS(345),
    [anon_sym_long] = ACTIONS(345),
    [anon_sym_char] = ACTIONS(345),
    [anon_sym_float] = ACTIONS(345),
    [anon_sym_double] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(345),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_synchronized] = ACTIONS(345),
    [anon_sym_native] = ACTIONS(345),
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
    [anon_sym_default] = ACTIONS(1039),
    [anon_sym_synchronized] = ACTIONS(1039),
    [anon_sym_native] = ACTIONS(1039),
    [anon_sym_interface] = ACTIONS(1039),
    [sym_identifier] = ACTIONS(1041),
    [sym_comment] = ACTIONS(58),
  },
  [369] = {
    [anon_sym_if] = ACTIONS(1043),
    [anon_sym_RBRACE] = ACTIONS(1043),
    [anon_sym_AT] = ACTIONS(1043),
    [anon_sym_static] = ACTIONS(1043),
    [anon_sym_class] = ACTIONS(1043),
    [anon_sym_public] = ACTIONS(1043),
    [anon_sym_protected] = ACTIONS(1043),
    [anon_sym_private] = ACTIONS(1043),
    [anon_sym_abstract] = ACTIONS(1043),
    [anon_sym_final] = ACTIONS(1043),
    [anon_sym_strictfp] = ACTIONS(1043),
    [anon_sym_default] = ACTIONS(1043),
    [anon_sym_synchronized] = ACTIONS(1043),
    [anon_sym_native] = ACTIONS(1043),
    [sym_comment] = ACTIONS(58),
  },
  [370] = {
    [sym_statement] = STATE(223),
    [sym_if_then_statement] = STATE(224),
    [sym__annotation] = STATE(221),
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
    [anon_sym_if] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(1045),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_synchronized] = ACTIONS(433),
    [anon_sym_native] = ACTIONS(433),
    [sym_comment] = ACTIONS(58),
  },
  [371] = {
    [anon_sym_if] = ACTIONS(1047),
    [anon_sym_RBRACE] = ACTIONS(1047),
    [anon_sym_AT] = ACTIONS(1047),
    [anon_sym_static] = ACTIONS(1047),
    [anon_sym_class] = ACTIONS(1047),
    [anon_sym_public] = ACTIONS(1047),
    [anon_sym_protected] = ACTIONS(1047),
    [anon_sym_private] = ACTIONS(1047),
    [anon_sym_abstract] = ACTIONS(1047),
    [anon_sym_final] = ACTIONS(1047),
    [anon_sym_strictfp] = ACTIONS(1047),
    [anon_sym_default] = ACTIONS(1047),
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
    [anon_sym_RPAREN] = ACTIONS(1061),
    [anon_sym_EQ] = ACTIONS(819),
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
    [anon_sym_default] = ACTIONS(813),
    [anon_sym_synchronized] = ACTIONS(813),
    [anon_sym_native] = ACTIONS(813),
    [sym_identifier] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [390] = {
    [anon_sym_RPAREN] = ACTIONS(1075),
    [anon_sym_EQ] = ACTIONS(819),
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
    [anon_sym_default] = ACTIONS(829),
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
    [anon_sym_RBRACE] = ACTIONS(1101),
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
    [anon_sym_default] = ACTIONS(1103),
    [anon_sym_synchronized] = ACTIONS(1103),
    [anon_sym_native] = ACTIONS(1103),
    [anon_sym_interface] = ACTIONS(1103),
    [sym_identifier] = ACTIONS(1105),
    [sym_comment] = ACTIONS(58),
  },
  [407] = {
    [anon_sym_RBRACE] = ACTIONS(1107),
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
    [anon_sym_default] = ACTIONS(1109),
    [anon_sym_synchronized] = ACTIONS(1109),
    [anon_sym_native] = ACTIONS(1109),
    [anon_sym_interface] = ACTIONS(1109),
    [sym_identifier] = ACTIONS(1111),
    [sym_comment] = ACTIONS(58),
  },
  [408] = {
    [anon_sym_RBRACE] = ACTIONS(1113),
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
    [anon_sym_default] = ACTIONS(1115),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_modifier] = STATE(127),
    [sym_unann_type] = STATE(545),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(909),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(911),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(913),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [411] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [412] = {
    [sym__semicolon] = ACTIONS(1123),
    [anon_sym_LT] = ACTIONS(1123),
    [anon_sym_RPAREN] = ACTIONS(1123),
    [anon_sym_COMMA] = ACTIONS(1123),
    [anon_sym_RBRACE] = ACTIONS(1123),
    [anon_sym_LBRACK] = ACTIONS(1123),
    [anon_sym_boolean] = ACTIONS(1125),
    [anon_sym_byte] = ACTIONS(1125),
    [anon_sym_short] = ACTIONS(1125),
    [anon_sym_int] = ACTIONS(1125),
    [anon_sym_long] = ACTIONS(1125),
    [anon_sym_char] = ACTIONS(1125),
    [anon_sym_float] = ACTIONS(1125),
    [anon_sym_double] = ACTIONS(1125),
    [anon_sym_AT] = ACTIONS(1123),
    [anon_sym_open] = ACTIONS(1125),
    [anon_sym_module] = ACTIONS(1125),
    [anon_sym_static] = ACTIONS(1125),
    [anon_sym_package] = ACTIONS(1125),
    [anon_sym_class] = ACTIONS(1125),
    [anon_sym_public] = ACTIONS(1125),
    [anon_sym_protected] = ACTIONS(1125),
    [anon_sym_private] = ACTIONS(1125),
    [anon_sym_abstract] = ACTIONS(1125),
    [anon_sym_final] = ACTIONS(1125),
    [anon_sym_strictfp] = ACTIONS(1125),
    [anon_sym_default] = ACTIONS(1125),
    [anon_sym_synchronized] = ACTIONS(1125),
    [anon_sym_native] = ACTIONS(1125),
    [anon_sym_interface] = ACTIONS(1125),
    [sym_identifier] = ACTIONS(1127),
    [sym_comment] = ACTIONS(58),
  },
  [413] = {
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
    [anon_sym_true] = ACTIONS(1129),
    [anon_sym_false] = ACTIONS(1129),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [anon_sym_LBRACE] = ACTIONS(1133),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [414] = {
    [sym__semicolon] = ACTIONS(1135),
    [anon_sym_LT] = ACTIONS(1135),
    [anon_sym_RPAREN] = ACTIONS(1135),
    [anon_sym_COMMA] = ACTIONS(1135),
    [anon_sym_RBRACE] = ACTIONS(1135),
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
    [anon_sym_default] = ACTIONS(1137),
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
    [anon_sym_RBRACE] = ACTIONS(1147),
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
    [anon_sym_default] = ACTIONS(1149),
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
    [anon_sym_DOT] = ACTIONS(343),
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
    [anon_sym_RBRACE] = ACTIONS(1187),
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
    [anon_sym_default] = ACTIONS(1189),
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
    [sym__semicolon] = ACTIONS(707),
    [anon_sym_LT] = ACTIONS(707),
    [anon_sym_LBRACE] = ACTIONS(707),
    [anon_sym_RBRACE] = ACTIONS(707),
    [anon_sym_boolean] = ACTIONS(709),
    [anon_sym_byte] = ACTIONS(709),
    [anon_sym_short] = ACTIONS(709),
    [anon_sym_int] = ACTIONS(709),
    [anon_sym_long] = ACTIONS(709),
    [anon_sym_char] = ACTIONS(709),
    [anon_sym_float] = ACTIONS(709),
    [anon_sym_double] = ACTIONS(709),
    [anon_sym_AT] = ACTIONS(707),
    [anon_sym_static] = ACTIONS(709),
    [anon_sym_class] = ACTIONS(709),
    [anon_sym_public] = ACTIONS(709),
    [anon_sym_protected] = ACTIONS(709),
    [anon_sym_private] = ACTIONS(709),
    [anon_sym_abstract] = ACTIONS(709),
    [anon_sym_final] = ACTIONS(709),
    [anon_sym_strictfp] = ACTIONS(709),
    [anon_sym_default] = ACTIONS(709),
    [anon_sym_synchronized] = ACTIONS(709),
    [anon_sym_native] = ACTIONS(709),
    [anon_sym_interface] = ACTIONS(709),
    [sym_identifier] = ACTIONS(711),
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
    [sym_integral_type] = STATE(58),
    [sym_floating_point_type] = STATE(58),
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
    [anon_sym_boolean] = ACTIONS(80),
    [anon_sym_byte] = ACTIONS(82),
    [anon_sym_short] = ACTIONS(82),
    [anon_sym_int] = ACTIONS(82),
    [anon_sym_long] = ACTIONS(82),
    [anon_sym_char] = ACTIONS(82),
    [anon_sym_float] = ACTIONS(84),
    [anon_sym_double] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_static] = ACTIONS(88),
    [anon_sym_public] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_abstract] = ACTIONS(88),
    [anon_sym_final] = ACTIONS(88),
    [anon_sym_strictfp] = ACTIONS(88),
    [anon_sym_default] = ACTIONS(88),
    [anon_sym_synchronized] = ACTIONS(88),
    [anon_sym_native] = ACTIONS(88),
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
    [anon_sym_if] = ACTIONS(1205),
    [anon_sym_RBRACE] = ACTIONS(1207),
    [anon_sym_boolean] = ACTIONS(1209),
    [anon_sym_void] = ACTIONS(1211),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_static] = ACTIONS(1213),
    [anon_sym_class] = ACTIONS(1215),
    [anon_sym_public] = ACTIONS(1213),
    [anon_sym_protected] = ACTIONS(1213),
    [anon_sym_private] = ACTIONS(1213),
    [anon_sym_abstract] = ACTIONS(1213),
    [anon_sym_final] = ACTIONS(1213),
    [anon_sym_strictfp] = ACTIONS(1213),
    [anon_sym_default] = ACTIONS(1213),
    [anon_sym_synchronized] = ACTIONS(1213),
    [anon_sym_native] = ACTIONS(1213),
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
    [anon_sym_default] = ACTIONS(1227),
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
    [anon_sym_default] = ACTIONS(423),
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
    [anon_sym_default] = ACTIONS(439),
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
    [anon_sym_RBRACE] = ACTIONS(1237),
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
    [anon_sym_default] = ACTIONS(1239),
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
    [anon_sym_default] = ACTIONS(1245),
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
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
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
    [anon_sym_RBRACE] = ACTIONS(1257),
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
    [anon_sym_default] = ACTIONS(1259),
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
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(511),
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
    [anon_sym_RBRACE] = ACTIONS(1269),
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
    [anon_sym_default] = ACTIONS(1271),
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
    [anon_sym_default] = ACTIONS(1277),
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
    [anon_sym_RBRACE] = ACTIONS(1281),
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
    [anon_sym_default] = ACTIONS(1283),
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
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
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
    [anon_sym_RPAREN] = ACTIONS(1305),
    [anon_sym_EQ] = ACTIONS(819),
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
    [anon_sym_LBRACK] = ACTIONS(1315),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_default] = ACTIONS(415),
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
    [anon_sym_GT] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(1335),
    [anon_sym_COMMA] = ACTIONS(1335),
    [anon_sym_LBRACE] = ACTIONS(1335),
    [anon_sym_DOT] = ACTIONS(1337),
    [anon_sym_LBRACK] = ACTIONS(1335),
    [anon_sym_AT] = ACTIONS(1335),
    [anon_sym_EQ] = ACTIONS(1335),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [anon_sym_if] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_elseif] = ACTIONS(597),
    [anon_sym_AT] = ACTIONS(597),
    [anon_sym_static] = ACTIONS(597),
    [anon_sym_class] = ACTIONS(597),
    [anon_sym_public] = ACTIONS(597),
    [anon_sym_protected] = ACTIONS(597),
    [anon_sym_private] = ACTIONS(597),
    [anon_sym_abstract] = ACTIONS(597),
    [anon_sym_final] = ACTIONS(597),
    [anon_sym_strictfp] = ACTIONS(597),
    [anon_sym_default] = ACTIONS(597),
    [anon_sym_synchronized] = ACTIONS(597),
    [anon_sym_native] = ACTIONS(597),
    [sym_comment] = ACTIONS(58),
  },
  [521] = {
    [sym__semicolon] = ACTIONS(1373),
    [sym_comment] = ACTIONS(58),
  },
  [522] = {
    [anon_sym_if] = ACTIONS(1375),
    [anon_sym_RBRACE] = ACTIONS(1375),
    [anon_sym_AT] = ACTIONS(1375),
    [anon_sym_static] = ACTIONS(1375),
    [anon_sym_class] = ACTIONS(1375),
    [anon_sym_public] = ACTIONS(1375),
    [anon_sym_protected] = ACTIONS(1375),
    [anon_sym_private] = ACTIONS(1375),
    [anon_sym_abstract] = ACTIONS(1375),
    [anon_sym_final] = ACTIONS(1375),
    [anon_sym_strictfp] = ACTIONS(1375),
    [anon_sym_default] = ACTIONS(1375),
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
    [anon_sym_RBRACE] = ACTIONS(1377),
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
    [anon_sym_default] = ACTIONS(1379),
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
    [anon_sym_RBRACE] = ACTIONS(1383),
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
    [anon_sym_default] = ACTIONS(1385),
    [anon_sym_synchronized] = ACTIONS(1385),
    [anon_sym_native] = ACTIONS(1385),
    [anon_sym_interface] = ACTIONS(1385),
    [sym_identifier] = ACTIONS(1387),
    [sym_comment] = ACTIONS(58),
  },
  [527] = {
    [anon_sym_LT] = ACTIONS(811),
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
    [anon_sym_default] = ACTIONS(813),
    [anon_sym_synchronized] = ACTIONS(813),
    [anon_sym_native] = ACTIONS(813),
    [anon_sym_interface] = ACTIONS(813),
    [sym_identifier] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [528] = {
    [anon_sym_RPAREN] = ACTIONS(1389),
    [anon_sym_EQ] = ACTIONS(819),
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
    [anon_sym_default] = ACTIONS(829),
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
    [anon_sym_AT] = ACTIONS(1123),
    [sym_identifier] = ACTIONS(1125),
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
    [anon_sym_boolean] = ACTIONS(1125),
    [anon_sym_byte] = ACTIONS(1125),
    [anon_sym_short] = ACTIONS(1125),
    [anon_sym_int] = ACTIONS(1125),
    [anon_sym_long] = ACTIONS(1125),
    [anon_sym_char] = ACTIONS(1125),
    [anon_sym_float] = ACTIONS(1125),
    [anon_sym_double] = ACTIONS(1125),
    [anon_sym_AT] = ACTIONS(1123),
    [anon_sym_static] = ACTIONS(1125),
    [anon_sym_public] = ACTIONS(1125),
    [anon_sym_protected] = ACTIONS(1125),
    [anon_sym_private] = ACTIONS(1125),
    [anon_sym_abstract] = ACTIONS(1125),
    [anon_sym_final] = ACTIONS(1125),
    [anon_sym_strictfp] = ACTIONS(1125),
    [anon_sym_default] = ACTIONS(1125),
    [anon_sym_synchronized] = ACTIONS(1125),
    [anon_sym_native] = ACTIONS(1125),
    [sym_identifier] = ACTIONS(1127),
    [sym_comment] = ACTIONS(58),
  },
  [539] = {
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
    [anon_sym_default] = ACTIONS(1137),
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
    [anon_sym_LPAREN] = ACTIONS(1403),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(511),
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
    [anon_sym_RBRACE] = ACTIONS(1407),
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
    [anon_sym_default] = ACTIONS(1409),
    [anon_sym_synchronized] = ACTIONS(1409),
    [anon_sym_native] = ACTIONS(1409),
    [anon_sym_interface] = ACTIONS(1409),
    [sym_identifier] = ACTIONS(1411),
    [sym_comment] = ACTIONS(58),
  },
  [547] = {
    [anon_sym_RBRACE] = ACTIONS(1413),
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
    [anon_sym_default] = ACTIONS(1415),
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
    [anon_sym_true] = ACTIONS(1129),
    [anon_sym_false] = ACTIONS(1129),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_COMMA] = ACTIONS(1423),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [anon_sym_LBRACE] = ACTIONS(1133),
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
    [anon_sym_EQ] = ACTIONS(819),
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
    [anon_sym_RBRACE] = ACTIONS(1495),
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
    [anon_sym_default] = ACTIONS(1497),
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
    [anon_sym_RBRACE] = ACTIONS(1519),
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
    [anon_sym_default] = ACTIONS(1521),
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
    [anon_sym_RBRACE] = ACTIONS(1525),
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
    [anon_sym_default] = ACTIONS(1527),
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
    [anon_sym_default] = ACTIONS(1039),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [anon_sym_default] = ACTIONS(599),
    [anon_sym_synchronized] = ACTIONS(599),
    [anon_sym_native] = ACTIONS(599),
    [anon_sym_interface] = ACTIONS(599),
    [sym_identifier] = ACTIONS(601),
    [sym_comment] = ACTIONS(58),
  },
  [587] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
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
    [anon_sym_default] = ACTIONS(609),
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
    [sym_integral_type] = STATE(58),
    [sym_floating_point_type] = STATE(58),
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
    [anon_sym_boolean] = ACTIONS(80),
    [anon_sym_byte] = ACTIONS(82),
    [anon_sym_short] = ACTIONS(82),
    [anon_sym_int] = ACTIONS(82),
    [anon_sym_long] = ACTIONS(82),
    [anon_sym_char] = ACTIONS(82),
    [anon_sym_float] = ACTIONS(84),
    [anon_sym_double] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_static] = ACTIONS(88),
    [anon_sym_public] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_abstract] = ACTIONS(88),
    [anon_sym_final] = ACTIONS(88),
    [anon_sym_strictfp] = ACTIONS(88),
    [anon_sym_default] = ACTIONS(88),
    [anon_sym_synchronized] = ACTIONS(88),
    [anon_sym_native] = ACTIONS(88),
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
    [anon_sym_default] = ACTIONS(1541),
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
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
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
    [anon_sym_boolean] = ACTIONS(299),
    [anon_sym_byte] = ACTIONS(299),
    [anon_sym_short] = ACTIONS(299),
    [anon_sym_int] = ACTIONS(299),
    [anon_sym_long] = ACTIONS(299),
    [anon_sym_char] = ACTIONS(299),
    [anon_sym_float] = ACTIONS(299),
    [anon_sym_double] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_class] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_abstract] = ACTIONS(116),
    [anon_sym_final] = ACTIONS(116),
    [anon_sym_strictfp] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_synchronized] = ACTIONS(116),
    [anon_sym_native] = ACTIONS(116),
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
    [sym__annotation] = STATE(221),
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
    [anon_sym_if] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(1572),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_synchronized] = ACTIONS(433),
    [anon_sym_native] = ACTIONS(433),
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
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(58),
  },
  [617] = {
    [sym__semicolon] = ACTIONS(1588),
    [anon_sym_LT] = ACTIONS(1588),
    [anon_sym_LBRACE] = ACTIONS(1588),
    [anon_sym_RBRACE] = ACTIONS(1588),
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
    [anon_sym_default] = ACTIONS(1590),
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
    [anon_sym_default] = ACTIONS(739),
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
    [anon_sym_RBRACE] = ACTIONS(1602),
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
    [anon_sym_default] = ACTIONS(1604),
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
    [anon_sym_default] = ACTIONS(1610),
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
    [anon_sym_boolean] = ACTIONS(1125),
    [anon_sym_byte] = ACTIONS(1125),
    [anon_sym_short] = ACTIONS(1125),
    [anon_sym_int] = ACTIONS(1125),
    [anon_sym_long] = ACTIONS(1125),
    [anon_sym_char] = ACTIONS(1125),
    [anon_sym_float] = ACTIONS(1125),
    [anon_sym_double] = ACTIONS(1125),
    [anon_sym_AT] = ACTIONS(1123),
    [sym_identifier] = ACTIONS(1127),
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
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_AT] = ACTIONS(691),
    [anon_sym_default] = ACTIONS(691),
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
    [sym__statement] = STATE(786),
    [sym__literal] = STATE(795),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(796),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_else_if_clause] = STATE(797),
    [sym_else_clause] = STATE(786),
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(30),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym__declaration] = STATE(798),
    [sym_module_declaration] = STATE(799),
    [sym_package_declaration] = STATE(799),
    [sym_import_statement] = STATE(799),
    [sym_single_type_import_declaration] = STATE(800),
    [sym_type_import_on_declaraction] = STATE(800),
    [sym_single_static_import_declaration] = STATE(800),
    [sym_static_import_on_demand_declaration] = STATE(800),
    [sym_class_declaration] = STATE(799),
    [sym_normal_class_declaration] = STATE(226),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(799),
    [sym_annotation_type_declaration] = STATE(801),
    [sym_normal_interface_declaration] = STATE(801),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(802),
    [sym_method_declaration] = STATE(799),
    [aux_sym_if_then_statement_repeat1] = STATE(803),
    [aux_sym_class_or_interface_type_repeat1] = STATE(804),
    [aux_sym_normal_class_declaration_repeat1] = STATE(805),
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
    [anon_sym_if] = ACTIONS(1644),
    [anon_sym_LBRACE] = ACTIONS(1646),
    [anon_sym_RBRACE] = ACTIONS(1646),
    [anon_sym_elseif] = ACTIONS(1648),
    [anon_sym_else] = ACTIONS(1650),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(1652),
    [anon_sym_open] = ACTIONS(1654),
    [anon_sym_module] = ACTIONS(1656),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_package] = ACTIONS(1658),
    [anon_sym_import] = ACTIONS(1660),
    [anon_sym_class] = ACTIONS(1215),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(1662),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [662] = {
    [sym__expression] = STATE(806),
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
    [anon_sym_default] = ACTIONS(813),
    [anon_sym_synchronized] = ACTIONS(813),
    [anon_sym_native] = ACTIONS(813),
    [sym_identifier] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [664] = {
    [anon_sym_RPAREN] = ACTIONS(1664),
    [anon_sym_EQ] = ACTIONS(819),
    [sym_comment] = ACTIONS(58),
  },
  [665] = {
    [anon_sym_RPAREN] = ACTIONS(1664),
    [sym_comment] = ACTIONS(58),
  },
  [666] = {
    [anon_sym_RPAREN] = ACTIONS(1666),
    [sym_comment] = ACTIONS(58),
  },
  [667] = {
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
    [anon_sym_static] = ACTIONS(829),
    [anon_sym_class] = ACTIONS(829),
    [anon_sym_public] = ACTIONS(829),
    [anon_sym_protected] = ACTIONS(829),
    [anon_sym_private] = ACTIONS(829),
    [anon_sym_abstract] = ACTIONS(829),
    [anon_sym_final] = ACTIONS(829),
    [anon_sym_strictfp] = ACTIONS(829),
    [anon_sym_default] = ACTIONS(829),
    [anon_sym_synchronized] = ACTIONS(829),
    [anon_sym_native] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(58),
  },
  [668] = {
    [anon_sym_if] = ACTIONS(877),
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_elseif] = ACTIONS(877),
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
    [anon_sym_default] = ACTIONS(877),
    [anon_sym_synchronized] = ACTIONS(877),
    [anon_sym_native] = ACTIONS(877),
    [anon_sym_COLON_COLON] = ACTIONS(877),
    [sym_comment] = ACTIONS(58),
  },
  [669] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_RBRACE] = ACTIONS(1668),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [670] = {
    [sym_super_interfaces] = STATE(810),
    [sym_class_body] = STATE(811),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [671] = {
    [sym_class_body] = STATE(811),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [sym_comment] = ACTIONS(58),
  },
  [672] = {
    [anon_sym_if] = ACTIONS(931),
    [anon_sym_RBRACE] = ACTIONS(931),
    [anon_sym_elseif] = ACTIONS(931),
    [anon_sym_AT] = ACTIONS(931),
    [anon_sym_static] = ACTIONS(931),
    [anon_sym_class] = ACTIONS(931),
    [anon_sym_public] = ACTIONS(931),
    [anon_sym_protected] = ACTIONS(931),
    [anon_sym_private] = ACTIONS(931),
    [anon_sym_abstract] = ACTIONS(931),
    [anon_sym_final] = ACTIONS(931),
    [anon_sym_strictfp] = ACTIONS(931),
    [anon_sym_default] = ACTIONS(931),
    [anon_sym_synchronized] = ACTIONS(931),
    [anon_sym_native] = ACTIONS(931),
    [sym_comment] = ACTIONS(58),
  },
  [673] = {
    [sym_superclass] = STATE(812),
    [sym_super_interfaces] = STATE(810),
    [sym_class_body] = STATE(811),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [674] = {
    [sym_module_directive] = STATE(430),
    [anon_sym_RBRACE] = ACTIONS(1670),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [675] = {
    [anon_sym_LT] = ACTIONS(1123),
    [anon_sym_boolean] = ACTIONS(1125),
    [anon_sym_byte] = ACTIONS(1125),
    [anon_sym_short] = ACTIONS(1125),
    [anon_sym_int] = ACTIONS(1125),
    [anon_sym_long] = ACTIONS(1125),
    [anon_sym_char] = ACTIONS(1125),
    [anon_sym_float] = ACTIONS(1125),
    [anon_sym_double] = ACTIONS(1125),
    [anon_sym_AT] = ACTIONS(1123),
    [anon_sym_static] = ACTIONS(1125),
    [anon_sym_class] = ACTIONS(1125),
    [anon_sym_public] = ACTIONS(1125),
    [anon_sym_protected] = ACTIONS(1125),
    [anon_sym_private] = ACTIONS(1125),
    [anon_sym_abstract] = ACTIONS(1125),
    [anon_sym_final] = ACTIONS(1125),
    [anon_sym_strictfp] = ACTIONS(1125),
    [anon_sym_default] = ACTIONS(1125),
    [anon_sym_synchronized] = ACTIONS(1125),
    [anon_sym_native] = ACTIONS(1125),
    [anon_sym_interface] = ACTIONS(1125),
    [sym_identifier] = ACTIONS(1127),
    [sym_comment] = ACTIONS(58),
  },
  [676] = {
    [anon_sym_LT] = ACTIONS(1135),
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
    [anon_sym_default] = ACTIONS(1137),
    [anon_sym_synchronized] = ACTIONS(1137),
    [anon_sym_native] = ACTIONS(1137),
    [anon_sym_interface] = ACTIONS(1137),
    [sym_identifier] = ACTIONS(1139),
    [sym_comment] = ACTIONS(58),
  },
  [677] = {
    [sym_class_body] = STATE(814),
    [anon_sym_LBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(58),
  },
  [678] = {
    [ts_builtin_sym_end] = ACTIONS(1672),
    [sym_decimal_integer_literal] = ACTIONS(1674),
    [sym_hex_integer_literal] = ACTIONS(1674),
    [sym_octal_integer_literal] = ACTIONS(1674),
    [sym_binary_integer_literal] = ACTIONS(1674),
    [sym_decimal_floating_point_literal] = ACTIONS(1674),
    [sym_hex_floating_point_literal] = ACTIONS(1676),
    [anon_sym_true] = ACTIONS(1674),
    [anon_sym_false] = ACTIONS(1674),
    [anon_sym_SQUOTE] = ACTIONS(1672),
    [sym_string_literal] = ACTIONS(1672),
    [sym_null_literal] = ACTIONS(1674),
    [anon_sym_LT] = ACTIONS(1672),
    [anon_sym_LPAREN] = ACTIONS(1672),
    [anon_sym_BANG] = ACTIONS(1672),
    [anon_sym_TILDE] = ACTIONS(1672),
    [anon_sym_PLUS_PLUS] = ACTIONS(1672),
    [anon_sym_DASH_DASH] = ACTIONS(1672),
    [anon_sym_RBRACE] = ACTIONS(1672),
    [anon_sym_boolean] = ACTIONS(1674),
    [anon_sym_byte] = ACTIONS(1674),
    [anon_sym_short] = ACTIONS(1674),
    [anon_sym_int] = ACTIONS(1674),
    [anon_sym_long] = ACTIONS(1674),
    [anon_sym_char] = ACTIONS(1674),
    [anon_sym_float] = ACTIONS(1674),
    [anon_sym_double] = ACTIONS(1674),
    [anon_sym_AT] = ACTIONS(1672),
    [anon_sym_open] = ACTIONS(1674),
    [anon_sym_module] = ACTIONS(1674),
    [anon_sym_static] = ACTIONS(1674),
    [anon_sym_package] = ACTIONS(1674),
    [anon_sym_import] = ACTIONS(1674),
    [anon_sym_class] = ACTIONS(1674),
    [anon_sym_public] = ACTIONS(1674),
    [anon_sym_protected] = ACTIONS(1674),
    [anon_sym_private] = ACTIONS(1674),
    [anon_sym_abstract] = ACTIONS(1674),
    [anon_sym_final] = ACTIONS(1674),
    [anon_sym_strictfp] = ACTIONS(1674),
    [anon_sym_default] = ACTIONS(1674),
    [anon_sym_synchronized] = ACTIONS(1674),
    [anon_sym_native] = ACTIONS(1674),
    [anon_sym_interface] = ACTIONS(1674),
    [sym_identifier] = ACTIONS(1676),
    [sym_comment] = ACTIONS(58),
  },
  [679] = {
    [anon_sym_GT] = ACTIONS(1678),
    [anon_sym_AMP] = ACTIONS(1678),
    [anon_sym_COMMA] = ACTIONS(1678),
    [sym_comment] = ACTIONS(58),
  },
  [680] = {
    [anon_sym_RPAREN] = ACTIONS(1680),
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
    [anon_sym_LPAREN] = ACTIONS(1682),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(511),
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
    [anon_sym_GT] = ACTIONS(1684),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(1686),
    [anon_sym_LT_EQ] = ACTIONS(1686),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(1688),
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
    [anon_sym_RBRACE] = ACTIONS(1690),
    [sym_comment] = ACTIONS(58),
  },
  [686] = {
    [sym__expression] = STATE(826),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [687] = {
    [sym__semicolon] = ACTIONS(1696),
    [anon_sym_RPAREN] = ACTIONS(1696),
    [anon_sym_COMMA] = ACTIONS(1696),
    [anon_sym_RBRACE] = ACTIONS(1696),
    [sym_comment] = ACTIONS(58),
  },
  [688] = {
    [aux_sym_element_value_array_initializer_repeat1] = STATE(828),
    [anon_sym_COMMA] = ACTIONS(1698),
    [anon_sym_RBRACE] = ACTIONS(1690),
    [sym_comment] = ACTIONS(58),
  },
  [689] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1700),
    [anon_sym_COMMA] = ACTIONS(1439),
    [anon_sym_QMARK] = ACTIONS(1702),
    [anon_sym_RBRACE] = ACTIONS(1439),
    [sym_comment] = ACTIONS(58),
  },
  [690] = {
    [anon_sym_AMP_AMP] = ACTIONS(1704),
    [anon_sym_PIPE_PIPE] = ACTIONS(1445),
    [anon_sym_COMMA] = ACTIONS(1445),
    [anon_sym_QMARK] = ACTIONS(1445),
    [anon_sym_RBRACE] = ACTIONS(1445),
    [sym_comment] = ACTIONS(58),
  },
  [691] = {
    [anon_sym_AMP_AMP] = ACTIONS(1447),
    [anon_sym_PIPE_PIPE] = ACTIONS(1447),
    [anon_sym_PIPE] = ACTIONS(1706),
    [anon_sym_COMMA] = ACTIONS(1447),
    [anon_sym_QMARK] = ACTIONS(1447),
    [anon_sym_RBRACE] = ACTIONS(1447),
    [sym_comment] = ACTIONS(58),
  },
  [692] = {
    [anon_sym_AMP_AMP] = ACTIONS(1451),
    [anon_sym_PIPE_PIPE] = ACTIONS(1451),
    [anon_sym_PIPE] = ACTIONS(1453),
    [anon_sym_CARET] = ACTIONS(1708),
    [anon_sym_COMMA] = ACTIONS(1451),
    [anon_sym_QMARK] = ACTIONS(1451),
    [anon_sym_RBRACE] = ACTIONS(1451),
    [sym_comment] = ACTIONS(58),
  },
  [693] = {
    [anon_sym_LT] = ACTIONS(1710),
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
    [anon_sym_EQ_EQ] = ACTIONS(1712),
    [anon_sym_BANG_EQ] = ACTIONS(1712),
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
    [anon_sym_LT_LT] = ACTIONS(1714),
    [anon_sym_GT_GT] = ACTIONS(1716),
    [anon_sym_GT_GT_GT] = ACTIONS(1714),
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
    [anon_sym_PLUS] = ACTIONS(1718),
    [anon_sym_DASH] = ACTIONS(1718),
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
    [anon_sym_STAR] = ACTIONS(1720),
    [anon_sym_SLASH] = ACTIONS(1722),
    [anon_sym_PIPE] = ACTIONS(1485),
    [anon_sym_CARET] = ACTIONS(1487),
    [anon_sym_PERCENT] = ACTIONS(1720),
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
    [sym_conditional_and_expression] = STATE(839),
    [sym_inclusive_or_expression] = STATE(555),
    [sym_exclusive_or_expression] = STATE(556),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(558),
    [sym_equality_expression] = STATE(559),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [699] = {
    [sym__expression] = STATE(840),
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
    [sym_inclusive_or_expression] = STATE(841),
    [sym_exclusive_or_expression] = STATE(556),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(558),
    [sym_equality_expression] = STATE(559),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [701] = {
    [sym_unary_expression] = STATE(551),
    [sym_exclusive_or_expression] = STATE(842),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(558),
    [sym_equality_expression] = STATE(559),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [702] = {
    [sym_unary_expression] = STATE(551),
    [sym_and_expression] = STATE(843),
    [sym_relational_expression] = STATE(558),
    [sym_equality_expression] = STATE(559),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [703] = {
    [sym_unary_expression] = STATE(551),
    [sym_shift_expression] = STATE(844),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [704] = {
    [sym_unary_expression] = STATE(551),
    [sym_relational_expression] = STATE(845),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [705] = {
    [sym_unary_expression] = STATE(551),
    [sym_additive_expression] = STATE(846),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [706] = {
    [sym_unary_expression] = STATE(551),
    [sym_multiplicative_expression] = STATE(847),
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [707] = {
    [sym_unary_expression] = STATE(848),
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [708] = {
    [anon_sym_RPAREN] = ACTIONS(1724),
    [anon_sym_COMMA] = ACTIONS(1724),
    [sym_comment] = ACTIONS(58),
  },
  [709] = {
    [sym__semicolon] = ACTIONS(1726),
    [anon_sym_COMMA] = ACTIONS(1726),
    [anon_sym_DOT] = ACTIONS(1726),
    [sym_comment] = ACTIONS(58),
  },
  [710] = {
    [anon_sym_RBRACE] = ACTIONS(1728),
    [anon_sym_requires] = ACTIONS(1728),
    [anon_sym_exports] = ACTIONS(1728),
    [anon_sym_opens] = ACTIONS(1728),
    [anon_sym_uses] = ACTIONS(1728),
    [anon_sym_provides] = ACTIONS(1728),
    [sym_comment] = ACTIONS(58),
  },
  [711] = {
    [sym__semicolon] = ACTIONS(1730),
    [anon_sym_COMMA] = ACTIONS(1730),
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
    [aux_sym_module_directive_repeat2] = STATE(850),
    [sym__semicolon] = ACTIONS(1732),
    [anon_sym_COMMA] = ACTIONS(1171),
    [anon_sym_DOT] = ACTIONS(1169),
    [sym_comment] = ACTIONS(58),
  },
  [714] = {
    [sym__semicolon] = ACTIONS(1732),
    [anon_sym_COMMA] = ACTIONS(1515),
    [sym_comment] = ACTIONS(58),
  },
  [715] = {
    [sym_module_name] = STATE(851),
    [sym_identifier] = ACTIONS(1511),
    [sym_comment] = ACTIONS(58),
  },
  [716] = {
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_with] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [717] = {
    [aux_sym_module_directive_repeat3] = STATE(853),
    [sym__semicolon] = ACTIONS(1732),
    [anon_sym_COMMA] = ACTIONS(1734),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_comment] = ACTIONS(58),
  },
  [718] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [aux_sym_annotation_type_body_repeat1] = STATE(855),
    [anon_sym_RBRACE] = ACTIONS(1736),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [719] = {
    [sym__semicolon] = ACTIONS(805),
    [anon_sym_LT] = ACTIONS(805),
    [anon_sym_LBRACE] = ACTIONS(805),
    [anon_sym_RBRACE] = ACTIONS(805),
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
    [anon_sym_default] = ACTIONS(807),
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
    [anon_sym_default] = ACTIONS(879),
    [anon_sym_synchronized] = ACTIONS(879),
    [anon_sym_native] = ACTIONS(879),
    [anon_sym_interface] = ACTIONS(879),
    [sym_identifier] = ACTIONS(881),
    [sym_comment] = ACTIONS(58),
  },
  [721] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_RBRACE] = ACTIONS(1738),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [722] = {
    [sym_super_interfaces] = STATE(857),
    [sym_class_body] = STATE(858),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [723] = {
    [sym_class_body] = STATE(858),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [sym_comment] = ACTIONS(58),
  },
  [724] = {
    [sym__semicolon] = ACTIONS(931),
    [anon_sym_LT] = ACTIONS(931),
    [anon_sym_LBRACE] = ACTIONS(931),
    [anon_sym_RBRACE] = ACTIONS(931),
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
    [anon_sym_default] = ACTIONS(933),
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
    [anon_sym_default] = ACTIONS(945),
    [anon_sym_synchronized] = ACTIONS(945),
    [anon_sym_native] = ACTIONS(945),
    [anon_sym_interface] = ACTIONS(945),
    [sym_identifier] = ACTIONS(947),
    [sym_comment] = ACTIONS(58),
  },
  [726] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_RBRACE] = ACTIONS(1740),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [727] = {
    [sym_interface_body] = STATE(860),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym_comment] = ACTIONS(58),
  },
  [728] = {
    [sym__semicolon] = ACTIONS(961),
    [anon_sym_LT] = ACTIONS(961),
    [anon_sym_LBRACE] = ACTIONS(961),
    [anon_sym_RBRACE] = ACTIONS(961),
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
    [anon_sym_default] = ACTIONS(963),
    [anon_sym_synchronized] = ACTIONS(963),
    [anon_sym_native] = ACTIONS(963),
    [anon_sym_interface] = ACTIONS(963),
    [sym_identifier] = ACTIONS(965),
    [sym_comment] = ACTIONS(58),
  },
  [729] = {
    [anon_sym_LBRACE] = ACTIONS(1742),
    [anon_sym_throws] = ACTIONS(1742),
    [sym_comment] = ACTIONS(58),
  },
  [730] = {
    [anon_sym_RPAREN] = ACTIONS(1744),
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
    [anon_sym_RPAREN] = ACTIONS(1746),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [732] = {
    [anon_sym_class] = ACTIONS(1748),
    [sym_comment] = ACTIONS(58),
  },
  [733] = {
    [anon_sym_DOT] = ACTIONS(1750),
    [anon_sym_LBRACK] = ACTIONS(1750),
    [sym_comment] = ACTIONS(58),
  },
  [734] = {
    [anon_sym_DOT] = ACTIONS(1752),
    [anon_sym_LBRACK] = ACTIONS(1754),
    [sym_comment] = ACTIONS(58),
  },
  [735] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(868),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1756),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [736] = {
    [sym_identifier] = ACTIONS(1758),
    [sym_comment] = ACTIONS(58),
  },
  [737] = {
    [sym_type_arguments] = STATE(871),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(1760),
    [sym_comment] = ACTIONS(58),
  },
  [738] = {
    [sym_type_arguments] = STATE(874),
    [sym_type_arguments_or_diamond] = STATE(875),
    [aux_sym_class_or_interface_type_repeat2] = STATE(327),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(876),
    [anon_sym_LT] = ACTIONS(1762),
    [anon_sym_LPAREN] = ACTIONS(1764),
    [anon_sym_DOT] = ACTIONS(1766),
    [anon_sym_LBRACK] = ACTIONS(615),
    [anon_sym_AT] = ACTIONS(615),
    [anon_sym_LT_GT] = ACTIONS(1768),
    [sym_comment] = ACTIONS(58),
  },
  [739] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_class_or_interface_type_to_instantiate] = STATE(878),
    [aux_sym_class_or_interface_type_repeat1] = STATE(879),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1770),
    [sym_comment] = ACTIONS(58),
  },
  [740] = {
    [sym_dims] = STATE(880),
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
    [sym_dims] = STATE(880),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_exprs] = STATE(881),
    [sym_dims_expr] = STATE(749),
    [aux_sym_class_or_interface_type_repeat1] = STATE(750),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(1564),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [742] = {
    [anon_sym_LPAREN] = ACTIONS(1772),
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
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(1774),
    [sym_comment] = ACTIONS(58),
  },
  [744] = {
    [anon_sym_LPAREN] = ACTIONS(1776),
    [sym_comment] = ACTIONS(58),
  },
  [745] = {
    [sym__expression] = STATE(887),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [746] = {
    [sym_type_arguments] = STATE(888),
    [anon_sym_LT] = ACTIONS(917),
    [anon_sym_new] = ACTIONS(1782),
    [sym_comment] = ACTIONS(58),
  },
  [747] = {
    [anon_sym_COLON_COLON] = ACTIONS(1784),
    [sym_comment] = ACTIONS(58),
  },
  [748] = {
    [sym_dims] = STATE(889),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_DOT] = ACTIONS(1786),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1786),
    [sym_comment] = ACTIONS(58),
  },
  [749] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_expr] = STATE(891),
    [aux_sym_class_or_interface_type_repeat1] = STATE(892),
    [aux_sym_dims_exprs_repeat1] = STATE(893),
    [anon_sym_DOT] = ACTIONS(1788),
    [anon_sym_LBRACK] = ACTIONS(1790),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1788),
    [sym_comment] = ACTIONS(58),
  },
  [750] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(1792),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [751] = {
    [sym_type_arguments] = STATE(897),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_class] = ACTIONS(1794),
    [anon_sym_this] = ACTIONS(1796),
    [anon_sym_super] = ACTIONS(1798),
    [sym_identifier] = ACTIONS(1800),
    [sym_comment] = ACTIONS(58),
  },
  [752] = {
    [sym__semicolon] = ACTIONS(1802),
    [anon_sym_LT] = ACTIONS(1802),
    [anon_sym_LBRACE] = ACTIONS(1802),
    [anon_sym_RBRACE] = ACTIONS(1802),
    [anon_sym_boolean] = ACTIONS(1804),
    [anon_sym_byte] = ACTIONS(1804),
    [anon_sym_short] = ACTIONS(1804),
    [anon_sym_int] = ACTIONS(1804),
    [anon_sym_long] = ACTIONS(1804),
    [anon_sym_char] = ACTIONS(1804),
    [anon_sym_float] = ACTIONS(1804),
    [anon_sym_double] = ACTIONS(1804),
    [anon_sym_AT] = ACTIONS(1802),
    [anon_sym_static] = ACTIONS(1804),
    [anon_sym_class] = ACTIONS(1804),
    [anon_sym_public] = ACTIONS(1804),
    [anon_sym_protected] = ACTIONS(1804),
    [anon_sym_private] = ACTIONS(1804),
    [anon_sym_abstract] = ACTIONS(1804),
    [anon_sym_final] = ACTIONS(1804),
    [anon_sym_strictfp] = ACTIONS(1804),
    [anon_sym_default] = ACTIONS(1804),
    [anon_sym_synchronized] = ACTIONS(1804),
    [anon_sym_native] = ACTIONS(1804),
    [anon_sym_interface] = ACTIONS(1804),
    [sym_identifier] = ACTIONS(1806),
    [sym_comment] = ACTIONS(58),
  },
  [753] = {
    [anon_sym_RBRACE] = ACTIONS(1808),
    [sym_comment] = ACTIONS(58),
  },
  [754] = {
    [sym_type_arguments] = STATE(903),
    [sym_unqualified_class_instance_creation_expression] = STATE(904),
    [anon_sym_LT] = ACTIONS(1810),
    [anon_sym_super] = ACTIONS(1812),
    [anon_sym_new] = ACTIONS(1814),
    [sym_identifier] = ACTIONS(1816),
    [sym_comment] = ACTIONS(58),
  },
  [755] = {
    [sym__expression] = STATE(905),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [756] = {
    [sym_type_arguments] = STATE(897),
    [sym_unqualified_class_instance_creation_expression] = STATE(904),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_super] = ACTIONS(1812),
    [anon_sym_new] = ACTIONS(1814),
    [sym_identifier] = ACTIONS(1818),
    [sym_comment] = ACTIONS(58),
  },
  [757] = {
    [anon_sym_new] = ACTIONS(1782),
    [sym_comment] = ACTIONS(58),
  },
  [758] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(908),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1820),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [759] = {
    [sym_annotation_type_body] = STATE(909),
    [anon_sym_LBRACE] = ACTIONS(1531),
    [sym_comment] = ACTIONS(58),
  },
  [760] = {
    [sym_superclass] = STATE(910),
    [sym_super_interfaces] = STATE(857),
    [sym_class_body] = STATE(858),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [761] = {
    [sym_extends_interfaces] = STATE(911),
    [sym_interface_body] = STATE(860),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [762] = {
    [sym__semicolon] = ACTIONS(1822),
    [anon_sym_LT] = ACTIONS(1822),
    [anon_sym_LBRACE] = ACTIONS(1822),
    [anon_sym_RBRACE] = ACTIONS(1822),
    [anon_sym_boolean] = ACTIONS(1824),
    [anon_sym_byte] = ACTIONS(1824),
    [anon_sym_short] = ACTIONS(1824),
    [anon_sym_int] = ACTIONS(1824),
    [anon_sym_long] = ACTIONS(1824),
    [anon_sym_char] = ACTIONS(1824),
    [anon_sym_float] = ACTIONS(1824),
    [anon_sym_double] = ACTIONS(1824),
    [anon_sym_AT] = ACTIONS(1822),
    [anon_sym_static] = ACTIONS(1824),
    [anon_sym_class] = ACTIONS(1824),
    [anon_sym_public] = ACTIONS(1824),
    [anon_sym_protected] = ACTIONS(1824),
    [anon_sym_private] = ACTIONS(1824),
    [anon_sym_abstract] = ACTIONS(1824),
    [anon_sym_final] = ACTIONS(1824),
    [anon_sym_strictfp] = ACTIONS(1824),
    [anon_sym_default] = ACTIONS(1824),
    [anon_sym_synchronized] = ACTIONS(1824),
    [anon_sym_native] = ACTIONS(1824),
    [anon_sym_interface] = ACTIONS(1824),
    [sym_identifier] = ACTIONS(1826),
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
    [anon_sym_GT] = ACTIONS(1828),
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
    [sym_identifier] = ACTIONS(1830),
    [sym_comment] = ACTIONS(58),
  },
  [767] = {
    [anon_sym_LBRACE] = ACTIONS(1626),
    [anon_sym_DOT] = ACTIONS(1251),
    [anon_sym_implements] = ACTIONS(1626),
    [sym_comment] = ACTIONS(58),
  },
  [768] = {
    [anon_sym_COMMA] = ACTIONS(1832),
    [anon_sym_LBRACE] = ACTIONS(1832),
    [sym_comment] = ACTIONS(58),
  },
  [769] = {
    [sym__semicolon] = ACTIONS(1834),
    [anon_sym_COMMA] = ACTIONS(1834),
    [sym_comment] = ACTIONS(58),
  },
  [770] = {
    [sym_variable_declarator] = STATE(914),
    [sym_variable_declarator_id] = STATE(254),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [771] = {
    [sym__semicolon] = ACTIONS(1836),
    [anon_sym_LT] = ACTIONS(1836),
    [anon_sym_RBRACE] = ACTIONS(1836),
    [anon_sym_boolean] = ACTIONS(1838),
    [anon_sym_byte] = ACTIONS(1838),
    [anon_sym_short] = ACTIONS(1838),
    [anon_sym_int] = ACTIONS(1838),
    [anon_sym_long] = ACTIONS(1838),
    [anon_sym_char] = ACTIONS(1838),
    [anon_sym_float] = ACTIONS(1838),
    [anon_sym_double] = ACTIONS(1838),
    [anon_sym_AT] = ACTIONS(1836),
    [anon_sym_static] = ACTIONS(1838),
    [anon_sym_class] = ACTIONS(1838),
    [anon_sym_public] = ACTIONS(1838),
    [anon_sym_protected] = ACTIONS(1838),
    [anon_sym_private] = ACTIONS(1838),
    [anon_sym_abstract] = ACTIONS(1838),
    [anon_sym_final] = ACTIONS(1838),
    [anon_sym_strictfp] = ACTIONS(1838),
    [anon_sym_default] = ACTIONS(1838),
    [anon_sym_synchronized] = ACTIONS(1838),
    [anon_sym_native] = ACTIONS(1838),
    [anon_sym_interface] = ACTIONS(1838),
    [sym_identifier] = ACTIONS(1840),
    [sym_comment] = ACTIONS(58),
  },
  [772] = {
    [anon_sym_GT] = ACTIONS(1842),
    [anon_sym_AMP] = ACTIONS(1842),
    [anon_sym_COMMA] = ACTIONS(1842),
    [anon_sym_LBRACE] = ACTIONS(1842),
    [anon_sym_DOT] = ACTIONS(1842),
    [anon_sym_LBRACK] = ACTIONS(1842),
    [anon_sym_AT] = ACTIONS(1842),
    [anon_sym_implements] = ACTIONS(1842),
    [anon_sym_COLON_COLON] = ACTIONS(1842),
    [sym_comment] = ACTIONS(58),
  },
  [773] = {
    [sym_type_arguments] = STATE(915),
    [anon_sym_GT] = ACTIONS(1842),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(1842),
    [anon_sym_COMMA] = ACTIONS(1842),
    [anon_sym_LBRACE] = ACTIONS(1842),
    [anon_sym_DOT] = ACTIONS(1842),
    [anon_sym_LBRACK] = ACTIONS(1842),
    [anon_sym_AT] = ACTIONS(1842),
    [anon_sym_COLON_COLON] = ACTIONS(1842),
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
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_AT] = ACTIONS(1017),
    [anon_sym_default] = ACTIONS(1017),
    [anon_sym_throws] = ACTIONS(1017),
    [sym_comment] = ACTIONS(58),
  },
  [777] = {
    [anon_sym_RBRACK] = ACTIONS(1844),
    [sym_comment] = ACTIONS(58),
  },
  [778] = {
    [anon_sym_DOT] = ACTIONS(1620),
    [anon_sym_AT] = ACTIONS(1620),
    [sym_identifier] = ACTIONS(1846),
    [sym_comment] = ACTIONS(58),
  },
  [779] = {
    [sym_type_arguments] = STATE(917),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1620),
    [anon_sym_AT] = ACTIONS(1620),
    [sym_identifier] = ACTIONS(1846),
    [sym_comment] = ACTIONS(58),
  },
  [780] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1848),
    [sym_comment] = ACTIONS(58),
  },
  [781] = {
    [anon_sym_DOT] = ACTIONS(1321),
    [anon_sym_AT] = ACTIONS(1626),
    [sym_identifier] = ACTIONS(1850),
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
    [anon_sym_if] = ACTIONS(1852),
    [anon_sym_RBRACE] = ACTIONS(1852),
    [anon_sym_AT] = ACTIONS(1852),
    [anon_sym_static] = ACTIONS(1852),
    [anon_sym_class] = ACTIONS(1852),
    [anon_sym_public] = ACTIONS(1852),
    [anon_sym_protected] = ACTIONS(1852),
    [anon_sym_private] = ACTIONS(1852),
    [anon_sym_abstract] = ACTIONS(1852),
    [anon_sym_final] = ACTIONS(1852),
    [anon_sym_strictfp] = ACTIONS(1852),
    [anon_sym_default] = ACTIONS(1852),
    [anon_sym_synchronized] = ACTIONS(1852),
    [anon_sym_native] = ACTIONS(1852),
    [sym_comment] = ACTIONS(58),
  },
  [787] = {
    [anon_sym_LPAREN] = ACTIONS(1854),
    [sym_comment] = ACTIONS(58),
  },
  [788] = {
    [sym__statement] = STATE(921),
    [sym__literal] = STATE(795),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(796),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(30),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym__declaration] = STATE(798),
    [sym_module_declaration] = STATE(799),
    [sym_package_declaration] = STATE(799),
    [sym_import_statement] = STATE(799),
    [sym_single_type_import_declaration] = STATE(800),
    [sym_type_import_on_declaraction] = STATE(800),
    [sym_single_static_import_declaration] = STATE(800),
    [sym_static_import_on_demand_declaration] = STATE(800),
    [sym_class_declaration] = STATE(799),
    [sym_normal_class_declaration] = STATE(226),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(799),
    [sym_annotation_type_declaration] = STATE(801),
    [sym_normal_interface_declaration] = STATE(801),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(802),
    [sym_method_declaration] = STATE(799),
    [aux_sym_class_or_interface_type_repeat1] = STATE(804),
    [aux_sym_normal_class_declaration_repeat1] = STATE(805),
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
    [anon_sym_LBRACE] = ACTIONS(1856),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(1652),
    [anon_sym_open] = ACTIONS(1654),
    [anon_sym_module] = ACTIONS(1656),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_package] = ACTIONS(1658),
    [anon_sym_import] = ACTIONS(1660),
    [anon_sym_class] = ACTIONS(1215),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(1662),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [789] = {
    [sym_package_or_type_name] = STATE(82),
    [anon_sym_interface] = ACTIONS(1858),
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(58),
  },
  [790] = {
    [anon_sym_module] = ACTIONS(1860),
    [sym_comment] = ACTIONS(58),
  },
  [791] = {
    [sym_module_identifier] = STATE(924),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(58),
  },
  [792] = {
    [sym_identifier] = ACTIONS(1862),
    [sym_comment] = ACTIONS(58),
  },
  [793] = {
    [sym_package_or_type_name] = STATE(927),
    [anon_sym_static] = ACTIONS(1864),
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(58),
  },
  [794] = {
    [sym_identifier] = ACTIONS(1866),
    [sym_comment] = ACTIONS(58),
  },
  [795] = {
    [sym__semicolon] = ACTIONS(1868),
    [sym_comment] = ACTIONS(58),
  },
  [796] = {
    [sym__semicolon] = ACTIONS(1868),
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
  [797] = {
    [anon_sym_if] = ACTIONS(1870),
    [anon_sym_RBRACE] = ACTIONS(1870),
    [anon_sym_elseif] = ACTIONS(1870),
    [anon_sym_AT] = ACTIONS(1870),
    [anon_sym_static] = ACTIONS(1870),
    [anon_sym_class] = ACTIONS(1870),
    [anon_sym_public] = ACTIONS(1870),
    [anon_sym_protected] = ACTIONS(1870),
    [anon_sym_private] = ACTIONS(1870),
    [anon_sym_abstract] = ACTIONS(1870),
    [anon_sym_final] = ACTIONS(1870),
    [anon_sym_strictfp] = ACTIONS(1870),
    [anon_sym_default] = ACTIONS(1870),
    [anon_sym_synchronized] = ACTIONS(1870),
    [anon_sym_native] = ACTIONS(1870),
    [sym_comment] = ACTIONS(58),
  },
  [798] = {
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_elseif] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_static] = ACTIONS(189),
    [anon_sym_class] = ACTIONS(189),
    [anon_sym_public] = ACTIONS(189),
    [anon_sym_protected] = ACTIONS(189),
    [anon_sym_private] = ACTIONS(189),
    [anon_sym_abstract] = ACTIONS(189),
    [anon_sym_final] = ACTIONS(189),
    [anon_sym_strictfp] = ACTIONS(189),
    [anon_sym_default] = ACTIONS(189),
    [anon_sym_synchronized] = ACTIONS(189),
    [anon_sym_native] = ACTIONS(189),
    [sym_comment] = ACTIONS(58),
  },
  [799] = {
    [anon_sym_if] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_elseif] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_static] = ACTIONS(195),
    [anon_sym_class] = ACTIONS(195),
    [anon_sym_public] = ACTIONS(195),
    [anon_sym_protected] = ACTIONS(195),
    [anon_sym_private] = ACTIONS(195),
    [anon_sym_abstract] = ACTIONS(195),
    [anon_sym_final] = ACTIONS(195),
    [anon_sym_strictfp] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(195),
    [anon_sym_synchronized] = ACTIONS(195),
    [anon_sym_native] = ACTIONS(195),
    [sym_comment] = ACTIONS(58),
  },
  [800] = {
    [anon_sym_if] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_elseif] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(201),
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
    [sym_comment] = ACTIONS(58),
  },
  [801] = {
    [anon_sym_if] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_elseif] = ACTIONS(223),
    [anon_sym_AT] = ACTIONS(223),
    [anon_sym_static] = ACTIONS(223),
    [anon_sym_class] = ACTIONS(223),
    [anon_sym_public] = ACTIONS(223),
    [anon_sym_protected] = ACTIONS(223),
    [anon_sym_private] = ACTIONS(223),
    [anon_sym_abstract] = ACTIONS(223),
    [anon_sym_final] = ACTIONS(223),
    [anon_sym_strictfp] = ACTIONS(223),
    [anon_sym_default] = ACTIONS(223),
    [anon_sym_synchronized] = ACTIONS(223),
    [anon_sym_native] = ACTIONS(223),
    [sym_comment] = ACTIONS(58),
  },
  [802] = {
    [sym_method_body] = STATE(932),
    [sym_block] = STATE(930),
    [sym__semicolon] = ACTIONS(1872),
    [anon_sym_LBRACE] = ACTIONS(1874),
    [sym_comment] = ACTIONS(58),
  },
  [803] = {
    [sym_else_if_clause] = STATE(933),
    [anon_sym_if] = ACTIONS(1852),
    [anon_sym_RBRACE] = ACTIONS(1852),
    [anon_sym_elseif] = ACTIONS(1648),
    [anon_sym_AT] = ACTIONS(1852),
    [anon_sym_static] = ACTIONS(1852),
    [anon_sym_class] = ACTIONS(1852),
    [anon_sym_public] = ACTIONS(1852),
    [anon_sym_protected] = ACTIONS(1852),
    [anon_sym_private] = ACTIONS(1852),
    [anon_sym_abstract] = ACTIONS(1852),
    [anon_sym_final] = ACTIONS(1852),
    [anon_sym_strictfp] = ACTIONS(1852),
    [anon_sym_default] = ACTIONS(1852),
    [anon_sym_synchronized] = ACTIONS(1852),
    [anon_sym_native] = ACTIONS(1852),
    [sym_comment] = ACTIONS(58),
  },
  [804] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_open] = ACTIONS(1876),
    [anon_sym_module] = ACTIONS(1860),
    [anon_sym_package] = ACTIONS(1878),
    [sym_comment] = ACTIONS(58),
  },
  [805] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_modifier] = STATE(127),
    [sym_type_parameters] = STATE(37),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(938),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(1880),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(1882),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(1884),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [806] = {
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
    [anon_sym_COLON] = ACTIONS(1886),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [807] = {
    [anon_sym_boolean] = ACTIONS(1125),
    [anon_sym_byte] = ACTIONS(1125),
    [anon_sym_short] = ACTIONS(1125),
    [anon_sym_int] = ACTIONS(1125),
    [anon_sym_long] = ACTIONS(1125),
    [anon_sym_char] = ACTIONS(1125),
    [anon_sym_float] = ACTIONS(1125),
    [anon_sym_double] = ACTIONS(1125),
    [anon_sym_AT] = ACTIONS(1123),
    [anon_sym_static] = ACTIONS(1125),
    [anon_sym_class] = ACTIONS(1125),
    [anon_sym_public] = ACTIONS(1125),
    [anon_sym_protected] = ACTIONS(1125),
    [anon_sym_private] = ACTIONS(1125),
    [anon_sym_abstract] = ACTIONS(1125),
    [anon_sym_final] = ACTIONS(1125),
    [anon_sym_strictfp] = ACTIONS(1125),
    [anon_sym_default] = ACTIONS(1125),
    [anon_sym_synchronized] = ACTIONS(1125),
    [anon_sym_native] = ACTIONS(1125),
    [sym_identifier] = ACTIONS(1127),
    [sym_comment] = ACTIONS(58),
  },
  [808] = {
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
    [anon_sym_default] = ACTIONS(1137),
    [anon_sym_synchronized] = ACTIONS(1137),
    [anon_sym_native] = ACTIONS(1137),
    [sym_identifier] = ACTIONS(1139),
    [sym_comment] = ACTIONS(58),
  },
  [809] = {
    [anon_sym_if] = ACTIONS(1237),
    [anon_sym_RBRACE] = ACTIONS(1237),
    [anon_sym_elseif] = ACTIONS(1237),
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
    [anon_sym_default] = ACTIONS(1237),
    [anon_sym_synchronized] = ACTIONS(1237),
    [anon_sym_native] = ACTIONS(1237),
    [anon_sym_COLON_COLON] = ACTIONS(1237),
    [sym_comment] = ACTIONS(58),
  },
  [810] = {
    [sym_class_body] = STATE(940),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [sym_comment] = ACTIONS(58),
  },
  [811] = {
    [anon_sym_if] = ACTIONS(1257),
    [anon_sym_RBRACE] = ACTIONS(1257),
    [anon_sym_elseif] = ACTIONS(1257),
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
    [anon_sym_synchronized] = ACTIONS(1257),
    [anon_sym_native] = ACTIONS(1257),
    [sym_comment] = ACTIONS(58),
  },
  [812] = {
    [sym_super_interfaces] = STATE(941),
    [sym_class_body] = STATE(940),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [813] = {
    [ts_builtin_sym_end] = ACTIONS(1888),
    [sym_decimal_integer_literal] = ACTIONS(1890),
    [sym_hex_integer_literal] = ACTIONS(1890),
    [sym_octal_integer_literal] = ACTIONS(1890),
    [sym_binary_integer_literal] = ACTIONS(1890),
    [sym_decimal_floating_point_literal] = ACTIONS(1890),
    [sym_hex_floating_point_literal] = ACTIONS(1892),
    [anon_sym_true] = ACTIONS(1890),
    [anon_sym_false] = ACTIONS(1890),
    [anon_sym_SQUOTE] = ACTIONS(1888),
    [sym_string_literal] = ACTIONS(1888),
    [sym_null_literal] = ACTIONS(1890),
    [anon_sym_LT] = ACTIONS(1888),
    [anon_sym_LPAREN] = ACTIONS(1888),
    [anon_sym_BANG] = ACTIONS(1888),
    [anon_sym_TILDE] = ACTIONS(1888),
    [anon_sym_PLUS_PLUS] = ACTIONS(1888),
    [anon_sym_DASH_DASH] = ACTIONS(1888),
    [anon_sym_RBRACE] = ACTIONS(1888),
    [anon_sym_boolean] = ACTIONS(1890),
    [anon_sym_byte] = ACTIONS(1890),
    [anon_sym_short] = ACTIONS(1890),
    [anon_sym_int] = ACTIONS(1890),
    [anon_sym_long] = ACTIONS(1890),
    [anon_sym_char] = ACTIONS(1890),
    [anon_sym_float] = ACTIONS(1890),
    [anon_sym_double] = ACTIONS(1890),
    [anon_sym_AT] = ACTIONS(1888),
    [anon_sym_open] = ACTIONS(1890),
    [anon_sym_module] = ACTIONS(1890),
    [anon_sym_static] = ACTIONS(1890),
    [anon_sym_package] = ACTIONS(1890),
    [anon_sym_import] = ACTIONS(1890),
    [anon_sym_class] = ACTIONS(1890),
    [anon_sym_public] = ACTIONS(1890),
    [anon_sym_protected] = ACTIONS(1890),
    [anon_sym_private] = ACTIONS(1890),
    [anon_sym_abstract] = ACTIONS(1890),
    [anon_sym_final] = ACTIONS(1890),
    [anon_sym_strictfp] = ACTIONS(1890),
    [anon_sym_default] = ACTIONS(1890),
    [anon_sym_synchronized] = ACTIONS(1890),
    [anon_sym_native] = ACTIONS(1890),
    [anon_sym_interface] = ACTIONS(1890),
    [sym_identifier] = ACTIONS(1892),
    [sym_comment] = ACTIONS(58),
  },
  [814] = {
    [ts_builtin_sym_end] = ACTIONS(1894),
    [sym_decimal_integer_literal] = ACTIONS(1896),
    [sym_hex_integer_literal] = ACTIONS(1896),
    [sym_octal_integer_literal] = ACTIONS(1896),
    [sym_binary_integer_literal] = ACTIONS(1896),
    [sym_decimal_floating_point_literal] = ACTIONS(1896),
    [sym_hex_floating_point_literal] = ACTIONS(1898),
    [anon_sym_true] = ACTIONS(1896),
    [anon_sym_false] = ACTIONS(1896),
    [anon_sym_SQUOTE] = ACTIONS(1894),
    [sym_string_literal] = ACTIONS(1894),
    [sym_null_literal] = ACTIONS(1896),
    [anon_sym_LT] = ACTIONS(1894),
    [anon_sym_LPAREN] = ACTIONS(1894),
    [anon_sym_BANG] = ACTIONS(1894),
    [anon_sym_TILDE] = ACTIONS(1894),
    [anon_sym_PLUS_PLUS] = ACTIONS(1894),
    [anon_sym_DASH_DASH] = ACTIONS(1894),
    [anon_sym_RBRACE] = ACTIONS(1894),
    [anon_sym_boolean] = ACTIONS(1896),
    [anon_sym_byte] = ACTIONS(1896),
    [anon_sym_short] = ACTIONS(1896),
    [anon_sym_int] = ACTIONS(1896),
    [anon_sym_long] = ACTIONS(1896),
    [anon_sym_char] = ACTIONS(1896),
    [anon_sym_float] = ACTIONS(1896),
    [anon_sym_double] = ACTIONS(1896),
    [anon_sym_AT] = ACTIONS(1894),
    [anon_sym_open] = ACTIONS(1896),
    [anon_sym_module] = ACTIONS(1896),
    [anon_sym_static] = ACTIONS(1896),
    [anon_sym_package] = ACTIONS(1896),
    [anon_sym_import] = ACTIONS(1896),
    [anon_sym_class] = ACTIONS(1896),
    [anon_sym_public] = ACTIONS(1896),
    [anon_sym_protected] = ACTIONS(1896),
    [anon_sym_private] = ACTIONS(1896),
    [anon_sym_abstract] = ACTIONS(1896),
    [anon_sym_final] = ACTIONS(1896),
    [anon_sym_strictfp] = ACTIONS(1896),
    [anon_sym_default] = ACTIONS(1896),
    [anon_sym_synchronized] = ACTIONS(1896),
    [anon_sym_native] = ACTIONS(1896),
    [anon_sym_interface] = ACTIONS(1896),
    [sym_identifier] = ACTIONS(1898),
    [sym_comment] = ACTIONS(58),
  },
  [815] = {
    [sym_dims] = STATE(944),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_default_value] = STATE(945),
    [aux_sym_class_or_interface_type_repeat1] = STATE(497),
    [aux_sym_dims_repeat1] = STATE(498),
    [sym__semicolon] = ACTIONS(1900),
    [anon_sym_LBRACK] = ACTIONS(999),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_default] = ACTIONS(1902),
    [sym_comment] = ACTIONS(58),
  },
  [816] = {
    [anon_sym_RPAREN] = ACTIONS(1904),
    [sym_comment] = ACTIONS(58),
  },
  [817] = {
    [sym__expression] = STATE(947),
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
  [818] = {
    [sym__expression] = STATE(948),
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
  [819] = {
    [sym__expression] = STATE(949),
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
  [820] = {
    [sym__expression] = STATE(950),
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
  [821] = {
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
  [822] = {
    [sym__expression] = STATE(951),
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
  [823] = {
    [sym__semicolon] = ACTIONS(1906),
    [anon_sym_RPAREN] = ACTIONS(1906),
    [anon_sym_COMMA] = ACTIONS(1906),
    [anon_sym_RBRACE] = ACTIONS(1906),
    [sym_comment] = ACTIONS(58),
  },
  [824] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [825] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [826] = {
    [anon_sym_GT] = ACTIONS(1908),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(1910),
    [anon_sym_LT_EQ] = ACTIONS(1910),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(1912),
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
  [827] = {
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
    [sym_element_value] = STATE(959),
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
    [anon_sym_true] = ACTIONS(1129),
    [anon_sym_false] = ACTIONS(1129),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [anon_sym_LBRACE] = ACTIONS(1133),
    [anon_sym_RBRACE] = ACTIONS(1914),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [828] = {
    [anon_sym_COMMA] = ACTIONS(1916),
    [anon_sym_RBRACE] = ACTIONS(1914),
    [sym_comment] = ACTIONS(58),
  },
  [829] = {
    [sym_unary_expression] = STATE(551),
    [sym_conditional_and_expression] = STATE(961),
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
  [830] = {
    [sym__expression] = STATE(962),
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
  [831] = {
    [sym_unary_expression] = STATE(551),
    [sym_inclusive_or_expression] = STATE(963),
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
  [832] = {
    [sym_unary_expression] = STATE(551),
    [sym_exclusive_or_expression] = STATE(964),
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
  [833] = {
    [sym_unary_expression] = STATE(551),
    [sym_and_expression] = STATE(843),
    [sym_relational_expression] = STATE(693),
    [sym_equality_expression] = STATE(694),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [834] = {
    [sym_unary_expression] = STATE(551),
    [sym_shift_expression] = STATE(965),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [835] = {
    [sym_unary_expression] = STATE(551),
    [sym_relational_expression] = STATE(966),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [836] = {
    [sym_unary_expression] = STATE(551),
    [sym_additive_expression] = STATE(967),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [837] = {
    [sym_unary_expression] = STATE(551),
    [sym_multiplicative_expression] = STATE(968),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [838] = {
    [sym_unary_expression] = STATE(848),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [839] = {
    [anon_sym_AMP_AMP] = ACTIONS(1443),
    [anon_sym_PIPE_PIPE] = ACTIONS(1918),
    [anon_sym_RPAREN] = ACTIONS(1918),
    [anon_sym_COMMA] = ACTIONS(1918),
    [anon_sym_QMARK] = ACTIONS(1918),
    [sym_comment] = ACTIONS(58),
  },
  [840] = {
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
    [anon_sym_COLON] = ACTIONS(1920),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [841] = {
    [anon_sym_AMP_AMP] = ACTIONS(1922),
    [anon_sym_PIPE_PIPE] = ACTIONS(1922),
    [anon_sym_PIPE] = ACTIONS(1449),
    [anon_sym_RPAREN] = ACTIONS(1922),
    [anon_sym_COMMA] = ACTIONS(1922),
    [anon_sym_QMARK] = ACTIONS(1922),
    [sym_comment] = ACTIONS(58),
  },
  [842] = {
    [anon_sym_AMP_AMP] = ACTIONS(1924),
    [anon_sym_PIPE_PIPE] = ACTIONS(1924),
    [anon_sym_PIPE] = ACTIONS(1926),
    [anon_sym_CARET] = ACTIONS(1455),
    [anon_sym_RPAREN] = ACTIONS(1924),
    [anon_sym_COMMA] = ACTIONS(1924),
    [anon_sym_QMARK] = ACTIONS(1924),
    [sym_comment] = ACTIONS(58),
  },
  [843] = {
    [sym__semicolon] = ACTIONS(1928),
    [anon_sym_AMP_AMP] = ACTIONS(1928),
    [anon_sym_PIPE_PIPE] = ACTIONS(1928),
    [anon_sym_PIPE] = ACTIONS(1930),
    [anon_sym_CARET] = ACTIONS(1928),
    [anon_sym_RPAREN] = ACTIONS(1928),
    [anon_sym_COMMA] = ACTIONS(1928),
    [anon_sym_QMARK] = ACTIONS(1928),
    [anon_sym_RBRACE] = ACTIONS(1928),
    [sym_comment] = ACTIONS(58),
  },
  [844] = {
    [anon_sym_LT] = ACTIONS(1932),
    [anon_sym_EQ_EQ] = ACTIONS(1934),
    [anon_sym_BANG_EQ] = ACTIONS(1934),
    [anon_sym_AMP_AMP] = ACTIONS(1934),
    [anon_sym_PIPE_PIPE] = ACTIONS(1934),
    [anon_sym_PIPE] = ACTIONS(1932),
    [anon_sym_CARET] = ACTIONS(1934),
    [anon_sym_LT_LT] = ACTIONS(1475),
    [anon_sym_GT_GT] = ACTIONS(1477),
    [anon_sym_GT_GT_GT] = ACTIONS(1475),
    [anon_sym_RPAREN] = ACTIONS(1934),
    [anon_sym_COMMA] = ACTIONS(1934),
    [anon_sym_QMARK] = ACTIONS(1934),
    [sym_comment] = ACTIONS(58),
  },
  [845] = {
    [anon_sym_LT] = ACTIONS(1461),
    [anon_sym_EQ_EQ] = ACTIONS(1936),
    [anon_sym_BANG_EQ] = ACTIONS(1936),
    [anon_sym_AMP_AMP] = ACTIONS(1938),
    [anon_sym_PIPE_PIPE] = ACTIONS(1938),
    [anon_sym_PIPE] = ACTIONS(1940),
    [anon_sym_CARET] = ACTIONS(1938),
    [anon_sym_RPAREN] = ACTIONS(1938),
    [anon_sym_COMMA] = ACTIONS(1938),
    [anon_sym_QMARK] = ACTIONS(1938),
    [sym_comment] = ACTIONS(58),
  },
  [846] = {
    [anon_sym_LT] = ACTIONS(1942),
    [anon_sym_EQ_EQ] = ACTIONS(1944),
    [anon_sym_BANG_EQ] = ACTIONS(1944),
    [anon_sym_AMP_AMP] = ACTIONS(1944),
    [anon_sym_PIPE_PIPE] = ACTIONS(1944),
    [anon_sym_PLUS] = ACTIONS(1483),
    [anon_sym_DASH] = ACTIONS(1483),
    [anon_sym_PIPE] = ACTIONS(1942),
    [anon_sym_CARET] = ACTIONS(1944),
    [anon_sym_LT_LT] = ACTIONS(1944),
    [anon_sym_GT_GT] = ACTIONS(1942),
    [anon_sym_GT_GT_GT] = ACTIONS(1944),
    [anon_sym_RPAREN] = ACTIONS(1944),
    [anon_sym_COMMA] = ACTIONS(1944),
    [anon_sym_QMARK] = ACTIONS(1944),
    [sym_comment] = ACTIONS(58),
  },
  [847] = {
    [anon_sym_LT] = ACTIONS(1946),
    [anon_sym_EQ_EQ] = ACTIONS(1948),
    [anon_sym_BANG_EQ] = ACTIONS(1948),
    [anon_sym_AMP_AMP] = ACTIONS(1948),
    [anon_sym_PIPE_PIPE] = ACTIONS(1948),
    [anon_sym_PLUS] = ACTIONS(1948),
    [anon_sym_DASH] = ACTIONS(1948),
    [anon_sym_STAR] = ACTIONS(1489),
    [anon_sym_SLASH] = ACTIONS(1491),
    [anon_sym_PIPE] = ACTIONS(1946),
    [anon_sym_CARET] = ACTIONS(1948),
    [anon_sym_PERCENT] = ACTIONS(1489),
    [anon_sym_LT_LT] = ACTIONS(1948),
    [anon_sym_GT_GT] = ACTIONS(1946),
    [anon_sym_GT_GT_GT] = ACTIONS(1948),
    [anon_sym_RPAREN] = ACTIONS(1948),
    [anon_sym_COMMA] = ACTIONS(1948),
    [anon_sym_QMARK] = ACTIONS(1948),
    [sym_comment] = ACTIONS(58),
  },
  [848] = {
    [sym__semicolon] = ACTIONS(1950),
    [anon_sym_LT] = ACTIONS(1952),
    [anon_sym_EQ_EQ] = ACTIONS(1950),
    [anon_sym_BANG_EQ] = ACTIONS(1950),
    [anon_sym_AMP_AMP] = ACTIONS(1950),
    [anon_sym_PIPE_PIPE] = ACTIONS(1950),
    [anon_sym_PLUS] = ACTIONS(1950),
    [anon_sym_DASH] = ACTIONS(1950),
    [anon_sym_STAR] = ACTIONS(1950),
    [anon_sym_SLASH] = ACTIONS(1952),
    [anon_sym_PIPE] = ACTIONS(1952),
    [anon_sym_CARET] = ACTIONS(1950),
    [anon_sym_PERCENT] = ACTIONS(1950),
    [anon_sym_LT_LT] = ACTIONS(1950),
    [anon_sym_GT_GT] = ACTIONS(1952),
    [anon_sym_GT_GT_GT] = ACTIONS(1950),
    [anon_sym_RPAREN] = ACTIONS(1950),
    [anon_sym_COMMA] = ACTIONS(1950),
    [anon_sym_QMARK] = ACTIONS(1950),
    [anon_sym_RBRACE] = ACTIONS(1950),
    [sym_comment] = ACTIONS(58),
  },
  [849] = {
    [anon_sym_RBRACE] = ACTIONS(1954),
    [anon_sym_requires] = ACTIONS(1954),
    [anon_sym_exports] = ACTIONS(1954),
    [anon_sym_opens] = ACTIONS(1954),
    [anon_sym_uses] = ACTIONS(1954),
    [anon_sym_provides] = ACTIONS(1954),
    [sym_comment] = ACTIONS(58),
  },
  [850] = {
    [sym__semicolon] = ACTIONS(1956),
    [anon_sym_COMMA] = ACTIONS(1515),
    [sym_comment] = ACTIONS(58),
  },
  [851] = {
    [sym__semicolon] = ACTIONS(1958),
    [anon_sym_COMMA] = ACTIONS(1958),
    [anon_sym_DOT] = ACTIONS(1169),
    [sym_comment] = ACTIONS(58),
  },
  [852] = {
    [sym_package_or_type_name] = STATE(971),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(58),
  },
  [853] = {
    [sym__semicolon] = ACTIONS(1956),
    [anon_sym_COMMA] = ACTIONS(1960),
    [sym_comment] = ACTIONS(58),
  },
  [854] = {
    [sym__semicolon] = ACTIONS(1101),
    [anon_sym_LT] = ACTIONS(1101),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [anon_sym_RBRACE] = ACTIONS(1101),
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
    [anon_sym_default] = ACTIONS(1103),
    [anon_sym_synchronized] = ACTIONS(1103),
    [anon_sym_native] = ACTIONS(1103),
    [anon_sym_interface] = ACTIONS(1103),
    [sym_identifier] = ACTIONS(1105),
    [sym_comment] = ACTIONS(58),
  },
  [855] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_RBRACE] = ACTIONS(1962),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [856] = {
    [sym__semicolon] = ACTIONS(1237),
    [anon_sym_LT] = ACTIONS(1237),
    [anon_sym_LBRACE] = ACTIONS(1237),
    [anon_sym_RBRACE] = ACTIONS(1237),
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
    [anon_sym_default] = ACTIONS(1239),
    [anon_sym_synchronized] = ACTIONS(1239),
    [anon_sym_native] = ACTIONS(1239),
    [anon_sym_interface] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1241),
    [sym_comment] = ACTIONS(58),
  },
  [857] = {
    [sym_class_body] = STATE(974),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [sym_comment] = ACTIONS(58),
  },
  [858] = {
    [sym__semicolon] = ACTIONS(1257),
    [anon_sym_LT] = ACTIONS(1257),
    [anon_sym_LBRACE] = ACTIONS(1257),
    [anon_sym_RBRACE] = ACTIONS(1257),
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
    [anon_sym_default] = ACTIONS(1259),
    [anon_sym_synchronized] = ACTIONS(1259),
    [anon_sym_native] = ACTIONS(1259),
    [anon_sym_interface] = ACTIONS(1259),
    [sym_identifier] = ACTIONS(1261),
    [sym_comment] = ACTIONS(58),
  },
  [859] = {
    [sym__semicolon] = ACTIONS(1269),
    [anon_sym_LT] = ACTIONS(1269),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_RBRACE] = ACTIONS(1269),
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
    [anon_sym_default] = ACTIONS(1271),
    [anon_sym_synchronized] = ACTIONS(1271),
    [anon_sym_native] = ACTIONS(1271),
    [anon_sym_interface] = ACTIONS(1271),
    [sym_identifier] = ACTIONS(1273),
    [sym_comment] = ACTIONS(58),
  },
  [860] = {
    [sym__semicolon] = ACTIONS(1281),
    [anon_sym_LT] = ACTIONS(1281),
    [anon_sym_LBRACE] = ACTIONS(1281),
    [anon_sym_RBRACE] = ACTIONS(1281),
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
    [anon_sym_default] = ACTIONS(1283),
    [anon_sym_synchronized] = ACTIONS(1283),
    [anon_sym_native] = ACTIONS(1283),
    [anon_sym_interface] = ACTIONS(1283),
    [sym_identifier] = ACTIONS(1285),
    [sym_comment] = ACTIONS(58),
  },
  [861] = {
    [anon_sym_LBRACE] = ACTIONS(1964),
    [anon_sym_throws] = ACTIONS(1964),
    [sym_comment] = ACTIONS(58),
  },
  [862] = {
    [anon_sym_DOT] = ACTIONS(1966),
    [anon_sym_LBRACK] = ACTIONS(1966),
    [anon_sym_COLON_COLON] = ACTIONS(1966),
    [sym_comment] = ACTIONS(58),
  },
  [863] = {
    [anon_sym_DOT] = ACTIONS(1968),
    [anon_sym_LBRACK] = ACTIONS(1968),
    [anon_sym_COLON_COLON] = ACTIONS(1968),
    [sym_comment] = ACTIONS(58),
  },
  [864] = {
    [anon_sym_class] = ACTIONS(1970),
    [sym_comment] = ACTIONS(58),
  },
  [865] = {
    [anon_sym_DOT] = ACTIONS(1972),
    [anon_sym_LBRACK] = ACTIONS(1972),
    [sym_comment] = ACTIONS(58),
  },
  [866] = {
    [sym__semicolon] = ACTIONS(1974),
    [sym_comment] = ACTIONS(58),
  },
  [867] = {
    [aux_sym_argument_list_repeat1] = STATE(978),
    [anon_sym_GT] = ACTIONS(1684),
    [anon_sym_LT] = ACTIONS(1684),
    [anon_sym_EQ_EQ] = ACTIONS(1686),
    [anon_sym_GT_EQ] = ACTIONS(1686),
    [anon_sym_LT_EQ] = ACTIONS(1686),
    [anon_sym_BANG_EQ] = ACTIONS(1686),
    [anon_sym_AMP_AMP] = ACTIONS(1976),
    [anon_sym_PIPE_PIPE] = ACTIONS(1978),
    [anon_sym_PLUS] = ACTIONS(1980),
    [anon_sym_DASH] = ACTIONS(1980),
    [anon_sym_STAR] = ACTIONS(1982),
    [anon_sym_SLASH] = ACTIONS(1984),
    [anon_sym_AMP] = ACTIONS(1688),
    [anon_sym_PIPE] = ACTIONS(1986),
    [anon_sym_CARET] = ACTIONS(1978),
    [anon_sym_PERCENT] = ACTIONS(1982),
    [anon_sym_LT_LT] = ACTIONS(1982),
    [anon_sym_GT_GT] = ACTIONS(1984),
    [anon_sym_GT_GT_GT] = ACTIONS(1982),
    [anon_sym_RPAREN] = ACTIONS(1988),
    [anon_sym_COMMA] = ACTIONS(1990),
    [anon_sym_QMARK] = ACTIONS(1992),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [868] = {
    [anon_sym_RPAREN] = ACTIONS(1994),
    [sym_comment] = ACTIONS(58),
  },
  [869] = {
    [anon_sym_DOT] = ACTIONS(1996),
    [anon_sym_LBRACK] = ACTIONS(1996),
    [anon_sym_COLON_COLON] = ACTIONS(1996),
    [sym_comment] = ACTIONS(58),
  },
  [870] = {
    [anon_sym_DOT] = ACTIONS(1998),
    [anon_sym_LBRACK] = ACTIONS(1998),
    [anon_sym_COLON_COLON] = ACTIONS(1998),
    [sym_comment] = ACTIONS(58),
  },
  [871] = {
    [sym_identifier] = ACTIONS(2000),
    [sym_comment] = ACTIONS(58),
  },
  [872] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(982),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2002),
    [sym_comment] = ACTIONS(58),
  },
  [873] = {
    [anon_sym_LPAREN] = ACTIONS(2004),
    [sym_comment] = ACTIONS(58),
  },
  [874] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(472),
    [anon_sym_LPAREN] = ACTIONS(2004),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(969),
    [anon_sym_AT] = ACTIONS(969),
    [sym_comment] = ACTIONS(58),
  },
  [875] = {
    [anon_sym_LPAREN] = ACTIONS(2006),
    [sym_comment] = ACTIONS(58),
  },
  [876] = {
    [sym_type_arguments] = STATE(873),
    [sym_type_arguments_or_diamond] = STATE(984),
    [anon_sym_LT] = ACTIONS(1762),
    [anon_sym_LPAREN] = ACTIONS(2006),
    [anon_sym_DOT] = ACTIONS(2008),
    [anon_sym_LT_GT] = ACTIONS(1768),
    [sym_comment] = ACTIONS(58),
  },
  [877] = {
    [sym_type_arguments] = STATE(873),
    [sym_type_arguments_or_diamond] = STATE(875),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(876),
    [anon_sym_LT] = ACTIONS(1762),
    [anon_sym_LPAREN] = ACTIONS(1764),
    [anon_sym_DOT] = ACTIONS(2010),
    [anon_sym_LT_GT] = ACTIONS(1768),
    [sym_comment] = ACTIONS(58),
  },
  [878] = {
    [anon_sym_LPAREN] = ACTIONS(2012),
    [sym_comment] = ACTIONS(58),
  },
  [879] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [880] = {
    [sym_array_initializer] = STATE(989),
    [anon_sym_LBRACE] = ACTIONS(2016),
    [sym_comment] = ACTIONS(58),
  },
  [881] = {
    [sym_dims] = STATE(989),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_DOT] = ACTIONS(2018),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(2018),
    [sym_comment] = ACTIONS(58),
  },
  [882] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(991),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2020),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [883] = {
    [sym_type_arguments] = STATE(992),
    [sym_type_arguments_or_diamond] = STATE(984),
    [aux_sym_class_or_interface_type_repeat2] = STATE(472),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(993),
    [anon_sym_LT] = ACTIONS(1762),
    [anon_sym_LPAREN] = ACTIONS(2006),
    [anon_sym_DOT] = ACTIONS(1766),
    [anon_sym_LBRACK] = ACTIONS(969),
    [anon_sym_AT] = ACTIONS(969),
    [anon_sym_LT_GT] = ACTIONS(1768),
    [sym_comment] = ACTIONS(58),
  },
  [884] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(994),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1994),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [885] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [886] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [887] = {
    [anon_sym_GT] = ACTIONS(2022),
    [anon_sym_LT] = ACTIONS(2022),
    [anon_sym_EQ_EQ] = ACTIONS(2024),
    [anon_sym_GT_EQ] = ACTIONS(2024),
    [anon_sym_LT_EQ] = ACTIONS(2024),
    [anon_sym_BANG_EQ] = ACTIONS(2024),
    [anon_sym_AMP_AMP] = ACTIONS(2026),
    [anon_sym_PIPE_PIPE] = ACTIONS(2028),
    [anon_sym_PLUS] = ACTIONS(2030),
    [anon_sym_DASH] = ACTIONS(2030),
    [anon_sym_STAR] = ACTIONS(2032),
    [anon_sym_SLASH] = ACTIONS(2034),
    [anon_sym_AMP] = ACTIONS(2036),
    [anon_sym_PIPE] = ACTIONS(2038),
    [anon_sym_CARET] = ACTIONS(2028),
    [anon_sym_PERCENT] = ACTIONS(2032),
    [anon_sym_LT_LT] = ACTIONS(2032),
    [anon_sym_GT_GT] = ACTIONS(2034),
    [anon_sym_GT_GT_GT] = ACTIONS(2032),
    [anon_sym_QMARK] = ACTIONS(2040),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(2042),
    [sym_comment] = ACTIONS(58),
  },
  [888] = {
    [anon_sym_new] = ACTIONS(2044),
    [sym_comment] = ACTIONS(58),
  },
  [889] = {
    [anon_sym_DOT] = ACTIONS(2018),
    [anon_sym_COLON_COLON] = ACTIONS(2018),
    [sym_comment] = ACTIONS(58),
  },
  [890] = {
    [sym__expression] = STATE(887),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [891] = {
    [anon_sym_DOT] = ACTIONS(2046),
    [anon_sym_LBRACK] = ACTIONS(2046),
    [anon_sym_AT] = ACTIONS(2046),
    [anon_sym_COLON_COLON] = ACTIONS(2046),
    [sym_comment] = ACTIONS(58),
  },
  [892] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(2048),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [893] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_expr] = STATE(1003),
    [aux_sym_class_or_interface_type_repeat1] = STATE(892),
    [anon_sym_DOT] = ACTIONS(2050),
    [anon_sym_LBRACK] = ACTIONS(1790),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(2050),
    [sym_comment] = ACTIONS(58),
  },
  [894] = {
    [sym__expression] = STATE(1004),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [anon_sym_RBRACK] = ACTIONS(695),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [895] = {
    [anon_sym_DOT] = ACTIONS(2052),
    [anon_sym_COLON_COLON] = ACTIONS(2054),
    [sym_comment] = ACTIONS(58),
  },
  [896] = {
    [anon_sym_LPAREN] = ACTIONS(2056),
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [897] = {
    [sym_identifier] = ACTIONS(2058),
    [sym_comment] = ACTIONS(58),
  },
  [898] = {
    [sym__semicolon] = ACTIONS(2060),
    [anon_sym_LT] = ACTIONS(2060),
    [anon_sym_LBRACE] = ACTIONS(2060),
    [anon_sym_RBRACE] = ACTIONS(2060),
    [anon_sym_boolean] = ACTIONS(2062),
    [anon_sym_byte] = ACTIONS(2062),
    [anon_sym_short] = ACTIONS(2062),
    [anon_sym_int] = ACTIONS(2062),
    [anon_sym_long] = ACTIONS(2062),
    [anon_sym_char] = ACTIONS(2062),
    [anon_sym_float] = ACTIONS(2062),
    [anon_sym_double] = ACTIONS(2062),
    [anon_sym_AT] = ACTIONS(2060),
    [anon_sym_static] = ACTIONS(2062),
    [anon_sym_class] = ACTIONS(2062),
    [anon_sym_public] = ACTIONS(2062),
    [anon_sym_protected] = ACTIONS(2062),
    [anon_sym_private] = ACTIONS(2062),
    [anon_sym_abstract] = ACTIONS(2062),
    [anon_sym_final] = ACTIONS(2062),
    [anon_sym_strictfp] = ACTIONS(2062),
    [anon_sym_default] = ACTIONS(2062),
    [anon_sym_synchronized] = ACTIONS(2062),
    [anon_sym_native] = ACTIONS(2062),
    [anon_sym_interface] = ACTIONS(2062),
    [sym_identifier] = ACTIONS(2064),
    [sym_comment] = ACTIONS(58),
  },
  [899] = {
    [sym_type_argument] = STATE(1009),
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
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(377),
    [sym_comment] = ACTIONS(58),
  },
  [900] = {
    [anon_sym_LPAREN] = ACTIONS(2066),
    [sym_comment] = ACTIONS(58),
  },
  [901] = {
    [sym_type_arguments] = STATE(739),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_class_or_interface_type_to_instantiate] = STATE(742),
    [aux_sym_class_or_interface_type_repeat1] = STATE(879),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1770),
    [sym_comment] = ACTIONS(58),
  },
  [902] = {
    [anon_sym_LPAREN] = ACTIONS(2056),
    [anon_sym_DOT] = ACTIONS(2068),
    [anon_sym_LBRACK] = ACTIONS(2068),
    [anon_sym_COLON_COLON] = ACTIONS(2068),
    [sym_comment] = ACTIONS(58),
  },
  [903] = {
    [anon_sym_super] = ACTIONS(2070),
    [sym_identifier] = ACTIONS(2072),
    [sym_comment] = ACTIONS(58),
  },
  [904] = {
    [anon_sym_DOT] = ACTIONS(2074),
    [anon_sym_LBRACK] = ACTIONS(2074),
    [anon_sym_COLON_COLON] = ACTIONS(2074),
    [sym_comment] = ACTIONS(58),
  },
  [905] = {
    [anon_sym_GT] = ACTIONS(2022),
    [anon_sym_LT] = ACTIONS(2022),
    [anon_sym_EQ_EQ] = ACTIONS(2024),
    [anon_sym_GT_EQ] = ACTIONS(2024),
    [anon_sym_LT_EQ] = ACTIONS(2024),
    [anon_sym_BANG_EQ] = ACTIONS(2024),
    [anon_sym_AMP_AMP] = ACTIONS(2026),
    [anon_sym_PIPE_PIPE] = ACTIONS(2028),
    [anon_sym_PLUS] = ACTIONS(2030),
    [anon_sym_DASH] = ACTIONS(2030),
    [anon_sym_STAR] = ACTIONS(2032),
    [anon_sym_SLASH] = ACTIONS(2034),
    [anon_sym_AMP] = ACTIONS(2036),
    [anon_sym_PIPE] = ACTIONS(2038),
    [anon_sym_CARET] = ACTIONS(2028),
    [anon_sym_PERCENT] = ACTIONS(2032),
    [anon_sym_LT_LT] = ACTIONS(2032),
    [anon_sym_GT_GT] = ACTIONS(2034),
    [anon_sym_GT_GT_GT] = ACTIONS(2032),
    [anon_sym_QMARK] = ACTIONS(2040),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(2076),
    [sym_comment] = ACTIONS(58),
  },
  [906] = {
    [anon_sym_LPAREN] = ACTIONS(2056),
    [anon_sym_DOT] = ACTIONS(1996),
    [anon_sym_LBRACK] = ACTIONS(1996),
    [anon_sym_COLON_COLON] = ACTIONS(1996),
    [sym_comment] = ACTIONS(58),
  },
  [907] = {
    [anon_sym_DOT] = ACTIONS(2078),
    [anon_sym_LBRACK] = ACTIONS(2078),
    [anon_sym_COLON_COLON] = ACTIONS(2078),
    [sym_comment] = ACTIONS(58),
  },
  [908] = {
    [anon_sym_RPAREN] = ACTIONS(2080),
    [sym_comment] = ACTIONS(58),
  },
  [909] = {
    [sym__semicolon] = ACTIONS(1383),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LBRACE] = ACTIONS(1383),
    [anon_sym_RBRACE] = ACTIONS(1383),
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
    [anon_sym_default] = ACTIONS(1385),
    [anon_sym_synchronized] = ACTIONS(1385),
    [anon_sym_native] = ACTIONS(1385),
    [anon_sym_interface] = ACTIONS(1385),
    [sym_identifier] = ACTIONS(1387),
    [sym_comment] = ACTIONS(58),
  },
  [910] = {
    [sym_super_interfaces] = STATE(1014),
    [sym_class_body] = STATE(974),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [911] = {
    [sym_interface_body] = STATE(1015),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym_comment] = ACTIONS(58),
  },
  [912] = {
    [anon_sym_LBRACE] = ACTIONS(1295),
    [anon_sym_DOT] = ACTIONS(1295),
    [anon_sym_implements] = ACTIONS(1295),
    [anon_sym_this] = ACTIONS(1295),
    [anon_sym_super] = ACTIONS(1295),
    [anon_sym_new] = ACTIONS(1295),
    [sym_comment] = ACTIONS(58),
  },
  [913] = {
    [sym_type_arguments] = STATE(915),
    [anon_sym_LT] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(1842),
    [anon_sym_DOT] = ACTIONS(1842),
    [anon_sym_implements] = ACTIONS(1842),
    [sym_comment] = ACTIONS(58),
  },
  [914] = {
    [sym__semicolon] = ACTIONS(2082),
    [anon_sym_COMMA] = ACTIONS(2082),
    [sym_comment] = ACTIONS(58),
  },
  [915] = {
    [anon_sym_GT] = ACTIONS(2084),
    [anon_sym_AMP] = ACTIONS(2084),
    [anon_sym_COMMA] = ACTIONS(2084),
    [anon_sym_LBRACE] = ACTIONS(2084),
    [anon_sym_DOT] = ACTIONS(2084),
    [anon_sym_LBRACK] = ACTIONS(2084),
    [anon_sym_AT] = ACTIONS(2084),
    [anon_sym_implements] = ACTIONS(2084),
    [anon_sym_COLON_COLON] = ACTIONS(2084),
    [sym_comment] = ACTIONS(58),
  },
  [916] = {
    [sym__semicolon] = ACTIONS(1335),
    [anon_sym_LBRACE] = ACTIONS(1335),
    [anon_sym_LBRACK] = ACTIONS(1335),
    [anon_sym_AT] = ACTIONS(1335),
    [anon_sym_default] = ACTIONS(1335),
    [anon_sym_throws] = ACTIONS(1335),
    [sym_comment] = ACTIONS(58),
  },
  [917] = {
    [anon_sym_DOT] = ACTIONS(1842),
    [anon_sym_AT] = ACTIONS(1842),
    [sym_identifier] = ACTIONS(2086),
    [sym_comment] = ACTIONS(58),
  },
  [918] = {
    [sym_type_arguments] = STATE(1016),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1842),
    [anon_sym_AT] = ACTIONS(1842),
    [sym_identifier] = ACTIONS(2086),
    [sym_comment] = ACTIONS(58),
  },
  [919] = {
    [sym__expression] = STATE(1017),
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
  [920] = {
    [sym__statement] = STATE(1018),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_open] = ACTIONS(42),
    [anon_sym_module] = ACTIONS(44),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_package] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [921] = {
    [anon_sym_if] = ACTIONS(2088),
    [anon_sym_RBRACE] = ACTIONS(2088),
    [anon_sym_AT] = ACTIONS(2088),
    [anon_sym_static] = ACTIONS(2088),
    [anon_sym_class] = ACTIONS(2088),
    [anon_sym_public] = ACTIONS(2088),
    [anon_sym_protected] = ACTIONS(2088),
    [anon_sym_private] = ACTIONS(2088),
    [anon_sym_abstract] = ACTIONS(2088),
    [anon_sym_final] = ACTIONS(2088),
    [anon_sym_strictfp] = ACTIONS(2088),
    [anon_sym_default] = ACTIONS(2088),
    [anon_sym_synchronized] = ACTIONS(2088),
    [anon_sym_native] = ACTIONS(2088),
    [sym_comment] = ACTIONS(58),
  },
  [922] = {
    [sym_identifier] = ACTIONS(2090),
    [sym_comment] = ACTIONS(58),
  },
  [923] = {
    [sym_module_identifier] = STATE(1020),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(58),
  },
  [924] = {
    [anon_sym_LBRACE] = ACTIONS(2092),
    [sym_comment] = ACTIONS(58),
  },
  [925] = {
    [aux_sym_module_identifier_repeat1] = STATE(1023),
    [sym__semicolon] = ACTIONS(2094),
    [anon_sym_DOT] = ACTIONS(351),
    [sym_comment] = ACTIONS(58),
  },
  [926] = {
    [sym_package_or_type_name] = STATE(1024),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(58),
  },
  [927] = {
    [sym__semicolon] = ACTIONS(2096),
    [anon_sym_DOT] = ACTIONS(2098),
    [sym_comment] = ACTIONS(58),
  },
  [928] = {
    [sym_type_parameters] = STATE(1028),
    [sym_extends_interfaces] = STATE(1029),
    [sym_interface_body] = STATE(1030),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(2100),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [929] = {
    [anon_sym_if] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(383),
    [anon_sym_elseif] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(383),
    [anon_sym_static] = ACTIONS(383),
    [anon_sym_class] = ACTIONS(383),
    [anon_sym_public] = ACTIONS(383),
    [anon_sym_protected] = ACTIONS(383),
    [anon_sym_private] = ACTIONS(383),
    [anon_sym_abstract] = ACTIONS(383),
    [anon_sym_final] = ACTIONS(383),
    [anon_sym_strictfp] = ACTIONS(383),
    [anon_sym_default] = ACTIONS(383),
    [anon_sym_synchronized] = ACTIONS(383),
    [anon_sym_native] = ACTIONS(383),
    [sym_comment] = ACTIONS(58),
  },
  [930] = {
    [anon_sym_if] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_elseif] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_static] = ACTIONS(421),
    [anon_sym_class] = ACTIONS(421),
    [anon_sym_public] = ACTIONS(421),
    [anon_sym_protected] = ACTIONS(421),
    [anon_sym_private] = ACTIONS(421),
    [anon_sym_abstract] = ACTIONS(421),
    [anon_sym_final] = ACTIONS(421),
    [anon_sym_strictfp] = ACTIONS(421),
    [anon_sym_default] = ACTIONS(421),
    [anon_sym_synchronized] = ACTIONS(421),
    [anon_sym_native] = ACTIONS(421),
    [sym_comment] = ACTIONS(58),
  },
  [931] = {
    [sym_statement] = STATE(223),
    [sym_if_then_statement] = STATE(224),
    [sym__annotation] = STATE(221),
    [sym_normal_annotation] = STATE(225),
    [sym_marker_annotation] = STATE(225),
    [sym_single_element_annotation] = STATE(225),
    [sym_class_declaration] = STATE(223),
    [sym_normal_class_declaration] = STATE(226),
    [sym_modifier] = STATE(227),
    [sym_block_statements] = STATE(1032),
    [sym_block_statement] = STATE(229),
    [sym_local_variable_declaration_statement] = STATE(223),
    [sym_local_variable_declaration] = STATE(230),
    [aux_sym_normal_class_declaration_repeat1] = STATE(231),
    [anon_sym_if] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(2102),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_synchronized] = ACTIONS(433),
    [anon_sym_native] = ACTIONS(433),
    [sym_comment] = ACTIONS(58),
  },
  [932] = {
    [anon_sym_if] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_elseif] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_static] = ACTIONS(437),
    [anon_sym_class] = ACTIONS(437),
    [anon_sym_public] = ACTIONS(437),
    [anon_sym_protected] = ACTIONS(437),
    [anon_sym_private] = ACTIONS(437),
    [anon_sym_abstract] = ACTIONS(437),
    [anon_sym_final] = ACTIONS(437),
    [anon_sym_strictfp] = ACTIONS(437),
    [anon_sym_default] = ACTIONS(437),
    [anon_sym_synchronized] = ACTIONS(437),
    [anon_sym_native] = ACTIONS(437),
    [sym_comment] = ACTIONS(58),
  },
  [933] = {
    [anon_sym_if] = ACTIONS(2104),
    [anon_sym_RBRACE] = ACTIONS(2104),
    [anon_sym_elseif] = ACTIONS(2104),
    [anon_sym_AT] = ACTIONS(2104),
    [anon_sym_static] = ACTIONS(2104),
    [anon_sym_class] = ACTIONS(2104),
    [anon_sym_public] = ACTIONS(2104),
    [anon_sym_protected] = ACTIONS(2104),
    [anon_sym_private] = ACTIONS(2104),
    [anon_sym_abstract] = ACTIONS(2104),
    [anon_sym_final] = ACTIONS(2104),
    [anon_sym_strictfp] = ACTIONS(2104),
    [anon_sym_default] = ACTIONS(2104),
    [anon_sym_synchronized] = ACTIONS(2104),
    [anon_sym_native] = ACTIONS(2104),
    [sym_comment] = ACTIONS(58),
  },
  [934] = {
    [anon_sym_module] = ACTIONS(2106),
    [sym_comment] = ACTIONS(58),
  },
  [935] = {
    [sym_identifier] = ACTIONS(2108),
    [sym_comment] = ACTIONS(58),
  },
  [936] = {
    [sym_package_or_type_name] = STATE(236),
    [anon_sym_interface] = ACTIONS(2110),
    [sym_identifier] = ACTIONS(457),
    [sym_comment] = ACTIONS(58),
  },
  [937] = {
    [sym_identifier] = ACTIONS(2112),
    [sym_comment] = ACTIONS(58),
  },
  [938] = {
    [sym_method_body] = STATE(1037),
    [sym_block] = STATE(930),
    [sym__semicolon] = ACTIONS(1872),
    [anon_sym_LBRACE] = ACTIONS(1874),
    [sym_comment] = ACTIONS(58),
  },
  [939] = {
    [sym__expression] = STATE(1038),
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
  [940] = {
    [anon_sym_if] = ACTIONS(1602),
    [anon_sym_RBRACE] = ACTIONS(1602),
    [anon_sym_elseif] = ACTIONS(1602),
    [anon_sym_AT] = ACTIONS(1602),
    [anon_sym_static] = ACTIONS(1602),
    [anon_sym_class] = ACTIONS(1602),
    [anon_sym_public] = ACTIONS(1602),
    [anon_sym_protected] = ACTIONS(1602),
    [anon_sym_private] = ACTIONS(1602),
    [anon_sym_abstract] = ACTIONS(1602),
    [anon_sym_final] = ACTIONS(1602),
    [anon_sym_strictfp] = ACTIONS(1602),
    [anon_sym_default] = ACTIONS(1602),
    [anon_sym_synchronized] = ACTIONS(1602),
    [anon_sym_native] = ACTIONS(1602),
    [sym_comment] = ACTIONS(58),
  },
  [941] = {
    [sym_class_body] = STATE(1039),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [sym_comment] = ACTIONS(58),
  },
  [942] = {
    [anon_sym_RBRACE] = ACTIONS(2114),
    [anon_sym_boolean] = ACTIONS(2116),
    [anon_sym_byte] = ACTIONS(2116),
    [anon_sym_short] = ACTIONS(2116),
    [anon_sym_int] = ACTIONS(2116),
    [anon_sym_long] = ACTIONS(2116),
    [anon_sym_char] = ACTIONS(2116),
    [anon_sym_float] = ACTIONS(2116),
    [anon_sym_double] = ACTIONS(2116),
    [anon_sym_AT] = ACTIONS(2114),
    [anon_sym_static] = ACTIONS(2116),
    [anon_sym_class] = ACTIONS(2116),
    [anon_sym_public] = ACTIONS(2116),
    [anon_sym_protected] = ACTIONS(2116),
    [anon_sym_private] = ACTIONS(2116),
    [anon_sym_abstract] = ACTIONS(2116),
    [anon_sym_final] = ACTIONS(2116),
    [anon_sym_strictfp] = ACTIONS(2116),
    [anon_sym_default] = ACTIONS(2116),
    [anon_sym_synchronized] = ACTIONS(2116),
    [anon_sym_native] = ACTIONS(2116),
    [anon_sym_interface] = ACTIONS(2116),
    [sym_identifier] = ACTIONS(2118),
    [sym_comment] = ACTIONS(58),
  },
  [943] = {
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
    [sym_element_value] = STATE(1041),
    [sym_element_value_array_initializer] = STATE(550),
    [sym_conditional_expression] = STATE(550),
    [sym_conditional_or_expression] = STATE(1042),
    [sym_conditional_and_expression] = STATE(1043),
    [sym_inclusive_or_expression] = STATE(1044),
    [sym_exclusive_or_expression] = STATE(1045),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(1046),
    [sym_equality_expression] = STATE(1047),
    [sym_shift_expression] = STATE(1048),
    [sym_additive_expression] = STATE(1049),
    [sym_multiplicative_expression] = STATE(1050),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1129),
    [anon_sym_false] = ACTIONS(1129),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [anon_sym_LBRACE] = ACTIONS(1133),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [944] = {
    [sym_default_value] = STATE(1052),
    [sym__semicolon] = ACTIONS(2122),
    [anon_sym_default] = ACTIONS(1902),
    [sym_comment] = ACTIONS(58),
  },
  [945] = {
    [sym__semicolon] = ACTIONS(2122),
    [sym_comment] = ACTIONS(58),
  },
  [946] = {
    [sym_dims] = STATE(1053),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_default_value] = STATE(1052),
    [aux_sym_class_or_interface_type_repeat1] = STATE(497),
    [aux_sym_dims_repeat1] = STATE(498),
    [sym__semicolon] = ACTIONS(2122),
    [anon_sym_LBRACK] = ACTIONS(999),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_default] = ACTIONS(1902),
    [sym_comment] = ACTIONS(58),
  },
  [947] = {
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
    [anon_sym_STAR] = ACTIONS(1982),
    [anon_sym_SLASH] = ACTIONS(1984),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1982),
    [anon_sym_LT_LT] = ACTIONS(1982),
    [anon_sym_GT_GT] = ACTIONS(1984),
    [anon_sym_GT_GT_GT] = ACTIONS(1982),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [948] = {
    [anon_sym_GT] = ACTIONS(1684),
    [anon_sym_LT] = ACTIONS(1684),
    [anon_sym_EQ_EQ] = ACTIONS(1686),
    [anon_sym_GT_EQ] = ACTIONS(1686),
    [anon_sym_LT_EQ] = ACTIONS(1686),
    [anon_sym_BANG_EQ] = ACTIONS(1686),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(1980),
    [anon_sym_DASH] = ACTIONS(1980),
    [anon_sym_STAR] = ACTIONS(1982),
    [anon_sym_SLASH] = ACTIONS(1984),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1982),
    [anon_sym_LT_LT] = ACTIONS(1982),
    [anon_sym_GT_GT] = ACTIONS(1984),
    [anon_sym_GT_GT_GT] = ACTIONS(1982),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [949] = {
    [anon_sym_GT] = ACTIONS(1684),
    [anon_sym_LT] = ACTIONS(1684),
    [anon_sym_EQ_EQ] = ACTIONS(1686),
    [anon_sym_GT_EQ] = ACTIONS(1686),
    [anon_sym_LT_EQ] = ACTIONS(1686),
    [anon_sym_BANG_EQ] = ACTIONS(1686),
    [anon_sym_AMP_AMP] = ACTIONS(1976),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(1980),
    [anon_sym_DASH] = ACTIONS(1980),
    [anon_sym_STAR] = ACTIONS(1982),
    [anon_sym_SLASH] = ACTIONS(1984),
    [anon_sym_AMP] = ACTIONS(1688),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1982),
    [anon_sym_LT_LT] = ACTIONS(1982),
    [anon_sym_GT_GT] = ACTIONS(1984),
    [anon_sym_GT_GT_GT] = ACTIONS(1982),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [950] = {
    [anon_sym_GT] = ACTIONS(1684),
    [anon_sym_LT] = ACTIONS(1684),
    [anon_sym_EQ_EQ] = ACTIONS(1686),
    [anon_sym_GT_EQ] = ACTIONS(1686),
    [anon_sym_LT_EQ] = ACTIONS(1686),
    [anon_sym_BANG_EQ] = ACTIONS(1686),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(1982),
    [anon_sym_SLASH] = ACTIONS(1984),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1982),
    [anon_sym_LT_LT] = ACTIONS(1982),
    [anon_sym_GT_GT] = ACTIONS(1984),
    [anon_sym_GT_GT_GT] = ACTIONS(1982),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [951] = {
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
    [anon_sym_COLON] = ACTIONS(2124),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [952] = {
    [sym__expression] = STATE(1055),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [953] = {
    [sym__expression] = STATE(1056),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [954] = {
    [sym__expression] = STATE(1057),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [955] = {
    [sym__expression] = STATE(1058),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [956] = {
    [sym__expression] = STATE(198),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [957] = {
    [sym__expression] = STATE(1059),
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
  [958] = {
    [sym__semicolon] = ACTIONS(2126),
    [anon_sym_RPAREN] = ACTIONS(2126),
    [anon_sym_COMMA] = ACTIONS(2126),
    [anon_sym_RBRACE] = ACTIONS(2126),
    [sym_comment] = ACTIONS(58),
  },
  [959] = {
    [anon_sym_COMMA] = ACTIONS(2128),
    [anon_sym_RBRACE] = ACTIONS(2128),
    [sym_comment] = ACTIONS(58),
  },
  [960] = {
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
    [sym_element_value] = STATE(1061),
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
    [anon_sym_true] = ACTIONS(1129),
    [anon_sym_false] = ACTIONS(1129),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [anon_sym_LBRACE] = ACTIONS(1133),
    [anon_sym_RBRACE] = ACTIONS(2130),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [961] = {
    [anon_sym_AMP_AMP] = ACTIONS(1704),
    [anon_sym_PIPE_PIPE] = ACTIONS(1918),
    [anon_sym_COMMA] = ACTIONS(1918),
    [anon_sym_QMARK] = ACTIONS(1918),
    [anon_sym_RBRACE] = ACTIONS(1918),
    [sym_comment] = ACTIONS(58),
  },
  [962] = {
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
    [anon_sym_COLON] = ACTIONS(2132),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [963] = {
    [anon_sym_AMP_AMP] = ACTIONS(1922),
    [anon_sym_PIPE_PIPE] = ACTIONS(1922),
    [anon_sym_PIPE] = ACTIONS(1706),
    [anon_sym_COMMA] = ACTIONS(1922),
    [anon_sym_QMARK] = ACTIONS(1922),
    [anon_sym_RBRACE] = ACTIONS(1922),
    [sym_comment] = ACTIONS(58),
  },
  [964] = {
    [anon_sym_AMP_AMP] = ACTIONS(1924),
    [anon_sym_PIPE_PIPE] = ACTIONS(1924),
    [anon_sym_PIPE] = ACTIONS(1926),
    [anon_sym_CARET] = ACTIONS(1708),
    [anon_sym_COMMA] = ACTIONS(1924),
    [anon_sym_QMARK] = ACTIONS(1924),
    [anon_sym_RBRACE] = ACTIONS(1924),
    [sym_comment] = ACTIONS(58),
  },
  [965] = {
    [anon_sym_LT] = ACTIONS(1932),
    [anon_sym_EQ_EQ] = ACTIONS(1934),
    [anon_sym_BANG_EQ] = ACTIONS(1934),
    [anon_sym_AMP_AMP] = ACTIONS(1934),
    [anon_sym_PIPE_PIPE] = ACTIONS(1934),
    [anon_sym_PIPE] = ACTIONS(1932),
    [anon_sym_CARET] = ACTIONS(1934),
    [anon_sym_LT_LT] = ACTIONS(1714),
    [anon_sym_GT_GT] = ACTIONS(1716),
    [anon_sym_GT_GT_GT] = ACTIONS(1714),
    [anon_sym_COMMA] = ACTIONS(1934),
    [anon_sym_QMARK] = ACTIONS(1934),
    [anon_sym_RBRACE] = ACTIONS(1934),
    [sym_comment] = ACTIONS(58),
  },
  [966] = {
    [anon_sym_LT] = ACTIONS(1710),
    [anon_sym_EQ_EQ] = ACTIONS(1936),
    [anon_sym_BANG_EQ] = ACTIONS(1936),
    [anon_sym_AMP_AMP] = ACTIONS(1938),
    [anon_sym_PIPE_PIPE] = ACTIONS(1938),
    [anon_sym_PIPE] = ACTIONS(1940),
    [anon_sym_CARET] = ACTIONS(1938),
    [anon_sym_COMMA] = ACTIONS(1938),
    [anon_sym_QMARK] = ACTIONS(1938),
    [anon_sym_RBRACE] = ACTIONS(1938),
    [sym_comment] = ACTIONS(58),
  },
  [967] = {
    [anon_sym_LT] = ACTIONS(1942),
    [anon_sym_EQ_EQ] = ACTIONS(1944),
    [anon_sym_BANG_EQ] = ACTIONS(1944),
    [anon_sym_AMP_AMP] = ACTIONS(1944),
    [anon_sym_PIPE_PIPE] = ACTIONS(1944),
    [anon_sym_PLUS] = ACTIONS(1718),
    [anon_sym_DASH] = ACTIONS(1718),
    [anon_sym_PIPE] = ACTIONS(1942),
    [anon_sym_CARET] = ACTIONS(1944),
    [anon_sym_LT_LT] = ACTIONS(1944),
    [anon_sym_GT_GT] = ACTIONS(1942),
    [anon_sym_GT_GT_GT] = ACTIONS(1944),
    [anon_sym_COMMA] = ACTIONS(1944),
    [anon_sym_QMARK] = ACTIONS(1944),
    [anon_sym_RBRACE] = ACTIONS(1944),
    [sym_comment] = ACTIONS(58),
  },
  [968] = {
    [anon_sym_LT] = ACTIONS(1946),
    [anon_sym_EQ_EQ] = ACTIONS(1948),
    [anon_sym_BANG_EQ] = ACTIONS(1948),
    [anon_sym_AMP_AMP] = ACTIONS(1948),
    [anon_sym_PIPE_PIPE] = ACTIONS(1948),
    [anon_sym_PLUS] = ACTIONS(1948),
    [anon_sym_DASH] = ACTIONS(1948),
    [anon_sym_STAR] = ACTIONS(1720),
    [anon_sym_SLASH] = ACTIONS(1722),
    [anon_sym_PIPE] = ACTIONS(1946),
    [anon_sym_CARET] = ACTIONS(1948),
    [anon_sym_PERCENT] = ACTIONS(1720),
    [anon_sym_LT_LT] = ACTIONS(1948),
    [anon_sym_GT_GT] = ACTIONS(1946),
    [anon_sym_GT_GT_GT] = ACTIONS(1948),
    [anon_sym_COMMA] = ACTIONS(1948),
    [anon_sym_QMARK] = ACTIONS(1948),
    [anon_sym_RBRACE] = ACTIONS(1948),
    [sym_comment] = ACTIONS(58),
  },
  [969] = {
    [sym_lambda_expression] = STATE(1063),
    [sym__lambda_parameters] = STATE(28),
    [sym_unary_expression] = STATE(551),
    [sym_conditional_expression] = STATE(1063),
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
    [anon_sym_BANG] = ACTIONS(1131),
    [anon_sym_TILDE] = ACTIONS(1131),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [970] = {
    [anon_sym_RBRACE] = ACTIONS(2134),
    [anon_sym_requires] = ACTIONS(2134),
    [anon_sym_exports] = ACTIONS(2134),
    [anon_sym_opens] = ACTIONS(2134),
    [anon_sym_uses] = ACTIONS(2134),
    [anon_sym_provides] = ACTIONS(2134),
    [sym_comment] = ACTIONS(58),
  },
  [971] = {
    [sym__semicolon] = ACTIONS(2136),
    [anon_sym_COMMA] = ACTIONS(2136),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_comment] = ACTIONS(58),
  },
  [972] = {
    [sym_package_or_type_name] = STATE(1064),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(58),
  },
  [973] = {
    [sym__semicolon] = ACTIONS(1407),
    [anon_sym_LT] = ACTIONS(1407),
    [anon_sym_LBRACE] = ACTIONS(1407),
    [anon_sym_RBRACE] = ACTIONS(1407),
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
    [anon_sym_default] = ACTIONS(1409),
    [anon_sym_synchronized] = ACTIONS(1409),
    [anon_sym_native] = ACTIONS(1409),
    [anon_sym_interface] = ACTIONS(1409),
    [sym_identifier] = ACTIONS(1411),
    [sym_comment] = ACTIONS(58),
  },
  [974] = {
    [sym__semicolon] = ACTIONS(1602),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LBRACE] = ACTIONS(1602),
    [anon_sym_RBRACE] = ACTIONS(1602),
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
    [anon_sym_default] = ACTIONS(1604),
    [anon_sym_synchronized] = ACTIONS(1604),
    [anon_sym_native] = ACTIONS(1604),
    [anon_sym_interface] = ACTIONS(1604),
    [sym_identifier] = ACTIONS(1606),
    [sym_comment] = ACTIONS(58),
  },
  [975] = {
    [anon_sym_DOT] = ACTIONS(2138),
    [anon_sym_LBRACK] = ACTIONS(2138),
    [anon_sym_COLON_COLON] = ACTIONS(2138),
    [sym_comment] = ACTIONS(58),
  },
  [976] = {
    [anon_sym_if] = ACTIONS(2140),
    [anon_sym_RBRACE] = ACTIONS(2140),
    [anon_sym_AT] = ACTIONS(2140),
    [anon_sym_static] = ACTIONS(2140),
    [anon_sym_class] = ACTIONS(2140),
    [anon_sym_public] = ACTIONS(2140),
    [anon_sym_protected] = ACTIONS(2140),
    [anon_sym_private] = ACTIONS(2140),
    [anon_sym_abstract] = ACTIONS(2140),
    [anon_sym_final] = ACTIONS(2140),
    [anon_sym_strictfp] = ACTIONS(2140),
    [anon_sym_default] = ACTIONS(2140),
    [anon_sym_synchronized] = ACTIONS(2140),
    [anon_sym_native] = ACTIONS(2140),
    [sym_comment] = ACTIONS(58),
  },
  [977] = {
    [sym__expression] = STATE(1065),
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
  [978] = {
    [anon_sym_RPAREN] = ACTIONS(2142),
    [anon_sym_COMMA] = ACTIONS(2144),
    [sym_comment] = ACTIONS(58),
  },
  [979] = {
    [sym__semicolon] = ACTIONS(2146),
    [sym_comment] = ACTIONS(58),
  },
  [980] = {
    [anon_sym_DOT] = ACTIONS(2148),
    [anon_sym_LBRACK] = ACTIONS(2148),
    [anon_sym_COLON_COLON] = ACTIONS(2148),
    [sym_comment] = ACTIONS(58),
  },
  [981] = {
    [sym_type_arguments] = STATE(636),
    [anon_sym_LT] = ACTIONS(2150),
    [anon_sym_LPAREN] = ACTIONS(2153),
    [anon_sym_DOT] = ACTIONS(2155),
    [anon_sym_LBRACK] = ACTIONS(1287),
    [anon_sym_AT] = ACTIONS(1287),
    [anon_sym_LT_GT] = ACTIONS(2153),
    [sym_comment] = ACTIONS(58),
  },
  [982] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2158),
    [sym_comment] = ACTIONS(58),
  },
  [983] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1070),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2160),
    [sym_comment] = ACTIONS(58),
  },
  [984] = {
    [anon_sym_LPAREN] = ACTIONS(2162),
    [sym_comment] = ACTIONS(58),
  },
  [985] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1072),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2164),
    [sym_comment] = ACTIONS(58),
  },
  [986] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1074),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2166),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [987] = {
    [sym_type_arguments] = STATE(873),
    [sym_type_arguments_or_diamond] = STATE(984),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(993),
    [anon_sym_LT] = ACTIONS(1762),
    [anon_sym_LPAREN] = ACTIONS(2006),
    [anon_sym_DOT] = ACTIONS(2010),
    [anon_sym_LT_GT] = ACTIONS(1768),
    [sym_comment] = ACTIONS(58),
  },
  [988] = {
    [sym__expression] = STATE(1077),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_variable_initializer] = STATE(1078),
    [sym_array_initializer] = STATE(1079),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_COMMA] = ACTIONS(2168),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [anon_sym_LBRACE] = ACTIONS(2016),
    [anon_sym_RBRACE] = ACTIONS(2170),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [989] = {
    [anon_sym_DOT] = ACTIONS(2172),
    [anon_sym_COLON_COLON] = ACTIONS(2172),
    [sym_comment] = ACTIONS(58),
  },
  [990] = {
    [sym_class_body] = STATE(1080),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_DOT] = ACTIONS(2174),
    [anon_sym_LBRACK] = ACTIONS(2174),
    [anon_sym_COLON_COLON] = ACTIONS(2174),
    [sym_comment] = ACTIONS(58),
  },
  [991] = {
    [anon_sym_RPAREN] = ACTIONS(2166),
    [sym_comment] = ACTIONS(58),
  },
  [992] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(640),
    [anon_sym_LPAREN] = ACTIONS(2004),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(1291),
    [anon_sym_AT] = ACTIONS(1291),
    [sym_comment] = ACTIONS(58),
  },
  [993] = {
    [sym_type_arguments] = STATE(873),
    [sym_type_arguments_or_diamond] = STATE(1081),
    [anon_sym_LT] = ACTIONS(1762),
    [anon_sym_LPAREN] = ACTIONS(2162),
    [anon_sym_DOT] = ACTIONS(2008),
    [anon_sym_LT_GT] = ACTIONS(1768),
    [sym_comment] = ACTIONS(58),
  },
  [994] = {
    [anon_sym_RPAREN] = ACTIONS(2176),
    [sym_comment] = ACTIONS(58),
  },
  [995] = {
    [sym__expression] = STATE(1083),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [996] = {
    [sym__expression] = STATE(1084),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [997] = {
    [sym__expression] = STATE(1085),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [998] = {
    [sym__expression] = STATE(1086),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [999] = {
    [sym__expression] = STATE(198),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1000] = {
    [sym__expression] = STATE(1087),
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
  [1001] = {
    [anon_sym_DOT] = ACTIONS(2178),
    [anon_sym_LBRACK] = ACTIONS(2178),
    [anon_sym_AT] = ACTIONS(2178),
    [anon_sym_COLON_COLON] = ACTIONS(2178),
    [sym_comment] = ACTIONS(58),
  },
  [1002] = {
    [sym__expression] = STATE(1004),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1003] = {
    [anon_sym_DOT] = ACTIONS(2180),
    [anon_sym_LBRACK] = ACTIONS(2180),
    [anon_sym_AT] = ACTIONS(2180),
    [anon_sym_COLON_COLON] = ACTIONS(2180),
    [sym_comment] = ACTIONS(58),
  },
  [1004] = {
    [anon_sym_GT] = ACTIONS(2022),
    [anon_sym_LT] = ACTIONS(2022),
    [anon_sym_EQ_EQ] = ACTIONS(2024),
    [anon_sym_GT_EQ] = ACTIONS(2024),
    [anon_sym_LT_EQ] = ACTIONS(2024),
    [anon_sym_BANG_EQ] = ACTIONS(2024),
    [anon_sym_AMP_AMP] = ACTIONS(2026),
    [anon_sym_PIPE_PIPE] = ACTIONS(2028),
    [anon_sym_PLUS] = ACTIONS(2030),
    [anon_sym_DASH] = ACTIONS(2030),
    [anon_sym_STAR] = ACTIONS(2032),
    [anon_sym_SLASH] = ACTIONS(2034),
    [anon_sym_AMP] = ACTIONS(2036),
    [anon_sym_PIPE] = ACTIONS(2038),
    [anon_sym_CARET] = ACTIONS(2028),
    [anon_sym_PERCENT] = ACTIONS(2032),
    [anon_sym_LT_LT] = ACTIONS(2032),
    [anon_sym_GT_GT] = ACTIONS(2034),
    [anon_sym_GT_GT_GT] = ACTIONS(2032),
    [anon_sym_QMARK] = ACTIONS(2040),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(2182),
    [sym_comment] = ACTIONS(58),
  },
  [1005] = {
    [sym_type_arguments] = STATE(1090),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(2184),
    [sym_comment] = ACTIONS(58),
  },
  [1006] = {
    [sym_type_arguments] = STATE(1092),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(2186),
    [sym_comment] = ACTIONS(58),
  },
  [1007] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1094),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2188),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1008] = {
    [anon_sym_LPAREN] = ACTIONS(2190),
    [sym_comment] = ACTIONS(58),
  },
  [1009] = {
    [aux_sym_type_arguments_repeat1] = STATE(1097),
    [anon_sym_GT] = ACTIONS(2192),
    [anon_sym_COMMA] = ACTIONS(621),
    [sym_comment] = ACTIONS(58),
  },
  [1010] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1098),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2176),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1011] = {
    [anon_sym_LPAREN] = ACTIONS(2194),
    [sym_comment] = ACTIONS(58),
  },
  [1012] = {
    [anon_sym_DOT] = ACTIONS(2196),
    [anon_sym_LBRACK] = ACTIONS(2196),
    [anon_sym_COLON_COLON] = ACTIONS(2196),
    [sym_comment] = ACTIONS(58),
  },
  [1013] = {
    [anon_sym_DOT] = ACTIONS(2198),
    [anon_sym_LBRACK] = ACTIONS(2198),
    [anon_sym_COLON_COLON] = ACTIONS(2198),
    [sym_comment] = ACTIONS(58),
  },
  [1014] = {
    [sym_class_body] = STATE(1100),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [sym_comment] = ACTIONS(58),
  },
  [1015] = {
    [sym__semicolon] = ACTIONS(1672),
    [anon_sym_LT] = ACTIONS(1672),
    [anon_sym_LBRACE] = ACTIONS(1672),
    [anon_sym_RBRACE] = ACTIONS(1672),
    [anon_sym_boolean] = ACTIONS(1674),
    [anon_sym_byte] = ACTIONS(1674),
    [anon_sym_short] = ACTIONS(1674),
    [anon_sym_int] = ACTIONS(1674),
    [anon_sym_long] = ACTIONS(1674),
    [anon_sym_char] = ACTIONS(1674),
    [anon_sym_float] = ACTIONS(1674),
    [anon_sym_double] = ACTIONS(1674),
    [anon_sym_AT] = ACTIONS(1672),
    [anon_sym_static] = ACTIONS(1674),
    [anon_sym_class] = ACTIONS(1674),
    [anon_sym_public] = ACTIONS(1674),
    [anon_sym_protected] = ACTIONS(1674),
    [anon_sym_private] = ACTIONS(1674),
    [anon_sym_abstract] = ACTIONS(1674),
    [anon_sym_final] = ACTIONS(1674),
    [anon_sym_strictfp] = ACTIONS(1674),
    [anon_sym_default] = ACTIONS(1674),
    [anon_sym_synchronized] = ACTIONS(1674),
    [anon_sym_native] = ACTIONS(1674),
    [anon_sym_interface] = ACTIONS(1674),
    [sym_identifier] = ACTIONS(1676),
    [sym_comment] = ACTIONS(58),
  },
  [1016] = {
    [anon_sym_DOT] = ACTIONS(2084),
    [anon_sym_AT] = ACTIONS(2084),
    [sym_identifier] = ACTIONS(2200),
    [sym_comment] = ACTIONS(58),
  },
  [1017] = {
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
    [anon_sym_RPAREN] = ACTIONS(2202),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1018] = {
    [anon_sym_RBRACE] = ACTIONS(2204),
    [sym_comment] = ACTIONS(58),
  },
  [1019] = {
    [sym_annotation_type_body] = STATE(1104),
    [anon_sym_LBRACE] = ACTIONS(2206),
    [sym_comment] = ACTIONS(58),
  },
  [1020] = {
    [anon_sym_LBRACE] = ACTIONS(2208),
    [sym_comment] = ACTIONS(58),
  },
  [1021] = {
    [sym_module_directive] = STATE(286),
    [aux_sym_module_declaration_repeat1] = STATE(1107),
    [anon_sym_RBRACE] = ACTIONS(2210),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [1022] = {
    [anon_sym_if] = ACTIONS(563),
    [anon_sym_RBRACE] = ACTIONS(563),
    [anon_sym_elseif] = ACTIONS(563),
    [anon_sym_AT] = ACTIONS(563),
    [anon_sym_static] = ACTIONS(563),
    [anon_sym_class] = ACTIONS(563),
    [anon_sym_public] = ACTIONS(563),
    [anon_sym_protected] = ACTIONS(563),
    [anon_sym_private] = ACTIONS(563),
    [anon_sym_abstract] = ACTIONS(563),
    [anon_sym_final] = ACTIONS(563),
    [anon_sym_strictfp] = ACTIONS(563),
    [anon_sym_default] = ACTIONS(563),
    [anon_sym_synchronized] = ACTIONS(563),
    [anon_sym_native] = ACTIONS(563),
    [sym_comment] = ACTIONS(58),
  },
  [1023] = {
    [sym__semicolon] = ACTIONS(2212),
    [anon_sym_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(58),
  },
  [1024] = {
    [anon_sym_DOT] = ACTIONS(2214),
    [sym_comment] = ACTIONS(58),
  },
  [1025] = {
    [anon_sym_if] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_elseif] = ACTIONS(573),
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
    [anon_sym_synchronized] = ACTIONS(573),
    [anon_sym_native] = ACTIONS(573),
    [sym_comment] = ACTIONS(58),
  },
  [1026] = {
    [anon_sym_STAR] = ACTIONS(2216),
    [sym_identifier] = ACTIONS(543),
    [sym_comment] = ACTIONS(58),
  },
  [1027] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [aux_sym_interface_body_repeat1] = STATE(1112),
    [sym__semicolon] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(2218),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [1028] = {
    [sym_extends_interfaces] = STATE(1113),
    [sym_interface_body] = STATE(1114),
    [anon_sym_LBRACE] = ACTIONS(2100),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [1029] = {
    [sym_interface_body] = STATE(1114),
    [anon_sym_LBRACE] = ACTIONS(2100),
    [sym_comment] = ACTIONS(58),
  },
  [1030] = {
    [anon_sym_if] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(607),
    [anon_sym_elseif] = ACTIONS(607),
    [anon_sym_AT] = ACTIONS(607),
    [anon_sym_static] = ACTIONS(607),
    [anon_sym_class] = ACTIONS(607),
    [anon_sym_public] = ACTIONS(607),
    [anon_sym_protected] = ACTIONS(607),
    [anon_sym_private] = ACTIONS(607),
    [anon_sym_abstract] = ACTIONS(607),
    [anon_sym_final] = ACTIONS(607),
    [anon_sym_strictfp] = ACTIONS(607),
    [anon_sym_default] = ACTIONS(607),
    [anon_sym_synchronized] = ACTIONS(607),
    [anon_sym_native] = ACTIONS(607),
    [sym_comment] = ACTIONS(58),
  },
  [1031] = {
    [anon_sym_if] = ACTIONS(707),
    [anon_sym_RBRACE] = ACTIONS(707),
    [anon_sym_elseif] = ACTIONS(707),
    [anon_sym_AT] = ACTIONS(707),
    [anon_sym_static] = ACTIONS(707),
    [anon_sym_class] = ACTIONS(707),
    [anon_sym_public] = ACTIONS(707),
    [anon_sym_protected] = ACTIONS(707),
    [anon_sym_private] = ACTIONS(707),
    [anon_sym_abstract] = ACTIONS(707),
    [anon_sym_final] = ACTIONS(707),
    [anon_sym_strictfp] = ACTIONS(707),
    [anon_sym_default] = ACTIONS(707),
    [anon_sym_synchronized] = ACTIONS(707),
    [anon_sym_native] = ACTIONS(707),
    [sym_comment] = ACTIONS(58),
  },
  [1032] = {
    [anon_sym_RBRACE] = ACTIONS(2220),
    [sym_comment] = ACTIONS(58),
  },
  [1033] = {
    [sym_module_identifier] = STATE(1116),
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(58),
  },
  [1034] = {
    [aux_sym_module_identifier_repeat1] = STATE(1117),
    [sym__semicolon] = ACTIONS(2212),
    [anon_sym_DOT] = ACTIONS(351),
    [sym_comment] = ACTIONS(58),
  },
  [1035] = {
    [sym_identifier] = ACTIONS(2222),
    [sym_comment] = ACTIONS(58),
  },
  [1036] = {
    [sym_type_parameters] = STATE(1119),
    [sym_extends_interfaces] = STATE(1113),
    [sym_interface_body] = STATE(1114),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(2100),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [1037] = {
    [anon_sym_if] = ACTIONS(737),
    [anon_sym_RBRACE] = ACTIONS(737),
    [anon_sym_elseif] = ACTIONS(737),
    [anon_sym_AT] = ACTIONS(737),
    [anon_sym_static] = ACTIONS(737),
    [anon_sym_class] = ACTIONS(737),
    [anon_sym_public] = ACTIONS(737),
    [anon_sym_protected] = ACTIONS(737),
    [anon_sym_private] = ACTIONS(737),
    [anon_sym_abstract] = ACTIONS(737),
    [anon_sym_final] = ACTIONS(737),
    [anon_sym_strictfp] = ACTIONS(737),
    [anon_sym_default] = ACTIONS(737),
    [anon_sym_synchronized] = ACTIONS(737),
    [anon_sym_native] = ACTIONS(737),
    [sym_comment] = ACTIONS(58),
  },
  [1038] = {
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
  [1039] = {
    [anon_sym_if] = ACTIONS(1894),
    [anon_sym_RBRACE] = ACTIONS(1894),
    [anon_sym_elseif] = ACTIONS(1894),
    [anon_sym_AT] = ACTIONS(1894),
    [anon_sym_static] = ACTIONS(1894),
    [anon_sym_class] = ACTIONS(1894),
    [anon_sym_public] = ACTIONS(1894),
    [anon_sym_protected] = ACTIONS(1894),
    [anon_sym_private] = ACTIONS(1894),
    [anon_sym_abstract] = ACTIONS(1894),
    [anon_sym_final] = ACTIONS(1894),
    [anon_sym_strictfp] = ACTIONS(1894),
    [anon_sym_default] = ACTIONS(1894),
    [anon_sym_synchronized] = ACTIONS(1894),
    [anon_sym_native] = ACTIONS(1894),
    [sym_comment] = ACTIONS(58),
  },
  [1040] = {
    [sym__expression] = STATE(1120),
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
  [1041] = {
    [sym__semicolon] = ACTIONS(2224),
    [sym_comment] = ACTIONS(58),
  },
  [1042] = {
    [sym__semicolon] = ACTIONS(1439),
    [anon_sym_PIPE_PIPE] = ACTIONS(2226),
    [anon_sym_QMARK] = ACTIONS(2228),
    [sym_comment] = ACTIONS(58),
  },
  [1043] = {
    [sym__semicolon] = ACTIONS(1445),
    [anon_sym_AMP_AMP] = ACTIONS(2230),
    [anon_sym_PIPE_PIPE] = ACTIONS(1445),
    [anon_sym_QMARK] = ACTIONS(1445),
    [sym_comment] = ACTIONS(58),
  },
  [1044] = {
    [sym__semicolon] = ACTIONS(1447),
    [anon_sym_AMP_AMP] = ACTIONS(1447),
    [anon_sym_PIPE_PIPE] = ACTIONS(1447),
    [anon_sym_PIPE] = ACTIONS(2232),
    [anon_sym_QMARK] = ACTIONS(1447),
    [sym_comment] = ACTIONS(58),
  },
  [1045] = {
    [sym__semicolon] = ACTIONS(1451),
    [anon_sym_AMP_AMP] = ACTIONS(1451),
    [anon_sym_PIPE_PIPE] = ACTIONS(1451),
    [anon_sym_PIPE] = ACTIONS(1453),
    [anon_sym_CARET] = ACTIONS(2234),
    [anon_sym_QMARK] = ACTIONS(1451),
    [sym_comment] = ACTIONS(58),
  },
  [1046] = {
    [sym__semicolon] = ACTIONS(1465),
    [anon_sym_LT] = ACTIONS(2236),
    [anon_sym_EQ_EQ] = ACTIONS(1463),
    [anon_sym_BANG_EQ] = ACTIONS(1463),
    [anon_sym_AMP_AMP] = ACTIONS(1465),
    [anon_sym_PIPE_PIPE] = ACTIONS(1465),
    [anon_sym_PIPE] = ACTIONS(1467),
    [anon_sym_CARET] = ACTIONS(1465),
    [anon_sym_QMARK] = ACTIONS(1465),
    [sym_comment] = ACTIONS(58),
  },
  [1047] = {
    [anon_sym_EQ_EQ] = ACTIONS(2238),
    [anon_sym_BANG_EQ] = ACTIONS(2238),
    [sym_comment] = ACTIONS(58),
  },
  [1048] = {
    [sym__semicolon] = ACTIONS(1473),
    [anon_sym_LT] = ACTIONS(1471),
    [anon_sym_EQ_EQ] = ACTIONS(1473),
    [anon_sym_BANG_EQ] = ACTIONS(1473),
    [anon_sym_AMP_AMP] = ACTIONS(1473),
    [anon_sym_PIPE_PIPE] = ACTIONS(1473),
    [anon_sym_PIPE] = ACTIONS(1471),
    [anon_sym_CARET] = ACTIONS(1473),
    [anon_sym_LT_LT] = ACTIONS(2240),
    [anon_sym_GT_GT] = ACTIONS(2242),
    [anon_sym_GT_GT_GT] = ACTIONS(2240),
    [anon_sym_QMARK] = ACTIONS(1473),
    [sym_comment] = ACTIONS(58),
  },
  [1049] = {
    [sym__semicolon] = ACTIONS(1481),
    [anon_sym_LT] = ACTIONS(1479),
    [anon_sym_EQ_EQ] = ACTIONS(1481),
    [anon_sym_BANG_EQ] = ACTIONS(1481),
    [anon_sym_AMP_AMP] = ACTIONS(1481),
    [anon_sym_PIPE_PIPE] = ACTIONS(1481),
    [anon_sym_PLUS] = ACTIONS(2244),
    [anon_sym_DASH] = ACTIONS(2244),
    [anon_sym_PIPE] = ACTIONS(1479),
    [anon_sym_CARET] = ACTIONS(1481),
    [anon_sym_LT_LT] = ACTIONS(1481),
    [anon_sym_GT_GT] = ACTIONS(1479),
    [anon_sym_GT_GT_GT] = ACTIONS(1481),
    [anon_sym_QMARK] = ACTIONS(1481),
    [sym_comment] = ACTIONS(58),
  },
  [1050] = {
    [sym__semicolon] = ACTIONS(1487),
    [anon_sym_LT] = ACTIONS(1485),
    [anon_sym_EQ_EQ] = ACTIONS(1487),
    [anon_sym_BANG_EQ] = ACTIONS(1487),
    [anon_sym_AMP_AMP] = ACTIONS(1487),
    [anon_sym_PIPE_PIPE] = ACTIONS(1487),
    [anon_sym_PLUS] = ACTIONS(1487),
    [anon_sym_DASH] = ACTIONS(1487),
    [anon_sym_STAR] = ACTIONS(2246),
    [anon_sym_SLASH] = ACTIONS(2248),
    [anon_sym_PIPE] = ACTIONS(1485),
    [anon_sym_CARET] = ACTIONS(1487),
    [anon_sym_PERCENT] = ACTIONS(2246),
    [anon_sym_LT_LT] = ACTIONS(1487),
    [anon_sym_GT_GT] = ACTIONS(1485),
    [anon_sym_GT_GT_GT] = ACTIONS(1487),
    [anon_sym_QMARK] = ACTIONS(1487),
    [sym_comment] = ACTIONS(58),
  },
  [1051] = {
    [anon_sym_RBRACE] = ACTIONS(2250),
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
    [anon_sym_default] = ACTIONS(2252),
    [anon_sym_synchronized] = ACTIONS(2252),
    [anon_sym_native] = ACTIONS(2252),
    [anon_sym_interface] = ACTIONS(2252),
    [sym_identifier] = ACTIONS(2254),
    [sym_comment] = ACTIONS(58),
  },
  [1052] = {
    [sym__semicolon] = ACTIONS(2256),
    [sym_comment] = ACTIONS(58),
  },
  [1053] = {
    [sym_default_value] = STATE(1132),
    [sym__semicolon] = ACTIONS(2256),
    [anon_sym_default] = ACTIONS(1902),
    [sym_comment] = ACTIONS(58),
  },
  [1054] = {
    [sym__expression] = STATE(1133),
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
  [1055] = {
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
    [anon_sym_STAR] = ACTIONS(2258),
    [anon_sym_SLASH] = ACTIONS(2260),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2258),
    [anon_sym_LT_LT] = ACTIONS(2258),
    [anon_sym_GT_GT] = ACTIONS(2260),
    [anon_sym_GT_GT_GT] = ACTIONS(2258),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1056] = {
    [anon_sym_GT] = ACTIONS(1908),
    [anon_sym_LT] = ACTIONS(1908),
    [anon_sym_EQ_EQ] = ACTIONS(1910),
    [anon_sym_GT_EQ] = ACTIONS(1910),
    [anon_sym_LT_EQ] = ACTIONS(1910),
    [anon_sym_BANG_EQ] = ACTIONS(1910),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(2262),
    [anon_sym_DASH] = ACTIONS(2262),
    [anon_sym_STAR] = ACTIONS(2258),
    [anon_sym_SLASH] = ACTIONS(2260),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2258),
    [anon_sym_LT_LT] = ACTIONS(2258),
    [anon_sym_GT_GT] = ACTIONS(2260),
    [anon_sym_GT_GT_GT] = ACTIONS(2258),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1057] = {
    [anon_sym_GT] = ACTIONS(1908),
    [anon_sym_LT] = ACTIONS(1908),
    [anon_sym_EQ_EQ] = ACTIONS(1910),
    [anon_sym_GT_EQ] = ACTIONS(1910),
    [anon_sym_LT_EQ] = ACTIONS(1910),
    [anon_sym_BANG_EQ] = ACTIONS(1910),
    [anon_sym_AMP_AMP] = ACTIONS(2264),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(2262),
    [anon_sym_DASH] = ACTIONS(2262),
    [anon_sym_STAR] = ACTIONS(2258),
    [anon_sym_SLASH] = ACTIONS(2260),
    [anon_sym_AMP] = ACTIONS(1912),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2258),
    [anon_sym_LT_LT] = ACTIONS(2258),
    [anon_sym_GT_GT] = ACTIONS(2260),
    [anon_sym_GT_GT_GT] = ACTIONS(2258),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1058] = {
    [anon_sym_GT] = ACTIONS(1908),
    [anon_sym_LT] = ACTIONS(1908),
    [anon_sym_EQ_EQ] = ACTIONS(1910),
    [anon_sym_GT_EQ] = ACTIONS(1910),
    [anon_sym_LT_EQ] = ACTIONS(1910),
    [anon_sym_BANG_EQ] = ACTIONS(1910),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(2258),
    [anon_sym_SLASH] = ACTIONS(2260),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2258),
    [anon_sym_LT_LT] = ACTIONS(2258),
    [anon_sym_GT_GT] = ACTIONS(2260),
    [anon_sym_GT_GT_GT] = ACTIONS(2258),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1059] = {
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
    [anon_sym_COLON] = ACTIONS(2266),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1060] = {
    [sym__semicolon] = ACTIONS(2268),
    [anon_sym_RPAREN] = ACTIONS(2268),
    [anon_sym_COMMA] = ACTIONS(2268),
    [anon_sym_RBRACE] = ACTIONS(2268),
    [sym_comment] = ACTIONS(58),
  },
  [1061] = {
    [anon_sym_COMMA] = ACTIONS(2270),
    [anon_sym_RBRACE] = ACTIONS(2270),
    [sym_comment] = ACTIONS(58),
  },
  [1062] = {
    [sym_lambda_expression] = STATE(1063),
    [sym__lambda_parameters] = STATE(28),
    [sym_unary_expression] = STATE(551),
    [sym_conditional_expression] = STATE(1063),
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
  [1063] = {
    [sym__semicolon] = ACTIONS(2272),
    [anon_sym_RPAREN] = ACTIONS(2272),
    [anon_sym_COMMA] = ACTIONS(2272),
    [anon_sym_RBRACE] = ACTIONS(2272),
    [sym_comment] = ACTIONS(58),
  },
  [1064] = {
    [sym__semicolon] = ACTIONS(2274),
    [anon_sym_COMMA] = ACTIONS(2274),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_comment] = ACTIONS(58),
  },
  [1065] = {
    [anon_sym_GT] = ACTIONS(1684),
    [anon_sym_LT] = ACTIONS(1684),
    [anon_sym_EQ_EQ] = ACTIONS(1686),
    [anon_sym_GT_EQ] = ACTIONS(1686),
    [anon_sym_LT_EQ] = ACTIONS(1686),
    [anon_sym_BANG_EQ] = ACTIONS(1686),
    [anon_sym_AMP_AMP] = ACTIONS(1976),
    [anon_sym_PIPE_PIPE] = ACTIONS(1978),
    [anon_sym_PLUS] = ACTIONS(1980),
    [anon_sym_DASH] = ACTIONS(1980),
    [anon_sym_STAR] = ACTIONS(1982),
    [anon_sym_SLASH] = ACTIONS(1984),
    [anon_sym_AMP] = ACTIONS(1688),
    [anon_sym_PIPE] = ACTIONS(1986),
    [anon_sym_CARET] = ACTIONS(1978),
    [anon_sym_PERCENT] = ACTIONS(1982),
    [anon_sym_LT_LT] = ACTIONS(1982),
    [anon_sym_GT_GT] = ACTIONS(1984),
    [anon_sym_GT_GT_GT] = ACTIONS(1982),
    [anon_sym_RPAREN] = ACTIONS(2276),
    [anon_sym_COMMA] = ACTIONS(2276),
    [anon_sym_QMARK] = ACTIONS(1992),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1066] = {
    [sym__expression] = STATE(1135),
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
  [1067] = {
    [anon_sym_if] = ACTIONS(2278),
    [anon_sym_RBRACE] = ACTIONS(2278),
    [anon_sym_AT] = ACTIONS(2278),
    [anon_sym_static] = ACTIONS(2278),
    [anon_sym_class] = ACTIONS(2278),
    [anon_sym_public] = ACTIONS(2278),
    [anon_sym_protected] = ACTIONS(2278),
    [anon_sym_private] = ACTIONS(2278),
    [anon_sym_abstract] = ACTIONS(2278),
    [anon_sym_final] = ACTIONS(2278),
    [anon_sym_strictfp] = ACTIONS(2278),
    [anon_sym_default] = ACTIONS(2278),
    [anon_sym_synchronized] = ACTIONS(2278),
    [anon_sym_native] = ACTIONS(2278),
    [sym_comment] = ACTIONS(58),
  },
  [1068] = {
    [sym_type_arguments] = STATE(772),
    [anon_sym_LT] = ACTIONS(2280),
    [anon_sym_LPAREN] = ACTIONS(2283),
    [anon_sym_DOT] = ACTIONS(2285),
    [anon_sym_LBRACK] = ACTIONS(1620),
    [anon_sym_AT] = ACTIONS(1620),
    [anon_sym_LT_GT] = ACTIONS(2283),
    [sym_comment] = ACTIONS(58),
  },
  [1069] = {
    [anon_sym_LT] = ACTIONS(2288),
    [anon_sym_LPAREN] = ACTIONS(2283),
    [anon_sym_DOT] = ACTIONS(2283),
    [anon_sym_LT_GT] = ACTIONS(2283),
    [sym_comment] = ACTIONS(58),
  },
  [1070] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2290),
    [sym_comment] = ACTIONS(58),
  },
  [1071] = {
    [anon_sym_LT] = ACTIONS(2292),
    [anon_sym_LPAREN] = ACTIONS(2153),
    [anon_sym_DOT] = ACTIONS(2153),
    [anon_sym_LT_GT] = ACTIONS(2153),
    [sym_comment] = ACTIONS(58),
  },
  [1072] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2160),
    [sym_comment] = ACTIONS(58),
  },
  [1073] = {
    [sym_class_body] = STATE(1137),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_DOT] = ACTIONS(2294),
    [anon_sym_LBRACK] = ACTIONS(2294),
    [anon_sym_COLON_COLON] = ACTIONS(2294),
    [sym_comment] = ACTIONS(58),
  },
  [1074] = {
    [anon_sym_RPAREN] = ACTIONS(2296),
    [sym_comment] = ACTIONS(58),
  },
  [1075] = {
    [anon_sym_RBRACE] = ACTIONS(2298),
    [sym_comment] = ACTIONS(58),
  },
  [1076] = {
    [anon_sym_COMMA] = ACTIONS(2300),
    [anon_sym_RBRACE] = ACTIONS(2300),
    [anon_sym_DOT] = ACTIONS(2300),
    [anon_sym_COLON_COLON] = ACTIONS(2300),
    [sym_comment] = ACTIONS(58),
  },
  [1077] = {
    [anon_sym_GT] = ACTIONS(1908),
    [anon_sym_LT] = ACTIONS(1908),
    [anon_sym_EQ_EQ] = ACTIONS(1910),
    [anon_sym_GT_EQ] = ACTIONS(1910),
    [anon_sym_LT_EQ] = ACTIONS(1910),
    [anon_sym_BANG_EQ] = ACTIONS(1910),
    [anon_sym_AMP_AMP] = ACTIONS(2264),
    [anon_sym_PIPE_PIPE] = ACTIONS(2302),
    [anon_sym_PLUS] = ACTIONS(2262),
    [anon_sym_DASH] = ACTIONS(2262),
    [anon_sym_STAR] = ACTIONS(2258),
    [anon_sym_SLASH] = ACTIONS(2260),
    [anon_sym_AMP] = ACTIONS(1912),
    [anon_sym_PIPE] = ACTIONS(2304),
    [anon_sym_CARET] = ACTIONS(2302),
    [anon_sym_PERCENT] = ACTIONS(2258),
    [anon_sym_LT_LT] = ACTIONS(2258),
    [anon_sym_GT_GT] = ACTIONS(2260),
    [anon_sym_GT_GT_GT] = ACTIONS(2258),
    [anon_sym_COMMA] = ACTIONS(2306),
    [anon_sym_QMARK] = ACTIONS(2308),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(2306),
    [sym_comment] = ACTIONS(58),
  },
  [1078] = {
    [aux_sym_array_initializer_repeat1] = STATE(1141),
    [anon_sym_COMMA] = ACTIONS(2310),
    [anon_sym_RBRACE] = ACTIONS(2298),
    [sym_comment] = ACTIONS(58),
  },
  [1079] = {
    [anon_sym_COMMA] = ACTIONS(2306),
    [anon_sym_RBRACE] = ACTIONS(2306),
    [sym_comment] = ACTIONS(58),
  },
  [1080] = {
    [anon_sym_DOT] = ACTIONS(2294),
    [anon_sym_LBRACK] = ACTIONS(2294),
    [anon_sym_COLON_COLON] = ACTIONS(2294),
    [sym_comment] = ACTIONS(58),
  },
  [1081] = {
    [anon_sym_LPAREN] = ACTIONS(2312),
    [sym_comment] = ACTIONS(58),
  },
  [1082] = {
    [sym__semicolon] = ACTIONS(2314),
    [sym_comment] = ACTIONS(58),
  },
  [1083] = {
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
    [anon_sym_STAR] = ACTIONS(2032),
    [anon_sym_SLASH] = ACTIONS(2034),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2032),
    [anon_sym_LT_LT] = ACTIONS(2032),
    [anon_sym_GT_GT] = ACTIONS(2034),
    [anon_sym_GT_GT_GT] = ACTIONS(2032),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1084] = {
    [anon_sym_GT] = ACTIONS(2022),
    [anon_sym_LT] = ACTIONS(2022),
    [anon_sym_EQ_EQ] = ACTIONS(2024),
    [anon_sym_GT_EQ] = ACTIONS(2024),
    [anon_sym_LT_EQ] = ACTIONS(2024),
    [anon_sym_BANG_EQ] = ACTIONS(2024),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(2030),
    [anon_sym_DASH] = ACTIONS(2030),
    [anon_sym_STAR] = ACTIONS(2032),
    [anon_sym_SLASH] = ACTIONS(2034),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2032),
    [anon_sym_LT_LT] = ACTIONS(2032),
    [anon_sym_GT_GT] = ACTIONS(2034),
    [anon_sym_GT_GT_GT] = ACTIONS(2032),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1085] = {
    [anon_sym_GT] = ACTIONS(2022),
    [anon_sym_LT] = ACTIONS(2022),
    [anon_sym_EQ_EQ] = ACTIONS(2024),
    [anon_sym_GT_EQ] = ACTIONS(2024),
    [anon_sym_LT_EQ] = ACTIONS(2024),
    [anon_sym_BANG_EQ] = ACTIONS(2024),
    [anon_sym_AMP_AMP] = ACTIONS(2026),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(2030),
    [anon_sym_DASH] = ACTIONS(2030),
    [anon_sym_STAR] = ACTIONS(2032),
    [anon_sym_SLASH] = ACTIONS(2034),
    [anon_sym_AMP] = ACTIONS(2036),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2032),
    [anon_sym_LT_LT] = ACTIONS(2032),
    [anon_sym_GT_GT] = ACTIONS(2034),
    [anon_sym_GT_GT_GT] = ACTIONS(2032),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1086] = {
    [anon_sym_GT] = ACTIONS(2022),
    [anon_sym_LT] = ACTIONS(2022),
    [anon_sym_EQ_EQ] = ACTIONS(2024),
    [anon_sym_GT_EQ] = ACTIONS(2024),
    [anon_sym_LT_EQ] = ACTIONS(2024),
    [anon_sym_BANG_EQ] = ACTIONS(2024),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(2032),
    [anon_sym_SLASH] = ACTIONS(2034),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2032),
    [anon_sym_LT_LT] = ACTIONS(2032),
    [anon_sym_GT_GT] = ACTIONS(2034),
    [anon_sym_GT_GT_GT] = ACTIONS(2032),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1087] = {
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
    [anon_sym_COLON] = ACTIONS(2316),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1088] = {
    [anon_sym_DOT] = ACTIONS(2318),
    [anon_sym_LBRACK] = ACTIONS(2318),
    [anon_sym_AT] = ACTIONS(2318),
    [anon_sym_COLON_COLON] = ACTIONS(2318),
    [sym_comment] = ACTIONS(58),
  },
  [1089] = {
    [anon_sym_LPAREN] = ACTIONS(2320),
    [anon_sym_DOT] = ACTIONS(2322),
    [anon_sym_LBRACK] = ACTIONS(2322),
    [anon_sym_COLON_COLON] = ACTIONS(2322),
    [sym_comment] = ACTIONS(58),
  },
  [1090] = {
    [sym_identifier] = ACTIONS(2324),
    [sym_comment] = ACTIONS(58),
  },
  [1091] = {
    [anon_sym_DOT] = ACTIONS(2326),
    [anon_sym_LBRACK] = ACTIONS(2326),
    [anon_sym_COLON_COLON] = ACTIONS(2326),
    [sym_comment] = ACTIONS(58),
  },
  [1092] = {
    [sym_identifier] = ACTIONS(2328),
    [sym_comment] = ACTIONS(58),
  },
  [1093] = {
    [anon_sym_DOT] = ACTIONS(2330),
    [anon_sym_LBRACK] = ACTIONS(2330),
    [anon_sym_COLON_COLON] = ACTIONS(2330),
    [sym_comment] = ACTIONS(58),
  },
  [1094] = {
    [anon_sym_RPAREN] = ACTIONS(2332),
    [sym_comment] = ACTIONS(58),
  },
  [1095] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1148),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2332),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1096] = {
    [anon_sym_super] = ACTIONS(975),
    [sym_identifier] = ACTIONS(1079),
    [sym_comment] = ACTIONS(58),
  },
  [1097] = {
    [anon_sym_GT] = ACTIONS(2334),
    [anon_sym_COMMA] = ACTIONS(979),
    [sym_comment] = ACTIONS(58),
  },
  [1098] = {
    [anon_sym_RPAREN] = ACTIONS(2336),
    [sym_comment] = ACTIONS(58),
  },
  [1099] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1151),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2336),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1100] = {
    [sym__semicolon] = ACTIONS(1894),
    [anon_sym_LT] = ACTIONS(1894),
    [anon_sym_LBRACE] = ACTIONS(1894),
    [anon_sym_RBRACE] = ACTIONS(1894),
    [anon_sym_boolean] = ACTIONS(1896),
    [anon_sym_byte] = ACTIONS(1896),
    [anon_sym_short] = ACTIONS(1896),
    [anon_sym_int] = ACTIONS(1896),
    [anon_sym_long] = ACTIONS(1896),
    [anon_sym_char] = ACTIONS(1896),
    [anon_sym_float] = ACTIONS(1896),
    [anon_sym_double] = ACTIONS(1896),
    [anon_sym_AT] = ACTIONS(1894),
    [anon_sym_static] = ACTIONS(1896),
    [anon_sym_class] = ACTIONS(1896),
    [anon_sym_public] = ACTIONS(1896),
    [anon_sym_protected] = ACTIONS(1896),
    [anon_sym_private] = ACTIONS(1896),
    [anon_sym_abstract] = ACTIONS(1896),
    [anon_sym_final] = ACTIONS(1896),
    [anon_sym_strictfp] = ACTIONS(1896),
    [anon_sym_default] = ACTIONS(1896),
    [anon_sym_synchronized] = ACTIONS(1896),
    [anon_sym_native] = ACTIONS(1896),
    [anon_sym_interface] = ACTIONS(1896),
    [sym_identifier] = ACTIONS(1898),
    [sym_comment] = ACTIONS(58),
  },
  [1101] = {
    [sym__statement] = STATE(1153),
    [sym__literal] = STATE(795),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(796),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(30),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym__declaration] = STATE(798),
    [sym_module_declaration] = STATE(799),
    [sym_package_declaration] = STATE(799),
    [sym_import_statement] = STATE(799),
    [sym_single_type_import_declaration] = STATE(800),
    [sym_type_import_on_declaraction] = STATE(800),
    [sym_single_static_import_declaration] = STATE(800),
    [sym_static_import_on_demand_declaration] = STATE(800),
    [sym_class_declaration] = STATE(799),
    [sym_normal_class_declaration] = STATE(226),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(799),
    [sym_annotation_type_declaration] = STATE(801),
    [sym_normal_interface_declaration] = STATE(801),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(802),
    [sym_method_declaration] = STATE(799),
    [aux_sym_class_or_interface_type_repeat1] = STATE(804),
    [aux_sym_normal_class_declaration_repeat1] = STATE(805),
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
    [anon_sym_LBRACE] = ACTIONS(2338),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(1652),
    [anon_sym_open] = ACTIONS(1654),
    [anon_sym_module] = ACTIONS(1656),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_package] = ACTIONS(1658),
    [anon_sym_import] = ACTIONS(1660),
    [anon_sym_class] = ACTIONS(1215),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(1662),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [1102] = {
    [anon_sym_if] = ACTIONS(2340),
    [anon_sym_RBRACE] = ACTIONS(2340),
    [anon_sym_AT] = ACTIONS(2340),
    [anon_sym_static] = ACTIONS(2340),
    [anon_sym_class] = ACTIONS(2340),
    [anon_sym_public] = ACTIONS(2340),
    [anon_sym_protected] = ACTIONS(2340),
    [anon_sym_private] = ACTIONS(2340),
    [anon_sym_abstract] = ACTIONS(2340),
    [anon_sym_final] = ACTIONS(2340),
    [anon_sym_strictfp] = ACTIONS(2340),
    [anon_sym_default] = ACTIONS(2340),
    [anon_sym_synchronized] = ACTIONS(2340),
    [anon_sym_native] = ACTIONS(2340),
    [sym_comment] = ACTIONS(58),
  },
  [1103] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [aux_sym_annotation_type_body_repeat1] = STATE(1155),
    [anon_sym_RBRACE] = ACTIONS(2342),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [1104] = {
    [anon_sym_if] = ACTIONS(805),
    [anon_sym_RBRACE] = ACTIONS(805),
    [anon_sym_elseif] = ACTIONS(805),
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
    [anon_sym_synchronized] = ACTIONS(805),
    [anon_sym_native] = ACTIONS(805),
    [sym_comment] = ACTIONS(58),
  },
  [1105] = {
    [sym_module_directive] = STATE(286),
    [aux_sym_module_declaration_repeat1] = STATE(1157),
    [anon_sym_RBRACE] = ACTIONS(2344),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [1106] = {
    [anon_sym_if] = ACTIONS(839),
    [anon_sym_RBRACE] = ACTIONS(839),
    [anon_sym_elseif] = ACTIONS(839),
    [anon_sym_AT] = ACTIONS(839),
    [anon_sym_static] = ACTIONS(839),
    [anon_sym_class] = ACTIONS(839),
    [anon_sym_public] = ACTIONS(839),
    [anon_sym_protected] = ACTIONS(839),
    [anon_sym_private] = ACTIONS(839),
    [anon_sym_abstract] = ACTIONS(839),
    [anon_sym_final] = ACTIONS(839),
    [anon_sym_strictfp] = ACTIONS(839),
    [anon_sym_default] = ACTIONS(839),
    [anon_sym_synchronized] = ACTIONS(839),
    [anon_sym_native] = ACTIONS(839),
    [sym_comment] = ACTIONS(58),
  },
  [1107] = {
    [sym_module_directive] = STATE(430),
    [anon_sym_RBRACE] = ACTIONS(2344),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [1108] = {
    [anon_sym_if] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_elseif] = ACTIONS(855),
    [anon_sym_AT] = ACTIONS(855),
    [anon_sym_static] = ACTIONS(855),
    [anon_sym_class] = ACTIONS(855),
    [anon_sym_public] = ACTIONS(855),
    [anon_sym_protected] = ACTIONS(855),
    [anon_sym_private] = ACTIONS(855),
    [anon_sym_abstract] = ACTIONS(855),
    [anon_sym_final] = ACTIONS(855),
    [anon_sym_strictfp] = ACTIONS(855),
    [anon_sym_default] = ACTIONS(855),
    [anon_sym_synchronized] = ACTIONS(855),
    [anon_sym_native] = ACTIONS(855),
    [sym_comment] = ACTIONS(58),
  },
  [1109] = {
    [anon_sym_STAR] = ACTIONS(2346),
    [sym_identifier] = ACTIONS(2348),
    [sym_comment] = ACTIONS(58),
  },
  [1110] = {
    [sym__semicolon] = ACTIONS(2350),
    [sym_comment] = ACTIONS(58),
  },
  [1111] = {
    [anon_sym_if] = ACTIONS(943),
    [anon_sym_RBRACE] = ACTIONS(943),
    [anon_sym_elseif] = ACTIONS(943),
    [anon_sym_AT] = ACTIONS(943),
    [anon_sym_static] = ACTIONS(943),
    [anon_sym_class] = ACTIONS(943),
    [anon_sym_public] = ACTIONS(943),
    [anon_sym_protected] = ACTIONS(943),
    [anon_sym_private] = ACTIONS(943),
    [anon_sym_abstract] = ACTIONS(943),
    [anon_sym_final] = ACTIONS(943),
    [anon_sym_strictfp] = ACTIONS(943),
    [anon_sym_default] = ACTIONS(943),
    [anon_sym_synchronized] = ACTIONS(943),
    [anon_sym_native] = ACTIONS(943),
    [sym_comment] = ACTIONS(58),
  },
  [1112] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_RBRACE] = ACTIONS(2352),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [1113] = {
    [sym_interface_body] = STATE(1162),
    [anon_sym_LBRACE] = ACTIONS(2100),
    [sym_comment] = ACTIONS(58),
  },
  [1114] = {
    [anon_sym_if] = ACTIONS(961),
    [anon_sym_RBRACE] = ACTIONS(961),
    [anon_sym_elseif] = ACTIONS(961),
    [anon_sym_AT] = ACTIONS(961),
    [anon_sym_static] = ACTIONS(961),
    [anon_sym_class] = ACTIONS(961),
    [anon_sym_public] = ACTIONS(961),
    [anon_sym_protected] = ACTIONS(961),
    [anon_sym_private] = ACTIONS(961),
    [anon_sym_abstract] = ACTIONS(961),
    [anon_sym_final] = ACTIONS(961),
    [anon_sym_strictfp] = ACTIONS(961),
    [anon_sym_default] = ACTIONS(961),
    [anon_sym_synchronized] = ACTIONS(961),
    [anon_sym_native] = ACTIONS(961),
    [sym_comment] = ACTIONS(58),
  },
  [1115] = {
    [anon_sym_if] = ACTIONS(1037),
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_elseif] = ACTIONS(1037),
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
    [anon_sym_synchronized] = ACTIONS(1037),
    [anon_sym_native] = ACTIONS(1037),
    [sym_comment] = ACTIONS(58),
  },
  [1116] = {
    [anon_sym_LBRACE] = ACTIONS(2354),
    [sym_comment] = ACTIONS(58),
  },
  [1117] = {
    [sym__semicolon] = ACTIONS(2356),
    [anon_sym_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(58),
  },
  [1118] = {
    [sym_annotation_type_body] = STATE(1165),
    [anon_sym_LBRACE] = ACTIONS(2206),
    [sym_comment] = ACTIONS(58),
  },
  [1119] = {
    [sym_extends_interfaces] = STATE(1166),
    [sym_interface_body] = STATE(1162),
    [anon_sym_LBRACE] = ACTIONS(2100),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [1120] = {
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
  [1121] = {
    [sym_unary_expression] = STATE(551),
    [sym_conditional_and_expression] = STATE(1167),
    [sym_inclusive_or_expression] = STATE(1044),
    [sym_exclusive_or_expression] = STATE(1045),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(1046),
    [sym_equality_expression] = STATE(1047),
    [sym_shift_expression] = STATE(1048),
    [sym_additive_expression] = STATE(1049),
    [sym_multiplicative_expression] = STATE(1050),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [sym_comment] = ACTIONS(58),
  },
  [1122] = {
    [sym__expression] = STATE(1168),
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
  [1123] = {
    [sym_unary_expression] = STATE(551),
    [sym_inclusive_or_expression] = STATE(1169),
    [sym_exclusive_or_expression] = STATE(1045),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(1046),
    [sym_equality_expression] = STATE(1047),
    [sym_shift_expression] = STATE(1048),
    [sym_additive_expression] = STATE(1049),
    [sym_multiplicative_expression] = STATE(1050),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [sym_comment] = ACTIONS(58),
  },
  [1124] = {
    [sym_unary_expression] = STATE(551),
    [sym_exclusive_or_expression] = STATE(1170),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(1046),
    [sym_equality_expression] = STATE(1047),
    [sym_shift_expression] = STATE(1048),
    [sym_additive_expression] = STATE(1049),
    [sym_multiplicative_expression] = STATE(1050),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [sym_comment] = ACTIONS(58),
  },
  [1125] = {
    [sym_unary_expression] = STATE(551),
    [sym_and_expression] = STATE(843),
    [sym_relational_expression] = STATE(1046),
    [sym_equality_expression] = STATE(1047),
    [sym_shift_expression] = STATE(1048),
    [sym_additive_expression] = STATE(1049),
    [sym_multiplicative_expression] = STATE(1050),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [sym_comment] = ACTIONS(58),
  },
  [1126] = {
    [sym_unary_expression] = STATE(551),
    [sym_shift_expression] = STATE(1171),
    [sym_additive_expression] = STATE(1049),
    [sym_multiplicative_expression] = STATE(1050),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [sym_comment] = ACTIONS(58),
  },
  [1127] = {
    [sym_unary_expression] = STATE(551),
    [sym_relational_expression] = STATE(1172),
    [sym_shift_expression] = STATE(1048),
    [sym_additive_expression] = STATE(1049),
    [sym_multiplicative_expression] = STATE(1050),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [sym_comment] = ACTIONS(58),
  },
  [1128] = {
    [sym_unary_expression] = STATE(551),
    [sym_additive_expression] = STATE(1173),
    [sym_multiplicative_expression] = STATE(1050),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [sym_comment] = ACTIONS(58),
  },
  [1129] = {
    [sym_unary_expression] = STATE(551),
    [sym_multiplicative_expression] = STATE(1174),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [sym_comment] = ACTIONS(58),
  },
  [1130] = {
    [sym_unary_expression] = STATE(848),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [sym_comment] = ACTIONS(58),
  },
  [1131] = {
    [anon_sym_RBRACE] = ACTIONS(2358),
    [anon_sym_boolean] = ACTIONS(2360),
    [anon_sym_byte] = ACTIONS(2360),
    [anon_sym_short] = ACTIONS(2360),
    [anon_sym_int] = ACTIONS(2360),
    [anon_sym_long] = ACTIONS(2360),
    [anon_sym_char] = ACTIONS(2360),
    [anon_sym_float] = ACTIONS(2360),
    [anon_sym_double] = ACTIONS(2360),
    [anon_sym_AT] = ACTIONS(2358),
    [anon_sym_static] = ACTIONS(2360),
    [anon_sym_class] = ACTIONS(2360),
    [anon_sym_public] = ACTIONS(2360),
    [anon_sym_protected] = ACTIONS(2360),
    [anon_sym_private] = ACTIONS(2360),
    [anon_sym_abstract] = ACTIONS(2360),
    [anon_sym_final] = ACTIONS(2360),
    [anon_sym_strictfp] = ACTIONS(2360),
    [anon_sym_default] = ACTIONS(2360),
    [anon_sym_synchronized] = ACTIONS(2360),
    [anon_sym_native] = ACTIONS(2360),
    [anon_sym_interface] = ACTIONS(2360),
    [sym_identifier] = ACTIONS(2362),
    [sym_comment] = ACTIONS(58),
  },
  [1132] = {
    [sym__semicolon] = ACTIONS(2364),
    [sym_comment] = ACTIONS(58),
  },
  [1133] = {
    [anon_sym_GT] = ACTIONS(1684),
    [anon_sym_LT] = ACTIONS(1684),
    [anon_sym_EQ_EQ] = ACTIONS(1686),
    [anon_sym_GT_EQ] = ACTIONS(1686),
    [anon_sym_LT_EQ] = ACTIONS(1686),
    [anon_sym_BANG_EQ] = ACTIONS(1686),
    [anon_sym_AMP_AMP] = ACTIONS(1976),
    [anon_sym_PIPE_PIPE] = ACTIONS(1978),
    [anon_sym_PLUS] = ACTIONS(1980),
    [anon_sym_DASH] = ACTIONS(1980),
    [anon_sym_STAR] = ACTIONS(1982),
    [anon_sym_SLASH] = ACTIONS(1984),
    [anon_sym_AMP] = ACTIONS(1688),
    [anon_sym_PIPE] = ACTIONS(1986),
    [anon_sym_CARET] = ACTIONS(1978),
    [anon_sym_PERCENT] = ACTIONS(1982),
    [anon_sym_LT_LT] = ACTIONS(1982),
    [anon_sym_GT_GT] = ACTIONS(1984),
    [anon_sym_GT_GT_GT] = ACTIONS(1982),
    [anon_sym_RPAREN] = ACTIONS(1301),
    [anon_sym_COMMA] = ACTIONS(1301),
    [anon_sym_QMARK] = ACTIONS(1992),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1134] = {
    [sym__expression] = STATE(1176),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1135] = {
    [anon_sym_GT] = ACTIONS(1684),
    [anon_sym_LT] = ACTIONS(1684),
    [anon_sym_EQ_EQ] = ACTIONS(1686),
    [anon_sym_GT_EQ] = ACTIONS(1686),
    [anon_sym_LT_EQ] = ACTIONS(1686),
    [anon_sym_BANG_EQ] = ACTIONS(1686),
    [anon_sym_AMP_AMP] = ACTIONS(1976),
    [anon_sym_PIPE_PIPE] = ACTIONS(1978),
    [anon_sym_PLUS] = ACTIONS(1980),
    [anon_sym_DASH] = ACTIONS(1980),
    [anon_sym_STAR] = ACTIONS(1982),
    [anon_sym_SLASH] = ACTIONS(1984),
    [anon_sym_AMP] = ACTIONS(1688),
    [anon_sym_PIPE] = ACTIONS(1986),
    [anon_sym_CARET] = ACTIONS(1978),
    [anon_sym_PERCENT] = ACTIONS(1982),
    [anon_sym_LT_LT] = ACTIONS(1982),
    [anon_sym_GT_GT] = ACTIONS(1984),
    [anon_sym_GT_GT_GT] = ACTIONS(1982),
    [anon_sym_RPAREN] = ACTIONS(2366),
    [anon_sym_COMMA] = ACTIONS(2366),
    [anon_sym_QMARK] = ACTIONS(1992),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1136] = {
    [anon_sym_LT] = ACTIONS(2368),
    [anon_sym_LPAREN] = ACTIONS(2370),
    [anon_sym_DOT] = ACTIONS(2370),
    [anon_sym_LT_GT] = ACTIONS(2370),
    [sym_comment] = ACTIONS(58),
  },
  [1137] = {
    [anon_sym_DOT] = ACTIONS(2372),
    [anon_sym_LBRACK] = ACTIONS(2372),
    [anon_sym_COLON_COLON] = ACTIONS(2372),
    [sym_comment] = ACTIONS(58),
  },
  [1138] = {
    [sym_class_body] = STATE(1177),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_DOT] = ACTIONS(2372),
    [anon_sym_LBRACK] = ACTIONS(2372),
    [anon_sym_COLON_COLON] = ACTIONS(2372),
    [sym_comment] = ACTIONS(58),
  },
  [1139] = {
    [anon_sym_COMMA] = ACTIONS(2374),
    [anon_sym_RBRACE] = ACTIONS(2374),
    [anon_sym_DOT] = ACTIONS(2374),
    [anon_sym_COLON_COLON] = ACTIONS(2374),
    [sym_comment] = ACTIONS(58),
  },
  [1140] = {
    [sym__expression] = STATE(1077),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_variable_initializer] = STATE(1179),
    [sym_array_initializer] = STATE(1079),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [anon_sym_LBRACE] = ACTIONS(2016),
    [anon_sym_RBRACE] = ACTIONS(2376),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1141] = {
    [anon_sym_COMMA] = ACTIONS(2378),
    [anon_sym_RBRACE] = ACTIONS(2376),
    [sym_comment] = ACTIONS(58),
  },
  [1142] = {
    [anon_sym_if] = ACTIONS(2380),
    [anon_sym_RBRACE] = ACTIONS(2380),
    [anon_sym_AT] = ACTIONS(2380),
    [anon_sym_static] = ACTIONS(2380),
    [anon_sym_class] = ACTIONS(2380),
    [anon_sym_public] = ACTIONS(2380),
    [anon_sym_protected] = ACTIONS(2380),
    [anon_sym_private] = ACTIONS(2380),
    [anon_sym_abstract] = ACTIONS(2380),
    [anon_sym_final] = ACTIONS(2380),
    [anon_sym_strictfp] = ACTIONS(2380),
    [anon_sym_default] = ACTIONS(2380),
    [anon_sym_synchronized] = ACTIONS(2380),
    [anon_sym_native] = ACTIONS(2380),
    [sym_comment] = ACTIONS(58),
  },
  [1143] = {
    [sym__expression] = STATE(1181),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1778),
    [anon_sym_TILDE] = ACTIONS(1778),
    [anon_sym_PLUS_PLUS] = ACTIONS(1780),
    [anon_sym_DASH_DASH] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1144] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1183),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2382),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1145] = {
    [anon_sym_LPAREN] = ACTIONS(2384),
    [sym_comment] = ACTIONS(58),
  },
  [1146] = {
    [anon_sym_DOT] = ACTIONS(2386),
    [anon_sym_LBRACK] = ACTIONS(2386),
    [anon_sym_COLON_COLON] = ACTIONS(2386),
    [sym_comment] = ACTIONS(58),
  },
  [1147] = {
    [anon_sym_DOT] = ACTIONS(2388),
    [anon_sym_LBRACK] = ACTIONS(2388),
    [anon_sym_COLON_COLON] = ACTIONS(2388),
    [sym_comment] = ACTIONS(58),
  },
  [1148] = {
    [anon_sym_RPAREN] = ACTIONS(2382),
    [sym_comment] = ACTIONS(58),
  },
  [1149] = {
    [anon_sym_super] = ACTIONS(1297),
    [sym_identifier] = ACTIONS(1395),
    [sym_comment] = ACTIONS(58),
  },
  [1150] = {
    [sym__semicolon] = ACTIONS(2390),
    [sym_comment] = ACTIONS(58),
  },
  [1151] = {
    [anon_sym_RPAREN] = ACTIONS(2392),
    [sym_comment] = ACTIONS(58),
  },
  [1152] = {
    [sym__statement] = STATE(1187),
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
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
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
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_open] = ACTIONS(42),
    [anon_sym_module] = ACTIONS(44),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_package] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [1153] = {
    [anon_sym_if] = ACTIONS(2394),
    [anon_sym_RBRACE] = ACTIONS(2394),
    [anon_sym_elseif] = ACTIONS(2394),
    [anon_sym_AT] = ACTIONS(2394),
    [anon_sym_static] = ACTIONS(2394),
    [anon_sym_class] = ACTIONS(2394),
    [anon_sym_public] = ACTIONS(2394),
    [anon_sym_protected] = ACTIONS(2394),
    [anon_sym_private] = ACTIONS(2394),
    [anon_sym_abstract] = ACTIONS(2394),
    [anon_sym_final] = ACTIONS(2394),
    [anon_sym_strictfp] = ACTIONS(2394),
    [anon_sym_default] = ACTIONS(2394),
    [anon_sym_synchronized] = ACTIONS(2394),
    [anon_sym_native] = ACTIONS(2394),
    [sym_comment] = ACTIONS(58),
  },
  [1154] = {
    [anon_sym_if] = ACTIONS(1101),
    [anon_sym_RBRACE] = ACTIONS(1101),
    [anon_sym_elseif] = ACTIONS(1101),
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
    [anon_sym_synchronized] = ACTIONS(1101),
    [anon_sym_native] = ACTIONS(1101),
    [sym_comment] = ACTIONS(58),
  },
  [1155] = {
    [sym_integral_type] = STATE(11),
    [sym_floating_point_type] = STATE(11),
    [sym__annotation] = STATE(17),
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
    [anon_sym_RBRACE] = ACTIONS(2396),
    [anon_sym_boolean] = ACTIONS(34),
    [anon_sym_byte] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(38),
    [anon_sym_double] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_final] = ACTIONS(46),
    [anon_sym_strictfp] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_synchronized] = ACTIONS(46),
    [anon_sym_native] = ACTIONS(46),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [1156] = {
    [anon_sym_if] = ACTIONS(1147),
    [anon_sym_RBRACE] = ACTIONS(1147),
    [anon_sym_elseif] = ACTIONS(1147),
    [anon_sym_AT] = ACTIONS(1147),
    [anon_sym_static] = ACTIONS(1147),
    [anon_sym_class] = ACTIONS(1147),
    [anon_sym_public] = ACTIONS(1147),
    [anon_sym_protected] = ACTIONS(1147),
    [anon_sym_private] = ACTIONS(1147),
    [anon_sym_abstract] = ACTIONS(1147),
    [anon_sym_final] = ACTIONS(1147),
    [anon_sym_strictfp] = ACTIONS(1147),
    [anon_sym_default] = ACTIONS(1147),
    [anon_sym_synchronized] = ACTIONS(1147),
    [anon_sym_native] = ACTIONS(1147),
    [sym_comment] = ACTIONS(58),
  },
  [1157] = {
    [sym_module_directive] = STATE(430),
    [anon_sym_RBRACE] = ACTIONS(2398),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [1158] = {
    [sym__semicolon] = ACTIONS(2400),
    [sym_comment] = ACTIONS(58),
  },
  [1159] = {
    [sym__semicolon] = ACTIONS(2402),
    [anon_sym_DOT] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [1160] = {
    [anon_sym_if] = ACTIONS(1187),
    [anon_sym_RBRACE] = ACTIONS(1187),
    [anon_sym_elseif] = ACTIONS(1187),
    [anon_sym_AT] = ACTIONS(1187),
    [anon_sym_static] = ACTIONS(1187),
    [anon_sym_class] = ACTIONS(1187),
    [anon_sym_public] = ACTIONS(1187),
    [anon_sym_protected] = ACTIONS(1187),
    [anon_sym_private] = ACTIONS(1187),
    [anon_sym_abstract] = ACTIONS(1187),
    [anon_sym_final] = ACTIONS(1187),
    [anon_sym_strictfp] = ACTIONS(1187),
    [anon_sym_default] = ACTIONS(1187),
    [anon_sym_synchronized] = ACTIONS(1187),
    [anon_sym_native] = ACTIONS(1187),
    [sym_comment] = ACTIONS(58),
  },
  [1161] = {
    [anon_sym_if] = ACTIONS(1269),
    [anon_sym_RBRACE] = ACTIONS(1269),
    [anon_sym_elseif] = ACTIONS(1269),
    [anon_sym_AT] = ACTIONS(1269),
    [anon_sym_static] = ACTIONS(1269),
    [anon_sym_class] = ACTIONS(1269),
    [anon_sym_public] = ACTIONS(1269),
    [anon_sym_protected] = ACTIONS(1269),
    [anon_sym_private] = ACTIONS(1269),
    [anon_sym_abstract] = ACTIONS(1269),
    [anon_sym_final] = ACTIONS(1269),
    [anon_sym_strictfp] = ACTIONS(1269),
    [anon_sym_default] = ACTIONS(1269),
    [anon_sym_synchronized] = ACTIONS(1269),
    [anon_sym_native] = ACTIONS(1269),
    [sym_comment] = ACTIONS(58),
  },
  [1162] = {
    [anon_sym_if] = ACTIONS(1281),
    [anon_sym_RBRACE] = ACTIONS(1281),
    [anon_sym_elseif] = ACTIONS(1281),
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
    [anon_sym_synchronized] = ACTIONS(1281),
    [anon_sym_native] = ACTIONS(1281),
    [sym_comment] = ACTIONS(58),
  },
  [1163] = {
    [sym_module_directive] = STATE(286),
    [aux_sym_module_declaration_repeat1] = STATE(1192),
    [anon_sym_RBRACE] = ACTIONS(2398),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [1164] = {
    [anon_sym_if] = ACTIONS(1377),
    [anon_sym_RBRACE] = ACTIONS(1377),
    [anon_sym_elseif] = ACTIONS(1377),
    [anon_sym_AT] = ACTIONS(1377),
    [anon_sym_static] = ACTIONS(1377),
    [anon_sym_class] = ACTIONS(1377),
    [anon_sym_public] = ACTIONS(1377),
    [anon_sym_protected] = ACTIONS(1377),
    [anon_sym_private] = ACTIONS(1377),
    [anon_sym_abstract] = ACTIONS(1377),
    [anon_sym_final] = ACTIONS(1377),
    [anon_sym_strictfp] = ACTIONS(1377),
    [anon_sym_default] = ACTIONS(1377),
    [anon_sym_synchronized] = ACTIONS(1377),
    [anon_sym_native] = ACTIONS(1377),
    [sym_comment] = ACTIONS(58),
  },
  [1165] = {
    [anon_sym_if] = ACTIONS(1383),
    [anon_sym_RBRACE] = ACTIONS(1383),
    [anon_sym_elseif] = ACTIONS(1383),
    [anon_sym_AT] = ACTIONS(1383),
    [anon_sym_static] = ACTIONS(1383),
    [anon_sym_class] = ACTIONS(1383),
    [anon_sym_public] = ACTIONS(1383),
    [anon_sym_protected] = ACTIONS(1383),
    [anon_sym_private] = ACTIONS(1383),
    [anon_sym_abstract] = ACTIONS(1383),
    [anon_sym_final] = ACTIONS(1383),
    [anon_sym_strictfp] = ACTIONS(1383),
    [anon_sym_default] = ACTIONS(1383),
    [anon_sym_synchronized] = ACTIONS(1383),
    [anon_sym_native] = ACTIONS(1383),
    [sym_comment] = ACTIONS(58),
  },
  [1166] = {
    [sym_interface_body] = STATE(1193),
    [anon_sym_LBRACE] = ACTIONS(2100),
    [sym_comment] = ACTIONS(58),
  },
  [1167] = {
    [sym__semicolon] = ACTIONS(1918),
    [anon_sym_AMP_AMP] = ACTIONS(2230),
    [anon_sym_PIPE_PIPE] = ACTIONS(1918),
    [anon_sym_QMARK] = ACTIONS(1918),
    [sym_comment] = ACTIONS(58),
  },
  [1168] = {
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
    [anon_sym_COLON] = ACTIONS(2404),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1169] = {
    [sym__semicolon] = ACTIONS(1922),
    [anon_sym_AMP_AMP] = ACTIONS(1922),
    [anon_sym_PIPE_PIPE] = ACTIONS(1922),
    [anon_sym_PIPE] = ACTIONS(2232),
    [anon_sym_QMARK] = ACTIONS(1922),
    [sym_comment] = ACTIONS(58),
  },
  [1170] = {
    [sym__semicolon] = ACTIONS(1924),
    [anon_sym_AMP_AMP] = ACTIONS(1924),
    [anon_sym_PIPE_PIPE] = ACTIONS(1924),
    [anon_sym_PIPE] = ACTIONS(1926),
    [anon_sym_CARET] = ACTIONS(2234),
    [anon_sym_QMARK] = ACTIONS(1924),
    [sym_comment] = ACTIONS(58),
  },
  [1171] = {
    [sym__semicolon] = ACTIONS(1934),
    [anon_sym_LT] = ACTIONS(1932),
    [anon_sym_EQ_EQ] = ACTIONS(1934),
    [anon_sym_BANG_EQ] = ACTIONS(1934),
    [anon_sym_AMP_AMP] = ACTIONS(1934),
    [anon_sym_PIPE_PIPE] = ACTIONS(1934),
    [anon_sym_PIPE] = ACTIONS(1932),
    [anon_sym_CARET] = ACTIONS(1934),
    [anon_sym_LT_LT] = ACTIONS(2240),
    [anon_sym_GT_GT] = ACTIONS(2242),
    [anon_sym_GT_GT_GT] = ACTIONS(2240),
    [anon_sym_QMARK] = ACTIONS(1934),
    [sym_comment] = ACTIONS(58),
  },
  [1172] = {
    [sym__semicolon] = ACTIONS(1938),
    [anon_sym_LT] = ACTIONS(2236),
    [anon_sym_EQ_EQ] = ACTIONS(1936),
    [anon_sym_BANG_EQ] = ACTIONS(1936),
    [anon_sym_AMP_AMP] = ACTIONS(1938),
    [anon_sym_PIPE_PIPE] = ACTIONS(1938),
    [anon_sym_PIPE] = ACTIONS(1940),
    [anon_sym_CARET] = ACTIONS(1938),
    [anon_sym_QMARK] = ACTIONS(1938),
    [sym_comment] = ACTIONS(58),
  },
  [1173] = {
    [sym__semicolon] = ACTIONS(1944),
    [anon_sym_LT] = ACTIONS(1942),
    [anon_sym_EQ_EQ] = ACTIONS(1944),
    [anon_sym_BANG_EQ] = ACTIONS(1944),
    [anon_sym_AMP_AMP] = ACTIONS(1944),
    [anon_sym_PIPE_PIPE] = ACTIONS(1944),
    [anon_sym_PLUS] = ACTIONS(2244),
    [anon_sym_DASH] = ACTIONS(2244),
    [anon_sym_PIPE] = ACTIONS(1942),
    [anon_sym_CARET] = ACTIONS(1944),
    [anon_sym_LT_LT] = ACTIONS(1944),
    [anon_sym_GT_GT] = ACTIONS(1942),
    [anon_sym_GT_GT_GT] = ACTIONS(1944),
    [anon_sym_QMARK] = ACTIONS(1944),
    [sym_comment] = ACTIONS(58),
  },
  [1174] = {
    [sym__semicolon] = ACTIONS(1948),
    [anon_sym_LT] = ACTIONS(1946),
    [anon_sym_EQ_EQ] = ACTIONS(1948),
    [anon_sym_BANG_EQ] = ACTIONS(1948),
    [anon_sym_AMP_AMP] = ACTIONS(1948),
    [anon_sym_PIPE_PIPE] = ACTIONS(1948),
    [anon_sym_PLUS] = ACTIONS(1948),
    [anon_sym_DASH] = ACTIONS(1948),
    [anon_sym_STAR] = ACTIONS(2246),
    [anon_sym_SLASH] = ACTIONS(2248),
    [anon_sym_PIPE] = ACTIONS(1946),
    [anon_sym_CARET] = ACTIONS(1948),
    [anon_sym_PERCENT] = ACTIONS(2246),
    [anon_sym_LT_LT] = ACTIONS(1948),
    [anon_sym_GT_GT] = ACTIONS(1946),
    [anon_sym_GT_GT_GT] = ACTIONS(1948),
    [anon_sym_QMARK] = ACTIONS(1948),
    [sym_comment] = ACTIONS(58),
  },
  [1175] = {
    [anon_sym_RBRACE] = ACTIONS(2406),
    [anon_sym_boolean] = ACTIONS(2408),
    [anon_sym_byte] = ACTIONS(2408),
    [anon_sym_short] = ACTIONS(2408),
    [anon_sym_int] = ACTIONS(2408),
    [anon_sym_long] = ACTIONS(2408),
    [anon_sym_char] = ACTIONS(2408),
    [anon_sym_float] = ACTIONS(2408),
    [anon_sym_double] = ACTIONS(2408),
    [anon_sym_AT] = ACTIONS(2406),
    [anon_sym_static] = ACTIONS(2408),
    [anon_sym_class] = ACTIONS(2408),
    [anon_sym_public] = ACTIONS(2408),
    [anon_sym_protected] = ACTIONS(2408),
    [anon_sym_private] = ACTIONS(2408),
    [anon_sym_abstract] = ACTIONS(2408),
    [anon_sym_final] = ACTIONS(2408),
    [anon_sym_strictfp] = ACTIONS(2408),
    [anon_sym_default] = ACTIONS(2408),
    [anon_sym_synchronized] = ACTIONS(2408),
    [anon_sym_native] = ACTIONS(2408),
    [anon_sym_interface] = ACTIONS(2408),
    [sym_identifier] = ACTIONS(2410),
    [sym_comment] = ACTIONS(58),
  },
  [1176] = {
    [anon_sym_GT] = ACTIONS(1908),
    [anon_sym_LT] = ACTIONS(1908),
    [anon_sym_EQ_EQ] = ACTIONS(1910),
    [anon_sym_GT_EQ] = ACTIONS(1910),
    [anon_sym_LT_EQ] = ACTIONS(1910),
    [anon_sym_BANG_EQ] = ACTIONS(1910),
    [anon_sym_AMP_AMP] = ACTIONS(2264),
    [anon_sym_PIPE_PIPE] = ACTIONS(2302),
    [anon_sym_PLUS] = ACTIONS(2262),
    [anon_sym_DASH] = ACTIONS(2262),
    [anon_sym_STAR] = ACTIONS(2258),
    [anon_sym_SLASH] = ACTIONS(2260),
    [anon_sym_AMP] = ACTIONS(1912),
    [anon_sym_PIPE] = ACTIONS(2304),
    [anon_sym_CARET] = ACTIONS(2302),
    [anon_sym_PERCENT] = ACTIONS(2258),
    [anon_sym_LT_LT] = ACTIONS(2258),
    [anon_sym_GT_GT] = ACTIONS(2260),
    [anon_sym_GT_GT_GT] = ACTIONS(2258),
    [anon_sym_COMMA] = ACTIONS(1301),
    [anon_sym_QMARK] = ACTIONS(2308),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(1301),
    [sym_comment] = ACTIONS(58),
  },
  [1177] = {
    [anon_sym_DOT] = ACTIONS(2412),
    [anon_sym_LBRACK] = ACTIONS(2412),
    [anon_sym_COLON_COLON] = ACTIONS(2412),
    [sym_comment] = ACTIONS(58),
  },
  [1178] = {
    [anon_sym_COMMA] = ACTIONS(2414),
    [anon_sym_RBRACE] = ACTIONS(2414),
    [anon_sym_DOT] = ACTIONS(2414),
    [anon_sym_COLON_COLON] = ACTIONS(2414),
    [sym_comment] = ACTIONS(58),
  },
  [1179] = {
    [anon_sym_COMMA] = ACTIONS(2416),
    [anon_sym_RBRACE] = ACTIONS(2416),
    [sym_comment] = ACTIONS(58),
  },
  [1180] = {
    [sym__expression] = STATE(1077),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_variable_initializer] = STATE(1196),
    [sym_array_initializer] = STATE(1079),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1692),
    [anon_sym_TILDE] = ACTIONS(1692),
    [anon_sym_PLUS_PLUS] = ACTIONS(1694),
    [anon_sym_DASH_DASH] = ACTIONS(1694),
    [anon_sym_LBRACE] = ACTIONS(2016),
    [anon_sym_RBRACE] = ACTIONS(2418),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1181] = {
    [anon_sym_GT] = ACTIONS(2022),
    [anon_sym_LT] = ACTIONS(2022),
    [anon_sym_EQ_EQ] = ACTIONS(2024),
    [anon_sym_GT_EQ] = ACTIONS(2024),
    [anon_sym_LT_EQ] = ACTIONS(2024),
    [anon_sym_BANG_EQ] = ACTIONS(2024),
    [anon_sym_AMP_AMP] = ACTIONS(2026),
    [anon_sym_PIPE_PIPE] = ACTIONS(2028),
    [anon_sym_PLUS] = ACTIONS(2030),
    [anon_sym_DASH] = ACTIONS(2030),
    [anon_sym_STAR] = ACTIONS(2032),
    [anon_sym_SLASH] = ACTIONS(2034),
    [anon_sym_AMP] = ACTIONS(2036),
    [anon_sym_PIPE] = ACTIONS(2038),
    [anon_sym_CARET] = ACTIONS(2028),
    [anon_sym_PERCENT] = ACTIONS(2032),
    [anon_sym_LT_LT] = ACTIONS(2032),
    [anon_sym_GT_GT] = ACTIONS(2034),
    [anon_sym_GT_GT_GT] = ACTIONS(2032),
    [anon_sym_QMARK] = ACTIONS(2040),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(1301),
    [sym_comment] = ACTIONS(58),
  },
  [1182] = {
    [anon_sym_DOT] = ACTIONS(2420),
    [anon_sym_LBRACK] = ACTIONS(2420),
    [anon_sym_COLON_COLON] = ACTIONS(2420),
    [sym_comment] = ACTIONS(58),
  },
  [1183] = {
    [anon_sym_RPAREN] = ACTIONS(2422),
    [sym_comment] = ACTIONS(58),
  },
  [1184] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1198),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2422),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1185] = {
    [anon_sym_if] = ACTIONS(2424),
    [anon_sym_RBRACE] = ACTIONS(2424),
    [anon_sym_AT] = ACTIONS(2424),
    [anon_sym_static] = ACTIONS(2424),
    [anon_sym_class] = ACTIONS(2424),
    [anon_sym_public] = ACTIONS(2424),
    [anon_sym_protected] = ACTIONS(2424),
    [anon_sym_private] = ACTIONS(2424),
    [anon_sym_abstract] = ACTIONS(2424),
    [anon_sym_final] = ACTIONS(2424),
    [anon_sym_strictfp] = ACTIONS(2424),
    [anon_sym_default] = ACTIONS(2424),
    [anon_sym_synchronized] = ACTIONS(2424),
    [anon_sym_native] = ACTIONS(2424),
    [sym_comment] = ACTIONS(58),
  },
  [1186] = {
    [sym__semicolon] = ACTIONS(2426),
    [sym_comment] = ACTIONS(58),
  },
  [1187] = {
    [anon_sym_RBRACE] = ACTIONS(2428),
    [sym_comment] = ACTIONS(58),
  },
  [1188] = {
    [anon_sym_if] = ACTIONS(1407),
    [anon_sym_RBRACE] = ACTIONS(1407),
    [anon_sym_elseif] = ACTIONS(1407),
    [anon_sym_AT] = ACTIONS(1407),
    [anon_sym_static] = ACTIONS(1407),
    [anon_sym_class] = ACTIONS(1407),
    [anon_sym_public] = ACTIONS(1407),
    [anon_sym_protected] = ACTIONS(1407),
    [anon_sym_private] = ACTIONS(1407),
    [anon_sym_abstract] = ACTIONS(1407),
    [anon_sym_final] = ACTIONS(1407),
    [anon_sym_strictfp] = ACTIONS(1407),
    [anon_sym_default] = ACTIONS(1407),
    [anon_sym_synchronized] = ACTIONS(1407),
    [anon_sym_native] = ACTIONS(1407),
    [sym_comment] = ACTIONS(58),
  },
  [1189] = {
    [anon_sym_if] = ACTIONS(1495),
    [anon_sym_RBRACE] = ACTIONS(1495),
    [anon_sym_elseif] = ACTIONS(1495),
    [anon_sym_AT] = ACTIONS(1495),
    [anon_sym_static] = ACTIONS(1495),
    [anon_sym_class] = ACTIONS(1495),
    [anon_sym_public] = ACTIONS(1495),
    [anon_sym_protected] = ACTIONS(1495),
    [anon_sym_private] = ACTIONS(1495),
    [anon_sym_abstract] = ACTIONS(1495),
    [anon_sym_final] = ACTIONS(1495),
    [anon_sym_strictfp] = ACTIONS(1495),
    [anon_sym_default] = ACTIONS(1495),
    [anon_sym_synchronized] = ACTIONS(1495),
    [anon_sym_native] = ACTIONS(1495),
    [sym_comment] = ACTIONS(58),
  },
  [1190] = {
    [anon_sym_if] = ACTIONS(1519),
    [anon_sym_RBRACE] = ACTIONS(1519),
    [anon_sym_elseif] = ACTIONS(1519),
    [anon_sym_AT] = ACTIONS(1519),
    [anon_sym_static] = ACTIONS(1519),
    [anon_sym_class] = ACTIONS(1519),
    [anon_sym_public] = ACTIONS(1519),
    [anon_sym_protected] = ACTIONS(1519),
    [anon_sym_private] = ACTIONS(1519),
    [anon_sym_abstract] = ACTIONS(1519),
    [anon_sym_final] = ACTIONS(1519),
    [anon_sym_strictfp] = ACTIONS(1519),
    [anon_sym_default] = ACTIONS(1519),
    [anon_sym_synchronized] = ACTIONS(1519),
    [anon_sym_native] = ACTIONS(1519),
    [sym_comment] = ACTIONS(58),
  },
  [1191] = {
    [anon_sym_if] = ACTIONS(1525),
    [anon_sym_RBRACE] = ACTIONS(1525),
    [anon_sym_elseif] = ACTIONS(1525),
    [anon_sym_AT] = ACTIONS(1525),
    [anon_sym_static] = ACTIONS(1525),
    [anon_sym_class] = ACTIONS(1525),
    [anon_sym_public] = ACTIONS(1525),
    [anon_sym_protected] = ACTIONS(1525),
    [anon_sym_private] = ACTIONS(1525),
    [anon_sym_abstract] = ACTIONS(1525),
    [anon_sym_final] = ACTIONS(1525),
    [anon_sym_strictfp] = ACTIONS(1525),
    [anon_sym_default] = ACTIONS(1525),
    [anon_sym_synchronized] = ACTIONS(1525),
    [anon_sym_native] = ACTIONS(1525),
    [sym_comment] = ACTIONS(58),
  },
  [1192] = {
    [sym_module_directive] = STATE(430),
    [anon_sym_RBRACE] = ACTIONS(2430),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [1193] = {
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
    [anon_sym_synchronized] = ACTIONS(1672),
    [anon_sym_native] = ACTIONS(1672),
    [sym_comment] = ACTIONS(58),
  },
  [1194] = {
    [sym_lambda_expression] = STATE(1063),
    [sym__lambda_parameters] = STATE(28),
    [sym_unary_expression] = STATE(551),
    [sym_conditional_expression] = STATE(1063),
    [sym_conditional_or_expression] = STATE(1042),
    [sym_conditional_and_expression] = STATE(1043),
    [sym_inclusive_or_expression] = STATE(1044),
    [sym_exclusive_or_expression] = STATE(1045),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(1046),
    [sym_equality_expression] = STATE(1047),
    [sym_shift_expression] = STATE(1048),
    [sym_additive_expression] = STATE(1049),
    [sym_multiplicative_expression] = STATE(1050),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(2120),
    [anon_sym_TILDE] = ACTIONS(2120),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1195] = {
    [anon_sym_COMMA] = ACTIONS(2432),
    [anon_sym_RBRACE] = ACTIONS(2432),
    [anon_sym_DOT] = ACTIONS(2432),
    [anon_sym_COLON_COLON] = ACTIONS(2432),
    [sym_comment] = ACTIONS(58),
  },
  [1196] = {
    [anon_sym_COMMA] = ACTIONS(2434),
    [anon_sym_RBRACE] = ACTIONS(2434),
    [sym_comment] = ACTIONS(58),
  },
  [1197] = {
    [anon_sym_DOT] = ACTIONS(2436),
    [anon_sym_LBRACK] = ACTIONS(2436),
    [anon_sym_COLON_COLON] = ACTIONS(2436),
    [sym_comment] = ACTIONS(58),
  },
  [1198] = {
    [anon_sym_RPAREN] = ACTIONS(2438),
    [sym_comment] = ACTIONS(58),
  },
  [1199] = {
    [anon_sym_if] = ACTIONS(2440),
    [anon_sym_RBRACE] = ACTIONS(2440),
    [anon_sym_AT] = ACTIONS(2440),
    [anon_sym_static] = ACTIONS(2440),
    [anon_sym_class] = ACTIONS(2440),
    [anon_sym_public] = ACTIONS(2440),
    [anon_sym_protected] = ACTIONS(2440),
    [anon_sym_private] = ACTIONS(2440),
    [anon_sym_abstract] = ACTIONS(2440),
    [anon_sym_final] = ACTIONS(2440),
    [anon_sym_strictfp] = ACTIONS(2440),
    [anon_sym_default] = ACTIONS(2440),
    [anon_sym_synchronized] = ACTIONS(2440),
    [anon_sym_native] = ACTIONS(2440),
    [sym_comment] = ACTIONS(58),
  },
  [1200] = {
    [anon_sym_if] = ACTIONS(2442),
    [anon_sym_RBRACE] = ACTIONS(2442),
    [anon_sym_elseif] = ACTIONS(2442),
    [anon_sym_AT] = ACTIONS(2442),
    [anon_sym_static] = ACTIONS(2442),
    [anon_sym_class] = ACTIONS(2442),
    [anon_sym_public] = ACTIONS(2442),
    [anon_sym_protected] = ACTIONS(2442),
    [anon_sym_private] = ACTIONS(2442),
    [anon_sym_abstract] = ACTIONS(2442),
    [anon_sym_final] = ACTIONS(2442),
    [anon_sym_strictfp] = ACTIONS(2442),
    [anon_sym_default] = ACTIONS(2442),
    [anon_sym_synchronized] = ACTIONS(2442),
    [anon_sym_native] = ACTIONS(2442),
    [sym_comment] = ACTIONS(58),
  },
  [1201] = {
    [anon_sym_if] = ACTIONS(1888),
    [anon_sym_RBRACE] = ACTIONS(1888),
    [anon_sym_elseif] = ACTIONS(1888),
    [anon_sym_AT] = ACTIONS(1888),
    [anon_sym_static] = ACTIONS(1888),
    [anon_sym_class] = ACTIONS(1888),
    [anon_sym_public] = ACTIONS(1888),
    [anon_sym_protected] = ACTIONS(1888),
    [anon_sym_private] = ACTIONS(1888),
    [anon_sym_abstract] = ACTIONS(1888),
    [anon_sym_final] = ACTIONS(1888),
    [anon_sym_strictfp] = ACTIONS(1888),
    [anon_sym_default] = ACTIONS(1888),
    [anon_sym_synchronized] = ACTIONS(1888),
    [anon_sym_native] = ACTIONS(1888),
    [sym_comment] = ACTIONS(58),
  },
  [1202] = {
    [anon_sym_DOT] = ACTIONS(2444),
    [anon_sym_LBRACK] = ACTIONS(2444),
    [anon_sym_COLON_COLON] = ACTIONS(2444),
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
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
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
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_primitive_type, 1),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_primitive_type, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integral_type, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integral_type, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_floating_point_type, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_type, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_modifier, 1, .fragile = true),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
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
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_marker_annotation, 2),
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
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statement, 1),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 1),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
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
  [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_element_annotation, 5),
  [1127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(548),
  [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
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
  [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(594),
  [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
  [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(596),
  [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
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
  [1644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_then_statement, 4, .fragile = true),
  [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(786),
  [1648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(787),
  [1650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(788),
  [1652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(789),
  [1654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(790),
  [1656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(791),
  [1658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(792),
  [1660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(793),
  [1662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(794),
  [1664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(807),
  [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(808),
  [1668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(809),
  [1670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(813),
  [1672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 6),
  [1676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 3),
  [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(815),
  [1682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(816),
  [1684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(817),
  [1686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(817),
  [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(818),
  [1690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(823),
  [1692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(824),
  [1694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(825),
  [1696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [1698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(827),
  [1700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(829),
  [1702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(830),
  [1704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(831),
  [1706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(832),
  [1708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(833),
  [1710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(834),
  [1712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(835),
  [1714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(836),
  [1716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(836),
  [1718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(837),
  [1720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(838),
  [1722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(838),
  [1724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [1726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [1728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [1730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [1732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(849),
  [1734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(852),
  [1736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(854),
  [1738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(856),
  [1740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(859),
  [1742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 4),
  [1744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(861),
  [1746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(862),
  [1748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(863),
  [1750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 1),
  [1752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(864),
  [1754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(865),
  [1756] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(866),
  [1758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(869),
  [1760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(870),
  [1762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [1764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 1),
  [1766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(872),
  [1768] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(873),
  [1770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(877),
  [1772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(882),
  [1774] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(883),
  [1776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(884),
  [1778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(885),
  [1780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(886),
  [1782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(870),
  [1784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_type, 2),
  [1786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 2),
  [1788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 1, .fragile = true),
  [1790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(890),
  [1792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(894),
  [1794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(863),
  [1796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(862),
  [1798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(895),
  [1800] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(896),
  [1802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 3),
  [1806] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(898),
  [1810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(899),
  [1812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(900),
  [1814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(901),
  [1816] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(902),
  [1818] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(906),
  [1820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(907),
  [1822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 4),
  [1826] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1828] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(912),
  [1830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(913),
  [1832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 3),
  [1834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 2),
  [1836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 4),
  [1838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 4),
  [1840] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 4),
  [1842] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [1844] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(916),
  [1846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [1848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(918),
  [1850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 4),
  [1852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_statement, 5),
  [1854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(919),
  [1856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(920),
  [1858] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(922),
  [1860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(923),
  [1862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(925),
  [1864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(926),
  [1866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(928),
  [1868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(929),
  [1870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 1),
  [1872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(930),
  [1874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(931),
  [1876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(934),
  [1878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(935),
  [1880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(936),
  [1882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [1884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(937),
  [1886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(939),
  [1888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [1892] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 7),
  [1898] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1900] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(942),
  [1902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(943),
  [1904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(946),
  [1906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 3),
  [1908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(952),
  [1910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(952),
  [1912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(953),
  [1914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(958),
  [1916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(960),
  [1918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [1920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(969),
  [1922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [1924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [1926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [1928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [1930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [1932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [1934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [1936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [1938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [1940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [1942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [1944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [1946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [1948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [1950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [1952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [1954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [1956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(970),
  [1958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
  [1960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(972),
  [1962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(973),
  [1964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 5),
  [1966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 3),
  [1968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 3),
  [1970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(975),
  [1972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 2),
  [1974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(976),
  [1976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(818),
  [1978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(819),
  [1980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(820),
  [1982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(821),
  [1984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(821),
  [1986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(819),
  [1988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 1),
  [1990] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(977),
  [1992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(822),
  [1994] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(979),
  [1996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 3),
  [1998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 3),
  [2000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(980),
  [2002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(981),
  [2004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments_or_diamond, 1),
  [2006] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 2),
  [2008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(983),
  [2010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(985),
  [2012] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(986),
  [2014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(987),
  [2016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(988),
  [2018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 3),
  [2020] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(990),
  [2022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(995),
  [2024] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(995),
  [2026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(996),
  [2028] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(997),
  [2030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(998),
  [2032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(999),
  [2034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(999),
  [2036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(996),
  [2038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(997),
  [2040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1000),
  [2042] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1001),
  [2044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(980),
  [2046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 1),
  [2048] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1002),
  [2050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 2, .fragile = true),
  [2052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1005),
  [2054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1006),
  [2056] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1007),
  [2058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1008),
  [2060] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [2062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 4),
  [2064] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [2066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1010),
  [2068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ambiguous_name, 3),
  [2070] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1011),
  [2072] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(1008),
  [2074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 3),
  [2076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1012),
  [2078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 3),
  [2080] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1013),
  [2082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 3),
  [2084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [2088] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 2),
  [2090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1019),
  [2092] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1021),
  [2094] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1022),
  [2096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1025),
  [2098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1026),
  [2100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1027),
  [2102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1031),
  [2104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [2106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1033),
  [2108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1034),
  [2110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1035),
  [2112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1036),
  [2114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1040),
  [2122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1051),
  [2124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1054),
  [2126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 4),
  [2128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [2130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1060),
  [2132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1062),
  [2134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [2136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 2),
  [2138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 4),
  [2140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 4),
  [2142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2),
  [2144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1066),
  [2146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1067),
  [2148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 4),
  [2150] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true), SHIFT(91),
  [2153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2155] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1068),
  [2160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1069),
  [2162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 3),
  [2164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1071),
  [2166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1073),
  [2168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1075),
  [2170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1076),
  [2172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 4),
  [2174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 4),
  [2176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1082),
  [2178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 3),
  [2180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 2),
  [2182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1088),
  [2184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1089),
  [2186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1091),
  [2188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1093),
  [2190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1095),
  [2192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1096),
  [2194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1099),
  [2196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_access, 4),
  [2198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 4),
  [2200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1101),
  [2204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1102),
  [2206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1103),
  [2208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1105),
  [2210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1106),
  [2212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1108),
  [2214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1109),
  [2216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1110),
  [2218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1111),
  [2220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1115),
  [2222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1118),
  [2224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_value, 2),
  [2226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1121),
  [2228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1122),
  [2230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1123),
  [2232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1124),
  [2234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1125),
  [2236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1126),
  [2238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1127),
  [2240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1128),
  [2242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1128),
  [2244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1129),
  [2246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1130),
  [2248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1130),
  [2250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1131),
  [2258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(956),
  [2260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(956),
  [2262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(955),
  [2264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(953),
  [2266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1134),
  [2268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 5),
  [2270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 3),
  [2272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [2274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 3),
  [2276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [2278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 5),
  [2280] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true), SHIFT(91),
  [2283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2285] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1136),
  [2292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 5),
  [2296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1138),
  [2298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1139),
  [2300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 2),
  [2302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(954),
  [2304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(954),
  [2306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_initializer, 1),
  [2308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(957),
  [2310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1140),
  [2312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 4),
  [2314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1142),
  [2316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1143),
  [2318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 4),
  [2320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1144),
  [2322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 5),
  [2324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1145),
  [2326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 5),
  [2328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1146),
  [2330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 5),
  [2332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1147),
  [2334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1149),
  [2336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1150),
  [2338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1152),
  [2340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 4),
  [2342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1154),
  [2344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1156),
  [2346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1158),
  [2348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1159),
  [2350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1160),
  [2352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1161),
  [2354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1163),
  [2356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1164),
  [2358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1175),
  [2366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 3),
  [2368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 6),
  [2374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 3),
  [2376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1178),
  [2378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1180),
  [2380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 6),
  [2382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1182),
  [2384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1184),
  [2386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 6),
  [2388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 6),
  [2390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1185),
  [2392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1186),
  [2394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 5),
  [2396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1188),
  [2398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1189),
  [2400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1190),
  [2402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1191),
  [2404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1194),
  [2406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 8),
  [2408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 8),
  [2410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 8),
  [2412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 7),
  [2414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 4),
  [2416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 2),
  [2418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1195),
  [2420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 7),
  [2422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1197),
  [2424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 7),
  [2426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1199),
  [2428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1200),
  [2430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1201),
  [2432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 5),
  [2434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 3),
  [2436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 8),
  [2438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1202),
  [2440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 8),
  [2442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 7),
  [2444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 9),
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
