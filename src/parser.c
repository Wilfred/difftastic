#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 1252
#define SYMBOL_COUNT 273
#define ALIAS_COUNT 0
#define TOKEN_COUNT 112
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
  anon_sym_synchronized = 97,
  anon_sym_native = 98,
  anon_sym_extends = 99,
  anon_sym_implements = 100,
  anon_sym_this = 101,
  anon_sym_super = 102,
  anon_sym_new = 103,
  anon_sym_void = 104,
  anon_sym_LT_GT = 105,
  anon_sym_COLON_COLON = 106,
  anon_sym_interface = 107,
  anon_sym_DOT_DOT_DOT = 108,
  anon_sym_throws = 109,
  sym_identifier = 110,
  sym_comment = 111,
  sym_program = 112,
  sym__statement = 113,
  sym__literal = 114,
  sym_integer_literal = 115,
  sym_floating_point_literal = 116,
  sym_boolean_literal = 117,
  sym_character_literal = 118,
  sym__expression = 119,
  sym_assignment_expression = 120,
  sym_binary_expression = 121,
  sym_lambda_expression = 122,
  sym__lambda_parameters = 123,
  sym_inferred_formal_parameter_list = 124,
  sym_lambda_body = 125,
  sym_ternary_expression = 126,
  sym_unary_expression = 127,
  sym_update_expression = 128,
  sym_statement = 129,
  sym_if_then_statement = 130,
  sym_else_if_clause = 131,
  sym_else_clause = 132,
  sym_type_arguments = 133,
  sym_type_argument = 134,
  sym_reference_type = 135,
  sym_class_or_interface_type = 136,
  sym_type_variable = 137,
  sym_dims = 138,
  sym_primitive_type = 139,
  sym_integral_type = 140,
  sym_floating_point_type = 141,
  sym__annotation = 142,
  sym_normal_annotation = 143,
  sym_marker_annotation = 144,
  sym_single_element_annotation = 145,
  sym_element_value_pair_list = 146,
  sym_element_value_pair = 147,
  sym_element_value = 148,
  sym_element_value_array_initializer = 149,
  sym_conditional_expression = 150,
  sym_conditional_or_expression = 151,
  sym_conditional_and_expression = 152,
  sym_inclusive_or_expression = 153,
  sym_exclusive_or_expression = 154,
  sym_and_expression = 155,
  sym_relational_expression = 156,
  sym_equality_expression = 157,
  sym_shift_expression = 158,
  sym_additive_expression = 159,
  sym_multiplicative_expression = 160,
  sym__declaration = 161,
  sym_module_declaration = 162,
  sym_module_identifier = 163,
  sym_module_directive = 164,
  sym_requires_modifier = 165,
  sym_module_name = 166,
  sym_package_declaration = 167,
  sym_package_or_type_name = 168,
  sym_import_statement = 169,
  sym_single_type_import_declaration = 170,
  sym_type_import_on_declaraction = 171,
  sym_single_static_import_declaration = 172,
  sym_static_import_on_demand_declaration = 173,
  sym_class_declaration = 174,
  sym_normal_class_declaration = 175,
  sym_modifier = 176,
  sym_type_parameters = 177,
  sym_type_parameter_list = 178,
  sym_type_parameter = 179,
  sym_type_bound = 180,
  sym_superclass = 181,
  sym_super_interfaces = 182,
  sym_interface_type_list = 183,
  sym_class_body = 184,
  sym_class_body_declaration = 185,
  sym_constructor_declaration = 186,
  sym_constructor_declarator = 187,
  sym_constructor_body = 188,
  sym_explicit_constructor_invocation = 189,
  sym_ambiguous_name = 190,
  sym_class_member_declaration = 191,
  sym_primary = 192,
  sym_array_creation_expression = 193,
  sym_dims_exprs = 194,
  sym_dims_expr = 195,
  sym_primary_no_new_array = 196,
  sym_class_literal = 197,
  sym_class_instance_creation_expression = 198,
  sym_unqualified_class_instance_creation_expression = 199,
  sym_class_or_interface_type_to_instantiate = 200,
  sym_type_arguments_or_diamond = 201,
  sym_field_access = 202,
  sym_array_access = 203,
  sym_method_invocation = 204,
  sym_argument_list = 205,
  sym_method_reference = 206,
  sym_array_type = 207,
  sym_interface_declaration = 208,
  sym_annotation_type_declaration = 209,
  sym_annotation_type_body = 210,
  sym_annotation_type_member_declaration = 211,
  sym_annotation_type_element_declaration = 212,
  sym_default_value = 213,
  sym_normal_interface_declaration = 214,
  sym_extends_interfaces = 215,
  sym_interface_body = 216,
  sym_interface_member_declaration = 217,
  sym_constant_declaration = 218,
  sym_variable_declarator_list = 219,
  sym_variable_declarator = 220,
  sym_variable_declarator_id = 221,
  sym_variable_initializer = 222,
  sym_array_initializer = 223,
  sym_method_header = 224,
  sym_result = 225,
  sym_method_declarator = 226,
  sym__formal_parameter_list = 227,
  sym_formal_parameter = 228,
  sym_receiver_parameter = 229,
  sym_last_formal_parameter = 230,
  sym_throws = 231,
  sym_exception_type_list = 232,
  sym_exception_type = 233,
  sym_method_body = 234,
  sym_block = 235,
  sym_block_statements = 236,
  sym_block_statement = 237,
  sym_local_variable_declaration_statement = 238,
  sym_local_variable_declaration = 239,
  sym_method_declaration = 240,
  sym_method_name = 241,
  aux_sym_program_repeat1 = 242,
  aux_sym_character_literal_repeat1 = 243,
  aux_sym_inferred_formal_parameter_list_repeat1 = 244,
  aux_sym_if_then_statement_repeat1 = 245,
  aux_sym_type_arguments_repeat1 = 246,
  aux_sym_class_or_interface_type_repeat1 = 247,
  aux_sym_class_or_interface_type_repeat2 = 248,
  aux_sym_dims_repeat1 = 249,
  aux_sym_element_value_pair_list_repeat1 = 250,
  aux_sym_element_value_array_initializer_repeat1 = 251,
  aux_sym_module_declaration_repeat1 = 252,
  aux_sym_module_identifier_repeat1 = 253,
  aux_sym_module_directive_repeat1 = 254,
  aux_sym_module_directive_repeat2 = 255,
  aux_sym_module_directive_repeat3 = 256,
  aux_sym_normal_class_declaration_repeat1 = 257,
  aux_sym_type_parameter_list_repeat1 = 258,
  aux_sym_type_bound_repeat1 = 259,
  aux_sym_interface_type_list_repeat1 = 260,
  aux_sym_class_body_repeat1 = 261,
  aux_sym_dims_exprs_repeat1 = 262,
  aux_sym_class_literal_repeat1 = 263,
  aux_sym_class_or_interface_type_to_instantiate_repeat1 = 264,
  aux_sym_argument_list_repeat1 = 265,
  aux_sym_annotation_type_body_repeat1 = 266,
  aux_sym_interface_body_repeat1 = 267,
  aux_sym_variable_declarator_list_repeat1 = 268,
  aux_sym_array_initializer_repeat1 = 269,
  aux_sym_formal_parameters_repeat1 = 270,
  aux_sym_exception_type_list_repeat1 = 271,
  aux_sym_block_statements_repeat1 = 272,
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
  [sym_assignment_expression] = "assignment_expression",
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
        ADVANCE(175);
      if (lookahead == 'p')
        ADVANCE(179);
      if (lookahead == 's')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(235);
      if (lookahead == 'v')
        ADVANCE(251);
      if (lookahead == '{')
        ADVANCE(255);
      if (lookahead == '|')
        ADVANCE(256);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '~')
        ADVANCE(260);
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
      if (lookahead == 'a')
        ADVANCE(165);
      if (lookahead == 'e')
        ADVANCE(170);
      if (lookahead == 'u')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_open);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(180);
      if (lookahead == 'r')
        ADVANCE(186);
      if (lookahead == 'u')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(187);
      if (lookahead == 'o')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(205);
      if (lookahead == 't')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(220);
      if (lookahead == 'y')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(210);
      if (lookahead == 'r')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(37);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(236);
      if (lookahead == 'o')
        ADVANCE(239);
      if (lookahead == 'r')
        ADVANCE(240);
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
      if (lookahead == 's')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(241);
      if (lookahead == 'u')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
      if (lookahead == 'v')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_transitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(257);
      if (lookahead == '|')
        ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(262);
      if (lookahead == '\"')
        ADVANCE(263);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(266);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == '.')
        ADVANCE(268);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '0')
        ADVANCE(277);
      if (lookahead == '<')
        ADVANCE(289);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'f')
        ADVANCE(292);
      if (lookahead == 'i')
        ADVANCE(293);
      if (lookahead == 'm')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(296);
      if (lookahead == 'o')
        ADVANCE(175);
      if (lookahead == 'p')
        ADVANCE(179);
      if (lookahead == 's')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(298);
      if (lookahead == 'v')
        ADVANCE(251);
      if (lookahead == '{')
        ADVANCE(255);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '~')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(261);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 263:
      if (lookahead == '\"')
        ADVANCE(264);
      if (lookahead == '\\')
        ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 265:
      if (lookahead == '\n')
        ADVANCE(263);
      if (lookahead != 0)
        ADVANCE(263);
      END_STATE();
    case 266:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 267:
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(269);
      END_STATE();
    case 270:
      if (lookahead == '_')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(269);
      END_STATE();
    case 271:
      if (lookahead == '+')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(273);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(274);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(273);
      END_STATE();
    case 274:
      if (lookahead == '_')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 276:
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(30);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(278);
      if (lookahead == 'B')
        ADVANCE(279);
      if (lookahead == 'O')
        ADVANCE(33);
      if (lookahead == 'X')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(283);
      if (lookahead == 'b')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(33);
      if (lookahead == 'x')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(285);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(269);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(280);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(281);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(280);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 281:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(281);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(282);
      END_STATE();
    case 283:
      if (lookahead == '_')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(278);
      if (lookahead == '_')
        ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+')
        ADVANCE(272);
      if (lookahead == '-')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(274);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(278);
      if (lookahead == '_')
        ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(285);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 292:
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
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(141);
      if (lookahead == 'n')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(165);
      if (lookahead == 'u')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(209);
      if (lookahead == 'y')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 300:
      if (lookahead == '!')
        ADVANCE(301);
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
        ADVANCE(302);
      if (lookahead == 'c')
        ADVANCE(310);
      if (lookahead == 'd')
        ADVANCE(315);
      if (lookahead == 'e')
        ADVANCE(322);
      if (lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'i')
        ADVANCE(342);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'n')
        ADVANCE(367);
      if (lookahead == 'o')
        ADVANCE(375);
      if (lookahead == 'p')
        ADVANCE(380);
      if (lookahead == 'r')
        ADVANCE(410);
      if (lookahead == 's')
        ADVANCE(418);
      if (lookahead == 't')
        ADVANCE(445);
      if (lookahead == 'u')
        ADVANCE(453);
      if (lookahead == 'v')
        ADVANCE(457);
      if (lookahead == 'w')
        ADVANCE(461);
      if (lookahead == '{')
        ADVANCE(255);
      if (lookahead == '|')
        ADVANCE(256);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(300);
      END_STATE();
    case 301:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 302:
      if (lookahead == 'b')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 's')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 't')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'r')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'a')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'c')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 't')
        ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 310:
      if (lookahead == 'l')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'a')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 's')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 's')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 315:
      if (lookahead == 'e')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'f')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'a')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'u')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'l')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 't')
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 322:
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'x')
        ADVANCE(326);
      END_STATE();
    case 323:
      if (lookahead == 's')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'e')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == ' ')
        ADVANCE(123);
      END_STATE();
    case 326:
      if (lookahead == 'p')
        ADVANCE(327);
      if (lookahead == 't')
        ADVANCE(332);
      END_STATE();
    case 327:
      if (lookahead == 'o')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'r')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 't')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 's')
        ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 332:
      if (lookahead == 'e')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'n')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'd')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 's')
        ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 337:
      if (lookahead == 'i')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'n')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'a')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'l')
        ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 342:
      if (lookahead == 'f')
        ADVANCE(343);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 'n')
        ADVANCE(353);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 344:
      if (lookahead == 'p')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'l')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'e')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'm')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'e')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'n')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 't')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 's')
        ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 353:
      if (lookahead == 't')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'e')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'r')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'f')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'a')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'c')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'e')
        ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 361:
      if (lookahead == 'o')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'd')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'u')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 'l')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 'e')
        ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 367:
      if (lookahead == 'a')
        ADVANCE(368);
      if (lookahead == 'e')
        ADVANCE(373);
      END_STATE();
    case 368:
      if (lookahead == 't')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'i')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 'v')
        ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 'e')
        ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 373:
      if (lookahead == 'w')
        ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 375:
      if (lookahead == 'p')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'e')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'n')
        ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == 's')
        ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_opens);
      END_STATE();
    case 380:
      if (lookahead == 'a')
        ADVANCE(381);
      if (lookahead == 'r')
        ADVANCE(387);
      if (lookahead == 'u')
        ADVANCE(405);
      END_STATE();
    case 381:
      if (lookahead == 'c')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'k')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'a')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'g')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'e')
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 387:
      if (lookahead == 'i')
        ADVANCE(388);
      if (lookahead == 'o')
        ADVANCE(393);
      END_STATE();
    case 388:
      if (lookahead == 'v')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'a')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 't')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'e')
        ADVANCE(392);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 393:
      if (lookahead == 't')
        ADVANCE(394);
      if (lookahead == 'v')
        ADVANCE(400);
      END_STATE();
    case 394:
      if (lookahead == 'e')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 'c')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 't')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'e')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'd')
        ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 400:
      if (lookahead == 'i')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'd')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'e')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == 's')
        ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 405:
      if (lookahead == 'b')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'l')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == 'i')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'c')
        ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 410:
      if (lookahead == 'e')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'q')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'u')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'i')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 'r')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'e')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 's')
        ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 418:
      if (lookahead == 't')
        ADVANCE(419);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead == 'y')
        ADVANCE(434);
      END_STATE();
    case 419:
      if (lookahead == 'a')
        ADVANCE(420);
      if (lookahead == 'r')
        ADVANCE(424);
      END_STATE();
    case 420:
      if (lookahead == 't')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'i')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 'c')
        ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 424:
      if (lookahead == 'i')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'c')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 't')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'f')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'p')
        ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 430:
      if (lookahead == 'p')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'e')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'r')
        ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 434:
      if (lookahead == 'n')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'c')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'h')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'r')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'o')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'n')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'i')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'z')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'e')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'd')
        ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 445:
      if (lookahead == 'h')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'r')
        ADVANCE(449);
      END_STATE();
    case 447:
      if (lookahead == 's')
        ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 449:
      if (lookahead == 'o')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'w')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 's')
        ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 453:
      if (lookahead == 's')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'e')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 's')
        ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 457:
      if (lookahead == 'o')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'i')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'd')
        ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 461:
      if (lookahead == 'i')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 't')
        ADVANCE(463);
      END_STATE();
    case 463:
      if (lookahead == 'h')
        ADVANCE(464);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 465:
      if (lookahead == '\n')
        SKIP(465);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(466);
      if (lookahead == '\\')
        ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(470);
      if (lookahead != 0)
        ADVANCE(470);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(30);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(468);
      if (lookahead != 0)
        ADVANCE(469);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!')
        ADVANCE(262);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(472);
      if (lookahead == '+')
        ADVANCE(266);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == '.')
        ADVANCE(473);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(289);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(255);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '~')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 474:
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
        ADVANCE(276);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'f')
        ADVANCE(475);
      if (lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'p')
        ADVANCE(477);
      if (lookahead == 's')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(186);
      if (lookahead == 'u')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == 'i')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(473);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(289);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'f')
        ADVANCE(475);
      if (lookahead == 'i')
        ADVANCE(480);
      if (lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'p')
        ADVANCE(477);
      if (lookahead == 's')
        ADVANCE(297);
      if (lookahead == 'v')
        ADVANCE(251);
      if (lookahead == '{')
        ADVANCE(255);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == 's')
        ADVANCE(483);
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
      if (lookahead == 't')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 485:
      if (lookahead == '&')
        ADVANCE(486);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(473);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == ':')
        ADVANCE(487);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(289);
      if (lookahead == '=')
        ADVANCE(488);
      if (lookahead == '>')
        ADVANCE(489);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(315);
      if (lookahead == 'e')
        ADVANCE(490);
      if (lookahead == 'i')
        ADVANCE(492);
      if (lookahead == 'n')
        ADVANCE(493);
      if (lookahead == 's')
        ADVANCE(494);
      if (lookahead == 't')
        ADVANCE(445);
      if (lookahead == '{')
        ADVANCE(255);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 490:
      if (lookahead == 'x')
        ADVANCE(491);
      END_STATE();
    case 491:
      if (lookahead == 't')
        ADVANCE(332);
      END_STATE();
    case 492:
      if (lookahead == 'm')
        ADVANCE(344);
      END_STATE();
    case 493:
      if (lookahead == 'e')
        ADVANCE(373);
      END_STATE();
    case 494:
      if (lookahead == 'u')
        ADVANCE(430);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'f')
        ADVANCE(475);
      if (lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'p')
        ADVANCE(477);
      if (lookahead == 's')
        ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(263);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(268);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '0')
        ADVANCE(277);
      if (lookahead == 'f')
        ADVANCE(499);
      if (lookahead == 'n')
        ADVANCE(500);
      if (lookahead == 't')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(498);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(263);
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
        ADVANCE(502);
      if (lookahead == '.')
        ADVANCE(268);
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(503);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(504);
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
        ADVANCE(290);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'f')
        ADVANCE(292);
      if (lookahead == 'i')
        ADVANCE(293);
      if (lookahead == 'm')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(296);
      if (lookahead == 'o')
        ADVANCE(175);
      if (lookahead == 'p')
        ADVANCE(179);
      if (lookahead == 's')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(298);
      if (lookahead == 'v')
        ADVANCE(251);
      if (lookahead == '{')
        ADVANCE(255);
      if (lookahead == '|')
        ADVANCE(256);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '~')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(501);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(62);
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(473);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'f')
        ADVANCE(475);
      if (lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'p')
        ADVANCE(477);
      if (lookahead == 's')
        ADVANCE(297);
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
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(473);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'f')
        ADVANCE(475);
      if (lookahead == 'i')
        ADVANCE(480);
      if (lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'p')
        ADVANCE(477);
      if (lookahead == 's')
        ADVANCE(297);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == 's')
        ADVANCE(483);
      if (lookahead == 't')
        ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(251);
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
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(473);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '<')
        ADVANCE(289);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(512);
      if (lookahead == 'd')
        ADVANCE(513);
      if (lookahead == 'f')
        ADVANCE(514);
      if (lookahead == 'i')
        ADVANCE(515);
      if (lookahead == 'l')
        ADVANCE(154);
      if (lookahead == 's')
        ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(473);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == 't')
        ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(263);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(268);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '0')
        ADVANCE(277);
      if (lookahead == '<')
        ADVANCE(289);
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
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(154);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'p')
        ADVANCE(477);
      if (lookahead == 's')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(523);
      if (lookahead == 'v')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(521);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'n')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(236);
      if (lookahead == 'r')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 524:
      if (lookahead == '!')
        ADVANCE(301);
      if (lookahead == '%')
        ADVANCE(525);
      if (lookahead == '&')
        ADVANCE(526);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(472);
      if (lookahead == '+')
        ADVANCE(527);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(528);
      if (lookahead == '/')
        ADVANCE(529);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(530);
      if (lookahead == '=')
        ADVANCE(532);
      if (lookahead == '>')
        ADVANCE(533);
      if (lookahead == '?')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(536);
      if (lookahead == '|')
        ADVANCE(537);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 526:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(30);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 532:
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 533:
      if (lookahead == '>')
        ADVANCE(534);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(535);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(258);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(473);
      if (lookahead == '/')
        ADVANCE(276);
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
        ADVANCE(539);
      if (lookahead == 'i')
        ADVANCE(515);
      if (lookahead == 'l')
        ADVANCE(154);
      if (lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'p')
        ADVANCE(477);
      if (lookahead == 's')
        ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 539:
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
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(205);
      if (lookahead == 't')
        ADVANCE(209);
      if (lookahead == 'y')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!')
        ADVANCE(262);
      if (lookahead == '\"')
        ADVANCE(263);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(266);
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == '.')
        ADVANCE(268);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '0')
        ADVANCE(277);
      if (lookahead == '<')
        ADVANCE(289);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'e')
        ADVANCE(119);
      if (lookahead == 'f')
        ADVANCE(292);
      if (lookahead == 'i')
        ADVANCE(542);
      if (lookahead == 'm')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(296);
      if (lookahead == 'o')
        ADVANCE(175);
      if (lookahead == 'p')
        ADVANCE(179);
      if (lookahead == 's')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(298);
      if (lookahead == 'v')
        ADVANCE(251);
      if (lookahead == '{')
        ADVANCE(255);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '~')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(541);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'm')
        ADVANCE(141);
      if (lookahead == 'n')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '<')
        ADVANCE(289);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 's')
        ADVANCE(544);
      if (lookahead == 't')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == '<')
        ADVANCE(289);
      if (lookahead == 'n')
        ADVANCE(546);
      if (lookahead == 's')
        ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(276);
      if (lookahead == 's')
        ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(547);
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
  [1] = {.lex_state = 261},
  [2] = {.lex_state = 300},
  [3] = {.lex_state = 300},
  [4] = {.lex_state = 300},
  [5] = {.lex_state = 465},
  [6] = {.lex_state = 300},
  [7] = {.lex_state = 471},
  [8] = {.lex_state = 474},
  [9] = {.lex_state = 471},
  [10] = {.lex_state = 471},
  [11] = {.lex_state = 479},
  [12] = {.lex_state = 261},
  [13] = {.lex_state = 471},
  [14] = {.lex_state = 481},
  [15] = {.lex_state = 471},
  [16] = {.lex_state = 482},
  [17] = {.lex_state = 471},
  [18] = {.lex_state = 471},
  [19] = {.lex_state = 471},
  [20] = {.lex_state = 300},
  [21] = {.lex_state = 261},
  [22] = {.lex_state = 261},
  [23] = {.lex_state = 300},
  [24] = {.lex_state = 300},
  [25] = {.lex_state = 300},
  [26] = {.lex_state = 300},
  [27] = {.lex_state = 300},
  [28] = {.lex_state = 261},
  [29] = {.lex_state = 300},
  [30] = {.lex_state = 261},
  [31] = {.lex_state = 261},
  [32] = {.lex_state = 261},
  [33] = {.lex_state = 261},
  [34] = {.lex_state = 481},
  [35] = {.lex_state = 261},
  [36] = {.lex_state = 261},
  [37] = {.lex_state = 300},
  [38] = {.lex_state = 471},
  [39] = {.lex_state = 261},
  [40] = {.lex_state = 261},
  [41] = {.lex_state = 261},
  [42] = {.lex_state = 300},
  [43] = {.lex_state = 465},
  [44] = {.lex_state = 465},
  [45] = {.lex_state = 471},
  [46] = {.lex_state = 485},
  [47] = {.lex_state = 495},
  [48] = {.lex_state = 471},
  [49] = {.lex_state = 485},
  [50] = {.lex_state = 485},
  [51] = {.lex_state = 471},
  [52] = {.lex_state = 471},
  [53] = {.lex_state = 471},
  [54] = {.lex_state = 496},
  [55] = {.lex_state = 300},
  [56] = {.lex_state = 471},
  [57] = {.lex_state = 300},
  [58] = {.lex_state = 261},
  [59] = {.lex_state = 474},
  [60] = {.lex_state = 474},
  [61] = {.lex_state = 496},
  [62] = {.lex_state = 300},
  [63] = {.lex_state = 300},
  [64] = {.lex_state = 300},
  [65] = {.lex_state = 300},
  [66] = {.lex_state = 497},
  [67] = {.lex_state = 496},
  [68] = {.lex_state = 300},
  [69] = {.lex_state = 300},
  [70] = {.lex_state = 471},
  [71] = {.lex_state = 300},
  [72] = {.lex_state = 300},
  [73] = {.lex_state = 471},
  [74] = {.lex_state = 300},
  [75] = {.lex_state = 261},
  [76] = {.lex_state = 300},
  [77] = {.lex_state = 471},
  [78] = {.lex_state = 300},
  [79] = {.lex_state = 300},
  [80] = {.lex_state = 300},
  [81] = {.lex_state = 261},
  [82] = {.lex_state = 471},
  [83] = {.lex_state = 471},
  [84] = {.lex_state = 471},
  [85] = {.lex_state = 471},
  [86] = {.lex_state = 471},
  [87] = {.lex_state = 471},
  [88] = {.lex_state = 471},
  [89] = {.lex_state = 300},
  [90] = {.lex_state = 471},
  [91] = {.lex_state = 471},
  [92] = {.lex_state = 261},
  [93] = {.lex_state = 471},
  [94] = {.lex_state = 261},
  [95] = {.lex_state = 261},
  [96] = {.lex_state = 300},
  [97] = {.lex_state = 261},
  [98] = {.lex_state = 261},
  [99] = {.lex_state = 300},
  [100] = {.lex_state = 261},
  [101] = {.lex_state = 261},
  [102] = {.lex_state = 471},
  [103] = {.lex_state = 300},
  [104] = {.lex_state = 479},
  [105] = {.lex_state = 471},
  [106] = {.lex_state = 471},
  [107] = {.lex_state = 481},
  [108] = {.lex_state = 300},
  [109] = {.lex_state = 300},
  [110] = {.lex_state = 465},
  [111] = {.lex_state = 471},
  [112] = {.lex_state = 471},
  [113] = {.lex_state = 471},
  [114] = {.lex_state = 485},
  [115] = {.lex_state = 300},
  [116] = {.lex_state = 471},
  [117] = {.lex_state = 485},
  [118] = {.lex_state = 485},
  [119] = {.lex_state = 471},
  [120] = {.lex_state = 261},
  [121] = {.lex_state = 471},
  [122] = {.lex_state = 474},
  [123] = {.lex_state = 474},
  [124] = {.lex_state = 300},
  [125] = {.lex_state = 300},
  [126] = {.lex_state = 300},
  [127] = {.lex_state = 300},
  [128] = {.lex_state = 300},
  [129] = {.lex_state = 300},
  [130] = {.lex_state = 300},
  [131] = {.lex_state = 485},
  [132] = {.lex_state = 300},
  [133] = {.lex_state = 496},
  [134] = {.lex_state = 261},
  [135] = {.lex_state = 471},
  [136] = {.lex_state = 300},
  [137] = {.lex_state = 471},
  [138] = {.lex_state = 300},
  [139] = {.lex_state = 497},
  [140] = {.lex_state = 497},
  [141] = {.lex_state = 471},
  [142] = {.lex_state = 496},
  [143] = {.lex_state = 496},
  [144] = {.lex_state = 496},
  [145] = {.lex_state = 300},
  [146] = {.lex_state = 300},
  [147] = {.lex_state = 261},
  [148] = {.lex_state = 498},
  [149] = {.lex_state = 471},
  [150] = {.lex_state = 261},
  [151] = {.lex_state = 471},
  [152] = {.lex_state = 300},
  [153] = {.lex_state = 300},
  [154] = {.lex_state = 261},
  [155] = {.lex_state = 300},
  [156] = {.lex_state = 300},
  [157] = {.lex_state = 261},
  [158] = {.lex_state = 471},
  [159] = {.lex_state = 481},
  [160] = {.lex_state = 471},
  [161] = {.lex_state = 471},
  [162] = {.lex_state = 300},
  [163] = {.lex_state = 300},
  [164] = {.lex_state = 261},
  [165] = {.lex_state = 261},
  [166] = {.lex_state = 481},
  [167] = {.lex_state = 471},
  [168] = {.lex_state = 300},
  [169] = {.lex_state = 261},
  [170] = {.lex_state = 261},
  [171] = {.lex_state = 300},
  [172] = {.lex_state = 300},
  [173] = {.lex_state = 300},
  [174] = {.lex_state = 300},
  [175] = {.lex_state = 300},
  [176] = {.lex_state = 300},
  [177] = {.lex_state = 471},
  [178] = {.lex_state = 471},
  [179] = {.lex_state = 300},
  [180] = {.lex_state = 471},
  [181] = {.lex_state = 471},
  [182] = {.lex_state = 300},
  [183] = {.lex_state = 300},
  [184] = {.lex_state = 300},
  [185] = {.lex_state = 471},
  [186] = {.lex_state = 261},
  [187] = {.lex_state = 501},
  [188] = {.lex_state = 471},
  [189] = {.lex_state = 505},
  [190] = {.lex_state = 471},
  [191] = {.lex_state = 300},
  [192] = {.lex_state = 300},
  [193] = {.lex_state = 505},
  [194] = {.lex_state = 300},
  [195] = {.lex_state = 505},
  [196] = {.lex_state = 261},
  [197] = {.lex_state = 300},
  [198] = {.lex_state = 300},
  [199] = {.lex_state = 261},
  [200] = {.lex_state = 474},
  [201] = {.lex_state = 471},
  [202] = {.lex_state = 300},
  [203] = {.lex_state = 471},
  [204] = {.lex_state = 300},
  [205] = {.lex_state = 471},
  [206] = {.lex_state = 300},
  [207] = {.lex_state = 300},
  [208] = {.lex_state = 261},
  [209] = {.lex_state = 498},
  [210] = {.lex_state = 471},
  [211] = {.lex_state = 485},
  [212] = {.lex_state = 485},
  [213] = {.lex_state = 471},
  [214] = {.lex_state = 485},
  [215] = {.lex_state = 471},
  [216] = {.lex_state = 485},
  [217] = {.lex_state = 471},
  [218] = {.lex_state = 261},
  [219] = {.lex_state = 498},
  [220] = {.lex_state = 471},
  [221] = {.lex_state = 300},
  [222] = {.lex_state = 300},
  [223] = {.lex_state = 485},
  [224] = {.lex_state = 300},
  [225] = {.lex_state = 300},
  [226] = {.lex_state = 300},
  [227] = {.lex_state = 300},
  [228] = {.lex_state = 300},
  [229] = {.lex_state = 496},
  [230] = {.lex_state = 497},
  [231] = {.lex_state = 497},
  [232] = {.lex_state = 300},
  [233] = {.lex_state = 300},
  [234] = {.lex_state = 496},
  [235] = {.lex_state = 496},
  [236] = {.lex_state = 471},
  [237] = {.lex_state = 506},
  [238] = {.lex_state = 261},
  [239] = {.lex_state = 300},
  [240] = {.lex_state = 300},
  [241] = {.lex_state = 261},
  [242] = {.lex_state = 261},
  [243] = {.lex_state = 261},
  [244] = {.lex_state = 300},
  [245] = {.lex_state = 300},
  [246] = {.lex_state = 300},
  [247] = {.lex_state = 471},
  [248] = {.lex_state = 261},
  [249] = {.lex_state = 507},
  [250] = {.lex_state = 471},
  [251] = {.lex_state = 471},
  [252] = {.lex_state = 471},
  [253] = {.lex_state = 300},
  [254] = {.lex_state = 300},
  [255] = {.lex_state = 261},
  [256] = {.lex_state = 471},
  [257] = {.lex_state = 300},
  [258] = {.lex_state = 481},
  [259] = {.lex_state = 471},
  [260] = {.lex_state = 300},
  [261] = {.lex_state = 261},
  [262] = {.lex_state = 479},
  [263] = {.lex_state = 471},
  [264] = {.lex_state = 471},
  [265] = {.lex_state = 474},
  [266] = {.lex_state = 481},
  [267] = {.lex_state = 481},
  [268] = {.lex_state = 510},
  [269] = {.lex_state = 481},
  [270] = {.lex_state = 481},
  [271] = {.lex_state = 300},
  [272] = {.lex_state = 481},
  [273] = {.lex_state = 300},
  [274] = {.lex_state = 481},
  [275] = {.lex_state = 481},
  [276] = {.lex_state = 300},
  [277] = {.lex_state = 261},
  [278] = {.lex_state = 261},
  [279] = {.lex_state = 300},
  [280] = {.lex_state = 261},
  [281] = {.lex_state = 261},
  [282] = {.lex_state = 481},
  [283] = {.lex_state = 261},
  [284] = {.lex_state = 481},
  [285] = {.lex_state = 300},
  [286] = {.lex_state = 300},
  [287] = {.lex_state = 481},
  [288] = {.lex_state = 481},
  [289] = {.lex_state = 261},
  [290] = {.lex_state = 261},
  [291] = {.lex_state = 261},
  [292] = {.lex_state = 471},
  [293] = {.lex_state = 471},
  [294] = {.lex_state = 471},
  [295] = {.lex_state = 471},
  [296] = {.lex_state = 471},
  [297] = {.lex_state = 471},
  [298] = {.lex_state = 471},
  [299] = {.lex_state = 471},
  [300] = {.lex_state = 471},
  [301] = {.lex_state = 471},
  [302] = {.lex_state = 471},
  [303] = {.lex_state = 471},
  [304] = {.lex_state = 471},
  [305] = {.lex_state = 471},
  [306] = {.lex_state = 471},
  [307] = {.lex_state = 300},
  [308] = {.lex_state = 300},
  [309] = {.lex_state = 300},
  [310] = {.lex_state = 471},
  [311] = {.lex_state = 505},
  [312] = {.lex_state = 505},
  [313] = {.lex_state = 300},
  [314] = {.lex_state = 300},
  [315] = {.lex_state = 501},
  [316] = {.lex_state = 300},
  [317] = {.lex_state = 300},
  [318] = {.lex_state = 300},
  [319] = {.lex_state = 471},
  [320] = {.lex_state = 300},
  [321] = {.lex_state = 261},
  [322] = {.lex_state = 471},
  [323] = {.lex_state = 471},
  [324] = {.lex_state = 300},
  [325] = {.lex_state = 300},
  [326] = {.lex_state = 471},
  [327] = {.lex_state = 261},
  [328] = {.lex_state = 300},
  [329] = {.lex_state = 261},
  [330] = {.lex_state = 300},
  [331] = {.lex_state = 300},
  [332] = {.lex_state = 471},
  [333] = {.lex_state = 300},
  [334] = {.lex_state = 261},
  [335] = {.lex_state = 261},
  [336] = {.lex_state = 471},
  [337] = {.lex_state = 511},
  [338] = {.lex_state = 471},
  [339] = {.lex_state = 485},
  [340] = {.lex_state = 485},
  [341] = {.lex_state = 471},
  [342] = {.lex_state = 485},
  [343] = {.lex_state = 485},
  [344] = {.lex_state = 485},
  [345] = {.lex_state = 471},
  [346] = {.lex_state = 474},
  [347] = {.lex_state = 300},
  [348] = {.lex_state = 261},
  [349] = {.lex_state = 261},
  [350] = {.lex_state = 474},
  [351] = {.lex_state = 485},
  [352] = {.lex_state = 300},
  [353] = {.lex_state = 300},
  [354] = {.lex_state = 300},
  [355] = {.lex_state = 498},
  [356] = {.lex_state = 471},
  [357] = {.lex_state = 300},
  [358] = {.lex_state = 498},
  [359] = {.lex_state = 471},
  [360] = {.lex_state = 300},
  [361] = {.lex_state = 261},
  [362] = {.lex_state = 479},
  [363] = {.lex_state = 506},
  [364] = {.lex_state = 471},
  [365] = {.lex_state = 471},
  [366] = {.lex_state = 300},
  [367] = {.lex_state = 506},
  [368] = {.lex_state = 506},
  [369] = {.lex_state = 506},
  [370] = {.lex_state = 506},
  [371] = {.lex_state = 506},
  [372] = {.lex_state = 506},
  [373] = {.lex_state = 300},
  [374] = {.lex_state = 506},
  [375] = {.lex_state = 506},
  [376] = {.lex_state = 261},
  [377] = {.lex_state = 300},
  [378] = {.lex_state = 300},
  [379] = {.lex_state = 471},
  [380] = {.lex_state = 261},
  [381] = {.lex_state = 261},
  [382] = {.lex_state = 300},
  [383] = {.lex_state = 300},
  [384] = {.lex_state = 507},
  [385] = {.lex_state = 300},
  [386] = {.lex_state = 507},
  [387] = {.lex_state = 300},
  [388] = {.lex_state = 507},
  [389] = {.lex_state = 519},
  [390] = {.lex_state = 519},
  [391] = {.lex_state = 300},
  [392] = {.lex_state = 300},
  [393] = {.lex_state = 300},
  [394] = {.lex_state = 300},
  [395] = {.lex_state = 300},
  [396] = {.lex_state = 261},
  [397] = {.lex_state = 485},
  [398] = {.lex_state = 481},
  [399] = {.lex_state = 261},
  [400] = {.lex_state = 471},
  [401] = {.lex_state = 481},
  [402] = {.lex_state = 481},
  [403] = {.lex_state = 300},
  [404] = {.lex_state = 300},
  [405] = {.lex_state = 300},
  [406] = {.lex_state = 474},
  [407] = {.lex_state = 521},
  [408] = {.lex_state = 481},
  [409] = {.lex_state = 261},
  [410] = {.lex_state = 481},
  [411] = {.lex_state = 481},
  [412] = {.lex_state = 479},
  [413] = {.lex_state = 471},
  [414] = {.lex_state = 471},
  [415] = {.lex_state = 300},
  [416] = {.lex_state = 300},
  [417] = {.lex_state = 261},
  [418] = {.lex_state = 481},
  [419] = {.lex_state = 471},
  [420] = {.lex_state = 261},
  [421] = {.lex_state = 261},
  [422] = {.lex_state = 261},
  [423] = {.lex_state = 481},
  [424] = {.lex_state = 471},
  [425] = {.lex_state = 300},
  [426] = {.lex_state = 300},
  [427] = {.lex_state = 261},
  [428] = {.lex_state = 481},
  [429] = {.lex_state = 261},
  [430] = {.lex_state = 300},
  [431] = {.lex_state = 300},
  [432] = {.lex_state = 300},
  [433] = {.lex_state = 300},
  [434] = {.lex_state = 300},
  [435] = {.lex_state = 300},
  [436] = {.lex_state = 300},
  [437] = {.lex_state = 300},
  [438] = {.lex_state = 300},
  [439] = {.lex_state = 300},
  [440] = {.lex_state = 300},
  [441] = {.lex_state = 300},
  [442] = {.lex_state = 300},
  [443] = {.lex_state = 300},
  [444] = {.lex_state = 471},
  [445] = {.lex_state = 471},
  [446] = {.lex_state = 300},
  [447] = {.lex_state = 498},
  [448] = {.lex_state = 471},
  [449] = {.lex_state = 481},
  [450] = {.lex_state = 300},
  [451] = {.lex_state = 300},
  [452] = {.lex_state = 261},
  [453] = {.lex_state = 300},
  [454] = {.lex_state = 300},
  [455] = {.lex_state = 300},
  [456] = {.lex_state = 300},
  [457] = {.lex_state = 300},
  [458] = {.lex_state = 511},
  [459] = {.lex_state = 471},
  [460] = {.lex_state = 471},
  [461] = {.lex_state = 471},
  [462] = {.lex_state = 300},
  [463] = {.lex_state = 300},
  [464] = {.lex_state = 471},
  [465] = {.lex_state = 300},
  [466] = {.lex_state = 300},
  [467] = {.lex_state = 471},
  [468] = {.lex_state = 300},
  [469] = {.lex_state = 261},
  [470] = {.lex_state = 261},
  [471] = {.lex_state = 300},
  [472] = {.lex_state = 261},
  [473] = {.lex_state = 471},
  [474] = {.lex_state = 471},
  [475] = {.lex_state = 300},
  [476] = {.lex_state = 300},
  [477] = {.lex_state = 300},
  [478] = {.lex_state = 471},
  [479] = {.lex_state = 485},
  [480] = {.lex_state = 485},
  [481] = {.lex_state = 485},
  [482] = {.lex_state = 300},
  [483] = {.lex_state = 511},
  [484] = {.lex_state = 511},
  [485] = {.lex_state = 511},
  [486] = {.lex_state = 485},
  [487] = {.lex_state = 471},
  [488] = {.lex_state = 485},
  [489] = {.lex_state = 471},
  [490] = {.lex_state = 485},
  [491] = {.lex_state = 471},
  [492] = {.lex_state = 485},
  [493] = {.lex_state = 474},
  [494] = {.lex_state = 474},
  [495] = {.lex_state = 485},
  [496] = {.lex_state = 497},
  [497] = {.lex_state = 300},
  [498] = {.lex_state = 261},
  [499] = {.lex_state = 261},
  [500] = {.lex_state = 497},
  [501] = {.lex_state = 496},
  [502] = {.lex_state = 300},
  [503] = {.lex_state = 261},
  [504] = {.lex_state = 261},
  [505] = {.lex_state = 496},
  [506] = {.lex_state = 471},
  [507] = {.lex_state = 506},
  [508] = {.lex_state = 506},
  [509] = {.lex_state = 300},
  [510] = {.lex_state = 300},
  [511] = {.lex_state = 261},
  [512] = {.lex_state = 506},
  [513] = {.lex_state = 479},
  [514] = {.lex_state = 471},
  [515] = {.lex_state = 471},
  [516] = {.lex_state = 300},
  [517] = {.lex_state = 506},
  [518] = {.lex_state = 300},
  [519] = {.lex_state = 261},
  [520] = {.lex_state = 506},
  [521] = {.lex_state = 471},
  [522] = {.lex_state = 261},
  [523] = {.lex_state = 300},
  [524] = {.lex_state = 524},
  [525] = {.lex_state = 261},
  [526] = {.lex_state = 300},
  [527] = {.lex_state = 300},
  [528] = {.lex_state = 300},
  [529] = {.lex_state = 300},
  [530] = {.lex_state = 300},
  [531] = {.lex_state = 300},
  [532] = {.lex_state = 300},
  [533] = {.lex_state = 300},
  [534] = {.lex_state = 524},
  [535] = {.lex_state = 524},
  [536] = {.lex_state = 300},
  [537] = {.lex_state = 261},
  [538] = {.lex_state = 471},
  [539] = {.lex_state = 261},
  [540] = {.lex_state = 300},
  [541] = {.lex_state = 471},
  [542] = {.lex_state = 507},
  [543] = {.lex_state = 300},
  [544] = {.lex_state = 471},
  [545] = {.lex_state = 471},
  [546] = {.lex_state = 471},
  [547] = {.lex_state = 300},
  [548] = {.lex_state = 300},
  [549] = {.lex_state = 471},
  [550] = {.lex_state = 261},
  [551] = {.lex_state = 261},
  [552] = {.lex_state = 510},
  [553] = {.lex_state = 481},
  [554] = {.lex_state = 261},
  [555] = {.lex_state = 498},
  [556] = {.lex_state = 471},
  [557] = {.lex_state = 481},
  [558] = {.lex_state = 300},
  [559] = {.lex_state = 300},
  [560] = {.lex_state = 261},
  [561] = {.lex_state = 481},
  [562] = {.lex_state = 481},
  [563] = {.lex_state = 300},
  [564] = {.lex_state = 261},
  [565] = {.lex_state = 481},
  [566] = {.lex_state = 300},
  [567] = {.lex_state = 471},
  [568] = {.lex_state = 481},
  [569] = {.lex_state = 300},
  [570] = {.lex_state = 471},
  [571] = {.lex_state = 300},
  [572] = {.lex_state = 300},
  [573] = {.lex_state = 511},
  [574] = {.lex_state = 300},
  [575] = {.lex_state = 300},
  [576] = {.lex_state = 300},
  [577] = {.lex_state = 300},
  [578] = {.lex_state = 300},
  [579] = {.lex_state = 300},
  [580] = {.lex_state = 538},
  [581] = {.lex_state = 538},
  [582] = {.lex_state = 300},
  [583] = {.lex_state = 300},
  [584] = {.lex_state = 300},
  [585] = {.lex_state = 300},
  [586] = {.lex_state = 300},
  [587] = {.lex_state = 300},
  [588] = {.lex_state = 300},
  [589] = {.lex_state = 300},
  [590] = {.lex_state = 261},
  [591] = {.lex_state = 261},
  [592] = {.lex_state = 511},
  [593] = {.lex_state = 481},
  [594] = {.lex_state = 471},
  [595] = {.lex_state = 300},
  [596] = {.lex_state = 300},
  [597] = {.lex_state = 261},
  [598] = {.lex_state = 481},
  [599] = {.lex_state = 261},
  [600] = {.lex_state = 471},
  [601] = {.lex_state = 261},
  [602] = {.lex_state = 300},
  [603] = {.lex_state = 471},
  [604] = {.lex_state = 481},
  [605] = {.lex_state = 471},
  [606] = {.lex_state = 471},
  [607] = {.lex_state = 471},
  [608] = {.lex_state = 471},
  [609] = {.lex_state = 471},
  [610] = {.lex_state = 471},
  [611] = {.lex_state = 471},
  [612] = {.lex_state = 471},
  [613] = {.lex_state = 541},
  [614] = {.lex_state = 471},
  [615] = {.lex_state = 505},
  [616] = {.lex_state = 300},
  [617] = {.lex_state = 261},
  [618] = {.lex_state = 261},
  [619] = {.lex_state = 505},
  [620] = {.lex_state = 300},
  [621] = {.lex_state = 481},
  [622] = {.lex_state = 300},
  [623] = {.lex_state = 261},
  [624] = {.lex_state = 300},
  [625] = {.lex_state = 300},
  [626] = {.lex_state = 300},
  [627] = {.lex_state = 485},
  [628] = {.lex_state = 471},
  [629] = {.lex_state = 471},
  [630] = {.lex_state = 471},
  [631] = {.lex_state = 471},
  [632] = {.lex_state = 300},
  [633] = {.lex_state = 300},
  [634] = {.lex_state = 471},
  [635] = {.lex_state = 300},
  [636] = {.lex_state = 261},
  [637] = {.lex_state = 261},
  [638] = {.lex_state = 511},
  [639] = {.lex_state = 511},
  [640] = {.lex_state = 485},
  [641] = {.lex_state = 511},
  [642] = {.lex_state = 485},
  [643] = {.lex_state = 485},
  [644] = {.lex_state = 300},
  [645] = {.lex_state = 511},
  [646] = {.lex_state = 485},
  [647] = {.lex_state = 485},
  [648] = {.lex_state = 471},
  [649] = {.lex_state = 485},
  [650] = {.lex_state = 485},
  [651] = {.lex_state = 497},
  [652] = {.lex_state = 497},
  [653] = {.lex_state = 496},
  [654] = {.lex_state = 496},
  [655] = {.lex_state = 261},
  [656] = {.lex_state = 498},
  [657] = {.lex_state = 471},
  [658] = {.lex_state = 481},
  [659] = {.lex_state = 300},
  [660] = {.lex_state = 300},
  [661] = {.lex_state = 261},
  [662] = {.lex_state = 506},
  [663] = {.lex_state = 481},
  [664] = {.lex_state = 300},
  [665] = {.lex_state = 261},
  [666] = {.lex_state = 506},
  [667] = {.lex_state = 300},
  [668] = {.lex_state = 471},
  [669] = {.lex_state = 300},
  [670] = {.lex_state = 300},
  [671] = {.lex_state = 261},
  [672] = {.lex_state = 506},
  [673] = {.lex_state = 471},
  [674] = {.lex_state = 471},
  [675] = {.lex_state = 300},
  [676] = {.lex_state = 261},
  [677] = {.lex_state = 471},
  [678] = {.lex_state = 300},
  [679] = {.lex_state = 261},
  [680] = {.lex_state = 300},
  [681] = {.lex_state = 300},
  [682] = {.lex_state = 300},
  [683] = {.lex_state = 300},
  [684] = {.lex_state = 300},
  [685] = {.lex_state = 300},
  [686] = {.lex_state = 300},
  [687] = {.lex_state = 524},
  [688] = {.lex_state = 524},
  [689] = {.lex_state = 261},
  [690] = {.lex_state = 471},
  [691] = {.lex_state = 261},
  [692] = {.lex_state = 261},
  [693] = {.lex_state = 261},
  [694] = {.lex_state = 261},
  [695] = {.lex_state = 261},
  [696] = {.lex_state = 261},
  [697] = {.lex_state = 261},
  [698] = {.lex_state = 261},
  [699] = {.lex_state = 261},
  [700] = {.lex_state = 300},
  [701] = {.lex_state = 300},
  [702] = {.lex_state = 300},
  [703] = {.lex_state = 519},
  [704] = {.lex_state = 300},
  [705] = {.lex_state = 300},
  [706] = {.lex_state = 471},
  [707] = {.lex_state = 300},
  [708] = {.lex_state = 506},
  [709] = {.lex_state = 481},
  [710] = {.lex_state = 481},
  [711] = {.lex_state = 300},
  [712] = {.lex_state = 261},
  [713] = {.lex_state = 261},
  [714] = {.lex_state = 481},
  [715] = {.lex_state = 481},
  [716] = {.lex_state = 481},
  [717] = {.lex_state = 300},
  [718] = {.lex_state = 261},
  [719] = {.lex_state = 481},
  [720] = {.lex_state = 481},
  [721] = {.lex_state = 481},
  [722] = {.lex_state = 261},
  [723] = {.lex_state = 481},
  [724] = {.lex_state = 300},
  [725] = {.lex_state = 261},
  [726] = {.lex_state = 300},
  [727] = {.lex_state = 300},
  [728] = {.lex_state = 538},
  [729] = {.lex_state = 538},
  [730] = {.lex_state = 471},
  [731] = {.lex_state = 471},
  [732] = {.lex_state = 471},
  [733] = {.lex_state = 300},
  [734] = {.lex_state = 471},
  [735] = {.lex_state = 300},
  [736] = {.lex_state = 300},
  [737] = {.lex_state = 261},
  [738] = {.lex_state = 511},
  [739] = {.lex_state = 261},
  [740] = {.lex_state = 471},
  [741] = {.lex_state = 300},
  [742] = {.lex_state = 300},
  [743] = {.lex_state = 300},
  [744] = {.lex_state = 300},
  [745] = {.lex_state = 300},
  [746] = {.lex_state = 543},
  [747] = {.lex_state = 481},
  [748] = {.lex_state = 261},
  [749] = {.lex_state = 545},
  [750] = {.lex_state = 471},
  [751] = {.lex_state = 545},
  [752] = {.lex_state = 300},
  [753] = {.lex_state = 471},
  [754] = {.lex_state = 261},
  [755] = {.lex_state = 300},
  [756] = {.lex_state = 300},
  [757] = {.lex_state = 481},
  [758] = {.lex_state = 261},
  [759] = {.lex_state = 300},
  [760] = {.lex_state = 300},
  [761] = {.lex_state = 300},
  [762] = {.lex_state = 300},
  [763] = {.lex_state = 300},
  [764] = {.lex_state = 300},
  [765] = {.lex_state = 300},
  [766] = {.lex_state = 300},
  [767] = {.lex_state = 300},
  [768] = {.lex_state = 261},
  [769] = {.lex_state = 261},
  [770] = {.lex_state = 479},
  [771] = {.lex_state = 261},
  [772] = {.lex_state = 471},
  [773] = {.lex_state = 471},
  [774] = {.lex_state = 482},
  [775] = {.lex_state = 471},
  [776] = {.lex_state = 300},
  [777] = {.lex_state = 300},
  [778] = {.lex_state = 300},
  [779] = {.lex_state = 300},
  [780] = {.lex_state = 300},
  [781] = {.lex_state = 300},
  [782] = {.lex_state = 300},
  [783] = {.lex_state = 300},
  [784] = {.lex_state = 300},
  [785] = {.lex_state = 261},
  [786] = {.lex_state = 261},
  [787] = {.lex_state = 300},
  [788] = {.lex_state = 505},
  [789] = {.lex_state = 505},
  [790] = {.lex_state = 300},
  [791] = {.lex_state = 261},
  [792] = {.lex_state = 300},
  [793] = {.lex_state = 300},
  [794] = {.lex_state = 471},
  [795] = {.lex_state = 485},
  [796] = {.lex_state = 471},
  [797] = {.lex_state = 471},
  [798] = {.lex_state = 471},
  [799] = {.lex_state = 471},
  [800] = {.lex_state = 261},
  [801] = {.lex_state = 261},
  [802] = {.lex_state = 498},
  [803] = {.lex_state = 471},
  [804] = {.lex_state = 485},
  [805] = {.lex_state = 485},
  [806] = {.lex_state = 511},
  [807] = {.lex_state = 485},
  [808] = {.lex_state = 485},
  [809] = {.lex_state = 506},
  [810] = {.lex_state = 506},
  [811] = {.lex_state = 506},
  [812] = {.lex_state = 300},
  [813] = {.lex_state = 261},
  [814] = {.lex_state = 261},
  [815] = {.lex_state = 506},
  [816] = {.lex_state = 506},
  [817] = {.lex_state = 481},
  [818] = {.lex_state = 300},
  [819] = {.lex_state = 261},
  [820] = {.lex_state = 506},
  [821] = {.lex_state = 506},
  [822] = {.lex_state = 481},
  [823] = {.lex_state = 261},
  [824] = {.lex_state = 506},
  [825] = {.lex_state = 506},
  [826] = {.lex_state = 261},
  [827] = {.lex_state = 300},
  [828] = {.lex_state = 300},
  [829] = {.lex_state = 261},
  [830] = {.lex_state = 300},
  [831] = {.lex_state = 300},
  [832] = {.lex_state = 300},
  [833] = {.lex_state = 471},
  [834] = {.lex_state = 471},
  [835] = {.lex_state = 471},
  [836] = {.lex_state = 471},
  [837] = {.lex_state = 471},
  [838] = {.lex_state = 471},
  [839] = {.lex_state = 471},
  [840] = {.lex_state = 300},
  [841] = {.lex_state = 471},
  [842] = {.lex_state = 471},
  [843] = {.lex_state = 300},
  [844] = {.lex_state = 261},
  [845] = {.lex_state = 261},
  [846] = {.lex_state = 261},
  [847] = {.lex_state = 471},
  [848] = {.lex_state = 261},
  [849] = {.lex_state = 261},
  [850] = {.lex_state = 261},
  [851] = {.lex_state = 261},
  [852] = {.lex_state = 261},
  [853] = {.lex_state = 261},
  [854] = {.lex_state = 261},
  [855] = {.lex_state = 261},
  [856] = {.lex_state = 300},
  [857] = {.lex_state = 300},
  [858] = {.lex_state = 300},
  [859] = {.lex_state = 300},
  [860] = {.lex_state = 300},
  [861] = {.lex_state = 300},
  [862] = {.lex_state = 300},
  [863] = {.lex_state = 524},
  [864] = {.lex_state = 524},
  [865] = {.lex_state = 524},
  [866] = {.lex_state = 300},
  [867] = {.lex_state = 300},
  [868] = {.lex_state = 300},
  [869] = {.lex_state = 471},
  [870] = {.lex_state = 300},
  [871] = {.lex_state = 481},
  [872] = {.lex_state = 506},
  [873] = {.lex_state = 481},
  [874] = {.lex_state = 481},
  [875] = {.lex_state = 481},
  [876] = {.lex_state = 261},
  [877] = {.lex_state = 481},
  [878] = {.lex_state = 481},
  [879] = {.lex_state = 481},
  [880] = {.lex_state = 300},
  [881] = {.lex_state = 300},
  [882] = {.lex_state = 261},
  [883] = {.lex_state = 300},
  [884] = {.lex_state = 498},
  [885] = {.lex_state = 471},
  [886] = {.lex_state = 300},
  [887] = {.lex_state = 300},
  [888] = {.lex_state = 261},
  [889] = {.lex_state = 300},
  [890] = {.lex_state = 300},
  [891] = {.lex_state = 471},
  [892] = {.lex_state = 471},
  [893] = {.lex_state = 261},
  [894] = {.lex_state = 300},
  [895] = {.lex_state = 261},
  [896] = {.lex_state = 300},
  [897] = {.lex_state = 300},
  [898] = {.lex_state = 261},
  [899] = {.lex_state = 471},
  [900] = {.lex_state = 261},
  [901] = {.lex_state = 300},
  [902] = {.lex_state = 471},
  [903] = {.lex_state = 300},
  [904] = {.lex_state = 471},
  [905] = {.lex_state = 471},
  [906] = {.lex_state = 471},
  [907] = {.lex_state = 300},
  [908] = {.lex_state = 300},
  [909] = {.lex_state = 300},
  [910] = {.lex_state = 471},
  [911] = {.lex_state = 300},
  [912] = {.lex_state = 300},
  [913] = {.lex_state = 300},
  [914] = {.lex_state = 471},
  [915] = {.lex_state = 300},
  [916] = {.lex_state = 300},
  [917] = {.lex_state = 471},
  [918] = {.lex_state = 481},
  [919] = {.lex_state = 511},
  [920] = {.lex_state = 261},
  [921] = {.lex_state = 471},
  [922] = {.lex_state = 300},
  [923] = {.lex_state = 547},
  [924] = {.lex_state = 300},
  [925] = {.lex_state = 300},
  [926] = {.lex_state = 300},
  [927] = {.lex_state = 300},
  [928] = {.lex_state = 261},
  [929] = {.lex_state = 481},
  [930] = {.lex_state = 300},
  [931] = {.lex_state = 261},
  [932] = {.lex_state = 471},
  [933] = {.lex_state = 261},
  [934] = {.lex_state = 300},
  [935] = {.lex_state = 471},
  [936] = {.lex_state = 471},
  [937] = {.lex_state = 261},
  [938] = {.lex_state = 300},
  [939] = {.lex_state = 471},
  [940] = {.lex_state = 300},
  [941] = {.lex_state = 300},
  [942] = {.lex_state = 300},
  [943] = {.lex_state = 300},
  [944] = {.lex_state = 300},
  [945] = {.lex_state = 300},
  [946] = {.lex_state = 300},
  [947] = {.lex_state = 261},
  [948] = {.lex_state = 471},
  [949] = {.lex_state = 479},
  [950] = {.lex_state = 471},
  [951] = {.lex_state = 300},
  [952] = {.lex_state = 471},
  [953] = {.lex_state = 300},
  [954] = {.lex_state = 261},
  [955] = {.lex_state = 471},
  [956] = {.lex_state = 471},
  [957] = {.lex_state = 471},
  [958] = {.lex_state = 511},
  [959] = {.lex_state = 300},
  [960] = {.lex_state = 261},
  [961] = {.lex_state = 261},
  [962] = {.lex_state = 511},
  [963] = {.lex_state = 485},
  [964] = {.lex_state = 485},
  [965] = {.lex_state = 506},
  [966] = {.lex_state = 506},
  [967] = {.lex_state = 506},
  [968] = {.lex_state = 506},
  [969] = {.lex_state = 506},
  [970] = {.lex_state = 261},
  [971] = {.lex_state = 506},
  [972] = {.lex_state = 506},
  [973] = {.lex_state = 506},
  [974] = {.lex_state = 471},
  [975] = {.lex_state = 300},
  [976] = {.lex_state = 300},
  [977] = {.lex_state = 300},
  [978] = {.lex_state = 300},
  [979] = {.lex_state = 300},
  [980] = {.lex_state = 300},
  [981] = {.lex_state = 300},
  [982] = {.lex_state = 300},
  [983] = {.lex_state = 524},
  [984] = {.lex_state = 524},
  [985] = {.lex_state = 506},
  [986] = {.lex_state = 300},
  [987] = {.lex_state = 506},
  [988] = {.lex_state = 300},
  [989] = {.lex_state = 261},
  [990] = {.lex_state = 300},
  [991] = {.lex_state = 300},
  [992] = {.lex_state = 300},
  [993] = {.lex_state = 300},
  [994] = {.lex_state = 300},
  [995] = {.lex_state = 300},
  [996] = {.lex_state = 300},
  [997] = {.lex_state = 471},
  [998] = {.lex_state = 471},
  [999] = {.lex_state = 471},
  [1000] = {.lex_state = 471},
  [1001] = {.lex_state = 471},
  [1002] = {.lex_state = 471},
  [1003] = {.lex_state = 471},
  [1004] = {.lex_state = 300},
  [1005] = {.lex_state = 261},
  [1006] = {.lex_state = 261},
  [1007] = {.lex_state = 300},
  [1008] = {.lex_state = 300},
  [1009] = {.lex_state = 300},
  [1010] = {.lex_state = 300},
  [1011] = {.lex_state = 300},
  [1012] = {.lex_state = 300},
  [1013] = {.lex_state = 524},
  [1014] = {.lex_state = 524},
  [1015] = {.lex_state = 471},
  [1016] = {.lex_state = 300},
  [1017] = {.lex_state = 300},
  [1018] = {.lex_state = 471},
  [1019] = {.lex_state = 481},
  [1020] = {.lex_state = 481},
  [1021] = {.lex_state = 300},
  [1022] = {.lex_state = 538},
  [1023] = {.lex_state = 300},
  [1024] = {.lex_state = 261},
  [1025] = {.lex_state = 261},
  [1026] = {.lex_state = 538},
  [1027] = {.lex_state = 300},
  [1028] = {.lex_state = 471},
  [1029] = {.lex_state = 261},
  [1030] = {.lex_state = 300},
  [1031] = {.lex_state = 300},
  [1032] = {.lex_state = 300},
  [1033] = {.lex_state = 471},
  [1034] = {.lex_state = 471},
  [1035] = {.lex_state = 261},
  [1036] = {.lex_state = 471},
  [1037] = {.lex_state = 471},
  [1038] = {.lex_state = 300},
  [1039] = {.lex_state = 471},
  [1040] = {.lex_state = 300},
  [1041] = {.lex_state = 300},
  [1042] = {.lex_state = 261},
  [1043] = {.lex_state = 300},
  [1044] = {.lex_state = 300},
  [1045] = {.lex_state = 261},
  [1046] = {.lex_state = 471},
  [1047] = {.lex_state = 471},
  [1048] = {.lex_state = 471},
  [1049] = {.lex_state = 471},
  [1050] = {.lex_state = 471},
  [1051] = {.lex_state = 471},
  [1052] = {.lex_state = 471},
  [1053] = {.lex_state = 300},
  [1054] = {.lex_state = 471},
  [1055] = {.lex_state = 300},
  [1056] = {.lex_state = 300},
  [1057] = {.lex_state = 471},
  [1058] = {.lex_state = 471},
  [1059] = {.lex_state = 471},
  [1060] = {.lex_state = 261},
  [1061] = {.lex_state = 485},
  [1062] = {.lex_state = 471},
  [1063] = {.lex_state = 261},
  [1064] = {.lex_state = 300},
  [1065] = {.lex_state = 300},
  [1066] = {.lex_state = 261},
  [1067] = {.lex_state = 481},
  [1068] = {.lex_state = 300},
  [1069] = {.lex_state = 261},
  [1070] = {.lex_state = 261},
  [1071] = {.lex_state = 261},
  [1072] = {.lex_state = 300},
  [1073] = {.lex_state = 300},
  [1074] = {.lex_state = 300},
  [1075] = {.lex_state = 300},
  [1076] = {.lex_state = 300},
  [1077] = {.lex_state = 471},
  [1078] = {.lex_state = 481},
  [1079] = {.lex_state = 300},
  [1080] = {.lex_state = 261},
  [1081] = {.lex_state = 300},
  [1082] = {.lex_state = 300},
  [1083] = {.lex_state = 261},
  [1084] = {.lex_state = 471},
  [1085] = {.lex_state = 300},
  [1086] = {.lex_state = 471},
  [1087] = {.lex_state = 300},
  [1088] = {.lex_state = 300},
  [1089] = {.lex_state = 300},
  [1090] = {.lex_state = 300},
  [1091] = {.lex_state = 471},
  [1092] = {.lex_state = 511},
  [1093] = {.lex_state = 511},
  [1094] = {.lex_state = 506},
  [1095] = {.lex_state = 506},
  [1096] = {.lex_state = 300},
  [1097] = {.lex_state = 261},
  [1098] = {.lex_state = 471},
  [1099] = {.lex_state = 261},
  [1100] = {.lex_state = 261},
  [1101] = {.lex_state = 261},
  [1102] = {.lex_state = 261},
  [1103] = {.lex_state = 261},
  [1104] = {.lex_state = 261},
  [1105] = {.lex_state = 261},
  [1106] = {.lex_state = 261},
  [1107] = {.lex_state = 506},
  [1108] = {.lex_state = 261},
  [1109] = {.lex_state = 506},
  [1110] = {.lex_state = 300},
  [1111] = {.lex_state = 471},
  [1112] = {.lex_state = 300},
  [1113] = {.lex_state = 300},
  [1114] = {.lex_state = 300},
  [1115] = {.lex_state = 300},
  [1116] = {.lex_state = 300},
  [1117] = {.lex_state = 300},
  [1118] = {.lex_state = 300},
  [1119] = {.lex_state = 261},
  [1120] = {.lex_state = 471},
  [1121] = {.lex_state = 300},
  [1122] = {.lex_state = 300},
  [1123] = {.lex_state = 538},
  [1124] = {.lex_state = 538},
  [1125] = {.lex_state = 300},
  [1126] = {.lex_state = 471},
  [1127] = {.lex_state = 300},
  [1128] = {.lex_state = 300},
  [1129] = {.lex_state = 300},
  [1130] = {.lex_state = 471},
  [1131] = {.lex_state = 300},
  [1132] = {.lex_state = 471},
  [1133] = {.lex_state = 300},
  [1134] = {.lex_state = 261},
  [1135] = {.lex_state = 261},
  [1136] = {.lex_state = 300},
  [1137] = {.lex_state = 300},
  [1138] = {.lex_state = 261},
  [1139] = {.lex_state = 261},
  [1140] = {.lex_state = 300},
  [1141] = {.lex_state = 261},
  [1142] = {.lex_state = 300},
  [1143] = {.lex_state = 300},
  [1144] = {.lex_state = 300},
  [1145] = {.lex_state = 300},
  [1146] = {.lex_state = 300},
  [1147] = {.lex_state = 300},
  [1148] = {.lex_state = 300},
  [1149] = {.lex_state = 300},
  [1150] = {.lex_state = 300},
  [1151] = {.lex_state = 471},
  [1152] = {.lex_state = 300},
  [1153] = {.lex_state = 471},
  [1154] = {.lex_state = 300},
  [1155] = {.lex_state = 261},
  [1156] = {.lex_state = 471},
  [1157] = {.lex_state = 547},
  [1158] = {.lex_state = 485},
  [1159] = {.lex_state = 261},
  [1160] = {.lex_state = 471},
  [1161] = {.lex_state = 481},
  [1162] = {.lex_state = 261},
  [1163] = {.lex_state = 300},
  [1164] = {.lex_state = 506},
  [1165] = {.lex_state = 300},
  [1166] = {.lex_state = 300},
  [1167] = {.lex_state = 300},
  [1168] = {.lex_state = 300},
  [1169] = {.lex_state = 300},
  [1170] = {.lex_state = 471},
  [1171] = {.lex_state = 300},
  [1172] = {.lex_state = 300},
  [1173] = {.lex_state = 481},
  [1174] = {.lex_state = 261},
  [1175] = {.lex_state = 300},
  [1176] = {.lex_state = 300},
  [1177] = {.lex_state = 261},
  [1178] = {.lex_state = 300},
  [1179] = {.lex_state = 261},
  [1180] = {.lex_state = 300},
  [1181] = {.lex_state = 300},
  [1182] = {.lex_state = 300},
  [1183] = {.lex_state = 300},
  [1184] = {.lex_state = 300},
  [1185] = {.lex_state = 300},
  [1186] = {.lex_state = 300},
  [1187] = {.lex_state = 524},
  [1188] = {.lex_state = 524},
  [1189] = {.lex_state = 506},
  [1190] = {.lex_state = 506},
  [1191] = {.lex_state = 300},
  [1192] = {.lex_state = 471},
  [1193] = {.lex_state = 300},
  [1194] = {.lex_state = 300},
  [1195] = {.lex_state = 300},
  [1196] = {.lex_state = 300},
  [1197] = {.lex_state = 300},
  [1198] = {.lex_state = 471},
  [1199] = {.lex_state = 261},
  [1200] = {.lex_state = 300},
  [1201] = {.lex_state = 471},
  [1202] = {.lex_state = 471},
  [1203] = {.lex_state = 261},
  [1204] = {.lex_state = 300},
  [1205] = {.lex_state = 300},
  [1206] = {.lex_state = 261},
  [1207] = {.lex_state = 547},
  [1208] = {.lex_state = 300},
  [1209] = {.lex_state = 261},
  [1210] = {.lex_state = 261},
  [1211] = {.lex_state = 300},
  [1212] = {.lex_state = 300},
  [1213] = {.lex_state = 506},
  [1214] = {.lex_state = 300},
  [1215] = {.lex_state = 300},
  [1216] = {.lex_state = 300},
  [1217] = {.lex_state = 300},
  [1218] = {.lex_state = 300},
  [1219] = {.lex_state = 300},
  [1220] = {.lex_state = 300},
  [1221] = {.lex_state = 300},
  [1222] = {.lex_state = 300},
  [1223] = {.lex_state = 300},
  [1224] = {.lex_state = 261},
  [1225] = {.lex_state = 471},
  [1226] = {.lex_state = 300},
  [1227] = {.lex_state = 300},
  [1228] = {.lex_state = 300},
  [1229] = {.lex_state = 261},
  [1230] = {.lex_state = 471},
  [1231] = {.lex_state = 300},
  [1232] = {.lex_state = 300},
  [1233] = {.lex_state = 261},
  [1234] = {.lex_state = 471},
  [1235] = {.lex_state = 300},
  [1236] = {.lex_state = 300},
  [1237] = {.lex_state = 261},
  [1238] = {.lex_state = 300},
  [1239] = {.lex_state = 300},
  [1240] = {.lex_state = 300},
  [1241] = {.lex_state = 300},
  [1242] = {.lex_state = 300},
  [1243] = {.lex_state = 300},
  [1244] = {.lex_state = 300},
  [1245] = {.lex_state = 261},
  [1246] = {.lex_state = 300},
  [1247] = {.lex_state = 261},
  [1248] = {.lex_state = 300},
  [1249] = {.lex_state = 300},
  [1250] = {.lex_state = 300},
  [1251] = {.lex_state = 300},
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
    [sym_assignment_expression] = STATE(25),
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
    [sym_inferred_formal_parameter_list] = STATE(58),
    [sym__annotation] = STATE(59),
    [sym_normal_annotation] = STATE(60),
    [sym_marker_annotation] = STATE(60),
    [sym_single_element_annotation] = STATE(60),
    [sym_modifier] = STATE(61),
    [sym_variable_declarator_id] = STATE(62),
    [sym__formal_parameter_list] = STATE(58),
    [sym_formal_parameter] = STATE(63),
    [sym_receiver_parameter] = STATE(64),
    [sym_last_formal_parameter] = STATE(65),
    [aux_sym_class_or_interface_type_repeat1] = STATE(66),
    [aux_sym_normal_class_declaration_repeat1] = STATE(67),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_static] = ACTIONS(78),
    [anon_sym_public] = ACTIONS(78),
    [anon_sym_protected] = ACTIONS(78),
    [anon_sym_private] = ACTIONS(78),
    [anon_sym_abstract] = ACTIONS(78),
    [anon_sym_final] = ACTIONS(78),
    [anon_sym_strictfp] = ACTIONS(78),
    [anon_sym_default] = ACTIONS(78),
    [anon_sym_synchronized] = ACTIONS(78),
    [anon_sym_native] = ACTIONS(78),
    [anon_sym_this] = ACTIONS(80),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(82),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(54),
  },
  [9] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(25),
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
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [10] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(25),
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
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [11] = {
    [sym_package_or_type_name] = STATE(72),
    [anon_sym_interface] = ACTIONS(88),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [12] = {
    [anon_sym_module] = ACTIONS(92),
    [sym_comment] = ACTIONS(54),
  },
  [13] = {
    [sym_module_identifier] = STATE(75),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [14] = {
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_static] = ACTIONS(98),
    [anon_sym_class] = ACTIONS(98),
    [anon_sym_public] = ACTIONS(98),
    [anon_sym_protected] = ACTIONS(98),
    [anon_sym_private] = ACTIONS(98),
    [anon_sym_abstract] = ACTIONS(98),
    [anon_sym_final] = ACTIONS(98),
    [anon_sym_strictfp] = ACTIONS(98),
    [anon_sym_default] = ACTIONS(98),
    [anon_sym_synchronized] = ACTIONS(98),
    [anon_sym_native] = ACTIONS(98),
    [anon_sym_void] = ACTIONS(98),
    [anon_sym_interface] = ACTIONS(98),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(54),
  },
  [15] = {
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(54),
  },
  [16] = {
    [sym_package_or_type_name] = STATE(78),
    [anon_sym_static] = ACTIONS(104),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [17] = {
    [sym_identifier] = ACTIONS(106),
    [sym_comment] = ACTIONS(54),
  },
  [18] = {
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(54),
  },
  [19] = {
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(54),
  },
  [20] = {
    [anon_sym_DASH_GT] = ACTIONS(112),
    [sym_comment] = ACTIONS(54),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(54),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_decimal_integer_literal] = ACTIONS(118),
    [sym_hex_integer_literal] = ACTIONS(118),
    [sym_octal_integer_literal] = ACTIONS(118),
    [sym_binary_integer_literal] = ACTIONS(118),
    [sym_decimal_floating_point_literal] = ACTIONS(118),
    [sym_hex_floating_point_literal] = ACTIONS(120),
    [anon_sym_true] = ACTIONS(118),
    [anon_sym_false] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [sym_string_literal] = ACTIONS(116),
    [sym_null_literal] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_BANG] = ACTIONS(116),
    [anon_sym_TILDE] = ACTIONS(116),
    [anon_sym_PLUS_PLUS] = ACTIONS(116),
    [anon_sym_DASH_DASH] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(116),
    [anon_sym_open] = ACTIONS(118),
    [anon_sym_module] = ACTIONS(118),
    [anon_sym_static] = ACTIONS(118),
    [anon_sym_package] = ACTIONS(118),
    [anon_sym_import] = ACTIONS(118),
    [anon_sym_class] = ACTIONS(118),
    [anon_sym_public] = ACTIONS(118),
    [anon_sym_protected] = ACTIONS(118),
    [anon_sym_private] = ACTIONS(118),
    [anon_sym_abstract] = ACTIONS(118),
    [anon_sym_final] = ACTIONS(118),
    [anon_sym_strictfp] = ACTIONS(118),
    [anon_sym_default] = ACTIONS(118),
    [anon_sym_synchronized] = ACTIONS(118),
    [anon_sym_native] = ACTIONS(118),
    [anon_sym_void] = ACTIONS(118),
    [anon_sym_interface] = ACTIONS(118),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(54),
  },
  [23] = {
    [sym__semicolon] = ACTIONS(122),
    [sym_comment] = ACTIONS(54),
  },
  [24] = {
    [sym__semicolon] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_PIPE_PIPE] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(138),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [25] = {
    [sym__semicolon] = ACTIONS(148),
    [anon_sym_EQ] = ACTIONS(150),
    [anon_sym_PLUS_EQ] = ACTIONS(148),
    [anon_sym_DASH_EQ] = ACTIONS(148),
    [anon_sym_STAR_EQ] = ACTIONS(148),
    [anon_sym_SLASH_EQ] = ACTIONS(148),
    [anon_sym_AMP_EQ] = ACTIONS(148),
    [anon_sym_PIPE_EQ] = ACTIONS(148),
    [anon_sym_CARET_EQ] = ACTIONS(148),
    [anon_sym_PERCENT_EQ] = ACTIONS(148),
    [anon_sym_LT_LT_EQ] = ACTIONS(148),
    [anon_sym_GT_GT_EQ] = ACTIONS(148),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(148),
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
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_AMP] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_CARET] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_GT_GT_GT] = ACTIONS(150),
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
    [anon_sym_EQ] = ACTIONS(156),
    [anon_sym_PLUS_EQ] = ACTIONS(154),
    [anon_sym_DASH_EQ] = ACTIONS(154),
    [anon_sym_STAR_EQ] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(154),
    [anon_sym_AMP_EQ] = ACTIONS(154),
    [anon_sym_PIPE_EQ] = ACTIONS(154),
    [anon_sym_CARET_EQ] = ACTIONS(154),
    [anon_sym_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_LT_LT_EQ] = ACTIONS(154),
    [anon_sym_GT_GT_EQ] = ACTIONS(154),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(154),
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
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_CARET] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(156),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
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
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_open] = ACTIONS(161),
    [anon_sym_module] = ACTIONS(161),
    [anon_sym_static] = ACTIONS(96),
    [anon_sym_package] = ACTIONS(161),
    [anon_sym_class] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_protected] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_abstract] = ACTIONS(96),
    [anon_sym_final] = ACTIONS(96),
    [anon_sym_strictfp] = ACTIONS(96),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
    [anon_sym_native] = ACTIONS(96),
    [anon_sym_void] = ACTIONS(96),
    [anon_sym_interface] = ACTIONS(96),
    [sym_comment] = ACTIONS(54),
  },
  [29] = {
    [sym__semicolon] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
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
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_decimal_integer_literal] = ACTIONS(167),
    [sym_hex_integer_literal] = ACTIONS(167),
    [sym_octal_integer_literal] = ACTIONS(167),
    [sym_binary_integer_literal] = ACTIONS(167),
    [sym_decimal_floating_point_literal] = ACTIONS(167),
    [sym_hex_floating_point_literal] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [sym_string_literal] = ACTIONS(165),
    [sym_null_literal] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_BANG] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(165),
    [anon_sym_PLUS_PLUS] = ACTIONS(165),
    [anon_sym_DASH_DASH] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym_open] = ACTIONS(167),
    [anon_sym_module] = ACTIONS(167),
    [anon_sym_static] = ACTIONS(167),
    [anon_sym_package] = ACTIONS(167),
    [anon_sym_import] = ACTIONS(167),
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
    [anon_sym_void] = ACTIONS(167),
    [anon_sym_interface] = ACTIONS(167),
    [sym_identifier] = ACTIONS(169),
    [sym_comment] = ACTIONS(54),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_decimal_integer_literal] = ACTIONS(173),
    [sym_hex_integer_literal] = ACTIONS(173),
    [sym_octal_integer_literal] = ACTIONS(173),
    [sym_binary_integer_literal] = ACTIONS(173),
    [sym_decimal_floating_point_literal] = ACTIONS(173),
    [sym_hex_floating_point_literal] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [sym_string_literal] = ACTIONS(171),
    [sym_null_literal] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_BANG] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
    [anon_sym_PLUS_PLUS] = ACTIONS(171),
    [anon_sym_DASH_DASH] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym_open] = ACTIONS(173),
    [anon_sym_module] = ACTIONS(173),
    [anon_sym_static] = ACTIONS(173),
    [anon_sym_package] = ACTIONS(173),
    [anon_sym_import] = ACTIONS(173),
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
    [anon_sym_void] = ACTIONS(173),
    [anon_sym_interface] = ACTIONS(173),
    [sym_identifier] = ACTIONS(175),
    [sym_comment] = ACTIONS(54),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_decimal_integer_literal] = ACTIONS(179),
    [sym_hex_integer_literal] = ACTIONS(179),
    [sym_octal_integer_literal] = ACTIONS(179),
    [sym_binary_integer_literal] = ACTIONS(179),
    [sym_decimal_floating_point_literal] = ACTIONS(179),
    [sym_hex_floating_point_literal] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [sym_string_literal] = ACTIONS(177),
    [sym_null_literal] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PLUS_PLUS] = ACTIONS(177),
    [anon_sym_DASH_DASH] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_open] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_static] = ACTIONS(179),
    [anon_sym_package] = ACTIONS(179),
    [anon_sym_import] = ACTIONS(179),
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
    [anon_sym_void] = ACTIONS(179),
    [anon_sym_interface] = ACTIONS(179),
    [sym_identifier] = ACTIONS(181),
    [sym_comment] = ACTIONS(54),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_decimal_integer_literal] = ACTIONS(185),
    [sym_hex_integer_literal] = ACTIONS(185),
    [sym_octal_integer_literal] = ACTIONS(185),
    [sym_binary_integer_literal] = ACTIONS(185),
    [sym_decimal_floating_point_literal] = ACTIONS(185),
    [sym_hex_floating_point_literal] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [sym_string_literal] = ACTIONS(183),
    [sym_null_literal] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_PLUS_PLUS] = ACTIONS(183),
    [anon_sym_DASH_DASH] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_open] = ACTIONS(185),
    [anon_sym_module] = ACTIONS(185),
    [anon_sym_static] = ACTIONS(185),
    [anon_sym_package] = ACTIONS(185),
    [anon_sym_import] = ACTIONS(185),
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
    [anon_sym_void] = ACTIONS(185),
    [anon_sym_interface] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(54),
  },
  [34] = {
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(189),
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
    [sym_identifier] = ACTIONS(193),
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
    [sym_assignment_expression] = STATE(25),
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
    [anon_sym_module] = ACTIONS(92),
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
    [sym_identifier] = ACTIONS(241),
    [sym_comment] = ACTIONS(54),
  },
  [49] = {
    [anon_sym_GT] = ACTIONS(243),
    [sym_comment] = ACTIONS(54),
  },
  [50] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(117),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(247),
    [sym_comment] = ACTIONS(54),
  },
  [51] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(249),
    [sym_comment] = ACTIONS(54),
  },
  [52] = {
    [aux_sym_inferred_formal_parameter_list_repeat1] = STATE(121),
    [anon_sym_RPAREN] = ACTIONS(251),
    [sym_identifier] = ACTIONS(253),
    [sym_comment] = ACTIONS(54),
  },
  [53] = {
    [sym_package_or_type_name] = STATE(123),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(54),
  },
  [54] = {
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_static] = ACTIONS(98),
    [anon_sym_public] = ACTIONS(98),
    [anon_sym_protected] = ACTIONS(98),
    [anon_sym_private] = ACTIONS(98),
    [anon_sym_abstract] = ACTIONS(98),
    [anon_sym_final] = ACTIONS(98),
    [anon_sym_strictfp] = ACTIONS(98),
    [anon_sym_default] = ACTIONS(98),
    [anon_sym_synchronized] = ACTIONS(98),
    [anon_sym_native] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(54),
  },
  [55] = {
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_throws] = ACTIONS(257),
    [sym_comment] = ACTIONS(54),
  },
  [56] = {
    [sym_variable_declarator] = STATE(125),
    [sym_variable_declarator_id] = STATE(126),
    [sym_identifier] = ACTIONS(259),
    [sym_comment] = ACTIONS(54),
  },
  [57] = {
    [sym_dims] = STATE(129),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_throws] = ACTIONS(261),
    [sym_comment] = ACTIONS(54),
  },
  [58] = {
    [anon_sym_RPAREN] = ACTIONS(267),
    [sym_comment] = ACTIONS(54),
  },
  [59] = {
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_static] = ACTIONS(98),
    [anon_sym_public] = ACTIONS(98),
    [anon_sym_protected] = ACTIONS(98),
    [anon_sym_private] = ACTIONS(98),
    [anon_sym_abstract] = ACTIONS(98),
    [anon_sym_final] = ACTIONS(98),
    [anon_sym_strictfp] = ACTIONS(98),
    [anon_sym_default] = ACTIONS(98),
    [anon_sym_synchronized] = ACTIONS(98),
    [anon_sym_native] = ACTIONS(98),
    [anon_sym_this] = ACTIONS(239),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(158),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(54),
  },
  [60] = {
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(241),
    [anon_sym_public] = ACTIONS(241),
    [anon_sym_protected] = ACTIONS(241),
    [anon_sym_private] = ACTIONS(241),
    [anon_sym_abstract] = ACTIONS(241),
    [anon_sym_final] = ACTIONS(241),
    [anon_sym_strictfp] = ACTIONS(241),
    [anon_sym_default] = ACTIONS(241),
    [anon_sym_synchronized] = ACTIONS(241),
    [anon_sym_native] = ACTIONS(241),
    [anon_sym_this] = ACTIONS(241),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(163),
    [sym_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(54),
  },
  [61] = {
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_static] = ACTIONS(191),
    [anon_sym_public] = ACTIONS(191),
    [anon_sym_protected] = ACTIONS(191),
    [anon_sym_private] = ACTIONS(191),
    [anon_sym_abstract] = ACTIONS(191),
    [anon_sym_final] = ACTIONS(191),
    [anon_sym_strictfp] = ACTIONS(191),
    [anon_sym_default] = ACTIONS(191),
    [anon_sym_synchronized] = ACTIONS(191),
    [anon_sym_native] = ACTIONS(191),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(189),
    [sym_identifier] = ACTIONS(193),
    [sym_comment] = ACTIONS(54),
  },
  [62] = {
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_throws] = ACTIONS(274),
    [sym_comment] = ACTIONS(54),
  },
  [63] = {
    [aux_sym_formal_parameters_repeat1] = STATE(134),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_throws] = ACTIONS(276),
    [sym_comment] = ACTIONS(54),
  },
  [64] = {
    [aux_sym_formal_parameters_repeat1] = STATE(134),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_throws] = ACTIONS(280),
    [sym_comment] = ACTIONS(54),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_throws] = ACTIONS(280),
    [sym_comment] = ACTIONS(54),
  },
  [66] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(140),
    [sym_marker_annotation] = STATE(140),
    [sym_single_element_annotation] = STATE(140),
    [anon_sym_AT] = ACTIONS(282),
    [anon_sym_this] = ACTIONS(284),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(286),
    [sym_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(54),
  },
  [67] = {
    [sym__annotation] = STATE(142),
    [sym_normal_annotation] = STATE(143),
    [sym_marker_annotation] = STATE(143),
    [sym_single_element_annotation] = STATE(143),
    [sym_modifier] = STATE(144),
    [sym_variable_declarator_id] = STATE(145),
    [aux_sym_class_or_interface_type_repeat1] = STATE(146),
    [anon_sym_AT] = ACTIONS(290),
    [anon_sym_static] = ACTIONS(78),
    [anon_sym_public] = ACTIONS(78),
    [anon_sym_protected] = ACTIONS(78),
    [anon_sym_private] = ACTIONS(78),
    [anon_sym_abstract] = ACTIONS(78),
    [anon_sym_final] = ACTIONS(78),
    [anon_sym_strictfp] = ACTIONS(78),
    [anon_sym_default] = ACTIONS(78),
    [anon_sym_synchronized] = ACTIONS(78),
    [anon_sym_native] = ACTIONS(78),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(286),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [68] = {
    [sym__semicolon] = ACTIONS(294),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_PLUS_EQ] = ACTIONS(294),
    [anon_sym_DASH_EQ] = ACTIONS(294),
    [anon_sym_STAR_EQ] = ACTIONS(294),
    [anon_sym_SLASH_EQ] = ACTIONS(294),
    [anon_sym_AMP_EQ] = ACTIONS(294),
    [anon_sym_PIPE_EQ] = ACTIONS(294),
    [anon_sym_CARET_EQ] = ACTIONS(294),
    [anon_sym_PERCENT_EQ] = ACTIONS(294),
    [anon_sym_LT_LT_EQ] = ACTIONS(294),
    [anon_sym_GT_GT_EQ] = ACTIONS(294),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(294),
    [anon_sym_GT_EQ] = ACTIONS(294),
    [anon_sym_LT_EQ] = ACTIONS(294),
    [anon_sym_BANG_EQ] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(296),
    [anon_sym_GT_GT] = ACTIONS(296),
    [anon_sym_GT_GT_GT] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(294),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(294),
    [sym_comment] = ACTIONS(54),
  },
  [69] = {
    [sym__semicolon] = ACTIONS(298),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_PLUS_EQ] = ACTIONS(298),
    [anon_sym_DASH_EQ] = ACTIONS(298),
    [anon_sym_STAR_EQ] = ACTIONS(298),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [anon_sym_AMP_EQ] = ACTIONS(298),
    [anon_sym_PIPE_EQ] = ACTIONS(298),
    [anon_sym_CARET_EQ] = ACTIONS(298),
    [anon_sym_PERCENT_EQ] = ACTIONS(298),
    [anon_sym_LT_LT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(300),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SLASH] = ACTIONS(300),
    [anon_sym_AMP] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(300),
    [anon_sym_CARET] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_GT_GT_GT] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_QMARK] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(298),
    [anon_sym_PLUS_PLUS] = ACTIONS(298),
    [anon_sym_DASH_DASH] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(298),
    [sym_comment] = ACTIONS(54),
  },
  [70] = {
    [sym_identifier] = ACTIONS(302),
    [sym_comment] = ACTIONS(54),
  },
  [71] = {
    [sym__semicolon] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_open] = ACTIONS(304),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_with] = ACTIONS(304),
    [anon_sym_static] = ACTIONS(304),
    [anon_sym_package] = ACTIONS(304),
    [anon_sym_class] = ACTIONS(304),
    [anon_sym_public] = ACTIONS(304),
    [anon_sym_protected] = ACTIONS(304),
    [anon_sym_private] = ACTIONS(304),
    [anon_sym_abstract] = ACTIONS(304),
    [anon_sym_final] = ACTIONS(304),
    [anon_sym_strictfp] = ACTIONS(304),
    [anon_sym_default] = ACTIONS(304),
    [anon_sym_synchronized] = ACTIONS(304),
    [anon_sym_native] = ACTIONS(304),
    [anon_sym_void] = ACTIONS(304),
    [anon_sym_interface] = ACTIONS(304),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(304),
    [sym_comment] = ACTIONS(54),
  },
  [72] = {
    [sym__semicolon] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(308),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_open] = ACTIONS(308),
    [anon_sym_module] = ACTIONS(308),
    [anon_sym_static] = ACTIONS(308),
    [anon_sym_package] = ACTIONS(308),
    [anon_sym_class] = ACTIONS(308),
    [anon_sym_public] = ACTIONS(308),
    [anon_sym_protected] = ACTIONS(308),
    [anon_sym_private] = ACTIONS(308),
    [anon_sym_abstract] = ACTIONS(308),
    [anon_sym_final] = ACTIONS(308),
    [anon_sym_strictfp] = ACTIONS(308),
    [anon_sym_default] = ACTIONS(308),
    [anon_sym_synchronized] = ACTIONS(308),
    [anon_sym_native] = ACTIONS(308),
    [anon_sym_void] = ACTIONS(308),
    [anon_sym_interface] = ACTIONS(308),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(308),
    [sym_comment] = ACTIONS(54),
  },
  [73] = {
    [sym_module_identifier] = STATE(150),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [74] = {
    [aux_sym_module_identifier_repeat1] = STATE(152),
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(316),
    [sym_comment] = ACTIONS(54),
  },
  [75] = {
    [anon_sym_LBRACE] = ACTIONS(318),
    [sym_comment] = ACTIONS(54),
  },
  [76] = {
    [aux_sym_module_identifier_repeat1] = STATE(155),
    [sym__semicolon] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(316),
    [sym_comment] = ACTIONS(54),
  },
  [77] = {
    [sym_package_or_type_name] = STATE(156),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(54),
  },
  [78] = {
    [sym__semicolon] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(326),
    [sym_comment] = ACTIONS(54),
  },
  [79] = {
    [sym_type_parameters] = STATE(162),
    [sym_superclass] = STATE(163),
    [sym_super_interfaces] = STATE(164),
    [sym_class_body] = STATE(165),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [80] = {
    [sym_type_parameters] = STATE(168),
    [sym_extends_interfaces] = STATE(169),
    [sym_interface_body] = STATE(170),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [sym_decimal_integer_literal] = ACTIONS(340),
    [sym_hex_integer_literal] = ACTIONS(340),
    [sym_octal_integer_literal] = ACTIONS(340),
    [sym_binary_integer_literal] = ACTIONS(340),
    [sym_decimal_floating_point_literal] = ACTIONS(340),
    [sym_hex_floating_point_literal] = ACTIONS(342),
    [anon_sym_true] = ACTIONS(340),
    [anon_sym_false] = ACTIONS(340),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [sym_string_literal] = ACTIONS(338),
    [sym_null_literal] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(338),
    [anon_sym_TILDE] = ACTIONS(338),
    [anon_sym_PLUS_PLUS] = ACTIONS(338),
    [anon_sym_DASH_DASH] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_AT] = ACTIONS(338),
    [anon_sym_open] = ACTIONS(340),
    [anon_sym_module] = ACTIONS(340),
    [anon_sym_static] = ACTIONS(340),
    [anon_sym_package] = ACTIONS(340),
    [anon_sym_import] = ACTIONS(340),
    [anon_sym_class] = ACTIONS(340),
    [anon_sym_public] = ACTIONS(340),
    [anon_sym_protected] = ACTIONS(340),
    [anon_sym_private] = ACTIONS(340),
    [anon_sym_abstract] = ACTIONS(340),
    [anon_sym_final] = ACTIONS(340),
    [anon_sym_strictfp] = ACTIONS(340),
    [anon_sym_default] = ACTIONS(340),
    [anon_sym_synchronized] = ACTIONS(340),
    [anon_sym_native] = ACTIONS(340),
    [anon_sym_void] = ACTIONS(340),
    [anon_sym_interface] = ACTIONS(340),
    [sym_identifier] = ACTIONS(342),
    [sym_comment] = ACTIONS(54),
  },
  [82] = {
    [sym__expression] = STATE(171),
    [sym_assignment_expression] = STATE(25),
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
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [83] = {
    [sym__expression] = STATE(172),
    [sym_assignment_expression] = STATE(25),
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
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [84] = {
    [sym__expression] = STATE(173),
    [sym_assignment_expression] = STATE(25),
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
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [85] = {
    [sym__expression] = STATE(174),
    [sym_assignment_expression] = STATE(25),
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
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [86] = {
    [sym__expression] = STATE(175),
    [sym_assignment_expression] = STATE(25),
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
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [87] = {
    [sym__expression] = STATE(176),
    [sym_assignment_expression] = STATE(25),
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
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [88] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [89] = {
    [sym__semicolon] = ACTIONS(298),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_PLUS_EQ] = ACTIONS(298),
    [anon_sym_DASH_EQ] = ACTIONS(298),
    [anon_sym_STAR_EQ] = ACTIONS(298),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [anon_sym_AMP_EQ] = ACTIONS(298),
    [anon_sym_PIPE_EQ] = ACTIONS(298),
    [anon_sym_CARET_EQ] = ACTIONS(298),
    [anon_sym_PERCENT_EQ] = ACTIONS(298),
    [anon_sym_LT_LT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(300),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SLASH] = ACTIONS(300),
    [anon_sym_AMP] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(300),
    [anon_sym_CARET] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_GT_GT_GT] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_QMARK] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(298),
    [anon_sym_PLUS_PLUS] = ACTIONS(298),
    [anon_sym_DASH_DASH] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(298),
    [sym_comment] = ACTIONS(54),
  },
  [90] = {
    [sym__expression] = STATE(182),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_lambda_body] = STATE(183),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [91] = {
    [sym_package_or_type_name] = STATE(72),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(54),
  },
  [92] = {
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_void] = ACTIONS(161),
    [sym_comment] = ACTIONS(54),
  },
  [93] = {
    [sym_method_declarator] = STATE(184),
    [sym_identifier] = ACTIONS(209),
    [sym_comment] = ACTIONS(54),
  },
  [94] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_result] = STATE(185),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_void] = ACTIONS(197),
    [sym_comment] = ACTIONS(54),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym_decimal_integer_literal] = ACTIONS(354),
    [sym_hex_integer_literal] = ACTIONS(354),
    [sym_octal_integer_literal] = ACTIONS(354),
    [sym_binary_integer_literal] = ACTIONS(354),
    [sym_decimal_floating_point_literal] = ACTIONS(354),
    [sym_hex_floating_point_literal] = ACTIONS(356),
    [anon_sym_true] = ACTIONS(354),
    [anon_sym_false] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [sym_string_literal] = ACTIONS(352),
    [sym_null_literal] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_BANG] = ACTIONS(352),
    [anon_sym_TILDE] = ACTIONS(352),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_AT] = ACTIONS(352),
    [anon_sym_open] = ACTIONS(354),
    [anon_sym_module] = ACTIONS(354),
    [anon_sym_static] = ACTIONS(354),
    [anon_sym_package] = ACTIONS(354),
    [anon_sym_import] = ACTIONS(354),
    [anon_sym_class] = ACTIONS(354),
    [anon_sym_public] = ACTIONS(354),
    [anon_sym_protected] = ACTIONS(354),
    [anon_sym_private] = ACTIONS(354),
    [anon_sym_abstract] = ACTIONS(354),
    [anon_sym_final] = ACTIONS(354),
    [anon_sym_strictfp] = ACTIONS(354),
    [anon_sym_default] = ACTIONS(354),
    [anon_sym_synchronized] = ACTIONS(354),
    [anon_sym_native] = ACTIONS(354),
    [anon_sym_void] = ACTIONS(354),
    [anon_sym_interface] = ACTIONS(354),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(54),
  },
  [96] = {
    [sym_statement] = STATE(191),
    [sym_if_then_statement] = STATE(192),
    [sym__annotation] = STATE(189),
    [sym_normal_annotation] = STATE(193),
    [sym_marker_annotation] = STATE(193),
    [sym_single_element_annotation] = STATE(193),
    [sym_class_declaration] = STATE(191),
    [sym_normal_class_declaration] = STATE(194),
    [sym_modifier] = STATE(195),
    [sym_block_statements] = STATE(196),
    [sym_block_statement] = STATE(197),
    [sym_local_variable_declaration_statement] = STATE(191),
    [sym_local_variable_declaration] = STATE(198),
    [aux_sym_normal_class_declaration_repeat1] = STATE(199),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(360),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_static] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(366),
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
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_decimal_integer_literal] = ACTIONS(370),
    [sym_hex_integer_literal] = ACTIONS(370),
    [sym_octal_integer_literal] = ACTIONS(370),
    [sym_binary_integer_literal] = ACTIONS(370),
    [sym_decimal_floating_point_literal] = ACTIONS(370),
    [sym_hex_floating_point_literal] = ACTIONS(372),
    [anon_sym_true] = ACTIONS(370),
    [anon_sym_false] = ACTIONS(370),
    [anon_sym_SQUOTE] = ACTIONS(368),
    [sym_string_literal] = ACTIONS(368),
    [sym_null_literal] = ACTIONS(370),
    [anon_sym_LT] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_BANG] = ACTIONS(368),
    [anon_sym_TILDE] = ACTIONS(368),
    [anon_sym_PLUS_PLUS] = ACTIONS(368),
    [anon_sym_DASH_DASH] = ACTIONS(368),
    [anon_sym_RBRACE] = ACTIONS(368),
    [anon_sym_AT] = ACTIONS(368),
    [anon_sym_open] = ACTIONS(370),
    [anon_sym_module] = ACTIONS(370),
    [anon_sym_static] = ACTIONS(370),
    [anon_sym_package] = ACTIONS(370),
    [anon_sym_import] = ACTIONS(370),
    [anon_sym_class] = ACTIONS(370),
    [anon_sym_public] = ACTIONS(370),
    [anon_sym_protected] = ACTIONS(370),
    [anon_sym_private] = ACTIONS(370),
    [anon_sym_abstract] = ACTIONS(370),
    [anon_sym_final] = ACTIONS(370),
    [anon_sym_strictfp] = ACTIONS(370),
    [anon_sym_default] = ACTIONS(370),
    [anon_sym_synchronized] = ACTIONS(370),
    [anon_sym_native] = ACTIONS(370),
    [anon_sym_void] = ACTIONS(370),
    [anon_sym_interface] = ACTIONS(370),
    [sym_identifier] = ACTIONS(372),
    [sym_comment] = ACTIONS(54),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(374),
    [sym_comment] = ACTIONS(54),
  },
  [99] = {
    [sym_throws] = STATE(202),
    [sym__semicolon] = ACTIONS(376),
    [anon_sym_LBRACE] = ACTIONS(376),
    [anon_sym_throws] = ACTIONS(378),
    [sym_comment] = ACTIONS(54),
  },
  [100] = {
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
  [101] = {
    [anon_sym_module] = ACTIONS(386),
    [sym_comment] = ACTIONS(54),
  },
  [102] = {
    [sym_identifier] = ACTIONS(388),
    [sym_comment] = ACTIONS(54),
  },
  [103] = {
    [anon_sym_LBRACK] = ACTIONS(390),
    [anon_sym_AT] = ACTIONS(390),
    [anon_sym_open] = ACTIONS(390),
    [anon_sym_module] = ACTIONS(390),
    [anon_sym_package] = ACTIONS(390),
    [anon_sym_void] = ACTIONS(390),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
    [sym_comment] = ACTIONS(54),
  },
  [104] = {
    [sym_package_or_type_name] = STATE(72),
    [anon_sym_interface] = ACTIONS(392),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [105] = {
    [sym_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(54),
  },
  [106] = {
    [sym_identifier] = ACTIONS(396),
    [sym_comment] = ACTIONS(54),
  },
  [107] = {
    [anon_sym_LT] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_static] = ACTIONS(400),
    [anon_sym_class] = ACTIONS(400),
    [anon_sym_public] = ACTIONS(400),
    [anon_sym_protected] = ACTIONS(400),
    [anon_sym_private] = ACTIONS(400),
    [anon_sym_abstract] = ACTIONS(400),
    [anon_sym_final] = ACTIONS(400),
    [anon_sym_strictfp] = ACTIONS(400),
    [anon_sym_default] = ACTIONS(400),
    [anon_sym_synchronized] = ACTIONS(400),
    [anon_sym_native] = ACTIONS(400),
    [anon_sym_void] = ACTIONS(400),
    [anon_sym_interface] = ACTIONS(400),
    [sym_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(54),
  },
  [108] = {
    [sym_method_body] = STATE(208),
    [sym_block] = STATE(95),
    [sym__semicolon] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(54),
  },
  [109] = {
    [sym__semicolon] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RBRACE] = ACTIONS(404),
    [anon_sym_DOT] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_COLON_COLON] = ACTIONS(404),
    [sym_comment] = ACTIONS(54),
  },
  [110] = {
    [anon_sym_SQUOTE] = ACTIONS(406),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(406),
    [sym_comment] = ACTIONS(66),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_AT] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_comment] = ACTIONS(54),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_DOT] = ACTIONS(410),
    [anon_sym_AT] = ACTIONS(308),
    [sym_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(54),
  },
  [113] = {
    [sym_class_or_interface_type] = STATE(212),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(213),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(54),
  },
  [114] = {
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(416),
    [sym_comment] = ACTIONS(54),
  },
  [115] = {
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_AT] = ACTIONS(418),
    [anon_sym_extends] = ACTIONS(418),
    [anon_sym_implements] = ACTIONS(418),
    [anon_sym_void] = ACTIONS(418),
    [sym_comment] = ACTIONS(54),
  },
  [116] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_type_parameter] = STATE(214),
    [aux_sym_class_or_interface_type_repeat1] = STATE(51),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(54),
  },
  [117] = {
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_COMMA] = ACTIONS(422),
    [sym_comment] = ACTIONS(54),
  },
  [118] = {
    [sym_type_bound] = STATE(216),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_extends] = ACTIONS(237),
    [sym_comment] = ACTIONS(54),
  },
  [119] = {
    [anon_sym_AT] = ACTIONS(390),
    [sym_identifier] = ACTIONS(424),
    [sym_comment] = ACTIONS(54),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [sym_comment] = ACTIONS(54),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_identifier] = ACTIONS(430),
    [sym_comment] = ACTIONS(54),
  },
  [122] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_static] = ACTIONS(306),
    [anon_sym_public] = ACTIONS(306),
    [anon_sym_protected] = ACTIONS(306),
    [anon_sym_private] = ACTIONS(306),
    [anon_sym_abstract] = ACTIONS(306),
    [anon_sym_final] = ACTIONS(306),
    [anon_sym_strictfp] = ACTIONS(306),
    [anon_sym_default] = ACTIONS(306),
    [anon_sym_synchronized] = ACTIONS(306),
    [anon_sym_native] = ACTIONS(306),
    [anon_sym_this] = ACTIONS(306),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(304),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(436),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_static] = ACTIONS(412),
    [anon_sym_public] = ACTIONS(412),
    [anon_sym_protected] = ACTIONS(412),
    [anon_sym_private] = ACTIONS(412),
    [anon_sym_abstract] = ACTIONS(412),
    [anon_sym_final] = ACTIONS(412),
    [anon_sym_strictfp] = ACTIONS(412),
    [anon_sym_default] = ACTIONS(412),
    [anon_sym_synchronized] = ACTIONS(412),
    [anon_sym_native] = ACTIONS(412),
    [anon_sym_this] = ACTIONS(412),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(308),
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(54),
  },
  [124] = {
    [sym_dims] = STATE(129),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [sym__semicolon] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_throws] = ACTIONS(261),
    [sym_comment] = ACTIONS(54),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_throws] = ACTIONS(440),
    [sym_comment] = ACTIONS(54),
  },
  [126] = {
    [sym__semicolon] = ACTIONS(442),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(442),
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_LBRACE] = ACTIONS(442),
    [anon_sym_throws] = ACTIONS(442),
    [sym_comment] = ACTIONS(54),
  },
  [127] = {
    [anon_sym_this] = ACTIONS(446),
    [sym_comment] = ACTIONS(54),
  },
  [128] = {
    [anon_sym_RBRACK] = ACTIONS(448),
    [sym_comment] = ACTIONS(54),
  },
  [129] = {
    [sym__semicolon] = ACTIONS(450),
    [anon_sym_EQ] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(450),
    [anon_sym_throws] = ACTIONS(450),
    [sym_comment] = ACTIONS(54),
  },
  [130] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [131] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(225),
    [sym__semicolon] = ACTIONS(454),
    [anon_sym_EQ] = ACTIONS(454),
    [anon_sym_GT] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_COMMA] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(454),
    [anon_sym_COLON_COLON] = ACTIONS(454),
    [anon_sym_throws] = ACTIONS(454),
    [sym_comment] = ACTIONS(54),
  },
  [132] = {
    [anon_sym_DASH_GT] = ACTIONS(456),
    [sym_comment] = ACTIONS(54),
  },
  [133] = {
    [sym__annotation] = STATE(142),
    [sym_normal_annotation] = STATE(143),
    [sym_marker_annotation] = STATE(143),
    [sym_single_element_annotation] = STATE(143),
    [sym_modifier] = STATE(61),
    [sym_variable_declarator_id] = STATE(62),
    [sym_formal_parameter] = STATE(226),
    [sym_last_formal_parameter] = STATE(227),
    [aux_sym_class_or_interface_type_repeat1] = STATE(228),
    [aux_sym_normal_class_declaration_repeat1] = STATE(67),
    [anon_sym_AT] = ACTIONS(290),
    [anon_sym_static] = ACTIONS(78),
    [anon_sym_public] = ACTIONS(78),
    [anon_sym_protected] = ACTIONS(78),
    [anon_sym_private] = ACTIONS(78),
    [anon_sym_abstract] = ACTIONS(78),
    [anon_sym_final] = ACTIONS(78),
    [anon_sym_strictfp] = ACTIONS(78),
    [anon_sym_default] = ACTIONS(78),
    [anon_sym_synchronized] = ACTIONS(78),
    [anon_sym_native] = ACTIONS(78),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(82),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [134] = {
    [anon_sym_COMMA] = ACTIONS(458),
    [sym_comment] = ACTIONS(54),
  },
  [135] = {
    [sym_package_or_type_name] = STATE(231),
    [sym_identifier] = ACTIONS(460),
    [sym_comment] = ACTIONS(54),
  },
  [136] = {
    [anon_sym_RPAREN] = ACTIONS(462),
    [anon_sym_COMMA] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(462),
    [anon_sym_throws] = ACTIONS(462),
    [sym_comment] = ACTIONS(54),
  },
  [137] = {
    [sym_variable_declarator] = STATE(232),
    [sym_variable_declarator_id] = STATE(126),
    [sym_identifier] = ACTIONS(259),
    [sym_comment] = ACTIONS(54),
  },
  [138] = {
    [anon_sym_DOT] = ACTIONS(464),
    [sym_comment] = ACTIONS(54),
  },
  [139] = {
    [anon_sym_AT] = ACTIONS(390),
    [anon_sym_this] = ACTIONS(424),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(54),
  },
  [140] = {
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_this] = ACTIONS(241),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(163),
    [sym_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(54),
  },
  [141] = {
    [sym_package_or_type_name] = STATE(235),
    [sym_identifier] = ACTIONS(468),
    [sym_comment] = ACTIONS(54),
  },
  [142] = {
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_static] = ACTIONS(98),
    [anon_sym_public] = ACTIONS(98),
    [anon_sym_protected] = ACTIONS(98),
    [anon_sym_private] = ACTIONS(98),
    [anon_sym_abstract] = ACTIONS(98),
    [anon_sym_final] = ACTIONS(98),
    [anon_sym_strictfp] = ACTIONS(98),
    [anon_sym_default] = ACTIONS(98),
    [anon_sym_synchronized] = ACTIONS(98),
    [anon_sym_native] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(158),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(54),
  },
  [143] = {
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(241),
    [anon_sym_public] = ACTIONS(241),
    [anon_sym_protected] = ACTIONS(241),
    [anon_sym_private] = ACTIONS(241),
    [anon_sym_abstract] = ACTIONS(241),
    [anon_sym_final] = ACTIONS(241),
    [anon_sym_strictfp] = ACTIONS(241),
    [anon_sym_default] = ACTIONS(241),
    [anon_sym_synchronized] = ACTIONS(241),
    [anon_sym_native] = ACTIONS(241),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(163),
    [sym_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(54),
  },
  [144] = {
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_static] = ACTIONS(400),
    [anon_sym_public] = ACTIONS(400),
    [anon_sym_protected] = ACTIONS(400),
    [anon_sym_private] = ACTIONS(400),
    [anon_sym_abstract] = ACTIONS(400),
    [anon_sym_final] = ACTIONS(400),
    [anon_sym_strictfp] = ACTIONS(400),
    [anon_sym_default] = ACTIONS(400),
    [anon_sym_synchronized] = ACTIONS(400),
    [anon_sym_native] = ACTIONS(400),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(398),
    [sym_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(54),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_throws] = ACTIONS(470),
    [sym_comment] = ACTIONS(54),
  },
  [146] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(472),
    [sym_comment] = ACTIONS(54),
  },
  [147] = {
    [sym_annotation_type_body] = STATE(238),
    [anon_sym_LBRACE] = ACTIONS(474),
    [sym_comment] = ACTIONS(54),
  },
  [148] = {
    [sym__literal] = STATE(241),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(242),
    [sym_element_value_pair] = STATE(243),
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
    [anon_sym_RPAREN] = ACTIONS(476),
    [sym_identifier] = ACTIONS(478),
    [sym_comment] = ACTIONS(54),
  },
  [149] = {
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(54),
  },
  [150] = {
    [anon_sym_LBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(54),
  },
  [151] = {
    [sym_identifier] = ACTIONS(484),
    [sym_comment] = ACTIONS(54),
  },
  [152] = {
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(488),
    [sym_comment] = ACTIONS(54),
  },
  [153] = {
    [sym_module_directive] = STATE(253),
    [aux_sym_module_declaration_repeat1] = STATE(254),
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [sym_decimal_integer_literal] = ACTIONS(502),
    [sym_hex_integer_literal] = ACTIONS(502),
    [sym_octal_integer_literal] = ACTIONS(502),
    [sym_binary_integer_literal] = ACTIONS(502),
    [sym_decimal_floating_point_literal] = ACTIONS(502),
    [sym_hex_floating_point_literal] = ACTIONS(504),
    [anon_sym_true] = ACTIONS(502),
    [anon_sym_false] = ACTIONS(502),
    [anon_sym_SQUOTE] = ACTIONS(500),
    [sym_string_literal] = ACTIONS(500),
    [sym_null_literal] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(500),
    [anon_sym_BANG] = ACTIONS(500),
    [anon_sym_TILDE] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(500),
    [anon_sym_DASH_DASH] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_AT] = ACTIONS(500),
    [anon_sym_open] = ACTIONS(502),
    [anon_sym_module] = ACTIONS(502),
    [anon_sym_static] = ACTIONS(502),
    [anon_sym_package] = ACTIONS(502),
    [anon_sym_import] = ACTIONS(502),
    [anon_sym_class] = ACTIONS(502),
    [anon_sym_public] = ACTIONS(502),
    [anon_sym_protected] = ACTIONS(502),
    [anon_sym_private] = ACTIONS(502),
    [anon_sym_abstract] = ACTIONS(502),
    [anon_sym_final] = ACTIONS(502),
    [anon_sym_strictfp] = ACTIONS(502),
    [anon_sym_default] = ACTIONS(502),
    [anon_sym_synchronized] = ACTIONS(502),
    [anon_sym_native] = ACTIONS(502),
    [anon_sym_void] = ACTIONS(502),
    [anon_sym_interface] = ACTIONS(502),
    [sym_identifier] = ACTIONS(504),
    [sym_comment] = ACTIONS(54),
  },
  [155] = {
    [sym__semicolon] = ACTIONS(506),
    [anon_sym_DOT] = ACTIONS(488),
    [sym_comment] = ACTIONS(54),
  },
  [156] = {
    [anon_sym_DOT] = ACTIONS(508),
    [sym_comment] = ACTIONS(54),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(510),
    [sym_decimal_integer_literal] = ACTIONS(512),
    [sym_hex_integer_literal] = ACTIONS(512),
    [sym_octal_integer_literal] = ACTIONS(512),
    [sym_binary_integer_literal] = ACTIONS(512),
    [sym_decimal_floating_point_literal] = ACTIONS(512),
    [sym_hex_floating_point_literal] = ACTIONS(514),
    [anon_sym_true] = ACTIONS(512),
    [anon_sym_false] = ACTIONS(512),
    [anon_sym_SQUOTE] = ACTIONS(510),
    [sym_string_literal] = ACTIONS(510),
    [sym_null_literal] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_BANG] = ACTIONS(510),
    [anon_sym_TILDE] = ACTIONS(510),
    [anon_sym_PLUS_PLUS] = ACTIONS(510),
    [anon_sym_DASH_DASH] = ACTIONS(510),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_AT] = ACTIONS(510),
    [anon_sym_open] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(512),
    [anon_sym_static] = ACTIONS(512),
    [anon_sym_package] = ACTIONS(512),
    [anon_sym_import] = ACTIONS(512),
    [anon_sym_class] = ACTIONS(512),
    [anon_sym_public] = ACTIONS(512),
    [anon_sym_protected] = ACTIONS(512),
    [anon_sym_private] = ACTIONS(512),
    [anon_sym_abstract] = ACTIONS(512),
    [anon_sym_final] = ACTIONS(512),
    [anon_sym_strictfp] = ACTIONS(512),
    [anon_sym_default] = ACTIONS(512),
    [anon_sym_synchronized] = ACTIONS(512),
    [anon_sym_native] = ACTIONS(512),
    [anon_sym_void] = ACTIONS(512),
    [anon_sym_interface] = ACTIONS(512),
    [sym_identifier] = ACTIONS(514),
    [sym_comment] = ACTIONS(54),
  },
  [158] = {
    [anon_sym_STAR] = ACTIONS(516),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(54),
  },
  [159] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(258),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(268),
    [sym_class_body_declaration] = STATE(269),
    [sym_constructor_declaration] = STATE(270),
    [sym_constructor_declarator] = STATE(271),
    [sym_class_member_declaration] = STATE(270),
    [sym_interface_declaration] = STATE(258),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_block] = STATE(270),
    [sym_method_declaration] = STATE(258),
    [aux_sym_normal_class_declaration_repeat1] = STATE(274),
    [aux_sym_class_body_repeat1] = STATE(275),
    [sym__semicolon] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [160] = {
    [sym_class_or_interface_type] = STATE(276),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(213),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(54),
  },
  [161] = {
    [sym_class_or_interface_type] = STATE(277),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_interface_type_list] = STATE(278),
    [aux_sym_class_or_interface_type_repeat1] = STATE(213),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(54),
  },
  [162] = {
    [sym_superclass] = STATE(279),
    [sym_super_interfaces] = STATE(280),
    [sym_class_body] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [163] = {
    [sym_super_interfaces] = STATE(280),
    [sym_class_body] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [164] = {
    [sym_class_body] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(328),
    [sym_comment] = ACTIONS(54),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [sym_decimal_integer_literal] = ACTIONS(536),
    [sym_hex_integer_literal] = ACTIONS(536),
    [sym_octal_integer_literal] = ACTIONS(536),
    [sym_binary_integer_literal] = ACTIONS(536),
    [sym_decimal_floating_point_literal] = ACTIONS(536),
    [sym_hex_floating_point_literal] = ACTIONS(538),
    [anon_sym_true] = ACTIONS(536),
    [anon_sym_false] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(534),
    [sym_string_literal] = ACTIONS(534),
    [sym_null_literal] = ACTIONS(536),
    [anon_sym_LT] = ACTIONS(534),
    [anon_sym_LPAREN] = ACTIONS(534),
    [anon_sym_BANG] = ACTIONS(534),
    [anon_sym_TILDE] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(534),
    [anon_sym_DASH_DASH] = ACTIONS(534),
    [anon_sym_RBRACE] = ACTIONS(534),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_open] = ACTIONS(536),
    [anon_sym_module] = ACTIONS(536),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_package] = ACTIONS(536),
    [anon_sym_import] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(536),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(536),
    [anon_sym_interface] = ACTIONS(536),
    [sym_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(54),
  },
  [166] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(282),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(282),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_interface_member_declaration] = STATE(284),
    [sym_constant_declaration] = STATE(282),
    [sym_variable_declarator_list] = STATE(285),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(282),
    [aux_sym_normal_class_declaration_repeat1] = STATE(287),
    [aux_sym_interface_body_repeat1] = STATE(288),
    [sym__semicolon] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [167] = {
    [sym_class_or_interface_type] = STATE(277),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_interface_type_list] = STATE(289),
    [aux_sym_class_or_interface_type_repeat1] = STATE(213),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(54),
  },
  [168] = {
    [sym_extends_interfaces] = STATE(290),
    [sym_interface_body] = STATE(291),
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [169] = {
    [sym_interface_body] = STATE(291),
    [anon_sym_LBRACE] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [170] = {
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
  [171] = {
    [sym__semicolon] = ACTIONS(550),
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_PLUS_EQ] = ACTIONS(550),
    [anon_sym_DASH_EQ] = ACTIONS(550),
    [anon_sym_STAR_EQ] = ACTIONS(550),
    [anon_sym_SLASH_EQ] = ACTIONS(550),
    [anon_sym_AMP_EQ] = ACTIONS(550),
    [anon_sym_PIPE_EQ] = ACTIONS(550),
    [anon_sym_CARET_EQ] = ACTIONS(550),
    [anon_sym_PERCENT_EQ] = ACTIONS(550),
    [anon_sym_LT_LT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_PIPE_PIPE] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(138),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [172] = {
    [sym__semicolon] = ACTIONS(554),
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(554),
    [anon_sym_GT_EQ] = ACTIONS(554),
    [anon_sym_LT_EQ] = ACTIONS(554),
    [anon_sym_BANG_EQ] = ACTIONS(554),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(138),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [173] = {
    [sym__semicolon] = ACTIONS(554),
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(138),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [174] = {
    [sym__semicolon] = ACTIONS(554),
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(138),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [175] = {
    [sym__semicolon] = ACTIONS(554),
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(138),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [176] = {
    [sym__semicolon] = ACTIONS(554),
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(554),
    [anon_sym_GT_EQ] = ACTIONS(554),
    [anon_sym_LT_EQ] = ACTIONS(554),
    [anon_sym_BANG_EQ] = ACTIONS(554),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(556),
    [anon_sym_SLASH] = ACTIONS(556),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(556),
    [anon_sym_LT_LT] = ACTIONS(556),
    [anon_sym_GT_GT] = ACTIONS(556),
    [anon_sym_GT_GT_GT] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(554),
    [anon_sym_RBRACE] = ACTIONS(554),
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [177] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [178] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [179] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_AMP_EQ] = ACTIONS(560),
    [anon_sym_PIPE_EQ] = ACTIONS(560),
    [anon_sym_CARET_EQ] = ACTIONS(560),
    [anon_sym_PERCENT_EQ] = ACTIONS(560),
    [anon_sym_LT_LT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(580),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [180] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [181] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [182] = {
    [sym_block] = STATE(307),
    [anon_sym_EQ] = ACTIONS(582),
    [anon_sym_PLUS_EQ] = ACTIONS(584),
    [anon_sym_DASH_EQ] = ACTIONS(584),
    [anon_sym_STAR_EQ] = ACTIONS(584),
    [anon_sym_SLASH_EQ] = ACTIONS(584),
    [anon_sym_AMP_EQ] = ACTIONS(584),
    [anon_sym_PIPE_EQ] = ACTIONS(584),
    [anon_sym_CARET_EQ] = ACTIONS(584),
    [anon_sym_PERCENT_EQ] = ACTIONS(584),
    [anon_sym_LT_LT_EQ] = ACTIONS(584),
    [anon_sym_GT_GT_EQ] = ACTIONS(584),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(584),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_LT] = ACTIONS(586),
    [anon_sym_EQ_EQ] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(588),
    [anon_sym_BANG_EQ] = ACTIONS(588),
    [anon_sym_AMP_AMP] = ACTIONS(590),
    [anon_sym_PIPE_PIPE] = ACTIONS(592),
    [anon_sym_PLUS] = ACTIONS(594),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym_STAR] = ACTIONS(596),
    [anon_sym_SLASH] = ACTIONS(596),
    [anon_sym_AMP] = ACTIONS(598),
    [anon_sym_PIPE] = ACTIONS(600),
    [anon_sym_CARET] = ACTIONS(600),
    [anon_sym_PERCENT] = ACTIONS(596),
    [anon_sym_LT_LT] = ACTIONS(596),
    [anon_sym_GT_GT] = ACTIONS(596),
    [anon_sym_GT_GT_GT] = ACTIONS(596),
    [anon_sym_QMARK] = ACTIONS(602),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(54),
  },
  [183] = {
    [sym__semicolon] = ACTIONS(604),
    [anon_sym_EQ] = ACTIONS(606),
    [anon_sym_PLUS_EQ] = ACTIONS(604),
    [anon_sym_DASH_EQ] = ACTIONS(604),
    [anon_sym_STAR_EQ] = ACTIONS(604),
    [anon_sym_SLASH_EQ] = ACTIONS(604),
    [anon_sym_AMP_EQ] = ACTIONS(604),
    [anon_sym_PIPE_EQ] = ACTIONS(604),
    [anon_sym_CARET_EQ] = ACTIONS(604),
    [anon_sym_PERCENT_EQ] = ACTIONS(604),
    [anon_sym_LT_LT_EQ] = ACTIONS(604),
    [anon_sym_GT_GT_EQ] = ACTIONS(604),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(604),
    [anon_sym_GT] = ACTIONS(606),
    [anon_sym_LT] = ACTIONS(606),
    [anon_sym_EQ_EQ] = ACTIONS(604),
    [anon_sym_GT_EQ] = ACTIONS(604),
    [anon_sym_LT_EQ] = ACTIONS(604),
    [anon_sym_BANG_EQ] = ACTIONS(604),
    [anon_sym_AMP_AMP] = ACTIONS(604),
    [anon_sym_PIPE_PIPE] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [anon_sym_STAR] = ACTIONS(606),
    [anon_sym_SLASH] = ACTIONS(606),
    [anon_sym_AMP] = ACTIONS(606),
    [anon_sym_PIPE] = ACTIONS(606),
    [anon_sym_CARET] = ACTIONS(606),
    [anon_sym_PERCENT] = ACTIONS(606),
    [anon_sym_LT_LT] = ACTIONS(606),
    [anon_sym_GT_GT] = ACTIONS(606),
    [anon_sym_GT_GT_GT] = ACTIONS(606),
    [anon_sym_RPAREN] = ACTIONS(604),
    [anon_sym_COMMA] = ACTIONS(604),
    [anon_sym_QMARK] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(604),
    [anon_sym_PLUS_PLUS] = ACTIONS(604),
    [anon_sym_DASH_DASH] = ACTIONS(604),
    [anon_sym_LBRACE] = ACTIONS(604),
    [anon_sym_RBRACE] = ACTIONS(604),
    [anon_sym_RBRACK] = ACTIONS(604),
    [sym_comment] = ACTIONS(54),
  },
  [184] = {
    [sym_throws] = STATE(308),
    [sym__semicolon] = ACTIONS(608),
    [anon_sym_LBRACE] = ACTIONS(608),
    [anon_sym_throws] = ACTIONS(378),
    [sym_comment] = ACTIONS(54),
  },
  [185] = {
    [sym_method_declarator] = STATE(309),
    [sym_identifier] = ACTIONS(209),
    [sym_comment] = ACTIONS(54),
  },
  [186] = {
    [anon_sym_LPAREN] = ACTIONS(610),
    [sym_comment] = ACTIONS(54),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(612),
    [sym__semicolon] = ACTIONS(612),
    [sym_decimal_integer_literal] = ACTIONS(614),
    [sym_hex_integer_literal] = ACTIONS(614),
    [sym_octal_integer_literal] = ACTIONS(614),
    [sym_binary_integer_literal] = ACTIONS(614),
    [sym_decimal_floating_point_literal] = ACTIONS(614),
    [sym_hex_floating_point_literal] = ACTIONS(616),
    [anon_sym_true] = ACTIONS(614),
    [anon_sym_false] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(612),
    [sym_string_literal] = ACTIONS(612),
    [sym_null_literal] = ACTIONS(614),
    [anon_sym_EQ] = ACTIONS(614),
    [anon_sym_PLUS_EQ] = ACTIONS(612),
    [anon_sym_DASH_EQ] = ACTIONS(612),
    [anon_sym_STAR_EQ] = ACTIONS(612),
    [anon_sym_SLASH_EQ] = ACTIONS(612),
    [anon_sym_AMP_EQ] = ACTIONS(612),
    [anon_sym_PIPE_EQ] = ACTIONS(612),
    [anon_sym_CARET_EQ] = ACTIONS(612),
    [anon_sym_PERCENT_EQ] = ACTIONS(612),
    [anon_sym_LT_LT_EQ] = ACTIONS(612),
    [anon_sym_GT_GT_EQ] = ACTIONS(612),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(612),
    [anon_sym_GT] = ACTIONS(614),
    [anon_sym_LT] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(612),
    [anon_sym_GT_EQ] = ACTIONS(612),
    [anon_sym_LT_EQ] = ACTIONS(612),
    [anon_sym_BANG_EQ] = ACTIONS(612),
    [anon_sym_AMP_AMP] = ACTIONS(612),
    [anon_sym_PIPE_PIPE] = ACTIONS(612),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_AMP] = ACTIONS(614),
    [anon_sym_PIPE] = ACTIONS(614),
    [anon_sym_CARET] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(614),
    [anon_sym_LT_LT] = ACTIONS(614),
    [anon_sym_GT_GT] = ACTIONS(614),
    [anon_sym_GT_GT_GT] = ACTIONS(614),
    [anon_sym_LPAREN] = ACTIONS(612),
    [anon_sym_RPAREN] = ACTIONS(612),
    [anon_sym_COMMA] = ACTIONS(612),
    [anon_sym_QMARK] = ACTIONS(612),
    [anon_sym_COLON] = ACTIONS(612),
    [anon_sym_BANG] = ACTIONS(614),
    [anon_sym_TILDE] = ACTIONS(612),
    [anon_sym_PLUS_PLUS] = ACTIONS(612),
    [anon_sym_DASH_DASH] = ACTIONS(612),
    [anon_sym_LBRACE] = ACTIONS(612),
    [anon_sym_RBRACE] = ACTIONS(612),
    [anon_sym_RBRACK] = ACTIONS(612),
    [anon_sym_AT] = ACTIONS(612),
    [anon_sym_open] = ACTIONS(614),
    [anon_sym_module] = ACTIONS(614),
    [anon_sym_static] = ACTIONS(614),
    [anon_sym_package] = ACTIONS(614),
    [anon_sym_import] = ACTIONS(614),
    [anon_sym_class] = ACTIONS(614),
    [anon_sym_public] = ACTIONS(614),
    [anon_sym_protected] = ACTIONS(614),
    [anon_sym_private] = ACTIONS(614),
    [anon_sym_abstract] = ACTIONS(614),
    [anon_sym_final] = ACTIONS(614),
    [anon_sym_strictfp] = ACTIONS(614),
    [anon_sym_default] = ACTIONS(614),
    [anon_sym_synchronized] = ACTIONS(614),
    [anon_sym_native] = ACTIONS(614),
    [anon_sym_void] = ACTIONS(614),
    [anon_sym_interface] = ACTIONS(614),
    [sym_identifier] = ACTIONS(616),
    [sym_comment] = ACTIONS(54),
  },
  [188] = {
    [sym_package_or_type_name] = STATE(312),
    [sym_identifier] = ACTIONS(618),
    [sym_comment] = ACTIONS(54),
  },
  [189] = {
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_static] = ACTIONS(98),
    [anon_sym_class] = ACTIONS(98),
    [anon_sym_public] = ACTIONS(98),
    [anon_sym_protected] = ACTIONS(98),
    [anon_sym_private] = ACTIONS(98),
    [anon_sym_abstract] = ACTIONS(98),
    [anon_sym_final] = ACTIONS(98),
    [anon_sym_strictfp] = ACTIONS(98),
    [anon_sym_default] = ACTIONS(98),
    [anon_sym_synchronized] = ACTIONS(98),
    [anon_sym_native] = ACTIONS(98),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(54),
  },
  [190] = {
    [sym_identifier] = ACTIONS(620),
    [sym_comment] = ACTIONS(54),
  },
  [191] = {
    [anon_sym_if] = ACTIONS(622),
    [anon_sym_RBRACE] = ACTIONS(622),
    [anon_sym_AT] = ACTIONS(622),
    [anon_sym_static] = ACTIONS(622),
    [anon_sym_class] = ACTIONS(622),
    [anon_sym_public] = ACTIONS(622),
    [anon_sym_protected] = ACTIONS(622),
    [anon_sym_private] = ACTIONS(622),
    [anon_sym_abstract] = ACTIONS(622),
    [anon_sym_final] = ACTIONS(622),
    [anon_sym_strictfp] = ACTIONS(622),
    [anon_sym_default] = ACTIONS(622),
    [anon_sym_synchronized] = ACTIONS(622),
    [anon_sym_native] = ACTIONS(622),
    [sym_comment] = ACTIONS(54),
  },
  [192] = {
    [anon_sym_if] = ACTIONS(624),
    [anon_sym_RBRACE] = ACTIONS(624),
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
    [anon_sym_synchronized] = ACTIONS(624),
    [anon_sym_native] = ACTIONS(624),
    [sym_comment] = ACTIONS(54),
  },
  [193] = {
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(241),
    [anon_sym_class] = ACTIONS(241),
    [anon_sym_public] = ACTIONS(241),
    [anon_sym_protected] = ACTIONS(241),
    [anon_sym_private] = ACTIONS(241),
    [anon_sym_abstract] = ACTIONS(241),
    [anon_sym_final] = ACTIONS(241),
    [anon_sym_strictfp] = ACTIONS(241),
    [anon_sym_default] = ACTIONS(241),
    [anon_sym_synchronized] = ACTIONS(241),
    [anon_sym_native] = ACTIONS(241),
    [sym_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(54),
  },
  [194] = {
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_elseif] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_static] = ACTIONS(183),
    [anon_sym_class] = ACTIONS(183),
    [anon_sym_public] = ACTIONS(183),
    [anon_sym_protected] = ACTIONS(183),
    [anon_sym_private] = ACTIONS(183),
    [anon_sym_abstract] = ACTIONS(183),
    [anon_sym_final] = ACTIONS(183),
    [anon_sym_strictfp] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(183),
    [anon_sym_synchronized] = ACTIONS(183),
    [anon_sym_native] = ACTIONS(183),
    [sym_comment] = ACTIONS(54),
  },
  [195] = {
    [sym_variable_declarator_list] = STATE(314),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [anon_sym_AT] = ACTIONS(189),
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
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [196] = {
    [anon_sym_RBRACE] = ACTIONS(626),
    [sym_comment] = ACTIONS(54),
  },
  [197] = {
    [sym_statement] = STATE(191),
    [sym_if_then_statement] = STATE(192),
    [sym__annotation] = STATE(189),
    [sym_normal_annotation] = STATE(193),
    [sym_marker_annotation] = STATE(193),
    [sym_single_element_annotation] = STATE(193),
    [sym_class_declaration] = STATE(191),
    [sym_normal_class_declaration] = STATE(194),
    [sym_modifier] = STATE(195),
    [sym_block_statement] = STATE(316),
    [sym_local_variable_declaration_statement] = STATE(191),
    [sym_local_variable_declaration] = STATE(198),
    [aux_sym_normal_class_declaration_repeat1] = STATE(199),
    [aux_sym_block_statements_repeat1] = STATE(317),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(628),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_static] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(366),
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
  [198] = {
    [sym__semicolon] = ACTIONS(630),
    [sym_comment] = ACTIONS(54),
  },
  [199] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_modifier] = STATE(107),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_static] = ACTIONS(219),
    [anon_sym_class] = ACTIONS(632),
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
  [200] = {
    [sym__annotation] = STATE(59),
    [sym_normal_annotation] = STATE(60),
    [sym_marker_annotation] = STATE(60),
    [sym_single_element_annotation] = STATE(60),
    [sym_modifier] = STATE(61),
    [sym_variable_declarator_id] = STATE(62),
    [sym__formal_parameter_list] = STATE(321),
    [sym_formal_parameter] = STATE(63),
    [sym_receiver_parameter] = STATE(64),
    [sym_last_formal_parameter] = STATE(65),
    [aux_sym_class_or_interface_type_repeat1] = STATE(66),
    [aux_sym_normal_class_declaration_repeat1] = STATE(67),
    [anon_sym_RPAREN] = ACTIONS(634),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_static] = ACTIONS(78),
    [anon_sym_public] = ACTIONS(78),
    [anon_sym_protected] = ACTIONS(78),
    [anon_sym_private] = ACTIONS(78),
    [anon_sym_abstract] = ACTIONS(78),
    [anon_sym_final] = ACTIONS(78),
    [anon_sym_strictfp] = ACTIONS(78),
    [anon_sym_default] = ACTIONS(78),
    [anon_sym_synchronized] = ACTIONS(78),
    [anon_sym_native] = ACTIONS(78),
    [anon_sym_this] = ACTIONS(80),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(82),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(54),
  },
  [201] = {
    [sym_class_or_interface_type] = STATE(323),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_exception_type_list] = STATE(324),
    [sym_exception_type] = STATE(325),
    [aux_sym_class_or_interface_type_repeat1] = STATE(326),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(636),
    [sym_comment] = ACTIONS(54),
  },
  [202] = {
    [sym__semicolon] = ACTIONS(608),
    [anon_sym_LBRACE] = ACTIONS(608),
    [sym_comment] = ACTIONS(54),
  },
  [203] = {
    [sym_module_identifier] = STATE(327),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [204] = {
    [aux_sym_module_identifier_repeat1] = STATE(328),
    [sym__semicolon] = ACTIONS(506),
    [anon_sym_DOT] = ACTIONS(316),
    [sym_comment] = ACTIONS(54),
  },
  [205] = {
    [sym_identifier] = ACTIONS(638),
    [sym_comment] = ACTIONS(54),
  },
  [206] = {
    [sym_type_parameters] = STATE(330),
    [sym_superclass] = STATE(279),
    [sym_super_interfaces] = STATE(280),
    [sym_class_body] = STATE(281),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [207] = {
    [sym_type_parameters] = STATE(331),
    [sym_extends_interfaces] = STATE(290),
    [sym_interface_body] = STATE(291),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(640),
    [sym_decimal_integer_literal] = ACTIONS(642),
    [sym_hex_integer_literal] = ACTIONS(642),
    [sym_octal_integer_literal] = ACTIONS(642),
    [sym_binary_integer_literal] = ACTIONS(642),
    [sym_decimal_floating_point_literal] = ACTIONS(642),
    [sym_hex_floating_point_literal] = ACTIONS(644),
    [anon_sym_true] = ACTIONS(642),
    [anon_sym_false] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(640),
    [sym_string_literal] = ACTIONS(640),
    [sym_null_literal] = ACTIONS(642),
    [anon_sym_LT] = ACTIONS(640),
    [anon_sym_LPAREN] = ACTIONS(640),
    [anon_sym_BANG] = ACTIONS(640),
    [anon_sym_TILDE] = ACTIONS(640),
    [anon_sym_PLUS_PLUS] = ACTIONS(640),
    [anon_sym_DASH_DASH] = ACTIONS(640),
    [anon_sym_RBRACE] = ACTIONS(640),
    [anon_sym_AT] = ACTIONS(640),
    [anon_sym_open] = ACTIONS(642),
    [anon_sym_module] = ACTIONS(642),
    [anon_sym_static] = ACTIONS(642),
    [anon_sym_package] = ACTIONS(642),
    [anon_sym_import] = ACTIONS(642),
    [anon_sym_class] = ACTIONS(642),
    [anon_sym_public] = ACTIONS(642),
    [anon_sym_protected] = ACTIONS(642),
    [anon_sym_private] = ACTIONS(642),
    [anon_sym_abstract] = ACTIONS(642),
    [anon_sym_final] = ACTIONS(642),
    [anon_sym_strictfp] = ACTIONS(642),
    [anon_sym_default] = ACTIONS(642),
    [anon_sym_synchronized] = ACTIONS(642),
    [anon_sym_native] = ACTIONS(642),
    [anon_sym_void] = ACTIONS(642),
    [anon_sym_interface] = ACTIONS(642),
    [sym_identifier] = ACTIONS(644),
    [sym_comment] = ACTIONS(54),
  },
  [209] = {
    [sym__literal] = STATE(334),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(335),
    [sym_element_value_pair] = STATE(243),
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
    [anon_sym_RPAREN] = ACTIONS(646),
    [sym_identifier] = ACTIONS(648),
    [sym_comment] = ACTIONS(54),
  },
  [210] = {
    [sym_identifier] = ACTIONS(650),
    [sym_comment] = ACTIONS(54),
  },
  [211] = {
    [sym_type_arguments] = STATE(339),
    [aux_sym_class_or_interface_type_repeat2] = STATE(340),
    [anon_sym_GT] = ACTIONS(652),
    [anon_sym_LT] = ACTIONS(654),
    [anon_sym_AMP] = ACTIONS(652),
    [anon_sym_COMMA] = ACTIONS(652),
    [anon_sym_LBRACE] = ACTIONS(652),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(652),
    [anon_sym_AT] = ACTIONS(652),
    [anon_sym_implements] = ACTIONS(652),
    [sym_comment] = ACTIONS(54),
  },
  [212] = {
    [aux_sym_type_bound_repeat1] = STATE(342),
    [anon_sym_GT] = ACTIONS(658),
    [anon_sym_AMP] = ACTIONS(660),
    [anon_sym_COMMA] = ACTIONS(658),
    [sym_comment] = ACTIONS(54),
  },
  [213] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(662),
    [sym_comment] = ACTIONS(54),
  },
  [214] = {
    [anon_sym_GT] = ACTIONS(664),
    [anon_sym_COMMA] = ACTIONS(664),
    [sym_comment] = ACTIONS(54),
  },
  [215] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_type_parameter] = STATE(344),
    [aux_sym_class_or_interface_type_repeat1] = STATE(51),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(54),
  },
  [216] = {
    [anon_sym_GT] = ACTIONS(666),
    [anon_sym_COMMA] = ACTIONS(666),
    [sym_comment] = ACTIONS(54),
  },
  [217] = {
    [anon_sym_RPAREN] = ACTIONS(668),
    [sym_identifier] = ACTIONS(670),
    [sym_comment] = ACTIONS(54),
  },
  [218] = {
    [anon_sym_COMMA] = ACTIONS(672),
    [sym_comment] = ACTIONS(54),
  },
  [219] = {
    [sym__literal] = STATE(348),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(349),
    [sym_element_value_pair] = STATE(243),
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
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_identifier] = ACTIONS(676),
    [sym_comment] = ACTIONS(54),
  },
  [220] = {
    [sym_identifier] = ACTIONS(678),
    [sym_comment] = ACTIONS(54),
  },
  [221] = {
    [sym__semicolon] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_COMMA] = ACTIONS(680),
    [anon_sym_LBRACE] = ACTIONS(680),
    [anon_sym_throws] = ACTIONS(680),
    [sym_comment] = ACTIONS(54),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(682),
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_LBRACE] = ACTIONS(682),
    [anon_sym_throws] = ACTIONS(682),
    [sym_comment] = ACTIONS(54),
  },
  [223] = {
    [sym__semicolon] = ACTIONS(684),
    [anon_sym_EQ] = ACTIONS(684),
    [anon_sym_GT] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_COMMA] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(684),
    [anon_sym_DOT] = ACTIONS(684),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_AT] = ACTIONS(684),
    [anon_sym_default] = ACTIONS(684),
    [anon_sym_COLON_COLON] = ACTIONS(684),
    [anon_sym_throws] = ACTIONS(684),
    [sym_comment] = ACTIONS(54),
  },
  [224] = {
    [anon_sym_RBRACK] = ACTIONS(686),
    [sym_comment] = ACTIONS(54),
  },
  [225] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(688),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [226] = {
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_throws] = ACTIONS(276),
    [sym_comment] = ACTIONS(54),
  },
  [227] = {
    [anon_sym_RPAREN] = ACTIONS(692),
    [anon_sym_LBRACE] = ACTIONS(692),
    [anon_sym_throws] = ACTIONS(692),
    [sym_comment] = ACTIONS(54),
  },
  [228] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(286),
    [sym_comment] = ACTIONS(54),
  },
  [229] = {
    [sym__annotation] = STATE(142),
    [sym_normal_annotation] = STATE(143),
    [sym_marker_annotation] = STATE(143),
    [sym_single_element_annotation] = STATE(143),
    [sym_modifier] = STATE(61),
    [sym_variable_declarator_id] = STATE(62),
    [sym_formal_parameter] = STATE(353),
    [sym_last_formal_parameter] = STATE(354),
    [aux_sym_class_or_interface_type_repeat1] = STATE(228),
    [aux_sym_normal_class_declaration_repeat1] = STATE(67),
    [anon_sym_AT] = ACTIONS(290),
    [anon_sym_static] = ACTIONS(78),
    [anon_sym_public] = ACTIONS(78),
    [anon_sym_protected] = ACTIONS(78),
    [anon_sym_private] = ACTIONS(78),
    [anon_sym_abstract] = ACTIONS(78),
    [anon_sym_final] = ACTIONS(78),
    [anon_sym_strictfp] = ACTIONS(78),
    [anon_sym_default] = ACTIONS(78),
    [anon_sym_synchronized] = ACTIONS(78),
    [anon_sym_native] = ACTIONS(78),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(82),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [230] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_this] = ACTIONS(306),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(304),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [231] = {
    [anon_sym_LPAREN] = ACTIONS(694),
    [anon_sym_DOT] = ACTIONS(696),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_this] = ACTIONS(412),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(308),
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(54),
  },
  [232] = {
    [anon_sym_RPAREN] = ACTIONS(698),
    [anon_sym_LBRACE] = ACTIONS(698),
    [anon_sym_throws] = ACTIONS(698),
    [sym_comment] = ACTIONS(54),
  },
  [233] = {
    [anon_sym_this] = ACTIONS(700),
    [sym_comment] = ACTIONS(54),
  },
  [234] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_static] = ACTIONS(306),
    [anon_sym_public] = ACTIONS(306),
    [anon_sym_protected] = ACTIONS(306),
    [anon_sym_private] = ACTIONS(306),
    [anon_sym_abstract] = ACTIONS(306),
    [anon_sym_final] = ACTIONS(306),
    [anon_sym_strictfp] = ACTIONS(306),
    [anon_sym_default] = ACTIONS(306),
    [anon_sym_synchronized] = ACTIONS(306),
    [anon_sym_native] = ACTIONS(306),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(304),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [235] = {
    [anon_sym_LPAREN] = ACTIONS(702),
    [anon_sym_DOT] = ACTIONS(704),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_static] = ACTIONS(412),
    [anon_sym_public] = ACTIONS(412),
    [anon_sym_protected] = ACTIONS(412),
    [anon_sym_private] = ACTIONS(412),
    [anon_sym_abstract] = ACTIONS(412),
    [anon_sym_final] = ACTIONS(412),
    [anon_sym_strictfp] = ACTIONS(412),
    [anon_sym_default] = ACTIONS(412),
    [anon_sym_synchronized] = ACTIONS(412),
    [anon_sym_native] = ACTIONS(412),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(308),
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(54),
  },
  [236] = {
    [sym_variable_declarator] = STATE(360),
    [sym_variable_declarator_id] = STATE(126),
    [sym_identifier] = ACTIONS(259),
    [sym_comment] = ACTIONS(54),
  },
  [237] = {
    [sym__annotation] = STATE(363),
    [sym_normal_annotation] = STATE(367),
    [sym_marker_annotation] = STATE(367),
    [sym_single_element_annotation] = STATE(367),
    [sym_class_declaration] = STATE(368),
    [sym_normal_class_declaration] = STATE(369),
    [sym_modifier] = STATE(370),
    [sym_interface_declaration] = STATE(368),
    [sym_annotation_type_declaration] = STATE(371),
    [sym_annotation_type_member_declaration] = STATE(372),
    [sym_annotation_type_element_declaration] = STATE(368),
    [sym_normal_interface_declaration] = STATE(371),
    [sym_constant_declaration] = STATE(368),
    [sym_variable_declarator_list] = STATE(373),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(374),
    [aux_sym_annotation_type_body_repeat1] = STATE(375),
    [anon_sym_RBRACE] = ACTIONS(706),
    [anon_sym_AT] = ACTIONS(708),
    [anon_sym_static] = ACTIONS(710),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(710),
    [anon_sym_protected] = ACTIONS(710),
    [anon_sym_private] = ACTIONS(710),
    [anon_sym_abstract] = ACTIONS(710),
    [anon_sym_final] = ACTIONS(710),
    [anon_sym_strictfp] = ACTIONS(710),
    [anon_sym_default] = ACTIONS(710),
    [anon_sym_synchronized] = ACTIONS(710),
    [anon_sym_native] = ACTIONS(710),
    [anon_sym_interface] = ACTIONS(714),
    [sym_identifier] = ACTIONS(716),
    [sym_comment] = ACTIONS(54),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(718),
    [sym_decimal_integer_literal] = ACTIONS(720),
    [sym_hex_integer_literal] = ACTIONS(720),
    [sym_octal_integer_literal] = ACTIONS(720),
    [sym_binary_integer_literal] = ACTIONS(720),
    [sym_decimal_floating_point_literal] = ACTIONS(720),
    [sym_hex_floating_point_literal] = ACTIONS(722),
    [anon_sym_true] = ACTIONS(720),
    [anon_sym_false] = ACTIONS(720),
    [anon_sym_SQUOTE] = ACTIONS(718),
    [sym_string_literal] = ACTIONS(718),
    [sym_null_literal] = ACTIONS(720),
    [anon_sym_LT] = ACTIONS(718),
    [anon_sym_LPAREN] = ACTIONS(718),
    [anon_sym_BANG] = ACTIONS(718),
    [anon_sym_TILDE] = ACTIONS(718),
    [anon_sym_PLUS_PLUS] = ACTIONS(718),
    [anon_sym_DASH_DASH] = ACTIONS(718),
    [anon_sym_RBRACE] = ACTIONS(718),
    [anon_sym_AT] = ACTIONS(718),
    [anon_sym_open] = ACTIONS(720),
    [anon_sym_module] = ACTIONS(720),
    [anon_sym_static] = ACTIONS(720),
    [anon_sym_package] = ACTIONS(720),
    [anon_sym_import] = ACTIONS(720),
    [anon_sym_class] = ACTIONS(720),
    [anon_sym_public] = ACTIONS(720),
    [anon_sym_protected] = ACTIONS(720),
    [anon_sym_private] = ACTIONS(720),
    [anon_sym_abstract] = ACTIONS(720),
    [anon_sym_final] = ACTIONS(720),
    [anon_sym_strictfp] = ACTIONS(720),
    [anon_sym_default] = ACTIONS(720),
    [anon_sym_synchronized] = ACTIONS(720),
    [anon_sym_native] = ACTIONS(720),
    [anon_sym_void] = ACTIONS(720),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [239] = {
    [sym__semicolon] = ACTIONS(724),
    [anon_sym_LT] = ACTIONS(724),
    [anon_sym_RPAREN] = ACTIONS(724),
    [anon_sym_COMMA] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_open] = ACTIONS(724),
    [anon_sym_module] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(724),
    [anon_sym_package] = ACTIONS(724),
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
    [anon_sym_void] = ACTIONS(724),
    [anon_sym_interface] = ACTIONS(724),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(724),
    [sym_comment] = ACTIONS(54),
  },
  [240] = {
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(54),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(54),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(730),
    [sym_comment] = ACTIONS(54),
  },
  [243] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(380),
    [anon_sym_RPAREN] = ACTIONS(732),
    [anon_sym_COMMA] = ACTIONS(734),
    [sym_comment] = ACTIONS(54),
  },
  [244] = {
    [sym__semicolon] = ACTIONS(736),
    [anon_sym_LT] = ACTIONS(736),
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_RPAREN] = ACTIONS(736),
    [anon_sym_COMMA] = ACTIONS(736),
    [anon_sym_RBRACE] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(738),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_open] = ACTIONS(736),
    [anon_sym_module] = ACTIONS(736),
    [anon_sym_with] = ACTIONS(736),
    [anon_sym_static] = ACTIONS(736),
    [anon_sym_package] = ACTIONS(736),
    [anon_sym_class] = ACTIONS(736),
    [anon_sym_public] = ACTIONS(736),
    [anon_sym_protected] = ACTIONS(736),
    [anon_sym_private] = ACTIONS(736),
    [anon_sym_abstract] = ACTIONS(736),
    [anon_sym_final] = ACTIONS(736),
    [anon_sym_strictfp] = ACTIONS(736),
    [anon_sym_default] = ACTIONS(736),
    [anon_sym_synchronized] = ACTIONS(736),
    [anon_sym_native] = ACTIONS(736),
    [anon_sym_void] = ACTIONS(736),
    [anon_sym_interface] = ACTIONS(736),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [245] = {
    [sym_module_directive] = STATE(253),
    [aux_sym_module_declaration_repeat1] = STATE(382),
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [246] = {
    [sym__semicolon] = ACTIONS(742),
    [anon_sym_LBRACE] = ACTIONS(742),
    [anon_sym_DOT] = ACTIONS(742),
    [sym_comment] = ACTIONS(54),
  },
  [247] = {
    [sym_identifier] = ACTIONS(744),
    [sym_comment] = ACTIONS(54),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(746),
    [sym_decimal_integer_literal] = ACTIONS(748),
    [sym_hex_integer_literal] = ACTIONS(748),
    [sym_octal_integer_literal] = ACTIONS(748),
    [sym_binary_integer_literal] = ACTIONS(748),
    [sym_decimal_floating_point_literal] = ACTIONS(748),
    [sym_hex_floating_point_literal] = ACTIONS(750),
    [anon_sym_true] = ACTIONS(748),
    [anon_sym_false] = ACTIONS(748),
    [anon_sym_SQUOTE] = ACTIONS(746),
    [sym_string_literal] = ACTIONS(746),
    [sym_null_literal] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(746),
    [anon_sym_LPAREN] = ACTIONS(746),
    [anon_sym_BANG] = ACTIONS(746),
    [anon_sym_TILDE] = ACTIONS(746),
    [anon_sym_PLUS_PLUS] = ACTIONS(746),
    [anon_sym_DASH_DASH] = ACTIONS(746),
    [anon_sym_RBRACE] = ACTIONS(746),
    [anon_sym_AT] = ACTIONS(746),
    [anon_sym_open] = ACTIONS(748),
    [anon_sym_module] = ACTIONS(748),
    [anon_sym_static] = ACTIONS(748),
    [anon_sym_package] = ACTIONS(748),
    [anon_sym_import] = ACTIONS(748),
    [anon_sym_class] = ACTIONS(748),
    [anon_sym_public] = ACTIONS(748),
    [anon_sym_protected] = ACTIONS(748),
    [anon_sym_private] = ACTIONS(748),
    [anon_sym_abstract] = ACTIONS(748),
    [anon_sym_final] = ACTIONS(748),
    [anon_sym_strictfp] = ACTIONS(748),
    [anon_sym_default] = ACTIONS(748),
    [anon_sym_synchronized] = ACTIONS(748),
    [anon_sym_native] = ACTIONS(748),
    [anon_sym_void] = ACTIONS(748),
    [anon_sym_interface] = ACTIONS(748),
    [sym_identifier] = ACTIONS(750),
    [sym_comment] = ACTIONS(54),
  },
  [249] = {
    [sym_requires_modifier] = STATE(386),
    [sym_module_name] = STATE(387),
    [aux_sym_module_directive_repeat1] = STATE(388),
    [anon_sym_transitive] = ACTIONS(752),
    [anon_sym_static] = ACTIONS(752),
    [sym_identifier] = ACTIONS(754),
    [sym_comment] = ACTIONS(54),
  },
  [250] = {
    [sym_package_or_type_name] = STATE(390),
    [sym_identifier] = ACTIONS(756),
    [sym_comment] = ACTIONS(54),
  },
  [251] = {
    [sym_package_or_type_name] = STATE(391),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(54),
  },
  [252] = {
    [sym_package_or_type_name] = STATE(392),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(54),
  },
  [253] = {
    [anon_sym_RBRACE] = ACTIONS(758),
    [anon_sym_requires] = ACTIONS(758),
    [anon_sym_exports] = ACTIONS(758),
    [anon_sym_opens] = ACTIONS(758),
    [anon_sym_uses] = ACTIONS(758),
    [anon_sym_provides] = ACTIONS(758),
    [sym_comment] = ACTIONS(54),
  },
  [254] = {
    [sym_module_directive] = STATE(393),
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(760),
    [sym_decimal_integer_literal] = ACTIONS(762),
    [sym_hex_integer_literal] = ACTIONS(762),
    [sym_octal_integer_literal] = ACTIONS(762),
    [sym_binary_integer_literal] = ACTIONS(762),
    [sym_decimal_floating_point_literal] = ACTIONS(762),
    [sym_hex_floating_point_literal] = ACTIONS(764),
    [anon_sym_true] = ACTIONS(762),
    [anon_sym_false] = ACTIONS(762),
    [anon_sym_SQUOTE] = ACTIONS(760),
    [sym_string_literal] = ACTIONS(760),
    [sym_null_literal] = ACTIONS(762),
    [anon_sym_LT] = ACTIONS(760),
    [anon_sym_LPAREN] = ACTIONS(760),
    [anon_sym_BANG] = ACTIONS(760),
    [anon_sym_TILDE] = ACTIONS(760),
    [anon_sym_PLUS_PLUS] = ACTIONS(760),
    [anon_sym_DASH_DASH] = ACTIONS(760),
    [anon_sym_RBRACE] = ACTIONS(760),
    [anon_sym_AT] = ACTIONS(760),
    [anon_sym_open] = ACTIONS(762),
    [anon_sym_module] = ACTIONS(762),
    [anon_sym_static] = ACTIONS(762),
    [anon_sym_package] = ACTIONS(762),
    [anon_sym_import] = ACTIONS(762),
    [anon_sym_class] = ACTIONS(762),
    [anon_sym_public] = ACTIONS(762),
    [anon_sym_protected] = ACTIONS(762),
    [anon_sym_private] = ACTIONS(762),
    [anon_sym_abstract] = ACTIONS(762),
    [anon_sym_final] = ACTIONS(762),
    [anon_sym_strictfp] = ACTIONS(762),
    [anon_sym_default] = ACTIONS(762),
    [anon_sym_synchronized] = ACTIONS(762),
    [anon_sym_native] = ACTIONS(762),
    [anon_sym_void] = ACTIONS(762),
    [anon_sym_interface] = ACTIONS(762),
    [sym_identifier] = ACTIONS(764),
    [sym_comment] = ACTIONS(54),
  },
  [256] = {
    [anon_sym_STAR] = ACTIONS(766),
    [sym_identifier] = ACTIONS(768),
    [sym_comment] = ACTIONS(54),
  },
  [257] = {
    [sym__semicolon] = ACTIONS(770),
    [sym_comment] = ACTIONS(54),
  },
  [258] = {
    [sym__semicolon] = ACTIONS(772),
    [anon_sym_LT] = ACTIONS(772),
    [anon_sym_LBRACE] = ACTIONS(772),
    [anon_sym_RBRACE] = ACTIONS(772),
    [anon_sym_AT] = ACTIONS(772),
    [anon_sym_static] = ACTIONS(774),
    [anon_sym_class] = ACTIONS(774),
    [anon_sym_public] = ACTIONS(774),
    [anon_sym_protected] = ACTIONS(774),
    [anon_sym_private] = ACTIONS(774),
    [anon_sym_abstract] = ACTIONS(774),
    [anon_sym_final] = ACTIONS(774),
    [anon_sym_strictfp] = ACTIONS(774),
    [anon_sym_default] = ACTIONS(774),
    [anon_sym_synchronized] = ACTIONS(774),
    [anon_sym_native] = ACTIONS(774),
    [anon_sym_void] = ACTIONS(774),
    [anon_sym_interface] = ACTIONS(774),
    [sym_identifier] = ACTIONS(776),
    [sym_comment] = ACTIONS(54),
  },
  [259] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_type_parameter_list] = STATE(397),
    [sym_type_parameter] = STATE(50),
    [aux_sym_class_or_interface_type_repeat1] = STATE(51),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(54),
  },
  [260] = {
    [sym_statement] = STATE(191),
    [sym_if_then_statement] = STATE(192),
    [sym__annotation] = STATE(189),
    [sym_normal_annotation] = STATE(193),
    [sym_marker_annotation] = STATE(193),
    [sym_single_element_annotation] = STATE(193),
    [sym_class_declaration] = STATE(191),
    [sym_normal_class_declaration] = STATE(194),
    [sym_modifier] = STATE(195),
    [sym_block_statements] = STATE(399),
    [sym_block_statement] = STATE(197),
    [sym_local_variable_declaration_statement] = STATE(191),
    [sym_local_variable_declaration] = STATE(198),
    [aux_sym_normal_class_declaration_repeat1] = STATE(199),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_static] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(366),
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
  [261] = {
    [ts_builtin_sym_end] = ACTIONS(780),
    [sym_decimal_integer_literal] = ACTIONS(782),
    [sym_hex_integer_literal] = ACTIONS(782),
    [sym_octal_integer_literal] = ACTIONS(782),
    [sym_binary_integer_literal] = ACTIONS(782),
    [sym_decimal_floating_point_literal] = ACTIONS(782),
    [sym_hex_floating_point_literal] = ACTIONS(784),
    [anon_sym_true] = ACTIONS(782),
    [anon_sym_false] = ACTIONS(782),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [sym_string_literal] = ACTIONS(780),
    [sym_null_literal] = ACTIONS(782),
    [anon_sym_LT] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_BANG] = ACTIONS(780),
    [anon_sym_TILDE] = ACTIONS(780),
    [anon_sym_PLUS_PLUS] = ACTIONS(780),
    [anon_sym_DASH_DASH] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_AT] = ACTIONS(780),
    [anon_sym_open] = ACTIONS(782),
    [anon_sym_module] = ACTIONS(782),
    [anon_sym_static] = ACTIONS(782),
    [anon_sym_package] = ACTIONS(782),
    [anon_sym_import] = ACTIONS(782),
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
  [262] = {
    [sym_package_or_type_name] = STATE(402),
    [anon_sym_interface] = ACTIONS(786),
    [sym_identifier] = ACTIONS(788),
    [sym_comment] = ACTIONS(54),
  },
  [263] = {
    [sym_identifier] = ACTIONS(790),
    [sym_comment] = ACTIONS(54),
  },
  [264] = {
    [sym_identifier] = ACTIONS(792),
    [sym_comment] = ACTIONS(54),
  },
  [265] = {
    [sym__annotation] = STATE(59),
    [sym_normal_annotation] = STATE(60),
    [sym_marker_annotation] = STATE(60),
    [sym_single_element_annotation] = STATE(60),
    [sym_modifier] = STATE(61),
    [sym_variable_declarator_id] = STATE(62),
    [sym__formal_parameter_list] = STATE(405),
    [sym_formal_parameter] = STATE(63),
    [sym_receiver_parameter] = STATE(64),
    [sym_last_formal_parameter] = STATE(65),
    [aux_sym_class_or_interface_type_repeat1] = STATE(66),
    [aux_sym_normal_class_declaration_repeat1] = STATE(67),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_static] = ACTIONS(78),
    [anon_sym_public] = ACTIONS(78),
    [anon_sym_protected] = ACTIONS(78),
    [anon_sym_private] = ACTIONS(78),
    [anon_sym_abstract] = ACTIONS(78),
    [anon_sym_final] = ACTIONS(78),
    [anon_sym_strictfp] = ACTIONS(78),
    [anon_sym_default] = ACTIONS(78),
    [anon_sym_synchronized] = ACTIONS(78),
    [anon_sym_native] = ACTIONS(78),
    [anon_sym_this] = ACTIONS(80),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(82),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(54),
  },
  [266] = {
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(241),
    [anon_sym_class] = ACTIONS(241),
    [anon_sym_public] = ACTIONS(241),
    [anon_sym_protected] = ACTIONS(241),
    [anon_sym_private] = ACTIONS(241),
    [anon_sym_abstract] = ACTIONS(241),
    [anon_sym_final] = ACTIONS(241),
    [anon_sym_strictfp] = ACTIONS(241),
    [anon_sym_default] = ACTIONS(241),
    [anon_sym_synchronized] = ACTIONS(241),
    [anon_sym_native] = ACTIONS(241),
    [anon_sym_void] = ACTIONS(241),
    [anon_sym_interface] = ACTIONS(241),
    [sym_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(54),
  },
  [267] = {
    [sym__semicolon] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
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
    [anon_sym_void] = ACTIONS(185),
    [anon_sym_interface] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(54),
  },
  [268] = {
    [sym__annotation] = STATE(92),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_result] = STATE(93),
    [aux_sym_class_or_interface_type_repeat1] = STATE(94),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_void] = ACTIONS(48),
    [sym_identifier] = ACTIONS(794),
    [sym_comment] = ACTIONS(54),
  },
  [269] = {
    [sym__semicolon] = ACTIONS(796),
    [anon_sym_LT] = ACTIONS(796),
    [anon_sym_LBRACE] = ACTIONS(796),
    [anon_sym_RBRACE] = ACTIONS(796),
    [anon_sym_AT] = ACTIONS(796),
    [anon_sym_static] = ACTIONS(798),
    [anon_sym_class] = ACTIONS(798),
    [anon_sym_public] = ACTIONS(798),
    [anon_sym_protected] = ACTIONS(798),
    [anon_sym_private] = ACTIONS(798),
    [anon_sym_abstract] = ACTIONS(798),
    [anon_sym_final] = ACTIONS(798),
    [anon_sym_strictfp] = ACTIONS(798),
    [anon_sym_default] = ACTIONS(798),
    [anon_sym_synchronized] = ACTIONS(798),
    [anon_sym_native] = ACTIONS(798),
    [anon_sym_void] = ACTIONS(798),
    [anon_sym_interface] = ACTIONS(798),
    [sym_identifier] = ACTIONS(800),
    [sym_comment] = ACTIONS(54),
  },
  [270] = {
    [sym__semicolon] = ACTIONS(802),
    [anon_sym_LT] = ACTIONS(802),
    [anon_sym_LBRACE] = ACTIONS(802),
    [anon_sym_RBRACE] = ACTIONS(802),
    [anon_sym_AT] = ACTIONS(802),
    [anon_sym_static] = ACTIONS(804),
    [anon_sym_class] = ACTIONS(804),
    [anon_sym_public] = ACTIONS(804),
    [anon_sym_protected] = ACTIONS(804),
    [anon_sym_private] = ACTIONS(804),
    [anon_sym_abstract] = ACTIONS(804),
    [anon_sym_final] = ACTIONS(804),
    [anon_sym_strictfp] = ACTIONS(804),
    [anon_sym_default] = ACTIONS(804),
    [anon_sym_synchronized] = ACTIONS(804),
    [anon_sym_native] = ACTIONS(804),
    [anon_sym_void] = ACTIONS(804),
    [anon_sym_interface] = ACTIONS(804),
    [sym_identifier] = ACTIONS(806),
    [sym_comment] = ACTIONS(54),
  },
  [271] = {
    [sym_constructor_body] = STATE(408),
    [sym_throws] = STATE(409),
    [anon_sym_LBRACE] = ACTIONS(808),
    [anon_sym_throws] = ACTIONS(378),
    [sym_comment] = ACTIONS(54),
  },
  [272] = {
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
  [273] = {
    [sym_method_body] = STATE(411),
    [sym_block] = STATE(410),
    [sym__semicolon] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(522),
    [sym_comment] = ACTIONS(54),
  },
  [274] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_modifier] = STATE(107),
    [sym_type_parameters] = STATE(268),
    [sym_constructor_declarator] = STATE(415),
    [sym_method_header] = STATE(416),
    [sym_result] = STATE(38),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_AT] = ACTIONS(812),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(814),
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
    [anon_sym_interface] = ACTIONS(816),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [275] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(258),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(268),
    [sym_class_body_declaration] = STATE(418),
    [sym_constructor_declaration] = STATE(270),
    [sym_constructor_declarator] = STATE(271),
    [sym_class_member_declaration] = STATE(270),
    [sym_interface_declaration] = STATE(258),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_block] = STATE(270),
    [sym_method_declaration] = STATE(258),
    [aux_sym_normal_class_declaration_repeat1] = STATE(274),
    [sym__semicolon] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(818),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [276] = {
    [anon_sym_LBRACE] = ACTIONS(820),
    [anon_sym_implements] = ACTIONS(820),
    [sym_comment] = ACTIONS(54),
  },
  [277] = {
    [aux_sym_interface_type_list_repeat1] = STATE(420),
    [anon_sym_COMMA] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(824),
    [sym_comment] = ACTIONS(54),
  },
  [278] = {
    [anon_sym_LBRACE] = ACTIONS(826),
    [sym_comment] = ACTIONS(54),
  },
  [279] = {
    [sym_super_interfaces] = STATE(421),
    [sym_class_body] = STATE(422),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [280] = {
    [sym_class_body] = STATE(422),
    [anon_sym_LBRACE] = ACTIONS(328),
    [sym_comment] = ACTIONS(54),
  },
  [281] = {
    [ts_builtin_sym_end] = ACTIONS(828),
    [sym_decimal_integer_literal] = ACTIONS(830),
    [sym_hex_integer_literal] = ACTIONS(830),
    [sym_octal_integer_literal] = ACTIONS(830),
    [sym_binary_integer_literal] = ACTIONS(830),
    [sym_decimal_floating_point_literal] = ACTIONS(830),
    [sym_hex_floating_point_literal] = ACTIONS(832),
    [anon_sym_true] = ACTIONS(830),
    [anon_sym_false] = ACTIONS(830),
    [anon_sym_SQUOTE] = ACTIONS(828),
    [sym_string_literal] = ACTIONS(828),
    [sym_null_literal] = ACTIONS(830),
    [anon_sym_LT] = ACTIONS(828),
    [anon_sym_LPAREN] = ACTIONS(828),
    [anon_sym_BANG] = ACTIONS(828),
    [anon_sym_TILDE] = ACTIONS(828),
    [anon_sym_PLUS_PLUS] = ACTIONS(828),
    [anon_sym_DASH_DASH] = ACTIONS(828),
    [anon_sym_RBRACE] = ACTIONS(828),
    [anon_sym_AT] = ACTIONS(828),
    [anon_sym_open] = ACTIONS(830),
    [anon_sym_module] = ACTIONS(830),
    [anon_sym_static] = ACTIONS(830),
    [anon_sym_package] = ACTIONS(830),
    [anon_sym_import] = ACTIONS(830),
    [anon_sym_class] = ACTIONS(830),
    [anon_sym_public] = ACTIONS(830),
    [anon_sym_protected] = ACTIONS(830),
    [anon_sym_private] = ACTIONS(830),
    [anon_sym_abstract] = ACTIONS(830),
    [anon_sym_final] = ACTIONS(830),
    [anon_sym_strictfp] = ACTIONS(830),
    [anon_sym_default] = ACTIONS(830),
    [anon_sym_synchronized] = ACTIONS(830),
    [anon_sym_native] = ACTIONS(830),
    [anon_sym_void] = ACTIONS(830),
    [anon_sym_interface] = ACTIONS(830),
    [sym_identifier] = ACTIONS(832),
    [sym_comment] = ACTIONS(54),
  },
  [282] = {
    [sym__semicolon] = ACTIONS(834),
    [anon_sym_LT] = ACTIONS(834),
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_AT] = ACTIONS(834),
    [anon_sym_static] = ACTIONS(836),
    [anon_sym_class] = ACTIONS(836),
    [anon_sym_public] = ACTIONS(836),
    [anon_sym_protected] = ACTIONS(836),
    [anon_sym_private] = ACTIONS(836),
    [anon_sym_abstract] = ACTIONS(836),
    [anon_sym_final] = ACTIONS(836),
    [anon_sym_strictfp] = ACTIONS(836),
    [anon_sym_default] = ACTIONS(836),
    [anon_sym_synchronized] = ACTIONS(836),
    [anon_sym_native] = ACTIONS(836),
    [anon_sym_void] = ACTIONS(836),
    [anon_sym_interface] = ACTIONS(836),
    [sym_identifier] = ACTIONS(838),
    [sym_comment] = ACTIONS(54),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(840),
    [sym_decimal_integer_literal] = ACTIONS(842),
    [sym_hex_integer_literal] = ACTIONS(842),
    [sym_octal_integer_literal] = ACTIONS(842),
    [sym_binary_integer_literal] = ACTIONS(842),
    [sym_decimal_floating_point_literal] = ACTIONS(842),
    [sym_hex_floating_point_literal] = ACTIONS(844),
    [anon_sym_true] = ACTIONS(842),
    [anon_sym_false] = ACTIONS(842),
    [anon_sym_SQUOTE] = ACTIONS(840),
    [sym_string_literal] = ACTIONS(840),
    [sym_null_literal] = ACTIONS(842),
    [anon_sym_LT] = ACTIONS(840),
    [anon_sym_LPAREN] = ACTIONS(840),
    [anon_sym_BANG] = ACTIONS(840),
    [anon_sym_TILDE] = ACTIONS(840),
    [anon_sym_PLUS_PLUS] = ACTIONS(840),
    [anon_sym_DASH_DASH] = ACTIONS(840),
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_AT] = ACTIONS(840),
    [anon_sym_open] = ACTIONS(842),
    [anon_sym_module] = ACTIONS(842),
    [anon_sym_static] = ACTIONS(842),
    [anon_sym_package] = ACTIONS(842),
    [anon_sym_import] = ACTIONS(842),
    [anon_sym_class] = ACTIONS(842),
    [anon_sym_public] = ACTIONS(842),
    [anon_sym_protected] = ACTIONS(842),
    [anon_sym_private] = ACTIONS(842),
    [anon_sym_abstract] = ACTIONS(842),
    [anon_sym_final] = ACTIONS(842),
    [anon_sym_strictfp] = ACTIONS(842),
    [anon_sym_default] = ACTIONS(842),
    [anon_sym_synchronized] = ACTIONS(842),
    [anon_sym_native] = ACTIONS(842),
    [anon_sym_void] = ACTIONS(842),
    [anon_sym_interface] = ACTIONS(842),
    [sym_identifier] = ACTIONS(844),
    [sym_comment] = ACTIONS(54),
  },
  [284] = {
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
    [anon_sym_synchronized] = ACTIONS(848),
    [anon_sym_native] = ACTIONS(848),
    [anon_sym_void] = ACTIONS(848),
    [anon_sym_interface] = ACTIONS(848),
    [sym_identifier] = ACTIONS(850),
    [sym_comment] = ACTIONS(54),
  },
  [285] = {
    [sym__semicolon] = ACTIONS(852),
    [sym_comment] = ACTIONS(54),
  },
  [286] = {
    [aux_sym_variable_declarator_list_repeat1] = STATE(425),
    [sym__semicolon] = ACTIONS(854),
    [anon_sym_COMMA] = ACTIONS(856),
    [sym_comment] = ACTIONS(54),
  },
  [287] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_modifier] = STATE(107),
    [sym_type_parameters] = STATE(35),
    [sym_variable_declarator_list] = STATE(426),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(416),
    [sym_result] = STATE(38),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(812),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(814),
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
    [anon_sym_interface] = ACTIONS(816),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [288] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(282),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(282),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_interface_member_declaration] = STATE(428),
    [sym_constant_declaration] = STATE(282),
    [sym_variable_declarator_list] = STATE(285),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(282),
    [aux_sym_normal_class_declaration_repeat1] = STATE(287),
    [sym__semicolon] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(858),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [289] = {
    [anon_sym_LBRACE] = ACTIONS(860),
    [sym_comment] = ACTIONS(54),
  },
  [290] = {
    [sym_interface_body] = STATE(429),
    [anon_sym_LBRACE] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [291] = {
    [ts_builtin_sym_end] = ACTIONS(862),
    [sym_decimal_integer_literal] = ACTIONS(864),
    [sym_hex_integer_literal] = ACTIONS(864),
    [sym_octal_integer_literal] = ACTIONS(864),
    [sym_binary_integer_literal] = ACTIONS(864),
    [sym_decimal_floating_point_literal] = ACTIONS(864),
    [sym_hex_floating_point_literal] = ACTIONS(866),
    [anon_sym_true] = ACTIONS(864),
    [anon_sym_false] = ACTIONS(864),
    [anon_sym_SQUOTE] = ACTIONS(862),
    [sym_string_literal] = ACTIONS(862),
    [sym_null_literal] = ACTIONS(864),
    [anon_sym_LT] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(862),
    [anon_sym_BANG] = ACTIONS(862),
    [anon_sym_TILDE] = ACTIONS(862),
    [anon_sym_PLUS_PLUS] = ACTIONS(862),
    [anon_sym_DASH_DASH] = ACTIONS(862),
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_AT] = ACTIONS(862),
    [anon_sym_open] = ACTIONS(864),
    [anon_sym_module] = ACTIONS(864),
    [anon_sym_static] = ACTIONS(864),
    [anon_sym_package] = ACTIONS(864),
    [anon_sym_import] = ACTIONS(864),
    [anon_sym_class] = ACTIONS(864),
    [anon_sym_public] = ACTIONS(864),
    [anon_sym_protected] = ACTIONS(864),
    [anon_sym_private] = ACTIONS(864),
    [anon_sym_abstract] = ACTIONS(864),
    [anon_sym_final] = ACTIONS(864),
    [anon_sym_strictfp] = ACTIONS(864),
    [anon_sym_default] = ACTIONS(864),
    [anon_sym_synchronized] = ACTIONS(864),
    [anon_sym_native] = ACTIONS(864),
    [anon_sym_void] = ACTIONS(864),
    [anon_sym_interface] = ACTIONS(864),
    [sym_identifier] = ACTIONS(866),
    [sym_comment] = ACTIONS(54),
  },
  [292] = {
    [sym__expression] = STATE(430),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [293] = {
    [sym__expression] = STATE(431),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [294] = {
    [sym__expression] = STATE(432),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [295] = {
    [sym__expression] = STATE(433),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [296] = {
    [sym__expression] = STATE(434),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [297] = {
    [sym__expression] = STATE(176),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [298] = {
    [sym__expression] = STATE(435),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [299] = {
    [sym__expression] = STATE(436),
    [sym_assignment_expression] = STATE(25),
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
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [300] = {
    [sym__expression] = STATE(437),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [301] = {
    [sym__expression] = STATE(438),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [302] = {
    [sym__expression] = STATE(439),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [303] = {
    [sym__expression] = STATE(440),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [304] = {
    [sym__expression] = STATE(441),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [305] = {
    [sym__expression] = STATE(176),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [306] = {
    [sym__expression] = STATE(442),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [307] = {
    [sym__semicolon] = ACTIONS(868),
    [anon_sym_EQ] = ACTIONS(870),
    [anon_sym_PLUS_EQ] = ACTIONS(868),
    [anon_sym_DASH_EQ] = ACTIONS(868),
    [anon_sym_STAR_EQ] = ACTIONS(868),
    [anon_sym_SLASH_EQ] = ACTIONS(868),
    [anon_sym_AMP_EQ] = ACTIONS(868),
    [anon_sym_PIPE_EQ] = ACTIONS(868),
    [anon_sym_CARET_EQ] = ACTIONS(868),
    [anon_sym_PERCENT_EQ] = ACTIONS(868),
    [anon_sym_LT_LT_EQ] = ACTIONS(868),
    [anon_sym_GT_GT_EQ] = ACTIONS(868),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(868),
    [anon_sym_GT] = ACTIONS(870),
    [anon_sym_LT] = ACTIONS(870),
    [anon_sym_EQ_EQ] = ACTIONS(868),
    [anon_sym_GT_EQ] = ACTIONS(868),
    [anon_sym_LT_EQ] = ACTIONS(868),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP_AMP] = ACTIONS(868),
    [anon_sym_PIPE_PIPE] = ACTIONS(868),
    [anon_sym_PLUS] = ACTIONS(870),
    [anon_sym_DASH] = ACTIONS(870),
    [anon_sym_STAR] = ACTIONS(870),
    [anon_sym_SLASH] = ACTIONS(870),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_PIPE] = ACTIONS(870),
    [anon_sym_CARET] = ACTIONS(870),
    [anon_sym_PERCENT] = ACTIONS(870),
    [anon_sym_LT_LT] = ACTIONS(870),
    [anon_sym_GT_GT] = ACTIONS(870),
    [anon_sym_GT_GT_GT] = ACTIONS(870),
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_COMMA] = ACTIONS(868),
    [anon_sym_QMARK] = ACTIONS(868),
    [anon_sym_COLON] = ACTIONS(868),
    [anon_sym_PLUS_PLUS] = ACTIONS(868),
    [anon_sym_DASH_DASH] = ACTIONS(868),
    [anon_sym_LBRACE] = ACTIONS(868),
    [anon_sym_RBRACE] = ACTIONS(868),
    [anon_sym_RBRACK] = ACTIONS(868),
    [sym_comment] = ACTIONS(54),
  },
  [308] = {
    [sym__semicolon] = ACTIONS(872),
    [anon_sym_LBRACE] = ACTIONS(872),
    [sym_comment] = ACTIONS(54),
  },
  [309] = {
    [sym_throws] = STATE(443),
    [sym__semicolon] = ACTIONS(872),
    [anon_sym_LBRACE] = ACTIONS(872),
    [anon_sym_throws] = ACTIONS(378),
    [sym_comment] = ACTIONS(54),
  },
  [310] = {
    [sym__expression] = STATE(446),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [311] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_static] = ACTIONS(306),
    [anon_sym_class] = ACTIONS(306),
    [anon_sym_public] = ACTIONS(306),
    [anon_sym_protected] = ACTIONS(306),
    [anon_sym_private] = ACTIONS(306),
    [anon_sym_abstract] = ACTIONS(306),
    [anon_sym_final] = ACTIONS(306),
    [anon_sym_strictfp] = ACTIONS(306),
    [anon_sym_default] = ACTIONS(306),
    [anon_sym_synchronized] = ACTIONS(306),
    [anon_sym_native] = ACTIONS(306),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [312] = {
    [anon_sym_LPAREN] = ACTIONS(878),
    [anon_sym_DOT] = ACTIONS(880),
    [anon_sym_AT] = ACTIONS(308),
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
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(54),
  },
  [313] = {
    [sym_type_parameters] = STATE(450),
    [sym_superclass] = STATE(451),
    [sym_super_interfaces] = STATE(452),
    [sym_class_body] = STATE(453),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [314] = {
    [sym__semicolon] = ACTIONS(884),
    [sym_comment] = ACTIONS(54),
  },
  [315] = {
    [ts_builtin_sym_end] = ACTIONS(886),
    [sym__semicolon] = ACTIONS(886),
    [sym_decimal_integer_literal] = ACTIONS(888),
    [sym_hex_integer_literal] = ACTIONS(888),
    [sym_octal_integer_literal] = ACTIONS(888),
    [sym_binary_integer_literal] = ACTIONS(888),
    [sym_decimal_floating_point_literal] = ACTIONS(888),
    [sym_hex_floating_point_literal] = ACTIONS(890),
    [anon_sym_true] = ACTIONS(888),
    [anon_sym_false] = ACTIONS(888),
    [anon_sym_SQUOTE] = ACTIONS(886),
    [sym_string_literal] = ACTIONS(886),
    [sym_null_literal] = ACTIONS(888),
    [anon_sym_EQ] = ACTIONS(888),
    [anon_sym_PLUS_EQ] = ACTIONS(886),
    [anon_sym_DASH_EQ] = ACTIONS(886),
    [anon_sym_STAR_EQ] = ACTIONS(886),
    [anon_sym_SLASH_EQ] = ACTIONS(886),
    [anon_sym_AMP_EQ] = ACTIONS(886),
    [anon_sym_PIPE_EQ] = ACTIONS(886),
    [anon_sym_CARET_EQ] = ACTIONS(886),
    [anon_sym_PERCENT_EQ] = ACTIONS(886),
    [anon_sym_LT_LT_EQ] = ACTIONS(886),
    [anon_sym_GT_GT_EQ] = ACTIONS(886),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(886),
    [anon_sym_GT] = ACTIONS(888),
    [anon_sym_LT] = ACTIONS(888),
    [anon_sym_EQ_EQ] = ACTIONS(886),
    [anon_sym_GT_EQ] = ACTIONS(886),
    [anon_sym_LT_EQ] = ACTIONS(886),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_AMP_AMP] = ACTIONS(886),
    [anon_sym_PIPE_PIPE] = ACTIONS(886),
    [anon_sym_PLUS] = ACTIONS(888),
    [anon_sym_DASH] = ACTIONS(888),
    [anon_sym_STAR] = ACTIONS(888),
    [anon_sym_SLASH] = ACTIONS(888),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_PIPE] = ACTIONS(888),
    [anon_sym_CARET] = ACTIONS(888),
    [anon_sym_PERCENT] = ACTIONS(888),
    [anon_sym_LT_LT] = ACTIONS(888),
    [anon_sym_GT_GT] = ACTIONS(888),
    [anon_sym_GT_GT_GT] = ACTIONS(888),
    [anon_sym_LPAREN] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(886),
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_QMARK] = ACTIONS(886),
    [anon_sym_COLON] = ACTIONS(886),
    [anon_sym_BANG] = ACTIONS(888),
    [anon_sym_TILDE] = ACTIONS(886),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [anon_sym_LBRACE] = ACTIONS(886),
    [anon_sym_RBRACE] = ACTIONS(886),
    [anon_sym_RBRACK] = ACTIONS(886),
    [anon_sym_AT] = ACTIONS(886),
    [anon_sym_open] = ACTIONS(888),
    [anon_sym_module] = ACTIONS(888),
    [anon_sym_static] = ACTIONS(888),
    [anon_sym_package] = ACTIONS(888),
    [anon_sym_import] = ACTIONS(888),
    [anon_sym_class] = ACTIONS(888),
    [anon_sym_public] = ACTIONS(888),
    [anon_sym_protected] = ACTIONS(888),
    [anon_sym_private] = ACTIONS(888),
    [anon_sym_abstract] = ACTIONS(888),
    [anon_sym_final] = ACTIONS(888),
    [anon_sym_strictfp] = ACTIONS(888),
    [anon_sym_default] = ACTIONS(888),
    [anon_sym_synchronized] = ACTIONS(888),
    [anon_sym_native] = ACTIONS(888),
    [anon_sym_void] = ACTIONS(888),
    [anon_sym_interface] = ACTIONS(888),
    [sym_identifier] = ACTIONS(890),
    [sym_comment] = ACTIONS(54),
  },
  [316] = {
    [anon_sym_if] = ACTIONS(892),
    [anon_sym_RBRACE] = ACTIONS(892),
    [anon_sym_AT] = ACTIONS(892),
    [anon_sym_static] = ACTIONS(892),
    [anon_sym_class] = ACTIONS(892),
    [anon_sym_public] = ACTIONS(892),
    [anon_sym_protected] = ACTIONS(892),
    [anon_sym_private] = ACTIONS(892),
    [anon_sym_abstract] = ACTIONS(892),
    [anon_sym_final] = ACTIONS(892),
    [anon_sym_strictfp] = ACTIONS(892),
    [anon_sym_default] = ACTIONS(892),
    [anon_sym_synchronized] = ACTIONS(892),
    [anon_sym_native] = ACTIONS(892),
    [sym_comment] = ACTIONS(54),
  },
  [317] = {
    [sym_statement] = STATE(191),
    [sym_if_then_statement] = STATE(192),
    [sym__annotation] = STATE(189),
    [sym_normal_annotation] = STATE(193),
    [sym_marker_annotation] = STATE(193),
    [sym_single_element_annotation] = STATE(193),
    [sym_class_declaration] = STATE(191),
    [sym_normal_class_declaration] = STATE(194),
    [sym_modifier] = STATE(195),
    [sym_block_statement] = STATE(454),
    [sym_local_variable_declaration_statement] = STATE(191),
    [sym_local_variable_declaration] = STATE(198),
    [aux_sym_normal_class_declaration_repeat1] = STATE(199),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(894),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_static] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(366),
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
  [318] = {
    [anon_sym_if] = ACTIONS(896),
    [anon_sym_RBRACE] = ACTIONS(896),
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
  [319] = {
    [sym_identifier] = ACTIONS(898),
    [sym_comment] = ACTIONS(54),
  },
  [320] = {
    [sym_dims] = STATE(456),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [sym__semicolon] = ACTIONS(900),
    [anon_sym_LBRACE] = ACTIONS(900),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_throws] = ACTIONS(900),
    [sym_comment] = ACTIONS(54),
  },
  [321] = {
    [anon_sym_RPAREN] = ACTIONS(902),
    [sym_comment] = ACTIONS(54),
  },
  [322] = {
    [sym_type_arguments] = STATE(460),
    [aux_sym_class_or_interface_type_repeat2] = STATE(461),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_DOT] = ACTIONS(906),
    [anon_sym_AT] = ACTIONS(652),
    [sym_identifier] = ACTIONS(908),
    [sym_comment] = ACTIONS(54),
  },
  [323] = {
    [sym_type_variable] = STATE(463),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(464),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(910),
    [sym_comment] = ACTIONS(54),
  },
  [324] = {
    [sym__semicolon] = ACTIONS(912),
    [anon_sym_LBRACE] = ACTIONS(912),
    [sym_comment] = ACTIONS(54),
  },
  [325] = {
    [aux_sym_exception_type_list_repeat1] = STATE(466),
    [sym__semicolon] = ACTIONS(914),
    [anon_sym_COMMA] = ACTIONS(916),
    [anon_sym_LBRACE] = ACTIONS(914),
    [sym_comment] = ACTIONS(54),
  },
  [326] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(918),
    [sym_comment] = ACTIONS(54),
  },
  [327] = {
    [anon_sym_LBRACE] = ACTIONS(920),
    [sym_comment] = ACTIONS(54),
  },
  [328] = {
    [sym__semicolon] = ACTIONS(922),
    [anon_sym_DOT] = ACTIONS(488),
    [sym_comment] = ACTIONS(54),
  },
  [329] = {
    [sym_annotation_type_body] = STATE(470),
    [anon_sym_LBRACE] = ACTIONS(474),
    [sym_comment] = ACTIONS(54),
  },
  [330] = {
    [sym_superclass] = STATE(471),
    [sym_super_interfaces] = STATE(421),
    [sym_class_body] = STATE(422),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [331] = {
    [sym_extends_interfaces] = STATE(472),
    [sym_interface_body] = STATE(429),
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [332] = {
    [anon_sym_AT] = ACTIONS(724),
    [sym_identifier] = ACTIONS(924),
    [sym_comment] = ACTIONS(54),
  },
  [333] = {
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(926),
    [sym_comment] = ACTIONS(54),
  },
  [334] = {
    [anon_sym_RPAREN] = ACTIONS(926),
    [sym_comment] = ACTIONS(54),
  },
  [335] = {
    [anon_sym_RPAREN] = ACTIONS(928),
    [sym_comment] = ACTIONS(54),
  },
  [336] = {
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(736),
    [anon_sym_AT] = ACTIONS(736),
    [sym_identifier] = ACTIONS(738),
    [sym_comment] = ACTIONS(54),
  },
  [337] = {
    [sym_type_argument] = STATE(479),
    [sym_reference_type] = STATE(480),
    [sym_class_or_interface_type] = STATE(481),
    [sym_primitive_type] = STATE(482),
    [sym_integral_type] = STATE(475),
    [sym_floating_point_type] = STATE(475),
    [sym__annotation] = STATE(483),
    [sym_normal_annotation] = STATE(484),
    [sym_marker_annotation] = STATE(484),
    [sym_single_element_annotation] = STATE(484),
    [aux_sym_class_or_interface_type_repeat1] = STATE(485),
    [anon_sym_boolean] = ACTIONS(930),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(934),
    [anon_sym_double] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(936),
    [sym_identifier] = ACTIONS(938),
    [sym_comment] = ACTIONS(54),
  },
  [338] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(487),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(940),
    [sym_comment] = ACTIONS(54),
  },
  [339] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(488),
    [anon_sym_GT] = ACTIONS(942),
    [anon_sym_AMP] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(942),
    [anon_sym_LBRACE] = ACTIONS(942),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(942),
    [anon_sym_AT] = ACTIONS(942),
    [anon_sym_implements] = ACTIONS(942),
    [anon_sym_COLON_COLON] = ACTIONS(942),
    [sym_comment] = ACTIONS(54),
  },
  [340] = {
    [anon_sym_GT] = ACTIONS(942),
    [anon_sym_AMP] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(942),
    [anon_sym_LBRACE] = ACTIONS(942),
    [anon_sym_DOT] = ACTIONS(944),
    [anon_sym_LBRACK] = ACTIONS(942),
    [anon_sym_AT] = ACTIONS(942),
    [anon_sym_implements] = ACTIONS(942),
    [anon_sym_COLON_COLON] = ACTIONS(942),
    [sym_comment] = ACTIONS(54),
  },
  [341] = {
    [sym_class_or_interface_type] = STATE(490),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(213),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(54),
  },
  [342] = {
    [anon_sym_GT] = ACTIONS(946),
    [anon_sym_AMP] = ACTIONS(948),
    [anon_sym_COMMA] = ACTIONS(946),
    [sym_comment] = ACTIONS(54),
  },
  [343] = {
    [sym_type_arguments] = STATE(492),
    [aux_sym_class_or_interface_type_repeat2] = STATE(488),
    [anon_sym_GT] = ACTIONS(942),
    [anon_sym_LT] = ACTIONS(654),
    [anon_sym_AMP] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(942),
    [anon_sym_LBRACE] = ACTIONS(942),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(942),
    [anon_sym_AT] = ACTIONS(942),
    [anon_sym_implements] = ACTIONS(942),
    [anon_sym_COLON_COLON] = ACTIONS(942),
    [sym_comment] = ACTIONS(54),
  },
  [344] = {
    [anon_sym_GT] = ACTIONS(950),
    [anon_sym_COMMA] = ACTIONS(950),
    [sym_comment] = ACTIONS(54),
  },
  [345] = {
    [anon_sym_RPAREN] = ACTIONS(952),
    [sym_identifier] = ACTIONS(954),
    [sym_comment] = ACTIONS(54),
  },
  [346] = {
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(924),
    [anon_sym_public] = ACTIONS(924),
    [anon_sym_protected] = ACTIONS(924),
    [anon_sym_private] = ACTIONS(924),
    [anon_sym_abstract] = ACTIONS(924),
    [anon_sym_final] = ACTIONS(924),
    [anon_sym_strictfp] = ACTIONS(924),
    [anon_sym_default] = ACTIONS(924),
    [anon_sym_synchronized] = ACTIONS(924),
    [anon_sym_native] = ACTIONS(924),
    [anon_sym_this] = ACTIONS(924),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(724),
    [sym_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(54),
  },
  [347] = {
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(54),
  },
  [348] = {
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(54),
  },
  [349] = {
    [anon_sym_RPAREN] = ACTIONS(960),
    [sym_comment] = ACTIONS(54),
  },
  [350] = {
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(738),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_static] = ACTIONS(738),
    [anon_sym_public] = ACTIONS(738),
    [anon_sym_protected] = ACTIONS(738),
    [anon_sym_private] = ACTIONS(738),
    [anon_sym_abstract] = ACTIONS(738),
    [anon_sym_final] = ACTIONS(738),
    [anon_sym_strictfp] = ACTIONS(738),
    [anon_sym_default] = ACTIONS(738),
    [anon_sym_synchronized] = ACTIONS(738),
    [anon_sym_native] = ACTIONS(738),
    [anon_sym_this] = ACTIONS(738),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(736),
    [sym_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(54),
  },
  [351] = {
    [sym__semicolon] = ACTIONS(964),
    [anon_sym_EQ] = ACTIONS(964),
    [anon_sym_GT] = ACTIONS(964),
    [anon_sym_RPAREN] = ACTIONS(964),
    [anon_sym_COMMA] = ACTIONS(964),
    [anon_sym_LBRACE] = ACTIONS(964),
    [anon_sym_DOT] = ACTIONS(964),
    [anon_sym_LBRACK] = ACTIONS(964),
    [anon_sym_AT] = ACTIONS(964),
    [anon_sym_default] = ACTIONS(964),
    [anon_sym_COLON_COLON] = ACTIONS(964),
    [anon_sym_throws] = ACTIONS(964),
    [sym_comment] = ACTIONS(54),
  },
  [352] = {
    [anon_sym_RBRACK] = ACTIONS(966),
    [sym_comment] = ACTIONS(54),
  },
  [353] = {
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(968),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_throws] = ACTIONS(276),
    [sym_comment] = ACTIONS(54),
  },
  [354] = {
    [anon_sym_RPAREN] = ACTIONS(970),
    [anon_sym_LBRACE] = ACTIONS(970),
    [anon_sym_throws] = ACTIONS(970),
    [sym_comment] = ACTIONS(54),
  },
  [355] = {
    [sym__literal] = STATE(498),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(499),
    [sym_element_value_pair] = STATE(243),
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
    [anon_sym_RPAREN] = ACTIONS(972),
    [sym_identifier] = ACTIONS(974),
    [sym_comment] = ACTIONS(54),
  },
  [356] = {
    [sym_identifier] = ACTIONS(976),
    [sym_comment] = ACTIONS(54),
  },
  [357] = {
    [anon_sym_RPAREN] = ACTIONS(978),
    [anon_sym_COMMA] = ACTIONS(978),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_throws] = ACTIONS(978),
    [sym_comment] = ACTIONS(54),
  },
  [358] = {
    [sym__literal] = STATE(503),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(504),
    [sym_element_value_pair] = STATE(243),
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
    [anon_sym_RPAREN] = ACTIONS(980),
    [sym_identifier] = ACTIONS(982),
    [sym_comment] = ACTIONS(54),
  },
  [359] = {
    [sym_identifier] = ACTIONS(984),
    [sym_comment] = ACTIONS(54),
  },
  [360] = {
    [anon_sym_RPAREN] = ACTIONS(986),
    [anon_sym_LBRACE] = ACTIONS(986),
    [anon_sym_throws] = ACTIONS(986),
    [sym_comment] = ACTIONS(54),
  },
  [361] = {
    [ts_builtin_sym_end] = ACTIONS(988),
    [sym_decimal_integer_literal] = ACTIONS(990),
    [sym_hex_integer_literal] = ACTIONS(990),
    [sym_octal_integer_literal] = ACTIONS(990),
    [sym_binary_integer_literal] = ACTIONS(990),
    [sym_decimal_floating_point_literal] = ACTIONS(990),
    [sym_hex_floating_point_literal] = ACTIONS(992),
    [anon_sym_true] = ACTIONS(990),
    [anon_sym_false] = ACTIONS(990),
    [anon_sym_SQUOTE] = ACTIONS(988),
    [sym_string_literal] = ACTIONS(988),
    [sym_null_literal] = ACTIONS(990),
    [anon_sym_LT] = ACTIONS(988),
    [anon_sym_LPAREN] = ACTIONS(988),
    [anon_sym_BANG] = ACTIONS(988),
    [anon_sym_TILDE] = ACTIONS(988),
    [anon_sym_PLUS_PLUS] = ACTIONS(988),
    [anon_sym_DASH_DASH] = ACTIONS(988),
    [anon_sym_RBRACE] = ACTIONS(988),
    [anon_sym_AT] = ACTIONS(988),
    [anon_sym_open] = ACTIONS(990),
    [anon_sym_module] = ACTIONS(990),
    [anon_sym_static] = ACTIONS(990),
    [anon_sym_package] = ACTIONS(990),
    [anon_sym_import] = ACTIONS(990),
    [anon_sym_class] = ACTIONS(990),
    [anon_sym_public] = ACTIONS(990),
    [anon_sym_protected] = ACTIONS(990),
    [anon_sym_private] = ACTIONS(990),
    [anon_sym_abstract] = ACTIONS(990),
    [anon_sym_final] = ACTIONS(990),
    [anon_sym_strictfp] = ACTIONS(990),
    [anon_sym_default] = ACTIONS(990),
    [anon_sym_synchronized] = ACTIONS(990),
    [anon_sym_native] = ACTIONS(990),
    [anon_sym_void] = ACTIONS(990),
    [anon_sym_interface] = ACTIONS(990),
    [sym_identifier] = ACTIONS(992),
    [sym_comment] = ACTIONS(54),
  },
  [362] = {
    [sym_package_or_type_name] = STATE(508),
    [anon_sym_interface] = ACTIONS(994),
    [sym_identifier] = ACTIONS(996),
    [sym_comment] = ACTIONS(54),
  },
  [363] = {
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_static] = ACTIONS(98),
    [anon_sym_class] = ACTIONS(98),
    [anon_sym_public] = ACTIONS(98),
    [anon_sym_protected] = ACTIONS(98),
    [anon_sym_private] = ACTIONS(98),
    [anon_sym_abstract] = ACTIONS(98),
    [anon_sym_final] = ACTIONS(98),
    [anon_sym_strictfp] = ACTIONS(98),
    [anon_sym_default] = ACTIONS(98),
    [anon_sym_synchronized] = ACTIONS(98),
    [anon_sym_native] = ACTIONS(98),
    [anon_sym_interface] = ACTIONS(98),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(54),
  },
  [364] = {
    [sym_identifier] = ACTIONS(998),
    [sym_comment] = ACTIONS(54),
  },
  [365] = {
    [sym_identifier] = ACTIONS(1000),
    [sym_comment] = ACTIONS(54),
  },
  [366] = {
    [sym_dims] = STATE(129),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [sym__semicolon] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(1002),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [367] = {
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(241),
    [anon_sym_class] = ACTIONS(241),
    [anon_sym_public] = ACTIONS(241),
    [anon_sym_protected] = ACTIONS(241),
    [anon_sym_private] = ACTIONS(241),
    [anon_sym_abstract] = ACTIONS(241),
    [anon_sym_final] = ACTIONS(241),
    [anon_sym_strictfp] = ACTIONS(241),
    [anon_sym_default] = ACTIONS(241),
    [anon_sym_synchronized] = ACTIONS(241),
    [anon_sym_native] = ACTIONS(241),
    [anon_sym_interface] = ACTIONS(241),
    [sym_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(54),
  },
  [368] = {
    [anon_sym_RBRACE] = ACTIONS(1004),
    [anon_sym_AT] = ACTIONS(1004),
    [anon_sym_static] = ACTIONS(1006),
    [anon_sym_class] = ACTIONS(1006),
    [anon_sym_public] = ACTIONS(1006),
    [anon_sym_protected] = ACTIONS(1006),
    [anon_sym_private] = ACTIONS(1006),
    [anon_sym_abstract] = ACTIONS(1006),
    [anon_sym_final] = ACTIONS(1006),
    [anon_sym_strictfp] = ACTIONS(1006),
    [anon_sym_default] = ACTIONS(1006),
    [anon_sym_synchronized] = ACTIONS(1006),
    [anon_sym_native] = ACTIONS(1006),
    [anon_sym_interface] = ACTIONS(1006),
    [sym_identifier] = ACTIONS(1008),
    [sym_comment] = ACTIONS(54),
  },
  [369] = {
    [anon_sym_RBRACE] = ACTIONS(183),
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
    [sym_comment] = ACTIONS(54),
  },
  [370] = {
    [anon_sym_AT] = ACTIONS(189),
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
    [anon_sym_interface] = ACTIONS(191),
    [sym_identifier] = ACTIONS(193),
    [sym_comment] = ACTIONS(54),
  },
  [371] = {
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
  [372] = {
    [anon_sym_RBRACE] = ACTIONS(1010),
    [anon_sym_AT] = ACTIONS(1010),
    [anon_sym_static] = ACTIONS(1012),
    [anon_sym_class] = ACTIONS(1012),
    [anon_sym_public] = ACTIONS(1012),
    [anon_sym_protected] = ACTIONS(1012),
    [anon_sym_private] = ACTIONS(1012),
    [anon_sym_abstract] = ACTIONS(1012),
    [anon_sym_final] = ACTIONS(1012),
    [anon_sym_strictfp] = ACTIONS(1012),
    [anon_sym_default] = ACTIONS(1012),
    [anon_sym_synchronized] = ACTIONS(1012),
    [anon_sym_native] = ACTIONS(1012),
    [anon_sym_interface] = ACTIONS(1012),
    [sym_identifier] = ACTIONS(1014),
    [sym_comment] = ACTIONS(54),
  },
  [373] = {
    [sym__semicolon] = ACTIONS(1016),
    [sym_comment] = ACTIONS(54),
  },
  [374] = {
    [sym__annotation] = STATE(363),
    [sym_normal_annotation] = STATE(367),
    [sym_marker_annotation] = STATE(367),
    [sym_single_element_annotation] = STATE(367),
    [sym_modifier] = STATE(517),
    [sym_variable_declarator_list] = STATE(518),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [anon_sym_AT] = ACTIONS(1018),
    [anon_sym_static] = ACTIONS(710),
    [anon_sym_class] = ACTIONS(1020),
    [anon_sym_public] = ACTIONS(710),
    [anon_sym_protected] = ACTIONS(710),
    [anon_sym_private] = ACTIONS(710),
    [anon_sym_abstract] = ACTIONS(710),
    [anon_sym_final] = ACTIONS(710),
    [anon_sym_strictfp] = ACTIONS(710),
    [anon_sym_default] = ACTIONS(710),
    [anon_sym_synchronized] = ACTIONS(710),
    [anon_sym_native] = ACTIONS(710),
    [anon_sym_interface] = ACTIONS(1022),
    [sym_identifier] = ACTIONS(1024),
    [sym_comment] = ACTIONS(54),
  },
  [375] = {
    [sym__annotation] = STATE(363),
    [sym_normal_annotation] = STATE(367),
    [sym_marker_annotation] = STATE(367),
    [sym_single_element_annotation] = STATE(367),
    [sym_class_declaration] = STATE(368),
    [sym_normal_class_declaration] = STATE(369),
    [sym_modifier] = STATE(370),
    [sym_interface_declaration] = STATE(368),
    [sym_annotation_type_declaration] = STATE(371),
    [sym_annotation_type_member_declaration] = STATE(520),
    [sym_annotation_type_element_declaration] = STATE(368),
    [sym_normal_interface_declaration] = STATE(371),
    [sym_constant_declaration] = STATE(368),
    [sym_variable_declarator_list] = STATE(373),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(374),
    [anon_sym_RBRACE] = ACTIONS(1026),
    [anon_sym_AT] = ACTIONS(708),
    [anon_sym_static] = ACTIONS(710),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(710),
    [anon_sym_protected] = ACTIONS(710),
    [anon_sym_private] = ACTIONS(710),
    [anon_sym_abstract] = ACTIONS(710),
    [anon_sym_final] = ACTIONS(710),
    [anon_sym_strictfp] = ACTIONS(710),
    [anon_sym_default] = ACTIONS(710),
    [anon_sym_synchronized] = ACTIONS(710),
    [anon_sym_native] = ACTIONS(710),
    [anon_sym_interface] = ACTIONS(714),
    [sym_identifier] = ACTIONS(716),
    [sym_comment] = ACTIONS(54),
  },
  [376] = {
    [sym__literal] = STATE(523),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(524),
    [sym__annotation] = STATE(523),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_element_value] = STATE(525),
    [sym_element_value_array_initializer] = STATE(523),
    [sym_conditional_expression] = STATE(523),
    [sym_conditional_or_expression] = STATE(526),
    [sym_conditional_and_expression] = STATE(527),
    [sym_inclusive_or_expression] = STATE(528),
    [sym_exclusive_or_expression] = STATE(529),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(531),
    [sym_equality_expression] = STATE(532),
    [sym_shift_expression] = STATE(533),
    [sym_additive_expression] = STATE(534),
    [sym_multiplicative_expression] = STATE(535),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1028),
    [anon_sym_false] = ACTIONS(1028),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [anon_sym_LBRACE] = ACTIONS(1032),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [377] = {
    [sym__semicolon] = ACTIONS(1034),
    [anon_sym_LT] = ACTIONS(1034),
    [anon_sym_RPAREN] = ACTIONS(1034),
    [anon_sym_COMMA] = ACTIONS(1034),
    [anon_sym_RBRACE] = ACTIONS(1034),
    [anon_sym_LBRACK] = ACTIONS(1034),
    [anon_sym_AT] = ACTIONS(1034),
    [anon_sym_open] = ACTIONS(1034),
    [anon_sym_module] = ACTIONS(1034),
    [anon_sym_static] = ACTIONS(1034),
    [anon_sym_package] = ACTIONS(1034),
    [anon_sym_class] = ACTIONS(1034),
    [anon_sym_public] = ACTIONS(1034),
    [anon_sym_protected] = ACTIONS(1034),
    [anon_sym_private] = ACTIONS(1034),
    [anon_sym_abstract] = ACTIONS(1034),
    [anon_sym_final] = ACTIONS(1034),
    [anon_sym_strictfp] = ACTIONS(1034),
    [anon_sym_default] = ACTIONS(1034),
    [anon_sym_synchronized] = ACTIONS(1034),
    [anon_sym_native] = ACTIONS(1034),
    [anon_sym_void] = ACTIONS(1034),
    [anon_sym_interface] = ACTIONS(1034),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1034),
    [sym_comment] = ACTIONS(54),
  },
  [378] = {
    [sym__semicolon] = ACTIONS(1036),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_RPAREN] = ACTIONS(1036),
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_RBRACE] = ACTIONS(1036),
    [anon_sym_LBRACK] = ACTIONS(1036),
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
  [379] = {
    [sym_element_value_pair] = STATE(537),
    [sym_identifier] = ACTIONS(1038),
    [sym_comment] = ACTIONS(54),
  },
  [380] = {
    [anon_sym_RPAREN] = ACTIONS(1040),
    [anon_sym_COMMA] = ACTIONS(1042),
    [sym_comment] = ACTIONS(54),
  },
  [381] = {
    [ts_builtin_sym_end] = ACTIONS(1044),
    [sym_decimal_integer_literal] = ACTIONS(1046),
    [sym_hex_integer_literal] = ACTIONS(1046),
    [sym_octal_integer_literal] = ACTIONS(1046),
    [sym_binary_integer_literal] = ACTIONS(1046),
    [sym_decimal_floating_point_literal] = ACTIONS(1046),
    [sym_hex_floating_point_literal] = ACTIONS(1048),
    [anon_sym_true] = ACTIONS(1046),
    [anon_sym_false] = ACTIONS(1046),
    [anon_sym_SQUOTE] = ACTIONS(1044),
    [sym_string_literal] = ACTIONS(1044),
    [sym_null_literal] = ACTIONS(1046),
    [anon_sym_LT] = ACTIONS(1044),
    [anon_sym_LPAREN] = ACTIONS(1044),
    [anon_sym_BANG] = ACTIONS(1044),
    [anon_sym_TILDE] = ACTIONS(1044),
    [anon_sym_PLUS_PLUS] = ACTIONS(1044),
    [anon_sym_DASH_DASH] = ACTIONS(1044),
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_AT] = ACTIONS(1044),
    [anon_sym_open] = ACTIONS(1046),
    [anon_sym_module] = ACTIONS(1046),
    [anon_sym_static] = ACTIONS(1046),
    [anon_sym_package] = ACTIONS(1046),
    [anon_sym_import] = ACTIONS(1046),
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
    [anon_sym_void] = ACTIONS(1046),
    [anon_sym_interface] = ACTIONS(1046),
    [sym_identifier] = ACTIONS(1048),
    [sym_comment] = ACTIONS(54),
  },
  [382] = {
    [sym_module_directive] = STATE(393),
    [anon_sym_RBRACE] = ACTIONS(1050),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [383] = {
    [sym__semicolon] = ACTIONS(1052),
    [anon_sym_LBRACE] = ACTIONS(1052),
    [anon_sym_DOT] = ACTIONS(1052),
    [sym_comment] = ACTIONS(54),
  },
  [384] = {
    [anon_sym_transitive] = ACTIONS(1054),
    [anon_sym_static] = ACTIONS(1054),
    [sym_identifier] = ACTIONS(1056),
    [sym_comment] = ACTIONS(54),
  },
  [385] = {
    [sym__semicolon] = ACTIONS(1058),
    [anon_sym_COMMA] = ACTIONS(1058),
    [anon_sym_DOT] = ACTIONS(1058),
    [sym_comment] = ACTIONS(54),
  },
  [386] = {
    [anon_sym_transitive] = ACTIONS(1060),
    [anon_sym_static] = ACTIONS(1060),
    [sym_identifier] = ACTIONS(1062),
    [sym_comment] = ACTIONS(54),
  },
  [387] = {
    [sym__semicolon] = ACTIONS(1064),
    [anon_sym_DOT] = ACTIONS(1066),
    [sym_comment] = ACTIONS(54),
  },
  [388] = {
    [sym_requires_modifier] = STATE(542),
    [sym_module_name] = STATE(543),
    [anon_sym_transitive] = ACTIONS(752),
    [anon_sym_static] = ACTIONS(752),
    [sym_identifier] = ACTIONS(754),
    [sym_comment] = ACTIONS(54),
  },
  [389] = {
    [sym__semicolon] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_to] = ACTIONS(306),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [390] = {
    [sym_module_name] = STATE(547),
    [aux_sym_module_directive_repeat2] = STATE(548),
    [sym__semicolon] = ACTIONS(1064),
    [anon_sym_COMMA] = ACTIONS(1068),
    [anon_sym_DOT] = ACTIONS(1070),
    [anon_sym_to] = ACTIONS(1072),
    [sym_identifier] = ACTIONS(754),
    [sym_comment] = ACTIONS(54),
  },
  [391] = {
    [sym__semicolon] = ACTIONS(1064),
    [anon_sym_DOT] = ACTIONS(1074),
    [sym_comment] = ACTIONS(54),
  },
  [392] = {
    [anon_sym_DOT] = ACTIONS(1074),
    [anon_sym_with] = ACTIONS(1076),
    [sym_comment] = ACTIONS(54),
  },
  [393] = {
    [anon_sym_RBRACE] = ACTIONS(1078),
    [anon_sym_requires] = ACTIONS(1078),
    [anon_sym_exports] = ACTIONS(1078),
    [anon_sym_opens] = ACTIONS(1078),
    [anon_sym_uses] = ACTIONS(1078),
    [anon_sym_provides] = ACTIONS(1078),
    [sym_comment] = ACTIONS(54),
  },
  [394] = {
    [sym__semicolon] = ACTIONS(1080),
    [sym_comment] = ACTIONS(54),
  },
  [395] = {
    [sym__semicolon] = ACTIONS(1082),
    [anon_sym_DOT] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [396] = {
    [ts_builtin_sym_end] = ACTIONS(1084),
    [sym_decimal_integer_literal] = ACTIONS(1086),
    [sym_hex_integer_literal] = ACTIONS(1086),
    [sym_octal_integer_literal] = ACTIONS(1086),
    [sym_binary_integer_literal] = ACTIONS(1086),
    [sym_decimal_floating_point_literal] = ACTIONS(1086),
    [sym_hex_floating_point_literal] = ACTIONS(1088),
    [anon_sym_true] = ACTIONS(1086),
    [anon_sym_false] = ACTIONS(1086),
    [anon_sym_SQUOTE] = ACTIONS(1084),
    [sym_string_literal] = ACTIONS(1084),
    [sym_null_literal] = ACTIONS(1086),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_LPAREN] = ACTIONS(1084),
    [anon_sym_BANG] = ACTIONS(1084),
    [anon_sym_TILDE] = ACTIONS(1084),
    [anon_sym_PLUS_PLUS] = ACTIONS(1084),
    [anon_sym_DASH_DASH] = ACTIONS(1084),
    [anon_sym_RBRACE] = ACTIONS(1084),
    [anon_sym_AT] = ACTIONS(1084),
    [anon_sym_open] = ACTIONS(1086),
    [anon_sym_module] = ACTIONS(1086),
    [anon_sym_static] = ACTIONS(1086),
    [anon_sym_package] = ACTIONS(1086),
    [anon_sym_import] = ACTIONS(1086),
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
    [anon_sym_void] = ACTIONS(1086),
    [anon_sym_interface] = ACTIONS(1086),
    [sym_identifier] = ACTIONS(1088),
    [sym_comment] = ACTIONS(54),
  },
  [397] = {
    [anon_sym_GT] = ACTIONS(1090),
    [sym_comment] = ACTIONS(54),
  },
  [398] = {
    [sym__semicolon] = ACTIONS(612),
    [anon_sym_LT] = ACTIONS(612),
    [anon_sym_LBRACE] = ACTIONS(612),
    [anon_sym_RBRACE] = ACTIONS(612),
    [anon_sym_AT] = ACTIONS(612),
    [anon_sym_static] = ACTIONS(614),
    [anon_sym_class] = ACTIONS(614),
    [anon_sym_public] = ACTIONS(614),
    [anon_sym_protected] = ACTIONS(614),
    [anon_sym_private] = ACTIONS(614),
    [anon_sym_abstract] = ACTIONS(614),
    [anon_sym_final] = ACTIONS(614),
    [anon_sym_strictfp] = ACTIONS(614),
    [anon_sym_default] = ACTIONS(614),
    [anon_sym_synchronized] = ACTIONS(614),
    [anon_sym_native] = ACTIONS(614),
    [anon_sym_void] = ACTIONS(614),
    [anon_sym_interface] = ACTIONS(614),
    [sym_identifier] = ACTIONS(616),
    [sym_comment] = ACTIONS(54),
  },
  [399] = {
    [anon_sym_RBRACE] = ACTIONS(1092),
    [sym_comment] = ACTIONS(54),
  },
  [400] = {
    [sym_identifier] = ACTIONS(1094),
    [sym_comment] = ACTIONS(54),
  },
  [401] = {
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_static] = ACTIONS(306),
    [anon_sym_class] = ACTIONS(306),
    [anon_sym_public] = ACTIONS(306),
    [anon_sym_protected] = ACTIONS(306),
    [anon_sym_private] = ACTIONS(306),
    [anon_sym_abstract] = ACTIONS(306),
    [anon_sym_final] = ACTIONS(306),
    [anon_sym_strictfp] = ACTIONS(306),
    [anon_sym_default] = ACTIONS(306),
    [anon_sym_synchronized] = ACTIONS(306),
    [anon_sym_native] = ACTIONS(306),
    [anon_sym_void] = ACTIONS(306),
    [anon_sym_interface] = ACTIONS(306),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [402] = {
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(1096),
    [anon_sym_DOT] = ACTIONS(1098),
    [anon_sym_AT] = ACTIONS(308),
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
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(54),
  },
  [403] = {
    [sym_type_parameters] = STATE(558),
    [sym_superclass] = STATE(559),
    [sym_super_interfaces] = STATE(560),
    [sym_class_body] = STATE(561),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [404] = {
    [sym_type_parameters] = STATE(563),
    [sym_extends_interfaces] = STATE(564),
    [sym_interface_body] = STATE(565),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [405] = {
    [anon_sym_LBRACE] = ACTIONS(1104),
    [anon_sym_throws] = ACTIONS(1104),
    [sym_comment] = ACTIONS(54),
  },
  [406] = {
    [sym__annotation] = STATE(59),
    [sym_normal_annotation] = STATE(60),
    [sym_marker_annotation] = STATE(60),
    [sym_single_element_annotation] = STATE(60),
    [sym_modifier] = STATE(61),
    [sym_variable_declarator_id] = STATE(62),
    [sym__formal_parameter_list] = STATE(566),
    [sym_formal_parameter] = STATE(63),
    [sym_receiver_parameter] = STATE(64),
    [sym_last_formal_parameter] = STATE(65),
    [aux_sym_class_or_interface_type_repeat1] = STATE(66),
    [aux_sym_normal_class_declaration_repeat1] = STATE(67),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_static] = ACTIONS(78),
    [anon_sym_public] = ACTIONS(78),
    [anon_sym_protected] = ACTIONS(78),
    [anon_sym_private] = ACTIONS(78),
    [anon_sym_abstract] = ACTIONS(78),
    [anon_sym_final] = ACTIONS(78),
    [anon_sym_strictfp] = ACTIONS(78),
    [anon_sym_default] = ACTIONS(78),
    [anon_sym_synchronized] = ACTIONS(78),
    [anon_sym_native] = ACTIONS(78),
    [anon_sym_this] = ACTIONS(80),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(82),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(54),
  },
  [407] = {
    [sym__literal] = STATE(576),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_statement] = STATE(191),
    [sym_if_then_statement] = STATE(192),
    [sym_type_arguments] = STATE(577),
    [sym_class_or_interface_type] = STATE(578),
    [sym_type_variable] = STATE(579),
    [sym_primitive_type] = STATE(579),
    [sym_integral_type] = STATE(569),
    [sym_floating_point_type] = STATE(569),
    [sym__annotation] = STATE(580),
    [sym_normal_annotation] = STATE(581),
    [sym_marker_annotation] = STATE(581),
    [sym_single_element_annotation] = STATE(581),
    [sym_package_or_type_name] = STATE(582),
    [sym_class_declaration] = STATE(191),
    [sym_normal_class_declaration] = STATE(194),
    [sym_modifier] = STATE(195),
    [sym_explicit_constructor_invocation] = STATE(583),
    [sym_ambiguous_name] = STATE(584),
    [sym_primary] = STATE(585),
    [sym_array_creation_expression] = STATE(586),
    [sym_primary_no_new_array] = STATE(587),
    [sym_class_literal] = STATE(576),
    [sym_class_instance_creation_expression] = STATE(576),
    [sym_unqualified_class_instance_creation_expression] = STATE(588),
    [sym_field_access] = STATE(576),
    [sym_array_access] = STATE(576),
    [sym_method_invocation] = STATE(576),
    [sym_method_reference] = STATE(576),
    [sym_array_type] = STATE(589),
    [sym_block_statements] = STATE(590),
    [sym_block_statement] = STATE(197),
    [sym_local_variable_declaration_statement] = STATE(191),
    [sym_local_variable_declaration] = STATE(198),
    [sym_method_name] = STATE(591),
    [aux_sym_class_or_interface_type_repeat1] = STATE(592),
    [aux_sym_normal_class_declaration_repeat1] = STATE(199),
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
    [anon_sym_LT] = ACTIONS(654),
    [anon_sym_LPAREN] = ACTIONS(1106),
    [anon_sym_if] = ACTIONS(1108),
    [anon_sym_RBRACE] = ACTIONS(1110),
    [anon_sym_boolean] = ACTIONS(1112),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(934),
    [anon_sym_double] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(1114),
    [anon_sym_static] = ACTIONS(1116),
    [anon_sym_class] = ACTIONS(1118),
    [anon_sym_public] = ACTIONS(1116),
    [anon_sym_protected] = ACTIONS(1116),
    [anon_sym_private] = ACTIONS(1116),
    [anon_sym_abstract] = ACTIONS(1116),
    [anon_sym_final] = ACTIONS(1116),
    [anon_sym_strictfp] = ACTIONS(1116),
    [anon_sym_default] = ACTIONS(1116),
    [anon_sym_synchronized] = ACTIONS(1116),
    [anon_sym_native] = ACTIONS(1116),
    [anon_sym_this] = ACTIONS(1120),
    [anon_sym_super] = ACTIONS(1122),
    [anon_sym_new] = ACTIONS(1124),
    [anon_sym_void] = ACTIONS(1126),
    [sym_identifier] = ACTIONS(1128),
    [sym_comment] = ACTIONS(54),
  },
  [408] = {
    [sym__semicolon] = ACTIONS(1130),
    [anon_sym_LT] = ACTIONS(1130),
    [anon_sym_LBRACE] = ACTIONS(1130),
    [anon_sym_RBRACE] = ACTIONS(1130),
    [anon_sym_AT] = ACTIONS(1130),
    [anon_sym_static] = ACTIONS(1132),
    [anon_sym_class] = ACTIONS(1132),
    [anon_sym_public] = ACTIONS(1132),
    [anon_sym_protected] = ACTIONS(1132),
    [anon_sym_private] = ACTIONS(1132),
    [anon_sym_abstract] = ACTIONS(1132),
    [anon_sym_final] = ACTIONS(1132),
    [anon_sym_strictfp] = ACTIONS(1132),
    [anon_sym_default] = ACTIONS(1132),
    [anon_sym_synchronized] = ACTIONS(1132),
    [anon_sym_native] = ACTIONS(1132),
    [anon_sym_void] = ACTIONS(1132),
    [anon_sym_interface] = ACTIONS(1132),
    [sym_identifier] = ACTIONS(1134),
    [sym_comment] = ACTIONS(54),
  },
  [409] = {
    [sym_constructor_body] = STATE(593),
    [anon_sym_LBRACE] = ACTIONS(808),
    [sym_comment] = ACTIONS(54),
  },
  [410] = {
    [sym__semicolon] = ACTIONS(352),
    [anon_sym_LT] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_AT] = ACTIONS(352),
    [anon_sym_static] = ACTIONS(354),
    [anon_sym_class] = ACTIONS(354),
    [anon_sym_public] = ACTIONS(354),
    [anon_sym_protected] = ACTIONS(354),
    [anon_sym_private] = ACTIONS(354),
    [anon_sym_abstract] = ACTIONS(354),
    [anon_sym_final] = ACTIONS(354),
    [anon_sym_strictfp] = ACTIONS(354),
    [anon_sym_default] = ACTIONS(354),
    [anon_sym_synchronized] = ACTIONS(354),
    [anon_sym_native] = ACTIONS(354),
    [anon_sym_void] = ACTIONS(354),
    [anon_sym_interface] = ACTIONS(354),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(54),
  },
  [411] = {
    [sym__semicolon] = ACTIONS(368),
    [anon_sym_LT] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_RBRACE] = ACTIONS(368),
    [anon_sym_AT] = ACTIONS(368),
    [anon_sym_static] = ACTIONS(370),
    [anon_sym_class] = ACTIONS(370),
    [anon_sym_public] = ACTIONS(370),
    [anon_sym_protected] = ACTIONS(370),
    [anon_sym_private] = ACTIONS(370),
    [anon_sym_abstract] = ACTIONS(370),
    [anon_sym_final] = ACTIONS(370),
    [anon_sym_strictfp] = ACTIONS(370),
    [anon_sym_default] = ACTIONS(370),
    [anon_sym_synchronized] = ACTIONS(370),
    [anon_sym_native] = ACTIONS(370),
    [anon_sym_void] = ACTIONS(370),
    [anon_sym_interface] = ACTIONS(370),
    [sym_identifier] = ACTIONS(372),
    [sym_comment] = ACTIONS(54),
  },
  [412] = {
    [sym_package_or_type_name] = STATE(402),
    [anon_sym_interface] = ACTIONS(1136),
    [sym_identifier] = ACTIONS(788),
    [sym_comment] = ACTIONS(54),
  },
  [413] = {
    [sym_identifier] = ACTIONS(1138),
    [sym_comment] = ACTIONS(54),
  },
  [414] = {
    [sym_identifier] = ACTIONS(1140),
    [sym_comment] = ACTIONS(54),
  },
  [415] = {
    [sym_constructor_body] = STATE(593),
    [sym_throws] = STATE(597),
    [anon_sym_LBRACE] = ACTIONS(808),
    [anon_sym_throws] = ACTIONS(378),
    [sym_comment] = ACTIONS(54),
  },
  [416] = {
    [sym_method_body] = STATE(598),
    [sym_block] = STATE(410),
    [sym__semicolon] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(522),
    [sym_comment] = ACTIONS(54),
  },
  [417] = {
    [ts_builtin_sym_end] = ACTIONS(1142),
    [sym_decimal_integer_literal] = ACTIONS(1144),
    [sym_hex_integer_literal] = ACTIONS(1144),
    [sym_octal_integer_literal] = ACTIONS(1144),
    [sym_binary_integer_literal] = ACTIONS(1144),
    [sym_decimal_floating_point_literal] = ACTIONS(1144),
    [sym_hex_floating_point_literal] = ACTIONS(1146),
    [anon_sym_true] = ACTIONS(1144),
    [anon_sym_false] = ACTIONS(1144),
    [anon_sym_SQUOTE] = ACTIONS(1142),
    [sym_string_literal] = ACTIONS(1142),
    [sym_null_literal] = ACTIONS(1144),
    [anon_sym_LT] = ACTIONS(1142),
    [anon_sym_LPAREN] = ACTIONS(1142),
    [anon_sym_BANG] = ACTIONS(1142),
    [anon_sym_TILDE] = ACTIONS(1142),
    [anon_sym_PLUS_PLUS] = ACTIONS(1142),
    [anon_sym_DASH_DASH] = ACTIONS(1142),
    [anon_sym_RBRACE] = ACTIONS(1142),
    [anon_sym_AT] = ACTIONS(1142),
    [anon_sym_open] = ACTIONS(1144),
    [anon_sym_module] = ACTIONS(1144),
    [anon_sym_static] = ACTIONS(1144),
    [anon_sym_package] = ACTIONS(1144),
    [anon_sym_import] = ACTIONS(1144),
    [anon_sym_class] = ACTIONS(1144),
    [anon_sym_public] = ACTIONS(1144),
    [anon_sym_protected] = ACTIONS(1144),
    [anon_sym_private] = ACTIONS(1144),
    [anon_sym_abstract] = ACTIONS(1144),
    [anon_sym_final] = ACTIONS(1144),
    [anon_sym_strictfp] = ACTIONS(1144),
    [anon_sym_default] = ACTIONS(1144),
    [anon_sym_synchronized] = ACTIONS(1144),
    [anon_sym_native] = ACTIONS(1144),
    [anon_sym_void] = ACTIONS(1144),
    [anon_sym_interface] = ACTIONS(1144),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(54),
  },
  [418] = {
    [sym__semicolon] = ACTIONS(1148),
    [anon_sym_LT] = ACTIONS(1148),
    [anon_sym_LBRACE] = ACTIONS(1148),
    [anon_sym_RBRACE] = ACTIONS(1148),
    [anon_sym_AT] = ACTIONS(1148),
    [anon_sym_static] = ACTIONS(1150),
    [anon_sym_class] = ACTIONS(1150),
    [anon_sym_public] = ACTIONS(1150),
    [anon_sym_protected] = ACTIONS(1150),
    [anon_sym_private] = ACTIONS(1150),
    [anon_sym_abstract] = ACTIONS(1150),
    [anon_sym_final] = ACTIONS(1150),
    [anon_sym_strictfp] = ACTIONS(1150),
    [anon_sym_default] = ACTIONS(1150),
    [anon_sym_synchronized] = ACTIONS(1150),
    [anon_sym_native] = ACTIONS(1150),
    [anon_sym_void] = ACTIONS(1150),
    [anon_sym_interface] = ACTIONS(1150),
    [sym_identifier] = ACTIONS(1152),
    [sym_comment] = ACTIONS(54),
  },
  [419] = {
    [sym_class_or_interface_type] = STATE(599),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(213),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(54),
  },
  [420] = {
    [anon_sym_COMMA] = ACTIONS(1154),
    [anon_sym_LBRACE] = ACTIONS(1156),
    [sym_comment] = ACTIONS(54),
  },
  [421] = {
    [sym_class_body] = STATE(601),
    [anon_sym_LBRACE] = ACTIONS(328),
    [sym_comment] = ACTIONS(54),
  },
  [422] = {
    [ts_builtin_sym_end] = ACTIONS(1158),
    [sym_decimal_integer_literal] = ACTIONS(1160),
    [sym_hex_integer_literal] = ACTIONS(1160),
    [sym_octal_integer_literal] = ACTIONS(1160),
    [sym_binary_integer_literal] = ACTIONS(1160),
    [sym_decimal_floating_point_literal] = ACTIONS(1160),
    [sym_hex_floating_point_literal] = ACTIONS(1162),
    [anon_sym_true] = ACTIONS(1160),
    [anon_sym_false] = ACTIONS(1160),
    [anon_sym_SQUOTE] = ACTIONS(1158),
    [sym_string_literal] = ACTIONS(1158),
    [sym_null_literal] = ACTIONS(1160),
    [anon_sym_LT] = ACTIONS(1158),
    [anon_sym_LPAREN] = ACTIONS(1158),
    [anon_sym_BANG] = ACTIONS(1158),
    [anon_sym_TILDE] = ACTIONS(1158),
    [anon_sym_PLUS_PLUS] = ACTIONS(1158),
    [anon_sym_DASH_DASH] = ACTIONS(1158),
    [anon_sym_RBRACE] = ACTIONS(1158),
    [anon_sym_AT] = ACTIONS(1158),
    [anon_sym_open] = ACTIONS(1160),
    [anon_sym_module] = ACTIONS(1160),
    [anon_sym_static] = ACTIONS(1160),
    [anon_sym_package] = ACTIONS(1160),
    [anon_sym_import] = ACTIONS(1160),
    [anon_sym_class] = ACTIONS(1160),
    [anon_sym_public] = ACTIONS(1160),
    [anon_sym_protected] = ACTIONS(1160),
    [anon_sym_private] = ACTIONS(1160),
    [anon_sym_abstract] = ACTIONS(1160),
    [anon_sym_final] = ACTIONS(1160),
    [anon_sym_strictfp] = ACTIONS(1160),
    [anon_sym_default] = ACTIONS(1160),
    [anon_sym_synchronized] = ACTIONS(1160),
    [anon_sym_native] = ACTIONS(1160),
    [anon_sym_void] = ACTIONS(1160),
    [anon_sym_interface] = ACTIONS(1160),
    [sym_identifier] = ACTIONS(1162),
    [sym_comment] = ACTIONS(54),
  },
  [423] = {
    [sym__semicolon] = ACTIONS(1164),
    [anon_sym_LT] = ACTIONS(1164),
    [anon_sym_RBRACE] = ACTIONS(1164),
    [anon_sym_AT] = ACTIONS(1164),
    [anon_sym_static] = ACTIONS(1166),
    [anon_sym_class] = ACTIONS(1166),
    [anon_sym_public] = ACTIONS(1166),
    [anon_sym_protected] = ACTIONS(1166),
    [anon_sym_private] = ACTIONS(1166),
    [anon_sym_abstract] = ACTIONS(1166),
    [anon_sym_final] = ACTIONS(1166),
    [anon_sym_strictfp] = ACTIONS(1166),
    [anon_sym_default] = ACTIONS(1166),
    [anon_sym_synchronized] = ACTIONS(1166),
    [anon_sym_native] = ACTIONS(1166),
    [anon_sym_void] = ACTIONS(1166),
    [anon_sym_interface] = ACTIONS(1166),
    [sym_identifier] = ACTIONS(1168),
    [sym_comment] = ACTIONS(54),
  },
  [424] = {
    [sym_variable_declarator] = STATE(602),
    [sym_variable_declarator_id] = STATE(126),
    [sym_identifier] = ACTIONS(259),
    [sym_comment] = ACTIONS(54),
  },
  [425] = {
    [sym__semicolon] = ACTIONS(1170),
    [anon_sym_COMMA] = ACTIONS(1172),
    [sym_comment] = ACTIONS(54),
  },
  [426] = {
    [sym__semicolon] = ACTIONS(1174),
    [sym_comment] = ACTIONS(54),
  },
  [427] = {
    [ts_builtin_sym_end] = ACTIONS(1176),
    [sym_decimal_integer_literal] = ACTIONS(1178),
    [sym_hex_integer_literal] = ACTIONS(1178),
    [sym_octal_integer_literal] = ACTIONS(1178),
    [sym_binary_integer_literal] = ACTIONS(1178),
    [sym_decimal_floating_point_literal] = ACTIONS(1178),
    [sym_hex_floating_point_literal] = ACTIONS(1180),
    [anon_sym_true] = ACTIONS(1178),
    [anon_sym_false] = ACTIONS(1178),
    [anon_sym_SQUOTE] = ACTIONS(1176),
    [sym_string_literal] = ACTIONS(1176),
    [sym_null_literal] = ACTIONS(1178),
    [anon_sym_LT] = ACTIONS(1176),
    [anon_sym_LPAREN] = ACTIONS(1176),
    [anon_sym_BANG] = ACTIONS(1176),
    [anon_sym_TILDE] = ACTIONS(1176),
    [anon_sym_PLUS_PLUS] = ACTIONS(1176),
    [anon_sym_DASH_DASH] = ACTIONS(1176),
    [anon_sym_RBRACE] = ACTIONS(1176),
    [anon_sym_AT] = ACTIONS(1176),
    [anon_sym_open] = ACTIONS(1178),
    [anon_sym_module] = ACTIONS(1178),
    [anon_sym_static] = ACTIONS(1178),
    [anon_sym_package] = ACTIONS(1178),
    [anon_sym_import] = ACTIONS(1178),
    [anon_sym_class] = ACTIONS(1178),
    [anon_sym_public] = ACTIONS(1178),
    [anon_sym_protected] = ACTIONS(1178),
    [anon_sym_private] = ACTIONS(1178),
    [anon_sym_abstract] = ACTIONS(1178),
    [anon_sym_final] = ACTIONS(1178),
    [anon_sym_strictfp] = ACTIONS(1178),
    [anon_sym_default] = ACTIONS(1178),
    [anon_sym_synchronized] = ACTIONS(1178),
    [anon_sym_native] = ACTIONS(1178),
    [anon_sym_void] = ACTIONS(1178),
    [anon_sym_interface] = ACTIONS(1178),
    [sym_identifier] = ACTIONS(1180),
    [sym_comment] = ACTIONS(54),
  },
  [428] = {
    [sym__semicolon] = ACTIONS(1182),
    [anon_sym_LT] = ACTIONS(1182),
    [anon_sym_RBRACE] = ACTIONS(1182),
    [anon_sym_AT] = ACTIONS(1182),
    [anon_sym_static] = ACTIONS(1184),
    [anon_sym_class] = ACTIONS(1184),
    [anon_sym_public] = ACTIONS(1184),
    [anon_sym_protected] = ACTIONS(1184),
    [anon_sym_private] = ACTIONS(1184),
    [anon_sym_abstract] = ACTIONS(1184),
    [anon_sym_final] = ACTIONS(1184),
    [anon_sym_strictfp] = ACTIONS(1184),
    [anon_sym_default] = ACTIONS(1184),
    [anon_sym_synchronized] = ACTIONS(1184),
    [anon_sym_native] = ACTIONS(1184),
    [anon_sym_void] = ACTIONS(1184),
    [anon_sym_interface] = ACTIONS(1184),
    [sym_identifier] = ACTIONS(1186),
    [sym_comment] = ACTIONS(54),
  },
  [429] = {
    [ts_builtin_sym_end] = ACTIONS(1188),
    [sym_decimal_integer_literal] = ACTIONS(1190),
    [sym_hex_integer_literal] = ACTIONS(1190),
    [sym_octal_integer_literal] = ACTIONS(1190),
    [sym_binary_integer_literal] = ACTIONS(1190),
    [sym_decimal_floating_point_literal] = ACTIONS(1190),
    [sym_hex_floating_point_literal] = ACTIONS(1192),
    [anon_sym_true] = ACTIONS(1190),
    [anon_sym_false] = ACTIONS(1190),
    [anon_sym_SQUOTE] = ACTIONS(1188),
    [sym_string_literal] = ACTIONS(1188),
    [sym_null_literal] = ACTIONS(1190),
    [anon_sym_LT] = ACTIONS(1188),
    [anon_sym_LPAREN] = ACTIONS(1188),
    [anon_sym_BANG] = ACTIONS(1188),
    [anon_sym_TILDE] = ACTIONS(1188),
    [anon_sym_PLUS_PLUS] = ACTIONS(1188),
    [anon_sym_DASH_DASH] = ACTIONS(1188),
    [anon_sym_RBRACE] = ACTIONS(1188),
    [anon_sym_AT] = ACTIONS(1188),
    [anon_sym_open] = ACTIONS(1190),
    [anon_sym_module] = ACTIONS(1190),
    [anon_sym_static] = ACTIONS(1190),
    [anon_sym_package] = ACTIONS(1190),
    [anon_sym_import] = ACTIONS(1190),
    [anon_sym_class] = ACTIONS(1190),
    [anon_sym_public] = ACTIONS(1190),
    [anon_sym_protected] = ACTIONS(1190),
    [anon_sym_private] = ACTIONS(1190),
    [anon_sym_abstract] = ACTIONS(1190),
    [anon_sym_final] = ACTIONS(1190),
    [anon_sym_strictfp] = ACTIONS(1190),
    [anon_sym_default] = ACTIONS(1190),
    [anon_sym_synchronized] = ACTIONS(1190),
    [anon_sym_native] = ACTIONS(1190),
    [anon_sym_void] = ACTIONS(1190),
    [anon_sym_interface] = ACTIONS(1190),
    [sym_identifier] = ACTIONS(1192),
    [sym_comment] = ACTIONS(54),
  },
  [430] = {
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_PLUS_EQ] = ACTIONS(550),
    [anon_sym_DASH_EQ] = ACTIONS(550),
    [anon_sym_STAR_EQ] = ACTIONS(550),
    [anon_sym_SLASH_EQ] = ACTIONS(550),
    [anon_sym_AMP_EQ] = ACTIONS(550),
    [anon_sym_PIPE_EQ] = ACTIONS(550),
    [anon_sym_CARET_EQ] = ACTIONS(550),
    [anon_sym_PERCENT_EQ] = ACTIONS(550),
    [anon_sym_LT_LT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(550),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [431] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(554),
    [anon_sym_GT_EQ] = ACTIONS(554),
    [anon_sym_LT_EQ] = ACTIONS(554),
    [anon_sym_BANG_EQ] = ACTIONS(554),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [432] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [433] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [434] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [435] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_AMP_EQ] = ACTIONS(560),
    [anon_sym_PIPE_EQ] = ACTIONS(560),
    [anon_sym_CARET_EQ] = ACTIONS(560),
    [anon_sym_PERCENT_EQ] = ACTIONS(560),
    [anon_sym_LT_LT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(1194),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [436] = {
    [sym__semicolon] = ACTIONS(1196),
    [anon_sym_EQ] = ACTIONS(1198),
    [anon_sym_PLUS_EQ] = ACTIONS(1196),
    [anon_sym_DASH_EQ] = ACTIONS(1196),
    [anon_sym_STAR_EQ] = ACTIONS(1196),
    [anon_sym_SLASH_EQ] = ACTIONS(1196),
    [anon_sym_AMP_EQ] = ACTIONS(1196),
    [anon_sym_PIPE_EQ] = ACTIONS(1196),
    [anon_sym_CARET_EQ] = ACTIONS(1196),
    [anon_sym_PERCENT_EQ] = ACTIONS(1196),
    [anon_sym_LT_LT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_PIPE_PIPE] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(138),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [437] = {
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_PLUS_EQ] = ACTIONS(550),
    [anon_sym_DASH_EQ] = ACTIONS(550),
    [anon_sym_STAR_EQ] = ACTIONS(550),
    [anon_sym_SLASH_EQ] = ACTIONS(550),
    [anon_sym_AMP_EQ] = ACTIONS(550),
    [anon_sym_PIPE_EQ] = ACTIONS(550),
    [anon_sym_CARET_EQ] = ACTIONS(550),
    [anon_sym_PERCENT_EQ] = ACTIONS(550),
    [anon_sym_LT_LT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_LT] = ACTIONS(586),
    [anon_sym_EQ_EQ] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(588),
    [anon_sym_BANG_EQ] = ACTIONS(588),
    [anon_sym_AMP_AMP] = ACTIONS(590),
    [anon_sym_PIPE_PIPE] = ACTIONS(592),
    [anon_sym_PLUS] = ACTIONS(594),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym_STAR] = ACTIONS(596),
    [anon_sym_SLASH] = ACTIONS(596),
    [anon_sym_AMP] = ACTIONS(598),
    [anon_sym_PIPE] = ACTIONS(600),
    [anon_sym_CARET] = ACTIONS(600),
    [anon_sym_PERCENT] = ACTIONS(596),
    [anon_sym_LT_LT] = ACTIONS(596),
    [anon_sym_GT_GT] = ACTIONS(596),
    [anon_sym_GT_GT_GT] = ACTIONS(596),
    [anon_sym_QMARK] = ACTIONS(602),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(550),
    [sym_comment] = ACTIONS(54),
  },
  [438] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(554),
    [anon_sym_GT_EQ] = ACTIONS(554),
    [anon_sym_LT_EQ] = ACTIONS(554),
    [anon_sym_BANG_EQ] = ACTIONS(554),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(596),
    [anon_sym_SLASH] = ACTIONS(596),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(596),
    [anon_sym_LT_LT] = ACTIONS(596),
    [anon_sym_GT_GT] = ACTIONS(596),
    [anon_sym_GT_GT_GT] = ACTIONS(596),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [439] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_LT] = ACTIONS(586),
    [anon_sym_EQ_EQ] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(588),
    [anon_sym_BANG_EQ] = ACTIONS(588),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(594),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym_STAR] = ACTIONS(596),
    [anon_sym_SLASH] = ACTIONS(596),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(596),
    [anon_sym_LT_LT] = ACTIONS(596),
    [anon_sym_GT_GT] = ACTIONS(596),
    [anon_sym_GT_GT_GT] = ACTIONS(596),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [440] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_LT] = ACTIONS(586),
    [anon_sym_EQ_EQ] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(588),
    [anon_sym_BANG_EQ] = ACTIONS(588),
    [anon_sym_AMP_AMP] = ACTIONS(590),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(594),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym_STAR] = ACTIONS(596),
    [anon_sym_SLASH] = ACTIONS(596),
    [anon_sym_AMP] = ACTIONS(598),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(596),
    [anon_sym_LT_LT] = ACTIONS(596),
    [anon_sym_GT_GT] = ACTIONS(596),
    [anon_sym_GT_GT_GT] = ACTIONS(596),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [441] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_LT] = ACTIONS(586),
    [anon_sym_EQ_EQ] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(588),
    [anon_sym_BANG_EQ] = ACTIONS(588),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(596),
    [anon_sym_SLASH] = ACTIONS(596),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(596),
    [anon_sym_LT_LT] = ACTIONS(596),
    [anon_sym_GT_GT] = ACTIONS(596),
    [anon_sym_GT_GT_GT] = ACTIONS(596),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [442] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_AMP_EQ] = ACTIONS(560),
    [anon_sym_PIPE_EQ] = ACTIONS(560),
    [anon_sym_CARET_EQ] = ACTIONS(560),
    [anon_sym_PERCENT_EQ] = ACTIONS(560),
    [anon_sym_LT_LT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(1200),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [443] = {
    [sym__semicolon] = ACTIONS(1202),
    [anon_sym_LBRACE] = ACTIONS(1202),
    [sym_comment] = ACTIONS(54),
  },
  [444] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [445] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [446] = {
    [anon_sym_EQ] = ACTIONS(1204),
    [anon_sym_PLUS_EQ] = ACTIONS(1206),
    [anon_sym_DASH_EQ] = ACTIONS(1206),
    [anon_sym_STAR_EQ] = ACTIONS(1206),
    [anon_sym_SLASH_EQ] = ACTIONS(1206),
    [anon_sym_AMP_EQ] = ACTIONS(1206),
    [anon_sym_PIPE_EQ] = ACTIONS(1206),
    [anon_sym_CARET_EQ] = ACTIONS(1206),
    [anon_sym_PERCENT_EQ] = ACTIONS(1206),
    [anon_sym_LT_LT_EQ] = ACTIONS(1206),
    [anon_sym_GT_GT_EQ] = ACTIONS(1206),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1206),
    [anon_sym_GT] = ACTIONS(1208),
    [anon_sym_LT] = ACTIONS(1208),
    [anon_sym_EQ_EQ] = ACTIONS(1210),
    [anon_sym_GT_EQ] = ACTIONS(1210),
    [anon_sym_LT_EQ] = ACTIONS(1210),
    [anon_sym_BANG_EQ] = ACTIONS(1210),
    [anon_sym_AMP_AMP] = ACTIONS(1212),
    [anon_sym_PIPE_PIPE] = ACTIONS(1214),
    [anon_sym_PLUS] = ACTIONS(1216),
    [anon_sym_DASH] = ACTIONS(1216),
    [anon_sym_STAR] = ACTIONS(1218),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(1222),
    [anon_sym_CARET] = ACTIONS(1222),
    [anon_sym_PERCENT] = ACTIONS(1218),
    [anon_sym_LT_LT] = ACTIONS(1218),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(1224),
    [anon_sym_QMARK] = ACTIONS(1226),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [447] = {
    [sym__literal] = STATE(617),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(618),
    [sym_element_value_pair] = STATE(243),
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
  [448] = {
    [sym_identifier] = ACTIONS(1232),
    [sym_comment] = ACTIONS(54),
  },
  [449] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(258),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(268),
    [sym_class_body_declaration] = STATE(269),
    [sym_constructor_declaration] = STATE(270),
    [sym_constructor_declarator] = STATE(271),
    [sym_class_member_declaration] = STATE(270),
    [sym_interface_declaration] = STATE(258),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_block] = STATE(270),
    [sym_method_declaration] = STATE(258),
    [aux_sym_normal_class_declaration_repeat1] = STATE(274),
    [aux_sym_class_body_repeat1] = STATE(621),
    [sym__semicolon] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(1234),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [450] = {
    [sym_superclass] = STATE(622),
    [sym_super_interfaces] = STATE(623),
    [sym_class_body] = STATE(624),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [451] = {
    [sym_super_interfaces] = STATE(623),
    [sym_class_body] = STATE(624),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [452] = {
    [sym_class_body] = STATE(624),
    [anon_sym_LBRACE] = ACTIONS(882),
    [sym_comment] = ACTIONS(54),
  },
  [453] = {
    [anon_sym_if] = ACTIONS(534),
    [anon_sym_RBRACE] = ACTIONS(534),
    [anon_sym_elseif] = ACTIONS(534),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(534),
    [anon_sym_class] = ACTIONS(534),
    [anon_sym_public] = ACTIONS(534),
    [anon_sym_protected] = ACTIONS(534),
    [anon_sym_private] = ACTIONS(534),
    [anon_sym_abstract] = ACTIONS(534),
    [anon_sym_final] = ACTIONS(534),
    [anon_sym_strictfp] = ACTIONS(534),
    [anon_sym_default] = ACTIONS(534),
    [anon_sym_synchronized] = ACTIONS(534),
    [anon_sym_native] = ACTIONS(534),
    [sym_comment] = ACTIONS(54),
  },
  [454] = {
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
  [455] = {
    [sym_type_parameters] = STATE(625),
    [sym_superclass] = STATE(622),
    [sym_super_interfaces] = STATE(623),
    [sym_class_body] = STATE(624),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [456] = {
    [sym__semicolon] = ACTIONS(1238),
    [anon_sym_LBRACE] = ACTIONS(1238),
    [anon_sym_throws] = ACTIONS(1238),
    [sym_comment] = ACTIONS(54),
  },
  [457] = {
    [sym_dims] = STATE(626),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [sym__semicolon] = ACTIONS(1238),
    [anon_sym_LBRACE] = ACTIONS(1238),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_throws] = ACTIONS(1238),
    [sym_comment] = ACTIONS(54),
  },
  [458] = {
    [sym_type_argument] = STATE(627),
    [sym_reference_type] = STATE(480),
    [sym_class_or_interface_type] = STATE(481),
    [sym_primitive_type] = STATE(482),
    [sym_integral_type] = STATE(475),
    [sym_floating_point_type] = STATE(475),
    [sym__annotation] = STATE(483),
    [sym_normal_annotation] = STATE(484),
    [sym_marker_annotation] = STATE(484),
    [sym_single_element_annotation] = STATE(484),
    [aux_sym_class_or_interface_type_repeat1] = STATE(485),
    [anon_sym_boolean] = ACTIONS(930),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(934),
    [anon_sym_double] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(936),
    [sym_identifier] = ACTIONS(938),
    [sym_comment] = ACTIONS(54),
  },
  [459] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(629),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1240),
    [sym_comment] = ACTIONS(54),
  },
  [460] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(630),
    [anon_sym_DOT] = ACTIONS(906),
    [anon_sym_AT] = ACTIONS(942),
    [sym_identifier] = ACTIONS(1242),
    [sym_comment] = ACTIONS(54),
  },
  [461] = {
    [anon_sym_DOT] = ACTIONS(1244),
    [anon_sym_AT] = ACTIONS(942),
    [sym_identifier] = ACTIONS(1242),
    [sym_comment] = ACTIONS(54),
  },
  [462] = {
    [sym__semicolon] = ACTIONS(1246),
    [anon_sym_COMMA] = ACTIONS(1246),
    [anon_sym_LBRACE] = ACTIONS(1246),
    [sym_comment] = ACTIONS(54),
  },
  [463] = {
    [sym__semicolon] = ACTIONS(1248),
    [anon_sym_COMMA] = ACTIONS(1248),
    [anon_sym_LBRACE] = ACTIONS(1248),
    [sym_comment] = ACTIONS(54),
  },
  [464] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1250),
    [sym_comment] = ACTIONS(54),
  },
  [465] = {
    [sym__semicolon] = ACTIONS(1252),
    [anon_sym_COMMA] = ACTIONS(1252),
    [anon_sym_LBRACE] = ACTIONS(1252),
    [sym_comment] = ACTIONS(54),
  },
  [466] = {
    [sym__semicolon] = ACTIONS(1254),
    [anon_sym_COMMA] = ACTIONS(1256),
    [anon_sym_LBRACE] = ACTIONS(1254),
    [sym_comment] = ACTIONS(54),
  },
  [467] = {
    [sym_type_arguments] = STATE(634),
    [aux_sym_class_or_interface_type_repeat2] = STATE(630),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_DOT] = ACTIONS(906),
    [anon_sym_AT] = ACTIONS(942),
    [sym_identifier] = ACTIONS(1242),
    [sym_comment] = ACTIONS(54),
  },
  [468] = {
    [sym_module_directive] = STATE(253),
    [aux_sym_module_declaration_repeat1] = STATE(635),
    [anon_sym_RBRACE] = ACTIONS(1050),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [469] = {
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
  [470] = {
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
  [471] = {
    [sym_super_interfaces] = STATE(636),
    [sym_class_body] = STATE(601),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [472] = {
    [sym_interface_body] = STATE(637),
    [anon_sym_LBRACE] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [473] = {
    [anon_sym_AT] = ACTIONS(1034),
    [sym_identifier] = ACTIONS(1270),
    [sym_comment] = ACTIONS(54),
  },
  [474] = {
    [anon_sym_AT] = ACTIONS(1036),
    [sym_identifier] = ACTIONS(1272),
    [sym_comment] = ACTIONS(54),
  },
  [475] = {
    [anon_sym_LBRACK] = ACTIONS(1274),
    [anon_sym_AT] = ACTIONS(1274),
    [sym_comment] = ACTIONS(54),
  },
  [476] = {
    [anon_sym_DOT] = ACTIONS(1276),
    [anon_sym_LBRACK] = ACTIONS(1276),
    [anon_sym_AT] = ACTIONS(1276),
    [sym_comment] = ACTIONS(54),
  },
  [477] = {
    [anon_sym_DOT] = ACTIONS(1278),
    [anon_sym_LBRACK] = ACTIONS(1278),
    [anon_sym_AT] = ACTIONS(1278),
    [sym_comment] = ACTIONS(54),
  },
  [478] = {
    [sym_package_or_type_name] = STATE(639),
    [sym_identifier] = ACTIONS(1280),
    [sym_comment] = ACTIONS(54),
  },
  [479] = {
    [aux_sym_type_arguments_repeat1] = STATE(642),
    [anon_sym_GT] = ACTIONS(1282),
    [anon_sym_COMMA] = ACTIONS(1284),
    [sym_comment] = ACTIONS(54),
  },
  [480] = {
    [anon_sym_GT] = ACTIONS(1286),
    [anon_sym_COMMA] = ACTIONS(1286),
    [sym_comment] = ACTIONS(54),
  },
  [481] = {
    [sym_dims] = STATE(643),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [anon_sym_GT] = ACTIONS(1288),
    [anon_sym_COMMA] = ACTIONS(1288),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [482] = {
    [sym_dims] = STATE(643),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [483] = {
    [anon_sym_boolean] = ACTIONS(239),
    [anon_sym_byte] = ACTIONS(239),
    [anon_sym_short] = ACTIONS(239),
    [anon_sym_int] = ACTIONS(239),
    [anon_sym_long] = ACTIONS(239),
    [anon_sym_char] = ACTIONS(239),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_double] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(161),
    [sym_identifier] = ACTIONS(1290),
    [sym_comment] = ACTIONS(54),
  },
  [484] = {
    [anon_sym_boolean] = ACTIONS(241),
    [anon_sym_byte] = ACTIONS(241),
    [anon_sym_short] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(241),
    [anon_sym_long] = ACTIONS(241),
    [anon_sym_char] = ACTIONS(241),
    [anon_sym_float] = ACTIONS(241),
    [anon_sym_double] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(163),
    [sym_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(54),
  },
  [485] = {
    [sym_integral_type] = STATE(644),
    [sym_floating_point_type] = STATE(644),
    [sym__annotation] = STATE(645),
    [sym_normal_annotation] = STATE(484),
    [sym_marker_annotation] = STATE(484),
    [sym_single_element_annotation] = STATE(484),
    [anon_sym_boolean] = ACTIONS(1292),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(934),
    [anon_sym_double] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(936),
    [sym_identifier] = ACTIONS(1294),
    [sym_comment] = ACTIONS(54),
  },
  [486] = {
    [sym_type_arguments] = STATE(646),
    [anon_sym_GT] = ACTIONS(1296),
    [anon_sym_LT] = ACTIONS(654),
    [anon_sym_AMP] = ACTIONS(1296),
    [anon_sym_COMMA] = ACTIONS(1296),
    [anon_sym_LBRACE] = ACTIONS(1296),
    [anon_sym_DOT] = ACTIONS(1296),
    [anon_sym_LBRACK] = ACTIONS(1296),
    [anon_sym_AT] = ACTIONS(1296),
    [anon_sym_implements] = ACTIONS(1296),
    [anon_sym_COLON_COLON] = ACTIONS(1296),
    [sym_comment] = ACTIONS(54),
  },
  [487] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1298),
    [sym_comment] = ACTIONS(54),
  },
  [488] = {
    [anon_sym_GT] = ACTIONS(1300),
    [anon_sym_AMP] = ACTIONS(1300),
    [anon_sym_COMMA] = ACTIONS(1300),
    [anon_sym_LBRACE] = ACTIONS(1300),
    [anon_sym_DOT] = ACTIONS(944),
    [anon_sym_LBRACK] = ACTIONS(1300),
    [anon_sym_AT] = ACTIONS(1300),
    [anon_sym_implements] = ACTIONS(1300),
    [anon_sym_COLON_COLON] = ACTIONS(1300),
    [sym_comment] = ACTIONS(54),
  },
  [489] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(648),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1298),
    [sym_comment] = ACTIONS(54),
  },
  [490] = {
    [anon_sym_GT] = ACTIONS(1302),
    [anon_sym_AMP] = ACTIONS(1302),
    [anon_sym_COMMA] = ACTIONS(1302),
    [sym_comment] = ACTIONS(54),
  },
  [491] = {
    [sym_class_or_interface_type] = STATE(649),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(213),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(54),
  },
  [492] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(650),
    [anon_sym_GT] = ACTIONS(1300),
    [anon_sym_AMP] = ACTIONS(1300),
    [anon_sym_COMMA] = ACTIONS(1300),
    [anon_sym_LBRACE] = ACTIONS(1300),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(1300),
    [anon_sym_AT] = ACTIONS(1300),
    [anon_sym_implements] = ACTIONS(1300),
    [anon_sym_COLON_COLON] = ACTIONS(1300),
    [sym_comment] = ACTIONS(54),
  },
  [493] = {
    [anon_sym_AT] = ACTIONS(1034),
    [anon_sym_static] = ACTIONS(1270),
    [anon_sym_public] = ACTIONS(1270),
    [anon_sym_protected] = ACTIONS(1270),
    [anon_sym_private] = ACTIONS(1270),
    [anon_sym_abstract] = ACTIONS(1270),
    [anon_sym_final] = ACTIONS(1270),
    [anon_sym_strictfp] = ACTIONS(1270),
    [anon_sym_default] = ACTIONS(1270),
    [anon_sym_synchronized] = ACTIONS(1270),
    [anon_sym_native] = ACTIONS(1270),
    [anon_sym_this] = ACTIONS(1270),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1034),
    [sym_identifier] = ACTIONS(1304),
    [sym_comment] = ACTIONS(54),
  },
  [494] = {
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1272),
    [anon_sym_public] = ACTIONS(1272),
    [anon_sym_protected] = ACTIONS(1272),
    [anon_sym_private] = ACTIONS(1272),
    [anon_sym_abstract] = ACTIONS(1272),
    [anon_sym_final] = ACTIONS(1272),
    [anon_sym_strictfp] = ACTIONS(1272),
    [anon_sym_default] = ACTIONS(1272),
    [anon_sym_synchronized] = ACTIONS(1272),
    [anon_sym_native] = ACTIONS(1272),
    [anon_sym_this] = ACTIONS(1272),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1036),
    [sym_identifier] = ACTIONS(1306),
    [sym_comment] = ACTIONS(54),
  },
  [495] = {
    [sym__semicolon] = ACTIONS(1308),
    [anon_sym_EQ] = ACTIONS(1308),
    [anon_sym_GT] = ACTIONS(1308),
    [anon_sym_RPAREN] = ACTIONS(1308),
    [anon_sym_COMMA] = ACTIONS(1308),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [anon_sym_DOT] = ACTIONS(1308),
    [anon_sym_LBRACK] = ACTIONS(1308),
    [anon_sym_AT] = ACTIONS(1308),
    [anon_sym_default] = ACTIONS(1308),
    [anon_sym_COLON_COLON] = ACTIONS(1308),
    [anon_sym_throws] = ACTIONS(1308),
    [sym_comment] = ACTIONS(54),
  },
  [496] = {
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_this] = ACTIONS(924),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(724),
    [sym_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(54),
  },
  [497] = {
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(1310),
    [sym_comment] = ACTIONS(54),
  },
  [498] = {
    [anon_sym_RPAREN] = ACTIONS(1310),
    [sym_comment] = ACTIONS(54),
  },
  [499] = {
    [anon_sym_RPAREN] = ACTIONS(1312),
    [sym_comment] = ACTIONS(54),
  },
  [500] = {
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(738),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_this] = ACTIONS(738),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(736),
    [sym_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(54),
  },
  [501] = {
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(924),
    [anon_sym_public] = ACTIONS(924),
    [anon_sym_protected] = ACTIONS(924),
    [anon_sym_private] = ACTIONS(924),
    [anon_sym_abstract] = ACTIONS(924),
    [anon_sym_final] = ACTIONS(924),
    [anon_sym_strictfp] = ACTIONS(924),
    [anon_sym_default] = ACTIONS(924),
    [anon_sym_synchronized] = ACTIONS(924),
    [anon_sym_native] = ACTIONS(924),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(724),
    [sym_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(54),
  },
  [502] = {
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(1314),
    [sym_comment] = ACTIONS(54),
  },
  [503] = {
    [anon_sym_RPAREN] = ACTIONS(1314),
    [sym_comment] = ACTIONS(54),
  },
  [504] = {
    [anon_sym_RPAREN] = ACTIONS(1316),
    [sym_comment] = ACTIONS(54),
  },
  [505] = {
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(738),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_static] = ACTIONS(738),
    [anon_sym_public] = ACTIONS(738),
    [anon_sym_protected] = ACTIONS(738),
    [anon_sym_private] = ACTIONS(738),
    [anon_sym_abstract] = ACTIONS(738),
    [anon_sym_final] = ACTIONS(738),
    [anon_sym_strictfp] = ACTIONS(738),
    [anon_sym_default] = ACTIONS(738),
    [anon_sym_synchronized] = ACTIONS(738),
    [anon_sym_native] = ACTIONS(738),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(736),
    [sym_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(54),
  },
  [506] = {
    [sym_identifier] = ACTIONS(1318),
    [sym_comment] = ACTIONS(54),
  },
  [507] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_static] = ACTIONS(306),
    [anon_sym_class] = ACTIONS(306),
    [anon_sym_public] = ACTIONS(306),
    [anon_sym_protected] = ACTIONS(306),
    [anon_sym_private] = ACTIONS(306),
    [anon_sym_abstract] = ACTIONS(306),
    [anon_sym_final] = ACTIONS(306),
    [anon_sym_strictfp] = ACTIONS(306),
    [anon_sym_default] = ACTIONS(306),
    [anon_sym_synchronized] = ACTIONS(306),
    [anon_sym_native] = ACTIONS(306),
    [anon_sym_interface] = ACTIONS(306),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [508] = {
    [anon_sym_LPAREN] = ACTIONS(1320),
    [anon_sym_DOT] = ACTIONS(1322),
    [anon_sym_AT] = ACTIONS(308),
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
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(54),
  },
  [509] = {
    [sym_type_parameters] = STATE(659),
    [sym_superclass] = STATE(660),
    [sym_super_interfaces] = STATE(661),
    [sym_class_body] = STATE(662),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [510] = {
    [sym_type_parameters] = STATE(664),
    [sym_extends_interfaces] = STATE(665),
    [sym_interface_body] = STATE(666),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [511] = {
    [anon_sym_RPAREN] = ACTIONS(1328),
    [sym_comment] = ACTIONS(54),
  },
  [512] = {
    [anon_sym_RBRACE] = ACTIONS(1164),
    [anon_sym_AT] = ACTIONS(1164),
    [anon_sym_static] = ACTIONS(1166),
    [anon_sym_class] = ACTIONS(1166),
    [anon_sym_public] = ACTIONS(1166),
    [anon_sym_protected] = ACTIONS(1166),
    [anon_sym_private] = ACTIONS(1166),
    [anon_sym_abstract] = ACTIONS(1166),
    [anon_sym_final] = ACTIONS(1166),
    [anon_sym_strictfp] = ACTIONS(1166),
    [anon_sym_default] = ACTIONS(1166),
    [anon_sym_synchronized] = ACTIONS(1166),
    [anon_sym_native] = ACTIONS(1166),
    [anon_sym_interface] = ACTIONS(1166),
    [sym_identifier] = ACTIONS(1168),
    [sym_comment] = ACTIONS(54),
  },
  [513] = {
    [sym_package_or_type_name] = STATE(508),
    [anon_sym_interface] = ACTIONS(1330),
    [sym_identifier] = ACTIONS(996),
    [sym_comment] = ACTIONS(54),
  },
  [514] = {
    [sym_identifier] = ACTIONS(1332),
    [sym_comment] = ACTIONS(54),
  },
  [515] = {
    [sym_identifier] = ACTIONS(1334),
    [sym_comment] = ACTIONS(54),
  },
  [516] = {
    [sym_dims] = STATE(129),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [sym__semicolon] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(1336),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [517] = {
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_static] = ACTIONS(400),
    [anon_sym_class] = ACTIONS(400),
    [anon_sym_public] = ACTIONS(400),
    [anon_sym_protected] = ACTIONS(400),
    [anon_sym_private] = ACTIONS(400),
    [anon_sym_abstract] = ACTIONS(400),
    [anon_sym_final] = ACTIONS(400),
    [anon_sym_strictfp] = ACTIONS(400),
    [anon_sym_default] = ACTIONS(400),
    [anon_sym_synchronized] = ACTIONS(400),
    [anon_sym_native] = ACTIONS(400),
    [anon_sym_interface] = ACTIONS(400),
    [sym_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(54),
  },
  [518] = {
    [sym__semicolon] = ACTIONS(1338),
    [sym_comment] = ACTIONS(54),
  },
  [519] = {
    [ts_builtin_sym_end] = ACTIONS(1340),
    [sym_decimal_integer_literal] = ACTIONS(1342),
    [sym_hex_integer_literal] = ACTIONS(1342),
    [sym_octal_integer_literal] = ACTIONS(1342),
    [sym_binary_integer_literal] = ACTIONS(1342),
    [sym_decimal_floating_point_literal] = ACTIONS(1342),
    [sym_hex_floating_point_literal] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(1342),
    [anon_sym_false] = ACTIONS(1342),
    [anon_sym_SQUOTE] = ACTIONS(1340),
    [sym_string_literal] = ACTIONS(1340),
    [sym_null_literal] = ACTIONS(1342),
    [anon_sym_LT] = ACTIONS(1340),
    [anon_sym_LPAREN] = ACTIONS(1340),
    [anon_sym_BANG] = ACTIONS(1340),
    [anon_sym_TILDE] = ACTIONS(1340),
    [anon_sym_PLUS_PLUS] = ACTIONS(1340),
    [anon_sym_DASH_DASH] = ACTIONS(1340),
    [anon_sym_RBRACE] = ACTIONS(1340),
    [anon_sym_AT] = ACTIONS(1340),
    [anon_sym_open] = ACTIONS(1342),
    [anon_sym_module] = ACTIONS(1342),
    [anon_sym_static] = ACTIONS(1342),
    [anon_sym_package] = ACTIONS(1342),
    [anon_sym_import] = ACTIONS(1342),
    [anon_sym_class] = ACTIONS(1342),
    [anon_sym_public] = ACTIONS(1342),
    [anon_sym_protected] = ACTIONS(1342),
    [anon_sym_private] = ACTIONS(1342),
    [anon_sym_abstract] = ACTIONS(1342),
    [anon_sym_final] = ACTIONS(1342),
    [anon_sym_strictfp] = ACTIONS(1342),
    [anon_sym_default] = ACTIONS(1342),
    [anon_sym_synchronized] = ACTIONS(1342),
    [anon_sym_native] = ACTIONS(1342),
    [anon_sym_void] = ACTIONS(1342),
    [anon_sym_interface] = ACTIONS(1342),
    [sym_identifier] = ACTIONS(1344),
    [sym_comment] = ACTIONS(54),
  },
  [520] = {
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
    [anon_sym_synchronized] = ACTIONS(1348),
    [anon_sym_native] = ACTIONS(1348),
    [anon_sym_interface] = ACTIONS(1348),
    [sym_identifier] = ACTIONS(1350),
    [sym_comment] = ACTIONS(54),
  },
  [521] = {
    [sym__expression] = STATE(675),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [522] = {
    [sym__literal] = STATE(523),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(524),
    [sym__annotation] = STATE(523),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_element_value] = STATE(679),
    [sym_element_value_array_initializer] = STATE(523),
    [sym_conditional_expression] = STATE(523),
    [sym_conditional_or_expression] = STATE(680),
    [sym_conditional_and_expression] = STATE(681),
    [sym_inclusive_or_expression] = STATE(682),
    [sym_exclusive_or_expression] = STATE(683),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(684),
    [sym_equality_expression] = STATE(685),
    [sym_shift_expression] = STATE(686),
    [sym_additive_expression] = STATE(687),
    [sym_multiplicative_expression] = STATE(688),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1028),
    [anon_sym_false] = ACTIONS(1028),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_COMMA] = ACTIONS(1356),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [anon_sym_LBRACE] = ACTIONS(1032),
    [anon_sym_RBRACE] = ACTIONS(1360),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [523] = {
    [sym__semicolon] = ACTIONS(1362),
    [anon_sym_RPAREN] = ACTIONS(1362),
    [anon_sym_COMMA] = ACTIONS(1362),
    [anon_sym_RBRACE] = ACTIONS(1362),
    [sym_comment] = ACTIONS(54),
  },
  [524] = {
    [sym__semicolon] = ACTIONS(1364),
    [anon_sym_LT] = ACTIONS(1366),
    [anon_sym_EQ_EQ] = ACTIONS(1364),
    [anon_sym_BANG_EQ] = ACTIONS(1364),
    [anon_sym_AMP_AMP] = ACTIONS(1364),
    [anon_sym_PIPE_PIPE] = ACTIONS(1364),
    [anon_sym_PLUS] = ACTIONS(1364),
    [anon_sym_DASH] = ACTIONS(1364),
    [anon_sym_STAR] = ACTIONS(1364),
    [anon_sym_SLASH] = ACTIONS(1366),
    [anon_sym_PIPE] = ACTIONS(1366),
    [anon_sym_CARET] = ACTIONS(1364),
    [anon_sym_PERCENT] = ACTIONS(1364),
    [anon_sym_LT_LT] = ACTIONS(1364),
    [anon_sym_GT_GT] = ACTIONS(1366),
    [anon_sym_GT_GT_GT] = ACTIONS(1364),
    [anon_sym_RPAREN] = ACTIONS(1364),
    [anon_sym_COMMA] = ACTIONS(1364),
    [anon_sym_QMARK] = ACTIONS(1364),
    [anon_sym_RBRACE] = ACTIONS(1364),
    [sym_comment] = ACTIONS(54),
  },
  [525] = {
    [anon_sym_RPAREN] = ACTIONS(1368),
    [anon_sym_COMMA] = ACTIONS(1368),
    [sym_comment] = ACTIONS(54),
  },
  [526] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1370),
    [anon_sym_RPAREN] = ACTIONS(1372),
    [anon_sym_COMMA] = ACTIONS(1372),
    [anon_sym_QMARK] = ACTIONS(1374),
    [sym_comment] = ACTIONS(54),
  },
  [527] = {
    [anon_sym_AMP_AMP] = ACTIONS(1376),
    [anon_sym_PIPE_PIPE] = ACTIONS(1378),
    [anon_sym_RPAREN] = ACTIONS(1378),
    [anon_sym_COMMA] = ACTIONS(1378),
    [anon_sym_QMARK] = ACTIONS(1378),
    [sym_comment] = ACTIONS(54),
  },
  [528] = {
    [anon_sym_AMP_AMP] = ACTIONS(1380),
    [anon_sym_PIPE_PIPE] = ACTIONS(1380),
    [anon_sym_PIPE] = ACTIONS(1382),
    [anon_sym_RPAREN] = ACTIONS(1380),
    [anon_sym_COMMA] = ACTIONS(1380),
    [anon_sym_QMARK] = ACTIONS(1380),
    [sym_comment] = ACTIONS(54),
  },
  [529] = {
    [anon_sym_AMP_AMP] = ACTIONS(1384),
    [anon_sym_PIPE_PIPE] = ACTIONS(1384),
    [anon_sym_PIPE] = ACTIONS(1386),
    [anon_sym_CARET] = ACTIONS(1388),
    [anon_sym_RPAREN] = ACTIONS(1384),
    [anon_sym_COMMA] = ACTIONS(1384),
    [anon_sym_QMARK] = ACTIONS(1384),
    [sym_comment] = ACTIONS(54),
  },
  [530] = {
    [sym__semicolon] = ACTIONS(1390),
    [anon_sym_AMP_AMP] = ACTIONS(1390),
    [anon_sym_PIPE_PIPE] = ACTIONS(1390),
    [anon_sym_PIPE] = ACTIONS(1392),
    [anon_sym_CARET] = ACTIONS(1390),
    [anon_sym_RPAREN] = ACTIONS(1390),
    [anon_sym_COMMA] = ACTIONS(1390),
    [anon_sym_QMARK] = ACTIONS(1390),
    [anon_sym_RBRACE] = ACTIONS(1390),
    [sym_comment] = ACTIONS(54),
  },
  [531] = {
    [anon_sym_LT] = ACTIONS(1394),
    [anon_sym_EQ_EQ] = ACTIONS(1396),
    [anon_sym_BANG_EQ] = ACTIONS(1396),
    [anon_sym_AMP_AMP] = ACTIONS(1398),
    [anon_sym_PIPE_PIPE] = ACTIONS(1398),
    [anon_sym_PIPE] = ACTIONS(1400),
    [anon_sym_CARET] = ACTIONS(1398),
    [anon_sym_RPAREN] = ACTIONS(1398),
    [anon_sym_COMMA] = ACTIONS(1398),
    [anon_sym_QMARK] = ACTIONS(1398),
    [sym_comment] = ACTIONS(54),
  },
  [532] = {
    [anon_sym_EQ_EQ] = ACTIONS(1402),
    [anon_sym_BANG_EQ] = ACTIONS(1402),
    [sym_comment] = ACTIONS(54),
  },
  [533] = {
    [anon_sym_LT] = ACTIONS(1404),
    [anon_sym_EQ_EQ] = ACTIONS(1406),
    [anon_sym_BANG_EQ] = ACTIONS(1406),
    [anon_sym_AMP_AMP] = ACTIONS(1406),
    [anon_sym_PIPE_PIPE] = ACTIONS(1406),
    [anon_sym_PIPE] = ACTIONS(1404),
    [anon_sym_CARET] = ACTIONS(1406),
    [anon_sym_LT_LT] = ACTIONS(1408),
    [anon_sym_GT_GT] = ACTIONS(1410),
    [anon_sym_GT_GT_GT] = ACTIONS(1408),
    [anon_sym_RPAREN] = ACTIONS(1406),
    [anon_sym_COMMA] = ACTIONS(1406),
    [anon_sym_QMARK] = ACTIONS(1406),
    [sym_comment] = ACTIONS(54),
  },
  [534] = {
    [anon_sym_LT] = ACTIONS(1412),
    [anon_sym_EQ_EQ] = ACTIONS(1414),
    [anon_sym_BANG_EQ] = ACTIONS(1414),
    [anon_sym_AMP_AMP] = ACTIONS(1414),
    [anon_sym_PIPE_PIPE] = ACTIONS(1414),
    [anon_sym_PLUS] = ACTIONS(1416),
    [anon_sym_DASH] = ACTIONS(1416),
    [anon_sym_PIPE] = ACTIONS(1412),
    [anon_sym_CARET] = ACTIONS(1414),
    [anon_sym_LT_LT] = ACTIONS(1414),
    [anon_sym_GT_GT] = ACTIONS(1412),
    [anon_sym_GT_GT_GT] = ACTIONS(1414),
    [anon_sym_RPAREN] = ACTIONS(1414),
    [anon_sym_COMMA] = ACTIONS(1414),
    [anon_sym_QMARK] = ACTIONS(1414),
    [sym_comment] = ACTIONS(54),
  },
  [535] = {
    [anon_sym_LT] = ACTIONS(1418),
    [anon_sym_EQ_EQ] = ACTIONS(1420),
    [anon_sym_BANG_EQ] = ACTIONS(1420),
    [anon_sym_AMP_AMP] = ACTIONS(1420),
    [anon_sym_PIPE_PIPE] = ACTIONS(1420),
    [anon_sym_PLUS] = ACTIONS(1420),
    [anon_sym_DASH] = ACTIONS(1420),
    [anon_sym_STAR] = ACTIONS(1422),
    [anon_sym_SLASH] = ACTIONS(1424),
    [anon_sym_PIPE] = ACTIONS(1418),
    [anon_sym_CARET] = ACTIONS(1420),
    [anon_sym_PERCENT] = ACTIONS(1422),
    [anon_sym_LT_LT] = ACTIONS(1420),
    [anon_sym_GT_GT] = ACTIONS(1418),
    [anon_sym_GT_GT_GT] = ACTIONS(1420),
    [anon_sym_RPAREN] = ACTIONS(1420),
    [anon_sym_COMMA] = ACTIONS(1420),
    [anon_sym_QMARK] = ACTIONS(1420),
    [sym_comment] = ACTIONS(54),
  },
  [536] = {
    [anon_sym_EQ] = ACTIONS(726),
    [sym_comment] = ACTIONS(54),
  },
  [537] = {
    [anon_sym_RPAREN] = ACTIONS(1426),
    [anon_sym_COMMA] = ACTIONS(1426),
    [sym_comment] = ACTIONS(54),
  },
  [538] = {
    [sym_element_value_pair] = STATE(699),
    [sym_identifier] = ACTIONS(1038),
    [sym_comment] = ACTIONS(54),
  },
  [539] = {
    [ts_builtin_sym_end] = ACTIONS(1428),
    [sym_decimal_integer_literal] = ACTIONS(1430),
    [sym_hex_integer_literal] = ACTIONS(1430),
    [sym_octal_integer_literal] = ACTIONS(1430),
    [sym_binary_integer_literal] = ACTIONS(1430),
    [sym_decimal_floating_point_literal] = ACTIONS(1430),
    [sym_hex_floating_point_literal] = ACTIONS(1432),
    [anon_sym_true] = ACTIONS(1430),
    [anon_sym_false] = ACTIONS(1430),
    [anon_sym_SQUOTE] = ACTIONS(1428),
    [sym_string_literal] = ACTIONS(1428),
    [sym_null_literal] = ACTIONS(1430),
    [anon_sym_LT] = ACTIONS(1428),
    [anon_sym_LPAREN] = ACTIONS(1428),
    [anon_sym_BANG] = ACTIONS(1428),
    [anon_sym_TILDE] = ACTIONS(1428),
    [anon_sym_PLUS_PLUS] = ACTIONS(1428),
    [anon_sym_DASH_DASH] = ACTIONS(1428),
    [anon_sym_RBRACE] = ACTIONS(1428),
    [anon_sym_AT] = ACTIONS(1428),
    [anon_sym_open] = ACTIONS(1430),
    [anon_sym_module] = ACTIONS(1430),
    [anon_sym_static] = ACTIONS(1430),
    [anon_sym_package] = ACTIONS(1430),
    [anon_sym_import] = ACTIONS(1430),
    [anon_sym_class] = ACTIONS(1430),
    [anon_sym_public] = ACTIONS(1430),
    [anon_sym_protected] = ACTIONS(1430),
    [anon_sym_private] = ACTIONS(1430),
    [anon_sym_abstract] = ACTIONS(1430),
    [anon_sym_final] = ACTIONS(1430),
    [anon_sym_strictfp] = ACTIONS(1430),
    [anon_sym_default] = ACTIONS(1430),
    [anon_sym_synchronized] = ACTIONS(1430),
    [anon_sym_native] = ACTIONS(1430),
    [anon_sym_void] = ACTIONS(1430),
    [anon_sym_interface] = ACTIONS(1430),
    [sym_identifier] = ACTIONS(1432),
    [sym_comment] = ACTIONS(54),
  },
  [540] = {
    [anon_sym_RBRACE] = ACTIONS(1434),
    [anon_sym_requires] = ACTIONS(1434),
    [anon_sym_exports] = ACTIONS(1434),
    [anon_sym_opens] = ACTIONS(1434),
    [anon_sym_uses] = ACTIONS(1434),
    [anon_sym_provides] = ACTIONS(1434),
    [sym_comment] = ACTIONS(54),
  },
  [541] = {
    [sym_identifier] = ACTIONS(1436),
    [sym_comment] = ACTIONS(54),
  },
  [542] = {
    [anon_sym_transitive] = ACTIONS(1438),
    [anon_sym_static] = ACTIONS(1438),
    [sym_identifier] = ACTIONS(1440),
    [sym_comment] = ACTIONS(54),
  },
  [543] = {
    [sym__semicolon] = ACTIONS(1442),
    [anon_sym_DOT] = ACTIONS(1066),
    [sym_comment] = ACTIONS(54),
  },
  [544] = {
    [sym_module_name] = STATE(702),
    [sym_identifier] = ACTIONS(1444),
    [sym_comment] = ACTIONS(54),
  },
  [545] = {
    [sym_identifier] = ACTIONS(1446),
    [sym_comment] = ACTIONS(54),
  },
  [546] = {
    [sym_module_name] = STATE(704),
    [aux_sym_module_directive_repeat2] = STATE(705),
    [sym__semicolon] = ACTIONS(1442),
    [anon_sym_COMMA] = ACTIONS(1068),
    [sym_identifier] = ACTIONS(1444),
    [sym_comment] = ACTIONS(54),
  },
  [547] = {
    [aux_sym_module_directive_repeat2] = STATE(705),
    [sym__semicolon] = ACTIONS(1442),
    [anon_sym_COMMA] = ACTIONS(1068),
    [anon_sym_DOT] = ACTIONS(1066),
    [sym_comment] = ACTIONS(54),
  },
  [548] = {
    [sym__semicolon] = ACTIONS(1442),
    [anon_sym_COMMA] = ACTIONS(1448),
    [sym_comment] = ACTIONS(54),
  },
  [549] = {
    [sym_package_or_type_name] = STATE(707),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(54),
  },
  [550] = {
    [ts_builtin_sym_end] = ACTIONS(1450),
    [sym_decimal_integer_literal] = ACTIONS(1452),
    [sym_hex_integer_literal] = ACTIONS(1452),
    [sym_octal_integer_literal] = ACTIONS(1452),
    [sym_binary_integer_literal] = ACTIONS(1452),
    [sym_decimal_floating_point_literal] = ACTIONS(1452),
    [sym_hex_floating_point_literal] = ACTIONS(1454),
    [anon_sym_true] = ACTIONS(1452),
    [anon_sym_false] = ACTIONS(1452),
    [anon_sym_SQUOTE] = ACTIONS(1450),
    [sym_string_literal] = ACTIONS(1450),
    [sym_null_literal] = ACTIONS(1452),
    [anon_sym_LT] = ACTIONS(1450),
    [anon_sym_LPAREN] = ACTIONS(1450),
    [anon_sym_BANG] = ACTIONS(1450),
    [anon_sym_TILDE] = ACTIONS(1450),
    [anon_sym_PLUS_PLUS] = ACTIONS(1450),
    [anon_sym_DASH_DASH] = ACTIONS(1450),
    [anon_sym_RBRACE] = ACTIONS(1450),
    [anon_sym_AT] = ACTIONS(1450),
    [anon_sym_open] = ACTIONS(1452),
    [anon_sym_module] = ACTIONS(1452),
    [anon_sym_static] = ACTIONS(1452),
    [anon_sym_package] = ACTIONS(1452),
    [anon_sym_import] = ACTIONS(1452),
    [anon_sym_class] = ACTIONS(1452),
    [anon_sym_public] = ACTIONS(1452),
    [anon_sym_protected] = ACTIONS(1452),
    [anon_sym_private] = ACTIONS(1452),
    [anon_sym_abstract] = ACTIONS(1452),
    [anon_sym_final] = ACTIONS(1452),
    [anon_sym_strictfp] = ACTIONS(1452),
    [anon_sym_default] = ACTIONS(1452),
    [anon_sym_synchronized] = ACTIONS(1452),
    [anon_sym_native] = ACTIONS(1452),
    [anon_sym_void] = ACTIONS(1452),
    [anon_sym_interface] = ACTIONS(1452),
    [sym_identifier] = ACTIONS(1454),
    [sym_comment] = ACTIONS(54),
  },
  [551] = {
    [ts_builtin_sym_end] = ACTIONS(1456),
    [sym_decimal_integer_literal] = ACTIONS(1458),
    [sym_hex_integer_literal] = ACTIONS(1458),
    [sym_octal_integer_literal] = ACTIONS(1458),
    [sym_binary_integer_literal] = ACTIONS(1458),
    [sym_decimal_floating_point_literal] = ACTIONS(1458),
    [sym_hex_floating_point_literal] = ACTIONS(1460),
    [anon_sym_true] = ACTIONS(1458),
    [anon_sym_false] = ACTIONS(1458),
    [anon_sym_SQUOTE] = ACTIONS(1456),
    [sym_string_literal] = ACTIONS(1456),
    [sym_null_literal] = ACTIONS(1458),
    [anon_sym_LT] = ACTIONS(1456),
    [anon_sym_LPAREN] = ACTIONS(1456),
    [anon_sym_BANG] = ACTIONS(1456),
    [anon_sym_TILDE] = ACTIONS(1456),
    [anon_sym_PLUS_PLUS] = ACTIONS(1456),
    [anon_sym_DASH_DASH] = ACTIONS(1456),
    [anon_sym_RBRACE] = ACTIONS(1456),
    [anon_sym_AT] = ACTIONS(1456),
    [anon_sym_open] = ACTIONS(1458),
    [anon_sym_module] = ACTIONS(1458),
    [anon_sym_static] = ACTIONS(1458),
    [anon_sym_package] = ACTIONS(1458),
    [anon_sym_import] = ACTIONS(1458),
    [anon_sym_class] = ACTIONS(1458),
    [anon_sym_public] = ACTIONS(1458),
    [anon_sym_protected] = ACTIONS(1458),
    [anon_sym_private] = ACTIONS(1458),
    [anon_sym_abstract] = ACTIONS(1458),
    [anon_sym_final] = ACTIONS(1458),
    [anon_sym_strictfp] = ACTIONS(1458),
    [anon_sym_default] = ACTIONS(1458),
    [anon_sym_synchronized] = ACTIONS(1458),
    [anon_sym_native] = ACTIONS(1458),
    [anon_sym_void] = ACTIONS(1458),
    [anon_sym_interface] = ACTIONS(1458),
    [sym_identifier] = ACTIONS(1460),
    [sym_comment] = ACTIONS(54),
  },
  [552] = {
    [anon_sym_AT] = ACTIONS(418),
    [anon_sym_void] = ACTIONS(1462),
    [sym_identifier] = ACTIONS(1464),
    [sym_comment] = ACTIONS(54),
  },
  [553] = {
    [sym__semicolon] = ACTIONS(886),
    [anon_sym_LT] = ACTIONS(886),
    [anon_sym_LBRACE] = ACTIONS(886),
    [anon_sym_RBRACE] = ACTIONS(886),
    [anon_sym_AT] = ACTIONS(886),
    [anon_sym_static] = ACTIONS(888),
    [anon_sym_class] = ACTIONS(888),
    [anon_sym_public] = ACTIONS(888),
    [anon_sym_protected] = ACTIONS(888),
    [anon_sym_private] = ACTIONS(888),
    [anon_sym_abstract] = ACTIONS(888),
    [anon_sym_final] = ACTIONS(888),
    [anon_sym_strictfp] = ACTIONS(888),
    [anon_sym_default] = ACTIONS(888),
    [anon_sym_synchronized] = ACTIONS(888),
    [anon_sym_native] = ACTIONS(888),
    [anon_sym_void] = ACTIONS(888),
    [anon_sym_interface] = ACTIONS(888),
    [sym_identifier] = ACTIONS(890),
    [sym_comment] = ACTIONS(54),
  },
  [554] = {
    [sym_annotation_type_body] = STATE(709),
    [anon_sym_LBRACE] = ACTIONS(1466),
    [sym_comment] = ACTIONS(54),
  },
  [555] = {
    [sym__literal] = STATE(712),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(713),
    [sym_element_value_pair] = STATE(243),
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
    [anon_sym_RPAREN] = ACTIONS(1468),
    [sym_identifier] = ACTIONS(1470),
    [sym_comment] = ACTIONS(54),
  },
  [556] = {
    [sym_identifier] = ACTIONS(1472),
    [sym_comment] = ACTIONS(54),
  },
  [557] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(258),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(268),
    [sym_class_body_declaration] = STATE(269),
    [sym_constructor_declaration] = STATE(270),
    [sym_constructor_declarator] = STATE(271),
    [sym_class_member_declaration] = STATE(270),
    [sym_interface_declaration] = STATE(258),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_block] = STATE(270),
    [sym_method_declaration] = STATE(258),
    [aux_sym_normal_class_declaration_repeat1] = STATE(274),
    [aux_sym_class_body_repeat1] = STATE(716),
    [sym__semicolon] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(1474),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [558] = {
    [sym_superclass] = STATE(717),
    [sym_super_interfaces] = STATE(718),
    [sym_class_body] = STATE(719),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [559] = {
    [sym_super_interfaces] = STATE(718),
    [sym_class_body] = STATE(719),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [560] = {
    [sym_class_body] = STATE(719),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [sym_comment] = ACTIONS(54),
  },
  [561] = {
    [sym__semicolon] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(534),
    [anon_sym_LBRACE] = ACTIONS(534),
    [anon_sym_RBRACE] = ACTIONS(534),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(536),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(536),
    [anon_sym_interface] = ACTIONS(536),
    [sym_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(54),
  },
  [562] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(282),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(282),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_interface_member_declaration] = STATE(284),
    [sym_constant_declaration] = STATE(282),
    [sym_variable_declarator_list] = STATE(285),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(282),
    [aux_sym_normal_class_declaration_repeat1] = STATE(287),
    [aux_sym_interface_body_repeat1] = STATE(721),
    [sym__semicolon] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1476),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [563] = {
    [sym_extends_interfaces] = STATE(722),
    [sym_interface_body] = STATE(723),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [564] = {
    [sym_interface_body] = STATE(723),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym_comment] = ACTIONS(54),
  },
  [565] = {
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
  [566] = {
    [anon_sym_LBRACE] = ACTIONS(1478),
    [anon_sym_throws] = ACTIONS(1478),
    [sym_comment] = ACTIONS(54),
  },
  [567] = {
    [sym__expression] = STATE(724),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [568] = {
    [sym__semicolon] = ACTIONS(1480),
    [anon_sym_LT] = ACTIONS(1480),
    [anon_sym_LBRACE] = ACTIONS(1480),
    [anon_sym_RBRACE] = ACTIONS(1480),
    [anon_sym_AT] = ACTIONS(1480),
    [anon_sym_static] = ACTIONS(1482),
    [anon_sym_class] = ACTIONS(1482),
    [anon_sym_public] = ACTIONS(1482),
    [anon_sym_protected] = ACTIONS(1482),
    [anon_sym_private] = ACTIONS(1482),
    [anon_sym_abstract] = ACTIONS(1482),
    [anon_sym_final] = ACTIONS(1482),
    [anon_sym_strictfp] = ACTIONS(1482),
    [anon_sym_default] = ACTIONS(1482),
    [anon_sym_synchronized] = ACTIONS(1482),
    [anon_sym_native] = ACTIONS(1482),
    [anon_sym_void] = ACTIONS(1482),
    [anon_sym_interface] = ACTIONS(1482),
    [sym_identifier] = ACTIONS(1484),
    [sym_comment] = ACTIONS(54),
  },
  [569] = {
    [aux_sym_class_literal_repeat1] = STATE(727),
    [anon_sym_DOT] = ACTIONS(1486),
    [anon_sym_LBRACK] = ACTIONS(1488),
    [anon_sym_AT] = ACTIONS(1274),
    [sym_comment] = ACTIONS(54),
  },
  [570] = {
    [sym_package_or_type_name] = STATE(729),
    [sym_identifier] = ACTIONS(1491),
    [sym_comment] = ACTIONS(54),
  },
  [571] = {
    [anon_sym_LPAREN] = ACTIONS(1493),
    [anon_sym_DOT] = ACTIONS(1495),
    [anon_sym_LBRACK] = ACTIONS(1495),
    [anon_sym_COLON_COLON] = ACTIONS(1495),
    [sym_comment] = ACTIONS(54),
  },
  [572] = {
    [anon_sym_LPAREN] = ACTIONS(1493),
    [anon_sym_DOT] = ACTIONS(1497),
    [anon_sym_COLON_COLON] = ACTIONS(1499),
    [sym_comment] = ACTIONS(54),
  },
  [573] = {
    [sym_type_arguments] = STATE(734),
    [sym_class_or_interface_type] = STATE(735),
    [sym_primitive_type] = STATE(736),
    [sym_integral_type] = STATE(475),
    [sym_floating_point_type] = STATE(475),
    [sym__annotation] = STATE(483),
    [sym_normal_annotation] = STATE(484),
    [sym_marker_annotation] = STATE(484),
    [sym_single_element_annotation] = STATE(484),
    [sym_class_or_interface_type_to_instantiate] = STATE(737),
    [aux_sym_class_or_interface_type_repeat1] = STATE(738),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_boolean] = ACTIONS(930),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(934),
    [anon_sym_double] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(936),
    [sym_identifier] = ACTIONS(1501),
    [sym_comment] = ACTIONS(54),
  },
  [574] = {
    [anon_sym_DOT] = ACTIONS(1486),
    [sym_comment] = ACTIONS(54),
  },
  [575] = {
    [sym_type_arguments] = STATE(339),
    [aux_sym_class_or_interface_type_repeat2] = STATE(340),
    [anon_sym_LT] = ACTIONS(654),
    [anon_sym_LPAREN] = ACTIONS(1503),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_AT] = ACTIONS(652),
    [anon_sym_COLON_COLON] = ACTIONS(652),
    [sym_comment] = ACTIONS(54),
  },
  [576] = {
    [anon_sym_DOT] = ACTIONS(1495),
    [anon_sym_LBRACK] = ACTIONS(1495),
    [anon_sym_COLON_COLON] = ACTIONS(1495),
    [sym_comment] = ACTIONS(54),
  },
  [577] = {
    [anon_sym_this] = ACTIONS(1505),
    [anon_sym_super] = ACTIONS(1505),
    [sym_comment] = ACTIONS(54),
  },
  [578] = {
    [sym_dims] = STATE(742),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_dims_exprs] = STATE(743),
    [sym_dims_expr] = STATE(744),
    [aux_sym_class_or_interface_type_repeat1] = STATE(745),
    [aux_sym_dims_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(1507),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(1509),
    [sym_comment] = ACTIONS(54),
  },
  [579] = {
    [sym_dims] = STATE(742),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [580] = {
    [anon_sym_boolean] = ACTIONS(239),
    [anon_sym_byte] = ACTIONS(239),
    [anon_sym_short] = ACTIONS(239),
    [anon_sym_int] = ACTIONS(239),
    [anon_sym_long] = ACTIONS(239),
    [anon_sym_char] = ACTIONS(239),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_double] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_static] = ACTIONS(98),
    [anon_sym_class] = ACTIONS(98),
    [anon_sym_public] = ACTIONS(98),
    [anon_sym_protected] = ACTIONS(98),
    [anon_sym_private] = ACTIONS(98),
    [anon_sym_abstract] = ACTIONS(98),
    [anon_sym_final] = ACTIONS(98),
    [anon_sym_strictfp] = ACTIONS(98),
    [anon_sym_default] = ACTIONS(98),
    [anon_sym_synchronized] = ACTIONS(98),
    [anon_sym_native] = ACTIONS(98),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(54),
  },
  [581] = {
    [anon_sym_boolean] = ACTIONS(241),
    [anon_sym_byte] = ACTIONS(241),
    [anon_sym_short] = ACTIONS(241),
    [anon_sym_int] = ACTIONS(241),
    [anon_sym_long] = ACTIONS(241),
    [anon_sym_char] = ACTIONS(241),
    [anon_sym_float] = ACTIONS(241),
    [anon_sym_double] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(241),
    [anon_sym_class] = ACTIONS(241),
    [anon_sym_public] = ACTIONS(241),
    [anon_sym_protected] = ACTIONS(241),
    [anon_sym_private] = ACTIONS(241),
    [anon_sym_abstract] = ACTIONS(241),
    [anon_sym_final] = ACTIONS(241),
    [anon_sym_strictfp] = ACTIONS(241),
    [anon_sym_default] = ACTIONS(241),
    [anon_sym_synchronized] = ACTIONS(241),
    [anon_sym_native] = ACTIONS(241),
    [sym_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(54),
  },
  [582] = {
    [aux_sym_class_literal_repeat1] = STATE(727),
    [anon_sym_DOT] = ACTIONS(1511),
    [anon_sym_LBRACK] = ACTIONS(1513),
    [sym_comment] = ACTIONS(54),
  },
  [583] = {
    [sym_statement] = STATE(191),
    [sym_if_then_statement] = STATE(192),
    [sym__annotation] = STATE(189),
    [sym_normal_annotation] = STATE(193),
    [sym_marker_annotation] = STATE(193),
    [sym_single_element_annotation] = STATE(193),
    [sym_class_declaration] = STATE(191),
    [sym_normal_class_declaration] = STATE(194),
    [sym_modifier] = STATE(195),
    [sym_block_statements] = STATE(748),
    [sym_block_statement] = STATE(197),
    [sym_local_variable_declaration_statement] = STATE(191),
    [sym_local_variable_declaration] = STATE(198),
    [aux_sym_normal_class_declaration_repeat1] = STATE(199),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(1515),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_static] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(366),
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
  [584] = {
    [anon_sym_DOT] = ACTIONS(1517),
    [anon_sym_LBRACK] = ACTIONS(1519),
    [anon_sym_COLON_COLON] = ACTIONS(1499),
    [sym_comment] = ACTIONS(54),
  },
  [585] = {
    [anon_sym_DOT] = ACTIONS(1521),
    [anon_sym_COLON_COLON] = ACTIONS(1499),
    [sym_comment] = ACTIONS(54),
  },
  [586] = {
    [anon_sym_DOT] = ACTIONS(1523),
    [anon_sym_COLON_COLON] = ACTIONS(1523),
    [sym_comment] = ACTIONS(54),
  },
  [587] = {
    [anon_sym_DOT] = ACTIONS(1523),
    [anon_sym_LBRACK] = ACTIONS(1519),
    [anon_sym_COLON_COLON] = ACTIONS(1523),
    [sym_comment] = ACTIONS(54),
  },
  [588] = {
    [anon_sym_DOT] = ACTIONS(1525),
    [anon_sym_LBRACK] = ACTIONS(1525),
    [anon_sym_COLON_COLON] = ACTIONS(1525),
    [sym_comment] = ACTIONS(54),
  },
  [589] = {
    [anon_sym_COLON_COLON] = ACTIONS(1527),
    [sym_comment] = ACTIONS(54),
  },
  [590] = {
    [anon_sym_RBRACE] = ACTIONS(1515),
    [sym_comment] = ACTIONS(54),
  },
  [591] = {
    [anon_sym_LPAREN] = ACTIONS(1529),
    [sym_comment] = ACTIONS(54),
  },
  [592] = {
    [sym_integral_type] = STATE(644),
    [sym_floating_point_type] = STATE(644),
    [sym__annotation] = STATE(645),
    [sym_normal_annotation] = STATE(484),
    [sym_marker_annotation] = STATE(484),
    [sym_single_element_annotation] = STATE(484),
    [anon_sym_boolean] = ACTIONS(1292),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(934),
    [anon_sym_double] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(936),
    [sym_identifier] = ACTIONS(1294),
    [sym_comment] = ACTIONS(54),
  },
  [593] = {
    [sym__semicolon] = ACTIONS(1531),
    [anon_sym_LT] = ACTIONS(1531),
    [anon_sym_LBRACE] = ACTIONS(1531),
    [anon_sym_RBRACE] = ACTIONS(1531),
    [anon_sym_AT] = ACTIONS(1531),
    [anon_sym_static] = ACTIONS(1533),
    [anon_sym_class] = ACTIONS(1533),
    [anon_sym_public] = ACTIONS(1533),
    [anon_sym_protected] = ACTIONS(1533),
    [anon_sym_private] = ACTIONS(1533),
    [anon_sym_abstract] = ACTIONS(1533),
    [anon_sym_final] = ACTIONS(1533),
    [anon_sym_strictfp] = ACTIONS(1533),
    [anon_sym_default] = ACTIONS(1533),
    [anon_sym_synchronized] = ACTIONS(1533),
    [anon_sym_native] = ACTIONS(1533),
    [anon_sym_void] = ACTIONS(1533),
    [anon_sym_interface] = ACTIONS(1533),
    [sym_identifier] = ACTIONS(1535),
    [sym_comment] = ACTIONS(54),
  },
  [594] = {
    [sym_identifier] = ACTIONS(1537),
    [sym_comment] = ACTIONS(54),
  },
  [595] = {
    [sym_type_parameters] = STATE(755),
    [sym_superclass] = STATE(717),
    [sym_super_interfaces] = STATE(718),
    [sym_class_body] = STATE(719),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [596] = {
    [sym_type_parameters] = STATE(756),
    [sym_extends_interfaces] = STATE(722),
    [sym_interface_body] = STATE(723),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [597] = {
    [sym_constructor_body] = STATE(757),
    [anon_sym_LBRACE] = ACTIONS(808),
    [sym_comment] = ACTIONS(54),
  },
  [598] = {
    [sym__semicolon] = ACTIONS(640),
    [anon_sym_LT] = ACTIONS(640),
    [anon_sym_LBRACE] = ACTIONS(640),
    [anon_sym_RBRACE] = ACTIONS(640),
    [anon_sym_AT] = ACTIONS(640),
    [anon_sym_static] = ACTIONS(642),
    [anon_sym_class] = ACTIONS(642),
    [anon_sym_public] = ACTIONS(642),
    [anon_sym_protected] = ACTIONS(642),
    [anon_sym_private] = ACTIONS(642),
    [anon_sym_abstract] = ACTIONS(642),
    [anon_sym_final] = ACTIONS(642),
    [anon_sym_strictfp] = ACTIONS(642),
    [anon_sym_default] = ACTIONS(642),
    [anon_sym_synchronized] = ACTIONS(642),
    [anon_sym_native] = ACTIONS(642),
    [anon_sym_void] = ACTIONS(642),
    [anon_sym_interface] = ACTIONS(642),
    [sym_identifier] = ACTIONS(644),
    [sym_comment] = ACTIONS(54),
  },
  [599] = {
    [anon_sym_COMMA] = ACTIONS(1539),
    [anon_sym_LBRACE] = ACTIONS(1539),
    [sym_comment] = ACTIONS(54),
  },
  [600] = {
    [sym_class_or_interface_type] = STATE(758),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(213),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(54),
  },
  [601] = {
    [ts_builtin_sym_end] = ACTIONS(1541),
    [sym_decimal_integer_literal] = ACTIONS(1543),
    [sym_hex_integer_literal] = ACTIONS(1543),
    [sym_octal_integer_literal] = ACTIONS(1543),
    [sym_binary_integer_literal] = ACTIONS(1543),
    [sym_decimal_floating_point_literal] = ACTIONS(1543),
    [sym_hex_floating_point_literal] = ACTIONS(1545),
    [anon_sym_true] = ACTIONS(1543),
    [anon_sym_false] = ACTIONS(1543),
    [anon_sym_SQUOTE] = ACTIONS(1541),
    [sym_string_literal] = ACTIONS(1541),
    [sym_null_literal] = ACTIONS(1543),
    [anon_sym_LT] = ACTIONS(1541),
    [anon_sym_LPAREN] = ACTIONS(1541),
    [anon_sym_BANG] = ACTIONS(1541),
    [anon_sym_TILDE] = ACTIONS(1541),
    [anon_sym_PLUS_PLUS] = ACTIONS(1541),
    [anon_sym_DASH_DASH] = ACTIONS(1541),
    [anon_sym_RBRACE] = ACTIONS(1541),
    [anon_sym_AT] = ACTIONS(1541),
    [anon_sym_open] = ACTIONS(1543),
    [anon_sym_module] = ACTIONS(1543),
    [anon_sym_static] = ACTIONS(1543),
    [anon_sym_package] = ACTIONS(1543),
    [anon_sym_import] = ACTIONS(1543),
    [anon_sym_class] = ACTIONS(1543),
    [anon_sym_public] = ACTIONS(1543),
    [anon_sym_protected] = ACTIONS(1543),
    [anon_sym_private] = ACTIONS(1543),
    [anon_sym_abstract] = ACTIONS(1543),
    [anon_sym_final] = ACTIONS(1543),
    [anon_sym_strictfp] = ACTIONS(1543),
    [anon_sym_default] = ACTIONS(1543),
    [anon_sym_synchronized] = ACTIONS(1543),
    [anon_sym_native] = ACTIONS(1543),
    [anon_sym_void] = ACTIONS(1543),
    [anon_sym_interface] = ACTIONS(1543),
    [sym_identifier] = ACTIONS(1545),
    [sym_comment] = ACTIONS(54),
  },
  [602] = {
    [sym__semicolon] = ACTIONS(1547),
    [anon_sym_COMMA] = ACTIONS(1547),
    [sym_comment] = ACTIONS(54),
  },
  [603] = {
    [sym_variable_declarator] = STATE(759),
    [sym_variable_declarator_id] = STATE(126),
    [sym_identifier] = ACTIONS(259),
    [sym_comment] = ACTIONS(54),
  },
  [604] = {
    [sym__semicolon] = ACTIONS(1549),
    [anon_sym_LT] = ACTIONS(1549),
    [anon_sym_RBRACE] = ACTIONS(1549),
    [anon_sym_AT] = ACTIONS(1549),
    [anon_sym_static] = ACTIONS(1551),
    [anon_sym_class] = ACTIONS(1551),
    [anon_sym_public] = ACTIONS(1551),
    [anon_sym_protected] = ACTIONS(1551),
    [anon_sym_private] = ACTIONS(1551),
    [anon_sym_abstract] = ACTIONS(1551),
    [anon_sym_final] = ACTIONS(1551),
    [anon_sym_strictfp] = ACTIONS(1551),
    [anon_sym_default] = ACTIONS(1551),
    [anon_sym_synchronized] = ACTIONS(1551),
    [anon_sym_native] = ACTIONS(1551),
    [anon_sym_void] = ACTIONS(1551),
    [anon_sym_interface] = ACTIONS(1551),
    [sym_identifier] = ACTIONS(1553),
    [sym_comment] = ACTIONS(54),
  },
  [605] = {
    [sym__expression] = STATE(760),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [606] = {
    [sym__expression] = STATE(761),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [607] = {
    [sym__expression] = STATE(762),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [608] = {
    [sym__expression] = STATE(763),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [609] = {
    [sym__expression] = STATE(764),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [610] = {
    [sym__expression] = STATE(765),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [611] = {
    [sym__expression] = STATE(766),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [612] = {
    [sym__expression] = STATE(176),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [613] = {
    [sym__statement] = STATE(767),
    [sym__literal] = STATE(776),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(777),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_else_if_clause] = STATE(778),
    [sym_else_clause] = STATE(767),
    [sym__annotation] = STATE(28),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym__declaration] = STATE(779),
    [sym_module_declaration] = STATE(780),
    [sym_package_declaration] = STATE(780),
    [sym_import_statement] = STATE(780),
    [sym_single_type_import_declaration] = STATE(781),
    [sym_type_import_on_declaraction] = STATE(781),
    [sym_single_static_import_declaration] = STATE(781),
    [sym_static_import_on_demand_declaration] = STATE(781),
    [sym_class_declaration] = STATE(780),
    [sym_normal_class_declaration] = STATE(194),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(780),
    [sym_annotation_type_declaration] = STATE(782),
    [sym_normal_interface_declaration] = STATE(782),
    [sym_method_header] = STATE(783),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(780),
    [aux_sym_if_then_statement_repeat1] = STATE(784),
    [aux_sym_class_or_interface_type_repeat1] = STATE(785),
    [aux_sym_normal_class_declaration_repeat1] = STATE(786),
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
    [anon_sym_if] = ACTIONS(1555),
    [anon_sym_LBRACE] = ACTIONS(1557),
    [anon_sym_RBRACE] = ACTIONS(1557),
    [anon_sym_elseif] = ACTIONS(1559),
    [anon_sym_else] = ACTIONS(1561),
    [anon_sym_AT] = ACTIONS(1563),
    [anon_sym_open] = ACTIONS(1565),
    [anon_sym_module] = ACTIONS(1567),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_package] = ACTIONS(1569),
    [anon_sym_import] = ACTIONS(1571),
    [anon_sym_class] = ACTIONS(1118),
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
    [anon_sym_interface] = ACTIONS(1573),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [614] = {
    [sym__expression] = STATE(787),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [615] = {
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(924),
    [anon_sym_class] = ACTIONS(924),
    [anon_sym_public] = ACTIONS(924),
    [anon_sym_protected] = ACTIONS(924),
    [anon_sym_private] = ACTIONS(924),
    [anon_sym_abstract] = ACTIONS(924),
    [anon_sym_final] = ACTIONS(924),
    [anon_sym_strictfp] = ACTIONS(924),
    [anon_sym_default] = ACTIONS(924),
    [anon_sym_synchronized] = ACTIONS(924),
    [anon_sym_native] = ACTIONS(924),
    [sym_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(54),
  },
  [616] = {
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(1575),
    [sym_comment] = ACTIONS(54),
  },
  [617] = {
    [anon_sym_RPAREN] = ACTIONS(1575),
    [sym_comment] = ACTIONS(54),
  },
  [618] = {
    [anon_sym_RPAREN] = ACTIONS(1577),
    [sym_comment] = ACTIONS(54),
  },
  [619] = {
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(736),
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
    [anon_sym_synchronized] = ACTIONS(738),
    [anon_sym_native] = ACTIONS(738),
    [sym_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(54),
  },
  [620] = {
    [anon_sym_if] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_elseif] = ACTIONS(780),
    [anon_sym_DOT] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_AT] = ACTIONS(780),
    [anon_sym_static] = ACTIONS(780),
    [anon_sym_class] = ACTIONS(780),
    [anon_sym_public] = ACTIONS(780),
    [anon_sym_protected] = ACTIONS(780),
    [anon_sym_private] = ACTIONS(780),
    [anon_sym_abstract] = ACTIONS(780),
    [anon_sym_final] = ACTIONS(780),
    [anon_sym_strictfp] = ACTIONS(780),
    [anon_sym_default] = ACTIONS(780),
    [anon_sym_synchronized] = ACTIONS(780),
    [anon_sym_native] = ACTIONS(780),
    [anon_sym_COLON_COLON] = ACTIONS(780),
    [sym_comment] = ACTIONS(54),
  },
  [621] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(258),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(268),
    [sym_class_body_declaration] = STATE(418),
    [sym_constructor_declaration] = STATE(270),
    [sym_constructor_declarator] = STATE(271),
    [sym_class_member_declaration] = STATE(270),
    [sym_interface_declaration] = STATE(258),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_block] = STATE(270),
    [sym_method_declaration] = STATE(258),
    [aux_sym_normal_class_declaration_repeat1] = STATE(274),
    [sym__semicolon] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(1579),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [622] = {
    [sym_super_interfaces] = STATE(791),
    [sym_class_body] = STATE(792),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [623] = {
    [sym_class_body] = STATE(792),
    [anon_sym_LBRACE] = ACTIONS(882),
    [sym_comment] = ACTIONS(54),
  },
  [624] = {
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_RBRACE] = ACTIONS(828),
    [anon_sym_elseif] = ACTIONS(828),
    [anon_sym_AT] = ACTIONS(828),
    [anon_sym_static] = ACTIONS(828),
    [anon_sym_class] = ACTIONS(828),
    [anon_sym_public] = ACTIONS(828),
    [anon_sym_protected] = ACTIONS(828),
    [anon_sym_private] = ACTIONS(828),
    [anon_sym_abstract] = ACTIONS(828),
    [anon_sym_final] = ACTIONS(828),
    [anon_sym_strictfp] = ACTIONS(828),
    [anon_sym_default] = ACTIONS(828),
    [anon_sym_synchronized] = ACTIONS(828),
    [anon_sym_native] = ACTIONS(828),
    [sym_comment] = ACTIONS(54),
  },
  [625] = {
    [sym_superclass] = STATE(793),
    [sym_super_interfaces] = STATE(791),
    [sym_class_body] = STATE(792),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [626] = {
    [sym__semicolon] = ACTIONS(1581),
    [anon_sym_LBRACE] = ACTIONS(1581),
    [anon_sym_throws] = ACTIONS(1581),
    [sym_comment] = ACTIONS(54),
  },
  [627] = {
    [aux_sym_type_arguments_repeat1] = STATE(795),
    [anon_sym_GT] = ACTIONS(1583),
    [anon_sym_COMMA] = ACTIONS(1284),
    [sym_comment] = ACTIONS(54),
  },
  [628] = {
    [sym_type_arguments] = STATE(796),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_DOT] = ACTIONS(1296),
    [anon_sym_AT] = ACTIONS(1296),
    [sym_identifier] = ACTIONS(1585),
    [sym_comment] = ACTIONS(54),
  },
  [629] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1587),
    [sym_comment] = ACTIONS(54),
  },
  [630] = {
    [anon_sym_DOT] = ACTIONS(1244),
    [anon_sym_AT] = ACTIONS(1300),
    [sym_identifier] = ACTIONS(1589),
    [sym_comment] = ACTIONS(54),
  },
  [631] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(798),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1587),
    [sym_comment] = ACTIONS(54),
  },
  [632] = {
    [sym__semicolon] = ACTIONS(1591),
    [anon_sym_COMMA] = ACTIONS(1591),
    [anon_sym_LBRACE] = ACTIONS(1591),
    [sym_comment] = ACTIONS(54),
  },
  [633] = {
    [sym__semicolon] = ACTIONS(1593),
    [anon_sym_COMMA] = ACTIONS(1593),
    [anon_sym_LBRACE] = ACTIONS(1593),
    [sym_comment] = ACTIONS(54),
  },
  [634] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(799),
    [anon_sym_DOT] = ACTIONS(906),
    [anon_sym_AT] = ACTIONS(1300),
    [sym_identifier] = ACTIONS(1589),
    [sym_comment] = ACTIONS(54),
  },
  [635] = {
    [sym_module_directive] = STATE(393),
    [anon_sym_RBRACE] = ACTIONS(1595),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [636] = {
    [sym_class_body] = STATE(801),
    [anon_sym_LBRACE] = ACTIONS(328),
    [sym_comment] = ACTIONS(54),
  },
  [637] = {
    [ts_builtin_sym_end] = ACTIONS(1597),
    [sym_decimal_integer_literal] = ACTIONS(1599),
    [sym_hex_integer_literal] = ACTIONS(1599),
    [sym_octal_integer_literal] = ACTIONS(1599),
    [sym_binary_integer_literal] = ACTIONS(1599),
    [sym_decimal_floating_point_literal] = ACTIONS(1599),
    [sym_hex_floating_point_literal] = ACTIONS(1601),
    [anon_sym_true] = ACTIONS(1599),
    [anon_sym_false] = ACTIONS(1599),
    [anon_sym_SQUOTE] = ACTIONS(1597),
    [sym_string_literal] = ACTIONS(1597),
    [sym_null_literal] = ACTIONS(1599),
    [anon_sym_LT] = ACTIONS(1597),
    [anon_sym_LPAREN] = ACTIONS(1597),
    [anon_sym_BANG] = ACTIONS(1597),
    [anon_sym_TILDE] = ACTIONS(1597),
    [anon_sym_PLUS_PLUS] = ACTIONS(1597),
    [anon_sym_DASH_DASH] = ACTIONS(1597),
    [anon_sym_RBRACE] = ACTIONS(1597),
    [anon_sym_AT] = ACTIONS(1597),
    [anon_sym_open] = ACTIONS(1599),
    [anon_sym_module] = ACTIONS(1599),
    [anon_sym_static] = ACTIONS(1599),
    [anon_sym_package] = ACTIONS(1599),
    [anon_sym_import] = ACTIONS(1599),
    [anon_sym_class] = ACTIONS(1599),
    [anon_sym_public] = ACTIONS(1599),
    [anon_sym_protected] = ACTIONS(1599),
    [anon_sym_private] = ACTIONS(1599),
    [anon_sym_abstract] = ACTIONS(1599),
    [anon_sym_final] = ACTIONS(1599),
    [anon_sym_strictfp] = ACTIONS(1599),
    [anon_sym_default] = ACTIONS(1599),
    [anon_sym_synchronized] = ACTIONS(1599),
    [anon_sym_native] = ACTIONS(1599),
    [anon_sym_void] = ACTIONS(1599),
    [anon_sym_interface] = ACTIONS(1599),
    [sym_identifier] = ACTIONS(1601),
    [sym_comment] = ACTIONS(54),
  },
  [638] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_boolean] = ACTIONS(306),
    [anon_sym_byte] = ACTIONS(306),
    [anon_sym_short] = ACTIONS(306),
    [anon_sym_int] = ACTIONS(306),
    [anon_sym_long] = ACTIONS(306),
    [anon_sym_char] = ACTIONS(306),
    [anon_sym_float] = ACTIONS(306),
    [anon_sym_double] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(304),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [639] = {
    [anon_sym_LPAREN] = ACTIONS(1603),
    [anon_sym_DOT] = ACTIONS(1605),
    [anon_sym_boolean] = ACTIONS(412),
    [anon_sym_byte] = ACTIONS(412),
    [anon_sym_short] = ACTIONS(412),
    [anon_sym_int] = ACTIONS(412),
    [anon_sym_long] = ACTIONS(412),
    [anon_sym_char] = ACTIONS(412),
    [anon_sym_float] = ACTIONS(412),
    [anon_sym_double] = ACTIONS(412),
    [anon_sym_AT] = ACTIONS(308),
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(54),
  },
  [640] = {
    [anon_sym_GT] = ACTIONS(1607),
    [anon_sym_AMP] = ACTIONS(1607),
    [anon_sym_LPAREN] = ACTIONS(1607),
    [anon_sym_COMMA] = ACTIONS(1607),
    [anon_sym_LBRACE] = ACTIONS(1607),
    [anon_sym_DOT] = ACTIONS(1607),
    [anon_sym_LBRACK] = ACTIONS(1607),
    [anon_sym_AT] = ACTIONS(1607),
    [anon_sym_implements] = ACTIONS(1607),
    [anon_sym_this] = ACTIONS(1607),
    [anon_sym_super] = ACTIONS(1607),
    [anon_sym_new] = ACTIONS(1607),
    [anon_sym_COLON_COLON] = ACTIONS(1607),
    [sym_comment] = ACTIONS(54),
  },
  [641] = {
    [sym_type_argument] = STATE(804),
    [sym_reference_type] = STATE(480),
    [sym_class_or_interface_type] = STATE(481),
    [sym_primitive_type] = STATE(482),
    [sym_integral_type] = STATE(475),
    [sym_floating_point_type] = STATE(475),
    [sym__annotation] = STATE(483),
    [sym_normal_annotation] = STATE(484),
    [sym_marker_annotation] = STATE(484),
    [sym_single_element_annotation] = STATE(484),
    [aux_sym_class_or_interface_type_repeat1] = STATE(485),
    [anon_sym_boolean] = ACTIONS(930),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(934),
    [anon_sym_double] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(936),
    [sym_identifier] = ACTIONS(938),
    [sym_comment] = ACTIONS(54),
  },
  [642] = {
    [anon_sym_GT] = ACTIONS(1609),
    [anon_sym_COMMA] = ACTIONS(1611),
    [sym_comment] = ACTIONS(54),
  },
  [643] = {
    [anon_sym_GT] = ACTIONS(1613),
    [anon_sym_COMMA] = ACTIONS(1613),
    [sym_comment] = ACTIONS(54),
  },
  [644] = {
    [anon_sym_LBRACK] = ACTIONS(1615),
    [anon_sym_AT] = ACTIONS(1615),
    [sym_comment] = ACTIONS(54),
  },
  [645] = {
    [anon_sym_boolean] = ACTIONS(424),
    [anon_sym_byte] = ACTIONS(424),
    [anon_sym_short] = ACTIONS(424),
    [anon_sym_int] = ACTIONS(424),
    [anon_sym_long] = ACTIONS(424),
    [anon_sym_char] = ACTIONS(424),
    [anon_sym_float] = ACTIONS(424),
    [anon_sym_double] = ACTIONS(424),
    [anon_sym_AT] = ACTIONS(390),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(54),
  },
  [646] = {
    [anon_sym_GT] = ACTIONS(1617),
    [anon_sym_AMP] = ACTIONS(1617),
    [anon_sym_COMMA] = ACTIONS(1617),
    [anon_sym_LBRACE] = ACTIONS(1617),
    [anon_sym_DOT] = ACTIONS(1617),
    [anon_sym_LBRACK] = ACTIONS(1617),
    [anon_sym_AT] = ACTIONS(1617),
    [anon_sym_implements] = ACTIONS(1617),
    [anon_sym_COLON_COLON] = ACTIONS(1617),
    [sym_comment] = ACTIONS(54),
  },
  [647] = {
    [sym_type_arguments] = STATE(807),
    [anon_sym_GT] = ACTIONS(1617),
    [anon_sym_LT] = ACTIONS(654),
    [anon_sym_AMP] = ACTIONS(1617),
    [anon_sym_COMMA] = ACTIONS(1617),
    [anon_sym_LBRACE] = ACTIONS(1617),
    [anon_sym_DOT] = ACTIONS(1617),
    [anon_sym_LBRACK] = ACTIONS(1617),
    [anon_sym_AT] = ACTIONS(1617),
    [anon_sym_implements] = ACTIONS(1617),
    [anon_sym_COLON_COLON] = ACTIONS(1617),
    [sym_comment] = ACTIONS(54),
  },
  [648] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1619),
    [sym_comment] = ACTIONS(54),
  },
  [649] = {
    [anon_sym_GT] = ACTIONS(1621),
    [anon_sym_AMP] = ACTIONS(1621),
    [anon_sym_COMMA] = ACTIONS(1621),
    [sym_comment] = ACTIONS(54),
  },
  [650] = {
    [anon_sym_GT] = ACTIONS(1623),
    [anon_sym_AMP] = ACTIONS(1623),
    [anon_sym_COMMA] = ACTIONS(1623),
    [anon_sym_LBRACE] = ACTIONS(1623),
    [anon_sym_DOT] = ACTIONS(944),
    [anon_sym_LBRACK] = ACTIONS(1623),
    [anon_sym_AT] = ACTIONS(1623),
    [anon_sym_implements] = ACTIONS(1623),
    [anon_sym_COLON_COLON] = ACTIONS(1623),
    [sym_comment] = ACTIONS(54),
  },
  [651] = {
    [anon_sym_AT] = ACTIONS(1034),
    [anon_sym_this] = ACTIONS(1270),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1034),
    [sym_identifier] = ACTIONS(1304),
    [sym_comment] = ACTIONS(54),
  },
  [652] = {
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_this] = ACTIONS(1272),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1036),
    [sym_identifier] = ACTIONS(1306),
    [sym_comment] = ACTIONS(54),
  },
  [653] = {
    [anon_sym_AT] = ACTIONS(1034),
    [anon_sym_static] = ACTIONS(1270),
    [anon_sym_public] = ACTIONS(1270),
    [anon_sym_protected] = ACTIONS(1270),
    [anon_sym_private] = ACTIONS(1270),
    [anon_sym_abstract] = ACTIONS(1270),
    [anon_sym_final] = ACTIONS(1270),
    [anon_sym_strictfp] = ACTIONS(1270),
    [anon_sym_default] = ACTIONS(1270),
    [anon_sym_synchronized] = ACTIONS(1270),
    [anon_sym_native] = ACTIONS(1270),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1034),
    [sym_identifier] = ACTIONS(1304),
    [sym_comment] = ACTIONS(54),
  },
  [654] = {
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1272),
    [anon_sym_public] = ACTIONS(1272),
    [anon_sym_protected] = ACTIONS(1272),
    [anon_sym_private] = ACTIONS(1272),
    [anon_sym_abstract] = ACTIONS(1272),
    [anon_sym_final] = ACTIONS(1272),
    [anon_sym_strictfp] = ACTIONS(1272),
    [anon_sym_default] = ACTIONS(1272),
    [anon_sym_synchronized] = ACTIONS(1272),
    [anon_sym_native] = ACTIONS(1272),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1036),
    [sym_identifier] = ACTIONS(1306),
    [sym_comment] = ACTIONS(54),
  },
  [655] = {
    [sym_annotation_type_body] = STATE(810),
    [anon_sym_LBRACE] = ACTIONS(1625),
    [sym_comment] = ACTIONS(54),
  },
  [656] = {
    [sym__literal] = STATE(813),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(814),
    [sym_element_value_pair] = STATE(243),
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
    [anon_sym_RPAREN] = ACTIONS(1627),
    [sym_identifier] = ACTIONS(1629),
    [sym_comment] = ACTIONS(54),
  },
  [657] = {
    [sym_identifier] = ACTIONS(1631),
    [sym_comment] = ACTIONS(54),
  },
  [658] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(258),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(268),
    [sym_class_body_declaration] = STATE(269),
    [sym_constructor_declaration] = STATE(270),
    [sym_constructor_declarator] = STATE(271),
    [sym_class_member_declaration] = STATE(270),
    [sym_interface_declaration] = STATE(258),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_block] = STATE(270),
    [sym_method_declaration] = STATE(258),
    [aux_sym_normal_class_declaration_repeat1] = STATE(274),
    [aux_sym_class_body_repeat1] = STATE(817),
    [sym__semicolon] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(1633),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [659] = {
    [sym_superclass] = STATE(818),
    [sym_super_interfaces] = STATE(819),
    [sym_class_body] = STATE(820),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [660] = {
    [sym_super_interfaces] = STATE(819),
    [sym_class_body] = STATE(820),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [661] = {
    [sym_class_body] = STATE(820),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [sym_comment] = ACTIONS(54),
  },
  [662] = {
    [anon_sym_RBRACE] = ACTIONS(534),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(536),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_interface] = ACTIONS(536),
    [sym_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(54),
  },
  [663] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(282),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(282),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_interface_member_declaration] = STATE(284),
    [sym_constant_declaration] = STATE(282),
    [sym_variable_declarator_list] = STATE(285),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(282),
    [aux_sym_normal_class_declaration_repeat1] = STATE(287),
    [aux_sym_interface_body_repeat1] = STATE(822),
    [sym__semicolon] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1635),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [664] = {
    [sym_extends_interfaces] = STATE(823),
    [sym_interface_body] = STATE(824),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [665] = {
    [sym_interface_body] = STATE(824),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [sym_comment] = ACTIONS(54),
  },
  [666] = {
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
  [667] = {
    [sym_dims] = STATE(827),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_default_value] = STATE(828),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [sym__semicolon] = ACTIONS(1637),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(1639),
    [sym_comment] = ACTIONS(54),
  },
  [668] = {
    [sym_identifier] = ACTIONS(1641),
    [sym_comment] = ACTIONS(54),
  },
  [669] = {
    [sym_type_parameters] = STATE(830),
    [sym_superclass] = STATE(818),
    [sym_super_interfaces] = STATE(819),
    [sym_class_body] = STATE(820),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [670] = {
    [sym_type_parameters] = STATE(831),
    [sym_extends_interfaces] = STATE(823),
    [sym_interface_body] = STATE(824),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [671] = {
    [anon_sym_RPAREN] = ACTIONS(1643),
    [sym_comment] = ACTIONS(54),
  },
  [672] = {
    [anon_sym_RBRACE] = ACTIONS(1549),
    [anon_sym_AT] = ACTIONS(1549),
    [anon_sym_static] = ACTIONS(1551),
    [anon_sym_class] = ACTIONS(1551),
    [anon_sym_public] = ACTIONS(1551),
    [anon_sym_protected] = ACTIONS(1551),
    [anon_sym_private] = ACTIONS(1551),
    [anon_sym_abstract] = ACTIONS(1551),
    [anon_sym_final] = ACTIONS(1551),
    [anon_sym_strictfp] = ACTIONS(1551),
    [anon_sym_default] = ACTIONS(1551),
    [anon_sym_synchronized] = ACTIONS(1551),
    [anon_sym_native] = ACTIONS(1551),
    [anon_sym_interface] = ACTIONS(1551),
    [sym_identifier] = ACTIONS(1553),
    [sym_comment] = ACTIONS(54),
  },
  [673] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [674] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [675] = {
    [anon_sym_EQ] = ACTIONS(1645),
    [anon_sym_PLUS_EQ] = ACTIONS(1647),
    [anon_sym_DASH_EQ] = ACTIONS(1647),
    [anon_sym_STAR_EQ] = ACTIONS(1647),
    [anon_sym_SLASH_EQ] = ACTIONS(1647),
    [anon_sym_AMP_EQ] = ACTIONS(1647),
    [anon_sym_PIPE_EQ] = ACTIONS(1647),
    [anon_sym_CARET_EQ] = ACTIONS(1647),
    [anon_sym_PERCENT_EQ] = ACTIONS(1647),
    [anon_sym_LT_LT_EQ] = ACTIONS(1647),
    [anon_sym_GT_GT_EQ] = ACTIONS(1647),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1647),
    [anon_sym_GT] = ACTIONS(1649),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(294),
    [anon_sym_GT_EQ] = ACTIONS(1651),
    [anon_sym_LT_EQ] = ACTIONS(1651),
    [anon_sym_BANG_EQ] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_AMP] = ACTIONS(1653),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(296),
    [anon_sym_GT_GT] = ACTIONS(296),
    [anon_sym_GT_GT_GT] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [676] = {
    [anon_sym_RBRACE] = ACTIONS(1655),
    [sym_comment] = ACTIONS(54),
  },
  [677] = {
    [sym__expression] = STATE(843),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [678] = {
    [sym__semicolon] = ACTIONS(1661),
    [anon_sym_RPAREN] = ACTIONS(1661),
    [anon_sym_COMMA] = ACTIONS(1661),
    [anon_sym_RBRACE] = ACTIONS(1661),
    [sym_comment] = ACTIONS(54),
  },
  [679] = {
    [aux_sym_element_value_array_initializer_repeat1] = STATE(845),
    [anon_sym_COMMA] = ACTIONS(1663),
    [anon_sym_RBRACE] = ACTIONS(1655),
    [sym_comment] = ACTIONS(54),
  },
  [680] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1665),
    [anon_sym_COMMA] = ACTIONS(1372),
    [anon_sym_QMARK] = ACTIONS(1667),
    [anon_sym_RBRACE] = ACTIONS(1372),
    [sym_comment] = ACTIONS(54),
  },
  [681] = {
    [anon_sym_AMP_AMP] = ACTIONS(1669),
    [anon_sym_PIPE_PIPE] = ACTIONS(1378),
    [anon_sym_COMMA] = ACTIONS(1378),
    [anon_sym_QMARK] = ACTIONS(1378),
    [anon_sym_RBRACE] = ACTIONS(1378),
    [sym_comment] = ACTIONS(54),
  },
  [682] = {
    [anon_sym_AMP_AMP] = ACTIONS(1380),
    [anon_sym_PIPE_PIPE] = ACTIONS(1380),
    [anon_sym_PIPE] = ACTIONS(1671),
    [anon_sym_COMMA] = ACTIONS(1380),
    [anon_sym_QMARK] = ACTIONS(1380),
    [anon_sym_RBRACE] = ACTIONS(1380),
    [sym_comment] = ACTIONS(54),
  },
  [683] = {
    [anon_sym_AMP_AMP] = ACTIONS(1384),
    [anon_sym_PIPE_PIPE] = ACTIONS(1384),
    [anon_sym_PIPE] = ACTIONS(1386),
    [anon_sym_CARET] = ACTIONS(1673),
    [anon_sym_COMMA] = ACTIONS(1384),
    [anon_sym_QMARK] = ACTIONS(1384),
    [anon_sym_RBRACE] = ACTIONS(1384),
    [sym_comment] = ACTIONS(54),
  },
  [684] = {
    [anon_sym_LT] = ACTIONS(1675),
    [anon_sym_EQ_EQ] = ACTIONS(1396),
    [anon_sym_BANG_EQ] = ACTIONS(1396),
    [anon_sym_AMP_AMP] = ACTIONS(1398),
    [anon_sym_PIPE_PIPE] = ACTIONS(1398),
    [anon_sym_PIPE] = ACTIONS(1400),
    [anon_sym_CARET] = ACTIONS(1398),
    [anon_sym_COMMA] = ACTIONS(1398),
    [anon_sym_QMARK] = ACTIONS(1398),
    [anon_sym_RBRACE] = ACTIONS(1398),
    [sym_comment] = ACTIONS(54),
  },
  [685] = {
    [anon_sym_EQ_EQ] = ACTIONS(1677),
    [anon_sym_BANG_EQ] = ACTIONS(1677),
    [sym_comment] = ACTIONS(54),
  },
  [686] = {
    [anon_sym_LT] = ACTIONS(1404),
    [anon_sym_EQ_EQ] = ACTIONS(1406),
    [anon_sym_BANG_EQ] = ACTIONS(1406),
    [anon_sym_AMP_AMP] = ACTIONS(1406),
    [anon_sym_PIPE_PIPE] = ACTIONS(1406),
    [anon_sym_PIPE] = ACTIONS(1404),
    [anon_sym_CARET] = ACTIONS(1406),
    [anon_sym_LT_LT] = ACTIONS(1679),
    [anon_sym_GT_GT] = ACTIONS(1681),
    [anon_sym_GT_GT_GT] = ACTIONS(1679),
    [anon_sym_COMMA] = ACTIONS(1406),
    [anon_sym_QMARK] = ACTIONS(1406),
    [anon_sym_RBRACE] = ACTIONS(1406),
    [sym_comment] = ACTIONS(54),
  },
  [687] = {
    [anon_sym_LT] = ACTIONS(1412),
    [anon_sym_EQ_EQ] = ACTIONS(1414),
    [anon_sym_BANG_EQ] = ACTIONS(1414),
    [anon_sym_AMP_AMP] = ACTIONS(1414),
    [anon_sym_PIPE_PIPE] = ACTIONS(1414),
    [anon_sym_PLUS] = ACTIONS(1683),
    [anon_sym_DASH] = ACTIONS(1683),
    [anon_sym_PIPE] = ACTIONS(1412),
    [anon_sym_CARET] = ACTIONS(1414),
    [anon_sym_LT_LT] = ACTIONS(1414),
    [anon_sym_GT_GT] = ACTIONS(1412),
    [anon_sym_GT_GT_GT] = ACTIONS(1414),
    [anon_sym_COMMA] = ACTIONS(1414),
    [anon_sym_QMARK] = ACTIONS(1414),
    [anon_sym_RBRACE] = ACTIONS(1414),
    [sym_comment] = ACTIONS(54),
  },
  [688] = {
    [anon_sym_LT] = ACTIONS(1418),
    [anon_sym_EQ_EQ] = ACTIONS(1420),
    [anon_sym_BANG_EQ] = ACTIONS(1420),
    [anon_sym_AMP_AMP] = ACTIONS(1420),
    [anon_sym_PIPE_PIPE] = ACTIONS(1420),
    [anon_sym_PLUS] = ACTIONS(1420),
    [anon_sym_DASH] = ACTIONS(1420),
    [anon_sym_STAR] = ACTIONS(1685),
    [anon_sym_SLASH] = ACTIONS(1687),
    [anon_sym_PIPE] = ACTIONS(1418),
    [anon_sym_CARET] = ACTIONS(1420),
    [anon_sym_PERCENT] = ACTIONS(1685),
    [anon_sym_LT_LT] = ACTIONS(1420),
    [anon_sym_GT_GT] = ACTIONS(1418),
    [anon_sym_GT_GT_GT] = ACTIONS(1420),
    [anon_sym_COMMA] = ACTIONS(1420),
    [anon_sym_QMARK] = ACTIONS(1420),
    [anon_sym_RBRACE] = ACTIONS(1420),
    [sym_comment] = ACTIONS(54),
  },
  [689] = {
    [sym_unary_expression] = STATE(524),
    [sym_conditional_and_expression] = STATE(856),
    [sym_inclusive_or_expression] = STATE(528),
    [sym_exclusive_or_expression] = STATE(529),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(531),
    [sym_equality_expression] = STATE(532),
    [sym_shift_expression] = STATE(533),
    [sym_additive_expression] = STATE(534),
    [sym_multiplicative_expression] = STATE(535),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [sym_comment] = ACTIONS(54),
  },
  [690] = {
    [sym__expression] = STATE(857),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [691] = {
    [sym_unary_expression] = STATE(524),
    [sym_inclusive_or_expression] = STATE(858),
    [sym_exclusive_or_expression] = STATE(529),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(531),
    [sym_equality_expression] = STATE(532),
    [sym_shift_expression] = STATE(533),
    [sym_additive_expression] = STATE(534),
    [sym_multiplicative_expression] = STATE(535),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [sym_comment] = ACTIONS(54),
  },
  [692] = {
    [sym_unary_expression] = STATE(524),
    [sym_exclusive_or_expression] = STATE(859),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(531),
    [sym_equality_expression] = STATE(532),
    [sym_shift_expression] = STATE(533),
    [sym_additive_expression] = STATE(534),
    [sym_multiplicative_expression] = STATE(535),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [sym_comment] = ACTIONS(54),
  },
  [693] = {
    [sym_unary_expression] = STATE(524),
    [sym_and_expression] = STATE(860),
    [sym_relational_expression] = STATE(531),
    [sym_equality_expression] = STATE(532),
    [sym_shift_expression] = STATE(533),
    [sym_additive_expression] = STATE(534),
    [sym_multiplicative_expression] = STATE(535),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [sym_comment] = ACTIONS(54),
  },
  [694] = {
    [sym_unary_expression] = STATE(524),
    [sym_shift_expression] = STATE(861),
    [sym_additive_expression] = STATE(534),
    [sym_multiplicative_expression] = STATE(535),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [sym_comment] = ACTIONS(54),
  },
  [695] = {
    [sym_unary_expression] = STATE(524),
    [sym_relational_expression] = STATE(862),
    [sym_shift_expression] = STATE(533),
    [sym_additive_expression] = STATE(534),
    [sym_multiplicative_expression] = STATE(535),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [sym_comment] = ACTIONS(54),
  },
  [696] = {
    [sym_unary_expression] = STATE(524),
    [sym_additive_expression] = STATE(863),
    [sym_multiplicative_expression] = STATE(535),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [sym_comment] = ACTIONS(54),
  },
  [697] = {
    [sym_unary_expression] = STATE(524),
    [sym_multiplicative_expression] = STATE(864),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [sym_comment] = ACTIONS(54),
  },
  [698] = {
    [sym_unary_expression] = STATE(865),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [sym_comment] = ACTIONS(54),
  },
  [699] = {
    [anon_sym_RPAREN] = ACTIONS(1689),
    [anon_sym_COMMA] = ACTIONS(1689),
    [sym_comment] = ACTIONS(54),
  },
  [700] = {
    [sym__semicolon] = ACTIONS(1691),
    [anon_sym_COMMA] = ACTIONS(1691),
    [anon_sym_DOT] = ACTIONS(1691),
    [sym_comment] = ACTIONS(54),
  },
  [701] = {
    [anon_sym_RBRACE] = ACTIONS(1693),
    [anon_sym_requires] = ACTIONS(1693),
    [anon_sym_exports] = ACTIONS(1693),
    [anon_sym_opens] = ACTIONS(1693),
    [anon_sym_uses] = ACTIONS(1693),
    [anon_sym_provides] = ACTIONS(1693),
    [sym_comment] = ACTIONS(54),
  },
  [702] = {
    [sym__semicolon] = ACTIONS(1695),
    [anon_sym_COMMA] = ACTIONS(1695),
    [anon_sym_DOT] = ACTIONS(1066),
    [sym_comment] = ACTIONS(54),
  },
  [703] = {
    [sym__semicolon] = ACTIONS(736),
    [anon_sym_COMMA] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(736),
    [anon_sym_to] = ACTIONS(738),
    [sym_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(54),
  },
  [704] = {
    [aux_sym_module_directive_repeat2] = STATE(867),
    [sym__semicolon] = ACTIONS(1697),
    [anon_sym_COMMA] = ACTIONS(1068),
    [anon_sym_DOT] = ACTIONS(1066),
    [sym_comment] = ACTIONS(54),
  },
  [705] = {
    [sym__semicolon] = ACTIONS(1697),
    [anon_sym_COMMA] = ACTIONS(1448),
    [sym_comment] = ACTIONS(54),
  },
  [706] = {
    [sym_module_name] = STATE(868),
    [sym_identifier] = ACTIONS(1444),
    [sym_comment] = ACTIONS(54),
  },
  [707] = {
    [aux_sym_module_directive_repeat3] = STATE(870),
    [sym__semicolon] = ACTIONS(1697),
    [anon_sym_COMMA] = ACTIONS(1699),
    [anon_sym_DOT] = ACTIONS(1074),
    [sym_comment] = ACTIONS(54),
  },
  [708] = {
    [sym__annotation] = STATE(363),
    [sym_normal_annotation] = STATE(367),
    [sym_marker_annotation] = STATE(367),
    [sym_single_element_annotation] = STATE(367),
    [sym_class_declaration] = STATE(368),
    [sym_normal_class_declaration] = STATE(369),
    [sym_modifier] = STATE(370),
    [sym_interface_declaration] = STATE(368),
    [sym_annotation_type_declaration] = STATE(371),
    [sym_annotation_type_member_declaration] = STATE(372),
    [sym_annotation_type_element_declaration] = STATE(368),
    [sym_normal_interface_declaration] = STATE(371),
    [sym_constant_declaration] = STATE(368),
    [sym_variable_declarator_list] = STATE(373),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(374),
    [aux_sym_annotation_type_body_repeat1] = STATE(872),
    [anon_sym_RBRACE] = ACTIONS(1701),
    [anon_sym_AT] = ACTIONS(708),
    [anon_sym_static] = ACTIONS(710),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(710),
    [anon_sym_protected] = ACTIONS(710),
    [anon_sym_private] = ACTIONS(710),
    [anon_sym_abstract] = ACTIONS(710),
    [anon_sym_final] = ACTIONS(710),
    [anon_sym_strictfp] = ACTIONS(710),
    [anon_sym_default] = ACTIONS(710),
    [anon_sym_synchronized] = ACTIONS(710),
    [anon_sym_native] = ACTIONS(710),
    [anon_sym_interface] = ACTIONS(714),
    [sym_identifier] = ACTIONS(716),
    [sym_comment] = ACTIONS(54),
  },
  [709] = {
    [sym__semicolon] = ACTIONS(718),
    [anon_sym_LT] = ACTIONS(718),
    [anon_sym_LBRACE] = ACTIONS(718),
    [anon_sym_RBRACE] = ACTIONS(718),
    [anon_sym_AT] = ACTIONS(718),
    [anon_sym_static] = ACTIONS(720),
    [anon_sym_class] = ACTIONS(720),
    [anon_sym_public] = ACTIONS(720),
    [anon_sym_protected] = ACTIONS(720),
    [anon_sym_private] = ACTIONS(720),
    [anon_sym_abstract] = ACTIONS(720),
    [anon_sym_final] = ACTIONS(720),
    [anon_sym_strictfp] = ACTIONS(720),
    [anon_sym_default] = ACTIONS(720),
    [anon_sym_synchronized] = ACTIONS(720),
    [anon_sym_native] = ACTIONS(720),
    [anon_sym_void] = ACTIONS(720),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [710] = {
    [anon_sym_LT] = ACTIONS(724),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(924),
    [anon_sym_class] = ACTIONS(924),
    [anon_sym_public] = ACTIONS(924),
    [anon_sym_protected] = ACTIONS(924),
    [anon_sym_private] = ACTIONS(924),
    [anon_sym_abstract] = ACTIONS(924),
    [anon_sym_final] = ACTIONS(924),
    [anon_sym_strictfp] = ACTIONS(924),
    [anon_sym_default] = ACTIONS(924),
    [anon_sym_synchronized] = ACTIONS(924),
    [anon_sym_native] = ACTIONS(924),
    [anon_sym_void] = ACTIONS(924),
    [anon_sym_interface] = ACTIONS(924),
    [sym_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(54),
  },
  [711] = {
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(1703),
    [sym_comment] = ACTIONS(54),
  },
  [712] = {
    [anon_sym_RPAREN] = ACTIONS(1703),
    [sym_comment] = ACTIONS(54),
  },
  [713] = {
    [anon_sym_RPAREN] = ACTIONS(1705),
    [sym_comment] = ACTIONS(54),
  },
  [714] = {
    [anon_sym_LT] = ACTIONS(736),
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(736),
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
    [anon_sym_synchronized] = ACTIONS(738),
    [anon_sym_native] = ACTIONS(738),
    [anon_sym_void] = ACTIONS(738),
    [anon_sym_interface] = ACTIONS(738),
    [sym_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(54),
  },
  [715] = {
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
  [716] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(258),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(268),
    [sym_class_body_declaration] = STATE(418),
    [sym_constructor_declaration] = STATE(270),
    [sym_constructor_declarator] = STATE(271),
    [sym_class_member_declaration] = STATE(270),
    [sym_interface_declaration] = STATE(258),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_block] = STATE(270),
    [sym_method_declaration] = STATE(258),
    [aux_sym_normal_class_declaration_repeat1] = STATE(274),
    [sym__semicolon] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(1707),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [717] = {
    [sym_super_interfaces] = STATE(876),
    [sym_class_body] = STATE(877),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [718] = {
    [sym_class_body] = STATE(877),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [sym_comment] = ACTIONS(54),
  },
  [719] = {
    [sym__semicolon] = ACTIONS(828),
    [anon_sym_LT] = ACTIONS(828),
    [anon_sym_LBRACE] = ACTIONS(828),
    [anon_sym_RBRACE] = ACTIONS(828),
    [anon_sym_AT] = ACTIONS(828),
    [anon_sym_static] = ACTIONS(830),
    [anon_sym_class] = ACTIONS(830),
    [anon_sym_public] = ACTIONS(830),
    [anon_sym_protected] = ACTIONS(830),
    [anon_sym_private] = ACTIONS(830),
    [anon_sym_abstract] = ACTIONS(830),
    [anon_sym_final] = ACTIONS(830),
    [anon_sym_strictfp] = ACTIONS(830),
    [anon_sym_default] = ACTIONS(830),
    [anon_sym_synchronized] = ACTIONS(830),
    [anon_sym_native] = ACTIONS(830),
    [anon_sym_void] = ACTIONS(830),
    [anon_sym_interface] = ACTIONS(830),
    [sym_identifier] = ACTIONS(832),
    [sym_comment] = ACTIONS(54),
  },
  [720] = {
    [sym__semicolon] = ACTIONS(840),
    [anon_sym_LT] = ACTIONS(840),
    [anon_sym_LBRACE] = ACTIONS(840),
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_AT] = ACTIONS(840),
    [anon_sym_static] = ACTIONS(842),
    [anon_sym_class] = ACTIONS(842),
    [anon_sym_public] = ACTIONS(842),
    [anon_sym_protected] = ACTIONS(842),
    [anon_sym_private] = ACTIONS(842),
    [anon_sym_abstract] = ACTIONS(842),
    [anon_sym_final] = ACTIONS(842),
    [anon_sym_strictfp] = ACTIONS(842),
    [anon_sym_default] = ACTIONS(842),
    [anon_sym_synchronized] = ACTIONS(842),
    [anon_sym_native] = ACTIONS(842),
    [anon_sym_void] = ACTIONS(842),
    [anon_sym_interface] = ACTIONS(842),
    [sym_identifier] = ACTIONS(844),
    [sym_comment] = ACTIONS(54),
  },
  [721] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(282),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(282),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_interface_member_declaration] = STATE(428),
    [sym_constant_declaration] = STATE(282),
    [sym_variable_declarator_list] = STATE(285),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(282),
    [aux_sym_normal_class_declaration_repeat1] = STATE(287),
    [sym__semicolon] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1709),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [722] = {
    [sym_interface_body] = STATE(879),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym_comment] = ACTIONS(54),
  },
  [723] = {
    [sym__semicolon] = ACTIONS(862),
    [anon_sym_LT] = ACTIONS(862),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_AT] = ACTIONS(862),
    [anon_sym_static] = ACTIONS(864),
    [anon_sym_class] = ACTIONS(864),
    [anon_sym_public] = ACTIONS(864),
    [anon_sym_protected] = ACTIONS(864),
    [anon_sym_private] = ACTIONS(864),
    [anon_sym_abstract] = ACTIONS(864),
    [anon_sym_final] = ACTIONS(864),
    [anon_sym_strictfp] = ACTIONS(864),
    [anon_sym_default] = ACTIONS(864),
    [anon_sym_synchronized] = ACTIONS(864),
    [anon_sym_native] = ACTIONS(864),
    [anon_sym_void] = ACTIONS(864),
    [anon_sym_interface] = ACTIONS(864),
    [sym_identifier] = ACTIONS(866),
    [sym_comment] = ACTIONS(54),
  },
  [724] = {
    [anon_sym_EQ] = ACTIONS(1204),
    [anon_sym_PLUS_EQ] = ACTIONS(1206),
    [anon_sym_DASH_EQ] = ACTIONS(1206),
    [anon_sym_STAR_EQ] = ACTIONS(1206),
    [anon_sym_SLASH_EQ] = ACTIONS(1206),
    [anon_sym_AMP_EQ] = ACTIONS(1206),
    [anon_sym_PIPE_EQ] = ACTIONS(1206),
    [anon_sym_CARET_EQ] = ACTIONS(1206),
    [anon_sym_PERCENT_EQ] = ACTIONS(1206),
    [anon_sym_LT_LT_EQ] = ACTIONS(1206),
    [anon_sym_GT_GT_EQ] = ACTIONS(1206),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1206),
    [anon_sym_GT] = ACTIONS(1208),
    [anon_sym_LT] = ACTIONS(1208),
    [anon_sym_EQ_EQ] = ACTIONS(1210),
    [anon_sym_GT_EQ] = ACTIONS(1210),
    [anon_sym_LT_EQ] = ACTIONS(1210),
    [anon_sym_BANG_EQ] = ACTIONS(1210),
    [anon_sym_AMP_AMP] = ACTIONS(1212),
    [anon_sym_PIPE_PIPE] = ACTIONS(1214),
    [anon_sym_PLUS] = ACTIONS(1216),
    [anon_sym_DASH] = ACTIONS(1216),
    [anon_sym_STAR] = ACTIONS(1218),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(1222),
    [anon_sym_CARET] = ACTIONS(1222),
    [anon_sym_PERCENT] = ACTIONS(1218),
    [anon_sym_LT_LT] = ACTIONS(1218),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(1711),
    [anon_sym_QMARK] = ACTIONS(1226),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [725] = {
    [anon_sym_class] = ACTIONS(1713),
    [sym_comment] = ACTIONS(54),
  },
  [726] = {
    [anon_sym_DOT] = ACTIONS(1715),
    [anon_sym_LBRACK] = ACTIONS(1715),
    [sym_comment] = ACTIONS(54),
  },
  [727] = {
    [anon_sym_DOT] = ACTIONS(1717),
    [anon_sym_LBRACK] = ACTIONS(1719),
    [sym_comment] = ACTIONS(54),
  },
  [728] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_boolean] = ACTIONS(306),
    [anon_sym_byte] = ACTIONS(306),
    [anon_sym_short] = ACTIONS(306),
    [anon_sym_int] = ACTIONS(306),
    [anon_sym_long] = ACTIONS(306),
    [anon_sym_char] = ACTIONS(306),
    [anon_sym_float] = ACTIONS(306),
    [anon_sym_double] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_static] = ACTIONS(306),
    [anon_sym_class] = ACTIONS(306),
    [anon_sym_public] = ACTIONS(306),
    [anon_sym_protected] = ACTIONS(306),
    [anon_sym_private] = ACTIONS(306),
    [anon_sym_abstract] = ACTIONS(306),
    [anon_sym_final] = ACTIONS(306),
    [anon_sym_strictfp] = ACTIONS(306),
    [anon_sym_default] = ACTIONS(306),
    [anon_sym_synchronized] = ACTIONS(306),
    [anon_sym_native] = ACTIONS(306),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [729] = {
    [anon_sym_LPAREN] = ACTIONS(1721),
    [anon_sym_DOT] = ACTIONS(1723),
    [anon_sym_boolean] = ACTIONS(412),
    [anon_sym_byte] = ACTIONS(412),
    [anon_sym_short] = ACTIONS(412),
    [anon_sym_int] = ACTIONS(412),
    [anon_sym_long] = ACTIONS(412),
    [anon_sym_char] = ACTIONS(412),
    [anon_sym_float] = ACTIONS(412),
    [anon_sym_double] = ACTIONS(412),
    [anon_sym_AT] = ACTIONS(308),
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
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(54),
  },
  [730] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(888),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1725),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [731] = {
    [sym_identifier] = ACTIONS(1727),
    [sym_comment] = ACTIONS(54),
  },
  [732] = {
    [sym_type_arguments] = STATE(891),
    [anon_sym_LT] = ACTIONS(904),
    [sym_identifier] = ACTIONS(1729),
    [sym_comment] = ACTIONS(54),
  },
  [733] = {
    [sym_type_arguments] = STATE(894),
    [sym_type_arguments_or_diamond] = STATE(895),
    [aux_sym_class_or_interface_type_repeat2] = STATE(340),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(896),
    [anon_sym_LT] = ACTIONS(1731),
    [anon_sym_LPAREN] = ACTIONS(1733),
    [anon_sym_DOT] = ACTIONS(1735),
    [anon_sym_LBRACK] = ACTIONS(652),
    [anon_sym_AT] = ACTIONS(652),
    [anon_sym_LT_GT] = ACTIONS(1737),
    [sym_comment] = ACTIONS(54),
  },
  [734] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_class_or_interface_type_to_instantiate] = STATE(898),
    [aux_sym_class_or_interface_type_repeat1] = STATE(899),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1739),
    [sym_comment] = ACTIONS(54),
  },
  [735] = {
    [sym_dims] = STATE(900),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [736] = {
    [sym_dims] = STATE(900),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_dims_exprs] = STATE(901),
    [sym_dims_expr] = STATE(744),
    [aux_sym_class_or_interface_type_repeat1] = STATE(745),
    [aux_sym_dims_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(1507),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [737] = {
    [anon_sym_LPAREN] = ACTIONS(1741),
    [sym_comment] = ACTIONS(54),
  },
  [738] = {
    [sym_integral_type] = STATE(644),
    [sym_floating_point_type] = STATE(644),
    [sym__annotation] = STATE(645),
    [sym_normal_annotation] = STATE(484),
    [sym_marker_annotation] = STATE(484),
    [sym_single_element_annotation] = STATE(484),
    [anon_sym_boolean] = ACTIONS(1292),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(934),
    [anon_sym_double] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(936),
    [sym_identifier] = ACTIONS(1743),
    [sym_comment] = ACTIONS(54),
  },
  [739] = {
    [anon_sym_LPAREN] = ACTIONS(1745),
    [sym_comment] = ACTIONS(54),
  },
  [740] = {
    [sym__expression] = STATE(907),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [anon_sym_RBRACK] = ACTIONS(448),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [741] = {
    [sym_type_arguments] = STATE(908),
    [anon_sym_LT] = ACTIONS(654),
    [anon_sym_new] = ACTIONS(1751),
    [sym_comment] = ACTIONS(54),
  },
  [742] = {
    [anon_sym_COLON_COLON] = ACTIONS(1753),
    [sym_comment] = ACTIONS(54),
  },
  [743] = {
    [sym_dims] = STATE(909),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [anon_sym_DOT] = ACTIONS(1755),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(1755),
    [sym_comment] = ACTIONS(54),
  },
  [744] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_dims_expr] = STATE(911),
    [aux_sym_class_or_interface_type_repeat1] = STATE(912),
    [aux_sym_dims_exprs_repeat1] = STATE(913),
    [anon_sym_DOT] = ACTIONS(1757),
    [anon_sym_LBRACK] = ACTIONS(1759),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(1757),
    [sym_comment] = ACTIONS(54),
  },
  [745] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(1761),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [746] = {
    [sym_type_arguments] = STATE(917),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_class] = ACTIONS(1763),
    [anon_sym_this] = ACTIONS(1765),
    [anon_sym_super] = ACTIONS(1767),
    [sym_identifier] = ACTIONS(1769),
    [sym_comment] = ACTIONS(54),
  },
  [747] = {
    [sym__semicolon] = ACTIONS(1771),
    [anon_sym_LT] = ACTIONS(1771),
    [anon_sym_LBRACE] = ACTIONS(1771),
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
    [anon_sym_synchronized] = ACTIONS(1773),
    [anon_sym_native] = ACTIONS(1773),
    [anon_sym_void] = ACTIONS(1773),
    [anon_sym_interface] = ACTIONS(1773),
    [sym_identifier] = ACTIONS(1775),
    [sym_comment] = ACTIONS(54),
  },
  [748] = {
    [anon_sym_RBRACE] = ACTIONS(1777),
    [sym_comment] = ACTIONS(54),
  },
  [749] = {
    [sym_type_arguments] = STATE(923),
    [sym_unqualified_class_instance_creation_expression] = STATE(924),
    [anon_sym_LT] = ACTIONS(1779),
    [anon_sym_super] = ACTIONS(1781),
    [anon_sym_new] = ACTIONS(1783),
    [sym_identifier] = ACTIONS(1785),
    [sym_comment] = ACTIONS(54),
  },
  [750] = {
    [sym__expression] = STATE(925),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [751] = {
    [sym_type_arguments] = STATE(917),
    [sym_unqualified_class_instance_creation_expression] = STATE(924),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_super] = ACTIONS(1781),
    [anon_sym_new] = ACTIONS(1783),
    [sym_identifier] = ACTIONS(1787),
    [sym_comment] = ACTIONS(54),
  },
  [752] = {
    [anon_sym_new] = ACTIONS(1751),
    [sym_comment] = ACTIONS(54),
  },
  [753] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(928),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1789),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [754] = {
    [sym_annotation_type_body] = STATE(929),
    [anon_sym_LBRACE] = ACTIONS(1466),
    [sym_comment] = ACTIONS(54),
  },
  [755] = {
    [sym_superclass] = STATE(930),
    [sym_super_interfaces] = STATE(876),
    [sym_class_body] = STATE(877),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [756] = {
    [sym_extends_interfaces] = STATE(931),
    [sym_interface_body] = STATE(879),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [757] = {
    [sym__semicolon] = ACTIONS(1791),
    [anon_sym_LT] = ACTIONS(1791),
    [anon_sym_LBRACE] = ACTIONS(1791),
    [anon_sym_RBRACE] = ACTIONS(1791),
    [anon_sym_AT] = ACTIONS(1791),
    [anon_sym_static] = ACTIONS(1793),
    [anon_sym_class] = ACTIONS(1793),
    [anon_sym_public] = ACTIONS(1793),
    [anon_sym_protected] = ACTIONS(1793),
    [anon_sym_private] = ACTIONS(1793),
    [anon_sym_abstract] = ACTIONS(1793),
    [anon_sym_final] = ACTIONS(1793),
    [anon_sym_strictfp] = ACTIONS(1793),
    [anon_sym_default] = ACTIONS(1793),
    [anon_sym_synchronized] = ACTIONS(1793),
    [anon_sym_native] = ACTIONS(1793),
    [anon_sym_void] = ACTIONS(1793),
    [anon_sym_interface] = ACTIONS(1793),
    [sym_identifier] = ACTIONS(1795),
    [sym_comment] = ACTIONS(54),
  },
  [758] = {
    [anon_sym_COMMA] = ACTIONS(1797),
    [anon_sym_LBRACE] = ACTIONS(1797),
    [sym_comment] = ACTIONS(54),
  },
  [759] = {
    [sym__semicolon] = ACTIONS(1799),
    [anon_sym_COMMA] = ACTIONS(1799),
    [sym_comment] = ACTIONS(54),
  },
  [760] = {
    [anon_sym_EQ] = ACTIONS(1198),
    [anon_sym_PLUS_EQ] = ACTIONS(1196),
    [anon_sym_DASH_EQ] = ACTIONS(1196),
    [anon_sym_STAR_EQ] = ACTIONS(1196),
    [anon_sym_SLASH_EQ] = ACTIONS(1196),
    [anon_sym_AMP_EQ] = ACTIONS(1196),
    [anon_sym_PIPE_EQ] = ACTIONS(1196),
    [anon_sym_CARET_EQ] = ACTIONS(1196),
    [anon_sym_PERCENT_EQ] = ACTIONS(1196),
    [anon_sym_LT_LT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(1196),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [761] = {
    [anon_sym_EQ] = ACTIONS(1198),
    [anon_sym_PLUS_EQ] = ACTIONS(1196),
    [anon_sym_DASH_EQ] = ACTIONS(1196),
    [anon_sym_STAR_EQ] = ACTIONS(1196),
    [anon_sym_SLASH_EQ] = ACTIONS(1196),
    [anon_sym_AMP_EQ] = ACTIONS(1196),
    [anon_sym_PIPE_EQ] = ACTIONS(1196),
    [anon_sym_CARET_EQ] = ACTIONS(1196),
    [anon_sym_PERCENT_EQ] = ACTIONS(1196),
    [anon_sym_LT_LT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_LT] = ACTIONS(586),
    [anon_sym_EQ_EQ] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(588),
    [anon_sym_BANG_EQ] = ACTIONS(588),
    [anon_sym_AMP_AMP] = ACTIONS(590),
    [anon_sym_PIPE_PIPE] = ACTIONS(592),
    [anon_sym_PLUS] = ACTIONS(594),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym_STAR] = ACTIONS(596),
    [anon_sym_SLASH] = ACTIONS(596),
    [anon_sym_AMP] = ACTIONS(598),
    [anon_sym_PIPE] = ACTIONS(600),
    [anon_sym_CARET] = ACTIONS(600),
    [anon_sym_PERCENT] = ACTIONS(596),
    [anon_sym_LT_LT] = ACTIONS(596),
    [anon_sym_GT_GT] = ACTIONS(596),
    [anon_sym_GT_GT_GT] = ACTIONS(596),
    [anon_sym_QMARK] = ACTIONS(602),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(1196),
    [sym_comment] = ACTIONS(54),
  },
  [762] = {
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_PLUS_EQ] = ACTIONS(550),
    [anon_sym_DASH_EQ] = ACTIONS(550),
    [anon_sym_STAR_EQ] = ACTIONS(550),
    [anon_sym_SLASH_EQ] = ACTIONS(550),
    [anon_sym_AMP_EQ] = ACTIONS(550),
    [anon_sym_PIPE_EQ] = ACTIONS(550),
    [anon_sym_CARET_EQ] = ACTIONS(550),
    [anon_sym_PERCENT_EQ] = ACTIONS(550),
    [anon_sym_LT_LT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(1208),
    [anon_sym_LT] = ACTIONS(1208),
    [anon_sym_EQ_EQ] = ACTIONS(1210),
    [anon_sym_GT_EQ] = ACTIONS(1210),
    [anon_sym_LT_EQ] = ACTIONS(1210),
    [anon_sym_BANG_EQ] = ACTIONS(1210),
    [anon_sym_AMP_AMP] = ACTIONS(1212),
    [anon_sym_PIPE_PIPE] = ACTIONS(1214),
    [anon_sym_PLUS] = ACTIONS(1216),
    [anon_sym_DASH] = ACTIONS(1216),
    [anon_sym_STAR] = ACTIONS(1218),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(1222),
    [anon_sym_CARET] = ACTIONS(1222),
    [anon_sym_PERCENT] = ACTIONS(1218),
    [anon_sym_LT_LT] = ACTIONS(1218),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_QMARK] = ACTIONS(1226),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [763] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(554),
    [anon_sym_GT_EQ] = ACTIONS(554),
    [anon_sym_LT_EQ] = ACTIONS(554),
    [anon_sym_BANG_EQ] = ACTIONS(554),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(1218),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(1218),
    [anon_sym_LT_LT] = ACTIONS(1218),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [764] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(1208),
    [anon_sym_LT] = ACTIONS(1208),
    [anon_sym_EQ_EQ] = ACTIONS(1210),
    [anon_sym_GT_EQ] = ACTIONS(1210),
    [anon_sym_LT_EQ] = ACTIONS(1210),
    [anon_sym_BANG_EQ] = ACTIONS(1210),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(1216),
    [anon_sym_DASH] = ACTIONS(1216),
    [anon_sym_STAR] = ACTIONS(1218),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(1218),
    [anon_sym_LT_LT] = ACTIONS(1218),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [765] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(1208),
    [anon_sym_LT] = ACTIONS(1208),
    [anon_sym_EQ_EQ] = ACTIONS(1210),
    [anon_sym_GT_EQ] = ACTIONS(1210),
    [anon_sym_LT_EQ] = ACTIONS(1210),
    [anon_sym_BANG_EQ] = ACTIONS(1210),
    [anon_sym_AMP_AMP] = ACTIONS(1212),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(1216),
    [anon_sym_DASH] = ACTIONS(1216),
    [anon_sym_STAR] = ACTIONS(1218),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(1218),
    [anon_sym_LT_LT] = ACTIONS(1218),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [766] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(1208),
    [anon_sym_LT] = ACTIONS(1208),
    [anon_sym_EQ_EQ] = ACTIONS(1210),
    [anon_sym_GT_EQ] = ACTIONS(1210),
    [anon_sym_LT_EQ] = ACTIONS(1210),
    [anon_sym_BANG_EQ] = ACTIONS(1210),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(1218),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(1218),
    [anon_sym_LT_LT] = ACTIONS(1218),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [767] = {
    [anon_sym_if] = ACTIONS(1801),
    [anon_sym_RBRACE] = ACTIONS(1801),
    [anon_sym_AT] = ACTIONS(1801),
    [anon_sym_static] = ACTIONS(1801),
    [anon_sym_class] = ACTIONS(1801),
    [anon_sym_public] = ACTIONS(1801),
    [anon_sym_protected] = ACTIONS(1801),
    [anon_sym_private] = ACTIONS(1801),
    [anon_sym_abstract] = ACTIONS(1801),
    [anon_sym_final] = ACTIONS(1801),
    [anon_sym_strictfp] = ACTIONS(1801),
    [anon_sym_default] = ACTIONS(1801),
    [anon_sym_synchronized] = ACTIONS(1801),
    [anon_sym_native] = ACTIONS(1801),
    [sym_comment] = ACTIONS(54),
  },
  [768] = {
    [anon_sym_LPAREN] = ACTIONS(1803),
    [sym_comment] = ACTIONS(54),
  },
  [769] = {
    [sym__statement] = STATE(934),
    [sym__literal] = STATE(776),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(777),
    [sym_assignment_expression] = STATE(25),
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
    [sym__declaration] = STATE(779),
    [sym_module_declaration] = STATE(780),
    [sym_package_declaration] = STATE(780),
    [sym_import_statement] = STATE(780),
    [sym_single_type_import_declaration] = STATE(781),
    [sym_type_import_on_declaraction] = STATE(781),
    [sym_single_static_import_declaration] = STATE(781),
    [sym_static_import_on_demand_declaration] = STATE(781),
    [sym_class_declaration] = STATE(780),
    [sym_normal_class_declaration] = STATE(194),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(780),
    [sym_annotation_type_declaration] = STATE(782),
    [sym_normal_interface_declaration] = STATE(782),
    [sym_method_header] = STATE(783),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(780),
    [aux_sym_class_or_interface_type_repeat1] = STATE(785),
    [aux_sym_normal_class_declaration_repeat1] = STATE(786),
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
    [anon_sym_LBRACE] = ACTIONS(1805),
    [anon_sym_AT] = ACTIONS(1563),
    [anon_sym_open] = ACTIONS(1565),
    [anon_sym_module] = ACTIONS(1567),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_package] = ACTIONS(1569),
    [anon_sym_import] = ACTIONS(1571),
    [anon_sym_class] = ACTIONS(1118),
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
    [anon_sym_interface] = ACTIONS(1573),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [770] = {
    [sym_package_or_type_name] = STATE(72),
    [anon_sym_interface] = ACTIONS(1807),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [771] = {
    [anon_sym_module] = ACTIONS(1809),
    [sym_comment] = ACTIONS(54),
  },
  [772] = {
    [sym_module_identifier] = STATE(937),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [773] = {
    [sym_identifier] = ACTIONS(1811),
    [sym_comment] = ACTIONS(54),
  },
  [774] = {
    [sym_package_or_type_name] = STATE(940),
    [anon_sym_static] = ACTIONS(1813),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [775] = {
    [sym_identifier] = ACTIONS(1815),
    [sym_comment] = ACTIONS(54),
  },
  [776] = {
    [sym__semicolon] = ACTIONS(1817),
    [sym_comment] = ACTIONS(54),
  },
  [777] = {
    [sym__semicolon] = ACTIONS(1817),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_PIPE_PIPE] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(138),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [778] = {
    [anon_sym_if] = ACTIONS(1819),
    [anon_sym_RBRACE] = ACTIONS(1819),
    [anon_sym_elseif] = ACTIONS(1819),
    [anon_sym_AT] = ACTIONS(1819),
    [anon_sym_static] = ACTIONS(1819),
    [anon_sym_class] = ACTIONS(1819),
    [anon_sym_public] = ACTIONS(1819),
    [anon_sym_protected] = ACTIONS(1819),
    [anon_sym_private] = ACTIONS(1819),
    [anon_sym_abstract] = ACTIONS(1819),
    [anon_sym_final] = ACTIONS(1819),
    [anon_sym_strictfp] = ACTIONS(1819),
    [anon_sym_default] = ACTIONS(1819),
    [anon_sym_synchronized] = ACTIONS(1819),
    [anon_sym_native] = ACTIONS(1819),
    [sym_comment] = ACTIONS(54),
  },
  [779] = {
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_elseif] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
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
    [sym_comment] = ACTIONS(54),
  },
  [780] = {
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_elseif] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym_static] = ACTIONS(171),
    [anon_sym_class] = ACTIONS(171),
    [anon_sym_public] = ACTIONS(171),
    [anon_sym_protected] = ACTIONS(171),
    [anon_sym_private] = ACTIONS(171),
    [anon_sym_abstract] = ACTIONS(171),
    [anon_sym_final] = ACTIONS(171),
    [anon_sym_strictfp] = ACTIONS(171),
    [anon_sym_default] = ACTIONS(171),
    [anon_sym_synchronized] = ACTIONS(171),
    [anon_sym_native] = ACTIONS(171),
    [sym_comment] = ACTIONS(54),
  },
  [781] = {
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_elseif] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_static] = ACTIONS(177),
    [anon_sym_class] = ACTIONS(177),
    [anon_sym_public] = ACTIONS(177),
    [anon_sym_protected] = ACTIONS(177),
    [anon_sym_private] = ACTIONS(177),
    [anon_sym_abstract] = ACTIONS(177),
    [anon_sym_final] = ACTIONS(177),
    [anon_sym_strictfp] = ACTIONS(177),
    [anon_sym_default] = ACTIONS(177),
    [anon_sym_synchronized] = ACTIONS(177),
    [anon_sym_native] = ACTIONS(177),
    [sym_comment] = ACTIONS(54),
  },
  [782] = {
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
  [783] = {
    [sym_method_body] = STATE(945),
    [sym_block] = STATE(943),
    [sym__semicolon] = ACTIONS(1821),
    [anon_sym_LBRACE] = ACTIONS(1823),
    [sym_comment] = ACTIONS(54),
  },
  [784] = {
    [sym_else_if_clause] = STATE(946),
    [anon_sym_if] = ACTIONS(1801),
    [anon_sym_RBRACE] = ACTIONS(1801),
    [anon_sym_elseif] = ACTIONS(1559),
    [anon_sym_AT] = ACTIONS(1801),
    [anon_sym_static] = ACTIONS(1801),
    [anon_sym_class] = ACTIONS(1801),
    [anon_sym_public] = ACTIONS(1801),
    [anon_sym_protected] = ACTIONS(1801),
    [anon_sym_private] = ACTIONS(1801),
    [anon_sym_abstract] = ACTIONS(1801),
    [anon_sym_final] = ACTIONS(1801),
    [anon_sym_strictfp] = ACTIONS(1801),
    [anon_sym_default] = ACTIONS(1801),
    [anon_sym_synchronized] = ACTIONS(1801),
    [anon_sym_native] = ACTIONS(1801),
    [sym_comment] = ACTIONS(54),
  },
  [785] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_open] = ACTIONS(1825),
    [anon_sym_module] = ACTIONS(1809),
    [anon_sym_package] = ACTIONS(1827),
    [sym_comment] = ACTIONS(54),
  },
  [786] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_modifier] = STATE(107),
    [sym_type_parameters] = STATE(35),
    [sym_method_header] = STATE(951),
    [sym_result] = STATE(38),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(1829),
    [anon_sym_static] = ACTIONS(219),
    [anon_sym_class] = ACTIONS(632),
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
    [anon_sym_interface] = ACTIONS(1831),
    [sym_comment] = ACTIONS(54),
  },
  [787] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_AMP_EQ] = ACTIONS(560),
    [anon_sym_PIPE_EQ] = ACTIONS(560),
    [anon_sym_CARET_EQ] = ACTIONS(560),
    [anon_sym_PERCENT_EQ] = ACTIONS(560),
    [anon_sym_LT_LT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(1833),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [788] = {
    [anon_sym_AT] = ACTIONS(1034),
    [anon_sym_static] = ACTIONS(1270),
    [anon_sym_class] = ACTIONS(1270),
    [anon_sym_public] = ACTIONS(1270),
    [anon_sym_protected] = ACTIONS(1270),
    [anon_sym_private] = ACTIONS(1270),
    [anon_sym_abstract] = ACTIONS(1270),
    [anon_sym_final] = ACTIONS(1270),
    [anon_sym_strictfp] = ACTIONS(1270),
    [anon_sym_default] = ACTIONS(1270),
    [anon_sym_synchronized] = ACTIONS(1270),
    [anon_sym_native] = ACTIONS(1270),
    [sym_identifier] = ACTIONS(1304),
    [sym_comment] = ACTIONS(54),
  },
  [789] = {
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1272),
    [anon_sym_class] = ACTIONS(1272),
    [anon_sym_public] = ACTIONS(1272),
    [anon_sym_protected] = ACTIONS(1272),
    [anon_sym_private] = ACTIONS(1272),
    [anon_sym_abstract] = ACTIONS(1272),
    [anon_sym_final] = ACTIONS(1272),
    [anon_sym_strictfp] = ACTIONS(1272),
    [anon_sym_default] = ACTIONS(1272),
    [anon_sym_synchronized] = ACTIONS(1272),
    [anon_sym_native] = ACTIONS(1272),
    [sym_identifier] = ACTIONS(1306),
    [sym_comment] = ACTIONS(54),
  },
  [790] = {
    [anon_sym_if] = ACTIONS(1142),
    [anon_sym_RBRACE] = ACTIONS(1142),
    [anon_sym_elseif] = ACTIONS(1142),
    [anon_sym_DOT] = ACTIONS(1142),
    [anon_sym_LBRACK] = ACTIONS(1142),
    [anon_sym_AT] = ACTIONS(1142),
    [anon_sym_static] = ACTIONS(1142),
    [anon_sym_class] = ACTIONS(1142),
    [anon_sym_public] = ACTIONS(1142),
    [anon_sym_protected] = ACTIONS(1142),
    [anon_sym_private] = ACTIONS(1142),
    [anon_sym_abstract] = ACTIONS(1142),
    [anon_sym_final] = ACTIONS(1142),
    [anon_sym_strictfp] = ACTIONS(1142),
    [anon_sym_default] = ACTIONS(1142),
    [anon_sym_synchronized] = ACTIONS(1142),
    [anon_sym_native] = ACTIONS(1142),
    [anon_sym_COLON_COLON] = ACTIONS(1142),
    [sym_comment] = ACTIONS(54),
  },
  [791] = {
    [sym_class_body] = STATE(953),
    [anon_sym_LBRACE] = ACTIONS(882),
    [sym_comment] = ACTIONS(54),
  },
  [792] = {
    [anon_sym_if] = ACTIONS(1158),
    [anon_sym_RBRACE] = ACTIONS(1158),
    [anon_sym_elseif] = ACTIONS(1158),
    [anon_sym_AT] = ACTIONS(1158),
    [anon_sym_static] = ACTIONS(1158),
    [anon_sym_class] = ACTIONS(1158),
    [anon_sym_public] = ACTIONS(1158),
    [anon_sym_protected] = ACTIONS(1158),
    [anon_sym_private] = ACTIONS(1158),
    [anon_sym_abstract] = ACTIONS(1158),
    [anon_sym_final] = ACTIONS(1158),
    [anon_sym_strictfp] = ACTIONS(1158),
    [anon_sym_default] = ACTIONS(1158),
    [anon_sym_synchronized] = ACTIONS(1158),
    [anon_sym_native] = ACTIONS(1158),
    [sym_comment] = ACTIONS(54),
  },
  [793] = {
    [sym_super_interfaces] = STATE(954),
    [sym_class_body] = STATE(953),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [794] = {
    [anon_sym_DOT] = ACTIONS(1607),
    [anon_sym_AT] = ACTIONS(1607),
    [sym_identifier] = ACTIONS(1835),
    [sym_comment] = ACTIONS(54),
  },
  [795] = {
    [anon_sym_GT] = ACTIONS(1837),
    [anon_sym_COMMA] = ACTIONS(1611),
    [sym_comment] = ACTIONS(54),
  },
  [796] = {
    [anon_sym_DOT] = ACTIONS(1617),
    [anon_sym_AT] = ACTIONS(1617),
    [sym_identifier] = ACTIONS(1839),
    [sym_comment] = ACTIONS(54),
  },
  [797] = {
    [sym_type_arguments] = STATE(956),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_DOT] = ACTIONS(1617),
    [anon_sym_AT] = ACTIONS(1617),
    [sym_identifier] = ACTIONS(1839),
    [sym_comment] = ACTIONS(54),
  },
  [798] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1841),
    [sym_comment] = ACTIONS(54),
  },
  [799] = {
    [anon_sym_DOT] = ACTIONS(1244),
    [anon_sym_AT] = ACTIONS(1623),
    [sym_identifier] = ACTIONS(1843),
    [sym_comment] = ACTIONS(54),
  },
  [800] = {
    [ts_builtin_sym_end] = ACTIONS(1845),
    [sym_decimal_integer_literal] = ACTIONS(1847),
    [sym_hex_integer_literal] = ACTIONS(1847),
    [sym_octal_integer_literal] = ACTIONS(1847),
    [sym_binary_integer_literal] = ACTIONS(1847),
    [sym_decimal_floating_point_literal] = ACTIONS(1847),
    [sym_hex_floating_point_literal] = ACTIONS(1849),
    [anon_sym_true] = ACTIONS(1847),
    [anon_sym_false] = ACTIONS(1847),
    [anon_sym_SQUOTE] = ACTIONS(1845),
    [sym_string_literal] = ACTIONS(1845),
    [sym_null_literal] = ACTIONS(1847),
    [anon_sym_LT] = ACTIONS(1845),
    [anon_sym_LPAREN] = ACTIONS(1845),
    [anon_sym_BANG] = ACTIONS(1845),
    [anon_sym_TILDE] = ACTIONS(1845),
    [anon_sym_PLUS_PLUS] = ACTIONS(1845),
    [anon_sym_DASH_DASH] = ACTIONS(1845),
    [anon_sym_RBRACE] = ACTIONS(1845),
    [anon_sym_AT] = ACTIONS(1845),
    [anon_sym_open] = ACTIONS(1847),
    [anon_sym_module] = ACTIONS(1847),
    [anon_sym_static] = ACTIONS(1847),
    [anon_sym_package] = ACTIONS(1847),
    [anon_sym_import] = ACTIONS(1847),
    [anon_sym_class] = ACTIONS(1847),
    [anon_sym_public] = ACTIONS(1847),
    [anon_sym_protected] = ACTIONS(1847),
    [anon_sym_private] = ACTIONS(1847),
    [anon_sym_abstract] = ACTIONS(1847),
    [anon_sym_final] = ACTIONS(1847),
    [anon_sym_strictfp] = ACTIONS(1847),
    [anon_sym_default] = ACTIONS(1847),
    [anon_sym_synchronized] = ACTIONS(1847),
    [anon_sym_native] = ACTIONS(1847),
    [anon_sym_void] = ACTIONS(1847),
    [anon_sym_interface] = ACTIONS(1847),
    [sym_identifier] = ACTIONS(1849),
    [sym_comment] = ACTIONS(54),
  },
  [801] = {
    [ts_builtin_sym_end] = ACTIONS(1851),
    [sym_decimal_integer_literal] = ACTIONS(1853),
    [sym_hex_integer_literal] = ACTIONS(1853),
    [sym_octal_integer_literal] = ACTIONS(1853),
    [sym_binary_integer_literal] = ACTIONS(1853),
    [sym_decimal_floating_point_literal] = ACTIONS(1853),
    [sym_hex_floating_point_literal] = ACTIONS(1855),
    [anon_sym_true] = ACTIONS(1853),
    [anon_sym_false] = ACTIONS(1853),
    [anon_sym_SQUOTE] = ACTIONS(1851),
    [sym_string_literal] = ACTIONS(1851),
    [sym_null_literal] = ACTIONS(1853),
    [anon_sym_LT] = ACTIONS(1851),
    [anon_sym_LPAREN] = ACTIONS(1851),
    [anon_sym_BANG] = ACTIONS(1851),
    [anon_sym_TILDE] = ACTIONS(1851),
    [anon_sym_PLUS_PLUS] = ACTIONS(1851),
    [anon_sym_DASH_DASH] = ACTIONS(1851),
    [anon_sym_RBRACE] = ACTIONS(1851),
    [anon_sym_AT] = ACTIONS(1851),
    [anon_sym_open] = ACTIONS(1853),
    [anon_sym_module] = ACTIONS(1853),
    [anon_sym_static] = ACTIONS(1853),
    [anon_sym_package] = ACTIONS(1853),
    [anon_sym_import] = ACTIONS(1853),
    [anon_sym_class] = ACTIONS(1853),
    [anon_sym_public] = ACTIONS(1853),
    [anon_sym_protected] = ACTIONS(1853),
    [anon_sym_private] = ACTIONS(1853),
    [anon_sym_abstract] = ACTIONS(1853),
    [anon_sym_final] = ACTIONS(1853),
    [anon_sym_strictfp] = ACTIONS(1853),
    [anon_sym_default] = ACTIONS(1853),
    [anon_sym_synchronized] = ACTIONS(1853),
    [anon_sym_native] = ACTIONS(1853),
    [anon_sym_void] = ACTIONS(1853),
    [anon_sym_interface] = ACTIONS(1853),
    [sym_identifier] = ACTIONS(1855),
    [sym_comment] = ACTIONS(54),
  },
  [802] = {
    [sym__literal] = STATE(960),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(961),
    [sym_element_value_pair] = STATE(243),
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
    [anon_sym_RPAREN] = ACTIONS(1857),
    [sym_identifier] = ACTIONS(1859),
    [sym_comment] = ACTIONS(54),
  },
  [803] = {
    [sym_identifier] = ACTIONS(1861),
    [sym_comment] = ACTIONS(54),
  },
  [804] = {
    [anon_sym_GT] = ACTIONS(1863),
    [anon_sym_COMMA] = ACTIONS(1863),
    [sym_comment] = ACTIONS(54),
  },
  [805] = {
    [anon_sym_GT] = ACTIONS(1865),
    [anon_sym_AMP] = ACTIONS(1865),
    [anon_sym_LPAREN] = ACTIONS(1865),
    [anon_sym_COMMA] = ACTIONS(1865),
    [anon_sym_LBRACE] = ACTIONS(1865),
    [anon_sym_DOT] = ACTIONS(1865),
    [anon_sym_LBRACK] = ACTIONS(1865),
    [anon_sym_AT] = ACTIONS(1865),
    [anon_sym_implements] = ACTIONS(1865),
    [anon_sym_this] = ACTIONS(1865),
    [anon_sym_super] = ACTIONS(1865),
    [anon_sym_new] = ACTIONS(1865),
    [anon_sym_COLON_COLON] = ACTIONS(1865),
    [sym_comment] = ACTIONS(54),
  },
  [806] = {
    [sym_type_argument] = STATE(963),
    [sym_reference_type] = STATE(480),
    [sym_class_or_interface_type] = STATE(481),
    [sym_primitive_type] = STATE(482),
    [sym_integral_type] = STATE(475),
    [sym_floating_point_type] = STATE(475),
    [sym__annotation] = STATE(483),
    [sym_normal_annotation] = STATE(484),
    [sym_marker_annotation] = STATE(484),
    [sym_single_element_annotation] = STATE(484),
    [aux_sym_class_or_interface_type_repeat1] = STATE(485),
    [anon_sym_boolean] = ACTIONS(930),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(934),
    [anon_sym_double] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(936),
    [sym_identifier] = ACTIONS(938),
    [sym_comment] = ACTIONS(54),
  },
  [807] = {
    [anon_sym_GT] = ACTIONS(1867),
    [anon_sym_AMP] = ACTIONS(1867),
    [anon_sym_COMMA] = ACTIONS(1867),
    [anon_sym_LBRACE] = ACTIONS(1867),
    [anon_sym_DOT] = ACTIONS(1867),
    [anon_sym_LBRACK] = ACTIONS(1867),
    [anon_sym_AT] = ACTIONS(1867),
    [anon_sym_implements] = ACTIONS(1867),
    [anon_sym_COLON_COLON] = ACTIONS(1867),
    [sym_comment] = ACTIONS(54),
  },
  [808] = {
    [sym_type_arguments] = STATE(964),
    [anon_sym_GT] = ACTIONS(1867),
    [anon_sym_LT] = ACTIONS(654),
    [anon_sym_AMP] = ACTIONS(1867),
    [anon_sym_COMMA] = ACTIONS(1867),
    [anon_sym_LBRACE] = ACTIONS(1867),
    [anon_sym_DOT] = ACTIONS(1867),
    [anon_sym_LBRACK] = ACTIONS(1867),
    [anon_sym_AT] = ACTIONS(1867),
    [anon_sym_implements] = ACTIONS(1867),
    [anon_sym_COLON_COLON] = ACTIONS(1867),
    [sym_comment] = ACTIONS(54),
  },
  [809] = {
    [sym__annotation] = STATE(363),
    [sym_normal_annotation] = STATE(367),
    [sym_marker_annotation] = STATE(367),
    [sym_single_element_annotation] = STATE(367),
    [sym_class_declaration] = STATE(368),
    [sym_normal_class_declaration] = STATE(369),
    [sym_modifier] = STATE(370),
    [sym_interface_declaration] = STATE(368),
    [sym_annotation_type_declaration] = STATE(371),
    [sym_annotation_type_member_declaration] = STATE(372),
    [sym_annotation_type_element_declaration] = STATE(368),
    [sym_normal_interface_declaration] = STATE(371),
    [sym_constant_declaration] = STATE(368),
    [sym_variable_declarator_list] = STATE(373),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(374),
    [aux_sym_annotation_type_body_repeat1] = STATE(966),
    [anon_sym_RBRACE] = ACTIONS(1869),
    [anon_sym_AT] = ACTIONS(708),
    [anon_sym_static] = ACTIONS(710),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(710),
    [anon_sym_protected] = ACTIONS(710),
    [anon_sym_private] = ACTIONS(710),
    [anon_sym_abstract] = ACTIONS(710),
    [anon_sym_final] = ACTIONS(710),
    [anon_sym_strictfp] = ACTIONS(710),
    [anon_sym_default] = ACTIONS(710),
    [anon_sym_synchronized] = ACTIONS(710),
    [anon_sym_native] = ACTIONS(710),
    [anon_sym_interface] = ACTIONS(714),
    [sym_identifier] = ACTIONS(716),
    [sym_comment] = ACTIONS(54),
  },
  [810] = {
    [anon_sym_RBRACE] = ACTIONS(718),
    [anon_sym_AT] = ACTIONS(718),
    [anon_sym_static] = ACTIONS(720),
    [anon_sym_class] = ACTIONS(720),
    [anon_sym_public] = ACTIONS(720),
    [anon_sym_protected] = ACTIONS(720),
    [anon_sym_private] = ACTIONS(720),
    [anon_sym_abstract] = ACTIONS(720),
    [anon_sym_final] = ACTIONS(720),
    [anon_sym_strictfp] = ACTIONS(720),
    [anon_sym_default] = ACTIONS(720),
    [anon_sym_synchronized] = ACTIONS(720),
    [anon_sym_native] = ACTIONS(720),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [811] = {
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(924),
    [anon_sym_class] = ACTIONS(924),
    [anon_sym_public] = ACTIONS(924),
    [anon_sym_protected] = ACTIONS(924),
    [anon_sym_private] = ACTIONS(924),
    [anon_sym_abstract] = ACTIONS(924),
    [anon_sym_final] = ACTIONS(924),
    [anon_sym_strictfp] = ACTIONS(924),
    [anon_sym_default] = ACTIONS(924),
    [anon_sym_synchronized] = ACTIONS(924),
    [anon_sym_native] = ACTIONS(924),
    [anon_sym_interface] = ACTIONS(924),
    [sym_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(54),
  },
  [812] = {
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(1871),
    [sym_comment] = ACTIONS(54),
  },
  [813] = {
    [anon_sym_RPAREN] = ACTIONS(1871),
    [sym_comment] = ACTIONS(54),
  },
  [814] = {
    [anon_sym_RPAREN] = ACTIONS(1873),
    [sym_comment] = ACTIONS(54),
  },
  [815] = {
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(736),
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
    [anon_sym_synchronized] = ACTIONS(738),
    [anon_sym_native] = ACTIONS(738),
    [anon_sym_interface] = ACTIONS(738),
    [sym_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(54),
  },
  [816] = {
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
    [anon_sym_interface] = ACTIONS(782),
    [sym_identifier] = ACTIONS(784),
    [sym_comment] = ACTIONS(54),
  },
  [817] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(258),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(268),
    [sym_class_body_declaration] = STATE(418),
    [sym_constructor_declaration] = STATE(270),
    [sym_constructor_declarator] = STATE(271),
    [sym_class_member_declaration] = STATE(270),
    [sym_interface_declaration] = STATE(258),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_block] = STATE(270),
    [sym_method_declaration] = STATE(258),
    [aux_sym_normal_class_declaration_repeat1] = STATE(274),
    [sym__semicolon] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(1875),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [818] = {
    [sym_super_interfaces] = STATE(970),
    [sym_class_body] = STATE(971),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [819] = {
    [sym_class_body] = STATE(971),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [sym_comment] = ACTIONS(54),
  },
  [820] = {
    [anon_sym_RBRACE] = ACTIONS(828),
    [anon_sym_AT] = ACTIONS(828),
    [anon_sym_static] = ACTIONS(830),
    [anon_sym_class] = ACTIONS(830),
    [anon_sym_public] = ACTIONS(830),
    [anon_sym_protected] = ACTIONS(830),
    [anon_sym_private] = ACTIONS(830),
    [anon_sym_abstract] = ACTIONS(830),
    [anon_sym_final] = ACTIONS(830),
    [anon_sym_strictfp] = ACTIONS(830),
    [anon_sym_default] = ACTIONS(830),
    [anon_sym_synchronized] = ACTIONS(830),
    [anon_sym_native] = ACTIONS(830),
    [anon_sym_interface] = ACTIONS(830),
    [sym_identifier] = ACTIONS(832),
    [sym_comment] = ACTIONS(54),
  },
  [821] = {
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_AT] = ACTIONS(840),
    [anon_sym_static] = ACTIONS(842),
    [anon_sym_class] = ACTIONS(842),
    [anon_sym_public] = ACTIONS(842),
    [anon_sym_protected] = ACTIONS(842),
    [anon_sym_private] = ACTIONS(842),
    [anon_sym_abstract] = ACTIONS(842),
    [anon_sym_final] = ACTIONS(842),
    [anon_sym_strictfp] = ACTIONS(842),
    [anon_sym_default] = ACTIONS(842),
    [anon_sym_synchronized] = ACTIONS(842),
    [anon_sym_native] = ACTIONS(842),
    [anon_sym_interface] = ACTIONS(842),
    [sym_identifier] = ACTIONS(844),
    [sym_comment] = ACTIONS(54),
  },
  [822] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(282),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(282),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_interface_member_declaration] = STATE(428),
    [sym_constant_declaration] = STATE(282),
    [sym_variable_declarator_list] = STATE(285),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(282),
    [aux_sym_normal_class_declaration_repeat1] = STATE(287),
    [sym__semicolon] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1877),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [823] = {
    [sym_interface_body] = STATE(973),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [sym_comment] = ACTIONS(54),
  },
  [824] = {
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_AT] = ACTIONS(862),
    [anon_sym_static] = ACTIONS(864),
    [anon_sym_class] = ACTIONS(864),
    [anon_sym_public] = ACTIONS(864),
    [anon_sym_protected] = ACTIONS(864),
    [anon_sym_private] = ACTIONS(864),
    [anon_sym_abstract] = ACTIONS(864),
    [anon_sym_final] = ACTIONS(864),
    [anon_sym_strictfp] = ACTIONS(864),
    [anon_sym_default] = ACTIONS(864),
    [anon_sym_synchronized] = ACTIONS(864),
    [anon_sym_native] = ACTIONS(864),
    [anon_sym_interface] = ACTIONS(864),
    [sym_identifier] = ACTIONS(866),
    [sym_comment] = ACTIONS(54),
  },
  [825] = {
    [anon_sym_RBRACE] = ACTIONS(1879),
    [anon_sym_AT] = ACTIONS(1879),
    [anon_sym_static] = ACTIONS(1881),
    [anon_sym_class] = ACTIONS(1881),
    [anon_sym_public] = ACTIONS(1881),
    [anon_sym_protected] = ACTIONS(1881),
    [anon_sym_private] = ACTIONS(1881),
    [anon_sym_abstract] = ACTIONS(1881),
    [anon_sym_final] = ACTIONS(1881),
    [anon_sym_strictfp] = ACTIONS(1881),
    [anon_sym_default] = ACTIONS(1881),
    [anon_sym_synchronized] = ACTIONS(1881),
    [anon_sym_native] = ACTIONS(1881),
    [anon_sym_interface] = ACTIONS(1881),
    [sym_identifier] = ACTIONS(1883),
    [sym_comment] = ACTIONS(54),
  },
  [826] = {
    [sym__literal] = STATE(523),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(524),
    [sym__annotation] = STATE(523),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_element_value] = STATE(975),
    [sym_element_value_array_initializer] = STATE(523),
    [sym_conditional_expression] = STATE(523),
    [sym_conditional_or_expression] = STATE(976),
    [sym_conditional_and_expression] = STATE(977),
    [sym_inclusive_or_expression] = STATE(978),
    [sym_exclusive_or_expression] = STATE(979),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(980),
    [sym_equality_expression] = STATE(981),
    [sym_shift_expression] = STATE(982),
    [sym_additive_expression] = STATE(983),
    [sym_multiplicative_expression] = STATE(984),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1028),
    [anon_sym_false] = ACTIONS(1028),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [anon_sym_LBRACE] = ACTIONS(1032),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [827] = {
    [sym_default_value] = STATE(986),
    [sym__semicolon] = ACTIONS(1887),
    [anon_sym_default] = ACTIONS(1639),
    [sym_comment] = ACTIONS(54),
  },
  [828] = {
    [sym__semicolon] = ACTIONS(1887),
    [sym_comment] = ACTIONS(54),
  },
  [829] = {
    [sym_annotation_type_body] = STATE(987),
    [anon_sym_LBRACE] = ACTIONS(1625),
    [sym_comment] = ACTIONS(54),
  },
  [830] = {
    [sym_superclass] = STATE(988),
    [sym_super_interfaces] = STATE(970),
    [sym_class_body] = STATE(971),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [anon_sym_extends] = ACTIONS(330),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [831] = {
    [sym_extends_interfaces] = STATE(989),
    [sym_interface_body] = STATE(973),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [832] = {
    [sym_dims] = STATE(990),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_default_value] = STATE(986),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [sym__semicolon] = ACTIONS(1887),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(1639),
    [sym_comment] = ACTIONS(54),
  },
  [833] = {
    [sym__expression] = STATE(991),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [834] = {
    [sym__expression] = STATE(992),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [835] = {
    [sym__expression] = STATE(993),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [836] = {
    [sym__expression] = STATE(994),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [837] = {
    [sym__expression] = STATE(995),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [838] = {
    [sym__expression] = STATE(176),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [839] = {
    [sym__expression] = STATE(996),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [840] = {
    [sym__semicolon] = ACTIONS(1889),
    [anon_sym_RPAREN] = ACTIONS(1889),
    [anon_sym_COMMA] = ACTIONS(1889),
    [anon_sym_RBRACE] = ACTIONS(1889),
    [sym_comment] = ACTIONS(54),
  },
  [841] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [842] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [843] = {
    [anon_sym_EQ] = ACTIONS(1891),
    [anon_sym_PLUS_EQ] = ACTIONS(1893),
    [anon_sym_DASH_EQ] = ACTIONS(1893),
    [anon_sym_STAR_EQ] = ACTIONS(1893),
    [anon_sym_SLASH_EQ] = ACTIONS(1893),
    [anon_sym_AMP_EQ] = ACTIONS(1893),
    [anon_sym_PIPE_EQ] = ACTIONS(1893),
    [anon_sym_CARET_EQ] = ACTIONS(1893),
    [anon_sym_PERCENT_EQ] = ACTIONS(1893),
    [anon_sym_LT_LT_EQ] = ACTIONS(1893),
    [anon_sym_GT_GT_EQ] = ACTIONS(1893),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1893),
    [anon_sym_GT] = ACTIONS(1895),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(294),
    [anon_sym_GT_EQ] = ACTIONS(1897),
    [anon_sym_LT_EQ] = ACTIONS(1897),
    [anon_sym_BANG_EQ] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_AMP] = ACTIONS(1899),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(296),
    [anon_sym_GT_GT] = ACTIONS(296),
    [anon_sym_GT_GT_GT] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(294),
    [sym_comment] = ACTIONS(54),
  },
  [844] = {
    [sym__literal] = STATE(523),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(524),
    [sym__annotation] = STATE(523),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_element_value] = STATE(1005),
    [sym_element_value_array_initializer] = STATE(523),
    [sym_conditional_expression] = STATE(523),
    [sym_conditional_or_expression] = STATE(680),
    [sym_conditional_and_expression] = STATE(681),
    [sym_inclusive_or_expression] = STATE(682),
    [sym_exclusive_or_expression] = STATE(683),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(684),
    [sym_equality_expression] = STATE(685),
    [sym_shift_expression] = STATE(686),
    [sym_additive_expression] = STATE(687),
    [sym_multiplicative_expression] = STATE(688),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1028),
    [anon_sym_false] = ACTIONS(1028),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [anon_sym_LBRACE] = ACTIONS(1032),
    [anon_sym_RBRACE] = ACTIONS(1901),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [845] = {
    [anon_sym_COMMA] = ACTIONS(1903),
    [anon_sym_RBRACE] = ACTIONS(1901),
    [sym_comment] = ACTIONS(54),
  },
  [846] = {
    [sym_unary_expression] = STATE(524),
    [sym_conditional_and_expression] = STATE(1007),
    [sym_inclusive_or_expression] = STATE(682),
    [sym_exclusive_or_expression] = STATE(683),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(684),
    [sym_equality_expression] = STATE(685),
    [sym_shift_expression] = STATE(686),
    [sym_additive_expression] = STATE(687),
    [sym_multiplicative_expression] = STATE(688),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [sym_comment] = ACTIONS(54),
  },
  [847] = {
    [sym__expression] = STATE(1008),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [848] = {
    [sym_unary_expression] = STATE(524),
    [sym_inclusive_or_expression] = STATE(1009),
    [sym_exclusive_or_expression] = STATE(683),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(684),
    [sym_equality_expression] = STATE(685),
    [sym_shift_expression] = STATE(686),
    [sym_additive_expression] = STATE(687),
    [sym_multiplicative_expression] = STATE(688),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [sym_comment] = ACTIONS(54),
  },
  [849] = {
    [sym_unary_expression] = STATE(524),
    [sym_exclusive_or_expression] = STATE(1010),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(684),
    [sym_equality_expression] = STATE(685),
    [sym_shift_expression] = STATE(686),
    [sym_additive_expression] = STATE(687),
    [sym_multiplicative_expression] = STATE(688),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [sym_comment] = ACTIONS(54),
  },
  [850] = {
    [sym_unary_expression] = STATE(524),
    [sym_and_expression] = STATE(860),
    [sym_relational_expression] = STATE(684),
    [sym_equality_expression] = STATE(685),
    [sym_shift_expression] = STATE(686),
    [sym_additive_expression] = STATE(687),
    [sym_multiplicative_expression] = STATE(688),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [sym_comment] = ACTIONS(54),
  },
  [851] = {
    [sym_unary_expression] = STATE(524),
    [sym_shift_expression] = STATE(1011),
    [sym_additive_expression] = STATE(687),
    [sym_multiplicative_expression] = STATE(688),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [sym_comment] = ACTIONS(54),
  },
  [852] = {
    [sym_unary_expression] = STATE(524),
    [sym_relational_expression] = STATE(1012),
    [sym_shift_expression] = STATE(686),
    [sym_additive_expression] = STATE(687),
    [sym_multiplicative_expression] = STATE(688),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [sym_comment] = ACTIONS(54),
  },
  [853] = {
    [sym_unary_expression] = STATE(524),
    [sym_additive_expression] = STATE(1013),
    [sym_multiplicative_expression] = STATE(688),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [sym_comment] = ACTIONS(54),
  },
  [854] = {
    [sym_unary_expression] = STATE(524),
    [sym_multiplicative_expression] = STATE(1014),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [sym_comment] = ACTIONS(54),
  },
  [855] = {
    [sym_unary_expression] = STATE(865),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [sym_comment] = ACTIONS(54),
  },
  [856] = {
    [anon_sym_AMP_AMP] = ACTIONS(1376),
    [anon_sym_PIPE_PIPE] = ACTIONS(1905),
    [anon_sym_RPAREN] = ACTIONS(1905),
    [anon_sym_COMMA] = ACTIONS(1905),
    [anon_sym_QMARK] = ACTIONS(1905),
    [sym_comment] = ACTIONS(54),
  },
  [857] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_AMP_EQ] = ACTIONS(560),
    [anon_sym_PIPE_EQ] = ACTIONS(560),
    [anon_sym_CARET_EQ] = ACTIONS(560),
    [anon_sym_PERCENT_EQ] = ACTIONS(560),
    [anon_sym_LT_LT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(1907),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [858] = {
    [anon_sym_AMP_AMP] = ACTIONS(1909),
    [anon_sym_PIPE_PIPE] = ACTIONS(1909),
    [anon_sym_PIPE] = ACTIONS(1382),
    [anon_sym_RPAREN] = ACTIONS(1909),
    [anon_sym_COMMA] = ACTIONS(1909),
    [anon_sym_QMARK] = ACTIONS(1909),
    [sym_comment] = ACTIONS(54),
  },
  [859] = {
    [anon_sym_AMP_AMP] = ACTIONS(1911),
    [anon_sym_PIPE_PIPE] = ACTIONS(1911),
    [anon_sym_PIPE] = ACTIONS(1913),
    [anon_sym_CARET] = ACTIONS(1388),
    [anon_sym_RPAREN] = ACTIONS(1911),
    [anon_sym_COMMA] = ACTIONS(1911),
    [anon_sym_QMARK] = ACTIONS(1911),
    [sym_comment] = ACTIONS(54),
  },
  [860] = {
    [sym__semicolon] = ACTIONS(1915),
    [anon_sym_AMP_AMP] = ACTIONS(1915),
    [anon_sym_PIPE_PIPE] = ACTIONS(1915),
    [anon_sym_PIPE] = ACTIONS(1917),
    [anon_sym_CARET] = ACTIONS(1915),
    [anon_sym_RPAREN] = ACTIONS(1915),
    [anon_sym_COMMA] = ACTIONS(1915),
    [anon_sym_QMARK] = ACTIONS(1915),
    [anon_sym_RBRACE] = ACTIONS(1915),
    [sym_comment] = ACTIONS(54),
  },
  [861] = {
    [anon_sym_LT] = ACTIONS(1919),
    [anon_sym_EQ_EQ] = ACTIONS(1921),
    [anon_sym_BANG_EQ] = ACTIONS(1921),
    [anon_sym_AMP_AMP] = ACTIONS(1921),
    [anon_sym_PIPE_PIPE] = ACTIONS(1921),
    [anon_sym_PIPE] = ACTIONS(1919),
    [anon_sym_CARET] = ACTIONS(1921),
    [anon_sym_LT_LT] = ACTIONS(1408),
    [anon_sym_GT_GT] = ACTIONS(1410),
    [anon_sym_GT_GT_GT] = ACTIONS(1408),
    [anon_sym_RPAREN] = ACTIONS(1921),
    [anon_sym_COMMA] = ACTIONS(1921),
    [anon_sym_QMARK] = ACTIONS(1921),
    [sym_comment] = ACTIONS(54),
  },
  [862] = {
    [anon_sym_LT] = ACTIONS(1394),
    [anon_sym_EQ_EQ] = ACTIONS(1923),
    [anon_sym_BANG_EQ] = ACTIONS(1923),
    [anon_sym_AMP_AMP] = ACTIONS(1925),
    [anon_sym_PIPE_PIPE] = ACTIONS(1925),
    [anon_sym_PIPE] = ACTIONS(1927),
    [anon_sym_CARET] = ACTIONS(1925),
    [anon_sym_RPAREN] = ACTIONS(1925),
    [anon_sym_COMMA] = ACTIONS(1925),
    [anon_sym_QMARK] = ACTIONS(1925),
    [sym_comment] = ACTIONS(54),
  },
  [863] = {
    [anon_sym_LT] = ACTIONS(1929),
    [anon_sym_EQ_EQ] = ACTIONS(1931),
    [anon_sym_BANG_EQ] = ACTIONS(1931),
    [anon_sym_AMP_AMP] = ACTIONS(1931),
    [anon_sym_PIPE_PIPE] = ACTIONS(1931),
    [anon_sym_PLUS] = ACTIONS(1416),
    [anon_sym_DASH] = ACTIONS(1416),
    [anon_sym_PIPE] = ACTIONS(1929),
    [anon_sym_CARET] = ACTIONS(1931),
    [anon_sym_LT_LT] = ACTIONS(1931),
    [anon_sym_GT_GT] = ACTIONS(1929),
    [anon_sym_GT_GT_GT] = ACTIONS(1931),
    [anon_sym_RPAREN] = ACTIONS(1931),
    [anon_sym_COMMA] = ACTIONS(1931),
    [anon_sym_QMARK] = ACTIONS(1931),
    [sym_comment] = ACTIONS(54),
  },
  [864] = {
    [anon_sym_LT] = ACTIONS(1933),
    [anon_sym_EQ_EQ] = ACTIONS(1935),
    [anon_sym_BANG_EQ] = ACTIONS(1935),
    [anon_sym_AMP_AMP] = ACTIONS(1935),
    [anon_sym_PIPE_PIPE] = ACTIONS(1935),
    [anon_sym_PLUS] = ACTIONS(1935),
    [anon_sym_DASH] = ACTIONS(1935),
    [anon_sym_STAR] = ACTIONS(1422),
    [anon_sym_SLASH] = ACTIONS(1424),
    [anon_sym_PIPE] = ACTIONS(1933),
    [anon_sym_CARET] = ACTIONS(1935),
    [anon_sym_PERCENT] = ACTIONS(1422),
    [anon_sym_LT_LT] = ACTIONS(1935),
    [anon_sym_GT_GT] = ACTIONS(1933),
    [anon_sym_GT_GT_GT] = ACTIONS(1935),
    [anon_sym_RPAREN] = ACTIONS(1935),
    [anon_sym_COMMA] = ACTIONS(1935),
    [anon_sym_QMARK] = ACTIONS(1935),
    [sym_comment] = ACTIONS(54),
  },
  [865] = {
    [sym__semicolon] = ACTIONS(1937),
    [anon_sym_LT] = ACTIONS(1939),
    [anon_sym_EQ_EQ] = ACTIONS(1937),
    [anon_sym_BANG_EQ] = ACTIONS(1937),
    [anon_sym_AMP_AMP] = ACTIONS(1937),
    [anon_sym_PIPE_PIPE] = ACTIONS(1937),
    [anon_sym_PLUS] = ACTIONS(1937),
    [anon_sym_DASH] = ACTIONS(1937),
    [anon_sym_STAR] = ACTIONS(1937),
    [anon_sym_SLASH] = ACTIONS(1939),
    [anon_sym_PIPE] = ACTIONS(1939),
    [anon_sym_CARET] = ACTIONS(1937),
    [anon_sym_PERCENT] = ACTIONS(1937),
    [anon_sym_LT_LT] = ACTIONS(1937),
    [anon_sym_GT_GT] = ACTIONS(1939),
    [anon_sym_GT_GT_GT] = ACTIONS(1937),
    [anon_sym_RPAREN] = ACTIONS(1937),
    [anon_sym_COMMA] = ACTIONS(1937),
    [anon_sym_QMARK] = ACTIONS(1937),
    [anon_sym_RBRACE] = ACTIONS(1937),
    [sym_comment] = ACTIONS(54),
  },
  [866] = {
    [anon_sym_RBRACE] = ACTIONS(1941),
    [anon_sym_requires] = ACTIONS(1941),
    [anon_sym_exports] = ACTIONS(1941),
    [anon_sym_opens] = ACTIONS(1941),
    [anon_sym_uses] = ACTIONS(1941),
    [anon_sym_provides] = ACTIONS(1941),
    [sym_comment] = ACTIONS(54),
  },
  [867] = {
    [sym__semicolon] = ACTIONS(1943),
    [anon_sym_COMMA] = ACTIONS(1448),
    [sym_comment] = ACTIONS(54),
  },
  [868] = {
    [sym__semicolon] = ACTIONS(1945),
    [anon_sym_COMMA] = ACTIONS(1945),
    [anon_sym_DOT] = ACTIONS(1066),
    [sym_comment] = ACTIONS(54),
  },
  [869] = {
    [sym_package_or_type_name] = STATE(1017),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(54),
  },
  [870] = {
    [sym__semicolon] = ACTIONS(1943),
    [anon_sym_COMMA] = ACTIONS(1947),
    [sym_comment] = ACTIONS(54),
  },
  [871] = {
    [sym__semicolon] = ACTIONS(988),
    [anon_sym_LT] = ACTIONS(988),
    [anon_sym_LBRACE] = ACTIONS(988),
    [anon_sym_RBRACE] = ACTIONS(988),
    [anon_sym_AT] = ACTIONS(988),
    [anon_sym_static] = ACTIONS(990),
    [anon_sym_class] = ACTIONS(990),
    [anon_sym_public] = ACTIONS(990),
    [anon_sym_protected] = ACTIONS(990),
    [anon_sym_private] = ACTIONS(990),
    [anon_sym_abstract] = ACTIONS(990),
    [anon_sym_final] = ACTIONS(990),
    [anon_sym_strictfp] = ACTIONS(990),
    [anon_sym_default] = ACTIONS(990),
    [anon_sym_synchronized] = ACTIONS(990),
    [anon_sym_native] = ACTIONS(990),
    [anon_sym_void] = ACTIONS(990),
    [anon_sym_interface] = ACTIONS(990),
    [sym_identifier] = ACTIONS(992),
    [sym_comment] = ACTIONS(54),
  },
  [872] = {
    [sym__annotation] = STATE(363),
    [sym_normal_annotation] = STATE(367),
    [sym_marker_annotation] = STATE(367),
    [sym_single_element_annotation] = STATE(367),
    [sym_class_declaration] = STATE(368),
    [sym_normal_class_declaration] = STATE(369),
    [sym_modifier] = STATE(370),
    [sym_interface_declaration] = STATE(368),
    [sym_annotation_type_declaration] = STATE(371),
    [sym_annotation_type_member_declaration] = STATE(520),
    [sym_annotation_type_element_declaration] = STATE(368),
    [sym_normal_interface_declaration] = STATE(371),
    [sym_constant_declaration] = STATE(368),
    [sym_variable_declarator_list] = STATE(373),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(374),
    [anon_sym_RBRACE] = ACTIONS(1949),
    [anon_sym_AT] = ACTIONS(708),
    [anon_sym_static] = ACTIONS(710),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(710),
    [anon_sym_protected] = ACTIONS(710),
    [anon_sym_private] = ACTIONS(710),
    [anon_sym_abstract] = ACTIONS(710),
    [anon_sym_final] = ACTIONS(710),
    [anon_sym_strictfp] = ACTIONS(710),
    [anon_sym_default] = ACTIONS(710),
    [anon_sym_synchronized] = ACTIONS(710),
    [anon_sym_native] = ACTIONS(710),
    [anon_sym_interface] = ACTIONS(714),
    [sym_identifier] = ACTIONS(716),
    [sym_comment] = ACTIONS(54),
  },
  [873] = {
    [anon_sym_LT] = ACTIONS(1034),
    [anon_sym_AT] = ACTIONS(1034),
    [anon_sym_static] = ACTIONS(1270),
    [anon_sym_class] = ACTIONS(1270),
    [anon_sym_public] = ACTIONS(1270),
    [anon_sym_protected] = ACTIONS(1270),
    [anon_sym_private] = ACTIONS(1270),
    [anon_sym_abstract] = ACTIONS(1270),
    [anon_sym_final] = ACTIONS(1270),
    [anon_sym_strictfp] = ACTIONS(1270),
    [anon_sym_default] = ACTIONS(1270),
    [anon_sym_synchronized] = ACTIONS(1270),
    [anon_sym_native] = ACTIONS(1270),
    [anon_sym_void] = ACTIONS(1270),
    [anon_sym_interface] = ACTIONS(1270),
    [sym_identifier] = ACTIONS(1304),
    [sym_comment] = ACTIONS(54),
  },
  [874] = {
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1272),
    [anon_sym_class] = ACTIONS(1272),
    [anon_sym_public] = ACTIONS(1272),
    [anon_sym_protected] = ACTIONS(1272),
    [anon_sym_private] = ACTIONS(1272),
    [anon_sym_abstract] = ACTIONS(1272),
    [anon_sym_final] = ACTIONS(1272),
    [anon_sym_strictfp] = ACTIONS(1272),
    [anon_sym_default] = ACTIONS(1272),
    [anon_sym_synchronized] = ACTIONS(1272),
    [anon_sym_native] = ACTIONS(1272),
    [anon_sym_void] = ACTIONS(1272),
    [anon_sym_interface] = ACTIONS(1272),
    [sym_identifier] = ACTIONS(1306),
    [sym_comment] = ACTIONS(54),
  },
  [875] = {
    [sym__semicolon] = ACTIONS(1142),
    [anon_sym_LT] = ACTIONS(1142),
    [anon_sym_LBRACE] = ACTIONS(1142),
    [anon_sym_RBRACE] = ACTIONS(1142),
    [anon_sym_AT] = ACTIONS(1142),
    [anon_sym_static] = ACTIONS(1144),
    [anon_sym_class] = ACTIONS(1144),
    [anon_sym_public] = ACTIONS(1144),
    [anon_sym_protected] = ACTIONS(1144),
    [anon_sym_private] = ACTIONS(1144),
    [anon_sym_abstract] = ACTIONS(1144),
    [anon_sym_final] = ACTIONS(1144),
    [anon_sym_strictfp] = ACTIONS(1144),
    [anon_sym_default] = ACTIONS(1144),
    [anon_sym_synchronized] = ACTIONS(1144),
    [anon_sym_native] = ACTIONS(1144),
    [anon_sym_void] = ACTIONS(1144),
    [anon_sym_interface] = ACTIONS(1144),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(54),
  },
  [876] = {
    [sym_class_body] = STATE(1020),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [sym_comment] = ACTIONS(54),
  },
  [877] = {
    [sym__semicolon] = ACTIONS(1158),
    [anon_sym_LT] = ACTIONS(1158),
    [anon_sym_LBRACE] = ACTIONS(1158),
    [anon_sym_RBRACE] = ACTIONS(1158),
    [anon_sym_AT] = ACTIONS(1158),
    [anon_sym_static] = ACTIONS(1160),
    [anon_sym_class] = ACTIONS(1160),
    [anon_sym_public] = ACTIONS(1160),
    [anon_sym_protected] = ACTIONS(1160),
    [anon_sym_private] = ACTIONS(1160),
    [anon_sym_abstract] = ACTIONS(1160),
    [anon_sym_final] = ACTIONS(1160),
    [anon_sym_strictfp] = ACTIONS(1160),
    [anon_sym_default] = ACTIONS(1160),
    [anon_sym_synchronized] = ACTIONS(1160),
    [anon_sym_native] = ACTIONS(1160),
    [anon_sym_void] = ACTIONS(1160),
    [anon_sym_interface] = ACTIONS(1160),
    [sym_identifier] = ACTIONS(1162),
    [sym_comment] = ACTIONS(54),
  },
  [878] = {
    [sym__semicolon] = ACTIONS(1176),
    [anon_sym_LT] = ACTIONS(1176),
    [anon_sym_LBRACE] = ACTIONS(1176),
    [anon_sym_RBRACE] = ACTIONS(1176),
    [anon_sym_AT] = ACTIONS(1176),
    [anon_sym_static] = ACTIONS(1178),
    [anon_sym_class] = ACTIONS(1178),
    [anon_sym_public] = ACTIONS(1178),
    [anon_sym_protected] = ACTIONS(1178),
    [anon_sym_private] = ACTIONS(1178),
    [anon_sym_abstract] = ACTIONS(1178),
    [anon_sym_final] = ACTIONS(1178),
    [anon_sym_strictfp] = ACTIONS(1178),
    [anon_sym_default] = ACTIONS(1178),
    [anon_sym_synchronized] = ACTIONS(1178),
    [anon_sym_native] = ACTIONS(1178),
    [anon_sym_void] = ACTIONS(1178),
    [anon_sym_interface] = ACTIONS(1178),
    [sym_identifier] = ACTIONS(1180),
    [sym_comment] = ACTIONS(54),
  },
  [879] = {
    [sym__semicolon] = ACTIONS(1188),
    [anon_sym_LT] = ACTIONS(1188),
    [anon_sym_LBRACE] = ACTIONS(1188),
    [anon_sym_RBRACE] = ACTIONS(1188),
    [anon_sym_AT] = ACTIONS(1188),
    [anon_sym_static] = ACTIONS(1190),
    [anon_sym_class] = ACTIONS(1190),
    [anon_sym_public] = ACTIONS(1190),
    [anon_sym_protected] = ACTIONS(1190),
    [anon_sym_private] = ACTIONS(1190),
    [anon_sym_abstract] = ACTIONS(1190),
    [anon_sym_final] = ACTIONS(1190),
    [anon_sym_strictfp] = ACTIONS(1190),
    [anon_sym_default] = ACTIONS(1190),
    [anon_sym_synchronized] = ACTIONS(1190),
    [anon_sym_native] = ACTIONS(1190),
    [anon_sym_void] = ACTIONS(1190),
    [anon_sym_interface] = ACTIONS(1190),
    [sym_identifier] = ACTIONS(1192),
    [sym_comment] = ACTIONS(54),
  },
  [880] = {
    [anon_sym_DOT] = ACTIONS(1951),
    [anon_sym_LBRACK] = ACTIONS(1951),
    [anon_sym_COLON_COLON] = ACTIONS(1951),
    [sym_comment] = ACTIONS(54),
  },
  [881] = {
    [anon_sym_DOT] = ACTIONS(1953),
    [anon_sym_LBRACK] = ACTIONS(1953),
    [anon_sym_COLON_COLON] = ACTIONS(1953),
    [sym_comment] = ACTIONS(54),
  },
  [882] = {
    [anon_sym_class] = ACTIONS(1955),
    [sym_comment] = ACTIONS(54),
  },
  [883] = {
    [anon_sym_DOT] = ACTIONS(1957),
    [anon_sym_LBRACK] = ACTIONS(1957),
    [sym_comment] = ACTIONS(54),
  },
  [884] = {
    [sym__literal] = STATE(1024),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(1025),
    [sym_element_value_pair] = STATE(243),
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
    [anon_sym_RPAREN] = ACTIONS(1959),
    [sym_identifier] = ACTIONS(1961),
    [sym_comment] = ACTIONS(54),
  },
  [885] = {
    [sym_identifier] = ACTIONS(1963),
    [sym_comment] = ACTIONS(54),
  },
  [886] = {
    [sym__semicolon] = ACTIONS(1965),
    [sym_comment] = ACTIONS(54),
  },
  [887] = {
    [aux_sym_argument_list_repeat1] = STATE(1029),
    [anon_sym_EQ] = ACTIONS(1645),
    [anon_sym_PLUS_EQ] = ACTIONS(1647),
    [anon_sym_DASH_EQ] = ACTIONS(1647),
    [anon_sym_STAR_EQ] = ACTIONS(1647),
    [anon_sym_SLASH_EQ] = ACTIONS(1647),
    [anon_sym_AMP_EQ] = ACTIONS(1647),
    [anon_sym_PIPE_EQ] = ACTIONS(1647),
    [anon_sym_CARET_EQ] = ACTIONS(1647),
    [anon_sym_PERCENT_EQ] = ACTIONS(1647),
    [anon_sym_LT_LT_EQ] = ACTIONS(1647),
    [anon_sym_GT_GT_EQ] = ACTIONS(1647),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1647),
    [anon_sym_GT] = ACTIONS(1649),
    [anon_sym_LT] = ACTIONS(1649),
    [anon_sym_EQ_EQ] = ACTIONS(1651),
    [anon_sym_GT_EQ] = ACTIONS(1651),
    [anon_sym_LT_EQ] = ACTIONS(1651),
    [anon_sym_BANG_EQ] = ACTIONS(1651),
    [anon_sym_AMP_AMP] = ACTIONS(1967),
    [anon_sym_PIPE_PIPE] = ACTIONS(1969),
    [anon_sym_PLUS] = ACTIONS(1971),
    [anon_sym_DASH] = ACTIONS(1971),
    [anon_sym_STAR] = ACTIONS(1973),
    [anon_sym_SLASH] = ACTIONS(1973),
    [anon_sym_AMP] = ACTIONS(1653),
    [anon_sym_PIPE] = ACTIONS(1975),
    [anon_sym_CARET] = ACTIONS(1975),
    [anon_sym_PERCENT] = ACTIONS(1973),
    [anon_sym_LT_LT] = ACTIONS(1973),
    [anon_sym_GT_GT] = ACTIONS(1973),
    [anon_sym_GT_GT_GT] = ACTIONS(1973),
    [anon_sym_RPAREN] = ACTIONS(1977),
    [anon_sym_COMMA] = ACTIONS(1979),
    [anon_sym_QMARK] = ACTIONS(1981),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [888] = {
    [anon_sym_RPAREN] = ACTIONS(1983),
    [sym_comment] = ACTIONS(54),
  },
  [889] = {
    [anon_sym_DOT] = ACTIONS(1985),
    [anon_sym_LBRACK] = ACTIONS(1985),
    [anon_sym_COLON_COLON] = ACTIONS(1985),
    [sym_comment] = ACTIONS(54),
  },
  [890] = {
    [anon_sym_DOT] = ACTIONS(1987),
    [anon_sym_LBRACK] = ACTIONS(1987),
    [anon_sym_COLON_COLON] = ACTIONS(1987),
    [sym_comment] = ACTIONS(54),
  },
  [891] = {
    [sym_identifier] = ACTIONS(1989),
    [sym_comment] = ACTIONS(54),
  },
  [892] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1033),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1991),
    [sym_comment] = ACTIONS(54),
  },
  [893] = {
    [anon_sym_LPAREN] = ACTIONS(1993),
    [sym_comment] = ACTIONS(54),
  },
  [894] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(488),
    [anon_sym_LPAREN] = ACTIONS(1993),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(942),
    [anon_sym_AT] = ACTIONS(942),
    [sym_comment] = ACTIONS(54),
  },
  [895] = {
    [anon_sym_LPAREN] = ACTIONS(1995),
    [sym_comment] = ACTIONS(54),
  },
  [896] = {
    [sym_type_arguments] = STATE(893),
    [sym_type_arguments_or_diamond] = STATE(1035),
    [anon_sym_LT] = ACTIONS(1731),
    [anon_sym_LPAREN] = ACTIONS(1995),
    [anon_sym_DOT] = ACTIONS(1997),
    [anon_sym_LT_GT] = ACTIONS(1737),
    [sym_comment] = ACTIONS(54),
  },
  [897] = {
    [sym_type_arguments] = STATE(893),
    [sym_type_arguments_or_diamond] = STATE(895),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(896),
    [anon_sym_LT] = ACTIONS(1731),
    [anon_sym_LPAREN] = ACTIONS(1733),
    [anon_sym_DOT] = ACTIONS(1999),
    [anon_sym_LT_GT] = ACTIONS(1737),
    [sym_comment] = ACTIONS(54),
  },
  [898] = {
    [anon_sym_LPAREN] = ACTIONS(2001),
    [sym_comment] = ACTIONS(54),
  },
  [899] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2003),
    [sym_comment] = ACTIONS(54),
  },
  [900] = {
    [sym_array_initializer] = STATE(1040),
    [anon_sym_LBRACE] = ACTIONS(2005),
    [sym_comment] = ACTIONS(54),
  },
  [901] = {
    [sym_dims] = STATE(1040),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(130),
    [aux_sym_dims_repeat1] = STATE(131),
    [anon_sym_DOT] = ACTIONS(2007),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(2007),
    [sym_comment] = ACTIONS(54),
  },
  [902] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1042),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2009),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [903] = {
    [sym_type_arguments] = STATE(1043),
    [sym_type_arguments_or_diamond] = STATE(1035),
    [aux_sym_class_or_interface_type_repeat2] = STATE(488),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(1044),
    [anon_sym_LT] = ACTIONS(1731),
    [anon_sym_LPAREN] = ACTIONS(1995),
    [anon_sym_DOT] = ACTIONS(1735),
    [anon_sym_LBRACK] = ACTIONS(942),
    [anon_sym_AT] = ACTIONS(942),
    [anon_sym_LT_GT] = ACTIONS(1737),
    [sym_comment] = ACTIONS(54),
  },
  [904] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1045),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1983),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [905] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [906] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [907] = {
    [anon_sym_EQ] = ACTIONS(2011),
    [anon_sym_PLUS_EQ] = ACTIONS(2013),
    [anon_sym_DASH_EQ] = ACTIONS(2013),
    [anon_sym_STAR_EQ] = ACTIONS(2013),
    [anon_sym_SLASH_EQ] = ACTIONS(2013),
    [anon_sym_AMP_EQ] = ACTIONS(2013),
    [anon_sym_PIPE_EQ] = ACTIONS(2013),
    [anon_sym_CARET_EQ] = ACTIONS(2013),
    [anon_sym_PERCENT_EQ] = ACTIONS(2013),
    [anon_sym_LT_LT_EQ] = ACTIONS(2013),
    [anon_sym_GT_GT_EQ] = ACTIONS(2013),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(2013),
    [anon_sym_GT] = ACTIONS(2015),
    [anon_sym_LT] = ACTIONS(2015),
    [anon_sym_EQ_EQ] = ACTIONS(2017),
    [anon_sym_GT_EQ] = ACTIONS(2017),
    [anon_sym_LT_EQ] = ACTIONS(2017),
    [anon_sym_BANG_EQ] = ACTIONS(2017),
    [anon_sym_AMP_AMP] = ACTIONS(2019),
    [anon_sym_PIPE_PIPE] = ACTIONS(2021),
    [anon_sym_PLUS] = ACTIONS(2023),
    [anon_sym_DASH] = ACTIONS(2023),
    [anon_sym_STAR] = ACTIONS(2025),
    [anon_sym_SLASH] = ACTIONS(2025),
    [anon_sym_AMP] = ACTIONS(2027),
    [anon_sym_PIPE] = ACTIONS(2029),
    [anon_sym_CARET] = ACTIONS(2029),
    [anon_sym_PERCENT] = ACTIONS(2025),
    [anon_sym_LT_LT] = ACTIONS(2025),
    [anon_sym_GT_GT] = ACTIONS(2025),
    [anon_sym_GT_GT_GT] = ACTIONS(2025),
    [anon_sym_QMARK] = ACTIONS(2031),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(2033),
    [sym_comment] = ACTIONS(54),
  },
  [908] = {
    [anon_sym_new] = ACTIONS(2035),
    [sym_comment] = ACTIONS(54),
  },
  [909] = {
    [anon_sym_DOT] = ACTIONS(2007),
    [anon_sym_COLON_COLON] = ACTIONS(2007),
    [sym_comment] = ACTIONS(54),
  },
  [910] = {
    [sym__expression] = STATE(907),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [911] = {
    [anon_sym_DOT] = ACTIONS(2037),
    [anon_sym_LBRACK] = ACTIONS(2037),
    [anon_sym_AT] = ACTIONS(2037),
    [anon_sym_COLON_COLON] = ACTIONS(2037),
    [sym_comment] = ACTIONS(54),
  },
  [912] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(2039),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [913] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_dims_expr] = STATE(1055),
    [aux_sym_class_or_interface_type_repeat1] = STATE(912),
    [anon_sym_DOT] = ACTIONS(2041),
    [anon_sym_LBRACK] = ACTIONS(1759),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(2041),
    [sym_comment] = ACTIONS(54),
  },
  [914] = {
    [sym__expression] = STATE(1056),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [anon_sym_RBRACK] = ACTIONS(686),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [915] = {
    [anon_sym_DOT] = ACTIONS(2043),
    [anon_sym_COLON_COLON] = ACTIONS(2045),
    [sym_comment] = ACTIONS(54),
  },
  [916] = {
    [anon_sym_LPAREN] = ACTIONS(2047),
    [anon_sym_DOT] = ACTIONS(736),
    [anon_sym_LBRACK] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [917] = {
    [sym_identifier] = ACTIONS(2049),
    [sym_comment] = ACTIONS(54),
  },
  [918] = {
    [sym__semicolon] = ACTIONS(2051),
    [anon_sym_LT] = ACTIONS(2051),
    [anon_sym_LBRACE] = ACTIONS(2051),
    [anon_sym_RBRACE] = ACTIONS(2051),
    [anon_sym_AT] = ACTIONS(2051),
    [anon_sym_static] = ACTIONS(2053),
    [anon_sym_class] = ACTIONS(2053),
    [anon_sym_public] = ACTIONS(2053),
    [anon_sym_protected] = ACTIONS(2053),
    [anon_sym_private] = ACTIONS(2053),
    [anon_sym_abstract] = ACTIONS(2053),
    [anon_sym_final] = ACTIONS(2053),
    [anon_sym_strictfp] = ACTIONS(2053),
    [anon_sym_default] = ACTIONS(2053),
    [anon_sym_synchronized] = ACTIONS(2053),
    [anon_sym_native] = ACTIONS(2053),
    [anon_sym_void] = ACTIONS(2053),
    [anon_sym_interface] = ACTIONS(2053),
    [sym_identifier] = ACTIONS(2055),
    [sym_comment] = ACTIONS(54),
  },
  [919] = {
    [sym_type_argument] = STATE(1061),
    [sym_reference_type] = STATE(480),
    [sym_class_or_interface_type] = STATE(481),
    [sym_primitive_type] = STATE(482),
    [sym_integral_type] = STATE(475),
    [sym_floating_point_type] = STATE(475),
    [sym__annotation] = STATE(483),
    [sym_normal_annotation] = STATE(484),
    [sym_marker_annotation] = STATE(484),
    [sym_single_element_annotation] = STATE(484),
    [aux_sym_class_or_interface_type_repeat1] = STATE(485),
    [anon_sym_boolean] = ACTIONS(930),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(934),
    [anon_sym_double] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(936),
    [sym_identifier] = ACTIONS(938),
    [sym_comment] = ACTIONS(54),
  },
  [920] = {
    [anon_sym_LPAREN] = ACTIONS(2057),
    [sym_comment] = ACTIONS(54),
  },
  [921] = {
    [sym_type_arguments] = STATE(734),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_class_or_interface_type_to_instantiate] = STATE(737),
    [aux_sym_class_or_interface_type_repeat1] = STATE(899),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1739),
    [sym_comment] = ACTIONS(54),
  },
  [922] = {
    [anon_sym_LPAREN] = ACTIONS(2047),
    [anon_sym_DOT] = ACTIONS(2059),
    [anon_sym_LBRACK] = ACTIONS(2059),
    [anon_sym_COLON_COLON] = ACTIONS(2059),
    [sym_comment] = ACTIONS(54),
  },
  [923] = {
    [anon_sym_super] = ACTIONS(2061),
    [sym_identifier] = ACTIONS(2063),
    [sym_comment] = ACTIONS(54),
  },
  [924] = {
    [anon_sym_DOT] = ACTIONS(2065),
    [anon_sym_LBRACK] = ACTIONS(2065),
    [anon_sym_COLON_COLON] = ACTIONS(2065),
    [sym_comment] = ACTIONS(54),
  },
  [925] = {
    [anon_sym_EQ] = ACTIONS(2011),
    [anon_sym_PLUS_EQ] = ACTIONS(2013),
    [anon_sym_DASH_EQ] = ACTIONS(2013),
    [anon_sym_STAR_EQ] = ACTIONS(2013),
    [anon_sym_SLASH_EQ] = ACTIONS(2013),
    [anon_sym_AMP_EQ] = ACTIONS(2013),
    [anon_sym_PIPE_EQ] = ACTIONS(2013),
    [anon_sym_CARET_EQ] = ACTIONS(2013),
    [anon_sym_PERCENT_EQ] = ACTIONS(2013),
    [anon_sym_LT_LT_EQ] = ACTIONS(2013),
    [anon_sym_GT_GT_EQ] = ACTIONS(2013),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(2013),
    [anon_sym_GT] = ACTIONS(2015),
    [anon_sym_LT] = ACTIONS(2015),
    [anon_sym_EQ_EQ] = ACTIONS(2017),
    [anon_sym_GT_EQ] = ACTIONS(2017),
    [anon_sym_LT_EQ] = ACTIONS(2017),
    [anon_sym_BANG_EQ] = ACTIONS(2017),
    [anon_sym_AMP_AMP] = ACTIONS(2019),
    [anon_sym_PIPE_PIPE] = ACTIONS(2021),
    [anon_sym_PLUS] = ACTIONS(2023),
    [anon_sym_DASH] = ACTIONS(2023),
    [anon_sym_STAR] = ACTIONS(2025),
    [anon_sym_SLASH] = ACTIONS(2025),
    [anon_sym_AMP] = ACTIONS(2027),
    [anon_sym_PIPE] = ACTIONS(2029),
    [anon_sym_CARET] = ACTIONS(2029),
    [anon_sym_PERCENT] = ACTIONS(2025),
    [anon_sym_LT_LT] = ACTIONS(2025),
    [anon_sym_GT_GT] = ACTIONS(2025),
    [anon_sym_GT_GT_GT] = ACTIONS(2025),
    [anon_sym_QMARK] = ACTIONS(2031),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(2067),
    [sym_comment] = ACTIONS(54),
  },
  [926] = {
    [anon_sym_LPAREN] = ACTIONS(2047),
    [anon_sym_DOT] = ACTIONS(1985),
    [anon_sym_LBRACK] = ACTIONS(1985),
    [anon_sym_COLON_COLON] = ACTIONS(1985),
    [sym_comment] = ACTIONS(54),
  },
  [927] = {
    [anon_sym_DOT] = ACTIONS(2069),
    [anon_sym_LBRACK] = ACTIONS(2069),
    [anon_sym_COLON_COLON] = ACTIONS(2069),
    [sym_comment] = ACTIONS(54),
  },
  [928] = {
    [anon_sym_RPAREN] = ACTIONS(2071),
    [sym_comment] = ACTIONS(54),
  },
  [929] = {
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
  [930] = {
    [sym_super_interfaces] = STATE(1066),
    [sym_class_body] = STATE(1020),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [931] = {
    [sym_interface_body] = STATE(1067),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym_comment] = ACTIONS(54),
  },
  [932] = {
    [sym__expression] = STATE(1068),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [933] = {
    [sym__statement] = STATE(1069),
    [sym__literal] = STATE(23),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(24),
    [sym_assignment_expression] = STATE(25),
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
  [934] = {
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
    [anon_sym_synchronized] = ACTIONS(2073),
    [anon_sym_native] = ACTIONS(2073),
    [sym_comment] = ACTIONS(54),
  },
  [935] = {
    [sym_identifier] = ACTIONS(2075),
    [sym_comment] = ACTIONS(54),
  },
  [936] = {
    [sym_module_identifier] = STATE(1071),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [937] = {
    [anon_sym_LBRACE] = ACTIONS(2077),
    [sym_comment] = ACTIONS(54),
  },
  [938] = {
    [aux_sym_module_identifier_repeat1] = STATE(1074),
    [sym__semicolon] = ACTIONS(2079),
    [anon_sym_DOT] = ACTIONS(316),
    [sym_comment] = ACTIONS(54),
  },
  [939] = {
    [sym_package_or_type_name] = STATE(1075),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(54),
  },
  [940] = {
    [sym__semicolon] = ACTIONS(2081),
    [anon_sym_DOT] = ACTIONS(2083),
    [sym_comment] = ACTIONS(54),
  },
  [941] = {
    [sym_type_parameters] = STATE(1079),
    [sym_extends_interfaces] = STATE(1080),
    [sym_interface_body] = STATE(1081),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(2085),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [942] = {
    [anon_sym_if] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_elseif] = ACTIONS(338),
    [anon_sym_AT] = ACTIONS(338),
    [anon_sym_static] = ACTIONS(338),
    [anon_sym_class] = ACTIONS(338),
    [anon_sym_public] = ACTIONS(338),
    [anon_sym_protected] = ACTIONS(338),
    [anon_sym_private] = ACTIONS(338),
    [anon_sym_abstract] = ACTIONS(338),
    [anon_sym_final] = ACTIONS(338),
    [anon_sym_strictfp] = ACTIONS(338),
    [anon_sym_default] = ACTIONS(338),
    [anon_sym_synchronized] = ACTIONS(338),
    [anon_sym_native] = ACTIONS(338),
    [sym_comment] = ACTIONS(54),
  },
  [943] = {
    [anon_sym_if] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_elseif] = ACTIONS(352),
    [anon_sym_AT] = ACTIONS(352),
    [anon_sym_static] = ACTIONS(352),
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
    [sym_comment] = ACTIONS(54),
  },
  [944] = {
    [sym_statement] = STATE(191),
    [sym_if_then_statement] = STATE(192),
    [sym__annotation] = STATE(189),
    [sym_normal_annotation] = STATE(193),
    [sym_marker_annotation] = STATE(193),
    [sym_single_element_annotation] = STATE(193),
    [sym_class_declaration] = STATE(191),
    [sym_normal_class_declaration] = STATE(194),
    [sym_modifier] = STATE(195),
    [sym_block_statements] = STATE(1083),
    [sym_block_statement] = STATE(197),
    [sym_local_variable_declaration_statement] = STATE(191),
    [sym_local_variable_declaration] = STATE(198),
    [aux_sym_normal_class_declaration_repeat1] = STATE(199),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(2087),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_static] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(366),
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
  [945] = {
    [anon_sym_if] = ACTIONS(368),
    [anon_sym_RBRACE] = ACTIONS(368),
    [anon_sym_elseif] = ACTIONS(368),
    [anon_sym_AT] = ACTIONS(368),
    [anon_sym_static] = ACTIONS(368),
    [anon_sym_class] = ACTIONS(368),
    [anon_sym_public] = ACTIONS(368),
    [anon_sym_protected] = ACTIONS(368),
    [anon_sym_private] = ACTIONS(368),
    [anon_sym_abstract] = ACTIONS(368),
    [anon_sym_final] = ACTIONS(368),
    [anon_sym_strictfp] = ACTIONS(368),
    [anon_sym_default] = ACTIONS(368),
    [anon_sym_synchronized] = ACTIONS(368),
    [anon_sym_native] = ACTIONS(368),
    [sym_comment] = ACTIONS(54),
  },
  [946] = {
    [anon_sym_if] = ACTIONS(2089),
    [anon_sym_RBRACE] = ACTIONS(2089),
    [anon_sym_elseif] = ACTIONS(2089),
    [anon_sym_AT] = ACTIONS(2089),
    [anon_sym_static] = ACTIONS(2089),
    [anon_sym_class] = ACTIONS(2089),
    [anon_sym_public] = ACTIONS(2089),
    [anon_sym_protected] = ACTIONS(2089),
    [anon_sym_private] = ACTIONS(2089),
    [anon_sym_abstract] = ACTIONS(2089),
    [anon_sym_final] = ACTIONS(2089),
    [anon_sym_strictfp] = ACTIONS(2089),
    [anon_sym_default] = ACTIONS(2089),
    [anon_sym_synchronized] = ACTIONS(2089),
    [anon_sym_native] = ACTIONS(2089),
    [sym_comment] = ACTIONS(54),
  },
  [947] = {
    [anon_sym_module] = ACTIONS(2091),
    [sym_comment] = ACTIONS(54),
  },
  [948] = {
    [sym_identifier] = ACTIONS(2093),
    [sym_comment] = ACTIONS(54),
  },
  [949] = {
    [sym_package_or_type_name] = STATE(72),
    [anon_sym_interface] = ACTIONS(2095),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [950] = {
    [sym_identifier] = ACTIONS(2097),
    [sym_comment] = ACTIONS(54),
  },
  [951] = {
    [sym_method_body] = STATE(1088),
    [sym_block] = STATE(943),
    [sym__semicolon] = ACTIONS(1821),
    [anon_sym_LBRACE] = ACTIONS(1823),
    [sym_comment] = ACTIONS(54),
  },
  [952] = {
    [sym__expression] = STATE(1089),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(876),
    [anon_sym_DASH_DASH] = ACTIONS(876),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [953] = {
    [anon_sym_if] = ACTIONS(1541),
    [anon_sym_RBRACE] = ACTIONS(1541),
    [anon_sym_elseif] = ACTIONS(1541),
    [anon_sym_AT] = ACTIONS(1541),
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
    [sym_comment] = ACTIONS(54),
  },
  [954] = {
    [sym_class_body] = STATE(1090),
    [anon_sym_LBRACE] = ACTIONS(882),
    [sym_comment] = ACTIONS(54),
  },
  [955] = {
    [anon_sym_DOT] = ACTIONS(1865),
    [anon_sym_AT] = ACTIONS(1865),
    [sym_identifier] = ACTIONS(2099),
    [sym_comment] = ACTIONS(54),
  },
  [956] = {
    [anon_sym_DOT] = ACTIONS(1867),
    [anon_sym_AT] = ACTIONS(1867),
    [sym_identifier] = ACTIONS(2101),
    [sym_comment] = ACTIONS(54),
  },
  [957] = {
    [sym_type_arguments] = STATE(1091),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_DOT] = ACTIONS(1867),
    [anon_sym_AT] = ACTIONS(1867),
    [sym_identifier] = ACTIONS(2101),
    [sym_comment] = ACTIONS(54),
  },
  [958] = {
    [anon_sym_boolean] = ACTIONS(924),
    [anon_sym_byte] = ACTIONS(924),
    [anon_sym_short] = ACTIONS(924),
    [anon_sym_int] = ACTIONS(924),
    [anon_sym_long] = ACTIONS(924),
    [anon_sym_char] = ACTIONS(924),
    [anon_sym_float] = ACTIONS(924),
    [anon_sym_double] = ACTIONS(924),
    [anon_sym_AT] = ACTIONS(724),
    [sym_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(54),
  },
  [959] = {
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(2103),
    [sym_comment] = ACTIONS(54),
  },
  [960] = {
    [anon_sym_RPAREN] = ACTIONS(2103),
    [sym_comment] = ACTIONS(54),
  },
  [961] = {
    [anon_sym_RPAREN] = ACTIONS(2105),
    [sym_comment] = ACTIONS(54),
  },
  [962] = {
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(736),
    [anon_sym_boolean] = ACTIONS(738),
    [anon_sym_byte] = ACTIONS(738),
    [anon_sym_short] = ACTIONS(738),
    [anon_sym_int] = ACTIONS(738),
    [anon_sym_long] = ACTIONS(738),
    [anon_sym_char] = ACTIONS(738),
    [anon_sym_float] = ACTIONS(738),
    [anon_sym_double] = ACTIONS(738),
    [anon_sym_AT] = ACTIONS(736),
    [sym_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(54),
  },
  [963] = {
    [anon_sym_GT] = ACTIONS(2107),
    [anon_sym_COMMA] = ACTIONS(2107),
    [sym_comment] = ACTIONS(54),
  },
  [964] = {
    [anon_sym_GT] = ACTIONS(2109),
    [anon_sym_AMP] = ACTIONS(2109),
    [anon_sym_COMMA] = ACTIONS(2109),
    [anon_sym_LBRACE] = ACTIONS(2109),
    [anon_sym_DOT] = ACTIONS(2109),
    [anon_sym_LBRACK] = ACTIONS(2109),
    [anon_sym_AT] = ACTIONS(2109),
    [anon_sym_implements] = ACTIONS(2109),
    [anon_sym_COLON_COLON] = ACTIONS(2109),
    [sym_comment] = ACTIONS(54),
  },
  [965] = {
    [anon_sym_RBRACE] = ACTIONS(988),
    [anon_sym_AT] = ACTIONS(988),
    [anon_sym_static] = ACTIONS(990),
    [anon_sym_class] = ACTIONS(990),
    [anon_sym_public] = ACTIONS(990),
    [anon_sym_protected] = ACTIONS(990),
    [anon_sym_private] = ACTIONS(990),
    [anon_sym_abstract] = ACTIONS(990),
    [anon_sym_final] = ACTIONS(990),
    [anon_sym_strictfp] = ACTIONS(990),
    [anon_sym_default] = ACTIONS(990),
    [anon_sym_synchronized] = ACTIONS(990),
    [anon_sym_native] = ACTIONS(990),
    [anon_sym_interface] = ACTIONS(990),
    [sym_identifier] = ACTIONS(992),
    [sym_comment] = ACTIONS(54),
  },
  [966] = {
    [sym__annotation] = STATE(363),
    [sym_normal_annotation] = STATE(367),
    [sym_marker_annotation] = STATE(367),
    [sym_single_element_annotation] = STATE(367),
    [sym_class_declaration] = STATE(368),
    [sym_normal_class_declaration] = STATE(369),
    [sym_modifier] = STATE(370),
    [sym_interface_declaration] = STATE(368),
    [sym_annotation_type_declaration] = STATE(371),
    [sym_annotation_type_member_declaration] = STATE(520),
    [sym_annotation_type_element_declaration] = STATE(368),
    [sym_normal_interface_declaration] = STATE(371),
    [sym_constant_declaration] = STATE(368),
    [sym_variable_declarator_list] = STATE(373),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(374),
    [anon_sym_RBRACE] = ACTIONS(2111),
    [anon_sym_AT] = ACTIONS(708),
    [anon_sym_static] = ACTIONS(710),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(710),
    [anon_sym_protected] = ACTIONS(710),
    [anon_sym_private] = ACTIONS(710),
    [anon_sym_abstract] = ACTIONS(710),
    [anon_sym_final] = ACTIONS(710),
    [anon_sym_strictfp] = ACTIONS(710),
    [anon_sym_default] = ACTIONS(710),
    [anon_sym_synchronized] = ACTIONS(710),
    [anon_sym_native] = ACTIONS(710),
    [anon_sym_interface] = ACTIONS(714),
    [sym_identifier] = ACTIONS(716),
    [sym_comment] = ACTIONS(54),
  },
  [967] = {
    [anon_sym_AT] = ACTIONS(1034),
    [anon_sym_static] = ACTIONS(1270),
    [anon_sym_class] = ACTIONS(1270),
    [anon_sym_public] = ACTIONS(1270),
    [anon_sym_protected] = ACTIONS(1270),
    [anon_sym_private] = ACTIONS(1270),
    [anon_sym_abstract] = ACTIONS(1270),
    [anon_sym_final] = ACTIONS(1270),
    [anon_sym_strictfp] = ACTIONS(1270),
    [anon_sym_default] = ACTIONS(1270),
    [anon_sym_synchronized] = ACTIONS(1270),
    [anon_sym_native] = ACTIONS(1270),
    [anon_sym_interface] = ACTIONS(1270),
    [sym_identifier] = ACTIONS(1304),
    [sym_comment] = ACTIONS(54),
  },
  [968] = {
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1272),
    [anon_sym_class] = ACTIONS(1272),
    [anon_sym_public] = ACTIONS(1272),
    [anon_sym_protected] = ACTIONS(1272),
    [anon_sym_private] = ACTIONS(1272),
    [anon_sym_abstract] = ACTIONS(1272),
    [anon_sym_final] = ACTIONS(1272),
    [anon_sym_strictfp] = ACTIONS(1272),
    [anon_sym_default] = ACTIONS(1272),
    [anon_sym_synchronized] = ACTIONS(1272),
    [anon_sym_native] = ACTIONS(1272),
    [anon_sym_interface] = ACTIONS(1272),
    [sym_identifier] = ACTIONS(1306),
    [sym_comment] = ACTIONS(54),
  },
  [969] = {
    [anon_sym_RBRACE] = ACTIONS(1142),
    [anon_sym_AT] = ACTIONS(1142),
    [anon_sym_static] = ACTIONS(1144),
    [anon_sym_class] = ACTIONS(1144),
    [anon_sym_public] = ACTIONS(1144),
    [anon_sym_protected] = ACTIONS(1144),
    [anon_sym_private] = ACTIONS(1144),
    [anon_sym_abstract] = ACTIONS(1144),
    [anon_sym_final] = ACTIONS(1144),
    [anon_sym_strictfp] = ACTIONS(1144),
    [anon_sym_default] = ACTIONS(1144),
    [anon_sym_synchronized] = ACTIONS(1144),
    [anon_sym_native] = ACTIONS(1144),
    [anon_sym_interface] = ACTIONS(1144),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(54),
  },
  [970] = {
    [sym_class_body] = STATE(1095),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [sym_comment] = ACTIONS(54),
  },
  [971] = {
    [anon_sym_RBRACE] = ACTIONS(1158),
    [anon_sym_AT] = ACTIONS(1158),
    [anon_sym_static] = ACTIONS(1160),
    [anon_sym_class] = ACTIONS(1160),
    [anon_sym_public] = ACTIONS(1160),
    [anon_sym_protected] = ACTIONS(1160),
    [anon_sym_private] = ACTIONS(1160),
    [anon_sym_abstract] = ACTIONS(1160),
    [anon_sym_final] = ACTIONS(1160),
    [anon_sym_strictfp] = ACTIONS(1160),
    [anon_sym_default] = ACTIONS(1160),
    [anon_sym_synchronized] = ACTIONS(1160),
    [anon_sym_native] = ACTIONS(1160),
    [anon_sym_interface] = ACTIONS(1160),
    [sym_identifier] = ACTIONS(1162),
    [sym_comment] = ACTIONS(54),
  },
  [972] = {
    [anon_sym_RBRACE] = ACTIONS(1176),
    [anon_sym_AT] = ACTIONS(1176),
    [anon_sym_static] = ACTIONS(1178),
    [anon_sym_class] = ACTIONS(1178),
    [anon_sym_public] = ACTIONS(1178),
    [anon_sym_protected] = ACTIONS(1178),
    [anon_sym_private] = ACTIONS(1178),
    [anon_sym_abstract] = ACTIONS(1178),
    [anon_sym_final] = ACTIONS(1178),
    [anon_sym_strictfp] = ACTIONS(1178),
    [anon_sym_default] = ACTIONS(1178),
    [anon_sym_synchronized] = ACTIONS(1178),
    [anon_sym_native] = ACTIONS(1178),
    [anon_sym_interface] = ACTIONS(1178),
    [sym_identifier] = ACTIONS(1180),
    [sym_comment] = ACTIONS(54),
  },
  [973] = {
    [anon_sym_RBRACE] = ACTIONS(1188),
    [anon_sym_AT] = ACTIONS(1188),
    [anon_sym_static] = ACTIONS(1190),
    [anon_sym_class] = ACTIONS(1190),
    [anon_sym_public] = ACTIONS(1190),
    [anon_sym_protected] = ACTIONS(1190),
    [anon_sym_private] = ACTIONS(1190),
    [anon_sym_abstract] = ACTIONS(1190),
    [anon_sym_final] = ACTIONS(1190),
    [anon_sym_strictfp] = ACTIONS(1190),
    [anon_sym_default] = ACTIONS(1190),
    [anon_sym_synchronized] = ACTIONS(1190),
    [anon_sym_native] = ACTIONS(1190),
    [anon_sym_interface] = ACTIONS(1190),
    [sym_identifier] = ACTIONS(1192),
    [sym_comment] = ACTIONS(54),
  },
  [974] = {
    [sym__expression] = STATE(1096),
    [sym_assignment_expression] = STATE(25),
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
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [975] = {
    [sym__semicolon] = ACTIONS(2113),
    [sym_comment] = ACTIONS(54),
  },
  [976] = {
    [sym__semicolon] = ACTIONS(1372),
    [anon_sym_PIPE_PIPE] = ACTIONS(2115),
    [anon_sym_QMARK] = ACTIONS(2117),
    [sym_comment] = ACTIONS(54),
  },
  [977] = {
    [sym__semicolon] = ACTIONS(1378),
    [anon_sym_AMP_AMP] = ACTIONS(2119),
    [anon_sym_PIPE_PIPE] = ACTIONS(1378),
    [anon_sym_QMARK] = ACTIONS(1378),
    [sym_comment] = ACTIONS(54),
  },
  [978] = {
    [sym__semicolon] = ACTIONS(1380),
    [anon_sym_AMP_AMP] = ACTIONS(1380),
    [anon_sym_PIPE_PIPE] = ACTIONS(1380),
    [anon_sym_PIPE] = ACTIONS(2121),
    [anon_sym_QMARK] = ACTIONS(1380),
    [sym_comment] = ACTIONS(54),
  },
  [979] = {
    [sym__semicolon] = ACTIONS(1384),
    [anon_sym_AMP_AMP] = ACTIONS(1384),
    [anon_sym_PIPE_PIPE] = ACTIONS(1384),
    [anon_sym_PIPE] = ACTIONS(1386),
    [anon_sym_CARET] = ACTIONS(2123),
    [anon_sym_QMARK] = ACTIONS(1384),
    [sym_comment] = ACTIONS(54),
  },
  [980] = {
    [sym__semicolon] = ACTIONS(1398),
    [anon_sym_LT] = ACTIONS(2125),
    [anon_sym_EQ_EQ] = ACTIONS(1396),
    [anon_sym_BANG_EQ] = ACTIONS(1396),
    [anon_sym_AMP_AMP] = ACTIONS(1398),
    [anon_sym_PIPE_PIPE] = ACTIONS(1398),
    [anon_sym_PIPE] = ACTIONS(1400),
    [anon_sym_CARET] = ACTIONS(1398),
    [anon_sym_QMARK] = ACTIONS(1398),
    [sym_comment] = ACTIONS(54),
  },
  [981] = {
    [anon_sym_EQ_EQ] = ACTIONS(2127),
    [anon_sym_BANG_EQ] = ACTIONS(2127),
    [sym_comment] = ACTIONS(54),
  },
  [982] = {
    [sym__semicolon] = ACTIONS(1406),
    [anon_sym_LT] = ACTIONS(1404),
    [anon_sym_EQ_EQ] = ACTIONS(1406),
    [anon_sym_BANG_EQ] = ACTIONS(1406),
    [anon_sym_AMP_AMP] = ACTIONS(1406),
    [anon_sym_PIPE_PIPE] = ACTIONS(1406),
    [anon_sym_PIPE] = ACTIONS(1404),
    [anon_sym_CARET] = ACTIONS(1406),
    [anon_sym_LT_LT] = ACTIONS(2129),
    [anon_sym_GT_GT] = ACTIONS(2131),
    [anon_sym_GT_GT_GT] = ACTIONS(2129),
    [anon_sym_QMARK] = ACTIONS(1406),
    [sym_comment] = ACTIONS(54),
  },
  [983] = {
    [sym__semicolon] = ACTIONS(1414),
    [anon_sym_LT] = ACTIONS(1412),
    [anon_sym_EQ_EQ] = ACTIONS(1414),
    [anon_sym_BANG_EQ] = ACTIONS(1414),
    [anon_sym_AMP_AMP] = ACTIONS(1414),
    [anon_sym_PIPE_PIPE] = ACTIONS(1414),
    [anon_sym_PLUS] = ACTIONS(2133),
    [anon_sym_DASH] = ACTIONS(2133),
    [anon_sym_PIPE] = ACTIONS(1412),
    [anon_sym_CARET] = ACTIONS(1414),
    [anon_sym_LT_LT] = ACTIONS(1414),
    [anon_sym_GT_GT] = ACTIONS(1412),
    [anon_sym_GT_GT_GT] = ACTIONS(1414),
    [anon_sym_QMARK] = ACTIONS(1414),
    [sym_comment] = ACTIONS(54),
  },
  [984] = {
    [sym__semicolon] = ACTIONS(1420),
    [anon_sym_LT] = ACTIONS(1418),
    [anon_sym_EQ_EQ] = ACTIONS(1420),
    [anon_sym_BANG_EQ] = ACTIONS(1420),
    [anon_sym_AMP_AMP] = ACTIONS(1420),
    [anon_sym_PIPE_PIPE] = ACTIONS(1420),
    [anon_sym_PLUS] = ACTIONS(1420),
    [anon_sym_DASH] = ACTIONS(1420),
    [anon_sym_STAR] = ACTIONS(2135),
    [anon_sym_SLASH] = ACTIONS(2137),
    [anon_sym_PIPE] = ACTIONS(1418),
    [anon_sym_CARET] = ACTIONS(1420),
    [anon_sym_PERCENT] = ACTIONS(2135),
    [anon_sym_LT_LT] = ACTIONS(1420),
    [anon_sym_GT_GT] = ACTIONS(1418),
    [anon_sym_GT_GT_GT] = ACTIONS(1420),
    [anon_sym_QMARK] = ACTIONS(1420),
    [sym_comment] = ACTIONS(54),
  },
  [985] = {
    [anon_sym_RBRACE] = ACTIONS(2139),
    [anon_sym_AT] = ACTIONS(2139),
    [anon_sym_static] = ACTIONS(2141),
    [anon_sym_class] = ACTIONS(2141),
    [anon_sym_public] = ACTIONS(2141),
    [anon_sym_protected] = ACTIONS(2141),
    [anon_sym_private] = ACTIONS(2141),
    [anon_sym_abstract] = ACTIONS(2141),
    [anon_sym_final] = ACTIONS(2141),
    [anon_sym_strictfp] = ACTIONS(2141),
    [anon_sym_default] = ACTIONS(2141),
    [anon_sym_synchronized] = ACTIONS(2141),
    [anon_sym_native] = ACTIONS(2141),
    [anon_sym_interface] = ACTIONS(2141),
    [sym_identifier] = ACTIONS(2143),
    [sym_comment] = ACTIONS(54),
  },
  [986] = {
    [sym__semicolon] = ACTIONS(2145),
    [sym_comment] = ACTIONS(54),
  },
  [987] = {
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
  [988] = {
    [sym_super_interfaces] = STATE(1108),
    [sym_class_body] = STATE(1095),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [anon_sym_implements] = ACTIONS(332),
    [sym_comment] = ACTIONS(54),
  },
  [989] = {
    [sym_interface_body] = STATE(1109),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [sym_comment] = ACTIONS(54),
  },
  [990] = {
    [sym_default_value] = STATE(1110),
    [sym__semicolon] = ACTIONS(2145),
    [anon_sym_default] = ACTIONS(1639),
    [sym_comment] = ACTIONS(54),
  },
  [991] = {
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_PLUS_EQ] = ACTIONS(550),
    [anon_sym_DASH_EQ] = ACTIONS(550),
    [anon_sym_STAR_EQ] = ACTIONS(550),
    [anon_sym_SLASH_EQ] = ACTIONS(550),
    [anon_sym_AMP_EQ] = ACTIONS(550),
    [anon_sym_PIPE_EQ] = ACTIONS(550),
    [anon_sym_CARET_EQ] = ACTIONS(550),
    [anon_sym_PERCENT_EQ] = ACTIONS(550),
    [anon_sym_LT_LT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(1649),
    [anon_sym_LT] = ACTIONS(1649),
    [anon_sym_EQ_EQ] = ACTIONS(1651),
    [anon_sym_GT_EQ] = ACTIONS(1651),
    [anon_sym_LT_EQ] = ACTIONS(1651),
    [anon_sym_BANG_EQ] = ACTIONS(1651),
    [anon_sym_AMP_AMP] = ACTIONS(1967),
    [anon_sym_PIPE_PIPE] = ACTIONS(1969),
    [anon_sym_PLUS] = ACTIONS(1971),
    [anon_sym_DASH] = ACTIONS(1971),
    [anon_sym_STAR] = ACTIONS(1973),
    [anon_sym_SLASH] = ACTIONS(1973),
    [anon_sym_AMP] = ACTIONS(1653),
    [anon_sym_PIPE] = ACTIONS(1975),
    [anon_sym_CARET] = ACTIONS(1975),
    [anon_sym_PERCENT] = ACTIONS(1973),
    [anon_sym_LT_LT] = ACTIONS(1973),
    [anon_sym_GT_GT] = ACTIONS(1973),
    [anon_sym_GT_GT_GT] = ACTIONS(1973),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_QMARK] = ACTIONS(1981),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [992] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(554),
    [anon_sym_GT_EQ] = ACTIONS(554),
    [anon_sym_LT_EQ] = ACTIONS(554),
    [anon_sym_BANG_EQ] = ACTIONS(554),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(1973),
    [anon_sym_SLASH] = ACTIONS(1973),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(1973),
    [anon_sym_LT_LT] = ACTIONS(1973),
    [anon_sym_GT_GT] = ACTIONS(1973),
    [anon_sym_GT_GT_GT] = ACTIONS(1973),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [993] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(1649),
    [anon_sym_LT] = ACTIONS(1649),
    [anon_sym_EQ_EQ] = ACTIONS(1651),
    [anon_sym_GT_EQ] = ACTIONS(1651),
    [anon_sym_LT_EQ] = ACTIONS(1651),
    [anon_sym_BANG_EQ] = ACTIONS(1651),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(1971),
    [anon_sym_DASH] = ACTIONS(1971),
    [anon_sym_STAR] = ACTIONS(1973),
    [anon_sym_SLASH] = ACTIONS(1973),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(1973),
    [anon_sym_LT_LT] = ACTIONS(1973),
    [anon_sym_GT_GT] = ACTIONS(1973),
    [anon_sym_GT_GT_GT] = ACTIONS(1973),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [994] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(1649),
    [anon_sym_LT] = ACTIONS(1649),
    [anon_sym_EQ_EQ] = ACTIONS(1651),
    [anon_sym_GT_EQ] = ACTIONS(1651),
    [anon_sym_LT_EQ] = ACTIONS(1651),
    [anon_sym_BANG_EQ] = ACTIONS(1651),
    [anon_sym_AMP_AMP] = ACTIONS(1967),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(1971),
    [anon_sym_DASH] = ACTIONS(1971),
    [anon_sym_STAR] = ACTIONS(1973),
    [anon_sym_SLASH] = ACTIONS(1973),
    [anon_sym_AMP] = ACTIONS(1653),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(1973),
    [anon_sym_LT_LT] = ACTIONS(1973),
    [anon_sym_GT_GT] = ACTIONS(1973),
    [anon_sym_GT_GT_GT] = ACTIONS(1973),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [995] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(1649),
    [anon_sym_LT] = ACTIONS(1649),
    [anon_sym_EQ_EQ] = ACTIONS(1651),
    [anon_sym_GT_EQ] = ACTIONS(1651),
    [anon_sym_LT_EQ] = ACTIONS(1651),
    [anon_sym_BANG_EQ] = ACTIONS(1651),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(1973),
    [anon_sym_SLASH] = ACTIONS(1973),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(1973),
    [anon_sym_LT_LT] = ACTIONS(1973),
    [anon_sym_GT_GT] = ACTIONS(1973),
    [anon_sym_GT_GT_GT] = ACTIONS(1973),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [996] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_AMP_EQ] = ACTIONS(560),
    [anon_sym_PIPE_EQ] = ACTIONS(560),
    [anon_sym_CARET_EQ] = ACTIONS(560),
    [anon_sym_PERCENT_EQ] = ACTIONS(560),
    [anon_sym_LT_LT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(2147),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [997] = {
    [sym__expression] = STATE(1112),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [998] = {
    [sym__expression] = STATE(1113),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [999] = {
    [sym__expression] = STATE(1114),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1000] = {
    [sym__expression] = STATE(1115),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1001] = {
    [sym__expression] = STATE(1116),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1002] = {
    [sym__expression] = STATE(176),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1003] = {
    [sym__expression] = STATE(1117),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1004] = {
    [sym__semicolon] = ACTIONS(2149),
    [anon_sym_RPAREN] = ACTIONS(2149),
    [anon_sym_COMMA] = ACTIONS(2149),
    [anon_sym_RBRACE] = ACTIONS(2149),
    [sym_comment] = ACTIONS(54),
  },
  [1005] = {
    [anon_sym_COMMA] = ACTIONS(2151),
    [anon_sym_RBRACE] = ACTIONS(2151),
    [sym_comment] = ACTIONS(54),
  },
  [1006] = {
    [sym__literal] = STATE(523),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(524),
    [sym__annotation] = STATE(523),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_element_value] = STATE(1119),
    [sym_element_value_array_initializer] = STATE(523),
    [sym_conditional_expression] = STATE(523),
    [sym_conditional_or_expression] = STATE(680),
    [sym_conditional_and_expression] = STATE(681),
    [sym_inclusive_or_expression] = STATE(682),
    [sym_exclusive_or_expression] = STATE(683),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(684),
    [sym_equality_expression] = STATE(685),
    [sym_shift_expression] = STATE(686),
    [sym_additive_expression] = STATE(687),
    [sym_multiplicative_expression] = STATE(688),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1028),
    [anon_sym_false] = ACTIONS(1028),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [anon_sym_LBRACE] = ACTIONS(1032),
    [anon_sym_RBRACE] = ACTIONS(2153),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [1007] = {
    [anon_sym_AMP_AMP] = ACTIONS(1669),
    [anon_sym_PIPE_PIPE] = ACTIONS(1905),
    [anon_sym_COMMA] = ACTIONS(1905),
    [anon_sym_QMARK] = ACTIONS(1905),
    [anon_sym_RBRACE] = ACTIONS(1905),
    [sym_comment] = ACTIONS(54),
  },
  [1008] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_AMP_EQ] = ACTIONS(560),
    [anon_sym_PIPE_EQ] = ACTIONS(560),
    [anon_sym_CARET_EQ] = ACTIONS(560),
    [anon_sym_PERCENT_EQ] = ACTIONS(560),
    [anon_sym_LT_LT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(2155),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1009] = {
    [anon_sym_AMP_AMP] = ACTIONS(1909),
    [anon_sym_PIPE_PIPE] = ACTIONS(1909),
    [anon_sym_PIPE] = ACTIONS(1671),
    [anon_sym_COMMA] = ACTIONS(1909),
    [anon_sym_QMARK] = ACTIONS(1909),
    [anon_sym_RBRACE] = ACTIONS(1909),
    [sym_comment] = ACTIONS(54),
  },
  [1010] = {
    [anon_sym_AMP_AMP] = ACTIONS(1911),
    [anon_sym_PIPE_PIPE] = ACTIONS(1911),
    [anon_sym_PIPE] = ACTIONS(1913),
    [anon_sym_CARET] = ACTIONS(1673),
    [anon_sym_COMMA] = ACTIONS(1911),
    [anon_sym_QMARK] = ACTIONS(1911),
    [anon_sym_RBRACE] = ACTIONS(1911),
    [sym_comment] = ACTIONS(54),
  },
  [1011] = {
    [anon_sym_LT] = ACTIONS(1919),
    [anon_sym_EQ_EQ] = ACTIONS(1921),
    [anon_sym_BANG_EQ] = ACTIONS(1921),
    [anon_sym_AMP_AMP] = ACTIONS(1921),
    [anon_sym_PIPE_PIPE] = ACTIONS(1921),
    [anon_sym_PIPE] = ACTIONS(1919),
    [anon_sym_CARET] = ACTIONS(1921),
    [anon_sym_LT_LT] = ACTIONS(1679),
    [anon_sym_GT_GT] = ACTIONS(1681),
    [anon_sym_GT_GT_GT] = ACTIONS(1679),
    [anon_sym_COMMA] = ACTIONS(1921),
    [anon_sym_QMARK] = ACTIONS(1921),
    [anon_sym_RBRACE] = ACTIONS(1921),
    [sym_comment] = ACTIONS(54),
  },
  [1012] = {
    [anon_sym_LT] = ACTIONS(1675),
    [anon_sym_EQ_EQ] = ACTIONS(1923),
    [anon_sym_BANG_EQ] = ACTIONS(1923),
    [anon_sym_AMP_AMP] = ACTIONS(1925),
    [anon_sym_PIPE_PIPE] = ACTIONS(1925),
    [anon_sym_PIPE] = ACTIONS(1927),
    [anon_sym_CARET] = ACTIONS(1925),
    [anon_sym_COMMA] = ACTIONS(1925),
    [anon_sym_QMARK] = ACTIONS(1925),
    [anon_sym_RBRACE] = ACTIONS(1925),
    [sym_comment] = ACTIONS(54),
  },
  [1013] = {
    [anon_sym_LT] = ACTIONS(1929),
    [anon_sym_EQ_EQ] = ACTIONS(1931),
    [anon_sym_BANG_EQ] = ACTIONS(1931),
    [anon_sym_AMP_AMP] = ACTIONS(1931),
    [anon_sym_PIPE_PIPE] = ACTIONS(1931),
    [anon_sym_PLUS] = ACTIONS(1683),
    [anon_sym_DASH] = ACTIONS(1683),
    [anon_sym_PIPE] = ACTIONS(1929),
    [anon_sym_CARET] = ACTIONS(1931),
    [anon_sym_LT_LT] = ACTIONS(1931),
    [anon_sym_GT_GT] = ACTIONS(1929),
    [anon_sym_GT_GT_GT] = ACTIONS(1931),
    [anon_sym_COMMA] = ACTIONS(1931),
    [anon_sym_QMARK] = ACTIONS(1931),
    [anon_sym_RBRACE] = ACTIONS(1931),
    [sym_comment] = ACTIONS(54),
  },
  [1014] = {
    [anon_sym_LT] = ACTIONS(1933),
    [anon_sym_EQ_EQ] = ACTIONS(1935),
    [anon_sym_BANG_EQ] = ACTIONS(1935),
    [anon_sym_AMP_AMP] = ACTIONS(1935),
    [anon_sym_PIPE_PIPE] = ACTIONS(1935),
    [anon_sym_PLUS] = ACTIONS(1935),
    [anon_sym_DASH] = ACTIONS(1935),
    [anon_sym_STAR] = ACTIONS(1685),
    [anon_sym_SLASH] = ACTIONS(1687),
    [anon_sym_PIPE] = ACTIONS(1933),
    [anon_sym_CARET] = ACTIONS(1935),
    [anon_sym_PERCENT] = ACTIONS(1685),
    [anon_sym_LT_LT] = ACTIONS(1935),
    [anon_sym_GT_GT] = ACTIONS(1933),
    [anon_sym_GT_GT_GT] = ACTIONS(1935),
    [anon_sym_COMMA] = ACTIONS(1935),
    [anon_sym_QMARK] = ACTIONS(1935),
    [anon_sym_RBRACE] = ACTIONS(1935),
    [sym_comment] = ACTIONS(54),
  },
  [1015] = {
    [sym_lambda_expression] = STATE(1121),
    [sym__lambda_parameters] = STATE(26),
    [sym_unary_expression] = STATE(524),
    [sym_conditional_expression] = STATE(1121),
    [sym_conditional_or_expression] = STATE(526),
    [sym_conditional_and_expression] = STATE(527),
    [sym_inclusive_or_expression] = STATE(528),
    [sym_exclusive_or_expression] = STATE(529),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(531),
    [sym_equality_expression] = STATE(532),
    [sym_shift_expression] = STATE(533),
    [sym_additive_expression] = STATE(534),
    [sym_multiplicative_expression] = STATE(535),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1030),
    [anon_sym_TILDE] = ACTIONS(1030),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1016] = {
    [anon_sym_RBRACE] = ACTIONS(2157),
    [anon_sym_requires] = ACTIONS(2157),
    [anon_sym_exports] = ACTIONS(2157),
    [anon_sym_opens] = ACTIONS(2157),
    [anon_sym_uses] = ACTIONS(2157),
    [anon_sym_provides] = ACTIONS(2157),
    [sym_comment] = ACTIONS(54),
  },
  [1017] = {
    [sym__semicolon] = ACTIONS(2159),
    [anon_sym_COMMA] = ACTIONS(2159),
    [anon_sym_DOT] = ACTIONS(1074),
    [sym_comment] = ACTIONS(54),
  },
  [1018] = {
    [sym_package_or_type_name] = STATE(1122),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(54),
  },
  [1019] = {
    [sym__semicolon] = ACTIONS(1340),
    [anon_sym_LT] = ACTIONS(1340),
    [anon_sym_LBRACE] = ACTIONS(1340),
    [anon_sym_RBRACE] = ACTIONS(1340),
    [anon_sym_AT] = ACTIONS(1340),
    [anon_sym_static] = ACTIONS(1342),
    [anon_sym_class] = ACTIONS(1342),
    [anon_sym_public] = ACTIONS(1342),
    [anon_sym_protected] = ACTIONS(1342),
    [anon_sym_private] = ACTIONS(1342),
    [anon_sym_abstract] = ACTIONS(1342),
    [anon_sym_final] = ACTIONS(1342),
    [anon_sym_strictfp] = ACTIONS(1342),
    [anon_sym_default] = ACTIONS(1342),
    [anon_sym_synchronized] = ACTIONS(1342),
    [anon_sym_native] = ACTIONS(1342),
    [anon_sym_void] = ACTIONS(1342),
    [anon_sym_interface] = ACTIONS(1342),
    [sym_identifier] = ACTIONS(1344),
    [sym_comment] = ACTIONS(54),
  },
  [1020] = {
    [sym__semicolon] = ACTIONS(1541),
    [anon_sym_LT] = ACTIONS(1541),
    [anon_sym_LBRACE] = ACTIONS(1541),
    [anon_sym_RBRACE] = ACTIONS(1541),
    [anon_sym_AT] = ACTIONS(1541),
    [anon_sym_static] = ACTIONS(1543),
    [anon_sym_class] = ACTIONS(1543),
    [anon_sym_public] = ACTIONS(1543),
    [anon_sym_protected] = ACTIONS(1543),
    [anon_sym_private] = ACTIONS(1543),
    [anon_sym_abstract] = ACTIONS(1543),
    [anon_sym_final] = ACTIONS(1543),
    [anon_sym_strictfp] = ACTIONS(1543),
    [anon_sym_default] = ACTIONS(1543),
    [anon_sym_synchronized] = ACTIONS(1543),
    [anon_sym_native] = ACTIONS(1543),
    [anon_sym_void] = ACTIONS(1543),
    [anon_sym_interface] = ACTIONS(1543),
    [sym_identifier] = ACTIONS(1545),
    [sym_comment] = ACTIONS(54),
  },
  [1021] = {
    [anon_sym_DOT] = ACTIONS(2161),
    [anon_sym_LBRACK] = ACTIONS(2161),
    [anon_sym_COLON_COLON] = ACTIONS(2161),
    [sym_comment] = ACTIONS(54),
  },
  [1022] = {
    [anon_sym_boolean] = ACTIONS(924),
    [anon_sym_byte] = ACTIONS(924),
    [anon_sym_short] = ACTIONS(924),
    [anon_sym_int] = ACTIONS(924),
    [anon_sym_long] = ACTIONS(924),
    [anon_sym_char] = ACTIONS(924),
    [anon_sym_float] = ACTIONS(924),
    [anon_sym_double] = ACTIONS(924),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(924),
    [anon_sym_class] = ACTIONS(924),
    [anon_sym_public] = ACTIONS(924),
    [anon_sym_protected] = ACTIONS(924),
    [anon_sym_private] = ACTIONS(924),
    [anon_sym_abstract] = ACTIONS(924),
    [anon_sym_final] = ACTIONS(924),
    [anon_sym_strictfp] = ACTIONS(924),
    [anon_sym_default] = ACTIONS(924),
    [anon_sym_synchronized] = ACTIONS(924),
    [anon_sym_native] = ACTIONS(924),
    [sym_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(54),
  },
  [1023] = {
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(2163),
    [sym_comment] = ACTIONS(54),
  },
  [1024] = {
    [anon_sym_RPAREN] = ACTIONS(2163),
    [sym_comment] = ACTIONS(54),
  },
  [1025] = {
    [anon_sym_RPAREN] = ACTIONS(2165),
    [sym_comment] = ACTIONS(54),
  },
  [1026] = {
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_DOT] = ACTIONS(736),
    [anon_sym_boolean] = ACTIONS(738),
    [anon_sym_byte] = ACTIONS(738),
    [anon_sym_short] = ACTIONS(738),
    [anon_sym_int] = ACTIONS(738),
    [anon_sym_long] = ACTIONS(738),
    [anon_sym_char] = ACTIONS(738),
    [anon_sym_float] = ACTIONS(738),
    [anon_sym_double] = ACTIONS(738),
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
    [anon_sym_synchronized] = ACTIONS(738),
    [anon_sym_native] = ACTIONS(738),
    [sym_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(54),
  },
  [1027] = {
    [anon_sym_if] = ACTIONS(2167),
    [anon_sym_RBRACE] = ACTIONS(2167),
    [anon_sym_AT] = ACTIONS(2167),
    [anon_sym_static] = ACTIONS(2167),
    [anon_sym_class] = ACTIONS(2167),
    [anon_sym_public] = ACTIONS(2167),
    [anon_sym_protected] = ACTIONS(2167),
    [anon_sym_private] = ACTIONS(2167),
    [anon_sym_abstract] = ACTIONS(2167),
    [anon_sym_final] = ACTIONS(2167),
    [anon_sym_strictfp] = ACTIONS(2167),
    [anon_sym_default] = ACTIONS(2167),
    [anon_sym_synchronized] = ACTIONS(2167),
    [anon_sym_native] = ACTIONS(2167),
    [sym_comment] = ACTIONS(54),
  },
  [1028] = {
    [sym__expression] = STATE(1125),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1029] = {
    [anon_sym_RPAREN] = ACTIONS(2169),
    [anon_sym_COMMA] = ACTIONS(2171),
    [sym_comment] = ACTIONS(54),
  },
  [1030] = {
    [sym__semicolon] = ACTIONS(2173),
    [sym_comment] = ACTIONS(54),
  },
  [1031] = {
    [anon_sym_DOT] = ACTIONS(2175),
    [anon_sym_LBRACK] = ACTIONS(2175),
    [anon_sym_COLON_COLON] = ACTIONS(2175),
    [sym_comment] = ACTIONS(54),
  },
  [1032] = {
    [sym_type_arguments] = STATE(646),
    [anon_sym_LT] = ACTIONS(2177),
    [anon_sym_LPAREN] = ACTIONS(2180),
    [anon_sym_DOT] = ACTIONS(2182),
    [anon_sym_LBRACK] = ACTIONS(1296),
    [anon_sym_AT] = ACTIONS(1296),
    [anon_sym_LT_GT] = ACTIONS(2180),
    [sym_comment] = ACTIONS(54),
  },
  [1033] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2185),
    [sym_comment] = ACTIONS(54),
  },
  [1034] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1130),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2187),
    [sym_comment] = ACTIONS(54),
  },
  [1035] = {
    [anon_sym_LPAREN] = ACTIONS(2189),
    [sym_comment] = ACTIONS(54),
  },
  [1036] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1132),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2191),
    [sym_comment] = ACTIONS(54),
  },
  [1037] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1134),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2193),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1038] = {
    [sym_type_arguments] = STATE(893),
    [sym_type_arguments_or_diamond] = STATE(1035),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(1044),
    [anon_sym_LT] = ACTIONS(1731),
    [anon_sym_LPAREN] = ACTIONS(1995),
    [anon_sym_DOT] = ACTIONS(1999),
    [anon_sym_LT_GT] = ACTIONS(1737),
    [sym_comment] = ACTIONS(54),
  },
  [1039] = {
    [sym__expression] = STATE(1137),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_variable_initializer] = STATE(1138),
    [sym_array_initializer] = STATE(1139),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_COMMA] = ACTIONS(2195),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [anon_sym_LBRACE] = ACTIONS(2005),
    [anon_sym_RBRACE] = ACTIONS(2197),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1040] = {
    [anon_sym_DOT] = ACTIONS(2199),
    [anon_sym_COLON_COLON] = ACTIONS(2199),
    [sym_comment] = ACTIONS(54),
  },
  [1041] = {
    [sym_class_body] = STATE(1140),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_DOT] = ACTIONS(2201),
    [anon_sym_LBRACK] = ACTIONS(2201),
    [anon_sym_COLON_COLON] = ACTIONS(2201),
    [sym_comment] = ACTIONS(54),
  },
  [1042] = {
    [anon_sym_RPAREN] = ACTIONS(2193),
    [sym_comment] = ACTIONS(54),
  },
  [1043] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(650),
    [anon_sym_LPAREN] = ACTIONS(1993),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(1300),
    [anon_sym_AT] = ACTIONS(1300),
    [sym_comment] = ACTIONS(54),
  },
  [1044] = {
    [sym_type_arguments] = STATE(893),
    [sym_type_arguments_or_diamond] = STATE(1141),
    [anon_sym_LT] = ACTIONS(1731),
    [anon_sym_LPAREN] = ACTIONS(2189),
    [anon_sym_DOT] = ACTIONS(1997),
    [anon_sym_LT_GT] = ACTIONS(1737),
    [sym_comment] = ACTIONS(54),
  },
  [1045] = {
    [anon_sym_RPAREN] = ACTIONS(2203),
    [sym_comment] = ACTIONS(54),
  },
  [1046] = {
    [sym__expression] = STATE(1143),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1047] = {
    [sym__expression] = STATE(1144),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1048] = {
    [sym__expression] = STATE(1145),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1049] = {
    [sym__expression] = STATE(1146),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1050] = {
    [sym__expression] = STATE(1147),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1051] = {
    [sym__expression] = STATE(176),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1052] = {
    [sym__expression] = STATE(1148),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1053] = {
    [anon_sym_DOT] = ACTIONS(2205),
    [anon_sym_LBRACK] = ACTIONS(2205),
    [anon_sym_AT] = ACTIONS(2205),
    [anon_sym_COLON_COLON] = ACTIONS(2205),
    [sym_comment] = ACTIONS(54),
  },
  [1054] = {
    [sym__expression] = STATE(1056),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1055] = {
    [anon_sym_DOT] = ACTIONS(2207),
    [anon_sym_LBRACK] = ACTIONS(2207),
    [anon_sym_AT] = ACTIONS(2207),
    [anon_sym_COLON_COLON] = ACTIONS(2207),
    [sym_comment] = ACTIONS(54),
  },
  [1056] = {
    [anon_sym_EQ] = ACTIONS(2011),
    [anon_sym_PLUS_EQ] = ACTIONS(2013),
    [anon_sym_DASH_EQ] = ACTIONS(2013),
    [anon_sym_STAR_EQ] = ACTIONS(2013),
    [anon_sym_SLASH_EQ] = ACTIONS(2013),
    [anon_sym_AMP_EQ] = ACTIONS(2013),
    [anon_sym_PIPE_EQ] = ACTIONS(2013),
    [anon_sym_CARET_EQ] = ACTIONS(2013),
    [anon_sym_PERCENT_EQ] = ACTIONS(2013),
    [anon_sym_LT_LT_EQ] = ACTIONS(2013),
    [anon_sym_GT_GT_EQ] = ACTIONS(2013),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(2013),
    [anon_sym_GT] = ACTIONS(2015),
    [anon_sym_LT] = ACTIONS(2015),
    [anon_sym_EQ_EQ] = ACTIONS(2017),
    [anon_sym_GT_EQ] = ACTIONS(2017),
    [anon_sym_LT_EQ] = ACTIONS(2017),
    [anon_sym_BANG_EQ] = ACTIONS(2017),
    [anon_sym_AMP_AMP] = ACTIONS(2019),
    [anon_sym_PIPE_PIPE] = ACTIONS(2021),
    [anon_sym_PLUS] = ACTIONS(2023),
    [anon_sym_DASH] = ACTIONS(2023),
    [anon_sym_STAR] = ACTIONS(2025),
    [anon_sym_SLASH] = ACTIONS(2025),
    [anon_sym_AMP] = ACTIONS(2027),
    [anon_sym_PIPE] = ACTIONS(2029),
    [anon_sym_CARET] = ACTIONS(2029),
    [anon_sym_PERCENT] = ACTIONS(2025),
    [anon_sym_LT_LT] = ACTIONS(2025),
    [anon_sym_GT_GT] = ACTIONS(2025),
    [anon_sym_GT_GT_GT] = ACTIONS(2025),
    [anon_sym_QMARK] = ACTIONS(2031),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(2209),
    [sym_comment] = ACTIONS(54),
  },
  [1057] = {
    [sym_type_arguments] = STATE(1151),
    [anon_sym_LT] = ACTIONS(904),
    [sym_identifier] = ACTIONS(2211),
    [sym_comment] = ACTIONS(54),
  },
  [1058] = {
    [sym_type_arguments] = STATE(1153),
    [anon_sym_LT] = ACTIONS(904),
    [sym_identifier] = ACTIONS(2213),
    [sym_comment] = ACTIONS(54),
  },
  [1059] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1155),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2215),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1060] = {
    [anon_sym_LPAREN] = ACTIONS(2217),
    [sym_comment] = ACTIONS(54),
  },
  [1061] = {
    [aux_sym_type_arguments_repeat1] = STATE(1158),
    [anon_sym_GT] = ACTIONS(2219),
    [anon_sym_COMMA] = ACTIONS(1284),
    [sym_comment] = ACTIONS(54),
  },
  [1062] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1159),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2203),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1063] = {
    [anon_sym_LPAREN] = ACTIONS(2221),
    [sym_comment] = ACTIONS(54),
  },
  [1064] = {
    [anon_sym_DOT] = ACTIONS(2223),
    [anon_sym_LBRACK] = ACTIONS(2223),
    [anon_sym_COLON_COLON] = ACTIONS(2223),
    [sym_comment] = ACTIONS(54),
  },
  [1065] = {
    [anon_sym_DOT] = ACTIONS(2225),
    [anon_sym_LBRACK] = ACTIONS(2225),
    [anon_sym_COLON_COLON] = ACTIONS(2225),
    [sym_comment] = ACTIONS(54),
  },
  [1066] = {
    [sym_class_body] = STATE(1161),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [sym_comment] = ACTIONS(54),
  },
  [1067] = {
    [sym__semicolon] = ACTIONS(1597),
    [anon_sym_LT] = ACTIONS(1597),
    [anon_sym_LBRACE] = ACTIONS(1597),
    [anon_sym_RBRACE] = ACTIONS(1597),
    [anon_sym_AT] = ACTIONS(1597),
    [anon_sym_static] = ACTIONS(1599),
    [anon_sym_class] = ACTIONS(1599),
    [anon_sym_public] = ACTIONS(1599),
    [anon_sym_protected] = ACTIONS(1599),
    [anon_sym_private] = ACTIONS(1599),
    [anon_sym_abstract] = ACTIONS(1599),
    [anon_sym_final] = ACTIONS(1599),
    [anon_sym_strictfp] = ACTIONS(1599),
    [anon_sym_default] = ACTIONS(1599),
    [anon_sym_synchronized] = ACTIONS(1599),
    [anon_sym_native] = ACTIONS(1599),
    [anon_sym_void] = ACTIONS(1599),
    [anon_sym_interface] = ACTIONS(1599),
    [sym_identifier] = ACTIONS(1601),
    [sym_comment] = ACTIONS(54),
  },
  [1068] = {
    [anon_sym_EQ] = ACTIONS(1204),
    [anon_sym_PLUS_EQ] = ACTIONS(1206),
    [anon_sym_DASH_EQ] = ACTIONS(1206),
    [anon_sym_STAR_EQ] = ACTIONS(1206),
    [anon_sym_SLASH_EQ] = ACTIONS(1206),
    [anon_sym_AMP_EQ] = ACTIONS(1206),
    [anon_sym_PIPE_EQ] = ACTIONS(1206),
    [anon_sym_CARET_EQ] = ACTIONS(1206),
    [anon_sym_PERCENT_EQ] = ACTIONS(1206),
    [anon_sym_LT_LT_EQ] = ACTIONS(1206),
    [anon_sym_GT_GT_EQ] = ACTIONS(1206),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1206),
    [anon_sym_GT] = ACTIONS(1208),
    [anon_sym_LT] = ACTIONS(1208),
    [anon_sym_EQ_EQ] = ACTIONS(1210),
    [anon_sym_GT_EQ] = ACTIONS(1210),
    [anon_sym_LT_EQ] = ACTIONS(1210),
    [anon_sym_BANG_EQ] = ACTIONS(1210),
    [anon_sym_AMP_AMP] = ACTIONS(1212),
    [anon_sym_PIPE_PIPE] = ACTIONS(1214),
    [anon_sym_PLUS] = ACTIONS(1216),
    [anon_sym_DASH] = ACTIONS(1216),
    [anon_sym_STAR] = ACTIONS(1218),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(1222),
    [anon_sym_CARET] = ACTIONS(1222),
    [anon_sym_PERCENT] = ACTIONS(1218),
    [anon_sym_LT_LT] = ACTIONS(1218),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(2227),
    [anon_sym_QMARK] = ACTIONS(1226),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1069] = {
    [anon_sym_RBRACE] = ACTIONS(2229),
    [sym_comment] = ACTIONS(54),
  },
  [1070] = {
    [sym_annotation_type_body] = STATE(1165),
    [anon_sym_LBRACE] = ACTIONS(2231),
    [sym_comment] = ACTIONS(54),
  },
  [1071] = {
    [anon_sym_LBRACE] = ACTIONS(2233),
    [sym_comment] = ACTIONS(54),
  },
  [1072] = {
    [sym_module_directive] = STATE(253),
    [aux_sym_module_declaration_repeat1] = STATE(1168),
    [anon_sym_RBRACE] = ACTIONS(2235),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [1073] = {
    [anon_sym_if] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_elseif] = ACTIONS(500),
    [anon_sym_AT] = ACTIONS(500),
    [anon_sym_static] = ACTIONS(500),
    [anon_sym_class] = ACTIONS(500),
    [anon_sym_public] = ACTIONS(500),
    [anon_sym_protected] = ACTIONS(500),
    [anon_sym_private] = ACTIONS(500),
    [anon_sym_abstract] = ACTIONS(500),
    [anon_sym_final] = ACTIONS(500),
    [anon_sym_strictfp] = ACTIONS(500),
    [anon_sym_default] = ACTIONS(500),
    [anon_sym_synchronized] = ACTIONS(500),
    [anon_sym_native] = ACTIONS(500),
    [sym_comment] = ACTIONS(54),
  },
  [1074] = {
    [sym__semicolon] = ACTIONS(2237),
    [anon_sym_DOT] = ACTIONS(488),
    [sym_comment] = ACTIONS(54),
  },
  [1075] = {
    [anon_sym_DOT] = ACTIONS(2239),
    [sym_comment] = ACTIONS(54),
  },
  [1076] = {
    [anon_sym_if] = ACTIONS(510),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_elseif] = ACTIONS(510),
    [anon_sym_AT] = ACTIONS(510),
    [anon_sym_static] = ACTIONS(510),
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
    [sym_comment] = ACTIONS(54),
  },
  [1077] = {
    [anon_sym_STAR] = ACTIONS(2241),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(54),
  },
  [1078] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(282),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(282),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_interface_member_declaration] = STATE(284),
    [sym_constant_declaration] = STATE(282),
    [sym_variable_declarator_list] = STATE(285),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(282),
    [aux_sym_normal_class_declaration_repeat1] = STATE(287),
    [aux_sym_interface_body_repeat1] = STATE(1173),
    [sym__semicolon] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(2243),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [1079] = {
    [sym_extends_interfaces] = STATE(1174),
    [sym_interface_body] = STATE(1175),
    [anon_sym_LBRACE] = ACTIONS(2085),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [1080] = {
    [sym_interface_body] = STATE(1175),
    [anon_sym_LBRACE] = ACTIONS(2085),
    [sym_comment] = ACTIONS(54),
  },
  [1081] = {
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
  [1082] = {
    [anon_sym_if] = ACTIONS(612),
    [anon_sym_RBRACE] = ACTIONS(612),
    [anon_sym_elseif] = ACTIONS(612),
    [anon_sym_AT] = ACTIONS(612),
    [anon_sym_static] = ACTIONS(612),
    [anon_sym_class] = ACTIONS(612),
    [anon_sym_public] = ACTIONS(612),
    [anon_sym_protected] = ACTIONS(612),
    [anon_sym_private] = ACTIONS(612),
    [anon_sym_abstract] = ACTIONS(612),
    [anon_sym_final] = ACTIONS(612),
    [anon_sym_strictfp] = ACTIONS(612),
    [anon_sym_default] = ACTIONS(612),
    [anon_sym_synchronized] = ACTIONS(612),
    [anon_sym_native] = ACTIONS(612),
    [sym_comment] = ACTIONS(54),
  },
  [1083] = {
    [anon_sym_RBRACE] = ACTIONS(2245),
    [sym_comment] = ACTIONS(54),
  },
  [1084] = {
    [sym_module_identifier] = STATE(1177),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [1085] = {
    [aux_sym_module_identifier_repeat1] = STATE(1178),
    [sym__semicolon] = ACTIONS(2237),
    [anon_sym_DOT] = ACTIONS(316),
    [sym_comment] = ACTIONS(54),
  },
  [1086] = {
    [sym_identifier] = ACTIONS(2247),
    [sym_comment] = ACTIONS(54),
  },
  [1087] = {
    [sym_type_parameters] = STATE(1180),
    [sym_extends_interfaces] = STATE(1174),
    [sym_interface_body] = STATE(1175),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(2085),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [1088] = {
    [anon_sym_if] = ACTIONS(640),
    [anon_sym_RBRACE] = ACTIONS(640),
    [anon_sym_elseif] = ACTIONS(640),
    [anon_sym_AT] = ACTIONS(640),
    [anon_sym_static] = ACTIONS(640),
    [anon_sym_class] = ACTIONS(640),
    [anon_sym_public] = ACTIONS(640),
    [anon_sym_protected] = ACTIONS(640),
    [anon_sym_private] = ACTIONS(640),
    [anon_sym_abstract] = ACTIONS(640),
    [anon_sym_final] = ACTIONS(640),
    [anon_sym_strictfp] = ACTIONS(640),
    [anon_sym_default] = ACTIONS(640),
    [anon_sym_synchronized] = ACTIONS(640),
    [anon_sym_native] = ACTIONS(640),
    [sym_comment] = ACTIONS(54),
  },
  [1089] = {
    [anon_sym_EQ] = ACTIONS(1198),
    [anon_sym_PLUS_EQ] = ACTIONS(1196),
    [anon_sym_DASH_EQ] = ACTIONS(1196),
    [anon_sym_STAR_EQ] = ACTIONS(1196),
    [anon_sym_SLASH_EQ] = ACTIONS(1196),
    [anon_sym_AMP_EQ] = ACTIONS(1196),
    [anon_sym_PIPE_EQ] = ACTIONS(1196),
    [anon_sym_CARET_EQ] = ACTIONS(1196),
    [anon_sym_PERCENT_EQ] = ACTIONS(1196),
    [anon_sym_LT_LT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT] = ACTIONS(1208),
    [anon_sym_LT] = ACTIONS(1208),
    [anon_sym_EQ_EQ] = ACTIONS(1210),
    [anon_sym_GT_EQ] = ACTIONS(1210),
    [anon_sym_LT_EQ] = ACTIONS(1210),
    [anon_sym_BANG_EQ] = ACTIONS(1210),
    [anon_sym_AMP_AMP] = ACTIONS(1212),
    [anon_sym_PIPE_PIPE] = ACTIONS(1214),
    [anon_sym_PLUS] = ACTIONS(1216),
    [anon_sym_DASH] = ACTIONS(1216),
    [anon_sym_STAR] = ACTIONS(1218),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(1222),
    [anon_sym_CARET] = ACTIONS(1222),
    [anon_sym_PERCENT] = ACTIONS(1218),
    [anon_sym_LT_LT] = ACTIONS(1218),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(1196),
    [anon_sym_QMARK] = ACTIONS(1226),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1090] = {
    [anon_sym_if] = ACTIONS(1851),
    [anon_sym_RBRACE] = ACTIONS(1851),
    [anon_sym_elseif] = ACTIONS(1851),
    [anon_sym_AT] = ACTIONS(1851),
    [anon_sym_static] = ACTIONS(1851),
    [anon_sym_class] = ACTIONS(1851),
    [anon_sym_public] = ACTIONS(1851),
    [anon_sym_protected] = ACTIONS(1851),
    [anon_sym_private] = ACTIONS(1851),
    [anon_sym_abstract] = ACTIONS(1851),
    [anon_sym_final] = ACTIONS(1851),
    [anon_sym_strictfp] = ACTIONS(1851),
    [anon_sym_default] = ACTIONS(1851),
    [anon_sym_synchronized] = ACTIONS(1851),
    [anon_sym_native] = ACTIONS(1851),
    [sym_comment] = ACTIONS(54),
  },
  [1091] = {
    [anon_sym_DOT] = ACTIONS(2109),
    [anon_sym_AT] = ACTIONS(2109),
    [sym_identifier] = ACTIONS(2249),
    [sym_comment] = ACTIONS(54),
  },
  [1092] = {
    [anon_sym_boolean] = ACTIONS(1270),
    [anon_sym_byte] = ACTIONS(1270),
    [anon_sym_short] = ACTIONS(1270),
    [anon_sym_int] = ACTIONS(1270),
    [anon_sym_long] = ACTIONS(1270),
    [anon_sym_char] = ACTIONS(1270),
    [anon_sym_float] = ACTIONS(1270),
    [anon_sym_double] = ACTIONS(1270),
    [anon_sym_AT] = ACTIONS(1034),
    [sym_identifier] = ACTIONS(1304),
    [sym_comment] = ACTIONS(54),
  },
  [1093] = {
    [anon_sym_boolean] = ACTIONS(1272),
    [anon_sym_byte] = ACTIONS(1272),
    [anon_sym_short] = ACTIONS(1272),
    [anon_sym_int] = ACTIONS(1272),
    [anon_sym_long] = ACTIONS(1272),
    [anon_sym_char] = ACTIONS(1272),
    [anon_sym_float] = ACTIONS(1272),
    [anon_sym_double] = ACTIONS(1272),
    [anon_sym_AT] = ACTIONS(1036),
    [sym_identifier] = ACTIONS(1306),
    [sym_comment] = ACTIONS(54),
  },
  [1094] = {
    [anon_sym_RBRACE] = ACTIONS(1340),
    [anon_sym_AT] = ACTIONS(1340),
    [anon_sym_static] = ACTIONS(1342),
    [anon_sym_class] = ACTIONS(1342),
    [anon_sym_public] = ACTIONS(1342),
    [anon_sym_protected] = ACTIONS(1342),
    [anon_sym_private] = ACTIONS(1342),
    [anon_sym_abstract] = ACTIONS(1342),
    [anon_sym_final] = ACTIONS(1342),
    [anon_sym_strictfp] = ACTIONS(1342),
    [anon_sym_default] = ACTIONS(1342),
    [anon_sym_synchronized] = ACTIONS(1342),
    [anon_sym_native] = ACTIONS(1342),
    [anon_sym_interface] = ACTIONS(1342),
    [sym_identifier] = ACTIONS(1344),
    [sym_comment] = ACTIONS(54),
  },
  [1095] = {
    [anon_sym_RBRACE] = ACTIONS(1541),
    [anon_sym_AT] = ACTIONS(1541),
    [anon_sym_static] = ACTIONS(1543),
    [anon_sym_class] = ACTIONS(1543),
    [anon_sym_public] = ACTIONS(1543),
    [anon_sym_protected] = ACTIONS(1543),
    [anon_sym_private] = ACTIONS(1543),
    [anon_sym_abstract] = ACTIONS(1543),
    [anon_sym_final] = ACTIONS(1543),
    [anon_sym_strictfp] = ACTIONS(1543),
    [anon_sym_default] = ACTIONS(1543),
    [anon_sym_synchronized] = ACTIONS(1543),
    [anon_sym_native] = ACTIONS(1543),
    [anon_sym_interface] = ACTIONS(1543),
    [sym_identifier] = ACTIONS(1545),
    [sym_comment] = ACTIONS(54),
  },
  [1096] = {
    [sym__semicolon] = ACTIONS(294),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(294),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(296),
    [anon_sym_GT_GT] = ACTIONS(296),
    [anon_sym_GT_GT_GT] = ACTIONS(296),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1097] = {
    [sym_unary_expression] = STATE(524),
    [sym_conditional_and_expression] = STATE(1181),
    [sym_inclusive_or_expression] = STATE(978),
    [sym_exclusive_or_expression] = STATE(979),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(980),
    [sym_equality_expression] = STATE(981),
    [sym_shift_expression] = STATE(982),
    [sym_additive_expression] = STATE(983),
    [sym_multiplicative_expression] = STATE(984),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [sym_comment] = ACTIONS(54),
  },
  [1098] = {
    [sym__expression] = STATE(1182),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(346),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1099] = {
    [sym_unary_expression] = STATE(524),
    [sym_inclusive_or_expression] = STATE(1183),
    [sym_exclusive_or_expression] = STATE(979),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(980),
    [sym_equality_expression] = STATE(981),
    [sym_shift_expression] = STATE(982),
    [sym_additive_expression] = STATE(983),
    [sym_multiplicative_expression] = STATE(984),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [sym_comment] = ACTIONS(54),
  },
  [1100] = {
    [sym_unary_expression] = STATE(524),
    [sym_exclusive_or_expression] = STATE(1184),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(980),
    [sym_equality_expression] = STATE(981),
    [sym_shift_expression] = STATE(982),
    [sym_additive_expression] = STATE(983),
    [sym_multiplicative_expression] = STATE(984),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [sym_comment] = ACTIONS(54),
  },
  [1101] = {
    [sym_unary_expression] = STATE(524),
    [sym_and_expression] = STATE(860),
    [sym_relational_expression] = STATE(980),
    [sym_equality_expression] = STATE(981),
    [sym_shift_expression] = STATE(982),
    [sym_additive_expression] = STATE(983),
    [sym_multiplicative_expression] = STATE(984),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [sym_comment] = ACTIONS(54),
  },
  [1102] = {
    [sym_unary_expression] = STATE(524),
    [sym_shift_expression] = STATE(1185),
    [sym_additive_expression] = STATE(983),
    [sym_multiplicative_expression] = STATE(984),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [sym_comment] = ACTIONS(54),
  },
  [1103] = {
    [sym_unary_expression] = STATE(524),
    [sym_relational_expression] = STATE(1186),
    [sym_shift_expression] = STATE(982),
    [sym_additive_expression] = STATE(983),
    [sym_multiplicative_expression] = STATE(984),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [sym_comment] = ACTIONS(54),
  },
  [1104] = {
    [sym_unary_expression] = STATE(524),
    [sym_additive_expression] = STATE(1187),
    [sym_multiplicative_expression] = STATE(984),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [sym_comment] = ACTIONS(54),
  },
  [1105] = {
    [sym_unary_expression] = STATE(524),
    [sym_multiplicative_expression] = STATE(1188),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [sym_comment] = ACTIONS(54),
  },
  [1106] = {
    [sym_unary_expression] = STATE(865),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [sym_comment] = ACTIONS(54),
  },
  [1107] = {
    [anon_sym_RBRACE] = ACTIONS(2251),
    [anon_sym_AT] = ACTIONS(2251),
    [anon_sym_static] = ACTIONS(2253),
    [anon_sym_class] = ACTIONS(2253),
    [anon_sym_public] = ACTIONS(2253),
    [anon_sym_protected] = ACTIONS(2253),
    [anon_sym_private] = ACTIONS(2253),
    [anon_sym_abstract] = ACTIONS(2253),
    [anon_sym_final] = ACTIONS(2253),
    [anon_sym_strictfp] = ACTIONS(2253),
    [anon_sym_default] = ACTIONS(2253),
    [anon_sym_synchronized] = ACTIONS(2253),
    [anon_sym_native] = ACTIONS(2253),
    [anon_sym_interface] = ACTIONS(2253),
    [sym_identifier] = ACTIONS(2255),
    [sym_comment] = ACTIONS(54),
  },
  [1108] = {
    [sym_class_body] = STATE(1189),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [sym_comment] = ACTIONS(54),
  },
  [1109] = {
    [anon_sym_RBRACE] = ACTIONS(1597),
    [anon_sym_AT] = ACTIONS(1597),
    [anon_sym_static] = ACTIONS(1599),
    [anon_sym_class] = ACTIONS(1599),
    [anon_sym_public] = ACTIONS(1599),
    [anon_sym_protected] = ACTIONS(1599),
    [anon_sym_private] = ACTIONS(1599),
    [anon_sym_abstract] = ACTIONS(1599),
    [anon_sym_final] = ACTIONS(1599),
    [anon_sym_strictfp] = ACTIONS(1599),
    [anon_sym_default] = ACTIONS(1599),
    [anon_sym_synchronized] = ACTIONS(1599),
    [anon_sym_native] = ACTIONS(1599),
    [anon_sym_interface] = ACTIONS(1599),
    [sym_identifier] = ACTIONS(1601),
    [sym_comment] = ACTIONS(54),
  },
  [1110] = {
    [sym__semicolon] = ACTIONS(2257),
    [sym_comment] = ACTIONS(54),
  },
  [1111] = {
    [sym__expression] = STATE(1191),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1112] = {
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_PLUS_EQ] = ACTIONS(550),
    [anon_sym_DASH_EQ] = ACTIONS(550),
    [anon_sym_STAR_EQ] = ACTIONS(550),
    [anon_sym_SLASH_EQ] = ACTIONS(550),
    [anon_sym_AMP_EQ] = ACTIONS(550),
    [anon_sym_PIPE_EQ] = ACTIONS(550),
    [anon_sym_CARET_EQ] = ACTIONS(550),
    [anon_sym_PERCENT_EQ] = ACTIONS(550),
    [anon_sym_LT_LT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(1895),
    [anon_sym_LT] = ACTIONS(1895),
    [anon_sym_EQ_EQ] = ACTIONS(1897),
    [anon_sym_GT_EQ] = ACTIONS(1897),
    [anon_sym_LT_EQ] = ACTIONS(1897),
    [anon_sym_BANG_EQ] = ACTIONS(1897),
    [anon_sym_AMP_AMP] = ACTIONS(2259),
    [anon_sym_PIPE_PIPE] = ACTIONS(2261),
    [anon_sym_PLUS] = ACTIONS(2263),
    [anon_sym_DASH] = ACTIONS(2263),
    [anon_sym_STAR] = ACTIONS(2265),
    [anon_sym_SLASH] = ACTIONS(2265),
    [anon_sym_AMP] = ACTIONS(1899),
    [anon_sym_PIPE] = ACTIONS(2267),
    [anon_sym_CARET] = ACTIONS(2267),
    [anon_sym_PERCENT] = ACTIONS(2265),
    [anon_sym_LT_LT] = ACTIONS(2265),
    [anon_sym_GT_GT] = ACTIONS(2265),
    [anon_sym_GT_GT_GT] = ACTIONS(2265),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_QMARK] = ACTIONS(2269),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(550),
    [sym_comment] = ACTIONS(54),
  },
  [1113] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(554),
    [anon_sym_GT_EQ] = ACTIONS(554),
    [anon_sym_LT_EQ] = ACTIONS(554),
    [anon_sym_BANG_EQ] = ACTIONS(554),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(2265),
    [anon_sym_SLASH] = ACTIONS(2265),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(2265),
    [anon_sym_LT_LT] = ACTIONS(2265),
    [anon_sym_GT_GT] = ACTIONS(2265),
    [anon_sym_GT_GT_GT] = ACTIONS(2265),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [1114] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(1895),
    [anon_sym_LT] = ACTIONS(1895),
    [anon_sym_EQ_EQ] = ACTIONS(1897),
    [anon_sym_GT_EQ] = ACTIONS(1897),
    [anon_sym_LT_EQ] = ACTIONS(1897),
    [anon_sym_BANG_EQ] = ACTIONS(1897),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(2263),
    [anon_sym_DASH] = ACTIONS(2263),
    [anon_sym_STAR] = ACTIONS(2265),
    [anon_sym_SLASH] = ACTIONS(2265),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(2265),
    [anon_sym_LT_LT] = ACTIONS(2265),
    [anon_sym_GT_GT] = ACTIONS(2265),
    [anon_sym_GT_GT_GT] = ACTIONS(2265),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [1115] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(1895),
    [anon_sym_LT] = ACTIONS(1895),
    [anon_sym_EQ_EQ] = ACTIONS(1897),
    [anon_sym_GT_EQ] = ACTIONS(1897),
    [anon_sym_LT_EQ] = ACTIONS(1897),
    [anon_sym_BANG_EQ] = ACTIONS(1897),
    [anon_sym_AMP_AMP] = ACTIONS(2259),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(2263),
    [anon_sym_DASH] = ACTIONS(2263),
    [anon_sym_STAR] = ACTIONS(2265),
    [anon_sym_SLASH] = ACTIONS(2265),
    [anon_sym_AMP] = ACTIONS(1899),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(2265),
    [anon_sym_LT_LT] = ACTIONS(2265),
    [anon_sym_GT_GT] = ACTIONS(2265),
    [anon_sym_GT_GT_GT] = ACTIONS(2265),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [1116] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(1895),
    [anon_sym_LT] = ACTIONS(1895),
    [anon_sym_EQ_EQ] = ACTIONS(1897),
    [anon_sym_GT_EQ] = ACTIONS(1897),
    [anon_sym_LT_EQ] = ACTIONS(1897),
    [anon_sym_BANG_EQ] = ACTIONS(1897),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(2265),
    [anon_sym_SLASH] = ACTIONS(2265),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(2265),
    [anon_sym_LT_LT] = ACTIONS(2265),
    [anon_sym_GT_GT] = ACTIONS(2265),
    [anon_sym_GT_GT_GT] = ACTIONS(2265),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [1117] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_AMP_EQ] = ACTIONS(560),
    [anon_sym_PIPE_EQ] = ACTIONS(560),
    [anon_sym_CARET_EQ] = ACTIONS(560),
    [anon_sym_PERCENT_EQ] = ACTIONS(560),
    [anon_sym_LT_LT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(2271),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1118] = {
    [sym__semicolon] = ACTIONS(2273),
    [anon_sym_RPAREN] = ACTIONS(2273),
    [anon_sym_COMMA] = ACTIONS(2273),
    [anon_sym_RBRACE] = ACTIONS(2273),
    [sym_comment] = ACTIONS(54),
  },
  [1119] = {
    [anon_sym_COMMA] = ACTIONS(2275),
    [anon_sym_RBRACE] = ACTIONS(2275),
    [sym_comment] = ACTIONS(54),
  },
  [1120] = {
    [sym_lambda_expression] = STATE(1121),
    [sym__lambda_parameters] = STATE(26),
    [sym_unary_expression] = STATE(524),
    [sym_conditional_expression] = STATE(1121),
    [sym_conditional_or_expression] = STATE(680),
    [sym_conditional_and_expression] = STATE(681),
    [sym_inclusive_or_expression] = STATE(682),
    [sym_exclusive_or_expression] = STATE(683),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(684),
    [sym_equality_expression] = STATE(685),
    [sym_shift_expression] = STATE(686),
    [sym_additive_expression] = STATE(687),
    [sym_multiplicative_expression] = STATE(688),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1358),
    [anon_sym_TILDE] = ACTIONS(1358),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1121] = {
    [sym__semicolon] = ACTIONS(2277),
    [anon_sym_RPAREN] = ACTIONS(2277),
    [anon_sym_COMMA] = ACTIONS(2277),
    [anon_sym_RBRACE] = ACTIONS(2277),
    [sym_comment] = ACTIONS(54),
  },
  [1122] = {
    [sym__semicolon] = ACTIONS(2279),
    [anon_sym_COMMA] = ACTIONS(2279),
    [anon_sym_DOT] = ACTIONS(1074),
    [sym_comment] = ACTIONS(54),
  },
  [1123] = {
    [anon_sym_boolean] = ACTIONS(1270),
    [anon_sym_byte] = ACTIONS(1270),
    [anon_sym_short] = ACTIONS(1270),
    [anon_sym_int] = ACTIONS(1270),
    [anon_sym_long] = ACTIONS(1270),
    [anon_sym_char] = ACTIONS(1270),
    [anon_sym_float] = ACTIONS(1270),
    [anon_sym_double] = ACTIONS(1270),
    [anon_sym_AT] = ACTIONS(1034),
    [anon_sym_static] = ACTIONS(1270),
    [anon_sym_class] = ACTIONS(1270),
    [anon_sym_public] = ACTIONS(1270),
    [anon_sym_protected] = ACTIONS(1270),
    [anon_sym_private] = ACTIONS(1270),
    [anon_sym_abstract] = ACTIONS(1270),
    [anon_sym_final] = ACTIONS(1270),
    [anon_sym_strictfp] = ACTIONS(1270),
    [anon_sym_default] = ACTIONS(1270),
    [anon_sym_synchronized] = ACTIONS(1270),
    [anon_sym_native] = ACTIONS(1270),
    [sym_identifier] = ACTIONS(1304),
    [sym_comment] = ACTIONS(54),
  },
  [1124] = {
    [anon_sym_boolean] = ACTIONS(1272),
    [anon_sym_byte] = ACTIONS(1272),
    [anon_sym_short] = ACTIONS(1272),
    [anon_sym_int] = ACTIONS(1272),
    [anon_sym_long] = ACTIONS(1272),
    [anon_sym_char] = ACTIONS(1272),
    [anon_sym_float] = ACTIONS(1272),
    [anon_sym_double] = ACTIONS(1272),
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1272),
    [anon_sym_class] = ACTIONS(1272),
    [anon_sym_public] = ACTIONS(1272),
    [anon_sym_protected] = ACTIONS(1272),
    [anon_sym_private] = ACTIONS(1272),
    [anon_sym_abstract] = ACTIONS(1272),
    [anon_sym_final] = ACTIONS(1272),
    [anon_sym_strictfp] = ACTIONS(1272),
    [anon_sym_default] = ACTIONS(1272),
    [anon_sym_synchronized] = ACTIONS(1272),
    [anon_sym_native] = ACTIONS(1272),
    [sym_identifier] = ACTIONS(1306),
    [sym_comment] = ACTIONS(54),
  },
  [1125] = {
    [anon_sym_EQ] = ACTIONS(1645),
    [anon_sym_PLUS_EQ] = ACTIONS(1647),
    [anon_sym_DASH_EQ] = ACTIONS(1647),
    [anon_sym_STAR_EQ] = ACTIONS(1647),
    [anon_sym_SLASH_EQ] = ACTIONS(1647),
    [anon_sym_AMP_EQ] = ACTIONS(1647),
    [anon_sym_PIPE_EQ] = ACTIONS(1647),
    [anon_sym_CARET_EQ] = ACTIONS(1647),
    [anon_sym_PERCENT_EQ] = ACTIONS(1647),
    [anon_sym_LT_LT_EQ] = ACTIONS(1647),
    [anon_sym_GT_GT_EQ] = ACTIONS(1647),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1647),
    [anon_sym_GT] = ACTIONS(1649),
    [anon_sym_LT] = ACTIONS(1649),
    [anon_sym_EQ_EQ] = ACTIONS(1651),
    [anon_sym_GT_EQ] = ACTIONS(1651),
    [anon_sym_LT_EQ] = ACTIONS(1651),
    [anon_sym_BANG_EQ] = ACTIONS(1651),
    [anon_sym_AMP_AMP] = ACTIONS(1967),
    [anon_sym_PIPE_PIPE] = ACTIONS(1969),
    [anon_sym_PLUS] = ACTIONS(1971),
    [anon_sym_DASH] = ACTIONS(1971),
    [anon_sym_STAR] = ACTIONS(1973),
    [anon_sym_SLASH] = ACTIONS(1973),
    [anon_sym_AMP] = ACTIONS(1653),
    [anon_sym_PIPE] = ACTIONS(1975),
    [anon_sym_CARET] = ACTIONS(1975),
    [anon_sym_PERCENT] = ACTIONS(1973),
    [anon_sym_LT_LT] = ACTIONS(1973),
    [anon_sym_GT_GT] = ACTIONS(1973),
    [anon_sym_GT_GT_GT] = ACTIONS(1973),
    [anon_sym_RPAREN] = ACTIONS(2281),
    [anon_sym_COMMA] = ACTIONS(2281),
    [anon_sym_QMARK] = ACTIONS(1981),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1126] = {
    [sym__expression] = STATE(1193),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1127] = {
    [anon_sym_if] = ACTIONS(2283),
    [anon_sym_RBRACE] = ACTIONS(2283),
    [anon_sym_AT] = ACTIONS(2283),
    [anon_sym_static] = ACTIONS(2283),
    [anon_sym_class] = ACTIONS(2283),
    [anon_sym_public] = ACTIONS(2283),
    [anon_sym_protected] = ACTIONS(2283),
    [anon_sym_private] = ACTIONS(2283),
    [anon_sym_abstract] = ACTIONS(2283),
    [anon_sym_final] = ACTIONS(2283),
    [anon_sym_strictfp] = ACTIONS(2283),
    [anon_sym_default] = ACTIONS(2283),
    [anon_sym_synchronized] = ACTIONS(2283),
    [anon_sym_native] = ACTIONS(2283),
    [sym_comment] = ACTIONS(54),
  },
  [1128] = {
    [sym_type_arguments] = STATE(807),
    [anon_sym_LT] = ACTIONS(2285),
    [anon_sym_LPAREN] = ACTIONS(2288),
    [anon_sym_DOT] = ACTIONS(2290),
    [anon_sym_LBRACK] = ACTIONS(1617),
    [anon_sym_AT] = ACTIONS(1617),
    [anon_sym_LT_GT] = ACTIONS(2288),
    [sym_comment] = ACTIONS(54),
  },
  [1129] = {
    [anon_sym_LT] = ACTIONS(2293),
    [anon_sym_LPAREN] = ACTIONS(2288),
    [anon_sym_DOT] = ACTIONS(2288),
    [anon_sym_LT_GT] = ACTIONS(2288),
    [sym_comment] = ACTIONS(54),
  },
  [1130] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2295),
    [sym_comment] = ACTIONS(54),
  },
  [1131] = {
    [anon_sym_LT] = ACTIONS(2297),
    [anon_sym_LPAREN] = ACTIONS(2180),
    [anon_sym_DOT] = ACTIONS(2180),
    [anon_sym_LT_GT] = ACTIONS(2180),
    [sym_comment] = ACTIONS(54),
  },
  [1132] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2187),
    [sym_comment] = ACTIONS(54),
  },
  [1133] = {
    [sym_class_body] = STATE(1195),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_DOT] = ACTIONS(2299),
    [anon_sym_LBRACK] = ACTIONS(2299),
    [anon_sym_COLON_COLON] = ACTIONS(2299),
    [sym_comment] = ACTIONS(54),
  },
  [1134] = {
    [anon_sym_RPAREN] = ACTIONS(2301),
    [sym_comment] = ACTIONS(54),
  },
  [1135] = {
    [anon_sym_RBRACE] = ACTIONS(2303),
    [sym_comment] = ACTIONS(54),
  },
  [1136] = {
    [anon_sym_COMMA] = ACTIONS(2305),
    [anon_sym_RBRACE] = ACTIONS(2305),
    [anon_sym_DOT] = ACTIONS(2305),
    [anon_sym_COLON_COLON] = ACTIONS(2305),
    [sym_comment] = ACTIONS(54),
  },
  [1137] = {
    [anon_sym_EQ] = ACTIONS(1891),
    [anon_sym_PLUS_EQ] = ACTIONS(1893),
    [anon_sym_DASH_EQ] = ACTIONS(1893),
    [anon_sym_STAR_EQ] = ACTIONS(1893),
    [anon_sym_SLASH_EQ] = ACTIONS(1893),
    [anon_sym_AMP_EQ] = ACTIONS(1893),
    [anon_sym_PIPE_EQ] = ACTIONS(1893),
    [anon_sym_CARET_EQ] = ACTIONS(1893),
    [anon_sym_PERCENT_EQ] = ACTIONS(1893),
    [anon_sym_LT_LT_EQ] = ACTIONS(1893),
    [anon_sym_GT_GT_EQ] = ACTIONS(1893),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1893),
    [anon_sym_GT] = ACTIONS(1895),
    [anon_sym_LT] = ACTIONS(1895),
    [anon_sym_EQ_EQ] = ACTIONS(1897),
    [anon_sym_GT_EQ] = ACTIONS(1897),
    [anon_sym_LT_EQ] = ACTIONS(1897),
    [anon_sym_BANG_EQ] = ACTIONS(1897),
    [anon_sym_AMP_AMP] = ACTIONS(2259),
    [anon_sym_PIPE_PIPE] = ACTIONS(2261),
    [anon_sym_PLUS] = ACTIONS(2263),
    [anon_sym_DASH] = ACTIONS(2263),
    [anon_sym_STAR] = ACTIONS(2265),
    [anon_sym_SLASH] = ACTIONS(2265),
    [anon_sym_AMP] = ACTIONS(1899),
    [anon_sym_PIPE] = ACTIONS(2267),
    [anon_sym_CARET] = ACTIONS(2267),
    [anon_sym_PERCENT] = ACTIONS(2265),
    [anon_sym_LT_LT] = ACTIONS(2265),
    [anon_sym_GT_GT] = ACTIONS(2265),
    [anon_sym_GT_GT_GT] = ACTIONS(2265),
    [anon_sym_COMMA] = ACTIONS(2307),
    [anon_sym_QMARK] = ACTIONS(2269),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(2307),
    [sym_comment] = ACTIONS(54),
  },
  [1138] = {
    [aux_sym_array_initializer_repeat1] = STATE(1199),
    [anon_sym_COMMA] = ACTIONS(2309),
    [anon_sym_RBRACE] = ACTIONS(2303),
    [sym_comment] = ACTIONS(54),
  },
  [1139] = {
    [anon_sym_COMMA] = ACTIONS(2307),
    [anon_sym_RBRACE] = ACTIONS(2307),
    [sym_comment] = ACTIONS(54),
  },
  [1140] = {
    [anon_sym_DOT] = ACTIONS(2299),
    [anon_sym_LBRACK] = ACTIONS(2299),
    [anon_sym_COLON_COLON] = ACTIONS(2299),
    [sym_comment] = ACTIONS(54),
  },
  [1141] = {
    [anon_sym_LPAREN] = ACTIONS(2311),
    [sym_comment] = ACTIONS(54),
  },
  [1142] = {
    [sym__semicolon] = ACTIONS(2313),
    [sym_comment] = ACTIONS(54),
  },
  [1143] = {
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_PLUS_EQ] = ACTIONS(550),
    [anon_sym_DASH_EQ] = ACTIONS(550),
    [anon_sym_STAR_EQ] = ACTIONS(550),
    [anon_sym_SLASH_EQ] = ACTIONS(550),
    [anon_sym_AMP_EQ] = ACTIONS(550),
    [anon_sym_PIPE_EQ] = ACTIONS(550),
    [anon_sym_CARET_EQ] = ACTIONS(550),
    [anon_sym_PERCENT_EQ] = ACTIONS(550),
    [anon_sym_LT_LT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(2015),
    [anon_sym_LT] = ACTIONS(2015),
    [anon_sym_EQ_EQ] = ACTIONS(2017),
    [anon_sym_GT_EQ] = ACTIONS(2017),
    [anon_sym_LT_EQ] = ACTIONS(2017),
    [anon_sym_BANG_EQ] = ACTIONS(2017),
    [anon_sym_AMP_AMP] = ACTIONS(2019),
    [anon_sym_PIPE_PIPE] = ACTIONS(2021),
    [anon_sym_PLUS] = ACTIONS(2023),
    [anon_sym_DASH] = ACTIONS(2023),
    [anon_sym_STAR] = ACTIONS(2025),
    [anon_sym_SLASH] = ACTIONS(2025),
    [anon_sym_AMP] = ACTIONS(2027),
    [anon_sym_PIPE] = ACTIONS(2029),
    [anon_sym_CARET] = ACTIONS(2029),
    [anon_sym_PERCENT] = ACTIONS(2025),
    [anon_sym_LT_LT] = ACTIONS(2025),
    [anon_sym_GT_GT] = ACTIONS(2025),
    [anon_sym_GT_GT_GT] = ACTIONS(2025),
    [anon_sym_QMARK] = ACTIONS(2031),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(550),
    [sym_comment] = ACTIONS(54),
  },
  [1144] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_EQ_EQ] = ACTIONS(554),
    [anon_sym_GT_EQ] = ACTIONS(554),
    [anon_sym_LT_EQ] = ACTIONS(554),
    [anon_sym_BANG_EQ] = ACTIONS(554),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(2025),
    [anon_sym_SLASH] = ACTIONS(2025),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(2025),
    [anon_sym_LT_LT] = ACTIONS(2025),
    [anon_sym_GT_GT] = ACTIONS(2025),
    [anon_sym_GT_GT_GT] = ACTIONS(2025),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [1145] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(2015),
    [anon_sym_LT] = ACTIONS(2015),
    [anon_sym_EQ_EQ] = ACTIONS(2017),
    [anon_sym_GT_EQ] = ACTIONS(2017),
    [anon_sym_LT_EQ] = ACTIONS(2017),
    [anon_sym_BANG_EQ] = ACTIONS(2017),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(2023),
    [anon_sym_DASH] = ACTIONS(2023),
    [anon_sym_STAR] = ACTIONS(2025),
    [anon_sym_SLASH] = ACTIONS(2025),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(2025),
    [anon_sym_LT_LT] = ACTIONS(2025),
    [anon_sym_GT_GT] = ACTIONS(2025),
    [anon_sym_GT_GT_GT] = ACTIONS(2025),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [1146] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(2015),
    [anon_sym_LT] = ACTIONS(2015),
    [anon_sym_EQ_EQ] = ACTIONS(2017),
    [anon_sym_GT_EQ] = ACTIONS(2017),
    [anon_sym_LT_EQ] = ACTIONS(2017),
    [anon_sym_BANG_EQ] = ACTIONS(2017),
    [anon_sym_AMP_AMP] = ACTIONS(2019),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(2023),
    [anon_sym_DASH] = ACTIONS(2023),
    [anon_sym_STAR] = ACTIONS(2025),
    [anon_sym_SLASH] = ACTIONS(2025),
    [anon_sym_AMP] = ACTIONS(2027),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(2025),
    [anon_sym_LT_LT] = ACTIONS(2025),
    [anon_sym_GT_GT] = ACTIONS(2025),
    [anon_sym_GT_GT_GT] = ACTIONS(2025),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [1147] = {
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(554),
    [anon_sym_DASH_EQ] = ACTIONS(554),
    [anon_sym_STAR_EQ] = ACTIONS(554),
    [anon_sym_SLASH_EQ] = ACTIONS(554),
    [anon_sym_AMP_EQ] = ACTIONS(554),
    [anon_sym_PIPE_EQ] = ACTIONS(554),
    [anon_sym_CARET_EQ] = ACTIONS(554),
    [anon_sym_PERCENT_EQ] = ACTIONS(554),
    [anon_sym_LT_LT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(2015),
    [anon_sym_LT] = ACTIONS(2015),
    [anon_sym_EQ_EQ] = ACTIONS(2017),
    [anon_sym_GT_EQ] = ACTIONS(2017),
    [anon_sym_LT_EQ] = ACTIONS(2017),
    [anon_sym_BANG_EQ] = ACTIONS(2017),
    [anon_sym_AMP_AMP] = ACTIONS(554),
    [anon_sym_PIPE_PIPE] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(2025),
    [anon_sym_SLASH] = ACTIONS(2025),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(2025),
    [anon_sym_LT_LT] = ACTIONS(2025),
    [anon_sym_GT_GT] = ACTIONS(2025),
    [anon_sym_GT_GT_GT] = ACTIONS(2025),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [1148] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_AMP_EQ] = ACTIONS(560),
    [anon_sym_PIPE_EQ] = ACTIONS(560),
    [anon_sym_CARET_EQ] = ACTIONS(560),
    [anon_sym_PERCENT_EQ] = ACTIONS(560),
    [anon_sym_LT_LT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(2315),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1149] = {
    [anon_sym_DOT] = ACTIONS(2317),
    [anon_sym_LBRACK] = ACTIONS(2317),
    [anon_sym_AT] = ACTIONS(2317),
    [anon_sym_COLON_COLON] = ACTIONS(2317),
    [sym_comment] = ACTIONS(54),
  },
  [1150] = {
    [anon_sym_LPAREN] = ACTIONS(2319),
    [anon_sym_DOT] = ACTIONS(2321),
    [anon_sym_LBRACK] = ACTIONS(2321),
    [anon_sym_COLON_COLON] = ACTIONS(2321),
    [sym_comment] = ACTIONS(54),
  },
  [1151] = {
    [sym_identifier] = ACTIONS(2323),
    [sym_comment] = ACTIONS(54),
  },
  [1152] = {
    [anon_sym_DOT] = ACTIONS(2325),
    [anon_sym_LBRACK] = ACTIONS(2325),
    [anon_sym_COLON_COLON] = ACTIONS(2325),
    [sym_comment] = ACTIONS(54),
  },
  [1153] = {
    [sym_identifier] = ACTIONS(2327),
    [sym_comment] = ACTIONS(54),
  },
  [1154] = {
    [anon_sym_DOT] = ACTIONS(2329),
    [anon_sym_LBRACK] = ACTIONS(2329),
    [anon_sym_COLON_COLON] = ACTIONS(2329),
    [sym_comment] = ACTIONS(54),
  },
  [1155] = {
    [anon_sym_RPAREN] = ACTIONS(2331),
    [sym_comment] = ACTIONS(54),
  },
  [1156] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1206),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2331),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1157] = {
    [anon_sym_super] = ACTIONS(1835),
    [sym_identifier] = ACTIONS(2333),
    [sym_comment] = ACTIONS(54),
  },
  [1158] = {
    [anon_sym_GT] = ACTIONS(2335),
    [anon_sym_COMMA] = ACTIONS(1611),
    [sym_comment] = ACTIONS(54),
  },
  [1159] = {
    [anon_sym_RPAREN] = ACTIONS(2337),
    [sym_comment] = ACTIONS(54),
  },
  [1160] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1209),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2337),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1161] = {
    [sym__semicolon] = ACTIONS(1851),
    [anon_sym_LT] = ACTIONS(1851),
    [anon_sym_LBRACE] = ACTIONS(1851),
    [anon_sym_RBRACE] = ACTIONS(1851),
    [anon_sym_AT] = ACTIONS(1851),
    [anon_sym_static] = ACTIONS(1853),
    [anon_sym_class] = ACTIONS(1853),
    [anon_sym_public] = ACTIONS(1853),
    [anon_sym_protected] = ACTIONS(1853),
    [anon_sym_private] = ACTIONS(1853),
    [anon_sym_abstract] = ACTIONS(1853),
    [anon_sym_final] = ACTIONS(1853),
    [anon_sym_strictfp] = ACTIONS(1853),
    [anon_sym_default] = ACTIONS(1853),
    [anon_sym_synchronized] = ACTIONS(1853),
    [anon_sym_native] = ACTIONS(1853),
    [anon_sym_void] = ACTIONS(1853),
    [anon_sym_interface] = ACTIONS(1853),
    [sym_identifier] = ACTIONS(1855),
    [sym_comment] = ACTIONS(54),
  },
  [1162] = {
    [sym__statement] = STATE(1211),
    [sym__literal] = STATE(776),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(777),
    [sym_assignment_expression] = STATE(25),
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
    [sym__declaration] = STATE(779),
    [sym_module_declaration] = STATE(780),
    [sym_package_declaration] = STATE(780),
    [sym_import_statement] = STATE(780),
    [sym_single_type_import_declaration] = STATE(781),
    [sym_type_import_on_declaraction] = STATE(781),
    [sym_single_static_import_declaration] = STATE(781),
    [sym_static_import_on_demand_declaration] = STATE(781),
    [sym_class_declaration] = STATE(780),
    [sym_normal_class_declaration] = STATE(194),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(780),
    [sym_annotation_type_declaration] = STATE(782),
    [sym_normal_interface_declaration] = STATE(782),
    [sym_method_header] = STATE(783),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(780),
    [aux_sym_class_or_interface_type_repeat1] = STATE(785),
    [aux_sym_normal_class_declaration_repeat1] = STATE(786),
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
    [anon_sym_LBRACE] = ACTIONS(2339),
    [anon_sym_AT] = ACTIONS(1563),
    [anon_sym_open] = ACTIONS(1565),
    [anon_sym_module] = ACTIONS(1567),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_package] = ACTIONS(1569),
    [anon_sym_import] = ACTIONS(1571),
    [anon_sym_class] = ACTIONS(1118),
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
    [anon_sym_interface] = ACTIONS(1573),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [1163] = {
    [anon_sym_if] = ACTIONS(2341),
    [anon_sym_RBRACE] = ACTIONS(2341),
    [anon_sym_AT] = ACTIONS(2341),
    [anon_sym_static] = ACTIONS(2341),
    [anon_sym_class] = ACTIONS(2341),
    [anon_sym_public] = ACTIONS(2341),
    [anon_sym_protected] = ACTIONS(2341),
    [anon_sym_private] = ACTIONS(2341),
    [anon_sym_abstract] = ACTIONS(2341),
    [anon_sym_final] = ACTIONS(2341),
    [anon_sym_strictfp] = ACTIONS(2341),
    [anon_sym_default] = ACTIONS(2341),
    [anon_sym_synchronized] = ACTIONS(2341),
    [anon_sym_native] = ACTIONS(2341),
    [sym_comment] = ACTIONS(54),
  },
  [1164] = {
    [sym__annotation] = STATE(363),
    [sym_normal_annotation] = STATE(367),
    [sym_marker_annotation] = STATE(367),
    [sym_single_element_annotation] = STATE(367),
    [sym_class_declaration] = STATE(368),
    [sym_normal_class_declaration] = STATE(369),
    [sym_modifier] = STATE(370),
    [sym_interface_declaration] = STATE(368),
    [sym_annotation_type_declaration] = STATE(371),
    [sym_annotation_type_member_declaration] = STATE(372),
    [sym_annotation_type_element_declaration] = STATE(368),
    [sym_normal_interface_declaration] = STATE(371),
    [sym_constant_declaration] = STATE(368),
    [sym_variable_declarator_list] = STATE(373),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(374),
    [aux_sym_annotation_type_body_repeat1] = STATE(1213),
    [anon_sym_RBRACE] = ACTIONS(2343),
    [anon_sym_AT] = ACTIONS(708),
    [anon_sym_static] = ACTIONS(710),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(710),
    [anon_sym_protected] = ACTIONS(710),
    [anon_sym_private] = ACTIONS(710),
    [anon_sym_abstract] = ACTIONS(710),
    [anon_sym_final] = ACTIONS(710),
    [anon_sym_strictfp] = ACTIONS(710),
    [anon_sym_default] = ACTIONS(710),
    [anon_sym_synchronized] = ACTIONS(710),
    [anon_sym_native] = ACTIONS(710),
    [anon_sym_interface] = ACTIONS(714),
    [sym_identifier] = ACTIONS(716),
    [sym_comment] = ACTIONS(54),
  },
  [1165] = {
    [anon_sym_if] = ACTIONS(718),
    [anon_sym_RBRACE] = ACTIONS(718),
    [anon_sym_elseif] = ACTIONS(718),
    [anon_sym_AT] = ACTIONS(718),
    [anon_sym_static] = ACTIONS(718),
    [anon_sym_class] = ACTIONS(718),
    [anon_sym_public] = ACTIONS(718),
    [anon_sym_protected] = ACTIONS(718),
    [anon_sym_private] = ACTIONS(718),
    [anon_sym_abstract] = ACTIONS(718),
    [anon_sym_final] = ACTIONS(718),
    [anon_sym_strictfp] = ACTIONS(718),
    [anon_sym_default] = ACTIONS(718),
    [anon_sym_synchronized] = ACTIONS(718),
    [anon_sym_native] = ACTIONS(718),
    [sym_comment] = ACTIONS(54),
  },
  [1166] = {
    [sym_module_directive] = STATE(253),
    [aux_sym_module_declaration_repeat1] = STATE(1215),
    [anon_sym_RBRACE] = ACTIONS(2345),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [1167] = {
    [anon_sym_if] = ACTIONS(746),
    [anon_sym_RBRACE] = ACTIONS(746),
    [anon_sym_elseif] = ACTIONS(746),
    [anon_sym_AT] = ACTIONS(746),
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
    [sym_comment] = ACTIONS(54),
  },
  [1168] = {
    [sym_module_directive] = STATE(393),
    [anon_sym_RBRACE] = ACTIONS(2345),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [1169] = {
    [anon_sym_if] = ACTIONS(760),
    [anon_sym_RBRACE] = ACTIONS(760),
    [anon_sym_elseif] = ACTIONS(760),
    [anon_sym_AT] = ACTIONS(760),
    [anon_sym_static] = ACTIONS(760),
    [anon_sym_class] = ACTIONS(760),
    [anon_sym_public] = ACTIONS(760),
    [anon_sym_protected] = ACTIONS(760),
    [anon_sym_private] = ACTIONS(760),
    [anon_sym_abstract] = ACTIONS(760),
    [anon_sym_final] = ACTIONS(760),
    [anon_sym_strictfp] = ACTIONS(760),
    [anon_sym_default] = ACTIONS(760),
    [anon_sym_synchronized] = ACTIONS(760),
    [anon_sym_native] = ACTIONS(760),
    [sym_comment] = ACTIONS(54),
  },
  [1170] = {
    [anon_sym_STAR] = ACTIONS(2347),
    [sym_identifier] = ACTIONS(2349),
    [sym_comment] = ACTIONS(54),
  },
  [1171] = {
    [sym__semicolon] = ACTIONS(2351),
    [sym_comment] = ACTIONS(54),
  },
  [1172] = {
    [anon_sym_if] = ACTIONS(840),
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_elseif] = ACTIONS(840),
    [anon_sym_AT] = ACTIONS(840),
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
    [sym_comment] = ACTIONS(54),
  },
  [1173] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(266),
    [sym_marker_annotation] = STATE(266),
    [sym_single_element_annotation] = STATE(266),
    [sym_class_declaration] = STATE(282),
    [sym_normal_class_declaration] = STATE(267),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(282),
    [sym_annotation_type_declaration] = STATE(272),
    [sym_normal_interface_declaration] = STATE(272),
    [sym_interface_member_declaration] = STATE(428),
    [sym_constant_declaration] = STATE(282),
    [sym_variable_declarator_list] = STATE(285),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(273),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(282),
    [aux_sym_normal_class_declaration_repeat1] = STATE(287),
    [sym__semicolon] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(2353),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(528),
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
    [anon_sym_interface] = ACTIONS(530),
    [sym_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(54),
  },
  [1174] = {
    [sym_interface_body] = STATE(1220),
    [anon_sym_LBRACE] = ACTIONS(2085),
    [sym_comment] = ACTIONS(54),
  },
  [1175] = {
    [anon_sym_if] = ACTIONS(862),
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_elseif] = ACTIONS(862),
    [anon_sym_AT] = ACTIONS(862),
    [anon_sym_static] = ACTIONS(862),
    [anon_sym_class] = ACTIONS(862),
    [anon_sym_public] = ACTIONS(862),
    [anon_sym_protected] = ACTIONS(862),
    [anon_sym_private] = ACTIONS(862),
    [anon_sym_abstract] = ACTIONS(862),
    [anon_sym_final] = ACTIONS(862),
    [anon_sym_strictfp] = ACTIONS(862),
    [anon_sym_default] = ACTIONS(862),
    [anon_sym_synchronized] = ACTIONS(862),
    [anon_sym_native] = ACTIONS(862),
    [sym_comment] = ACTIONS(54),
  },
  [1176] = {
    [anon_sym_if] = ACTIONS(886),
    [anon_sym_RBRACE] = ACTIONS(886),
    [anon_sym_elseif] = ACTIONS(886),
    [anon_sym_AT] = ACTIONS(886),
    [anon_sym_static] = ACTIONS(886),
    [anon_sym_class] = ACTIONS(886),
    [anon_sym_public] = ACTIONS(886),
    [anon_sym_protected] = ACTIONS(886),
    [anon_sym_private] = ACTIONS(886),
    [anon_sym_abstract] = ACTIONS(886),
    [anon_sym_final] = ACTIONS(886),
    [anon_sym_strictfp] = ACTIONS(886),
    [anon_sym_default] = ACTIONS(886),
    [anon_sym_synchronized] = ACTIONS(886),
    [anon_sym_native] = ACTIONS(886),
    [sym_comment] = ACTIONS(54),
  },
  [1177] = {
    [anon_sym_LBRACE] = ACTIONS(2355),
    [sym_comment] = ACTIONS(54),
  },
  [1178] = {
    [sym__semicolon] = ACTIONS(2357),
    [anon_sym_DOT] = ACTIONS(488),
    [sym_comment] = ACTIONS(54),
  },
  [1179] = {
    [sym_annotation_type_body] = STATE(1223),
    [anon_sym_LBRACE] = ACTIONS(2231),
    [sym_comment] = ACTIONS(54),
  },
  [1180] = {
    [sym_extends_interfaces] = STATE(1224),
    [sym_interface_body] = STATE(1220),
    [anon_sym_LBRACE] = ACTIONS(2085),
    [anon_sym_extends] = ACTIONS(336),
    [sym_comment] = ACTIONS(54),
  },
  [1181] = {
    [sym__semicolon] = ACTIONS(1905),
    [anon_sym_AMP_AMP] = ACTIONS(2119),
    [anon_sym_PIPE_PIPE] = ACTIONS(1905),
    [anon_sym_QMARK] = ACTIONS(1905),
    [sym_comment] = ACTIONS(54),
  },
  [1182] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_AMP_EQ] = ACTIONS(560),
    [anon_sym_PIPE_EQ] = ACTIONS(560),
    [anon_sym_CARET_EQ] = ACTIONS(560),
    [anon_sym_PERCENT_EQ] = ACTIONS(560),
    [anon_sym_LT_LT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_EQ_EQ] = ACTIONS(564),
    [anon_sym_GT_EQ] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(564),
    [anon_sym_BANG_EQ] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_GT_GT_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(2359),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1183] = {
    [sym__semicolon] = ACTIONS(1909),
    [anon_sym_AMP_AMP] = ACTIONS(1909),
    [anon_sym_PIPE_PIPE] = ACTIONS(1909),
    [anon_sym_PIPE] = ACTIONS(2121),
    [anon_sym_QMARK] = ACTIONS(1909),
    [sym_comment] = ACTIONS(54),
  },
  [1184] = {
    [sym__semicolon] = ACTIONS(1911),
    [anon_sym_AMP_AMP] = ACTIONS(1911),
    [anon_sym_PIPE_PIPE] = ACTIONS(1911),
    [anon_sym_PIPE] = ACTIONS(1913),
    [anon_sym_CARET] = ACTIONS(2123),
    [anon_sym_QMARK] = ACTIONS(1911),
    [sym_comment] = ACTIONS(54),
  },
  [1185] = {
    [sym__semicolon] = ACTIONS(1921),
    [anon_sym_LT] = ACTIONS(1919),
    [anon_sym_EQ_EQ] = ACTIONS(1921),
    [anon_sym_BANG_EQ] = ACTIONS(1921),
    [anon_sym_AMP_AMP] = ACTIONS(1921),
    [anon_sym_PIPE_PIPE] = ACTIONS(1921),
    [anon_sym_PIPE] = ACTIONS(1919),
    [anon_sym_CARET] = ACTIONS(1921),
    [anon_sym_LT_LT] = ACTIONS(2129),
    [anon_sym_GT_GT] = ACTIONS(2131),
    [anon_sym_GT_GT_GT] = ACTIONS(2129),
    [anon_sym_QMARK] = ACTIONS(1921),
    [sym_comment] = ACTIONS(54),
  },
  [1186] = {
    [sym__semicolon] = ACTIONS(1925),
    [anon_sym_LT] = ACTIONS(2125),
    [anon_sym_EQ_EQ] = ACTIONS(1923),
    [anon_sym_BANG_EQ] = ACTIONS(1923),
    [anon_sym_AMP_AMP] = ACTIONS(1925),
    [anon_sym_PIPE_PIPE] = ACTIONS(1925),
    [anon_sym_PIPE] = ACTIONS(1927),
    [anon_sym_CARET] = ACTIONS(1925),
    [anon_sym_QMARK] = ACTIONS(1925),
    [sym_comment] = ACTIONS(54),
  },
  [1187] = {
    [sym__semicolon] = ACTIONS(1931),
    [anon_sym_LT] = ACTIONS(1929),
    [anon_sym_EQ_EQ] = ACTIONS(1931),
    [anon_sym_BANG_EQ] = ACTIONS(1931),
    [anon_sym_AMP_AMP] = ACTIONS(1931),
    [anon_sym_PIPE_PIPE] = ACTIONS(1931),
    [anon_sym_PLUS] = ACTIONS(2133),
    [anon_sym_DASH] = ACTIONS(2133),
    [anon_sym_PIPE] = ACTIONS(1929),
    [anon_sym_CARET] = ACTIONS(1931),
    [anon_sym_LT_LT] = ACTIONS(1931),
    [anon_sym_GT_GT] = ACTIONS(1929),
    [anon_sym_GT_GT_GT] = ACTIONS(1931),
    [anon_sym_QMARK] = ACTIONS(1931),
    [sym_comment] = ACTIONS(54),
  },
  [1188] = {
    [sym__semicolon] = ACTIONS(1935),
    [anon_sym_LT] = ACTIONS(1933),
    [anon_sym_EQ_EQ] = ACTIONS(1935),
    [anon_sym_BANG_EQ] = ACTIONS(1935),
    [anon_sym_AMP_AMP] = ACTIONS(1935),
    [anon_sym_PIPE_PIPE] = ACTIONS(1935),
    [anon_sym_PLUS] = ACTIONS(1935),
    [anon_sym_DASH] = ACTIONS(1935),
    [anon_sym_STAR] = ACTIONS(2135),
    [anon_sym_SLASH] = ACTIONS(2137),
    [anon_sym_PIPE] = ACTIONS(1933),
    [anon_sym_CARET] = ACTIONS(1935),
    [anon_sym_PERCENT] = ACTIONS(2135),
    [anon_sym_LT_LT] = ACTIONS(1935),
    [anon_sym_GT_GT] = ACTIONS(1933),
    [anon_sym_GT_GT_GT] = ACTIONS(1935),
    [anon_sym_QMARK] = ACTIONS(1935),
    [sym_comment] = ACTIONS(54),
  },
  [1189] = {
    [anon_sym_RBRACE] = ACTIONS(1851),
    [anon_sym_AT] = ACTIONS(1851),
    [anon_sym_static] = ACTIONS(1853),
    [anon_sym_class] = ACTIONS(1853),
    [anon_sym_public] = ACTIONS(1853),
    [anon_sym_protected] = ACTIONS(1853),
    [anon_sym_private] = ACTIONS(1853),
    [anon_sym_abstract] = ACTIONS(1853),
    [anon_sym_final] = ACTIONS(1853),
    [anon_sym_strictfp] = ACTIONS(1853),
    [anon_sym_default] = ACTIONS(1853),
    [anon_sym_synchronized] = ACTIONS(1853),
    [anon_sym_native] = ACTIONS(1853),
    [anon_sym_interface] = ACTIONS(1853),
    [sym_identifier] = ACTIONS(1855),
    [sym_comment] = ACTIONS(54),
  },
  [1190] = {
    [anon_sym_RBRACE] = ACTIONS(2361),
    [anon_sym_AT] = ACTIONS(2361),
    [anon_sym_static] = ACTIONS(2363),
    [anon_sym_class] = ACTIONS(2363),
    [anon_sym_public] = ACTIONS(2363),
    [anon_sym_protected] = ACTIONS(2363),
    [anon_sym_private] = ACTIONS(2363),
    [anon_sym_abstract] = ACTIONS(2363),
    [anon_sym_final] = ACTIONS(2363),
    [anon_sym_strictfp] = ACTIONS(2363),
    [anon_sym_default] = ACTIONS(2363),
    [anon_sym_synchronized] = ACTIONS(2363),
    [anon_sym_native] = ACTIONS(2363),
    [anon_sym_interface] = ACTIONS(2363),
    [sym_identifier] = ACTIONS(2365),
    [sym_comment] = ACTIONS(54),
  },
  [1191] = {
    [anon_sym_EQ] = ACTIONS(1198),
    [anon_sym_PLUS_EQ] = ACTIONS(1196),
    [anon_sym_DASH_EQ] = ACTIONS(1196),
    [anon_sym_STAR_EQ] = ACTIONS(1196),
    [anon_sym_SLASH_EQ] = ACTIONS(1196),
    [anon_sym_AMP_EQ] = ACTIONS(1196),
    [anon_sym_PIPE_EQ] = ACTIONS(1196),
    [anon_sym_CARET_EQ] = ACTIONS(1196),
    [anon_sym_PERCENT_EQ] = ACTIONS(1196),
    [anon_sym_LT_LT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT] = ACTIONS(1649),
    [anon_sym_LT] = ACTIONS(1649),
    [anon_sym_EQ_EQ] = ACTIONS(1651),
    [anon_sym_GT_EQ] = ACTIONS(1651),
    [anon_sym_LT_EQ] = ACTIONS(1651),
    [anon_sym_BANG_EQ] = ACTIONS(1651),
    [anon_sym_AMP_AMP] = ACTIONS(1967),
    [anon_sym_PIPE_PIPE] = ACTIONS(1969),
    [anon_sym_PLUS] = ACTIONS(1971),
    [anon_sym_DASH] = ACTIONS(1971),
    [anon_sym_STAR] = ACTIONS(1973),
    [anon_sym_SLASH] = ACTIONS(1973),
    [anon_sym_AMP] = ACTIONS(1653),
    [anon_sym_PIPE] = ACTIONS(1975),
    [anon_sym_CARET] = ACTIONS(1975),
    [anon_sym_PERCENT] = ACTIONS(1973),
    [anon_sym_LT_LT] = ACTIONS(1973),
    [anon_sym_GT_GT] = ACTIONS(1973),
    [anon_sym_GT_GT_GT] = ACTIONS(1973),
    [anon_sym_RPAREN] = ACTIONS(1196),
    [anon_sym_COMMA] = ACTIONS(1196),
    [anon_sym_QMARK] = ACTIONS(1981),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1192] = {
    [sym__expression] = STATE(1226),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1193] = {
    [anon_sym_EQ] = ACTIONS(1645),
    [anon_sym_PLUS_EQ] = ACTIONS(1647),
    [anon_sym_DASH_EQ] = ACTIONS(1647),
    [anon_sym_STAR_EQ] = ACTIONS(1647),
    [anon_sym_SLASH_EQ] = ACTIONS(1647),
    [anon_sym_AMP_EQ] = ACTIONS(1647),
    [anon_sym_PIPE_EQ] = ACTIONS(1647),
    [anon_sym_CARET_EQ] = ACTIONS(1647),
    [anon_sym_PERCENT_EQ] = ACTIONS(1647),
    [anon_sym_LT_LT_EQ] = ACTIONS(1647),
    [anon_sym_GT_GT_EQ] = ACTIONS(1647),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1647),
    [anon_sym_GT] = ACTIONS(1649),
    [anon_sym_LT] = ACTIONS(1649),
    [anon_sym_EQ_EQ] = ACTIONS(1651),
    [anon_sym_GT_EQ] = ACTIONS(1651),
    [anon_sym_LT_EQ] = ACTIONS(1651),
    [anon_sym_BANG_EQ] = ACTIONS(1651),
    [anon_sym_AMP_AMP] = ACTIONS(1967),
    [anon_sym_PIPE_PIPE] = ACTIONS(1969),
    [anon_sym_PLUS] = ACTIONS(1971),
    [anon_sym_DASH] = ACTIONS(1971),
    [anon_sym_STAR] = ACTIONS(1973),
    [anon_sym_SLASH] = ACTIONS(1973),
    [anon_sym_AMP] = ACTIONS(1653),
    [anon_sym_PIPE] = ACTIONS(1975),
    [anon_sym_CARET] = ACTIONS(1975),
    [anon_sym_PERCENT] = ACTIONS(1973),
    [anon_sym_LT_LT] = ACTIONS(1973),
    [anon_sym_GT_GT] = ACTIONS(1973),
    [anon_sym_GT_GT_GT] = ACTIONS(1973),
    [anon_sym_RPAREN] = ACTIONS(2367),
    [anon_sym_COMMA] = ACTIONS(2367),
    [anon_sym_QMARK] = ACTIONS(1981),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1194] = {
    [anon_sym_LT] = ACTIONS(2369),
    [anon_sym_LPAREN] = ACTIONS(2371),
    [anon_sym_DOT] = ACTIONS(2371),
    [anon_sym_LT_GT] = ACTIONS(2371),
    [sym_comment] = ACTIONS(54),
  },
  [1195] = {
    [anon_sym_DOT] = ACTIONS(2373),
    [anon_sym_LBRACK] = ACTIONS(2373),
    [anon_sym_COLON_COLON] = ACTIONS(2373),
    [sym_comment] = ACTIONS(54),
  },
  [1196] = {
    [sym_class_body] = STATE(1227),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_DOT] = ACTIONS(2373),
    [anon_sym_LBRACK] = ACTIONS(2373),
    [anon_sym_COLON_COLON] = ACTIONS(2373),
    [sym_comment] = ACTIONS(54),
  },
  [1197] = {
    [anon_sym_COMMA] = ACTIONS(2375),
    [anon_sym_RBRACE] = ACTIONS(2375),
    [anon_sym_DOT] = ACTIONS(2375),
    [anon_sym_COLON_COLON] = ACTIONS(2375),
    [sym_comment] = ACTIONS(54),
  },
  [1198] = {
    [sym__expression] = STATE(1137),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_variable_initializer] = STATE(1229),
    [sym_array_initializer] = STATE(1139),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [anon_sym_LBRACE] = ACTIONS(2005),
    [anon_sym_RBRACE] = ACTIONS(2377),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1199] = {
    [anon_sym_COMMA] = ACTIONS(2379),
    [anon_sym_RBRACE] = ACTIONS(2377),
    [sym_comment] = ACTIONS(54),
  },
  [1200] = {
    [anon_sym_if] = ACTIONS(2381),
    [anon_sym_RBRACE] = ACTIONS(2381),
    [anon_sym_AT] = ACTIONS(2381),
    [anon_sym_static] = ACTIONS(2381),
    [anon_sym_class] = ACTIONS(2381),
    [anon_sym_public] = ACTIONS(2381),
    [anon_sym_protected] = ACTIONS(2381),
    [anon_sym_private] = ACTIONS(2381),
    [anon_sym_abstract] = ACTIONS(2381),
    [anon_sym_final] = ACTIONS(2381),
    [anon_sym_strictfp] = ACTIONS(2381),
    [anon_sym_default] = ACTIONS(2381),
    [anon_sym_synchronized] = ACTIONS(2381),
    [anon_sym_native] = ACTIONS(2381),
    [sym_comment] = ACTIONS(54),
  },
  [1201] = {
    [sym__expression] = STATE(1231),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1747),
    [anon_sym_TILDE] = ACTIONS(1747),
    [anon_sym_PLUS_PLUS] = ACTIONS(1749),
    [anon_sym_DASH_DASH] = ACTIONS(1749),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1202] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1233),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2383),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1203] = {
    [anon_sym_LPAREN] = ACTIONS(2385),
    [sym_comment] = ACTIONS(54),
  },
  [1204] = {
    [anon_sym_DOT] = ACTIONS(2387),
    [anon_sym_LBRACK] = ACTIONS(2387),
    [anon_sym_COLON_COLON] = ACTIONS(2387),
    [sym_comment] = ACTIONS(54),
  },
  [1205] = {
    [anon_sym_DOT] = ACTIONS(2389),
    [anon_sym_LBRACK] = ACTIONS(2389),
    [anon_sym_COLON_COLON] = ACTIONS(2389),
    [sym_comment] = ACTIONS(54),
  },
  [1206] = {
    [anon_sym_RPAREN] = ACTIONS(2383),
    [sym_comment] = ACTIONS(54),
  },
  [1207] = {
    [anon_sym_super] = ACTIONS(2099),
    [sym_identifier] = ACTIONS(2391),
    [sym_comment] = ACTIONS(54),
  },
  [1208] = {
    [sym__semicolon] = ACTIONS(2393),
    [sym_comment] = ACTIONS(54),
  },
  [1209] = {
    [anon_sym_RPAREN] = ACTIONS(2395),
    [sym_comment] = ACTIONS(54),
  },
  [1210] = {
    [sym__statement] = STATE(1237),
    [sym__literal] = STATE(23),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(24),
    [sym_assignment_expression] = STATE(25),
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
  [1211] = {
    [anon_sym_if] = ACTIONS(2397),
    [anon_sym_RBRACE] = ACTIONS(2397),
    [anon_sym_elseif] = ACTIONS(2397),
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
    [anon_sym_synchronized] = ACTIONS(2397),
    [anon_sym_native] = ACTIONS(2397),
    [sym_comment] = ACTIONS(54),
  },
  [1212] = {
    [anon_sym_if] = ACTIONS(988),
    [anon_sym_RBRACE] = ACTIONS(988),
    [anon_sym_elseif] = ACTIONS(988),
    [anon_sym_AT] = ACTIONS(988),
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
    [sym_comment] = ACTIONS(54),
  },
  [1213] = {
    [sym__annotation] = STATE(363),
    [sym_normal_annotation] = STATE(367),
    [sym_marker_annotation] = STATE(367),
    [sym_single_element_annotation] = STATE(367),
    [sym_class_declaration] = STATE(368),
    [sym_normal_class_declaration] = STATE(369),
    [sym_modifier] = STATE(370),
    [sym_interface_declaration] = STATE(368),
    [sym_annotation_type_declaration] = STATE(371),
    [sym_annotation_type_member_declaration] = STATE(520),
    [sym_annotation_type_element_declaration] = STATE(368),
    [sym_normal_interface_declaration] = STATE(371),
    [sym_constant_declaration] = STATE(368),
    [sym_variable_declarator_list] = STATE(373),
    [sym_variable_declarator] = STATE(286),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(374),
    [anon_sym_RBRACE] = ACTIONS(2399),
    [anon_sym_AT] = ACTIONS(708),
    [anon_sym_static] = ACTIONS(710),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(710),
    [anon_sym_protected] = ACTIONS(710),
    [anon_sym_private] = ACTIONS(710),
    [anon_sym_abstract] = ACTIONS(710),
    [anon_sym_final] = ACTIONS(710),
    [anon_sym_strictfp] = ACTIONS(710),
    [anon_sym_default] = ACTIONS(710),
    [anon_sym_synchronized] = ACTIONS(710),
    [anon_sym_native] = ACTIONS(710),
    [anon_sym_interface] = ACTIONS(714),
    [sym_identifier] = ACTIONS(716),
    [sym_comment] = ACTIONS(54),
  },
  [1214] = {
    [anon_sym_if] = ACTIONS(1044),
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_elseif] = ACTIONS(1044),
    [anon_sym_AT] = ACTIONS(1044),
    [anon_sym_static] = ACTIONS(1044),
    [anon_sym_class] = ACTIONS(1044),
    [anon_sym_public] = ACTIONS(1044),
    [anon_sym_protected] = ACTIONS(1044),
    [anon_sym_private] = ACTIONS(1044),
    [anon_sym_abstract] = ACTIONS(1044),
    [anon_sym_final] = ACTIONS(1044),
    [anon_sym_strictfp] = ACTIONS(1044),
    [anon_sym_default] = ACTIONS(1044),
    [anon_sym_synchronized] = ACTIONS(1044),
    [anon_sym_native] = ACTIONS(1044),
    [sym_comment] = ACTIONS(54),
  },
  [1215] = {
    [sym_module_directive] = STATE(393),
    [anon_sym_RBRACE] = ACTIONS(2401),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [1216] = {
    [sym__semicolon] = ACTIONS(2403),
    [sym_comment] = ACTIONS(54),
  },
  [1217] = {
    [sym__semicolon] = ACTIONS(2405),
    [anon_sym_DOT] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [1218] = {
    [anon_sym_if] = ACTIONS(1084),
    [anon_sym_RBRACE] = ACTIONS(1084),
    [anon_sym_elseif] = ACTIONS(1084),
    [anon_sym_AT] = ACTIONS(1084),
    [anon_sym_static] = ACTIONS(1084),
    [anon_sym_class] = ACTIONS(1084),
    [anon_sym_public] = ACTIONS(1084),
    [anon_sym_protected] = ACTIONS(1084),
    [anon_sym_private] = ACTIONS(1084),
    [anon_sym_abstract] = ACTIONS(1084),
    [anon_sym_final] = ACTIONS(1084),
    [anon_sym_strictfp] = ACTIONS(1084),
    [anon_sym_default] = ACTIONS(1084),
    [anon_sym_synchronized] = ACTIONS(1084),
    [anon_sym_native] = ACTIONS(1084),
    [sym_comment] = ACTIONS(54),
  },
  [1219] = {
    [anon_sym_if] = ACTIONS(1176),
    [anon_sym_RBRACE] = ACTIONS(1176),
    [anon_sym_elseif] = ACTIONS(1176),
    [anon_sym_AT] = ACTIONS(1176),
    [anon_sym_static] = ACTIONS(1176),
    [anon_sym_class] = ACTIONS(1176),
    [anon_sym_public] = ACTIONS(1176),
    [anon_sym_protected] = ACTIONS(1176),
    [anon_sym_private] = ACTIONS(1176),
    [anon_sym_abstract] = ACTIONS(1176),
    [anon_sym_final] = ACTIONS(1176),
    [anon_sym_strictfp] = ACTIONS(1176),
    [anon_sym_default] = ACTIONS(1176),
    [anon_sym_synchronized] = ACTIONS(1176),
    [anon_sym_native] = ACTIONS(1176),
    [sym_comment] = ACTIONS(54),
  },
  [1220] = {
    [anon_sym_if] = ACTIONS(1188),
    [anon_sym_RBRACE] = ACTIONS(1188),
    [anon_sym_elseif] = ACTIONS(1188),
    [anon_sym_AT] = ACTIONS(1188),
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
    [sym_comment] = ACTIONS(54),
  },
  [1221] = {
    [sym_module_directive] = STATE(253),
    [aux_sym_module_declaration_repeat1] = STATE(1242),
    [anon_sym_RBRACE] = ACTIONS(2401),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [1222] = {
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
  [1223] = {
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
  [1224] = {
    [sym_interface_body] = STATE(1243),
    [anon_sym_LBRACE] = ACTIONS(2085),
    [sym_comment] = ACTIONS(54),
  },
  [1225] = {
    [sym_lambda_expression] = STATE(1121),
    [sym__lambda_parameters] = STATE(26),
    [sym_unary_expression] = STATE(524),
    [sym_conditional_expression] = STATE(1121),
    [sym_conditional_or_expression] = STATE(976),
    [sym_conditional_and_expression] = STATE(977),
    [sym_inclusive_or_expression] = STATE(978),
    [sym_exclusive_or_expression] = STATE(979),
    [sym_and_expression] = STATE(530),
    [sym_relational_expression] = STATE(980),
    [sym_equality_expression] = STATE(981),
    [sym_shift_expression] = STATE(982),
    [sym_additive_expression] = STATE(983),
    [sym_multiplicative_expression] = STATE(984),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1885),
    [anon_sym_TILDE] = ACTIONS(1885),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1226] = {
    [anon_sym_EQ] = ACTIONS(1198),
    [anon_sym_PLUS_EQ] = ACTIONS(1196),
    [anon_sym_DASH_EQ] = ACTIONS(1196),
    [anon_sym_STAR_EQ] = ACTIONS(1196),
    [anon_sym_SLASH_EQ] = ACTIONS(1196),
    [anon_sym_AMP_EQ] = ACTIONS(1196),
    [anon_sym_PIPE_EQ] = ACTIONS(1196),
    [anon_sym_CARET_EQ] = ACTIONS(1196),
    [anon_sym_PERCENT_EQ] = ACTIONS(1196),
    [anon_sym_LT_LT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT] = ACTIONS(1895),
    [anon_sym_LT] = ACTIONS(1895),
    [anon_sym_EQ_EQ] = ACTIONS(1897),
    [anon_sym_GT_EQ] = ACTIONS(1897),
    [anon_sym_LT_EQ] = ACTIONS(1897),
    [anon_sym_BANG_EQ] = ACTIONS(1897),
    [anon_sym_AMP_AMP] = ACTIONS(2259),
    [anon_sym_PIPE_PIPE] = ACTIONS(2261),
    [anon_sym_PLUS] = ACTIONS(2263),
    [anon_sym_DASH] = ACTIONS(2263),
    [anon_sym_STAR] = ACTIONS(2265),
    [anon_sym_SLASH] = ACTIONS(2265),
    [anon_sym_AMP] = ACTIONS(1899),
    [anon_sym_PIPE] = ACTIONS(2267),
    [anon_sym_CARET] = ACTIONS(2267),
    [anon_sym_PERCENT] = ACTIONS(2265),
    [anon_sym_LT_LT] = ACTIONS(2265),
    [anon_sym_GT_GT] = ACTIONS(2265),
    [anon_sym_GT_GT_GT] = ACTIONS(2265),
    [anon_sym_COMMA] = ACTIONS(1196),
    [anon_sym_QMARK] = ACTIONS(2269),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(1196),
    [sym_comment] = ACTIONS(54),
  },
  [1227] = {
    [anon_sym_DOT] = ACTIONS(2407),
    [anon_sym_LBRACK] = ACTIONS(2407),
    [anon_sym_COLON_COLON] = ACTIONS(2407),
    [sym_comment] = ACTIONS(54),
  },
  [1228] = {
    [anon_sym_COMMA] = ACTIONS(2409),
    [anon_sym_RBRACE] = ACTIONS(2409),
    [anon_sym_DOT] = ACTIONS(2409),
    [anon_sym_COLON_COLON] = ACTIONS(2409),
    [sym_comment] = ACTIONS(54),
  },
  [1229] = {
    [anon_sym_COMMA] = ACTIONS(2411),
    [anon_sym_RBRACE] = ACTIONS(2411),
    [sym_comment] = ACTIONS(54),
  },
  [1230] = {
    [sym__expression] = STATE(1137),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_variable_initializer] = STATE(1245),
    [sym_array_initializer] = STATE(1139),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1657),
    [anon_sym_TILDE] = ACTIONS(1657),
    [anon_sym_PLUS_PLUS] = ACTIONS(1659),
    [anon_sym_DASH_DASH] = ACTIONS(1659),
    [anon_sym_LBRACE] = ACTIONS(2005),
    [anon_sym_RBRACE] = ACTIONS(2413),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1231] = {
    [anon_sym_EQ] = ACTIONS(1198),
    [anon_sym_PLUS_EQ] = ACTIONS(1196),
    [anon_sym_DASH_EQ] = ACTIONS(1196),
    [anon_sym_STAR_EQ] = ACTIONS(1196),
    [anon_sym_SLASH_EQ] = ACTIONS(1196),
    [anon_sym_AMP_EQ] = ACTIONS(1196),
    [anon_sym_PIPE_EQ] = ACTIONS(1196),
    [anon_sym_CARET_EQ] = ACTIONS(1196),
    [anon_sym_PERCENT_EQ] = ACTIONS(1196),
    [anon_sym_LT_LT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1196),
    [anon_sym_GT] = ACTIONS(2015),
    [anon_sym_LT] = ACTIONS(2015),
    [anon_sym_EQ_EQ] = ACTIONS(2017),
    [anon_sym_GT_EQ] = ACTIONS(2017),
    [anon_sym_LT_EQ] = ACTIONS(2017),
    [anon_sym_BANG_EQ] = ACTIONS(2017),
    [anon_sym_AMP_AMP] = ACTIONS(2019),
    [anon_sym_PIPE_PIPE] = ACTIONS(2021),
    [anon_sym_PLUS] = ACTIONS(2023),
    [anon_sym_DASH] = ACTIONS(2023),
    [anon_sym_STAR] = ACTIONS(2025),
    [anon_sym_SLASH] = ACTIONS(2025),
    [anon_sym_AMP] = ACTIONS(2027),
    [anon_sym_PIPE] = ACTIONS(2029),
    [anon_sym_CARET] = ACTIONS(2029),
    [anon_sym_PERCENT] = ACTIONS(2025),
    [anon_sym_LT_LT] = ACTIONS(2025),
    [anon_sym_GT_GT] = ACTIONS(2025),
    [anon_sym_GT_GT_GT] = ACTIONS(2025),
    [anon_sym_QMARK] = ACTIONS(2031),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(1196),
    [sym_comment] = ACTIONS(54),
  },
  [1232] = {
    [anon_sym_DOT] = ACTIONS(2415),
    [anon_sym_LBRACK] = ACTIONS(2415),
    [anon_sym_COLON_COLON] = ACTIONS(2415),
    [sym_comment] = ACTIONS(54),
  },
  [1233] = {
    [anon_sym_RPAREN] = ACTIONS(2417),
    [sym_comment] = ACTIONS(54),
  },
  [1234] = {
    [sym__expression] = STATE(887),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1247),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2417),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1354),
    [anon_sym_DASH_DASH] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [1235] = {
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
    [anon_sym_synchronized] = ACTIONS(2419),
    [anon_sym_native] = ACTIONS(2419),
    [sym_comment] = ACTIONS(54),
  },
  [1236] = {
    [sym__semicolon] = ACTIONS(2421),
    [sym_comment] = ACTIONS(54),
  },
  [1237] = {
    [anon_sym_RBRACE] = ACTIONS(2423),
    [sym_comment] = ACTIONS(54),
  },
  [1238] = {
    [anon_sym_if] = ACTIONS(1340),
    [anon_sym_RBRACE] = ACTIONS(1340),
    [anon_sym_elseif] = ACTIONS(1340),
    [anon_sym_AT] = ACTIONS(1340),
    [anon_sym_static] = ACTIONS(1340),
    [anon_sym_class] = ACTIONS(1340),
    [anon_sym_public] = ACTIONS(1340),
    [anon_sym_protected] = ACTIONS(1340),
    [anon_sym_private] = ACTIONS(1340),
    [anon_sym_abstract] = ACTIONS(1340),
    [anon_sym_final] = ACTIONS(1340),
    [anon_sym_strictfp] = ACTIONS(1340),
    [anon_sym_default] = ACTIONS(1340),
    [anon_sym_synchronized] = ACTIONS(1340),
    [anon_sym_native] = ACTIONS(1340),
    [sym_comment] = ACTIONS(54),
  },
  [1239] = {
    [anon_sym_if] = ACTIONS(1428),
    [anon_sym_RBRACE] = ACTIONS(1428),
    [anon_sym_elseif] = ACTIONS(1428),
    [anon_sym_AT] = ACTIONS(1428),
    [anon_sym_static] = ACTIONS(1428),
    [anon_sym_class] = ACTIONS(1428),
    [anon_sym_public] = ACTIONS(1428),
    [anon_sym_protected] = ACTIONS(1428),
    [anon_sym_private] = ACTIONS(1428),
    [anon_sym_abstract] = ACTIONS(1428),
    [anon_sym_final] = ACTIONS(1428),
    [anon_sym_strictfp] = ACTIONS(1428),
    [anon_sym_default] = ACTIONS(1428),
    [anon_sym_synchronized] = ACTIONS(1428),
    [anon_sym_native] = ACTIONS(1428),
    [sym_comment] = ACTIONS(54),
  },
  [1240] = {
    [anon_sym_if] = ACTIONS(1450),
    [anon_sym_RBRACE] = ACTIONS(1450),
    [anon_sym_elseif] = ACTIONS(1450),
    [anon_sym_AT] = ACTIONS(1450),
    [anon_sym_static] = ACTIONS(1450),
    [anon_sym_class] = ACTIONS(1450),
    [anon_sym_public] = ACTIONS(1450),
    [anon_sym_protected] = ACTIONS(1450),
    [anon_sym_private] = ACTIONS(1450),
    [anon_sym_abstract] = ACTIONS(1450),
    [anon_sym_final] = ACTIONS(1450),
    [anon_sym_strictfp] = ACTIONS(1450),
    [anon_sym_default] = ACTIONS(1450),
    [anon_sym_synchronized] = ACTIONS(1450),
    [anon_sym_native] = ACTIONS(1450),
    [sym_comment] = ACTIONS(54),
  },
  [1241] = {
    [anon_sym_if] = ACTIONS(1456),
    [anon_sym_RBRACE] = ACTIONS(1456),
    [anon_sym_elseif] = ACTIONS(1456),
    [anon_sym_AT] = ACTIONS(1456),
    [anon_sym_static] = ACTIONS(1456),
    [anon_sym_class] = ACTIONS(1456),
    [anon_sym_public] = ACTIONS(1456),
    [anon_sym_protected] = ACTIONS(1456),
    [anon_sym_private] = ACTIONS(1456),
    [anon_sym_abstract] = ACTIONS(1456),
    [anon_sym_final] = ACTIONS(1456),
    [anon_sym_strictfp] = ACTIONS(1456),
    [anon_sym_default] = ACTIONS(1456),
    [anon_sym_synchronized] = ACTIONS(1456),
    [anon_sym_native] = ACTIONS(1456),
    [sym_comment] = ACTIONS(54),
  },
  [1242] = {
    [sym_module_directive] = STATE(393),
    [anon_sym_RBRACE] = ACTIONS(2425),
    [anon_sym_requires] = ACTIONS(492),
    [anon_sym_exports] = ACTIONS(494),
    [anon_sym_opens] = ACTIONS(494),
    [anon_sym_uses] = ACTIONS(496),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [1243] = {
    [anon_sym_if] = ACTIONS(1597),
    [anon_sym_RBRACE] = ACTIONS(1597),
    [anon_sym_elseif] = ACTIONS(1597),
    [anon_sym_AT] = ACTIONS(1597),
    [anon_sym_static] = ACTIONS(1597),
    [anon_sym_class] = ACTIONS(1597),
    [anon_sym_public] = ACTIONS(1597),
    [anon_sym_protected] = ACTIONS(1597),
    [anon_sym_private] = ACTIONS(1597),
    [anon_sym_abstract] = ACTIONS(1597),
    [anon_sym_final] = ACTIONS(1597),
    [anon_sym_strictfp] = ACTIONS(1597),
    [anon_sym_default] = ACTIONS(1597),
    [anon_sym_synchronized] = ACTIONS(1597),
    [anon_sym_native] = ACTIONS(1597),
    [sym_comment] = ACTIONS(54),
  },
  [1244] = {
    [anon_sym_COMMA] = ACTIONS(2427),
    [anon_sym_RBRACE] = ACTIONS(2427),
    [anon_sym_DOT] = ACTIONS(2427),
    [anon_sym_COLON_COLON] = ACTIONS(2427),
    [sym_comment] = ACTIONS(54),
  },
  [1245] = {
    [anon_sym_COMMA] = ACTIONS(2429),
    [anon_sym_RBRACE] = ACTIONS(2429),
    [sym_comment] = ACTIONS(54),
  },
  [1246] = {
    [anon_sym_DOT] = ACTIONS(2431),
    [anon_sym_LBRACK] = ACTIONS(2431),
    [anon_sym_COLON_COLON] = ACTIONS(2431),
    [sym_comment] = ACTIONS(54),
  },
  [1247] = {
    [anon_sym_RPAREN] = ACTIONS(2433),
    [sym_comment] = ACTIONS(54),
  },
  [1248] = {
    [anon_sym_if] = ACTIONS(2435),
    [anon_sym_RBRACE] = ACTIONS(2435),
    [anon_sym_AT] = ACTIONS(2435),
    [anon_sym_static] = ACTIONS(2435),
    [anon_sym_class] = ACTIONS(2435),
    [anon_sym_public] = ACTIONS(2435),
    [anon_sym_protected] = ACTIONS(2435),
    [anon_sym_private] = ACTIONS(2435),
    [anon_sym_abstract] = ACTIONS(2435),
    [anon_sym_final] = ACTIONS(2435),
    [anon_sym_strictfp] = ACTIONS(2435),
    [anon_sym_default] = ACTIONS(2435),
    [anon_sym_synchronized] = ACTIONS(2435),
    [anon_sym_native] = ACTIONS(2435),
    [sym_comment] = ACTIONS(54),
  },
  [1249] = {
    [anon_sym_if] = ACTIONS(2437),
    [anon_sym_RBRACE] = ACTIONS(2437),
    [anon_sym_elseif] = ACTIONS(2437),
    [anon_sym_AT] = ACTIONS(2437),
    [anon_sym_static] = ACTIONS(2437),
    [anon_sym_class] = ACTIONS(2437),
    [anon_sym_public] = ACTIONS(2437),
    [anon_sym_protected] = ACTIONS(2437),
    [anon_sym_private] = ACTIONS(2437),
    [anon_sym_abstract] = ACTIONS(2437),
    [anon_sym_final] = ACTIONS(2437),
    [anon_sym_strictfp] = ACTIONS(2437),
    [anon_sym_default] = ACTIONS(2437),
    [anon_sym_synchronized] = ACTIONS(2437),
    [anon_sym_native] = ACTIONS(2437),
    [sym_comment] = ACTIONS(54),
  },
  [1250] = {
    [anon_sym_if] = ACTIONS(1845),
    [anon_sym_RBRACE] = ACTIONS(1845),
    [anon_sym_elseif] = ACTIONS(1845),
    [anon_sym_AT] = ACTIONS(1845),
    [anon_sym_static] = ACTIONS(1845),
    [anon_sym_class] = ACTIONS(1845),
    [anon_sym_public] = ACTIONS(1845),
    [anon_sym_protected] = ACTIONS(1845),
    [anon_sym_private] = ACTIONS(1845),
    [anon_sym_abstract] = ACTIONS(1845),
    [anon_sym_final] = ACTIONS(1845),
    [anon_sym_strictfp] = ACTIONS(1845),
    [anon_sym_default] = ACTIONS(1845),
    [anon_sym_synchronized] = ACTIONS(1845),
    [anon_sym_native] = ACTIONS(1845),
    [sym_comment] = ACTIONS(54),
  },
  [1251] = {
    [anon_sym_DOT] = ACTIONS(2439),
    [anon_sym_LBRACK] = ACTIONS(2439),
    [anon_sym_COLON_COLON] = ACTIONS(2439),
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
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_modifier, 1, .fragile = true),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_result, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__lambda_parameters, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
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
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_statement, 1),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 1),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
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
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__annotation, 1),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 1),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inferred_formal_parameter_list, 1),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 1),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 1),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [269] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 1),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 1),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 1),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_body, 1),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 2),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 2),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 2),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_marker_annotation, 2),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 2),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 2),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inferred_formal_parameter_list, 2),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 2),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 2),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims, 1),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__lambda_parameters, 3),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 2),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [466] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 2),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(240),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 3),
  [504] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_type_import_declaration, 3),
  [514] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(265),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 3),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 3),
  [548] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_assignment_expression, 3),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_expression, 3),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_lambda_expression, 3),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 3),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [616] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statement, 1),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 1),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 3),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 3),
  [644] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 3),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [648] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(333),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 1, .fragile = true),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 2),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 3),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 2),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 2),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(347),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 3),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 2),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 3),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [716] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(366),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 4),
  [722] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 3),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 4),
  [750] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [754] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(385),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 1),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 4),
  [764] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_member_declaration, 1),
  [776] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 2),
  [784] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
  [788] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(401),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [794] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(406),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 1),
  [800] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body_declaration, 1),
  [806] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_superclass, 2),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 1),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_super_interfaces, 2),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 4),
  [832] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_member_declaration, 1),
  [838] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 2),
  [844] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [850] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 1),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extends_interfaces, 2),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 4),
  [866] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_body, 2),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_lambda_body, 2),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 4),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration, 2),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [890] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 1),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 2),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration_statement, 2),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(455),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 3),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 1, .fragile = true),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(462),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_throws, 2),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 1),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 4),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(475),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [938] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(211),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(486),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 2),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 3),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 3),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 3),
  [956] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [962] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 3),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 3),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 4),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
  [974] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(497),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 4),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
  [982] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(502),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 4),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 2),
  [992] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(506),
  [996] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(507),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(509),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1008] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1014] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(513),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(514),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
  [1024] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(516),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 5),
  [1048] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_requires_modifier, 1),
  [1056] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_requires_modifier, 1),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 1),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [1062] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(541),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(546),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_import_on_declaraction, 5),
  [1088] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(553),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(556),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(557),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 2),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(568),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(569),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(571),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(572),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(573),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(574),
  [1128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(575),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 2),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 2),
  [1134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 2),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(596),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 3),
  [1146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(600),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 2),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 5),
  [1162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 2),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 2),
  [1168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 2),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 2),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(603),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(604),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 3),
  [1180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 5),
  [1192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(605),
  [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 5),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(607),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(608),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
  [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
  [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(611),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(612),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(609),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(610),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(614),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(615),
  [1230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(616),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(619),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 2),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 4),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(628),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 2),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(631),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 1, .fragile = true),
  [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type, 2),
  [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(632),
  [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 1),
  [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 2),
  [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(633),
  [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [1260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 5),
  [1262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 5),
  [1268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_element_annotation, 5),
  [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 5),
  [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1, .fragile = true),
  [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integral_type, 1),
  [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_type, 1),
  [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(638),
  [1282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(640),
  [1284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(641),
  [1286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_argument, 1),
  [1288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 1),
  [1290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [1292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(644),
  [1294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(343),
  [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true),
  [1298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(647),
  [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 3),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [1304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 4),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(651),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(652),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(653),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(654),
  [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(655),
  [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(656),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(657),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(658),
  [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(663),
  [1328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(667),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(668),
  [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(669),
  [1334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(670),
  [1336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(671),
  [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(672),
  [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 3),
  [1344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(673),
  [1354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(674),
  [1356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(676),
  [1358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(677),
  [1360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(678),
  [1362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [1364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [1366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [1368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(689),
  [1372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [1374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(690),
  [1376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(691),
  [1378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [1380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(692),
  [1384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(693),
  [1390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [1394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(694),
  [1396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [1398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [1400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(695),
  [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [1406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [1408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(696),
  [1410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(696),
  [1412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [1414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [1416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(697),
  [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [1420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [1422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(698),
  [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(698),
  [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 6),
  [1432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [1434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 3),
  [1436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(700),
  [1438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [1440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [1442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(701),
  [1444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [1446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(703),
  [1448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(706),
  [1450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_static_import_declaration, 6),
  [1460] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameters, 3),
  [1464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(708),
  [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(710),
  [1470] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(711),
  [1472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(714),
  [1474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(715),
  [1476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(720),
  [1478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 3),
  [1480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 2),
  [1482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 2),
  [1484] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 2),
  [1486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(725),
  [1488] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1, .fragile = true), SHIFT(726),
  [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(728),
  [1493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(730),
  [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 1),
  [1497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(731),
  [1499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(732),
  [1501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(733),
  [1503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_name, 1),
  [1505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(739),
  [1507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(740),
  [1509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(741),
  [1511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(746),
  [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(726),
  [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(747),
  [1517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(749),
  [1519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(750),
  [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(751),
  [1523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary, 1),
  [1525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 1),
  [1527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(752),
  [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(753),
  [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [1533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 3),
  [1535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [1537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(754),
  [1539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [1541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 6),
  [1545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 2),
  [1549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 3),
  [1553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_then_statement, 4, .fragile = true),
  [1557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(767),
  [1559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(768),
  [1561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(769),
  [1563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(770),
  [1565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(771),
  [1567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(772),
  [1569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(773),
  [1571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(774),
  [1573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(775),
  [1575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(788),
  [1577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(789),
  [1579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(790),
  [1581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 5),
  [1583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(794),
  [1585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true),
  [1587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(797),
  [1589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 3),
  [1591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2, .fragile = true),
  [1593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 2),
  [1595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(800),
  [1597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 6),
  [1601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(802),
  [1605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(803),
  [1607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [1609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(805),
  [1611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(806),
  [1613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 2),
  [1615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 2),
  [1617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [1619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(808),
  [1621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 3),
  [1623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 4),
  [1625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(809),
  [1627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(811),
  [1629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(812),
  [1631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(815),
  [1633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(816),
  [1635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(821),
  [1637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(825),
  [1639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(826),
  [1641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(829),
  [1643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(832),
  [1645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(833),
  [1647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(833),
  [1649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(834),
  [1651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(834),
  [1653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(835),
  [1655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(840),
  [1657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(841),
  [1659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(842),
  [1661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [1663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(844),
  [1665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(846),
  [1667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(847),
  [1669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(848),
  [1671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(849),
  [1673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(850),
  [1675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(851),
  [1677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(852),
  [1679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(853),
  [1681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(853),
  [1683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(854),
  [1685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(855),
  [1687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(855),
  [1689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [1691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [1693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [1695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [1697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(866),
  [1699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(869),
  [1701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(871),
  [1703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(873),
  [1705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(874),
  [1707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(875),
  [1709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(878),
  [1711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(880),
  [1713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(881),
  [1715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 1),
  [1717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(882),
  [1719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(883),
  [1721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(884),
  [1723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(885),
  [1725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(886),
  [1727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(889),
  [1729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(890),
  [1731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [1733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 1),
  [1735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(892),
  [1737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(893),
  [1739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(897),
  [1741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(902),
  [1743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(903),
  [1745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(904),
  [1747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(905),
  [1749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(906),
  [1751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(890),
  [1753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_type, 2),
  [1755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 2),
  [1757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 1, .fragile = true),
  [1759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(910),
  [1761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(914),
  [1763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(881),
  [1765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(880),
  [1767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(915),
  [1769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(916),
  [1771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 3),
  [1775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(918),
  [1779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(919),
  [1781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(920),
  [1783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(921),
  [1785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(922),
  [1787] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(926),
  [1789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(927),
  [1791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 4),
  [1795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 3),
  [1799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 3),
  [1801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_statement, 5),
  [1803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(932),
  [1805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(933),
  [1807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(935),
  [1809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(936),
  [1811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(938),
  [1813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(939),
  [1815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(941),
  [1817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(942),
  [1819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 1),
  [1821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(943),
  [1823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(944),
  [1825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(947),
  [1827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(948),
  [1829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(949),
  [1831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(950),
  [1833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(952),
  [1835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 3),
  [1837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(955),
  [1839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [1841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(957),
  [1843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 4),
  [1845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [1849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 7),
  [1855] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(958),
  [1859] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(959),
  [1861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(962),
  [1863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [1865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [1867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [1869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(965),
  [1871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(967),
  [1873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(968),
  [1875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(969),
  [1877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(972),
  [1879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1883] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(974),
  [1887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(985),
  [1889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 3),
  [1891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(997),
  [1893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(997),
  [1895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(998),
  [1897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(998),
  [1899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(999),
  [1901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1004),
  [1903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1006),
  [1905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [1907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1015),
  [1909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [1911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [1913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [1915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [1917] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [1919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [1921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [1923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [1925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [1927] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [1929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [1931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [1933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [1935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [1937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [1939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [1941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [1943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1016),
  [1945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
  [1947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1018),
  [1949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1019),
  [1951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 3),
  [1953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 3),
  [1955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1021),
  [1957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 2),
  [1959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1022),
  [1961] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(1023),
  [1963] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1026),
  [1965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1027),
  [1967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(835),
  [1969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(836),
  [1971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(837),
  [1973] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(838),
  [1975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(836),
  [1977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 1),
  [1979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1028),
  [1981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(839),
  [1983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1030),
  [1985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 3),
  [1987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 3),
  [1989] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1031),
  [1991] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1032),
  [1993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments_or_diamond, 1),
  [1995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 2),
  [1997] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1034),
  [1999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1036),
  [2001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1037),
  [2003] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1038),
  [2005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1039),
  [2007] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 3),
  [2009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1041),
  [2011] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1046),
  [2013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1046),
  [2015] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1047),
  [2017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1047),
  [2019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1048),
  [2021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1049),
  [2023] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1050),
  [2025] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1051),
  [2027] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1048),
  [2029] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1049),
  [2031] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1052),
  [2033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1053),
  [2035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1031),
  [2037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 1),
  [2039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1054),
  [2041] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 2, .fragile = true),
  [2043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1057),
  [2045] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1058),
  [2047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1059),
  [2049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1060),
  [2051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [2053] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 4),
  [2055] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [2057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1062),
  [2059] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ambiguous_name, 3),
  [2061] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1063),
  [2063] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(1060),
  [2065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 3),
  [2067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1064),
  [2069] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 3),
  [2071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1065),
  [2073] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 2),
  [2075] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1070),
  [2077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1072),
  [2079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1073),
  [2081] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1076),
  [2083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1077),
  [2085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1078),
  [2087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1082),
  [2089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [2091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1084),
  [2093] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1085),
  [2095] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1086),
  [2097] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1087),
  [2099] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 4),
  [2101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [2103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1092),
  [2105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1093),
  [2107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 3),
  [2109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1094),
  [2113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_value, 2),
  [2115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1097),
  [2117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1098),
  [2119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1099),
  [2121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1100),
  [2123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1101),
  [2125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1102),
  [2127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1103),
  [2129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1104),
  [2131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1104),
  [2133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1105),
  [2135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1106),
  [2137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1106),
  [2139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1107),
  [2147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1111),
  [2149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 4),
  [2151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [2153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1118),
  [2155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1120),
  [2157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [2159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 2),
  [2161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 4),
  [2163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1123),
  [2165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1124),
  [2167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 4),
  [2169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2),
  [2171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1126),
  [2173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1127),
  [2175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 4),
  [2177] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true), SHIFT(337),
  [2180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2182] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1128),
  [2187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1129),
  [2189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 3),
  [2191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1131),
  [2193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1133),
  [2195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1135),
  [2197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1136),
  [2199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 4),
  [2201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 4),
  [2203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1142),
  [2205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 3),
  [2207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 2),
  [2209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1149),
  [2211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1150),
  [2213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1152),
  [2215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1154),
  [2217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1156),
  [2219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1157),
  [2221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1160),
  [2223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_access, 4),
  [2225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 4),
  [2227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1162),
  [2229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1163),
  [2231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1164),
  [2233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1166),
  [2235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1167),
  [2237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1169),
  [2239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1170),
  [2241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1171),
  [2243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1172),
  [2245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1176),
  [2247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1179),
  [2249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1190),
  [2259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(999),
  [2261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1000),
  [2263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1001),
  [2265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1002),
  [2267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1000),
  [2269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1003),
  [2271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1192),
  [2273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 5),
  [2275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 3),
  [2277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [2279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 3),
  [2281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [2283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 5),
  [2285] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true), SHIFT(337),
  [2288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2290] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1194),
  [2297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 5),
  [2301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1196),
  [2303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1197),
  [2305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 2),
  [2307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_initializer, 1),
  [2309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1198),
  [2311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 4),
  [2313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1200),
  [2315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1201),
  [2317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 4),
  [2319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1202),
  [2321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 5),
  [2323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1203),
  [2325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 5),
  [2327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1204),
  [2329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 5),
  [2331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1205),
  [2333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [2335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1207),
  [2337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1208),
  [2339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1210),
  [2341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 4),
  [2343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1212),
  [2345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1214),
  [2347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1216),
  [2349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1217),
  [2351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1218),
  [2353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1219),
  [2355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1221),
  [2357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1222),
  [2359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1225),
  [2361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 3),
  [2369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 6),
  [2375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 3),
  [2377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1228),
  [2379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1230),
  [2381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 6),
  [2383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1232),
  [2385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1234),
  [2387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 6),
  [2389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 6),
  [2391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [2393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1235),
  [2395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1236),
  [2397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 5),
  [2399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1238),
  [2401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1239),
  [2403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1240),
  [2405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1241),
  [2407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 7),
  [2409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 4),
  [2411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 2),
  [2413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1244),
  [2415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 7),
  [2417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1246),
  [2419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 7),
  [2421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1248),
  [2423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1249),
  [2425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1250),
  [2427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 5),
  [2429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 3),
  [2431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 8),
  [2433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1251),
  [2435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 8),
  [2437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 7),
  [2439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 9),
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
