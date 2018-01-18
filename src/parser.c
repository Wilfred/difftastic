#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 1114
#define SYMBOL_COUNT 275
#define ALIAS_COUNT 0
#define TOKEN_COUNT 111
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_SEMI = 1,
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
  anon_sym_synchronized = 62,
  anon_sym_if = 63,
  anon_sym_else = 64,
  anon_sym_DOT = 65,
  anon_sym_LBRACK = 66,
  anon_sym_RBRACK = 67,
  anon_sym_boolean = 68,
  anon_sym_void = 69,
  anon_sym_byte = 70,
  anon_sym_short = 71,
  anon_sym_int = 72,
  anon_sym_long = 73,
  anon_sym_char = 74,
  anon_sym_float = 75,
  anon_sym_double = 76,
  anon_sym_AT = 77,
  anon_sym_open = 78,
  anon_sym_module = 79,
  anon_sym_requires = 80,
  anon_sym_exports = 81,
  anon_sym_to = 82,
  anon_sym_opens = 83,
  anon_sym_uses = 84,
  anon_sym_provides = 85,
  anon_sym_with = 86,
  anon_sym_transitive = 87,
  anon_sym_static = 88,
  anon_sym_package = 89,
  anon_sym_import = 90,
  anon_sym_class = 91,
  anon_sym_public = 92,
  anon_sym_protected = 93,
  anon_sym_private = 94,
  anon_sym_abstract = 95,
  anon_sym_final = 96,
  anon_sym_strictfp = 97,
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
  sym__semicolon = 113,
  sym__literal = 114,
  sym_integer_literal = 115,
  sym_floating_point_literal = 116,
  sym_boolean_literal = 117,
  sym_character_literal = 118,
  sym__expression = 119,
  sym_binary_expression = 120,
  sym_lambda_expression = 121,
  sym__lambda_parameters = 122,
  sym_inferred_formal_parameter_list = 123,
  sym_lambda_body = 124,
  sym_ternary_expression = 125,
  sym_unary_expression = 126,
  sym_update_expression = 127,
  sym_statement = 128,
  sym_statement_no_short_if = 129,
  sym_if_then_statement = 130,
  sym_if_then_else_statement = 131,
  sym_if_then_else_statement_no_short_if = 132,
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
  sym_unann_type = 224,
  sym_unann_primitive_type = 225,
  sym_unann_class_or_interface_type = 226,
  sym_unann_array_type = 227,
  sym_method_header = 228,
  sym_method_declarator = 229,
  sym__formal_parameter_list = 230,
  sym_formal_parameter = 231,
  sym_receiver_parameter = 232,
  sym_last_formal_parameter = 233,
  sym_throws = 234,
  sym_exception_type_list = 235,
  sym_exception_type = 236,
  sym_method_body = 237,
  sym_block = 238,
  sym_block_statements = 239,
  sym_block_statement = 240,
  sym_local_variable_declaration_statement = 241,
  sym_local_variable_declaration = 242,
  sym_method_declaration = 243,
  sym_method_name = 244,
  aux_sym_program_repeat1 = 245,
  aux_sym_character_literal_repeat1 = 246,
  aux_sym_inferred_formal_parameter_list_repeat1 = 247,
  aux_sym_catch_formal_parameter_repeat1 = 248,
  aux_sym_type_arguments_repeat1 = 249,
  aux_sym_class_or_interface_type_repeat1 = 250,
  aux_sym_class_or_interface_type_repeat2 = 251,
  aux_sym_dims_repeat1 = 252,
  aux_sym_element_value_pair_list_repeat1 = 253,
  aux_sym_element_value_array_initializer_repeat1 = 254,
  aux_sym_module_declaration_repeat1 = 255,
  aux_sym_module_identifier_repeat1 = 256,
  aux_sym_module_directive_repeat1 = 257,
  aux_sym_module_directive_repeat2 = 258,
  aux_sym_module_directive_repeat3 = 259,
  aux_sym_type_parameter_list_repeat1 = 260,
  aux_sym_type_bound_repeat1 = 261,
  aux_sym_interface_type_list_repeat1 = 262,
  aux_sym_class_body_repeat1 = 263,
  aux_sym_dims_exprs_repeat1 = 264,
  aux_sym_class_literal_repeat1 = 265,
  aux_sym_class_or_interface_type_to_instantiate_repeat1 = 266,
  aux_sym_argument_list_repeat1 = 267,
  aux_sym_annotation_type_body_repeat1 = 268,
  aux_sym_interface_body_repeat1 = 269,
  aux_sym_variable_declarator_list_repeat1 = 270,
  aux_sym_array_initializer_repeat1 = 271,
  aux_sym_formal_parameters_repeat1 = 272,
  aux_sym_exception_type_list_repeat1 = 273,
  aux_sym_block_statements_repeat1 = 274,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_synchronized] = "synchronized",
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
  [sym__semicolon] = "_semicolon",
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
  [aux_sym_catch_formal_parameter_repeat1] = "catch_formal_parameter_repeat1",
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [anon_sym_synchronized] = {
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
  [sym__semicolon] = {
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
  [aux_sym_catch_formal_parameter_repeat1] = {
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
      ACCEPT_TOKEN(anon_sym_SEMI);
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
  [45] = {.lex_state = 471},
  [46] = {.lex_state = 254},
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
  [75] = {.lex_state = 463},
  [76] = {.lex_state = 481},
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
  [94] = {.lex_state = 254},
  [95] = {.lex_state = 461},
  [96] = {.lex_state = 461},
  [97] = {.lex_state = 461},
  [98] = {.lex_state = 461},
  [99] = {.lex_state = 461},
  [100] = {.lex_state = 461},
  [101] = {.lex_state = 288},
  [102] = {.lex_state = 461},
  [103] = {.lex_state = 461},
  [104] = {.lex_state = 461},
  [105] = {.lex_state = 481},
  [106] = {.lex_state = 481},
  [107] = {.lex_state = 461},
  [108] = {.lex_state = 481},
  [109] = {.lex_state = 254},
  [110] = {.lex_state = 288},
  [111] = {.lex_state = 288},
  [112] = {.lex_state = 461},
  [113] = {.lex_state = 461},
  [114] = {.lex_state = 288},
  [115] = {.lex_state = 495},
  [116] = {.lex_state = 461},
  [117] = {.lex_state = 288},
  [118] = {.lex_state = 254},
  [119] = {.lex_state = 254},
  [120] = {.lex_state = 254},
  [121] = {.lex_state = 473},
  [122] = {.lex_state = 461},
  [123] = {.lex_state = 461},
  [124] = {.lex_state = 471},
  [125] = {.lex_state = 471},
  [126] = {.lex_state = 288},
  [127] = {.lex_state = 254},
  [128] = {.lex_state = 461},
  [129] = {.lex_state = 288},
  [130] = {.lex_state = 288},
  [131] = {.lex_state = 455},
  [132] = {.lex_state = 461},
  [133] = {.lex_state = 461},
  [134] = {.lex_state = 461},
  [135] = {.lex_state = 485},
  [136] = {.lex_state = 481},
  [137] = {.lex_state = 461},
  [138] = {.lex_state = 485},
  [139] = {.lex_state = 485},
  [140] = {.lex_state = 461},
  [141] = {.lex_state = 254},
  [142] = {.lex_state = 461},
  [143] = {.lex_state = 463},
  [144] = {.lex_state = 463},
  [145] = {.lex_state = 494},
  [146] = {.lex_state = 492},
  [147] = {.lex_state = 288},
  [148] = {.lex_state = 254},
  [149] = {.lex_state = 461},
  [150] = {.lex_state = 288},
  [151] = {.lex_state = 254},
  [152] = {.lex_state = 288},
  [153] = {.lex_state = 492},
  [154] = {.lex_state = 288},
  [155] = {.lex_state = 492},
  [156] = {.lex_state = 461},
  [157] = {.lex_state = 463},
  [158] = {.lex_state = 254},
  [159] = {.lex_state = 463},
  [160] = {.lex_state = 461},
  [161] = {.lex_state = 481},
  [162] = {.lex_state = 492},
  [163] = {.lex_state = 254},
  [164] = {.lex_state = 497},
  [165] = {.lex_state = 461},
  [166] = {.lex_state = 254},
  [167] = {.lex_state = 461},
  [168] = {.lex_state = 288},
  [169] = {.lex_state = 288},
  [170] = {.lex_state = 254},
  [171] = {.lex_state = 288},
  [172] = {.lex_state = 288},
  [173] = {.lex_state = 461},
  [174] = {.lex_state = 254},
  [175] = {.lex_state = 461},
  [176] = {.lex_state = 471},
  [177] = {.lex_state = 461},
  [178] = {.lex_state = 461},
  [179] = {.lex_state = 288},
  [180] = {.lex_state = 288},
  [181] = {.lex_state = 254},
  [182] = {.lex_state = 254},
  [183] = {.lex_state = 471},
  [184] = {.lex_state = 461},
  [185] = {.lex_state = 288},
  [186] = {.lex_state = 254},
  [187] = {.lex_state = 254},
  [188] = {.lex_state = 288},
  [189] = {.lex_state = 485},
  [190] = {.lex_state = 485},
  [191] = {.lex_state = 485},
  [192] = {.lex_state = 485},
  [193] = {.lex_state = 288},
  [194] = {.lex_state = 481},
  [195] = {.lex_state = 288},
  [196] = {.lex_state = 288},
  [197] = {.lex_state = 288},
  [198] = {.lex_state = 288},
  [199] = {.lex_state = 288},
  [200] = {.lex_state = 461},
  [201] = {.lex_state = 461},
  [202] = {.lex_state = 288},
  [203] = {.lex_state = 461},
  [204] = {.lex_state = 461},
  [205] = {.lex_state = 288},
  [206] = {.lex_state = 288},
  [207] = {.lex_state = 481},
  [208] = {.lex_state = 481},
  [209] = {.lex_state = 288},
  [210] = {.lex_state = 461},
  [211] = {.lex_state = 463},
  [212] = {.lex_state = 461},
  [213] = {.lex_state = 288},
  [214] = {.lex_state = 495},
  [215] = {.lex_state = 288},
  [216] = {.lex_state = 288},
  [217] = {.lex_state = 461},
  [218] = {.lex_state = 461},
  [219] = {.lex_state = 500},
  [220] = {.lex_state = 505},
  [221] = {.lex_state = 254},
  [222] = {.lex_state = 461},
  [223] = {.lex_state = 461},
  [224] = {.lex_state = 288},
  [225] = {.lex_state = 288},
  [226] = {.lex_state = 505},
  [227] = {.lex_state = 288},
  [228] = {.lex_state = 505},
  [229] = {.lex_state = 254},
  [230] = {.lex_state = 288},
  [231] = {.lex_state = 288},
  [232] = {.lex_state = 254},
  [233] = {.lex_state = 461},
  [234] = {.lex_state = 471},
  [235] = {.lex_state = 471},
  [236] = {.lex_state = 288},
  [237] = {.lex_state = 288},
  [238] = {.lex_state = 254},
  [239] = {.lex_state = 461},
  [240] = {.lex_state = 288},
  [241] = {.lex_state = 497},
  [242] = {.lex_state = 461},
  [243] = {.lex_state = 485},
  [244] = {.lex_state = 461},
  [245] = {.lex_state = 485},
  [246] = {.lex_state = 461},
  [247] = {.lex_state = 485},
  [248] = {.lex_state = 461},
  [249] = {.lex_state = 254},
  [250] = {.lex_state = 497},
  [251] = {.lex_state = 461},
  [252] = {.lex_state = 485},
  [253] = {.lex_state = 288},
  [254] = {.lex_state = 254},
  [255] = {.lex_state = 288},
  [256] = {.lex_state = 288},
  [257] = {.lex_state = 288},
  [258] = {.lex_state = 492},
  [259] = {.lex_state = 288},
  [260] = {.lex_state = 288},
  [261] = {.lex_state = 492},
  [262] = {.lex_state = 461},
  [263] = {.lex_state = 461},
  [264] = {.lex_state = 254},
  [265] = {.lex_state = 254},
  [266] = {.lex_state = 463},
  [267] = {.lex_state = 461},
  [268] = {.lex_state = 254},
  [269] = {.lex_state = 254},
  [270] = {.lex_state = 288},
  [271] = {.lex_state = 471},
  [272] = {.lex_state = 254},
  [273] = {.lex_state = 480},
  [274] = {.lex_state = 288},
  [275] = {.lex_state = 254},
  [276] = {.lex_state = 254},
  [277] = {.lex_state = 254},
  [278] = {.lex_state = 480},
  [279] = {.lex_state = 288},
  [280] = {.lex_state = 288},
  [281] = {.lex_state = 461},
  [282] = {.lex_state = 254},
  [283] = {.lex_state = 506},
  [284] = {.lex_state = 461},
  [285] = {.lex_state = 461},
  [286] = {.lex_state = 461},
  [287] = {.lex_state = 288},
  [288] = {.lex_state = 288},
  [289] = {.lex_state = 254},
  [290] = {.lex_state = 461},
  [291] = {.lex_state = 288},
  [292] = {.lex_state = 485},
  [293] = {.lex_state = 471},
  [294] = {.lex_state = 288},
  [295] = {.lex_state = 254},
  [296] = {.lex_state = 473},
  [297] = {.lex_state = 461},
  [298] = {.lex_state = 461},
  [299] = {.lex_state = 461},
  [300] = {.lex_state = 471},
  [301] = {.lex_state = 471},
  [302] = {.lex_state = 481},
  [303] = {.lex_state = 471},
  [304] = {.lex_state = 471},
  [305] = {.lex_state = 288},
  [306] = {.lex_state = 471},
  [307] = {.lex_state = 288},
  [308] = {.lex_state = 471},
  [309] = {.lex_state = 471},
  [310] = {.lex_state = 288},
  [311] = {.lex_state = 288},
  [312] = {.lex_state = 461},
  [313] = {.lex_state = 254},
  [314] = {.lex_state = 254},
  [315] = {.lex_state = 288},
  [316] = {.lex_state = 254},
  [317] = {.lex_state = 254},
  [318] = {.lex_state = 254},
  [319] = {.lex_state = 471},
  [320] = {.lex_state = 471},
  [321] = {.lex_state = 461},
  [322] = {.lex_state = 471},
  [323] = {.lex_state = 471},
  [324] = {.lex_state = 254},
  [325] = {.lex_state = 254},
  [326] = {.lex_state = 254},
  [327] = {.lex_state = 461},
  [328] = {.lex_state = 485},
  [329] = {.lex_state = 485},
  [330] = {.lex_state = 509},
  [331] = {.lex_state = 494},
  [332] = {.lex_state = 485},
  [333] = {.lex_state = 485},
  [334] = {.lex_state = 288},
  [335] = {.lex_state = 485},
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
  [347] = {.lex_state = 461},
  [348] = {.lex_state = 461},
  [349] = {.lex_state = 288},
  [350] = {.lex_state = 497},
  [351] = {.lex_state = 461},
  [352] = {.lex_state = 288},
  [353] = {.lex_state = 288},
  [354] = {.lex_state = 288},
  [355] = {.lex_state = 254},
  [356] = {.lex_state = 461},
  [357] = {.lex_state = 461},
  [358] = {.lex_state = 288},
  [359] = {.lex_state = 288},
  [360] = {.lex_state = 461},
  [361] = {.lex_state = 495},
  [362] = {.lex_state = 288},
  [363] = {.lex_state = 461},
  [364] = {.lex_state = 461},
  [365] = {.lex_state = 461},
  [366] = {.lex_state = 505},
  [367] = {.lex_state = 505},
  [368] = {.lex_state = 288},
  [369] = {.lex_state = 461},
  [370] = {.lex_state = 500},
  [371] = {.lex_state = 288},
  [372] = {.lex_state = 288},
  [373] = {.lex_state = 288},
  [374] = {.lex_state = 288},
  [375] = {.lex_state = 461},
  [376] = {.lex_state = 254},
  [377] = {.lex_state = 497},
  [378] = {.lex_state = 461},
  [379] = {.lex_state = 288},
  [380] = {.lex_state = 288},
  [381] = {.lex_state = 254},
  [382] = {.lex_state = 288},
  [383] = {.lex_state = 461},
  [384] = {.lex_state = 288},
  [385] = {.lex_state = 254},
  [386] = {.lex_state = 254},
  [387] = {.lex_state = 461},
  [388] = {.lex_state = 461},
  [389] = {.lex_state = 485},
  [390] = {.lex_state = 485},
  [391] = {.lex_state = 461},
  [392] = {.lex_state = 463},
  [393] = {.lex_state = 288},
  [394] = {.lex_state = 254},
  [395] = {.lex_state = 254},
  [396] = {.lex_state = 463},
  [397] = {.lex_state = 492},
  [398] = {.lex_state = 485},
  [399] = {.lex_state = 288},
  [400] = {.lex_state = 254},
  [401] = {.lex_state = 492},
  [402] = {.lex_state = 288},
  [403] = {.lex_state = 492},
  [404] = {.lex_state = 492},
  [405] = {.lex_state = 254},
  [406] = {.lex_state = 254},
  [407] = {.lex_state = 254},
  [408] = {.lex_state = 288},
  [409] = {.lex_state = 254},
  [410] = {.lex_state = 471},
  [411] = {.lex_state = 471},
  [412] = {.lex_state = 461},
  [413] = {.lex_state = 471},
  [414] = {.lex_state = 471},
  [415] = {.lex_state = 254},
  [416] = {.lex_state = 480},
  [417] = {.lex_state = 480},
  [418] = {.lex_state = 461},
  [419] = {.lex_state = 254},
  [420] = {.lex_state = 254},
  [421] = {.lex_state = 288},
  [422] = {.lex_state = 288},
  [423] = {.lex_state = 506},
  [424] = {.lex_state = 288},
  [425] = {.lex_state = 506},
  [426] = {.lex_state = 288},
  [427] = {.lex_state = 506},
  [428] = {.lex_state = 510},
  [429] = {.lex_state = 510},
  [430] = {.lex_state = 288},
  [431] = {.lex_state = 288},
  [432] = {.lex_state = 288},
  [433] = {.lex_state = 288},
  [434] = {.lex_state = 288},
  [435] = {.lex_state = 288},
  [436] = {.lex_state = 254},
  [437] = {.lex_state = 288},
  [438] = {.lex_state = 471},
  [439] = {.lex_state = 254},
  [440] = {.lex_state = 461},
  [441] = {.lex_state = 288},
  [442] = {.lex_state = 288},
  [443] = {.lex_state = 463},
  [444] = {.lex_state = 461},
  [445] = {.lex_state = 512},
  [446] = {.lex_state = 471},
  [447] = {.lex_state = 254},
  [448] = {.lex_state = 471},
  [449] = {.lex_state = 471},
  [450] = {.lex_state = 473},
  [451] = {.lex_state = 461},
  [452] = {.lex_state = 461},
  [453] = {.lex_state = 288},
  [454] = {.lex_state = 288},
  [455] = {.lex_state = 254},
  [456] = {.lex_state = 471},
  [457] = {.lex_state = 494},
  [458] = {.lex_state = 461},
  [459] = {.lex_state = 288},
  [460] = {.lex_state = 288},
  [461] = {.lex_state = 288},
  [462] = {.lex_state = 461},
  [463] = {.lex_state = 254},
  [464] = {.lex_state = 254},
  [465] = {.lex_state = 254},
  [466] = {.lex_state = 288},
  [467] = {.lex_state = 288},
  [468] = {.lex_state = 288},
  [469] = {.lex_state = 461},
  [470] = {.lex_state = 254},
  [471] = {.lex_state = 471},
  [472] = {.lex_state = 254},
  [473] = {.lex_state = 485},
  [474] = {.lex_state = 461},
  [475] = {.lex_state = 485},
  [476] = {.lex_state = 461},
  [477] = {.lex_state = 485},
  [478] = {.lex_state = 509},
  [479] = {.lex_state = 494},
  [480] = {.lex_state = 485},
  [481] = {.lex_state = 288},
  [482] = {.lex_state = 288},
  [483] = {.lex_state = 288},
  [484] = {.lex_state = 288},
  [485] = {.lex_state = 288},
  [486] = {.lex_state = 288},
  [487] = {.lex_state = 288},
  [488] = {.lex_state = 288},
  [489] = {.lex_state = 288},
  [490] = {.lex_state = 288},
  [491] = {.lex_state = 288},
  [492] = {.lex_state = 481},
  [493] = {.lex_state = 288},
  [494] = {.lex_state = 254},
  [495] = {.lex_state = 254},
  [496] = {.lex_state = 481},
  [497] = {.lex_state = 288},
  [498] = {.lex_state = 288},
  [499] = {.lex_state = 288},
  [500] = {.lex_state = 288},
  [501] = {.lex_state = 288},
  [502] = {.lex_state = 288},
  [503] = {.lex_state = 461},
  [504] = {.lex_state = 461},
  [505] = {.lex_state = 461},
  [506] = {.lex_state = 288},
  [507] = {.lex_state = 288},
  [508] = {.lex_state = 461},
  [509] = {.lex_state = 288},
  [510] = {.lex_state = 288},
  [511] = {.lex_state = 461},
  [512] = {.lex_state = 495},
  [513] = {.lex_state = 461},
  [514] = {.lex_state = 461},
  [515] = {.lex_state = 461},
  [516] = {.lex_state = 288},
  [517] = {.lex_state = 497},
  [518] = {.lex_state = 461},
  [519] = {.lex_state = 471},
  [520] = {.lex_state = 288},
  [521] = {.lex_state = 288},
  [522] = {.lex_state = 254},
  [523] = {.lex_state = 288},
  [524] = {.lex_state = 288},
  [525] = {.lex_state = 288},
  [526] = {.lex_state = 288},
  [527] = {.lex_state = 254},
  [528] = {.lex_state = 471},
  [529] = {.lex_state = 288},
  [530] = {.lex_state = 254},
  [531] = {.lex_state = 254},
  [532] = {.lex_state = 471},
  [533] = {.lex_state = 288},
  [534] = {.lex_state = 254},
  [535] = {.lex_state = 288},
  [536] = {.lex_state = 254},
  [537] = {.lex_state = 461},
  [538] = {.lex_state = 461},
  [539] = {.lex_state = 485},
  [540] = {.lex_state = 461},
  [541] = {.lex_state = 463},
  [542] = {.lex_state = 463},
  [543] = {.lex_state = 492},
  [544] = {.lex_state = 492},
  [545] = {.lex_state = 492},
  [546] = {.lex_state = 254},
  [547] = {.lex_state = 288},
  [548] = {.lex_state = 461},
  [549] = {.lex_state = 254},
  [550] = {.lex_state = 471},
  [551] = {.lex_state = 461},
  [552] = {.lex_state = 254},
  [553] = {.lex_state = 288},
  [554] = {.lex_state = 515},
  [555] = {.lex_state = 254},
  [556] = {.lex_state = 288},
  [557] = {.lex_state = 288},
  [558] = {.lex_state = 288},
  [559] = {.lex_state = 288},
  [560] = {.lex_state = 288},
  [561] = {.lex_state = 288},
  [562] = {.lex_state = 288},
  [563] = {.lex_state = 288},
  [564] = {.lex_state = 515},
  [565] = {.lex_state = 515},
  [566] = {.lex_state = 288},
  [567] = {.lex_state = 254},
  [568] = {.lex_state = 461},
  [569] = {.lex_state = 254},
  [570] = {.lex_state = 461},
  [571] = {.lex_state = 288},
  [572] = {.lex_state = 506},
  [573] = {.lex_state = 288},
  [574] = {.lex_state = 461},
  [575] = {.lex_state = 461},
  [576] = {.lex_state = 461},
  [577] = {.lex_state = 288},
  [578] = {.lex_state = 288},
  [579] = {.lex_state = 461},
  [580] = {.lex_state = 461},
  [581] = {.lex_state = 254},
  [582] = {.lex_state = 254},
  [583] = {.lex_state = 471},
  [584] = {.lex_state = 254},
  [585] = {.lex_state = 471},
  [586] = {.lex_state = 288},
  [587] = {.lex_state = 288},
  [588] = {.lex_state = 254},
  [589] = {.lex_state = 471},
  [590] = {.lex_state = 471},
  [591] = {.lex_state = 288},
  [592] = {.lex_state = 254},
  [593] = {.lex_state = 471},
  [594] = {.lex_state = 254},
  [595] = {.lex_state = 463},
  [596] = {.lex_state = 461},
  [597] = {.lex_state = 471},
  [598] = {.lex_state = 288},
  [599] = {.lex_state = 288},
  [600] = {.lex_state = 288},
  [601] = {.lex_state = 288},
  [602] = {.lex_state = 494},
  [603] = {.lex_state = 288},
  [604] = {.lex_state = 288},
  [605] = {.lex_state = 288},
  [606] = {.lex_state = 288},
  [607] = {.lex_state = 288},
  [608] = {.lex_state = 505},
  [609] = {.lex_state = 288},
  [610] = {.lex_state = 288},
  [611] = {.lex_state = 288},
  [612] = {.lex_state = 288},
  [613] = {.lex_state = 288},
  [614] = {.lex_state = 288},
  [615] = {.lex_state = 288},
  [616] = {.lex_state = 288},
  [617] = {.lex_state = 254},
  [618] = {.lex_state = 254},
  [619] = {.lex_state = 481},
  [620] = {.lex_state = 471},
  [621] = {.lex_state = 461},
  [622] = {.lex_state = 288},
  [623] = {.lex_state = 288},
  [624] = {.lex_state = 254},
  [625] = {.lex_state = 471},
  [626] = {.lex_state = 485},
  [627] = {.lex_state = 288},
  [628] = {.lex_state = 461},
  [629] = {.lex_state = 288},
  [630] = {.lex_state = 461},
  [631] = {.lex_state = 288},
  [632] = {.lex_state = 254},
  [633] = {.lex_state = 461},
  [634] = {.lex_state = 254},
  [635] = {.lex_state = 471},
  [636] = {.lex_state = 461},
  [637] = {.lex_state = 288},
  [638] = {.lex_state = 288},
  [639] = {.lex_state = 485},
  [640] = {.lex_state = 485},
  [641] = {.lex_state = 461},
  [642] = {.lex_state = 485},
  [643] = {.lex_state = 485},
  [644] = {.lex_state = 461},
  [645] = {.lex_state = 461},
  [646] = {.lex_state = 481},
  [647] = {.lex_state = 481},
  [648] = {.lex_state = 288},
  [649] = {.lex_state = 288},
  [650] = {.lex_state = 288},
  [651] = {.lex_state = 288},
  [652] = {.lex_state = 461},
  [653] = {.lex_state = 461},
  [654] = {.lex_state = 461},
  [655] = {.lex_state = 461},
  [656] = {.lex_state = 288},
  [657] = {.lex_state = 288},
  [658] = {.lex_state = 461},
  [659] = {.lex_state = 461},
  [660] = {.lex_state = 461},
  [661] = {.lex_state = 461},
  [662] = {.lex_state = 461},
  [663] = {.lex_state = 461},
  [664] = {.lex_state = 288},
  [665] = {.lex_state = 461},
  [666] = {.lex_state = 505},
  [667] = {.lex_state = 288},
  [668] = {.lex_state = 254},
  [669] = {.lex_state = 254},
  [670] = {.lex_state = 505},
  [671] = {.lex_state = 288},
  [672] = {.lex_state = 471},
  [673] = {.lex_state = 288},
  [674] = {.lex_state = 254},
  [675] = {.lex_state = 288},
  [676] = {.lex_state = 288},
  [677] = {.lex_state = 471},
  [678] = {.lex_state = 471},
  [679] = {.lex_state = 254},
  [680] = {.lex_state = 254},
  [681] = {.lex_state = 288},
  [682] = {.lex_state = 485},
  [683] = {.lex_state = 254},
  [684] = {.lex_state = 288},
  [685] = {.lex_state = 461},
  [686] = {.lex_state = 461},
  [687] = {.lex_state = 288},
  [688] = {.lex_state = 254},
  [689] = {.lex_state = 461},
  [690] = {.lex_state = 288},
  [691] = {.lex_state = 254},
  [692] = {.lex_state = 288},
  [693] = {.lex_state = 288},
  [694] = {.lex_state = 288},
  [695] = {.lex_state = 288},
  [696] = {.lex_state = 288},
  [697] = {.lex_state = 288},
  [698] = {.lex_state = 288},
  [699] = {.lex_state = 515},
  [700] = {.lex_state = 515},
  [701] = {.lex_state = 254},
  [702] = {.lex_state = 461},
  [703] = {.lex_state = 254},
  [704] = {.lex_state = 254},
  [705] = {.lex_state = 254},
  [706] = {.lex_state = 254},
  [707] = {.lex_state = 254},
  [708] = {.lex_state = 254},
  [709] = {.lex_state = 254},
  [710] = {.lex_state = 254},
  [711] = {.lex_state = 254},
  [712] = {.lex_state = 288},
  [713] = {.lex_state = 288},
  [714] = {.lex_state = 288},
  [715] = {.lex_state = 510},
  [716] = {.lex_state = 288},
  [717] = {.lex_state = 288},
  [718] = {.lex_state = 461},
  [719] = {.lex_state = 288},
  [720] = {.lex_state = 288},
  [721] = {.lex_state = 471},
  [722] = {.lex_state = 471},
  [723] = {.lex_state = 471},
  [724] = {.lex_state = 471},
  [725] = {.lex_state = 288},
  [726] = {.lex_state = 254},
  [727] = {.lex_state = 471},
  [728] = {.lex_state = 471},
  [729] = {.lex_state = 471},
  [730] = {.lex_state = 254},
  [731] = {.lex_state = 471},
  [732] = {.lex_state = 288},
  [733] = {.lex_state = 254},
  [734] = {.lex_state = 288},
  [735] = {.lex_state = 254},
  [736] = {.lex_state = 288},
  [737] = {.lex_state = 288},
  [738] = {.lex_state = 461},
  [739] = {.lex_state = 461},
  [740] = {.lex_state = 461},
  [741] = {.lex_state = 288},
  [742] = {.lex_state = 461},
  [743] = {.lex_state = 288},
  [744] = {.lex_state = 288},
  [745] = {.lex_state = 254},
  [746] = {.lex_state = 481},
  [747] = {.lex_state = 254},
  [748] = {.lex_state = 461},
  [749] = {.lex_state = 288},
  [750] = {.lex_state = 288},
  [751] = {.lex_state = 288},
  [752] = {.lex_state = 288},
  [753] = {.lex_state = 288},
  [754] = {.lex_state = 521},
  [755] = {.lex_state = 471},
  [756] = {.lex_state = 254},
  [757] = {.lex_state = 524},
  [758] = {.lex_state = 461},
  [759] = {.lex_state = 524},
  [760] = {.lex_state = 288},
  [761] = {.lex_state = 461},
  [762] = {.lex_state = 254},
  [763] = {.lex_state = 288},
  [764] = {.lex_state = 288},
  [765] = {.lex_state = 471},
  [766] = {.lex_state = 288},
  [767] = {.lex_state = 485},
  [768] = {.lex_state = 288},
  [769] = {.lex_state = 461},
  [770] = {.lex_state = 288},
  [771] = {.lex_state = 254},
  [772] = {.lex_state = 288},
  [773] = {.lex_state = 461},
  [774] = {.lex_state = 471},
  [775] = {.lex_state = 485},
  [776] = {.lex_state = 485},
  [777] = {.lex_state = 288},
  [778] = {.lex_state = 288},
  [779] = {.lex_state = 288},
  [780] = {.lex_state = 288},
  [781] = {.lex_state = 461},
  [782] = {.lex_state = 461},
  [783] = {.lex_state = 461},
  [784] = {.lex_state = 461},
  [785] = {.lex_state = 288},
  [786] = {.lex_state = 288},
  [787] = {.lex_state = 288},
  [788] = {.lex_state = 288},
  [789] = {.lex_state = 254},
  [790] = {.lex_state = 288},
  [791] = {.lex_state = 288},
  [792] = {.lex_state = 288},
  [793] = {.lex_state = 288},
  [794] = {.lex_state = 505},
  [795] = {.lex_state = 505},
  [796] = {.lex_state = 288},
  [797] = {.lex_state = 254},
  [798] = {.lex_state = 288},
  [799] = {.lex_state = 288},
  [800] = {.lex_state = 254},
  [801] = {.lex_state = 254},
  [802] = {.lex_state = 288},
  [803] = {.lex_state = 254},
  [804] = {.lex_state = 461},
  [805] = {.lex_state = 461},
  [806] = {.lex_state = 461},
  [807] = {.lex_state = 461},
  [808] = {.lex_state = 461},
  [809] = {.lex_state = 461},
  [810] = {.lex_state = 288},
  [811] = {.lex_state = 461},
  [812] = {.lex_state = 461},
  [813] = {.lex_state = 288},
  [814] = {.lex_state = 254},
  [815] = {.lex_state = 254},
  [816] = {.lex_state = 254},
  [817] = {.lex_state = 461},
  [818] = {.lex_state = 254},
  [819] = {.lex_state = 254},
  [820] = {.lex_state = 254},
  [821] = {.lex_state = 254},
  [822] = {.lex_state = 254},
  [823] = {.lex_state = 254},
  [824] = {.lex_state = 254},
  [825] = {.lex_state = 254},
  [826] = {.lex_state = 288},
  [827] = {.lex_state = 288},
  [828] = {.lex_state = 288},
  [829] = {.lex_state = 288},
  [830] = {.lex_state = 288},
  [831] = {.lex_state = 288},
  [832] = {.lex_state = 288},
  [833] = {.lex_state = 515},
  [834] = {.lex_state = 515},
  [835] = {.lex_state = 515},
  [836] = {.lex_state = 288},
  [837] = {.lex_state = 288},
  [838] = {.lex_state = 288},
  [839] = {.lex_state = 461},
  [840] = {.lex_state = 288},
  [841] = {.lex_state = 471},
  [842] = {.lex_state = 471},
  [843] = {.lex_state = 471},
  [844] = {.lex_state = 254},
  [845] = {.lex_state = 471},
  [846] = {.lex_state = 471},
  [847] = {.lex_state = 471},
  [848] = {.lex_state = 288},
  [849] = {.lex_state = 288},
  [850] = {.lex_state = 288},
  [851] = {.lex_state = 254},
  [852] = {.lex_state = 288},
  [853] = {.lex_state = 288},
  [854] = {.lex_state = 288},
  [855] = {.lex_state = 254},
  [856] = {.lex_state = 288},
  [857] = {.lex_state = 288},
  [858] = {.lex_state = 461},
  [859] = {.lex_state = 461},
  [860] = {.lex_state = 254},
  [861] = {.lex_state = 288},
  [862] = {.lex_state = 254},
  [863] = {.lex_state = 288},
  [864] = {.lex_state = 288},
  [865] = {.lex_state = 254},
  [866] = {.lex_state = 461},
  [867] = {.lex_state = 254},
  [868] = {.lex_state = 288},
  [869] = {.lex_state = 461},
  [870] = {.lex_state = 288},
  [871] = {.lex_state = 461},
  [872] = {.lex_state = 461},
  [873] = {.lex_state = 461},
  [874] = {.lex_state = 288},
  [875] = {.lex_state = 288},
  [876] = {.lex_state = 288},
  [877] = {.lex_state = 461},
  [878] = {.lex_state = 288},
  [879] = {.lex_state = 288},
  [880] = {.lex_state = 288},
  [881] = {.lex_state = 461},
  [882] = {.lex_state = 288},
  [883] = {.lex_state = 288},
  [884] = {.lex_state = 461},
  [885] = {.lex_state = 471},
  [886] = {.lex_state = 494},
  [887] = {.lex_state = 254},
  [888] = {.lex_state = 461},
  [889] = {.lex_state = 288},
  [890] = {.lex_state = 526},
  [891] = {.lex_state = 288},
  [892] = {.lex_state = 288},
  [893] = {.lex_state = 288},
  [894] = {.lex_state = 288},
  [895] = {.lex_state = 254},
  [896] = {.lex_state = 471},
  [897] = {.lex_state = 288},
  [898] = {.lex_state = 254},
  [899] = {.lex_state = 288},
  [900] = {.lex_state = 288},
  [901] = {.lex_state = 288},
  [902] = {.lex_state = 485},
  [903] = {.lex_state = 288},
  [904] = {.lex_state = 461},
  [905] = {.lex_state = 461},
  [906] = {.lex_state = 461},
  [907] = {.lex_state = 288},
  [908] = {.lex_state = 461},
  [909] = {.lex_state = 288},
  [910] = {.lex_state = 254},
  [911] = {.lex_state = 254},
  [912] = {.lex_state = 471},
  [913] = {.lex_state = 288},
  [914] = {.lex_state = 288},
  [915] = {.lex_state = 288},
  [916] = {.lex_state = 288},
  [917] = {.lex_state = 288},
  [918] = {.lex_state = 288},
  [919] = {.lex_state = 288},
  [920] = {.lex_state = 288},
  [921] = {.lex_state = 461},
  [922] = {.lex_state = 461},
  [923] = {.lex_state = 461},
  [924] = {.lex_state = 461},
  [925] = {.lex_state = 461},
  [926] = {.lex_state = 461},
  [927] = {.lex_state = 288},
  [928] = {.lex_state = 254},
  [929] = {.lex_state = 254},
  [930] = {.lex_state = 288},
  [931] = {.lex_state = 288},
  [932] = {.lex_state = 288},
  [933] = {.lex_state = 288},
  [934] = {.lex_state = 288},
  [935] = {.lex_state = 288},
  [936] = {.lex_state = 515},
  [937] = {.lex_state = 515},
  [938] = {.lex_state = 461},
  [939] = {.lex_state = 288},
  [940] = {.lex_state = 288},
  [941] = {.lex_state = 461},
  [942] = {.lex_state = 471},
  [943] = {.lex_state = 471},
  [944] = {.lex_state = 288},
  [945] = {.lex_state = 288},
  [946] = {.lex_state = 461},
  [947] = {.lex_state = 254},
  [948] = {.lex_state = 288},
  [949] = {.lex_state = 288},
  [950] = {.lex_state = 288},
  [951] = {.lex_state = 461},
  [952] = {.lex_state = 461},
  [953] = {.lex_state = 254},
  [954] = {.lex_state = 461},
  [955] = {.lex_state = 461},
  [956] = {.lex_state = 288},
  [957] = {.lex_state = 461},
  [958] = {.lex_state = 288},
  [959] = {.lex_state = 288},
  [960] = {.lex_state = 254},
  [961] = {.lex_state = 288},
  [962] = {.lex_state = 288},
  [963] = {.lex_state = 254},
  [964] = {.lex_state = 461},
  [965] = {.lex_state = 461},
  [966] = {.lex_state = 461},
  [967] = {.lex_state = 461},
  [968] = {.lex_state = 461},
  [969] = {.lex_state = 461},
  [970] = {.lex_state = 288},
  [971] = {.lex_state = 461},
  [972] = {.lex_state = 288},
  [973] = {.lex_state = 288},
  [974] = {.lex_state = 461},
  [975] = {.lex_state = 461},
  [976] = {.lex_state = 461},
  [977] = {.lex_state = 254},
  [978] = {.lex_state = 485},
  [979] = {.lex_state = 461},
  [980] = {.lex_state = 254},
  [981] = {.lex_state = 288},
  [982] = {.lex_state = 288},
  [983] = {.lex_state = 254},
  [984] = {.lex_state = 471},
  [985] = {.lex_state = 461},
  [986] = {.lex_state = 288},
  [987] = {.lex_state = 288},
  [988] = {.lex_state = 288},
  [989] = {.lex_state = 288},
  [990] = {.lex_state = 461},
  [991] = {.lex_state = 288},
  [992] = {.lex_state = 288},
  [993] = {.lex_state = 288},
  [994] = {.lex_state = 288},
  [995] = {.lex_state = 288},
  [996] = {.lex_state = 288},
  [997] = {.lex_state = 288},
  [998] = {.lex_state = 288},
  [999] = {.lex_state = 515},
  [1000] = {.lex_state = 515},
  [1001] = {.lex_state = 471},
  [1002] = {.lex_state = 288},
  [1003] = {.lex_state = 288},
  [1004] = {.lex_state = 461},
  [1005] = {.lex_state = 288},
  [1006] = {.lex_state = 288},
  [1007] = {.lex_state = 288},
  [1008] = {.lex_state = 288},
  [1009] = {.lex_state = 288},
  [1010] = {.lex_state = 288},
  [1011] = {.lex_state = 254},
  [1012] = {.lex_state = 461},
  [1013] = {.lex_state = 288},
  [1014] = {.lex_state = 288},
  [1015] = {.lex_state = 288},
  [1016] = {.lex_state = 461},
  [1017] = {.lex_state = 288},
  [1018] = {.lex_state = 288},
  [1019] = {.lex_state = 288},
  [1020] = {.lex_state = 461},
  [1021] = {.lex_state = 288},
  [1022] = {.lex_state = 461},
  [1023] = {.lex_state = 288},
  [1024] = {.lex_state = 254},
  [1025] = {.lex_state = 254},
  [1026] = {.lex_state = 288},
  [1027] = {.lex_state = 288},
  [1028] = {.lex_state = 254},
  [1029] = {.lex_state = 254},
  [1030] = {.lex_state = 288},
  [1031] = {.lex_state = 254},
  [1032] = {.lex_state = 288},
  [1033] = {.lex_state = 288},
  [1034] = {.lex_state = 288},
  [1035] = {.lex_state = 288},
  [1036] = {.lex_state = 288},
  [1037] = {.lex_state = 288},
  [1038] = {.lex_state = 288},
  [1039] = {.lex_state = 288},
  [1040] = {.lex_state = 461},
  [1041] = {.lex_state = 288},
  [1042] = {.lex_state = 461},
  [1043] = {.lex_state = 288},
  [1044] = {.lex_state = 254},
  [1045] = {.lex_state = 461},
  [1046] = {.lex_state = 526},
  [1047] = {.lex_state = 485},
  [1048] = {.lex_state = 254},
  [1049] = {.lex_state = 461},
  [1050] = {.lex_state = 471},
  [1051] = {.lex_state = 288},
  [1052] = {.lex_state = 288},
  [1053] = {.lex_state = 254},
  [1054] = {.lex_state = 461},
  [1055] = {.lex_state = 254},
  [1056] = {.lex_state = 254},
  [1057] = {.lex_state = 254},
  [1058] = {.lex_state = 254},
  [1059] = {.lex_state = 254},
  [1060] = {.lex_state = 254},
  [1061] = {.lex_state = 254},
  [1062] = {.lex_state = 254},
  [1063] = {.lex_state = 471},
  [1064] = {.lex_state = 288},
  [1065] = {.lex_state = 288},
  [1066] = {.lex_state = 461},
  [1067] = {.lex_state = 288},
  [1068] = {.lex_state = 288},
  [1069] = {.lex_state = 288},
  [1070] = {.lex_state = 288},
  [1071] = {.lex_state = 288},
  [1072] = {.lex_state = 461},
  [1073] = {.lex_state = 254},
  [1074] = {.lex_state = 288},
  [1075] = {.lex_state = 461},
  [1076] = {.lex_state = 461},
  [1077] = {.lex_state = 254},
  [1078] = {.lex_state = 288},
  [1079] = {.lex_state = 288},
  [1080] = {.lex_state = 254},
  [1081] = {.lex_state = 526},
  [1082] = {.lex_state = 288},
  [1083] = {.lex_state = 254},
  [1084] = {.lex_state = 288},
  [1085] = {.lex_state = 288},
  [1086] = {.lex_state = 288},
  [1087] = {.lex_state = 288},
  [1088] = {.lex_state = 288},
  [1089] = {.lex_state = 288},
  [1090] = {.lex_state = 288},
  [1091] = {.lex_state = 515},
  [1092] = {.lex_state = 515},
  [1093] = {.lex_state = 471},
  [1094] = {.lex_state = 288},
  [1095] = {.lex_state = 288},
  [1096] = {.lex_state = 288},
  [1097] = {.lex_state = 254},
  [1098] = {.lex_state = 461},
  [1099] = {.lex_state = 288},
  [1100] = {.lex_state = 288},
  [1101] = {.lex_state = 254},
  [1102] = {.lex_state = 461},
  [1103] = {.lex_state = 288},
  [1104] = {.lex_state = 288},
  [1105] = {.lex_state = 288},
  [1106] = {.lex_state = 461},
  [1107] = {.lex_state = 288},
  [1108] = {.lex_state = 254},
  [1109] = {.lex_state = 288},
  [1110] = {.lex_state = 254},
  [1111] = {.lex_state = 288},
  [1112] = {.lex_state = 288},
  [1113] = {.lex_state = 288},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_synchronized] = ACTIONS(3),
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
    [aux_sym_catch_formal_parameter_repeat1] = STATE(45),
    [aux_sym_class_or_interface_type_repeat1] = STATE(46),
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
    [anon_sym_synchronized] = ACTIONS(34),
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
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(60),
    [anon_sym_COLON_COLON] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_COLON_COLON] = ACTIONS(62),
    [sym_comment] = ACTIONS(58),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(64),
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
    [anon_sym_SEMI] = ACTIONS(72),
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
    [aux_sym_catch_formal_parameter_repeat1] = STATE(75),
    [aux_sym_class_or_interface_type_repeat1] = STATE(76),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
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
    [anon_sym_synchronized] = ACTIONS(96),
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
    [anon_sym_synchronized] = ACTIONS(140),
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
    [anon_sym_native] = ACTIONS(140),
    [anon_sym_interface] = ACTIONS(140),
    [sym_identifier] = ACTIONS(142),
    [sym_comment] = ACTIONS(58),
  },
  [25] = {
    [sym__semicolon] = STATE(94),
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_comment] = ACTIONS(58),
  },
  [26] = {
    [sym__semicolon] = STATE(94),
    [anon_sym_SEMI] = ACTIONS(144),
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
    [anon_sym_SEMI] = ACTIONS(168),
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
    [anon_sym_SEMI] = ACTIONS(174),
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
    [anon_sym_synchronized] = ACTIONS(96),
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
    [anon_sym_native] = ACTIONS(96),
    [anon_sym_interface] = ACTIONS(96),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(58),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
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
    [anon_sym_synchronized] = ACTIONS(191),
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
    [anon_sym_synchronized] = ACTIONS(197),
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
    [anon_sym_synchronized] = ACTIONS(203),
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
    [anon_sym_synchronized] = ACTIONS(209),
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
    [anon_sym_native] = ACTIONS(209),
    [anon_sym_interface] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(58),
  },
  [36] = {
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_default] = ACTIONS(215),
    [anon_sym_synchronized] = ACTIONS(215),
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
    [anon_sym_native] = ACTIONS(215),
    [anon_sym_interface] = ACTIONS(215),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(58),
  },
  [37] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(105),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [sym_unann_type] = STATE(107),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_class_or_interface_type_repeat1] = STATE(108),
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
    [anon_sym_synchronized] = ACTIONS(225),
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
    [anon_sym_native] = ACTIONS(225),
    [anon_sym_interface] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_comment] = ACTIONS(58),
  },
  [39] = {
    [sym_method_declarator] = STATE(110),
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(58),
  },
  [40] = {
    [sym_dims] = STATE(113),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_identifier] = ACTIONS(237),
    [sym_comment] = ACTIONS(58),
  },
  [41] = {
    [sym_dims] = STATE(113),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
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
    [sym__semicolon] = STATE(118),
    [sym_method_body] = STATE(119),
    [sym_block] = STATE(118),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(58),
  },
  [44] = {
    [sym__statement] = STATE(120),
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
    [aux_sym_catch_formal_parameter_repeat1] = STATE(45),
    [aux_sym_class_or_interface_type_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(243),
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
    [anon_sym_synchronized] = ACTIONS(34),
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
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [45] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_modifier] = STATE(125),
    [sym_type_parameters] = STATE(37),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(126),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(245),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(247),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(249),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [46] = {
    [sym__annotation] = STATE(129),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_open] = ACTIONS(251),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_package] = ACTIONS(253),
    [sym_comment] = ACTIONS(58),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_COLON_COLON] = ACTIONS(255),
    [sym_comment] = ACTIONS(58),
  },
  [48] = {
    [anon_sym_SQUOTE] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(257),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(257),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(257),
    [sym_comment] = ACTIONS(70),
  },
  [49] = {
    [anon_sym_SQUOTE] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(261),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(261),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(261),
    [sym_comment] = ACTIONS(70),
  },
  [50] = {
    [sym_package_or_type_name] = STATE(133),
    [sym_identifier] = ACTIONS(263),
    [sym_comment] = ACTIONS(58),
  },
  [51] = {
    [sym_type_bound] = STATE(135),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_extends] = ACTIONS(267),
    [sym_comment] = ACTIONS(58),
  },
  [52] = {
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
    [sym_identifier] = ACTIONS(181),
    [sym_comment] = ACTIONS(58),
  },
  [53] = {
    [anon_sym_AT] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(58),
  },
  [54] = {
    [anon_sym_GT] = ACTIONS(271),
    [sym_comment] = ACTIONS(58),
  },
  [55] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(138),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(275),
    [sym_comment] = ACTIONS(58),
  },
  [56] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(277),
    [sym_comment] = ACTIONS(58),
  },
  [57] = {
    [aux_sym_inferred_formal_parameter_list_repeat1] = STATE(142),
    [anon_sym_RPAREN] = ACTIONS(279),
    [sym_identifier] = ACTIONS(281),
    [sym_comment] = ACTIONS(58),
  },
  [58] = {
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
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
    [anon_sym_native] = ACTIONS(96),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(58),
  },
  [59] = {
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_this] = ACTIONS(102),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(100),
    [sym_identifier] = ACTIONS(283),
    [sym_comment] = ACTIONS(58),
  },
  [60] = {
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(106),
    [anon_sym_this] = ACTIONS(104),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(106),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(58),
  },
  [61] = {
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_this] = ACTIONS(108),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [sym_identifier] = ACTIONS(287),
    [sym_comment] = ACTIONS(58),
  },
  [62] = {
    [sym_package_or_type_name] = STATE(144),
    [sym_identifier] = ACTIONS(289),
    [sym_comment] = ACTIONS(58),
  },
  [63] = {
    [sym_type_arguments] = STATE(146),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_this] = ACTIONS(134),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(293),
    [sym_comment] = ACTIONS(58),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(295),
    [sym_comment] = ACTIONS(58),
  },
  [65] = {
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
    [anon_sym_boolean] = ACTIONS(297),
    [anon_sym_byte] = ACTIONS(297),
    [anon_sym_short] = ACTIONS(297),
    [anon_sym_int] = ACTIONS(297),
    [anon_sym_long] = ACTIONS(297),
    [anon_sym_char] = ACTIONS(297),
    [anon_sym_float] = ACTIONS(297),
    [anon_sym_double] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_static] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_protected] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_abstract] = ACTIONS(96),
    [anon_sym_final] = ACTIONS(96),
    [anon_sym_strictfp] = ACTIONS(96),
    [anon_sym_native] = ACTIONS(96),
    [sym_identifier] = ACTIONS(300),
    [sym_comment] = ACTIONS(58),
  },
  [66] = {
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
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
    [anon_sym_native] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [67] = {
    [anon_sym_default] = ACTIONS(215),
    [anon_sym_synchronized] = ACTIONS(215),
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
    [anon_sym_native] = ACTIONS(215),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(58),
  },
  [68] = {
    [sym_variable_declarator_id] = STATE(151),
    [anon_sym_this] = ACTIONS(303),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(305),
    [sym_identifier] = ACTIONS(307),
    [sym_comment] = ACTIONS(58),
  },
  [69] = {
    [sym_dims] = STATE(153),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(154),
    [aux_sym_dims_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_this] = ACTIONS(237),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_identifier] = ACTIONS(311),
    [sym_comment] = ACTIONS(58),
  },
  [70] = {
    [sym_dims] = STATE(153),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(154),
    [aux_sym_dims_repeat1] = STATE(155),
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_this] = ACTIONS(237),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_identifier] = ACTIONS(311),
    [sym_comment] = ACTIONS(58),
  },
  [71] = {
    [anon_sym_this] = ACTIONS(237),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_identifier] = ACTIONS(311),
    [sym_comment] = ACTIONS(58),
  },
  [72] = {
    [aux_sym_formal_parameters_repeat1] = STATE(158),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(317),
    [sym_comment] = ACTIONS(58),
  },
  [73] = {
    [aux_sym_formal_parameters_repeat1] = STATE(158),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(317),
    [sym_comment] = ACTIONS(58),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(319),
    [sym_comment] = ACTIONS(58),
  },
  [75] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(159),
    [sym_unann_type] = STATE(160),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
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
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [76] = {
    [sym_integral_type] = STATE(59),
    [sym_floating_point_type] = STATE(59),
    [sym__annotation] = STATE(161),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [sym_unann_type] = STATE(162),
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
  [77] = {
    [anon_sym_DASH_GT] = ACTIONS(130),
    [sym_comment] = ACTIONS(58),
  },
  [78] = {
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_GT_GT_GT] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [sym_comment] = ACTIONS(58),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(327),
    [anon_sym_AMP] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(327),
    [anon_sym_GT_GT_GT] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_QMARK] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_PLUS_PLUS] = ACTIONS(325),
    [anon_sym_DASH_DASH] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_comment] = ACTIONS(58),
  },
  [80] = {
    [sym_identifier] = ACTIONS(329),
    [sym_comment] = ACTIONS(58),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_default] = ACTIONS(333),
    [anon_sym_synchronized] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_boolean] = ACTIONS(333),
    [anon_sym_byte] = ACTIONS(333),
    [anon_sym_short] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_long] = ACTIONS(333),
    [anon_sym_char] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_double] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym_open] = ACTIONS(333),
    [anon_sym_module] = ACTIONS(333),
    [anon_sym_static] = ACTIONS(333),
    [anon_sym_package] = ACTIONS(333),
    [anon_sym_class] = ACTIONS(333),
    [anon_sym_public] = ACTIONS(333),
    [anon_sym_protected] = ACTIONS(333),
    [anon_sym_private] = ACTIONS(333),
    [anon_sym_abstract] = ACTIONS(333),
    [anon_sym_final] = ACTIONS(333),
    [anon_sym_strictfp] = ACTIONS(333),
    [anon_sym_native] = ACTIONS(333),
    [anon_sym_interface] = ACTIONS(333),
    [sym_identifier] = ACTIONS(335),
    [sym_comment] = ACTIONS(58),
  },
  [82] = {
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_default] = ACTIONS(341),
    [anon_sym_synchronized] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_boolean] = ACTIONS(341),
    [anon_sym_byte] = ACTIONS(341),
    [anon_sym_short] = ACTIONS(341),
    [anon_sym_int] = ACTIONS(341),
    [anon_sym_long] = ACTIONS(341),
    [anon_sym_char] = ACTIONS(341),
    [anon_sym_float] = ACTIONS(341),
    [anon_sym_double] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(337),
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
    [anon_sym_native] = ACTIONS(341),
    [anon_sym_interface] = ACTIONS(341),
    [sym_identifier] = ACTIONS(345),
    [sym_comment] = ACTIONS(58),
  },
  [83] = {
    [sym_module_identifier] = STATE(166),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(58),
  },
  [84] = {
    [aux_sym_module_identifier_repeat1] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(349),
    [sym_comment] = ACTIONS(58),
  },
  [85] = {
    [anon_sym_LBRACE] = ACTIONS(351),
    [sym_comment] = ACTIONS(58),
  },
  [86] = {
    [sym__semicolon] = STATE(170),
    [aux_sym_module_identifier_repeat1] = STATE(171),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(349),
    [sym_comment] = ACTIONS(58),
  },
  [87] = {
    [sym_package_or_type_name] = STATE(172),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(58),
  },
  [88] = {
    [sym__semicolon] = STATE(174),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(355),
    [sym_comment] = ACTIONS(58),
  },
  [89] = {
    [sym_type_parameters] = STATE(179),
    [sym_superclass] = STATE(180),
    [sym_super_interfaces] = STATE(181),
    [sym_class_body] = STATE(182),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [90] = {
    [sym_type_parameters] = STATE(185),
    [sym_extends_interfaces] = STATE(186),
    [sym_interface_body] = STATE(187),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_extends] = ACTIONS(367),
    [sym_comment] = ACTIONS(58),
  },
  [91] = {
    [sym_type_argument] = STATE(190),
    [sym_reference_type] = STATE(191),
    [sym_class_or_interface_type] = STATE(192),
    [sym_primitive_type] = STATE(193),
    [sym_integral_type] = STATE(188),
    [sym_floating_point_type] = STATE(188),
    [sym__annotation] = STATE(105),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [aux_sym_class_or_interface_type_repeat1] = STATE(194),
    [anon_sym_boolean] = ACTIONS(369),
    [anon_sym_void] = ACTIONS(369),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(371),
    [sym_comment] = ACTIONS(58),
  },
  [92] = {
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_AT] = ACTIONS(375),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(375),
    [sym_identifier] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_decimal_integer_literal] = ACTIONS(379),
    [sym_hex_integer_literal] = ACTIONS(379),
    [sym_octal_integer_literal] = ACTIONS(379),
    [sym_binary_integer_literal] = ACTIONS(379),
    [sym_decimal_floating_point_literal] = ACTIONS(379),
    [sym_hex_floating_point_literal] = ACTIONS(381),
    [anon_sym_true] = ACTIONS(379),
    [anon_sym_false] = ACTIONS(379),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [sym_string_literal] = ACTIONS(377),
    [sym_null_literal] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_BANG] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [anon_sym_PLUS_PLUS] = ACTIONS(377),
    [anon_sym_DASH_DASH] = ACTIONS(377),
    [anon_sym_default] = ACTIONS(379),
    [anon_sym_synchronized] = ACTIONS(379),
    [anon_sym_boolean] = ACTIONS(379),
    [anon_sym_byte] = ACTIONS(379),
    [anon_sym_short] = ACTIONS(379),
    [anon_sym_int] = ACTIONS(379),
    [anon_sym_long] = ACTIONS(379),
    [anon_sym_char] = ACTIONS(379),
    [anon_sym_float] = ACTIONS(379),
    [anon_sym_double] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_open] = ACTIONS(379),
    [anon_sym_module] = ACTIONS(379),
    [anon_sym_static] = ACTIONS(379),
    [anon_sym_package] = ACTIONS(379),
    [anon_sym_import] = ACTIONS(379),
    [anon_sym_class] = ACTIONS(379),
    [anon_sym_public] = ACTIONS(379),
    [anon_sym_protected] = ACTIONS(379),
    [anon_sym_private] = ACTIONS(379),
    [anon_sym_abstract] = ACTIONS(379),
    [anon_sym_final] = ACTIONS(379),
    [anon_sym_strictfp] = ACTIONS(379),
    [anon_sym_native] = ACTIONS(379),
    [anon_sym_interface] = ACTIONS(379),
    [sym_identifier] = ACTIONS(381),
    [sym_comment] = ACTIONS(58),
  },
  [94] = {
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
    [anon_sym_synchronized] = ACTIONS(385),
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
    [anon_sym_native] = ACTIONS(385),
    [anon_sym_interface] = ACTIONS(385),
    [sym_identifier] = ACTIONS(387),
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
    [sym__expression] = STATE(199),
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
  [100] = {
    [sym__expression] = STATE(202),
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
  [101] = {
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(327),
    [anon_sym_AMP] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(327),
    [anon_sym_GT_GT_GT] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_QMARK] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_PLUS_PLUS] = ACTIONS(325),
    [anon_sym_DASH_DASH] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_comment] = ACTIONS(58),
  },
  [102] = {
    [sym__expression] = STATE(205),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_lambda_body] = STATE(206),
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
  [103] = {
    [sym_package_or_type_name] = STATE(208),
    [sym_identifier] = ACTIONS(397),
    [sym_comment] = ACTIONS(58),
  },
  [104] = {
    [sym_type_arguments] = STATE(92),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(58),
  },
  [105] = {
    [anon_sym_boolean] = ACTIONS(181),
    [anon_sym_byte] = ACTIONS(181),
    [anon_sym_short] = ACTIONS(181),
    [anon_sym_int] = ACTIONS(181),
    [anon_sym_long] = ACTIONS(181),
    [anon_sym_char] = ACTIONS(181),
    [anon_sym_float] = ACTIONS(181),
    [anon_sym_double] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(269),
    [sym_identifier] = ACTIONS(399),
    [sym_comment] = ACTIONS(58),
  },
  [106] = {
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
  [107] = {
    [sym_method_declarator] = STATE(209),
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(58),
  },
  [108] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(161),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [sym_unann_type] = STATE(210),
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
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [sym_comment] = ACTIONS(58),
  },
  [110] = {
    [sym_throws] = STATE(213),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(403),
    [anon_sym_throws] = ACTIONS(405),
    [sym_comment] = ACTIONS(58),
  },
  [111] = {
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_comment] = ACTIONS(58),
  },
  [112] = {
    [sym_package_or_type_name] = STATE(82),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(58),
  },
  [113] = {
    [anon_sym_DOT_DOT_DOT] = ACTIONS(409),
    [sym_identifier] = ACTIONS(411),
    [sym_comment] = ACTIONS(58),
  },
  [114] = {
    [sym__annotation] = STATE(129),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [115] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(216),
    [anon_sym_SEMI] = ACTIONS(415),
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
  [116] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(218),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(419),
    [sym_comment] = ACTIONS(58),
  },
  [117] = {
    [sym_statement] = STATE(224),
    [sym_if_then_statement] = STATE(225),
    [sym_if_then_else_statement] = STATE(225),
    [sym__annotation] = STATE(220),
    [sym_normal_annotation] = STATE(226),
    [sym_marker_annotation] = STATE(226),
    [sym_single_element_annotation] = STATE(226),
    [sym_class_declaration] = STATE(224),
    [sym_normal_class_declaration] = STATE(227),
    [sym_modifier] = STATE(228),
    [sym_block_statements] = STATE(229),
    [sym_block_statement] = STATE(230),
    [sym_local_variable_declaration_statement] = STATE(224),
    [sym_local_variable_declaration] = STATE(231),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(232),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_default] = ACTIONS(423),
    [anon_sym_synchronized] = ACTIONS(423),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_static] = ACTIONS(423),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_public] = ACTIONS(423),
    [anon_sym_protected] = ACTIONS(423),
    [anon_sym_private] = ACTIONS(423),
    [anon_sym_abstract] = ACTIONS(423),
    [anon_sym_final] = ACTIONS(423),
    [anon_sym_strictfp] = ACTIONS(423),
    [anon_sym_native] = ACTIONS(423),
    [sym_comment] = ACTIONS(58),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [sym_decimal_integer_literal] = ACTIONS(433),
    [sym_hex_integer_literal] = ACTIONS(433),
    [sym_octal_integer_literal] = ACTIONS(433),
    [sym_binary_integer_literal] = ACTIONS(433),
    [sym_decimal_floating_point_literal] = ACTIONS(433),
    [sym_hex_floating_point_literal] = ACTIONS(435),
    [anon_sym_true] = ACTIONS(433),
    [anon_sym_false] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(431),
    [sym_string_literal] = ACTIONS(431),
    [sym_null_literal] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_BANG] = ACTIONS(431),
    [anon_sym_TILDE] = ACTIONS(431),
    [anon_sym_PLUS_PLUS] = ACTIONS(431),
    [anon_sym_DASH_DASH] = ACTIONS(431),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_synchronized] = ACTIONS(433),
    [anon_sym_boolean] = ACTIONS(433),
    [anon_sym_byte] = ACTIONS(433),
    [anon_sym_short] = ACTIONS(433),
    [anon_sym_int] = ACTIONS(433),
    [anon_sym_long] = ACTIONS(433),
    [anon_sym_char] = ACTIONS(433),
    [anon_sym_float] = ACTIONS(433),
    [anon_sym_double] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(431),
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
    [anon_sym_native] = ACTIONS(433),
    [anon_sym_interface] = ACTIONS(433),
    [sym_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(58),
  },
  [119] = {
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
    [anon_sym_synchronized] = ACTIONS(439),
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
    [anon_sym_native] = ACTIONS(439),
    [anon_sym_interface] = ACTIONS(439),
    [sym_identifier] = ACTIONS(441),
    [sym_comment] = ACTIONS(58),
  },
  [120] = {
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
    [anon_sym_synchronized] = ACTIONS(445),
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
    [anon_sym_native] = ACTIONS(445),
    [anon_sym_interface] = ACTIONS(445),
    [sym_identifier] = ACTIONS(447),
    [sym_comment] = ACTIONS(58),
  },
  [121] = {
    [sym_package_or_type_name] = STATE(235),
    [anon_sym_interface] = ACTIONS(449),
    [sym_identifier] = ACTIONS(451),
    [sym_comment] = ACTIONS(58),
  },
  [122] = {
    [sym_identifier] = ACTIONS(453),
    [sym_comment] = ACTIONS(58),
  },
  [123] = {
    [sym_identifier] = ACTIONS(455),
    [sym_comment] = ACTIONS(58),
  },
  [124] = {
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
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
    [anon_sym_native] = ACTIONS(185),
    [anon_sym_interface] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [125] = {
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_default] = ACTIONS(459),
    [anon_sym_synchronized] = ACTIONS(459),
    [anon_sym_boolean] = ACTIONS(459),
    [anon_sym_byte] = ACTIONS(459),
    [anon_sym_short] = ACTIONS(459),
    [anon_sym_int] = ACTIONS(459),
    [anon_sym_long] = ACTIONS(459),
    [anon_sym_char] = ACTIONS(459),
    [anon_sym_float] = ACTIONS(459),
    [anon_sym_double] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_static] = ACTIONS(459),
    [anon_sym_class] = ACTIONS(459),
    [anon_sym_public] = ACTIONS(459),
    [anon_sym_protected] = ACTIONS(459),
    [anon_sym_private] = ACTIONS(459),
    [anon_sym_abstract] = ACTIONS(459),
    [anon_sym_final] = ACTIONS(459),
    [anon_sym_strictfp] = ACTIONS(459),
    [anon_sym_native] = ACTIONS(459),
    [anon_sym_interface] = ACTIONS(459),
    [sym_identifier] = ACTIONS(461),
    [sym_comment] = ACTIONS(58),
  },
  [126] = {
    [sym__semicolon] = STATE(118),
    [sym_method_body] = STATE(238),
    [sym_block] = STATE(118),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(58),
  },
  [127] = {
    [anon_sym_module] = ACTIONS(463),
    [sym_comment] = ACTIONS(58),
  },
  [128] = {
    [sym_identifier] = ACTIONS(465),
    [sym_comment] = ACTIONS(58),
  },
  [129] = {
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_AT] = ACTIONS(467),
    [anon_sym_open] = ACTIONS(467),
    [anon_sym_module] = ACTIONS(467),
    [anon_sym_package] = ACTIONS(467),
    [sym_comment] = ACTIONS(58),
  },
  [130] = {
    [anon_sym_SEMI] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_COLON_COLON] = ACTIONS(469),
    [sym_comment] = ACTIONS(58),
  },
  [131] = {
    [anon_sym_SQUOTE] = ACTIONS(471),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(471),
    [sym_comment] = ACTIONS(70),
  },
  [132] = {
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_AT] = ACTIONS(331),
    [sym_identifier] = ACTIONS(333),
    [sym_comment] = ACTIONS(58),
  },
  [133] = {
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(475),
    [anon_sym_AT] = ACTIONS(337),
    [sym_identifier] = ACTIONS(341),
    [sym_comment] = ACTIONS(58),
  },
  [134] = {
    [sym_class_or_interface_type] = STATE(243),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(244),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [135] = {
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(479),
    [sym_comment] = ACTIONS(58),
  },
  [136] = {
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
  [137] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_type_parameter] = STATE(245),
    [aux_sym_class_or_interface_type_repeat1] = STATE(56),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(58),
  },
  [138] = {
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(489),
    [sym_comment] = ACTIONS(58),
  },
  [139] = {
    [sym_type_bound] = STATE(247),
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_extends] = ACTIONS(267),
    [sym_comment] = ACTIONS(58),
  },
  [140] = {
    [anon_sym_AT] = ACTIONS(467),
    [sym_identifier] = ACTIONS(491),
    [sym_comment] = ACTIONS(58),
  },
  [141] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [sym_comment] = ACTIONS(58),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(495),
    [sym_identifier] = ACTIONS(497),
    [sym_comment] = ACTIONS(58),
  },
  [143] = {
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_default] = ACTIONS(333),
    [anon_sym_synchronized] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_boolean] = ACTIONS(333),
    [anon_sym_byte] = ACTIONS(333),
    [anon_sym_short] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_long] = ACTIONS(333),
    [anon_sym_char] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_double] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym_static] = ACTIONS(333),
    [anon_sym_public] = ACTIONS(333),
    [anon_sym_protected] = ACTIONS(333),
    [anon_sym_private] = ACTIONS(333),
    [anon_sym_abstract] = ACTIONS(333),
    [anon_sym_final] = ACTIONS(333),
    [anon_sym_strictfp] = ACTIONS(333),
    [anon_sym_native] = ACTIONS(333),
    [sym_identifier] = ACTIONS(335),
    [sym_comment] = ACTIONS(58),
  },
  [144] = {
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_default] = ACTIONS(341),
    [anon_sym_synchronized] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(501),
    [anon_sym_boolean] = ACTIONS(341),
    [anon_sym_byte] = ACTIONS(341),
    [anon_sym_short] = ACTIONS(341),
    [anon_sym_int] = ACTIONS(341),
    [anon_sym_long] = ACTIONS(341),
    [anon_sym_char] = ACTIONS(341),
    [anon_sym_float] = ACTIONS(341),
    [anon_sym_double] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(337),
    [anon_sym_static] = ACTIONS(341),
    [anon_sym_public] = ACTIONS(341),
    [anon_sym_protected] = ACTIONS(341),
    [anon_sym_private] = ACTIONS(341),
    [anon_sym_abstract] = ACTIONS(341),
    [anon_sym_final] = ACTIONS(341),
    [anon_sym_strictfp] = ACTIONS(341),
    [anon_sym_native] = ACTIONS(341),
    [sym_identifier] = ACTIONS(345),
    [sym_comment] = ACTIONS(58),
  },
  [145] = {
    [sym_type_argument] = STATE(252),
    [sym_reference_type] = STATE(191),
    [sym_class_or_interface_type] = STATE(192),
    [sym_primitive_type] = STATE(193),
    [sym_integral_type] = STATE(188),
    [sym_floating_point_type] = STATE(188),
    [sym__annotation] = STATE(105),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [aux_sym_class_or_interface_type_repeat1] = STATE(194),
    [anon_sym_boolean] = ACTIONS(369),
    [anon_sym_void] = ACTIONS(369),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(371),
    [sym_comment] = ACTIONS(58),
  },
  [146] = {
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_AT] = ACTIONS(375),
    [anon_sym_this] = ACTIONS(373),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(375),
    [sym_identifier] = ACTIONS(503),
    [sym_comment] = ACTIONS(58),
  },
  [147] = {
    [anon_sym_DASH_GT] = ACTIONS(505),
    [sym_comment] = ACTIONS(58),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(58),
  },
  [149] = {
    [sym_variable_declarator] = STATE(254),
    [sym_variable_declarator_id] = STATE(255),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [150] = {
    [sym_dims] = STATE(257),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_DOT] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(515),
    [sym_comment] = ACTIONS(58),
  },
  [152] = {
    [anon_sym_RBRACK] = ACTIONS(517),
    [sym_comment] = ACTIONS(58),
  },
  [153] = {
    [anon_sym_this] = ACTIONS(411),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(409),
    [sym_identifier] = ACTIONS(519),
    [sym_comment] = ACTIONS(58),
  },
  [154] = {
    [sym__annotation] = STATE(129),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [155] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(260),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_this] = ACTIONS(417),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(415),
    [sym_identifier] = ACTIONS(523),
    [sym_comment] = ACTIONS(58),
  },
  [156] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(525),
    [sym_comment] = ACTIONS(58),
  },
  [157] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(67),
    [sym_unann_type] = STATE(263),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_formal_parameter] = STATE(264),
    [sym_last_formal_parameter] = STATE(265),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(75),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
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
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(527),
    [sym_comment] = ACTIONS(58),
  },
  [159] = {
    [anon_sym_default] = ACTIONS(459),
    [anon_sym_synchronized] = ACTIONS(459),
    [anon_sym_boolean] = ACTIONS(459),
    [anon_sym_byte] = ACTIONS(459),
    [anon_sym_short] = ACTIONS(459),
    [anon_sym_int] = ACTIONS(459),
    [anon_sym_long] = ACTIONS(459),
    [anon_sym_char] = ACTIONS(459),
    [anon_sym_float] = ACTIONS(459),
    [anon_sym_double] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_static] = ACTIONS(459),
    [anon_sym_public] = ACTIONS(459),
    [anon_sym_protected] = ACTIONS(459),
    [anon_sym_private] = ACTIONS(459),
    [anon_sym_abstract] = ACTIONS(459),
    [anon_sym_final] = ACTIONS(459),
    [anon_sym_strictfp] = ACTIONS(459),
    [anon_sym_native] = ACTIONS(459),
    [sym_identifier] = ACTIONS(461),
    [sym_comment] = ACTIONS(58),
  },
  [160] = {
    [sym_variable_declarator_id] = STATE(268),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(529),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [161] = {
    [anon_sym_boolean] = ACTIONS(491),
    [anon_sym_byte] = ACTIONS(491),
    [anon_sym_short] = ACTIONS(491),
    [anon_sym_int] = ACTIONS(491),
    [anon_sym_long] = ACTIONS(491),
    [anon_sym_char] = ACTIONS(491),
    [anon_sym_float] = ACTIONS(491),
    [anon_sym_double] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(467),
    [sym_identifier] = ACTIONS(531),
    [sym_comment] = ACTIONS(58),
  },
  [162] = {
    [anon_sym_this] = ACTIONS(533),
    [sym_identifier] = ACTIONS(535),
    [sym_comment] = ACTIONS(58),
  },
  [163] = {
    [sym_annotation_type_body] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(537),
    [sym_comment] = ACTIONS(58),
  },
  [164] = {
    [sym__literal] = STATE(275),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(276),
    [sym_element_value_pair] = STATE(277),
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
  [165] = {
    [sym_identifier] = ACTIONS(543),
    [sym_comment] = ACTIONS(58),
  },
  [166] = {
    [anon_sym_LBRACE] = ACTIONS(545),
    [sym_comment] = ACTIONS(58),
  },
  [167] = {
    [sym_identifier] = ACTIONS(547),
    [sym_comment] = ACTIONS(58),
  },
  [168] = {
    [anon_sym_LBRACE] = ACTIONS(549),
    [anon_sym_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(58),
  },
  [169] = {
    [sym_module_directive] = STATE(287),
    [aux_sym_module_declaration_repeat1] = STATE(288),
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [170] = {
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
    [anon_sym_synchronized] = ACTIONS(565),
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
    [anon_sym_native] = ACTIONS(565),
    [anon_sym_interface] = ACTIONS(565),
    [sym_identifier] = ACTIONS(567),
    [sym_comment] = ACTIONS(58),
  },
  [171] = {
    [sym__semicolon] = STATE(289),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(58),
  },
  [172] = {
    [anon_sym_DOT] = ACTIONS(569),
    [sym_comment] = ACTIONS(58),
  },
  [173] = {
    [anon_sym_STAR] = ACTIONS(571),
    [sym_identifier] = ACTIONS(543),
    [sym_comment] = ACTIONS(58),
  },
  [174] = {
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
    [anon_sym_synchronized] = ACTIONS(575),
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
    [anon_sym_native] = ACTIONS(575),
    [anon_sym_interface] = ACTIONS(575),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(58),
  },
  [175] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_type_parameter_list] = STATE(292),
    [sym_type_parameter] = STATE(55),
    [aux_sym_class_or_interface_type_repeat1] = STATE(56),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(58),
  },
  [176] = {
    [sym__semicolon] = STATE(300),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(300),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(302),
    [sym_class_body_declaration] = STATE(303),
    [sym_constructor_declaration] = STATE(304),
    [sym_constructor_declarator] = STATE(305),
    [sym_class_member_declaration] = STATE(304),
    [sym_interface_declaration] = STATE(300),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(307),
    [sym_block] = STATE(304),
    [sym_method_declaration] = STATE(300),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(308),
    [aux_sym_class_body_repeat1] = STATE(309),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(591),
    [sym_comment] = ACTIONS(58),
  },
  [177] = {
    [sym_class_or_interface_type] = STATE(311),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(312),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [178] = {
    [sym_class_or_interface_type] = STATE(313),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_interface_type_list] = STATE(314),
    [aux_sym_class_or_interface_type_repeat1] = STATE(244),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [179] = {
    [sym_superclass] = STATE(315),
    [sym_super_interfaces] = STATE(316),
    [sym_class_body] = STATE(317),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [180] = {
    [sym_super_interfaces] = STATE(316),
    [sym_class_body] = STATE(317),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [181] = {
    [sym_class_body] = STATE(317),
    [anon_sym_LBRACE] = ACTIONS(359),
    [sym_comment] = ACTIONS(58),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(595),
    [sym_decimal_integer_literal] = ACTIONS(597),
    [sym_hex_integer_literal] = ACTIONS(597),
    [sym_octal_integer_literal] = ACTIONS(597),
    [sym_binary_integer_literal] = ACTIONS(597),
    [sym_decimal_floating_point_literal] = ACTIONS(597),
    [sym_hex_floating_point_literal] = ACTIONS(599),
    [anon_sym_true] = ACTIONS(597),
    [anon_sym_false] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(595),
    [sym_string_literal] = ACTIONS(595),
    [sym_null_literal] = ACTIONS(597),
    [anon_sym_LT] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(595),
    [anon_sym_BANG] = ACTIONS(595),
    [anon_sym_TILDE] = ACTIONS(595),
    [anon_sym_PLUS_PLUS] = ACTIONS(595),
    [anon_sym_DASH_DASH] = ACTIONS(595),
    [anon_sym_default] = ACTIONS(597),
    [anon_sym_synchronized] = ACTIONS(597),
    [anon_sym_boolean] = ACTIONS(597),
    [anon_sym_byte] = ACTIONS(597),
    [anon_sym_short] = ACTIONS(597),
    [anon_sym_int] = ACTIONS(597),
    [anon_sym_long] = ACTIONS(597),
    [anon_sym_char] = ACTIONS(597),
    [anon_sym_float] = ACTIONS(597),
    [anon_sym_double] = ACTIONS(597),
    [anon_sym_AT] = ACTIONS(595),
    [anon_sym_open] = ACTIONS(597),
    [anon_sym_module] = ACTIONS(597),
    [anon_sym_static] = ACTIONS(597),
    [anon_sym_package] = ACTIONS(597),
    [anon_sym_import] = ACTIONS(597),
    [anon_sym_class] = ACTIONS(597),
    [anon_sym_public] = ACTIONS(597),
    [anon_sym_protected] = ACTIONS(597),
    [anon_sym_private] = ACTIONS(597),
    [anon_sym_abstract] = ACTIONS(597),
    [anon_sym_final] = ACTIONS(597),
    [anon_sym_strictfp] = ACTIONS(597),
    [anon_sym_native] = ACTIONS(597),
    [anon_sym_interface] = ACTIONS(597),
    [sym_identifier] = ACTIONS(599),
    [sym_comment] = ACTIONS(58),
  },
  [183] = {
    [sym__semicolon] = STATE(319),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(319),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(319),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_interface_member_declaration] = STATE(320),
    [sym_constant_declaration] = STATE(319),
    [sym_unann_type] = STATE(321),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(307),
    [sym_method_declaration] = STATE(319),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(322),
    [aux_sym_interface_body_repeat1] = STATE(323),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [184] = {
    [sym_class_or_interface_type] = STATE(313),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_interface_type_list] = STATE(324),
    [aux_sym_class_or_interface_type_repeat1] = STATE(244),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [185] = {
    [sym_extends_interfaces] = STATE(325),
    [sym_interface_body] = STATE(326),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_extends] = ACTIONS(367),
    [sym_comment] = ACTIONS(58),
  },
  [186] = {
    [sym_interface_body] = STATE(326),
    [anon_sym_LBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(58),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [sym_decimal_integer_literal] = ACTIONS(605),
    [sym_hex_integer_literal] = ACTIONS(605),
    [sym_octal_integer_literal] = ACTIONS(605),
    [sym_binary_integer_literal] = ACTIONS(605),
    [sym_decimal_floating_point_literal] = ACTIONS(605),
    [sym_hex_floating_point_literal] = ACTIONS(607),
    [anon_sym_true] = ACTIONS(605),
    [anon_sym_false] = ACTIONS(605),
    [anon_sym_SQUOTE] = ACTIONS(603),
    [sym_string_literal] = ACTIONS(603),
    [sym_null_literal] = ACTIONS(605),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_BANG] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_PLUS_PLUS] = ACTIONS(603),
    [anon_sym_DASH_DASH] = ACTIONS(603),
    [anon_sym_default] = ACTIONS(605),
    [anon_sym_synchronized] = ACTIONS(605),
    [anon_sym_boolean] = ACTIONS(605),
    [anon_sym_byte] = ACTIONS(605),
    [anon_sym_short] = ACTIONS(605),
    [anon_sym_int] = ACTIONS(605),
    [anon_sym_long] = ACTIONS(605),
    [anon_sym_char] = ACTIONS(605),
    [anon_sym_float] = ACTIONS(605),
    [anon_sym_double] = ACTIONS(605),
    [anon_sym_AT] = ACTIONS(603),
    [anon_sym_open] = ACTIONS(605),
    [anon_sym_module] = ACTIONS(605),
    [anon_sym_static] = ACTIONS(605),
    [anon_sym_package] = ACTIONS(605),
    [anon_sym_import] = ACTIONS(605),
    [anon_sym_class] = ACTIONS(605),
    [anon_sym_public] = ACTIONS(605),
    [anon_sym_protected] = ACTIONS(605),
    [anon_sym_private] = ACTIONS(605),
    [anon_sym_abstract] = ACTIONS(605),
    [anon_sym_final] = ACTIONS(605),
    [anon_sym_strictfp] = ACTIONS(605),
    [anon_sym_native] = ACTIONS(605),
    [anon_sym_interface] = ACTIONS(605),
    [sym_identifier] = ACTIONS(607),
    [sym_comment] = ACTIONS(58),
  },
  [188] = {
    [anon_sym_LBRACK] = ACTIONS(609),
    [anon_sym_AT] = ACTIONS(609),
    [sym_comment] = ACTIONS(58),
  },
  [189] = {
    [sym_type_arguments] = STATE(328),
    [aux_sym_class_or_interface_type_repeat2] = STATE(329),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(611),
    [anon_sym_COMMA] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(611),
    [anon_sym_DOT] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(611),
    [anon_sym_AT] = ACTIONS(611),
    [sym_comment] = ACTIONS(58),
  },
  [190] = {
    [aux_sym_type_arguments_repeat1] = STATE(332),
    [anon_sym_GT] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(617),
    [sym_comment] = ACTIONS(58),
  },
  [191] = {
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_COMMA] = ACTIONS(619),
    [sym_comment] = ACTIONS(58),
  },
  [192] = {
    [sym_dims] = STATE(333),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_COMMA] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [193] = {
    [sym_dims] = STATE(333),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [194] = {
    [sym_integral_type] = STATE(334),
    [sym_floating_point_type] = STATE(334),
    [sym__annotation] = STATE(161),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [anon_sym_boolean] = ACTIONS(623),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(625),
    [sym_comment] = ACTIONS(58),
  },
  [195] = {
    [anon_sym_SEMI] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [anon_sym_BANG_EQ] = ACTIONS(627),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [196] = {
    [anon_sym_SEMI] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [197] = {
    [anon_sym_SEMI] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [198] = {
    [anon_sym_SEMI] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [199] = {
    [anon_sym_SEMI] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [anon_sym_BANG_EQ] = ACTIONS(627),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(627),
    [anon_sym_SLASH] = ACTIONS(629),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(627),
    [anon_sym_LT_LT] = ACTIONS(627),
    [anon_sym_GT_GT] = ACTIONS(629),
    [anon_sym_GT_GT_GT] = ACTIONS(627),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_RBRACE] = ACTIONS(627),
    [anon_sym_RBRACK] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [200] = {
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
  [201] = {
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
  [202] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(651),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [203] = {
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
  [204] = {
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
  [205] = {
    [sym_block] = STATE(349),
    [anon_sym_GT] = ACTIONS(653),
    [anon_sym_LT] = ACTIONS(653),
    [anon_sym_EQ_EQ] = ACTIONS(655),
    [anon_sym_GT_EQ] = ACTIONS(655),
    [anon_sym_LT_EQ] = ACTIONS(655),
    [anon_sym_BANG_EQ] = ACTIONS(655),
    [anon_sym_AMP_AMP] = ACTIONS(657),
    [anon_sym_PIPE_PIPE] = ACTIONS(659),
    [anon_sym_PLUS] = ACTIONS(661),
    [anon_sym_DASH] = ACTIONS(661),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_SLASH] = ACTIONS(665),
    [anon_sym_AMP] = ACTIONS(667),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_CARET] = ACTIONS(659),
    [anon_sym_PERCENT] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(665),
    [anon_sym_GT_GT_GT] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(671),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(58),
  },
  [206] = {
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(675),
    [anon_sym_LT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(673),
    [anon_sym_GT_EQ] = ACTIONS(673),
    [anon_sym_LT_EQ] = ACTIONS(673),
    [anon_sym_BANG_EQ] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(673),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_AMP] = ACTIONS(675),
    [anon_sym_PIPE] = ACTIONS(675),
    [anon_sym_CARET] = ACTIONS(673),
    [anon_sym_PERCENT] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(675),
    [anon_sym_GT_GT_GT] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_COMMA] = ACTIONS(673),
    [anon_sym_QMARK] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(673),
    [anon_sym_PLUS_PLUS] = ACTIONS(673),
    [anon_sym_DASH_DASH] = ACTIONS(673),
    [anon_sym_LBRACE] = ACTIONS(673),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(673),
    [sym_comment] = ACTIONS(58),
  },
  [207] = {
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_boolean] = ACTIONS(333),
    [anon_sym_byte] = ACTIONS(333),
    [anon_sym_short] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_long] = ACTIONS(333),
    [anon_sym_char] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_double] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(331),
    [sym_identifier] = ACTIONS(335),
    [sym_comment] = ACTIONS(58),
  },
  [208] = {
    [anon_sym_LPAREN] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(679),
    [anon_sym_boolean] = ACTIONS(341),
    [anon_sym_byte] = ACTIONS(341),
    [anon_sym_short] = ACTIONS(341),
    [anon_sym_int] = ACTIONS(341),
    [anon_sym_long] = ACTIONS(341),
    [anon_sym_char] = ACTIONS(341),
    [anon_sym_float] = ACTIONS(341),
    [anon_sym_double] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(337),
    [sym_identifier] = ACTIONS(345),
    [sym_comment] = ACTIONS(58),
  },
  [209] = {
    [sym_throws] = STATE(352),
    [anon_sym_SEMI] = ACTIONS(681),
    [anon_sym_LBRACE] = ACTIONS(681),
    [anon_sym_throws] = ACTIONS(405),
    [sym_comment] = ACTIONS(58),
  },
  [210] = {
    [sym_method_declarator] = STATE(353),
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(58),
  },
  [211] = {
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
    [sym__formal_parameter_list] = STATE(355),
    [sym_formal_parameter] = STATE(72),
    [sym_receiver_parameter] = STATE(73),
    [sym_last_formal_parameter] = STATE(74),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(75),
    [aux_sym_class_or_interface_type_repeat1] = STATE(76),
    [anon_sym_RPAREN] = ACTIONS(683),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
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
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [212] = {
    [sym_class_or_interface_type] = STATE(357),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_exception_type_list] = STATE(358),
    [sym_exception_type] = STATE(359),
    [aux_sym_class_or_interface_type_repeat1] = STATE(360),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(685),
    [sym_comment] = ACTIONS(58),
  },
  [213] = {
    [anon_sym_SEMI] = ACTIONS(681),
    [anon_sym_LBRACE] = ACTIONS(681),
    [sym_comment] = ACTIONS(58),
  },
  [214] = {
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_EQ] = ACTIONS(687),
    [anon_sym_GT] = ACTIONS(687),
    [anon_sym_RPAREN] = ACTIONS(687),
    [anon_sym_COMMA] = ACTIONS(687),
    [anon_sym_LBRACE] = ACTIONS(687),
    [anon_sym_DOT] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(687),
    [anon_sym_AT] = ACTIONS(687),
    [anon_sym_COLON_COLON] = ACTIONS(687),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(687),
    [sym_identifier] = ACTIONS(689),
    [sym_comment] = ACTIONS(58),
  },
  [215] = {
    [anon_sym_RBRACK] = ACTIONS(691),
    [sym_comment] = ACTIONS(58),
  },
  [216] = {
    [sym__annotation] = STATE(129),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [217] = {
    [sym_type_arguments] = STATE(363),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(695),
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_AT] = ACTIONS(697),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(697),
    [sym_identifier] = ACTIONS(695),
    [sym_comment] = ACTIONS(58),
  },
  [218] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(699),
    [sym_comment] = ACTIONS(58),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(701),
    [anon_sym_SEMI] = ACTIONS(701),
    [sym_decimal_integer_literal] = ACTIONS(703),
    [sym_hex_integer_literal] = ACTIONS(703),
    [sym_octal_integer_literal] = ACTIONS(703),
    [sym_binary_integer_literal] = ACTIONS(703),
    [sym_decimal_floating_point_literal] = ACTIONS(703),
    [sym_hex_floating_point_literal] = ACTIONS(705),
    [anon_sym_true] = ACTIONS(703),
    [anon_sym_false] = ACTIONS(703),
    [anon_sym_SQUOTE] = ACTIONS(701),
    [sym_string_literal] = ACTIONS(701),
    [sym_null_literal] = ACTIONS(703),
    [anon_sym_GT] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(703),
    [anon_sym_EQ_EQ] = ACTIONS(701),
    [anon_sym_GT_EQ] = ACTIONS(701),
    [anon_sym_LT_EQ] = ACTIONS(701),
    [anon_sym_BANG_EQ] = ACTIONS(701),
    [anon_sym_AMP_AMP] = ACTIONS(701),
    [anon_sym_PIPE_PIPE] = ACTIONS(701),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(703),
    [anon_sym_STAR] = ACTIONS(701),
    [anon_sym_SLASH] = ACTIONS(703),
    [anon_sym_AMP] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [anon_sym_CARET] = ACTIONS(701),
    [anon_sym_PERCENT] = ACTIONS(701),
    [anon_sym_LT_LT] = ACTIONS(701),
    [anon_sym_GT_GT] = ACTIONS(703),
    [anon_sym_GT_GT_GT] = ACTIONS(701),
    [anon_sym_LPAREN] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_QMARK] = ACTIONS(701),
    [anon_sym_COLON] = ACTIONS(701),
    [anon_sym_BANG] = ACTIONS(703),
    [anon_sym_TILDE] = ACTIONS(701),
    [anon_sym_PLUS_PLUS] = ACTIONS(701),
    [anon_sym_DASH_DASH] = ACTIONS(701),
    [anon_sym_LBRACE] = ACTIONS(701),
    [anon_sym_RBRACE] = ACTIONS(701),
    [anon_sym_default] = ACTIONS(703),
    [anon_sym_synchronized] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(701),
    [anon_sym_boolean] = ACTIONS(703),
    [anon_sym_byte] = ACTIONS(703),
    [anon_sym_short] = ACTIONS(703),
    [anon_sym_int] = ACTIONS(703),
    [anon_sym_long] = ACTIONS(703),
    [anon_sym_char] = ACTIONS(703),
    [anon_sym_float] = ACTIONS(703),
    [anon_sym_double] = ACTIONS(703),
    [anon_sym_AT] = ACTIONS(701),
    [anon_sym_open] = ACTIONS(703),
    [anon_sym_module] = ACTIONS(703),
    [anon_sym_static] = ACTIONS(703),
    [anon_sym_package] = ACTIONS(703),
    [anon_sym_import] = ACTIONS(703),
    [anon_sym_class] = ACTIONS(703),
    [anon_sym_public] = ACTIONS(703),
    [anon_sym_protected] = ACTIONS(703),
    [anon_sym_private] = ACTIONS(703),
    [anon_sym_abstract] = ACTIONS(703),
    [anon_sym_final] = ACTIONS(703),
    [anon_sym_strictfp] = ACTIONS(703),
    [anon_sym_native] = ACTIONS(703),
    [anon_sym_interface] = ACTIONS(703),
    [sym_identifier] = ACTIONS(705),
    [sym_comment] = ACTIONS(58),
  },
  [220] = {
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
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
    [anon_sym_native] = ACTIONS(96),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(58),
  },
  [221] = {
    [anon_sym_LPAREN] = ACTIONS(707),
    [sym_comment] = ACTIONS(58),
  },
  [222] = {
    [sym_package_or_type_name] = STATE(367),
    [sym_identifier] = ACTIONS(709),
    [sym_comment] = ACTIONS(58),
  },
  [223] = {
    [sym_identifier] = ACTIONS(711),
    [sym_comment] = ACTIONS(58),
  },
  [224] = {
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_default] = ACTIONS(713),
    [anon_sym_synchronized] = ACTIONS(713),
    [anon_sym_if] = ACTIONS(713),
    [anon_sym_AT] = ACTIONS(713),
    [anon_sym_static] = ACTIONS(713),
    [anon_sym_class] = ACTIONS(713),
    [anon_sym_public] = ACTIONS(713),
    [anon_sym_protected] = ACTIONS(713),
    [anon_sym_private] = ACTIONS(713),
    [anon_sym_abstract] = ACTIONS(713),
    [anon_sym_final] = ACTIONS(713),
    [anon_sym_strictfp] = ACTIONS(713),
    [anon_sym_native] = ACTIONS(713),
    [sym_comment] = ACTIONS(58),
  },
  [225] = {
    [anon_sym_RBRACE] = ACTIONS(715),
    [anon_sym_default] = ACTIONS(715),
    [anon_sym_synchronized] = ACTIONS(715),
    [anon_sym_if] = ACTIONS(715),
    [anon_sym_AT] = ACTIONS(715),
    [anon_sym_static] = ACTIONS(715),
    [anon_sym_class] = ACTIONS(715),
    [anon_sym_public] = ACTIONS(715),
    [anon_sym_protected] = ACTIONS(715),
    [anon_sym_private] = ACTIONS(715),
    [anon_sym_abstract] = ACTIONS(715),
    [anon_sym_final] = ACTIONS(715),
    [anon_sym_strictfp] = ACTIONS(715),
    [anon_sym_native] = ACTIONS(715),
    [sym_comment] = ACTIONS(58),
  },
  [226] = {
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
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
    [anon_sym_native] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [227] = {
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(207),
    [anon_sym_synchronized] = ACTIONS(207),
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
    [anon_sym_native] = ACTIONS(207),
    [sym_comment] = ACTIONS(58),
  },
  [228] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym_unann_type] = STATE(369),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_default] = ACTIONS(215),
    [anon_sym_synchronized] = ACTIONS(215),
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
    [anon_sym_native] = ACTIONS(215),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [229] = {
    [anon_sym_RBRACE] = ACTIONS(717),
    [sym_comment] = ACTIONS(58),
  },
  [230] = {
    [sym_statement] = STATE(224),
    [sym_if_then_statement] = STATE(225),
    [sym_if_then_else_statement] = STATE(225),
    [sym__annotation] = STATE(220),
    [sym_normal_annotation] = STATE(226),
    [sym_marker_annotation] = STATE(226),
    [sym_single_element_annotation] = STATE(226),
    [sym_class_declaration] = STATE(224),
    [sym_normal_class_declaration] = STATE(227),
    [sym_modifier] = STATE(228),
    [sym_block_statement] = STATE(371),
    [sym_local_variable_declaration_statement] = STATE(224),
    [sym_local_variable_declaration] = STATE(231),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(232),
    [aux_sym_block_statements_repeat1] = STATE(372),
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_default] = ACTIONS(423),
    [anon_sym_synchronized] = ACTIONS(423),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_static] = ACTIONS(423),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_public] = ACTIONS(423),
    [anon_sym_protected] = ACTIONS(423),
    [anon_sym_private] = ACTIONS(423),
    [anon_sym_abstract] = ACTIONS(423),
    [anon_sym_final] = ACTIONS(423),
    [anon_sym_strictfp] = ACTIONS(423),
    [anon_sym_native] = ACTIONS(423),
    [sym_comment] = ACTIONS(58),
  },
  [231] = {
    [sym__semicolon] = STATE(374),
    [anon_sym_SEMI] = ACTIONS(721),
    [sym_comment] = ACTIONS(58),
  },
  [232] = {
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_modifier] = STATE(125),
    [anon_sym_default] = ACTIONS(723),
    [anon_sym_synchronized] = ACTIONS(723),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_static] = ACTIONS(723),
    [anon_sym_class] = ACTIONS(725),
    [anon_sym_public] = ACTIONS(723),
    [anon_sym_protected] = ACTIONS(723),
    [anon_sym_private] = ACTIONS(723),
    [anon_sym_abstract] = ACTIONS(723),
    [anon_sym_final] = ACTIONS(723),
    [anon_sym_strictfp] = ACTIONS(723),
    [anon_sym_native] = ACTIONS(723),
    [sym_comment] = ACTIONS(58),
  },
  [233] = {
    [sym_identifier] = ACTIONS(727),
    [sym_comment] = ACTIONS(58),
  },
  [234] = {
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_default] = ACTIONS(333),
    [anon_sym_synchronized] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_boolean] = ACTIONS(333),
    [anon_sym_byte] = ACTIONS(333),
    [anon_sym_short] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_long] = ACTIONS(333),
    [anon_sym_char] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_double] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym_static] = ACTIONS(333),
    [anon_sym_class] = ACTIONS(333),
    [anon_sym_public] = ACTIONS(333),
    [anon_sym_protected] = ACTIONS(333),
    [anon_sym_private] = ACTIONS(333),
    [anon_sym_abstract] = ACTIONS(333),
    [anon_sym_final] = ACTIONS(333),
    [anon_sym_strictfp] = ACTIONS(333),
    [anon_sym_native] = ACTIONS(333),
    [anon_sym_interface] = ACTIONS(333),
    [sym_identifier] = ACTIONS(335),
    [sym_comment] = ACTIONS(58),
  },
  [235] = {
    [anon_sym_LT] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(729),
    [anon_sym_default] = ACTIONS(341),
    [anon_sym_synchronized] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(731),
    [anon_sym_boolean] = ACTIONS(341),
    [anon_sym_byte] = ACTIONS(341),
    [anon_sym_short] = ACTIONS(341),
    [anon_sym_int] = ACTIONS(341),
    [anon_sym_long] = ACTIONS(341),
    [anon_sym_char] = ACTIONS(341),
    [anon_sym_float] = ACTIONS(341),
    [anon_sym_double] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(337),
    [anon_sym_static] = ACTIONS(341),
    [anon_sym_class] = ACTIONS(341),
    [anon_sym_public] = ACTIONS(341),
    [anon_sym_protected] = ACTIONS(341),
    [anon_sym_private] = ACTIONS(341),
    [anon_sym_abstract] = ACTIONS(341),
    [anon_sym_final] = ACTIONS(341),
    [anon_sym_strictfp] = ACTIONS(341),
    [anon_sym_native] = ACTIONS(341),
    [anon_sym_interface] = ACTIONS(341),
    [sym_identifier] = ACTIONS(345),
    [sym_comment] = ACTIONS(58),
  },
  [236] = {
    [sym_type_parameters] = STATE(379),
    [sym_superclass] = STATE(315),
    [sym_super_interfaces] = STATE(316),
    [sym_class_body] = STATE(317),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [237] = {
    [sym_type_parameters] = STATE(380),
    [sym_extends_interfaces] = STATE(325),
    [sym_interface_body] = STATE(326),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_extends] = ACTIONS(367),
    [sym_comment] = ACTIONS(58),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(733),
    [sym_decimal_integer_literal] = ACTIONS(735),
    [sym_hex_integer_literal] = ACTIONS(735),
    [sym_octal_integer_literal] = ACTIONS(735),
    [sym_binary_integer_literal] = ACTIONS(735),
    [sym_decimal_floating_point_literal] = ACTIONS(735),
    [sym_hex_floating_point_literal] = ACTIONS(737),
    [anon_sym_true] = ACTIONS(735),
    [anon_sym_false] = ACTIONS(735),
    [anon_sym_SQUOTE] = ACTIONS(733),
    [sym_string_literal] = ACTIONS(733),
    [sym_null_literal] = ACTIONS(735),
    [anon_sym_LT] = ACTIONS(733),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_BANG] = ACTIONS(733),
    [anon_sym_TILDE] = ACTIONS(733),
    [anon_sym_PLUS_PLUS] = ACTIONS(733),
    [anon_sym_DASH_DASH] = ACTIONS(733),
    [anon_sym_default] = ACTIONS(735),
    [anon_sym_synchronized] = ACTIONS(735),
    [anon_sym_boolean] = ACTIONS(735),
    [anon_sym_byte] = ACTIONS(735),
    [anon_sym_short] = ACTIONS(735),
    [anon_sym_int] = ACTIONS(735),
    [anon_sym_long] = ACTIONS(735),
    [anon_sym_char] = ACTIONS(735),
    [anon_sym_float] = ACTIONS(735),
    [anon_sym_double] = ACTIONS(735),
    [anon_sym_AT] = ACTIONS(733),
    [anon_sym_open] = ACTIONS(735),
    [anon_sym_module] = ACTIONS(735),
    [anon_sym_static] = ACTIONS(735),
    [anon_sym_package] = ACTIONS(735),
    [anon_sym_import] = ACTIONS(735),
    [anon_sym_class] = ACTIONS(735),
    [anon_sym_public] = ACTIONS(735),
    [anon_sym_protected] = ACTIONS(735),
    [anon_sym_private] = ACTIONS(735),
    [anon_sym_abstract] = ACTIONS(735),
    [anon_sym_final] = ACTIONS(735),
    [anon_sym_strictfp] = ACTIONS(735),
    [anon_sym_native] = ACTIONS(735),
    [anon_sym_interface] = ACTIONS(735),
    [sym_identifier] = ACTIONS(737),
    [sym_comment] = ACTIONS(58),
  },
  [239] = {
    [sym_module_identifier] = STATE(381),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(58),
  },
  [240] = {
    [sym__semicolon] = STATE(289),
    [aux_sym_module_identifier_repeat1] = STATE(382),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(349),
    [sym_comment] = ACTIONS(58),
  },
  [241] = {
    [sym__literal] = STATE(385),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(386),
    [sym_element_value_pair] = STATE(277),
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
    [anon_sym_RPAREN] = ACTIONS(739),
    [sym_identifier] = ACTIONS(741),
    [sym_comment] = ACTIONS(58),
  },
  [242] = {
    [sym_identifier] = ACTIONS(743),
    [sym_comment] = ACTIONS(58),
  },
  [243] = {
    [aux_sym_type_bound_repeat1] = STATE(389),
    [anon_sym_GT] = ACTIONS(745),
    [anon_sym_AMP] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(745),
    [sym_comment] = ACTIONS(58),
  },
  [244] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(749),
    [sym_comment] = ACTIONS(58),
  },
  [245] = {
    [anon_sym_GT] = ACTIONS(751),
    [anon_sym_COMMA] = ACTIONS(751),
    [sym_comment] = ACTIONS(58),
  },
  [246] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_type_parameter] = STATE(390),
    [aux_sym_class_or_interface_type_repeat1] = STATE(56),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(58),
  },
  [247] = {
    [anon_sym_GT] = ACTIONS(753),
    [anon_sym_COMMA] = ACTIONS(753),
    [sym_comment] = ACTIONS(58),
  },
  [248] = {
    [anon_sym_RPAREN] = ACTIONS(755),
    [sym_identifier] = ACTIONS(757),
    [sym_comment] = ACTIONS(58),
  },
  [249] = {
    [anon_sym_COMMA] = ACTIONS(759),
    [sym_comment] = ACTIONS(58),
  },
  [250] = {
    [sym__literal] = STATE(394),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(395),
    [sym_element_value_pair] = STATE(277),
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
    [anon_sym_RPAREN] = ACTIONS(761),
    [sym_identifier] = ACTIONS(763),
    [sym_comment] = ACTIONS(58),
  },
  [251] = {
    [sym_identifier] = ACTIONS(765),
    [sym_comment] = ACTIONS(58),
  },
  [252] = {
    [aux_sym_type_arguments_repeat1] = STATE(398),
    [anon_sym_GT] = ACTIONS(767),
    [anon_sym_COMMA] = ACTIONS(617),
    [sym_comment] = ACTIONS(58),
  },
  [253] = {
    [sym_dims] = STATE(257),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [254] = {
    [anon_sym_RPAREN] = ACTIONS(769),
    [sym_comment] = ACTIONS(58),
  },
  [255] = {
    [anon_sym_SEMI] = ACTIONS(771),
    [anon_sym_EQ] = ACTIONS(773),
    [anon_sym_RPAREN] = ACTIONS(771),
    [anon_sym_COMMA] = ACTIONS(771),
    [sym_comment] = ACTIONS(58),
  },
  [256] = {
    [anon_sym_this] = ACTIONS(775),
    [sym_comment] = ACTIONS(58),
  },
  [257] = {
    [anon_sym_SEMI] = ACTIONS(777),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(777),
    [anon_sym_COMMA] = ACTIONS(777),
    [sym_comment] = ACTIONS(58),
  },
  [258] = {
    [anon_sym_LBRACK] = ACTIONS(687),
    [anon_sym_AT] = ACTIONS(687),
    [anon_sym_this] = ACTIONS(689),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(687),
    [sym_identifier] = ACTIONS(779),
    [sym_comment] = ACTIONS(58),
  },
  [259] = {
    [anon_sym_RBRACK] = ACTIONS(781),
    [sym_comment] = ACTIONS(58),
  },
  [260] = {
    [sym__annotation] = STATE(129),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(783),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [261] = {
    [sym_type_arguments] = STATE(403),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(695),
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_AT] = ACTIONS(697),
    [anon_sym_this] = ACTIONS(695),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(697),
    [sym_identifier] = ACTIONS(785),
    [sym_comment] = ACTIONS(58),
  },
  [262] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(787),
    [sym_comment] = ACTIONS(58),
  },
  [263] = {
    [sym_variable_declarator_id] = STATE(151),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(305),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [264] = {
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(789),
    [sym_comment] = ACTIONS(58),
  },
  [265] = {
    [anon_sym_RPAREN] = ACTIONS(791),
    [sym_comment] = ACTIONS(58),
  },
  [266] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(67),
    [sym_unann_type] = STATE(263),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_formal_parameter] = STATE(405),
    [sym_last_formal_parameter] = STATE(406),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(75),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
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
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [267] = {
    [sym_variable_declarator] = STATE(407),
    [sym_variable_declarator_id] = STATE(255),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [268] = {
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_COMMA] = ACTIONS(793),
    [sym_comment] = ACTIONS(58),
  },
  [269] = {
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_COMMA] = ACTIONS(795),
    [sym_comment] = ACTIONS(58),
  },
  [270] = {
    [anon_sym_DOT] = ACTIONS(797),
    [sym_comment] = ACTIONS(58),
  },
  [271] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(410),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_interface_declaration] = STATE(410),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_annotation_type_member_declaration] = STATE(411),
    [sym_annotation_type_element_declaration] = STATE(410),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_constant_declaration] = STATE(410),
    [sym_unann_type] = STATE(412),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(413),
    [aux_sym_annotation_type_body_repeat1] = STATE(414),
    [anon_sym_RBRACE] = ACTIONS(799),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [272] = {
    [ts_builtin_sym_end] = ACTIONS(801),
    [sym_decimal_integer_literal] = ACTIONS(803),
    [sym_hex_integer_literal] = ACTIONS(803),
    [sym_octal_integer_literal] = ACTIONS(803),
    [sym_binary_integer_literal] = ACTIONS(803),
    [sym_decimal_floating_point_literal] = ACTIONS(803),
    [sym_hex_floating_point_literal] = ACTIONS(805),
    [anon_sym_true] = ACTIONS(803),
    [anon_sym_false] = ACTIONS(803),
    [anon_sym_SQUOTE] = ACTIONS(801),
    [sym_string_literal] = ACTIONS(801),
    [sym_null_literal] = ACTIONS(803),
    [anon_sym_LT] = ACTIONS(801),
    [anon_sym_LPAREN] = ACTIONS(801),
    [anon_sym_BANG] = ACTIONS(801),
    [anon_sym_TILDE] = ACTIONS(801),
    [anon_sym_PLUS_PLUS] = ACTIONS(801),
    [anon_sym_DASH_DASH] = ACTIONS(801),
    [anon_sym_default] = ACTIONS(803),
    [anon_sym_synchronized] = ACTIONS(803),
    [anon_sym_boolean] = ACTIONS(803),
    [anon_sym_byte] = ACTIONS(803),
    [anon_sym_short] = ACTIONS(803),
    [anon_sym_int] = ACTIONS(803),
    [anon_sym_long] = ACTIONS(803),
    [anon_sym_char] = ACTIONS(803),
    [anon_sym_float] = ACTIONS(803),
    [anon_sym_double] = ACTIONS(803),
    [anon_sym_AT] = ACTIONS(801),
    [anon_sym_open] = ACTIONS(803),
    [anon_sym_module] = ACTIONS(803),
    [anon_sym_static] = ACTIONS(803),
    [anon_sym_package] = ACTIONS(803),
    [anon_sym_import] = ACTIONS(803),
    [anon_sym_class] = ACTIONS(803),
    [anon_sym_public] = ACTIONS(803),
    [anon_sym_protected] = ACTIONS(803),
    [anon_sym_private] = ACTIONS(803),
    [anon_sym_abstract] = ACTIONS(803),
    [anon_sym_final] = ACTIONS(803),
    [anon_sym_strictfp] = ACTIONS(803),
    [anon_sym_native] = ACTIONS(803),
    [anon_sym_interface] = ACTIONS(803),
    [sym_identifier] = ACTIONS(805),
    [sym_comment] = ACTIONS(58),
  },
  [273] = {
    [anon_sym_SEMI] = ACTIONS(807),
    [anon_sym_LT] = ACTIONS(807),
    [anon_sym_RPAREN] = ACTIONS(807),
    [anon_sym_COMMA] = ACTIONS(807),
    [anon_sym_RBRACE] = ACTIONS(807),
    [anon_sym_default] = ACTIONS(809),
    [anon_sym_synchronized] = ACTIONS(809),
    [anon_sym_LBRACK] = ACTIONS(807),
    [anon_sym_boolean] = ACTIONS(809),
    [anon_sym_byte] = ACTIONS(809),
    [anon_sym_short] = ACTIONS(809),
    [anon_sym_int] = ACTIONS(809),
    [anon_sym_long] = ACTIONS(809),
    [anon_sym_char] = ACTIONS(809),
    [anon_sym_float] = ACTIONS(809),
    [anon_sym_double] = ACTIONS(809),
    [anon_sym_AT] = ACTIONS(807),
    [anon_sym_open] = ACTIONS(809),
    [anon_sym_module] = ACTIONS(809),
    [anon_sym_static] = ACTIONS(809),
    [anon_sym_package] = ACTIONS(809),
    [anon_sym_class] = ACTIONS(809),
    [anon_sym_public] = ACTIONS(809),
    [anon_sym_protected] = ACTIONS(809),
    [anon_sym_private] = ACTIONS(809),
    [anon_sym_abstract] = ACTIONS(809),
    [anon_sym_final] = ACTIONS(809),
    [anon_sym_strictfp] = ACTIONS(809),
    [anon_sym_native] = ACTIONS(809),
    [anon_sym_interface] = ACTIONS(809),
    [sym_identifier] = ACTIONS(811),
    [sym_comment] = ACTIONS(58),
  },
  [274] = {
    [anon_sym_EQ] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [275] = {
    [anon_sym_RPAREN] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [276] = {
    [anon_sym_RPAREN] = ACTIONS(817),
    [sym_comment] = ACTIONS(58),
  },
  [277] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(419),
    [anon_sym_RPAREN] = ACTIONS(819),
    [anon_sym_COMMA] = ACTIONS(821),
    [sym_comment] = ACTIONS(58),
  },
  [278] = {
    [anon_sym_SEMI] = ACTIONS(823),
    [anon_sym_LT] = ACTIONS(823),
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_synchronized] = ACTIONS(825),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_boolean] = ACTIONS(825),
    [anon_sym_byte] = ACTIONS(825),
    [anon_sym_short] = ACTIONS(825),
    [anon_sym_int] = ACTIONS(825),
    [anon_sym_long] = ACTIONS(825),
    [anon_sym_char] = ACTIONS(825),
    [anon_sym_float] = ACTIONS(825),
    [anon_sym_double] = ACTIONS(825),
    [anon_sym_AT] = ACTIONS(823),
    [anon_sym_open] = ACTIONS(825),
    [anon_sym_module] = ACTIONS(825),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_package] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(825),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_native] = ACTIONS(825),
    [anon_sym_interface] = ACTIONS(825),
    [sym_identifier] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [279] = {
    [sym_module_directive] = STATE(287),
    [aux_sym_module_declaration_repeat1] = STATE(421),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [280] = {
    [anon_sym_SEMI] = ACTIONS(831),
    [anon_sym_LBRACE] = ACTIONS(831),
    [anon_sym_DOT] = ACTIONS(831),
    [sym_comment] = ACTIONS(58),
  },
  [281] = {
    [sym_identifier] = ACTIONS(833),
    [sym_comment] = ACTIONS(58),
  },
  [282] = {
    [ts_builtin_sym_end] = ACTIONS(835),
    [sym_decimal_integer_literal] = ACTIONS(837),
    [sym_hex_integer_literal] = ACTIONS(837),
    [sym_octal_integer_literal] = ACTIONS(837),
    [sym_binary_integer_literal] = ACTIONS(837),
    [sym_decimal_floating_point_literal] = ACTIONS(837),
    [sym_hex_floating_point_literal] = ACTIONS(839),
    [anon_sym_true] = ACTIONS(837),
    [anon_sym_false] = ACTIONS(837),
    [anon_sym_SQUOTE] = ACTIONS(835),
    [sym_string_literal] = ACTIONS(835),
    [sym_null_literal] = ACTIONS(837),
    [anon_sym_LT] = ACTIONS(835),
    [anon_sym_LPAREN] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(835),
    [anon_sym_TILDE] = ACTIONS(835),
    [anon_sym_PLUS_PLUS] = ACTIONS(835),
    [anon_sym_DASH_DASH] = ACTIONS(835),
    [anon_sym_default] = ACTIONS(837),
    [anon_sym_synchronized] = ACTIONS(837),
    [anon_sym_boolean] = ACTIONS(837),
    [anon_sym_byte] = ACTIONS(837),
    [anon_sym_short] = ACTIONS(837),
    [anon_sym_int] = ACTIONS(837),
    [anon_sym_long] = ACTIONS(837),
    [anon_sym_char] = ACTIONS(837),
    [anon_sym_float] = ACTIONS(837),
    [anon_sym_double] = ACTIONS(837),
    [anon_sym_AT] = ACTIONS(835),
    [anon_sym_open] = ACTIONS(837),
    [anon_sym_module] = ACTIONS(837),
    [anon_sym_static] = ACTIONS(837),
    [anon_sym_package] = ACTIONS(837),
    [anon_sym_import] = ACTIONS(837),
    [anon_sym_class] = ACTIONS(837),
    [anon_sym_public] = ACTIONS(837),
    [anon_sym_protected] = ACTIONS(837),
    [anon_sym_private] = ACTIONS(837),
    [anon_sym_abstract] = ACTIONS(837),
    [anon_sym_final] = ACTIONS(837),
    [anon_sym_strictfp] = ACTIONS(837),
    [anon_sym_native] = ACTIONS(837),
    [anon_sym_interface] = ACTIONS(837),
    [sym_identifier] = ACTIONS(839),
    [sym_comment] = ACTIONS(58),
  },
  [283] = {
    [sym_requires_modifier] = STATE(425),
    [sym_module_name] = STATE(426),
    [aux_sym_module_directive_repeat1] = STATE(427),
    [anon_sym_transitive] = ACTIONS(841),
    [anon_sym_static] = ACTIONS(841),
    [sym_identifier] = ACTIONS(843),
    [sym_comment] = ACTIONS(58),
  },
  [284] = {
    [sym_package_or_type_name] = STATE(429),
    [sym_identifier] = ACTIONS(845),
    [sym_comment] = ACTIONS(58),
  },
  [285] = {
    [sym_package_or_type_name] = STATE(430),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(58),
  },
  [286] = {
    [sym_package_or_type_name] = STATE(432),
    [sym_identifier] = ACTIONS(847),
    [sym_comment] = ACTIONS(58),
  },
  [287] = {
    [anon_sym_RBRACE] = ACTIONS(849),
    [anon_sym_requires] = ACTIONS(849),
    [anon_sym_exports] = ACTIONS(849),
    [anon_sym_opens] = ACTIONS(849),
    [anon_sym_uses] = ACTIONS(849),
    [anon_sym_provides] = ACTIONS(849),
    [sym_comment] = ACTIONS(58),
  },
  [288] = {
    [sym_module_directive] = STATE(433),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(851),
    [sym_decimal_integer_literal] = ACTIONS(853),
    [sym_hex_integer_literal] = ACTIONS(853),
    [sym_octal_integer_literal] = ACTIONS(853),
    [sym_binary_integer_literal] = ACTIONS(853),
    [sym_decimal_floating_point_literal] = ACTIONS(853),
    [sym_hex_floating_point_literal] = ACTIONS(855),
    [anon_sym_true] = ACTIONS(853),
    [anon_sym_false] = ACTIONS(853),
    [anon_sym_SQUOTE] = ACTIONS(851),
    [sym_string_literal] = ACTIONS(851),
    [sym_null_literal] = ACTIONS(853),
    [anon_sym_LT] = ACTIONS(851),
    [anon_sym_LPAREN] = ACTIONS(851),
    [anon_sym_BANG] = ACTIONS(851),
    [anon_sym_TILDE] = ACTIONS(851),
    [anon_sym_PLUS_PLUS] = ACTIONS(851),
    [anon_sym_DASH_DASH] = ACTIONS(851),
    [anon_sym_default] = ACTIONS(853),
    [anon_sym_synchronized] = ACTIONS(853),
    [anon_sym_boolean] = ACTIONS(853),
    [anon_sym_byte] = ACTIONS(853),
    [anon_sym_short] = ACTIONS(853),
    [anon_sym_int] = ACTIONS(853),
    [anon_sym_long] = ACTIONS(853),
    [anon_sym_char] = ACTIONS(853),
    [anon_sym_float] = ACTIONS(853),
    [anon_sym_double] = ACTIONS(853),
    [anon_sym_AT] = ACTIONS(851),
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
    [anon_sym_native] = ACTIONS(853),
    [anon_sym_interface] = ACTIONS(853),
    [sym_identifier] = ACTIONS(855),
    [sym_comment] = ACTIONS(58),
  },
  [290] = {
    [anon_sym_STAR] = ACTIONS(857),
    [sym_identifier] = ACTIONS(859),
    [sym_comment] = ACTIONS(58),
  },
  [291] = {
    [sym__semicolon] = STATE(436),
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_comment] = ACTIONS(58),
  },
  [292] = {
    [anon_sym_GT] = ACTIONS(861),
    [sym_comment] = ACTIONS(58),
  },
  [293] = {
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_default] = ACTIONS(379),
    [anon_sym_synchronized] = ACTIONS(379),
    [anon_sym_boolean] = ACTIONS(379),
    [anon_sym_byte] = ACTIONS(379),
    [anon_sym_short] = ACTIONS(379),
    [anon_sym_int] = ACTIONS(379),
    [anon_sym_long] = ACTIONS(379),
    [anon_sym_char] = ACTIONS(379),
    [anon_sym_float] = ACTIONS(379),
    [anon_sym_double] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_static] = ACTIONS(379),
    [anon_sym_class] = ACTIONS(379),
    [anon_sym_public] = ACTIONS(379),
    [anon_sym_protected] = ACTIONS(379),
    [anon_sym_private] = ACTIONS(379),
    [anon_sym_abstract] = ACTIONS(379),
    [anon_sym_final] = ACTIONS(379),
    [anon_sym_strictfp] = ACTIONS(379),
    [anon_sym_native] = ACTIONS(379),
    [anon_sym_interface] = ACTIONS(379),
    [sym_identifier] = ACTIONS(381),
    [sym_comment] = ACTIONS(58),
  },
  [294] = {
    [sym_statement] = STATE(224),
    [sym_if_then_statement] = STATE(225),
    [sym_if_then_else_statement] = STATE(225),
    [sym__annotation] = STATE(220),
    [sym_normal_annotation] = STATE(226),
    [sym_marker_annotation] = STATE(226),
    [sym_single_element_annotation] = STATE(226),
    [sym_class_declaration] = STATE(224),
    [sym_normal_class_declaration] = STATE(227),
    [sym_modifier] = STATE(228),
    [sym_block_statements] = STATE(439),
    [sym_block_statement] = STATE(230),
    [sym_local_variable_declaration_statement] = STATE(224),
    [sym_local_variable_declaration] = STATE(231),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(232),
    [anon_sym_RBRACE] = ACTIONS(863),
    [anon_sym_default] = ACTIONS(423),
    [anon_sym_synchronized] = ACTIONS(423),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_static] = ACTIONS(423),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_public] = ACTIONS(423),
    [anon_sym_protected] = ACTIONS(423),
    [anon_sym_private] = ACTIONS(423),
    [anon_sym_abstract] = ACTIONS(423),
    [anon_sym_final] = ACTIONS(423),
    [anon_sym_strictfp] = ACTIONS(423),
    [anon_sym_native] = ACTIONS(423),
    [sym_comment] = ACTIONS(58),
  },
  [295] = {
    [ts_builtin_sym_end] = ACTIONS(865),
    [sym_decimal_integer_literal] = ACTIONS(867),
    [sym_hex_integer_literal] = ACTIONS(867),
    [sym_octal_integer_literal] = ACTIONS(867),
    [sym_binary_integer_literal] = ACTIONS(867),
    [sym_decimal_floating_point_literal] = ACTIONS(867),
    [sym_hex_floating_point_literal] = ACTIONS(869),
    [anon_sym_true] = ACTIONS(867),
    [anon_sym_false] = ACTIONS(867),
    [anon_sym_SQUOTE] = ACTIONS(865),
    [sym_string_literal] = ACTIONS(865),
    [sym_null_literal] = ACTIONS(867),
    [anon_sym_LT] = ACTIONS(865),
    [anon_sym_LPAREN] = ACTIONS(865),
    [anon_sym_BANG] = ACTIONS(865),
    [anon_sym_TILDE] = ACTIONS(865),
    [anon_sym_PLUS_PLUS] = ACTIONS(865),
    [anon_sym_DASH_DASH] = ACTIONS(865),
    [anon_sym_default] = ACTIONS(867),
    [anon_sym_synchronized] = ACTIONS(867),
    [anon_sym_boolean] = ACTIONS(867),
    [anon_sym_byte] = ACTIONS(867),
    [anon_sym_short] = ACTIONS(867),
    [anon_sym_int] = ACTIONS(867),
    [anon_sym_long] = ACTIONS(867),
    [anon_sym_char] = ACTIONS(867),
    [anon_sym_float] = ACTIONS(867),
    [anon_sym_double] = ACTIONS(867),
    [anon_sym_AT] = ACTIONS(865),
    [anon_sym_open] = ACTIONS(867),
    [anon_sym_module] = ACTIONS(867),
    [anon_sym_static] = ACTIONS(867),
    [anon_sym_package] = ACTIONS(867),
    [anon_sym_import] = ACTIONS(867),
    [anon_sym_class] = ACTIONS(867),
    [anon_sym_public] = ACTIONS(867),
    [anon_sym_protected] = ACTIONS(867),
    [anon_sym_private] = ACTIONS(867),
    [anon_sym_abstract] = ACTIONS(867),
    [anon_sym_final] = ACTIONS(867),
    [anon_sym_strictfp] = ACTIONS(867),
    [anon_sym_native] = ACTIONS(867),
    [anon_sym_interface] = ACTIONS(867),
    [sym_identifier] = ACTIONS(869),
    [sym_comment] = ACTIONS(58),
  },
  [296] = {
    [sym_package_or_type_name] = STATE(235),
    [anon_sym_interface] = ACTIONS(871),
    [sym_identifier] = ACTIONS(451),
    [sym_comment] = ACTIONS(58),
  },
  [297] = {
    [sym_identifier] = ACTIONS(873),
    [sym_comment] = ACTIONS(58),
  },
  [298] = {
    [sym_identifier] = ACTIONS(875),
    [sym_comment] = ACTIONS(58),
  },
  [299] = {
    [sym_type_arguments] = STATE(92),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(877),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(58),
  },
  [300] = {
    [anon_sym_SEMI] = ACTIONS(879),
    [anon_sym_LT] = ACTIONS(879),
    [anon_sym_LBRACE] = ACTIONS(879),
    [anon_sym_RBRACE] = ACTIONS(879),
    [anon_sym_default] = ACTIONS(881),
    [anon_sym_synchronized] = ACTIONS(881),
    [anon_sym_boolean] = ACTIONS(881),
    [anon_sym_byte] = ACTIONS(881),
    [anon_sym_short] = ACTIONS(881),
    [anon_sym_int] = ACTIONS(881),
    [anon_sym_long] = ACTIONS(881),
    [anon_sym_char] = ACTIONS(881),
    [anon_sym_float] = ACTIONS(881),
    [anon_sym_double] = ACTIONS(881),
    [anon_sym_AT] = ACTIONS(879),
    [anon_sym_static] = ACTIONS(881),
    [anon_sym_class] = ACTIONS(881),
    [anon_sym_public] = ACTIONS(881),
    [anon_sym_protected] = ACTIONS(881),
    [anon_sym_private] = ACTIONS(881),
    [anon_sym_abstract] = ACTIONS(881),
    [anon_sym_final] = ACTIONS(881),
    [anon_sym_strictfp] = ACTIONS(881),
    [anon_sym_native] = ACTIONS(881),
    [anon_sym_interface] = ACTIONS(881),
    [sym_identifier] = ACTIONS(883),
    [sym_comment] = ACTIONS(58),
  },
  [301] = {
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(209),
    [anon_sym_synchronized] = ACTIONS(209),
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
    [anon_sym_native] = ACTIONS(209),
    [anon_sym_interface] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(58),
  },
  [302] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(105),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [sym_unann_type] = STATE(107),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_class_or_interface_type_repeat1] = STATE(108),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(885),
    [sym_comment] = ACTIONS(58),
  },
  [303] = {
    [anon_sym_SEMI] = ACTIONS(887),
    [anon_sym_LT] = ACTIONS(887),
    [anon_sym_LBRACE] = ACTIONS(887),
    [anon_sym_RBRACE] = ACTIONS(887),
    [anon_sym_default] = ACTIONS(889),
    [anon_sym_synchronized] = ACTIONS(889),
    [anon_sym_boolean] = ACTIONS(889),
    [anon_sym_byte] = ACTIONS(889),
    [anon_sym_short] = ACTIONS(889),
    [anon_sym_int] = ACTIONS(889),
    [anon_sym_long] = ACTIONS(889),
    [anon_sym_char] = ACTIONS(889),
    [anon_sym_float] = ACTIONS(889),
    [anon_sym_double] = ACTIONS(889),
    [anon_sym_AT] = ACTIONS(887),
    [anon_sym_static] = ACTIONS(889),
    [anon_sym_class] = ACTIONS(889),
    [anon_sym_public] = ACTIONS(889),
    [anon_sym_protected] = ACTIONS(889),
    [anon_sym_private] = ACTIONS(889),
    [anon_sym_abstract] = ACTIONS(889),
    [anon_sym_final] = ACTIONS(889),
    [anon_sym_strictfp] = ACTIONS(889),
    [anon_sym_native] = ACTIONS(889),
    [anon_sym_interface] = ACTIONS(889),
    [sym_identifier] = ACTIONS(891),
    [sym_comment] = ACTIONS(58),
  },
  [304] = {
    [anon_sym_SEMI] = ACTIONS(893),
    [anon_sym_LT] = ACTIONS(893),
    [anon_sym_LBRACE] = ACTIONS(893),
    [anon_sym_RBRACE] = ACTIONS(893),
    [anon_sym_default] = ACTIONS(895),
    [anon_sym_synchronized] = ACTIONS(895),
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
    [anon_sym_native] = ACTIONS(895),
    [anon_sym_interface] = ACTIONS(895),
    [sym_identifier] = ACTIONS(897),
    [sym_comment] = ACTIONS(58),
  },
  [305] = {
    [sym_constructor_body] = STATE(446),
    [sym_throws] = STATE(447),
    [anon_sym_LBRACE] = ACTIONS(899),
    [anon_sym_throws] = ACTIONS(405),
    [sym_comment] = ACTIONS(58),
  },
  [306] = {
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_default] = ACTIONS(225),
    [anon_sym_synchronized] = ACTIONS(225),
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
    [anon_sym_native] = ACTIONS(225),
    [anon_sym_interface] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_comment] = ACTIONS(58),
  },
  [307] = {
    [sym__semicolon] = STATE(448),
    [sym_method_body] = STATE(449),
    [sym_block] = STATE(448),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(581),
    [sym_comment] = ACTIONS(58),
  },
  [308] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_modifier] = STATE(125),
    [sym_type_parameters] = STATE(302),
    [sym_constructor_declarator] = STATE(453),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(454),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(901),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(903),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(905),
    [sym_identifier] = ACTIONS(591),
    [sym_comment] = ACTIONS(58),
  },
  [309] = {
    [sym__semicolon] = STATE(300),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(300),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(302),
    [sym_class_body_declaration] = STATE(456),
    [sym_constructor_declaration] = STATE(304),
    [sym_constructor_declarator] = STATE(305),
    [sym_class_member_declaration] = STATE(304),
    [sym_interface_declaration] = STATE(300),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(307),
    [sym_block] = STATE(304),
    [sym_method_declaration] = STATE(300),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(308),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(907),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(591),
    [sym_comment] = ACTIONS(58),
  },
  [310] = {
    [sym_type_arguments] = STATE(459),
    [aux_sym_class_or_interface_type_repeat2] = STATE(460),
    [anon_sym_LT] = ACTIONS(909),
    [anon_sym_LBRACE] = ACTIONS(611),
    [anon_sym_DOT] = ACTIONS(911),
    [anon_sym_implements] = ACTIONS(611),
    [sym_comment] = ACTIONS(58),
  },
  [311] = {
    [anon_sym_LBRACE] = ACTIONS(913),
    [anon_sym_implements] = ACTIONS(913),
    [sym_comment] = ACTIONS(58),
  },
  [312] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(915),
    [sym_comment] = ACTIONS(58),
  },
  [313] = {
    [aux_sym_interface_type_list_repeat1] = STATE(463),
    [anon_sym_COMMA] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(919),
    [sym_comment] = ACTIONS(58),
  },
  [314] = {
    [anon_sym_LBRACE] = ACTIONS(921),
    [sym_comment] = ACTIONS(58),
  },
  [315] = {
    [sym_super_interfaces] = STATE(464),
    [sym_class_body] = STATE(465),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [316] = {
    [sym_class_body] = STATE(465),
    [anon_sym_LBRACE] = ACTIONS(359),
    [sym_comment] = ACTIONS(58),
  },
  [317] = {
    [ts_builtin_sym_end] = ACTIONS(923),
    [sym_decimal_integer_literal] = ACTIONS(925),
    [sym_hex_integer_literal] = ACTIONS(925),
    [sym_octal_integer_literal] = ACTIONS(925),
    [sym_binary_integer_literal] = ACTIONS(925),
    [sym_decimal_floating_point_literal] = ACTIONS(925),
    [sym_hex_floating_point_literal] = ACTIONS(927),
    [anon_sym_true] = ACTIONS(925),
    [anon_sym_false] = ACTIONS(925),
    [anon_sym_SQUOTE] = ACTIONS(923),
    [sym_string_literal] = ACTIONS(923),
    [sym_null_literal] = ACTIONS(925),
    [anon_sym_LT] = ACTIONS(923),
    [anon_sym_LPAREN] = ACTIONS(923),
    [anon_sym_BANG] = ACTIONS(923),
    [anon_sym_TILDE] = ACTIONS(923),
    [anon_sym_PLUS_PLUS] = ACTIONS(923),
    [anon_sym_DASH_DASH] = ACTIONS(923),
    [anon_sym_default] = ACTIONS(925),
    [anon_sym_synchronized] = ACTIONS(925),
    [anon_sym_boolean] = ACTIONS(925),
    [anon_sym_byte] = ACTIONS(925),
    [anon_sym_short] = ACTIONS(925),
    [anon_sym_int] = ACTIONS(925),
    [anon_sym_long] = ACTIONS(925),
    [anon_sym_char] = ACTIONS(925),
    [anon_sym_float] = ACTIONS(925),
    [anon_sym_double] = ACTIONS(925),
    [anon_sym_AT] = ACTIONS(923),
    [anon_sym_open] = ACTIONS(925),
    [anon_sym_module] = ACTIONS(925),
    [anon_sym_static] = ACTIONS(925),
    [anon_sym_package] = ACTIONS(925),
    [anon_sym_import] = ACTIONS(925),
    [anon_sym_class] = ACTIONS(925),
    [anon_sym_public] = ACTIONS(925),
    [anon_sym_protected] = ACTIONS(925),
    [anon_sym_private] = ACTIONS(925),
    [anon_sym_abstract] = ACTIONS(925),
    [anon_sym_final] = ACTIONS(925),
    [anon_sym_strictfp] = ACTIONS(925),
    [anon_sym_native] = ACTIONS(925),
    [anon_sym_interface] = ACTIONS(925),
    [sym_identifier] = ACTIONS(927),
    [sym_comment] = ACTIONS(58),
  },
  [318] = {
    [ts_builtin_sym_end] = ACTIONS(929),
    [sym_decimal_integer_literal] = ACTIONS(931),
    [sym_hex_integer_literal] = ACTIONS(931),
    [sym_octal_integer_literal] = ACTIONS(931),
    [sym_binary_integer_literal] = ACTIONS(931),
    [sym_decimal_floating_point_literal] = ACTIONS(931),
    [sym_hex_floating_point_literal] = ACTIONS(933),
    [anon_sym_true] = ACTIONS(931),
    [anon_sym_false] = ACTIONS(931),
    [anon_sym_SQUOTE] = ACTIONS(929),
    [sym_string_literal] = ACTIONS(929),
    [sym_null_literal] = ACTIONS(931),
    [anon_sym_LT] = ACTIONS(929),
    [anon_sym_LPAREN] = ACTIONS(929),
    [anon_sym_BANG] = ACTIONS(929),
    [anon_sym_TILDE] = ACTIONS(929),
    [anon_sym_PLUS_PLUS] = ACTIONS(929),
    [anon_sym_DASH_DASH] = ACTIONS(929),
    [anon_sym_default] = ACTIONS(931),
    [anon_sym_synchronized] = ACTIONS(931),
    [anon_sym_boolean] = ACTIONS(931),
    [anon_sym_byte] = ACTIONS(931),
    [anon_sym_short] = ACTIONS(931),
    [anon_sym_int] = ACTIONS(931),
    [anon_sym_long] = ACTIONS(931),
    [anon_sym_char] = ACTIONS(931),
    [anon_sym_float] = ACTIONS(931),
    [anon_sym_double] = ACTIONS(931),
    [anon_sym_AT] = ACTIONS(929),
    [anon_sym_open] = ACTIONS(931),
    [anon_sym_module] = ACTIONS(931),
    [anon_sym_static] = ACTIONS(931),
    [anon_sym_package] = ACTIONS(931),
    [anon_sym_import] = ACTIONS(931),
    [anon_sym_class] = ACTIONS(931),
    [anon_sym_public] = ACTIONS(931),
    [anon_sym_protected] = ACTIONS(931),
    [anon_sym_private] = ACTIONS(931),
    [anon_sym_abstract] = ACTIONS(931),
    [anon_sym_final] = ACTIONS(931),
    [anon_sym_strictfp] = ACTIONS(931),
    [anon_sym_native] = ACTIONS(931),
    [anon_sym_interface] = ACTIONS(931),
    [sym_identifier] = ACTIONS(933),
    [sym_comment] = ACTIONS(58),
  },
  [319] = {
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_RBRACE] = ACTIONS(935),
    [anon_sym_default] = ACTIONS(937),
    [anon_sym_synchronized] = ACTIONS(937),
    [anon_sym_boolean] = ACTIONS(937),
    [anon_sym_byte] = ACTIONS(937),
    [anon_sym_short] = ACTIONS(937),
    [anon_sym_int] = ACTIONS(937),
    [anon_sym_long] = ACTIONS(937),
    [anon_sym_char] = ACTIONS(937),
    [anon_sym_float] = ACTIONS(937),
    [anon_sym_double] = ACTIONS(937),
    [anon_sym_AT] = ACTIONS(935),
    [anon_sym_static] = ACTIONS(937),
    [anon_sym_class] = ACTIONS(937),
    [anon_sym_public] = ACTIONS(937),
    [anon_sym_protected] = ACTIONS(937),
    [anon_sym_private] = ACTIONS(937),
    [anon_sym_abstract] = ACTIONS(937),
    [anon_sym_final] = ACTIONS(937),
    [anon_sym_strictfp] = ACTIONS(937),
    [anon_sym_native] = ACTIONS(937),
    [anon_sym_interface] = ACTIONS(937),
    [sym_identifier] = ACTIONS(939),
    [sym_comment] = ACTIONS(58),
  },
  [320] = {
    [anon_sym_SEMI] = ACTIONS(941),
    [anon_sym_LT] = ACTIONS(941),
    [anon_sym_RBRACE] = ACTIONS(941),
    [anon_sym_default] = ACTIONS(943),
    [anon_sym_synchronized] = ACTIONS(943),
    [anon_sym_boolean] = ACTIONS(943),
    [anon_sym_byte] = ACTIONS(943),
    [anon_sym_short] = ACTIONS(943),
    [anon_sym_int] = ACTIONS(943),
    [anon_sym_long] = ACTIONS(943),
    [anon_sym_char] = ACTIONS(943),
    [anon_sym_float] = ACTIONS(943),
    [anon_sym_double] = ACTIONS(943),
    [anon_sym_AT] = ACTIONS(941),
    [anon_sym_static] = ACTIONS(943),
    [anon_sym_class] = ACTIONS(943),
    [anon_sym_public] = ACTIONS(943),
    [anon_sym_protected] = ACTIONS(943),
    [anon_sym_private] = ACTIONS(943),
    [anon_sym_abstract] = ACTIONS(943),
    [anon_sym_final] = ACTIONS(943),
    [anon_sym_strictfp] = ACTIONS(943),
    [anon_sym_native] = ACTIONS(943),
    [anon_sym_interface] = ACTIONS(943),
    [sym_identifier] = ACTIONS(945),
    [sym_comment] = ACTIONS(58),
  },
  [321] = {
    [sym_variable_declarator_list] = STATE(467),
    [sym_variable_declarator] = STATE(468),
    [sym_variable_declarator_id] = STATE(255),
    [sym_method_declarator] = STATE(110),
    [sym_identifier] = ACTIONS(947),
    [sym_comment] = ACTIONS(58),
  },
  [322] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_modifier] = STATE(125),
    [sym_type_parameters] = STATE(37),
    [sym_unann_type] = STATE(469),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(454),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(901),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(903),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(905),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [323] = {
    [sym__semicolon] = STATE(319),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(319),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(319),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_interface_member_declaration] = STATE(471),
    [sym_constant_declaration] = STATE(319),
    [sym_unann_type] = STATE(321),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(307),
    [sym_method_declaration] = STATE(319),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(322),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(949),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [324] = {
    [anon_sym_LBRACE] = ACTIONS(951),
    [sym_comment] = ACTIONS(58),
  },
  [325] = {
    [sym_interface_body] = STATE(472),
    [anon_sym_LBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(58),
  },
  [326] = {
    [ts_builtin_sym_end] = ACTIONS(953),
    [sym_decimal_integer_literal] = ACTIONS(955),
    [sym_hex_integer_literal] = ACTIONS(955),
    [sym_octal_integer_literal] = ACTIONS(955),
    [sym_binary_integer_literal] = ACTIONS(955),
    [sym_decimal_floating_point_literal] = ACTIONS(955),
    [sym_hex_floating_point_literal] = ACTIONS(957),
    [anon_sym_true] = ACTIONS(955),
    [anon_sym_false] = ACTIONS(955),
    [anon_sym_SQUOTE] = ACTIONS(953),
    [sym_string_literal] = ACTIONS(953),
    [sym_null_literal] = ACTIONS(955),
    [anon_sym_LT] = ACTIONS(953),
    [anon_sym_LPAREN] = ACTIONS(953),
    [anon_sym_BANG] = ACTIONS(953),
    [anon_sym_TILDE] = ACTIONS(953),
    [anon_sym_PLUS_PLUS] = ACTIONS(953),
    [anon_sym_DASH_DASH] = ACTIONS(953),
    [anon_sym_default] = ACTIONS(955),
    [anon_sym_synchronized] = ACTIONS(955),
    [anon_sym_boolean] = ACTIONS(955),
    [anon_sym_byte] = ACTIONS(955),
    [anon_sym_short] = ACTIONS(955),
    [anon_sym_int] = ACTIONS(955),
    [anon_sym_long] = ACTIONS(955),
    [anon_sym_char] = ACTIONS(955),
    [anon_sym_float] = ACTIONS(955),
    [anon_sym_double] = ACTIONS(955),
    [anon_sym_AT] = ACTIONS(953),
    [anon_sym_open] = ACTIONS(955),
    [anon_sym_module] = ACTIONS(955),
    [anon_sym_static] = ACTIONS(955),
    [anon_sym_package] = ACTIONS(955),
    [anon_sym_import] = ACTIONS(955),
    [anon_sym_class] = ACTIONS(955),
    [anon_sym_public] = ACTIONS(955),
    [anon_sym_protected] = ACTIONS(955),
    [anon_sym_private] = ACTIONS(955),
    [anon_sym_abstract] = ACTIONS(955),
    [anon_sym_final] = ACTIONS(955),
    [anon_sym_strictfp] = ACTIONS(955),
    [anon_sym_native] = ACTIONS(955),
    [anon_sym_interface] = ACTIONS(955),
    [sym_identifier] = ACTIONS(957),
    [sym_comment] = ACTIONS(58),
  },
  [327] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(474),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(959),
    [sym_comment] = ACTIONS(58),
  },
  [328] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(475),
    [anon_sym_GT] = ACTIONS(961),
    [anon_sym_AMP] = ACTIONS(961),
    [anon_sym_COMMA] = ACTIONS(961),
    [anon_sym_LBRACE] = ACTIONS(961),
    [anon_sym_DOT] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(961),
    [anon_sym_AT] = ACTIONS(961),
    [anon_sym_COLON_COLON] = ACTIONS(961),
    [sym_comment] = ACTIONS(58),
  },
  [329] = {
    [anon_sym_GT] = ACTIONS(961),
    [anon_sym_AMP] = ACTIONS(961),
    [anon_sym_COMMA] = ACTIONS(961),
    [anon_sym_LBRACE] = ACTIONS(961),
    [anon_sym_DOT] = ACTIONS(963),
    [anon_sym_LBRACK] = ACTIONS(961),
    [anon_sym_AT] = ACTIONS(961),
    [anon_sym_COLON_COLON] = ACTIONS(961),
    [sym_comment] = ACTIONS(58),
  },
  [330] = {
    [anon_sym_GT] = ACTIONS(965),
    [anon_sym_AMP] = ACTIONS(965),
    [anon_sym_LPAREN] = ACTIONS(965),
    [anon_sym_COMMA] = ACTIONS(965),
    [anon_sym_LBRACE] = ACTIONS(965),
    [anon_sym_DOT] = ACTIONS(967),
    [anon_sym_LBRACK] = ACTIONS(965),
    [anon_sym_AT] = ACTIONS(965),
    [anon_sym_COLON_COLON] = ACTIONS(965),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(965),
    [sym_identifier] = ACTIONS(967),
    [sym_comment] = ACTIONS(58),
  },
  [331] = {
    [sym_type_argument] = STATE(477),
    [sym_reference_type] = STATE(191),
    [sym_class_or_interface_type] = STATE(192),
    [sym_primitive_type] = STATE(193),
    [sym_integral_type] = STATE(188),
    [sym_floating_point_type] = STATE(188),
    [sym__annotation] = STATE(105),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [aux_sym_class_or_interface_type_repeat1] = STATE(194),
    [anon_sym_boolean] = ACTIONS(369),
    [anon_sym_void] = ACTIONS(369),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(371),
    [sym_comment] = ACTIONS(58),
  },
  [332] = {
    [anon_sym_GT] = ACTIONS(969),
    [anon_sym_COMMA] = ACTIONS(971),
    [sym_comment] = ACTIONS(58),
  },
  [333] = {
    [anon_sym_GT] = ACTIONS(973),
    [anon_sym_COMMA] = ACTIONS(973),
    [sym_comment] = ACTIONS(58),
  },
  [334] = {
    [anon_sym_LBRACK] = ACTIONS(975),
    [anon_sym_AT] = ACTIONS(975),
    [sym_comment] = ACTIONS(58),
  },
  [335] = {
    [sym_type_arguments] = STATE(480),
    [aux_sym_class_or_interface_type_repeat2] = STATE(475),
    [anon_sym_GT] = ACTIONS(961),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(961),
    [anon_sym_COMMA] = ACTIONS(961),
    [anon_sym_LBRACE] = ACTIONS(961),
    [anon_sym_DOT] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(961),
    [anon_sym_AT] = ACTIONS(961),
    [anon_sym_COLON_COLON] = ACTIONS(961),
    [sym_comment] = ACTIONS(58),
  },
  [336] = {
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
  [337] = {
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
  [338] = {
    [sym__expression] = STATE(483),
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
    [sym__expression] = STATE(484),
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
    [sym__expression] = STATE(199),
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
  [341] = {
    [sym__expression] = STATE(485),
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
  [342] = {
    [sym__expression] = STATE(486),
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
  [343] = {
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
  [344] = {
    [sym__expression] = STATE(488),
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
    [sym__expression] = STATE(489),
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
    [sym__expression] = STATE(490),
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
  [347] = {
    [sym__expression] = STATE(199),
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
  [348] = {
    [sym__expression] = STATE(491),
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
  [349] = {
    [anon_sym_SEMI] = ACTIONS(977),
    [anon_sym_GT] = ACTIONS(979),
    [anon_sym_LT] = ACTIONS(979),
    [anon_sym_EQ_EQ] = ACTIONS(977),
    [anon_sym_GT_EQ] = ACTIONS(977),
    [anon_sym_LT_EQ] = ACTIONS(977),
    [anon_sym_BANG_EQ] = ACTIONS(977),
    [anon_sym_AMP_AMP] = ACTIONS(977),
    [anon_sym_PIPE_PIPE] = ACTIONS(977),
    [anon_sym_PLUS] = ACTIONS(979),
    [anon_sym_DASH] = ACTIONS(979),
    [anon_sym_STAR] = ACTIONS(977),
    [anon_sym_SLASH] = ACTIONS(979),
    [anon_sym_AMP] = ACTIONS(979),
    [anon_sym_PIPE] = ACTIONS(979),
    [anon_sym_CARET] = ACTIONS(977),
    [anon_sym_PERCENT] = ACTIONS(977),
    [anon_sym_LT_LT] = ACTIONS(977),
    [anon_sym_GT_GT] = ACTIONS(979),
    [anon_sym_GT_GT_GT] = ACTIONS(977),
    [anon_sym_RPAREN] = ACTIONS(977),
    [anon_sym_COMMA] = ACTIONS(977),
    [anon_sym_QMARK] = ACTIONS(977),
    [anon_sym_COLON] = ACTIONS(977),
    [anon_sym_PLUS_PLUS] = ACTIONS(977),
    [anon_sym_DASH_DASH] = ACTIONS(977),
    [anon_sym_LBRACE] = ACTIONS(977),
    [anon_sym_RBRACE] = ACTIONS(977),
    [anon_sym_RBRACK] = ACTIONS(977),
    [sym_comment] = ACTIONS(58),
  },
  [350] = {
    [sym__literal] = STATE(494),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(495),
    [sym_element_value_pair] = STATE(277),
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
    [anon_sym_RPAREN] = ACTIONS(981),
    [sym_identifier] = ACTIONS(983),
    [sym_comment] = ACTIONS(58),
  },
  [351] = {
    [sym_identifier] = ACTIONS(985),
    [sym_comment] = ACTIONS(58),
  },
  [352] = {
    [anon_sym_SEMI] = ACTIONS(987),
    [anon_sym_LBRACE] = ACTIONS(987),
    [sym_comment] = ACTIONS(58),
  },
  [353] = {
    [sym_throws] = STATE(497),
    [anon_sym_SEMI] = ACTIONS(987),
    [anon_sym_LBRACE] = ACTIONS(987),
    [anon_sym_throws] = ACTIONS(405),
    [sym_comment] = ACTIONS(58),
  },
  [354] = {
    [sym_dims] = STATE(499),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(500),
    [aux_sym_dims_repeat1] = STATE(501),
    [anon_sym_SEMI] = ACTIONS(989),
    [anon_sym_LBRACE] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(991),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_throws] = ACTIONS(989),
    [sym_comment] = ACTIONS(58),
  },
  [355] = {
    [anon_sym_RPAREN] = ACTIONS(993),
    [sym_comment] = ACTIONS(58),
  },
  [356] = {
    [sym_type_arguments] = STATE(504),
    [aux_sym_class_or_interface_type_repeat2] = STATE(505),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(995),
    [anon_sym_AT] = ACTIONS(611),
    [sym_identifier] = ACTIONS(997),
    [sym_comment] = ACTIONS(58),
  },
  [357] = {
    [sym_type_variable] = STATE(507),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(508),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(999),
    [sym_comment] = ACTIONS(58),
  },
  [358] = {
    [anon_sym_SEMI] = ACTIONS(1001),
    [anon_sym_LBRACE] = ACTIONS(1001),
    [sym_comment] = ACTIONS(58),
  },
  [359] = {
    [aux_sym_exception_type_list_repeat1] = STATE(510),
    [anon_sym_SEMI] = ACTIONS(1003),
    [anon_sym_COMMA] = ACTIONS(1005),
    [anon_sym_LBRACE] = ACTIONS(1003),
    [sym_comment] = ACTIONS(58),
  },
  [360] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1007),
    [sym_comment] = ACTIONS(58),
  },
  [361] = {
    [anon_sym_SEMI] = ACTIONS(1009),
    [anon_sym_EQ] = ACTIONS(1009),
    [anon_sym_GT] = ACTIONS(1009),
    [anon_sym_RPAREN] = ACTIONS(1009),
    [anon_sym_COMMA] = ACTIONS(1009),
    [anon_sym_LBRACE] = ACTIONS(1009),
    [anon_sym_DOT] = ACTIONS(1011),
    [anon_sym_LBRACK] = ACTIONS(1009),
    [anon_sym_AT] = ACTIONS(1009),
    [anon_sym_COLON_COLON] = ACTIONS(1009),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1009),
    [sym_identifier] = ACTIONS(1011),
    [sym_comment] = ACTIONS(58),
  },
  [362] = {
    [anon_sym_RBRACK] = ACTIONS(1013),
    [sym_comment] = ACTIONS(58),
  },
  [363] = {
    [anon_sym_DOT] = ACTIONS(1015),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_AT] = ACTIONS(1017),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1017),
    [sym_identifier] = ACTIONS(1015),
    [sym_comment] = ACTIONS(58),
  },
  [364] = {
    [sym_type_arguments] = STATE(513),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1015),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_AT] = ACTIONS(1017),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1017),
    [sym_identifier] = ACTIONS(1015),
    [sym_comment] = ACTIONS(58),
  },
  [365] = {
    [sym__expression] = STATE(516),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [366] = {
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_default] = ACTIONS(333),
    [anon_sym_synchronized] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_boolean] = ACTIONS(333),
    [anon_sym_byte] = ACTIONS(333),
    [anon_sym_short] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_long] = ACTIONS(333),
    [anon_sym_char] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_double] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym_static] = ACTIONS(333),
    [anon_sym_class] = ACTIONS(333),
    [anon_sym_public] = ACTIONS(333),
    [anon_sym_protected] = ACTIONS(333),
    [anon_sym_private] = ACTIONS(333),
    [anon_sym_abstract] = ACTIONS(333),
    [anon_sym_final] = ACTIONS(333),
    [anon_sym_strictfp] = ACTIONS(333),
    [anon_sym_native] = ACTIONS(333),
    [sym_identifier] = ACTIONS(335),
    [sym_comment] = ACTIONS(58),
  },
  [367] = {
    [anon_sym_LPAREN] = ACTIONS(1023),
    [anon_sym_default] = ACTIONS(341),
    [anon_sym_synchronized] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(1025),
    [anon_sym_boolean] = ACTIONS(341),
    [anon_sym_byte] = ACTIONS(341),
    [anon_sym_short] = ACTIONS(341),
    [anon_sym_int] = ACTIONS(341),
    [anon_sym_long] = ACTIONS(341),
    [anon_sym_char] = ACTIONS(341),
    [anon_sym_float] = ACTIONS(341),
    [anon_sym_double] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(337),
    [anon_sym_static] = ACTIONS(341),
    [anon_sym_class] = ACTIONS(341),
    [anon_sym_public] = ACTIONS(341),
    [anon_sym_protected] = ACTIONS(341),
    [anon_sym_private] = ACTIONS(341),
    [anon_sym_abstract] = ACTIONS(341),
    [anon_sym_final] = ACTIONS(341),
    [anon_sym_strictfp] = ACTIONS(341),
    [anon_sym_native] = ACTIONS(341),
    [sym_identifier] = ACTIONS(345),
    [sym_comment] = ACTIONS(58),
  },
  [368] = {
    [sym_type_parameters] = STATE(520),
    [sym_superclass] = STATE(521),
    [sym_super_interfaces] = STATE(522),
    [sym_class_body] = STATE(523),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [369] = {
    [sym_variable_declarator_list] = STATE(524),
    [sym_variable_declarator] = STATE(468),
    [sym_variable_declarator_id] = STATE(255),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [370] = {
    [ts_builtin_sym_end] = ACTIONS(1029),
    [anon_sym_SEMI] = ACTIONS(1029),
    [sym_decimal_integer_literal] = ACTIONS(1031),
    [sym_hex_integer_literal] = ACTIONS(1031),
    [sym_octal_integer_literal] = ACTIONS(1031),
    [sym_binary_integer_literal] = ACTIONS(1031),
    [sym_decimal_floating_point_literal] = ACTIONS(1031),
    [sym_hex_floating_point_literal] = ACTIONS(1033),
    [anon_sym_true] = ACTIONS(1031),
    [anon_sym_false] = ACTIONS(1031),
    [anon_sym_SQUOTE] = ACTIONS(1029),
    [sym_string_literal] = ACTIONS(1029),
    [sym_null_literal] = ACTIONS(1031),
    [anon_sym_GT] = ACTIONS(1031),
    [anon_sym_LT] = ACTIONS(1031),
    [anon_sym_EQ_EQ] = ACTIONS(1029),
    [anon_sym_GT_EQ] = ACTIONS(1029),
    [anon_sym_LT_EQ] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(1029),
    [anon_sym_AMP_AMP] = ACTIONS(1029),
    [anon_sym_PIPE_PIPE] = ACTIONS(1029),
    [anon_sym_PLUS] = ACTIONS(1031),
    [anon_sym_DASH] = ACTIONS(1031),
    [anon_sym_STAR] = ACTIONS(1029),
    [anon_sym_SLASH] = ACTIONS(1031),
    [anon_sym_AMP] = ACTIONS(1031),
    [anon_sym_PIPE] = ACTIONS(1031),
    [anon_sym_CARET] = ACTIONS(1029),
    [anon_sym_PERCENT] = ACTIONS(1029),
    [anon_sym_LT_LT] = ACTIONS(1029),
    [anon_sym_GT_GT] = ACTIONS(1031),
    [anon_sym_GT_GT_GT] = ACTIONS(1029),
    [anon_sym_LPAREN] = ACTIONS(1029),
    [anon_sym_RPAREN] = ACTIONS(1029),
    [anon_sym_COMMA] = ACTIONS(1029),
    [anon_sym_QMARK] = ACTIONS(1029),
    [anon_sym_COLON] = ACTIONS(1029),
    [anon_sym_BANG] = ACTIONS(1031),
    [anon_sym_TILDE] = ACTIONS(1029),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [anon_sym_LBRACE] = ACTIONS(1029),
    [anon_sym_RBRACE] = ACTIONS(1029),
    [anon_sym_default] = ACTIONS(1031),
    [anon_sym_synchronized] = ACTIONS(1031),
    [anon_sym_RBRACK] = ACTIONS(1029),
    [anon_sym_boolean] = ACTIONS(1031),
    [anon_sym_byte] = ACTIONS(1031),
    [anon_sym_short] = ACTIONS(1031),
    [anon_sym_int] = ACTIONS(1031),
    [anon_sym_long] = ACTIONS(1031),
    [anon_sym_char] = ACTIONS(1031),
    [anon_sym_float] = ACTIONS(1031),
    [anon_sym_double] = ACTIONS(1031),
    [anon_sym_AT] = ACTIONS(1029),
    [anon_sym_open] = ACTIONS(1031),
    [anon_sym_module] = ACTIONS(1031),
    [anon_sym_static] = ACTIONS(1031),
    [anon_sym_package] = ACTIONS(1031),
    [anon_sym_import] = ACTIONS(1031),
    [anon_sym_class] = ACTIONS(1031),
    [anon_sym_public] = ACTIONS(1031),
    [anon_sym_protected] = ACTIONS(1031),
    [anon_sym_private] = ACTIONS(1031),
    [anon_sym_abstract] = ACTIONS(1031),
    [anon_sym_final] = ACTIONS(1031),
    [anon_sym_strictfp] = ACTIONS(1031),
    [anon_sym_native] = ACTIONS(1031),
    [anon_sym_interface] = ACTIONS(1031),
    [sym_identifier] = ACTIONS(1033),
    [sym_comment] = ACTIONS(58),
  },
  [371] = {
    [anon_sym_RBRACE] = ACTIONS(1035),
    [anon_sym_default] = ACTIONS(1035),
    [anon_sym_synchronized] = ACTIONS(1035),
    [anon_sym_if] = ACTIONS(1035),
    [anon_sym_AT] = ACTIONS(1035),
    [anon_sym_static] = ACTIONS(1035),
    [anon_sym_class] = ACTIONS(1035),
    [anon_sym_public] = ACTIONS(1035),
    [anon_sym_protected] = ACTIONS(1035),
    [anon_sym_private] = ACTIONS(1035),
    [anon_sym_abstract] = ACTIONS(1035),
    [anon_sym_final] = ACTIONS(1035),
    [anon_sym_strictfp] = ACTIONS(1035),
    [anon_sym_native] = ACTIONS(1035),
    [sym_comment] = ACTIONS(58),
  },
  [372] = {
    [sym_statement] = STATE(224),
    [sym_if_then_statement] = STATE(225),
    [sym_if_then_else_statement] = STATE(225),
    [sym__annotation] = STATE(220),
    [sym_normal_annotation] = STATE(226),
    [sym_marker_annotation] = STATE(226),
    [sym_single_element_annotation] = STATE(226),
    [sym_class_declaration] = STATE(224),
    [sym_normal_class_declaration] = STATE(227),
    [sym_modifier] = STATE(228),
    [sym_block_statement] = STATE(525),
    [sym_local_variable_declaration_statement] = STATE(224),
    [sym_local_variable_declaration] = STATE(231),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(232),
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_default] = ACTIONS(423),
    [anon_sym_synchronized] = ACTIONS(423),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_static] = ACTIONS(423),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_public] = ACTIONS(423),
    [anon_sym_protected] = ACTIONS(423),
    [anon_sym_private] = ACTIONS(423),
    [anon_sym_abstract] = ACTIONS(423),
    [anon_sym_final] = ACTIONS(423),
    [anon_sym_strictfp] = ACTIONS(423),
    [anon_sym_native] = ACTIONS(423),
    [sym_comment] = ACTIONS(58),
  },
  [373] = {
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_default] = ACTIONS(377),
    [anon_sym_synchronized] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_requires] = ACTIONS(377),
    [anon_sym_exports] = ACTIONS(377),
    [anon_sym_opens] = ACTIONS(377),
    [anon_sym_uses] = ACTIONS(377),
    [anon_sym_provides] = ACTIONS(377),
    [anon_sym_static] = ACTIONS(377),
    [anon_sym_class] = ACTIONS(377),
    [anon_sym_public] = ACTIONS(377),
    [anon_sym_protected] = ACTIONS(377),
    [anon_sym_private] = ACTIONS(377),
    [anon_sym_abstract] = ACTIONS(377),
    [anon_sym_final] = ACTIONS(377),
    [anon_sym_strictfp] = ACTIONS(377),
    [anon_sym_native] = ACTIONS(377),
    [sym_comment] = ACTIONS(58),
  },
  [374] = {
    [anon_sym_RBRACE] = ACTIONS(1039),
    [anon_sym_default] = ACTIONS(1039),
    [anon_sym_synchronized] = ACTIONS(1039),
    [anon_sym_if] = ACTIONS(1039),
    [anon_sym_AT] = ACTIONS(1039),
    [anon_sym_static] = ACTIONS(1039),
    [anon_sym_class] = ACTIONS(1039),
    [anon_sym_public] = ACTIONS(1039),
    [anon_sym_protected] = ACTIONS(1039),
    [anon_sym_private] = ACTIONS(1039),
    [anon_sym_abstract] = ACTIONS(1039),
    [anon_sym_final] = ACTIONS(1039),
    [anon_sym_strictfp] = ACTIONS(1039),
    [anon_sym_native] = ACTIONS(1039),
    [sym_comment] = ACTIONS(58),
  },
  [375] = {
    [sym_identifier] = ACTIONS(1041),
    [sym_comment] = ACTIONS(58),
  },
  [376] = {
    [sym_annotation_type_body] = STATE(527),
    [anon_sym_LBRACE] = ACTIONS(537),
    [sym_comment] = ACTIONS(58),
  },
  [377] = {
    [sym__literal] = STATE(530),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(531),
    [sym_element_value_pair] = STATE(277),
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
    [anon_sym_RPAREN] = ACTIONS(1043),
    [sym_identifier] = ACTIONS(1045),
    [sym_comment] = ACTIONS(58),
  },
  [378] = {
    [sym_identifier] = ACTIONS(1047),
    [sym_comment] = ACTIONS(58),
  },
  [379] = {
    [sym_superclass] = STATE(533),
    [sym_super_interfaces] = STATE(464),
    [sym_class_body] = STATE(465),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [380] = {
    [sym_extends_interfaces] = STATE(534),
    [sym_interface_body] = STATE(472),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_extends] = ACTIONS(367),
    [sym_comment] = ACTIONS(58),
  },
  [381] = {
    [anon_sym_LBRACE] = ACTIONS(1049),
    [sym_comment] = ACTIONS(58),
  },
  [382] = {
    [sym__semicolon] = STATE(536),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(58),
  },
  [383] = {
    [anon_sym_AT] = ACTIONS(807),
    [sym_identifier] = ACTIONS(809),
    [sym_comment] = ACTIONS(58),
  },
  [384] = {
    [anon_sym_EQ] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(1051),
    [sym_comment] = ACTIONS(58),
  },
  [385] = {
    [anon_sym_RPAREN] = ACTIONS(1051),
    [sym_comment] = ACTIONS(58),
  },
  [386] = {
    [anon_sym_RPAREN] = ACTIONS(1053),
    [sym_comment] = ACTIONS(58),
  },
  [387] = {
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_AT] = ACTIONS(823),
    [sym_identifier] = ACTIONS(825),
    [sym_comment] = ACTIONS(58),
  },
  [388] = {
    [sym_class_or_interface_type] = STATE(539),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(244),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [389] = {
    [anon_sym_GT] = ACTIONS(1055),
    [anon_sym_AMP] = ACTIONS(1057),
    [anon_sym_COMMA] = ACTIONS(1055),
    [sym_comment] = ACTIONS(58),
  },
  [390] = {
    [anon_sym_GT] = ACTIONS(1059),
    [anon_sym_COMMA] = ACTIONS(1059),
    [sym_comment] = ACTIONS(58),
  },
  [391] = {
    [anon_sym_RPAREN] = ACTIONS(1061),
    [sym_identifier] = ACTIONS(1063),
    [sym_comment] = ACTIONS(58),
  },
  [392] = {
    [anon_sym_default] = ACTIONS(809),
    [anon_sym_synchronized] = ACTIONS(809),
    [anon_sym_boolean] = ACTIONS(809),
    [anon_sym_byte] = ACTIONS(809),
    [anon_sym_short] = ACTIONS(809),
    [anon_sym_int] = ACTIONS(809),
    [anon_sym_long] = ACTIONS(809),
    [anon_sym_char] = ACTIONS(809),
    [anon_sym_float] = ACTIONS(809),
    [anon_sym_double] = ACTIONS(809),
    [anon_sym_AT] = ACTIONS(807),
    [anon_sym_static] = ACTIONS(809),
    [anon_sym_public] = ACTIONS(809),
    [anon_sym_protected] = ACTIONS(809),
    [anon_sym_private] = ACTIONS(809),
    [anon_sym_abstract] = ACTIONS(809),
    [anon_sym_final] = ACTIONS(809),
    [anon_sym_strictfp] = ACTIONS(809),
    [anon_sym_native] = ACTIONS(809),
    [sym_identifier] = ACTIONS(811),
    [sym_comment] = ACTIONS(58),
  },
  [393] = {
    [anon_sym_EQ] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(1065),
    [sym_comment] = ACTIONS(58),
  },
  [394] = {
    [anon_sym_RPAREN] = ACTIONS(1065),
    [sym_comment] = ACTIONS(58),
  },
  [395] = {
    [anon_sym_RPAREN] = ACTIONS(1067),
    [sym_comment] = ACTIONS(58),
  },
  [396] = {
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_synchronized] = ACTIONS(825),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_boolean] = ACTIONS(825),
    [anon_sym_byte] = ACTIONS(825),
    [anon_sym_short] = ACTIONS(825),
    [anon_sym_int] = ACTIONS(825),
    [anon_sym_long] = ACTIONS(825),
    [anon_sym_char] = ACTIONS(825),
    [anon_sym_float] = ACTIONS(825),
    [anon_sym_double] = ACTIONS(825),
    [anon_sym_AT] = ACTIONS(823),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_native] = ACTIONS(825),
    [sym_identifier] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [397] = {
    [anon_sym_DOT] = ACTIONS(967),
    [anon_sym_LBRACK] = ACTIONS(965),
    [anon_sym_AT] = ACTIONS(965),
    [anon_sym_this] = ACTIONS(967),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(965),
    [sym_identifier] = ACTIONS(1069),
    [sym_comment] = ACTIONS(58),
  },
  [398] = {
    [anon_sym_GT] = ACTIONS(1071),
    [anon_sym_COMMA] = ACTIONS(971),
    [sym_comment] = ACTIONS(58),
  },
  [399] = {
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1073),
    [anon_sym_COMMA] = ACTIONS(1073),
    [sym_comment] = ACTIONS(58),
  },
  [400] = {
    [anon_sym_RPAREN] = ACTIONS(1075),
    [anon_sym_COMMA] = ACTIONS(1075),
    [sym_comment] = ACTIONS(58),
  },
  [401] = {
    [anon_sym_LBRACK] = ACTIONS(1009),
    [anon_sym_AT] = ACTIONS(1009),
    [anon_sym_this] = ACTIONS(1011),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1009),
    [sym_identifier] = ACTIONS(1077),
    [sym_comment] = ACTIONS(58),
  },
  [402] = {
    [anon_sym_RBRACK] = ACTIONS(1079),
    [sym_comment] = ACTIONS(58),
  },
  [403] = {
    [anon_sym_DOT] = ACTIONS(1015),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_AT] = ACTIONS(1017),
    [anon_sym_this] = ACTIONS(1015),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1017),
    [sym_identifier] = ACTIONS(1081),
    [sym_comment] = ACTIONS(58),
  },
  [404] = {
    [sym_type_arguments] = STATE(545),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(1015),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_AT] = ACTIONS(1017),
    [anon_sym_this] = ACTIONS(1015),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1017),
    [sym_identifier] = ACTIONS(1081),
    [sym_comment] = ACTIONS(58),
  },
  [405] = {
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(1083),
    [sym_comment] = ACTIONS(58),
  },
  [406] = {
    [anon_sym_RPAREN] = ACTIONS(1085),
    [sym_comment] = ACTIONS(58),
  },
  [407] = {
    [anon_sym_RPAREN] = ACTIONS(1087),
    [sym_comment] = ACTIONS(58),
  },
  [408] = {
    [anon_sym_this] = ACTIONS(1089),
    [sym_comment] = ACTIONS(58),
  },
  [409] = {
    [ts_builtin_sym_end] = ACTIONS(1091),
    [sym_decimal_integer_literal] = ACTIONS(1093),
    [sym_hex_integer_literal] = ACTIONS(1093),
    [sym_octal_integer_literal] = ACTIONS(1093),
    [sym_binary_integer_literal] = ACTIONS(1093),
    [sym_decimal_floating_point_literal] = ACTIONS(1093),
    [sym_hex_floating_point_literal] = ACTIONS(1095),
    [anon_sym_true] = ACTIONS(1093),
    [anon_sym_false] = ACTIONS(1093),
    [anon_sym_SQUOTE] = ACTIONS(1091),
    [sym_string_literal] = ACTIONS(1091),
    [sym_null_literal] = ACTIONS(1093),
    [anon_sym_LT] = ACTIONS(1091),
    [anon_sym_LPAREN] = ACTIONS(1091),
    [anon_sym_BANG] = ACTIONS(1091),
    [anon_sym_TILDE] = ACTIONS(1091),
    [anon_sym_PLUS_PLUS] = ACTIONS(1091),
    [anon_sym_DASH_DASH] = ACTIONS(1091),
    [anon_sym_default] = ACTIONS(1093),
    [anon_sym_synchronized] = ACTIONS(1093),
    [anon_sym_boolean] = ACTIONS(1093),
    [anon_sym_byte] = ACTIONS(1093),
    [anon_sym_short] = ACTIONS(1093),
    [anon_sym_int] = ACTIONS(1093),
    [anon_sym_long] = ACTIONS(1093),
    [anon_sym_char] = ACTIONS(1093),
    [anon_sym_float] = ACTIONS(1093),
    [anon_sym_double] = ACTIONS(1093),
    [anon_sym_AT] = ACTIONS(1091),
    [anon_sym_open] = ACTIONS(1093),
    [anon_sym_module] = ACTIONS(1093),
    [anon_sym_static] = ACTIONS(1093),
    [anon_sym_package] = ACTIONS(1093),
    [anon_sym_import] = ACTIONS(1093),
    [anon_sym_class] = ACTIONS(1093),
    [anon_sym_public] = ACTIONS(1093),
    [anon_sym_protected] = ACTIONS(1093),
    [anon_sym_private] = ACTIONS(1093),
    [anon_sym_abstract] = ACTIONS(1093),
    [anon_sym_final] = ACTIONS(1093),
    [anon_sym_strictfp] = ACTIONS(1093),
    [anon_sym_native] = ACTIONS(1093),
    [anon_sym_interface] = ACTIONS(1093),
    [sym_identifier] = ACTIONS(1095),
    [sym_comment] = ACTIONS(58),
  },
  [410] = {
    [anon_sym_RBRACE] = ACTIONS(1097),
    [anon_sym_default] = ACTIONS(1099),
    [anon_sym_synchronized] = ACTIONS(1099),
    [anon_sym_boolean] = ACTIONS(1099),
    [anon_sym_byte] = ACTIONS(1099),
    [anon_sym_short] = ACTIONS(1099),
    [anon_sym_int] = ACTIONS(1099),
    [anon_sym_long] = ACTIONS(1099),
    [anon_sym_char] = ACTIONS(1099),
    [anon_sym_float] = ACTIONS(1099),
    [anon_sym_double] = ACTIONS(1099),
    [anon_sym_AT] = ACTIONS(1097),
    [anon_sym_static] = ACTIONS(1099),
    [anon_sym_class] = ACTIONS(1099),
    [anon_sym_public] = ACTIONS(1099),
    [anon_sym_protected] = ACTIONS(1099),
    [anon_sym_private] = ACTIONS(1099),
    [anon_sym_abstract] = ACTIONS(1099),
    [anon_sym_final] = ACTIONS(1099),
    [anon_sym_strictfp] = ACTIONS(1099),
    [anon_sym_native] = ACTIONS(1099),
    [anon_sym_interface] = ACTIONS(1099),
    [sym_identifier] = ACTIONS(1101),
    [sym_comment] = ACTIONS(58),
  },
  [411] = {
    [anon_sym_RBRACE] = ACTIONS(1103),
    [anon_sym_default] = ACTIONS(1105),
    [anon_sym_synchronized] = ACTIONS(1105),
    [anon_sym_boolean] = ACTIONS(1105),
    [anon_sym_byte] = ACTIONS(1105),
    [anon_sym_short] = ACTIONS(1105),
    [anon_sym_int] = ACTIONS(1105),
    [anon_sym_long] = ACTIONS(1105),
    [anon_sym_char] = ACTIONS(1105),
    [anon_sym_float] = ACTIONS(1105),
    [anon_sym_double] = ACTIONS(1105),
    [anon_sym_AT] = ACTIONS(1103),
    [anon_sym_static] = ACTIONS(1105),
    [anon_sym_class] = ACTIONS(1105),
    [anon_sym_public] = ACTIONS(1105),
    [anon_sym_protected] = ACTIONS(1105),
    [anon_sym_private] = ACTIONS(1105),
    [anon_sym_abstract] = ACTIONS(1105),
    [anon_sym_final] = ACTIONS(1105),
    [anon_sym_strictfp] = ACTIONS(1105),
    [anon_sym_native] = ACTIONS(1105),
    [anon_sym_interface] = ACTIONS(1105),
    [sym_identifier] = ACTIONS(1107),
    [sym_comment] = ACTIONS(58),
  },
  [412] = {
    [sym_variable_declarator_list] = STATE(467),
    [sym_variable_declarator] = STATE(468),
    [sym_variable_declarator_id] = STATE(255),
    [sym_identifier] = ACTIONS(1109),
    [sym_comment] = ACTIONS(58),
  },
  [413] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_modifier] = STATE(125),
    [sym_unann_type] = STATE(548),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(901),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(903),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(905),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [414] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(410),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_interface_declaration] = STATE(410),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_annotation_type_member_declaration] = STATE(550),
    [sym_annotation_type_element_declaration] = STATE(410),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_constant_declaration] = STATE(410),
    [sym_unann_type] = STATE(412),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(413),
    [anon_sym_RBRACE] = ACTIONS(1111),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [415] = {
    [sym__literal] = STATE(553),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(554),
    [sym__annotation] = STATE(553),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_element_value] = STATE(555),
    [sym_element_value_array_initializer] = STATE(553),
    [sym_conditional_expression] = STATE(553),
    [sym_conditional_or_expression] = STATE(556),
    [sym_conditional_and_expression] = STATE(557),
    [sym_inclusive_or_expression] = STATE(558),
    [sym_exclusive_or_expression] = STATE(559),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(561),
    [sym_equality_expression] = STATE(562),
    [sym_shift_expression] = STATE(563),
    [sym_additive_expression] = STATE(564),
    [sym_multiplicative_expression] = STATE(565),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1113),
    [anon_sym_false] = ACTIONS(1113),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [416] = {
    [anon_sym_SEMI] = ACTIONS(1119),
    [anon_sym_LT] = ACTIONS(1119),
    [anon_sym_RPAREN] = ACTIONS(1119),
    [anon_sym_COMMA] = ACTIONS(1119),
    [anon_sym_RBRACE] = ACTIONS(1119),
    [anon_sym_default] = ACTIONS(1121),
    [anon_sym_synchronized] = ACTIONS(1121),
    [anon_sym_LBRACK] = ACTIONS(1119),
    [anon_sym_boolean] = ACTIONS(1121),
    [anon_sym_byte] = ACTIONS(1121),
    [anon_sym_short] = ACTIONS(1121),
    [anon_sym_int] = ACTIONS(1121),
    [anon_sym_long] = ACTIONS(1121),
    [anon_sym_char] = ACTIONS(1121),
    [anon_sym_float] = ACTIONS(1121),
    [anon_sym_double] = ACTIONS(1121),
    [anon_sym_AT] = ACTIONS(1119),
    [anon_sym_open] = ACTIONS(1121),
    [anon_sym_module] = ACTIONS(1121),
    [anon_sym_static] = ACTIONS(1121),
    [anon_sym_package] = ACTIONS(1121),
    [anon_sym_class] = ACTIONS(1121),
    [anon_sym_public] = ACTIONS(1121),
    [anon_sym_protected] = ACTIONS(1121),
    [anon_sym_private] = ACTIONS(1121),
    [anon_sym_abstract] = ACTIONS(1121),
    [anon_sym_final] = ACTIONS(1121),
    [anon_sym_strictfp] = ACTIONS(1121),
    [anon_sym_native] = ACTIONS(1121),
    [anon_sym_interface] = ACTIONS(1121),
    [sym_identifier] = ACTIONS(1123),
    [sym_comment] = ACTIONS(58),
  },
  [417] = {
    [anon_sym_SEMI] = ACTIONS(1125),
    [anon_sym_LT] = ACTIONS(1125),
    [anon_sym_RPAREN] = ACTIONS(1125),
    [anon_sym_COMMA] = ACTIONS(1125),
    [anon_sym_RBRACE] = ACTIONS(1125),
    [anon_sym_default] = ACTIONS(1127),
    [anon_sym_synchronized] = ACTIONS(1127),
    [anon_sym_LBRACK] = ACTIONS(1125),
    [anon_sym_boolean] = ACTIONS(1127),
    [anon_sym_byte] = ACTIONS(1127),
    [anon_sym_short] = ACTIONS(1127),
    [anon_sym_int] = ACTIONS(1127),
    [anon_sym_long] = ACTIONS(1127),
    [anon_sym_char] = ACTIONS(1127),
    [anon_sym_float] = ACTIONS(1127),
    [anon_sym_double] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1125),
    [anon_sym_open] = ACTIONS(1127),
    [anon_sym_module] = ACTIONS(1127),
    [anon_sym_static] = ACTIONS(1127),
    [anon_sym_package] = ACTIONS(1127),
    [anon_sym_class] = ACTIONS(1127),
    [anon_sym_public] = ACTIONS(1127),
    [anon_sym_protected] = ACTIONS(1127),
    [anon_sym_private] = ACTIONS(1127),
    [anon_sym_abstract] = ACTIONS(1127),
    [anon_sym_final] = ACTIONS(1127),
    [anon_sym_strictfp] = ACTIONS(1127),
    [anon_sym_native] = ACTIONS(1127),
    [anon_sym_interface] = ACTIONS(1127),
    [sym_identifier] = ACTIONS(1129),
    [sym_comment] = ACTIONS(58),
  },
  [418] = {
    [sym_element_value_pair] = STATE(567),
    [sym_identifier] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [419] = {
    [anon_sym_RPAREN] = ACTIONS(1133),
    [anon_sym_COMMA] = ACTIONS(1135),
    [sym_comment] = ACTIONS(58),
  },
  [420] = {
    [ts_builtin_sym_end] = ACTIONS(1137),
    [sym_decimal_integer_literal] = ACTIONS(1139),
    [sym_hex_integer_literal] = ACTIONS(1139),
    [sym_octal_integer_literal] = ACTIONS(1139),
    [sym_binary_integer_literal] = ACTIONS(1139),
    [sym_decimal_floating_point_literal] = ACTIONS(1139),
    [sym_hex_floating_point_literal] = ACTIONS(1141),
    [anon_sym_true] = ACTIONS(1139),
    [anon_sym_false] = ACTIONS(1139),
    [anon_sym_SQUOTE] = ACTIONS(1137),
    [sym_string_literal] = ACTIONS(1137),
    [sym_null_literal] = ACTIONS(1139),
    [anon_sym_LT] = ACTIONS(1137),
    [anon_sym_LPAREN] = ACTIONS(1137),
    [anon_sym_BANG] = ACTIONS(1137),
    [anon_sym_TILDE] = ACTIONS(1137),
    [anon_sym_PLUS_PLUS] = ACTIONS(1137),
    [anon_sym_DASH_DASH] = ACTIONS(1137),
    [anon_sym_default] = ACTIONS(1139),
    [anon_sym_synchronized] = ACTIONS(1139),
    [anon_sym_boolean] = ACTIONS(1139),
    [anon_sym_byte] = ACTIONS(1139),
    [anon_sym_short] = ACTIONS(1139),
    [anon_sym_int] = ACTIONS(1139),
    [anon_sym_long] = ACTIONS(1139),
    [anon_sym_char] = ACTIONS(1139),
    [anon_sym_float] = ACTIONS(1139),
    [anon_sym_double] = ACTIONS(1139),
    [anon_sym_AT] = ACTIONS(1137),
    [anon_sym_open] = ACTIONS(1139),
    [anon_sym_module] = ACTIONS(1139),
    [anon_sym_static] = ACTIONS(1139),
    [anon_sym_package] = ACTIONS(1139),
    [anon_sym_import] = ACTIONS(1139),
    [anon_sym_class] = ACTIONS(1139),
    [anon_sym_public] = ACTIONS(1139),
    [anon_sym_protected] = ACTIONS(1139),
    [anon_sym_private] = ACTIONS(1139),
    [anon_sym_abstract] = ACTIONS(1139),
    [anon_sym_final] = ACTIONS(1139),
    [anon_sym_strictfp] = ACTIONS(1139),
    [anon_sym_native] = ACTIONS(1139),
    [anon_sym_interface] = ACTIONS(1139),
    [sym_identifier] = ACTIONS(1141),
    [sym_comment] = ACTIONS(58),
  },
  [421] = {
    [sym_module_directive] = STATE(433),
    [anon_sym_RBRACE] = ACTIONS(1143),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [422] = {
    [anon_sym_SEMI] = ACTIONS(1145),
    [anon_sym_LBRACE] = ACTIONS(1145),
    [anon_sym_DOT] = ACTIONS(1145),
    [sym_comment] = ACTIONS(58),
  },
  [423] = {
    [anon_sym_transitive] = ACTIONS(1147),
    [anon_sym_static] = ACTIONS(1147),
    [sym_identifier] = ACTIONS(1149),
    [sym_comment] = ACTIONS(58),
  },
  [424] = {
    [anon_sym_SEMI] = ACTIONS(1151),
    [anon_sym_COMMA] = ACTIONS(1151),
    [anon_sym_DOT] = ACTIONS(1151),
    [sym_comment] = ACTIONS(58),
  },
  [425] = {
    [anon_sym_transitive] = ACTIONS(1153),
    [anon_sym_static] = ACTIONS(1153),
    [sym_identifier] = ACTIONS(1155),
    [sym_comment] = ACTIONS(58),
  },
  [426] = {
    [sym__semicolon] = STATE(571),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_DOT] = ACTIONS(1157),
    [sym_comment] = ACTIONS(58),
  },
  [427] = {
    [sym_requires_modifier] = STATE(572),
    [sym_module_name] = STATE(573),
    [anon_sym_transitive] = ACTIONS(841),
    [anon_sym_static] = ACTIONS(841),
    [sym_identifier] = ACTIONS(843),
    [sym_comment] = ACTIONS(58),
  },
  [428] = {
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_to] = ACTIONS(333),
    [sym_identifier] = ACTIONS(335),
    [sym_comment] = ACTIONS(58),
  },
  [429] = {
    [sym__semicolon] = STATE(571),
    [sym_module_name] = STATE(577),
    [aux_sym_module_directive_repeat2] = STATE(578),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(1159),
    [anon_sym_DOT] = ACTIONS(1161),
    [anon_sym_to] = ACTIONS(1163),
    [sym_identifier] = ACTIONS(843),
    [sym_comment] = ACTIONS(58),
  },
  [430] = {
    [sym__semicolon] = STATE(571),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_comment] = ACTIONS(58),
  },
  [431] = {
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_with] = ACTIONS(331),
    [sym_comment] = ACTIONS(58),
  },
  [432] = {
    [anon_sym_DOT] = ACTIONS(1165),
    [anon_sym_with] = ACTIONS(1167),
    [sym_comment] = ACTIONS(58),
  },
  [433] = {
    [anon_sym_RBRACE] = ACTIONS(1169),
    [anon_sym_requires] = ACTIONS(1169),
    [anon_sym_exports] = ACTIONS(1169),
    [anon_sym_opens] = ACTIONS(1169),
    [anon_sym_uses] = ACTIONS(1169),
    [anon_sym_provides] = ACTIONS(1169),
    [sym_comment] = ACTIONS(58),
  },
  [434] = {
    [sym__semicolon] = STATE(581),
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_comment] = ACTIONS(58),
  },
  [435] = {
    [sym__semicolon] = STATE(582),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(823),
    [sym_comment] = ACTIONS(58),
  },
  [436] = {
    [ts_builtin_sym_end] = ACTIONS(1171),
    [sym_decimal_integer_literal] = ACTIONS(1173),
    [sym_hex_integer_literal] = ACTIONS(1173),
    [sym_octal_integer_literal] = ACTIONS(1173),
    [sym_binary_integer_literal] = ACTIONS(1173),
    [sym_decimal_floating_point_literal] = ACTIONS(1173),
    [sym_hex_floating_point_literal] = ACTIONS(1175),
    [anon_sym_true] = ACTIONS(1173),
    [anon_sym_false] = ACTIONS(1173),
    [anon_sym_SQUOTE] = ACTIONS(1171),
    [sym_string_literal] = ACTIONS(1171),
    [sym_null_literal] = ACTIONS(1173),
    [anon_sym_LT] = ACTIONS(1171),
    [anon_sym_LPAREN] = ACTIONS(1171),
    [anon_sym_BANG] = ACTIONS(1171),
    [anon_sym_TILDE] = ACTIONS(1171),
    [anon_sym_PLUS_PLUS] = ACTIONS(1171),
    [anon_sym_DASH_DASH] = ACTIONS(1171),
    [anon_sym_default] = ACTIONS(1173),
    [anon_sym_synchronized] = ACTIONS(1173),
    [anon_sym_boolean] = ACTIONS(1173),
    [anon_sym_byte] = ACTIONS(1173),
    [anon_sym_short] = ACTIONS(1173),
    [anon_sym_int] = ACTIONS(1173),
    [anon_sym_long] = ACTIONS(1173),
    [anon_sym_char] = ACTIONS(1173),
    [anon_sym_float] = ACTIONS(1173),
    [anon_sym_double] = ACTIONS(1173),
    [anon_sym_AT] = ACTIONS(1171),
    [anon_sym_open] = ACTIONS(1173),
    [anon_sym_module] = ACTIONS(1173),
    [anon_sym_static] = ACTIONS(1173),
    [anon_sym_package] = ACTIONS(1173),
    [anon_sym_import] = ACTIONS(1173),
    [anon_sym_class] = ACTIONS(1173),
    [anon_sym_public] = ACTIONS(1173),
    [anon_sym_protected] = ACTIONS(1173),
    [anon_sym_private] = ACTIONS(1173),
    [anon_sym_abstract] = ACTIONS(1173),
    [anon_sym_final] = ACTIONS(1173),
    [anon_sym_strictfp] = ACTIONS(1173),
    [anon_sym_native] = ACTIONS(1173),
    [anon_sym_interface] = ACTIONS(1173),
    [sym_identifier] = ACTIONS(1175),
    [sym_comment] = ACTIONS(58),
  },
  [437] = {
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_extends] = ACTIONS(483),
    [anon_sym_implements] = ACTIONS(483),
    [sym_comment] = ACTIONS(58),
  },
  [438] = {
    [anon_sym_SEMI] = ACTIONS(701),
    [anon_sym_LT] = ACTIONS(701),
    [anon_sym_LBRACE] = ACTIONS(701),
    [anon_sym_RBRACE] = ACTIONS(701),
    [anon_sym_default] = ACTIONS(703),
    [anon_sym_synchronized] = ACTIONS(703),
    [anon_sym_boolean] = ACTIONS(703),
    [anon_sym_byte] = ACTIONS(703),
    [anon_sym_short] = ACTIONS(703),
    [anon_sym_int] = ACTIONS(703),
    [anon_sym_long] = ACTIONS(703),
    [anon_sym_char] = ACTIONS(703),
    [anon_sym_float] = ACTIONS(703),
    [anon_sym_double] = ACTIONS(703),
    [anon_sym_AT] = ACTIONS(701),
    [anon_sym_static] = ACTIONS(703),
    [anon_sym_class] = ACTIONS(703),
    [anon_sym_public] = ACTIONS(703),
    [anon_sym_protected] = ACTIONS(703),
    [anon_sym_private] = ACTIONS(703),
    [anon_sym_abstract] = ACTIONS(703),
    [anon_sym_final] = ACTIONS(703),
    [anon_sym_strictfp] = ACTIONS(703),
    [anon_sym_native] = ACTIONS(703),
    [anon_sym_interface] = ACTIONS(703),
    [sym_identifier] = ACTIONS(705),
    [sym_comment] = ACTIONS(58),
  },
  [439] = {
    [anon_sym_RBRACE] = ACTIONS(1177),
    [sym_comment] = ACTIONS(58),
  },
  [440] = {
    [sym_identifier] = ACTIONS(1179),
    [sym_comment] = ACTIONS(58),
  },
  [441] = {
    [sym_type_parameters] = STATE(586),
    [sym_superclass] = STATE(587),
    [sym_super_interfaces] = STATE(588),
    [sym_class_body] = STATE(589),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [442] = {
    [sym_type_parameters] = STATE(591),
    [sym_extends_interfaces] = STATE(592),
    [sym_interface_body] = STATE(593),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [anon_sym_extends] = ACTIONS(367),
    [sym_comment] = ACTIONS(58),
  },
  [443] = {
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
    [sym__formal_parameter_list] = STATE(594),
    [sym_formal_parameter] = STATE(72),
    [sym_receiver_parameter] = STATE(73),
    [sym_last_formal_parameter] = STATE(74),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(75),
    [aux_sym_class_or_interface_type_repeat1] = STATE(76),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
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
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [444] = {
    [sym_type_arguments] = STATE(92),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(1185),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(58),
  },
  [445] = {
    [sym__literal] = STATE(604),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_statement] = STATE(224),
    [sym_if_then_statement] = STATE(225),
    [sym_if_then_else_statement] = STATE(225),
    [sym_type_arguments] = STATE(605),
    [sym_class_or_interface_type] = STATE(606),
    [sym_type_variable] = STATE(607),
    [sym_primitive_type] = STATE(607),
    [sym_integral_type] = STATE(598),
    [sym_floating_point_type] = STATE(598),
    [sym__annotation] = STATE(608),
    [sym_normal_annotation] = STATE(226),
    [sym_marker_annotation] = STATE(226),
    [sym_single_element_annotation] = STATE(226),
    [sym_package_or_type_name] = STATE(609),
    [sym_class_declaration] = STATE(224),
    [sym_normal_class_declaration] = STATE(227),
    [sym_modifier] = STATE(228),
    [sym_explicit_constructor_invocation] = STATE(610),
    [sym_ambiguous_name] = STATE(611),
    [sym_primary] = STATE(612),
    [sym_array_creation_expression] = STATE(613),
    [sym_primary_no_new_array] = STATE(614),
    [sym_class_literal] = STATE(604),
    [sym_class_instance_creation_expression] = STATE(604),
    [sym_unqualified_class_instance_creation_expression] = STATE(615),
    [sym_field_access] = STATE(604),
    [sym_array_access] = STATE(604),
    [sym_method_invocation] = STATE(604),
    [sym_method_reference] = STATE(604),
    [sym_array_type] = STATE(616),
    [sym_block_statements] = STATE(617),
    [sym_block_statement] = STATE(230),
    [sym_local_variable_declaration_statement] = STATE(224),
    [sym_local_variable_declaration] = STATE(231),
    [sym_method_name] = STATE(618),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(232),
    [aux_sym_class_or_interface_type_repeat1] = STATE(619),
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
    [anon_sym_LT] = ACTIONS(909),
    [anon_sym_LPAREN] = ACTIONS(1187),
    [anon_sym_RBRACE] = ACTIONS(1189),
    [anon_sym_default] = ACTIONS(1191),
    [anon_sym_synchronized] = ACTIONS(1191),
    [anon_sym_if] = ACTIONS(1193),
    [anon_sym_boolean] = ACTIONS(1195),
    [anon_sym_void] = ACTIONS(1197),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_static] = ACTIONS(1191),
    [anon_sym_class] = ACTIONS(1199),
    [anon_sym_public] = ACTIONS(1191),
    [anon_sym_protected] = ACTIONS(1191),
    [anon_sym_private] = ACTIONS(1191),
    [anon_sym_abstract] = ACTIONS(1191),
    [anon_sym_final] = ACTIONS(1191),
    [anon_sym_strictfp] = ACTIONS(1191),
    [anon_sym_native] = ACTIONS(1191),
    [anon_sym_this] = ACTIONS(1201),
    [anon_sym_super] = ACTIONS(1203),
    [anon_sym_new] = ACTIONS(1205),
    [sym_identifier] = ACTIONS(1207),
    [sym_comment] = ACTIONS(58),
  },
  [446] = {
    [anon_sym_SEMI] = ACTIONS(1209),
    [anon_sym_LT] = ACTIONS(1209),
    [anon_sym_LBRACE] = ACTIONS(1209),
    [anon_sym_RBRACE] = ACTIONS(1209),
    [anon_sym_default] = ACTIONS(1211),
    [anon_sym_synchronized] = ACTIONS(1211),
    [anon_sym_boolean] = ACTIONS(1211),
    [anon_sym_byte] = ACTIONS(1211),
    [anon_sym_short] = ACTIONS(1211),
    [anon_sym_int] = ACTIONS(1211),
    [anon_sym_long] = ACTIONS(1211),
    [anon_sym_char] = ACTIONS(1211),
    [anon_sym_float] = ACTIONS(1211),
    [anon_sym_double] = ACTIONS(1211),
    [anon_sym_AT] = ACTIONS(1209),
    [anon_sym_static] = ACTIONS(1211),
    [anon_sym_class] = ACTIONS(1211),
    [anon_sym_public] = ACTIONS(1211),
    [anon_sym_protected] = ACTIONS(1211),
    [anon_sym_private] = ACTIONS(1211),
    [anon_sym_abstract] = ACTIONS(1211),
    [anon_sym_final] = ACTIONS(1211),
    [anon_sym_strictfp] = ACTIONS(1211),
    [anon_sym_native] = ACTIONS(1211),
    [anon_sym_interface] = ACTIONS(1211),
    [sym_identifier] = ACTIONS(1213),
    [sym_comment] = ACTIONS(58),
  },
  [447] = {
    [sym_constructor_body] = STATE(620),
    [anon_sym_LBRACE] = ACTIONS(899),
    [sym_comment] = ACTIONS(58),
  },
  [448] = {
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_LT] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_RBRACE] = ACTIONS(431),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_synchronized] = ACTIONS(433),
    [anon_sym_boolean] = ACTIONS(433),
    [anon_sym_byte] = ACTIONS(433),
    [anon_sym_short] = ACTIONS(433),
    [anon_sym_int] = ACTIONS(433),
    [anon_sym_long] = ACTIONS(433),
    [anon_sym_char] = ACTIONS(433),
    [anon_sym_float] = ACTIONS(433),
    [anon_sym_double] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(433),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_native] = ACTIONS(433),
    [anon_sym_interface] = ACTIONS(433),
    [sym_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(58),
  },
  [449] = {
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_default] = ACTIONS(439),
    [anon_sym_synchronized] = ACTIONS(439),
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
    [anon_sym_native] = ACTIONS(439),
    [anon_sym_interface] = ACTIONS(439),
    [sym_identifier] = ACTIONS(441),
    [sym_comment] = ACTIONS(58),
  },
  [450] = {
    [sym_package_or_type_name] = STATE(235),
    [anon_sym_interface] = ACTIONS(1215),
    [sym_identifier] = ACTIONS(451),
    [sym_comment] = ACTIONS(58),
  },
  [451] = {
    [sym_identifier] = ACTIONS(1217),
    [sym_comment] = ACTIONS(58),
  },
  [452] = {
    [sym_identifier] = ACTIONS(1219),
    [sym_comment] = ACTIONS(58),
  },
  [453] = {
    [sym_constructor_body] = STATE(620),
    [sym_throws] = STATE(624),
    [anon_sym_LBRACE] = ACTIONS(899),
    [anon_sym_throws] = ACTIONS(405),
    [sym_comment] = ACTIONS(58),
  },
  [454] = {
    [sym__semicolon] = STATE(448),
    [sym_method_body] = STATE(625),
    [sym_block] = STATE(448),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(581),
    [sym_comment] = ACTIONS(58),
  },
  [455] = {
    [ts_builtin_sym_end] = ACTIONS(1221),
    [sym_decimal_integer_literal] = ACTIONS(1223),
    [sym_hex_integer_literal] = ACTIONS(1223),
    [sym_octal_integer_literal] = ACTIONS(1223),
    [sym_binary_integer_literal] = ACTIONS(1223),
    [sym_decimal_floating_point_literal] = ACTIONS(1223),
    [sym_hex_floating_point_literal] = ACTIONS(1225),
    [anon_sym_true] = ACTIONS(1223),
    [anon_sym_false] = ACTIONS(1223),
    [anon_sym_SQUOTE] = ACTIONS(1221),
    [sym_string_literal] = ACTIONS(1221),
    [sym_null_literal] = ACTIONS(1223),
    [anon_sym_LT] = ACTIONS(1221),
    [anon_sym_LPAREN] = ACTIONS(1221),
    [anon_sym_BANG] = ACTIONS(1221),
    [anon_sym_TILDE] = ACTIONS(1221),
    [anon_sym_PLUS_PLUS] = ACTIONS(1221),
    [anon_sym_DASH_DASH] = ACTIONS(1221),
    [anon_sym_default] = ACTIONS(1223),
    [anon_sym_synchronized] = ACTIONS(1223),
    [anon_sym_boolean] = ACTIONS(1223),
    [anon_sym_byte] = ACTIONS(1223),
    [anon_sym_short] = ACTIONS(1223),
    [anon_sym_int] = ACTIONS(1223),
    [anon_sym_long] = ACTIONS(1223),
    [anon_sym_char] = ACTIONS(1223),
    [anon_sym_float] = ACTIONS(1223),
    [anon_sym_double] = ACTIONS(1223),
    [anon_sym_AT] = ACTIONS(1221),
    [anon_sym_open] = ACTIONS(1223),
    [anon_sym_module] = ACTIONS(1223),
    [anon_sym_static] = ACTIONS(1223),
    [anon_sym_package] = ACTIONS(1223),
    [anon_sym_import] = ACTIONS(1223),
    [anon_sym_class] = ACTIONS(1223),
    [anon_sym_public] = ACTIONS(1223),
    [anon_sym_protected] = ACTIONS(1223),
    [anon_sym_private] = ACTIONS(1223),
    [anon_sym_abstract] = ACTIONS(1223),
    [anon_sym_final] = ACTIONS(1223),
    [anon_sym_strictfp] = ACTIONS(1223),
    [anon_sym_native] = ACTIONS(1223),
    [anon_sym_interface] = ACTIONS(1223),
    [sym_identifier] = ACTIONS(1225),
    [sym_comment] = ACTIONS(58),
  },
  [456] = {
    [anon_sym_SEMI] = ACTIONS(1227),
    [anon_sym_LT] = ACTIONS(1227),
    [anon_sym_LBRACE] = ACTIONS(1227),
    [anon_sym_RBRACE] = ACTIONS(1227),
    [anon_sym_default] = ACTIONS(1229),
    [anon_sym_synchronized] = ACTIONS(1229),
    [anon_sym_boolean] = ACTIONS(1229),
    [anon_sym_byte] = ACTIONS(1229),
    [anon_sym_short] = ACTIONS(1229),
    [anon_sym_int] = ACTIONS(1229),
    [anon_sym_long] = ACTIONS(1229),
    [anon_sym_char] = ACTIONS(1229),
    [anon_sym_float] = ACTIONS(1229),
    [anon_sym_double] = ACTIONS(1229),
    [anon_sym_AT] = ACTIONS(1227),
    [anon_sym_static] = ACTIONS(1229),
    [anon_sym_class] = ACTIONS(1229),
    [anon_sym_public] = ACTIONS(1229),
    [anon_sym_protected] = ACTIONS(1229),
    [anon_sym_private] = ACTIONS(1229),
    [anon_sym_abstract] = ACTIONS(1229),
    [anon_sym_final] = ACTIONS(1229),
    [anon_sym_strictfp] = ACTIONS(1229),
    [anon_sym_native] = ACTIONS(1229),
    [anon_sym_interface] = ACTIONS(1229),
    [sym_identifier] = ACTIONS(1231),
    [sym_comment] = ACTIONS(58),
  },
  [457] = {
    [sym_type_argument] = STATE(626),
    [sym_reference_type] = STATE(191),
    [sym_class_or_interface_type] = STATE(192),
    [sym_primitive_type] = STATE(193),
    [sym_integral_type] = STATE(188),
    [sym_floating_point_type] = STATE(188),
    [sym__annotation] = STATE(105),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [aux_sym_class_or_interface_type_repeat1] = STATE(194),
    [anon_sym_boolean] = ACTIONS(369),
    [anon_sym_void] = ACTIONS(369),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(371),
    [sym_comment] = ACTIONS(58),
  },
  [458] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(628),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1233),
    [sym_comment] = ACTIONS(58),
  },
  [459] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(629),
    [anon_sym_LBRACE] = ACTIONS(961),
    [anon_sym_DOT] = ACTIONS(911),
    [anon_sym_implements] = ACTIONS(961),
    [sym_comment] = ACTIONS(58),
  },
  [460] = {
    [anon_sym_LBRACE] = ACTIONS(961),
    [anon_sym_DOT] = ACTIONS(1235),
    [anon_sym_implements] = ACTIONS(961),
    [sym_comment] = ACTIONS(58),
  },
  [461] = {
    [sym_type_arguments] = STATE(631),
    [aux_sym_class_or_interface_type_repeat2] = STATE(629),
    [anon_sym_LT] = ACTIONS(909),
    [anon_sym_LBRACE] = ACTIONS(961),
    [anon_sym_DOT] = ACTIONS(911),
    [anon_sym_implements] = ACTIONS(961),
    [sym_comment] = ACTIONS(58),
  },
  [462] = {
    [sym_class_or_interface_type] = STATE(632),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(244),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [463] = {
    [anon_sym_COMMA] = ACTIONS(1237),
    [anon_sym_LBRACE] = ACTIONS(1239),
    [sym_comment] = ACTIONS(58),
  },
  [464] = {
    [sym_class_body] = STATE(634),
    [anon_sym_LBRACE] = ACTIONS(359),
    [sym_comment] = ACTIONS(58),
  },
  [465] = {
    [ts_builtin_sym_end] = ACTIONS(1241),
    [sym_decimal_integer_literal] = ACTIONS(1243),
    [sym_hex_integer_literal] = ACTIONS(1243),
    [sym_octal_integer_literal] = ACTIONS(1243),
    [sym_binary_integer_literal] = ACTIONS(1243),
    [sym_decimal_floating_point_literal] = ACTIONS(1243),
    [sym_hex_floating_point_literal] = ACTIONS(1245),
    [anon_sym_true] = ACTIONS(1243),
    [anon_sym_false] = ACTIONS(1243),
    [anon_sym_SQUOTE] = ACTIONS(1241),
    [sym_string_literal] = ACTIONS(1241),
    [sym_null_literal] = ACTIONS(1243),
    [anon_sym_LT] = ACTIONS(1241),
    [anon_sym_LPAREN] = ACTIONS(1241),
    [anon_sym_BANG] = ACTIONS(1241),
    [anon_sym_TILDE] = ACTIONS(1241),
    [anon_sym_PLUS_PLUS] = ACTIONS(1241),
    [anon_sym_DASH_DASH] = ACTIONS(1241),
    [anon_sym_default] = ACTIONS(1243),
    [anon_sym_synchronized] = ACTIONS(1243),
    [anon_sym_boolean] = ACTIONS(1243),
    [anon_sym_byte] = ACTIONS(1243),
    [anon_sym_short] = ACTIONS(1243),
    [anon_sym_int] = ACTIONS(1243),
    [anon_sym_long] = ACTIONS(1243),
    [anon_sym_char] = ACTIONS(1243),
    [anon_sym_float] = ACTIONS(1243),
    [anon_sym_double] = ACTIONS(1243),
    [anon_sym_AT] = ACTIONS(1241),
    [anon_sym_open] = ACTIONS(1243),
    [anon_sym_module] = ACTIONS(1243),
    [anon_sym_static] = ACTIONS(1243),
    [anon_sym_package] = ACTIONS(1243),
    [anon_sym_import] = ACTIONS(1243),
    [anon_sym_class] = ACTIONS(1243),
    [anon_sym_public] = ACTIONS(1243),
    [anon_sym_protected] = ACTIONS(1243),
    [anon_sym_private] = ACTIONS(1243),
    [anon_sym_abstract] = ACTIONS(1243),
    [anon_sym_final] = ACTIONS(1243),
    [anon_sym_strictfp] = ACTIONS(1243),
    [anon_sym_native] = ACTIONS(1243),
    [anon_sym_interface] = ACTIONS(1243),
    [sym_identifier] = ACTIONS(1245),
    [sym_comment] = ACTIONS(58),
  },
  [466] = {
    [sym_dims] = STATE(257),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [467] = {
    [sym__semicolon] = STATE(635),
    [anon_sym_SEMI] = ACTIONS(579),
    [sym_comment] = ACTIONS(58),
  },
  [468] = {
    [aux_sym_variable_declarator_list_repeat1] = STATE(637),
    [anon_sym_SEMI] = ACTIONS(1247),
    [anon_sym_COMMA] = ACTIONS(1249),
    [sym_comment] = ACTIONS(58),
  },
  [469] = {
    [sym_variable_declarator_list] = STATE(638),
    [sym_variable_declarator] = STATE(468),
    [sym_variable_declarator_id] = STATE(255),
    [sym_method_declarator] = STATE(110),
    [sym_identifier] = ACTIONS(947),
    [sym_comment] = ACTIONS(58),
  },
  [470] = {
    [ts_builtin_sym_end] = ACTIONS(1251),
    [sym_decimal_integer_literal] = ACTIONS(1253),
    [sym_hex_integer_literal] = ACTIONS(1253),
    [sym_octal_integer_literal] = ACTIONS(1253),
    [sym_binary_integer_literal] = ACTIONS(1253),
    [sym_decimal_floating_point_literal] = ACTIONS(1253),
    [sym_hex_floating_point_literal] = ACTIONS(1255),
    [anon_sym_true] = ACTIONS(1253),
    [anon_sym_false] = ACTIONS(1253),
    [anon_sym_SQUOTE] = ACTIONS(1251),
    [sym_string_literal] = ACTIONS(1251),
    [sym_null_literal] = ACTIONS(1253),
    [anon_sym_LT] = ACTIONS(1251),
    [anon_sym_LPAREN] = ACTIONS(1251),
    [anon_sym_BANG] = ACTIONS(1251),
    [anon_sym_TILDE] = ACTIONS(1251),
    [anon_sym_PLUS_PLUS] = ACTIONS(1251),
    [anon_sym_DASH_DASH] = ACTIONS(1251),
    [anon_sym_default] = ACTIONS(1253),
    [anon_sym_synchronized] = ACTIONS(1253),
    [anon_sym_boolean] = ACTIONS(1253),
    [anon_sym_byte] = ACTIONS(1253),
    [anon_sym_short] = ACTIONS(1253),
    [anon_sym_int] = ACTIONS(1253),
    [anon_sym_long] = ACTIONS(1253),
    [anon_sym_char] = ACTIONS(1253),
    [anon_sym_float] = ACTIONS(1253),
    [anon_sym_double] = ACTIONS(1253),
    [anon_sym_AT] = ACTIONS(1251),
    [anon_sym_open] = ACTIONS(1253),
    [anon_sym_module] = ACTIONS(1253),
    [anon_sym_static] = ACTIONS(1253),
    [anon_sym_package] = ACTIONS(1253),
    [anon_sym_import] = ACTIONS(1253),
    [anon_sym_class] = ACTIONS(1253),
    [anon_sym_public] = ACTIONS(1253),
    [anon_sym_protected] = ACTIONS(1253),
    [anon_sym_private] = ACTIONS(1253),
    [anon_sym_abstract] = ACTIONS(1253),
    [anon_sym_final] = ACTIONS(1253),
    [anon_sym_strictfp] = ACTIONS(1253),
    [anon_sym_native] = ACTIONS(1253),
    [anon_sym_interface] = ACTIONS(1253),
    [sym_identifier] = ACTIONS(1255),
    [sym_comment] = ACTIONS(58),
  },
  [471] = {
    [anon_sym_SEMI] = ACTIONS(1257),
    [anon_sym_LT] = ACTIONS(1257),
    [anon_sym_RBRACE] = ACTIONS(1257),
    [anon_sym_default] = ACTIONS(1259),
    [anon_sym_synchronized] = ACTIONS(1259),
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
    [anon_sym_native] = ACTIONS(1259),
    [anon_sym_interface] = ACTIONS(1259),
    [sym_identifier] = ACTIONS(1261),
    [sym_comment] = ACTIONS(58),
  },
  [472] = {
    [ts_builtin_sym_end] = ACTIONS(1263),
    [sym_decimal_integer_literal] = ACTIONS(1265),
    [sym_hex_integer_literal] = ACTIONS(1265),
    [sym_octal_integer_literal] = ACTIONS(1265),
    [sym_binary_integer_literal] = ACTIONS(1265),
    [sym_decimal_floating_point_literal] = ACTIONS(1265),
    [sym_hex_floating_point_literal] = ACTIONS(1267),
    [anon_sym_true] = ACTIONS(1265),
    [anon_sym_false] = ACTIONS(1265),
    [anon_sym_SQUOTE] = ACTIONS(1263),
    [sym_string_literal] = ACTIONS(1263),
    [sym_null_literal] = ACTIONS(1265),
    [anon_sym_LT] = ACTIONS(1263),
    [anon_sym_LPAREN] = ACTIONS(1263),
    [anon_sym_BANG] = ACTIONS(1263),
    [anon_sym_TILDE] = ACTIONS(1263),
    [anon_sym_PLUS_PLUS] = ACTIONS(1263),
    [anon_sym_DASH_DASH] = ACTIONS(1263),
    [anon_sym_default] = ACTIONS(1265),
    [anon_sym_synchronized] = ACTIONS(1265),
    [anon_sym_boolean] = ACTIONS(1265),
    [anon_sym_byte] = ACTIONS(1265),
    [anon_sym_short] = ACTIONS(1265),
    [anon_sym_int] = ACTIONS(1265),
    [anon_sym_long] = ACTIONS(1265),
    [anon_sym_char] = ACTIONS(1265),
    [anon_sym_float] = ACTIONS(1265),
    [anon_sym_double] = ACTIONS(1265),
    [anon_sym_AT] = ACTIONS(1263),
    [anon_sym_open] = ACTIONS(1265),
    [anon_sym_module] = ACTIONS(1265),
    [anon_sym_static] = ACTIONS(1265),
    [anon_sym_package] = ACTIONS(1265),
    [anon_sym_import] = ACTIONS(1265),
    [anon_sym_class] = ACTIONS(1265),
    [anon_sym_public] = ACTIONS(1265),
    [anon_sym_protected] = ACTIONS(1265),
    [anon_sym_private] = ACTIONS(1265),
    [anon_sym_abstract] = ACTIONS(1265),
    [anon_sym_final] = ACTIONS(1265),
    [anon_sym_strictfp] = ACTIONS(1265),
    [anon_sym_native] = ACTIONS(1265),
    [anon_sym_interface] = ACTIONS(1265),
    [sym_identifier] = ACTIONS(1267),
    [sym_comment] = ACTIONS(58),
  },
  [473] = {
    [sym_type_arguments] = STATE(639),
    [anon_sym_GT] = ACTIONS(1269),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(1269),
    [anon_sym_COMMA] = ACTIONS(1269),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_DOT] = ACTIONS(1269),
    [anon_sym_LBRACK] = ACTIONS(1269),
    [anon_sym_AT] = ACTIONS(1269),
    [anon_sym_COLON_COLON] = ACTIONS(1269),
    [sym_comment] = ACTIONS(58),
  },
  [474] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1271),
    [sym_comment] = ACTIONS(58),
  },
  [475] = {
    [anon_sym_GT] = ACTIONS(1273),
    [anon_sym_AMP] = ACTIONS(1273),
    [anon_sym_COMMA] = ACTIONS(1273),
    [anon_sym_LBRACE] = ACTIONS(1273),
    [anon_sym_DOT] = ACTIONS(963),
    [anon_sym_LBRACK] = ACTIONS(1273),
    [anon_sym_AT] = ACTIONS(1273),
    [anon_sym_COLON_COLON] = ACTIONS(1273),
    [sym_comment] = ACTIONS(58),
  },
  [476] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(641),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1271),
    [sym_comment] = ACTIONS(58),
  },
  [477] = {
    [anon_sym_GT] = ACTIONS(1275),
    [anon_sym_COMMA] = ACTIONS(1275),
    [sym_comment] = ACTIONS(58),
  },
  [478] = {
    [anon_sym_GT] = ACTIONS(1277),
    [anon_sym_AMP] = ACTIONS(1277),
    [anon_sym_LPAREN] = ACTIONS(1277),
    [anon_sym_COMMA] = ACTIONS(1277),
    [anon_sym_LBRACE] = ACTIONS(1277),
    [anon_sym_DOT] = ACTIONS(1279),
    [anon_sym_LBRACK] = ACTIONS(1277),
    [anon_sym_AT] = ACTIONS(1277),
    [anon_sym_COLON_COLON] = ACTIONS(1277),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1277),
    [sym_identifier] = ACTIONS(1279),
    [sym_comment] = ACTIONS(58),
  },
  [479] = {
    [sym_type_argument] = STATE(642),
    [sym_reference_type] = STATE(191),
    [sym_class_or_interface_type] = STATE(192),
    [sym_primitive_type] = STATE(193),
    [sym_integral_type] = STATE(188),
    [sym_floating_point_type] = STATE(188),
    [sym__annotation] = STATE(105),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [aux_sym_class_or_interface_type_repeat1] = STATE(194),
    [anon_sym_boolean] = ACTIONS(369),
    [anon_sym_void] = ACTIONS(369),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(371),
    [sym_comment] = ACTIONS(58),
  },
  [480] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(643),
    [anon_sym_GT] = ACTIONS(1273),
    [anon_sym_AMP] = ACTIONS(1273),
    [anon_sym_COMMA] = ACTIONS(1273),
    [anon_sym_LBRACE] = ACTIONS(1273),
    [anon_sym_DOT] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(1273),
    [anon_sym_AT] = ACTIONS(1273),
    [anon_sym_COLON_COLON] = ACTIONS(1273),
    [sym_comment] = ACTIONS(58),
  },
  [481] = {
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [anon_sym_BANG_EQ] = ACTIONS(627),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [482] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [483] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [484] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [485] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(1281),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [486] = {
    [anon_sym_SEMI] = ACTIONS(1283),
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
  [487] = {
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [anon_sym_BANG_EQ] = ACTIONS(627),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_SLASH] = ACTIONS(665),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(665),
    [anon_sym_GT_GT_GT] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [488] = {
    [anon_sym_GT] = ACTIONS(653),
    [anon_sym_LT] = ACTIONS(653),
    [anon_sym_EQ_EQ] = ACTIONS(655),
    [anon_sym_GT_EQ] = ACTIONS(655),
    [anon_sym_LT_EQ] = ACTIONS(655),
    [anon_sym_BANG_EQ] = ACTIONS(655),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(661),
    [anon_sym_DASH] = ACTIONS(661),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_SLASH] = ACTIONS(665),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(665),
    [anon_sym_GT_GT_GT] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [489] = {
    [anon_sym_GT] = ACTIONS(653),
    [anon_sym_LT] = ACTIONS(653),
    [anon_sym_EQ_EQ] = ACTIONS(655),
    [anon_sym_GT_EQ] = ACTIONS(655),
    [anon_sym_LT_EQ] = ACTIONS(655),
    [anon_sym_BANG_EQ] = ACTIONS(655),
    [anon_sym_AMP_AMP] = ACTIONS(657),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(661),
    [anon_sym_DASH] = ACTIONS(661),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_SLASH] = ACTIONS(665),
    [anon_sym_AMP] = ACTIONS(667),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(665),
    [anon_sym_GT_GT_GT] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [490] = {
    [anon_sym_GT] = ACTIONS(653),
    [anon_sym_LT] = ACTIONS(653),
    [anon_sym_EQ_EQ] = ACTIONS(655),
    [anon_sym_GT_EQ] = ACTIONS(655),
    [anon_sym_LT_EQ] = ACTIONS(655),
    [anon_sym_BANG_EQ] = ACTIONS(655),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_SLASH] = ACTIONS(665),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(665),
    [anon_sym_GT_GT_GT] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [491] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(1285),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [492] = {
    [anon_sym_boolean] = ACTIONS(809),
    [anon_sym_byte] = ACTIONS(809),
    [anon_sym_short] = ACTIONS(809),
    [anon_sym_int] = ACTIONS(809),
    [anon_sym_long] = ACTIONS(809),
    [anon_sym_char] = ACTIONS(809),
    [anon_sym_float] = ACTIONS(809),
    [anon_sym_double] = ACTIONS(809),
    [anon_sym_AT] = ACTIONS(807),
    [sym_identifier] = ACTIONS(811),
    [sym_comment] = ACTIONS(58),
  },
  [493] = {
    [anon_sym_EQ] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(1287),
    [sym_comment] = ACTIONS(58),
  },
  [494] = {
    [anon_sym_RPAREN] = ACTIONS(1287),
    [sym_comment] = ACTIONS(58),
  },
  [495] = {
    [anon_sym_RPAREN] = ACTIONS(1289),
    [sym_comment] = ACTIONS(58),
  },
  [496] = {
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_boolean] = ACTIONS(825),
    [anon_sym_byte] = ACTIONS(825),
    [anon_sym_short] = ACTIONS(825),
    [anon_sym_int] = ACTIONS(825),
    [anon_sym_long] = ACTIONS(825),
    [anon_sym_char] = ACTIONS(825),
    [anon_sym_float] = ACTIONS(825),
    [anon_sym_double] = ACTIONS(825),
    [anon_sym_AT] = ACTIONS(823),
    [sym_identifier] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [497] = {
    [anon_sym_SEMI] = ACTIONS(1291),
    [anon_sym_LBRACE] = ACTIONS(1291),
    [sym_comment] = ACTIONS(58),
  },
  [498] = {
    [anon_sym_RBRACK] = ACTIONS(1293),
    [sym_comment] = ACTIONS(58),
  },
  [499] = {
    [anon_sym_SEMI] = ACTIONS(1295),
    [anon_sym_LBRACE] = ACTIONS(1295),
    [anon_sym_throws] = ACTIONS(1295),
    [sym_comment] = ACTIONS(58),
  },
  [500] = {
    [sym__annotation] = STATE(129),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(1297),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [501] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(650),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_default] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(1297),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_throws] = ACTIONS(415),
    [sym_comment] = ACTIONS(58),
  },
  [502] = {
    [sym_dims] = STATE(651),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(500),
    [aux_sym_dims_repeat1] = STATE(501),
    [anon_sym_SEMI] = ACTIONS(1295),
    [anon_sym_LBRACE] = ACTIONS(1295),
    [anon_sym_LBRACK] = ACTIONS(991),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_throws] = ACTIONS(1295),
    [sym_comment] = ACTIONS(58),
  },
  [503] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(653),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1299),
    [sym_comment] = ACTIONS(58),
  },
  [504] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(654),
    [anon_sym_DOT] = ACTIONS(995),
    [anon_sym_AT] = ACTIONS(961),
    [sym_identifier] = ACTIONS(1301),
    [sym_comment] = ACTIONS(58),
  },
  [505] = {
    [anon_sym_DOT] = ACTIONS(1303),
    [anon_sym_AT] = ACTIONS(961),
    [sym_identifier] = ACTIONS(1301),
    [sym_comment] = ACTIONS(58),
  },
  [506] = {
    [anon_sym_SEMI] = ACTIONS(1305),
    [anon_sym_COMMA] = ACTIONS(1305),
    [anon_sym_LBRACE] = ACTIONS(1305),
    [sym_comment] = ACTIONS(58),
  },
  [507] = {
    [anon_sym_SEMI] = ACTIONS(1307),
    [anon_sym_COMMA] = ACTIONS(1307),
    [anon_sym_LBRACE] = ACTIONS(1307),
    [sym_comment] = ACTIONS(58),
  },
  [508] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1309),
    [sym_comment] = ACTIONS(58),
  },
  [509] = {
    [anon_sym_SEMI] = ACTIONS(1311),
    [anon_sym_COMMA] = ACTIONS(1311),
    [anon_sym_LBRACE] = ACTIONS(1311),
    [sym_comment] = ACTIONS(58),
  },
  [510] = {
    [anon_sym_SEMI] = ACTIONS(1313),
    [anon_sym_COMMA] = ACTIONS(1315),
    [anon_sym_LBRACE] = ACTIONS(1313),
    [sym_comment] = ACTIONS(58),
  },
  [511] = {
    [sym_type_arguments] = STATE(658),
    [aux_sym_class_or_interface_type_repeat2] = STATE(654),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(995),
    [anon_sym_AT] = ACTIONS(961),
    [sym_identifier] = ACTIONS(1301),
    [sym_comment] = ACTIONS(58),
  },
  [512] = {
    [anon_sym_SEMI] = ACTIONS(1317),
    [anon_sym_EQ] = ACTIONS(1317),
    [anon_sym_GT] = ACTIONS(1317),
    [anon_sym_RPAREN] = ACTIONS(1317),
    [anon_sym_COMMA] = ACTIONS(1317),
    [anon_sym_LBRACE] = ACTIONS(1317),
    [anon_sym_DOT] = ACTIONS(1319),
    [anon_sym_LBRACK] = ACTIONS(1317),
    [anon_sym_AT] = ACTIONS(1317),
    [anon_sym_COLON_COLON] = ACTIONS(1317),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1317),
    [sym_identifier] = ACTIONS(1319),
    [sym_comment] = ACTIONS(58),
  },
  [513] = {
    [anon_sym_DOT] = ACTIONS(1321),
    [anon_sym_LBRACK] = ACTIONS(1323),
    [anon_sym_AT] = ACTIONS(1323),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1323),
    [sym_identifier] = ACTIONS(1321),
    [sym_comment] = ACTIONS(58),
  },
  [514] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [515] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [516] = {
    [anon_sym_GT] = ACTIONS(1325),
    [anon_sym_LT] = ACTIONS(1325),
    [anon_sym_EQ_EQ] = ACTIONS(1327),
    [anon_sym_GT_EQ] = ACTIONS(1327),
    [anon_sym_LT_EQ] = ACTIONS(1327),
    [anon_sym_BANG_EQ] = ACTIONS(1327),
    [anon_sym_AMP_AMP] = ACTIONS(1329),
    [anon_sym_PIPE_PIPE] = ACTIONS(1331),
    [anon_sym_PLUS] = ACTIONS(1333),
    [anon_sym_DASH] = ACTIONS(1333),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1337),
    [anon_sym_AMP] = ACTIONS(1339),
    [anon_sym_PIPE] = ACTIONS(1341),
    [anon_sym_CARET] = ACTIONS(1331),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1337),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(1343),
    [anon_sym_QMARK] = ACTIONS(1345),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [517] = {
    [sym__literal] = STATE(668),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(669),
    [sym_element_value_pair] = STATE(277),
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
    [anon_sym_RPAREN] = ACTIONS(1347),
    [sym_identifier] = ACTIONS(1349),
    [sym_comment] = ACTIONS(58),
  },
  [518] = {
    [sym_identifier] = ACTIONS(1351),
    [sym_comment] = ACTIONS(58),
  },
  [519] = {
    [sym__semicolon] = STATE(300),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(300),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(302),
    [sym_class_body_declaration] = STATE(303),
    [sym_constructor_declaration] = STATE(304),
    [sym_constructor_declarator] = STATE(305),
    [sym_class_member_declaration] = STATE(304),
    [sym_interface_declaration] = STATE(300),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(307),
    [sym_block] = STATE(304),
    [sym_method_declaration] = STATE(300),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(308),
    [aux_sym_class_body_repeat1] = STATE(672),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(1353),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(591),
    [sym_comment] = ACTIONS(58),
  },
  [520] = {
    [sym_superclass] = STATE(673),
    [sym_super_interfaces] = STATE(674),
    [sym_class_body] = STATE(675),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [521] = {
    [sym_super_interfaces] = STATE(674),
    [sym_class_body] = STATE(675),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [522] = {
    [sym_class_body] = STATE(675),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [sym_comment] = ACTIONS(58),
  },
  [523] = {
    [anon_sym_RBRACE] = ACTIONS(595),
    [anon_sym_default] = ACTIONS(595),
    [anon_sym_synchronized] = ACTIONS(595),
    [anon_sym_if] = ACTIONS(595),
    [anon_sym_AT] = ACTIONS(595),
    [anon_sym_static] = ACTIONS(595),
    [anon_sym_class] = ACTIONS(595),
    [anon_sym_public] = ACTIONS(595),
    [anon_sym_protected] = ACTIONS(595),
    [anon_sym_private] = ACTIONS(595),
    [anon_sym_abstract] = ACTIONS(595),
    [anon_sym_final] = ACTIONS(595),
    [anon_sym_strictfp] = ACTIONS(595),
    [anon_sym_native] = ACTIONS(595),
    [sym_comment] = ACTIONS(58),
  },
  [524] = {
    [anon_sym_SEMI] = ACTIONS(1355),
    [sym_comment] = ACTIONS(58),
  },
  [525] = {
    [anon_sym_RBRACE] = ACTIONS(1357),
    [anon_sym_default] = ACTIONS(1357),
    [anon_sym_synchronized] = ACTIONS(1357),
    [anon_sym_if] = ACTIONS(1357),
    [anon_sym_AT] = ACTIONS(1357),
    [anon_sym_static] = ACTIONS(1357),
    [anon_sym_class] = ACTIONS(1357),
    [anon_sym_public] = ACTIONS(1357),
    [anon_sym_protected] = ACTIONS(1357),
    [anon_sym_private] = ACTIONS(1357),
    [anon_sym_abstract] = ACTIONS(1357),
    [anon_sym_final] = ACTIONS(1357),
    [anon_sym_strictfp] = ACTIONS(1357),
    [anon_sym_native] = ACTIONS(1357),
    [sym_comment] = ACTIONS(58),
  },
  [526] = {
    [sym_type_parameters] = STATE(676),
    [sym_superclass] = STATE(673),
    [sym_super_interfaces] = STATE(674),
    [sym_class_body] = STATE(675),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [527] = {
    [ts_builtin_sym_end] = ACTIONS(1359),
    [sym_decimal_integer_literal] = ACTIONS(1361),
    [sym_hex_integer_literal] = ACTIONS(1361),
    [sym_octal_integer_literal] = ACTIONS(1361),
    [sym_binary_integer_literal] = ACTIONS(1361),
    [sym_decimal_floating_point_literal] = ACTIONS(1361),
    [sym_hex_floating_point_literal] = ACTIONS(1363),
    [anon_sym_true] = ACTIONS(1361),
    [anon_sym_false] = ACTIONS(1361),
    [anon_sym_SQUOTE] = ACTIONS(1359),
    [sym_string_literal] = ACTIONS(1359),
    [sym_null_literal] = ACTIONS(1361),
    [anon_sym_LT] = ACTIONS(1359),
    [anon_sym_LPAREN] = ACTIONS(1359),
    [anon_sym_BANG] = ACTIONS(1359),
    [anon_sym_TILDE] = ACTIONS(1359),
    [anon_sym_PLUS_PLUS] = ACTIONS(1359),
    [anon_sym_DASH_DASH] = ACTIONS(1359),
    [anon_sym_default] = ACTIONS(1361),
    [anon_sym_synchronized] = ACTIONS(1361),
    [anon_sym_boolean] = ACTIONS(1361),
    [anon_sym_byte] = ACTIONS(1361),
    [anon_sym_short] = ACTIONS(1361),
    [anon_sym_int] = ACTIONS(1361),
    [anon_sym_long] = ACTIONS(1361),
    [anon_sym_char] = ACTIONS(1361),
    [anon_sym_float] = ACTIONS(1361),
    [anon_sym_double] = ACTIONS(1361),
    [anon_sym_AT] = ACTIONS(1359),
    [anon_sym_open] = ACTIONS(1361),
    [anon_sym_module] = ACTIONS(1361),
    [anon_sym_static] = ACTIONS(1361),
    [anon_sym_package] = ACTIONS(1361),
    [anon_sym_import] = ACTIONS(1361),
    [anon_sym_class] = ACTIONS(1361),
    [anon_sym_public] = ACTIONS(1361),
    [anon_sym_protected] = ACTIONS(1361),
    [anon_sym_private] = ACTIONS(1361),
    [anon_sym_abstract] = ACTIONS(1361),
    [anon_sym_final] = ACTIONS(1361),
    [anon_sym_strictfp] = ACTIONS(1361),
    [anon_sym_native] = ACTIONS(1361),
    [anon_sym_interface] = ACTIONS(1361),
    [sym_identifier] = ACTIONS(1363),
    [sym_comment] = ACTIONS(58),
  },
  [528] = {
    [anon_sym_LT] = ACTIONS(807),
    [anon_sym_default] = ACTIONS(809),
    [anon_sym_synchronized] = ACTIONS(809),
    [anon_sym_boolean] = ACTIONS(809),
    [anon_sym_byte] = ACTIONS(809),
    [anon_sym_short] = ACTIONS(809),
    [anon_sym_int] = ACTIONS(809),
    [anon_sym_long] = ACTIONS(809),
    [anon_sym_char] = ACTIONS(809),
    [anon_sym_float] = ACTIONS(809),
    [anon_sym_double] = ACTIONS(809),
    [anon_sym_AT] = ACTIONS(807),
    [anon_sym_static] = ACTIONS(809),
    [anon_sym_class] = ACTIONS(809),
    [anon_sym_public] = ACTIONS(809),
    [anon_sym_protected] = ACTIONS(809),
    [anon_sym_private] = ACTIONS(809),
    [anon_sym_abstract] = ACTIONS(809),
    [anon_sym_final] = ACTIONS(809),
    [anon_sym_strictfp] = ACTIONS(809),
    [anon_sym_native] = ACTIONS(809),
    [anon_sym_interface] = ACTIONS(809),
    [sym_identifier] = ACTIONS(811),
    [sym_comment] = ACTIONS(58),
  },
  [529] = {
    [anon_sym_EQ] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(1365),
    [sym_comment] = ACTIONS(58),
  },
  [530] = {
    [anon_sym_RPAREN] = ACTIONS(1365),
    [sym_comment] = ACTIONS(58),
  },
  [531] = {
    [anon_sym_RPAREN] = ACTIONS(1367),
    [sym_comment] = ACTIONS(58),
  },
  [532] = {
    [anon_sym_LT] = ACTIONS(823),
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_synchronized] = ACTIONS(825),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_boolean] = ACTIONS(825),
    [anon_sym_byte] = ACTIONS(825),
    [anon_sym_short] = ACTIONS(825),
    [anon_sym_int] = ACTIONS(825),
    [anon_sym_long] = ACTIONS(825),
    [anon_sym_char] = ACTIONS(825),
    [anon_sym_float] = ACTIONS(825),
    [anon_sym_double] = ACTIONS(825),
    [anon_sym_AT] = ACTIONS(823),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(825),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_native] = ACTIONS(825),
    [anon_sym_interface] = ACTIONS(825),
    [sym_identifier] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [533] = {
    [sym_super_interfaces] = STATE(679),
    [sym_class_body] = STATE(634),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [534] = {
    [sym_interface_body] = STATE(680),
    [anon_sym_LBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(58),
  },
  [535] = {
    [sym_module_directive] = STATE(287),
    [aux_sym_module_declaration_repeat1] = STATE(681),
    [anon_sym_RBRACE] = ACTIONS(1143),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [536] = {
    [ts_builtin_sym_end] = ACTIONS(1369),
    [sym_decimal_integer_literal] = ACTIONS(1371),
    [sym_hex_integer_literal] = ACTIONS(1371),
    [sym_octal_integer_literal] = ACTIONS(1371),
    [sym_binary_integer_literal] = ACTIONS(1371),
    [sym_decimal_floating_point_literal] = ACTIONS(1371),
    [sym_hex_floating_point_literal] = ACTIONS(1373),
    [anon_sym_true] = ACTIONS(1371),
    [anon_sym_false] = ACTIONS(1371),
    [anon_sym_SQUOTE] = ACTIONS(1369),
    [sym_string_literal] = ACTIONS(1369),
    [sym_null_literal] = ACTIONS(1371),
    [anon_sym_LT] = ACTIONS(1369),
    [anon_sym_LPAREN] = ACTIONS(1369),
    [anon_sym_BANG] = ACTIONS(1369),
    [anon_sym_TILDE] = ACTIONS(1369),
    [anon_sym_PLUS_PLUS] = ACTIONS(1369),
    [anon_sym_DASH_DASH] = ACTIONS(1369),
    [anon_sym_default] = ACTIONS(1371),
    [anon_sym_synchronized] = ACTIONS(1371),
    [anon_sym_boolean] = ACTIONS(1371),
    [anon_sym_byte] = ACTIONS(1371),
    [anon_sym_short] = ACTIONS(1371),
    [anon_sym_int] = ACTIONS(1371),
    [anon_sym_long] = ACTIONS(1371),
    [anon_sym_char] = ACTIONS(1371),
    [anon_sym_float] = ACTIONS(1371),
    [anon_sym_double] = ACTIONS(1371),
    [anon_sym_AT] = ACTIONS(1369),
    [anon_sym_open] = ACTIONS(1371),
    [anon_sym_module] = ACTIONS(1371),
    [anon_sym_static] = ACTIONS(1371),
    [anon_sym_package] = ACTIONS(1371),
    [anon_sym_import] = ACTIONS(1371),
    [anon_sym_class] = ACTIONS(1371),
    [anon_sym_public] = ACTIONS(1371),
    [anon_sym_protected] = ACTIONS(1371),
    [anon_sym_private] = ACTIONS(1371),
    [anon_sym_abstract] = ACTIONS(1371),
    [anon_sym_final] = ACTIONS(1371),
    [anon_sym_strictfp] = ACTIONS(1371),
    [anon_sym_native] = ACTIONS(1371),
    [anon_sym_interface] = ACTIONS(1371),
    [sym_identifier] = ACTIONS(1373),
    [sym_comment] = ACTIONS(58),
  },
  [537] = {
    [anon_sym_AT] = ACTIONS(1119),
    [sym_identifier] = ACTIONS(1121),
    [sym_comment] = ACTIONS(58),
  },
  [538] = {
    [anon_sym_AT] = ACTIONS(1125),
    [sym_identifier] = ACTIONS(1127),
    [sym_comment] = ACTIONS(58),
  },
  [539] = {
    [anon_sym_GT] = ACTIONS(1375),
    [anon_sym_AMP] = ACTIONS(1375),
    [anon_sym_COMMA] = ACTIONS(1375),
    [sym_comment] = ACTIONS(58),
  },
  [540] = {
    [sym_class_or_interface_type] = STATE(682),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(244),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [541] = {
    [anon_sym_default] = ACTIONS(1121),
    [anon_sym_synchronized] = ACTIONS(1121),
    [anon_sym_boolean] = ACTIONS(1121),
    [anon_sym_byte] = ACTIONS(1121),
    [anon_sym_short] = ACTIONS(1121),
    [anon_sym_int] = ACTIONS(1121),
    [anon_sym_long] = ACTIONS(1121),
    [anon_sym_char] = ACTIONS(1121),
    [anon_sym_float] = ACTIONS(1121),
    [anon_sym_double] = ACTIONS(1121),
    [anon_sym_AT] = ACTIONS(1119),
    [anon_sym_static] = ACTIONS(1121),
    [anon_sym_public] = ACTIONS(1121),
    [anon_sym_protected] = ACTIONS(1121),
    [anon_sym_private] = ACTIONS(1121),
    [anon_sym_abstract] = ACTIONS(1121),
    [anon_sym_final] = ACTIONS(1121),
    [anon_sym_strictfp] = ACTIONS(1121),
    [anon_sym_native] = ACTIONS(1121),
    [sym_identifier] = ACTIONS(1123),
    [sym_comment] = ACTIONS(58),
  },
  [542] = {
    [anon_sym_default] = ACTIONS(1127),
    [anon_sym_synchronized] = ACTIONS(1127),
    [anon_sym_boolean] = ACTIONS(1127),
    [anon_sym_byte] = ACTIONS(1127),
    [anon_sym_short] = ACTIONS(1127),
    [anon_sym_int] = ACTIONS(1127),
    [anon_sym_long] = ACTIONS(1127),
    [anon_sym_char] = ACTIONS(1127),
    [anon_sym_float] = ACTIONS(1127),
    [anon_sym_double] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1125),
    [anon_sym_static] = ACTIONS(1127),
    [anon_sym_public] = ACTIONS(1127),
    [anon_sym_protected] = ACTIONS(1127),
    [anon_sym_private] = ACTIONS(1127),
    [anon_sym_abstract] = ACTIONS(1127),
    [anon_sym_final] = ACTIONS(1127),
    [anon_sym_strictfp] = ACTIONS(1127),
    [anon_sym_native] = ACTIONS(1127),
    [sym_identifier] = ACTIONS(1129),
    [sym_comment] = ACTIONS(58),
  },
  [543] = {
    [anon_sym_DOT] = ACTIONS(1279),
    [anon_sym_LBRACK] = ACTIONS(1277),
    [anon_sym_AT] = ACTIONS(1277),
    [anon_sym_this] = ACTIONS(1279),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1277),
    [sym_identifier] = ACTIONS(1377),
    [sym_comment] = ACTIONS(58),
  },
  [544] = {
    [anon_sym_LBRACK] = ACTIONS(1317),
    [anon_sym_AT] = ACTIONS(1317),
    [anon_sym_this] = ACTIONS(1319),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1317),
    [sym_identifier] = ACTIONS(1379),
    [sym_comment] = ACTIONS(58),
  },
  [545] = {
    [anon_sym_DOT] = ACTIONS(1321),
    [anon_sym_LBRACK] = ACTIONS(1323),
    [anon_sym_AT] = ACTIONS(1323),
    [anon_sym_this] = ACTIONS(1321),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1323),
    [sym_identifier] = ACTIONS(1381),
    [sym_comment] = ACTIONS(58),
  },
  [546] = {
    [anon_sym_RPAREN] = ACTIONS(1383),
    [anon_sym_COMMA] = ACTIONS(1383),
    [sym_comment] = ACTIONS(58),
  },
  [547] = {
    [sym_dims] = STATE(257),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(1385),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [548] = {
    [sym_variable_declarator_list] = STATE(638),
    [sym_variable_declarator] = STATE(468),
    [sym_variable_declarator_id] = STATE(255),
    [sym_identifier] = ACTIONS(1387),
    [sym_comment] = ACTIONS(58),
  },
  [549] = {
    [ts_builtin_sym_end] = ACTIONS(1389),
    [sym_decimal_integer_literal] = ACTIONS(1391),
    [sym_hex_integer_literal] = ACTIONS(1391),
    [sym_octal_integer_literal] = ACTIONS(1391),
    [sym_binary_integer_literal] = ACTIONS(1391),
    [sym_decimal_floating_point_literal] = ACTIONS(1391),
    [sym_hex_floating_point_literal] = ACTIONS(1393),
    [anon_sym_true] = ACTIONS(1391),
    [anon_sym_false] = ACTIONS(1391),
    [anon_sym_SQUOTE] = ACTIONS(1389),
    [sym_string_literal] = ACTIONS(1389),
    [sym_null_literal] = ACTIONS(1391),
    [anon_sym_LT] = ACTIONS(1389),
    [anon_sym_LPAREN] = ACTIONS(1389),
    [anon_sym_BANG] = ACTIONS(1389),
    [anon_sym_TILDE] = ACTIONS(1389),
    [anon_sym_PLUS_PLUS] = ACTIONS(1389),
    [anon_sym_DASH_DASH] = ACTIONS(1389),
    [anon_sym_default] = ACTIONS(1391),
    [anon_sym_synchronized] = ACTIONS(1391),
    [anon_sym_boolean] = ACTIONS(1391),
    [anon_sym_byte] = ACTIONS(1391),
    [anon_sym_short] = ACTIONS(1391),
    [anon_sym_int] = ACTIONS(1391),
    [anon_sym_long] = ACTIONS(1391),
    [anon_sym_char] = ACTIONS(1391),
    [anon_sym_float] = ACTIONS(1391),
    [anon_sym_double] = ACTIONS(1391),
    [anon_sym_AT] = ACTIONS(1389),
    [anon_sym_open] = ACTIONS(1391),
    [anon_sym_module] = ACTIONS(1391),
    [anon_sym_static] = ACTIONS(1391),
    [anon_sym_package] = ACTIONS(1391),
    [anon_sym_import] = ACTIONS(1391),
    [anon_sym_class] = ACTIONS(1391),
    [anon_sym_public] = ACTIONS(1391),
    [anon_sym_protected] = ACTIONS(1391),
    [anon_sym_private] = ACTIONS(1391),
    [anon_sym_abstract] = ACTIONS(1391),
    [anon_sym_final] = ACTIONS(1391),
    [anon_sym_strictfp] = ACTIONS(1391),
    [anon_sym_native] = ACTIONS(1391),
    [anon_sym_interface] = ACTIONS(1391),
    [sym_identifier] = ACTIONS(1393),
    [sym_comment] = ACTIONS(58),
  },
  [550] = {
    [anon_sym_RBRACE] = ACTIONS(1395),
    [anon_sym_default] = ACTIONS(1397),
    [anon_sym_synchronized] = ACTIONS(1397),
    [anon_sym_boolean] = ACTIONS(1397),
    [anon_sym_byte] = ACTIONS(1397),
    [anon_sym_short] = ACTIONS(1397),
    [anon_sym_int] = ACTIONS(1397),
    [anon_sym_long] = ACTIONS(1397),
    [anon_sym_char] = ACTIONS(1397),
    [anon_sym_float] = ACTIONS(1397),
    [anon_sym_double] = ACTIONS(1397),
    [anon_sym_AT] = ACTIONS(1395),
    [anon_sym_static] = ACTIONS(1397),
    [anon_sym_class] = ACTIONS(1397),
    [anon_sym_public] = ACTIONS(1397),
    [anon_sym_protected] = ACTIONS(1397),
    [anon_sym_private] = ACTIONS(1397),
    [anon_sym_abstract] = ACTIONS(1397),
    [anon_sym_final] = ACTIONS(1397),
    [anon_sym_strictfp] = ACTIONS(1397),
    [anon_sym_native] = ACTIONS(1397),
    [anon_sym_interface] = ACTIONS(1397),
    [sym_identifier] = ACTIONS(1399),
    [sym_comment] = ACTIONS(58),
  },
  [551] = {
    [sym__expression] = STATE(687),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [552] = {
    [sym__literal] = STATE(553),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(554),
    [sym__annotation] = STATE(553),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_element_value] = STATE(691),
    [sym_element_value_array_initializer] = STATE(553),
    [sym_conditional_expression] = STATE(553),
    [sym_conditional_or_expression] = STATE(692),
    [sym_conditional_and_expression] = STATE(693),
    [sym_inclusive_or_expression] = STATE(694),
    [sym_exclusive_or_expression] = STATE(695),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(696),
    [sym_equality_expression] = STATE(697),
    [sym_shift_expression] = STATE(698),
    [sym_additive_expression] = STATE(699),
    [sym_multiplicative_expression] = STATE(700),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1113),
    [anon_sym_false] = ACTIONS(1113),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_COMMA] = ACTIONS(1405),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [anon_sym_RBRACE] = ACTIONS(1409),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [553] = {
    [anon_sym_SEMI] = ACTIONS(1411),
    [anon_sym_RPAREN] = ACTIONS(1411),
    [anon_sym_COMMA] = ACTIONS(1411),
    [anon_sym_RBRACE] = ACTIONS(1411),
    [sym_comment] = ACTIONS(58),
  },
  [554] = {
    [anon_sym_SEMI] = ACTIONS(1413),
    [anon_sym_LT] = ACTIONS(1415),
    [anon_sym_EQ_EQ] = ACTIONS(1413),
    [anon_sym_BANG_EQ] = ACTIONS(1413),
    [anon_sym_AMP_AMP] = ACTIONS(1413),
    [anon_sym_PIPE_PIPE] = ACTIONS(1413),
    [anon_sym_PLUS] = ACTIONS(1413),
    [anon_sym_DASH] = ACTIONS(1413),
    [anon_sym_STAR] = ACTIONS(1413),
    [anon_sym_SLASH] = ACTIONS(1415),
    [anon_sym_PIPE] = ACTIONS(1415),
    [anon_sym_CARET] = ACTIONS(1413),
    [anon_sym_PERCENT] = ACTIONS(1413),
    [anon_sym_LT_LT] = ACTIONS(1413),
    [anon_sym_GT_GT] = ACTIONS(1415),
    [anon_sym_GT_GT_GT] = ACTIONS(1413),
    [anon_sym_RPAREN] = ACTIONS(1413),
    [anon_sym_COMMA] = ACTIONS(1413),
    [anon_sym_QMARK] = ACTIONS(1413),
    [anon_sym_RBRACE] = ACTIONS(1413),
    [sym_comment] = ACTIONS(58),
  },
  [555] = {
    [anon_sym_RPAREN] = ACTIONS(1417),
    [anon_sym_COMMA] = ACTIONS(1417),
    [sym_comment] = ACTIONS(58),
  },
  [556] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1419),
    [anon_sym_RPAREN] = ACTIONS(1421),
    [anon_sym_COMMA] = ACTIONS(1421),
    [anon_sym_QMARK] = ACTIONS(1423),
    [sym_comment] = ACTIONS(58),
  },
  [557] = {
    [anon_sym_AMP_AMP] = ACTIONS(1425),
    [anon_sym_PIPE_PIPE] = ACTIONS(1427),
    [anon_sym_RPAREN] = ACTIONS(1427),
    [anon_sym_COMMA] = ACTIONS(1427),
    [anon_sym_QMARK] = ACTIONS(1427),
    [sym_comment] = ACTIONS(58),
  },
  [558] = {
    [anon_sym_AMP_AMP] = ACTIONS(1429),
    [anon_sym_PIPE_PIPE] = ACTIONS(1429),
    [anon_sym_PIPE] = ACTIONS(1431),
    [anon_sym_RPAREN] = ACTIONS(1429),
    [anon_sym_COMMA] = ACTIONS(1429),
    [anon_sym_QMARK] = ACTIONS(1429),
    [sym_comment] = ACTIONS(58),
  },
  [559] = {
    [anon_sym_AMP_AMP] = ACTIONS(1433),
    [anon_sym_PIPE_PIPE] = ACTIONS(1433),
    [anon_sym_PIPE] = ACTIONS(1435),
    [anon_sym_CARET] = ACTIONS(1437),
    [anon_sym_RPAREN] = ACTIONS(1433),
    [anon_sym_COMMA] = ACTIONS(1433),
    [anon_sym_QMARK] = ACTIONS(1433),
    [sym_comment] = ACTIONS(58),
  },
  [560] = {
    [anon_sym_SEMI] = ACTIONS(1439),
    [anon_sym_AMP_AMP] = ACTIONS(1439),
    [anon_sym_PIPE_PIPE] = ACTIONS(1439),
    [anon_sym_PIPE] = ACTIONS(1441),
    [anon_sym_CARET] = ACTIONS(1439),
    [anon_sym_RPAREN] = ACTIONS(1439),
    [anon_sym_COMMA] = ACTIONS(1439),
    [anon_sym_QMARK] = ACTIONS(1439),
    [anon_sym_RBRACE] = ACTIONS(1439),
    [sym_comment] = ACTIONS(58),
  },
  [561] = {
    [anon_sym_LT] = ACTIONS(1443),
    [anon_sym_EQ_EQ] = ACTIONS(1445),
    [anon_sym_BANG_EQ] = ACTIONS(1445),
    [anon_sym_AMP_AMP] = ACTIONS(1447),
    [anon_sym_PIPE_PIPE] = ACTIONS(1447),
    [anon_sym_PIPE] = ACTIONS(1449),
    [anon_sym_CARET] = ACTIONS(1447),
    [anon_sym_RPAREN] = ACTIONS(1447),
    [anon_sym_COMMA] = ACTIONS(1447),
    [anon_sym_QMARK] = ACTIONS(1447),
    [sym_comment] = ACTIONS(58),
  },
  [562] = {
    [anon_sym_EQ_EQ] = ACTIONS(1451),
    [anon_sym_BANG_EQ] = ACTIONS(1451),
    [sym_comment] = ACTIONS(58),
  },
  [563] = {
    [anon_sym_LT] = ACTIONS(1453),
    [anon_sym_EQ_EQ] = ACTIONS(1455),
    [anon_sym_BANG_EQ] = ACTIONS(1455),
    [anon_sym_AMP_AMP] = ACTIONS(1455),
    [anon_sym_PIPE_PIPE] = ACTIONS(1455),
    [anon_sym_PIPE] = ACTIONS(1453),
    [anon_sym_CARET] = ACTIONS(1455),
    [anon_sym_LT_LT] = ACTIONS(1457),
    [anon_sym_GT_GT] = ACTIONS(1459),
    [anon_sym_GT_GT_GT] = ACTIONS(1457),
    [anon_sym_RPAREN] = ACTIONS(1455),
    [anon_sym_COMMA] = ACTIONS(1455),
    [anon_sym_QMARK] = ACTIONS(1455),
    [sym_comment] = ACTIONS(58),
  },
  [564] = {
    [anon_sym_LT] = ACTIONS(1461),
    [anon_sym_EQ_EQ] = ACTIONS(1463),
    [anon_sym_BANG_EQ] = ACTIONS(1463),
    [anon_sym_AMP_AMP] = ACTIONS(1463),
    [anon_sym_PIPE_PIPE] = ACTIONS(1463),
    [anon_sym_PLUS] = ACTIONS(1465),
    [anon_sym_DASH] = ACTIONS(1465),
    [anon_sym_PIPE] = ACTIONS(1461),
    [anon_sym_CARET] = ACTIONS(1463),
    [anon_sym_LT_LT] = ACTIONS(1463),
    [anon_sym_GT_GT] = ACTIONS(1461),
    [anon_sym_GT_GT_GT] = ACTIONS(1463),
    [anon_sym_RPAREN] = ACTIONS(1463),
    [anon_sym_COMMA] = ACTIONS(1463),
    [anon_sym_QMARK] = ACTIONS(1463),
    [sym_comment] = ACTIONS(58),
  },
  [565] = {
    [anon_sym_LT] = ACTIONS(1467),
    [anon_sym_EQ_EQ] = ACTIONS(1469),
    [anon_sym_BANG_EQ] = ACTIONS(1469),
    [anon_sym_AMP_AMP] = ACTIONS(1469),
    [anon_sym_PIPE_PIPE] = ACTIONS(1469),
    [anon_sym_PLUS] = ACTIONS(1469),
    [anon_sym_DASH] = ACTIONS(1469),
    [anon_sym_STAR] = ACTIONS(1471),
    [anon_sym_SLASH] = ACTIONS(1473),
    [anon_sym_PIPE] = ACTIONS(1467),
    [anon_sym_CARET] = ACTIONS(1469),
    [anon_sym_PERCENT] = ACTIONS(1471),
    [anon_sym_LT_LT] = ACTIONS(1469),
    [anon_sym_GT_GT] = ACTIONS(1467),
    [anon_sym_GT_GT_GT] = ACTIONS(1469),
    [anon_sym_RPAREN] = ACTIONS(1469),
    [anon_sym_COMMA] = ACTIONS(1469),
    [anon_sym_QMARK] = ACTIONS(1469),
    [sym_comment] = ACTIONS(58),
  },
  [566] = {
    [anon_sym_EQ] = ACTIONS(813),
    [sym_comment] = ACTIONS(58),
  },
  [567] = {
    [anon_sym_RPAREN] = ACTIONS(1475),
    [anon_sym_COMMA] = ACTIONS(1475),
    [sym_comment] = ACTIONS(58),
  },
  [568] = {
    [sym_element_value_pair] = STATE(711),
    [sym_identifier] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [569] = {
    [ts_builtin_sym_end] = ACTIONS(1477),
    [sym_decimal_integer_literal] = ACTIONS(1479),
    [sym_hex_integer_literal] = ACTIONS(1479),
    [sym_octal_integer_literal] = ACTIONS(1479),
    [sym_binary_integer_literal] = ACTIONS(1479),
    [sym_decimal_floating_point_literal] = ACTIONS(1479),
    [sym_hex_floating_point_literal] = ACTIONS(1481),
    [anon_sym_true] = ACTIONS(1479),
    [anon_sym_false] = ACTIONS(1479),
    [anon_sym_SQUOTE] = ACTIONS(1477),
    [sym_string_literal] = ACTIONS(1477),
    [sym_null_literal] = ACTIONS(1479),
    [anon_sym_LT] = ACTIONS(1477),
    [anon_sym_LPAREN] = ACTIONS(1477),
    [anon_sym_BANG] = ACTIONS(1477),
    [anon_sym_TILDE] = ACTIONS(1477),
    [anon_sym_PLUS_PLUS] = ACTIONS(1477),
    [anon_sym_DASH_DASH] = ACTIONS(1477),
    [anon_sym_default] = ACTIONS(1479),
    [anon_sym_synchronized] = ACTIONS(1479),
    [anon_sym_boolean] = ACTIONS(1479),
    [anon_sym_byte] = ACTIONS(1479),
    [anon_sym_short] = ACTIONS(1479),
    [anon_sym_int] = ACTIONS(1479),
    [anon_sym_long] = ACTIONS(1479),
    [anon_sym_char] = ACTIONS(1479),
    [anon_sym_float] = ACTIONS(1479),
    [anon_sym_double] = ACTIONS(1479),
    [anon_sym_AT] = ACTIONS(1477),
    [anon_sym_open] = ACTIONS(1479),
    [anon_sym_module] = ACTIONS(1479),
    [anon_sym_static] = ACTIONS(1479),
    [anon_sym_package] = ACTIONS(1479),
    [anon_sym_import] = ACTIONS(1479),
    [anon_sym_class] = ACTIONS(1479),
    [anon_sym_public] = ACTIONS(1479),
    [anon_sym_protected] = ACTIONS(1479),
    [anon_sym_private] = ACTIONS(1479),
    [anon_sym_abstract] = ACTIONS(1479),
    [anon_sym_final] = ACTIONS(1479),
    [anon_sym_strictfp] = ACTIONS(1479),
    [anon_sym_native] = ACTIONS(1479),
    [anon_sym_interface] = ACTIONS(1479),
    [sym_identifier] = ACTIONS(1481),
    [sym_comment] = ACTIONS(58),
  },
  [570] = {
    [sym_identifier] = ACTIONS(1483),
    [sym_comment] = ACTIONS(58),
  },
  [571] = {
    [anon_sym_RBRACE] = ACTIONS(1485),
    [anon_sym_requires] = ACTIONS(1485),
    [anon_sym_exports] = ACTIONS(1485),
    [anon_sym_opens] = ACTIONS(1485),
    [anon_sym_uses] = ACTIONS(1485),
    [anon_sym_provides] = ACTIONS(1485),
    [sym_comment] = ACTIONS(58),
  },
  [572] = {
    [anon_sym_transitive] = ACTIONS(1487),
    [anon_sym_static] = ACTIONS(1487),
    [sym_identifier] = ACTIONS(1489),
    [sym_comment] = ACTIONS(58),
  },
  [573] = {
    [sym__semicolon] = STATE(713),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_DOT] = ACTIONS(1157),
    [sym_comment] = ACTIONS(58),
  },
  [574] = {
    [sym_module_name] = STATE(714),
    [sym_identifier] = ACTIONS(1491),
    [sym_comment] = ACTIONS(58),
  },
  [575] = {
    [sym_identifier] = ACTIONS(1493),
    [sym_comment] = ACTIONS(58),
  },
  [576] = {
    [sym__semicolon] = STATE(713),
    [sym_module_name] = STATE(716),
    [aux_sym_module_directive_repeat2] = STATE(717),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(1159),
    [sym_identifier] = ACTIONS(1491),
    [sym_comment] = ACTIONS(58),
  },
  [577] = {
    [sym__semicolon] = STATE(713),
    [aux_sym_module_directive_repeat2] = STATE(717),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(1159),
    [anon_sym_DOT] = ACTIONS(1157),
    [sym_comment] = ACTIONS(58),
  },
  [578] = {
    [sym__semicolon] = STATE(713),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(1495),
    [sym_comment] = ACTIONS(58),
  },
  [579] = {
    [sym_identifier] = ACTIONS(1497),
    [sym_comment] = ACTIONS(58),
  },
  [580] = {
    [sym_package_or_type_name] = STATE(720),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(58),
  },
  [581] = {
    [ts_builtin_sym_end] = ACTIONS(1499),
    [sym_decimal_integer_literal] = ACTIONS(1501),
    [sym_hex_integer_literal] = ACTIONS(1501),
    [sym_octal_integer_literal] = ACTIONS(1501),
    [sym_binary_integer_literal] = ACTIONS(1501),
    [sym_decimal_floating_point_literal] = ACTIONS(1501),
    [sym_hex_floating_point_literal] = ACTIONS(1503),
    [anon_sym_true] = ACTIONS(1501),
    [anon_sym_false] = ACTIONS(1501),
    [anon_sym_SQUOTE] = ACTIONS(1499),
    [sym_string_literal] = ACTIONS(1499),
    [sym_null_literal] = ACTIONS(1501),
    [anon_sym_LT] = ACTIONS(1499),
    [anon_sym_LPAREN] = ACTIONS(1499),
    [anon_sym_BANG] = ACTIONS(1499),
    [anon_sym_TILDE] = ACTIONS(1499),
    [anon_sym_PLUS_PLUS] = ACTIONS(1499),
    [anon_sym_DASH_DASH] = ACTIONS(1499),
    [anon_sym_default] = ACTIONS(1501),
    [anon_sym_synchronized] = ACTIONS(1501),
    [anon_sym_boolean] = ACTIONS(1501),
    [anon_sym_byte] = ACTIONS(1501),
    [anon_sym_short] = ACTIONS(1501),
    [anon_sym_int] = ACTIONS(1501),
    [anon_sym_long] = ACTIONS(1501),
    [anon_sym_char] = ACTIONS(1501),
    [anon_sym_float] = ACTIONS(1501),
    [anon_sym_double] = ACTIONS(1501),
    [anon_sym_AT] = ACTIONS(1499),
    [anon_sym_open] = ACTIONS(1501),
    [anon_sym_module] = ACTIONS(1501),
    [anon_sym_static] = ACTIONS(1501),
    [anon_sym_package] = ACTIONS(1501),
    [anon_sym_import] = ACTIONS(1501),
    [anon_sym_class] = ACTIONS(1501),
    [anon_sym_public] = ACTIONS(1501),
    [anon_sym_protected] = ACTIONS(1501),
    [anon_sym_private] = ACTIONS(1501),
    [anon_sym_abstract] = ACTIONS(1501),
    [anon_sym_final] = ACTIONS(1501),
    [anon_sym_strictfp] = ACTIONS(1501),
    [anon_sym_native] = ACTIONS(1501),
    [anon_sym_interface] = ACTIONS(1501),
    [sym_identifier] = ACTIONS(1503),
    [sym_comment] = ACTIONS(58),
  },
  [582] = {
    [ts_builtin_sym_end] = ACTIONS(1505),
    [sym_decimal_integer_literal] = ACTIONS(1507),
    [sym_hex_integer_literal] = ACTIONS(1507),
    [sym_octal_integer_literal] = ACTIONS(1507),
    [sym_binary_integer_literal] = ACTIONS(1507),
    [sym_decimal_floating_point_literal] = ACTIONS(1507),
    [sym_hex_floating_point_literal] = ACTIONS(1509),
    [anon_sym_true] = ACTIONS(1507),
    [anon_sym_false] = ACTIONS(1507),
    [anon_sym_SQUOTE] = ACTIONS(1505),
    [sym_string_literal] = ACTIONS(1505),
    [sym_null_literal] = ACTIONS(1507),
    [anon_sym_LT] = ACTIONS(1505),
    [anon_sym_LPAREN] = ACTIONS(1505),
    [anon_sym_BANG] = ACTIONS(1505),
    [anon_sym_TILDE] = ACTIONS(1505),
    [anon_sym_PLUS_PLUS] = ACTIONS(1505),
    [anon_sym_DASH_DASH] = ACTIONS(1505),
    [anon_sym_default] = ACTIONS(1507),
    [anon_sym_synchronized] = ACTIONS(1507),
    [anon_sym_boolean] = ACTIONS(1507),
    [anon_sym_byte] = ACTIONS(1507),
    [anon_sym_short] = ACTIONS(1507),
    [anon_sym_int] = ACTIONS(1507),
    [anon_sym_long] = ACTIONS(1507),
    [anon_sym_char] = ACTIONS(1507),
    [anon_sym_float] = ACTIONS(1507),
    [anon_sym_double] = ACTIONS(1507),
    [anon_sym_AT] = ACTIONS(1505),
    [anon_sym_open] = ACTIONS(1507),
    [anon_sym_module] = ACTIONS(1507),
    [anon_sym_static] = ACTIONS(1507),
    [anon_sym_package] = ACTIONS(1507),
    [anon_sym_import] = ACTIONS(1507),
    [anon_sym_class] = ACTIONS(1507),
    [anon_sym_public] = ACTIONS(1507),
    [anon_sym_protected] = ACTIONS(1507),
    [anon_sym_private] = ACTIONS(1507),
    [anon_sym_abstract] = ACTIONS(1507),
    [anon_sym_final] = ACTIONS(1507),
    [anon_sym_strictfp] = ACTIONS(1507),
    [anon_sym_native] = ACTIONS(1507),
    [anon_sym_interface] = ACTIONS(1507),
    [sym_identifier] = ACTIONS(1509),
    [sym_comment] = ACTIONS(58),
  },
  [583] = {
    [anon_sym_SEMI] = ACTIONS(1029),
    [anon_sym_LT] = ACTIONS(1029),
    [anon_sym_LBRACE] = ACTIONS(1029),
    [anon_sym_RBRACE] = ACTIONS(1029),
    [anon_sym_default] = ACTIONS(1031),
    [anon_sym_synchronized] = ACTIONS(1031),
    [anon_sym_boolean] = ACTIONS(1031),
    [anon_sym_byte] = ACTIONS(1031),
    [anon_sym_short] = ACTIONS(1031),
    [anon_sym_int] = ACTIONS(1031),
    [anon_sym_long] = ACTIONS(1031),
    [anon_sym_char] = ACTIONS(1031),
    [anon_sym_float] = ACTIONS(1031),
    [anon_sym_double] = ACTIONS(1031),
    [anon_sym_AT] = ACTIONS(1029),
    [anon_sym_static] = ACTIONS(1031),
    [anon_sym_class] = ACTIONS(1031),
    [anon_sym_public] = ACTIONS(1031),
    [anon_sym_protected] = ACTIONS(1031),
    [anon_sym_private] = ACTIONS(1031),
    [anon_sym_abstract] = ACTIONS(1031),
    [anon_sym_final] = ACTIONS(1031),
    [anon_sym_strictfp] = ACTIONS(1031),
    [anon_sym_native] = ACTIONS(1031),
    [anon_sym_interface] = ACTIONS(1031),
    [sym_identifier] = ACTIONS(1033),
    [sym_comment] = ACTIONS(58),
  },
  [584] = {
    [sym_annotation_type_body] = STATE(722),
    [anon_sym_LBRACE] = ACTIONS(1511),
    [sym_comment] = ACTIONS(58),
  },
  [585] = {
    [sym__semicolon] = STATE(300),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(300),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(302),
    [sym_class_body_declaration] = STATE(303),
    [sym_constructor_declaration] = STATE(304),
    [sym_constructor_declarator] = STATE(305),
    [sym_class_member_declaration] = STATE(304),
    [sym_interface_declaration] = STATE(300),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(307),
    [sym_block] = STATE(304),
    [sym_method_declaration] = STATE(300),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(308),
    [aux_sym_class_body_repeat1] = STATE(724),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(1513),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(591),
    [sym_comment] = ACTIONS(58),
  },
  [586] = {
    [sym_superclass] = STATE(725),
    [sym_super_interfaces] = STATE(726),
    [sym_class_body] = STATE(727),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [587] = {
    [sym_super_interfaces] = STATE(726),
    [sym_class_body] = STATE(727),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [588] = {
    [sym_class_body] = STATE(727),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [sym_comment] = ACTIONS(58),
  },
  [589] = {
    [anon_sym_SEMI] = ACTIONS(595),
    [anon_sym_LT] = ACTIONS(595),
    [anon_sym_LBRACE] = ACTIONS(595),
    [anon_sym_RBRACE] = ACTIONS(595),
    [anon_sym_default] = ACTIONS(597),
    [anon_sym_synchronized] = ACTIONS(597),
    [anon_sym_boolean] = ACTIONS(597),
    [anon_sym_byte] = ACTIONS(597),
    [anon_sym_short] = ACTIONS(597),
    [anon_sym_int] = ACTIONS(597),
    [anon_sym_long] = ACTIONS(597),
    [anon_sym_char] = ACTIONS(597),
    [anon_sym_float] = ACTIONS(597),
    [anon_sym_double] = ACTIONS(597),
    [anon_sym_AT] = ACTIONS(595),
    [anon_sym_static] = ACTIONS(597),
    [anon_sym_class] = ACTIONS(597),
    [anon_sym_public] = ACTIONS(597),
    [anon_sym_protected] = ACTIONS(597),
    [anon_sym_private] = ACTIONS(597),
    [anon_sym_abstract] = ACTIONS(597),
    [anon_sym_final] = ACTIONS(597),
    [anon_sym_strictfp] = ACTIONS(597),
    [anon_sym_native] = ACTIONS(597),
    [anon_sym_interface] = ACTIONS(597),
    [sym_identifier] = ACTIONS(599),
    [sym_comment] = ACTIONS(58),
  },
  [590] = {
    [sym__semicolon] = STATE(319),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(319),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(319),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_interface_member_declaration] = STATE(320),
    [sym_constant_declaration] = STATE(319),
    [sym_unann_type] = STATE(321),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(307),
    [sym_method_declaration] = STATE(319),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(322),
    [aux_sym_interface_body_repeat1] = STATE(729),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1515),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [591] = {
    [sym_extends_interfaces] = STATE(730),
    [sym_interface_body] = STATE(731),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [anon_sym_extends] = ACTIONS(367),
    [sym_comment] = ACTIONS(58),
  },
  [592] = {
    [sym_interface_body] = STATE(731),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [sym_comment] = ACTIONS(58),
  },
  [593] = {
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_LBRACE] = ACTIONS(603),
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_default] = ACTIONS(605),
    [anon_sym_synchronized] = ACTIONS(605),
    [anon_sym_boolean] = ACTIONS(605),
    [anon_sym_byte] = ACTIONS(605),
    [anon_sym_short] = ACTIONS(605),
    [anon_sym_int] = ACTIONS(605),
    [anon_sym_long] = ACTIONS(605),
    [anon_sym_char] = ACTIONS(605),
    [anon_sym_float] = ACTIONS(605),
    [anon_sym_double] = ACTIONS(605),
    [anon_sym_AT] = ACTIONS(603),
    [anon_sym_static] = ACTIONS(605),
    [anon_sym_class] = ACTIONS(605),
    [anon_sym_public] = ACTIONS(605),
    [anon_sym_protected] = ACTIONS(605),
    [anon_sym_private] = ACTIONS(605),
    [anon_sym_abstract] = ACTIONS(605),
    [anon_sym_final] = ACTIONS(605),
    [anon_sym_strictfp] = ACTIONS(605),
    [anon_sym_native] = ACTIONS(605),
    [anon_sym_interface] = ACTIONS(605),
    [sym_identifier] = ACTIONS(607),
    [sym_comment] = ACTIONS(58),
  },
  [594] = {
    [anon_sym_RPAREN] = ACTIONS(1517),
    [sym_comment] = ACTIONS(58),
  },
  [595] = {
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
    [sym__formal_parameter_list] = STATE(733),
    [sym_formal_parameter] = STATE(72),
    [sym_receiver_parameter] = STATE(73),
    [sym_last_formal_parameter] = STATE(74),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(75),
    [aux_sym_class_or_interface_type_repeat1] = STATE(76),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
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
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [596] = {
    [sym__expression] = STATE(734),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [597] = {
    [anon_sym_SEMI] = ACTIONS(1519),
    [anon_sym_LT] = ACTIONS(1519),
    [anon_sym_LBRACE] = ACTIONS(1519),
    [anon_sym_RBRACE] = ACTIONS(1519),
    [anon_sym_default] = ACTIONS(1521),
    [anon_sym_synchronized] = ACTIONS(1521),
    [anon_sym_boolean] = ACTIONS(1521),
    [anon_sym_byte] = ACTIONS(1521),
    [anon_sym_short] = ACTIONS(1521),
    [anon_sym_int] = ACTIONS(1521),
    [anon_sym_long] = ACTIONS(1521),
    [anon_sym_char] = ACTIONS(1521),
    [anon_sym_float] = ACTIONS(1521),
    [anon_sym_double] = ACTIONS(1521),
    [anon_sym_AT] = ACTIONS(1519),
    [anon_sym_static] = ACTIONS(1521),
    [anon_sym_class] = ACTIONS(1521),
    [anon_sym_public] = ACTIONS(1521),
    [anon_sym_protected] = ACTIONS(1521),
    [anon_sym_private] = ACTIONS(1521),
    [anon_sym_abstract] = ACTIONS(1521),
    [anon_sym_final] = ACTIONS(1521),
    [anon_sym_strictfp] = ACTIONS(1521),
    [anon_sym_native] = ACTIONS(1521),
    [anon_sym_interface] = ACTIONS(1521),
    [sym_identifier] = ACTIONS(1523),
    [sym_comment] = ACTIONS(58),
  },
  [598] = {
    [aux_sym_class_literal_repeat1] = STATE(737),
    [anon_sym_DOT] = ACTIONS(1525),
    [anon_sym_LBRACK] = ACTIONS(1527),
    [anon_sym_AT] = ACTIONS(609),
    [sym_comment] = ACTIONS(58),
  },
  [599] = {
    [anon_sym_DOT] = ACTIONS(1525),
    [anon_sym_LBRACK] = ACTIONS(609),
    [anon_sym_AT] = ACTIONS(609),
    [sym_comment] = ACTIONS(58),
  },
  [600] = {
    [anon_sym_LPAREN] = ACTIONS(1530),
    [anon_sym_DOT] = ACTIONS(1532),
    [anon_sym_LBRACK] = ACTIONS(1532),
    [anon_sym_COLON_COLON] = ACTIONS(1532),
    [sym_comment] = ACTIONS(58),
  },
  [601] = {
    [anon_sym_LPAREN] = ACTIONS(1530),
    [anon_sym_DOT] = ACTIONS(1534),
    [anon_sym_COLON_COLON] = ACTIONS(1536),
    [sym_comment] = ACTIONS(58),
  },
  [602] = {
    [sym_type_arguments] = STATE(742),
    [sym_class_or_interface_type] = STATE(743),
    [sym_primitive_type] = STATE(744),
    [sym_integral_type] = STATE(188),
    [sym_floating_point_type] = STATE(188),
    [sym__annotation] = STATE(105),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [sym_class_or_interface_type_to_instantiate] = STATE(745),
    [aux_sym_class_or_interface_type_repeat1] = STATE(746),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_boolean] = ACTIONS(369),
    [anon_sym_void] = ACTIONS(369),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(1538),
    [sym_comment] = ACTIONS(58),
  },
  [603] = {
    [sym_type_arguments] = STATE(328),
    [aux_sym_class_or_interface_type_repeat2] = STATE(329),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(1540),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_COLON_COLON] = ACTIONS(611),
    [sym_comment] = ACTIONS(58),
  },
  [604] = {
    [anon_sym_DOT] = ACTIONS(1532),
    [anon_sym_LBRACK] = ACTIONS(1532),
    [anon_sym_COLON_COLON] = ACTIONS(1532),
    [sym_comment] = ACTIONS(58),
  },
  [605] = {
    [anon_sym_this] = ACTIONS(1542),
    [anon_sym_super] = ACTIONS(1542),
    [sym_comment] = ACTIONS(58),
  },
  [606] = {
    [sym_dims] = STATE(750),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_exprs] = STATE(751),
    [sym_dims_expr] = STATE(752),
    [aux_sym_class_or_interface_type_repeat1] = STATE(753),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(1544),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1546),
    [sym_comment] = ACTIONS(58),
  },
  [607] = {
    [sym_dims] = STATE(750),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [608] = {
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
    [anon_sym_boolean] = ACTIONS(297),
    [anon_sym_byte] = ACTIONS(297),
    [anon_sym_short] = ACTIONS(297),
    [anon_sym_int] = ACTIONS(297),
    [anon_sym_long] = ACTIONS(297),
    [anon_sym_char] = ACTIONS(297),
    [anon_sym_float] = ACTIONS(297),
    [anon_sym_double] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_static] = ACTIONS(96),
    [anon_sym_class] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_protected] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_abstract] = ACTIONS(96),
    [anon_sym_final] = ACTIONS(96),
    [anon_sym_strictfp] = ACTIONS(96),
    [anon_sym_native] = ACTIONS(96),
    [sym_identifier] = ACTIONS(300),
    [sym_comment] = ACTIONS(58),
  },
  [609] = {
    [aux_sym_class_literal_repeat1] = STATE(737),
    [anon_sym_DOT] = ACTIONS(1548),
    [anon_sym_LBRACK] = ACTIONS(1550),
    [sym_comment] = ACTIONS(58),
  },
  [610] = {
    [sym_statement] = STATE(224),
    [sym_if_then_statement] = STATE(225),
    [sym_if_then_else_statement] = STATE(225),
    [sym__annotation] = STATE(220),
    [sym_normal_annotation] = STATE(226),
    [sym_marker_annotation] = STATE(226),
    [sym_single_element_annotation] = STATE(226),
    [sym_class_declaration] = STATE(224),
    [sym_normal_class_declaration] = STATE(227),
    [sym_modifier] = STATE(228),
    [sym_block_statements] = STATE(756),
    [sym_block_statement] = STATE(230),
    [sym_local_variable_declaration_statement] = STATE(224),
    [sym_local_variable_declaration] = STATE(231),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(232),
    [anon_sym_RBRACE] = ACTIONS(1552),
    [anon_sym_default] = ACTIONS(423),
    [anon_sym_synchronized] = ACTIONS(423),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_static] = ACTIONS(423),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_public] = ACTIONS(423),
    [anon_sym_protected] = ACTIONS(423),
    [anon_sym_private] = ACTIONS(423),
    [anon_sym_abstract] = ACTIONS(423),
    [anon_sym_final] = ACTIONS(423),
    [anon_sym_strictfp] = ACTIONS(423),
    [anon_sym_native] = ACTIONS(423),
    [sym_comment] = ACTIONS(58),
  },
  [611] = {
    [anon_sym_DOT] = ACTIONS(1554),
    [anon_sym_LBRACK] = ACTIONS(1556),
    [anon_sym_COLON_COLON] = ACTIONS(1536),
    [sym_comment] = ACTIONS(58),
  },
  [612] = {
    [anon_sym_DOT] = ACTIONS(1558),
    [anon_sym_COLON_COLON] = ACTIONS(1536),
    [sym_comment] = ACTIONS(58),
  },
  [613] = {
    [anon_sym_DOT] = ACTIONS(1560),
    [anon_sym_COLON_COLON] = ACTIONS(1560),
    [sym_comment] = ACTIONS(58),
  },
  [614] = {
    [anon_sym_DOT] = ACTIONS(1560),
    [anon_sym_LBRACK] = ACTIONS(1556),
    [anon_sym_COLON_COLON] = ACTIONS(1560),
    [sym_comment] = ACTIONS(58),
  },
  [615] = {
    [anon_sym_DOT] = ACTIONS(1562),
    [anon_sym_LBRACK] = ACTIONS(1562),
    [anon_sym_COLON_COLON] = ACTIONS(1562),
    [sym_comment] = ACTIONS(58),
  },
  [616] = {
    [anon_sym_COLON_COLON] = ACTIONS(1564),
    [sym_comment] = ACTIONS(58),
  },
  [617] = {
    [anon_sym_RBRACE] = ACTIONS(1552),
    [sym_comment] = ACTIONS(58),
  },
  [618] = {
    [anon_sym_LPAREN] = ACTIONS(1566),
    [sym_comment] = ACTIONS(58),
  },
  [619] = {
    [sym_integral_type] = STATE(334),
    [sym_floating_point_type] = STATE(334),
    [sym__annotation] = STATE(161),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [anon_sym_boolean] = ACTIONS(623),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(625),
    [sym_comment] = ACTIONS(58),
  },
  [620] = {
    [anon_sym_SEMI] = ACTIONS(1568),
    [anon_sym_LT] = ACTIONS(1568),
    [anon_sym_LBRACE] = ACTIONS(1568),
    [anon_sym_RBRACE] = ACTIONS(1568),
    [anon_sym_default] = ACTIONS(1570),
    [anon_sym_synchronized] = ACTIONS(1570),
    [anon_sym_boolean] = ACTIONS(1570),
    [anon_sym_byte] = ACTIONS(1570),
    [anon_sym_short] = ACTIONS(1570),
    [anon_sym_int] = ACTIONS(1570),
    [anon_sym_long] = ACTIONS(1570),
    [anon_sym_char] = ACTIONS(1570),
    [anon_sym_float] = ACTIONS(1570),
    [anon_sym_double] = ACTIONS(1570),
    [anon_sym_AT] = ACTIONS(1568),
    [anon_sym_static] = ACTIONS(1570),
    [anon_sym_class] = ACTIONS(1570),
    [anon_sym_public] = ACTIONS(1570),
    [anon_sym_protected] = ACTIONS(1570),
    [anon_sym_private] = ACTIONS(1570),
    [anon_sym_abstract] = ACTIONS(1570),
    [anon_sym_final] = ACTIONS(1570),
    [anon_sym_strictfp] = ACTIONS(1570),
    [anon_sym_native] = ACTIONS(1570),
    [anon_sym_interface] = ACTIONS(1570),
    [sym_identifier] = ACTIONS(1572),
    [sym_comment] = ACTIONS(58),
  },
  [621] = {
    [sym_identifier] = ACTIONS(1574),
    [sym_comment] = ACTIONS(58),
  },
  [622] = {
    [sym_type_parameters] = STATE(763),
    [sym_superclass] = STATE(725),
    [sym_super_interfaces] = STATE(726),
    [sym_class_body] = STATE(727),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [623] = {
    [sym_type_parameters] = STATE(764),
    [sym_extends_interfaces] = STATE(730),
    [sym_interface_body] = STATE(731),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [anon_sym_extends] = ACTIONS(367),
    [sym_comment] = ACTIONS(58),
  },
  [624] = {
    [sym_constructor_body] = STATE(765),
    [anon_sym_LBRACE] = ACTIONS(899),
    [sym_comment] = ACTIONS(58),
  },
  [625] = {
    [anon_sym_SEMI] = ACTIONS(733),
    [anon_sym_LT] = ACTIONS(733),
    [anon_sym_LBRACE] = ACTIONS(733),
    [anon_sym_RBRACE] = ACTIONS(733),
    [anon_sym_default] = ACTIONS(735),
    [anon_sym_synchronized] = ACTIONS(735),
    [anon_sym_boolean] = ACTIONS(735),
    [anon_sym_byte] = ACTIONS(735),
    [anon_sym_short] = ACTIONS(735),
    [anon_sym_int] = ACTIONS(735),
    [anon_sym_long] = ACTIONS(735),
    [anon_sym_char] = ACTIONS(735),
    [anon_sym_float] = ACTIONS(735),
    [anon_sym_double] = ACTIONS(735),
    [anon_sym_AT] = ACTIONS(733),
    [anon_sym_static] = ACTIONS(735),
    [anon_sym_class] = ACTIONS(735),
    [anon_sym_public] = ACTIONS(735),
    [anon_sym_protected] = ACTIONS(735),
    [anon_sym_private] = ACTIONS(735),
    [anon_sym_abstract] = ACTIONS(735),
    [anon_sym_final] = ACTIONS(735),
    [anon_sym_strictfp] = ACTIONS(735),
    [anon_sym_native] = ACTIONS(735),
    [anon_sym_interface] = ACTIONS(735),
    [sym_identifier] = ACTIONS(737),
    [sym_comment] = ACTIONS(58),
  },
  [626] = {
    [aux_sym_type_arguments_repeat1] = STATE(767),
    [anon_sym_GT] = ACTIONS(1576),
    [anon_sym_COMMA] = ACTIONS(617),
    [sym_comment] = ACTIONS(58),
  },
  [627] = {
    [sym_type_arguments] = STATE(639),
    [anon_sym_LT] = ACTIONS(909),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_DOT] = ACTIONS(1269),
    [anon_sym_implements] = ACTIONS(1269),
    [sym_comment] = ACTIONS(58),
  },
  [628] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1578),
    [sym_comment] = ACTIONS(58),
  },
  [629] = {
    [anon_sym_LBRACE] = ACTIONS(1273),
    [anon_sym_DOT] = ACTIONS(1235),
    [anon_sym_implements] = ACTIONS(1273),
    [sym_comment] = ACTIONS(58),
  },
  [630] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(769),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1578),
    [sym_comment] = ACTIONS(58),
  },
  [631] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(770),
    [anon_sym_LBRACE] = ACTIONS(1273),
    [anon_sym_DOT] = ACTIONS(911),
    [anon_sym_implements] = ACTIONS(1273),
    [sym_comment] = ACTIONS(58),
  },
  [632] = {
    [anon_sym_COMMA] = ACTIONS(1580),
    [anon_sym_LBRACE] = ACTIONS(1580),
    [sym_comment] = ACTIONS(58),
  },
  [633] = {
    [sym_class_or_interface_type] = STATE(771),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(244),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [634] = {
    [ts_builtin_sym_end] = ACTIONS(1582),
    [sym_decimal_integer_literal] = ACTIONS(1584),
    [sym_hex_integer_literal] = ACTIONS(1584),
    [sym_octal_integer_literal] = ACTIONS(1584),
    [sym_binary_integer_literal] = ACTIONS(1584),
    [sym_decimal_floating_point_literal] = ACTIONS(1584),
    [sym_hex_floating_point_literal] = ACTIONS(1586),
    [anon_sym_true] = ACTIONS(1584),
    [anon_sym_false] = ACTIONS(1584),
    [anon_sym_SQUOTE] = ACTIONS(1582),
    [sym_string_literal] = ACTIONS(1582),
    [sym_null_literal] = ACTIONS(1584),
    [anon_sym_LT] = ACTIONS(1582),
    [anon_sym_LPAREN] = ACTIONS(1582),
    [anon_sym_BANG] = ACTIONS(1582),
    [anon_sym_TILDE] = ACTIONS(1582),
    [anon_sym_PLUS_PLUS] = ACTIONS(1582),
    [anon_sym_DASH_DASH] = ACTIONS(1582),
    [anon_sym_default] = ACTIONS(1584),
    [anon_sym_synchronized] = ACTIONS(1584),
    [anon_sym_boolean] = ACTIONS(1584),
    [anon_sym_byte] = ACTIONS(1584),
    [anon_sym_short] = ACTIONS(1584),
    [anon_sym_int] = ACTIONS(1584),
    [anon_sym_long] = ACTIONS(1584),
    [anon_sym_char] = ACTIONS(1584),
    [anon_sym_float] = ACTIONS(1584),
    [anon_sym_double] = ACTIONS(1584),
    [anon_sym_AT] = ACTIONS(1582),
    [anon_sym_open] = ACTIONS(1584),
    [anon_sym_module] = ACTIONS(1584),
    [anon_sym_static] = ACTIONS(1584),
    [anon_sym_package] = ACTIONS(1584),
    [anon_sym_import] = ACTIONS(1584),
    [anon_sym_class] = ACTIONS(1584),
    [anon_sym_public] = ACTIONS(1584),
    [anon_sym_protected] = ACTIONS(1584),
    [anon_sym_private] = ACTIONS(1584),
    [anon_sym_abstract] = ACTIONS(1584),
    [anon_sym_final] = ACTIONS(1584),
    [anon_sym_strictfp] = ACTIONS(1584),
    [anon_sym_native] = ACTIONS(1584),
    [anon_sym_interface] = ACTIONS(1584),
    [sym_identifier] = ACTIONS(1586),
    [sym_comment] = ACTIONS(58),
  },
  [635] = {
    [anon_sym_SEMI] = ACTIONS(1588),
    [anon_sym_LT] = ACTIONS(1588),
    [anon_sym_RBRACE] = ACTIONS(1588),
    [anon_sym_default] = ACTIONS(1590),
    [anon_sym_synchronized] = ACTIONS(1590),
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
    [anon_sym_native] = ACTIONS(1590),
    [anon_sym_interface] = ACTIONS(1590),
    [sym_identifier] = ACTIONS(1592),
    [sym_comment] = ACTIONS(58),
  },
  [636] = {
    [sym_variable_declarator] = STATE(772),
    [sym_variable_declarator_id] = STATE(255),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [637] = {
    [anon_sym_SEMI] = ACTIONS(1594),
    [anon_sym_COMMA] = ACTIONS(1596),
    [sym_comment] = ACTIONS(58),
  },
  [638] = {
    [sym__semicolon] = STATE(774),
    [anon_sym_SEMI] = ACTIONS(579),
    [sym_comment] = ACTIONS(58),
  },
  [639] = {
    [anon_sym_GT] = ACTIONS(1598),
    [anon_sym_AMP] = ACTIONS(1598),
    [anon_sym_COMMA] = ACTIONS(1598),
    [anon_sym_LBRACE] = ACTIONS(1598),
    [anon_sym_DOT] = ACTIONS(1598),
    [anon_sym_LBRACK] = ACTIONS(1598),
    [anon_sym_AT] = ACTIONS(1598),
    [anon_sym_implements] = ACTIONS(1598),
    [anon_sym_COLON_COLON] = ACTIONS(1598),
    [sym_comment] = ACTIONS(58),
  },
  [640] = {
    [sym_type_arguments] = STATE(775),
    [anon_sym_GT] = ACTIONS(1598),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(1598),
    [anon_sym_COMMA] = ACTIONS(1598),
    [anon_sym_LBRACE] = ACTIONS(1598),
    [anon_sym_DOT] = ACTIONS(1598),
    [anon_sym_LBRACK] = ACTIONS(1598),
    [anon_sym_AT] = ACTIONS(1598),
    [anon_sym_COLON_COLON] = ACTIONS(1598),
    [sym_comment] = ACTIONS(58),
  },
  [641] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1600),
    [sym_comment] = ACTIONS(58),
  },
  [642] = {
    [anon_sym_GT] = ACTIONS(1602),
    [anon_sym_COMMA] = ACTIONS(1602),
    [sym_comment] = ACTIONS(58),
  },
  [643] = {
    [anon_sym_GT] = ACTIONS(1604),
    [anon_sym_AMP] = ACTIONS(1604),
    [anon_sym_COMMA] = ACTIONS(1604),
    [anon_sym_LBRACE] = ACTIONS(1604),
    [anon_sym_DOT] = ACTIONS(963),
    [anon_sym_LBRACK] = ACTIONS(1604),
    [anon_sym_AT] = ACTIONS(1604),
    [anon_sym_COLON_COLON] = ACTIONS(1604),
    [sym_comment] = ACTIONS(58),
  },
  [644] = {
    [sym__expression] = STATE(777),
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
  [645] = {
    [sym__expression] = STATE(778),
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
  [646] = {
    [anon_sym_boolean] = ACTIONS(1121),
    [anon_sym_byte] = ACTIONS(1121),
    [anon_sym_short] = ACTIONS(1121),
    [anon_sym_int] = ACTIONS(1121),
    [anon_sym_long] = ACTIONS(1121),
    [anon_sym_char] = ACTIONS(1121),
    [anon_sym_float] = ACTIONS(1121),
    [anon_sym_double] = ACTIONS(1121),
    [anon_sym_AT] = ACTIONS(1119),
    [sym_identifier] = ACTIONS(1123),
    [sym_comment] = ACTIONS(58),
  },
  [647] = {
    [anon_sym_boolean] = ACTIONS(1127),
    [anon_sym_byte] = ACTIONS(1127),
    [anon_sym_short] = ACTIONS(1127),
    [anon_sym_int] = ACTIONS(1127),
    [anon_sym_long] = ACTIONS(1127),
    [anon_sym_char] = ACTIONS(1127),
    [anon_sym_float] = ACTIONS(1127),
    [anon_sym_double] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1125),
    [sym_identifier] = ACTIONS(1129),
    [sym_comment] = ACTIONS(58),
  },
  [648] = {
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LBRACE] = ACTIONS(687),
    [anon_sym_default] = ACTIONS(687),
    [anon_sym_LBRACK] = ACTIONS(687),
    [anon_sym_AT] = ACTIONS(687),
    [anon_sym_throws] = ACTIONS(687),
    [sym_comment] = ACTIONS(58),
  },
  [649] = {
    [anon_sym_RBRACK] = ACTIONS(1606),
    [sym_comment] = ACTIONS(58),
  },
  [650] = {
    [sym__annotation] = STATE(129),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(1608),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [651] = {
    [anon_sym_SEMI] = ACTIONS(1610),
    [anon_sym_LBRACE] = ACTIONS(1610),
    [anon_sym_throws] = ACTIONS(1610),
    [sym_comment] = ACTIONS(58),
  },
  [652] = {
    [sym_type_arguments] = STATE(781),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1269),
    [anon_sym_AT] = ACTIONS(1269),
    [sym_identifier] = ACTIONS(1612),
    [sym_comment] = ACTIONS(58),
  },
  [653] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1614),
    [sym_comment] = ACTIONS(58),
  },
  [654] = {
    [anon_sym_DOT] = ACTIONS(1303),
    [anon_sym_AT] = ACTIONS(1273),
    [sym_identifier] = ACTIONS(1616),
    [sym_comment] = ACTIONS(58),
  },
  [655] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(783),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1614),
    [sym_comment] = ACTIONS(58),
  },
  [656] = {
    [anon_sym_SEMI] = ACTIONS(1618),
    [anon_sym_COMMA] = ACTIONS(1618),
    [anon_sym_LBRACE] = ACTIONS(1618),
    [sym_comment] = ACTIONS(58),
  },
  [657] = {
    [anon_sym_SEMI] = ACTIONS(1620),
    [anon_sym_COMMA] = ACTIONS(1620),
    [anon_sym_LBRACE] = ACTIONS(1620),
    [sym_comment] = ACTIONS(58),
  },
  [658] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(784),
    [anon_sym_DOT] = ACTIONS(995),
    [anon_sym_AT] = ACTIONS(1273),
    [sym_identifier] = ACTIONS(1616),
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
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [660] = {
    [sym__expression] = STATE(786),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [661] = {
    [sym__expression] = STATE(787),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [662] = {
    [sym__expression] = STATE(788),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [663] = {
    [sym__expression] = STATE(199),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [664] = {
    [sym_statement] = STATE(790),
    [sym_statement_no_short_if] = STATE(791),
    [sym_if_then_statement] = STATE(225),
    [sym_if_then_else_statement] = STATE(225),
    [sym_if_then_else_statement_no_short_if] = STATE(792),
    [anon_sym_if] = ACTIONS(1622),
    [sym_comment] = ACTIONS(58),
  },
  [665] = {
    [sym__expression] = STATE(793),
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
  [666] = {
    [anon_sym_default] = ACTIONS(809),
    [anon_sym_synchronized] = ACTIONS(809),
    [anon_sym_boolean] = ACTIONS(809),
    [anon_sym_byte] = ACTIONS(809),
    [anon_sym_short] = ACTIONS(809),
    [anon_sym_int] = ACTIONS(809),
    [anon_sym_long] = ACTIONS(809),
    [anon_sym_char] = ACTIONS(809),
    [anon_sym_float] = ACTIONS(809),
    [anon_sym_double] = ACTIONS(809),
    [anon_sym_AT] = ACTIONS(807),
    [anon_sym_static] = ACTIONS(809),
    [anon_sym_class] = ACTIONS(809),
    [anon_sym_public] = ACTIONS(809),
    [anon_sym_protected] = ACTIONS(809),
    [anon_sym_private] = ACTIONS(809),
    [anon_sym_abstract] = ACTIONS(809),
    [anon_sym_final] = ACTIONS(809),
    [anon_sym_strictfp] = ACTIONS(809),
    [anon_sym_native] = ACTIONS(809),
    [sym_identifier] = ACTIONS(811),
    [sym_comment] = ACTIONS(58),
  },
  [667] = {
    [anon_sym_EQ] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(1624),
    [sym_comment] = ACTIONS(58),
  },
  [668] = {
    [anon_sym_RPAREN] = ACTIONS(1624),
    [sym_comment] = ACTIONS(58),
  },
  [669] = {
    [anon_sym_RPAREN] = ACTIONS(1626),
    [sym_comment] = ACTIONS(58),
  },
  [670] = {
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_synchronized] = ACTIONS(825),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_boolean] = ACTIONS(825),
    [anon_sym_byte] = ACTIONS(825),
    [anon_sym_short] = ACTIONS(825),
    [anon_sym_int] = ACTIONS(825),
    [anon_sym_long] = ACTIONS(825),
    [anon_sym_char] = ACTIONS(825),
    [anon_sym_float] = ACTIONS(825),
    [anon_sym_double] = ACTIONS(825),
    [anon_sym_AT] = ACTIONS(823),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(825),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_native] = ACTIONS(825),
    [sym_identifier] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [671] = {
    [anon_sym_RBRACE] = ACTIONS(865),
    [anon_sym_default] = ACTIONS(865),
    [anon_sym_synchronized] = ACTIONS(865),
    [anon_sym_if] = ACTIONS(865),
    [anon_sym_DOT] = ACTIONS(865),
    [anon_sym_LBRACK] = ACTIONS(865),
    [anon_sym_AT] = ACTIONS(865),
    [anon_sym_static] = ACTIONS(865),
    [anon_sym_class] = ACTIONS(865),
    [anon_sym_public] = ACTIONS(865),
    [anon_sym_protected] = ACTIONS(865),
    [anon_sym_private] = ACTIONS(865),
    [anon_sym_abstract] = ACTIONS(865),
    [anon_sym_final] = ACTIONS(865),
    [anon_sym_strictfp] = ACTIONS(865),
    [anon_sym_native] = ACTIONS(865),
    [anon_sym_COLON_COLON] = ACTIONS(865),
    [sym_comment] = ACTIONS(58),
  },
  [672] = {
    [sym__semicolon] = STATE(300),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(300),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(302),
    [sym_class_body_declaration] = STATE(456),
    [sym_constructor_declaration] = STATE(304),
    [sym_constructor_declarator] = STATE(305),
    [sym_class_member_declaration] = STATE(304),
    [sym_interface_declaration] = STATE(300),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(307),
    [sym_block] = STATE(304),
    [sym_method_declaration] = STATE(300),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(308),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(1628),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(591),
    [sym_comment] = ACTIONS(58),
  },
  [673] = {
    [sym_super_interfaces] = STATE(797),
    [sym_class_body] = STATE(798),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [674] = {
    [sym_class_body] = STATE(798),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [sym_comment] = ACTIONS(58),
  },
  [675] = {
    [anon_sym_RBRACE] = ACTIONS(923),
    [anon_sym_default] = ACTIONS(923),
    [anon_sym_synchronized] = ACTIONS(923),
    [anon_sym_if] = ACTIONS(923),
    [anon_sym_AT] = ACTIONS(923),
    [anon_sym_static] = ACTIONS(923),
    [anon_sym_class] = ACTIONS(923),
    [anon_sym_public] = ACTIONS(923),
    [anon_sym_protected] = ACTIONS(923),
    [anon_sym_private] = ACTIONS(923),
    [anon_sym_abstract] = ACTIONS(923),
    [anon_sym_final] = ACTIONS(923),
    [anon_sym_strictfp] = ACTIONS(923),
    [anon_sym_native] = ACTIONS(923),
    [sym_comment] = ACTIONS(58),
  },
  [676] = {
    [sym_superclass] = STATE(799),
    [sym_super_interfaces] = STATE(797),
    [sym_class_body] = STATE(798),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [677] = {
    [anon_sym_LT] = ACTIONS(1119),
    [anon_sym_default] = ACTIONS(1121),
    [anon_sym_synchronized] = ACTIONS(1121),
    [anon_sym_boolean] = ACTIONS(1121),
    [anon_sym_byte] = ACTIONS(1121),
    [anon_sym_short] = ACTIONS(1121),
    [anon_sym_int] = ACTIONS(1121),
    [anon_sym_long] = ACTIONS(1121),
    [anon_sym_char] = ACTIONS(1121),
    [anon_sym_float] = ACTIONS(1121),
    [anon_sym_double] = ACTIONS(1121),
    [anon_sym_AT] = ACTIONS(1119),
    [anon_sym_static] = ACTIONS(1121),
    [anon_sym_class] = ACTIONS(1121),
    [anon_sym_public] = ACTIONS(1121),
    [anon_sym_protected] = ACTIONS(1121),
    [anon_sym_private] = ACTIONS(1121),
    [anon_sym_abstract] = ACTIONS(1121),
    [anon_sym_final] = ACTIONS(1121),
    [anon_sym_strictfp] = ACTIONS(1121),
    [anon_sym_native] = ACTIONS(1121),
    [anon_sym_interface] = ACTIONS(1121),
    [sym_identifier] = ACTIONS(1123),
    [sym_comment] = ACTIONS(58),
  },
  [678] = {
    [anon_sym_LT] = ACTIONS(1125),
    [anon_sym_default] = ACTIONS(1127),
    [anon_sym_synchronized] = ACTIONS(1127),
    [anon_sym_boolean] = ACTIONS(1127),
    [anon_sym_byte] = ACTIONS(1127),
    [anon_sym_short] = ACTIONS(1127),
    [anon_sym_int] = ACTIONS(1127),
    [anon_sym_long] = ACTIONS(1127),
    [anon_sym_char] = ACTIONS(1127),
    [anon_sym_float] = ACTIONS(1127),
    [anon_sym_double] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1125),
    [anon_sym_static] = ACTIONS(1127),
    [anon_sym_class] = ACTIONS(1127),
    [anon_sym_public] = ACTIONS(1127),
    [anon_sym_protected] = ACTIONS(1127),
    [anon_sym_private] = ACTIONS(1127),
    [anon_sym_abstract] = ACTIONS(1127),
    [anon_sym_final] = ACTIONS(1127),
    [anon_sym_strictfp] = ACTIONS(1127),
    [anon_sym_native] = ACTIONS(1127),
    [anon_sym_interface] = ACTIONS(1127),
    [sym_identifier] = ACTIONS(1129),
    [sym_comment] = ACTIONS(58),
  },
  [679] = {
    [sym_class_body] = STATE(800),
    [anon_sym_LBRACE] = ACTIONS(359),
    [sym_comment] = ACTIONS(58),
  },
  [680] = {
    [ts_builtin_sym_end] = ACTIONS(1630),
    [sym_decimal_integer_literal] = ACTIONS(1632),
    [sym_hex_integer_literal] = ACTIONS(1632),
    [sym_octal_integer_literal] = ACTIONS(1632),
    [sym_binary_integer_literal] = ACTIONS(1632),
    [sym_decimal_floating_point_literal] = ACTIONS(1632),
    [sym_hex_floating_point_literal] = ACTIONS(1634),
    [anon_sym_true] = ACTIONS(1632),
    [anon_sym_false] = ACTIONS(1632),
    [anon_sym_SQUOTE] = ACTIONS(1630),
    [sym_string_literal] = ACTIONS(1630),
    [sym_null_literal] = ACTIONS(1632),
    [anon_sym_LT] = ACTIONS(1630),
    [anon_sym_LPAREN] = ACTIONS(1630),
    [anon_sym_BANG] = ACTIONS(1630),
    [anon_sym_TILDE] = ACTIONS(1630),
    [anon_sym_PLUS_PLUS] = ACTIONS(1630),
    [anon_sym_DASH_DASH] = ACTIONS(1630),
    [anon_sym_default] = ACTIONS(1632),
    [anon_sym_synchronized] = ACTIONS(1632),
    [anon_sym_boolean] = ACTIONS(1632),
    [anon_sym_byte] = ACTIONS(1632),
    [anon_sym_short] = ACTIONS(1632),
    [anon_sym_int] = ACTIONS(1632),
    [anon_sym_long] = ACTIONS(1632),
    [anon_sym_char] = ACTIONS(1632),
    [anon_sym_float] = ACTIONS(1632),
    [anon_sym_double] = ACTIONS(1632),
    [anon_sym_AT] = ACTIONS(1630),
    [anon_sym_open] = ACTIONS(1632),
    [anon_sym_module] = ACTIONS(1632),
    [anon_sym_static] = ACTIONS(1632),
    [anon_sym_package] = ACTIONS(1632),
    [anon_sym_import] = ACTIONS(1632),
    [anon_sym_class] = ACTIONS(1632),
    [anon_sym_public] = ACTIONS(1632),
    [anon_sym_protected] = ACTIONS(1632),
    [anon_sym_private] = ACTIONS(1632),
    [anon_sym_abstract] = ACTIONS(1632),
    [anon_sym_final] = ACTIONS(1632),
    [anon_sym_strictfp] = ACTIONS(1632),
    [anon_sym_native] = ACTIONS(1632),
    [anon_sym_interface] = ACTIONS(1632),
    [sym_identifier] = ACTIONS(1634),
    [sym_comment] = ACTIONS(58),
  },
  [681] = {
    [sym_module_directive] = STATE(433),
    [anon_sym_RBRACE] = ACTIONS(1636),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [682] = {
    [anon_sym_GT] = ACTIONS(1638),
    [anon_sym_AMP] = ACTIONS(1638),
    [anon_sym_COMMA] = ACTIONS(1638),
    [sym_comment] = ACTIONS(58),
  },
  [683] = {
    [anon_sym_RPAREN] = ACTIONS(1640),
    [sym_comment] = ACTIONS(58),
  },
  [684] = {
    [sym_dims] = STATE(257),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(1642),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [685] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [686] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [687] = {
    [anon_sym_GT] = ACTIONS(1644),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(1646),
    [anon_sym_LT_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_AMP] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_GT_GT_GT] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [688] = {
    [anon_sym_RBRACE] = ACTIONS(1650),
    [sym_comment] = ACTIONS(58),
  },
  [689] = {
    [sym__expression] = STATE(813),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [690] = {
    [anon_sym_SEMI] = ACTIONS(1656),
    [anon_sym_RPAREN] = ACTIONS(1656),
    [anon_sym_COMMA] = ACTIONS(1656),
    [anon_sym_RBRACE] = ACTIONS(1656),
    [sym_comment] = ACTIONS(58),
  },
  [691] = {
    [aux_sym_element_value_array_initializer_repeat1] = STATE(815),
    [anon_sym_COMMA] = ACTIONS(1658),
    [anon_sym_RBRACE] = ACTIONS(1650),
    [sym_comment] = ACTIONS(58),
  },
  [692] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1660),
    [anon_sym_COMMA] = ACTIONS(1421),
    [anon_sym_QMARK] = ACTIONS(1662),
    [anon_sym_RBRACE] = ACTIONS(1421),
    [sym_comment] = ACTIONS(58),
  },
  [693] = {
    [anon_sym_AMP_AMP] = ACTIONS(1664),
    [anon_sym_PIPE_PIPE] = ACTIONS(1427),
    [anon_sym_COMMA] = ACTIONS(1427),
    [anon_sym_QMARK] = ACTIONS(1427),
    [anon_sym_RBRACE] = ACTIONS(1427),
    [sym_comment] = ACTIONS(58),
  },
  [694] = {
    [anon_sym_AMP_AMP] = ACTIONS(1429),
    [anon_sym_PIPE_PIPE] = ACTIONS(1429),
    [anon_sym_PIPE] = ACTIONS(1666),
    [anon_sym_COMMA] = ACTIONS(1429),
    [anon_sym_QMARK] = ACTIONS(1429),
    [anon_sym_RBRACE] = ACTIONS(1429),
    [sym_comment] = ACTIONS(58),
  },
  [695] = {
    [anon_sym_AMP_AMP] = ACTIONS(1433),
    [anon_sym_PIPE_PIPE] = ACTIONS(1433),
    [anon_sym_PIPE] = ACTIONS(1435),
    [anon_sym_CARET] = ACTIONS(1668),
    [anon_sym_COMMA] = ACTIONS(1433),
    [anon_sym_QMARK] = ACTIONS(1433),
    [anon_sym_RBRACE] = ACTIONS(1433),
    [sym_comment] = ACTIONS(58),
  },
  [696] = {
    [anon_sym_LT] = ACTIONS(1670),
    [anon_sym_EQ_EQ] = ACTIONS(1445),
    [anon_sym_BANG_EQ] = ACTIONS(1445),
    [anon_sym_AMP_AMP] = ACTIONS(1447),
    [anon_sym_PIPE_PIPE] = ACTIONS(1447),
    [anon_sym_PIPE] = ACTIONS(1449),
    [anon_sym_CARET] = ACTIONS(1447),
    [anon_sym_COMMA] = ACTIONS(1447),
    [anon_sym_QMARK] = ACTIONS(1447),
    [anon_sym_RBRACE] = ACTIONS(1447),
    [sym_comment] = ACTIONS(58),
  },
  [697] = {
    [anon_sym_EQ_EQ] = ACTIONS(1672),
    [anon_sym_BANG_EQ] = ACTIONS(1672),
    [sym_comment] = ACTIONS(58),
  },
  [698] = {
    [anon_sym_LT] = ACTIONS(1453),
    [anon_sym_EQ_EQ] = ACTIONS(1455),
    [anon_sym_BANG_EQ] = ACTIONS(1455),
    [anon_sym_AMP_AMP] = ACTIONS(1455),
    [anon_sym_PIPE_PIPE] = ACTIONS(1455),
    [anon_sym_PIPE] = ACTIONS(1453),
    [anon_sym_CARET] = ACTIONS(1455),
    [anon_sym_LT_LT] = ACTIONS(1674),
    [anon_sym_GT_GT] = ACTIONS(1676),
    [anon_sym_GT_GT_GT] = ACTIONS(1674),
    [anon_sym_COMMA] = ACTIONS(1455),
    [anon_sym_QMARK] = ACTIONS(1455),
    [anon_sym_RBRACE] = ACTIONS(1455),
    [sym_comment] = ACTIONS(58),
  },
  [699] = {
    [anon_sym_LT] = ACTIONS(1461),
    [anon_sym_EQ_EQ] = ACTIONS(1463),
    [anon_sym_BANG_EQ] = ACTIONS(1463),
    [anon_sym_AMP_AMP] = ACTIONS(1463),
    [anon_sym_PIPE_PIPE] = ACTIONS(1463),
    [anon_sym_PLUS] = ACTIONS(1678),
    [anon_sym_DASH] = ACTIONS(1678),
    [anon_sym_PIPE] = ACTIONS(1461),
    [anon_sym_CARET] = ACTIONS(1463),
    [anon_sym_LT_LT] = ACTIONS(1463),
    [anon_sym_GT_GT] = ACTIONS(1461),
    [anon_sym_GT_GT_GT] = ACTIONS(1463),
    [anon_sym_COMMA] = ACTIONS(1463),
    [anon_sym_QMARK] = ACTIONS(1463),
    [anon_sym_RBRACE] = ACTIONS(1463),
    [sym_comment] = ACTIONS(58),
  },
  [700] = {
    [anon_sym_LT] = ACTIONS(1467),
    [anon_sym_EQ_EQ] = ACTIONS(1469),
    [anon_sym_BANG_EQ] = ACTIONS(1469),
    [anon_sym_AMP_AMP] = ACTIONS(1469),
    [anon_sym_PIPE_PIPE] = ACTIONS(1469),
    [anon_sym_PLUS] = ACTIONS(1469),
    [anon_sym_DASH] = ACTIONS(1469),
    [anon_sym_STAR] = ACTIONS(1680),
    [anon_sym_SLASH] = ACTIONS(1682),
    [anon_sym_PIPE] = ACTIONS(1467),
    [anon_sym_CARET] = ACTIONS(1469),
    [anon_sym_PERCENT] = ACTIONS(1680),
    [anon_sym_LT_LT] = ACTIONS(1469),
    [anon_sym_GT_GT] = ACTIONS(1467),
    [anon_sym_GT_GT_GT] = ACTIONS(1469),
    [anon_sym_COMMA] = ACTIONS(1469),
    [anon_sym_QMARK] = ACTIONS(1469),
    [anon_sym_RBRACE] = ACTIONS(1469),
    [sym_comment] = ACTIONS(58),
  },
  [701] = {
    [sym_unary_expression] = STATE(554),
    [sym_conditional_and_expression] = STATE(826),
    [sym_inclusive_or_expression] = STATE(558),
    [sym_exclusive_or_expression] = STATE(559),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(561),
    [sym_equality_expression] = STATE(562),
    [sym_shift_expression] = STATE(563),
    [sym_additive_expression] = STATE(564),
    [sym_multiplicative_expression] = STATE(565),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [sym_comment] = ACTIONS(58),
  },
  [702] = {
    [sym__expression] = STATE(827),
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
  [703] = {
    [sym_unary_expression] = STATE(554),
    [sym_inclusive_or_expression] = STATE(828),
    [sym_exclusive_or_expression] = STATE(559),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(561),
    [sym_equality_expression] = STATE(562),
    [sym_shift_expression] = STATE(563),
    [sym_additive_expression] = STATE(564),
    [sym_multiplicative_expression] = STATE(565),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [sym_comment] = ACTIONS(58),
  },
  [704] = {
    [sym_unary_expression] = STATE(554),
    [sym_exclusive_or_expression] = STATE(829),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(561),
    [sym_equality_expression] = STATE(562),
    [sym_shift_expression] = STATE(563),
    [sym_additive_expression] = STATE(564),
    [sym_multiplicative_expression] = STATE(565),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [sym_comment] = ACTIONS(58),
  },
  [705] = {
    [sym_unary_expression] = STATE(554),
    [sym_and_expression] = STATE(830),
    [sym_relational_expression] = STATE(561),
    [sym_equality_expression] = STATE(562),
    [sym_shift_expression] = STATE(563),
    [sym_additive_expression] = STATE(564),
    [sym_multiplicative_expression] = STATE(565),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [sym_comment] = ACTIONS(58),
  },
  [706] = {
    [sym_unary_expression] = STATE(554),
    [sym_shift_expression] = STATE(831),
    [sym_additive_expression] = STATE(564),
    [sym_multiplicative_expression] = STATE(565),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [sym_comment] = ACTIONS(58),
  },
  [707] = {
    [sym_unary_expression] = STATE(554),
    [sym_relational_expression] = STATE(832),
    [sym_shift_expression] = STATE(563),
    [sym_additive_expression] = STATE(564),
    [sym_multiplicative_expression] = STATE(565),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [sym_comment] = ACTIONS(58),
  },
  [708] = {
    [sym_unary_expression] = STATE(554),
    [sym_additive_expression] = STATE(833),
    [sym_multiplicative_expression] = STATE(565),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [sym_comment] = ACTIONS(58),
  },
  [709] = {
    [sym_unary_expression] = STATE(554),
    [sym_multiplicative_expression] = STATE(834),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [sym_comment] = ACTIONS(58),
  },
  [710] = {
    [sym_unary_expression] = STATE(835),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [sym_comment] = ACTIONS(58),
  },
  [711] = {
    [anon_sym_RPAREN] = ACTIONS(1684),
    [anon_sym_COMMA] = ACTIONS(1684),
    [sym_comment] = ACTIONS(58),
  },
  [712] = {
    [anon_sym_SEMI] = ACTIONS(1686),
    [anon_sym_COMMA] = ACTIONS(1686),
    [anon_sym_DOT] = ACTIONS(1686),
    [sym_comment] = ACTIONS(58),
  },
  [713] = {
    [anon_sym_RBRACE] = ACTIONS(1688),
    [anon_sym_requires] = ACTIONS(1688),
    [anon_sym_exports] = ACTIONS(1688),
    [anon_sym_opens] = ACTIONS(1688),
    [anon_sym_uses] = ACTIONS(1688),
    [anon_sym_provides] = ACTIONS(1688),
    [sym_comment] = ACTIONS(58),
  },
  [714] = {
    [anon_sym_SEMI] = ACTIONS(1690),
    [anon_sym_COMMA] = ACTIONS(1690),
    [anon_sym_DOT] = ACTIONS(1157),
    [sym_comment] = ACTIONS(58),
  },
  [715] = {
    [anon_sym_SEMI] = ACTIONS(823),
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_to] = ACTIONS(825),
    [sym_identifier] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [716] = {
    [sym__semicolon] = STATE(836),
    [aux_sym_module_directive_repeat2] = STATE(837),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(1159),
    [anon_sym_DOT] = ACTIONS(1157),
    [sym_comment] = ACTIONS(58),
  },
  [717] = {
    [sym__semicolon] = STATE(836),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(1495),
    [sym_comment] = ACTIONS(58),
  },
  [718] = {
    [sym_module_name] = STATE(838),
    [sym_identifier] = ACTIONS(1491),
    [sym_comment] = ACTIONS(58),
  },
  [719] = {
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_with] = ACTIONS(823),
    [sym_comment] = ACTIONS(58),
  },
  [720] = {
    [sym__semicolon] = STATE(836),
    [aux_sym_module_directive_repeat3] = STATE(840),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(1692),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_comment] = ACTIONS(58),
  },
  [721] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(410),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_interface_declaration] = STATE(410),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_annotation_type_member_declaration] = STATE(411),
    [sym_annotation_type_element_declaration] = STATE(410),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_constant_declaration] = STATE(410),
    [sym_unann_type] = STATE(412),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(413),
    [aux_sym_annotation_type_body_repeat1] = STATE(842),
    [anon_sym_RBRACE] = ACTIONS(1694),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [722] = {
    [anon_sym_SEMI] = ACTIONS(801),
    [anon_sym_LT] = ACTIONS(801),
    [anon_sym_LBRACE] = ACTIONS(801),
    [anon_sym_RBRACE] = ACTIONS(801),
    [anon_sym_default] = ACTIONS(803),
    [anon_sym_synchronized] = ACTIONS(803),
    [anon_sym_boolean] = ACTIONS(803),
    [anon_sym_byte] = ACTIONS(803),
    [anon_sym_short] = ACTIONS(803),
    [anon_sym_int] = ACTIONS(803),
    [anon_sym_long] = ACTIONS(803),
    [anon_sym_char] = ACTIONS(803),
    [anon_sym_float] = ACTIONS(803),
    [anon_sym_double] = ACTIONS(803),
    [anon_sym_AT] = ACTIONS(801),
    [anon_sym_static] = ACTIONS(803),
    [anon_sym_class] = ACTIONS(803),
    [anon_sym_public] = ACTIONS(803),
    [anon_sym_protected] = ACTIONS(803),
    [anon_sym_private] = ACTIONS(803),
    [anon_sym_abstract] = ACTIONS(803),
    [anon_sym_final] = ACTIONS(803),
    [anon_sym_strictfp] = ACTIONS(803),
    [anon_sym_native] = ACTIONS(803),
    [anon_sym_interface] = ACTIONS(803),
    [sym_identifier] = ACTIONS(805),
    [sym_comment] = ACTIONS(58),
  },
  [723] = {
    [anon_sym_SEMI] = ACTIONS(865),
    [anon_sym_LT] = ACTIONS(865),
    [anon_sym_LBRACE] = ACTIONS(865),
    [anon_sym_RBRACE] = ACTIONS(865),
    [anon_sym_default] = ACTIONS(867),
    [anon_sym_synchronized] = ACTIONS(867),
    [anon_sym_boolean] = ACTIONS(867),
    [anon_sym_byte] = ACTIONS(867),
    [anon_sym_short] = ACTIONS(867),
    [anon_sym_int] = ACTIONS(867),
    [anon_sym_long] = ACTIONS(867),
    [anon_sym_char] = ACTIONS(867),
    [anon_sym_float] = ACTIONS(867),
    [anon_sym_double] = ACTIONS(867),
    [anon_sym_AT] = ACTIONS(865),
    [anon_sym_static] = ACTIONS(867),
    [anon_sym_class] = ACTIONS(867),
    [anon_sym_public] = ACTIONS(867),
    [anon_sym_protected] = ACTIONS(867),
    [anon_sym_private] = ACTIONS(867),
    [anon_sym_abstract] = ACTIONS(867),
    [anon_sym_final] = ACTIONS(867),
    [anon_sym_strictfp] = ACTIONS(867),
    [anon_sym_native] = ACTIONS(867),
    [anon_sym_interface] = ACTIONS(867),
    [sym_identifier] = ACTIONS(869),
    [sym_comment] = ACTIONS(58),
  },
  [724] = {
    [sym__semicolon] = STATE(300),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(300),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(302),
    [sym_class_body_declaration] = STATE(456),
    [sym_constructor_declaration] = STATE(304),
    [sym_constructor_declarator] = STATE(305),
    [sym_class_member_declaration] = STATE(304),
    [sym_interface_declaration] = STATE(300),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(307),
    [sym_block] = STATE(304),
    [sym_method_declaration] = STATE(300),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(308),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(1696),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(591),
    [sym_comment] = ACTIONS(58),
  },
  [725] = {
    [sym_super_interfaces] = STATE(844),
    [sym_class_body] = STATE(845),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [726] = {
    [sym_class_body] = STATE(845),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [sym_comment] = ACTIONS(58),
  },
  [727] = {
    [anon_sym_SEMI] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(923),
    [anon_sym_LBRACE] = ACTIONS(923),
    [anon_sym_RBRACE] = ACTIONS(923),
    [anon_sym_default] = ACTIONS(925),
    [anon_sym_synchronized] = ACTIONS(925),
    [anon_sym_boolean] = ACTIONS(925),
    [anon_sym_byte] = ACTIONS(925),
    [anon_sym_short] = ACTIONS(925),
    [anon_sym_int] = ACTIONS(925),
    [anon_sym_long] = ACTIONS(925),
    [anon_sym_char] = ACTIONS(925),
    [anon_sym_float] = ACTIONS(925),
    [anon_sym_double] = ACTIONS(925),
    [anon_sym_AT] = ACTIONS(923),
    [anon_sym_static] = ACTIONS(925),
    [anon_sym_class] = ACTIONS(925),
    [anon_sym_public] = ACTIONS(925),
    [anon_sym_protected] = ACTIONS(925),
    [anon_sym_private] = ACTIONS(925),
    [anon_sym_abstract] = ACTIONS(925),
    [anon_sym_final] = ACTIONS(925),
    [anon_sym_strictfp] = ACTIONS(925),
    [anon_sym_native] = ACTIONS(925),
    [anon_sym_interface] = ACTIONS(925),
    [sym_identifier] = ACTIONS(927),
    [sym_comment] = ACTIONS(58),
  },
  [728] = {
    [anon_sym_SEMI] = ACTIONS(929),
    [anon_sym_LT] = ACTIONS(929),
    [anon_sym_LBRACE] = ACTIONS(929),
    [anon_sym_RBRACE] = ACTIONS(929),
    [anon_sym_default] = ACTIONS(931),
    [anon_sym_synchronized] = ACTIONS(931),
    [anon_sym_boolean] = ACTIONS(931),
    [anon_sym_byte] = ACTIONS(931),
    [anon_sym_short] = ACTIONS(931),
    [anon_sym_int] = ACTIONS(931),
    [anon_sym_long] = ACTIONS(931),
    [anon_sym_char] = ACTIONS(931),
    [anon_sym_float] = ACTIONS(931),
    [anon_sym_double] = ACTIONS(931),
    [anon_sym_AT] = ACTIONS(929),
    [anon_sym_static] = ACTIONS(931),
    [anon_sym_class] = ACTIONS(931),
    [anon_sym_public] = ACTIONS(931),
    [anon_sym_protected] = ACTIONS(931),
    [anon_sym_private] = ACTIONS(931),
    [anon_sym_abstract] = ACTIONS(931),
    [anon_sym_final] = ACTIONS(931),
    [anon_sym_strictfp] = ACTIONS(931),
    [anon_sym_native] = ACTIONS(931),
    [anon_sym_interface] = ACTIONS(931),
    [sym_identifier] = ACTIONS(933),
    [sym_comment] = ACTIONS(58),
  },
  [729] = {
    [sym__semicolon] = STATE(319),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(319),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(319),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_interface_member_declaration] = STATE(471),
    [sym_constant_declaration] = STATE(319),
    [sym_unann_type] = STATE(321),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(307),
    [sym_method_declaration] = STATE(319),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(322),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1698),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [730] = {
    [sym_interface_body] = STATE(847),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [sym_comment] = ACTIONS(58),
  },
  [731] = {
    [anon_sym_SEMI] = ACTIONS(953),
    [anon_sym_LT] = ACTIONS(953),
    [anon_sym_LBRACE] = ACTIONS(953),
    [anon_sym_RBRACE] = ACTIONS(953),
    [anon_sym_default] = ACTIONS(955),
    [anon_sym_synchronized] = ACTIONS(955),
    [anon_sym_boolean] = ACTIONS(955),
    [anon_sym_byte] = ACTIONS(955),
    [anon_sym_short] = ACTIONS(955),
    [anon_sym_int] = ACTIONS(955),
    [anon_sym_long] = ACTIONS(955),
    [anon_sym_char] = ACTIONS(955),
    [anon_sym_float] = ACTIONS(955),
    [anon_sym_double] = ACTIONS(955),
    [anon_sym_AT] = ACTIONS(953),
    [anon_sym_static] = ACTIONS(955),
    [anon_sym_class] = ACTIONS(955),
    [anon_sym_public] = ACTIONS(955),
    [anon_sym_protected] = ACTIONS(955),
    [anon_sym_private] = ACTIONS(955),
    [anon_sym_abstract] = ACTIONS(955),
    [anon_sym_final] = ACTIONS(955),
    [anon_sym_strictfp] = ACTIONS(955),
    [anon_sym_native] = ACTIONS(955),
    [anon_sym_interface] = ACTIONS(955),
    [sym_identifier] = ACTIONS(957),
    [sym_comment] = ACTIONS(58),
  },
  [732] = {
    [anon_sym_LBRACE] = ACTIONS(1700),
    [anon_sym_throws] = ACTIONS(1700),
    [sym_comment] = ACTIONS(58),
  },
  [733] = {
    [anon_sym_RPAREN] = ACTIONS(1702),
    [sym_comment] = ACTIONS(58),
  },
  [734] = {
    [anon_sym_GT] = ACTIONS(1325),
    [anon_sym_LT] = ACTIONS(1325),
    [anon_sym_EQ_EQ] = ACTIONS(1327),
    [anon_sym_GT_EQ] = ACTIONS(1327),
    [anon_sym_LT_EQ] = ACTIONS(1327),
    [anon_sym_BANG_EQ] = ACTIONS(1327),
    [anon_sym_AMP_AMP] = ACTIONS(1329),
    [anon_sym_PIPE_PIPE] = ACTIONS(1331),
    [anon_sym_PLUS] = ACTIONS(1333),
    [anon_sym_DASH] = ACTIONS(1333),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1337),
    [anon_sym_AMP] = ACTIONS(1339),
    [anon_sym_PIPE] = ACTIONS(1341),
    [anon_sym_CARET] = ACTIONS(1331),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1337),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(1704),
    [anon_sym_QMARK] = ACTIONS(1345),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [735] = {
    [anon_sym_class] = ACTIONS(1706),
    [sym_comment] = ACTIONS(58),
  },
  [736] = {
    [anon_sym_DOT] = ACTIONS(1708),
    [anon_sym_LBRACK] = ACTIONS(1708),
    [sym_comment] = ACTIONS(58),
  },
  [737] = {
    [anon_sym_DOT] = ACTIONS(1710),
    [anon_sym_LBRACK] = ACTIONS(1712),
    [sym_comment] = ACTIONS(58),
  },
  [738] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(855),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1714),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [739] = {
    [sym_identifier] = ACTIONS(1716),
    [sym_comment] = ACTIONS(58),
  },
  [740] = {
    [sym_type_arguments] = STATE(858),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(1718),
    [sym_comment] = ACTIONS(58),
  },
  [741] = {
    [sym_type_arguments] = STATE(861),
    [sym_type_arguments_or_diamond] = STATE(862),
    [aux_sym_class_or_interface_type_repeat2] = STATE(329),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(863),
    [anon_sym_LT] = ACTIONS(1720),
    [anon_sym_LPAREN] = ACTIONS(1722),
    [anon_sym_DOT] = ACTIONS(1724),
    [anon_sym_LBRACK] = ACTIONS(611),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_LT_GT] = ACTIONS(1726),
    [sym_comment] = ACTIONS(58),
  },
  [742] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_class_or_interface_type_to_instantiate] = STATE(865),
    [aux_sym_class_or_interface_type_repeat1] = STATE(866),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1728),
    [sym_comment] = ACTIONS(58),
  },
  [743] = {
    [sym_dims] = STATE(867),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [744] = {
    [sym_dims] = STATE(867),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_exprs] = STATE(868),
    [sym_dims_expr] = STATE(752),
    [aux_sym_class_or_interface_type_repeat1] = STATE(753),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(1544),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [745] = {
    [anon_sym_LPAREN] = ACTIONS(1730),
    [sym_comment] = ACTIONS(58),
  },
  [746] = {
    [sym_integral_type] = STATE(334),
    [sym_floating_point_type] = STATE(334),
    [sym__annotation] = STATE(161),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [anon_sym_boolean] = ACTIONS(623),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(1732),
    [sym_comment] = ACTIONS(58),
  },
  [747] = {
    [anon_sym_LPAREN] = ACTIONS(1734),
    [sym_comment] = ACTIONS(58),
  },
  [748] = {
    [sym__expression] = STATE(874),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [749] = {
    [sym_type_arguments] = STATE(875),
    [anon_sym_LT] = ACTIONS(909),
    [anon_sym_new] = ACTIONS(1740),
    [sym_comment] = ACTIONS(58),
  },
  [750] = {
    [anon_sym_COLON_COLON] = ACTIONS(1742),
    [sym_comment] = ACTIONS(58),
  },
  [751] = {
    [sym_dims] = STATE(876),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_DOT] = ACTIONS(1744),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1744),
    [sym_comment] = ACTIONS(58),
  },
  [752] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_expr] = STATE(878),
    [aux_sym_class_or_interface_type_repeat1] = STATE(879),
    [aux_sym_dims_exprs_repeat1] = STATE(880),
    [anon_sym_DOT] = ACTIONS(1746),
    [anon_sym_LBRACK] = ACTIONS(1748),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1746),
    [sym_comment] = ACTIONS(58),
  },
  [753] = {
    [sym__annotation] = STATE(129),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(1750),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [754] = {
    [sym_type_arguments] = STATE(884),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_class] = ACTIONS(1752),
    [anon_sym_this] = ACTIONS(1754),
    [anon_sym_super] = ACTIONS(1756),
    [sym_identifier] = ACTIONS(1758),
    [sym_comment] = ACTIONS(58),
  },
  [755] = {
    [anon_sym_SEMI] = ACTIONS(1760),
    [anon_sym_LT] = ACTIONS(1760),
    [anon_sym_LBRACE] = ACTIONS(1760),
    [anon_sym_RBRACE] = ACTIONS(1760),
    [anon_sym_default] = ACTIONS(1762),
    [anon_sym_synchronized] = ACTIONS(1762),
    [anon_sym_boolean] = ACTIONS(1762),
    [anon_sym_byte] = ACTIONS(1762),
    [anon_sym_short] = ACTIONS(1762),
    [anon_sym_int] = ACTIONS(1762),
    [anon_sym_long] = ACTIONS(1762),
    [anon_sym_char] = ACTIONS(1762),
    [anon_sym_float] = ACTIONS(1762),
    [anon_sym_double] = ACTIONS(1762),
    [anon_sym_AT] = ACTIONS(1760),
    [anon_sym_static] = ACTIONS(1762),
    [anon_sym_class] = ACTIONS(1762),
    [anon_sym_public] = ACTIONS(1762),
    [anon_sym_protected] = ACTIONS(1762),
    [anon_sym_private] = ACTIONS(1762),
    [anon_sym_abstract] = ACTIONS(1762),
    [anon_sym_final] = ACTIONS(1762),
    [anon_sym_strictfp] = ACTIONS(1762),
    [anon_sym_native] = ACTIONS(1762),
    [anon_sym_interface] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(1764),
    [sym_comment] = ACTIONS(58),
  },
  [756] = {
    [anon_sym_RBRACE] = ACTIONS(1766),
    [sym_comment] = ACTIONS(58),
  },
  [757] = {
    [sym_type_arguments] = STATE(890),
    [sym_unqualified_class_instance_creation_expression] = STATE(891),
    [anon_sym_LT] = ACTIONS(1768),
    [anon_sym_super] = ACTIONS(1770),
    [anon_sym_new] = ACTIONS(1772),
    [sym_identifier] = ACTIONS(1774),
    [sym_comment] = ACTIONS(58),
  },
  [758] = {
    [sym__expression] = STATE(892),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [759] = {
    [sym_type_arguments] = STATE(884),
    [sym_unqualified_class_instance_creation_expression] = STATE(891),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_super] = ACTIONS(1770),
    [anon_sym_new] = ACTIONS(1772),
    [sym_identifier] = ACTIONS(1776),
    [sym_comment] = ACTIONS(58),
  },
  [760] = {
    [anon_sym_new] = ACTIONS(1740),
    [sym_comment] = ACTIONS(58),
  },
  [761] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(895),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1778),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [762] = {
    [sym_annotation_type_body] = STATE(896),
    [anon_sym_LBRACE] = ACTIONS(1511),
    [sym_comment] = ACTIONS(58),
  },
  [763] = {
    [sym_superclass] = STATE(897),
    [sym_super_interfaces] = STATE(844),
    [sym_class_body] = STATE(845),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [764] = {
    [sym_extends_interfaces] = STATE(898),
    [sym_interface_body] = STATE(847),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [anon_sym_extends] = ACTIONS(367),
    [sym_comment] = ACTIONS(58),
  },
  [765] = {
    [anon_sym_SEMI] = ACTIONS(1780),
    [anon_sym_LT] = ACTIONS(1780),
    [anon_sym_LBRACE] = ACTIONS(1780),
    [anon_sym_RBRACE] = ACTIONS(1780),
    [anon_sym_default] = ACTIONS(1782),
    [anon_sym_synchronized] = ACTIONS(1782),
    [anon_sym_boolean] = ACTIONS(1782),
    [anon_sym_byte] = ACTIONS(1782),
    [anon_sym_short] = ACTIONS(1782),
    [anon_sym_int] = ACTIONS(1782),
    [anon_sym_long] = ACTIONS(1782),
    [anon_sym_char] = ACTIONS(1782),
    [anon_sym_float] = ACTIONS(1782),
    [anon_sym_double] = ACTIONS(1782),
    [anon_sym_AT] = ACTIONS(1780),
    [anon_sym_static] = ACTIONS(1782),
    [anon_sym_class] = ACTIONS(1782),
    [anon_sym_public] = ACTIONS(1782),
    [anon_sym_protected] = ACTIONS(1782),
    [anon_sym_private] = ACTIONS(1782),
    [anon_sym_abstract] = ACTIONS(1782),
    [anon_sym_final] = ACTIONS(1782),
    [anon_sym_strictfp] = ACTIONS(1782),
    [anon_sym_native] = ACTIONS(1782),
    [anon_sym_interface] = ACTIONS(1782),
    [sym_identifier] = ACTIONS(1784),
    [sym_comment] = ACTIONS(58),
  },
  [766] = {
    [anon_sym_LBRACE] = ACTIONS(965),
    [anon_sym_DOT] = ACTIONS(965),
    [anon_sym_implements] = ACTIONS(965),
    [anon_sym_this] = ACTIONS(965),
    [anon_sym_super] = ACTIONS(965),
    [anon_sym_new] = ACTIONS(965),
    [sym_comment] = ACTIONS(58),
  },
  [767] = {
    [anon_sym_GT] = ACTIONS(1786),
    [anon_sym_COMMA] = ACTIONS(971),
    [sym_comment] = ACTIONS(58),
  },
  [768] = {
    [sym_type_arguments] = STATE(775),
    [anon_sym_LT] = ACTIONS(909),
    [anon_sym_LBRACE] = ACTIONS(1598),
    [anon_sym_DOT] = ACTIONS(1598),
    [anon_sym_implements] = ACTIONS(1598),
    [sym_comment] = ACTIONS(58),
  },
  [769] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1788),
    [sym_comment] = ACTIONS(58),
  },
  [770] = {
    [anon_sym_LBRACE] = ACTIONS(1604),
    [anon_sym_DOT] = ACTIONS(1235),
    [anon_sym_implements] = ACTIONS(1604),
    [sym_comment] = ACTIONS(58),
  },
  [771] = {
    [anon_sym_COMMA] = ACTIONS(1790),
    [anon_sym_LBRACE] = ACTIONS(1790),
    [sym_comment] = ACTIONS(58),
  },
  [772] = {
    [anon_sym_SEMI] = ACTIONS(1792),
    [anon_sym_COMMA] = ACTIONS(1792),
    [sym_comment] = ACTIONS(58),
  },
  [773] = {
    [sym_variable_declarator] = STATE(901),
    [sym_variable_declarator_id] = STATE(255),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [774] = {
    [anon_sym_SEMI] = ACTIONS(1794),
    [anon_sym_LT] = ACTIONS(1794),
    [anon_sym_RBRACE] = ACTIONS(1794),
    [anon_sym_default] = ACTIONS(1796),
    [anon_sym_synchronized] = ACTIONS(1796),
    [anon_sym_boolean] = ACTIONS(1796),
    [anon_sym_byte] = ACTIONS(1796),
    [anon_sym_short] = ACTIONS(1796),
    [anon_sym_int] = ACTIONS(1796),
    [anon_sym_long] = ACTIONS(1796),
    [anon_sym_char] = ACTIONS(1796),
    [anon_sym_float] = ACTIONS(1796),
    [anon_sym_double] = ACTIONS(1796),
    [anon_sym_AT] = ACTIONS(1794),
    [anon_sym_static] = ACTIONS(1796),
    [anon_sym_class] = ACTIONS(1796),
    [anon_sym_public] = ACTIONS(1796),
    [anon_sym_protected] = ACTIONS(1796),
    [anon_sym_private] = ACTIONS(1796),
    [anon_sym_abstract] = ACTIONS(1796),
    [anon_sym_final] = ACTIONS(1796),
    [anon_sym_strictfp] = ACTIONS(1796),
    [anon_sym_native] = ACTIONS(1796),
    [anon_sym_interface] = ACTIONS(1796),
    [sym_identifier] = ACTIONS(1798),
    [sym_comment] = ACTIONS(58),
  },
  [775] = {
    [anon_sym_GT] = ACTIONS(1800),
    [anon_sym_AMP] = ACTIONS(1800),
    [anon_sym_COMMA] = ACTIONS(1800),
    [anon_sym_LBRACE] = ACTIONS(1800),
    [anon_sym_DOT] = ACTIONS(1800),
    [anon_sym_LBRACK] = ACTIONS(1800),
    [anon_sym_AT] = ACTIONS(1800),
    [anon_sym_implements] = ACTIONS(1800),
    [anon_sym_COLON_COLON] = ACTIONS(1800),
    [sym_comment] = ACTIONS(58),
  },
  [776] = {
    [sym_type_arguments] = STATE(902),
    [anon_sym_GT] = ACTIONS(1800),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(1800),
    [anon_sym_COMMA] = ACTIONS(1800),
    [anon_sym_LBRACE] = ACTIONS(1800),
    [anon_sym_DOT] = ACTIONS(1800),
    [anon_sym_LBRACK] = ACTIONS(1800),
    [anon_sym_AT] = ACTIONS(1800),
    [anon_sym_COLON_COLON] = ACTIONS(1800),
    [sym_comment] = ACTIONS(58),
  },
  [777] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(1283),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [778] = {
    [anon_sym_GT] = ACTIONS(653),
    [anon_sym_LT] = ACTIONS(653),
    [anon_sym_EQ_EQ] = ACTIONS(655),
    [anon_sym_GT_EQ] = ACTIONS(655),
    [anon_sym_LT_EQ] = ACTIONS(655),
    [anon_sym_BANG_EQ] = ACTIONS(655),
    [anon_sym_AMP_AMP] = ACTIONS(657),
    [anon_sym_PIPE_PIPE] = ACTIONS(659),
    [anon_sym_PLUS] = ACTIONS(661),
    [anon_sym_DASH] = ACTIONS(661),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_SLASH] = ACTIONS(665),
    [anon_sym_AMP] = ACTIONS(667),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_CARET] = ACTIONS(659),
    [anon_sym_PERCENT] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(665),
    [anon_sym_GT_GT_GT] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(671),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(1283),
    [sym_comment] = ACTIONS(58),
  },
  [779] = {
    [anon_sym_SEMI] = ACTIONS(1009),
    [anon_sym_LBRACE] = ACTIONS(1009),
    [anon_sym_default] = ACTIONS(1009),
    [anon_sym_LBRACK] = ACTIONS(1009),
    [anon_sym_AT] = ACTIONS(1009),
    [anon_sym_throws] = ACTIONS(1009),
    [sym_comment] = ACTIONS(58),
  },
  [780] = {
    [anon_sym_RBRACK] = ACTIONS(1802),
    [sym_comment] = ACTIONS(58),
  },
  [781] = {
    [anon_sym_DOT] = ACTIONS(1598),
    [anon_sym_AT] = ACTIONS(1598),
    [sym_identifier] = ACTIONS(1804),
    [sym_comment] = ACTIONS(58),
  },
  [782] = {
    [sym_type_arguments] = STATE(904),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1598),
    [anon_sym_AT] = ACTIONS(1598),
    [sym_identifier] = ACTIONS(1804),
    [sym_comment] = ACTIONS(58),
  },
  [783] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1806),
    [sym_comment] = ACTIONS(58),
  },
  [784] = {
    [anon_sym_DOT] = ACTIONS(1303),
    [anon_sym_AT] = ACTIONS(1604),
    [sym_identifier] = ACTIONS(1808),
    [sym_comment] = ACTIONS(58),
  },
  [785] = {
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [anon_sym_BANG_EQ] = ACTIONS(627),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1337),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1337),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [786] = {
    [anon_sym_GT] = ACTIONS(1325),
    [anon_sym_LT] = ACTIONS(1325),
    [anon_sym_EQ_EQ] = ACTIONS(1327),
    [anon_sym_GT_EQ] = ACTIONS(1327),
    [anon_sym_LT_EQ] = ACTIONS(1327),
    [anon_sym_BANG_EQ] = ACTIONS(1327),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(1333),
    [anon_sym_DASH] = ACTIONS(1333),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1337),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1337),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [787] = {
    [anon_sym_GT] = ACTIONS(1325),
    [anon_sym_LT] = ACTIONS(1325),
    [anon_sym_EQ_EQ] = ACTIONS(1327),
    [anon_sym_GT_EQ] = ACTIONS(1327),
    [anon_sym_LT_EQ] = ACTIONS(1327),
    [anon_sym_BANG_EQ] = ACTIONS(1327),
    [anon_sym_AMP_AMP] = ACTIONS(1329),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(1333),
    [anon_sym_DASH] = ACTIONS(1333),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1337),
    [anon_sym_AMP] = ACTIONS(1339),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1337),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [788] = {
    [anon_sym_GT] = ACTIONS(1325),
    [anon_sym_LT] = ACTIONS(1325),
    [anon_sym_EQ_EQ] = ACTIONS(1327),
    [anon_sym_GT_EQ] = ACTIONS(1327),
    [anon_sym_LT_EQ] = ACTIONS(1327),
    [anon_sym_BANG_EQ] = ACTIONS(1327),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1337),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1337),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [789] = {
    [anon_sym_LPAREN] = ACTIONS(1810),
    [sym_comment] = ACTIONS(58),
  },
  [790] = {
    [anon_sym_RBRACE] = ACTIONS(1812),
    [anon_sym_default] = ACTIONS(1812),
    [anon_sym_synchronized] = ACTIONS(1812),
    [anon_sym_if] = ACTIONS(1812),
    [anon_sym_AT] = ACTIONS(1812),
    [anon_sym_static] = ACTIONS(1812),
    [anon_sym_class] = ACTIONS(1812),
    [anon_sym_public] = ACTIONS(1812),
    [anon_sym_protected] = ACTIONS(1812),
    [anon_sym_private] = ACTIONS(1812),
    [anon_sym_abstract] = ACTIONS(1812),
    [anon_sym_final] = ACTIONS(1812),
    [anon_sym_strictfp] = ACTIONS(1812),
    [anon_sym_native] = ACTIONS(1812),
    [sym_comment] = ACTIONS(58),
  },
  [791] = {
    [anon_sym_else] = ACTIONS(1814),
    [sym_comment] = ACTIONS(58),
  },
  [792] = {
    [anon_sym_else] = ACTIONS(1816),
    [sym_comment] = ACTIONS(58),
  },
  [793] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(1818),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [794] = {
    [anon_sym_default] = ACTIONS(1121),
    [anon_sym_synchronized] = ACTIONS(1121),
    [anon_sym_boolean] = ACTIONS(1121),
    [anon_sym_byte] = ACTIONS(1121),
    [anon_sym_short] = ACTIONS(1121),
    [anon_sym_int] = ACTIONS(1121),
    [anon_sym_long] = ACTIONS(1121),
    [anon_sym_char] = ACTIONS(1121),
    [anon_sym_float] = ACTIONS(1121),
    [anon_sym_double] = ACTIONS(1121),
    [anon_sym_AT] = ACTIONS(1119),
    [anon_sym_static] = ACTIONS(1121),
    [anon_sym_class] = ACTIONS(1121),
    [anon_sym_public] = ACTIONS(1121),
    [anon_sym_protected] = ACTIONS(1121),
    [anon_sym_private] = ACTIONS(1121),
    [anon_sym_abstract] = ACTIONS(1121),
    [anon_sym_final] = ACTIONS(1121),
    [anon_sym_strictfp] = ACTIONS(1121),
    [anon_sym_native] = ACTIONS(1121),
    [sym_identifier] = ACTIONS(1123),
    [sym_comment] = ACTIONS(58),
  },
  [795] = {
    [anon_sym_default] = ACTIONS(1127),
    [anon_sym_synchronized] = ACTIONS(1127),
    [anon_sym_boolean] = ACTIONS(1127),
    [anon_sym_byte] = ACTIONS(1127),
    [anon_sym_short] = ACTIONS(1127),
    [anon_sym_int] = ACTIONS(1127),
    [anon_sym_long] = ACTIONS(1127),
    [anon_sym_char] = ACTIONS(1127),
    [anon_sym_float] = ACTIONS(1127),
    [anon_sym_double] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1125),
    [anon_sym_static] = ACTIONS(1127),
    [anon_sym_class] = ACTIONS(1127),
    [anon_sym_public] = ACTIONS(1127),
    [anon_sym_protected] = ACTIONS(1127),
    [anon_sym_private] = ACTIONS(1127),
    [anon_sym_abstract] = ACTIONS(1127),
    [anon_sym_final] = ACTIONS(1127),
    [anon_sym_strictfp] = ACTIONS(1127),
    [anon_sym_native] = ACTIONS(1127),
    [sym_identifier] = ACTIONS(1129),
    [sym_comment] = ACTIONS(58),
  },
  [796] = {
    [anon_sym_RBRACE] = ACTIONS(1221),
    [anon_sym_default] = ACTIONS(1221),
    [anon_sym_synchronized] = ACTIONS(1221),
    [anon_sym_if] = ACTIONS(1221),
    [anon_sym_DOT] = ACTIONS(1221),
    [anon_sym_LBRACK] = ACTIONS(1221),
    [anon_sym_AT] = ACTIONS(1221),
    [anon_sym_static] = ACTIONS(1221),
    [anon_sym_class] = ACTIONS(1221),
    [anon_sym_public] = ACTIONS(1221),
    [anon_sym_protected] = ACTIONS(1221),
    [anon_sym_private] = ACTIONS(1221),
    [anon_sym_abstract] = ACTIONS(1221),
    [anon_sym_final] = ACTIONS(1221),
    [anon_sym_strictfp] = ACTIONS(1221),
    [anon_sym_native] = ACTIONS(1221),
    [anon_sym_COLON_COLON] = ACTIONS(1221),
    [sym_comment] = ACTIONS(58),
  },
  [797] = {
    [sym_class_body] = STATE(909),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [sym_comment] = ACTIONS(58),
  },
  [798] = {
    [anon_sym_RBRACE] = ACTIONS(1241),
    [anon_sym_default] = ACTIONS(1241),
    [anon_sym_synchronized] = ACTIONS(1241),
    [anon_sym_if] = ACTIONS(1241),
    [anon_sym_AT] = ACTIONS(1241),
    [anon_sym_static] = ACTIONS(1241),
    [anon_sym_class] = ACTIONS(1241),
    [anon_sym_public] = ACTIONS(1241),
    [anon_sym_protected] = ACTIONS(1241),
    [anon_sym_private] = ACTIONS(1241),
    [anon_sym_abstract] = ACTIONS(1241),
    [anon_sym_final] = ACTIONS(1241),
    [anon_sym_strictfp] = ACTIONS(1241),
    [anon_sym_native] = ACTIONS(1241),
    [sym_comment] = ACTIONS(58),
  },
  [799] = {
    [sym_super_interfaces] = STATE(910),
    [sym_class_body] = STATE(909),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [800] = {
    [ts_builtin_sym_end] = ACTIONS(1820),
    [sym_decimal_integer_literal] = ACTIONS(1822),
    [sym_hex_integer_literal] = ACTIONS(1822),
    [sym_octal_integer_literal] = ACTIONS(1822),
    [sym_binary_integer_literal] = ACTIONS(1822),
    [sym_decimal_floating_point_literal] = ACTIONS(1822),
    [sym_hex_floating_point_literal] = ACTIONS(1824),
    [anon_sym_true] = ACTIONS(1822),
    [anon_sym_false] = ACTIONS(1822),
    [anon_sym_SQUOTE] = ACTIONS(1820),
    [sym_string_literal] = ACTIONS(1820),
    [sym_null_literal] = ACTIONS(1822),
    [anon_sym_LT] = ACTIONS(1820),
    [anon_sym_LPAREN] = ACTIONS(1820),
    [anon_sym_BANG] = ACTIONS(1820),
    [anon_sym_TILDE] = ACTIONS(1820),
    [anon_sym_PLUS_PLUS] = ACTIONS(1820),
    [anon_sym_DASH_DASH] = ACTIONS(1820),
    [anon_sym_default] = ACTIONS(1822),
    [anon_sym_synchronized] = ACTIONS(1822),
    [anon_sym_boolean] = ACTIONS(1822),
    [anon_sym_byte] = ACTIONS(1822),
    [anon_sym_short] = ACTIONS(1822),
    [anon_sym_int] = ACTIONS(1822),
    [anon_sym_long] = ACTIONS(1822),
    [anon_sym_char] = ACTIONS(1822),
    [anon_sym_float] = ACTIONS(1822),
    [anon_sym_double] = ACTIONS(1822),
    [anon_sym_AT] = ACTIONS(1820),
    [anon_sym_open] = ACTIONS(1822),
    [anon_sym_module] = ACTIONS(1822),
    [anon_sym_static] = ACTIONS(1822),
    [anon_sym_package] = ACTIONS(1822),
    [anon_sym_import] = ACTIONS(1822),
    [anon_sym_class] = ACTIONS(1822),
    [anon_sym_public] = ACTIONS(1822),
    [anon_sym_protected] = ACTIONS(1822),
    [anon_sym_private] = ACTIONS(1822),
    [anon_sym_abstract] = ACTIONS(1822),
    [anon_sym_final] = ACTIONS(1822),
    [anon_sym_strictfp] = ACTIONS(1822),
    [anon_sym_native] = ACTIONS(1822),
    [anon_sym_interface] = ACTIONS(1822),
    [sym_identifier] = ACTIONS(1824),
    [sym_comment] = ACTIONS(58),
  },
  [801] = {
    [ts_builtin_sym_end] = ACTIONS(1826),
    [sym_decimal_integer_literal] = ACTIONS(1828),
    [sym_hex_integer_literal] = ACTIONS(1828),
    [sym_octal_integer_literal] = ACTIONS(1828),
    [sym_binary_integer_literal] = ACTIONS(1828),
    [sym_decimal_floating_point_literal] = ACTIONS(1828),
    [sym_hex_floating_point_literal] = ACTIONS(1830),
    [anon_sym_true] = ACTIONS(1828),
    [anon_sym_false] = ACTIONS(1828),
    [anon_sym_SQUOTE] = ACTIONS(1826),
    [sym_string_literal] = ACTIONS(1826),
    [sym_null_literal] = ACTIONS(1828),
    [anon_sym_LT] = ACTIONS(1826),
    [anon_sym_LPAREN] = ACTIONS(1826),
    [anon_sym_BANG] = ACTIONS(1826),
    [anon_sym_TILDE] = ACTIONS(1826),
    [anon_sym_PLUS_PLUS] = ACTIONS(1826),
    [anon_sym_DASH_DASH] = ACTIONS(1826),
    [anon_sym_default] = ACTIONS(1828),
    [anon_sym_synchronized] = ACTIONS(1828),
    [anon_sym_boolean] = ACTIONS(1828),
    [anon_sym_byte] = ACTIONS(1828),
    [anon_sym_short] = ACTIONS(1828),
    [anon_sym_int] = ACTIONS(1828),
    [anon_sym_long] = ACTIONS(1828),
    [anon_sym_char] = ACTIONS(1828),
    [anon_sym_float] = ACTIONS(1828),
    [anon_sym_double] = ACTIONS(1828),
    [anon_sym_AT] = ACTIONS(1826),
    [anon_sym_open] = ACTIONS(1828),
    [anon_sym_module] = ACTIONS(1828),
    [anon_sym_static] = ACTIONS(1828),
    [anon_sym_package] = ACTIONS(1828),
    [anon_sym_import] = ACTIONS(1828),
    [anon_sym_class] = ACTIONS(1828),
    [anon_sym_public] = ACTIONS(1828),
    [anon_sym_protected] = ACTIONS(1828),
    [anon_sym_private] = ACTIONS(1828),
    [anon_sym_abstract] = ACTIONS(1828),
    [anon_sym_final] = ACTIONS(1828),
    [anon_sym_strictfp] = ACTIONS(1828),
    [anon_sym_native] = ACTIONS(1828),
    [anon_sym_interface] = ACTIONS(1828),
    [sym_identifier] = ACTIONS(1830),
    [sym_comment] = ACTIONS(58),
  },
  [802] = {
    [sym__semicolon] = STATE(912),
    [sym_dims] = STATE(913),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_default_value] = STATE(914),
    [aux_sym_class_or_interface_type_repeat1] = STATE(500),
    [aux_sym_dims_repeat1] = STATE(501),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_default] = ACTIONS(1832),
    [anon_sym_LBRACK] = ACTIONS(991),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [803] = {
    [anon_sym_RPAREN] = ACTIONS(1834),
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
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [805] = {
    [sym__expression] = STATE(917),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [806] = {
    [sym__expression] = STATE(918),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [807] = {
    [sym__expression] = STATE(919),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [808] = {
    [sym__expression] = STATE(199),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [809] = {
    [sym__expression] = STATE(920),
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
  [810] = {
    [anon_sym_SEMI] = ACTIONS(1836),
    [anon_sym_RPAREN] = ACTIONS(1836),
    [anon_sym_COMMA] = ACTIONS(1836),
    [anon_sym_RBRACE] = ACTIONS(1836),
    [sym_comment] = ACTIONS(58),
  },
  [811] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [812] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [813] = {
    [anon_sym_GT] = ACTIONS(1838),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(1840),
    [anon_sym_LT_EQ] = ACTIONS(1840),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_AMP] = ACTIONS(1842),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_GT_GT_GT] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(321),
    [sym_comment] = ACTIONS(58),
  },
  [814] = {
    [sym__literal] = STATE(553),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(554),
    [sym__annotation] = STATE(553),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_element_value] = STATE(928),
    [sym_element_value_array_initializer] = STATE(553),
    [sym_conditional_expression] = STATE(553),
    [sym_conditional_or_expression] = STATE(692),
    [sym_conditional_and_expression] = STATE(693),
    [sym_inclusive_or_expression] = STATE(694),
    [sym_exclusive_or_expression] = STATE(695),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(696),
    [sym_equality_expression] = STATE(697),
    [sym_shift_expression] = STATE(698),
    [sym_additive_expression] = STATE(699),
    [sym_multiplicative_expression] = STATE(700),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1113),
    [anon_sym_false] = ACTIONS(1113),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [anon_sym_RBRACE] = ACTIONS(1844),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [815] = {
    [anon_sym_COMMA] = ACTIONS(1846),
    [anon_sym_RBRACE] = ACTIONS(1844),
    [sym_comment] = ACTIONS(58),
  },
  [816] = {
    [sym_unary_expression] = STATE(554),
    [sym_conditional_and_expression] = STATE(930),
    [sym_inclusive_or_expression] = STATE(694),
    [sym_exclusive_or_expression] = STATE(695),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(696),
    [sym_equality_expression] = STATE(697),
    [sym_shift_expression] = STATE(698),
    [sym_additive_expression] = STATE(699),
    [sym_multiplicative_expression] = STATE(700),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [sym_comment] = ACTIONS(58),
  },
  [817] = {
    [sym__expression] = STATE(931),
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
  [818] = {
    [sym_unary_expression] = STATE(554),
    [sym_inclusive_or_expression] = STATE(932),
    [sym_exclusive_or_expression] = STATE(695),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(696),
    [sym_equality_expression] = STATE(697),
    [sym_shift_expression] = STATE(698),
    [sym_additive_expression] = STATE(699),
    [sym_multiplicative_expression] = STATE(700),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [sym_comment] = ACTIONS(58),
  },
  [819] = {
    [sym_unary_expression] = STATE(554),
    [sym_exclusive_or_expression] = STATE(933),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(696),
    [sym_equality_expression] = STATE(697),
    [sym_shift_expression] = STATE(698),
    [sym_additive_expression] = STATE(699),
    [sym_multiplicative_expression] = STATE(700),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [sym_comment] = ACTIONS(58),
  },
  [820] = {
    [sym_unary_expression] = STATE(554),
    [sym_and_expression] = STATE(830),
    [sym_relational_expression] = STATE(696),
    [sym_equality_expression] = STATE(697),
    [sym_shift_expression] = STATE(698),
    [sym_additive_expression] = STATE(699),
    [sym_multiplicative_expression] = STATE(700),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [sym_comment] = ACTIONS(58),
  },
  [821] = {
    [sym_unary_expression] = STATE(554),
    [sym_shift_expression] = STATE(934),
    [sym_additive_expression] = STATE(699),
    [sym_multiplicative_expression] = STATE(700),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [sym_comment] = ACTIONS(58),
  },
  [822] = {
    [sym_unary_expression] = STATE(554),
    [sym_relational_expression] = STATE(935),
    [sym_shift_expression] = STATE(698),
    [sym_additive_expression] = STATE(699),
    [sym_multiplicative_expression] = STATE(700),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [sym_comment] = ACTIONS(58),
  },
  [823] = {
    [sym_unary_expression] = STATE(554),
    [sym_additive_expression] = STATE(936),
    [sym_multiplicative_expression] = STATE(700),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [sym_comment] = ACTIONS(58),
  },
  [824] = {
    [sym_unary_expression] = STATE(554),
    [sym_multiplicative_expression] = STATE(937),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [sym_comment] = ACTIONS(58),
  },
  [825] = {
    [sym_unary_expression] = STATE(835),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [sym_comment] = ACTIONS(58),
  },
  [826] = {
    [anon_sym_AMP_AMP] = ACTIONS(1425),
    [anon_sym_PIPE_PIPE] = ACTIONS(1848),
    [anon_sym_RPAREN] = ACTIONS(1848),
    [anon_sym_COMMA] = ACTIONS(1848),
    [anon_sym_QMARK] = ACTIONS(1848),
    [sym_comment] = ACTIONS(58),
  },
  [827] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(1850),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [828] = {
    [anon_sym_AMP_AMP] = ACTIONS(1852),
    [anon_sym_PIPE_PIPE] = ACTIONS(1852),
    [anon_sym_PIPE] = ACTIONS(1431),
    [anon_sym_RPAREN] = ACTIONS(1852),
    [anon_sym_COMMA] = ACTIONS(1852),
    [anon_sym_QMARK] = ACTIONS(1852),
    [sym_comment] = ACTIONS(58),
  },
  [829] = {
    [anon_sym_AMP_AMP] = ACTIONS(1854),
    [anon_sym_PIPE_PIPE] = ACTIONS(1854),
    [anon_sym_PIPE] = ACTIONS(1856),
    [anon_sym_CARET] = ACTIONS(1437),
    [anon_sym_RPAREN] = ACTIONS(1854),
    [anon_sym_COMMA] = ACTIONS(1854),
    [anon_sym_QMARK] = ACTIONS(1854),
    [sym_comment] = ACTIONS(58),
  },
  [830] = {
    [anon_sym_SEMI] = ACTIONS(1858),
    [anon_sym_AMP_AMP] = ACTIONS(1858),
    [anon_sym_PIPE_PIPE] = ACTIONS(1858),
    [anon_sym_PIPE] = ACTIONS(1860),
    [anon_sym_CARET] = ACTIONS(1858),
    [anon_sym_RPAREN] = ACTIONS(1858),
    [anon_sym_COMMA] = ACTIONS(1858),
    [anon_sym_QMARK] = ACTIONS(1858),
    [anon_sym_RBRACE] = ACTIONS(1858),
    [sym_comment] = ACTIONS(58),
  },
  [831] = {
    [anon_sym_LT] = ACTIONS(1862),
    [anon_sym_EQ_EQ] = ACTIONS(1864),
    [anon_sym_BANG_EQ] = ACTIONS(1864),
    [anon_sym_AMP_AMP] = ACTIONS(1864),
    [anon_sym_PIPE_PIPE] = ACTIONS(1864),
    [anon_sym_PIPE] = ACTIONS(1862),
    [anon_sym_CARET] = ACTIONS(1864),
    [anon_sym_LT_LT] = ACTIONS(1457),
    [anon_sym_GT_GT] = ACTIONS(1459),
    [anon_sym_GT_GT_GT] = ACTIONS(1457),
    [anon_sym_RPAREN] = ACTIONS(1864),
    [anon_sym_COMMA] = ACTIONS(1864),
    [anon_sym_QMARK] = ACTIONS(1864),
    [sym_comment] = ACTIONS(58),
  },
  [832] = {
    [anon_sym_LT] = ACTIONS(1443),
    [anon_sym_EQ_EQ] = ACTIONS(1866),
    [anon_sym_BANG_EQ] = ACTIONS(1866),
    [anon_sym_AMP_AMP] = ACTIONS(1868),
    [anon_sym_PIPE_PIPE] = ACTIONS(1868),
    [anon_sym_PIPE] = ACTIONS(1870),
    [anon_sym_CARET] = ACTIONS(1868),
    [anon_sym_RPAREN] = ACTIONS(1868),
    [anon_sym_COMMA] = ACTIONS(1868),
    [anon_sym_QMARK] = ACTIONS(1868),
    [sym_comment] = ACTIONS(58),
  },
  [833] = {
    [anon_sym_LT] = ACTIONS(1872),
    [anon_sym_EQ_EQ] = ACTIONS(1874),
    [anon_sym_BANG_EQ] = ACTIONS(1874),
    [anon_sym_AMP_AMP] = ACTIONS(1874),
    [anon_sym_PIPE_PIPE] = ACTIONS(1874),
    [anon_sym_PLUS] = ACTIONS(1465),
    [anon_sym_DASH] = ACTIONS(1465),
    [anon_sym_PIPE] = ACTIONS(1872),
    [anon_sym_CARET] = ACTIONS(1874),
    [anon_sym_LT_LT] = ACTIONS(1874),
    [anon_sym_GT_GT] = ACTIONS(1872),
    [anon_sym_GT_GT_GT] = ACTIONS(1874),
    [anon_sym_RPAREN] = ACTIONS(1874),
    [anon_sym_COMMA] = ACTIONS(1874),
    [anon_sym_QMARK] = ACTIONS(1874),
    [sym_comment] = ACTIONS(58),
  },
  [834] = {
    [anon_sym_LT] = ACTIONS(1876),
    [anon_sym_EQ_EQ] = ACTIONS(1878),
    [anon_sym_BANG_EQ] = ACTIONS(1878),
    [anon_sym_AMP_AMP] = ACTIONS(1878),
    [anon_sym_PIPE_PIPE] = ACTIONS(1878),
    [anon_sym_PLUS] = ACTIONS(1878),
    [anon_sym_DASH] = ACTIONS(1878),
    [anon_sym_STAR] = ACTIONS(1471),
    [anon_sym_SLASH] = ACTIONS(1473),
    [anon_sym_PIPE] = ACTIONS(1876),
    [anon_sym_CARET] = ACTIONS(1878),
    [anon_sym_PERCENT] = ACTIONS(1471),
    [anon_sym_LT_LT] = ACTIONS(1878),
    [anon_sym_GT_GT] = ACTIONS(1876),
    [anon_sym_GT_GT_GT] = ACTIONS(1878),
    [anon_sym_RPAREN] = ACTIONS(1878),
    [anon_sym_COMMA] = ACTIONS(1878),
    [anon_sym_QMARK] = ACTIONS(1878),
    [sym_comment] = ACTIONS(58),
  },
  [835] = {
    [anon_sym_SEMI] = ACTIONS(1880),
    [anon_sym_LT] = ACTIONS(1882),
    [anon_sym_EQ_EQ] = ACTIONS(1880),
    [anon_sym_BANG_EQ] = ACTIONS(1880),
    [anon_sym_AMP_AMP] = ACTIONS(1880),
    [anon_sym_PIPE_PIPE] = ACTIONS(1880),
    [anon_sym_PLUS] = ACTIONS(1880),
    [anon_sym_DASH] = ACTIONS(1880),
    [anon_sym_STAR] = ACTIONS(1880),
    [anon_sym_SLASH] = ACTIONS(1882),
    [anon_sym_PIPE] = ACTIONS(1882),
    [anon_sym_CARET] = ACTIONS(1880),
    [anon_sym_PERCENT] = ACTIONS(1880),
    [anon_sym_LT_LT] = ACTIONS(1880),
    [anon_sym_GT_GT] = ACTIONS(1882),
    [anon_sym_GT_GT_GT] = ACTIONS(1880),
    [anon_sym_RPAREN] = ACTIONS(1880),
    [anon_sym_COMMA] = ACTIONS(1880),
    [anon_sym_QMARK] = ACTIONS(1880),
    [anon_sym_RBRACE] = ACTIONS(1880),
    [sym_comment] = ACTIONS(58),
  },
  [836] = {
    [anon_sym_RBRACE] = ACTIONS(1884),
    [anon_sym_requires] = ACTIONS(1884),
    [anon_sym_exports] = ACTIONS(1884),
    [anon_sym_opens] = ACTIONS(1884),
    [anon_sym_uses] = ACTIONS(1884),
    [anon_sym_provides] = ACTIONS(1884),
    [sym_comment] = ACTIONS(58),
  },
  [837] = {
    [sym__semicolon] = STATE(939),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(1495),
    [sym_comment] = ACTIONS(58),
  },
  [838] = {
    [anon_sym_SEMI] = ACTIONS(1886),
    [anon_sym_COMMA] = ACTIONS(1886),
    [anon_sym_DOT] = ACTIONS(1157),
    [sym_comment] = ACTIONS(58),
  },
  [839] = {
    [sym_package_or_type_name] = STATE(940),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(58),
  },
  [840] = {
    [sym__semicolon] = STATE(939),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(1888),
    [sym_comment] = ACTIONS(58),
  },
  [841] = {
    [anon_sym_SEMI] = ACTIONS(1091),
    [anon_sym_LT] = ACTIONS(1091),
    [anon_sym_LBRACE] = ACTIONS(1091),
    [anon_sym_RBRACE] = ACTIONS(1091),
    [anon_sym_default] = ACTIONS(1093),
    [anon_sym_synchronized] = ACTIONS(1093),
    [anon_sym_boolean] = ACTIONS(1093),
    [anon_sym_byte] = ACTIONS(1093),
    [anon_sym_short] = ACTIONS(1093),
    [anon_sym_int] = ACTIONS(1093),
    [anon_sym_long] = ACTIONS(1093),
    [anon_sym_char] = ACTIONS(1093),
    [anon_sym_float] = ACTIONS(1093),
    [anon_sym_double] = ACTIONS(1093),
    [anon_sym_AT] = ACTIONS(1091),
    [anon_sym_static] = ACTIONS(1093),
    [anon_sym_class] = ACTIONS(1093),
    [anon_sym_public] = ACTIONS(1093),
    [anon_sym_protected] = ACTIONS(1093),
    [anon_sym_private] = ACTIONS(1093),
    [anon_sym_abstract] = ACTIONS(1093),
    [anon_sym_final] = ACTIONS(1093),
    [anon_sym_strictfp] = ACTIONS(1093),
    [anon_sym_native] = ACTIONS(1093),
    [anon_sym_interface] = ACTIONS(1093),
    [sym_identifier] = ACTIONS(1095),
    [sym_comment] = ACTIONS(58),
  },
  [842] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(124),
    [sym_marker_annotation] = STATE(124),
    [sym_single_element_annotation] = STATE(124),
    [sym_class_declaration] = STATE(410),
    [sym_normal_class_declaration] = STATE(301),
    [sym_modifier] = STATE(36),
    [sym_interface_declaration] = STATE(410),
    [sym_annotation_type_declaration] = STATE(306),
    [sym_annotation_type_member_declaration] = STATE(550),
    [sym_annotation_type_element_declaration] = STATE(410),
    [sym_normal_interface_declaration] = STATE(306),
    [sym_constant_declaration] = STATE(410),
    [sym_unann_type] = STATE(412),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_catch_formal_parameter_repeat1] = STATE(413),
    [anon_sym_RBRACE] = ACTIONS(1890),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(589),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [843] = {
    [anon_sym_SEMI] = ACTIONS(1221),
    [anon_sym_LT] = ACTIONS(1221),
    [anon_sym_LBRACE] = ACTIONS(1221),
    [anon_sym_RBRACE] = ACTIONS(1221),
    [anon_sym_default] = ACTIONS(1223),
    [anon_sym_synchronized] = ACTIONS(1223),
    [anon_sym_boolean] = ACTIONS(1223),
    [anon_sym_byte] = ACTIONS(1223),
    [anon_sym_short] = ACTIONS(1223),
    [anon_sym_int] = ACTIONS(1223),
    [anon_sym_long] = ACTIONS(1223),
    [anon_sym_char] = ACTIONS(1223),
    [anon_sym_float] = ACTIONS(1223),
    [anon_sym_double] = ACTIONS(1223),
    [anon_sym_AT] = ACTIONS(1221),
    [anon_sym_static] = ACTIONS(1223),
    [anon_sym_class] = ACTIONS(1223),
    [anon_sym_public] = ACTIONS(1223),
    [anon_sym_protected] = ACTIONS(1223),
    [anon_sym_private] = ACTIONS(1223),
    [anon_sym_abstract] = ACTIONS(1223),
    [anon_sym_final] = ACTIONS(1223),
    [anon_sym_strictfp] = ACTIONS(1223),
    [anon_sym_native] = ACTIONS(1223),
    [anon_sym_interface] = ACTIONS(1223),
    [sym_identifier] = ACTIONS(1225),
    [sym_comment] = ACTIONS(58),
  },
  [844] = {
    [sym_class_body] = STATE(943),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [sym_comment] = ACTIONS(58),
  },
  [845] = {
    [anon_sym_SEMI] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1241),
    [anon_sym_LBRACE] = ACTIONS(1241),
    [anon_sym_RBRACE] = ACTIONS(1241),
    [anon_sym_default] = ACTIONS(1243),
    [anon_sym_synchronized] = ACTIONS(1243),
    [anon_sym_boolean] = ACTIONS(1243),
    [anon_sym_byte] = ACTIONS(1243),
    [anon_sym_short] = ACTIONS(1243),
    [anon_sym_int] = ACTIONS(1243),
    [anon_sym_long] = ACTIONS(1243),
    [anon_sym_char] = ACTIONS(1243),
    [anon_sym_float] = ACTIONS(1243),
    [anon_sym_double] = ACTIONS(1243),
    [anon_sym_AT] = ACTIONS(1241),
    [anon_sym_static] = ACTIONS(1243),
    [anon_sym_class] = ACTIONS(1243),
    [anon_sym_public] = ACTIONS(1243),
    [anon_sym_protected] = ACTIONS(1243),
    [anon_sym_private] = ACTIONS(1243),
    [anon_sym_abstract] = ACTIONS(1243),
    [anon_sym_final] = ACTIONS(1243),
    [anon_sym_strictfp] = ACTIONS(1243),
    [anon_sym_native] = ACTIONS(1243),
    [anon_sym_interface] = ACTIONS(1243),
    [sym_identifier] = ACTIONS(1245),
    [sym_comment] = ACTIONS(58),
  },
  [846] = {
    [anon_sym_SEMI] = ACTIONS(1251),
    [anon_sym_LT] = ACTIONS(1251),
    [anon_sym_LBRACE] = ACTIONS(1251),
    [anon_sym_RBRACE] = ACTIONS(1251),
    [anon_sym_default] = ACTIONS(1253),
    [anon_sym_synchronized] = ACTIONS(1253),
    [anon_sym_boolean] = ACTIONS(1253),
    [anon_sym_byte] = ACTIONS(1253),
    [anon_sym_short] = ACTIONS(1253),
    [anon_sym_int] = ACTIONS(1253),
    [anon_sym_long] = ACTIONS(1253),
    [anon_sym_char] = ACTIONS(1253),
    [anon_sym_float] = ACTIONS(1253),
    [anon_sym_double] = ACTIONS(1253),
    [anon_sym_AT] = ACTIONS(1251),
    [anon_sym_static] = ACTIONS(1253),
    [anon_sym_class] = ACTIONS(1253),
    [anon_sym_public] = ACTIONS(1253),
    [anon_sym_protected] = ACTIONS(1253),
    [anon_sym_private] = ACTIONS(1253),
    [anon_sym_abstract] = ACTIONS(1253),
    [anon_sym_final] = ACTIONS(1253),
    [anon_sym_strictfp] = ACTIONS(1253),
    [anon_sym_native] = ACTIONS(1253),
    [anon_sym_interface] = ACTIONS(1253),
    [sym_identifier] = ACTIONS(1255),
    [sym_comment] = ACTIONS(58),
  },
  [847] = {
    [anon_sym_SEMI] = ACTIONS(1263),
    [anon_sym_LT] = ACTIONS(1263),
    [anon_sym_LBRACE] = ACTIONS(1263),
    [anon_sym_RBRACE] = ACTIONS(1263),
    [anon_sym_default] = ACTIONS(1265),
    [anon_sym_synchronized] = ACTIONS(1265),
    [anon_sym_boolean] = ACTIONS(1265),
    [anon_sym_byte] = ACTIONS(1265),
    [anon_sym_short] = ACTIONS(1265),
    [anon_sym_int] = ACTIONS(1265),
    [anon_sym_long] = ACTIONS(1265),
    [anon_sym_char] = ACTIONS(1265),
    [anon_sym_float] = ACTIONS(1265),
    [anon_sym_double] = ACTIONS(1265),
    [anon_sym_AT] = ACTIONS(1263),
    [anon_sym_static] = ACTIONS(1265),
    [anon_sym_class] = ACTIONS(1265),
    [anon_sym_public] = ACTIONS(1265),
    [anon_sym_protected] = ACTIONS(1265),
    [anon_sym_private] = ACTIONS(1265),
    [anon_sym_abstract] = ACTIONS(1265),
    [anon_sym_final] = ACTIONS(1265),
    [anon_sym_strictfp] = ACTIONS(1265),
    [anon_sym_native] = ACTIONS(1265),
    [anon_sym_interface] = ACTIONS(1265),
    [sym_identifier] = ACTIONS(1267),
    [sym_comment] = ACTIONS(58),
  },
  [848] = {
    [anon_sym_LBRACE] = ACTIONS(1892),
    [anon_sym_throws] = ACTIONS(1892),
    [sym_comment] = ACTIONS(58),
  },
  [849] = {
    [anon_sym_DOT] = ACTIONS(1894),
    [anon_sym_LBRACK] = ACTIONS(1894),
    [anon_sym_COLON_COLON] = ACTIONS(1894),
    [sym_comment] = ACTIONS(58),
  },
  [850] = {
    [anon_sym_DOT] = ACTIONS(1896),
    [anon_sym_LBRACK] = ACTIONS(1896),
    [anon_sym_COLON_COLON] = ACTIONS(1896),
    [sym_comment] = ACTIONS(58),
  },
  [851] = {
    [anon_sym_class] = ACTIONS(1898),
    [sym_comment] = ACTIONS(58),
  },
  [852] = {
    [anon_sym_DOT] = ACTIONS(1900),
    [anon_sym_LBRACK] = ACTIONS(1900),
    [sym_comment] = ACTIONS(58),
  },
  [853] = {
    [sym__semicolon] = STATE(945),
    [anon_sym_SEMI] = ACTIONS(721),
    [sym_comment] = ACTIONS(58),
  },
  [854] = {
    [aux_sym_argument_list_repeat1] = STATE(947),
    [anon_sym_GT] = ACTIONS(1644),
    [anon_sym_LT] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1646),
    [anon_sym_LT_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_AMP_AMP] = ACTIONS(1902),
    [anon_sym_PIPE_PIPE] = ACTIONS(1904),
    [anon_sym_PLUS] = ACTIONS(1906),
    [anon_sym_DASH] = ACTIONS(1906),
    [anon_sym_STAR] = ACTIONS(1908),
    [anon_sym_SLASH] = ACTIONS(1910),
    [anon_sym_AMP] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1912),
    [anon_sym_CARET] = ACTIONS(1904),
    [anon_sym_PERCENT] = ACTIONS(1908),
    [anon_sym_LT_LT] = ACTIONS(1908),
    [anon_sym_GT_GT] = ACTIONS(1910),
    [anon_sym_GT_GT_GT] = ACTIONS(1908),
    [anon_sym_RPAREN] = ACTIONS(1914),
    [anon_sym_COMMA] = ACTIONS(1916),
    [anon_sym_QMARK] = ACTIONS(1918),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [855] = {
    [anon_sym_RPAREN] = ACTIONS(1920),
    [sym_comment] = ACTIONS(58),
  },
  [856] = {
    [anon_sym_DOT] = ACTIONS(1922),
    [anon_sym_LBRACK] = ACTIONS(1922),
    [anon_sym_COLON_COLON] = ACTIONS(1922),
    [sym_comment] = ACTIONS(58),
  },
  [857] = {
    [anon_sym_DOT] = ACTIONS(1924),
    [anon_sym_LBRACK] = ACTIONS(1924),
    [anon_sym_COLON_COLON] = ACTIONS(1924),
    [sym_comment] = ACTIONS(58),
  },
  [858] = {
    [sym_identifier] = ACTIONS(1926),
    [sym_comment] = ACTIONS(58),
  },
  [859] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(951),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1928),
    [sym_comment] = ACTIONS(58),
  },
  [860] = {
    [anon_sym_LPAREN] = ACTIONS(1930),
    [sym_comment] = ACTIONS(58),
  },
  [861] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(475),
    [anon_sym_LPAREN] = ACTIONS(1930),
    [anon_sym_DOT] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(961),
    [anon_sym_AT] = ACTIONS(961),
    [sym_comment] = ACTIONS(58),
  },
  [862] = {
    [anon_sym_LPAREN] = ACTIONS(1932),
    [sym_comment] = ACTIONS(58),
  },
  [863] = {
    [sym_type_arguments] = STATE(860),
    [sym_type_arguments_or_diamond] = STATE(953),
    [anon_sym_LT] = ACTIONS(1720),
    [anon_sym_LPAREN] = ACTIONS(1932),
    [anon_sym_DOT] = ACTIONS(1934),
    [anon_sym_LT_GT] = ACTIONS(1726),
    [sym_comment] = ACTIONS(58),
  },
  [864] = {
    [sym_type_arguments] = STATE(860),
    [sym_type_arguments_or_diamond] = STATE(862),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(863),
    [anon_sym_LT] = ACTIONS(1720),
    [anon_sym_LPAREN] = ACTIONS(1722),
    [anon_sym_DOT] = ACTIONS(1936),
    [anon_sym_LT_GT] = ACTIONS(1726),
    [sym_comment] = ACTIONS(58),
  },
  [865] = {
    [anon_sym_LPAREN] = ACTIONS(1938),
    [sym_comment] = ACTIONS(58),
  },
  [866] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1940),
    [sym_comment] = ACTIONS(58),
  },
  [867] = {
    [sym_array_initializer] = STATE(958),
    [anon_sym_LBRACE] = ACTIONS(1942),
    [sym_comment] = ACTIONS(58),
  },
  [868] = {
    [sym_dims] = STATE(958),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(114),
    [aux_sym_dims_repeat1] = STATE(115),
    [anon_sym_DOT] = ACTIONS(1944),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1944),
    [sym_comment] = ACTIONS(58),
  },
  [869] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(960),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1946),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [870] = {
    [sym_type_arguments] = STATE(961),
    [sym_type_arguments_or_diamond] = STATE(953),
    [aux_sym_class_or_interface_type_repeat2] = STATE(475),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(962),
    [anon_sym_LT] = ACTIONS(1720),
    [anon_sym_LPAREN] = ACTIONS(1932),
    [anon_sym_DOT] = ACTIONS(1724),
    [anon_sym_LBRACK] = ACTIONS(961),
    [anon_sym_AT] = ACTIONS(961),
    [anon_sym_LT_GT] = ACTIONS(1726),
    [sym_comment] = ACTIONS(58),
  },
  [871] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(963),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1920),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [872] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [873] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [874] = {
    [anon_sym_GT] = ACTIONS(1948),
    [anon_sym_LT] = ACTIONS(1948),
    [anon_sym_EQ_EQ] = ACTIONS(1950),
    [anon_sym_GT_EQ] = ACTIONS(1950),
    [anon_sym_LT_EQ] = ACTIONS(1950),
    [anon_sym_BANG_EQ] = ACTIONS(1950),
    [anon_sym_AMP_AMP] = ACTIONS(1952),
    [anon_sym_PIPE_PIPE] = ACTIONS(1954),
    [anon_sym_PLUS] = ACTIONS(1956),
    [anon_sym_DASH] = ACTIONS(1956),
    [anon_sym_STAR] = ACTIONS(1958),
    [anon_sym_SLASH] = ACTIONS(1960),
    [anon_sym_AMP] = ACTIONS(1962),
    [anon_sym_PIPE] = ACTIONS(1964),
    [anon_sym_CARET] = ACTIONS(1954),
    [anon_sym_PERCENT] = ACTIONS(1958),
    [anon_sym_LT_LT] = ACTIONS(1958),
    [anon_sym_GT_GT] = ACTIONS(1960),
    [anon_sym_GT_GT_GT] = ACTIONS(1958),
    [anon_sym_QMARK] = ACTIONS(1966),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(1968),
    [sym_comment] = ACTIONS(58),
  },
  [875] = {
    [anon_sym_new] = ACTIONS(1970),
    [sym_comment] = ACTIONS(58),
  },
  [876] = {
    [anon_sym_DOT] = ACTIONS(1944),
    [anon_sym_COLON_COLON] = ACTIONS(1944),
    [sym_comment] = ACTIONS(58),
  },
  [877] = {
    [sym__expression] = STATE(874),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [878] = {
    [anon_sym_DOT] = ACTIONS(1972),
    [anon_sym_LBRACK] = ACTIONS(1972),
    [anon_sym_AT] = ACTIONS(1972),
    [anon_sym_COLON_COLON] = ACTIONS(1972),
    [sym_comment] = ACTIONS(58),
  },
  [879] = {
    [sym__annotation] = STATE(129),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(1974),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [880] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_expr] = STATE(972),
    [aux_sym_class_or_interface_type_repeat1] = STATE(879),
    [anon_sym_DOT] = ACTIONS(1976),
    [anon_sym_LBRACK] = ACTIONS(1748),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1976),
    [sym_comment] = ACTIONS(58),
  },
  [881] = {
    [sym__expression] = STATE(973),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [anon_sym_RBRACK] = ACTIONS(691),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [882] = {
    [anon_sym_DOT] = ACTIONS(1978),
    [anon_sym_COLON_COLON] = ACTIONS(1980),
    [sym_comment] = ACTIONS(58),
  },
  [883] = {
    [anon_sym_LPAREN] = ACTIONS(1982),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_LBRACK] = ACTIONS(823),
    [sym_comment] = ACTIONS(58),
  },
  [884] = {
    [sym_identifier] = ACTIONS(1984),
    [sym_comment] = ACTIONS(58),
  },
  [885] = {
    [anon_sym_SEMI] = ACTIONS(1986),
    [anon_sym_LT] = ACTIONS(1986),
    [anon_sym_LBRACE] = ACTIONS(1986),
    [anon_sym_RBRACE] = ACTIONS(1986),
    [anon_sym_default] = ACTIONS(1988),
    [anon_sym_synchronized] = ACTIONS(1988),
    [anon_sym_boolean] = ACTIONS(1988),
    [anon_sym_byte] = ACTIONS(1988),
    [anon_sym_short] = ACTIONS(1988),
    [anon_sym_int] = ACTIONS(1988),
    [anon_sym_long] = ACTIONS(1988),
    [anon_sym_char] = ACTIONS(1988),
    [anon_sym_float] = ACTIONS(1988),
    [anon_sym_double] = ACTIONS(1988),
    [anon_sym_AT] = ACTIONS(1986),
    [anon_sym_static] = ACTIONS(1988),
    [anon_sym_class] = ACTIONS(1988),
    [anon_sym_public] = ACTIONS(1988),
    [anon_sym_protected] = ACTIONS(1988),
    [anon_sym_private] = ACTIONS(1988),
    [anon_sym_abstract] = ACTIONS(1988),
    [anon_sym_final] = ACTIONS(1988),
    [anon_sym_strictfp] = ACTIONS(1988),
    [anon_sym_native] = ACTIONS(1988),
    [anon_sym_interface] = ACTIONS(1988),
    [sym_identifier] = ACTIONS(1990),
    [sym_comment] = ACTIONS(58),
  },
  [886] = {
    [sym_type_argument] = STATE(978),
    [sym_reference_type] = STATE(191),
    [sym_class_or_interface_type] = STATE(192),
    [sym_primitive_type] = STATE(193),
    [sym_integral_type] = STATE(188),
    [sym_floating_point_type] = STATE(188),
    [sym__annotation] = STATE(105),
    [sym_normal_annotation] = STATE(106),
    [sym_marker_annotation] = STATE(106),
    [sym_single_element_annotation] = STATE(106),
    [aux_sym_class_or_interface_type_repeat1] = STATE(194),
    [anon_sym_boolean] = ACTIONS(369),
    [anon_sym_void] = ACTIONS(369),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(371),
    [sym_comment] = ACTIONS(58),
  },
  [887] = {
    [anon_sym_LPAREN] = ACTIONS(1992),
    [sym_comment] = ACTIONS(58),
  },
  [888] = {
    [sym_type_arguments] = STATE(742),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_class_or_interface_type_to_instantiate] = STATE(745),
    [aux_sym_class_or_interface_type_repeat1] = STATE(866),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1728),
    [sym_comment] = ACTIONS(58),
  },
  [889] = {
    [anon_sym_LPAREN] = ACTIONS(1982),
    [anon_sym_DOT] = ACTIONS(1994),
    [anon_sym_LBRACK] = ACTIONS(1994),
    [anon_sym_COLON_COLON] = ACTIONS(1994),
    [sym_comment] = ACTIONS(58),
  },
  [890] = {
    [anon_sym_super] = ACTIONS(1996),
    [sym_identifier] = ACTIONS(1998),
    [sym_comment] = ACTIONS(58),
  },
  [891] = {
    [anon_sym_DOT] = ACTIONS(2000),
    [anon_sym_LBRACK] = ACTIONS(2000),
    [anon_sym_COLON_COLON] = ACTIONS(2000),
    [sym_comment] = ACTIONS(58),
  },
  [892] = {
    [anon_sym_GT] = ACTIONS(1948),
    [anon_sym_LT] = ACTIONS(1948),
    [anon_sym_EQ_EQ] = ACTIONS(1950),
    [anon_sym_GT_EQ] = ACTIONS(1950),
    [anon_sym_LT_EQ] = ACTIONS(1950),
    [anon_sym_BANG_EQ] = ACTIONS(1950),
    [anon_sym_AMP_AMP] = ACTIONS(1952),
    [anon_sym_PIPE_PIPE] = ACTIONS(1954),
    [anon_sym_PLUS] = ACTIONS(1956),
    [anon_sym_DASH] = ACTIONS(1956),
    [anon_sym_STAR] = ACTIONS(1958),
    [anon_sym_SLASH] = ACTIONS(1960),
    [anon_sym_AMP] = ACTIONS(1962),
    [anon_sym_PIPE] = ACTIONS(1964),
    [anon_sym_CARET] = ACTIONS(1954),
    [anon_sym_PERCENT] = ACTIONS(1958),
    [anon_sym_LT_LT] = ACTIONS(1958),
    [anon_sym_GT_GT] = ACTIONS(1960),
    [anon_sym_GT_GT_GT] = ACTIONS(1958),
    [anon_sym_QMARK] = ACTIONS(1966),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(2002),
    [sym_comment] = ACTIONS(58),
  },
  [893] = {
    [anon_sym_LPAREN] = ACTIONS(1982),
    [anon_sym_DOT] = ACTIONS(1922),
    [anon_sym_LBRACK] = ACTIONS(1922),
    [anon_sym_COLON_COLON] = ACTIONS(1922),
    [sym_comment] = ACTIONS(58),
  },
  [894] = {
    [anon_sym_DOT] = ACTIONS(2004),
    [anon_sym_LBRACK] = ACTIONS(2004),
    [anon_sym_COLON_COLON] = ACTIONS(2004),
    [sym_comment] = ACTIONS(58),
  },
  [895] = {
    [anon_sym_RPAREN] = ACTIONS(2006),
    [sym_comment] = ACTIONS(58),
  },
  [896] = {
    [anon_sym_SEMI] = ACTIONS(1359),
    [anon_sym_LT] = ACTIONS(1359),
    [anon_sym_LBRACE] = ACTIONS(1359),
    [anon_sym_RBRACE] = ACTIONS(1359),
    [anon_sym_default] = ACTIONS(1361),
    [anon_sym_synchronized] = ACTIONS(1361),
    [anon_sym_boolean] = ACTIONS(1361),
    [anon_sym_byte] = ACTIONS(1361),
    [anon_sym_short] = ACTIONS(1361),
    [anon_sym_int] = ACTIONS(1361),
    [anon_sym_long] = ACTIONS(1361),
    [anon_sym_char] = ACTIONS(1361),
    [anon_sym_float] = ACTIONS(1361),
    [anon_sym_double] = ACTIONS(1361),
    [anon_sym_AT] = ACTIONS(1359),
    [anon_sym_static] = ACTIONS(1361),
    [anon_sym_class] = ACTIONS(1361),
    [anon_sym_public] = ACTIONS(1361),
    [anon_sym_protected] = ACTIONS(1361),
    [anon_sym_private] = ACTIONS(1361),
    [anon_sym_abstract] = ACTIONS(1361),
    [anon_sym_final] = ACTIONS(1361),
    [anon_sym_strictfp] = ACTIONS(1361),
    [anon_sym_native] = ACTIONS(1361),
    [anon_sym_interface] = ACTIONS(1361),
    [sym_identifier] = ACTIONS(1363),
    [sym_comment] = ACTIONS(58),
  },
  [897] = {
    [sym_super_interfaces] = STATE(983),
    [sym_class_body] = STATE(943),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [anon_sym_implements] = ACTIONS(363),
    [sym_comment] = ACTIONS(58),
  },
  [898] = {
    [sym_interface_body] = STATE(984),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [sym_comment] = ACTIONS(58),
  },
  [899] = {
    [anon_sym_LBRACE] = ACTIONS(1277),
    [anon_sym_DOT] = ACTIONS(1277),
    [anon_sym_implements] = ACTIONS(1277),
    [anon_sym_this] = ACTIONS(1277),
    [anon_sym_super] = ACTIONS(1277),
    [anon_sym_new] = ACTIONS(1277),
    [sym_comment] = ACTIONS(58),
  },
  [900] = {
    [sym_type_arguments] = STATE(902),
    [anon_sym_LT] = ACTIONS(909),
    [anon_sym_LBRACE] = ACTIONS(1800),
    [anon_sym_DOT] = ACTIONS(1800),
    [anon_sym_implements] = ACTIONS(1800),
    [sym_comment] = ACTIONS(58),
  },
  [901] = {
    [anon_sym_SEMI] = ACTIONS(2008),
    [anon_sym_COMMA] = ACTIONS(2008),
    [sym_comment] = ACTIONS(58),
  },
  [902] = {
    [anon_sym_GT] = ACTIONS(2010),
    [anon_sym_AMP] = ACTIONS(2010),
    [anon_sym_COMMA] = ACTIONS(2010),
    [anon_sym_LBRACE] = ACTIONS(2010),
    [anon_sym_DOT] = ACTIONS(2010),
    [anon_sym_LBRACK] = ACTIONS(2010),
    [anon_sym_AT] = ACTIONS(2010),
    [anon_sym_implements] = ACTIONS(2010),
    [anon_sym_COLON_COLON] = ACTIONS(2010),
    [sym_comment] = ACTIONS(58),
  },
  [903] = {
    [anon_sym_SEMI] = ACTIONS(1317),
    [anon_sym_LBRACE] = ACTIONS(1317),
    [anon_sym_default] = ACTIONS(1317),
    [anon_sym_LBRACK] = ACTIONS(1317),
    [anon_sym_AT] = ACTIONS(1317),
    [anon_sym_throws] = ACTIONS(1317),
    [sym_comment] = ACTIONS(58),
  },
  [904] = {
    [anon_sym_DOT] = ACTIONS(1800),
    [anon_sym_AT] = ACTIONS(1800),
    [sym_identifier] = ACTIONS(2012),
    [sym_comment] = ACTIONS(58),
  },
  [905] = {
    [sym_type_arguments] = STATE(985),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1800),
    [anon_sym_AT] = ACTIONS(1800),
    [sym_identifier] = ACTIONS(2012),
    [sym_comment] = ACTIONS(58),
  },
  [906] = {
    [sym__expression] = STATE(986),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [907] = {
    [sym_statement] = STATE(987),
    [sym_if_then_statement] = STATE(225),
    [sym_if_then_else_statement] = STATE(225),
    [anon_sym_if] = ACTIONS(425),
    [sym_comment] = ACTIONS(58),
  },
  [908] = {
    [sym__expression] = STATE(988),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1019),
    [anon_sym_TILDE] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1021),
    [anon_sym_DASH_DASH] = ACTIONS(1021),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [909] = {
    [anon_sym_RBRACE] = ACTIONS(1582),
    [anon_sym_default] = ACTIONS(1582),
    [anon_sym_synchronized] = ACTIONS(1582),
    [anon_sym_if] = ACTIONS(1582),
    [anon_sym_AT] = ACTIONS(1582),
    [anon_sym_static] = ACTIONS(1582),
    [anon_sym_class] = ACTIONS(1582),
    [anon_sym_public] = ACTIONS(1582),
    [anon_sym_protected] = ACTIONS(1582),
    [anon_sym_private] = ACTIONS(1582),
    [anon_sym_abstract] = ACTIONS(1582),
    [anon_sym_final] = ACTIONS(1582),
    [anon_sym_strictfp] = ACTIONS(1582),
    [anon_sym_native] = ACTIONS(1582),
    [sym_comment] = ACTIONS(58),
  },
  [910] = {
    [sym_class_body] = STATE(989),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [sym_comment] = ACTIONS(58),
  },
  [911] = {
    [sym__literal] = STATE(553),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(554),
    [sym__annotation] = STATE(553),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_element_value] = STATE(991),
    [sym_element_value_array_initializer] = STATE(553),
    [sym_conditional_expression] = STATE(553),
    [sym_conditional_or_expression] = STATE(992),
    [sym_conditional_and_expression] = STATE(993),
    [sym_inclusive_or_expression] = STATE(994),
    [sym_exclusive_or_expression] = STATE(995),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(996),
    [sym_equality_expression] = STATE(997),
    [sym_shift_expression] = STATE(998),
    [sym_additive_expression] = STATE(999),
    [sym_multiplicative_expression] = STATE(1000),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1113),
    [anon_sym_false] = ACTIONS(1113),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [912] = {
    [anon_sym_RBRACE] = ACTIONS(2016),
    [anon_sym_default] = ACTIONS(2018),
    [anon_sym_synchronized] = ACTIONS(2018),
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
    [anon_sym_native] = ACTIONS(2018),
    [anon_sym_interface] = ACTIONS(2018),
    [sym_identifier] = ACTIONS(2020),
    [sym_comment] = ACTIONS(58),
  },
  [913] = {
    [sym__semicolon] = STATE(1001),
    [sym_default_value] = STATE(1002),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_default] = ACTIONS(1832),
    [sym_comment] = ACTIONS(58),
  },
  [914] = {
    [sym__semicolon] = STATE(1001),
    [anon_sym_SEMI] = ACTIONS(579),
    [sym_comment] = ACTIONS(58),
  },
  [915] = {
    [sym__semicolon] = STATE(1001),
    [sym_dims] = STATE(1003),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_default_value] = STATE(1002),
    [aux_sym_class_or_interface_type_repeat1] = STATE(500),
    [aux_sym_dims_repeat1] = STATE(501),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_default] = ACTIONS(1832),
    [anon_sym_LBRACK] = ACTIONS(991),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [916] = {
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [anon_sym_BANG_EQ] = ACTIONS(627),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(1908),
    [anon_sym_SLASH] = ACTIONS(1910),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1908),
    [anon_sym_LT_LT] = ACTIONS(1908),
    [anon_sym_GT_GT] = ACTIONS(1910),
    [anon_sym_GT_GT_GT] = ACTIONS(1908),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [917] = {
    [anon_sym_GT] = ACTIONS(1644),
    [anon_sym_LT] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1646),
    [anon_sym_LT_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(1906),
    [anon_sym_DASH] = ACTIONS(1906),
    [anon_sym_STAR] = ACTIONS(1908),
    [anon_sym_SLASH] = ACTIONS(1910),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1908),
    [anon_sym_LT_LT] = ACTIONS(1908),
    [anon_sym_GT_GT] = ACTIONS(1910),
    [anon_sym_GT_GT_GT] = ACTIONS(1908),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [918] = {
    [anon_sym_GT] = ACTIONS(1644),
    [anon_sym_LT] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1646),
    [anon_sym_LT_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_AMP_AMP] = ACTIONS(1902),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(1906),
    [anon_sym_DASH] = ACTIONS(1906),
    [anon_sym_STAR] = ACTIONS(1908),
    [anon_sym_SLASH] = ACTIONS(1910),
    [anon_sym_AMP] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1908),
    [anon_sym_LT_LT] = ACTIONS(1908),
    [anon_sym_GT_GT] = ACTIONS(1910),
    [anon_sym_GT_GT_GT] = ACTIONS(1908),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [919] = {
    [anon_sym_GT] = ACTIONS(1644),
    [anon_sym_LT] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1646),
    [anon_sym_LT_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(1908),
    [anon_sym_SLASH] = ACTIONS(1910),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1908),
    [anon_sym_LT_LT] = ACTIONS(1908),
    [anon_sym_GT_GT] = ACTIONS(1910),
    [anon_sym_GT_GT_GT] = ACTIONS(1908),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [920] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(2022),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
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
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [922] = {
    [sym__expression] = STATE(1006),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [923] = {
    [sym__expression] = STATE(1007),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [924] = {
    [sym__expression] = STATE(1008),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [925] = {
    [sym__expression] = STATE(199),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [926] = {
    [sym__expression] = STATE(1009),
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
  [927] = {
    [anon_sym_SEMI] = ACTIONS(2024),
    [anon_sym_RPAREN] = ACTIONS(2024),
    [anon_sym_COMMA] = ACTIONS(2024),
    [anon_sym_RBRACE] = ACTIONS(2024),
    [sym_comment] = ACTIONS(58),
  },
  [928] = {
    [anon_sym_COMMA] = ACTIONS(2026),
    [anon_sym_RBRACE] = ACTIONS(2026),
    [sym_comment] = ACTIONS(58),
  },
  [929] = {
    [sym__literal] = STATE(553),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(554),
    [sym__annotation] = STATE(553),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_element_value] = STATE(1011),
    [sym_element_value_array_initializer] = STATE(553),
    [sym_conditional_expression] = STATE(553),
    [sym_conditional_or_expression] = STATE(692),
    [sym_conditional_and_expression] = STATE(693),
    [sym_inclusive_or_expression] = STATE(694),
    [sym_exclusive_or_expression] = STATE(695),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(696),
    [sym_equality_expression] = STATE(697),
    [sym_shift_expression] = STATE(698),
    [sym_additive_expression] = STATE(699),
    [sym_multiplicative_expression] = STATE(700),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1113),
    [anon_sym_false] = ACTIONS(1113),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [anon_sym_RBRACE] = ACTIONS(2028),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [930] = {
    [anon_sym_AMP_AMP] = ACTIONS(1664),
    [anon_sym_PIPE_PIPE] = ACTIONS(1848),
    [anon_sym_COMMA] = ACTIONS(1848),
    [anon_sym_QMARK] = ACTIONS(1848),
    [anon_sym_RBRACE] = ACTIONS(1848),
    [sym_comment] = ACTIONS(58),
  },
  [931] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(2030),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [932] = {
    [anon_sym_AMP_AMP] = ACTIONS(1852),
    [anon_sym_PIPE_PIPE] = ACTIONS(1852),
    [anon_sym_PIPE] = ACTIONS(1666),
    [anon_sym_COMMA] = ACTIONS(1852),
    [anon_sym_QMARK] = ACTIONS(1852),
    [anon_sym_RBRACE] = ACTIONS(1852),
    [sym_comment] = ACTIONS(58),
  },
  [933] = {
    [anon_sym_AMP_AMP] = ACTIONS(1854),
    [anon_sym_PIPE_PIPE] = ACTIONS(1854),
    [anon_sym_PIPE] = ACTIONS(1856),
    [anon_sym_CARET] = ACTIONS(1668),
    [anon_sym_COMMA] = ACTIONS(1854),
    [anon_sym_QMARK] = ACTIONS(1854),
    [anon_sym_RBRACE] = ACTIONS(1854),
    [sym_comment] = ACTIONS(58),
  },
  [934] = {
    [anon_sym_LT] = ACTIONS(1862),
    [anon_sym_EQ_EQ] = ACTIONS(1864),
    [anon_sym_BANG_EQ] = ACTIONS(1864),
    [anon_sym_AMP_AMP] = ACTIONS(1864),
    [anon_sym_PIPE_PIPE] = ACTIONS(1864),
    [anon_sym_PIPE] = ACTIONS(1862),
    [anon_sym_CARET] = ACTIONS(1864),
    [anon_sym_LT_LT] = ACTIONS(1674),
    [anon_sym_GT_GT] = ACTIONS(1676),
    [anon_sym_GT_GT_GT] = ACTIONS(1674),
    [anon_sym_COMMA] = ACTIONS(1864),
    [anon_sym_QMARK] = ACTIONS(1864),
    [anon_sym_RBRACE] = ACTIONS(1864),
    [sym_comment] = ACTIONS(58),
  },
  [935] = {
    [anon_sym_LT] = ACTIONS(1670),
    [anon_sym_EQ_EQ] = ACTIONS(1866),
    [anon_sym_BANG_EQ] = ACTIONS(1866),
    [anon_sym_AMP_AMP] = ACTIONS(1868),
    [anon_sym_PIPE_PIPE] = ACTIONS(1868),
    [anon_sym_PIPE] = ACTIONS(1870),
    [anon_sym_CARET] = ACTIONS(1868),
    [anon_sym_COMMA] = ACTIONS(1868),
    [anon_sym_QMARK] = ACTIONS(1868),
    [anon_sym_RBRACE] = ACTIONS(1868),
    [sym_comment] = ACTIONS(58),
  },
  [936] = {
    [anon_sym_LT] = ACTIONS(1872),
    [anon_sym_EQ_EQ] = ACTIONS(1874),
    [anon_sym_BANG_EQ] = ACTIONS(1874),
    [anon_sym_AMP_AMP] = ACTIONS(1874),
    [anon_sym_PIPE_PIPE] = ACTIONS(1874),
    [anon_sym_PLUS] = ACTIONS(1678),
    [anon_sym_DASH] = ACTIONS(1678),
    [anon_sym_PIPE] = ACTIONS(1872),
    [anon_sym_CARET] = ACTIONS(1874),
    [anon_sym_LT_LT] = ACTIONS(1874),
    [anon_sym_GT_GT] = ACTIONS(1872),
    [anon_sym_GT_GT_GT] = ACTIONS(1874),
    [anon_sym_COMMA] = ACTIONS(1874),
    [anon_sym_QMARK] = ACTIONS(1874),
    [anon_sym_RBRACE] = ACTIONS(1874),
    [sym_comment] = ACTIONS(58),
  },
  [937] = {
    [anon_sym_LT] = ACTIONS(1876),
    [anon_sym_EQ_EQ] = ACTIONS(1878),
    [anon_sym_BANG_EQ] = ACTIONS(1878),
    [anon_sym_AMP_AMP] = ACTIONS(1878),
    [anon_sym_PIPE_PIPE] = ACTIONS(1878),
    [anon_sym_PLUS] = ACTIONS(1878),
    [anon_sym_DASH] = ACTIONS(1878),
    [anon_sym_STAR] = ACTIONS(1680),
    [anon_sym_SLASH] = ACTIONS(1682),
    [anon_sym_PIPE] = ACTIONS(1876),
    [anon_sym_CARET] = ACTIONS(1878),
    [anon_sym_PERCENT] = ACTIONS(1680),
    [anon_sym_LT_LT] = ACTIONS(1878),
    [anon_sym_GT_GT] = ACTIONS(1876),
    [anon_sym_GT_GT_GT] = ACTIONS(1878),
    [anon_sym_COMMA] = ACTIONS(1878),
    [anon_sym_QMARK] = ACTIONS(1878),
    [anon_sym_RBRACE] = ACTIONS(1878),
    [sym_comment] = ACTIONS(58),
  },
  [938] = {
    [sym_lambda_expression] = STATE(1013),
    [sym__lambda_parameters] = STATE(28),
    [sym_unary_expression] = STATE(554),
    [sym_conditional_expression] = STATE(1013),
    [sym_conditional_or_expression] = STATE(556),
    [sym_conditional_and_expression] = STATE(557),
    [sym_inclusive_or_expression] = STATE(558),
    [sym_exclusive_or_expression] = STATE(559),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(561),
    [sym_equality_expression] = STATE(562),
    [sym_shift_expression] = STATE(563),
    [sym_additive_expression] = STATE(564),
    [sym_multiplicative_expression] = STATE(565),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1115),
    [anon_sym_TILDE] = ACTIONS(1115),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [939] = {
    [anon_sym_RBRACE] = ACTIONS(2032),
    [anon_sym_requires] = ACTIONS(2032),
    [anon_sym_exports] = ACTIONS(2032),
    [anon_sym_opens] = ACTIONS(2032),
    [anon_sym_uses] = ACTIONS(2032),
    [anon_sym_provides] = ACTIONS(2032),
    [sym_comment] = ACTIONS(58),
  },
  [940] = {
    [anon_sym_SEMI] = ACTIONS(2034),
    [anon_sym_COMMA] = ACTIONS(2034),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_comment] = ACTIONS(58),
  },
  [941] = {
    [sym_package_or_type_name] = STATE(1014),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(58),
  },
  [942] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_LT] = ACTIONS(1389),
    [anon_sym_LBRACE] = ACTIONS(1389),
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_default] = ACTIONS(1391),
    [anon_sym_synchronized] = ACTIONS(1391),
    [anon_sym_boolean] = ACTIONS(1391),
    [anon_sym_byte] = ACTIONS(1391),
    [anon_sym_short] = ACTIONS(1391),
    [anon_sym_int] = ACTIONS(1391),
    [anon_sym_long] = ACTIONS(1391),
    [anon_sym_char] = ACTIONS(1391),
    [anon_sym_float] = ACTIONS(1391),
    [anon_sym_double] = ACTIONS(1391),
    [anon_sym_AT] = ACTIONS(1389),
    [anon_sym_static] = ACTIONS(1391),
    [anon_sym_class] = ACTIONS(1391),
    [anon_sym_public] = ACTIONS(1391),
    [anon_sym_protected] = ACTIONS(1391),
    [anon_sym_private] = ACTIONS(1391),
    [anon_sym_abstract] = ACTIONS(1391),
    [anon_sym_final] = ACTIONS(1391),
    [anon_sym_strictfp] = ACTIONS(1391),
    [anon_sym_native] = ACTIONS(1391),
    [anon_sym_interface] = ACTIONS(1391),
    [sym_identifier] = ACTIONS(1393),
    [sym_comment] = ACTIONS(58),
  },
  [943] = {
    [anon_sym_SEMI] = ACTIONS(1582),
    [anon_sym_LT] = ACTIONS(1582),
    [anon_sym_LBRACE] = ACTIONS(1582),
    [anon_sym_RBRACE] = ACTIONS(1582),
    [anon_sym_default] = ACTIONS(1584),
    [anon_sym_synchronized] = ACTIONS(1584),
    [anon_sym_boolean] = ACTIONS(1584),
    [anon_sym_byte] = ACTIONS(1584),
    [anon_sym_short] = ACTIONS(1584),
    [anon_sym_int] = ACTIONS(1584),
    [anon_sym_long] = ACTIONS(1584),
    [anon_sym_char] = ACTIONS(1584),
    [anon_sym_float] = ACTIONS(1584),
    [anon_sym_double] = ACTIONS(1584),
    [anon_sym_AT] = ACTIONS(1582),
    [anon_sym_static] = ACTIONS(1584),
    [anon_sym_class] = ACTIONS(1584),
    [anon_sym_public] = ACTIONS(1584),
    [anon_sym_protected] = ACTIONS(1584),
    [anon_sym_private] = ACTIONS(1584),
    [anon_sym_abstract] = ACTIONS(1584),
    [anon_sym_final] = ACTIONS(1584),
    [anon_sym_strictfp] = ACTIONS(1584),
    [anon_sym_native] = ACTIONS(1584),
    [anon_sym_interface] = ACTIONS(1584),
    [sym_identifier] = ACTIONS(1586),
    [sym_comment] = ACTIONS(58),
  },
  [944] = {
    [anon_sym_DOT] = ACTIONS(2036),
    [anon_sym_LBRACK] = ACTIONS(2036),
    [anon_sym_COLON_COLON] = ACTIONS(2036),
    [sym_comment] = ACTIONS(58),
  },
  [945] = {
    [anon_sym_RBRACE] = ACTIONS(2038),
    [anon_sym_default] = ACTIONS(2038),
    [anon_sym_synchronized] = ACTIONS(2038),
    [anon_sym_if] = ACTIONS(2038),
    [anon_sym_AT] = ACTIONS(2038),
    [anon_sym_static] = ACTIONS(2038),
    [anon_sym_class] = ACTIONS(2038),
    [anon_sym_public] = ACTIONS(2038),
    [anon_sym_protected] = ACTIONS(2038),
    [anon_sym_private] = ACTIONS(2038),
    [anon_sym_abstract] = ACTIONS(2038),
    [anon_sym_final] = ACTIONS(2038),
    [anon_sym_strictfp] = ACTIONS(2038),
    [anon_sym_native] = ACTIONS(2038),
    [sym_comment] = ACTIONS(58),
  },
  [946] = {
    [sym__expression] = STATE(1015),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [947] = {
    [anon_sym_RPAREN] = ACTIONS(2040),
    [anon_sym_COMMA] = ACTIONS(2042),
    [sym_comment] = ACTIONS(58),
  },
  [948] = {
    [sym__semicolon] = STATE(1017),
    [anon_sym_SEMI] = ACTIONS(721),
    [sym_comment] = ACTIONS(58),
  },
  [949] = {
    [anon_sym_DOT] = ACTIONS(2044),
    [anon_sym_LBRACK] = ACTIONS(2044),
    [anon_sym_COLON_COLON] = ACTIONS(2044),
    [sym_comment] = ACTIONS(58),
  },
  [950] = {
    [sym_type_arguments] = STATE(639),
    [anon_sym_LT] = ACTIONS(2046),
    [anon_sym_LPAREN] = ACTIONS(2049),
    [anon_sym_DOT] = ACTIONS(2051),
    [anon_sym_LBRACK] = ACTIONS(1269),
    [anon_sym_AT] = ACTIONS(1269),
    [anon_sym_LT_GT] = ACTIONS(2049),
    [sym_comment] = ACTIONS(58),
  },
  [951] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2054),
    [sym_comment] = ACTIONS(58),
  },
  [952] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1020),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2056),
    [sym_comment] = ACTIONS(58),
  },
  [953] = {
    [anon_sym_LPAREN] = ACTIONS(2058),
    [sym_comment] = ACTIONS(58),
  },
  [954] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1022),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2060),
    [sym_comment] = ACTIONS(58),
  },
  [955] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1024),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2062),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [956] = {
    [sym_type_arguments] = STATE(860),
    [sym_type_arguments_or_diamond] = STATE(953),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(962),
    [anon_sym_LT] = ACTIONS(1720),
    [anon_sym_LPAREN] = ACTIONS(1932),
    [anon_sym_DOT] = ACTIONS(1936),
    [anon_sym_LT_GT] = ACTIONS(1726),
    [sym_comment] = ACTIONS(58),
  },
  [957] = {
    [sym__expression] = STATE(1027),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_variable_initializer] = STATE(1028),
    [sym_array_initializer] = STATE(1029),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_COMMA] = ACTIONS(2064),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [anon_sym_LBRACE] = ACTIONS(1942),
    [anon_sym_RBRACE] = ACTIONS(2066),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [958] = {
    [anon_sym_DOT] = ACTIONS(2068),
    [anon_sym_COLON_COLON] = ACTIONS(2068),
    [sym_comment] = ACTIONS(58),
  },
  [959] = {
    [sym_class_body] = STATE(1030),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_DOT] = ACTIONS(2070),
    [anon_sym_LBRACK] = ACTIONS(2070),
    [anon_sym_COLON_COLON] = ACTIONS(2070),
    [sym_comment] = ACTIONS(58),
  },
  [960] = {
    [anon_sym_RPAREN] = ACTIONS(2062),
    [sym_comment] = ACTIONS(58),
  },
  [961] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(643),
    [anon_sym_LPAREN] = ACTIONS(1930),
    [anon_sym_DOT] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(1273),
    [anon_sym_AT] = ACTIONS(1273),
    [sym_comment] = ACTIONS(58),
  },
  [962] = {
    [sym_type_arguments] = STATE(860),
    [sym_type_arguments_or_diamond] = STATE(1031),
    [anon_sym_LT] = ACTIONS(1720),
    [anon_sym_LPAREN] = ACTIONS(2058),
    [anon_sym_DOT] = ACTIONS(1934),
    [anon_sym_LT_GT] = ACTIONS(1726),
    [sym_comment] = ACTIONS(58),
  },
  [963] = {
    [anon_sym_RPAREN] = ACTIONS(2072),
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
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [965] = {
    [sym__expression] = STATE(1034),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [966] = {
    [sym__expression] = STATE(1035),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [967] = {
    [sym__expression] = STATE(1036),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [968] = {
    [sym__expression] = STATE(199),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [969] = {
    [sym__expression] = STATE(1037),
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
  [970] = {
    [anon_sym_DOT] = ACTIONS(2074),
    [anon_sym_LBRACK] = ACTIONS(2074),
    [anon_sym_AT] = ACTIONS(2074),
    [anon_sym_COLON_COLON] = ACTIONS(2074),
    [sym_comment] = ACTIONS(58),
  },
  [971] = {
    [sym__expression] = STATE(973),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [972] = {
    [anon_sym_DOT] = ACTIONS(2076),
    [anon_sym_LBRACK] = ACTIONS(2076),
    [anon_sym_AT] = ACTIONS(2076),
    [anon_sym_COLON_COLON] = ACTIONS(2076),
    [sym_comment] = ACTIONS(58),
  },
  [973] = {
    [anon_sym_GT] = ACTIONS(1948),
    [anon_sym_LT] = ACTIONS(1948),
    [anon_sym_EQ_EQ] = ACTIONS(1950),
    [anon_sym_GT_EQ] = ACTIONS(1950),
    [anon_sym_LT_EQ] = ACTIONS(1950),
    [anon_sym_BANG_EQ] = ACTIONS(1950),
    [anon_sym_AMP_AMP] = ACTIONS(1952),
    [anon_sym_PIPE_PIPE] = ACTIONS(1954),
    [anon_sym_PLUS] = ACTIONS(1956),
    [anon_sym_DASH] = ACTIONS(1956),
    [anon_sym_STAR] = ACTIONS(1958),
    [anon_sym_SLASH] = ACTIONS(1960),
    [anon_sym_AMP] = ACTIONS(1962),
    [anon_sym_PIPE] = ACTIONS(1964),
    [anon_sym_CARET] = ACTIONS(1954),
    [anon_sym_PERCENT] = ACTIONS(1958),
    [anon_sym_LT_LT] = ACTIONS(1958),
    [anon_sym_GT_GT] = ACTIONS(1960),
    [anon_sym_GT_GT_GT] = ACTIONS(1958),
    [anon_sym_QMARK] = ACTIONS(1966),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(2078),
    [sym_comment] = ACTIONS(58),
  },
  [974] = {
    [sym_type_arguments] = STATE(1040),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(2080),
    [sym_comment] = ACTIONS(58),
  },
  [975] = {
    [sym_type_arguments] = STATE(1042),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(2082),
    [sym_comment] = ACTIONS(58),
  },
  [976] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1044),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2084),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [977] = {
    [anon_sym_LPAREN] = ACTIONS(2086),
    [sym_comment] = ACTIONS(58),
  },
  [978] = {
    [aux_sym_type_arguments_repeat1] = STATE(1047),
    [anon_sym_GT] = ACTIONS(2088),
    [anon_sym_COMMA] = ACTIONS(617),
    [sym_comment] = ACTIONS(58),
  },
  [979] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1048),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2072),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [980] = {
    [anon_sym_LPAREN] = ACTIONS(2090),
    [sym_comment] = ACTIONS(58),
  },
  [981] = {
    [anon_sym_DOT] = ACTIONS(2092),
    [anon_sym_LBRACK] = ACTIONS(2092),
    [anon_sym_COLON_COLON] = ACTIONS(2092),
    [sym_comment] = ACTIONS(58),
  },
  [982] = {
    [anon_sym_DOT] = ACTIONS(2094),
    [anon_sym_LBRACK] = ACTIONS(2094),
    [anon_sym_COLON_COLON] = ACTIONS(2094),
    [sym_comment] = ACTIONS(58),
  },
  [983] = {
    [sym_class_body] = STATE(1050),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [sym_comment] = ACTIONS(58),
  },
  [984] = {
    [anon_sym_SEMI] = ACTIONS(1630),
    [anon_sym_LT] = ACTIONS(1630),
    [anon_sym_LBRACE] = ACTIONS(1630),
    [anon_sym_RBRACE] = ACTIONS(1630),
    [anon_sym_default] = ACTIONS(1632),
    [anon_sym_synchronized] = ACTIONS(1632),
    [anon_sym_boolean] = ACTIONS(1632),
    [anon_sym_byte] = ACTIONS(1632),
    [anon_sym_short] = ACTIONS(1632),
    [anon_sym_int] = ACTIONS(1632),
    [anon_sym_long] = ACTIONS(1632),
    [anon_sym_char] = ACTIONS(1632),
    [anon_sym_float] = ACTIONS(1632),
    [anon_sym_double] = ACTIONS(1632),
    [anon_sym_AT] = ACTIONS(1630),
    [anon_sym_static] = ACTIONS(1632),
    [anon_sym_class] = ACTIONS(1632),
    [anon_sym_public] = ACTIONS(1632),
    [anon_sym_protected] = ACTIONS(1632),
    [anon_sym_private] = ACTIONS(1632),
    [anon_sym_abstract] = ACTIONS(1632),
    [anon_sym_final] = ACTIONS(1632),
    [anon_sym_strictfp] = ACTIONS(1632),
    [anon_sym_native] = ACTIONS(1632),
    [anon_sym_interface] = ACTIONS(1632),
    [sym_identifier] = ACTIONS(1634),
    [sym_comment] = ACTIONS(58),
  },
  [985] = {
    [anon_sym_DOT] = ACTIONS(2010),
    [anon_sym_AT] = ACTIONS(2010),
    [sym_identifier] = ACTIONS(2096),
    [sym_comment] = ACTIONS(58),
  },
  [986] = {
    [anon_sym_GT] = ACTIONS(1325),
    [anon_sym_LT] = ACTIONS(1325),
    [anon_sym_EQ_EQ] = ACTIONS(1327),
    [anon_sym_GT_EQ] = ACTIONS(1327),
    [anon_sym_LT_EQ] = ACTIONS(1327),
    [anon_sym_BANG_EQ] = ACTIONS(1327),
    [anon_sym_AMP_AMP] = ACTIONS(1329),
    [anon_sym_PIPE_PIPE] = ACTIONS(1331),
    [anon_sym_PLUS] = ACTIONS(1333),
    [anon_sym_DASH] = ACTIONS(1333),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1337),
    [anon_sym_AMP] = ACTIONS(1339),
    [anon_sym_PIPE] = ACTIONS(1341),
    [anon_sym_CARET] = ACTIONS(1331),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1337),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(2098),
    [anon_sym_QMARK] = ACTIONS(1345),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [987] = {
    [anon_sym_RBRACE] = ACTIONS(2100),
    [anon_sym_default] = ACTIONS(2100),
    [anon_sym_synchronized] = ACTIONS(2100),
    [anon_sym_if] = ACTIONS(2100),
    [anon_sym_AT] = ACTIONS(2100),
    [anon_sym_static] = ACTIONS(2100),
    [anon_sym_class] = ACTIONS(2100),
    [anon_sym_public] = ACTIONS(2100),
    [anon_sym_protected] = ACTIONS(2100),
    [anon_sym_private] = ACTIONS(2100),
    [anon_sym_abstract] = ACTIONS(2100),
    [anon_sym_final] = ACTIONS(2100),
    [anon_sym_strictfp] = ACTIONS(2100),
    [anon_sym_native] = ACTIONS(2100),
    [sym_comment] = ACTIONS(58),
  },
  [988] = {
    [anon_sym_GT] = ACTIONS(1325),
    [anon_sym_LT] = ACTIONS(1325),
    [anon_sym_EQ_EQ] = ACTIONS(1327),
    [anon_sym_GT_EQ] = ACTIONS(1327),
    [anon_sym_LT_EQ] = ACTIONS(1327),
    [anon_sym_BANG_EQ] = ACTIONS(1327),
    [anon_sym_AMP_AMP] = ACTIONS(1329),
    [anon_sym_PIPE_PIPE] = ACTIONS(1331),
    [anon_sym_PLUS] = ACTIONS(1333),
    [anon_sym_DASH] = ACTIONS(1333),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1337),
    [anon_sym_AMP] = ACTIONS(1339),
    [anon_sym_PIPE] = ACTIONS(1341),
    [anon_sym_CARET] = ACTIONS(1331),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1337),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(1283),
    [anon_sym_QMARK] = ACTIONS(1345),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [989] = {
    [anon_sym_RBRACE] = ACTIONS(1820),
    [anon_sym_default] = ACTIONS(1820),
    [anon_sym_synchronized] = ACTIONS(1820),
    [anon_sym_if] = ACTIONS(1820),
    [anon_sym_AT] = ACTIONS(1820),
    [anon_sym_static] = ACTIONS(1820),
    [anon_sym_class] = ACTIONS(1820),
    [anon_sym_public] = ACTIONS(1820),
    [anon_sym_protected] = ACTIONS(1820),
    [anon_sym_private] = ACTIONS(1820),
    [anon_sym_abstract] = ACTIONS(1820),
    [anon_sym_final] = ACTIONS(1820),
    [anon_sym_strictfp] = ACTIONS(1820),
    [anon_sym_native] = ACTIONS(1820),
    [sym_comment] = ACTIONS(58),
  },
  [990] = {
    [sym__expression] = STATE(1052),
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
  [991] = {
    [anon_sym_SEMI] = ACTIONS(2102),
    [sym_comment] = ACTIONS(58),
  },
  [992] = {
    [anon_sym_SEMI] = ACTIONS(1421),
    [anon_sym_PIPE_PIPE] = ACTIONS(2104),
    [anon_sym_QMARK] = ACTIONS(2106),
    [sym_comment] = ACTIONS(58),
  },
  [993] = {
    [anon_sym_SEMI] = ACTIONS(1427),
    [anon_sym_AMP_AMP] = ACTIONS(2108),
    [anon_sym_PIPE_PIPE] = ACTIONS(1427),
    [anon_sym_QMARK] = ACTIONS(1427),
    [sym_comment] = ACTIONS(58),
  },
  [994] = {
    [anon_sym_SEMI] = ACTIONS(1429),
    [anon_sym_AMP_AMP] = ACTIONS(1429),
    [anon_sym_PIPE_PIPE] = ACTIONS(1429),
    [anon_sym_PIPE] = ACTIONS(2110),
    [anon_sym_QMARK] = ACTIONS(1429),
    [sym_comment] = ACTIONS(58),
  },
  [995] = {
    [anon_sym_SEMI] = ACTIONS(1433),
    [anon_sym_AMP_AMP] = ACTIONS(1433),
    [anon_sym_PIPE_PIPE] = ACTIONS(1433),
    [anon_sym_PIPE] = ACTIONS(1435),
    [anon_sym_CARET] = ACTIONS(2112),
    [anon_sym_QMARK] = ACTIONS(1433),
    [sym_comment] = ACTIONS(58),
  },
  [996] = {
    [anon_sym_SEMI] = ACTIONS(1447),
    [anon_sym_LT] = ACTIONS(2114),
    [anon_sym_EQ_EQ] = ACTIONS(1445),
    [anon_sym_BANG_EQ] = ACTIONS(1445),
    [anon_sym_AMP_AMP] = ACTIONS(1447),
    [anon_sym_PIPE_PIPE] = ACTIONS(1447),
    [anon_sym_PIPE] = ACTIONS(1449),
    [anon_sym_CARET] = ACTIONS(1447),
    [anon_sym_QMARK] = ACTIONS(1447),
    [sym_comment] = ACTIONS(58),
  },
  [997] = {
    [anon_sym_EQ_EQ] = ACTIONS(2116),
    [anon_sym_BANG_EQ] = ACTIONS(2116),
    [sym_comment] = ACTIONS(58),
  },
  [998] = {
    [anon_sym_SEMI] = ACTIONS(1455),
    [anon_sym_LT] = ACTIONS(1453),
    [anon_sym_EQ_EQ] = ACTIONS(1455),
    [anon_sym_BANG_EQ] = ACTIONS(1455),
    [anon_sym_AMP_AMP] = ACTIONS(1455),
    [anon_sym_PIPE_PIPE] = ACTIONS(1455),
    [anon_sym_PIPE] = ACTIONS(1453),
    [anon_sym_CARET] = ACTIONS(1455),
    [anon_sym_LT_LT] = ACTIONS(2118),
    [anon_sym_GT_GT] = ACTIONS(2120),
    [anon_sym_GT_GT_GT] = ACTIONS(2118),
    [anon_sym_QMARK] = ACTIONS(1455),
    [sym_comment] = ACTIONS(58),
  },
  [999] = {
    [anon_sym_SEMI] = ACTIONS(1463),
    [anon_sym_LT] = ACTIONS(1461),
    [anon_sym_EQ_EQ] = ACTIONS(1463),
    [anon_sym_BANG_EQ] = ACTIONS(1463),
    [anon_sym_AMP_AMP] = ACTIONS(1463),
    [anon_sym_PIPE_PIPE] = ACTIONS(1463),
    [anon_sym_PLUS] = ACTIONS(2122),
    [anon_sym_DASH] = ACTIONS(2122),
    [anon_sym_PIPE] = ACTIONS(1461),
    [anon_sym_CARET] = ACTIONS(1463),
    [anon_sym_LT_LT] = ACTIONS(1463),
    [anon_sym_GT_GT] = ACTIONS(1461),
    [anon_sym_GT_GT_GT] = ACTIONS(1463),
    [anon_sym_QMARK] = ACTIONS(1463),
    [sym_comment] = ACTIONS(58),
  },
  [1000] = {
    [anon_sym_SEMI] = ACTIONS(1469),
    [anon_sym_LT] = ACTIONS(1467),
    [anon_sym_EQ_EQ] = ACTIONS(1469),
    [anon_sym_BANG_EQ] = ACTIONS(1469),
    [anon_sym_AMP_AMP] = ACTIONS(1469),
    [anon_sym_PIPE_PIPE] = ACTIONS(1469),
    [anon_sym_PLUS] = ACTIONS(1469),
    [anon_sym_DASH] = ACTIONS(1469),
    [anon_sym_STAR] = ACTIONS(2124),
    [anon_sym_SLASH] = ACTIONS(2126),
    [anon_sym_PIPE] = ACTIONS(1467),
    [anon_sym_CARET] = ACTIONS(1469),
    [anon_sym_PERCENT] = ACTIONS(2124),
    [anon_sym_LT_LT] = ACTIONS(1469),
    [anon_sym_GT_GT] = ACTIONS(1467),
    [anon_sym_GT_GT_GT] = ACTIONS(1469),
    [anon_sym_QMARK] = ACTIONS(1469),
    [sym_comment] = ACTIONS(58),
  },
  [1001] = {
    [anon_sym_RBRACE] = ACTIONS(2128),
    [anon_sym_default] = ACTIONS(2130),
    [anon_sym_synchronized] = ACTIONS(2130),
    [anon_sym_boolean] = ACTIONS(2130),
    [anon_sym_byte] = ACTIONS(2130),
    [anon_sym_short] = ACTIONS(2130),
    [anon_sym_int] = ACTIONS(2130),
    [anon_sym_long] = ACTIONS(2130),
    [anon_sym_char] = ACTIONS(2130),
    [anon_sym_float] = ACTIONS(2130),
    [anon_sym_double] = ACTIONS(2130),
    [anon_sym_AT] = ACTIONS(2128),
    [anon_sym_static] = ACTIONS(2130),
    [anon_sym_class] = ACTIONS(2130),
    [anon_sym_public] = ACTIONS(2130),
    [anon_sym_protected] = ACTIONS(2130),
    [anon_sym_private] = ACTIONS(2130),
    [anon_sym_abstract] = ACTIONS(2130),
    [anon_sym_final] = ACTIONS(2130),
    [anon_sym_strictfp] = ACTIONS(2130),
    [anon_sym_native] = ACTIONS(2130),
    [anon_sym_interface] = ACTIONS(2130),
    [sym_identifier] = ACTIONS(2132),
    [sym_comment] = ACTIONS(58),
  },
  [1002] = {
    [sym__semicolon] = STATE(1063),
    [anon_sym_SEMI] = ACTIONS(579),
    [sym_comment] = ACTIONS(58),
  },
  [1003] = {
    [sym__semicolon] = STATE(1063),
    [sym_default_value] = STATE(1064),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_default] = ACTIONS(1832),
    [sym_comment] = ACTIONS(58),
  },
  [1004] = {
    [sym__expression] = STATE(1065),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1005] = {
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [anon_sym_BANG_EQ] = ACTIONS(627),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(2134),
    [anon_sym_SLASH] = ACTIONS(2136),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(2134),
    [anon_sym_LT_LT] = ACTIONS(2134),
    [anon_sym_GT_GT] = ACTIONS(2136),
    [anon_sym_GT_GT_GT] = ACTIONS(2134),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [1006] = {
    [anon_sym_GT] = ACTIONS(1838),
    [anon_sym_LT] = ACTIONS(1838),
    [anon_sym_EQ_EQ] = ACTIONS(1840),
    [anon_sym_GT_EQ] = ACTIONS(1840),
    [anon_sym_LT_EQ] = ACTIONS(1840),
    [anon_sym_BANG_EQ] = ACTIONS(1840),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(2138),
    [anon_sym_DASH] = ACTIONS(2138),
    [anon_sym_STAR] = ACTIONS(2134),
    [anon_sym_SLASH] = ACTIONS(2136),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(2134),
    [anon_sym_LT_LT] = ACTIONS(2134),
    [anon_sym_GT_GT] = ACTIONS(2136),
    [anon_sym_GT_GT_GT] = ACTIONS(2134),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [1007] = {
    [anon_sym_GT] = ACTIONS(1838),
    [anon_sym_LT] = ACTIONS(1838),
    [anon_sym_EQ_EQ] = ACTIONS(1840),
    [anon_sym_GT_EQ] = ACTIONS(1840),
    [anon_sym_LT_EQ] = ACTIONS(1840),
    [anon_sym_BANG_EQ] = ACTIONS(1840),
    [anon_sym_AMP_AMP] = ACTIONS(2140),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(2138),
    [anon_sym_DASH] = ACTIONS(2138),
    [anon_sym_STAR] = ACTIONS(2134),
    [anon_sym_SLASH] = ACTIONS(2136),
    [anon_sym_AMP] = ACTIONS(1842),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(2134),
    [anon_sym_LT_LT] = ACTIONS(2134),
    [anon_sym_GT_GT] = ACTIONS(2136),
    [anon_sym_GT_GT_GT] = ACTIONS(2134),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [1008] = {
    [anon_sym_GT] = ACTIONS(1838),
    [anon_sym_LT] = ACTIONS(1838),
    [anon_sym_EQ_EQ] = ACTIONS(1840),
    [anon_sym_GT_EQ] = ACTIONS(1840),
    [anon_sym_LT_EQ] = ACTIONS(1840),
    [anon_sym_BANG_EQ] = ACTIONS(1840),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(2134),
    [anon_sym_SLASH] = ACTIONS(2136),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(2134),
    [anon_sym_LT_LT] = ACTIONS(2134),
    [anon_sym_GT_GT] = ACTIONS(2136),
    [anon_sym_GT_GT_GT] = ACTIONS(2134),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [1009] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(2142),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1010] = {
    [anon_sym_SEMI] = ACTIONS(2144),
    [anon_sym_RPAREN] = ACTIONS(2144),
    [anon_sym_COMMA] = ACTIONS(2144),
    [anon_sym_RBRACE] = ACTIONS(2144),
    [sym_comment] = ACTIONS(58),
  },
  [1011] = {
    [anon_sym_COMMA] = ACTIONS(2146),
    [anon_sym_RBRACE] = ACTIONS(2146),
    [sym_comment] = ACTIONS(58),
  },
  [1012] = {
    [sym_lambda_expression] = STATE(1013),
    [sym__lambda_parameters] = STATE(28),
    [sym_unary_expression] = STATE(554),
    [sym_conditional_expression] = STATE(1013),
    [sym_conditional_or_expression] = STATE(692),
    [sym_conditional_and_expression] = STATE(693),
    [sym_inclusive_or_expression] = STATE(694),
    [sym_exclusive_or_expression] = STATE(695),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(696),
    [sym_equality_expression] = STATE(697),
    [sym_shift_expression] = STATE(698),
    [sym_additive_expression] = STATE(699),
    [sym_multiplicative_expression] = STATE(700),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1013] = {
    [anon_sym_SEMI] = ACTIONS(2148),
    [anon_sym_RPAREN] = ACTIONS(2148),
    [anon_sym_COMMA] = ACTIONS(2148),
    [anon_sym_RBRACE] = ACTIONS(2148),
    [sym_comment] = ACTIONS(58),
  },
  [1014] = {
    [anon_sym_SEMI] = ACTIONS(2150),
    [anon_sym_COMMA] = ACTIONS(2150),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_comment] = ACTIONS(58),
  },
  [1015] = {
    [anon_sym_GT] = ACTIONS(1644),
    [anon_sym_LT] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1646),
    [anon_sym_LT_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_AMP_AMP] = ACTIONS(1902),
    [anon_sym_PIPE_PIPE] = ACTIONS(1904),
    [anon_sym_PLUS] = ACTIONS(1906),
    [anon_sym_DASH] = ACTIONS(1906),
    [anon_sym_STAR] = ACTIONS(1908),
    [anon_sym_SLASH] = ACTIONS(1910),
    [anon_sym_AMP] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1912),
    [anon_sym_CARET] = ACTIONS(1904),
    [anon_sym_PERCENT] = ACTIONS(1908),
    [anon_sym_LT_LT] = ACTIONS(1908),
    [anon_sym_GT_GT] = ACTIONS(1910),
    [anon_sym_GT_GT_GT] = ACTIONS(1908),
    [anon_sym_RPAREN] = ACTIONS(2152),
    [anon_sym_COMMA] = ACTIONS(2152),
    [anon_sym_QMARK] = ACTIONS(1918),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1016] = {
    [sym__expression] = STATE(1067),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1017] = {
    [anon_sym_RBRACE] = ACTIONS(2154),
    [anon_sym_default] = ACTIONS(2154),
    [anon_sym_synchronized] = ACTIONS(2154),
    [anon_sym_if] = ACTIONS(2154),
    [anon_sym_AT] = ACTIONS(2154),
    [anon_sym_static] = ACTIONS(2154),
    [anon_sym_class] = ACTIONS(2154),
    [anon_sym_public] = ACTIONS(2154),
    [anon_sym_protected] = ACTIONS(2154),
    [anon_sym_private] = ACTIONS(2154),
    [anon_sym_abstract] = ACTIONS(2154),
    [anon_sym_final] = ACTIONS(2154),
    [anon_sym_strictfp] = ACTIONS(2154),
    [anon_sym_native] = ACTIONS(2154),
    [sym_comment] = ACTIONS(58),
  },
  [1018] = {
    [sym_type_arguments] = STATE(775),
    [anon_sym_LT] = ACTIONS(2156),
    [anon_sym_LPAREN] = ACTIONS(2159),
    [anon_sym_DOT] = ACTIONS(2161),
    [anon_sym_LBRACK] = ACTIONS(1598),
    [anon_sym_AT] = ACTIONS(1598),
    [anon_sym_LT_GT] = ACTIONS(2159),
    [sym_comment] = ACTIONS(58),
  },
  [1019] = {
    [anon_sym_LT] = ACTIONS(2164),
    [anon_sym_LPAREN] = ACTIONS(2159),
    [anon_sym_DOT] = ACTIONS(2159),
    [anon_sym_LT_GT] = ACTIONS(2159),
    [sym_comment] = ACTIONS(58),
  },
  [1020] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2166),
    [sym_comment] = ACTIONS(58),
  },
  [1021] = {
    [anon_sym_LT] = ACTIONS(2168),
    [anon_sym_LPAREN] = ACTIONS(2049),
    [anon_sym_DOT] = ACTIONS(2049),
    [anon_sym_LT_GT] = ACTIONS(2049),
    [sym_comment] = ACTIONS(58),
  },
  [1022] = {
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2056),
    [sym_comment] = ACTIONS(58),
  },
  [1023] = {
    [sym_class_body] = STATE(1069),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_DOT] = ACTIONS(2170),
    [anon_sym_LBRACK] = ACTIONS(2170),
    [anon_sym_COLON_COLON] = ACTIONS(2170),
    [sym_comment] = ACTIONS(58),
  },
  [1024] = {
    [anon_sym_RPAREN] = ACTIONS(2172),
    [sym_comment] = ACTIONS(58),
  },
  [1025] = {
    [anon_sym_RBRACE] = ACTIONS(2174),
    [sym_comment] = ACTIONS(58),
  },
  [1026] = {
    [anon_sym_COMMA] = ACTIONS(2176),
    [anon_sym_RBRACE] = ACTIONS(2176),
    [anon_sym_DOT] = ACTIONS(2176),
    [anon_sym_COLON_COLON] = ACTIONS(2176),
    [sym_comment] = ACTIONS(58),
  },
  [1027] = {
    [anon_sym_GT] = ACTIONS(1838),
    [anon_sym_LT] = ACTIONS(1838),
    [anon_sym_EQ_EQ] = ACTIONS(1840),
    [anon_sym_GT_EQ] = ACTIONS(1840),
    [anon_sym_LT_EQ] = ACTIONS(1840),
    [anon_sym_BANG_EQ] = ACTIONS(1840),
    [anon_sym_AMP_AMP] = ACTIONS(2140),
    [anon_sym_PIPE_PIPE] = ACTIONS(2178),
    [anon_sym_PLUS] = ACTIONS(2138),
    [anon_sym_DASH] = ACTIONS(2138),
    [anon_sym_STAR] = ACTIONS(2134),
    [anon_sym_SLASH] = ACTIONS(2136),
    [anon_sym_AMP] = ACTIONS(1842),
    [anon_sym_PIPE] = ACTIONS(2180),
    [anon_sym_CARET] = ACTIONS(2178),
    [anon_sym_PERCENT] = ACTIONS(2134),
    [anon_sym_LT_LT] = ACTIONS(2134),
    [anon_sym_GT_GT] = ACTIONS(2136),
    [anon_sym_GT_GT_GT] = ACTIONS(2134),
    [anon_sym_COMMA] = ACTIONS(2182),
    [anon_sym_QMARK] = ACTIONS(2184),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(2182),
    [sym_comment] = ACTIONS(58),
  },
  [1028] = {
    [aux_sym_array_initializer_repeat1] = STATE(1073),
    [anon_sym_COMMA] = ACTIONS(2186),
    [anon_sym_RBRACE] = ACTIONS(2174),
    [sym_comment] = ACTIONS(58),
  },
  [1029] = {
    [anon_sym_COMMA] = ACTIONS(2182),
    [anon_sym_RBRACE] = ACTIONS(2182),
    [sym_comment] = ACTIONS(58),
  },
  [1030] = {
    [anon_sym_DOT] = ACTIONS(2170),
    [anon_sym_LBRACK] = ACTIONS(2170),
    [anon_sym_COLON_COLON] = ACTIONS(2170),
    [sym_comment] = ACTIONS(58),
  },
  [1031] = {
    [anon_sym_LPAREN] = ACTIONS(2188),
    [sym_comment] = ACTIONS(58),
  },
  [1032] = {
    [sym__semicolon] = STATE(1074),
    [anon_sym_SEMI] = ACTIONS(721),
    [sym_comment] = ACTIONS(58),
  },
  [1033] = {
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(627),
    [anon_sym_GT_EQ] = ACTIONS(627),
    [anon_sym_LT_EQ] = ACTIONS(627),
    [anon_sym_BANG_EQ] = ACTIONS(627),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(1958),
    [anon_sym_SLASH] = ACTIONS(1960),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1958),
    [anon_sym_LT_LT] = ACTIONS(1958),
    [anon_sym_GT_GT] = ACTIONS(1960),
    [anon_sym_GT_GT_GT] = ACTIONS(1958),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [1034] = {
    [anon_sym_GT] = ACTIONS(1948),
    [anon_sym_LT] = ACTIONS(1948),
    [anon_sym_EQ_EQ] = ACTIONS(1950),
    [anon_sym_GT_EQ] = ACTIONS(1950),
    [anon_sym_LT_EQ] = ACTIONS(1950),
    [anon_sym_BANG_EQ] = ACTIONS(1950),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(1956),
    [anon_sym_DASH] = ACTIONS(1956),
    [anon_sym_STAR] = ACTIONS(1958),
    [anon_sym_SLASH] = ACTIONS(1960),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1958),
    [anon_sym_LT_LT] = ACTIONS(1958),
    [anon_sym_GT_GT] = ACTIONS(1960),
    [anon_sym_GT_GT_GT] = ACTIONS(1958),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [1035] = {
    [anon_sym_GT] = ACTIONS(1948),
    [anon_sym_LT] = ACTIONS(1948),
    [anon_sym_EQ_EQ] = ACTIONS(1950),
    [anon_sym_GT_EQ] = ACTIONS(1950),
    [anon_sym_LT_EQ] = ACTIONS(1950),
    [anon_sym_BANG_EQ] = ACTIONS(1950),
    [anon_sym_AMP_AMP] = ACTIONS(1952),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(1956),
    [anon_sym_DASH] = ACTIONS(1956),
    [anon_sym_STAR] = ACTIONS(1958),
    [anon_sym_SLASH] = ACTIONS(1960),
    [anon_sym_AMP] = ACTIONS(1962),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1958),
    [anon_sym_LT_LT] = ACTIONS(1958),
    [anon_sym_GT_GT] = ACTIONS(1960),
    [anon_sym_GT_GT_GT] = ACTIONS(1958),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [1036] = {
    [anon_sym_GT] = ACTIONS(1948),
    [anon_sym_LT] = ACTIONS(1948),
    [anon_sym_EQ_EQ] = ACTIONS(1950),
    [anon_sym_GT_EQ] = ACTIONS(1950),
    [anon_sym_LT_EQ] = ACTIONS(1950),
    [anon_sym_BANG_EQ] = ACTIONS(1950),
    [anon_sym_AMP_AMP] = ACTIONS(627),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(1958),
    [anon_sym_SLASH] = ACTIONS(1960),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(1958),
    [anon_sym_LT_LT] = ACTIONS(1958),
    [anon_sym_GT_GT] = ACTIONS(1960),
    [anon_sym_GT_GT_GT] = ACTIONS(1958),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(627),
    [sym_comment] = ACTIONS(58),
  },
  [1037] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(2190),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1038] = {
    [anon_sym_DOT] = ACTIONS(2192),
    [anon_sym_LBRACK] = ACTIONS(2192),
    [anon_sym_AT] = ACTIONS(2192),
    [anon_sym_COLON_COLON] = ACTIONS(2192),
    [sym_comment] = ACTIONS(58),
  },
  [1039] = {
    [anon_sym_LPAREN] = ACTIONS(2194),
    [anon_sym_DOT] = ACTIONS(2196),
    [anon_sym_LBRACK] = ACTIONS(2196),
    [anon_sym_COLON_COLON] = ACTIONS(2196),
    [sym_comment] = ACTIONS(58),
  },
  [1040] = {
    [sym_identifier] = ACTIONS(2198),
    [sym_comment] = ACTIONS(58),
  },
  [1041] = {
    [anon_sym_DOT] = ACTIONS(2200),
    [anon_sym_LBRACK] = ACTIONS(2200),
    [anon_sym_COLON_COLON] = ACTIONS(2200),
    [sym_comment] = ACTIONS(58),
  },
  [1042] = {
    [sym_identifier] = ACTIONS(2202),
    [sym_comment] = ACTIONS(58),
  },
  [1043] = {
    [anon_sym_DOT] = ACTIONS(2204),
    [anon_sym_LBRACK] = ACTIONS(2204),
    [anon_sym_COLON_COLON] = ACTIONS(2204),
    [sym_comment] = ACTIONS(58),
  },
  [1044] = {
    [anon_sym_RPAREN] = ACTIONS(2206),
    [sym_comment] = ACTIONS(58),
  },
  [1045] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1080),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2206),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1046] = {
    [anon_sym_super] = ACTIONS(967),
    [sym_identifier] = ACTIONS(1069),
    [sym_comment] = ACTIONS(58),
  },
  [1047] = {
    [anon_sym_GT] = ACTIONS(2208),
    [anon_sym_COMMA] = ACTIONS(971),
    [sym_comment] = ACTIONS(58),
  },
  [1048] = {
    [anon_sym_RPAREN] = ACTIONS(2210),
    [sym_comment] = ACTIONS(58),
  },
  [1049] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1083),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2210),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1050] = {
    [anon_sym_SEMI] = ACTIONS(1820),
    [anon_sym_LT] = ACTIONS(1820),
    [anon_sym_LBRACE] = ACTIONS(1820),
    [anon_sym_RBRACE] = ACTIONS(1820),
    [anon_sym_default] = ACTIONS(1822),
    [anon_sym_synchronized] = ACTIONS(1822),
    [anon_sym_boolean] = ACTIONS(1822),
    [anon_sym_byte] = ACTIONS(1822),
    [anon_sym_short] = ACTIONS(1822),
    [anon_sym_int] = ACTIONS(1822),
    [anon_sym_long] = ACTIONS(1822),
    [anon_sym_char] = ACTIONS(1822),
    [anon_sym_float] = ACTIONS(1822),
    [anon_sym_double] = ACTIONS(1822),
    [anon_sym_AT] = ACTIONS(1820),
    [anon_sym_static] = ACTIONS(1822),
    [anon_sym_class] = ACTIONS(1822),
    [anon_sym_public] = ACTIONS(1822),
    [anon_sym_protected] = ACTIONS(1822),
    [anon_sym_private] = ACTIONS(1822),
    [anon_sym_abstract] = ACTIONS(1822),
    [anon_sym_final] = ACTIONS(1822),
    [anon_sym_strictfp] = ACTIONS(1822),
    [anon_sym_native] = ACTIONS(1822),
    [anon_sym_interface] = ACTIONS(1822),
    [sym_identifier] = ACTIONS(1824),
    [sym_comment] = ACTIONS(58),
  },
  [1051] = {
    [sym_statement] = STATE(790),
    [sym_statement_no_short_if] = STATE(1084),
    [sym_if_then_statement] = STATE(225),
    [sym_if_then_else_statement] = STATE(225),
    [sym_if_then_else_statement_no_short_if] = STATE(792),
    [anon_sym_if] = ACTIONS(1622),
    [sym_comment] = ACTIONS(58),
  },
  [1052] = {
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_GT_GT_GT] = ACTIONS(321),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1053] = {
    [sym_unary_expression] = STATE(554),
    [sym_conditional_and_expression] = STATE(1085),
    [sym_inclusive_or_expression] = STATE(994),
    [sym_exclusive_or_expression] = STATE(995),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(996),
    [sym_equality_expression] = STATE(997),
    [sym_shift_expression] = STATE(998),
    [sym_additive_expression] = STATE(999),
    [sym_multiplicative_expression] = STATE(1000),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [1054] = {
    [sym__expression] = STATE(1086),
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
  [1055] = {
    [sym_unary_expression] = STATE(554),
    [sym_inclusive_or_expression] = STATE(1087),
    [sym_exclusive_or_expression] = STATE(995),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(996),
    [sym_equality_expression] = STATE(997),
    [sym_shift_expression] = STATE(998),
    [sym_additive_expression] = STATE(999),
    [sym_multiplicative_expression] = STATE(1000),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [1056] = {
    [sym_unary_expression] = STATE(554),
    [sym_exclusive_or_expression] = STATE(1088),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(996),
    [sym_equality_expression] = STATE(997),
    [sym_shift_expression] = STATE(998),
    [sym_additive_expression] = STATE(999),
    [sym_multiplicative_expression] = STATE(1000),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [1057] = {
    [sym_unary_expression] = STATE(554),
    [sym_and_expression] = STATE(830),
    [sym_relational_expression] = STATE(996),
    [sym_equality_expression] = STATE(997),
    [sym_shift_expression] = STATE(998),
    [sym_additive_expression] = STATE(999),
    [sym_multiplicative_expression] = STATE(1000),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [1058] = {
    [sym_unary_expression] = STATE(554),
    [sym_shift_expression] = STATE(1089),
    [sym_additive_expression] = STATE(999),
    [sym_multiplicative_expression] = STATE(1000),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [1059] = {
    [sym_unary_expression] = STATE(554),
    [sym_relational_expression] = STATE(1090),
    [sym_shift_expression] = STATE(998),
    [sym_additive_expression] = STATE(999),
    [sym_multiplicative_expression] = STATE(1000),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [1060] = {
    [sym_unary_expression] = STATE(554),
    [sym_additive_expression] = STATE(1091),
    [sym_multiplicative_expression] = STATE(1000),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [1061] = {
    [sym_unary_expression] = STATE(554),
    [sym_multiplicative_expression] = STATE(1092),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [1062] = {
    [sym_unary_expression] = STATE(835),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [1063] = {
    [anon_sym_RBRACE] = ACTIONS(2212),
    [anon_sym_default] = ACTIONS(2214),
    [anon_sym_synchronized] = ACTIONS(2214),
    [anon_sym_boolean] = ACTIONS(2214),
    [anon_sym_byte] = ACTIONS(2214),
    [anon_sym_short] = ACTIONS(2214),
    [anon_sym_int] = ACTIONS(2214),
    [anon_sym_long] = ACTIONS(2214),
    [anon_sym_char] = ACTIONS(2214),
    [anon_sym_float] = ACTIONS(2214),
    [anon_sym_double] = ACTIONS(2214),
    [anon_sym_AT] = ACTIONS(2212),
    [anon_sym_static] = ACTIONS(2214),
    [anon_sym_class] = ACTIONS(2214),
    [anon_sym_public] = ACTIONS(2214),
    [anon_sym_protected] = ACTIONS(2214),
    [anon_sym_private] = ACTIONS(2214),
    [anon_sym_abstract] = ACTIONS(2214),
    [anon_sym_final] = ACTIONS(2214),
    [anon_sym_strictfp] = ACTIONS(2214),
    [anon_sym_native] = ACTIONS(2214),
    [anon_sym_interface] = ACTIONS(2214),
    [sym_identifier] = ACTIONS(2216),
    [sym_comment] = ACTIONS(58),
  },
  [1064] = {
    [sym__semicolon] = STATE(1093),
    [anon_sym_SEMI] = ACTIONS(579),
    [sym_comment] = ACTIONS(58),
  },
  [1065] = {
    [anon_sym_GT] = ACTIONS(1644),
    [anon_sym_LT] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1646),
    [anon_sym_LT_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_AMP_AMP] = ACTIONS(1902),
    [anon_sym_PIPE_PIPE] = ACTIONS(1904),
    [anon_sym_PLUS] = ACTIONS(1906),
    [anon_sym_DASH] = ACTIONS(1906),
    [anon_sym_STAR] = ACTIONS(1908),
    [anon_sym_SLASH] = ACTIONS(1910),
    [anon_sym_AMP] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1912),
    [anon_sym_CARET] = ACTIONS(1904),
    [anon_sym_PERCENT] = ACTIONS(1908),
    [anon_sym_LT_LT] = ACTIONS(1908),
    [anon_sym_GT_GT] = ACTIONS(1910),
    [anon_sym_GT_GT_GT] = ACTIONS(1908),
    [anon_sym_RPAREN] = ACTIONS(1283),
    [anon_sym_COMMA] = ACTIONS(1283),
    [anon_sym_QMARK] = ACTIONS(1918),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1066] = {
    [sym__expression] = STATE(1094),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1067] = {
    [anon_sym_GT] = ACTIONS(1644),
    [anon_sym_LT] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1646),
    [anon_sym_LT_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_AMP_AMP] = ACTIONS(1902),
    [anon_sym_PIPE_PIPE] = ACTIONS(1904),
    [anon_sym_PLUS] = ACTIONS(1906),
    [anon_sym_DASH] = ACTIONS(1906),
    [anon_sym_STAR] = ACTIONS(1908),
    [anon_sym_SLASH] = ACTIONS(1910),
    [anon_sym_AMP] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1912),
    [anon_sym_CARET] = ACTIONS(1904),
    [anon_sym_PERCENT] = ACTIONS(1908),
    [anon_sym_LT_LT] = ACTIONS(1908),
    [anon_sym_GT_GT] = ACTIONS(1910),
    [anon_sym_GT_GT_GT] = ACTIONS(1908),
    [anon_sym_RPAREN] = ACTIONS(2218),
    [anon_sym_COMMA] = ACTIONS(2218),
    [anon_sym_QMARK] = ACTIONS(1918),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1068] = {
    [anon_sym_LT] = ACTIONS(2220),
    [anon_sym_LPAREN] = ACTIONS(2222),
    [anon_sym_DOT] = ACTIONS(2222),
    [anon_sym_LT_GT] = ACTIONS(2222),
    [sym_comment] = ACTIONS(58),
  },
  [1069] = {
    [anon_sym_DOT] = ACTIONS(2224),
    [anon_sym_LBRACK] = ACTIONS(2224),
    [anon_sym_COLON_COLON] = ACTIONS(2224),
    [sym_comment] = ACTIONS(58),
  },
  [1070] = {
    [sym_class_body] = STATE(1095),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_DOT] = ACTIONS(2224),
    [anon_sym_LBRACK] = ACTIONS(2224),
    [anon_sym_COLON_COLON] = ACTIONS(2224),
    [sym_comment] = ACTIONS(58),
  },
  [1071] = {
    [anon_sym_COMMA] = ACTIONS(2226),
    [anon_sym_RBRACE] = ACTIONS(2226),
    [anon_sym_DOT] = ACTIONS(2226),
    [anon_sym_COLON_COLON] = ACTIONS(2226),
    [sym_comment] = ACTIONS(58),
  },
  [1072] = {
    [sym__expression] = STATE(1027),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_variable_initializer] = STATE(1097),
    [sym_array_initializer] = STATE(1029),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [anon_sym_LBRACE] = ACTIONS(1942),
    [anon_sym_RBRACE] = ACTIONS(2228),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1073] = {
    [anon_sym_COMMA] = ACTIONS(2230),
    [anon_sym_RBRACE] = ACTIONS(2228),
    [sym_comment] = ACTIONS(58),
  },
  [1074] = {
    [anon_sym_RBRACE] = ACTIONS(2232),
    [anon_sym_default] = ACTIONS(2232),
    [anon_sym_synchronized] = ACTIONS(2232),
    [anon_sym_if] = ACTIONS(2232),
    [anon_sym_AT] = ACTIONS(2232),
    [anon_sym_static] = ACTIONS(2232),
    [anon_sym_class] = ACTIONS(2232),
    [anon_sym_public] = ACTIONS(2232),
    [anon_sym_protected] = ACTIONS(2232),
    [anon_sym_private] = ACTIONS(2232),
    [anon_sym_abstract] = ACTIONS(2232),
    [anon_sym_final] = ACTIONS(2232),
    [anon_sym_strictfp] = ACTIONS(2232),
    [anon_sym_native] = ACTIONS(2232),
    [sym_comment] = ACTIONS(58),
  },
  [1075] = {
    [sym__expression] = STATE(1099),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1736),
    [anon_sym_TILDE] = ACTIONS(1736),
    [anon_sym_PLUS_PLUS] = ACTIONS(1738),
    [anon_sym_DASH_DASH] = ACTIONS(1738),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1076] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1101),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2234),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1077] = {
    [anon_sym_LPAREN] = ACTIONS(2236),
    [sym_comment] = ACTIONS(58),
  },
  [1078] = {
    [anon_sym_DOT] = ACTIONS(2238),
    [anon_sym_LBRACK] = ACTIONS(2238),
    [anon_sym_COLON_COLON] = ACTIONS(2238),
    [sym_comment] = ACTIONS(58),
  },
  [1079] = {
    [anon_sym_DOT] = ACTIONS(2240),
    [anon_sym_LBRACK] = ACTIONS(2240),
    [anon_sym_COLON_COLON] = ACTIONS(2240),
    [sym_comment] = ACTIONS(58),
  },
  [1080] = {
    [anon_sym_RPAREN] = ACTIONS(2234),
    [sym_comment] = ACTIONS(58),
  },
  [1081] = {
    [anon_sym_super] = ACTIONS(1279),
    [sym_identifier] = ACTIONS(1377),
    [sym_comment] = ACTIONS(58),
  },
  [1082] = {
    [sym__semicolon] = STATE(1103),
    [anon_sym_SEMI] = ACTIONS(721),
    [sym_comment] = ACTIONS(58),
  },
  [1083] = {
    [anon_sym_RPAREN] = ACTIONS(2242),
    [sym_comment] = ACTIONS(58),
  },
  [1084] = {
    [anon_sym_else] = ACTIONS(2244),
    [sym_comment] = ACTIONS(58),
  },
  [1085] = {
    [anon_sym_SEMI] = ACTIONS(1848),
    [anon_sym_AMP_AMP] = ACTIONS(2108),
    [anon_sym_PIPE_PIPE] = ACTIONS(1848),
    [anon_sym_QMARK] = ACTIONS(1848),
    [sym_comment] = ACTIONS(58),
  },
  [1086] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_EQ_EQ] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [anon_sym_CARET] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_GT_GT_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(2246),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1087] = {
    [anon_sym_SEMI] = ACTIONS(1852),
    [anon_sym_AMP_AMP] = ACTIONS(1852),
    [anon_sym_PIPE_PIPE] = ACTIONS(1852),
    [anon_sym_PIPE] = ACTIONS(2110),
    [anon_sym_QMARK] = ACTIONS(1852),
    [sym_comment] = ACTIONS(58),
  },
  [1088] = {
    [anon_sym_SEMI] = ACTIONS(1854),
    [anon_sym_AMP_AMP] = ACTIONS(1854),
    [anon_sym_PIPE_PIPE] = ACTIONS(1854),
    [anon_sym_PIPE] = ACTIONS(1856),
    [anon_sym_CARET] = ACTIONS(2112),
    [anon_sym_QMARK] = ACTIONS(1854),
    [sym_comment] = ACTIONS(58),
  },
  [1089] = {
    [anon_sym_SEMI] = ACTIONS(1864),
    [anon_sym_LT] = ACTIONS(1862),
    [anon_sym_EQ_EQ] = ACTIONS(1864),
    [anon_sym_BANG_EQ] = ACTIONS(1864),
    [anon_sym_AMP_AMP] = ACTIONS(1864),
    [anon_sym_PIPE_PIPE] = ACTIONS(1864),
    [anon_sym_PIPE] = ACTIONS(1862),
    [anon_sym_CARET] = ACTIONS(1864),
    [anon_sym_LT_LT] = ACTIONS(2118),
    [anon_sym_GT_GT] = ACTIONS(2120),
    [anon_sym_GT_GT_GT] = ACTIONS(2118),
    [anon_sym_QMARK] = ACTIONS(1864),
    [sym_comment] = ACTIONS(58),
  },
  [1090] = {
    [anon_sym_SEMI] = ACTIONS(1868),
    [anon_sym_LT] = ACTIONS(2114),
    [anon_sym_EQ_EQ] = ACTIONS(1866),
    [anon_sym_BANG_EQ] = ACTIONS(1866),
    [anon_sym_AMP_AMP] = ACTIONS(1868),
    [anon_sym_PIPE_PIPE] = ACTIONS(1868),
    [anon_sym_PIPE] = ACTIONS(1870),
    [anon_sym_CARET] = ACTIONS(1868),
    [anon_sym_QMARK] = ACTIONS(1868),
    [sym_comment] = ACTIONS(58),
  },
  [1091] = {
    [anon_sym_SEMI] = ACTIONS(1874),
    [anon_sym_LT] = ACTIONS(1872),
    [anon_sym_EQ_EQ] = ACTIONS(1874),
    [anon_sym_BANG_EQ] = ACTIONS(1874),
    [anon_sym_AMP_AMP] = ACTIONS(1874),
    [anon_sym_PIPE_PIPE] = ACTIONS(1874),
    [anon_sym_PLUS] = ACTIONS(2122),
    [anon_sym_DASH] = ACTIONS(2122),
    [anon_sym_PIPE] = ACTIONS(1872),
    [anon_sym_CARET] = ACTIONS(1874),
    [anon_sym_LT_LT] = ACTIONS(1874),
    [anon_sym_GT_GT] = ACTIONS(1872),
    [anon_sym_GT_GT_GT] = ACTIONS(1874),
    [anon_sym_QMARK] = ACTIONS(1874),
    [sym_comment] = ACTIONS(58),
  },
  [1092] = {
    [anon_sym_SEMI] = ACTIONS(1878),
    [anon_sym_LT] = ACTIONS(1876),
    [anon_sym_EQ_EQ] = ACTIONS(1878),
    [anon_sym_BANG_EQ] = ACTIONS(1878),
    [anon_sym_AMP_AMP] = ACTIONS(1878),
    [anon_sym_PIPE_PIPE] = ACTIONS(1878),
    [anon_sym_PLUS] = ACTIONS(1878),
    [anon_sym_DASH] = ACTIONS(1878),
    [anon_sym_STAR] = ACTIONS(2124),
    [anon_sym_SLASH] = ACTIONS(2126),
    [anon_sym_PIPE] = ACTIONS(1876),
    [anon_sym_CARET] = ACTIONS(1878),
    [anon_sym_PERCENT] = ACTIONS(2124),
    [anon_sym_LT_LT] = ACTIONS(1878),
    [anon_sym_GT_GT] = ACTIONS(1876),
    [anon_sym_GT_GT_GT] = ACTIONS(1878),
    [anon_sym_QMARK] = ACTIONS(1878),
    [sym_comment] = ACTIONS(58),
  },
  [1093] = {
    [anon_sym_RBRACE] = ACTIONS(2248),
    [anon_sym_default] = ACTIONS(2250),
    [anon_sym_synchronized] = ACTIONS(2250),
    [anon_sym_boolean] = ACTIONS(2250),
    [anon_sym_byte] = ACTIONS(2250),
    [anon_sym_short] = ACTIONS(2250),
    [anon_sym_int] = ACTIONS(2250),
    [anon_sym_long] = ACTIONS(2250),
    [anon_sym_char] = ACTIONS(2250),
    [anon_sym_float] = ACTIONS(2250),
    [anon_sym_double] = ACTIONS(2250),
    [anon_sym_AT] = ACTIONS(2248),
    [anon_sym_static] = ACTIONS(2250),
    [anon_sym_class] = ACTIONS(2250),
    [anon_sym_public] = ACTIONS(2250),
    [anon_sym_protected] = ACTIONS(2250),
    [anon_sym_private] = ACTIONS(2250),
    [anon_sym_abstract] = ACTIONS(2250),
    [anon_sym_final] = ACTIONS(2250),
    [anon_sym_strictfp] = ACTIONS(2250),
    [anon_sym_native] = ACTIONS(2250),
    [anon_sym_interface] = ACTIONS(2250),
    [sym_identifier] = ACTIONS(2252),
    [sym_comment] = ACTIONS(58),
  },
  [1094] = {
    [anon_sym_GT] = ACTIONS(1838),
    [anon_sym_LT] = ACTIONS(1838),
    [anon_sym_EQ_EQ] = ACTIONS(1840),
    [anon_sym_GT_EQ] = ACTIONS(1840),
    [anon_sym_LT_EQ] = ACTIONS(1840),
    [anon_sym_BANG_EQ] = ACTIONS(1840),
    [anon_sym_AMP_AMP] = ACTIONS(2140),
    [anon_sym_PIPE_PIPE] = ACTIONS(2178),
    [anon_sym_PLUS] = ACTIONS(2138),
    [anon_sym_DASH] = ACTIONS(2138),
    [anon_sym_STAR] = ACTIONS(2134),
    [anon_sym_SLASH] = ACTIONS(2136),
    [anon_sym_AMP] = ACTIONS(1842),
    [anon_sym_PIPE] = ACTIONS(2180),
    [anon_sym_CARET] = ACTIONS(2178),
    [anon_sym_PERCENT] = ACTIONS(2134),
    [anon_sym_LT_LT] = ACTIONS(2134),
    [anon_sym_GT_GT] = ACTIONS(2136),
    [anon_sym_GT_GT_GT] = ACTIONS(2134),
    [anon_sym_COMMA] = ACTIONS(1283),
    [anon_sym_QMARK] = ACTIONS(2184),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(1283),
    [sym_comment] = ACTIONS(58),
  },
  [1095] = {
    [anon_sym_DOT] = ACTIONS(2254),
    [anon_sym_LBRACK] = ACTIONS(2254),
    [anon_sym_COLON_COLON] = ACTIONS(2254),
    [sym_comment] = ACTIONS(58),
  },
  [1096] = {
    [anon_sym_COMMA] = ACTIONS(2256),
    [anon_sym_RBRACE] = ACTIONS(2256),
    [anon_sym_DOT] = ACTIONS(2256),
    [anon_sym_COLON_COLON] = ACTIONS(2256),
    [sym_comment] = ACTIONS(58),
  },
  [1097] = {
    [anon_sym_COMMA] = ACTIONS(2258),
    [anon_sym_RBRACE] = ACTIONS(2258),
    [sym_comment] = ACTIONS(58),
  },
  [1098] = {
    [sym__expression] = STATE(1027),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_variable_initializer] = STATE(1108),
    [sym_array_initializer] = STATE(1029),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1652),
    [anon_sym_TILDE] = ACTIONS(1652),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [anon_sym_LBRACE] = ACTIONS(1942),
    [anon_sym_RBRACE] = ACTIONS(2260),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1099] = {
    [anon_sym_GT] = ACTIONS(1948),
    [anon_sym_LT] = ACTIONS(1948),
    [anon_sym_EQ_EQ] = ACTIONS(1950),
    [anon_sym_GT_EQ] = ACTIONS(1950),
    [anon_sym_LT_EQ] = ACTIONS(1950),
    [anon_sym_BANG_EQ] = ACTIONS(1950),
    [anon_sym_AMP_AMP] = ACTIONS(1952),
    [anon_sym_PIPE_PIPE] = ACTIONS(1954),
    [anon_sym_PLUS] = ACTIONS(1956),
    [anon_sym_DASH] = ACTIONS(1956),
    [anon_sym_STAR] = ACTIONS(1958),
    [anon_sym_SLASH] = ACTIONS(1960),
    [anon_sym_AMP] = ACTIONS(1962),
    [anon_sym_PIPE] = ACTIONS(1964),
    [anon_sym_CARET] = ACTIONS(1954),
    [anon_sym_PERCENT] = ACTIONS(1958),
    [anon_sym_LT_LT] = ACTIONS(1958),
    [anon_sym_GT_GT] = ACTIONS(1960),
    [anon_sym_GT_GT_GT] = ACTIONS(1958),
    [anon_sym_QMARK] = ACTIONS(1966),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(1283),
    [sym_comment] = ACTIONS(58),
  },
  [1100] = {
    [anon_sym_DOT] = ACTIONS(2262),
    [anon_sym_LBRACK] = ACTIONS(2262),
    [anon_sym_COLON_COLON] = ACTIONS(2262),
    [sym_comment] = ACTIONS(58),
  },
  [1101] = {
    [anon_sym_RPAREN] = ACTIONS(2264),
    [sym_comment] = ACTIONS(58),
  },
  [1102] = {
    [sym__expression] = STATE(854),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1110),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2264),
    [anon_sym_BANG] = ACTIONS(1401),
    [anon_sym_TILDE] = ACTIONS(1401),
    [anon_sym_PLUS_PLUS] = ACTIONS(1403),
    [anon_sym_DASH_DASH] = ACTIONS(1403),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1103] = {
    [anon_sym_RBRACE] = ACTIONS(2266),
    [anon_sym_default] = ACTIONS(2266),
    [anon_sym_synchronized] = ACTIONS(2266),
    [anon_sym_if] = ACTIONS(2266),
    [anon_sym_AT] = ACTIONS(2266),
    [anon_sym_static] = ACTIONS(2266),
    [anon_sym_class] = ACTIONS(2266),
    [anon_sym_public] = ACTIONS(2266),
    [anon_sym_protected] = ACTIONS(2266),
    [anon_sym_private] = ACTIONS(2266),
    [anon_sym_abstract] = ACTIONS(2266),
    [anon_sym_final] = ACTIONS(2266),
    [anon_sym_strictfp] = ACTIONS(2266),
    [anon_sym_native] = ACTIONS(2266),
    [sym_comment] = ACTIONS(58),
  },
  [1104] = {
    [sym__semicolon] = STATE(1111),
    [anon_sym_SEMI] = ACTIONS(721),
    [sym_comment] = ACTIONS(58),
  },
  [1105] = {
    [sym_statement] = STATE(987),
    [sym_statement_no_short_if] = STATE(1112),
    [sym_if_then_statement] = STATE(225),
    [sym_if_then_else_statement] = STATE(225),
    [sym_if_then_else_statement_no_short_if] = STATE(792),
    [anon_sym_if] = ACTIONS(1622),
    [sym_comment] = ACTIONS(58),
  },
  [1106] = {
    [sym_lambda_expression] = STATE(1013),
    [sym__lambda_parameters] = STATE(28),
    [sym_unary_expression] = STATE(554),
    [sym_conditional_expression] = STATE(1013),
    [sym_conditional_or_expression] = STATE(992),
    [sym_conditional_and_expression] = STATE(993),
    [sym_inclusive_or_expression] = STATE(994),
    [sym_exclusive_or_expression] = STATE(995),
    [sym_and_expression] = STATE(560),
    [sym_relational_expression] = STATE(996),
    [sym_equality_expression] = STATE(997),
    [sym_shift_expression] = STATE(998),
    [sym_additive_expression] = STATE(999),
    [sym_multiplicative_expression] = STATE(1000),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(2014),
    [anon_sym_TILDE] = ACTIONS(2014),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1107] = {
    [anon_sym_COMMA] = ACTIONS(2268),
    [anon_sym_RBRACE] = ACTIONS(2268),
    [anon_sym_DOT] = ACTIONS(2268),
    [anon_sym_COLON_COLON] = ACTIONS(2268),
    [sym_comment] = ACTIONS(58),
  },
  [1108] = {
    [anon_sym_COMMA] = ACTIONS(2270),
    [anon_sym_RBRACE] = ACTIONS(2270),
    [sym_comment] = ACTIONS(58),
  },
  [1109] = {
    [anon_sym_DOT] = ACTIONS(2272),
    [anon_sym_LBRACK] = ACTIONS(2272),
    [anon_sym_COLON_COLON] = ACTIONS(2272),
    [sym_comment] = ACTIONS(58),
  },
  [1110] = {
    [anon_sym_RPAREN] = ACTIONS(2274),
    [sym_comment] = ACTIONS(58),
  },
  [1111] = {
    [anon_sym_RBRACE] = ACTIONS(2276),
    [anon_sym_default] = ACTIONS(2276),
    [anon_sym_synchronized] = ACTIONS(2276),
    [anon_sym_if] = ACTIONS(2276),
    [anon_sym_AT] = ACTIONS(2276),
    [anon_sym_static] = ACTIONS(2276),
    [anon_sym_class] = ACTIONS(2276),
    [anon_sym_public] = ACTIONS(2276),
    [anon_sym_protected] = ACTIONS(2276),
    [anon_sym_private] = ACTIONS(2276),
    [anon_sym_abstract] = ACTIONS(2276),
    [anon_sym_final] = ACTIONS(2276),
    [anon_sym_strictfp] = ACTIONS(2276),
    [anon_sym_native] = ACTIONS(2276),
    [sym_comment] = ACTIONS(58),
  },
  [1112] = {
    [anon_sym_else] = ACTIONS(2278),
    [sym_comment] = ACTIONS(58),
  },
  [1113] = {
    [anon_sym_DOT] = ACTIONS(2280),
    [anon_sym_LBRACK] = ACTIONS(2280),
    [anon_sym_COLON_COLON] = ACTIONS(2280),
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
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
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
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_formal_parameter_repeat1, 1),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_catch_formal_parameter_repeat1, 1),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_formal_parameter_repeat1, 1),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 1),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_type, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_type, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 1),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inferred_formal_parameter_list, 1),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_primitive_type, 1),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integral_type, 1),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_floating_point_type, 1),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 1),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [297] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [300] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_type, 1),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 1),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 1),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_marker_annotation, 2),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_class_or_interface_type, 2),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 2),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__semicolon, 1),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__semicolon, 1),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__semicolon, 1),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 2),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_array_type, 2),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_array_type, 2),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims, 1),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dims, 1),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_body, 1),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 2),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 2),
  [441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 2),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [447] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(234),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_formal_parameter_repeat1, 2),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_catch_formal_parameter_repeat1, 2),
  [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_catch_formal_parameter_repeat1, 2),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 2),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameters, 3),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 2),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inferred_formal_parameter_list, 2),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 2),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__lambda_parameters, 3),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 2),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 1),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 2),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_array_type, 2),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_dims, 1),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
  [531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(270),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [541] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 3),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_type_import_declaration, 3),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(299),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 3),
  [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 3),
  [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1, .fragile = true),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 1, .fragile = true),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_argument, 1),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 1),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(335),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_expression, 3),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_lambda_expression, 3),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 3),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 2),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_dims_repeat1, 2),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_class_or_interface_type, 3),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 3),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statement, 1),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 1),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 3),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 3),
  [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 3),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
  [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(384),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 2),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 3),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 2),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 2),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(393),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 3),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 2),
  [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 2),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(401),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
  [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 3),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 3),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 3),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 4),
  [805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 4),
  [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 3),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(422),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 4),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(423),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(424),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 1),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 4),
  [855] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 2),
  [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_member_declaration, 1),
  [883] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(444),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 1),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body_declaration, 1),
  [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_superclass, 2),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 1),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_super_interfaces, 2),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 4),
  [927] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 2),
  [933] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_member_declaration, 1),
  [939] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [945] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(466),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extends_interfaces, 2),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 4),
  [957] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 2),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 3),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 2),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 2),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_body, 2),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_lambda_body, 2),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
  [983] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(493),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 4),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 3),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 1, .fragile = true),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(506),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_throws, 2),
  [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 1),
  [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(511),
  [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 3),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_dims_repeat1, 3),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
  [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_class_or_interface_type, 4),
  [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 4),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
  [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
  [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
  [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [1033] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 1),
  [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 2),
  [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration_statement, 2),
  [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(528),
  [1045] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(529),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(532),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
  [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
  [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 3),
  [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
  [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 3),
  [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 3),
  [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(541),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
  [1069] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
  [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 4),
  [1077] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 3),
  [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
  [1081] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 4),
  [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 3),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 4),
  [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 4),
  [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
  [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 2),
  [1095] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
  [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
  [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_element_annotation, 5),
  [1123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 5),
  [1129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(566),
  [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(568),
  [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 5),
  [1141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(569),
  [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_requires_modifier, 1),
  [1149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_requires_modifier, 1),
  [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 1),
  [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [1155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
  [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(575),
  [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(576),
  [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
  [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
  [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_import_on_declaraction, 5),
  [1175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(584),
  [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(585),
  [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
  [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(595),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(596),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
  [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(598),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(599),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(600),
  [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(601),
  [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(602),
  [1207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(603),
  [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 2),
  [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 2),
  [1213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 2),
  [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(621),
  [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(622),
  [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(623),
  [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 3),
  [1225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(627),
  [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
  [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(633),
  [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 2),
  [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 5),
  [1245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 1),
  [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(636),
  [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 3),
  [1255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 5),
  [1267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(640),
  [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 3),
  [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 4),
  [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(644),
  [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(645),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
  [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(647),
  [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 5),
  [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(648),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 4),
  [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(649),
  [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(652),
  [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 2),
  [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(655),
  [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 1, .fragile = true),
  [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type, 2),
  [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(656),
  [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 1),
  [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 2),
  [1315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(657),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 4),
  [1319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_dims_repeat1, 4),
  [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_class_or_interface_type, 5),
  [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 5),
  [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(659),
  [1327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(659),
  [1329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(660),
  [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(661),
  [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(662),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(663),
  [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(663),
  [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(660),
  [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(661),
  [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(664),
  [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(665),
  [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(666),
  [1349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(667),
  [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(670),
  [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(671),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration, 3),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 2),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 5),
  [1363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(677),
  [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(678),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 5),
  [1373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [1377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [1379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 4),
  [1381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 5),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 5),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(683),
  [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(684),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 3),
  [1393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(685),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(686),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(688),
  [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(689),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(690),
  [1411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(701),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(702),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(703),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(704),
  [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(705),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(706),
  [1445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(707),
  [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [1457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(708),
  [1459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(708),
  [1461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(709),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(710),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(710),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 6),
  [1481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(712),
  [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 3),
  [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [1489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [1493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(715),
  [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(718),
  [1497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(719),
  [1499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_static_import_declaration, 6),
  [1509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(721),
  [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(723),
  [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(728),
  [1517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(732),
  [1519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 2),
  [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 2),
  [1523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 2),
  [1525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(735),
  [1527] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1, .fragile = true), SHIFT(736),
  [1530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(738),
  [1532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 1),
  [1534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(739),
  [1536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(740),
  [1538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(741),
  [1540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_name, 1),
  [1542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(747),
  [1544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(748),
  [1546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(749),
  [1548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(754),
  [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(736),
  [1552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(755),
  [1554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(757),
  [1556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(758),
  [1558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(759),
  [1560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary, 1),
  [1562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 1),
  [1564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(760),
  [1566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(761),
  [1568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [1570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 3),
  [1572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [1574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(762),
  [1576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(766),
  [1578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(768),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [1582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 6),
  [1586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 3),
  [1592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 2),
  [1596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(773),
  [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [1600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(776),
  [1602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 3),
  [1604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 4),
  [1606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(779),
  [1608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(780),
  [1610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 5),
  [1612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true),
  [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(782),
  [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 3),
  [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2, .fragile = true),
  [1620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 2),
  [1622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(789),
  [1624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(794),
  [1626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(795),
  [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(796),
  [1630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 6),
  [1634] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(801),
  [1638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 3),
  [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(802),
  [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(803),
  [1644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(804),
  [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(804),
  [1648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(805),
  [1650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(810),
  [1652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(811),
  [1654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(812),
  [1656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [1658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(814),
  [1660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(816),
  [1662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(817),
  [1664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(818),
  [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(819),
  [1668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(820),
  [1670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(821),
  [1672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(822),
  [1674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(823),
  [1676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(823),
  [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(824),
  [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(825),
  [1682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(825),
  [1684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [1686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [1690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [1692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(839),
  [1694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(841),
  [1696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(843),
  [1698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(846),
  [1700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 4),
  [1702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(848),
  [1704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(849),
  [1706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(850),
  [1708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 1),
  [1710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(851),
  [1712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(852),
  [1714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(853),
  [1716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(856),
  [1718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(857),
  [1720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [1722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 1),
  [1724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(859),
  [1726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(860),
  [1728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(864),
  [1730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(869),
  [1732] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(870),
  [1734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(871),
  [1736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(872),
  [1738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(873),
  [1740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(857),
  [1742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_type, 2),
  [1744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 2),
  [1746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 1, .fragile = true),
  [1748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(877),
  [1750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(881),
  [1752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(850),
  [1754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(849),
  [1756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(882),
  [1758] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(883),
  [1760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 3),
  [1764] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(885),
  [1768] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(886),
  [1770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(887),
  [1772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(888),
  [1774] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(889),
  [1776] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(893),
  [1778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(894),
  [1780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 4),
  [1784] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(899),
  [1788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(900),
  [1790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 3),
  [1792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 2),
  [1794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 4),
  [1796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 4),
  [1798] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 4),
  [1800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [1802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(903),
  [1804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [1806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(905),
  [1808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 4),
  [1810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(906),
  [1812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_statement, 5),
  [1814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(907),
  [1816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_no_short_if, 1),
  [1818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(908),
  [1820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 7),
  [1824] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [1830] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(911),
  [1834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(915),
  [1836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 3),
  [1838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(921),
  [1840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(921),
  [1842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(922),
  [1844] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(927),
  [1846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(929),
  [1848] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [1850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(938),
  [1852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [1854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [1856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [1858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [1860] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [1862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [1864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [1866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [1868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [1870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [1872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [1874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [1876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [1878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [1880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [1882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [1884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [1886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
  [1888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(941),
  [1890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(942),
  [1892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 5),
  [1894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 3),
  [1896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 3),
  [1898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(944),
  [1900] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 2),
  [1902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(805),
  [1904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(806),
  [1906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(807),
  [1908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(808),
  [1910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(808),
  [1912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(806),
  [1914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 1),
  [1916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(946),
  [1918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(809),
  [1920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(948),
  [1922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 3),
  [1924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 3),
  [1926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(949),
  [1928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(950),
  [1930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments_or_diamond, 1),
  [1932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 2),
  [1934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(952),
  [1936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(954),
  [1938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(955),
  [1940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(956),
  [1942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(957),
  [1944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 3),
  [1946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(959),
  [1948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(964),
  [1950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(964),
  [1952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(965),
  [1954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(966),
  [1956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(967),
  [1958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(968),
  [1960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(968),
  [1962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(965),
  [1964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(966),
  [1966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(969),
  [1968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(970),
  [1970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(949),
  [1972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 1),
  [1974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(971),
  [1976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 2, .fragile = true),
  [1978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(974),
  [1980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(975),
  [1982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(976),
  [1984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(977),
  [1986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [1988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 4),
  [1990] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [1992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(979),
  [1994] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ambiguous_name, 3),
  [1996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(980),
  [1998] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(977),
  [2000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 3),
  [2002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(981),
  [2004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 3),
  [2006] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(982),
  [2008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 3),
  [2010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [2014] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(990),
  [2016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2020] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1004),
  [2024] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 4),
  [2026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [2028] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1010),
  [2030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1012),
  [2032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [2034] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 2),
  [2036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 4),
  [2038] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 4),
  [2040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2),
  [2042] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1016),
  [2044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 4),
  [2046] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true), SHIFT(91),
  [2049] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2051] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1018),
  [2056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1019),
  [2058] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 3),
  [2060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1021),
  [2062] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1023),
  [2064] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1025),
  [2066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1026),
  [2068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 4),
  [2070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 4),
  [2072] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1032),
  [2074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 3),
  [2076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 2),
  [2078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1038),
  [2080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1039),
  [2082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1041),
  [2084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1043),
  [2086] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1045),
  [2088] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1046),
  [2090] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1049),
  [2092] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_access, 4),
  [2094] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 4),
  [2096] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1051),
  [2100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_else_statement, 7),
  [2102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_value, 2),
  [2104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1053),
  [2106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1054),
  [2108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1055),
  [2110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1056),
  [2112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1057),
  [2114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1058),
  [2116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1059),
  [2118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1060),
  [2120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1060),
  [2122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1061),
  [2124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1062),
  [2126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1062),
  [2128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(925),
  [2136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(925),
  [2138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(924),
  [2140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(922),
  [2142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1066),
  [2144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 5),
  [2146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 3),
  [2148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [2150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 3),
  [2152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [2154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 5),
  [2156] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true), SHIFT(91),
  [2159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2161] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1068),
  [2168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 5),
  [2172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1070),
  [2174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1071),
  [2176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 2),
  [2178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(923),
  [2180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(923),
  [2182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_initializer, 1),
  [2184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(926),
  [2186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1072),
  [2188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 4),
  [2190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1075),
  [2192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 4),
  [2194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1076),
  [2196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 5),
  [2198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1077),
  [2200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 5),
  [2202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1078),
  [2204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 5),
  [2206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1079),
  [2208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1081),
  [2210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1082),
  [2212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 3),
  [2220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 6),
  [2226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 3),
  [2228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1096),
  [2230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1098),
  [2232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 6),
  [2234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1100),
  [2236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1102),
  [2238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 6),
  [2240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 6),
  [2242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1104),
  [2244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1105),
  [2246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1106),
  [2248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 8),
  [2250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 8),
  [2252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 8),
  [2254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 7),
  [2256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 4),
  [2258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 2),
  [2260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1107),
  [2262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 7),
  [2264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1109),
  [2266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 7),
  [2268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 5),
  [2270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 3),
  [2272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 8),
  [2274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1113),
  [2276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 8),
  [2278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_else_statement_no_short_if, 7),
  [2280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 9),
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
