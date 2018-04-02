#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 876
#define SYMBOL_COUNT 207
#define ALIAS_COUNT 0
#define TOKEN_COUNT 116
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_1 = 1,
  anon_sym_extern = 2,
  anon_sym_alias = 3,
  anon_sym_SEMI = 4,
  anon_sym_using = 5,
  anon_sym_namespace = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_partial = 9,
  anon_sym_class = 10,
  anon_sym_unsafe = 11,
  anon_sym_abstract = 12,
  anon_sym_sealed = 13,
  anon_sym_static = 14,
  anon_sym_new = 15,
  anon_sym_public = 16,
  anon_sym_protected = 17,
  anon_sym_internal = 18,
  anon_sym_private = 19,
  anon_sym_interface = 20,
  anon_sym_struct = 21,
  anon_sym_enum = 22,
  anon_sym_COLON = 23,
  anon_sym_COMMA = 24,
  anon_sym_sbyte = 25,
  anon_sym_byte = 26,
  anon_sym_short = 27,
  anon_sym_ushort = 28,
  anon_sym_int = 29,
  anon_sym_uint = 30,
  anon_sym_long = 31,
  anon_sym_ulong = 32,
  anon_sym_char = 33,
  anon_sym_delegate = 34,
  sym_void_keyword = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_ref = 38,
  anon_sym_out = 39,
  anon_sym_this = 40,
  sym_params_keyword = 41,
  anon_sym_LBRACK = 42,
  anon_sym_RBRACK = 43,
  anon_sym_assembly = 44,
  anon_sym_module = 45,
  sym_const_keyword = 46,
  anon_sym_readonly = 47,
  anon_sym_volatile = 48,
  anon_sym_EQ = 49,
  anon_sym_QMARK = 50,
  anon_sym_AMP_AMP = 51,
  anon_sym_PIPE_PIPE = 52,
  anon_sym_GT_GT = 53,
  anon_sym_LT_LT = 54,
  anon_sym_AMP = 55,
  anon_sym_CARET = 56,
  anon_sym_PIPE = 57,
  anon_sym_PLUS = 58,
  anon_sym_DASH = 59,
  anon_sym_STAR = 60,
  anon_sym_SLASH = 61,
  anon_sym_PERCENT = 62,
  anon_sym_LT = 63,
  anon_sym_LT_EQ = 64,
  anon_sym_EQ_EQ = 65,
  anon_sym_BANG_EQ = 66,
  anon_sym_GT_EQ = 67,
  anon_sym_GT = 68,
  anon_sym_BANG = 69,
  anon_sym_TILDE = 70,
  anon_sym_DASH_DASH = 71,
  anon_sym_PLUS_PLUS = 72,
  anon_sym_typeof = 73,
  anon_sym_sizeof = 74,
  anon_sym_true = 75,
  anon_sym_false = 76,
  anon_sym_SQUOTE = 77,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 78,
  sym__hexadecimal_escape_sequence = 79,
  aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 80,
  aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 81,
  anon_sym_BSLASH_SQUOTE = 82,
  anon_sym_BSLASH_DQUOTE = 83,
  anon_sym_BSLASH_BSLASH = 84,
  anon_sym_BSLASH0 = 85,
  anon_sym_BSLASHa = 86,
  anon_sym_BSLASHb = 87,
  anon_sym_BSLASHf = 88,
  anon_sym_BSLASHn = 89,
  anon_sym_BSLASHr = 90,
  anon_sym_BSLASHt = 91,
  anon_sym_BSLASHv = 92,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 93,
  aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 94,
  sym__integer_type_suffix = 95,
  sym_null_literal = 96,
  anon_sym_DOT = 97,
  sym__real_type_suffix = 98,
  sym__exponent_part = 99,
  anon_sym_DQUOTE = 100,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 101,
  anon_sym_AT_DQUOTE = 102,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 103,
  anon_sym_bool = 104,
  anon_sym_decimal = 105,
  anon_sym_double = 106,
  anon_sym_float = 107,
  anon_sym_object = 108,
  anon_sym_string = 109,
  anon_sym_COLON_COLON = 110,
  sym_global = 111,
  sym_identifier_name = 112,
  sym_comment = 113,
  anon_sym_async = 114,
  anon_sym_return = 115,
  sym_compilation_unit = 116,
  sym__type_declaration = 117,
  sym_extern_alias_directive = 118,
  sym_using_directive = 119,
  sym_namespace_declaration = 120,
  sym_class_declaration = 121,
  sym_class_modifiers = 122,
  sym__class_modifiers = 123,
  sym_interface_declaration = 124,
  sym_interface_modifiers = 125,
  sym__interface_modifiers = 126,
  sym_struct_declaration = 127,
  sym_struct_modifiers = 128,
  sym__struct_modifiers = 129,
  sym_enum_declaration = 130,
  sym_enum_member_declaration = 131,
  sym_enum_modifiers = 132,
  sym__integral_type = 133,
  sym_delegate_declaration = 134,
  sym_delegate_modifier = 135,
  sym_return_type = 136,
  sym_parameter_list = 137,
  sym__formal_parameter_list = 138,
  sym_parameter = 139,
  sym_parameter_modifier = 140,
  sym_parameter_array = 141,
  sym_array_type = 142,
  sym_array_rank_specifier = 143,
  sym__attributes = 144,
  sym__attribute_section = 145,
  sym_attribute_list = 146,
  sym_attribute = 147,
  sym_attribute_argument_list = 148,
  sym__global_attributes = 149,
  sym_field_declaration = 150,
  sym_field_modifiers = 151,
  sym__field_modifiers = 152,
  sym_variable_declaration = 153,
  sym__type = 154,
  sym_generic_name = 155,
  sym_variable_declarator = 156,
  sym_equals_value_clause = 157,
  sym__expression = 158,
  sym_parenthesized_expression = 159,
  sym_ternary_expression = 160,
  sym_binary_expression = 161,
  sym_unary_expression = 162,
  sym__literal = 163,
  sym_boolean_literal = 164,
  sym_character_literal = 165,
  sym__unicode_escape_sequence = 166,
  sym__simple_escape_sequence = 167,
  sym_integer_literal = 168,
  sym_real_literal = 169,
  sym_string_literal = 170,
  sym__regular_string_literal = 171,
  sym__regular_string_literal_character = 172,
  sym__verbatim_string_literal = 173,
  sym_predefined_type = 174,
  sym_type_parameter_list = 175,
  sym_type_parameter = 176,
  sym_qualified_name = 177,
  sym_alias_qualified_name = 178,
  sym_name_equals = 179,
  sym_static = 180,
  sym_constructor_declaration = 181,
  sym_method_declaration = 182,
  sym_method_modifiers = 183,
  sym_statement_block = 184,
  sym__statement = 185,
  sym_expression_statement = 186,
  sym_return_statement = 187,
  sym_variable_assignment_statement = 188,
  sym_empty_statement = 189,
  aux_sym_compilation_unit_repeat1 = 190,
  aux_sym_compilation_unit_repeat2 = 191,
  aux_sym_compilation_unit_repeat3 = 192,
  aux_sym_compilation_unit_repeat4 = 193,
  aux_sym_namespace_declaration_repeat1 = 194,
  aux_sym_class_declaration_repeat1 = 195,
  aux_sym_interface_declaration_repeat1 = 196,
  aux_sym_struct_declaration_repeat1 = 197,
  aux_sym_enum_declaration_repeat1 = 198,
  aux_sym__formal_parameter_list_repeat1 = 199,
  aux_sym_array_rank_specifier_repeat1 = 200,
  aux_sym__attributes_repeat1 = 201,
  aux_sym_attribute_list_repeat1 = 202,
  aux_sym_variable_declaration_repeat1 = 203,
  aux_sym__regular_string_literal_repeat1 = 204,
  aux_sym_type_parameter_list_repeat1 = 205,
  aux_sym_statement_block_repeat1 = 206,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_1] = "ï»¿",
  [anon_sym_extern] = "extern",
  [anon_sym_alias] = "alias",
  [anon_sym_SEMI] = ";",
  [anon_sym_using] = "using",
  [anon_sym_namespace] = "namespace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_partial] = "partial",
  [anon_sym_class] = "class",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_abstract] = "abstract",
  [anon_sym_sealed] = "sealed",
  [anon_sym_static] = "static",
  [anon_sym_new] = "new",
  [anon_sym_public] = "public",
  [anon_sym_protected] = "protected",
  [anon_sym_internal] = "internal",
  [anon_sym_private] = "private",
  [anon_sym_interface] = "interface",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_sbyte] = "sbyte",
  [anon_sym_byte] = "byte",
  [anon_sym_short] = "short",
  [anon_sym_ushort] = "ushort",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_long] = "long",
  [anon_sym_ulong] = "ulong",
  [anon_sym_char] = "char",
  [anon_sym_delegate] = "delegate",
  [sym_void_keyword] = "void_keyword",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ref] = "ref",
  [anon_sym_out] = "out",
  [anon_sym_this] = "this",
  [sym_params_keyword] = "params_keyword",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_assembly] = "assembly",
  [anon_sym_module] = "module",
  [sym_const_keyword] = "const_keyword",
  [anon_sym_readonly] = "readonly",
  [anon_sym_volatile] = "volatile",
  [anon_sym_EQ] = "=",
  [anon_sym_QMARK] = "?",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_typeof] = "typeof",
  [anon_sym_sizeof] = "sizeof",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = "/[^']/",
  [sym__hexadecimal_escape_sequence] = "_hexadecimal_escape_sequence",
  [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = "/\\\\u[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/",
  [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = "/\\\\U[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/",
  [anon_sym_BSLASH_SQUOTE] = "\\'",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASH0] = "\\0",
  [anon_sym_BSLASHa] = "\\a",
  [anon_sym_BSLASHb] = "\\b",
  [anon_sym_BSLASHf] = "\\f",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHv] = "\\v",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = "/[0-9]+/",
  [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = "/0x[0-9a-fA-F]+/",
  [sym__integer_type_suffix] = "_integer_type_suffix",
  [sym_null_literal] = "null_literal",
  [anon_sym_DOT] = ".",
  [sym__real_type_suffix] = "_real_type_suffix",
  [sym__exponent_part] = "_exponent_part",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = "/[^\"\\\\\\n]/",
  [anon_sym_AT_DQUOTE] = "@\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = "/[^\"]*/",
  [anon_sym_bool] = "bool",
  [anon_sym_decimal] = "decimal",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_object] = "object",
  [anon_sym_string] = "string",
  [anon_sym_COLON_COLON] = "::",
  [sym_global] = "global",
  [sym_identifier_name] = "identifier_name",
  [sym_comment] = "comment",
  [anon_sym_async] = "async",
  [anon_sym_return] = "return",
  [sym_compilation_unit] = "compilation_unit",
  [sym__type_declaration] = "_type_declaration",
  [sym_extern_alias_directive] = "extern_alias_directive",
  [sym_using_directive] = "using_directive",
  [sym_namespace_declaration] = "namespace_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_class_modifiers] = "class_modifiers",
  [sym__class_modifiers] = "_class_modifiers",
  [sym_interface_declaration] = "interface_declaration",
  [sym_interface_modifiers] = "interface_modifiers",
  [sym__interface_modifiers] = "_interface_modifiers",
  [sym_struct_declaration] = "struct_declaration",
  [sym_struct_modifiers] = "struct_modifiers",
  [sym__struct_modifiers] = "_struct_modifiers",
  [sym_enum_declaration] = "enum_declaration",
  [sym_enum_member_declaration] = "enum_member_declaration",
  [sym_enum_modifiers] = "enum_modifiers",
  [sym__integral_type] = "_integral_type",
  [sym_delegate_declaration] = "delegate_declaration",
  [sym_delegate_modifier] = "delegate_modifier",
  [sym_return_type] = "return_type",
  [sym_parameter_list] = "parameter_list",
  [sym__formal_parameter_list] = "_formal_parameter_list",
  [sym_parameter] = "parameter",
  [sym_parameter_modifier] = "parameter_modifier",
  [sym_parameter_array] = "parameter_array",
  [sym_array_type] = "array_type",
  [sym_array_rank_specifier] = "array_rank_specifier",
  [sym__attributes] = "_attributes",
  [sym__attribute_section] = "_attribute_section",
  [sym_attribute_list] = "attribute_list",
  [sym_attribute] = "attribute",
  [sym_attribute_argument_list] = "attribute_argument_list",
  [sym__global_attributes] = "_global_attributes",
  [sym_field_declaration] = "field_declaration",
  [sym_field_modifiers] = "field_modifiers",
  [sym__field_modifiers] = "_field_modifiers",
  [sym_variable_declaration] = "variable_declaration",
  [sym__type] = "_type",
  [sym_generic_name] = "generic_name",
  [sym_variable_declarator] = "variable_declarator",
  [sym_equals_value_clause] = "equals_value_clause",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
  [sym__unicode_escape_sequence] = "_unicode_escape_sequence",
  [sym__simple_escape_sequence] = "_simple_escape_sequence",
  [sym_integer_literal] = "integer_literal",
  [sym_real_literal] = "real_literal",
  [sym_string_literal] = "string_literal",
  [sym__regular_string_literal] = "_regular_string_literal",
  [sym__regular_string_literal_character] = "_regular_string_literal_character",
  [sym__verbatim_string_literal] = "_verbatim_string_literal",
  [sym_predefined_type] = "predefined_type",
  [sym_type_parameter_list] = "type_parameter_list",
  [sym_type_parameter] = "type_parameter",
  [sym_qualified_name] = "qualified_name",
  [sym_alias_qualified_name] = "alias_qualified_name",
  [sym_name_equals] = "name_equals",
  [sym_static] = "static",
  [sym_constructor_declaration] = "constructor_declaration",
  [sym_method_declaration] = "method_declaration",
  [sym_method_modifiers] = "method_modifiers",
  [sym_statement_block] = "statement_block",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_return_statement] = "return_statement",
  [sym_variable_assignment_statement] = "variable_assignment_statement",
  [sym_empty_statement] = "empty_statement",
  [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
  [aux_sym_compilation_unit_repeat2] = "compilation_unit_repeat2",
  [aux_sym_compilation_unit_repeat3] = "compilation_unit_repeat3",
  [aux_sym_compilation_unit_repeat4] = "compilation_unit_repeat4",
  [aux_sym_namespace_declaration_repeat1] = "namespace_declaration_repeat1",
  [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
  [aux_sym_interface_declaration_repeat1] = "interface_declaration_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_enum_declaration_repeat1] = "enum_declaration_repeat1",
  [aux_sym__formal_parameter_list_repeat1] = "_formal_parameter_list_repeat1",
  [aux_sym_array_rank_specifier_repeat1] = "array_rank_specifier_repeat1",
  [aux_sym__attributes_repeat1] = "_attributes_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
  [aux_sym__regular_string_literal_repeat1] = "_regular_string_literal_repeat1",
  [aux_sym_type_parameter_list_repeat1] = "type_parameter_list_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
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
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
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
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbyte] = {
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
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegate] = {
    .visible = true,
    .named = false,
  },
  [sym_void_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [sym_params_keyword] = {
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
  [anon_sym_assembly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [sym_const_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sizeof] = {
    .visible = true,
    .named = false,
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
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__hexadecimal_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHv] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__integer_type_suffix] = {
    .visible = false,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__real_type_suffix] = {
    .visible = false,
    .named = true,
  },
  [sym__exponent_part] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_compilation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__type_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_extern_alias_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_using_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__class_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_interface_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__interface_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__struct_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_member_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__integral_type] = {
    .visible = false,
    .named = true,
  },
  [sym_delegate_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_delegate_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__formal_parameter_list] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_array] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_rank_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym__attributes] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute_section] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__global_attributes] = {
    .visible = false,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__field_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_generic_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_equals_value_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
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
  [sym__unicode_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_real_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__regular_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__regular_string_literal_character] = {
    .visible = false,
    .named = true,
  },
  [sym__verbatim_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_predefined_type] = {
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
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_name_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_static] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_compilation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compilation_unit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compilation_unit_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compilation_unit_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespace_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__formal_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_rank_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__regular_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
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
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(38);
      if (lookahead == '@')
        ADVANCE(39);
      if (lookahead == 'E')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'U')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == '^')
        ADVANCE(79);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'b')
        ADVANCE(102);
      if (lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(139);
      if (lookahead == 'f')
        ADVANCE(148);
      if (lookahead == 'g')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(163);
      if (lookahead == 'l')
        ADVANCE(175);
      if (lookahead == 'm')
        ADVANCE(179);
      if (lookahead == 'n')
        ADVANCE(185);
      if (lookahead == 'o')
        ADVANCE(199);
      if (lookahead == 'p')
        ADVANCE(207);
      if (lookahead == 'r')
        ADVANCE(235);
      if (lookahead == 's')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(279);
      if (lookahead == 'u')
        ADVANCE(291);
      if (lookahead == 'v')
        ADVANCE(312);
      if (lookahead == '{')
        ADVANCE(322);
      if (lookahead == '|')
        ADVANCE(323);
      if (lookahead == '}')
        ADVANCE(325);
      if (lookahead == '~')
        ADVANCE(326);
      if (lookahead == 239)
        ADVANCE(327);
      if (('D' <= lookahead && lookahead <= 'F'))
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
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
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'x')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(31);
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 39:
      if (lookahead == '\"')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 41:
      if (('+' <= lookahead && lookahead <= ']'))
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__exponent_part);
      if (('+' <= lookahead && lookahead <= ']'))
        ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(44);
      if (lookahead == 'u')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(44);
      if (lookahead == 'l')
        ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      if (lookahead == '\"')
        ADVANCE(48);
      if (lookahead == '\'')
        ADVANCE(49);
      if (lookahead == '0')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(51);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'b')
        ADVANCE(62);
      if (lookahead == 'f')
        ADVANCE(63);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'r')
        ADVANCE(65);
      if (lookahead == 't')
        ADVANCE(66);
      if (lookahead == 'u')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(72);
      if (lookahead == 'x')
        ADVANCE(73);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(52);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(54);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(55);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(56);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(57);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(58);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(68);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(69);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(70);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 80:
      if (lookahead == 'b')
        ADVANCE(81);
      if (lookahead == 'l')
        ADVANCE(88);
      if (lookahead == 's')
        ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 's')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 't')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'r')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'a')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'c')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 't')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 88:
      if (lookahead == 'i')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'a')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 's')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 92:
      if (lookahead == 's')
        ADVANCE(93);
      if (lookahead == 'y')
        ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'm')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'b')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'l')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'y')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_assembly);
      END_STATE();
    case 99:
      if (lookahead == 'n')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'c')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 102:
      if (lookahead == 'o')
        ADVANCE(103);
      if (lookahead == 'y')
        ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 'o')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'l')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 106:
      if (lookahead == 't')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'e')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 109:
      if (lookahead == 'h')
        ADVANCE(110);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == 'o')
        ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == 'a')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'r')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 113:
      if (lookahead == 'a')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 's')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 's')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 117:
      if (lookahead == 'n')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 's')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 't')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_const_keyword);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'e')
        ADVANCE(122);
      if (lookahead == 'o')
        ADVANCE(134);
      END_STATE();
    case 122:
      if (lookahead == 'c')
        ADVANCE(123);
      if (lookahead == 'l')
        ADVANCE(128);
      END_STATE();
    case 123:
      if (lookahead == 'i')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'm')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'a')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'l')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 128:
      if (lookahead == 'e')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'g')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'a')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 't')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'e')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 134:
      if (lookahead == 'u')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'b')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'l')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'e')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 139:
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'x')
        ADVANCE(143);
      if (('+' <= lookahead && lookahead <= ']'))
        ADVANCE(42);
      END_STATE();
    case 140:
      if (lookahead == 'u')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'm')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 143:
      if (lookahead == 't')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'e')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'r')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'n')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'l')
        ADVANCE(153);
      END_STATE();
    case 149:
      if (lookahead == 'l')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 's')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 153:
      if (lookahead == 'o')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'a')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 't')
        ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 157:
      if (lookahead == 'l')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'o')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'b')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'a')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'l')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 163:
      if (lookahead == 'n')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'r')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'f')
        ADVANCE(168);
      if (lookahead == 'n')
        ADVANCE(172);
      END_STATE();
    case 168:
      if (lookahead == 'a')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'c')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'e')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 172:
      if (lookahead == 'a')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'l')
        ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(44);
      if (lookahead == 'o')
        ADVANCE(176);
      if (lookahead == 'u')
        ADVANCE(44);
      END_STATE();
    case 176:
      if (lookahead == 'n')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'g')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'o')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'd')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'u')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'l')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'e')
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 185:
      if (lookahead == 'a')
        ADVANCE(186);
      if (lookahead == 'e')
        ADVANCE(194);
      if (lookahead == 'u')
        ADVANCE(196);
      END_STATE();
    case 186:
      if (lookahead == 'm')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'e')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 's')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'p')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'a')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'c')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 194:
      if (lookahead == 'w')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 196:
      if (lookahead == 'l')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'l')
        ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 199:
      if (lookahead == 'b')
        ADVANCE(200);
      if (lookahead == 'u')
        ADVANCE(205);
      END_STATE();
    case 200:
      if (lookahead == 'j')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'e')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'c')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 't')
        ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 205:
      if (lookahead == 't')
        ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 207:
      if (lookahead == 'a')
        ADVANCE(208);
      if (lookahead == 'r')
        ADVANCE(217);
      if (lookahead == 'u')
        ADVANCE(230);
      END_STATE();
    case 208:
      if (lookahead == 'r')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'a')
        ADVANCE(210);
      if (lookahead == 't')
        ADVANCE(213);
      END_STATE();
    case 210:
      if (lookahead == 'm')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 's')
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_params_keyword);
      END_STATE();
    case 213:
      if (lookahead == 'i')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'a')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'l')
        ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 217:
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 218:
      if (lookahead == 'v')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'a')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 't')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'e')
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 223:
      if (lookahead == 't')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'c')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 't')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'e')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'd')
        ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 230:
      if (lookahead == 'b')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'l')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'i')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'c')
        ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 235:
      if (lookahead == 'e')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'a')
        ADVANCE(237);
      if (lookahead == 'f')
        ADVANCE(243);
      if (lookahead == 't')
        ADVANCE(244);
      END_STATE();
    case 237:
      if (lookahead == 'd')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'o')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'n')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'l')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'y')
        ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 244:
      if (lookahead == 'u')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'r')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'n')
        ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 248:
      if (lookahead == 'b')
        ADVANCE(249);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'h')
        ADVANCE(258);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 't')
        ADVANCE(267);
      END_STATE();
    case 249:
      if (lookahead == 'y')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 't')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'e')
        ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_sbyte);
      END_STATE();
    case 253:
      if (lookahead == 'a')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'l')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'e')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'd')
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 258:
      if (lookahead == 'o')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'r')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 't')
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 262:
      if (lookahead == 'z')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'e')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'o')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'f')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_sizeof);
      END_STATE();
    case 267:
      if (lookahead == 'a')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(272);
      END_STATE();
    case 268:
      if (lookahead == 't')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'i')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'c')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 272:
      if (lookahead == 'i')
        ADVANCE(273);
      if (lookahead == 'u')
        ADVANCE(276);
      END_STATE();
    case 273:
      if (lookahead == 'n')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'g')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 276:
      if (lookahead == 'c')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 't')
        ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 279:
      if (lookahead == 'h')
        ADVANCE(280);
      if (lookahead == 'r')
        ADVANCE(283);
      if (lookahead == 'y')
        ADVANCE(286);
      END_STATE();
    case 280:
      if (lookahead == 'i')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 's')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 283:
      if (lookahead == 'u')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'e')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 286:
      if (lookahead == 'p')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'e')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'o')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'f')
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(44);
      if (lookahead == 'i')
        ADVANCE(292);
      if (lookahead == 'l')
        ADVANCE(295);
      if (lookahead == 'n')
        ADVANCE(299);
      if (lookahead == 's')
        ADVANCE(304);
      END_STATE();
    case 292:
      if (lookahead == 'n')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 't')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'o')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'n')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'g')
        ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 299:
      if (lookahead == 's')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'a')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'f')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'e')
        ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 304:
      if (lookahead == 'h')
        ADVANCE(305);
      if (lookahead == 'i')
        ADVANCE(309);
      END_STATE();
    case 305:
      if (lookahead == 'o')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'r')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 't')
        ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 309:
      if (lookahead == 'n')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'g')
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 312:
      if (lookahead == 'o')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'l')
        ADVANCE(316);
      END_STATE();
    case 314:
      if (lookahead == 'd')
        ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_void_keyword);
      END_STATE();
    case 316:
      if (lookahead == 'a')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 't')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'i')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'l')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'e')
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 327:
      if (lookahead == 187)
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 191)
        ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__real_type_suffix);
      END_STATE();
    case 331:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == ':')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(333);
      if (lookahead == '=')
        ADVANCE(334);
      if (lookahead == '>')
        ADVANCE(335);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(336);
      if (lookahead == 'b')
        ADVANCE(338);
      if (lookahead == 'c')
        ADVANCE(339);
      if (lookahead == 'd')
        ADVANCE(340);
      if (lookahead == 'e')
        ADVANCE(342);
      if (lookahead == 'i')
        ADVANCE(163);
      if (lookahead == 'l')
        ADVANCE(343);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 'n')
        ADVANCE(345);
      if (lookahead == 'p')
        ADVANCE(207);
      if (lookahead == 's')
        ADVANCE(346);
      if (lookahead == 'u')
        ADVANCE(349);
      if (lookahead == '{')
        ADVANCE(322);
      if (lookahead == '}')
        ADVANCE(325);
      if (lookahead == 239)
        ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      END_STATE();
    case 332:
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(22);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 336:
      if (lookahead == 'b')
        ADVANCE(81);
      if (lookahead == 'l')
        ADVANCE(88);
      if (lookahead == 's')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 's')
        ADVANCE(93);
      END_STATE();
    case 338:
      if (lookahead == 'y')
        ADVANCE(106);
      END_STATE();
    case 339:
      if (lookahead == 'h')
        ADVANCE(110);
      if (lookahead == 'l')
        ADVANCE(113);
      END_STATE();
    case 340:
      if (lookahead == 'e')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'l')
        ADVANCE(128);
      END_STATE();
    case 342:
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'x')
        ADVANCE(143);
      END_STATE();
    case 343:
      if (lookahead == 'o')
        ADVANCE(176);
      END_STATE();
    case 344:
      if (lookahead == 'o')
        ADVANCE(180);
      END_STATE();
    case 345:
      if (lookahead == 'a')
        ADVANCE(186);
      if (lookahead == 'e')
        ADVANCE(194);
      END_STATE();
    case 346:
      if (lookahead == 'b')
        ADVANCE(249);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'h')
        ADVANCE(258);
      if (lookahead == 't')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'a')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'u')
        ADVANCE(276);
      END_STATE();
    case 349:
      if (lookahead == 'i')
        ADVANCE(292);
      if (lookahead == 'l')
        ADVANCE(350);
      if (lookahead == 'n')
        ADVANCE(299);
      if (lookahead == 's')
        ADVANCE(304);
      END_STATE();
    case 350:
      if (lookahead == 'o')
        ADVANCE(296);
      END_STATE();
    case 351:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'g')
        ADVANCE(352);
      if (lookahead == 's')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 365:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'g')
        ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 366:
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == '<')
        ADVANCE(333);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 367:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead == 'v')
        ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(369);
      if (lookahead == 'y')
        ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(380);
      if (lookahead == 'o')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'j')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(410);
      if (lookahead == 'h')
        ADVANCE(414);
      if (lookahead == 't')
        ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_sbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(424);
      if (lookahead == 'l')
        ADVANCE(427);
      if (lookahead == 's')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_void_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 440:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'a')
        ADVANCE(441);
      if (lookahead == 'm')
        ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_assembly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 455:
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == '<')
        ADVANCE(333);
      if (lookahead == '>')
        ADVANCE(335);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 456:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(457);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(469);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == 'e')
        ADVANCE(486);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(490);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 'p')
        ADVANCE(505);
      if (lookahead == 'r')
        ADVANCE(530);
      if (lookahead == 's')
        ADVANCE(538);
      if (lookahead == 'u')
        ADVANCE(549);
      if (lookahead == 'v')
        ADVANCE(555);
      if (lookahead == '}')
        ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(458);
      if (lookahead == 's')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_async);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(376);
      if (lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'o')
        ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(479);
      if (lookahead == 'o')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(381);
      if (lookahead == 'l')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_delegate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(495);
      if (lookahead == 'n')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_internal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'w')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(506);
      if (lookahead == 'r')
        ADVANCE(512);
      if (lookahead == 'u')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_partial);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'o')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'v')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(410);
      if (lookahead == 'e')
        ADVANCE(539);
      if (lookahead == 'h')
        ADVANCE(414);
      if (lookahead == 't')
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_sealed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(361);
      if (lookahead == 'r')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(420);
      if (lookahead == 'u')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(424);
      if (lookahead == 'l')
        ADVANCE(427);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 's')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(438);
      if (lookahead == 'l')
        ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 563:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(563);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 564:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(565);
      if (lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(566);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 'p')
        ADVANCE(571);
      if (lookahead == 'r')
        ADVANCE(530);
      if (lookahead == 's')
        ADVANCE(572);
      if (lookahead == 'u')
        ADVANCE(549);
      if (lookahead == 'v')
        ADVANCE(574);
      if (lookahead == '}')
        ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(376);
      if (lookahead == 'o')
        ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(512);
      if (lookahead == 'u')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(410);
      if (lookahead == 'h')
        ADVANCE(414);
      if (lookahead == 't')
        ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(361);
      if (lookahead == 'r')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 576:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(577);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(469);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == 'e')
        ADVANCE(486);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(490);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 'p')
        ADVANCE(505);
      if (lookahead == 'r')
        ADVANCE(530);
      if (lookahead == 's')
        ADVANCE(538);
      if (lookahead == 'u')
        ADVANCE(549);
      if (lookahead == 'v')
        ADVANCE(574);
      if (lookahead == '}')
        ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(576);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 578:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'a')
        ADVANCE(577);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(469);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(566);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 'p')
        ADVANCE(505);
      if (lookahead == 'r')
        ADVANCE(530);
      if (lookahead == 's')
        ADVANCE(538);
      if (lookahead == 'u')
        ADVANCE(549);
      if (lookahead == 'v')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 579:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'a')
        ADVANCE(577);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(469);
      if (lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(566);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 'p')
        ADVANCE(505);
      if (lookahead == 'r')
        ADVANCE(530);
      if (lookahead == 's')
        ADVANCE(580);
      if (lookahead == 'u')
        ADVANCE(549);
      if (lookahead == 'v')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(410);
      if (lookahead == 'e')
        ADVANCE(539);
      if (lookahead == 'h')
        ADVANCE(414);
      if (lookahead == 't')
        ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 581:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(565);
      if (lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 582:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'a')
        ADVANCE(583);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead == 'v')
        ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(582);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 584:
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(585);
      if (lookahead == 'p')
        ADVANCE(588);
      if (lookahead == 'r')
        ADVANCE(594);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 't')
        ADVANCE(597);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(404);
      if (lookahead == 'u')
        ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_params_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 601:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'a')
        ADVANCE(577);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(469);
      if (lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(566);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 'p')
        ADVANCE(505);
      if (lookahead == 'r')
        ADVANCE(530);
      if (lookahead == 's')
        ADVANCE(538);
      if (lookahead == 'u')
        ADVANCE(549);
      if (lookahead == 'v')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(601);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 602:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == 'a')
        ADVANCE(577);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(469);
      if (lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(490);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead == 'p')
        ADVANCE(505);
      if (lookahead == 'r')
        ADVANCE(530);
      if (lookahead == 's')
        ADVANCE(538);
      if (lookahead == 'u')
        ADVANCE(549);
      if (lookahead == 'v')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(602);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 603:
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == '>')
        ADVANCE(335);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 604:
      if (lookahead == '!')
        ADVANCE(605);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == '@')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(606);
      if (lookahead == 'n')
        ADVANCE(611);
      if (lookahead == 's')
        ADVANCE(615);
      if (lookahead == 't')
        ADVANCE(621);
      if (lookahead == '~')
        ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(604);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'z')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(358);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_sizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(622);
      if (lookahead == 'y')
        ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'p')
        ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 630:
      if (lookahead == '!')
        ADVANCE(605);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '@')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(606);
      if (lookahead == 'n')
        ADVANCE(611);
      if (lookahead == 'r')
        ADVANCE(631);
      if (lookahead == 's')
        ADVANCE(615);
      if (lookahead == 't')
        ADVANCE(621);
      if (lookahead == '}')
        ADVANCE(325);
      if (lookahead == '~')
        ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(630);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 637:
      if (lookahead == '!')
        ADVANCE(638);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(639);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(640);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(641);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(642);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(38);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'U')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '^')
        ADVANCE(79);
      if (lookahead == 'l')
        ADVANCE(43);
      if (lookahead == 'p')
        ADVANCE(643);
      if (lookahead == 'u')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(323);
      if (lookahead == '}')
        ADVANCE(325);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(637);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm')
        ADVANCE(330);
      END_STATE();
    case 638:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 642:
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 643:
      if (lookahead == 'a')
        ADVANCE(644);
      END_STATE();
    case 644:
      if (lookahead == 'r')
        ADVANCE(645);
      END_STATE();
    case 645:
      if (lookahead == 'a')
        ADVANCE(210);
      END_STATE();
    case 646:
      if (lookahead == '/')
        ADVANCE(647);
      if (lookahead == '\\')
        ADVANCE(648);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(649);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(22);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(48);
      if (lookahead == '\'')
        ADVANCE(49);
      if (lookahead == '0')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(51);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'b')
        ADVANCE(62);
      if (lookahead == 'f')
        ADVANCE(63);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'r')
        ADVANCE(65);
      if (lookahead == 't')
        ADVANCE(66);
      if (lookahead == 'u')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(72);
      if (lookahead == 'x')
        ADVANCE(73);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 650:
      if (lookahead == '\n')
        SKIP(650);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(651);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(652);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(22);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(654);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(657);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(655);
      if (lookahead == '/')
        ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(657);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(655);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(657);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(657);
      if (lookahead == '\"')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(654);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(657);
      END_STATE();
    case 660:
      if (lookahead == '/')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(368);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'f')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(585);
      if (lookahead == 'r')
        ADVANCE(594);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 't')
        ADVANCE(597);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(660);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 661:
      if (lookahead == '!')
        ADVANCE(638);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(639);
      if (lookahead == '-')
        ADVANCE(640);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(38);
      if (lookahead == '^')
        ADVANCE(79);
      if (lookahead == '|')
        ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(661);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 331},
  [2] = {.lex_state = 331},
  [3] = {.lex_state = 331},
  [4] = {.lex_state = 351},
  [5] = {.lex_state = 365},
  [6] = {.lex_state = 331},
  [7] = {.lex_state = 366},
  [8] = {.lex_state = 331},
  [9] = {.lex_state = 331},
  [10] = {.lex_state = 331},
  [11] = {.lex_state = 366},
  [12] = {.lex_state = 366},
  [13] = {.lex_state = 366},
  [14] = {.lex_state = 367},
  [15] = {.lex_state = 440},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 331},
  [18] = {.lex_state = 331},
  [19] = {.lex_state = 331},
  [20] = {.lex_state = 331},
  [21] = {.lex_state = 331},
  [22] = {.lex_state = 331},
  [23] = {.lex_state = 331},
  [24] = {.lex_state = 331},
  [25] = {.lex_state = 331},
  [26] = {.lex_state = 331},
  [27] = {.lex_state = 331},
  [28] = {.lex_state = 331},
  [29] = {.lex_state = 331},
  [30] = {.lex_state = 331},
  [31] = {.lex_state = 331},
  [32] = {.lex_state = 331},
  [33] = {.lex_state = 331},
  [34] = {.lex_state = 331},
  [35] = {.lex_state = 366},
  [36] = {.lex_state = 365},
  [37] = {.lex_state = 331},
  [38] = {.lex_state = 331},
  [39] = {.lex_state = 331},
  [40] = {.lex_state = 331},
  [41] = {.lex_state = 365},
  [42] = {.lex_state = 331},
  [43] = {.lex_state = 366},
  [44] = {.lex_state = 331},
  [45] = {.lex_state = 331},
  [46] = {.lex_state = 331},
  [47] = {.lex_state = 331},
  [48] = {.lex_state = 331},
  [49] = {.lex_state = 331},
  [50] = {.lex_state = 331},
  [51] = {.lex_state = 331},
  [52] = {.lex_state = 331},
  [53] = {.lex_state = 455},
  [54] = {.lex_state = 366},
  [55] = {.lex_state = 455},
  [56] = {.lex_state = 366},
  [57] = {.lex_state = 331},
  [58] = {.lex_state = 331},
  [59] = {.lex_state = 331},
  [60] = {.lex_state = 331},
  [61] = {.lex_state = 331},
  [62] = {.lex_state = 366},
  [63] = {.lex_state = 366},
  [64] = {.lex_state = 366},
  [65] = {.lex_state = 367},
  [66] = {.lex_state = 331},
  [67] = {.lex_state = 331},
  [68] = {.lex_state = 331},
  [69] = {.lex_state = 331},
  [70] = {.lex_state = 331},
  [71] = {.lex_state = 331},
  [72] = {.lex_state = 331},
  [73] = {.lex_state = 331},
  [74] = {.lex_state = 366},
  [75] = {.lex_state = 331},
  [76] = {.lex_state = 331},
  [77] = {.lex_state = 331},
  [78] = {.lex_state = 331},
  [79] = {.lex_state = 331},
  [80] = {.lex_state = 331},
  [81] = {.lex_state = 366},
  [82] = {.lex_state = 331},
  [83] = {.lex_state = 365},
  [84] = {.lex_state = 366},
  [85] = {.lex_state = 331},
  [86] = {.lex_state = 331},
  [87] = {.lex_state = 331},
  [88] = {.lex_state = 456},
  [89] = {.lex_state = 563},
  [90] = {.lex_state = 331},
  [91] = {.lex_state = 564},
  [92] = {.lex_state = 331},
  [93] = {.lex_state = 576},
  [94] = {.lex_state = 331},
  [95] = {.lex_state = 366},
  [96] = {.lex_state = 331},
  [97] = {.lex_state = 455},
  [98] = {.lex_state = 331},
  [99] = {.lex_state = 366},
  [100] = {.lex_state = 331},
  [101] = {.lex_state = 331},
  [102] = {.lex_state = 456},
  [103] = {.lex_state = 366},
  [104] = {.lex_state = 331},
  [105] = {.lex_state = 366},
  [106] = {.lex_state = 331},
  [107] = {.lex_state = 331},
  [108] = {.lex_state = 331},
  [109] = {.lex_state = 366},
  [110] = {.lex_state = 331},
  [111] = {.lex_state = 366},
  [112] = {.lex_state = 366},
  [113] = {.lex_state = 366},
  [114] = {.lex_state = 367},
  [115] = {.lex_state = 331},
  [116] = {.lex_state = 331},
  [117] = {.lex_state = 331},
  [118] = {.lex_state = 331},
  [119] = {.lex_state = 331},
  [120] = {.lex_state = 331},
  [121] = {.lex_state = 331},
  [122] = {.lex_state = 331},
  [123] = {.lex_state = 331},
  [124] = {.lex_state = 456},
  [125] = {.lex_state = 331},
  [126] = {.lex_state = 331},
  [127] = {.lex_state = 331},
  [128] = {.lex_state = 366},
  [129] = {.lex_state = 578},
  [130] = {.lex_state = 579},
  [131] = {.lex_state = 456},
  [132] = {.lex_state = 366},
  [133] = {.lex_state = 366},
  [134] = {.lex_state = 366},
  [135] = {.lex_state = 367},
  [136] = {.lex_state = 563},
  [137] = {.lex_state = 564},
  [138] = {.lex_state = 366},
  [139] = {.lex_state = 367},
  [140] = {.lex_state = 331},
  [141] = {.lex_state = 331},
  [142] = {.lex_state = 331},
  [143] = {.lex_state = 331},
  [144] = {.lex_state = 331},
  [145] = {.lex_state = 366},
  [146] = {.lex_state = 456},
  [147] = {.lex_state = 581},
  [148] = {.lex_state = 581},
  [149] = {.lex_state = 331},
  [150] = {.lex_state = 366},
  [151] = {.lex_state = 582},
  [152] = {.lex_state = 456},
  [153] = {.lex_state = 456},
  [154] = {.lex_state = 331},
  [155] = {.lex_state = 331},
  [156] = {.lex_state = 331},
  [157] = {.lex_state = 366},
  [158] = {.lex_state = 563},
  [159] = {.lex_state = 564},
  [160] = {.lex_state = 581},
  [161] = {.lex_state = 331},
  [162] = {.lex_state = 366},
  [163] = {.lex_state = 564},
  [164] = {.lex_state = 564},
  [165] = {.lex_state = 564},
  [166] = {.lex_state = 331},
  [167] = {.lex_state = 331},
  [168] = {.lex_state = 366},
  [169] = {.lex_state = 576},
  [170] = {.lex_state = 366},
  [171] = {.lex_state = 366},
  [172] = {.lex_state = 366},
  [173] = {.lex_state = 367},
  [174] = {.lex_state = 366},
  [175] = {.lex_state = 563},
  [176] = {.lex_state = 331},
  [177] = {.lex_state = 331},
  [178] = {.lex_state = 331},
  [179] = {.lex_state = 331},
  [180] = {.lex_state = 331},
  [181] = {.lex_state = 576},
  [182] = {.lex_state = 581},
  [183] = {.lex_state = 331},
  [184] = {.lex_state = 576},
  [185] = {.lex_state = 576},
  [186] = {.lex_state = 576},
  [187] = {.lex_state = 366},
  [188] = {.lex_state = 331},
  [189] = {.lex_state = 331},
  [190] = {.lex_state = 366},
  [191] = {.lex_state = 366},
  [192] = {.lex_state = 331},
  [193] = {.lex_state = 584},
  [194] = {.lex_state = 331},
  [195] = {.lex_state = 331},
  [196] = {.lex_state = 331},
  [197] = {.lex_state = 331},
  [198] = {.lex_state = 331},
  [199] = {.lex_state = 331},
  [200] = {.lex_state = 331},
  [201] = {.lex_state = 331},
  [202] = {.lex_state = 366},
  [203] = {.lex_state = 331},
  [204] = {.lex_state = 331},
  [205] = {.lex_state = 366},
  [206] = {.lex_state = 331},
  [207] = {.lex_state = 331},
  [208] = {.lex_state = 331},
  [209] = {.lex_state = 366},
  [210] = {.lex_state = 331},
  [211] = {.lex_state = 331},
  [212] = {.lex_state = 331},
  [213] = {.lex_state = 331},
  [214] = {.lex_state = 456},
  [215] = {.lex_state = 456},
  [216] = {.lex_state = 366},
  [217] = {.lex_state = 331},
  [218] = {.lex_state = 601},
  [219] = {.lex_state = 581},
  [220] = {.lex_state = 602},
  [221] = {.lex_state = 331},
  [222] = {.lex_state = 331},
  [223] = {.lex_state = 331},
  [224] = {.lex_state = 366},
  [225] = {.lex_state = 331},
  [226] = {.lex_state = 331},
  [227] = {.lex_state = 366},
  [228] = {.lex_state = 366},
  [229] = {.lex_state = 331},
  [230] = {.lex_state = 366},
  [231] = {.lex_state = 366},
  [232] = {.lex_state = 366},
  [233] = {.lex_state = 367},
  [234] = {.lex_state = 331},
  [235] = {.lex_state = 563},
  [236] = {.lex_state = 366},
  [237] = {.lex_state = 367},
  [238] = {.lex_state = 331},
  [239] = {.lex_state = 331},
  [240] = {.lex_state = 331},
  [241] = {.lex_state = 331},
  [242] = {.lex_state = 331},
  [243] = {.lex_state = 581},
  [244] = {.lex_state = 582},
  [245] = {.lex_state = 456},
  [246] = {.lex_state = 331},
  [247] = {.lex_state = 331},
  [248] = {.lex_state = 456},
  [249] = {.lex_state = 456},
  [250] = {.lex_state = 563},
  [251] = {.lex_state = 603},
  [252] = {.lex_state = 331},
  [253] = {.lex_state = 331},
  [254] = {.lex_state = 331},
  [255] = {.lex_state = 563},
  [256] = {.lex_state = 581},
  [257] = {.lex_state = 564},
  [258] = {.lex_state = 331},
  [259] = {.lex_state = 564},
  [260] = {.lex_state = 564},
  [261] = {.lex_state = 564},
  [262] = {.lex_state = 366},
  [263] = {.lex_state = 331},
  [264] = {.lex_state = 331},
  [265] = {.lex_state = 331},
  [266] = {.lex_state = 331},
  [267] = {.lex_state = 366},
  [268] = {.lex_state = 331},
  [269] = {.lex_state = 331},
  [270] = {.lex_state = 331},
  [271] = {.lex_state = 366},
  [272] = {.lex_state = 366},
  [273] = {.lex_state = 366},
  [274] = {.lex_state = 367},
  [275] = {.lex_state = 563},
  [276] = {.lex_state = 331},
  [277] = {.lex_state = 331},
  [278] = {.lex_state = 331},
  [279] = {.lex_state = 331},
  [280] = {.lex_state = 331},
  [281] = {.lex_state = 581},
  [282] = {.lex_state = 576},
  [283] = {.lex_state = 331},
  [284] = {.lex_state = 576},
  [285] = {.lex_state = 576},
  [286] = {.lex_state = 576},
  [287] = {.lex_state = 331},
  [288] = {.lex_state = 604},
  [289] = {.lex_state = 331},
  [290] = {.lex_state = 331},
  [291] = {.lex_state = 366},
  [292] = {.lex_state = 331},
  [293] = {.lex_state = 331},
  [294] = {.lex_state = 366},
  [295] = {.lex_state = 366},
  [296] = {.lex_state = 331},
  [297] = {.lex_state = 563},
  [298] = {.lex_state = 563},
  [299] = {.lex_state = 366},
  [300] = {.lex_state = 331},
  [301] = {.lex_state = 331},
  [302] = {.lex_state = 563},
  [303] = {.lex_state = 584},
  [304] = {.lex_state = 366},
  [305] = {.lex_state = 584},
  [306] = {.lex_state = 331},
  [307] = {.lex_state = 331},
  [308] = {.lex_state = 331},
  [309] = {.lex_state = 564},
  [310] = {.lex_state = 576},
  [311] = {.lex_state = 331},
  [312] = {.lex_state = 331},
  [313] = {.lex_state = 331},
  [314] = {.lex_state = 331},
  [315] = {.lex_state = 331},
  [316] = {.lex_state = 331},
  [317] = {.lex_state = 331},
  [318] = {.lex_state = 331},
  [319] = {.lex_state = 331},
  [320] = {.lex_state = 456},
  [321] = {.lex_state = 331},
  [322] = {.lex_state = 456},
  [323] = {.lex_state = 331},
  [324] = {.lex_state = 564},
  [325] = {.lex_state = 331},
  [326] = {.lex_state = 576},
  [327] = {.lex_state = 331},
  [328] = {.lex_state = 366},
  [329] = {.lex_state = 331},
  [330] = {.lex_state = 331},
  [331] = {.lex_state = 456},
  [332] = {.lex_state = 630},
  [333] = {.lex_state = 456},
  [334] = {.lex_state = 331},
  [335] = {.lex_state = 331},
  [336] = {.lex_state = 366},
  [337] = {.lex_state = 331},
  [338] = {.lex_state = 331},
  [339] = {.lex_state = 331},
  [340] = {.lex_state = 366},
  [341] = {.lex_state = 331},
  [342] = {.lex_state = 331},
  [343] = {.lex_state = 331},
  [344] = {.lex_state = 366},
  [345] = {.lex_state = 366},
  [346] = {.lex_state = 331},
  [347] = {.lex_state = 366},
  [348] = {.lex_state = 366},
  [349] = {.lex_state = 366},
  [350] = {.lex_state = 367},
  [351] = {.lex_state = 563},
  [352] = {.lex_state = 366},
  [353] = {.lex_state = 367},
  [354] = {.lex_state = 604},
  [355] = {.lex_state = 331},
  [356] = {.lex_state = 366},
  [357] = {.lex_state = 331},
  [358] = {.lex_state = 331},
  [359] = {.lex_state = 603},
  [360] = {.lex_state = 331},
  [361] = {.lex_state = 564},
  [362] = {.lex_state = 564},
  [363] = {.lex_state = 331},
  [364] = {.lex_state = 563},
  [365] = {.lex_state = 331},
  [366] = {.lex_state = 331},
  [367] = {.lex_state = 456},
  [368] = {.lex_state = 331},
  [369] = {.lex_state = 564},
  [370] = {.lex_state = 331},
  [371] = {.lex_state = 576},
  [372] = {.lex_state = 331},
  [373] = {.lex_state = 366},
  [374] = {.lex_state = 331},
  [375] = {.lex_state = 331},
  [376] = {.lex_state = 576},
  [377] = {.lex_state = 576},
  [378] = {.lex_state = 366},
  [379] = {.lex_state = 331},
  [380] = {.lex_state = 331},
  [381] = {.lex_state = 331},
  [382] = {.lex_state = 366},
  [383] = {.lex_state = 331},
  [384] = {.lex_state = 331},
  [385] = {.lex_state = 366},
  [386] = {.lex_state = 366},
  [387] = {.lex_state = 366},
  [388] = {.lex_state = 367},
  [389] = {.lex_state = 563},
  [390] = {.lex_state = 331},
  [391] = {.lex_state = 366},
  [392] = {.lex_state = 604},
  [393] = {.lex_state = 604},
  [394] = {.lex_state = 637},
  [395] = {.lex_state = 646},
  [396] = {.lex_state = 637},
  [397] = {.lex_state = 637},
  [398] = {.lex_state = 604},
  [399] = {.lex_state = 650},
  [400] = {.lex_state = 653},
  [401] = {.lex_state = 637},
  [402] = {.lex_state = 637},
  [403] = {.lex_state = 331},
  [404] = {.lex_state = 331},
  [405] = {.lex_state = 331},
  [406] = {.lex_state = 331},
  [407] = {.lex_state = 331},
  [408] = {.lex_state = 331},
  [409] = {.lex_state = 366},
  [410] = {.lex_state = 331},
  [411] = {.lex_state = 331},
  [412] = {.lex_state = 331},
  [413] = {.lex_state = 660},
  [414] = {.lex_state = 331},
  [415] = {.lex_state = 331},
  [416] = {.lex_state = 331},
  [417] = {.lex_state = 331},
  [418] = {.lex_state = 366},
  [419] = {.lex_state = 563},
  [420] = {.lex_state = 563},
  [421] = {.lex_state = 331},
  [422] = {.lex_state = 584},
  [423] = {.lex_state = 456},
  [424] = {.lex_state = 564},
  [425] = {.lex_state = 576},
  [426] = {.lex_state = 331},
  [427] = {.lex_state = 366},
  [428] = {.lex_state = 331},
  [429] = {.lex_state = 331},
  [430] = {.lex_state = 564},
  [431] = {.lex_state = 576},
  [432] = {.lex_state = 331},
  [433] = {.lex_state = 331},
  [434] = {.lex_state = 331},
  [435] = {.lex_state = 456},
  [436] = {.lex_state = 331},
  [437] = {.lex_state = 456},
  [438] = {.lex_state = 456},
  [439] = {.lex_state = 456},
  [440] = {.lex_state = 564},
  [441] = {.lex_state = 564},
  [442] = {.lex_state = 456},
  [443] = {.lex_state = 576},
  [444] = {.lex_state = 576},
  [445] = {.lex_state = 331},
  [446] = {.lex_state = 331},
  [447] = {.lex_state = 331},
  [448] = {.lex_state = 630},
  [449] = {.lex_state = 456},
  [450] = {.lex_state = 604},
  [451] = {.lex_state = 661},
  [452] = {.lex_state = 604},
  [453] = {.lex_state = 637},
  [454] = {.lex_state = 630},
  [455] = {.lex_state = 456},
  [456] = {.lex_state = 331},
  [457] = {.lex_state = 331},
  [458] = {.lex_state = 331},
  [459] = {.lex_state = 331},
  [460] = {.lex_state = 331},
  [461] = {.lex_state = 366},
  [462] = {.lex_state = 331},
  [463] = {.lex_state = 331},
  [464] = {.lex_state = 456},
  [465] = {.lex_state = 456},
  [466] = {.lex_state = 331},
  [467] = {.lex_state = 331},
  [468] = {.lex_state = 366},
  [469] = {.lex_state = 331},
  [470] = {.lex_state = 331},
  [471] = {.lex_state = 331},
  [472] = {.lex_state = 366},
  [473] = {.lex_state = 331},
  [474] = {.lex_state = 366},
  [475] = {.lex_state = 366},
  [476] = {.lex_state = 604},
  [477] = {.lex_state = 637},
  [478] = {.lex_state = 331},
  [479] = {.lex_state = 331},
  [480] = {.lex_state = 564},
  [481] = {.lex_state = 331},
  [482] = {.lex_state = 456},
  [483] = {.lex_state = 331},
  [484] = {.lex_state = 576},
  [485] = {.lex_state = 456},
  [486] = {.lex_state = 576},
  [487] = {.lex_state = 564},
  [488] = {.lex_state = 564},
  [489] = {.lex_state = 576},
  [490] = {.lex_state = 576},
  [491] = {.lex_state = 576},
  [492] = {.lex_state = 331},
  [493] = {.lex_state = 331},
  [494] = {.lex_state = 331},
  [495] = {.lex_state = 331},
  [496] = {.lex_state = 331},
  [497] = {.lex_state = 331},
  [498] = {.lex_state = 366},
  [499] = {.lex_state = 331},
  [500] = {.lex_state = 331},
  [501] = {.lex_state = 576},
  [502] = {.lex_state = 366},
  [503] = {.lex_state = 331},
  [504] = {.lex_state = 331},
  [505] = {.lex_state = 331},
  [506] = {.lex_state = 366},
  [507] = {.lex_state = 331},
  [508] = {.lex_state = 604},
  [509] = {.lex_state = 637},
  [510] = {.lex_state = 637},
  [511] = {.lex_state = 331},
  [512] = {.lex_state = 637},
  [513] = {.lex_state = 604},
  [514] = {.lex_state = 637},
  [515] = {.lex_state = 637},
  [516] = {.lex_state = 637},
  [517] = {.lex_state = 637},
  [518] = {.lex_state = 650},
  [519] = {.lex_state = 331},
  [520] = {.lex_state = 604},
  [521] = {.lex_state = 604},
  [522] = {.lex_state = 604},
  [523] = {.lex_state = 604},
  [524] = {.lex_state = 604},
  [525] = {.lex_state = 604},
  [526] = {.lex_state = 604},
  [527] = {.lex_state = 604},
  [528] = {.lex_state = 604},
  [529] = {.lex_state = 604},
  [530] = {.lex_state = 331},
  [531] = {.lex_state = 331},
  [532] = {.lex_state = 331},
  [533] = {.lex_state = 331},
  [534] = {.lex_state = 331},
  [535] = {.lex_state = 366},
  [536] = {.lex_state = 584},
  [537] = {.lex_state = 366},
  [538] = {.lex_state = 331},
  [539] = {.lex_state = 660},
  [540] = {.lex_state = 660},
  [541] = {.lex_state = 331},
  [542] = {.lex_state = 331},
  [543] = {.lex_state = 331},
  [544] = {.lex_state = 331},
  [545] = {.lex_state = 366},
  [546] = {.lex_state = 366},
  [547] = {.lex_state = 604},
  [548] = {.lex_state = 331},
  [549] = {.lex_state = 456},
  [550] = {.lex_state = 331},
  [551] = {.lex_state = 331},
  [552] = {.lex_state = 331},
  [553] = {.lex_state = 456},
  [554] = {.lex_state = 564},
  [555] = {.lex_state = 576},
  [556] = {.lex_state = 366},
  [557] = {.lex_state = 331},
  [558] = {.lex_state = 456},
  [559] = {.lex_state = 456},
  [560] = {.lex_state = 456},
  [561] = {.lex_state = 456},
  [562] = {.lex_state = 564},
  [563] = {.lex_state = 456},
  [564] = {.lex_state = 576},
  [565] = {.lex_state = 456},
  [566] = {.lex_state = 331},
  [567] = {.lex_state = 366},
  [568] = {.lex_state = 456},
  [569] = {.lex_state = 604},
  [570] = {.lex_state = 331},
  [571] = {.lex_state = 637},
  [572] = {.lex_state = 630},
  [573] = {.lex_state = 604},
  [574] = {.lex_state = 604},
  [575] = {.lex_state = 604},
  [576] = {.lex_state = 604},
  [577] = {.lex_state = 604},
  [578] = {.lex_state = 604},
  [579] = {.lex_state = 604},
  [580] = {.lex_state = 604},
  [581] = {.lex_state = 604},
  [582] = {.lex_state = 604},
  [583] = {.lex_state = 456},
  [584] = {.lex_state = 630},
  [585] = {.lex_state = 456},
  [586] = {.lex_state = 331},
  [587] = {.lex_state = 331},
  [588] = {.lex_state = 564},
  [589] = {.lex_state = 576},
  [590] = {.lex_state = 331},
  [591] = {.lex_state = 331},
  [592] = {.lex_state = 331},
  [593] = {.lex_state = 456},
  [594] = {.lex_state = 331},
  [595] = {.lex_state = 331},
  [596] = {.lex_state = 331},
  [597] = {.lex_state = 331},
  [598] = {.lex_state = 331},
  [599] = {.lex_state = 331},
  [600] = {.lex_state = 456},
  [601] = {.lex_state = 331},
  [602] = {.lex_state = 331},
  [603] = {.lex_state = 604},
  [604] = {.lex_state = 604},
  [605] = {.lex_state = 604},
  [606] = {.lex_state = 604},
  [607] = {.lex_state = 604},
  [608] = {.lex_state = 604},
  [609] = {.lex_state = 604},
  [610] = {.lex_state = 604},
  [611] = {.lex_state = 604},
  [612] = {.lex_state = 604},
  [613] = {.lex_state = 564},
  [614] = {.lex_state = 576},
  [615] = {.lex_state = 456},
  [616] = {.lex_state = 456},
  [617] = {.lex_state = 576},
  [618] = {.lex_state = 564},
  [619] = {.lex_state = 576},
  [620] = {.lex_state = 576},
  [621] = {.lex_state = 576},
  [622] = {.lex_state = 331},
  [623] = {.lex_state = 366},
  [624] = {.lex_state = 576},
  [625] = {.lex_state = 331},
  [626] = {.lex_state = 564},
  [627] = {.lex_state = 576},
  [628] = {.lex_state = 331},
  [629] = {.lex_state = 331},
  [630] = {.lex_state = 331},
  [631] = {.lex_state = 331},
  [632] = {.lex_state = 331},
  [633] = {.lex_state = 331},
  [634] = {.lex_state = 331},
  [635] = {.lex_state = 331},
  [636] = {.lex_state = 576},
  [637] = {.lex_state = 637},
  [638] = {.lex_state = 604},
  [639] = {.lex_state = 604},
  [640] = {.lex_state = 604},
  [641] = {.lex_state = 604},
  [642] = {.lex_state = 604},
  [643] = {.lex_state = 604},
  [644] = {.lex_state = 604},
  [645] = {.lex_state = 604},
  [646] = {.lex_state = 604},
  [647] = {.lex_state = 604},
  [648] = {.lex_state = 637},
  [649] = {.lex_state = 637},
  [650] = {.lex_state = 637},
  [651] = {.lex_state = 637},
  [652] = {.lex_state = 637},
  [653] = {.lex_state = 650},
  [654] = {.lex_state = 637},
  [655] = {.lex_state = 604},
  [656] = {.lex_state = 637},
  [657] = {.lex_state = 637},
  [658] = {.lex_state = 637},
  [659] = {.lex_state = 637},
  [660] = {.lex_state = 637},
  [661] = {.lex_state = 637},
  [662] = {.lex_state = 637},
  [663] = {.lex_state = 637},
  [664] = {.lex_state = 637},
  [665] = {.lex_state = 637},
  [666] = {.lex_state = 331},
  [667] = {.lex_state = 331},
  [668] = {.lex_state = 366},
  [669] = {.lex_state = 331},
  [670] = {.lex_state = 331},
  [671] = {.lex_state = 660},
  [672] = {.lex_state = 331},
  [673] = {.lex_state = 331},
  [674] = {.lex_state = 331},
  [675] = {.lex_state = 604},
  [676] = {.lex_state = 637},
  [677] = {.lex_state = 331},
  [678] = {.lex_state = 331},
  [679] = {.lex_state = 456},
  [680] = {.lex_state = 331},
  [681] = {.lex_state = 331},
  [682] = {.lex_state = 331},
  [683] = {.lex_state = 456},
  [684] = {.lex_state = 456},
  [685] = {.lex_state = 456},
  [686] = {.lex_state = 456},
  [687] = {.lex_state = 456},
  [688] = {.lex_state = 456},
  [689] = {.lex_state = 331},
  [690] = {.lex_state = 637},
  [691] = {.lex_state = 630},
  [692] = {.lex_state = 630},
  [693] = {.lex_state = 637},
  [694] = {.lex_state = 637},
  [695] = {.lex_state = 637},
  [696] = {.lex_state = 637},
  [697] = {.lex_state = 637},
  [698] = {.lex_state = 637},
  [699] = {.lex_state = 637},
  [700] = {.lex_state = 637},
  [701] = {.lex_state = 637},
  [702] = {.lex_state = 456},
  [703] = {.lex_state = 456},
  [704] = {.lex_state = 564},
  [705] = {.lex_state = 576},
  [706] = {.lex_state = 331},
  [707] = {.lex_state = 366},
  [708] = {.lex_state = 456},
  [709] = {.lex_state = 331},
  [710] = {.lex_state = 331},
  [711] = {.lex_state = 564},
  [712] = {.lex_state = 576},
  [713] = {.lex_state = 331},
  [714] = {.lex_state = 331},
  [715] = {.lex_state = 456},
  [716] = {.lex_state = 331},
  [717] = {.lex_state = 637},
  [718] = {.lex_state = 637},
  [719] = {.lex_state = 637},
  [720] = {.lex_state = 637},
  [721] = {.lex_state = 637},
  [722] = {.lex_state = 637},
  [723] = {.lex_state = 637},
  [724] = {.lex_state = 637},
  [725] = {.lex_state = 637},
  [726] = {.lex_state = 576},
  [727] = {.lex_state = 456},
  [728] = {.lex_state = 576},
  [729] = {.lex_state = 576},
  [730] = {.lex_state = 576},
  [731] = {.lex_state = 576},
  [732] = {.lex_state = 331},
  [733] = {.lex_state = 456},
  [734] = {.lex_state = 564},
  [735] = {.lex_state = 576},
  [736] = {.lex_state = 331},
  [737] = {.lex_state = 366},
  [738] = {.lex_state = 576},
  [739] = {.lex_state = 331},
  [740] = {.lex_state = 564},
  [741] = {.lex_state = 576},
  [742] = {.lex_state = 331},
  [743] = {.lex_state = 331},
  [744] = {.lex_state = 637},
  [745] = {.lex_state = 637},
  [746] = {.lex_state = 637},
  [747] = {.lex_state = 637},
  [748] = {.lex_state = 637},
  [749] = {.lex_state = 637},
  [750] = {.lex_state = 637},
  [751] = {.lex_state = 637},
  [752] = {.lex_state = 637},
  [753] = {.lex_state = 637},
  [754] = {.lex_state = 637},
  [755] = {.lex_state = 604},
  [756] = {.lex_state = 604},
  [757] = {.lex_state = 604},
  [758] = {.lex_state = 604},
  [759] = {.lex_state = 604},
  [760] = {.lex_state = 604},
  [761] = {.lex_state = 604},
  [762] = {.lex_state = 604},
  [763] = {.lex_state = 604},
  [764] = {.lex_state = 604},
  [765] = {.lex_state = 604},
  [766] = {.lex_state = 331},
  [767] = {.lex_state = 366},
  [768] = {.lex_state = 331},
  [769] = {.lex_state = 660},
  [770] = {.lex_state = 331},
  [771] = {.lex_state = 604},
  [772] = {.lex_state = 604},
  [773] = {.lex_state = 604},
  [774] = {.lex_state = 604},
  [775] = {.lex_state = 604},
  [776] = {.lex_state = 604},
  [777] = {.lex_state = 604},
  [778] = {.lex_state = 604},
  [779] = {.lex_state = 604},
  [780] = {.lex_state = 604},
  [781] = {.lex_state = 331},
  [782] = {.lex_state = 331},
  [783] = {.lex_state = 331},
  [784] = {.lex_state = 456},
  [785] = {.lex_state = 456},
  [786] = {.lex_state = 456},
  [787] = {.lex_state = 331},
  [788] = {.lex_state = 604},
  [789] = {.lex_state = 456},
  [790] = {.lex_state = 456},
  [791] = {.lex_state = 456},
  [792] = {.lex_state = 331},
  [793] = {.lex_state = 456},
  [794] = {.lex_state = 456},
  [795] = {.lex_state = 564},
  [796] = {.lex_state = 576},
  [797] = {.lex_state = 366},
  [798] = {.lex_state = 456},
  [799] = {.lex_state = 331},
  [800] = {.lex_state = 604},
  [801] = {.lex_state = 576},
  [802] = {.lex_state = 576},
  [803] = {.lex_state = 576},
  [804] = {.lex_state = 331},
  [805] = {.lex_state = 456},
  [806] = {.lex_state = 576},
  [807] = {.lex_state = 576},
  [808] = {.lex_state = 331},
  [809] = {.lex_state = 456},
  [810] = {.lex_state = 564},
  [811] = {.lex_state = 576},
  [812] = {.lex_state = 366},
  [813] = {.lex_state = 576},
  [814] = {.lex_state = 604},
  [815] = {.lex_state = 637},
  [816] = {.lex_state = 637},
  [817] = {.lex_state = 637},
  [818] = {.lex_state = 637},
  [819] = {.lex_state = 637},
  [820] = {.lex_state = 637},
  [821] = {.lex_state = 637},
  [822] = {.lex_state = 637},
  [823] = {.lex_state = 637},
  [824] = {.lex_state = 637},
  [825] = {.lex_state = 637},
  [826] = {.lex_state = 637},
  [827] = {.lex_state = 637},
  [828] = {.lex_state = 637},
  [829] = {.lex_state = 637},
  [830] = {.lex_state = 637},
  [831] = {.lex_state = 637},
  [832] = {.lex_state = 637},
  [833] = {.lex_state = 637},
  [834] = {.lex_state = 637},
  [835] = {.lex_state = 331},
  [836] = {.lex_state = 331},
  [837] = {.lex_state = 456},
  [838] = {.lex_state = 456},
  [839] = {.lex_state = 637},
  [840] = {.lex_state = 456},
  [841] = {.lex_state = 331},
  [842] = {.lex_state = 456},
  [843] = {.lex_state = 456},
  [844] = {.lex_state = 456},
  [845] = {.lex_state = 331},
  [846] = {.lex_state = 456},
  [847] = {.lex_state = 637},
  [848] = {.lex_state = 576},
  [849] = {.lex_state = 576},
  [850] = {.lex_state = 576},
  [851] = {.lex_state = 331},
  [852] = {.lex_state = 456},
  [853] = {.lex_state = 576},
  [854] = {.lex_state = 576},
  [855] = {.lex_state = 331},
  [856] = {.lex_state = 637},
  [857] = {.lex_state = 604},
  [858] = {.lex_state = 604},
  [859] = {.lex_state = 331},
  [860] = {.lex_state = 456},
  [861] = {.lex_state = 456},
  [862] = {.lex_state = 456},
  [863] = {.lex_state = 331},
  [864] = {.lex_state = 576},
  [865] = {.lex_state = 576},
  [866] = {.lex_state = 576},
  [867] = {.lex_state = 331},
  [868] = {.lex_state = 637},
  [869] = {.lex_state = 637},
  [870] = {.lex_state = 456},
  [871] = {.lex_state = 456},
  [872] = {.lex_state = 576},
  [873] = {.lex_state = 576},
  [874] = {.lex_state = 456},
  [875] = {.lex_state = 576},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_unsafe] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_sealed] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_sbyte] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_ushort] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(3),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_ulong] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_delegate] = ACTIONS(1),
    [sym_void_keyword] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [sym_params_keyword] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_assembly] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [sym_const_keyword] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_typeof] = ACTIONS(1),
    [anon_sym_sizeof] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__hexadecimal_escape_sequence] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1),
    [sym__integer_type_suffix] = ACTIONS(3),
    [sym_null_literal] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__real_type_suffix] = ACTIONS(3),
    [sym__exponent_part] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_AT_DQUOTE] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_global] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
  },
  [1] = {
    [sym_compilation_unit] = STATE(16),
    [sym__type_declaration] = STATE(29),
    [sym_extern_alias_directive] = STATE(26),
    [sym_using_directive] = STATE(27),
    [sym_namespace_declaration] = STATE(29),
    [sym_class_declaration] = STATE(29),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(29),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(29),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(29),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(29),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(28),
    [aux_sym_compilation_unit_repeat1] = STATE(26),
    [aux_sym_compilation_unit_repeat2] = STATE(27),
    [aux_sym_compilation_unit_repeat3] = STATE(28),
    [aux_sym_compilation_unit_repeat4] = STATE(29),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(8),
    [anon_sym_1] = ACTIONS(10),
    [anon_sym_extern] = ACTIONS(12),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [2] = {
    [sym__type_declaration] = STATE(34),
    [sym_extern_alias_directive] = STATE(31),
    [sym_using_directive] = STATE(32),
    [sym_namespace_declaration] = STATE(34),
    [sym_class_declaration] = STATE(34),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(34),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(34),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(34),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(34),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(33),
    [aux_sym_compilation_unit_repeat1] = STATE(31),
    [aux_sym_compilation_unit_repeat2] = STATE(32),
    [aux_sym_compilation_unit_repeat3] = STATE(33),
    [aux_sym_compilation_unit_repeat4] = STATE(34),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_extern] = ACTIONS(12),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [3] = {
    [anon_sym_alias] = ACTIONS(42),
    [sym_comment] = ACTIONS(38),
  },
  [4] = {
    [sym_qualified_name] = STATE(39),
    [sym_alias_qualified_name] = STATE(40),
    [sym_name_equals] = STATE(41),
    [sym_static] = STATE(41),
    [anon_sym_static] = ACTIONS(44),
    [sym_global] = ACTIONS(46),
    [sym_identifier_name] = ACTIONS(48),
    [sym_comment] = ACTIONS(38),
  },
  [5] = {
    [sym_qualified_name] = STATE(42),
    [sym_alias_qualified_name] = STATE(40),
    [sym_global] = ACTIONS(46),
    [sym_identifier_name] = ACTIONS(50),
    [sym_comment] = ACTIONS(38),
  },
  [6] = {
    [anon_sym_class] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [7] = {
    [sym_identifier_name] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [8] = {
    [sym__class_modifiers] = STATE(46),
    [sym__struct_modifiers] = STATE(47),
    [anon_sym_partial] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_unsafe] = ACTIONS(58),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(58),
    [anon_sym_public] = ACTIONS(58),
    [anon_sym_protected] = ACTIONS(58),
    [anon_sym_internal] = ACTIONS(58),
    [anon_sym_private] = ACTIONS(58),
    [anon_sym_struct] = ACTIONS(60),
    [anon_sym_delegate] = ACTIONS(62),
    [sym_comment] = ACTIONS(38),
  },
  [9] = {
    [sym__class_modifiers] = STATE(46),
    [anon_sym_partial] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_unsafe] = ACTIONS(24),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [sym_comment] = ACTIONS(38),
  },
  [10] = {
    [sym__class_modifiers] = STATE(46),
    [sym__interface_modifiers] = STATE(49),
    [sym__struct_modifiers] = STATE(47),
    [anon_sym_partial] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_unsafe] = ACTIONS(58),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(64),
    [anon_sym_public] = ACTIONS(64),
    [anon_sym_protected] = ACTIONS(64),
    [anon_sym_internal] = ACTIONS(64),
    [anon_sym_private] = ACTIONS(64),
    [anon_sym_interface] = ACTIONS(66),
    [anon_sym_struct] = ACTIONS(60),
    [anon_sym_enum] = ACTIONS(68),
    [anon_sym_delegate] = ACTIONS(62),
    [sym_comment] = ACTIONS(38),
  },
  [11] = {
    [sym_identifier_name] = ACTIONS(70),
    [sym_comment] = ACTIONS(38),
  },
  [12] = {
    [sym_identifier_name] = ACTIONS(72),
    [sym_comment] = ACTIONS(38),
  },
  [13] = {
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(38),
  },
  [14] = {
    [sym_return_type] = STATE(56),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [15] = {
    [sym_attribute_list] = STATE(59),
    [sym_attribute] = STATE(60),
    [anon_sym_assembly] = ACTIONS(82),
    [anon_sym_module] = ACTIONS(82),
    [sym_identifier_name] = ACTIONS(84),
    [sym_comment] = ACTIONS(38),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_comment] = ACTIONS(38),
  },
  [17] = {
    [anon_sym_partial] = ACTIONS(88),
    [anon_sym_class] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [18] = {
    [anon_sym_partial] = ACTIONS(90),
    [anon_sym_class] = ACTIONS(90),
    [sym_comment] = ACTIONS(38),
  },
  [19] = {
    [anon_sym_interface] = ACTIONS(92),
    [sym_comment] = ACTIONS(38),
  },
  [20] = {
    [anon_sym_interface] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [21] = {
    [anon_sym_struct] = ACTIONS(96),
    [sym_comment] = ACTIONS(38),
  },
  [22] = {
    [anon_sym_struct] = ACTIONS(98),
    [sym_comment] = ACTIONS(38),
  },
  [23] = {
    [anon_sym_enum] = ACTIONS(100),
    [sym_comment] = ACTIONS(38),
  },
  [24] = {
    [anon_sym_delegate] = ACTIONS(102),
    [sym_comment] = ACTIONS(38),
  },
  [25] = {
    [sym_class_modifiers] = STATE(66),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_modifiers] = STATE(67),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_modifiers] = STATE(68),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_modifiers] = STATE(69),
    [sym_delegate_modifier] = STATE(70),
    [anon_sym_partial] = ACTIONS(88),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(92),
    [anon_sym_struct] = ACTIONS(96),
    [anon_sym_enum] = ACTIONS(100),
    [anon_sym_delegate] = ACTIONS(102),
    [sym_comment] = ACTIONS(38),
  },
  [26] = {
    [sym__type_declaration] = STATE(34),
    [sym_extern_alias_directive] = STATE(71),
    [sym_using_directive] = STATE(32),
    [sym_namespace_declaration] = STATE(34),
    [sym_class_declaration] = STATE(34),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(34),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(34),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(34),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(34),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(33),
    [aux_sym_compilation_unit_repeat1] = STATE(71),
    [aux_sym_compilation_unit_repeat2] = STATE(32),
    [aux_sym_compilation_unit_repeat3] = STATE(33),
    [aux_sym_compilation_unit_repeat4] = STATE(34),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_extern] = ACTIONS(12),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [27] = {
    [sym__type_declaration] = STATE(34),
    [sym_using_directive] = STATE(72),
    [sym_namespace_declaration] = STATE(34),
    [sym_class_declaration] = STATE(34),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(34),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(34),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(34),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(34),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(33),
    [aux_sym_compilation_unit_repeat2] = STATE(72),
    [aux_sym_compilation_unit_repeat3] = STATE(33),
    [aux_sym_compilation_unit_repeat4] = STATE(34),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [28] = {
    [sym__type_declaration] = STATE(34),
    [sym_namespace_declaration] = STATE(34),
    [sym_class_declaration] = STATE(34),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(34),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(34),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(34),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(34),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(73),
    [aux_sym_compilation_unit_repeat3] = STATE(73),
    [aux_sym_compilation_unit_repeat4] = STATE(34),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [29] = {
    [sym__type_declaration] = STATE(75),
    [sym_namespace_declaration] = STATE(75),
    [sym_class_declaration] = STATE(75),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(75),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(75),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(75),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(75),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [aux_sym_compilation_unit_repeat4] = STATE(75),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(38),
  },
  [30] = {
    [sym__attribute_section] = STATE(76),
    [aux_sym__attributes_repeat1] = STATE(76),
    [anon_sym_partial] = ACTIONS(106),
    [anon_sym_class] = ACTIONS(106),
    [anon_sym_unsafe] = ACTIONS(106),
    [anon_sym_abstract] = ACTIONS(106),
    [anon_sym_sealed] = ACTIONS(106),
    [anon_sym_static] = ACTIONS(106),
    [anon_sym_new] = ACTIONS(106),
    [anon_sym_public] = ACTIONS(106),
    [anon_sym_protected] = ACTIONS(106),
    [anon_sym_internal] = ACTIONS(106),
    [anon_sym_private] = ACTIONS(106),
    [anon_sym_interface] = ACTIONS(106),
    [anon_sym_struct] = ACTIONS(106),
    [anon_sym_enum] = ACTIONS(106),
    [anon_sym_delegate] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(38),
  },
  [31] = {
    [sym__type_declaration] = STATE(79),
    [sym_extern_alias_directive] = STATE(71),
    [sym_using_directive] = STATE(77),
    [sym_namespace_declaration] = STATE(79),
    [sym_class_declaration] = STATE(79),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(79),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(79),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(79),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(79),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(78),
    [aux_sym_compilation_unit_repeat1] = STATE(71),
    [aux_sym_compilation_unit_repeat2] = STATE(77),
    [aux_sym_compilation_unit_repeat3] = STATE(78),
    [aux_sym_compilation_unit_repeat4] = STATE(79),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_extern] = ACTIONS(12),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [32] = {
    [sym__type_declaration] = STATE(79),
    [sym_using_directive] = STATE(72),
    [sym_namespace_declaration] = STATE(79),
    [sym_class_declaration] = STATE(79),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(79),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(79),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(79),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(79),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(78),
    [aux_sym_compilation_unit_repeat2] = STATE(72),
    [aux_sym_compilation_unit_repeat3] = STATE(78),
    [aux_sym_compilation_unit_repeat4] = STATE(79),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [33] = {
    [sym__type_declaration] = STATE(79),
    [sym_namespace_declaration] = STATE(79),
    [sym_class_declaration] = STATE(79),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(79),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(79),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(79),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(79),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(73),
    [aux_sym_compilation_unit_repeat3] = STATE(73),
    [aux_sym_compilation_unit_repeat4] = STATE(79),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [34] = {
    [sym__type_declaration] = STATE(75),
    [sym_namespace_declaration] = STATE(75),
    [sym_class_declaration] = STATE(75),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(75),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(75),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(75),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(75),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [aux_sym_compilation_unit_repeat4] = STATE(75),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(38),
  },
  [35] = {
    [sym_identifier_name] = ACTIONS(110),
    [sym_comment] = ACTIONS(38),
  },
  [36] = {
    [sym_global] = ACTIONS(112),
    [sym_identifier_name] = ACTIONS(112),
    [sym_comment] = ACTIONS(38),
  },
  [37] = {
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [sym_comment] = ACTIONS(38),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(120),
    [sym_comment] = ACTIONS(38),
  },
  [39] = {
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(120),
    [sym_comment] = ACTIONS(38),
  },
  [40] = {
    [anon_sym_DOT] = ACTIONS(120),
    [sym_comment] = ACTIONS(38),
  },
  [41] = {
    [sym_qualified_name] = STATE(85),
    [sym_alias_qualified_name] = STATE(40),
    [sym_global] = ACTIONS(46),
    [sym_identifier_name] = ACTIONS(122),
    [sym_comment] = ACTIONS(38),
  },
  [42] = {
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(120),
    [sym_comment] = ACTIONS(38),
  },
  [43] = {
    [sym_identifier_name] = ACTIONS(126),
    [sym_comment] = ACTIONS(38),
  },
  [44] = {
    [sym_type_parameter_list] = STATE(90),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [45] = {
    [sym__class_modifiers] = STATE(46),
    [sym__struct_modifiers] = STATE(47),
    [anon_sym_partial] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_unsafe] = ACTIONS(58),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(58),
    [anon_sym_public] = ACTIONS(58),
    [anon_sym_protected] = ACTIONS(58),
    [anon_sym_internal] = ACTIONS(58),
    [anon_sym_private] = ACTIONS(58),
    [anon_sym_struct] = ACTIONS(60),
    [sym_comment] = ACTIONS(38),
  },
  [46] = {
    [anon_sym_partial] = ACTIONS(132),
    [anon_sym_class] = ACTIONS(132),
    [sym_comment] = ACTIONS(38),
  },
  [47] = {
    [anon_sym_struct] = ACTIONS(134),
    [sym_comment] = ACTIONS(38),
  },
  [48] = {
    [sym__class_modifiers] = STATE(46),
    [sym__interface_modifiers] = STATE(49),
    [sym__struct_modifiers] = STATE(47),
    [anon_sym_partial] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_unsafe] = ACTIONS(58),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(64),
    [anon_sym_public] = ACTIONS(64),
    [anon_sym_protected] = ACTIONS(64),
    [anon_sym_internal] = ACTIONS(64),
    [anon_sym_private] = ACTIONS(64),
    [anon_sym_interface] = ACTIONS(66),
    [anon_sym_struct] = ACTIONS(60),
    [sym_comment] = ACTIONS(38),
  },
  [49] = {
    [anon_sym_interface] = ACTIONS(136),
    [sym_comment] = ACTIONS(38),
  },
  [50] = {
    [sym_type_parameter_list] = STATE(92),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [51] = {
    [sym_type_parameter_list] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [52] = {
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(144),
    [sym_comment] = ACTIONS(38),
  },
  [53] = {
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(146),
    [sym_identifier_name] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [54] = {
    [sym_identifier_name] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [55] = {
    [sym_type_parameter_list] = STATE(97),
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(150),
    [sym_identifier_name] = ACTIONS(150),
    [sym_comment] = ACTIONS(38),
  },
  [56] = {
    [sym_identifier_name] = ACTIONS(152),
    [sym_comment] = ACTIONS(38),
  },
  [57] = {
    [anon_sym_COLON] = ACTIONS(154),
    [sym_comment] = ACTIONS(38),
  },
  [58] = {
    [sym_attribute_argument_list] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(156),
    [sym_comment] = ACTIONS(38),
  },
  [59] = {
    [anon_sym_RBRACK] = ACTIONS(160),
    [sym_comment] = ACTIONS(38),
  },
  [60] = {
    [aux_sym_attribute_list_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(38),
  },
  [61] = {
    [anon_sym_class] = ACTIONS(166),
    [sym_comment] = ACTIONS(38),
  },
  [62] = {
    [sym_identifier_name] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [63] = {
    [sym_identifier_name] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [64] = {
    [sym_identifier_name] = ACTIONS(172),
    [sym_comment] = ACTIONS(38),
  },
  [65] = {
    [sym_return_type] = STATE(109),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [66] = {
    [anon_sym_partial] = ACTIONS(174),
    [anon_sym_class] = ACTIONS(166),
    [sym_comment] = ACTIONS(38),
  },
  [67] = {
    [anon_sym_interface] = ACTIONS(176),
    [sym_comment] = ACTIONS(38),
  },
  [68] = {
    [anon_sym_struct] = ACTIONS(178),
    [sym_comment] = ACTIONS(38),
  },
  [69] = {
    [anon_sym_enum] = ACTIONS(180),
    [sym_comment] = ACTIONS(38),
  },
  [70] = {
    [anon_sym_delegate] = ACTIONS(182),
    [sym_comment] = ACTIONS(38),
  },
  [71] = {
    [sym_extern_alias_directive] = STATE(71),
    [aux_sym_compilation_unit_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_extern] = ACTIONS(186),
    [anon_sym_using] = ACTIONS(184),
    [anon_sym_namespace] = ACTIONS(184),
    [anon_sym_partial] = ACTIONS(184),
    [anon_sym_class] = ACTIONS(184),
    [anon_sym_unsafe] = ACTIONS(184),
    [anon_sym_abstract] = ACTIONS(184),
    [anon_sym_sealed] = ACTIONS(184),
    [anon_sym_static] = ACTIONS(184),
    [anon_sym_new] = ACTIONS(184),
    [anon_sym_public] = ACTIONS(184),
    [anon_sym_protected] = ACTIONS(184),
    [anon_sym_internal] = ACTIONS(184),
    [anon_sym_private] = ACTIONS(184),
    [anon_sym_interface] = ACTIONS(184),
    [anon_sym_struct] = ACTIONS(184),
    [anon_sym_enum] = ACTIONS(184),
    [anon_sym_delegate] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [sym_comment] = ACTIONS(38),
  },
  [72] = {
    [sym_using_directive] = STATE(72),
    [aux_sym_compilation_unit_repeat2] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_using] = ACTIONS(191),
    [anon_sym_namespace] = ACTIONS(189),
    [anon_sym_partial] = ACTIONS(189),
    [anon_sym_class] = ACTIONS(189),
    [anon_sym_unsafe] = ACTIONS(189),
    [anon_sym_abstract] = ACTIONS(189),
    [anon_sym_sealed] = ACTIONS(189),
    [anon_sym_static] = ACTIONS(189),
    [anon_sym_new] = ACTIONS(189),
    [anon_sym_public] = ACTIONS(189),
    [anon_sym_protected] = ACTIONS(189),
    [anon_sym_internal] = ACTIONS(189),
    [anon_sym_private] = ACTIONS(189),
    [anon_sym_interface] = ACTIONS(189),
    [anon_sym_struct] = ACTIONS(189),
    [anon_sym_enum] = ACTIONS(189),
    [anon_sym_delegate] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_comment] = ACTIONS(38),
  },
  [73] = {
    [sym__global_attributes] = STATE(73),
    [aux_sym_compilation_unit_repeat3] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_namespace] = ACTIONS(194),
    [anon_sym_partial] = ACTIONS(194),
    [anon_sym_class] = ACTIONS(194),
    [anon_sym_unsafe] = ACTIONS(194),
    [anon_sym_abstract] = ACTIONS(194),
    [anon_sym_sealed] = ACTIONS(194),
    [anon_sym_static] = ACTIONS(194),
    [anon_sym_new] = ACTIONS(194),
    [anon_sym_public] = ACTIONS(194),
    [anon_sym_protected] = ACTIONS(194),
    [anon_sym_internal] = ACTIONS(194),
    [anon_sym_private] = ACTIONS(194),
    [anon_sym_interface] = ACTIONS(194),
    [anon_sym_struct] = ACTIONS(194),
    [anon_sym_enum] = ACTIONS(194),
    [anon_sym_delegate] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(196),
    [sym_comment] = ACTIONS(38),
  },
  [74] = {
    [sym_attribute_list] = STATE(59),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(199),
    [sym_comment] = ACTIONS(38),
  },
  [75] = {
    [sym__type_declaration] = STATE(75),
    [sym_namespace_declaration] = STATE(75),
    [sym_class_declaration] = STATE(75),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(75),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(75),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(75),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(75),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [aux_sym_compilation_unit_repeat4] = STATE(75),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_namespace] = ACTIONS(203),
    [anon_sym_partial] = ACTIONS(206),
    [anon_sym_class] = ACTIONS(209),
    [anon_sym_unsafe] = ACTIONS(212),
    [anon_sym_abstract] = ACTIONS(215),
    [anon_sym_sealed] = ACTIONS(215),
    [anon_sym_static] = ACTIONS(215),
    [anon_sym_new] = ACTIONS(218),
    [anon_sym_public] = ACTIONS(218),
    [anon_sym_protected] = ACTIONS(218),
    [anon_sym_internal] = ACTIONS(218),
    [anon_sym_private] = ACTIONS(218),
    [anon_sym_interface] = ACTIONS(221),
    [anon_sym_struct] = ACTIONS(224),
    [anon_sym_enum] = ACTIONS(227),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(233),
    [sym_comment] = ACTIONS(38),
  },
  [76] = {
    [sym__attribute_section] = STATE(76),
    [aux_sym__attributes_repeat1] = STATE(76),
    [anon_sym_partial] = ACTIONS(236),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(236),
    [anon_sym_abstract] = ACTIONS(236),
    [anon_sym_sealed] = ACTIONS(236),
    [anon_sym_static] = ACTIONS(236),
    [anon_sym_new] = ACTIONS(236),
    [anon_sym_public] = ACTIONS(236),
    [anon_sym_protected] = ACTIONS(236),
    [anon_sym_internal] = ACTIONS(236),
    [anon_sym_private] = ACTIONS(236),
    [anon_sym_interface] = ACTIONS(236),
    [anon_sym_struct] = ACTIONS(236),
    [anon_sym_enum] = ACTIONS(236),
    [anon_sym_delegate] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(238),
    [sym_comment] = ACTIONS(38),
  },
  [77] = {
    [sym__type_declaration] = STATE(117),
    [sym_using_directive] = STATE(72),
    [sym_namespace_declaration] = STATE(117),
    [sym_class_declaration] = STATE(117),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(117),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(117),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(117),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(117),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(116),
    [aux_sym_compilation_unit_repeat2] = STATE(72),
    [aux_sym_compilation_unit_repeat3] = STATE(116),
    [aux_sym_compilation_unit_repeat4] = STATE(117),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [78] = {
    [sym__type_declaration] = STATE(117),
    [sym_namespace_declaration] = STATE(117),
    [sym_class_declaration] = STATE(117),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(117),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(117),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(117),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(117),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(73),
    [aux_sym_compilation_unit_repeat3] = STATE(73),
    [aux_sym_compilation_unit_repeat4] = STATE(117),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [79] = {
    [sym__type_declaration] = STATE(75),
    [sym_namespace_declaration] = STATE(75),
    [sym_class_declaration] = STATE(75),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(75),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(75),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(75),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(75),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [aux_sym_compilation_unit_repeat4] = STATE(75),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(38),
  },
  [80] = {
    [anon_sym_SEMI] = ACTIONS(243),
    [sym_comment] = ACTIONS(38),
  },
  [81] = {
    [sym_identifier_name] = ACTIONS(245),
    [sym_comment] = ACTIONS(38),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_using] = ACTIONS(247),
    [anon_sym_namespace] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_partial] = ACTIONS(247),
    [anon_sym_class] = ACTIONS(247),
    [anon_sym_unsafe] = ACTIONS(247),
    [anon_sym_abstract] = ACTIONS(247),
    [anon_sym_sealed] = ACTIONS(247),
    [anon_sym_static] = ACTIONS(247),
    [anon_sym_new] = ACTIONS(247),
    [anon_sym_public] = ACTIONS(247),
    [anon_sym_protected] = ACTIONS(247),
    [anon_sym_internal] = ACTIONS(247),
    [anon_sym_private] = ACTIONS(247),
    [anon_sym_interface] = ACTIONS(247),
    [anon_sym_struct] = ACTIONS(247),
    [anon_sym_enum] = ACTIONS(247),
    [anon_sym_delegate] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [sym_comment] = ACTIONS(38),
  },
  [83] = {
    [sym_global] = ACTIONS(249),
    [sym_identifier_name] = ACTIONS(249),
    [sym_comment] = ACTIONS(38),
  },
  [84] = {
    [sym_identifier_name] = ACTIONS(251),
    [sym_comment] = ACTIONS(38),
  },
  [85] = {
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(120),
    [sym_comment] = ACTIONS(38),
  },
  [86] = {
    [sym__type_declaration] = STATE(123),
    [sym_using_directive] = STATE(123),
    [sym_namespace_declaration] = STATE(123),
    [sym_class_declaration] = STATE(123),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(123),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(123),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(123),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(123),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [aux_sym_namespace_declaration_repeat1] = STATE(123),
    [aux_sym__attributes_repeat1] = STATE(30),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(38),
  },
  [87] = {
    [sym_type_parameter_list] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [88] = {
    [sym__type_declaration] = STATE(152),
    [sym_class_declaration] = STATE(152),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(152),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(152),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(152),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(152),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(152),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(152),
    [sym_method_declaration] = STATE(152),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(152),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [89] = {
    [sym__type] = STATE(154),
    [sym_generic_name] = STATE(154),
    [sym_predefined_type] = STATE(154),
    [sym_type_parameter] = STATE(155),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [90] = {
    [anon_sym_LBRACE] = ACTIONS(257),
    [sym_comment] = ACTIONS(38),
  },
  [91] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(163),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(163),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [92] = {
    [anon_sym_LBRACE] = ACTIONS(295),
    [sym_comment] = ACTIONS(38),
  },
  [93] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(184),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(184),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(184),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(184),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(184),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(184),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(38),
  },
  [95] = {
    [sym_enum_member_declaration] = STATE(189),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [96] = {
    [sym__integral_type] = STATE(192),
    [anon_sym_sbyte] = ACTIONS(323),
    [anon_sym_byte] = ACTIONS(323),
    [anon_sym_short] = ACTIONS(323),
    [anon_sym_ushort] = ACTIONS(323),
    [anon_sym_int] = ACTIONS(323),
    [anon_sym_uint] = ACTIONS(323),
    [anon_sym_long] = ACTIONS(323),
    [anon_sym_ulong] = ACTIONS(323),
    [anon_sym_char] = ACTIONS(323),
    [sym_comment] = ACTIONS(38),
  },
  [97] = {
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [sym_identifier_name] = ACTIONS(325),
    [sym_comment] = ACTIONS(38),
  },
  [98] = {
    [sym_parameter_list] = STATE(194),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [99] = {
    [sym_attribute_list] = STATE(195),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(199),
    [sym_comment] = ACTIONS(38),
  },
  [100] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [sym_comment] = ACTIONS(38),
  },
  [101] = {
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym_comment] = ACTIONS(38),
  },
  [102] = {
    [anon_sym_partial] = ACTIONS(333),
    [anon_sym_class] = ACTIONS(333),
    [anon_sym_unsafe] = ACTIONS(333),
    [anon_sym_abstract] = ACTIONS(333),
    [anon_sym_sealed] = ACTIONS(333),
    [anon_sym_static] = ACTIONS(333),
    [anon_sym_new] = ACTIONS(333),
    [anon_sym_public] = ACTIONS(333),
    [anon_sym_protected] = ACTIONS(333),
    [anon_sym_internal] = ACTIONS(333),
    [anon_sym_private] = ACTIONS(333),
    [anon_sym_interface] = ACTIONS(333),
    [anon_sym_struct] = ACTIONS(333),
    [anon_sym_enum] = ACTIONS(333),
    [anon_sym_sbyte] = ACTIONS(333),
    [anon_sym_byte] = ACTIONS(333),
    [anon_sym_short] = ACTIONS(333),
    [anon_sym_ushort] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_uint] = ACTIONS(333),
    [anon_sym_long] = ACTIONS(333),
    [anon_sym_ulong] = ACTIONS(333),
    [anon_sym_char] = ACTIONS(333),
    [anon_sym_delegate] = ACTIONS(333),
    [sym_void_keyword] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_const_keyword] = ACTIONS(333),
    [anon_sym_readonly] = ACTIONS(333),
    [anon_sym_volatile] = ACTIONS(333),
    [anon_sym_bool] = ACTIONS(333),
    [anon_sym_decimal] = ACTIONS(333),
    [anon_sym_double] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_object] = ACTIONS(333),
    [anon_sym_string] = ACTIONS(333),
    [sym_identifier_name] = ACTIONS(333),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(333),
  },
  [103] = {
    [sym_attribute] = STATE(197),
    [sym_identifier_name] = ACTIONS(199),
    [sym_comment] = ACTIONS(38),
  },
  [104] = {
    [aux_sym_attribute_list_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_comment] = ACTIONS(38),
  },
  [105] = {
    [sym_identifier_name] = ACTIONS(339),
    [sym_comment] = ACTIONS(38),
  },
  [106] = {
    [sym_type_parameter_list] = STATE(200),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [107] = {
    [sym_type_parameter_list] = STATE(201),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [108] = {
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(343),
    [sym_comment] = ACTIONS(38),
  },
  [109] = {
    [sym_identifier_name] = ACTIONS(345),
    [sym_comment] = ACTIONS(38),
  },
  [110] = {
    [anon_sym_class] = ACTIONS(347),
    [sym_comment] = ACTIONS(38),
  },
  [111] = {
    [sym_identifier_name] = ACTIONS(349),
    [sym_comment] = ACTIONS(38),
  },
  [112] = {
    [sym_identifier_name] = ACTIONS(351),
    [sym_comment] = ACTIONS(38),
  },
  [113] = {
    [sym_identifier_name] = ACTIONS(353),
    [sym_comment] = ACTIONS(38),
  },
  [114] = {
    [sym_return_type] = STATE(209),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [115] = {
    [anon_sym_assembly] = ACTIONS(355),
    [anon_sym_module] = ACTIONS(355),
    [sym_comment] = ACTIONS(38),
  },
  [116] = {
    [sym__type_declaration] = STATE(210),
    [sym_namespace_declaration] = STATE(210),
    [sym_class_declaration] = STATE(210),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(210),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(210),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(210),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(210),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [sym__global_attributes] = STATE(73),
    [aux_sym_compilation_unit_repeat3] = STATE(73),
    [aux_sym_compilation_unit_repeat4] = STATE(210),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [117] = {
    [sym__type_declaration] = STATE(75),
    [sym_namespace_declaration] = STATE(75),
    [sym_class_declaration] = STATE(75),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(75),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(75),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(75),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(75),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [aux_sym_compilation_unit_repeat4] = STATE(75),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(38),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_extern] = ACTIONS(359),
    [anon_sym_using] = ACTIONS(359),
    [anon_sym_namespace] = ACTIONS(359),
    [anon_sym_partial] = ACTIONS(359),
    [anon_sym_class] = ACTIONS(359),
    [anon_sym_unsafe] = ACTIONS(359),
    [anon_sym_abstract] = ACTIONS(359),
    [anon_sym_sealed] = ACTIONS(359),
    [anon_sym_static] = ACTIONS(359),
    [anon_sym_new] = ACTIONS(359),
    [anon_sym_public] = ACTIONS(359),
    [anon_sym_protected] = ACTIONS(359),
    [anon_sym_internal] = ACTIONS(359),
    [anon_sym_private] = ACTIONS(359),
    [anon_sym_interface] = ACTIONS(359),
    [anon_sym_struct] = ACTIONS(359),
    [anon_sym_enum] = ACTIONS(359),
    [anon_sym_delegate] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [sym_comment] = ACTIONS(38),
  },
  [119] = {
    [anon_sym_DOT] = ACTIONS(361),
    [sym_comment] = ACTIONS(38),
  },
  [120] = {
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(363),
    [sym_comment] = ACTIONS(38),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_using] = ACTIONS(365),
    [anon_sym_namespace] = ACTIONS(365),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_partial] = ACTIONS(365),
    [anon_sym_class] = ACTIONS(365),
    [anon_sym_unsafe] = ACTIONS(365),
    [anon_sym_abstract] = ACTIONS(365),
    [anon_sym_sealed] = ACTIONS(365),
    [anon_sym_static] = ACTIONS(365),
    [anon_sym_new] = ACTIONS(365),
    [anon_sym_public] = ACTIONS(365),
    [anon_sym_protected] = ACTIONS(365),
    [anon_sym_internal] = ACTIONS(365),
    [anon_sym_private] = ACTIONS(365),
    [anon_sym_interface] = ACTIONS(365),
    [anon_sym_struct] = ACTIONS(365),
    [anon_sym_enum] = ACTIONS(365),
    [anon_sym_delegate] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [sym_comment] = ACTIONS(38),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_using] = ACTIONS(367),
    [anon_sym_namespace] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(367),
    [anon_sym_partial] = ACTIONS(367),
    [anon_sym_class] = ACTIONS(367),
    [anon_sym_unsafe] = ACTIONS(367),
    [anon_sym_abstract] = ACTIONS(367),
    [anon_sym_sealed] = ACTIONS(367),
    [anon_sym_static] = ACTIONS(367),
    [anon_sym_new] = ACTIONS(367),
    [anon_sym_public] = ACTIONS(367),
    [anon_sym_protected] = ACTIONS(367),
    [anon_sym_internal] = ACTIONS(367),
    [anon_sym_private] = ACTIONS(367),
    [anon_sym_interface] = ACTIONS(367),
    [anon_sym_struct] = ACTIONS(367),
    [anon_sym_enum] = ACTIONS(367),
    [anon_sym_delegate] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(367),
    [sym_comment] = ACTIONS(38),
  },
  [123] = {
    [sym__type_declaration] = STATE(212),
    [sym_using_directive] = STATE(212),
    [sym_namespace_declaration] = STATE(212),
    [sym_class_declaration] = STATE(212),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(212),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(212),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(212),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(212),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [aux_sym_namespace_declaration_repeat1] = STATE(212),
    [aux_sym__attributes_repeat1] = STATE(30),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(38),
  },
  [124] = {
    [sym__type_declaration] = STATE(214),
    [sym_class_declaration] = STATE(214),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(214),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(214),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(214),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(214),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(214),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(214),
    [sym_method_declaration] = STATE(214),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(214),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(371),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [125] = {
    [anon_sym_LBRACE] = ACTIONS(373),
    [sym_comment] = ACTIONS(38),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_using] = ACTIONS(375),
    [anon_sym_namespace] = ACTIONS(375),
    [anon_sym_RBRACE] = ACTIONS(375),
    [anon_sym_partial] = ACTIONS(375),
    [anon_sym_class] = ACTIONS(375),
    [anon_sym_unsafe] = ACTIONS(375),
    [anon_sym_abstract] = ACTIONS(375),
    [anon_sym_sealed] = ACTIONS(375),
    [anon_sym_static] = ACTIONS(375),
    [anon_sym_new] = ACTIONS(375),
    [anon_sym_public] = ACTIONS(375),
    [anon_sym_protected] = ACTIONS(375),
    [anon_sym_internal] = ACTIONS(375),
    [anon_sym_private] = ACTIONS(375),
    [anon_sym_interface] = ACTIONS(375),
    [anon_sym_struct] = ACTIONS(375),
    [anon_sym_enum] = ACTIONS(375),
    [anon_sym_delegate] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [sym_comment] = ACTIONS(38),
  },
  [127] = {
    [anon_sym_class] = ACTIONS(377),
    [sym_comment] = ACTIONS(38),
  },
  [128] = {
    [sym_identifier_name] = ACTIONS(379),
    [sym_comment] = ACTIONS(38),
  },
  [129] = {
    [sym__class_modifiers] = STATE(46),
    [sym__struct_modifiers] = STATE(47),
    [sym__field_modifiers] = STATE(219),
    [anon_sym_partial] = ACTIONS(381),
    [anon_sym_class] = ACTIONS(381),
    [anon_sym_unsafe] = ACTIONS(383),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(383),
    [anon_sym_public] = ACTIONS(383),
    [anon_sym_protected] = ACTIONS(383),
    [anon_sym_internal] = ACTIONS(383),
    [anon_sym_private] = ACTIONS(383),
    [anon_sym_struct] = ACTIONS(385),
    [anon_sym_sbyte] = ACTIONS(387),
    [anon_sym_byte] = ACTIONS(387),
    [anon_sym_short] = ACTIONS(387),
    [anon_sym_ushort] = ACTIONS(387),
    [anon_sym_int] = ACTIONS(387),
    [anon_sym_uint] = ACTIONS(387),
    [anon_sym_long] = ACTIONS(387),
    [anon_sym_ulong] = ACTIONS(387),
    [anon_sym_char] = ACTIONS(387),
    [anon_sym_delegate] = ACTIONS(389),
    [sym_const_keyword] = ACTIONS(387),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(387),
    [anon_sym_decimal] = ACTIONS(387),
    [anon_sym_double] = ACTIONS(387),
    [anon_sym_float] = ACTIONS(387),
    [anon_sym_object] = ACTIONS(387),
    [anon_sym_string] = ACTIONS(387),
    [sym_identifier_name] = ACTIONS(387),
    [sym_comment] = ACTIONS(38),
  },
  [130] = {
    [sym__class_modifiers] = STATE(46),
    [sym__field_modifiers] = STATE(219),
    [anon_sym_partial] = ACTIONS(381),
    [anon_sym_class] = ACTIONS(381),
    [anon_sym_unsafe] = ACTIONS(269),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(269),
    [anon_sym_public] = ACTIONS(269),
    [anon_sym_protected] = ACTIONS(269),
    [anon_sym_internal] = ACTIONS(269),
    [anon_sym_private] = ACTIONS(269),
    [anon_sym_sbyte] = ACTIONS(387),
    [anon_sym_byte] = ACTIONS(387),
    [anon_sym_short] = ACTIONS(387),
    [anon_sym_ushort] = ACTIONS(387),
    [anon_sym_int] = ACTIONS(387),
    [anon_sym_uint] = ACTIONS(387),
    [anon_sym_long] = ACTIONS(387),
    [anon_sym_ulong] = ACTIONS(387),
    [anon_sym_char] = ACTIONS(387),
    [sym_const_keyword] = ACTIONS(387),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(387),
    [anon_sym_decimal] = ACTIONS(387),
    [anon_sym_double] = ACTIONS(387),
    [anon_sym_float] = ACTIONS(387),
    [anon_sym_object] = ACTIONS(387),
    [anon_sym_string] = ACTIONS(387),
    [sym_identifier_name] = ACTIONS(387),
    [sym_comment] = ACTIONS(38),
  },
  [131] = {
    [sym__class_modifiers] = STATE(46),
    [sym__interface_modifiers] = STATE(49),
    [sym__struct_modifiers] = STATE(47),
    [sym__field_modifiers] = STATE(219),
    [anon_sym_partial] = ACTIONS(381),
    [anon_sym_class] = ACTIONS(381),
    [anon_sym_unsafe] = ACTIONS(383),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(391),
    [anon_sym_public] = ACTIONS(391),
    [anon_sym_protected] = ACTIONS(391),
    [anon_sym_internal] = ACTIONS(391),
    [anon_sym_private] = ACTIONS(391),
    [anon_sym_interface] = ACTIONS(393),
    [anon_sym_struct] = ACTIONS(385),
    [anon_sym_enum] = ACTIONS(395),
    [anon_sym_sbyte] = ACTIONS(397),
    [anon_sym_byte] = ACTIONS(397),
    [anon_sym_short] = ACTIONS(397),
    [anon_sym_ushort] = ACTIONS(397),
    [anon_sym_int] = ACTIONS(397),
    [anon_sym_uint] = ACTIONS(397),
    [anon_sym_long] = ACTIONS(397),
    [anon_sym_ulong] = ACTIONS(397),
    [anon_sym_char] = ACTIONS(397),
    [anon_sym_delegate] = ACTIONS(389),
    [sym_void_keyword] = ACTIONS(400),
    [sym_const_keyword] = ACTIONS(387),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(397),
    [anon_sym_decimal] = ACTIONS(397),
    [anon_sym_double] = ACTIONS(397),
    [anon_sym_float] = ACTIONS(397),
    [anon_sym_object] = ACTIONS(397),
    [anon_sym_string] = ACTIONS(397),
    [sym_identifier_name] = ACTIONS(397),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(400),
  },
  [132] = {
    [sym_identifier_name] = ACTIONS(402),
    [sym_comment] = ACTIONS(38),
  },
  [133] = {
    [sym_identifier_name] = ACTIONS(404),
    [sym_comment] = ACTIONS(38),
  },
  [134] = {
    [sym_identifier_name] = ACTIONS(406),
    [sym_comment] = ACTIONS(38),
  },
  [135] = {
    [sym_return_type] = STATE(224),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [136] = {
    [sym_variable_declaration] = STATE(225),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [137] = {
    [sym__field_modifiers] = STATE(219),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(387),
    [anon_sym_byte] = ACTIONS(387),
    [anon_sym_short] = ACTIONS(387),
    [anon_sym_ushort] = ACTIONS(387),
    [anon_sym_int] = ACTIONS(387),
    [anon_sym_uint] = ACTIONS(387),
    [anon_sym_long] = ACTIONS(387),
    [anon_sym_ulong] = ACTIONS(387),
    [anon_sym_char] = ACTIONS(387),
    [sym_const_keyword] = ACTIONS(387),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(387),
    [anon_sym_decimal] = ACTIONS(387),
    [anon_sym_double] = ACTIONS(387),
    [anon_sym_float] = ACTIONS(387),
    [anon_sym_object] = ACTIONS(387),
    [anon_sym_string] = ACTIONS(387),
    [sym_identifier_name] = ACTIONS(387),
    [sym_comment] = ACTIONS(38),
  },
  [138] = {
    [sym_parameter_list] = STATE(226),
    [sym_type_parameter_list] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(130),
    [sym_identifier_name] = ACTIONS(150),
    [sym_comment] = ACTIONS(38),
  },
  [139] = {
    [sym_return_type] = STATE(228),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [140] = {
    [anon_sym_partial] = ACTIONS(408),
    [anon_sym_class] = ACTIONS(377),
    [sym_comment] = ACTIONS(38),
  },
  [141] = {
    [anon_sym_interface] = ACTIONS(410),
    [sym_comment] = ACTIONS(38),
  },
  [142] = {
    [anon_sym_struct] = ACTIONS(412),
    [sym_comment] = ACTIONS(38),
  },
  [143] = {
    [anon_sym_enum] = ACTIONS(414),
    [sym_comment] = ACTIONS(38),
  },
  [144] = {
    [anon_sym_delegate] = ACTIONS(416),
    [sym_comment] = ACTIONS(38),
  },
  [145] = {
    [sym_identifier_name] = ACTIONS(418),
    [sym_comment] = ACTIONS(38),
  },
  [146] = {
    [sym_class_modifiers] = STATE(238),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_modifiers] = STATE(239),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_modifiers] = STATE(240),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_modifiers] = STATE(241),
    [sym_delegate_modifier] = STATE(242),
    [sym_return_type] = STATE(228),
    [sym_field_modifiers] = STATE(243),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(225),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_method_modifiers] = STATE(244),
    [anon_sym_partial] = ACTIONS(420),
    [anon_sym_class] = ACTIONS(422),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(424),
    [anon_sym_struct] = ACTIONS(426),
    [anon_sym_enum] = ACTIONS(428),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(430),
    [sym_void_keyword] = ACTIONS(78),
    [sym_const_keyword] = ACTIONS(432),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(434),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(436),
  },
  [147] = {
    [sym_variable_declaration] = STATE(225),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_const_keyword] = ACTIONS(432),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [148] = {
    [anon_sym_sbyte] = ACTIONS(438),
    [anon_sym_byte] = ACTIONS(438),
    [anon_sym_short] = ACTIONS(438),
    [anon_sym_ushort] = ACTIONS(438),
    [anon_sym_int] = ACTIONS(438),
    [anon_sym_uint] = ACTIONS(438),
    [anon_sym_long] = ACTIONS(438),
    [anon_sym_ulong] = ACTIONS(438),
    [anon_sym_char] = ACTIONS(438),
    [sym_const_keyword] = ACTIONS(438),
    [anon_sym_bool] = ACTIONS(438),
    [anon_sym_decimal] = ACTIONS(438),
    [anon_sym_double] = ACTIONS(438),
    [anon_sym_float] = ACTIONS(438),
    [anon_sym_object] = ACTIONS(438),
    [anon_sym_string] = ACTIONS(438),
    [sym_identifier_name] = ACTIONS(438),
    [sym_comment] = ACTIONS(38),
  },
  [149] = {
    [anon_sym_SEMI] = ACTIONS(440),
    [sym_comment] = ACTIONS(38),
  },
  [150] = {
    [sym_variable_declarator] = STATE(247),
    [sym_identifier_name] = ACTIONS(442),
    [sym_comment] = ACTIONS(38),
  },
  [151] = {
    [sym_return_type] = STATE(228),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(434),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(436),
  },
  [152] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(371),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [153] = {
    [sym__attribute_section] = STATE(249),
    [aux_sym__attributes_repeat1] = STATE(249),
    [anon_sym_partial] = ACTIONS(445),
    [anon_sym_class] = ACTIONS(445),
    [anon_sym_unsafe] = ACTIONS(445),
    [anon_sym_abstract] = ACTIONS(445),
    [anon_sym_sealed] = ACTIONS(445),
    [anon_sym_static] = ACTIONS(445),
    [anon_sym_new] = ACTIONS(445),
    [anon_sym_public] = ACTIONS(445),
    [anon_sym_protected] = ACTIONS(445),
    [anon_sym_internal] = ACTIONS(445),
    [anon_sym_private] = ACTIONS(445),
    [anon_sym_interface] = ACTIONS(445),
    [anon_sym_struct] = ACTIONS(445),
    [anon_sym_enum] = ACTIONS(445),
    [anon_sym_sbyte] = ACTIONS(445),
    [anon_sym_byte] = ACTIONS(445),
    [anon_sym_short] = ACTIONS(445),
    [anon_sym_ushort] = ACTIONS(445),
    [anon_sym_int] = ACTIONS(445),
    [anon_sym_uint] = ACTIONS(445),
    [anon_sym_long] = ACTIONS(445),
    [anon_sym_ulong] = ACTIONS(445),
    [anon_sym_char] = ACTIONS(445),
    [anon_sym_delegate] = ACTIONS(445),
    [sym_void_keyword] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(445),
    [anon_sym_readonly] = ACTIONS(445),
    [anon_sym_volatile] = ACTIONS(445),
    [anon_sym_bool] = ACTIONS(445),
    [anon_sym_decimal] = ACTIONS(445),
    [anon_sym_double] = ACTIONS(445),
    [anon_sym_float] = ACTIONS(445),
    [anon_sym_object] = ACTIONS(445),
    [anon_sym_string] = ACTIONS(445),
    [sym_identifier_name] = ACTIONS(445),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(445),
  },
  [154] = {
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [sym_comment] = ACTIONS(38),
  },
  [155] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(451),
    [sym_comment] = ACTIONS(38),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_using] = ACTIONS(453),
    [anon_sym_namespace] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_partial] = ACTIONS(453),
    [anon_sym_class] = ACTIONS(453),
    [anon_sym_unsafe] = ACTIONS(453),
    [anon_sym_abstract] = ACTIONS(453),
    [anon_sym_sealed] = ACTIONS(453),
    [anon_sym_static] = ACTIONS(453),
    [anon_sym_new] = ACTIONS(453),
    [anon_sym_public] = ACTIONS(453),
    [anon_sym_protected] = ACTIONS(453),
    [anon_sym_internal] = ACTIONS(453),
    [anon_sym_private] = ACTIONS(453),
    [anon_sym_interface] = ACTIONS(453),
    [anon_sym_struct] = ACTIONS(453),
    [anon_sym_enum] = ACTIONS(453),
    [anon_sym_delegate] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [sym_comment] = ACTIONS(38),
  },
  [157] = {
    [sym_attribute_list] = STATE(253),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(199),
    [sym_comment] = ACTIONS(38),
  },
  [158] = {
    [sym_variable_declaration] = STATE(254),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [159] = {
    [sym_field_modifiers] = STATE(256),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(254),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_const_keyword] = ACTIONS(455),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [160] = {
    [sym_variable_declaration] = STATE(254),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_const_keyword] = ACTIONS(455),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [161] = {
    [anon_sym_SEMI] = ACTIONS(457),
    [sym_comment] = ACTIONS(38),
  },
  [162] = {
    [sym_variable_declarator] = STATE(247),
    [sym_identifier_name] = ACTIONS(459),
    [sym_comment] = ACTIONS(38),
  },
  [163] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [164] = {
    [sym__attribute_section] = STATE(260),
    [aux_sym__attributes_repeat1] = STATE(260),
    [anon_sym_unsafe] = ACTIONS(445),
    [anon_sym_static] = ACTIONS(445),
    [anon_sym_new] = ACTIONS(445),
    [anon_sym_public] = ACTIONS(445),
    [anon_sym_protected] = ACTIONS(445),
    [anon_sym_internal] = ACTIONS(445),
    [anon_sym_private] = ACTIONS(445),
    [anon_sym_sbyte] = ACTIONS(445),
    [anon_sym_byte] = ACTIONS(445),
    [anon_sym_short] = ACTIONS(445),
    [anon_sym_ushort] = ACTIONS(445),
    [anon_sym_int] = ACTIONS(445),
    [anon_sym_uint] = ACTIONS(445),
    [anon_sym_long] = ACTIONS(445),
    [anon_sym_ulong] = ACTIONS(445),
    [anon_sym_char] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(445),
    [anon_sym_readonly] = ACTIONS(445),
    [anon_sym_volatile] = ACTIONS(445),
    [anon_sym_bool] = ACTIONS(445),
    [anon_sym_decimal] = ACTIONS(445),
    [anon_sym_double] = ACTIONS(445),
    [anon_sym_float] = ACTIONS(445),
    [anon_sym_object] = ACTIONS(445),
    [anon_sym_string] = ACTIONS(445),
    [sym_identifier_name] = ACTIONS(445),
    [sym_comment] = ACTIONS(38),
  },
  [165] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(261),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(261),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [anon_sym_using] = ACTIONS(463),
    [anon_sym_namespace] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_partial] = ACTIONS(463),
    [anon_sym_class] = ACTIONS(463),
    [anon_sym_unsafe] = ACTIONS(463),
    [anon_sym_abstract] = ACTIONS(463),
    [anon_sym_sealed] = ACTIONS(463),
    [anon_sym_static] = ACTIONS(463),
    [anon_sym_new] = ACTIONS(463),
    [anon_sym_public] = ACTIONS(463),
    [anon_sym_protected] = ACTIONS(463),
    [anon_sym_internal] = ACTIONS(463),
    [anon_sym_private] = ACTIONS(463),
    [anon_sym_interface] = ACTIONS(463),
    [anon_sym_struct] = ACTIONS(463),
    [anon_sym_enum] = ACTIONS(463),
    [anon_sym_delegate] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(463),
    [sym_comment] = ACTIONS(38),
  },
  [167] = {
    [anon_sym_class] = ACTIONS(465),
    [sym_comment] = ACTIONS(38),
  },
  [168] = {
    [sym_identifier_name] = ACTIONS(467),
    [sym_comment] = ACTIONS(38),
  },
  [169] = {
    [sym__class_modifiers] = STATE(46),
    [sym__interface_modifiers] = STATE(49),
    [sym__struct_modifiers] = STATE(47),
    [sym__field_modifiers] = STATE(219),
    [anon_sym_partial] = ACTIONS(381),
    [anon_sym_class] = ACTIONS(381),
    [anon_sym_unsafe] = ACTIONS(383),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(391),
    [anon_sym_public] = ACTIONS(391),
    [anon_sym_protected] = ACTIONS(391),
    [anon_sym_internal] = ACTIONS(391),
    [anon_sym_private] = ACTIONS(391),
    [anon_sym_interface] = ACTIONS(393),
    [anon_sym_struct] = ACTIONS(385),
    [anon_sym_enum] = ACTIONS(395),
    [anon_sym_sbyte] = ACTIONS(387),
    [anon_sym_byte] = ACTIONS(387),
    [anon_sym_short] = ACTIONS(387),
    [anon_sym_ushort] = ACTIONS(387),
    [anon_sym_int] = ACTIONS(387),
    [anon_sym_uint] = ACTIONS(387),
    [anon_sym_long] = ACTIONS(387),
    [anon_sym_ulong] = ACTIONS(387),
    [anon_sym_char] = ACTIONS(387),
    [anon_sym_delegate] = ACTIONS(389),
    [sym_const_keyword] = ACTIONS(387),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(387),
    [anon_sym_decimal] = ACTIONS(387),
    [anon_sym_double] = ACTIONS(387),
    [anon_sym_float] = ACTIONS(387),
    [anon_sym_object] = ACTIONS(387),
    [anon_sym_string] = ACTIONS(387),
    [sym_identifier_name] = ACTIONS(387),
    [sym_comment] = ACTIONS(38),
  },
  [170] = {
    [sym_identifier_name] = ACTIONS(469),
    [sym_comment] = ACTIONS(38),
  },
  [171] = {
    [sym_identifier_name] = ACTIONS(471),
    [sym_comment] = ACTIONS(38),
  },
  [172] = {
    [sym_identifier_name] = ACTIONS(473),
    [sym_comment] = ACTIONS(38),
  },
  [173] = {
    [sym_return_type] = STATE(267),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [174] = {
    [sym_attribute_list] = STATE(268),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(199),
    [sym_comment] = ACTIONS(38),
  },
  [175] = {
    [sym_variable_declaration] = STATE(269),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [176] = {
    [anon_sym_partial] = ACTIONS(475),
    [anon_sym_class] = ACTIONS(465),
    [sym_comment] = ACTIONS(38),
  },
  [177] = {
    [anon_sym_interface] = ACTIONS(477),
    [sym_comment] = ACTIONS(38),
  },
  [178] = {
    [anon_sym_struct] = ACTIONS(479),
    [sym_comment] = ACTIONS(38),
  },
  [179] = {
    [anon_sym_enum] = ACTIONS(481),
    [sym_comment] = ACTIONS(38),
  },
  [180] = {
    [anon_sym_delegate] = ACTIONS(483),
    [sym_comment] = ACTIONS(38),
  },
  [181] = {
    [sym_class_modifiers] = STATE(276),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_modifiers] = STATE(277),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_modifiers] = STATE(278),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_modifiers] = STATE(279),
    [sym_delegate_modifier] = STATE(280),
    [sym_field_modifiers] = STATE(281),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(269),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_partial] = ACTIONS(485),
    [anon_sym_class] = ACTIONS(487),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(489),
    [anon_sym_struct] = ACTIONS(491),
    [anon_sym_enum] = ACTIONS(493),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(495),
    [sym_const_keyword] = ACTIONS(497),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [182] = {
    [sym_variable_declaration] = STATE(269),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_const_keyword] = ACTIONS(497),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [183] = {
    [anon_sym_SEMI] = ACTIONS(499),
    [sym_comment] = ACTIONS(38),
  },
  [184] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [185] = {
    [sym__attribute_section] = STATE(285),
    [aux_sym__attributes_repeat1] = STATE(285),
    [anon_sym_partial] = ACTIONS(445),
    [anon_sym_class] = ACTIONS(445),
    [anon_sym_unsafe] = ACTIONS(445),
    [anon_sym_abstract] = ACTIONS(445),
    [anon_sym_sealed] = ACTIONS(445),
    [anon_sym_static] = ACTIONS(445),
    [anon_sym_new] = ACTIONS(445),
    [anon_sym_public] = ACTIONS(445),
    [anon_sym_protected] = ACTIONS(445),
    [anon_sym_internal] = ACTIONS(445),
    [anon_sym_private] = ACTIONS(445),
    [anon_sym_interface] = ACTIONS(445),
    [anon_sym_struct] = ACTIONS(445),
    [anon_sym_enum] = ACTIONS(445),
    [anon_sym_sbyte] = ACTIONS(445),
    [anon_sym_byte] = ACTIONS(445),
    [anon_sym_short] = ACTIONS(445),
    [anon_sym_ushort] = ACTIONS(445),
    [anon_sym_int] = ACTIONS(445),
    [anon_sym_uint] = ACTIONS(445),
    [anon_sym_long] = ACTIONS(445),
    [anon_sym_ulong] = ACTIONS(445),
    [anon_sym_char] = ACTIONS(445),
    [anon_sym_delegate] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(445),
    [anon_sym_readonly] = ACTIONS(445),
    [anon_sym_volatile] = ACTIONS(445),
    [anon_sym_bool] = ACTIONS(445),
    [anon_sym_decimal] = ACTIONS(445),
    [anon_sym_double] = ACTIONS(445),
    [anon_sym_float] = ACTIONS(445),
    [anon_sym_object] = ACTIONS(445),
    [anon_sym_string] = ACTIONS(445),
    [sym_identifier_name] = ACTIONS(445),
    [sym_comment] = ACTIONS(38),
  },
  [186] = {
    [sym__type_declaration] = STATE(286),
    [sym_class_declaration] = STATE(286),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(286),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(286),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(286),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(286),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(286),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(286),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [187] = {
    [sym_attribute_list] = STATE(287),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(199),
    [sym_comment] = ACTIONS(38),
  },
  [188] = {
    [sym_equals_value_clause] = STATE(289),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_EQ] = ACTIONS(505),
    [sym_comment] = ACTIONS(38),
  },
  [189] = {
    [aux_sym_enum_declaration_repeat1] = STATE(292),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [190] = {
    [sym_identifier_name] = ACTIONS(511),
    [sym_comment] = ACTIONS(38),
  },
  [191] = {
    [sym__attribute_section] = STATE(294),
    [aux_sym__attributes_repeat1] = STATE(294),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(106),
    [sym_comment] = ACTIONS(38),
  },
  [192] = {
    [anon_sym_LBRACE] = ACTIONS(513),
    [sym_comment] = ACTIONS(38),
  },
  [193] = {
    [sym__formal_parameter_list] = STATE(300),
    [sym_parameter] = STATE(301),
    [sym_parameter_modifier] = STATE(302),
    [sym_parameter_array] = STATE(300),
    [sym__attributes] = STATE(303),
    [sym__attribute_section] = STATE(305),
    [sym__type] = STATE(304),
    [sym_generic_name] = STATE(304),
    [sym_predefined_type] = STATE(304),
    [aux_sym__attributes_repeat1] = STATE(305),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_ref] = ACTIONS(517),
    [anon_sym_out] = ACTIONS(517),
    [anon_sym_this] = ACTIONS(517),
    [sym_params_keyword] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [194] = {
    [anon_sym_SEMI] = ACTIONS(523),
    [sym_comment] = ACTIONS(38),
  },
  [195] = {
    [anon_sym_RBRACK] = ACTIONS(525),
    [sym_comment] = ACTIONS(38),
  },
  [196] = {
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(527),
    [sym_comment] = ACTIONS(38),
  },
  [197] = {
    [anon_sym_COMMA] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [sym_comment] = ACTIONS(38),
  },
  [198] = {
    [aux_sym_attribute_list_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(529),
    [sym_comment] = ACTIONS(38),
  },
  [199] = {
    [sym_type_parameter_list] = STATE(308),
    [anon_sym_LBRACE] = ACTIONS(373),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [200] = {
    [anon_sym_LBRACE] = ACTIONS(534),
    [sym_comment] = ACTIONS(38),
  },
  [201] = {
    [anon_sym_LBRACE] = ACTIONS(536),
    [sym_comment] = ACTIONS(38),
  },
  [202] = {
    [sym_enum_member_declaration] = STATE(311),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [203] = {
    [sym__integral_type] = STATE(312),
    [anon_sym_sbyte] = ACTIONS(538),
    [anon_sym_byte] = ACTIONS(538),
    [anon_sym_short] = ACTIONS(538),
    [anon_sym_ushort] = ACTIONS(538),
    [anon_sym_int] = ACTIONS(538),
    [anon_sym_uint] = ACTIONS(538),
    [anon_sym_long] = ACTIONS(538),
    [anon_sym_ulong] = ACTIONS(538),
    [anon_sym_char] = ACTIONS(538),
    [sym_comment] = ACTIONS(38),
  },
  [204] = {
    [sym_parameter_list] = STATE(313),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [205] = {
    [sym_identifier_name] = ACTIONS(540),
    [sym_comment] = ACTIONS(38),
  },
  [206] = {
    [sym_type_parameter_list] = STATE(315),
    [anon_sym_LBRACE] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [207] = {
    [sym_type_parameter_list] = STATE(316),
    [anon_sym_LBRACE] = ACTIONS(536),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [208] = {
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(542),
    [sym_comment] = ACTIONS(38),
  },
  [209] = {
    [sym_identifier_name] = ACTIONS(544),
    [sym_comment] = ACTIONS(38),
  },
  [210] = {
    [sym__type_declaration] = STATE(75),
    [sym_namespace_declaration] = STATE(75),
    [sym_class_declaration] = STATE(75),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(75),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(75),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(75),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(75),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [aux_sym_compilation_unit_repeat4] = STATE(75),
    [aux_sym__attributes_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(546),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_partial] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(24),
    [anon_sym_sealed] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_new] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_struct] = ACTIONS(30),
    [anon_sym_enum] = ACTIONS(32),
    [anon_sym_delegate] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(38),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(548),
    [anon_sym_using] = ACTIONS(548),
    [anon_sym_namespace] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(548),
    [anon_sym_partial] = ACTIONS(548),
    [anon_sym_class] = ACTIONS(548),
    [anon_sym_unsafe] = ACTIONS(548),
    [anon_sym_abstract] = ACTIONS(548),
    [anon_sym_sealed] = ACTIONS(548),
    [anon_sym_static] = ACTIONS(548),
    [anon_sym_new] = ACTIONS(548),
    [anon_sym_public] = ACTIONS(548),
    [anon_sym_protected] = ACTIONS(548),
    [anon_sym_internal] = ACTIONS(548),
    [anon_sym_private] = ACTIONS(548),
    [anon_sym_interface] = ACTIONS(548),
    [anon_sym_struct] = ACTIONS(548),
    [anon_sym_enum] = ACTIONS(548),
    [anon_sym_delegate] = ACTIONS(548),
    [anon_sym_LBRACK] = ACTIONS(548),
    [sym_comment] = ACTIONS(38),
  },
  [212] = {
    [sym__type_declaration] = STATE(212),
    [sym_using_directive] = STATE(212),
    [sym_namespace_declaration] = STATE(212),
    [sym_class_declaration] = STATE(212),
    [sym_class_modifiers] = STATE(17),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(212),
    [sym_interface_modifiers] = STATE(19),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(212),
    [sym_struct_modifiers] = STATE(21),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(212),
    [sym_enum_modifiers] = STATE(23),
    [sym_delegate_declaration] = STATE(212),
    [sym_delegate_modifier] = STATE(24),
    [sym__attributes] = STATE(25),
    [sym__attribute_section] = STATE(30),
    [aux_sym_namespace_declaration_repeat1] = STATE(212),
    [aux_sym__attributes_repeat1] = STATE(30),
    [anon_sym_using] = ACTIONS(550),
    [anon_sym_namespace] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_partial] = ACTIONS(558),
    [anon_sym_class] = ACTIONS(561),
    [anon_sym_unsafe] = ACTIONS(564),
    [anon_sym_abstract] = ACTIONS(567),
    [anon_sym_sealed] = ACTIONS(567),
    [anon_sym_static] = ACTIONS(567),
    [anon_sym_new] = ACTIONS(570),
    [anon_sym_public] = ACTIONS(570),
    [anon_sym_protected] = ACTIONS(570),
    [anon_sym_internal] = ACTIONS(570),
    [anon_sym_private] = ACTIONS(570),
    [anon_sym_interface] = ACTIONS(573),
    [anon_sym_struct] = ACTIONS(576),
    [anon_sym_enum] = ACTIONS(579),
    [anon_sym_delegate] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(585),
    [sym_comment] = ACTIONS(38),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(588),
    [anon_sym_using] = ACTIONS(588),
    [anon_sym_namespace] = ACTIONS(588),
    [anon_sym_RBRACE] = ACTIONS(588),
    [anon_sym_partial] = ACTIONS(588),
    [anon_sym_class] = ACTIONS(588),
    [anon_sym_unsafe] = ACTIONS(588),
    [anon_sym_abstract] = ACTIONS(588),
    [anon_sym_sealed] = ACTIONS(588),
    [anon_sym_static] = ACTIONS(588),
    [anon_sym_new] = ACTIONS(588),
    [anon_sym_public] = ACTIONS(588),
    [anon_sym_protected] = ACTIONS(588),
    [anon_sym_internal] = ACTIONS(588),
    [anon_sym_private] = ACTIONS(588),
    [anon_sym_interface] = ACTIONS(588),
    [anon_sym_struct] = ACTIONS(588),
    [anon_sym_enum] = ACTIONS(588),
    [anon_sym_delegate] = ACTIONS(588),
    [anon_sym_LBRACK] = ACTIONS(588),
    [sym_comment] = ACTIONS(38),
  },
  [214] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(590),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [215] = {
    [sym__type_declaration] = STATE(320),
    [sym_class_declaration] = STATE(320),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(320),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(320),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(320),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(320),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(320),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(320),
    [sym_method_declaration] = STATE(320),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(320),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(590),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [216] = {
    [sym_identifier_name] = ACTIONS(592),
    [sym_comment] = ACTIONS(38),
  },
  [217] = {
    [sym_type_parameter_list] = STATE(323),
    [anon_sym_LBRACE] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [218] = {
    [sym__class_modifiers] = STATE(46),
    [sym__struct_modifiers] = STATE(47),
    [sym__field_modifiers] = STATE(219),
    [anon_sym_partial] = ACTIONS(381),
    [anon_sym_class] = ACTIONS(381),
    [anon_sym_unsafe] = ACTIONS(383),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(383),
    [anon_sym_public] = ACTIONS(383),
    [anon_sym_protected] = ACTIONS(383),
    [anon_sym_internal] = ACTIONS(383),
    [anon_sym_private] = ACTIONS(383),
    [anon_sym_struct] = ACTIONS(385),
    [anon_sym_sbyte] = ACTIONS(387),
    [anon_sym_byte] = ACTIONS(387),
    [anon_sym_short] = ACTIONS(387),
    [anon_sym_ushort] = ACTIONS(387),
    [anon_sym_int] = ACTIONS(387),
    [anon_sym_uint] = ACTIONS(387),
    [anon_sym_long] = ACTIONS(387),
    [anon_sym_ulong] = ACTIONS(387),
    [anon_sym_char] = ACTIONS(387),
    [sym_const_keyword] = ACTIONS(387),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(387),
    [anon_sym_decimal] = ACTIONS(387),
    [anon_sym_double] = ACTIONS(387),
    [anon_sym_float] = ACTIONS(387),
    [anon_sym_object] = ACTIONS(387),
    [anon_sym_string] = ACTIONS(387),
    [sym_identifier_name] = ACTIONS(387),
    [sym_comment] = ACTIONS(38),
  },
  [219] = {
    [anon_sym_sbyte] = ACTIONS(596),
    [anon_sym_byte] = ACTIONS(596),
    [anon_sym_short] = ACTIONS(596),
    [anon_sym_ushort] = ACTIONS(596),
    [anon_sym_int] = ACTIONS(596),
    [anon_sym_uint] = ACTIONS(596),
    [anon_sym_long] = ACTIONS(596),
    [anon_sym_ulong] = ACTIONS(596),
    [anon_sym_char] = ACTIONS(596),
    [sym_const_keyword] = ACTIONS(596),
    [anon_sym_bool] = ACTIONS(596),
    [anon_sym_decimal] = ACTIONS(596),
    [anon_sym_double] = ACTIONS(596),
    [anon_sym_float] = ACTIONS(596),
    [anon_sym_object] = ACTIONS(596),
    [anon_sym_string] = ACTIONS(596),
    [sym_identifier_name] = ACTIONS(596),
    [sym_comment] = ACTIONS(38),
  },
  [220] = {
    [sym__class_modifiers] = STATE(46),
    [sym__interface_modifiers] = STATE(49),
    [sym__struct_modifiers] = STATE(47),
    [sym__field_modifiers] = STATE(219),
    [anon_sym_partial] = ACTIONS(381),
    [anon_sym_class] = ACTIONS(381),
    [anon_sym_unsafe] = ACTIONS(383),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(391),
    [anon_sym_public] = ACTIONS(391),
    [anon_sym_protected] = ACTIONS(391),
    [anon_sym_internal] = ACTIONS(391),
    [anon_sym_private] = ACTIONS(391),
    [anon_sym_interface] = ACTIONS(393),
    [anon_sym_struct] = ACTIONS(385),
    [anon_sym_sbyte] = ACTIONS(387),
    [anon_sym_byte] = ACTIONS(387),
    [anon_sym_short] = ACTIONS(387),
    [anon_sym_ushort] = ACTIONS(387),
    [anon_sym_int] = ACTIONS(387),
    [anon_sym_uint] = ACTIONS(387),
    [anon_sym_long] = ACTIONS(387),
    [anon_sym_ulong] = ACTIONS(387),
    [anon_sym_char] = ACTIONS(387),
    [sym_const_keyword] = ACTIONS(387),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(387),
    [anon_sym_decimal] = ACTIONS(387),
    [anon_sym_double] = ACTIONS(387),
    [anon_sym_float] = ACTIONS(387),
    [anon_sym_object] = ACTIONS(387),
    [anon_sym_string] = ACTIONS(387),
    [sym_identifier_name] = ACTIONS(387),
    [sym_comment] = ACTIONS(38),
  },
  [221] = {
    [sym_type_parameter_list] = STATE(325),
    [anon_sym_LBRACE] = ACTIONS(598),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [222] = {
    [sym_type_parameter_list] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(600),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [223] = {
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(604),
    [sym_comment] = ACTIONS(38),
  },
  [224] = {
    [sym_identifier_name] = ACTIONS(606),
    [sym_comment] = ACTIONS(38),
  },
  [225] = {
    [anon_sym_SEMI] = ACTIONS(608),
    [sym_comment] = ACTIONS(38),
  },
  [226] = {
    [sym_statement_block] = STATE(333),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(38),
  },
  [227] = {
    [sym_parameter_list] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_identifier_name] = ACTIONS(325),
    [sym_comment] = ACTIONS(38),
  },
  [228] = {
    [sym_identifier_name] = ACTIONS(612),
    [sym_comment] = ACTIONS(38),
  },
  [229] = {
    [anon_sym_class] = ACTIONS(614),
    [sym_comment] = ACTIONS(38),
  },
  [230] = {
    [sym_identifier_name] = ACTIONS(616),
    [sym_comment] = ACTIONS(38),
  },
  [231] = {
    [sym_identifier_name] = ACTIONS(618),
    [sym_comment] = ACTIONS(38),
  },
  [232] = {
    [sym_identifier_name] = ACTIONS(620),
    [sym_comment] = ACTIONS(38),
  },
  [233] = {
    [sym_return_type] = STATE(340),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [234] = {
    [sym_parameter_list] = STATE(341),
    [sym_type_parameter_list] = STATE(342),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [235] = {
    [sym_variable_declaration] = STATE(343),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [236] = {
    [sym_parameter_list] = STATE(334),
    [sym_type_parameter_list] = STATE(344),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(130),
    [sym_identifier_name] = ACTIONS(150),
    [sym_comment] = ACTIONS(38),
  },
  [237] = {
    [sym_return_type] = STATE(345),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [238] = {
    [anon_sym_partial] = ACTIONS(622),
    [anon_sym_class] = ACTIONS(614),
    [sym_comment] = ACTIONS(38),
  },
  [239] = {
    [anon_sym_interface] = ACTIONS(624),
    [sym_comment] = ACTIONS(38),
  },
  [240] = {
    [anon_sym_struct] = ACTIONS(626),
    [sym_comment] = ACTIONS(38),
  },
  [241] = {
    [anon_sym_enum] = ACTIONS(628),
    [sym_comment] = ACTIONS(38),
  },
  [242] = {
    [anon_sym_delegate] = ACTIONS(630),
    [sym_comment] = ACTIONS(38),
  },
  [243] = {
    [sym_variable_declaration] = STATE(343),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_const_keyword] = ACTIONS(632),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [244] = {
    [sym_return_type] = STATE(345),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(634),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(636),
  },
  [245] = {
    [anon_sym_RBRACE] = ACTIONS(638),
    [anon_sym_partial] = ACTIONS(640),
    [anon_sym_class] = ACTIONS(640),
    [anon_sym_unsafe] = ACTIONS(640),
    [anon_sym_abstract] = ACTIONS(640),
    [anon_sym_sealed] = ACTIONS(640),
    [anon_sym_static] = ACTIONS(640),
    [anon_sym_new] = ACTIONS(640),
    [anon_sym_public] = ACTIONS(640),
    [anon_sym_protected] = ACTIONS(640),
    [anon_sym_internal] = ACTIONS(640),
    [anon_sym_private] = ACTIONS(640),
    [anon_sym_interface] = ACTIONS(640),
    [anon_sym_struct] = ACTIONS(640),
    [anon_sym_enum] = ACTIONS(640),
    [anon_sym_sbyte] = ACTIONS(640),
    [anon_sym_byte] = ACTIONS(640),
    [anon_sym_short] = ACTIONS(640),
    [anon_sym_ushort] = ACTIONS(640),
    [anon_sym_int] = ACTIONS(640),
    [anon_sym_uint] = ACTIONS(640),
    [anon_sym_long] = ACTIONS(640),
    [anon_sym_ulong] = ACTIONS(640),
    [anon_sym_char] = ACTIONS(640),
    [anon_sym_delegate] = ACTIONS(640),
    [sym_void_keyword] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(638),
    [sym_const_keyword] = ACTIONS(640),
    [anon_sym_readonly] = ACTIONS(640),
    [anon_sym_volatile] = ACTIONS(640),
    [anon_sym_bool] = ACTIONS(640),
    [anon_sym_decimal] = ACTIONS(640),
    [anon_sym_double] = ACTIONS(640),
    [anon_sym_float] = ACTIONS(640),
    [anon_sym_object] = ACTIONS(640),
    [anon_sym_string] = ACTIONS(640),
    [sym_identifier_name] = ACTIONS(640),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(640),
  },
  [246] = {
    [sym_equals_value_clause] = STATE(355),
    [anon_sym_SEMI] = ACTIONS(642),
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_EQ] = ACTIONS(644),
    [sym_comment] = ACTIONS(38),
  },
  [247] = {
    [aux_sym_variable_declaration_repeat1] = STATE(357),
    [anon_sym_SEMI] = ACTIONS(646),
    [anon_sym_COMMA] = ACTIONS(648),
    [sym_comment] = ACTIONS(38),
  },
  [248] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(650),
    [anon_sym_partial] = ACTIONS(652),
    [anon_sym_class] = ACTIONS(655),
    [anon_sym_unsafe] = ACTIONS(658),
    [anon_sym_abstract] = ACTIONS(661),
    [anon_sym_sealed] = ACTIONS(661),
    [anon_sym_static] = ACTIONS(664),
    [anon_sym_new] = ACTIONS(667),
    [anon_sym_public] = ACTIONS(667),
    [anon_sym_protected] = ACTIONS(667),
    [anon_sym_internal] = ACTIONS(667),
    [anon_sym_private] = ACTIONS(667),
    [anon_sym_interface] = ACTIONS(670),
    [anon_sym_struct] = ACTIONS(673),
    [anon_sym_enum] = ACTIONS(676),
    [anon_sym_sbyte] = ACTIONS(679),
    [anon_sym_byte] = ACTIONS(679),
    [anon_sym_short] = ACTIONS(679),
    [anon_sym_ushort] = ACTIONS(679),
    [anon_sym_int] = ACTIONS(679),
    [anon_sym_uint] = ACTIONS(679),
    [anon_sym_long] = ACTIONS(679),
    [anon_sym_ulong] = ACTIONS(679),
    [anon_sym_char] = ACTIONS(679),
    [anon_sym_delegate] = ACTIONS(682),
    [sym_void_keyword] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(688),
    [sym_const_keyword] = ACTIONS(691),
    [anon_sym_readonly] = ACTIONS(694),
    [anon_sym_volatile] = ACTIONS(694),
    [anon_sym_bool] = ACTIONS(679),
    [anon_sym_decimal] = ACTIONS(679),
    [anon_sym_double] = ACTIONS(679),
    [anon_sym_float] = ACTIONS(679),
    [anon_sym_object] = ACTIONS(679),
    [anon_sym_string] = ACTIONS(679),
    [sym_identifier_name] = ACTIONS(697),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(700),
  },
  [249] = {
    [sym__attribute_section] = STATE(249),
    [aux_sym__attributes_repeat1] = STATE(249),
    [anon_sym_partial] = ACTIONS(703),
    [anon_sym_class] = ACTIONS(703),
    [anon_sym_unsafe] = ACTIONS(703),
    [anon_sym_abstract] = ACTIONS(703),
    [anon_sym_sealed] = ACTIONS(703),
    [anon_sym_static] = ACTIONS(703),
    [anon_sym_new] = ACTIONS(703),
    [anon_sym_public] = ACTIONS(703),
    [anon_sym_protected] = ACTIONS(703),
    [anon_sym_internal] = ACTIONS(703),
    [anon_sym_private] = ACTIONS(703),
    [anon_sym_interface] = ACTIONS(703),
    [anon_sym_struct] = ACTIONS(703),
    [anon_sym_enum] = ACTIONS(703),
    [anon_sym_sbyte] = ACTIONS(703),
    [anon_sym_byte] = ACTIONS(703),
    [anon_sym_short] = ACTIONS(703),
    [anon_sym_ushort] = ACTIONS(703),
    [anon_sym_int] = ACTIONS(703),
    [anon_sym_uint] = ACTIONS(703),
    [anon_sym_long] = ACTIONS(703),
    [anon_sym_ulong] = ACTIONS(703),
    [anon_sym_char] = ACTIONS(703),
    [anon_sym_delegate] = ACTIONS(703),
    [sym_void_keyword] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(238),
    [sym_const_keyword] = ACTIONS(703),
    [anon_sym_readonly] = ACTIONS(703),
    [anon_sym_volatile] = ACTIONS(703),
    [anon_sym_bool] = ACTIONS(703),
    [anon_sym_decimal] = ACTIONS(703),
    [anon_sym_double] = ACTIONS(703),
    [anon_sym_float] = ACTIONS(703),
    [anon_sym_object] = ACTIONS(703),
    [anon_sym_string] = ACTIONS(703),
    [sym_identifier_name] = ACTIONS(703),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(703),
  },
  [250] = {
    [sym__type] = STATE(154),
    [sym_generic_name] = STATE(154),
    [sym_predefined_type] = STATE(154),
    [sym_type_parameter] = STATE(358),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [251] = {
    [anon_sym_LBRACE] = ACTIONS(705),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(705),
    [anon_sym_GT] = ACTIONS(705),
    [sym_identifier_name] = ACTIONS(705),
    [sym_comment] = ACTIONS(38),
  },
  [252] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(360),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(707),
    [sym_comment] = ACTIONS(38),
  },
  [253] = {
    [anon_sym_RBRACK] = ACTIONS(709),
    [sym_comment] = ACTIONS(38),
  },
  [254] = {
    [anon_sym_SEMI] = ACTIONS(711),
    [sym_comment] = ACTIONS(38),
  },
  [255] = {
    [sym_variable_declaration] = STATE(363),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [256] = {
    [sym_variable_declaration] = STATE(363),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_const_keyword] = ACTIONS(713),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [257] = {
    [anon_sym_RBRACE] = ACTIONS(638),
    [anon_sym_unsafe] = ACTIONS(640),
    [anon_sym_static] = ACTIONS(640),
    [anon_sym_new] = ACTIONS(640),
    [anon_sym_public] = ACTIONS(640),
    [anon_sym_protected] = ACTIONS(640),
    [anon_sym_internal] = ACTIONS(640),
    [anon_sym_private] = ACTIONS(640),
    [anon_sym_sbyte] = ACTIONS(640),
    [anon_sym_byte] = ACTIONS(640),
    [anon_sym_short] = ACTIONS(640),
    [anon_sym_ushort] = ACTIONS(640),
    [anon_sym_int] = ACTIONS(640),
    [anon_sym_uint] = ACTIONS(640),
    [anon_sym_long] = ACTIONS(640),
    [anon_sym_ulong] = ACTIONS(640),
    [anon_sym_char] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(638),
    [sym_const_keyword] = ACTIONS(640),
    [anon_sym_readonly] = ACTIONS(640),
    [anon_sym_volatile] = ACTIONS(640),
    [anon_sym_bool] = ACTIONS(640),
    [anon_sym_decimal] = ACTIONS(640),
    [anon_sym_double] = ACTIONS(640),
    [anon_sym_float] = ACTIONS(640),
    [anon_sym_object] = ACTIONS(640),
    [anon_sym_string] = ACTIONS(640),
    [sym_identifier_name] = ACTIONS(640),
    [sym_comment] = ACTIONS(38),
  },
  [258] = {
    [ts_builtin_sym_end] = ACTIONS(715),
    [anon_sym_using] = ACTIONS(715),
    [anon_sym_namespace] = ACTIONS(715),
    [anon_sym_RBRACE] = ACTIONS(715),
    [anon_sym_partial] = ACTIONS(715),
    [anon_sym_class] = ACTIONS(715),
    [anon_sym_unsafe] = ACTIONS(715),
    [anon_sym_abstract] = ACTIONS(715),
    [anon_sym_sealed] = ACTIONS(715),
    [anon_sym_static] = ACTIONS(715),
    [anon_sym_new] = ACTIONS(715),
    [anon_sym_public] = ACTIONS(715),
    [anon_sym_protected] = ACTIONS(715),
    [anon_sym_internal] = ACTIONS(715),
    [anon_sym_private] = ACTIONS(715),
    [anon_sym_interface] = ACTIONS(715),
    [anon_sym_struct] = ACTIONS(715),
    [anon_sym_enum] = ACTIONS(715),
    [anon_sym_delegate] = ACTIONS(715),
    [anon_sym_LBRACK] = ACTIONS(715),
    [sym_comment] = ACTIONS(38),
  },
  [259] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(717),
    [anon_sym_unsafe] = ACTIONS(719),
    [anon_sym_static] = ACTIONS(719),
    [anon_sym_new] = ACTIONS(719),
    [anon_sym_public] = ACTIONS(719),
    [anon_sym_protected] = ACTIONS(719),
    [anon_sym_internal] = ACTIONS(719),
    [anon_sym_private] = ACTIONS(719),
    [anon_sym_sbyte] = ACTIONS(722),
    [anon_sym_byte] = ACTIONS(722),
    [anon_sym_short] = ACTIONS(722),
    [anon_sym_ushort] = ACTIONS(722),
    [anon_sym_int] = ACTIONS(722),
    [anon_sym_uint] = ACTIONS(722),
    [anon_sym_long] = ACTIONS(722),
    [anon_sym_ulong] = ACTIONS(722),
    [anon_sym_char] = ACTIONS(722),
    [anon_sym_LBRACK] = ACTIONS(725),
    [sym_const_keyword] = ACTIONS(728),
    [anon_sym_readonly] = ACTIONS(719),
    [anon_sym_volatile] = ACTIONS(719),
    [anon_sym_bool] = ACTIONS(722),
    [anon_sym_decimal] = ACTIONS(722),
    [anon_sym_double] = ACTIONS(722),
    [anon_sym_float] = ACTIONS(722),
    [anon_sym_object] = ACTIONS(722),
    [anon_sym_string] = ACTIONS(722),
    [sym_identifier_name] = ACTIONS(731),
    [sym_comment] = ACTIONS(38),
  },
  [260] = {
    [sym__attribute_section] = STATE(260),
    [aux_sym__attributes_repeat1] = STATE(260),
    [anon_sym_unsafe] = ACTIONS(703),
    [anon_sym_static] = ACTIONS(703),
    [anon_sym_new] = ACTIONS(703),
    [anon_sym_public] = ACTIONS(703),
    [anon_sym_protected] = ACTIONS(703),
    [anon_sym_internal] = ACTIONS(703),
    [anon_sym_private] = ACTIONS(703),
    [anon_sym_sbyte] = ACTIONS(703),
    [anon_sym_byte] = ACTIONS(703),
    [anon_sym_short] = ACTIONS(703),
    [anon_sym_ushort] = ACTIONS(703),
    [anon_sym_int] = ACTIONS(703),
    [anon_sym_uint] = ACTIONS(703),
    [anon_sym_long] = ACTIONS(703),
    [anon_sym_ulong] = ACTIONS(703),
    [anon_sym_char] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(734),
    [sym_const_keyword] = ACTIONS(703),
    [anon_sym_readonly] = ACTIONS(703),
    [anon_sym_volatile] = ACTIONS(703),
    [anon_sym_bool] = ACTIONS(703),
    [anon_sym_decimal] = ACTIONS(703),
    [anon_sym_double] = ACTIONS(703),
    [anon_sym_float] = ACTIONS(703),
    [anon_sym_object] = ACTIONS(703),
    [anon_sym_string] = ACTIONS(703),
    [sym_identifier_name] = ACTIONS(703),
    [sym_comment] = ACTIONS(38),
  },
  [261] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(737),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [262] = {
    [sym_identifier_name] = ACTIONS(739),
    [sym_comment] = ACTIONS(38),
  },
  [263] = {
    [sym_type_parameter_list] = STATE(368),
    [anon_sym_LBRACE] = ACTIONS(741),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [264] = {
    [sym_type_parameter_list] = STATE(370),
    [anon_sym_LBRACE] = ACTIONS(743),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [265] = {
    [sym_type_parameter_list] = STATE(372),
    [anon_sym_LBRACE] = ACTIONS(745),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [266] = {
    [anon_sym_LBRACE] = ACTIONS(747),
    [anon_sym_COLON] = ACTIONS(749),
    [sym_comment] = ACTIONS(38),
  },
  [267] = {
    [sym_identifier_name] = ACTIONS(751),
    [sym_comment] = ACTIONS(38),
  },
  [268] = {
    [anon_sym_RBRACK] = ACTIONS(753),
    [sym_comment] = ACTIONS(38),
  },
  [269] = {
    [anon_sym_SEMI] = ACTIONS(755),
    [sym_comment] = ACTIONS(38),
  },
  [270] = {
    [anon_sym_class] = ACTIONS(757),
    [sym_comment] = ACTIONS(38),
  },
  [271] = {
    [sym_identifier_name] = ACTIONS(759),
    [sym_comment] = ACTIONS(38),
  },
  [272] = {
    [sym_identifier_name] = ACTIONS(761),
    [sym_comment] = ACTIONS(38),
  },
  [273] = {
    [sym_identifier_name] = ACTIONS(763),
    [sym_comment] = ACTIONS(38),
  },
  [274] = {
    [sym_return_type] = STATE(382),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [275] = {
    [sym_variable_declaration] = STATE(383),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [276] = {
    [anon_sym_partial] = ACTIONS(765),
    [anon_sym_class] = ACTIONS(757),
    [sym_comment] = ACTIONS(38),
  },
  [277] = {
    [anon_sym_interface] = ACTIONS(767),
    [sym_comment] = ACTIONS(38),
  },
  [278] = {
    [anon_sym_struct] = ACTIONS(769),
    [sym_comment] = ACTIONS(38),
  },
  [279] = {
    [anon_sym_enum] = ACTIONS(771),
    [sym_comment] = ACTIONS(38),
  },
  [280] = {
    [anon_sym_delegate] = ACTIONS(773),
    [sym_comment] = ACTIONS(38),
  },
  [281] = {
    [sym_variable_declaration] = STATE(383),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_const_keyword] = ACTIONS(775),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [282] = {
    [anon_sym_RBRACE] = ACTIONS(638),
    [anon_sym_partial] = ACTIONS(640),
    [anon_sym_class] = ACTIONS(640),
    [anon_sym_unsafe] = ACTIONS(640),
    [anon_sym_abstract] = ACTIONS(640),
    [anon_sym_sealed] = ACTIONS(640),
    [anon_sym_static] = ACTIONS(640),
    [anon_sym_new] = ACTIONS(640),
    [anon_sym_public] = ACTIONS(640),
    [anon_sym_protected] = ACTIONS(640),
    [anon_sym_internal] = ACTIONS(640),
    [anon_sym_private] = ACTIONS(640),
    [anon_sym_interface] = ACTIONS(640),
    [anon_sym_struct] = ACTIONS(640),
    [anon_sym_enum] = ACTIONS(640),
    [anon_sym_sbyte] = ACTIONS(640),
    [anon_sym_byte] = ACTIONS(640),
    [anon_sym_short] = ACTIONS(640),
    [anon_sym_ushort] = ACTIONS(640),
    [anon_sym_int] = ACTIONS(640),
    [anon_sym_uint] = ACTIONS(640),
    [anon_sym_long] = ACTIONS(640),
    [anon_sym_ulong] = ACTIONS(640),
    [anon_sym_char] = ACTIONS(640),
    [anon_sym_delegate] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(638),
    [sym_const_keyword] = ACTIONS(640),
    [anon_sym_readonly] = ACTIONS(640),
    [anon_sym_volatile] = ACTIONS(640),
    [anon_sym_bool] = ACTIONS(640),
    [anon_sym_decimal] = ACTIONS(640),
    [anon_sym_double] = ACTIONS(640),
    [anon_sym_float] = ACTIONS(640),
    [anon_sym_object] = ACTIONS(640),
    [anon_sym_string] = ACTIONS(640),
    [sym_identifier_name] = ACTIONS(640),
    [sym_comment] = ACTIONS(38),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(777),
    [anon_sym_using] = ACTIONS(777),
    [anon_sym_namespace] = ACTIONS(777),
    [anon_sym_RBRACE] = ACTIONS(777),
    [anon_sym_partial] = ACTIONS(777),
    [anon_sym_class] = ACTIONS(777),
    [anon_sym_unsafe] = ACTIONS(777),
    [anon_sym_abstract] = ACTIONS(777),
    [anon_sym_sealed] = ACTIONS(777),
    [anon_sym_static] = ACTIONS(777),
    [anon_sym_new] = ACTIONS(777),
    [anon_sym_public] = ACTIONS(777),
    [anon_sym_protected] = ACTIONS(777),
    [anon_sym_internal] = ACTIONS(777),
    [anon_sym_private] = ACTIONS(777),
    [anon_sym_interface] = ACTIONS(777),
    [anon_sym_struct] = ACTIONS(777),
    [anon_sym_enum] = ACTIONS(777),
    [anon_sym_delegate] = ACTIONS(777),
    [anon_sym_LBRACK] = ACTIONS(777),
    [sym_comment] = ACTIONS(38),
  },
  [284] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(779),
    [anon_sym_partial] = ACTIONS(781),
    [anon_sym_class] = ACTIONS(784),
    [anon_sym_unsafe] = ACTIONS(787),
    [anon_sym_abstract] = ACTIONS(790),
    [anon_sym_sealed] = ACTIONS(790),
    [anon_sym_static] = ACTIONS(793),
    [anon_sym_new] = ACTIONS(796),
    [anon_sym_public] = ACTIONS(796),
    [anon_sym_protected] = ACTIONS(796),
    [anon_sym_internal] = ACTIONS(796),
    [anon_sym_private] = ACTIONS(796),
    [anon_sym_interface] = ACTIONS(799),
    [anon_sym_struct] = ACTIONS(802),
    [anon_sym_enum] = ACTIONS(805),
    [anon_sym_sbyte] = ACTIONS(808),
    [anon_sym_byte] = ACTIONS(808),
    [anon_sym_short] = ACTIONS(808),
    [anon_sym_ushort] = ACTIONS(808),
    [anon_sym_int] = ACTIONS(808),
    [anon_sym_uint] = ACTIONS(808),
    [anon_sym_long] = ACTIONS(808),
    [anon_sym_ulong] = ACTIONS(808),
    [anon_sym_char] = ACTIONS(808),
    [anon_sym_delegate] = ACTIONS(811),
    [anon_sym_LBRACK] = ACTIONS(814),
    [sym_const_keyword] = ACTIONS(817),
    [anon_sym_readonly] = ACTIONS(820),
    [anon_sym_volatile] = ACTIONS(820),
    [anon_sym_bool] = ACTIONS(808),
    [anon_sym_decimal] = ACTIONS(808),
    [anon_sym_double] = ACTIONS(808),
    [anon_sym_float] = ACTIONS(808),
    [anon_sym_object] = ACTIONS(808),
    [anon_sym_string] = ACTIONS(808),
    [sym_identifier_name] = ACTIONS(823),
    [sym_comment] = ACTIONS(38),
  },
  [285] = {
    [sym__attribute_section] = STATE(285),
    [aux_sym__attributes_repeat1] = STATE(285),
    [anon_sym_partial] = ACTIONS(703),
    [anon_sym_class] = ACTIONS(703),
    [anon_sym_unsafe] = ACTIONS(703),
    [anon_sym_abstract] = ACTIONS(703),
    [anon_sym_sealed] = ACTIONS(703),
    [anon_sym_static] = ACTIONS(703),
    [anon_sym_new] = ACTIONS(703),
    [anon_sym_public] = ACTIONS(703),
    [anon_sym_protected] = ACTIONS(703),
    [anon_sym_internal] = ACTIONS(703),
    [anon_sym_private] = ACTIONS(703),
    [anon_sym_interface] = ACTIONS(703),
    [anon_sym_struct] = ACTIONS(703),
    [anon_sym_enum] = ACTIONS(703),
    [anon_sym_sbyte] = ACTIONS(703),
    [anon_sym_byte] = ACTIONS(703),
    [anon_sym_short] = ACTIONS(703),
    [anon_sym_ushort] = ACTIONS(703),
    [anon_sym_int] = ACTIONS(703),
    [anon_sym_uint] = ACTIONS(703),
    [anon_sym_long] = ACTIONS(703),
    [anon_sym_ulong] = ACTIONS(703),
    [anon_sym_char] = ACTIONS(703),
    [anon_sym_delegate] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(826),
    [sym_const_keyword] = ACTIONS(703),
    [anon_sym_readonly] = ACTIONS(703),
    [anon_sym_volatile] = ACTIONS(703),
    [anon_sym_bool] = ACTIONS(703),
    [anon_sym_decimal] = ACTIONS(703),
    [anon_sym_double] = ACTIONS(703),
    [anon_sym_float] = ACTIONS(703),
    [anon_sym_object] = ACTIONS(703),
    [anon_sym_string] = ACTIONS(703),
    [sym_identifier_name] = ACTIONS(703),
    [sym_comment] = ACTIONS(38),
  },
  [286] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [287] = {
    [anon_sym_RBRACK] = ACTIONS(831),
    [sym_comment] = ACTIONS(38),
  },
  [288] = {
    [sym__expression] = STATE(401),
    [sym_parenthesized_expression] = STATE(401),
    [sym_ternary_expression] = STATE(401),
    [sym_binary_expression] = STATE(401),
    [sym_unary_expression] = STATE(401),
    [sym__literal] = STATE(401),
    [sym_boolean_literal] = STATE(401),
    [sym_character_literal] = STATE(401),
    [sym_integer_literal] = STATE(401),
    [sym_real_literal] = STATE(401),
    [sym_string_literal] = STATE(401),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(847),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(847),
    [sym_comment] = ACTIONS(38),
  },
  [289] = {
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_COMMA] = ACTIONS(855),
    [sym_comment] = ACTIONS(38),
  },
  [290] = {
    [ts_builtin_sym_end] = ACTIONS(857),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_using] = ACTIONS(857),
    [anon_sym_namespace] = ACTIONS(857),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_partial] = ACTIONS(857),
    [anon_sym_class] = ACTIONS(857),
    [anon_sym_unsafe] = ACTIONS(857),
    [anon_sym_abstract] = ACTIONS(857),
    [anon_sym_sealed] = ACTIONS(857),
    [anon_sym_static] = ACTIONS(857),
    [anon_sym_new] = ACTIONS(857),
    [anon_sym_public] = ACTIONS(857),
    [anon_sym_protected] = ACTIONS(857),
    [anon_sym_internal] = ACTIONS(857),
    [anon_sym_private] = ACTIONS(857),
    [anon_sym_interface] = ACTIONS(857),
    [anon_sym_struct] = ACTIONS(857),
    [anon_sym_enum] = ACTIONS(857),
    [anon_sym_delegate] = ACTIONS(857),
    [anon_sym_LBRACK] = ACTIONS(857),
    [sym_comment] = ACTIONS(38),
  },
  [291] = {
    [sym_enum_member_declaration] = STATE(404),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [292] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [293] = {
    [sym_equals_value_clause] = STATE(407),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_COMMA] = ACTIONS(855),
    [anon_sym_EQ] = ACTIONS(505),
    [sym_comment] = ACTIONS(38),
  },
  [294] = {
    [sym__attribute_section] = STATE(294),
    [aux_sym__attributes_repeat1] = STATE(294),
    [anon_sym_LBRACK] = ACTIONS(863),
    [sym_identifier_name] = ACTIONS(236),
    [sym_comment] = ACTIONS(38),
  },
  [295] = {
    [sym_enum_member_declaration] = STATE(408),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [296] = {
    [anon_sym_SEMI] = ACTIONS(866),
    [anon_sym_LBRACE] = ACTIONS(866),
    [sym_comment] = ACTIONS(38),
  },
  [297] = {
    [anon_sym_sbyte] = ACTIONS(868),
    [anon_sym_byte] = ACTIONS(868),
    [anon_sym_short] = ACTIONS(868),
    [anon_sym_ushort] = ACTIONS(868),
    [anon_sym_int] = ACTIONS(868),
    [anon_sym_uint] = ACTIONS(868),
    [anon_sym_long] = ACTIONS(868),
    [anon_sym_ulong] = ACTIONS(868),
    [anon_sym_char] = ACTIONS(868),
    [anon_sym_bool] = ACTIONS(868),
    [anon_sym_decimal] = ACTIONS(868),
    [anon_sym_double] = ACTIONS(868),
    [anon_sym_float] = ACTIONS(868),
    [anon_sym_object] = ACTIONS(868),
    [anon_sym_string] = ACTIONS(868),
    [sym_identifier_name] = ACTIONS(868),
    [sym_comment] = ACTIONS(38),
  },
  [298] = {
    [sym_array_type] = STATE(409),
    [sym__type] = STATE(410),
    [sym_generic_name] = STATE(410),
    [sym_predefined_type] = STATE(410),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [299] = {
    [sym_attribute_list] = STATE(411),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(199),
    [sym_comment] = ACTIONS(38),
  },
  [300] = {
    [anon_sym_RPAREN] = ACTIONS(870),
    [sym_comment] = ACTIONS(38),
  },
  [301] = {
    [sym_parameter_array] = STATE(414),
    [sym__attributes] = STATE(415),
    [sym__attribute_section] = STATE(417),
    [aux_sym__formal_parameter_list_repeat1] = STATE(416),
    [aux_sym__attributes_repeat1] = STATE(417),
    [anon_sym_COMMA] = ACTIONS(872),
    [anon_sym_RPAREN] = ACTIONS(874),
    [sym_params_keyword] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(521),
    [sym_comment] = ACTIONS(38),
  },
  [302] = {
    [sym__type] = STATE(418),
    [sym_generic_name] = STATE(418),
    [sym_predefined_type] = STATE(418),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [303] = {
    [sym_parameter_modifier] = STATE(420),
    [sym__type] = STATE(418),
    [sym_generic_name] = STATE(418),
    [sym_predefined_type] = STATE(418),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_ref] = ACTIONS(517),
    [anon_sym_out] = ACTIONS(517),
    [anon_sym_this] = ACTIONS(517),
    [sym_params_keyword] = ACTIONS(878),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [304] = {
    [sym_identifier_name] = ACTIONS(880),
    [sym_comment] = ACTIONS(38),
  },
  [305] = {
    [sym__attribute_section] = STATE(422),
    [aux_sym__attributes_repeat1] = STATE(422),
    [anon_sym_sbyte] = ACTIONS(445),
    [anon_sym_byte] = ACTIONS(445),
    [anon_sym_short] = ACTIONS(445),
    [anon_sym_ushort] = ACTIONS(445),
    [anon_sym_int] = ACTIONS(445),
    [anon_sym_uint] = ACTIONS(445),
    [anon_sym_long] = ACTIONS(445),
    [anon_sym_ulong] = ACTIONS(445),
    [anon_sym_char] = ACTIONS(445),
    [anon_sym_ref] = ACTIONS(445),
    [anon_sym_out] = ACTIONS(445),
    [anon_sym_this] = ACTIONS(445),
    [sym_params_keyword] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_bool] = ACTIONS(445),
    [anon_sym_decimal] = ACTIONS(445),
    [anon_sym_double] = ACTIONS(445),
    [anon_sym_float] = ACTIONS(445),
    [anon_sym_object] = ACTIONS(445),
    [anon_sym_string] = ACTIONS(445),
    [sym_identifier_name] = ACTIONS(445),
    [sym_comment] = ACTIONS(38),
  },
  [306] = {
    [ts_builtin_sym_end] = ACTIONS(882),
    [anon_sym_using] = ACTIONS(882),
    [anon_sym_namespace] = ACTIONS(882),
    [anon_sym_RBRACE] = ACTIONS(882),
    [anon_sym_partial] = ACTIONS(882),
    [anon_sym_class] = ACTIONS(882),
    [anon_sym_unsafe] = ACTIONS(882),
    [anon_sym_abstract] = ACTIONS(882),
    [anon_sym_sealed] = ACTIONS(882),
    [anon_sym_static] = ACTIONS(882),
    [anon_sym_new] = ACTIONS(882),
    [anon_sym_public] = ACTIONS(882),
    [anon_sym_protected] = ACTIONS(882),
    [anon_sym_internal] = ACTIONS(882),
    [anon_sym_private] = ACTIONS(882),
    [anon_sym_interface] = ACTIONS(882),
    [anon_sym_struct] = ACTIONS(882),
    [anon_sym_enum] = ACTIONS(882),
    [anon_sym_delegate] = ACTIONS(882),
    [anon_sym_LBRACK] = ACTIONS(882),
    [sym_comment] = ACTIONS(38),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(884),
    [anon_sym_namespace] = ACTIONS(884),
    [anon_sym_partial] = ACTIONS(884),
    [anon_sym_class] = ACTIONS(884),
    [anon_sym_unsafe] = ACTIONS(884),
    [anon_sym_abstract] = ACTIONS(884),
    [anon_sym_sealed] = ACTIONS(884),
    [anon_sym_static] = ACTIONS(884),
    [anon_sym_new] = ACTIONS(884),
    [anon_sym_public] = ACTIONS(884),
    [anon_sym_protected] = ACTIONS(884),
    [anon_sym_internal] = ACTIONS(884),
    [anon_sym_private] = ACTIONS(884),
    [anon_sym_interface] = ACTIONS(884),
    [anon_sym_struct] = ACTIONS(884),
    [anon_sym_enum] = ACTIONS(884),
    [anon_sym_delegate] = ACTIONS(884),
    [anon_sym_LBRACK] = ACTIONS(884),
    [sym_comment] = ACTIONS(38),
  },
  [308] = {
    [anon_sym_LBRACE] = ACTIONS(886),
    [sym_comment] = ACTIONS(38),
  },
  [309] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(424),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(424),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(737),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [310] = {
    [sym__type_declaration] = STATE(425),
    [sym_class_declaration] = STATE(425),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(425),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(425),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(425),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(425),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(425),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(425),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [311] = {
    [aux_sym_enum_declaration_repeat1] = STATE(426),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [312] = {
    [anon_sym_LBRACE] = ACTIONS(888),
    [sym_comment] = ACTIONS(38),
  },
  [313] = {
    [anon_sym_SEMI] = ACTIONS(890),
    [sym_comment] = ACTIONS(38),
  },
  [314] = {
    [sym_type_parameter_list] = STATE(429),
    [anon_sym_LBRACE] = ACTIONS(886),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [315] = {
    [anon_sym_LBRACE] = ACTIONS(892),
    [sym_comment] = ACTIONS(38),
  },
  [316] = {
    [anon_sym_LBRACE] = ACTIONS(894),
    [sym_comment] = ACTIONS(38),
  },
  [317] = {
    [sym__integral_type] = STATE(432),
    [anon_sym_sbyte] = ACTIONS(896),
    [anon_sym_byte] = ACTIONS(896),
    [anon_sym_short] = ACTIONS(896),
    [anon_sym_ushort] = ACTIONS(896),
    [anon_sym_int] = ACTIONS(896),
    [anon_sym_uint] = ACTIONS(896),
    [anon_sym_long] = ACTIONS(896),
    [anon_sym_ulong] = ACTIONS(896),
    [anon_sym_char] = ACTIONS(896),
    [sym_comment] = ACTIONS(38),
  },
  [318] = {
    [sym_parameter_list] = STATE(433),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(898),
    [anon_sym_using] = ACTIONS(898),
    [anon_sym_namespace] = ACTIONS(898),
    [anon_sym_RBRACE] = ACTIONS(898),
    [anon_sym_partial] = ACTIONS(898),
    [anon_sym_class] = ACTIONS(898),
    [anon_sym_unsafe] = ACTIONS(898),
    [anon_sym_abstract] = ACTIONS(898),
    [anon_sym_sealed] = ACTIONS(898),
    [anon_sym_static] = ACTIONS(898),
    [anon_sym_new] = ACTIONS(898),
    [anon_sym_public] = ACTIONS(898),
    [anon_sym_protected] = ACTIONS(898),
    [anon_sym_internal] = ACTIONS(898),
    [anon_sym_private] = ACTIONS(898),
    [anon_sym_interface] = ACTIONS(898),
    [anon_sym_struct] = ACTIONS(898),
    [anon_sym_enum] = ACTIONS(898),
    [anon_sym_delegate] = ACTIONS(898),
    [anon_sym_LBRACK] = ACTIONS(898),
    [sym_comment] = ACTIONS(38),
  },
  [320] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(900),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [321] = {
    [sym_type_parameter_list] = STATE(436),
    [anon_sym_LBRACE] = ACTIONS(902),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [322] = {
    [sym__type_declaration] = STATE(438),
    [sym_class_declaration] = STATE(438),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(438),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(438),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(438),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(438),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(438),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(438),
    [sym_method_declaration] = STATE(438),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(438),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(904),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [323] = {
    [anon_sym_LBRACE] = ACTIONS(902),
    [sym_comment] = ACTIONS(38),
  },
  [324] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(440),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(440),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(906),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [325] = {
    [anon_sym_LBRACE] = ACTIONS(908),
    [sym_comment] = ACTIONS(38),
  },
  [326] = {
    [sym__type_declaration] = STATE(443),
    [sym_class_declaration] = STATE(443),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(443),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(443),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(443),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(443),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(443),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(443),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(910),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [327] = {
    [anon_sym_LBRACE] = ACTIONS(912),
    [sym_comment] = ACTIONS(38),
  },
  [328] = {
    [sym_enum_member_declaration] = STATE(445),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [329] = {
    [sym__integral_type] = STATE(446),
    [anon_sym_sbyte] = ACTIONS(914),
    [anon_sym_byte] = ACTIONS(914),
    [anon_sym_short] = ACTIONS(914),
    [anon_sym_ushort] = ACTIONS(914),
    [anon_sym_int] = ACTIONS(914),
    [anon_sym_uint] = ACTIONS(914),
    [anon_sym_long] = ACTIONS(914),
    [anon_sym_ulong] = ACTIONS(914),
    [anon_sym_char] = ACTIONS(914),
    [sym_comment] = ACTIONS(38),
  },
  [330] = {
    [sym_parameter_list] = STATE(447),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [331] = {
    [anon_sym_RBRACE] = ACTIONS(916),
    [anon_sym_partial] = ACTIONS(918),
    [anon_sym_class] = ACTIONS(918),
    [anon_sym_unsafe] = ACTIONS(918),
    [anon_sym_abstract] = ACTIONS(918),
    [anon_sym_sealed] = ACTIONS(918),
    [anon_sym_static] = ACTIONS(918),
    [anon_sym_new] = ACTIONS(918),
    [anon_sym_public] = ACTIONS(918),
    [anon_sym_protected] = ACTIONS(918),
    [anon_sym_internal] = ACTIONS(918),
    [anon_sym_private] = ACTIONS(918),
    [anon_sym_interface] = ACTIONS(918),
    [anon_sym_struct] = ACTIONS(918),
    [anon_sym_enum] = ACTIONS(918),
    [anon_sym_sbyte] = ACTIONS(918),
    [anon_sym_byte] = ACTIONS(918),
    [anon_sym_short] = ACTIONS(918),
    [anon_sym_ushort] = ACTIONS(918),
    [anon_sym_int] = ACTIONS(918),
    [anon_sym_uint] = ACTIONS(918),
    [anon_sym_long] = ACTIONS(918),
    [anon_sym_ulong] = ACTIONS(918),
    [anon_sym_char] = ACTIONS(918),
    [anon_sym_delegate] = ACTIONS(918),
    [sym_void_keyword] = ACTIONS(918),
    [anon_sym_LBRACK] = ACTIONS(916),
    [sym_const_keyword] = ACTIONS(918),
    [anon_sym_readonly] = ACTIONS(918),
    [anon_sym_volatile] = ACTIONS(918),
    [anon_sym_bool] = ACTIONS(918),
    [anon_sym_decimal] = ACTIONS(918),
    [anon_sym_double] = ACTIONS(918),
    [anon_sym_float] = ACTIONS(918),
    [anon_sym_object] = ACTIONS(918),
    [anon_sym_string] = ACTIONS(918),
    [sym_identifier_name] = ACTIONS(918),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(918),
  },
  [332] = {
    [sym__expression] = STATE(453),
    [sym_parenthesized_expression] = STATE(453),
    [sym_ternary_expression] = STATE(453),
    [sym_binary_expression] = STATE(453),
    [sym_unary_expression] = STATE(453),
    [sym__literal] = STATE(453),
    [sym_boolean_literal] = STATE(453),
    [sym_character_literal] = STATE(453),
    [sym_integer_literal] = STATE(453),
    [sym_real_literal] = STATE(453),
    [sym_string_literal] = STATE(453),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [sym__statement] = STATE(454),
    [sym_expression_statement] = STATE(454),
    [sym_return_statement] = STATE(454),
    [sym_variable_assignment_statement] = STATE(454),
    [sym_empty_statement] = STATE(454),
    [aux_sym_statement_block_repeat1] = STATE(454),
    [anon_sym_SEMI] = ACTIONS(920),
    [anon_sym_RBRACE] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(928),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(930),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(932),
  },
  [333] = {
    [anon_sym_RBRACE] = ACTIONS(934),
    [anon_sym_partial] = ACTIONS(936),
    [anon_sym_class] = ACTIONS(936),
    [anon_sym_unsafe] = ACTIONS(936),
    [anon_sym_abstract] = ACTIONS(936),
    [anon_sym_sealed] = ACTIONS(936),
    [anon_sym_static] = ACTIONS(936),
    [anon_sym_new] = ACTIONS(936),
    [anon_sym_public] = ACTIONS(936),
    [anon_sym_protected] = ACTIONS(936),
    [anon_sym_internal] = ACTIONS(936),
    [anon_sym_private] = ACTIONS(936),
    [anon_sym_interface] = ACTIONS(936),
    [anon_sym_struct] = ACTIONS(936),
    [anon_sym_enum] = ACTIONS(936),
    [anon_sym_sbyte] = ACTIONS(936),
    [anon_sym_byte] = ACTIONS(936),
    [anon_sym_short] = ACTIONS(936),
    [anon_sym_ushort] = ACTIONS(936),
    [anon_sym_int] = ACTIONS(936),
    [anon_sym_uint] = ACTIONS(936),
    [anon_sym_long] = ACTIONS(936),
    [anon_sym_ulong] = ACTIONS(936),
    [anon_sym_char] = ACTIONS(936),
    [anon_sym_delegate] = ACTIONS(936),
    [sym_void_keyword] = ACTIONS(936),
    [anon_sym_LBRACK] = ACTIONS(934),
    [sym_const_keyword] = ACTIONS(936),
    [anon_sym_readonly] = ACTIONS(936),
    [anon_sym_volatile] = ACTIONS(936),
    [anon_sym_bool] = ACTIONS(936),
    [anon_sym_decimal] = ACTIONS(936),
    [anon_sym_double] = ACTIONS(936),
    [anon_sym_float] = ACTIONS(936),
    [anon_sym_object] = ACTIONS(936),
    [anon_sym_string] = ACTIONS(936),
    [sym_identifier_name] = ACTIONS(936),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(936),
  },
  [334] = {
    [sym_statement_block] = STATE(455),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(38),
  },
  [335] = {
    [sym_parameter_list] = STATE(456),
    [sym_type_parameter_list] = STATE(457),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [336] = {
    [sym_identifier_name] = ACTIONS(938),
    [sym_comment] = ACTIONS(38),
  },
  [337] = {
    [sym_type_parameter_list] = STATE(459),
    [anon_sym_LBRACE] = ACTIONS(908),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [338] = {
    [sym_type_parameter_list] = STATE(460),
    [anon_sym_LBRACE] = ACTIONS(912),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [339] = {
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_COLON] = ACTIONS(942),
    [sym_comment] = ACTIONS(38),
  },
  [340] = {
    [sym_identifier_name] = ACTIONS(944),
    [sym_comment] = ACTIONS(38),
  },
  [341] = {
    [sym_statement_block] = STATE(464),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(38),
  },
  [342] = {
    [sym_parameter_list] = STATE(456),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [343] = {
    [anon_sym_SEMI] = ACTIONS(946),
    [sym_comment] = ACTIONS(38),
  },
  [344] = {
    [sym_parameter_list] = STATE(466),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_identifier_name] = ACTIONS(325),
    [sym_comment] = ACTIONS(38),
  },
  [345] = {
    [sym_identifier_name] = ACTIONS(948),
    [sym_comment] = ACTIONS(38),
  },
  [346] = {
    [anon_sym_class] = ACTIONS(950),
    [sym_comment] = ACTIONS(38),
  },
  [347] = {
    [sym_identifier_name] = ACTIONS(952),
    [sym_comment] = ACTIONS(38),
  },
  [348] = {
    [sym_identifier_name] = ACTIONS(954),
    [sym_comment] = ACTIONS(38),
  },
  [349] = {
    [sym_identifier_name] = ACTIONS(956),
    [sym_comment] = ACTIONS(38),
  },
  [350] = {
    [sym_return_type] = STATE(472),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [351] = {
    [sym_variable_declaration] = STATE(473),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [352] = {
    [sym_parameter_list] = STATE(466),
    [sym_type_parameter_list] = STATE(474),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(130),
    [sym_identifier_name] = ACTIONS(150),
    [sym_comment] = ACTIONS(38),
  },
  [353] = {
    [sym_return_type] = STATE(475),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [354] = {
    [sym__expression] = STATE(477),
    [sym_parenthesized_expression] = STATE(477),
    [sym_ternary_expression] = STATE(477),
    [sym_binary_expression] = STATE(477),
    [sym_unary_expression] = STATE(477),
    [sym__literal] = STATE(477),
    [sym_boolean_literal] = STATE(477),
    [sym_character_literal] = STATE(477),
    [sym_integer_literal] = STATE(477),
    [sym_real_literal] = STATE(477),
    [sym_string_literal] = STATE(477),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(962),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(962),
    [sym_comment] = ACTIONS(38),
  },
  [355] = {
    [anon_sym_SEMI] = ACTIONS(964),
    [anon_sym_COMMA] = ACTIONS(964),
    [sym_comment] = ACTIONS(38),
  },
  [356] = {
    [sym_variable_declarator] = STATE(478),
    [sym_identifier_name] = ACTIONS(459),
    [sym_comment] = ACTIONS(38),
  },
  [357] = {
    [aux_sym_variable_declaration_repeat1] = STATE(479),
    [anon_sym_SEMI] = ACTIONS(966),
    [anon_sym_COMMA] = ACTIONS(648),
    [sym_comment] = ACTIONS(38),
  },
  [358] = {
    [anon_sym_COMMA] = ACTIONS(968),
    [anon_sym_GT] = ACTIONS(968),
    [sym_comment] = ACTIONS(38),
  },
  [359] = {
    [anon_sym_LBRACE] = ACTIONS(970),
    [anon_sym_COMMA] = ACTIONS(970),
    [anon_sym_LPAREN] = ACTIONS(970),
    [anon_sym_LBRACK] = ACTIONS(970),
    [anon_sym_GT] = ACTIONS(970),
    [sym_identifier_name] = ACTIONS(970),
    [sym_comment] = ACTIONS(38),
  },
  [360] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(360),
    [anon_sym_COMMA] = ACTIONS(972),
    [anon_sym_GT] = ACTIONS(968),
    [sym_comment] = ACTIONS(38),
  },
  [361] = {
    [anon_sym_unsafe] = ACTIONS(333),
    [anon_sym_static] = ACTIONS(333),
    [anon_sym_new] = ACTIONS(333),
    [anon_sym_public] = ACTIONS(333),
    [anon_sym_protected] = ACTIONS(333),
    [anon_sym_internal] = ACTIONS(333),
    [anon_sym_private] = ACTIONS(333),
    [anon_sym_sbyte] = ACTIONS(333),
    [anon_sym_byte] = ACTIONS(333),
    [anon_sym_short] = ACTIONS(333),
    [anon_sym_ushort] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_uint] = ACTIONS(333),
    [anon_sym_long] = ACTIONS(333),
    [anon_sym_ulong] = ACTIONS(333),
    [anon_sym_char] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_const_keyword] = ACTIONS(333),
    [anon_sym_readonly] = ACTIONS(333),
    [anon_sym_volatile] = ACTIONS(333),
    [anon_sym_bool] = ACTIONS(333),
    [anon_sym_decimal] = ACTIONS(333),
    [anon_sym_double] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_object] = ACTIONS(333),
    [anon_sym_string] = ACTIONS(333),
    [sym_identifier_name] = ACTIONS(333),
    [sym_comment] = ACTIONS(38),
  },
  [362] = {
    [anon_sym_RBRACE] = ACTIONS(916),
    [anon_sym_unsafe] = ACTIONS(918),
    [anon_sym_static] = ACTIONS(918),
    [anon_sym_new] = ACTIONS(918),
    [anon_sym_public] = ACTIONS(918),
    [anon_sym_protected] = ACTIONS(918),
    [anon_sym_internal] = ACTIONS(918),
    [anon_sym_private] = ACTIONS(918),
    [anon_sym_sbyte] = ACTIONS(918),
    [anon_sym_byte] = ACTIONS(918),
    [anon_sym_short] = ACTIONS(918),
    [anon_sym_ushort] = ACTIONS(918),
    [anon_sym_int] = ACTIONS(918),
    [anon_sym_uint] = ACTIONS(918),
    [anon_sym_long] = ACTIONS(918),
    [anon_sym_ulong] = ACTIONS(918),
    [anon_sym_char] = ACTIONS(918),
    [anon_sym_LBRACK] = ACTIONS(916),
    [sym_const_keyword] = ACTIONS(918),
    [anon_sym_readonly] = ACTIONS(918),
    [anon_sym_volatile] = ACTIONS(918),
    [anon_sym_bool] = ACTIONS(918),
    [anon_sym_decimal] = ACTIONS(918),
    [anon_sym_double] = ACTIONS(918),
    [anon_sym_float] = ACTIONS(918),
    [anon_sym_object] = ACTIONS(918),
    [anon_sym_string] = ACTIONS(918),
    [sym_identifier_name] = ACTIONS(918),
    [sym_comment] = ACTIONS(38),
  },
  [363] = {
    [anon_sym_SEMI] = ACTIONS(975),
    [sym_comment] = ACTIONS(38),
  },
  [364] = {
    [sym_variable_declaration] = STATE(481),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [365] = {
    [ts_builtin_sym_end] = ACTIONS(977),
    [anon_sym_using] = ACTIONS(977),
    [anon_sym_namespace] = ACTIONS(977),
    [anon_sym_RBRACE] = ACTIONS(977),
    [anon_sym_partial] = ACTIONS(977),
    [anon_sym_class] = ACTIONS(977),
    [anon_sym_unsafe] = ACTIONS(977),
    [anon_sym_abstract] = ACTIONS(977),
    [anon_sym_sealed] = ACTIONS(977),
    [anon_sym_static] = ACTIONS(977),
    [anon_sym_new] = ACTIONS(977),
    [anon_sym_public] = ACTIONS(977),
    [anon_sym_protected] = ACTIONS(977),
    [anon_sym_internal] = ACTIONS(977),
    [anon_sym_private] = ACTIONS(977),
    [anon_sym_interface] = ACTIONS(977),
    [anon_sym_struct] = ACTIONS(977),
    [anon_sym_enum] = ACTIONS(977),
    [anon_sym_delegate] = ACTIONS(977),
    [anon_sym_LBRACK] = ACTIONS(977),
    [sym_comment] = ACTIONS(38),
  },
  [366] = {
    [sym_type_parameter_list] = STATE(483),
    [anon_sym_LBRACE] = ACTIONS(979),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [367] = {
    [sym__type_declaration] = STATE(485),
    [sym_class_declaration] = STATE(485),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(485),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(485),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(485),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(485),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(485),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(485),
    [sym_method_declaration] = STATE(485),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(485),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(981),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [368] = {
    [anon_sym_LBRACE] = ACTIONS(979),
    [sym_comment] = ACTIONS(38),
  },
  [369] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(487),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(487),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(983),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [370] = {
    [anon_sym_LBRACE] = ACTIONS(985),
    [sym_comment] = ACTIONS(38),
  },
  [371] = {
    [sym__type_declaration] = STATE(490),
    [sym_class_declaration] = STATE(490),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(490),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(490),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(490),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(490),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(490),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(490),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(987),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [372] = {
    [anon_sym_LBRACE] = ACTIONS(989),
    [sym_comment] = ACTIONS(38),
  },
  [373] = {
    [sym_enum_member_declaration] = STATE(492),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [374] = {
    [sym__integral_type] = STATE(493),
    [anon_sym_sbyte] = ACTIONS(991),
    [anon_sym_byte] = ACTIONS(991),
    [anon_sym_short] = ACTIONS(991),
    [anon_sym_ushort] = ACTIONS(991),
    [anon_sym_int] = ACTIONS(991),
    [anon_sym_uint] = ACTIONS(991),
    [anon_sym_long] = ACTIONS(991),
    [anon_sym_ulong] = ACTIONS(991),
    [anon_sym_char] = ACTIONS(991),
    [sym_comment] = ACTIONS(38),
  },
  [375] = {
    [sym_parameter_list] = STATE(494),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [376] = {
    [anon_sym_partial] = ACTIONS(333),
    [anon_sym_class] = ACTIONS(333),
    [anon_sym_unsafe] = ACTIONS(333),
    [anon_sym_abstract] = ACTIONS(333),
    [anon_sym_sealed] = ACTIONS(333),
    [anon_sym_static] = ACTIONS(333),
    [anon_sym_new] = ACTIONS(333),
    [anon_sym_public] = ACTIONS(333),
    [anon_sym_protected] = ACTIONS(333),
    [anon_sym_internal] = ACTIONS(333),
    [anon_sym_private] = ACTIONS(333),
    [anon_sym_interface] = ACTIONS(333),
    [anon_sym_struct] = ACTIONS(333),
    [anon_sym_enum] = ACTIONS(333),
    [anon_sym_sbyte] = ACTIONS(333),
    [anon_sym_byte] = ACTIONS(333),
    [anon_sym_short] = ACTIONS(333),
    [anon_sym_ushort] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_uint] = ACTIONS(333),
    [anon_sym_long] = ACTIONS(333),
    [anon_sym_ulong] = ACTIONS(333),
    [anon_sym_char] = ACTIONS(333),
    [anon_sym_delegate] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_const_keyword] = ACTIONS(333),
    [anon_sym_readonly] = ACTIONS(333),
    [anon_sym_volatile] = ACTIONS(333),
    [anon_sym_bool] = ACTIONS(333),
    [anon_sym_decimal] = ACTIONS(333),
    [anon_sym_double] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_object] = ACTIONS(333),
    [anon_sym_string] = ACTIONS(333),
    [sym_identifier_name] = ACTIONS(333),
    [sym_comment] = ACTIONS(38),
  },
  [377] = {
    [anon_sym_RBRACE] = ACTIONS(916),
    [anon_sym_partial] = ACTIONS(918),
    [anon_sym_class] = ACTIONS(918),
    [anon_sym_unsafe] = ACTIONS(918),
    [anon_sym_abstract] = ACTIONS(918),
    [anon_sym_sealed] = ACTIONS(918),
    [anon_sym_static] = ACTIONS(918),
    [anon_sym_new] = ACTIONS(918),
    [anon_sym_public] = ACTIONS(918),
    [anon_sym_protected] = ACTIONS(918),
    [anon_sym_internal] = ACTIONS(918),
    [anon_sym_private] = ACTIONS(918),
    [anon_sym_interface] = ACTIONS(918),
    [anon_sym_struct] = ACTIONS(918),
    [anon_sym_enum] = ACTIONS(918),
    [anon_sym_sbyte] = ACTIONS(918),
    [anon_sym_byte] = ACTIONS(918),
    [anon_sym_short] = ACTIONS(918),
    [anon_sym_ushort] = ACTIONS(918),
    [anon_sym_int] = ACTIONS(918),
    [anon_sym_uint] = ACTIONS(918),
    [anon_sym_long] = ACTIONS(918),
    [anon_sym_ulong] = ACTIONS(918),
    [anon_sym_char] = ACTIONS(918),
    [anon_sym_delegate] = ACTIONS(918),
    [anon_sym_LBRACK] = ACTIONS(916),
    [sym_const_keyword] = ACTIONS(918),
    [anon_sym_readonly] = ACTIONS(918),
    [anon_sym_volatile] = ACTIONS(918),
    [anon_sym_bool] = ACTIONS(918),
    [anon_sym_decimal] = ACTIONS(918),
    [anon_sym_double] = ACTIONS(918),
    [anon_sym_float] = ACTIONS(918),
    [anon_sym_object] = ACTIONS(918),
    [anon_sym_string] = ACTIONS(918),
    [sym_identifier_name] = ACTIONS(918),
    [sym_comment] = ACTIONS(38),
  },
  [378] = {
    [sym_identifier_name] = ACTIONS(993),
    [sym_comment] = ACTIONS(38),
  },
  [379] = {
    [sym_type_parameter_list] = STATE(496),
    [anon_sym_LBRACE] = ACTIONS(985),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [380] = {
    [sym_type_parameter_list] = STATE(497),
    [anon_sym_LBRACE] = ACTIONS(989),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [381] = {
    [anon_sym_LBRACE] = ACTIONS(995),
    [anon_sym_COLON] = ACTIONS(997),
    [sym_comment] = ACTIONS(38),
  },
  [382] = {
    [sym_identifier_name] = ACTIONS(999),
    [sym_comment] = ACTIONS(38),
  },
  [383] = {
    [anon_sym_SEMI] = ACTIONS(1001),
    [sym_comment] = ACTIONS(38),
  },
  [384] = {
    [anon_sym_class] = ACTIONS(1003),
    [sym_comment] = ACTIONS(38),
  },
  [385] = {
    [sym_identifier_name] = ACTIONS(1005),
    [sym_comment] = ACTIONS(38),
  },
  [386] = {
    [sym_identifier_name] = ACTIONS(1007),
    [sym_comment] = ACTIONS(38),
  },
  [387] = {
    [sym_identifier_name] = ACTIONS(1009),
    [sym_comment] = ACTIONS(38),
  },
  [388] = {
    [sym_return_type] = STATE(506),
    [sym__type] = STATE(54),
    [sym_generic_name] = STATE(54),
    [sym_predefined_type] = STATE(54),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [389] = {
    [sym_variable_declaration] = STATE(507),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [390] = {
    [ts_builtin_sym_end] = ACTIONS(1011),
    [anon_sym_using] = ACTIONS(1011),
    [anon_sym_namespace] = ACTIONS(1011),
    [anon_sym_RBRACE] = ACTIONS(1011),
    [anon_sym_partial] = ACTIONS(1011),
    [anon_sym_class] = ACTIONS(1011),
    [anon_sym_unsafe] = ACTIONS(1011),
    [anon_sym_abstract] = ACTIONS(1011),
    [anon_sym_sealed] = ACTIONS(1011),
    [anon_sym_static] = ACTIONS(1011),
    [anon_sym_new] = ACTIONS(1011),
    [anon_sym_public] = ACTIONS(1011),
    [anon_sym_protected] = ACTIONS(1011),
    [anon_sym_internal] = ACTIONS(1011),
    [anon_sym_private] = ACTIONS(1011),
    [anon_sym_interface] = ACTIONS(1011),
    [anon_sym_struct] = ACTIONS(1011),
    [anon_sym_enum] = ACTIONS(1011),
    [anon_sym_delegate] = ACTIONS(1011),
    [anon_sym_LBRACK] = ACTIONS(1011),
    [sym_comment] = ACTIONS(38),
  },
  [391] = {
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_identifier_name] = ACTIONS(335),
    [sym_comment] = ACTIONS(38),
  },
  [392] = {
    [sym__expression] = STATE(509),
    [sym_parenthesized_expression] = STATE(509),
    [sym_ternary_expression] = STATE(509),
    [sym_binary_expression] = STATE(509),
    [sym_unary_expression] = STATE(509),
    [sym__literal] = STATE(509),
    [sym_boolean_literal] = STATE(509),
    [sym_character_literal] = STATE(509),
    [sym_integer_literal] = STATE(509),
    [sym_real_literal] = STATE(509),
    [sym_string_literal] = STATE(509),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1017),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1017),
    [sym_comment] = ACTIONS(38),
  },
  [393] = {
    [sym__expression] = STATE(510),
    [sym_parenthesized_expression] = STATE(510),
    [sym_ternary_expression] = STATE(510),
    [sym_binary_expression] = STATE(510),
    [sym_unary_expression] = STATE(510),
    [sym__literal] = STATE(510),
    [sym_boolean_literal] = STATE(510),
    [sym_character_literal] = STATE(510),
    [sym_integer_literal] = STATE(510),
    [sym_real_literal] = STATE(510),
    [sym_string_literal] = STATE(510),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1019),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1019),
    [sym_comment] = ACTIONS(38),
  },
  [394] = {
    [anon_sym_SEMI] = ACTIONS(1021),
    [anon_sym_RBRACE] = ACTIONS(1021),
    [anon_sym_COLON] = ACTIONS(1021),
    [anon_sym_COMMA] = ACTIONS(1021),
    [anon_sym_RPAREN] = ACTIONS(1021),
    [sym_params_keyword] = ACTIONS(1021),
    [anon_sym_LBRACK] = ACTIONS(1021),
    [anon_sym_QMARK] = ACTIONS(1021),
    [anon_sym_AMP_AMP] = ACTIONS(1021),
    [anon_sym_PIPE_PIPE] = ACTIONS(1021),
    [anon_sym_GT_GT] = ACTIONS(1021),
    [anon_sym_LT_LT] = ACTIONS(1021),
    [anon_sym_AMP] = ACTIONS(1023),
    [anon_sym_CARET] = ACTIONS(1021),
    [anon_sym_PIPE] = ACTIONS(1023),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1021),
    [anon_sym_SLASH] = ACTIONS(1023),
    [anon_sym_PERCENT] = ACTIONS(1021),
    [anon_sym_LT] = ACTIONS(1023),
    [anon_sym_LT_EQ] = ACTIONS(1021),
    [anon_sym_EQ_EQ] = ACTIONS(1021),
    [anon_sym_BANG_EQ] = ACTIONS(1021),
    [anon_sym_GT_EQ] = ACTIONS(1021),
    [anon_sym_GT] = ACTIONS(1023),
    [sym_comment] = ACTIONS(38),
  },
  [395] = {
    [sym__unicode_escape_sequence] = STATE(511),
    [sym__simple_escape_sequence] = STATE(511),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(1025),
    [sym__hexadecimal_escape_sequence] = ACTIONS(1025),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1025),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1025),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1025),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1025),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1025),
    [anon_sym_BSLASH0] = ACTIONS(1025),
    [anon_sym_BSLASHa] = ACTIONS(1025),
    [anon_sym_BSLASHb] = ACTIONS(1025),
    [anon_sym_BSLASHf] = ACTIONS(1025),
    [anon_sym_BSLASHn] = ACTIONS(1025),
    [anon_sym_BSLASHr] = ACTIONS(1025),
    [anon_sym_BSLASHt] = ACTIONS(1025),
    [anon_sym_BSLASHv] = ACTIONS(1025),
    [sym_comment] = ACTIONS(1027),
  },
  [396] = {
    [anon_sym_SEMI] = ACTIONS(1029),
    [anon_sym_RBRACE] = ACTIONS(1029),
    [anon_sym_COLON] = ACTIONS(1029),
    [anon_sym_COMMA] = ACTIONS(1029),
    [anon_sym_RPAREN] = ACTIONS(1029),
    [sym_params_keyword] = ACTIONS(1029),
    [anon_sym_LBRACK] = ACTIONS(1029),
    [anon_sym_QMARK] = ACTIONS(1029),
    [anon_sym_AMP_AMP] = ACTIONS(1029),
    [anon_sym_PIPE_PIPE] = ACTIONS(1029),
    [anon_sym_GT_GT] = ACTIONS(1029),
    [anon_sym_LT_LT] = ACTIONS(1029),
    [anon_sym_AMP] = ACTIONS(1031),
    [anon_sym_CARET] = ACTIONS(1029),
    [anon_sym_PIPE] = ACTIONS(1031),
    [anon_sym_PLUS] = ACTIONS(1029),
    [anon_sym_DASH] = ACTIONS(1029),
    [anon_sym_STAR] = ACTIONS(1029),
    [anon_sym_SLASH] = ACTIONS(1031),
    [anon_sym_PERCENT] = ACTIONS(1029),
    [anon_sym_LT] = ACTIONS(1031),
    [anon_sym_LT_EQ] = ACTIONS(1029),
    [anon_sym_EQ_EQ] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(1029),
    [anon_sym_GT_EQ] = ACTIONS(1029),
    [anon_sym_GT] = ACTIONS(1031),
    [sym__integer_type_suffix] = ACTIONS(1033),
    [anon_sym_DOT] = ACTIONS(1035),
    [sym__real_type_suffix] = ACTIONS(1037),
    [sym__exponent_part] = ACTIONS(1039),
    [sym_comment] = ACTIONS(38),
  },
  [397] = {
    [anon_sym_SEMI] = ACTIONS(1029),
    [anon_sym_RBRACE] = ACTIONS(1029),
    [anon_sym_COLON] = ACTIONS(1029),
    [anon_sym_COMMA] = ACTIONS(1029),
    [anon_sym_RPAREN] = ACTIONS(1029),
    [sym_params_keyword] = ACTIONS(1029),
    [anon_sym_LBRACK] = ACTIONS(1029),
    [anon_sym_QMARK] = ACTIONS(1029),
    [anon_sym_AMP_AMP] = ACTIONS(1029),
    [anon_sym_PIPE_PIPE] = ACTIONS(1029),
    [anon_sym_GT_GT] = ACTIONS(1029),
    [anon_sym_LT_LT] = ACTIONS(1029),
    [anon_sym_AMP] = ACTIONS(1031),
    [anon_sym_CARET] = ACTIONS(1029),
    [anon_sym_PIPE] = ACTIONS(1031),
    [anon_sym_PLUS] = ACTIONS(1029),
    [anon_sym_DASH] = ACTIONS(1029),
    [anon_sym_STAR] = ACTIONS(1029),
    [anon_sym_SLASH] = ACTIONS(1031),
    [anon_sym_PERCENT] = ACTIONS(1029),
    [anon_sym_LT] = ACTIONS(1031),
    [anon_sym_LT_EQ] = ACTIONS(1029),
    [anon_sym_EQ_EQ] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(1029),
    [anon_sym_GT_EQ] = ACTIONS(1029),
    [anon_sym_GT] = ACTIONS(1031),
    [sym__integer_type_suffix] = ACTIONS(1033),
    [sym_comment] = ACTIONS(38),
  },
  [398] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1041),
    [sym_comment] = ACTIONS(38),
  },
  [399] = {
    [sym__unicode_escape_sequence] = STATE(518),
    [sym__simple_escape_sequence] = STATE(518),
    [sym__regular_string_literal_character] = STATE(518),
    [aux_sym__regular_string_literal_repeat1] = STATE(518),
    [sym__hexadecimal_escape_sequence] = ACTIONS(1043),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1043),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1043),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1043),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1043),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1043),
    [anon_sym_BSLASH0] = ACTIONS(1043),
    [anon_sym_BSLASHa] = ACTIONS(1043),
    [anon_sym_BSLASHb] = ACTIONS(1043),
    [anon_sym_BSLASHf] = ACTIONS(1043),
    [anon_sym_BSLASHn] = ACTIONS(1043),
    [anon_sym_BSLASHr] = ACTIONS(1043),
    [anon_sym_BSLASHt] = ACTIONS(1043),
    [anon_sym_BSLASHv] = ACTIONS(1043),
    [anon_sym_DQUOTE] = ACTIONS(1045),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1043),
    [sym_comment] = ACTIONS(1027),
  },
  [400] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(1047),
    [sym_comment] = ACTIONS(1027),
  },
  [401] = {
    [anon_sym_RBRACE] = ACTIONS(1049),
    [anon_sym_COMMA] = ACTIONS(1049),
    [anon_sym_QMARK] = ACTIONS(1051),
    [anon_sym_AMP_AMP] = ACTIONS(1053),
    [anon_sym_PIPE_PIPE] = ACTIONS(1055),
    [anon_sym_GT_GT] = ACTIONS(1057),
    [anon_sym_LT_LT] = ACTIONS(1057),
    [anon_sym_AMP] = ACTIONS(1059),
    [anon_sym_CARET] = ACTIONS(1061),
    [anon_sym_PIPE] = ACTIONS(1063),
    [anon_sym_PLUS] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1065),
    [anon_sym_STAR] = ACTIONS(1067),
    [anon_sym_SLASH] = ACTIONS(1069),
    [anon_sym_PERCENT] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_LT_EQ] = ACTIONS(1073),
    [anon_sym_EQ_EQ] = ACTIONS(1075),
    [anon_sym_BANG_EQ] = ACTIONS(1075),
    [anon_sym_GT_EQ] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1071),
    [sym_comment] = ACTIONS(38),
  },
  [402] = {
    [anon_sym_SEMI] = ACTIONS(1077),
    [anon_sym_RBRACE] = ACTIONS(1077),
    [anon_sym_COLON] = ACTIONS(1077),
    [anon_sym_COMMA] = ACTIONS(1077),
    [anon_sym_RPAREN] = ACTIONS(1077),
    [sym_params_keyword] = ACTIONS(1077),
    [anon_sym_LBRACK] = ACTIONS(1077),
    [anon_sym_QMARK] = ACTIONS(1077),
    [anon_sym_AMP_AMP] = ACTIONS(1077),
    [anon_sym_PIPE_PIPE] = ACTIONS(1077),
    [anon_sym_GT_GT] = ACTIONS(1077),
    [anon_sym_LT_LT] = ACTIONS(1077),
    [anon_sym_AMP] = ACTIONS(1079),
    [anon_sym_CARET] = ACTIONS(1077),
    [anon_sym_PIPE] = ACTIONS(1079),
    [anon_sym_PLUS] = ACTIONS(1077),
    [anon_sym_DASH] = ACTIONS(1077),
    [anon_sym_STAR] = ACTIONS(1077),
    [anon_sym_SLASH] = ACTIONS(1079),
    [anon_sym_PERCENT] = ACTIONS(1077),
    [anon_sym_LT] = ACTIONS(1079),
    [anon_sym_LT_EQ] = ACTIONS(1077),
    [anon_sym_EQ_EQ] = ACTIONS(1077),
    [anon_sym_BANG_EQ] = ACTIONS(1077),
    [anon_sym_GT_EQ] = ACTIONS(1077),
    [anon_sym_GT] = ACTIONS(1079),
    [sym_comment] = ACTIONS(38),
  },
  [403] = {
    [ts_builtin_sym_end] = ACTIONS(1081),
    [anon_sym_using] = ACTIONS(1081),
    [anon_sym_namespace] = ACTIONS(1081),
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_partial] = ACTIONS(1081),
    [anon_sym_class] = ACTIONS(1081),
    [anon_sym_unsafe] = ACTIONS(1081),
    [anon_sym_abstract] = ACTIONS(1081),
    [anon_sym_sealed] = ACTIONS(1081),
    [anon_sym_static] = ACTIONS(1081),
    [anon_sym_new] = ACTIONS(1081),
    [anon_sym_public] = ACTIONS(1081),
    [anon_sym_protected] = ACTIONS(1081),
    [anon_sym_internal] = ACTIONS(1081),
    [anon_sym_private] = ACTIONS(1081),
    [anon_sym_interface] = ACTIONS(1081),
    [anon_sym_struct] = ACTIONS(1081),
    [anon_sym_enum] = ACTIONS(1081),
    [anon_sym_delegate] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [sym_comment] = ACTIONS(38),
  },
  [404] = {
    [anon_sym_RBRACE] = ACTIONS(1083),
    [anon_sym_COMMA] = ACTIONS(1083),
    [sym_comment] = ACTIONS(38),
  },
  [405] = {
    [ts_builtin_sym_end] = ACTIONS(1081),
    [anon_sym_SEMI] = ACTIONS(1085),
    [anon_sym_using] = ACTIONS(1081),
    [anon_sym_namespace] = ACTIONS(1081),
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_partial] = ACTIONS(1081),
    [anon_sym_class] = ACTIONS(1081),
    [anon_sym_unsafe] = ACTIONS(1081),
    [anon_sym_abstract] = ACTIONS(1081),
    [anon_sym_sealed] = ACTIONS(1081),
    [anon_sym_static] = ACTIONS(1081),
    [anon_sym_new] = ACTIONS(1081),
    [anon_sym_public] = ACTIONS(1081),
    [anon_sym_protected] = ACTIONS(1081),
    [anon_sym_internal] = ACTIONS(1081),
    [anon_sym_private] = ACTIONS(1081),
    [anon_sym_interface] = ACTIONS(1081),
    [anon_sym_struct] = ACTIONS(1081),
    [anon_sym_enum] = ACTIONS(1081),
    [anon_sym_delegate] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [sym_comment] = ACTIONS(38),
  },
  [406] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1083),
    [anon_sym_COMMA] = ACTIONS(1087),
    [sym_comment] = ACTIONS(38),
  },
  [407] = {
    [anon_sym_RBRACE] = ACTIONS(1090),
    [anon_sym_COMMA] = ACTIONS(1090),
    [sym_comment] = ACTIONS(38),
  },
  [408] = {
    [aux_sym_enum_declaration_repeat1] = STATE(532),
    [anon_sym_RBRACE] = ACTIONS(1092),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [409] = {
    [sym_identifier_name] = ACTIONS(1094),
    [sym_comment] = ACTIONS(38),
  },
  [410] = {
    [sym_array_rank_specifier] = STATE(535),
    [anon_sym_LBRACK] = ACTIONS(1096),
    [sym_comment] = ACTIONS(38),
  },
  [411] = {
    [anon_sym_RBRACK] = ACTIONS(1098),
    [sym_comment] = ACTIONS(38),
  },
  [412] = {
    [anon_sym_SEMI] = ACTIONS(1100),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [sym_comment] = ACTIONS(38),
  },
  [413] = {
    [sym_parameter] = STATE(538),
    [sym_parameter_modifier] = STATE(302),
    [sym__attributes] = STATE(539),
    [sym__attribute_section] = STATE(540),
    [sym__type] = STATE(304),
    [sym_generic_name] = STATE(304),
    [sym_predefined_type] = STATE(304),
    [aux_sym__attributes_repeat1] = STATE(540),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_ref] = ACTIONS(517),
    [anon_sym_out] = ACTIONS(517),
    [anon_sym_this] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(1102),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [414] = {
    [anon_sym_RPAREN] = ACTIONS(1104),
    [sym_comment] = ACTIONS(38),
  },
  [415] = {
    [sym_params_keyword] = ACTIONS(1106),
    [sym_comment] = ACTIONS(38),
  },
  [416] = {
    [sym_parameter_array] = STATE(541),
    [sym__attributes] = STATE(415),
    [sym__attribute_section] = STATE(417),
    [aux_sym__formal_parameter_list_repeat1] = STATE(542),
    [aux_sym__attributes_repeat1] = STATE(417),
    [anon_sym_COMMA] = ACTIONS(872),
    [anon_sym_RPAREN] = ACTIONS(1104),
    [sym_params_keyword] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(521),
    [sym_comment] = ACTIONS(38),
  },
  [417] = {
    [sym__attribute_section] = STATE(543),
    [aux_sym__attributes_repeat1] = STATE(543),
    [sym_params_keyword] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(521),
    [sym_comment] = ACTIONS(38),
  },
  [418] = {
    [sym_identifier_name] = ACTIONS(1108),
    [sym_comment] = ACTIONS(38),
  },
  [419] = {
    [sym_array_type] = STATE(545),
    [sym__type] = STATE(410),
    [sym_generic_name] = STATE(410),
    [sym_predefined_type] = STATE(410),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [420] = {
    [sym__type] = STATE(546),
    [sym_generic_name] = STATE(546),
    [sym_predefined_type] = STATE(546),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [421] = {
    [sym_equals_value_clause] = STATE(548),
    [anon_sym_COMMA] = ACTIONS(1110),
    [anon_sym_RPAREN] = ACTIONS(1110),
    [sym_params_keyword] = ACTIONS(1110),
    [anon_sym_LBRACK] = ACTIONS(1110),
    [anon_sym_EQ] = ACTIONS(1112),
    [sym_comment] = ACTIONS(38),
  },
  [422] = {
    [sym__attribute_section] = STATE(422),
    [aux_sym__attributes_repeat1] = STATE(422),
    [anon_sym_sbyte] = ACTIONS(703),
    [anon_sym_byte] = ACTIONS(703),
    [anon_sym_short] = ACTIONS(703),
    [anon_sym_ushort] = ACTIONS(703),
    [anon_sym_int] = ACTIONS(703),
    [anon_sym_uint] = ACTIONS(703),
    [anon_sym_long] = ACTIONS(703),
    [anon_sym_ulong] = ACTIONS(703),
    [anon_sym_char] = ACTIONS(703),
    [anon_sym_ref] = ACTIONS(703),
    [anon_sym_out] = ACTIONS(703),
    [anon_sym_this] = ACTIONS(703),
    [sym_params_keyword] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(1114),
    [anon_sym_bool] = ACTIONS(703),
    [anon_sym_decimal] = ACTIONS(703),
    [anon_sym_double] = ACTIONS(703),
    [anon_sym_float] = ACTIONS(703),
    [anon_sym_object] = ACTIONS(703),
    [anon_sym_string] = ACTIONS(703),
    [sym_identifier_name] = ACTIONS(703),
    [sym_comment] = ACTIONS(38),
  },
  [423] = {
    [sym__type_declaration] = STATE(549),
    [sym_class_declaration] = STATE(549),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(549),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(549),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(549),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(549),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(549),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(549),
    [sym_method_declaration] = STATE(549),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(549),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(900),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [424] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1117),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [425] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1119),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [426] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1092),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [427] = {
    [sym_enum_member_declaration] = STATE(552),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [428] = {
    [ts_builtin_sym_end] = ACTIONS(1121),
    [anon_sym_using] = ACTIONS(1121),
    [anon_sym_namespace] = ACTIONS(1121),
    [anon_sym_RBRACE] = ACTIONS(1121),
    [anon_sym_partial] = ACTIONS(1121),
    [anon_sym_class] = ACTIONS(1121),
    [anon_sym_unsafe] = ACTIONS(1121),
    [anon_sym_abstract] = ACTIONS(1121),
    [anon_sym_sealed] = ACTIONS(1121),
    [anon_sym_static] = ACTIONS(1121),
    [anon_sym_new] = ACTIONS(1121),
    [anon_sym_public] = ACTIONS(1121),
    [anon_sym_protected] = ACTIONS(1121),
    [anon_sym_internal] = ACTIONS(1121),
    [anon_sym_private] = ACTIONS(1121),
    [anon_sym_interface] = ACTIONS(1121),
    [anon_sym_struct] = ACTIONS(1121),
    [anon_sym_enum] = ACTIONS(1121),
    [anon_sym_delegate] = ACTIONS(1121),
    [anon_sym_LBRACK] = ACTIONS(1121),
    [sym_comment] = ACTIONS(38),
  },
  [429] = {
    [anon_sym_LBRACE] = ACTIONS(1123),
    [sym_comment] = ACTIONS(38),
  },
  [430] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(554),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(554),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1117),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [431] = {
    [sym__type_declaration] = STATE(555),
    [sym_class_declaration] = STATE(555),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(555),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(555),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(555),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(555),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(555),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(555),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1119),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [432] = {
    [anon_sym_LBRACE] = ACTIONS(1125),
    [sym_comment] = ACTIONS(38),
  },
  [433] = {
    [anon_sym_SEMI] = ACTIONS(1127),
    [sym_comment] = ACTIONS(38),
  },
  [434] = {
    [ts_builtin_sym_end] = ACTIONS(1129),
    [anon_sym_using] = ACTIONS(1129),
    [anon_sym_namespace] = ACTIONS(1129),
    [anon_sym_RBRACE] = ACTIONS(1129),
    [anon_sym_partial] = ACTIONS(1129),
    [anon_sym_class] = ACTIONS(1129),
    [anon_sym_unsafe] = ACTIONS(1129),
    [anon_sym_abstract] = ACTIONS(1129),
    [anon_sym_sealed] = ACTIONS(1129),
    [anon_sym_static] = ACTIONS(1129),
    [anon_sym_new] = ACTIONS(1129),
    [anon_sym_public] = ACTIONS(1129),
    [anon_sym_protected] = ACTIONS(1129),
    [anon_sym_internal] = ACTIONS(1129),
    [anon_sym_private] = ACTIONS(1129),
    [anon_sym_interface] = ACTIONS(1129),
    [anon_sym_struct] = ACTIONS(1129),
    [anon_sym_enum] = ACTIONS(1129),
    [anon_sym_delegate] = ACTIONS(1129),
    [anon_sym_LBRACK] = ACTIONS(1129),
    [sym_comment] = ACTIONS(38),
  },
  [435] = {
    [sym__type_declaration] = STATE(559),
    [sym_class_declaration] = STATE(559),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(559),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(559),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(559),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(559),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(559),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(559),
    [sym_method_declaration] = STATE(559),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(559),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1131),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [436] = {
    [anon_sym_LBRACE] = ACTIONS(1133),
    [sym_comment] = ACTIONS(38),
  },
  [437] = {
    [anon_sym_RBRACE] = ACTIONS(375),
    [anon_sym_partial] = ACTIONS(1135),
    [anon_sym_class] = ACTIONS(1135),
    [anon_sym_unsafe] = ACTIONS(1135),
    [anon_sym_abstract] = ACTIONS(1135),
    [anon_sym_sealed] = ACTIONS(1135),
    [anon_sym_static] = ACTIONS(1135),
    [anon_sym_new] = ACTIONS(1135),
    [anon_sym_public] = ACTIONS(1135),
    [anon_sym_protected] = ACTIONS(1135),
    [anon_sym_internal] = ACTIONS(1135),
    [anon_sym_private] = ACTIONS(1135),
    [anon_sym_interface] = ACTIONS(1135),
    [anon_sym_struct] = ACTIONS(1135),
    [anon_sym_enum] = ACTIONS(1135),
    [anon_sym_sbyte] = ACTIONS(1135),
    [anon_sym_byte] = ACTIONS(1135),
    [anon_sym_short] = ACTIONS(1135),
    [anon_sym_ushort] = ACTIONS(1135),
    [anon_sym_int] = ACTIONS(1135),
    [anon_sym_uint] = ACTIONS(1135),
    [anon_sym_long] = ACTIONS(1135),
    [anon_sym_ulong] = ACTIONS(1135),
    [anon_sym_char] = ACTIONS(1135),
    [anon_sym_delegate] = ACTIONS(1135),
    [sym_void_keyword] = ACTIONS(1135),
    [anon_sym_LBRACK] = ACTIONS(375),
    [sym_const_keyword] = ACTIONS(1135),
    [anon_sym_readonly] = ACTIONS(1135),
    [anon_sym_volatile] = ACTIONS(1135),
    [anon_sym_bool] = ACTIONS(1135),
    [anon_sym_decimal] = ACTIONS(1135),
    [anon_sym_double] = ACTIONS(1135),
    [anon_sym_float] = ACTIONS(1135),
    [anon_sym_object] = ACTIONS(1135),
    [anon_sym_string] = ACTIONS(1135),
    [sym_identifier_name] = ACTIONS(1135),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1135),
  },
  [438] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1131),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [439] = {
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_partial] = ACTIONS(1137),
    [anon_sym_class] = ACTIONS(1137),
    [anon_sym_unsafe] = ACTIONS(1137),
    [anon_sym_abstract] = ACTIONS(1137),
    [anon_sym_sealed] = ACTIONS(1137),
    [anon_sym_static] = ACTIONS(1137),
    [anon_sym_new] = ACTIONS(1137),
    [anon_sym_public] = ACTIONS(1137),
    [anon_sym_protected] = ACTIONS(1137),
    [anon_sym_internal] = ACTIONS(1137),
    [anon_sym_private] = ACTIONS(1137),
    [anon_sym_interface] = ACTIONS(1137),
    [anon_sym_struct] = ACTIONS(1137),
    [anon_sym_enum] = ACTIONS(1137),
    [anon_sym_sbyte] = ACTIONS(1137),
    [anon_sym_byte] = ACTIONS(1137),
    [anon_sym_short] = ACTIONS(1137),
    [anon_sym_ushort] = ACTIONS(1137),
    [anon_sym_int] = ACTIONS(1137),
    [anon_sym_uint] = ACTIONS(1137),
    [anon_sym_long] = ACTIONS(1137),
    [anon_sym_ulong] = ACTIONS(1137),
    [anon_sym_char] = ACTIONS(1137),
    [anon_sym_delegate] = ACTIONS(1137),
    [sym_void_keyword] = ACTIONS(1137),
    [anon_sym_LBRACK] = ACTIONS(453),
    [sym_const_keyword] = ACTIONS(1137),
    [anon_sym_readonly] = ACTIONS(1137),
    [anon_sym_volatile] = ACTIONS(1137),
    [anon_sym_bool] = ACTIONS(1137),
    [anon_sym_decimal] = ACTIONS(1137),
    [anon_sym_double] = ACTIONS(1137),
    [anon_sym_float] = ACTIONS(1137),
    [anon_sym_object] = ACTIONS(1137),
    [anon_sym_string] = ACTIONS(1137),
    [sym_identifier_name] = ACTIONS(1137),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1137),
  },
  [440] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1139),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [441] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(562),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(562),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1139),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [442] = {
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_partial] = ACTIONS(1141),
    [anon_sym_class] = ACTIONS(1141),
    [anon_sym_unsafe] = ACTIONS(1141),
    [anon_sym_abstract] = ACTIONS(1141),
    [anon_sym_sealed] = ACTIONS(1141),
    [anon_sym_static] = ACTIONS(1141),
    [anon_sym_new] = ACTIONS(1141),
    [anon_sym_public] = ACTIONS(1141),
    [anon_sym_protected] = ACTIONS(1141),
    [anon_sym_internal] = ACTIONS(1141),
    [anon_sym_private] = ACTIONS(1141),
    [anon_sym_interface] = ACTIONS(1141),
    [anon_sym_struct] = ACTIONS(1141),
    [anon_sym_enum] = ACTIONS(1141),
    [anon_sym_sbyte] = ACTIONS(1141),
    [anon_sym_byte] = ACTIONS(1141),
    [anon_sym_short] = ACTIONS(1141),
    [anon_sym_ushort] = ACTIONS(1141),
    [anon_sym_int] = ACTIONS(1141),
    [anon_sym_uint] = ACTIONS(1141),
    [anon_sym_long] = ACTIONS(1141),
    [anon_sym_ulong] = ACTIONS(1141),
    [anon_sym_char] = ACTIONS(1141),
    [anon_sym_delegate] = ACTIONS(1141),
    [sym_void_keyword] = ACTIONS(1141),
    [anon_sym_LBRACK] = ACTIONS(463),
    [sym_const_keyword] = ACTIONS(1141),
    [anon_sym_readonly] = ACTIONS(1141),
    [anon_sym_volatile] = ACTIONS(1141),
    [anon_sym_bool] = ACTIONS(1141),
    [anon_sym_decimal] = ACTIONS(1141),
    [anon_sym_double] = ACTIONS(1141),
    [anon_sym_float] = ACTIONS(1141),
    [anon_sym_object] = ACTIONS(1141),
    [anon_sym_string] = ACTIONS(1141),
    [sym_identifier_name] = ACTIONS(1141),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1141),
  },
  [443] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1143),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [444] = {
    [sym__type_declaration] = STATE(564),
    [sym_class_declaration] = STATE(564),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(564),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(564),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(564),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(564),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(564),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(564),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1143),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [445] = {
    [aux_sym_enum_declaration_repeat1] = STATE(566),
    [anon_sym_RBRACE] = ACTIONS(1145),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [446] = {
    [anon_sym_LBRACE] = ACTIONS(1147),
    [sym_comment] = ACTIONS(38),
  },
  [447] = {
    [anon_sym_SEMI] = ACTIONS(1149),
    [sym_comment] = ACTIONS(38),
  },
  [448] = {
    [anon_sym_SEMI] = ACTIONS(1151),
    [anon_sym_RBRACE] = ACTIONS(1151),
    [anon_sym_LPAREN] = ACTIONS(1151),
    [anon_sym_PLUS] = ACTIONS(1153),
    [anon_sym_DASH] = ACTIONS(1153),
    [anon_sym_BANG] = ACTIONS(1151),
    [anon_sym_TILDE] = ACTIONS(1151),
    [anon_sym_DASH_DASH] = ACTIONS(1151),
    [anon_sym_PLUS_PLUS] = ACTIONS(1151),
    [anon_sym_typeof] = ACTIONS(1153),
    [anon_sym_sizeof] = ACTIONS(1153),
    [anon_sym_true] = ACTIONS(1153),
    [anon_sym_false] = ACTIONS(1153),
    [anon_sym_SQUOTE] = ACTIONS(1151),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1153),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1151),
    [sym_null_literal] = ACTIONS(1153),
    [anon_sym_DOT] = ACTIONS(1151),
    [anon_sym_DQUOTE] = ACTIONS(1151),
    [anon_sym_AT_DQUOTE] = ACTIONS(1151),
    [sym_identifier_name] = ACTIONS(1153),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1153),
  },
  [449] = {
    [anon_sym_RBRACE] = ACTIONS(1155),
    [anon_sym_partial] = ACTIONS(1157),
    [anon_sym_class] = ACTIONS(1157),
    [anon_sym_unsafe] = ACTIONS(1157),
    [anon_sym_abstract] = ACTIONS(1157),
    [anon_sym_sealed] = ACTIONS(1157),
    [anon_sym_static] = ACTIONS(1157),
    [anon_sym_new] = ACTIONS(1157),
    [anon_sym_public] = ACTIONS(1157),
    [anon_sym_protected] = ACTIONS(1157),
    [anon_sym_internal] = ACTIONS(1157),
    [anon_sym_private] = ACTIONS(1157),
    [anon_sym_interface] = ACTIONS(1157),
    [anon_sym_struct] = ACTIONS(1157),
    [anon_sym_enum] = ACTIONS(1157),
    [anon_sym_sbyte] = ACTIONS(1157),
    [anon_sym_byte] = ACTIONS(1157),
    [anon_sym_short] = ACTIONS(1157),
    [anon_sym_ushort] = ACTIONS(1157),
    [anon_sym_int] = ACTIONS(1157),
    [anon_sym_uint] = ACTIONS(1157),
    [anon_sym_long] = ACTIONS(1157),
    [anon_sym_ulong] = ACTIONS(1157),
    [anon_sym_char] = ACTIONS(1157),
    [anon_sym_delegate] = ACTIONS(1157),
    [sym_void_keyword] = ACTIONS(1157),
    [anon_sym_LBRACK] = ACTIONS(1155),
    [sym_const_keyword] = ACTIONS(1157),
    [anon_sym_readonly] = ACTIONS(1157),
    [anon_sym_volatile] = ACTIONS(1157),
    [anon_sym_bool] = ACTIONS(1157),
    [anon_sym_decimal] = ACTIONS(1157),
    [anon_sym_double] = ACTIONS(1157),
    [anon_sym_float] = ACTIONS(1157),
    [anon_sym_object] = ACTIONS(1157),
    [anon_sym_string] = ACTIONS(1157),
    [sym_identifier_name] = ACTIONS(1157),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1157),
  },
  [450] = {
    [sym__expression] = STATE(510),
    [sym_parenthesized_expression] = STATE(510),
    [sym_ternary_expression] = STATE(510),
    [sym_binary_expression] = STATE(510),
    [sym_unary_expression] = STATE(510),
    [sym__literal] = STATE(510),
    [sym_boolean_literal] = STATE(510),
    [sym_character_literal] = STATE(510),
    [sym_integer_literal] = STATE(510),
    [sym_real_literal] = STATE(510),
    [sym_string_literal] = STATE(510),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1019),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1019),
    [sym_comment] = ACTIONS(38),
  },
  [451] = {
    [sym_equals_value_clause] = STATE(570),
    [anon_sym_SEMI] = ACTIONS(1159),
    [anon_sym_EQ] = ACTIONS(1161),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_AMP_AMP] = ACTIONS(1159),
    [anon_sym_PIPE_PIPE] = ACTIONS(1159),
    [anon_sym_GT_GT] = ACTIONS(1159),
    [anon_sym_LT_LT] = ACTIONS(1159),
    [anon_sym_AMP] = ACTIONS(1163),
    [anon_sym_CARET] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1163),
    [anon_sym_PLUS] = ACTIONS(1159),
    [anon_sym_DASH] = ACTIONS(1159),
    [anon_sym_STAR] = ACTIONS(1159),
    [anon_sym_SLASH] = ACTIONS(1163),
    [anon_sym_PERCENT] = ACTIONS(1159),
    [anon_sym_LT] = ACTIONS(1163),
    [anon_sym_LT_EQ] = ACTIONS(1159),
    [anon_sym_EQ_EQ] = ACTIONS(1159),
    [anon_sym_BANG_EQ] = ACTIONS(1159),
    [anon_sym_GT_EQ] = ACTIONS(1159),
    [anon_sym_GT] = ACTIONS(1163),
    [sym_comment] = ACTIONS(38),
  },
  [452] = {
    [sym__expression] = STATE(571),
    [sym_parenthesized_expression] = STATE(571),
    [sym_ternary_expression] = STATE(571),
    [sym_binary_expression] = STATE(571),
    [sym_unary_expression] = STATE(571),
    [sym__literal] = STATE(571),
    [sym_boolean_literal] = STATE(571),
    [sym_character_literal] = STATE(571),
    [sym_integer_literal] = STATE(571),
    [sym_real_literal] = STATE(571),
    [sym_string_literal] = STATE(571),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1165),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1165),
    [sym_comment] = ACTIONS(38),
  },
  [453] = {
    [anon_sym_SEMI] = ACTIONS(1167),
    [anon_sym_QMARK] = ACTIONS(1169),
    [anon_sym_AMP_AMP] = ACTIONS(1171),
    [anon_sym_PIPE_PIPE] = ACTIONS(1173),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1177),
    [anon_sym_CARET] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1181),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1189),
    [anon_sym_LT_EQ] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_GT_EQ] = ACTIONS(1191),
    [anon_sym_GT] = ACTIONS(1189),
    [sym_comment] = ACTIONS(38),
  },
  [454] = {
    [sym__expression] = STATE(453),
    [sym_parenthesized_expression] = STATE(453),
    [sym_ternary_expression] = STATE(453),
    [sym_binary_expression] = STATE(453),
    [sym_unary_expression] = STATE(453),
    [sym__literal] = STATE(453),
    [sym_boolean_literal] = STATE(453),
    [sym_character_literal] = STATE(453),
    [sym_integer_literal] = STATE(453),
    [sym_real_literal] = STATE(453),
    [sym_string_literal] = STATE(453),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [sym__statement] = STATE(584),
    [sym_expression_statement] = STATE(584),
    [sym_return_statement] = STATE(584),
    [sym_variable_assignment_statement] = STATE(584),
    [sym_empty_statement] = STATE(584),
    [aux_sym_statement_block_repeat1] = STATE(584),
    [anon_sym_SEMI] = ACTIONS(920),
    [anon_sym_RBRACE] = ACTIONS(1195),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(928),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(930),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(932),
  },
  [455] = {
    [anon_sym_RBRACE] = ACTIONS(1197),
    [anon_sym_partial] = ACTIONS(1199),
    [anon_sym_class] = ACTIONS(1199),
    [anon_sym_unsafe] = ACTIONS(1199),
    [anon_sym_abstract] = ACTIONS(1199),
    [anon_sym_sealed] = ACTIONS(1199),
    [anon_sym_static] = ACTIONS(1199),
    [anon_sym_new] = ACTIONS(1199),
    [anon_sym_public] = ACTIONS(1199),
    [anon_sym_protected] = ACTIONS(1199),
    [anon_sym_internal] = ACTIONS(1199),
    [anon_sym_private] = ACTIONS(1199),
    [anon_sym_interface] = ACTIONS(1199),
    [anon_sym_struct] = ACTIONS(1199),
    [anon_sym_enum] = ACTIONS(1199),
    [anon_sym_sbyte] = ACTIONS(1199),
    [anon_sym_byte] = ACTIONS(1199),
    [anon_sym_short] = ACTIONS(1199),
    [anon_sym_ushort] = ACTIONS(1199),
    [anon_sym_int] = ACTIONS(1199),
    [anon_sym_uint] = ACTIONS(1199),
    [anon_sym_long] = ACTIONS(1199),
    [anon_sym_ulong] = ACTIONS(1199),
    [anon_sym_char] = ACTIONS(1199),
    [anon_sym_delegate] = ACTIONS(1199),
    [sym_void_keyword] = ACTIONS(1199),
    [anon_sym_LBRACK] = ACTIONS(1197),
    [sym_const_keyword] = ACTIONS(1199),
    [anon_sym_readonly] = ACTIONS(1199),
    [anon_sym_volatile] = ACTIONS(1199),
    [anon_sym_bool] = ACTIONS(1199),
    [anon_sym_decimal] = ACTIONS(1199),
    [anon_sym_double] = ACTIONS(1199),
    [anon_sym_float] = ACTIONS(1199),
    [anon_sym_object] = ACTIONS(1199),
    [anon_sym_string] = ACTIONS(1199),
    [sym_identifier_name] = ACTIONS(1199),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1199),
  },
  [456] = {
    [sym_statement_block] = STATE(585),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(38),
  },
  [457] = {
    [sym_parameter_list] = STATE(586),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [458] = {
    [sym_type_parameter_list] = STATE(587),
    [anon_sym_LBRACE] = ACTIONS(1133),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [459] = {
    [anon_sym_LBRACE] = ACTIONS(1201),
    [sym_comment] = ACTIONS(38),
  },
  [460] = {
    [anon_sym_LBRACE] = ACTIONS(1203),
    [sym_comment] = ACTIONS(38),
  },
  [461] = {
    [sym_enum_member_declaration] = STATE(590),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [462] = {
    [sym__integral_type] = STATE(591),
    [anon_sym_sbyte] = ACTIONS(1205),
    [anon_sym_byte] = ACTIONS(1205),
    [anon_sym_short] = ACTIONS(1205),
    [anon_sym_ushort] = ACTIONS(1205),
    [anon_sym_int] = ACTIONS(1205),
    [anon_sym_uint] = ACTIONS(1205),
    [anon_sym_long] = ACTIONS(1205),
    [anon_sym_ulong] = ACTIONS(1205),
    [anon_sym_char] = ACTIONS(1205),
    [sym_comment] = ACTIONS(38),
  },
  [463] = {
    [sym_parameter_list] = STATE(592),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [464] = {
    [anon_sym_RBRACE] = ACTIONS(1207),
    [anon_sym_partial] = ACTIONS(1209),
    [anon_sym_class] = ACTIONS(1209),
    [anon_sym_unsafe] = ACTIONS(1209),
    [anon_sym_abstract] = ACTIONS(1209),
    [anon_sym_sealed] = ACTIONS(1209),
    [anon_sym_static] = ACTIONS(1209),
    [anon_sym_new] = ACTIONS(1209),
    [anon_sym_public] = ACTIONS(1209),
    [anon_sym_protected] = ACTIONS(1209),
    [anon_sym_internal] = ACTIONS(1209),
    [anon_sym_private] = ACTIONS(1209),
    [anon_sym_interface] = ACTIONS(1209),
    [anon_sym_struct] = ACTIONS(1209),
    [anon_sym_enum] = ACTIONS(1209),
    [anon_sym_sbyte] = ACTIONS(1209),
    [anon_sym_byte] = ACTIONS(1209),
    [anon_sym_short] = ACTIONS(1209),
    [anon_sym_ushort] = ACTIONS(1209),
    [anon_sym_int] = ACTIONS(1209),
    [anon_sym_uint] = ACTIONS(1209),
    [anon_sym_long] = ACTIONS(1209),
    [anon_sym_ulong] = ACTIONS(1209),
    [anon_sym_char] = ACTIONS(1209),
    [anon_sym_delegate] = ACTIONS(1209),
    [sym_void_keyword] = ACTIONS(1209),
    [anon_sym_LBRACK] = ACTIONS(1207),
    [sym_const_keyword] = ACTIONS(1209),
    [anon_sym_readonly] = ACTIONS(1209),
    [anon_sym_volatile] = ACTIONS(1209),
    [anon_sym_bool] = ACTIONS(1209),
    [anon_sym_decimal] = ACTIONS(1209),
    [anon_sym_double] = ACTIONS(1209),
    [anon_sym_float] = ACTIONS(1209),
    [anon_sym_object] = ACTIONS(1209),
    [anon_sym_string] = ACTIONS(1209),
    [sym_identifier_name] = ACTIONS(1209),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1209),
  },
  [465] = {
    [anon_sym_RBRACE] = ACTIONS(1211),
    [anon_sym_partial] = ACTIONS(1213),
    [anon_sym_class] = ACTIONS(1213),
    [anon_sym_unsafe] = ACTIONS(1213),
    [anon_sym_abstract] = ACTIONS(1213),
    [anon_sym_sealed] = ACTIONS(1213),
    [anon_sym_static] = ACTIONS(1213),
    [anon_sym_new] = ACTIONS(1213),
    [anon_sym_public] = ACTIONS(1213),
    [anon_sym_protected] = ACTIONS(1213),
    [anon_sym_internal] = ACTIONS(1213),
    [anon_sym_private] = ACTIONS(1213),
    [anon_sym_interface] = ACTIONS(1213),
    [anon_sym_struct] = ACTIONS(1213),
    [anon_sym_enum] = ACTIONS(1213),
    [anon_sym_sbyte] = ACTIONS(1213),
    [anon_sym_byte] = ACTIONS(1213),
    [anon_sym_short] = ACTIONS(1213),
    [anon_sym_ushort] = ACTIONS(1213),
    [anon_sym_int] = ACTIONS(1213),
    [anon_sym_uint] = ACTIONS(1213),
    [anon_sym_long] = ACTIONS(1213),
    [anon_sym_ulong] = ACTIONS(1213),
    [anon_sym_char] = ACTIONS(1213),
    [anon_sym_delegate] = ACTIONS(1213),
    [sym_void_keyword] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(1211),
    [sym_const_keyword] = ACTIONS(1213),
    [anon_sym_readonly] = ACTIONS(1213),
    [anon_sym_volatile] = ACTIONS(1213),
    [anon_sym_bool] = ACTIONS(1213),
    [anon_sym_decimal] = ACTIONS(1213),
    [anon_sym_double] = ACTIONS(1213),
    [anon_sym_float] = ACTIONS(1213),
    [anon_sym_object] = ACTIONS(1213),
    [anon_sym_string] = ACTIONS(1213),
    [sym_identifier_name] = ACTIONS(1213),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1213),
  },
  [466] = {
    [sym_statement_block] = STATE(593),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(38),
  },
  [467] = {
    [sym_parameter_list] = STATE(586),
    [sym_type_parameter_list] = STATE(594),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [468] = {
    [sym_identifier_name] = ACTIONS(1215),
    [sym_comment] = ACTIONS(38),
  },
  [469] = {
    [sym_type_parameter_list] = STATE(596),
    [anon_sym_LBRACE] = ACTIONS(1201),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [470] = {
    [sym_type_parameter_list] = STATE(597),
    [anon_sym_LBRACE] = ACTIONS(1203),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [471] = {
    [anon_sym_LBRACE] = ACTIONS(1147),
    [anon_sym_COLON] = ACTIONS(1217),
    [sym_comment] = ACTIONS(38),
  },
  [472] = {
    [sym_identifier_name] = ACTIONS(1219),
    [sym_comment] = ACTIONS(38),
  },
  [473] = {
    [anon_sym_SEMI] = ACTIONS(1221),
    [sym_comment] = ACTIONS(38),
  },
  [474] = {
    [sym_parameter_list] = STATE(601),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_identifier_name] = ACTIONS(325),
    [sym_comment] = ACTIONS(38),
  },
  [475] = {
    [sym_identifier_name] = ACTIONS(1223),
    [sym_comment] = ACTIONS(38),
  },
  [476] = {
    [sym__expression] = STATE(510),
    [sym_parenthesized_expression] = STATE(510),
    [sym_ternary_expression] = STATE(510),
    [sym_binary_expression] = STATE(510),
    [sym_unary_expression] = STATE(510),
    [sym__literal] = STATE(510),
    [sym_boolean_literal] = STATE(510),
    [sym_character_literal] = STATE(510),
    [sym_integer_literal] = STATE(510),
    [sym_real_literal] = STATE(510),
    [sym_string_literal] = STATE(510),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1019),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1019),
    [sym_comment] = ACTIONS(38),
  },
  [477] = {
    [anon_sym_SEMI] = ACTIONS(1049),
    [anon_sym_COMMA] = ACTIONS(1049),
    [anon_sym_QMARK] = ACTIONS(1225),
    [anon_sym_AMP_AMP] = ACTIONS(1227),
    [anon_sym_PIPE_PIPE] = ACTIONS(1229),
    [anon_sym_GT_GT] = ACTIONS(1231),
    [anon_sym_LT_LT] = ACTIONS(1231),
    [anon_sym_AMP] = ACTIONS(1233),
    [anon_sym_CARET] = ACTIONS(1235),
    [anon_sym_PIPE] = ACTIONS(1237),
    [anon_sym_PLUS] = ACTIONS(1239),
    [anon_sym_DASH] = ACTIONS(1239),
    [anon_sym_STAR] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1245),
    [anon_sym_LT_EQ] = ACTIONS(1247),
    [anon_sym_EQ_EQ] = ACTIONS(1249),
    [anon_sym_BANG_EQ] = ACTIONS(1249),
    [anon_sym_GT_EQ] = ACTIONS(1247),
    [anon_sym_GT] = ACTIONS(1245),
    [sym_comment] = ACTIONS(38),
  },
  [478] = {
    [anon_sym_SEMI] = ACTIONS(1251),
    [anon_sym_COMMA] = ACTIONS(1251),
    [sym_comment] = ACTIONS(38),
  },
  [479] = {
    [aux_sym_variable_declaration_repeat1] = STATE(479),
    [anon_sym_SEMI] = ACTIONS(1251),
    [anon_sym_COMMA] = ACTIONS(1253),
    [sym_comment] = ACTIONS(38),
  },
  [480] = {
    [anon_sym_RBRACE] = ACTIONS(1211),
    [anon_sym_unsafe] = ACTIONS(1213),
    [anon_sym_static] = ACTIONS(1213),
    [anon_sym_new] = ACTIONS(1213),
    [anon_sym_public] = ACTIONS(1213),
    [anon_sym_protected] = ACTIONS(1213),
    [anon_sym_internal] = ACTIONS(1213),
    [anon_sym_private] = ACTIONS(1213),
    [anon_sym_sbyte] = ACTIONS(1213),
    [anon_sym_byte] = ACTIONS(1213),
    [anon_sym_short] = ACTIONS(1213),
    [anon_sym_ushort] = ACTIONS(1213),
    [anon_sym_int] = ACTIONS(1213),
    [anon_sym_uint] = ACTIONS(1213),
    [anon_sym_long] = ACTIONS(1213),
    [anon_sym_ulong] = ACTIONS(1213),
    [anon_sym_char] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(1211),
    [sym_const_keyword] = ACTIONS(1213),
    [anon_sym_readonly] = ACTIONS(1213),
    [anon_sym_volatile] = ACTIONS(1213),
    [anon_sym_bool] = ACTIONS(1213),
    [anon_sym_decimal] = ACTIONS(1213),
    [anon_sym_double] = ACTIONS(1213),
    [anon_sym_float] = ACTIONS(1213),
    [anon_sym_object] = ACTIONS(1213),
    [anon_sym_string] = ACTIONS(1213),
    [sym_identifier_name] = ACTIONS(1213),
    [sym_comment] = ACTIONS(38),
  },
  [481] = {
    [anon_sym_SEMI] = ACTIONS(1256),
    [sym_comment] = ACTIONS(38),
  },
  [482] = {
    [sym__type_declaration] = STATE(615),
    [sym_class_declaration] = STATE(615),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(615),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(615),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(615),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(615),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(615),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(615),
    [sym_method_declaration] = STATE(615),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(615),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1258),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [483] = {
    [anon_sym_LBRACE] = ACTIONS(1260),
    [sym_comment] = ACTIONS(38),
  },
  [484] = {
    [anon_sym_RBRACE] = ACTIONS(375),
    [anon_sym_partial] = ACTIONS(1135),
    [anon_sym_class] = ACTIONS(1135),
    [anon_sym_unsafe] = ACTIONS(1135),
    [anon_sym_abstract] = ACTIONS(1135),
    [anon_sym_sealed] = ACTIONS(1135),
    [anon_sym_static] = ACTIONS(1135),
    [anon_sym_new] = ACTIONS(1135),
    [anon_sym_public] = ACTIONS(1135),
    [anon_sym_protected] = ACTIONS(1135),
    [anon_sym_internal] = ACTIONS(1135),
    [anon_sym_private] = ACTIONS(1135),
    [anon_sym_interface] = ACTIONS(1135),
    [anon_sym_struct] = ACTIONS(1135),
    [anon_sym_enum] = ACTIONS(1135),
    [anon_sym_sbyte] = ACTIONS(1135),
    [anon_sym_byte] = ACTIONS(1135),
    [anon_sym_short] = ACTIONS(1135),
    [anon_sym_ushort] = ACTIONS(1135),
    [anon_sym_int] = ACTIONS(1135),
    [anon_sym_uint] = ACTIONS(1135),
    [anon_sym_long] = ACTIONS(1135),
    [anon_sym_ulong] = ACTIONS(1135),
    [anon_sym_char] = ACTIONS(1135),
    [anon_sym_delegate] = ACTIONS(1135),
    [anon_sym_LBRACK] = ACTIONS(375),
    [sym_const_keyword] = ACTIONS(1135),
    [anon_sym_readonly] = ACTIONS(1135),
    [anon_sym_volatile] = ACTIONS(1135),
    [anon_sym_bool] = ACTIONS(1135),
    [anon_sym_decimal] = ACTIONS(1135),
    [anon_sym_double] = ACTIONS(1135),
    [anon_sym_float] = ACTIONS(1135),
    [anon_sym_object] = ACTIONS(1135),
    [anon_sym_string] = ACTIONS(1135),
    [sym_identifier_name] = ACTIONS(1135),
    [sym_comment] = ACTIONS(38),
  },
  [485] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1258),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [486] = {
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_partial] = ACTIONS(1137),
    [anon_sym_class] = ACTIONS(1137),
    [anon_sym_unsafe] = ACTIONS(1137),
    [anon_sym_abstract] = ACTIONS(1137),
    [anon_sym_sealed] = ACTIONS(1137),
    [anon_sym_static] = ACTIONS(1137),
    [anon_sym_new] = ACTIONS(1137),
    [anon_sym_public] = ACTIONS(1137),
    [anon_sym_protected] = ACTIONS(1137),
    [anon_sym_internal] = ACTIONS(1137),
    [anon_sym_private] = ACTIONS(1137),
    [anon_sym_interface] = ACTIONS(1137),
    [anon_sym_struct] = ACTIONS(1137),
    [anon_sym_enum] = ACTIONS(1137),
    [anon_sym_sbyte] = ACTIONS(1137),
    [anon_sym_byte] = ACTIONS(1137),
    [anon_sym_short] = ACTIONS(1137),
    [anon_sym_ushort] = ACTIONS(1137),
    [anon_sym_int] = ACTIONS(1137),
    [anon_sym_uint] = ACTIONS(1137),
    [anon_sym_long] = ACTIONS(1137),
    [anon_sym_ulong] = ACTIONS(1137),
    [anon_sym_char] = ACTIONS(1137),
    [anon_sym_delegate] = ACTIONS(1137),
    [anon_sym_LBRACK] = ACTIONS(453),
    [sym_const_keyword] = ACTIONS(1137),
    [anon_sym_readonly] = ACTIONS(1137),
    [anon_sym_volatile] = ACTIONS(1137),
    [anon_sym_bool] = ACTIONS(1137),
    [anon_sym_decimal] = ACTIONS(1137),
    [anon_sym_double] = ACTIONS(1137),
    [anon_sym_float] = ACTIONS(1137),
    [anon_sym_object] = ACTIONS(1137),
    [anon_sym_string] = ACTIONS(1137),
    [sym_identifier_name] = ACTIONS(1137),
    [sym_comment] = ACTIONS(38),
  },
  [487] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1262),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [488] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(618),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(618),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1262),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [489] = {
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_partial] = ACTIONS(1141),
    [anon_sym_class] = ACTIONS(1141),
    [anon_sym_unsafe] = ACTIONS(1141),
    [anon_sym_abstract] = ACTIONS(1141),
    [anon_sym_sealed] = ACTIONS(1141),
    [anon_sym_static] = ACTIONS(1141),
    [anon_sym_new] = ACTIONS(1141),
    [anon_sym_public] = ACTIONS(1141),
    [anon_sym_protected] = ACTIONS(1141),
    [anon_sym_internal] = ACTIONS(1141),
    [anon_sym_private] = ACTIONS(1141),
    [anon_sym_interface] = ACTIONS(1141),
    [anon_sym_struct] = ACTIONS(1141),
    [anon_sym_enum] = ACTIONS(1141),
    [anon_sym_sbyte] = ACTIONS(1141),
    [anon_sym_byte] = ACTIONS(1141),
    [anon_sym_short] = ACTIONS(1141),
    [anon_sym_ushort] = ACTIONS(1141),
    [anon_sym_int] = ACTIONS(1141),
    [anon_sym_uint] = ACTIONS(1141),
    [anon_sym_long] = ACTIONS(1141),
    [anon_sym_ulong] = ACTIONS(1141),
    [anon_sym_char] = ACTIONS(1141),
    [anon_sym_delegate] = ACTIONS(1141),
    [anon_sym_LBRACK] = ACTIONS(463),
    [sym_const_keyword] = ACTIONS(1141),
    [anon_sym_readonly] = ACTIONS(1141),
    [anon_sym_volatile] = ACTIONS(1141),
    [anon_sym_bool] = ACTIONS(1141),
    [anon_sym_decimal] = ACTIONS(1141),
    [anon_sym_double] = ACTIONS(1141),
    [anon_sym_float] = ACTIONS(1141),
    [anon_sym_object] = ACTIONS(1141),
    [anon_sym_string] = ACTIONS(1141),
    [sym_identifier_name] = ACTIONS(1141),
    [sym_comment] = ACTIONS(38),
  },
  [490] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1264),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [491] = {
    [sym__type_declaration] = STATE(620),
    [sym_class_declaration] = STATE(620),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(620),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(620),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(620),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(620),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(620),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(620),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1264),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [492] = {
    [aux_sym_enum_declaration_repeat1] = STATE(622),
    [anon_sym_RBRACE] = ACTIONS(1266),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [493] = {
    [anon_sym_LBRACE] = ACTIONS(1268),
    [sym_comment] = ACTIONS(38),
  },
  [494] = {
    [anon_sym_SEMI] = ACTIONS(1270),
    [sym_comment] = ACTIONS(38),
  },
  [495] = {
    [sym_type_parameter_list] = STATE(625),
    [anon_sym_LBRACE] = ACTIONS(1260),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [496] = {
    [anon_sym_LBRACE] = ACTIONS(1272),
    [sym_comment] = ACTIONS(38),
  },
  [497] = {
    [anon_sym_LBRACE] = ACTIONS(1274),
    [sym_comment] = ACTIONS(38),
  },
  [498] = {
    [sym_enum_member_declaration] = STATE(628),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [499] = {
    [sym__integral_type] = STATE(629),
    [anon_sym_sbyte] = ACTIONS(1276),
    [anon_sym_byte] = ACTIONS(1276),
    [anon_sym_short] = ACTIONS(1276),
    [anon_sym_ushort] = ACTIONS(1276),
    [anon_sym_int] = ACTIONS(1276),
    [anon_sym_uint] = ACTIONS(1276),
    [anon_sym_long] = ACTIONS(1276),
    [anon_sym_ulong] = ACTIONS(1276),
    [anon_sym_char] = ACTIONS(1276),
    [sym_comment] = ACTIONS(38),
  },
  [500] = {
    [sym_parameter_list] = STATE(630),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [501] = {
    [anon_sym_RBRACE] = ACTIONS(1211),
    [anon_sym_partial] = ACTIONS(1213),
    [anon_sym_class] = ACTIONS(1213),
    [anon_sym_unsafe] = ACTIONS(1213),
    [anon_sym_abstract] = ACTIONS(1213),
    [anon_sym_sealed] = ACTIONS(1213),
    [anon_sym_static] = ACTIONS(1213),
    [anon_sym_new] = ACTIONS(1213),
    [anon_sym_public] = ACTIONS(1213),
    [anon_sym_protected] = ACTIONS(1213),
    [anon_sym_internal] = ACTIONS(1213),
    [anon_sym_private] = ACTIONS(1213),
    [anon_sym_interface] = ACTIONS(1213),
    [anon_sym_struct] = ACTIONS(1213),
    [anon_sym_enum] = ACTIONS(1213),
    [anon_sym_sbyte] = ACTIONS(1213),
    [anon_sym_byte] = ACTIONS(1213),
    [anon_sym_short] = ACTIONS(1213),
    [anon_sym_ushort] = ACTIONS(1213),
    [anon_sym_int] = ACTIONS(1213),
    [anon_sym_uint] = ACTIONS(1213),
    [anon_sym_long] = ACTIONS(1213),
    [anon_sym_ulong] = ACTIONS(1213),
    [anon_sym_char] = ACTIONS(1213),
    [anon_sym_delegate] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(1211),
    [sym_const_keyword] = ACTIONS(1213),
    [anon_sym_readonly] = ACTIONS(1213),
    [anon_sym_volatile] = ACTIONS(1213),
    [anon_sym_bool] = ACTIONS(1213),
    [anon_sym_decimal] = ACTIONS(1213),
    [anon_sym_double] = ACTIONS(1213),
    [anon_sym_float] = ACTIONS(1213),
    [anon_sym_object] = ACTIONS(1213),
    [anon_sym_string] = ACTIONS(1213),
    [sym_identifier_name] = ACTIONS(1213),
    [sym_comment] = ACTIONS(38),
  },
  [502] = {
    [sym_identifier_name] = ACTIONS(1278),
    [sym_comment] = ACTIONS(38),
  },
  [503] = {
    [sym_type_parameter_list] = STATE(632),
    [anon_sym_LBRACE] = ACTIONS(1272),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [504] = {
    [sym_type_parameter_list] = STATE(633),
    [anon_sym_LBRACE] = ACTIONS(1274),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [505] = {
    [anon_sym_LBRACE] = ACTIONS(1268),
    [anon_sym_COLON] = ACTIONS(1280),
    [sym_comment] = ACTIONS(38),
  },
  [506] = {
    [sym_identifier_name] = ACTIONS(1282),
    [sym_comment] = ACTIONS(38),
  },
  [507] = {
    [anon_sym_SEMI] = ACTIONS(1284),
    [sym_comment] = ACTIONS(38),
  },
  [508] = {
    [sym__expression] = STATE(510),
    [sym_parenthesized_expression] = STATE(510),
    [sym_ternary_expression] = STATE(510),
    [sym_binary_expression] = STATE(510),
    [sym_unary_expression] = STATE(510),
    [sym__literal] = STATE(510),
    [sym_boolean_literal] = STATE(510),
    [sym_character_literal] = STATE(510),
    [sym_integer_literal] = STATE(510),
    [sym_real_literal] = STATE(510),
    [sym_string_literal] = STATE(510),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1019),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1019),
    [sym_comment] = ACTIONS(38),
  },
  [509] = {
    [anon_sym_RPAREN] = ACTIONS(1286),
    [anon_sym_QMARK] = ACTIONS(1288),
    [anon_sym_AMP_AMP] = ACTIONS(1290),
    [anon_sym_PIPE_PIPE] = ACTIONS(1292),
    [anon_sym_GT_GT] = ACTIONS(1294),
    [anon_sym_LT_LT] = ACTIONS(1294),
    [anon_sym_AMP] = ACTIONS(1296),
    [anon_sym_CARET] = ACTIONS(1298),
    [anon_sym_PIPE] = ACTIONS(1300),
    [anon_sym_PLUS] = ACTIONS(1302),
    [anon_sym_DASH] = ACTIONS(1302),
    [anon_sym_STAR] = ACTIONS(1304),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1304),
    [anon_sym_LT] = ACTIONS(1308),
    [anon_sym_LT_EQ] = ACTIONS(1310),
    [anon_sym_EQ_EQ] = ACTIONS(1312),
    [anon_sym_BANG_EQ] = ACTIONS(1312),
    [anon_sym_GT_EQ] = ACTIONS(1310),
    [anon_sym_GT] = ACTIONS(1308),
    [sym_comment] = ACTIONS(38),
  },
  [510] = {
    [anon_sym_SEMI] = ACTIONS(1314),
    [anon_sym_RBRACE] = ACTIONS(1314),
    [anon_sym_COLON] = ACTIONS(1314),
    [anon_sym_COMMA] = ACTIONS(1314),
    [anon_sym_RPAREN] = ACTIONS(1314),
    [sym_params_keyword] = ACTIONS(1314),
    [anon_sym_LBRACK] = ACTIONS(1314),
    [anon_sym_QMARK] = ACTIONS(1314),
    [anon_sym_AMP_AMP] = ACTIONS(1314),
    [anon_sym_PIPE_PIPE] = ACTIONS(1314),
    [anon_sym_GT_GT] = ACTIONS(1314),
    [anon_sym_LT_LT] = ACTIONS(1314),
    [anon_sym_AMP] = ACTIONS(1316),
    [anon_sym_CARET] = ACTIONS(1314),
    [anon_sym_PIPE] = ACTIONS(1316),
    [anon_sym_PLUS] = ACTIONS(1314),
    [anon_sym_DASH] = ACTIONS(1314),
    [anon_sym_STAR] = ACTIONS(1314),
    [anon_sym_SLASH] = ACTIONS(1316),
    [anon_sym_PERCENT] = ACTIONS(1314),
    [anon_sym_LT] = ACTIONS(1316),
    [anon_sym_LT_EQ] = ACTIONS(1314),
    [anon_sym_EQ_EQ] = ACTIONS(1314),
    [anon_sym_BANG_EQ] = ACTIONS(1314),
    [anon_sym_GT_EQ] = ACTIONS(1314),
    [anon_sym_GT] = ACTIONS(1316),
    [sym_comment] = ACTIONS(38),
  },
  [511] = {
    [anon_sym_SQUOTE] = ACTIONS(1318),
    [sym_comment] = ACTIONS(38),
  },
  [512] = {
    [anon_sym_SEMI] = ACTIONS(1320),
    [anon_sym_RBRACE] = ACTIONS(1320),
    [anon_sym_COLON] = ACTIONS(1320),
    [anon_sym_COMMA] = ACTIONS(1320),
    [anon_sym_RPAREN] = ACTIONS(1320),
    [sym_params_keyword] = ACTIONS(1320),
    [anon_sym_LBRACK] = ACTIONS(1320),
    [anon_sym_QMARK] = ACTIONS(1320),
    [anon_sym_AMP_AMP] = ACTIONS(1320),
    [anon_sym_PIPE_PIPE] = ACTIONS(1320),
    [anon_sym_GT_GT] = ACTIONS(1320),
    [anon_sym_LT_LT] = ACTIONS(1320),
    [anon_sym_AMP] = ACTIONS(1322),
    [anon_sym_CARET] = ACTIONS(1320),
    [anon_sym_PIPE] = ACTIONS(1322),
    [anon_sym_PLUS] = ACTIONS(1320),
    [anon_sym_DASH] = ACTIONS(1320),
    [anon_sym_STAR] = ACTIONS(1320),
    [anon_sym_SLASH] = ACTIONS(1322),
    [anon_sym_PERCENT] = ACTIONS(1320),
    [anon_sym_LT] = ACTIONS(1322),
    [anon_sym_LT_EQ] = ACTIONS(1320),
    [anon_sym_EQ_EQ] = ACTIONS(1320),
    [anon_sym_BANG_EQ] = ACTIONS(1320),
    [anon_sym_GT_EQ] = ACTIONS(1320),
    [anon_sym_GT] = ACTIONS(1322),
    [sym_comment] = ACTIONS(38),
  },
  [513] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1324),
    [sym_comment] = ACTIONS(38),
  },
  [514] = {
    [anon_sym_SEMI] = ACTIONS(1326),
    [anon_sym_RBRACE] = ACTIONS(1326),
    [anon_sym_COLON] = ACTIONS(1326),
    [anon_sym_COMMA] = ACTIONS(1326),
    [anon_sym_RPAREN] = ACTIONS(1326),
    [sym_params_keyword] = ACTIONS(1326),
    [anon_sym_LBRACK] = ACTIONS(1326),
    [anon_sym_QMARK] = ACTIONS(1326),
    [anon_sym_AMP_AMP] = ACTIONS(1326),
    [anon_sym_PIPE_PIPE] = ACTIONS(1326),
    [anon_sym_GT_GT] = ACTIONS(1326),
    [anon_sym_LT_LT] = ACTIONS(1326),
    [anon_sym_AMP] = ACTIONS(1328),
    [anon_sym_CARET] = ACTIONS(1326),
    [anon_sym_PIPE] = ACTIONS(1328),
    [anon_sym_PLUS] = ACTIONS(1326),
    [anon_sym_DASH] = ACTIONS(1326),
    [anon_sym_STAR] = ACTIONS(1326),
    [anon_sym_SLASH] = ACTIONS(1328),
    [anon_sym_PERCENT] = ACTIONS(1326),
    [anon_sym_LT] = ACTIONS(1328),
    [anon_sym_LT_EQ] = ACTIONS(1326),
    [anon_sym_EQ_EQ] = ACTIONS(1326),
    [anon_sym_BANG_EQ] = ACTIONS(1326),
    [anon_sym_GT_EQ] = ACTIONS(1326),
    [anon_sym_GT] = ACTIONS(1328),
    [sym_comment] = ACTIONS(38),
  },
  [515] = {
    [anon_sym_SEMI] = ACTIONS(1326),
    [anon_sym_RBRACE] = ACTIONS(1326),
    [anon_sym_COLON] = ACTIONS(1326),
    [anon_sym_COMMA] = ACTIONS(1326),
    [anon_sym_RPAREN] = ACTIONS(1326),
    [sym_params_keyword] = ACTIONS(1326),
    [anon_sym_LBRACK] = ACTIONS(1326),
    [anon_sym_QMARK] = ACTIONS(1326),
    [anon_sym_AMP_AMP] = ACTIONS(1326),
    [anon_sym_PIPE_PIPE] = ACTIONS(1326),
    [anon_sym_GT_GT] = ACTIONS(1326),
    [anon_sym_LT_LT] = ACTIONS(1326),
    [anon_sym_AMP] = ACTIONS(1328),
    [anon_sym_CARET] = ACTIONS(1326),
    [anon_sym_PIPE] = ACTIONS(1328),
    [anon_sym_PLUS] = ACTIONS(1326),
    [anon_sym_DASH] = ACTIONS(1326),
    [anon_sym_STAR] = ACTIONS(1326),
    [anon_sym_SLASH] = ACTIONS(1328),
    [anon_sym_PERCENT] = ACTIONS(1326),
    [anon_sym_LT] = ACTIONS(1328),
    [anon_sym_LT_EQ] = ACTIONS(1326),
    [anon_sym_EQ_EQ] = ACTIONS(1326),
    [anon_sym_BANG_EQ] = ACTIONS(1326),
    [anon_sym_GT_EQ] = ACTIONS(1326),
    [anon_sym_GT] = ACTIONS(1328),
    [sym__real_type_suffix] = ACTIONS(1330),
    [sym_comment] = ACTIONS(38),
  },
  [516] = {
    [anon_sym_SEMI] = ACTIONS(1326),
    [anon_sym_RBRACE] = ACTIONS(1326),
    [anon_sym_COLON] = ACTIONS(1326),
    [anon_sym_COMMA] = ACTIONS(1326),
    [anon_sym_RPAREN] = ACTIONS(1326),
    [sym_params_keyword] = ACTIONS(1326),
    [anon_sym_LBRACK] = ACTIONS(1326),
    [anon_sym_QMARK] = ACTIONS(1326),
    [anon_sym_AMP_AMP] = ACTIONS(1326),
    [anon_sym_PIPE_PIPE] = ACTIONS(1326),
    [anon_sym_GT_GT] = ACTIONS(1326),
    [anon_sym_LT_LT] = ACTIONS(1326),
    [anon_sym_AMP] = ACTIONS(1328),
    [anon_sym_CARET] = ACTIONS(1326),
    [anon_sym_PIPE] = ACTIONS(1328),
    [anon_sym_PLUS] = ACTIONS(1326),
    [anon_sym_DASH] = ACTIONS(1326),
    [anon_sym_STAR] = ACTIONS(1326),
    [anon_sym_SLASH] = ACTIONS(1328),
    [anon_sym_PERCENT] = ACTIONS(1326),
    [anon_sym_LT] = ACTIONS(1328),
    [anon_sym_LT_EQ] = ACTIONS(1326),
    [anon_sym_EQ_EQ] = ACTIONS(1326),
    [anon_sym_BANG_EQ] = ACTIONS(1326),
    [anon_sym_GT_EQ] = ACTIONS(1326),
    [anon_sym_GT] = ACTIONS(1328),
    [sym__real_type_suffix] = ACTIONS(1330),
    [sym__exponent_part] = ACTIONS(1332),
    [sym_comment] = ACTIONS(38),
  },
  [517] = {
    [anon_sym_SEMI] = ACTIONS(1334),
    [anon_sym_RBRACE] = ACTIONS(1334),
    [anon_sym_COLON] = ACTIONS(1334),
    [anon_sym_COMMA] = ACTIONS(1334),
    [anon_sym_RPAREN] = ACTIONS(1334),
    [sym_params_keyword] = ACTIONS(1334),
    [anon_sym_LBRACK] = ACTIONS(1334),
    [anon_sym_QMARK] = ACTIONS(1334),
    [anon_sym_AMP_AMP] = ACTIONS(1334),
    [anon_sym_PIPE_PIPE] = ACTIONS(1334),
    [anon_sym_GT_GT] = ACTIONS(1334),
    [anon_sym_LT_LT] = ACTIONS(1334),
    [anon_sym_AMP] = ACTIONS(1336),
    [anon_sym_CARET] = ACTIONS(1334),
    [anon_sym_PIPE] = ACTIONS(1336),
    [anon_sym_PLUS] = ACTIONS(1334),
    [anon_sym_DASH] = ACTIONS(1334),
    [anon_sym_STAR] = ACTIONS(1334),
    [anon_sym_SLASH] = ACTIONS(1336),
    [anon_sym_PERCENT] = ACTIONS(1334),
    [anon_sym_LT] = ACTIONS(1336),
    [anon_sym_LT_EQ] = ACTIONS(1334),
    [anon_sym_EQ_EQ] = ACTIONS(1334),
    [anon_sym_BANG_EQ] = ACTIONS(1334),
    [anon_sym_GT_EQ] = ACTIONS(1334),
    [anon_sym_GT] = ACTIONS(1336),
    [sym_comment] = ACTIONS(38),
  },
  [518] = {
    [sym__unicode_escape_sequence] = STATE(653),
    [sym__simple_escape_sequence] = STATE(653),
    [sym__regular_string_literal_character] = STATE(653),
    [aux_sym__regular_string_literal_repeat1] = STATE(653),
    [sym__hexadecimal_escape_sequence] = ACTIONS(1338),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1338),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1338),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1338),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1338),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1338),
    [anon_sym_BSLASH0] = ACTIONS(1338),
    [anon_sym_BSLASHa] = ACTIONS(1338),
    [anon_sym_BSLASHb] = ACTIONS(1338),
    [anon_sym_BSLASHf] = ACTIONS(1338),
    [anon_sym_BSLASHn] = ACTIONS(1338),
    [anon_sym_BSLASHr] = ACTIONS(1338),
    [anon_sym_BSLASHt] = ACTIONS(1338),
    [anon_sym_BSLASHv] = ACTIONS(1338),
    [anon_sym_DQUOTE] = ACTIONS(1340),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1338),
    [sym_comment] = ACTIONS(1027),
  },
  [519] = {
    [anon_sym_DQUOTE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(38),
  },
  [520] = {
    [sym__expression] = STATE(656),
    [sym_parenthesized_expression] = STATE(656),
    [sym_ternary_expression] = STATE(656),
    [sym_binary_expression] = STATE(656),
    [sym_unary_expression] = STATE(656),
    [sym__literal] = STATE(656),
    [sym_boolean_literal] = STATE(656),
    [sym_character_literal] = STATE(656),
    [sym_integer_literal] = STATE(656),
    [sym_real_literal] = STATE(656),
    [sym_string_literal] = STATE(656),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1348),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1348),
    [sym_comment] = ACTIONS(38),
  },
  [521] = {
    [sym__expression] = STATE(657),
    [sym_parenthesized_expression] = STATE(657),
    [sym_ternary_expression] = STATE(657),
    [sym_binary_expression] = STATE(657),
    [sym_unary_expression] = STATE(657),
    [sym__literal] = STATE(657),
    [sym_boolean_literal] = STATE(657),
    [sym_character_literal] = STATE(657),
    [sym_integer_literal] = STATE(657),
    [sym_real_literal] = STATE(657),
    [sym_string_literal] = STATE(657),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1350),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1350),
    [sym_comment] = ACTIONS(38),
  },
  [522] = {
    [sym__expression] = STATE(658),
    [sym_parenthesized_expression] = STATE(658),
    [sym_ternary_expression] = STATE(658),
    [sym_binary_expression] = STATE(658),
    [sym_unary_expression] = STATE(658),
    [sym__literal] = STATE(658),
    [sym_boolean_literal] = STATE(658),
    [sym_character_literal] = STATE(658),
    [sym_integer_literal] = STATE(658),
    [sym_real_literal] = STATE(658),
    [sym_string_literal] = STATE(658),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1352),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1352),
    [sym_comment] = ACTIONS(38),
  },
  [523] = {
    [sym__expression] = STATE(659),
    [sym_parenthesized_expression] = STATE(659),
    [sym_ternary_expression] = STATE(659),
    [sym_binary_expression] = STATE(659),
    [sym_unary_expression] = STATE(659),
    [sym__literal] = STATE(659),
    [sym_boolean_literal] = STATE(659),
    [sym_character_literal] = STATE(659),
    [sym_integer_literal] = STATE(659),
    [sym_real_literal] = STATE(659),
    [sym_string_literal] = STATE(659),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1354),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1354),
    [sym_comment] = ACTIONS(38),
  },
  [524] = {
    [sym__expression] = STATE(660),
    [sym_parenthesized_expression] = STATE(660),
    [sym_ternary_expression] = STATE(660),
    [sym_binary_expression] = STATE(660),
    [sym_unary_expression] = STATE(660),
    [sym__literal] = STATE(660),
    [sym_boolean_literal] = STATE(660),
    [sym_character_literal] = STATE(660),
    [sym_integer_literal] = STATE(660),
    [sym_real_literal] = STATE(660),
    [sym_string_literal] = STATE(660),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1356),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1356),
    [sym_comment] = ACTIONS(38),
  },
  [525] = {
    [sym__expression] = STATE(661),
    [sym_parenthesized_expression] = STATE(661),
    [sym_ternary_expression] = STATE(661),
    [sym_binary_expression] = STATE(661),
    [sym_unary_expression] = STATE(661),
    [sym__literal] = STATE(661),
    [sym_boolean_literal] = STATE(661),
    [sym_character_literal] = STATE(661),
    [sym_integer_literal] = STATE(661),
    [sym_real_literal] = STATE(661),
    [sym_string_literal] = STATE(661),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1358),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1358),
    [sym_comment] = ACTIONS(38),
  },
  [526] = {
    [sym__expression] = STATE(662),
    [sym_parenthesized_expression] = STATE(662),
    [sym_ternary_expression] = STATE(662),
    [sym_binary_expression] = STATE(662),
    [sym_unary_expression] = STATE(662),
    [sym__literal] = STATE(662),
    [sym_boolean_literal] = STATE(662),
    [sym_character_literal] = STATE(662),
    [sym_integer_literal] = STATE(662),
    [sym_real_literal] = STATE(662),
    [sym_string_literal] = STATE(662),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1360),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1360),
    [sym_comment] = ACTIONS(38),
  },
  [527] = {
    [sym__expression] = STATE(663),
    [sym_parenthesized_expression] = STATE(663),
    [sym_ternary_expression] = STATE(663),
    [sym_binary_expression] = STATE(663),
    [sym_unary_expression] = STATE(663),
    [sym__literal] = STATE(663),
    [sym_boolean_literal] = STATE(663),
    [sym_character_literal] = STATE(663),
    [sym_integer_literal] = STATE(663),
    [sym_real_literal] = STATE(663),
    [sym_string_literal] = STATE(663),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1362),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1362),
    [sym_comment] = ACTIONS(38),
  },
  [528] = {
    [sym__expression] = STATE(664),
    [sym_parenthesized_expression] = STATE(664),
    [sym_ternary_expression] = STATE(664),
    [sym_binary_expression] = STATE(664),
    [sym_unary_expression] = STATE(664),
    [sym__literal] = STATE(664),
    [sym_boolean_literal] = STATE(664),
    [sym_character_literal] = STATE(664),
    [sym_integer_literal] = STATE(664),
    [sym_real_literal] = STATE(664),
    [sym_string_literal] = STATE(664),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1364),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1364),
    [sym_comment] = ACTIONS(38),
  },
  [529] = {
    [sym__expression] = STATE(665),
    [sym_parenthesized_expression] = STATE(665),
    [sym_ternary_expression] = STATE(665),
    [sym_binary_expression] = STATE(665),
    [sym_unary_expression] = STATE(665),
    [sym__literal] = STATE(665),
    [sym_boolean_literal] = STATE(665),
    [sym_character_literal] = STATE(665),
    [sym_integer_literal] = STATE(665),
    [sym_real_literal] = STATE(665),
    [sym_string_literal] = STATE(665),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1366),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1366),
    [sym_comment] = ACTIONS(38),
  },
  [530] = {
    [ts_builtin_sym_end] = ACTIONS(1368),
    [anon_sym_using] = ACTIONS(1368),
    [anon_sym_namespace] = ACTIONS(1368),
    [anon_sym_RBRACE] = ACTIONS(1368),
    [anon_sym_partial] = ACTIONS(1368),
    [anon_sym_class] = ACTIONS(1368),
    [anon_sym_unsafe] = ACTIONS(1368),
    [anon_sym_abstract] = ACTIONS(1368),
    [anon_sym_sealed] = ACTIONS(1368),
    [anon_sym_static] = ACTIONS(1368),
    [anon_sym_new] = ACTIONS(1368),
    [anon_sym_public] = ACTIONS(1368),
    [anon_sym_protected] = ACTIONS(1368),
    [anon_sym_internal] = ACTIONS(1368),
    [anon_sym_private] = ACTIONS(1368),
    [anon_sym_interface] = ACTIONS(1368),
    [anon_sym_struct] = ACTIONS(1368),
    [anon_sym_enum] = ACTIONS(1368),
    [anon_sym_delegate] = ACTIONS(1368),
    [anon_sym_LBRACK] = ACTIONS(1368),
    [sym_comment] = ACTIONS(38),
  },
  [531] = {
    [ts_builtin_sym_end] = ACTIONS(1368),
    [anon_sym_SEMI] = ACTIONS(1370),
    [anon_sym_using] = ACTIONS(1368),
    [anon_sym_namespace] = ACTIONS(1368),
    [anon_sym_RBRACE] = ACTIONS(1368),
    [anon_sym_partial] = ACTIONS(1368),
    [anon_sym_class] = ACTIONS(1368),
    [anon_sym_unsafe] = ACTIONS(1368),
    [anon_sym_abstract] = ACTIONS(1368),
    [anon_sym_sealed] = ACTIONS(1368),
    [anon_sym_static] = ACTIONS(1368),
    [anon_sym_new] = ACTIONS(1368),
    [anon_sym_public] = ACTIONS(1368),
    [anon_sym_protected] = ACTIONS(1368),
    [anon_sym_internal] = ACTIONS(1368),
    [anon_sym_private] = ACTIONS(1368),
    [anon_sym_interface] = ACTIONS(1368),
    [anon_sym_struct] = ACTIONS(1368),
    [anon_sym_enum] = ACTIONS(1368),
    [anon_sym_delegate] = ACTIONS(1368),
    [anon_sym_LBRACK] = ACTIONS(1368),
    [sym_comment] = ACTIONS(38),
  },
  [532] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1372),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [533] = {
    [anon_sym_RPAREN] = ACTIONS(1374),
    [sym_comment] = ACTIONS(38),
  },
  [534] = {
    [aux_sym_array_rank_specifier_repeat1] = STATE(669),
    [anon_sym_COMMA] = ACTIONS(1376),
    [anon_sym_RBRACK] = ACTIONS(1378),
    [sym_comment] = ACTIONS(38),
  },
  [535] = {
    [sym_identifier_name] = ACTIONS(1380),
    [sym_comment] = ACTIONS(38),
  },
  [536] = {
    [anon_sym_sbyte] = ACTIONS(333),
    [anon_sym_byte] = ACTIONS(333),
    [anon_sym_short] = ACTIONS(333),
    [anon_sym_ushort] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_uint] = ACTIONS(333),
    [anon_sym_long] = ACTIONS(333),
    [anon_sym_ulong] = ACTIONS(333),
    [anon_sym_char] = ACTIONS(333),
    [anon_sym_ref] = ACTIONS(333),
    [anon_sym_out] = ACTIONS(333),
    [anon_sym_this] = ACTIONS(333),
    [sym_params_keyword] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_bool] = ACTIONS(333),
    [anon_sym_decimal] = ACTIONS(333),
    [anon_sym_double] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_object] = ACTIONS(333),
    [anon_sym_string] = ACTIONS(333),
    [sym_identifier_name] = ACTIONS(333),
    [sym_comment] = ACTIONS(38),
  },
  [537] = {
    [sym_attribute_list] = STATE(670),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(199),
    [sym_comment] = ACTIONS(38),
  },
  [538] = {
    [anon_sym_COMMA] = ACTIONS(1382),
    [anon_sym_RPAREN] = ACTIONS(1382),
    [sym_params_keyword] = ACTIONS(1382),
    [anon_sym_LBRACK] = ACTIONS(1382),
    [sym_comment] = ACTIONS(38),
  },
  [539] = {
    [sym_parameter_modifier] = STATE(420),
    [sym__type] = STATE(418),
    [sym_generic_name] = STATE(418),
    [sym_predefined_type] = STATE(418),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_ref] = ACTIONS(517),
    [anon_sym_out] = ACTIONS(517),
    [anon_sym_this] = ACTIONS(517),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [540] = {
    [sym__attribute_section] = STATE(671),
    [aux_sym__attributes_repeat1] = STATE(671),
    [anon_sym_sbyte] = ACTIONS(445),
    [anon_sym_byte] = ACTIONS(445),
    [anon_sym_short] = ACTIONS(445),
    [anon_sym_ushort] = ACTIONS(445),
    [anon_sym_int] = ACTIONS(445),
    [anon_sym_uint] = ACTIONS(445),
    [anon_sym_long] = ACTIONS(445),
    [anon_sym_ulong] = ACTIONS(445),
    [anon_sym_char] = ACTIONS(445),
    [anon_sym_ref] = ACTIONS(445),
    [anon_sym_out] = ACTIONS(445),
    [anon_sym_this] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(1102),
    [anon_sym_bool] = ACTIONS(445),
    [anon_sym_decimal] = ACTIONS(445),
    [anon_sym_double] = ACTIONS(445),
    [anon_sym_float] = ACTIONS(445),
    [anon_sym_object] = ACTIONS(445),
    [anon_sym_string] = ACTIONS(445),
    [sym_identifier_name] = ACTIONS(445),
    [sym_comment] = ACTIONS(38),
  },
  [541] = {
    [anon_sym_RPAREN] = ACTIONS(1384),
    [sym_comment] = ACTIONS(38),
  },
  [542] = {
    [aux_sym__formal_parameter_list_repeat1] = STATE(542),
    [anon_sym_COMMA] = ACTIONS(1386),
    [anon_sym_RPAREN] = ACTIONS(1382),
    [sym_params_keyword] = ACTIONS(1382),
    [anon_sym_LBRACK] = ACTIONS(1382),
    [sym_comment] = ACTIONS(38),
  },
  [543] = {
    [sym__attribute_section] = STATE(543),
    [aux_sym__attributes_repeat1] = STATE(543),
    [sym_params_keyword] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(1114),
    [sym_comment] = ACTIONS(38),
  },
  [544] = {
    [sym_equals_value_clause] = STATE(672),
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_EQ] = ACTIONS(1112),
    [sym_comment] = ACTIONS(38),
  },
  [545] = {
    [sym_identifier_name] = ACTIONS(1391),
    [sym_comment] = ACTIONS(38),
  },
  [546] = {
    [sym_identifier_name] = ACTIONS(1393),
    [sym_comment] = ACTIONS(38),
  },
  [547] = {
    [sym__expression] = STATE(676),
    [sym_parenthesized_expression] = STATE(676),
    [sym_ternary_expression] = STATE(676),
    [sym_binary_expression] = STATE(676),
    [sym_unary_expression] = STATE(676),
    [sym__literal] = STATE(676),
    [sym_boolean_literal] = STATE(676),
    [sym_character_literal] = STATE(676),
    [sym_integer_literal] = STATE(676),
    [sym_real_literal] = STATE(676),
    [sym_string_literal] = STATE(676),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1399),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1399),
    [sym_comment] = ACTIONS(38),
  },
  [548] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_params_keyword] = ACTIONS(1389),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [sym_comment] = ACTIONS(38),
  },
  [549] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1401),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [550] = {
    [ts_builtin_sym_end] = ACTIONS(1403),
    [anon_sym_using] = ACTIONS(1403),
    [anon_sym_namespace] = ACTIONS(1403),
    [anon_sym_RBRACE] = ACTIONS(1403),
    [anon_sym_partial] = ACTIONS(1403),
    [anon_sym_class] = ACTIONS(1403),
    [anon_sym_unsafe] = ACTIONS(1403),
    [anon_sym_abstract] = ACTIONS(1403),
    [anon_sym_sealed] = ACTIONS(1403),
    [anon_sym_static] = ACTIONS(1403),
    [anon_sym_new] = ACTIONS(1403),
    [anon_sym_public] = ACTIONS(1403),
    [anon_sym_protected] = ACTIONS(1403),
    [anon_sym_internal] = ACTIONS(1403),
    [anon_sym_private] = ACTIONS(1403),
    [anon_sym_interface] = ACTIONS(1403),
    [anon_sym_struct] = ACTIONS(1403),
    [anon_sym_enum] = ACTIONS(1403),
    [anon_sym_delegate] = ACTIONS(1403),
    [anon_sym_LBRACK] = ACTIONS(1403),
    [sym_comment] = ACTIONS(38),
  },
  [551] = {
    [ts_builtin_sym_end] = ACTIONS(1405),
    [anon_sym_using] = ACTIONS(1405),
    [anon_sym_namespace] = ACTIONS(1405),
    [anon_sym_RBRACE] = ACTIONS(1405),
    [anon_sym_partial] = ACTIONS(1405),
    [anon_sym_class] = ACTIONS(1405),
    [anon_sym_unsafe] = ACTIONS(1405),
    [anon_sym_abstract] = ACTIONS(1405),
    [anon_sym_sealed] = ACTIONS(1405),
    [anon_sym_static] = ACTIONS(1405),
    [anon_sym_new] = ACTIONS(1405),
    [anon_sym_public] = ACTIONS(1405),
    [anon_sym_protected] = ACTIONS(1405),
    [anon_sym_internal] = ACTIONS(1405),
    [anon_sym_private] = ACTIONS(1405),
    [anon_sym_interface] = ACTIONS(1405),
    [anon_sym_struct] = ACTIONS(1405),
    [anon_sym_enum] = ACTIONS(1405),
    [anon_sym_delegate] = ACTIONS(1405),
    [anon_sym_LBRACK] = ACTIONS(1405),
    [sym_comment] = ACTIONS(38),
  },
  [552] = {
    [aux_sym_enum_declaration_repeat1] = STATE(678),
    [anon_sym_RBRACE] = ACTIONS(1372),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [553] = {
    [sym__type_declaration] = STATE(679),
    [sym_class_declaration] = STATE(679),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(679),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(679),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(679),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(679),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(679),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(679),
    [sym_method_declaration] = STATE(679),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(679),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1401),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [554] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1407),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [555] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1409),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [556] = {
    [sym_enum_member_declaration] = STATE(682),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [557] = {
    [ts_builtin_sym_end] = ACTIONS(1411),
    [anon_sym_using] = ACTIONS(1411),
    [anon_sym_namespace] = ACTIONS(1411),
    [anon_sym_RBRACE] = ACTIONS(1411),
    [anon_sym_partial] = ACTIONS(1411),
    [anon_sym_class] = ACTIONS(1411),
    [anon_sym_unsafe] = ACTIONS(1411),
    [anon_sym_abstract] = ACTIONS(1411),
    [anon_sym_sealed] = ACTIONS(1411),
    [anon_sym_static] = ACTIONS(1411),
    [anon_sym_new] = ACTIONS(1411),
    [anon_sym_public] = ACTIONS(1411),
    [anon_sym_protected] = ACTIONS(1411),
    [anon_sym_internal] = ACTIONS(1411),
    [anon_sym_private] = ACTIONS(1411),
    [anon_sym_interface] = ACTIONS(1411),
    [anon_sym_struct] = ACTIONS(1411),
    [anon_sym_enum] = ACTIONS(1411),
    [anon_sym_delegate] = ACTIONS(1411),
    [anon_sym_LBRACK] = ACTIONS(1411),
    [sym_comment] = ACTIONS(38),
  },
  [558] = {
    [anon_sym_RBRACE] = ACTIONS(588),
    [anon_sym_partial] = ACTIONS(1413),
    [anon_sym_class] = ACTIONS(1413),
    [anon_sym_unsafe] = ACTIONS(1413),
    [anon_sym_abstract] = ACTIONS(1413),
    [anon_sym_sealed] = ACTIONS(1413),
    [anon_sym_static] = ACTIONS(1413),
    [anon_sym_new] = ACTIONS(1413),
    [anon_sym_public] = ACTIONS(1413),
    [anon_sym_protected] = ACTIONS(1413),
    [anon_sym_internal] = ACTIONS(1413),
    [anon_sym_private] = ACTIONS(1413),
    [anon_sym_interface] = ACTIONS(1413),
    [anon_sym_struct] = ACTIONS(1413),
    [anon_sym_enum] = ACTIONS(1413),
    [anon_sym_sbyte] = ACTIONS(1413),
    [anon_sym_byte] = ACTIONS(1413),
    [anon_sym_short] = ACTIONS(1413),
    [anon_sym_ushort] = ACTIONS(1413),
    [anon_sym_int] = ACTIONS(1413),
    [anon_sym_uint] = ACTIONS(1413),
    [anon_sym_long] = ACTIONS(1413),
    [anon_sym_ulong] = ACTIONS(1413),
    [anon_sym_char] = ACTIONS(1413),
    [anon_sym_delegate] = ACTIONS(1413),
    [sym_void_keyword] = ACTIONS(1413),
    [anon_sym_LBRACK] = ACTIONS(588),
    [sym_const_keyword] = ACTIONS(1413),
    [anon_sym_readonly] = ACTIONS(1413),
    [anon_sym_volatile] = ACTIONS(1413),
    [anon_sym_bool] = ACTIONS(1413),
    [anon_sym_decimal] = ACTIONS(1413),
    [anon_sym_double] = ACTIONS(1413),
    [anon_sym_float] = ACTIONS(1413),
    [anon_sym_object] = ACTIONS(1413),
    [anon_sym_string] = ACTIONS(1413),
    [sym_identifier_name] = ACTIONS(1413),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1413),
  },
  [559] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1415),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [560] = {
    [sym__type_declaration] = STATE(684),
    [sym_class_declaration] = STATE(684),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(684),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(684),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(684),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(684),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(684),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(684),
    [sym_method_declaration] = STATE(684),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(684),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1415),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [561] = {
    [anon_sym_RBRACE] = ACTIONS(715),
    [anon_sym_partial] = ACTIONS(1417),
    [anon_sym_class] = ACTIONS(1417),
    [anon_sym_unsafe] = ACTIONS(1417),
    [anon_sym_abstract] = ACTIONS(1417),
    [anon_sym_sealed] = ACTIONS(1417),
    [anon_sym_static] = ACTIONS(1417),
    [anon_sym_new] = ACTIONS(1417),
    [anon_sym_public] = ACTIONS(1417),
    [anon_sym_protected] = ACTIONS(1417),
    [anon_sym_internal] = ACTIONS(1417),
    [anon_sym_private] = ACTIONS(1417),
    [anon_sym_interface] = ACTIONS(1417),
    [anon_sym_struct] = ACTIONS(1417),
    [anon_sym_enum] = ACTIONS(1417),
    [anon_sym_sbyte] = ACTIONS(1417),
    [anon_sym_byte] = ACTIONS(1417),
    [anon_sym_short] = ACTIONS(1417),
    [anon_sym_ushort] = ACTIONS(1417),
    [anon_sym_int] = ACTIONS(1417),
    [anon_sym_uint] = ACTIONS(1417),
    [anon_sym_long] = ACTIONS(1417),
    [anon_sym_ulong] = ACTIONS(1417),
    [anon_sym_char] = ACTIONS(1417),
    [anon_sym_delegate] = ACTIONS(1417),
    [sym_void_keyword] = ACTIONS(1417),
    [anon_sym_LBRACK] = ACTIONS(715),
    [sym_const_keyword] = ACTIONS(1417),
    [anon_sym_readonly] = ACTIONS(1417),
    [anon_sym_volatile] = ACTIONS(1417),
    [anon_sym_bool] = ACTIONS(1417),
    [anon_sym_decimal] = ACTIONS(1417),
    [anon_sym_double] = ACTIONS(1417),
    [anon_sym_float] = ACTIONS(1417),
    [anon_sym_object] = ACTIONS(1417),
    [anon_sym_string] = ACTIONS(1417),
    [sym_identifier_name] = ACTIONS(1417),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1417),
  },
  [562] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1419),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [563] = {
    [anon_sym_RBRACE] = ACTIONS(777),
    [anon_sym_partial] = ACTIONS(1421),
    [anon_sym_class] = ACTIONS(1421),
    [anon_sym_unsafe] = ACTIONS(1421),
    [anon_sym_abstract] = ACTIONS(1421),
    [anon_sym_sealed] = ACTIONS(1421),
    [anon_sym_static] = ACTIONS(1421),
    [anon_sym_new] = ACTIONS(1421),
    [anon_sym_public] = ACTIONS(1421),
    [anon_sym_protected] = ACTIONS(1421),
    [anon_sym_internal] = ACTIONS(1421),
    [anon_sym_private] = ACTIONS(1421),
    [anon_sym_interface] = ACTIONS(1421),
    [anon_sym_struct] = ACTIONS(1421),
    [anon_sym_enum] = ACTIONS(1421),
    [anon_sym_sbyte] = ACTIONS(1421),
    [anon_sym_byte] = ACTIONS(1421),
    [anon_sym_short] = ACTIONS(1421),
    [anon_sym_ushort] = ACTIONS(1421),
    [anon_sym_int] = ACTIONS(1421),
    [anon_sym_uint] = ACTIONS(1421),
    [anon_sym_long] = ACTIONS(1421),
    [anon_sym_ulong] = ACTIONS(1421),
    [anon_sym_char] = ACTIONS(1421),
    [anon_sym_delegate] = ACTIONS(1421),
    [sym_void_keyword] = ACTIONS(1421),
    [anon_sym_LBRACK] = ACTIONS(777),
    [sym_const_keyword] = ACTIONS(1421),
    [anon_sym_readonly] = ACTIONS(1421),
    [anon_sym_volatile] = ACTIONS(1421),
    [anon_sym_bool] = ACTIONS(1421),
    [anon_sym_decimal] = ACTIONS(1421),
    [anon_sym_double] = ACTIONS(1421),
    [anon_sym_float] = ACTIONS(1421),
    [anon_sym_object] = ACTIONS(1421),
    [anon_sym_string] = ACTIONS(1421),
    [sym_identifier_name] = ACTIONS(1421),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1421),
  },
  [564] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1423),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [565] = {
    [anon_sym_SEMI] = ACTIONS(1425),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_partial] = ACTIONS(1427),
    [anon_sym_class] = ACTIONS(1427),
    [anon_sym_unsafe] = ACTIONS(1427),
    [anon_sym_abstract] = ACTIONS(1427),
    [anon_sym_sealed] = ACTIONS(1427),
    [anon_sym_static] = ACTIONS(1427),
    [anon_sym_new] = ACTIONS(1427),
    [anon_sym_public] = ACTIONS(1427),
    [anon_sym_protected] = ACTIONS(1427),
    [anon_sym_internal] = ACTIONS(1427),
    [anon_sym_private] = ACTIONS(1427),
    [anon_sym_interface] = ACTIONS(1427),
    [anon_sym_struct] = ACTIONS(1427),
    [anon_sym_enum] = ACTIONS(1427),
    [anon_sym_sbyte] = ACTIONS(1427),
    [anon_sym_byte] = ACTIONS(1427),
    [anon_sym_short] = ACTIONS(1427),
    [anon_sym_ushort] = ACTIONS(1427),
    [anon_sym_int] = ACTIONS(1427),
    [anon_sym_uint] = ACTIONS(1427),
    [anon_sym_long] = ACTIONS(1427),
    [anon_sym_ulong] = ACTIONS(1427),
    [anon_sym_char] = ACTIONS(1427),
    [anon_sym_delegate] = ACTIONS(1427),
    [sym_void_keyword] = ACTIONS(1427),
    [anon_sym_LBRACK] = ACTIONS(857),
    [sym_const_keyword] = ACTIONS(1427),
    [anon_sym_readonly] = ACTIONS(1427),
    [anon_sym_volatile] = ACTIONS(1427),
    [anon_sym_bool] = ACTIONS(1427),
    [anon_sym_decimal] = ACTIONS(1427),
    [anon_sym_double] = ACTIONS(1427),
    [anon_sym_float] = ACTIONS(1427),
    [anon_sym_object] = ACTIONS(1427),
    [anon_sym_string] = ACTIONS(1427),
    [sym_identifier_name] = ACTIONS(1427),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1427),
  },
  [566] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1429),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [567] = {
    [sym_enum_member_declaration] = STATE(689),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [568] = {
    [anon_sym_RBRACE] = ACTIONS(882),
    [anon_sym_partial] = ACTIONS(1431),
    [anon_sym_class] = ACTIONS(1431),
    [anon_sym_unsafe] = ACTIONS(1431),
    [anon_sym_abstract] = ACTIONS(1431),
    [anon_sym_sealed] = ACTIONS(1431),
    [anon_sym_static] = ACTIONS(1431),
    [anon_sym_new] = ACTIONS(1431),
    [anon_sym_public] = ACTIONS(1431),
    [anon_sym_protected] = ACTIONS(1431),
    [anon_sym_internal] = ACTIONS(1431),
    [anon_sym_private] = ACTIONS(1431),
    [anon_sym_interface] = ACTIONS(1431),
    [anon_sym_struct] = ACTIONS(1431),
    [anon_sym_enum] = ACTIONS(1431),
    [anon_sym_sbyte] = ACTIONS(1431),
    [anon_sym_byte] = ACTIONS(1431),
    [anon_sym_short] = ACTIONS(1431),
    [anon_sym_ushort] = ACTIONS(1431),
    [anon_sym_int] = ACTIONS(1431),
    [anon_sym_uint] = ACTIONS(1431),
    [anon_sym_long] = ACTIONS(1431),
    [anon_sym_ulong] = ACTIONS(1431),
    [anon_sym_char] = ACTIONS(1431),
    [anon_sym_delegate] = ACTIONS(1431),
    [sym_void_keyword] = ACTIONS(1431),
    [anon_sym_LBRACK] = ACTIONS(882),
    [sym_const_keyword] = ACTIONS(1431),
    [anon_sym_readonly] = ACTIONS(1431),
    [anon_sym_volatile] = ACTIONS(1431),
    [anon_sym_bool] = ACTIONS(1431),
    [anon_sym_decimal] = ACTIONS(1431),
    [anon_sym_double] = ACTIONS(1431),
    [anon_sym_float] = ACTIONS(1431),
    [anon_sym_object] = ACTIONS(1431),
    [anon_sym_string] = ACTIONS(1431),
    [sym_identifier_name] = ACTIONS(1431),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1431),
  },
  [569] = {
    [sym__expression] = STATE(690),
    [sym_parenthesized_expression] = STATE(690),
    [sym_ternary_expression] = STATE(690),
    [sym_binary_expression] = STATE(690),
    [sym_unary_expression] = STATE(690),
    [sym__literal] = STATE(690),
    [sym_boolean_literal] = STATE(690),
    [sym_character_literal] = STATE(690),
    [sym_integer_literal] = STATE(690),
    [sym_real_literal] = STATE(690),
    [sym_string_literal] = STATE(690),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1433),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1433),
    [sym_comment] = ACTIONS(38),
  },
  [570] = {
    [anon_sym_SEMI] = ACTIONS(1435),
    [sym_comment] = ACTIONS(38),
  },
  [571] = {
    [anon_sym_SEMI] = ACTIONS(1437),
    [anon_sym_QMARK] = ACTIONS(1169),
    [anon_sym_AMP_AMP] = ACTIONS(1171),
    [anon_sym_PIPE_PIPE] = ACTIONS(1173),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1177),
    [anon_sym_CARET] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1181),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1189),
    [anon_sym_LT_EQ] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_GT_EQ] = ACTIONS(1191),
    [anon_sym_GT] = ACTIONS(1189),
    [sym_comment] = ACTIONS(38),
  },
  [572] = {
    [anon_sym_SEMI] = ACTIONS(1439),
    [anon_sym_RBRACE] = ACTIONS(1439),
    [anon_sym_LPAREN] = ACTIONS(1439),
    [anon_sym_PLUS] = ACTIONS(1441),
    [anon_sym_DASH] = ACTIONS(1441),
    [anon_sym_BANG] = ACTIONS(1439),
    [anon_sym_TILDE] = ACTIONS(1439),
    [anon_sym_DASH_DASH] = ACTIONS(1439),
    [anon_sym_PLUS_PLUS] = ACTIONS(1439),
    [anon_sym_typeof] = ACTIONS(1441),
    [anon_sym_sizeof] = ACTIONS(1441),
    [anon_sym_true] = ACTIONS(1441),
    [anon_sym_false] = ACTIONS(1441),
    [anon_sym_SQUOTE] = ACTIONS(1439),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1441),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1439),
    [sym_null_literal] = ACTIONS(1441),
    [anon_sym_DOT] = ACTIONS(1439),
    [anon_sym_DQUOTE] = ACTIONS(1439),
    [anon_sym_AT_DQUOTE] = ACTIONS(1439),
    [sym_identifier_name] = ACTIONS(1441),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1441),
  },
  [573] = {
    [sym__expression] = STATE(693),
    [sym_parenthesized_expression] = STATE(693),
    [sym_ternary_expression] = STATE(693),
    [sym_binary_expression] = STATE(693),
    [sym_unary_expression] = STATE(693),
    [sym__literal] = STATE(693),
    [sym_boolean_literal] = STATE(693),
    [sym_character_literal] = STATE(693),
    [sym_integer_literal] = STATE(693),
    [sym_real_literal] = STATE(693),
    [sym_string_literal] = STATE(693),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1443),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1443),
    [sym_comment] = ACTIONS(38),
  },
  [574] = {
    [sym__expression] = STATE(694),
    [sym_parenthesized_expression] = STATE(694),
    [sym_ternary_expression] = STATE(694),
    [sym_binary_expression] = STATE(694),
    [sym_unary_expression] = STATE(694),
    [sym__literal] = STATE(694),
    [sym_boolean_literal] = STATE(694),
    [sym_character_literal] = STATE(694),
    [sym_integer_literal] = STATE(694),
    [sym_real_literal] = STATE(694),
    [sym_string_literal] = STATE(694),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1445),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1445),
    [sym_comment] = ACTIONS(38),
  },
  [575] = {
    [sym__expression] = STATE(695),
    [sym_parenthesized_expression] = STATE(695),
    [sym_ternary_expression] = STATE(695),
    [sym_binary_expression] = STATE(695),
    [sym_unary_expression] = STATE(695),
    [sym__literal] = STATE(695),
    [sym_boolean_literal] = STATE(695),
    [sym_character_literal] = STATE(695),
    [sym_integer_literal] = STATE(695),
    [sym_real_literal] = STATE(695),
    [sym_string_literal] = STATE(695),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1447),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1447),
    [sym_comment] = ACTIONS(38),
  },
  [576] = {
    [sym__expression] = STATE(696),
    [sym_parenthesized_expression] = STATE(696),
    [sym_ternary_expression] = STATE(696),
    [sym_binary_expression] = STATE(696),
    [sym_unary_expression] = STATE(696),
    [sym__literal] = STATE(696),
    [sym_boolean_literal] = STATE(696),
    [sym_character_literal] = STATE(696),
    [sym_integer_literal] = STATE(696),
    [sym_real_literal] = STATE(696),
    [sym_string_literal] = STATE(696),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1449),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1449),
    [sym_comment] = ACTIONS(38),
  },
  [577] = {
    [sym__expression] = STATE(697),
    [sym_parenthesized_expression] = STATE(697),
    [sym_ternary_expression] = STATE(697),
    [sym_binary_expression] = STATE(697),
    [sym_unary_expression] = STATE(697),
    [sym__literal] = STATE(697),
    [sym_boolean_literal] = STATE(697),
    [sym_character_literal] = STATE(697),
    [sym_integer_literal] = STATE(697),
    [sym_real_literal] = STATE(697),
    [sym_string_literal] = STATE(697),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1451),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1451),
    [sym_comment] = ACTIONS(38),
  },
  [578] = {
    [sym__expression] = STATE(698),
    [sym_parenthesized_expression] = STATE(698),
    [sym_ternary_expression] = STATE(698),
    [sym_binary_expression] = STATE(698),
    [sym_unary_expression] = STATE(698),
    [sym__literal] = STATE(698),
    [sym_boolean_literal] = STATE(698),
    [sym_character_literal] = STATE(698),
    [sym_integer_literal] = STATE(698),
    [sym_real_literal] = STATE(698),
    [sym_string_literal] = STATE(698),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1453),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1453),
    [sym_comment] = ACTIONS(38),
  },
  [579] = {
    [sym__expression] = STATE(699),
    [sym_parenthesized_expression] = STATE(699),
    [sym_ternary_expression] = STATE(699),
    [sym_binary_expression] = STATE(699),
    [sym_unary_expression] = STATE(699),
    [sym__literal] = STATE(699),
    [sym_boolean_literal] = STATE(699),
    [sym_character_literal] = STATE(699),
    [sym_integer_literal] = STATE(699),
    [sym_real_literal] = STATE(699),
    [sym_string_literal] = STATE(699),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1455),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1455),
    [sym_comment] = ACTIONS(38),
  },
  [580] = {
    [sym__expression] = STATE(663),
    [sym_parenthesized_expression] = STATE(663),
    [sym_ternary_expression] = STATE(663),
    [sym_binary_expression] = STATE(663),
    [sym_unary_expression] = STATE(663),
    [sym__literal] = STATE(663),
    [sym_boolean_literal] = STATE(663),
    [sym_character_literal] = STATE(663),
    [sym_integer_literal] = STATE(663),
    [sym_real_literal] = STATE(663),
    [sym_string_literal] = STATE(663),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1362),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1362),
    [sym_comment] = ACTIONS(38),
  },
  [581] = {
    [sym__expression] = STATE(700),
    [sym_parenthesized_expression] = STATE(700),
    [sym_ternary_expression] = STATE(700),
    [sym_binary_expression] = STATE(700),
    [sym_unary_expression] = STATE(700),
    [sym__literal] = STATE(700),
    [sym_boolean_literal] = STATE(700),
    [sym_character_literal] = STATE(700),
    [sym_integer_literal] = STATE(700),
    [sym_real_literal] = STATE(700),
    [sym_string_literal] = STATE(700),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1457),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1457),
    [sym_comment] = ACTIONS(38),
  },
  [582] = {
    [sym__expression] = STATE(701),
    [sym_parenthesized_expression] = STATE(701),
    [sym_ternary_expression] = STATE(701),
    [sym_binary_expression] = STATE(701),
    [sym_unary_expression] = STATE(701),
    [sym__literal] = STATE(701),
    [sym_boolean_literal] = STATE(701),
    [sym_character_literal] = STATE(701),
    [sym_integer_literal] = STATE(701),
    [sym_real_literal] = STATE(701),
    [sym_string_literal] = STATE(701),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1459),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1459),
    [sym_comment] = ACTIONS(38),
  },
  [583] = {
    [anon_sym_RBRACE] = ACTIONS(1461),
    [anon_sym_partial] = ACTIONS(1463),
    [anon_sym_class] = ACTIONS(1463),
    [anon_sym_unsafe] = ACTIONS(1463),
    [anon_sym_abstract] = ACTIONS(1463),
    [anon_sym_sealed] = ACTIONS(1463),
    [anon_sym_static] = ACTIONS(1463),
    [anon_sym_new] = ACTIONS(1463),
    [anon_sym_public] = ACTIONS(1463),
    [anon_sym_protected] = ACTIONS(1463),
    [anon_sym_internal] = ACTIONS(1463),
    [anon_sym_private] = ACTIONS(1463),
    [anon_sym_interface] = ACTIONS(1463),
    [anon_sym_struct] = ACTIONS(1463),
    [anon_sym_enum] = ACTIONS(1463),
    [anon_sym_sbyte] = ACTIONS(1463),
    [anon_sym_byte] = ACTIONS(1463),
    [anon_sym_short] = ACTIONS(1463),
    [anon_sym_ushort] = ACTIONS(1463),
    [anon_sym_int] = ACTIONS(1463),
    [anon_sym_uint] = ACTIONS(1463),
    [anon_sym_long] = ACTIONS(1463),
    [anon_sym_ulong] = ACTIONS(1463),
    [anon_sym_char] = ACTIONS(1463),
    [anon_sym_delegate] = ACTIONS(1463),
    [sym_void_keyword] = ACTIONS(1463),
    [anon_sym_LBRACK] = ACTIONS(1461),
    [sym_const_keyword] = ACTIONS(1463),
    [anon_sym_readonly] = ACTIONS(1463),
    [anon_sym_volatile] = ACTIONS(1463),
    [anon_sym_bool] = ACTIONS(1463),
    [anon_sym_decimal] = ACTIONS(1463),
    [anon_sym_double] = ACTIONS(1463),
    [anon_sym_float] = ACTIONS(1463),
    [anon_sym_object] = ACTIONS(1463),
    [anon_sym_string] = ACTIONS(1463),
    [sym_identifier_name] = ACTIONS(1463),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1463),
  },
  [584] = {
    [sym__expression] = STATE(453),
    [sym_parenthesized_expression] = STATE(453),
    [sym_ternary_expression] = STATE(453),
    [sym_binary_expression] = STATE(453),
    [sym_unary_expression] = STATE(453),
    [sym__literal] = STATE(453),
    [sym_boolean_literal] = STATE(453),
    [sym_character_literal] = STATE(453),
    [sym_integer_literal] = STATE(453),
    [sym_real_literal] = STATE(453),
    [sym_string_literal] = STATE(453),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [sym__statement] = STATE(584),
    [sym_expression_statement] = STATE(584),
    [sym_return_statement] = STATE(584),
    [sym_variable_assignment_statement] = STATE(584),
    [sym_empty_statement] = STATE(584),
    [aux_sym_statement_block_repeat1] = STATE(584),
    [anon_sym_SEMI] = ACTIONS(1465),
    [anon_sym_RBRACE] = ACTIONS(1468),
    [anon_sym_LPAREN] = ACTIONS(1470),
    [anon_sym_PLUS] = ACTIONS(1473),
    [anon_sym_DASH] = ACTIONS(1473),
    [anon_sym_BANG] = ACTIONS(1476),
    [anon_sym_TILDE] = ACTIONS(1476),
    [anon_sym_DASH_DASH] = ACTIONS(1476),
    [anon_sym_PLUS_PLUS] = ACTIONS(1476),
    [anon_sym_typeof] = ACTIONS(1473),
    [anon_sym_sizeof] = ACTIONS(1473),
    [anon_sym_true] = ACTIONS(1479),
    [anon_sym_false] = ACTIONS(1479),
    [anon_sym_SQUOTE] = ACTIONS(1482),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1485),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1488),
    [sym_null_literal] = ACTIONS(1491),
    [anon_sym_DOT] = ACTIONS(1494),
    [anon_sym_DQUOTE] = ACTIONS(1497),
    [anon_sym_AT_DQUOTE] = ACTIONS(1500),
    [sym_identifier_name] = ACTIONS(1503),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1506),
  },
  [585] = {
    [anon_sym_RBRACE] = ACTIONS(1509),
    [anon_sym_partial] = ACTIONS(1511),
    [anon_sym_class] = ACTIONS(1511),
    [anon_sym_unsafe] = ACTIONS(1511),
    [anon_sym_abstract] = ACTIONS(1511),
    [anon_sym_sealed] = ACTIONS(1511),
    [anon_sym_static] = ACTIONS(1511),
    [anon_sym_new] = ACTIONS(1511),
    [anon_sym_public] = ACTIONS(1511),
    [anon_sym_protected] = ACTIONS(1511),
    [anon_sym_internal] = ACTIONS(1511),
    [anon_sym_private] = ACTIONS(1511),
    [anon_sym_interface] = ACTIONS(1511),
    [anon_sym_struct] = ACTIONS(1511),
    [anon_sym_enum] = ACTIONS(1511),
    [anon_sym_sbyte] = ACTIONS(1511),
    [anon_sym_byte] = ACTIONS(1511),
    [anon_sym_short] = ACTIONS(1511),
    [anon_sym_ushort] = ACTIONS(1511),
    [anon_sym_int] = ACTIONS(1511),
    [anon_sym_uint] = ACTIONS(1511),
    [anon_sym_long] = ACTIONS(1511),
    [anon_sym_ulong] = ACTIONS(1511),
    [anon_sym_char] = ACTIONS(1511),
    [anon_sym_delegate] = ACTIONS(1511),
    [sym_void_keyword] = ACTIONS(1511),
    [anon_sym_LBRACK] = ACTIONS(1509),
    [sym_const_keyword] = ACTIONS(1511),
    [anon_sym_readonly] = ACTIONS(1511),
    [anon_sym_volatile] = ACTIONS(1511),
    [anon_sym_bool] = ACTIONS(1511),
    [anon_sym_decimal] = ACTIONS(1511),
    [anon_sym_double] = ACTIONS(1511),
    [anon_sym_float] = ACTIONS(1511),
    [anon_sym_object] = ACTIONS(1511),
    [anon_sym_string] = ACTIONS(1511),
    [sym_identifier_name] = ACTIONS(1511),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1511),
  },
  [586] = {
    [sym_statement_block] = STATE(702),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(38),
  },
  [587] = {
    [anon_sym_LBRACE] = ACTIONS(1513),
    [sym_comment] = ACTIONS(38),
  },
  [588] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(704),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(704),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1419),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [589] = {
    [sym__type_declaration] = STATE(705),
    [sym_class_declaration] = STATE(705),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(705),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(705),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(705),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(705),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(705),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(705),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1423),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [590] = {
    [aux_sym_enum_declaration_repeat1] = STATE(706),
    [anon_sym_RBRACE] = ACTIONS(1429),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [591] = {
    [anon_sym_LBRACE] = ACTIONS(1515),
    [sym_comment] = ACTIONS(38),
  },
  [592] = {
    [anon_sym_SEMI] = ACTIONS(1517),
    [sym_comment] = ACTIONS(38),
  },
  [593] = {
    [anon_sym_RBRACE] = ACTIONS(1519),
    [anon_sym_partial] = ACTIONS(1521),
    [anon_sym_class] = ACTIONS(1521),
    [anon_sym_unsafe] = ACTIONS(1521),
    [anon_sym_abstract] = ACTIONS(1521),
    [anon_sym_sealed] = ACTIONS(1521),
    [anon_sym_static] = ACTIONS(1521),
    [anon_sym_new] = ACTIONS(1521),
    [anon_sym_public] = ACTIONS(1521),
    [anon_sym_protected] = ACTIONS(1521),
    [anon_sym_internal] = ACTIONS(1521),
    [anon_sym_private] = ACTIONS(1521),
    [anon_sym_interface] = ACTIONS(1521),
    [anon_sym_struct] = ACTIONS(1521),
    [anon_sym_enum] = ACTIONS(1521),
    [anon_sym_sbyte] = ACTIONS(1521),
    [anon_sym_byte] = ACTIONS(1521),
    [anon_sym_short] = ACTIONS(1521),
    [anon_sym_ushort] = ACTIONS(1521),
    [anon_sym_int] = ACTIONS(1521),
    [anon_sym_uint] = ACTIONS(1521),
    [anon_sym_long] = ACTIONS(1521),
    [anon_sym_ulong] = ACTIONS(1521),
    [anon_sym_char] = ACTIONS(1521),
    [anon_sym_delegate] = ACTIONS(1521),
    [sym_void_keyword] = ACTIONS(1521),
    [anon_sym_LBRACK] = ACTIONS(1519),
    [sym_const_keyword] = ACTIONS(1521),
    [anon_sym_readonly] = ACTIONS(1521),
    [anon_sym_volatile] = ACTIONS(1521),
    [anon_sym_bool] = ACTIONS(1521),
    [anon_sym_decimal] = ACTIONS(1521),
    [anon_sym_double] = ACTIONS(1521),
    [anon_sym_float] = ACTIONS(1521),
    [anon_sym_object] = ACTIONS(1521),
    [anon_sym_string] = ACTIONS(1521),
    [sym_identifier_name] = ACTIONS(1521),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1521),
  },
  [594] = {
    [sym_parameter_list] = STATE(709),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [595] = {
    [sym_type_parameter_list] = STATE(710),
    [anon_sym_LBRACE] = ACTIONS(1513),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [596] = {
    [anon_sym_LBRACE] = ACTIONS(1523),
    [sym_comment] = ACTIONS(38),
  },
  [597] = {
    [anon_sym_LBRACE] = ACTIONS(1525),
    [sym_comment] = ACTIONS(38),
  },
  [598] = {
    [sym__integral_type] = STATE(713),
    [anon_sym_sbyte] = ACTIONS(1527),
    [anon_sym_byte] = ACTIONS(1527),
    [anon_sym_short] = ACTIONS(1527),
    [anon_sym_ushort] = ACTIONS(1527),
    [anon_sym_int] = ACTIONS(1527),
    [anon_sym_uint] = ACTIONS(1527),
    [anon_sym_long] = ACTIONS(1527),
    [anon_sym_ulong] = ACTIONS(1527),
    [anon_sym_char] = ACTIONS(1527),
    [sym_comment] = ACTIONS(38),
  },
  [599] = {
    [sym_parameter_list] = STATE(714),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [600] = {
    [anon_sym_RBRACE] = ACTIONS(1529),
    [anon_sym_partial] = ACTIONS(1531),
    [anon_sym_class] = ACTIONS(1531),
    [anon_sym_unsafe] = ACTIONS(1531),
    [anon_sym_abstract] = ACTIONS(1531),
    [anon_sym_sealed] = ACTIONS(1531),
    [anon_sym_static] = ACTIONS(1531),
    [anon_sym_new] = ACTIONS(1531),
    [anon_sym_public] = ACTIONS(1531),
    [anon_sym_protected] = ACTIONS(1531),
    [anon_sym_internal] = ACTIONS(1531),
    [anon_sym_private] = ACTIONS(1531),
    [anon_sym_interface] = ACTIONS(1531),
    [anon_sym_struct] = ACTIONS(1531),
    [anon_sym_enum] = ACTIONS(1531),
    [anon_sym_sbyte] = ACTIONS(1531),
    [anon_sym_byte] = ACTIONS(1531),
    [anon_sym_short] = ACTIONS(1531),
    [anon_sym_ushort] = ACTIONS(1531),
    [anon_sym_int] = ACTIONS(1531),
    [anon_sym_uint] = ACTIONS(1531),
    [anon_sym_long] = ACTIONS(1531),
    [anon_sym_ulong] = ACTIONS(1531),
    [anon_sym_char] = ACTIONS(1531),
    [anon_sym_delegate] = ACTIONS(1531),
    [sym_void_keyword] = ACTIONS(1531),
    [anon_sym_LBRACK] = ACTIONS(1529),
    [sym_const_keyword] = ACTIONS(1531),
    [anon_sym_readonly] = ACTIONS(1531),
    [anon_sym_volatile] = ACTIONS(1531),
    [anon_sym_bool] = ACTIONS(1531),
    [anon_sym_decimal] = ACTIONS(1531),
    [anon_sym_double] = ACTIONS(1531),
    [anon_sym_float] = ACTIONS(1531),
    [anon_sym_object] = ACTIONS(1531),
    [anon_sym_string] = ACTIONS(1531),
    [sym_identifier_name] = ACTIONS(1531),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1531),
  },
  [601] = {
    [sym_statement_block] = STATE(715),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(38),
  },
  [602] = {
    [sym_parameter_list] = STATE(709),
    [sym_type_parameter_list] = STATE(716),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [603] = {
    [sym__expression] = STATE(717),
    [sym_parenthesized_expression] = STATE(717),
    [sym_ternary_expression] = STATE(717),
    [sym_binary_expression] = STATE(717),
    [sym_unary_expression] = STATE(717),
    [sym__literal] = STATE(717),
    [sym_boolean_literal] = STATE(717),
    [sym_character_literal] = STATE(717),
    [sym_integer_literal] = STATE(717),
    [sym_real_literal] = STATE(717),
    [sym_string_literal] = STATE(717),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1533),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1533),
    [sym_comment] = ACTIONS(38),
  },
  [604] = {
    [sym__expression] = STATE(718),
    [sym_parenthesized_expression] = STATE(718),
    [sym_ternary_expression] = STATE(718),
    [sym_binary_expression] = STATE(718),
    [sym_unary_expression] = STATE(718),
    [sym__literal] = STATE(718),
    [sym_boolean_literal] = STATE(718),
    [sym_character_literal] = STATE(718),
    [sym_integer_literal] = STATE(718),
    [sym_real_literal] = STATE(718),
    [sym_string_literal] = STATE(718),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1535),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1535),
    [sym_comment] = ACTIONS(38),
  },
  [605] = {
    [sym__expression] = STATE(719),
    [sym_parenthesized_expression] = STATE(719),
    [sym_ternary_expression] = STATE(719),
    [sym_binary_expression] = STATE(719),
    [sym_unary_expression] = STATE(719),
    [sym__literal] = STATE(719),
    [sym_boolean_literal] = STATE(719),
    [sym_character_literal] = STATE(719),
    [sym_integer_literal] = STATE(719),
    [sym_real_literal] = STATE(719),
    [sym_string_literal] = STATE(719),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1537),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1537),
    [sym_comment] = ACTIONS(38),
  },
  [606] = {
    [sym__expression] = STATE(720),
    [sym_parenthesized_expression] = STATE(720),
    [sym_ternary_expression] = STATE(720),
    [sym_binary_expression] = STATE(720),
    [sym_unary_expression] = STATE(720),
    [sym__literal] = STATE(720),
    [sym_boolean_literal] = STATE(720),
    [sym_character_literal] = STATE(720),
    [sym_integer_literal] = STATE(720),
    [sym_real_literal] = STATE(720),
    [sym_string_literal] = STATE(720),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1539),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1539),
    [sym_comment] = ACTIONS(38),
  },
  [607] = {
    [sym__expression] = STATE(721),
    [sym_parenthesized_expression] = STATE(721),
    [sym_ternary_expression] = STATE(721),
    [sym_binary_expression] = STATE(721),
    [sym_unary_expression] = STATE(721),
    [sym__literal] = STATE(721),
    [sym_boolean_literal] = STATE(721),
    [sym_character_literal] = STATE(721),
    [sym_integer_literal] = STATE(721),
    [sym_real_literal] = STATE(721),
    [sym_string_literal] = STATE(721),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1541),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1541),
    [sym_comment] = ACTIONS(38),
  },
  [608] = {
    [sym__expression] = STATE(722),
    [sym_parenthesized_expression] = STATE(722),
    [sym_ternary_expression] = STATE(722),
    [sym_binary_expression] = STATE(722),
    [sym_unary_expression] = STATE(722),
    [sym__literal] = STATE(722),
    [sym_boolean_literal] = STATE(722),
    [sym_character_literal] = STATE(722),
    [sym_integer_literal] = STATE(722),
    [sym_real_literal] = STATE(722),
    [sym_string_literal] = STATE(722),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1543),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1543),
    [sym_comment] = ACTIONS(38),
  },
  [609] = {
    [sym__expression] = STATE(723),
    [sym_parenthesized_expression] = STATE(723),
    [sym_ternary_expression] = STATE(723),
    [sym_binary_expression] = STATE(723),
    [sym_unary_expression] = STATE(723),
    [sym__literal] = STATE(723),
    [sym_boolean_literal] = STATE(723),
    [sym_character_literal] = STATE(723),
    [sym_integer_literal] = STATE(723),
    [sym_real_literal] = STATE(723),
    [sym_string_literal] = STATE(723),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1545),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1545),
    [sym_comment] = ACTIONS(38),
  },
  [610] = {
    [sym__expression] = STATE(663),
    [sym_parenthesized_expression] = STATE(663),
    [sym_ternary_expression] = STATE(663),
    [sym_binary_expression] = STATE(663),
    [sym_unary_expression] = STATE(663),
    [sym__literal] = STATE(663),
    [sym_boolean_literal] = STATE(663),
    [sym_character_literal] = STATE(663),
    [sym_integer_literal] = STATE(663),
    [sym_real_literal] = STATE(663),
    [sym_string_literal] = STATE(663),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1362),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1362),
    [sym_comment] = ACTIONS(38),
  },
  [611] = {
    [sym__expression] = STATE(724),
    [sym_parenthesized_expression] = STATE(724),
    [sym_ternary_expression] = STATE(724),
    [sym_binary_expression] = STATE(724),
    [sym_unary_expression] = STATE(724),
    [sym__literal] = STATE(724),
    [sym_boolean_literal] = STATE(724),
    [sym_character_literal] = STATE(724),
    [sym_integer_literal] = STATE(724),
    [sym_real_literal] = STATE(724),
    [sym_string_literal] = STATE(724),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1547),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1547),
    [sym_comment] = ACTIONS(38),
  },
  [612] = {
    [sym__expression] = STATE(725),
    [sym_parenthesized_expression] = STATE(725),
    [sym_ternary_expression] = STATE(725),
    [sym_binary_expression] = STATE(725),
    [sym_unary_expression] = STATE(725),
    [sym__literal] = STATE(725),
    [sym_boolean_literal] = STATE(725),
    [sym_character_literal] = STATE(725),
    [sym_integer_literal] = STATE(725),
    [sym_real_literal] = STATE(725),
    [sym_string_literal] = STATE(725),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1549),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1549),
    [sym_comment] = ACTIONS(38),
  },
  [613] = {
    [anon_sym_RBRACE] = ACTIONS(1529),
    [anon_sym_unsafe] = ACTIONS(1531),
    [anon_sym_static] = ACTIONS(1531),
    [anon_sym_new] = ACTIONS(1531),
    [anon_sym_public] = ACTIONS(1531),
    [anon_sym_protected] = ACTIONS(1531),
    [anon_sym_internal] = ACTIONS(1531),
    [anon_sym_private] = ACTIONS(1531),
    [anon_sym_sbyte] = ACTIONS(1531),
    [anon_sym_byte] = ACTIONS(1531),
    [anon_sym_short] = ACTIONS(1531),
    [anon_sym_ushort] = ACTIONS(1531),
    [anon_sym_int] = ACTIONS(1531),
    [anon_sym_uint] = ACTIONS(1531),
    [anon_sym_long] = ACTIONS(1531),
    [anon_sym_ulong] = ACTIONS(1531),
    [anon_sym_char] = ACTIONS(1531),
    [anon_sym_LBRACK] = ACTIONS(1529),
    [sym_const_keyword] = ACTIONS(1531),
    [anon_sym_readonly] = ACTIONS(1531),
    [anon_sym_volatile] = ACTIONS(1531),
    [anon_sym_bool] = ACTIONS(1531),
    [anon_sym_decimal] = ACTIONS(1531),
    [anon_sym_double] = ACTIONS(1531),
    [anon_sym_float] = ACTIONS(1531),
    [anon_sym_object] = ACTIONS(1531),
    [anon_sym_string] = ACTIONS(1531),
    [sym_identifier_name] = ACTIONS(1531),
    [sym_comment] = ACTIONS(38),
  },
  [614] = {
    [anon_sym_RBRACE] = ACTIONS(588),
    [anon_sym_partial] = ACTIONS(1413),
    [anon_sym_class] = ACTIONS(1413),
    [anon_sym_unsafe] = ACTIONS(1413),
    [anon_sym_abstract] = ACTIONS(1413),
    [anon_sym_sealed] = ACTIONS(1413),
    [anon_sym_static] = ACTIONS(1413),
    [anon_sym_new] = ACTIONS(1413),
    [anon_sym_public] = ACTIONS(1413),
    [anon_sym_protected] = ACTIONS(1413),
    [anon_sym_internal] = ACTIONS(1413),
    [anon_sym_private] = ACTIONS(1413),
    [anon_sym_interface] = ACTIONS(1413),
    [anon_sym_struct] = ACTIONS(1413),
    [anon_sym_enum] = ACTIONS(1413),
    [anon_sym_sbyte] = ACTIONS(1413),
    [anon_sym_byte] = ACTIONS(1413),
    [anon_sym_short] = ACTIONS(1413),
    [anon_sym_ushort] = ACTIONS(1413),
    [anon_sym_int] = ACTIONS(1413),
    [anon_sym_uint] = ACTIONS(1413),
    [anon_sym_long] = ACTIONS(1413),
    [anon_sym_ulong] = ACTIONS(1413),
    [anon_sym_char] = ACTIONS(1413),
    [anon_sym_delegate] = ACTIONS(1413),
    [anon_sym_LBRACK] = ACTIONS(588),
    [sym_const_keyword] = ACTIONS(1413),
    [anon_sym_readonly] = ACTIONS(1413),
    [anon_sym_volatile] = ACTIONS(1413),
    [anon_sym_bool] = ACTIONS(1413),
    [anon_sym_decimal] = ACTIONS(1413),
    [anon_sym_double] = ACTIONS(1413),
    [anon_sym_float] = ACTIONS(1413),
    [anon_sym_object] = ACTIONS(1413),
    [anon_sym_string] = ACTIONS(1413),
    [sym_identifier_name] = ACTIONS(1413),
    [sym_comment] = ACTIONS(38),
  },
  [615] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1551),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [616] = {
    [sym__type_declaration] = STATE(727),
    [sym_class_declaration] = STATE(727),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(727),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(727),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(727),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(727),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(727),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(727),
    [sym_method_declaration] = STATE(727),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(727),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1551),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [617] = {
    [anon_sym_RBRACE] = ACTIONS(715),
    [anon_sym_partial] = ACTIONS(1417),
    [anon_sym_class] = ACTIONS(1417),
    [anon_sym_unsafe] = ACTIONS(1417),
    [anon_sym_abstract] = ACTIONS(1417),
    [anon_sym_sealed] = ACTIONS(1417),
    [anon_sym_static] = ACTIONS(1417),
    [anon_sym_new] = ACTIONS(1417),
    [anon_sym_public] = ACTIONS(1417),
    [anon_sym_protected] = ACTIONS(1417),
    [anon_sym_internal] = ACTIONS(1417),
    [anon_sym_private] = ACTIONS(1417),
    [anon_sym_interface] = ACTIONS(1417),
    [anon_sym_struct] = ACTIONS(1417),
    [anon_sym_enum] = ACTIONS(1417),
    [anon_sym_sbyte] = ACTIONS(1417),
    [anon_sym_byte] = ACTIONS(1417),
    [anon_sym_short] = ACTIONS(1417),
    [anon_sym_ushort] = ACTIONS(1417),
    [anon_sym_int] = ACTIONS(1417),
    [anon_sym_uint] = ACTIONS(1417),
    [anon_sym_long] = ACTIONS(1417),
    [anon_sym_ulong] = ACTIONS(1417),
    [anon_sym_char] = ACTIONS(1417),
    [anon_sym_delegate] = ACTIONS(1417),
    [anon_sym_LBRACK] = ACTIONS(715),
    [sym_const_keyword] = ACTIONS(1417),
    [anon_sym_readonly] = ACTIONS(1417),
    [anon_sym_volatile] = ACTIONS(1417),
    [anon_sym_bool] = ACTIONS(1417),
    [anon_sym_decimal] = ACTIONS(1417),
    [anon_sym_double] = ACTIONS(1417),
    [anon_sym_float] = ACTIONS(1417),
    [anon_sym_object] = ACTIONS(1417),
    [anon_sym_string] = ACTIONS(1417),
    [sym_identifier_name] = ACTIONS(1417),
    [sym_comment] = ACTIONS(38),
  },
  [618] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1553),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [619] = {
    [anon_sym_RBRACE] = ACTIONS(777),
    [anon_sym_partial] = ACTIONS(1421),
    [anon_sym_class] = ACTIONS(1421),
    [anon_sym_unsafe] = ACTIONS(1421),
    [anon_sym_abstract] = ACTIONS(1421),
    [anon_sym_sealed] = ACTIONS(1421),
    [anon_sym_static] = ACTIONS(1421),
    [anon_sym_new] = ACTIONS(1421),
    [anon_sym_public] = ACTIONS(1421),
    [anon_sym_protected] = ACTIONS(1421),
    [anon_sym_internal] = ACTIONS(1421),
    [anon_sym_private] = ACTIONS(1421),
    [anon_sym_interface] = ACTIONS(1421),
    [anon_sym_struct] = ACTIONS(1421),
    [anon_sym_enum] = ACTIONS(1421),
    [anon_sym_sbyte] = ACTIONS(1421),
    [anon_sym_byte] = ACTIONS(1421),
    [anon_sym_short] = ACTIONS(1421),
    [anon_sym_ushort] = ACTIONS(1421),
    [anon_sym_int] = ACTIONS(1421),
    [anon_sym_uint] = ACTIONS(1421),
    [anon_sym_long] = ACTIONS(1421),
    [anon_sym_ulong] = ACTIONS(1421),
    [anon_sym_char] = ACTIONS(1421),
    [anon_sym_delegate] = ACTIONS(1421),
    [anon_sym_LBRACK] = ACTIONS(777),
    [sym_const_keyword] = ACTIONS(1421),
    [anon_sym_readonly] = ACTIONS(1421),
    [anon_sym_volatile] = ACTIONS(1421),
    [anon_sym_bool] = ACTIONS(1421),
    [anon_sym_decimal] = ACTIONS(1421),
    [anon_sym_double] = ACTIONS(1421),
    [anon_sym_float] = ACTIONS(1421),
    [anon_sym_object] = ACTIONS(1421),
    [anon_sym_string] = ACTIONS(1421),
    [sym_identifier_name] = ACTIONS(1421),
    [sym_comment] = ACTIONS(38),
  },
  [620] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1555),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [621] = {
    [anon_sym_SEMI] = ACTIONS(1557),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_partial] = ACTIONS(1427),
    [anon_sym_class] = ACTIONS(1427),
    [anon_sym_unsafe] = ACTIONS(1427),
    [anon_sym_abstract] = ACTIONS(1427),
    [anon_sym_sealed] = ACTIONS(1427),
    [anon_sym_static] = ACTIONS(1427),
    [anon_sym_new] = ACTIONS(1427),
    [anon_sym_public] = ACTIONS(1427),
    [anon_sym_protected] = ACTIONS(1427),
    [anon_sym_internal] = ACTIONS(1427),
    [anon_sym_private] = ACTIONS(1427),
    [anon_sym_interface] = ACTIONS(1427),
    [anon_sym_struct] = ACTIONS(1427),
    [anon_sym_enum] = ACTIONS(1427),
    [anon_sym_sbyte] = ACTIONS(1427),
    [anon_sym_byte] = ACTIONS(1427),
    [anon_sym_short] = ACTIONS(1427),
    [anon_sym_ushort] = ACTIONS(1427),
    [anon_sym_int] = ACTIONS(1427),
    [anon_sym_uint] = ACTIONS(1427),
    [anon_sym_long] = ACTIONS(1427),
    [anon_sym_ulong] = ACTIONS(1427),
    [anon_sym_char] = ACTIONS(1427),
    [anon_sym_delegate] = ACTIONS(1427),
    [anon_sym_LBRACK] = ACTIONS(857),
    [sym_const_keyword] = ACTIONS(1427),
    [anon_sym_readonly] = ACTIONS(1427),
    [anon_sym_volatile] = ACTIONS(1427),
    [anon_sym_bool] = ACTIONS(1427),
    [anon_sym_decimal] = ACTIONS(1427),
    [anon_sym_double] = ACTIONS(1427),
    [anon_sym_float] = ACTIONS(1427),
    [anon_sym_object] = ACTIONS(1427),
    [anon_sym_string] = ACTIONS(1427),
    [sym_identifier_name] = ACTIONS(1427),
    [sym_comment] = ACTIONS(38),
  },
  [622] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1559),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [623] = {
    [sym_enum_member_declaration] = STATE(732),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [624] = {
    [anon_sym_RBRACE] = ACTIONS(882),
    [anon_sym_partial] = ACTIONS(1431),
    [anon_sym_class] = ACTIONS(1431),
    [anon_sym_unsafe] = ACTIONS(1431),
    [anon_sym_abstract] = ACTIONS(1431),
    [anon_sym_sealed] = ACTIONS(1431),
    [anon_sym_static] = ACTIONS(1431),
    [anon_sym_new] = ACTIONS(1431),
    [anon_sym_public] = ACTIONS(1431),
    [anon_sym_protected] = ACTIONS(1431),
    [anon_sym_internal] = ACTIONS(1431),
    [anon_sym_private] = ACTIONS(1431),
    [anon_sym_interface] = ACTIONS(1431),
    [anon_sym_struct] = ACTIONS(1431),
    [anon_sym_enum] = ACTIONS(1431),
    [anon_sym_sbyte] = ACTIONS(1431),
    [anon_sym_byte] = ACTIONS(1431),
    [anon_sym_short] = ACTIONS(1431),
    [anon_sym_ushort] = ACTIONS(1431),
    [anon_sym_int] = ACTIONS(1431),
    [anon_sym_uint] = ACTIONS(1431),
    [anon_sym_long] = ACTIONS(1431),
    [anon_sym_ulong] = ACTIONS(1431),
    [anon_sym_char] = ACTIONS(1431),
    [anon_sym_delegate] = ACTIONS(1431),
    [anon_sym_LBRACK] = ACTIONS(882),
    [sym_const_keyword] = ACTIONS(1431),
    [anon_sym_readonly] = ACTIONS(1431),
    [anon_sym_volatile] = ACTIONS(1431),
    [anon_sym_bool] = ACTIONS(1431),
    [anon_sym_decimal] = ACTIONS(1431),
    [anon_sym_double] = ACTIONS(1431),
    [anon_sym_float] = ACTIONS(1431),
    [anon_sym_object] = ACTIONS(1431),
    [anon_sym_string] = ACTIONS(1431),
    [sym_identifier_name] = ACTIONS(1431),
    [sym_comment] = ACTIONS(38),
  },
  [625] = {
    [anon_sym_LBRACE] = ACTIONS(1561),
    [sym_comment] = ACTIONS(38),
  },
  [626] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(734),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(734),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1553),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [627] = {
    [sym__type_declaration] = STATE(735),
    [sym_class_declaration] = STATE(735),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(735),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(735),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(735),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(735),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(735),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(735),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1555),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [628] = {
    [aux_sym_enum_declaration_repeat1] = STATE(736),
    [anon_sym_RBRACE] = ACTIONS(1559),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [629] = {
    [anon_sym_LBRACE] = ACTIONS(1563),
    [sym_comment] = ACTIONS(38),
  },
  [630] = {
    [anon_sym_SEMI] = ACTIONS(1565),
    [sym_comment] = ACTIONS(38),
  },
  [631] = {
    [sym_type_parameter_list] = STATE(739),
    [anon_sym_LBRACE] = ACTIONS(1561),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(38),
  },
  [632] = {
    [anon_sym_LBRACE] = ACTIONS(1567),
    [sym_comment] = ACTIONS(38),
  },
  [633] = {
    [anon_sym_LBRACE] = ACTIONS(1569),
    [sym_comment] = ACTIONS(38),
  },
  [634] = {
    [sym__integral_type] = STATE(742),
    [anon_sym_sbyte] = ACTIONS(1571),
    [anon_sym_byte] = ACTIONS(1571),
    [anon_sym_short] = ACTIONS(1571),
    [anon_sym_ushort] = ACTIONS(1571),
    [anon_sym_int] = ACTIONS(1571),
    [anon_sym_uint] = ACTIONS(1571),
    [anon_sym_long] = ACTIONS(1571),
    [anon_sym_ulong] = ACTIONS(1571),
    [anon_sym_char] = ACTIONS(1571),
    [sym_comment] = ACTIONS(38),
  },
  [635] = {
    [sym_parameter_list] = STATE(743),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [636] = {
    [anon_sym_RBRACE] = ACTIONS(1529),
    [anon_sym_partial] = ACTIONS(1531),
    [anon_sym_class] = ACTIONS(1531),
    [anon_sym_unsafe] = ACTIONS(1531),
    [anon_sym_abstract] = ACTIONS(1531),
    [anon_sym_sealed] = ACTIONS(1531),
    [anon_sym_static] = ACTIONS(1531),
    [anon_sym_new] = ACTIONS(1531),
    [anon_sym_public] = ACTIONS(1531),
    [anon_sym_protected] = ACTIONS(1531),
    [anon_sym_internal] = ACTIONS(1531),
    [anon_sym_private] = ACTIONS(1531),
    [anon_sym_interface] = ACTIONS(1531),
    [anon_sym_struct] = ACTIONS(1531),
    [anon_sym_enum] = ACTIONS(1531),
    [anon_sym_sbyte] = ACTIONS(1531),
    [anon_sym_byte] = ACTIONS(1531),
    [anon_sym_short] = ACTIONS(1531),
    [anon_sym_ushort] = ACTIONS(1531),
    [anon_sym_int] = ACTIONS(1531),
    [anon_sym_uint] = ACTIONS(1531),
    [anon_sym_long] = ACTIONS(1531),
    [anon_sym_ulong] = ACTIONS(1531),
    [anon_sym_char] = ACTIONS(1531),
    [anon_sym_delegate] = ACTIONS(1531),
    [anon_sym_LBRACK] = ACTIONS(1529),
    [sym_const_keyword] = ACTIONS(1531),
    [anon_sym_readonly] = ACTIONS(1531),
    [anon_sym_volatile] = ACTIONS(1531),
    [anon_sym_bool] = ACTIONS(1531),
    [anon_sym_decimal] = ACTIONS(1531),
    [anon_sym_double] = ACTIONS(1531),
    [anon_sym_float] = ACTIONS(1531),
    [anon_sym_object] = ACTIONS(1531),
    [anon_sym_string] = ACTIONS(1531),
    [sym_identifier_name] = ACTIONS(1531),
    [sym_comment] = ACTIONS(38),
  },
  [637] = {
    [anon_sym_SEMI] = ACTIONS(1573),
    [anon_sym_RBRACE] = ACTIONS(1573),
    [anon_sym_COLON] = ACTIONS(1573),
    [anon_sym_COMMA] = ACTIONS(1573),
    [anon_sym_RPAREN] = ACTIONS(1573),
    [sym_params_keyword] = ACTIONS(1573),
    [anon_sym_LBRACK] = ACTIONS(1573),
    [anon_sym_QMARK] = ACTIONS(1573),
    [anon_sym_AMP_AMP] = ACTIONS(1573),
    [anon_sym_PIPE_PIPE] = ACTIONS(1573),
    [anon_sym_GT_GT] = ACTIONS(1573),
    [anon_sym_LT_LT] = ACTIONS(1573),
    [anon_sym_AMP] = ACTIONS(1575),
    [anon_sym_CARET] = ACTIONS(1573),
    [anon_sym_PIPE] = ACTIONS(1575),
    [anon_sym_PLUS] = ACTIONS(1573),
    [anon_sym_DASH] = ACTIONS(1573),
    [anon_sym_STAR] = ACTIONS(1573),
    [anon_sym_SLASH] = ACTIONS(1575),
    [anon_sym_PERCENT] = ACTIONS(1573),
    [anon_sym_LT] = ACTIONS(1575),
    [anon_sym_LT_EQ] = ACTIONS(1573),
    [anon_sym_EQ_EQ] = ACTIONS(1573),
    [anon_sym_BANG_EQ] = ACTIONS(1573),
    [anon_sym_GT_EQ] = ACTIONS(1573),
    [anon_sym_GT] = ACTIONS(1575),
    [sym_comment] = ACTIONS(38),
  },
  [638] = {
    [sym__expression] = STATE(744),
    [sym_parenthesized_expression] = STATE(744),
    [sym_ternary_expression] = STATE(744),
    [sym_binary_expression] = STATE(744),
    [sym_unary_expression] = STATE(744),
    [sym__literal] = STATE(744),
    [sym_boolean_literal] = STATE(744),
    [sym_character_literal] = STATE(744),
    [sym_integer_literal] = STATE(744),
    [sym_real_literal] = STATE(744),
    [sym_string_literal] = STATE(744),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1577),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1577),
    [sym_comment] = ACTIONS(38),
  },
  [639] = {
    [sym__expression] = STATE(745),
    [sym_parenthesized_expression] = STATE(745),
    [sym_ternary_expression] = STATE(745),
    [sym_binary_expression] = STATE(745),
    [sym_unary_expression] = STATE(745),
    [sym__literal] = STATE(745),
    [sym_boolean_literal] = STATE(745),
    [sym_character_literal] = STATE(745),
    [sym_integer_literal] = STATE(745),
    [sym_real_literal] = STATE(745),
    [sym_string_literal] = STATE(745),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1579),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1579),
    [sym_comment] = ACTIONS(38),
  },
  [640] = {
    [sym__expression] = STATE(746),
    [sym_parenthesized_expression] = STATE(746),
    [sym_ternary_expression] = STATE(746),
    [sym_binary_expression] = STATE(746),
    [sym_unary_expression] = STATE(746),
    [sym__literal] = STATE(746),
    [sym_boolean_literal] = STATE(746),
    [sym_character_literal] = STATE(746),
    [sym_integer_literal] = STATE(746),
    [sym_real_literal] = STATE(746),
    [sym_string_literal] = STATE(746),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1581),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1581),
    [sym_comment] = ACTIONS(38),
  },
  [641] = {
    [sym__expression] = STATE(747),
    [sym_parenthesized_expression] = STATE(747),
    [sym_ternary_expression] = STATE(747),
    [sym_binary_expression] = STATE(747),
    [sym_unary_expression] = STATE(747),
    [sym__literal] = STATE(747),
    [sym_boolean_literal] = STATE(747),
    [sym_character_literal] = STATE(747),
    [sym_integer_literal] = STATE(747),
    [sym_real_literal] = STATE(747),
    [sym_string_literal] = STATE(747),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1583),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1583),
    [sym_comment] = ACTIONS(38),
  },
  [642] = {
    [sym__expression] = STATE(748),
    [sym_parenthesized_expression] = STATE(748),
    [sym_ternary_expression] = STATE(748),
    [sym_binary_expression] = STATE(748),
    [sym_unary_expression] = STATE(748),
    [sym__literal] = STATE(748),
    [sym_boolean_literal] = STATE(748),
    [sym_character_literal] = STATE(748),
    [sym_integer_literal] = STATE(748),
    [sym_real_literal] = STATE(748),
    [sym_string_literal] = STATE(748),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1585),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1585),
    [sym_comment] = ACTIONS(38),
  },
  [643] = {
    [sym__expression] = STATE(749),
    [sym_parenthesized_expression] = STATE(749),
    [sym_ternary_expression] = STATE(749),
    [sym_binary_expression] = STATE(749),
    [sym_unary_expression] = STATE(749),
    [sym__literal] = STATE(749),
    [sym_boolean_literal] = STATE(749),
    [sym_character_literal] = STATE(749),
    [sym_integer_literal] = STATE(749),
    [sym_real_literal] = STATE(749),
    [sym_string_literal] = STATE(749),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1587),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1587),
    [sym_comment] = ACTIONS(38),
  },
  [644] = {
    [sym__expression] = STATE(750),
    [sym_parenthesized_expression] = STATE(750),
    [sym_ternary_expression] = STATE(750),
    [sym_binary_expression] = STATE(750),
    [sym_unary_expression] = STATE(750),
    [sym__literal] = STATE(750),
    [sym_boolean_literal] = STATE(750),
    [sym_character_literal] = STATE(750),
    [sym_integer_literal] = STATE(750),
    [sym_real_literal] = STATE(750),
    [sym_string_literal] = STATE(750),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1589),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1589),
    [sym_comment] = ACTIONS(38),
  },
  [645] = {
    [sym__expression] = STATE(663),
    [sym_parenthesized_expression] = STATE(663),
    [sym_ternary_expression] = STATE(663),
    [sym_binary_expression] = STATE(663),
    [sym_unary_expression] = STATE(663),
    [sym__literal] = STATE(663),
    [sym_boolean_literal] = STATE(663),
    [sym_character_literal] = STATE(663),
    [sym_integer_literal] = STATE(663),
    [sym_real_literal] = STATE(663),
    [sym_string_literal] = STATE(663),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1362),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1362),
    [sym_comment] = ACTIONS(38),
  },
  [646] = {
    [sym__expression] = STATE(751),
    [sym_parenthesized_expression] = STATE(751),
    [sym_ternary_expression] = STATE(751),
    [sym_binary_expression] = STATE(751),
    [sym_unary_expression] = STATE(751),
    [sym__literal] = STATE(751),
    [sym_boolean_literal] = STATE(751),
    [sym_character_literal] = STATE(751),
    [sym_integer_literal] = STATE(751),
    [sym_real_literal] = STATE(751),
    [sym_string_literal] = STATE(751),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1591),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1591),
    [sym_comment] = ACTIONS(38),
  },
  [647] = {
    [sym__expression] = STATE(752),
    [sym_parenthesized_expression] = STATE(752),
    [sym_ternary_expression] = STATE(752),
    [sym_binary_expression] = STATE(752),
    [sym_unary_expression] = STATE(752),
    [sym__literal] = STATE(752),
    [sym_boolean_literal] = STATE(752),
    [sym_character_literal] = STATE(752),
    [sym_integer_literal] = STATE(752),
    [sym_real_literal] = STATE(752),
    [sym_string_literal] = STATE(752),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1593),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1593),
    [sym_comment] = ACTIONS(38),
  },
  [648] = {
    [anon_sym_SEMI] = ACTIONS(1595),
    [anon_sym_RBRACE] = ACTIONS(1595),
    [anon_sym_COLON] = ACTIONS(1595),
    [anon_sym_COMMA] = ACTIONS(1595),
    [anon_sym_RPAREN] = ACTIONS(1595),
    [sym_params_keyword] = ACTIONS(1595),
    [anon_sym_LBRACK] = ACTIONS(1595),
    [anon_sym_QMARK] = ACTIONS(1595),
    [anon_sym_AMP_AMP] = ACTIONS(1595),
    [anon_sym_PIPE_PIPE] = ACTIONS(1595),
    [anon_sym_GT_GT] = ACTIONS(1595),
    [anon_sym_LT_LT] = ACTIONS(1595),
    [anon_sym_AMP] = ACTIONS(1597),
    [anon_sym_CARET] = ACTIONS(1595),
    [anon_sym_PIPE] = ACTIONS(1597),
    [anon_sym_PLUS] = ACTIONS(1595),
    [anon_sym_DASH] = ACTIONS(1595),
    [anon_sym_STAR] = ACTIONS(1595),
    [anon_sym_SLASH] = ACTIONS(1597),
    [anon_sym_PERCENT] = ACTIONS(1595),
    [anon_sym_LT] = ACTIONS(1597),
    [anon_sym_LT_EQ] = ACTIONS(1595),
    [anon_sym_EQ_EQ] = ACTIONS(1595),
    [anon_sym_BANG_EQ] = ACTIONS(1595),
    [anon_sym_GT_EQ] = ACTIONS(1595),
    [anon_sym_GT] = ACTIONS(1597),
    [sym_comment] = ACTIONS(38),
  },
  [649] = {
    [anon_sym_SEMI] = ACTIONS(1599),
    [anon_sym_RBRACE] = ACTIONS(1599),
    [anon_sym_COLON] = ACTIONS(1599),
    [anon_sym_COMMA] = ACTIONS(1599),
    [anon_sym_RPAREN] = ACTIONS(1599),
    [sym_params_keyword] = ACTIONS(1599),
    [anon_sym_LBRACK] = ACTIONS(1599),
    [anon_sym_QMARK] = ACTIONS(1599),
    [anon_sym_AMP_AMP] = ACTIONS(1599),
    [anon_sym_PIPE_PIPE] = ACTIONS(1599),
    [anon_sym_GT_GT] = ACTIONS(1599),
    [anon_sym_LT_LT] = ACTIONS(1599),
    [anon_sym_AMP] = ACTIONS(1601),
    [anon_sym_CARET] = ACTIONS(1599),
    [anon_sym_PIPE] = ACTIONS(1601),
    [anon_sym_PLUS] = ACTIONS(1599),
    [anon_sym_DASH] = ACTIONS(1599),
    [anon_sym_STAR] = ACTIONS(1599),
    [anon_sym_SLASH] = ACTIONS(1601),
    [anon_sym_PERCENT] = ACTIONS(1599),
    [anon_sym_LT] = ACTIONS(1601),
    [anon_sym_LT_EQ] = ACTIONS(1599),
    [anon_sym_EQ_EQ] = ACTIONS(1599),
    [anon_sym_BANG_EQ] = ACTIONS(1599),
    [anon_sym_GT_EQ] = ACTIONS(1599),
    [anon_sym_GT] = ACTIONS(1601),
    [sym__real_type_suffix] = ACTIONS(1603),
    [sym__exponent_part] = ACTIONS(1605),
    [sym_comment] = ACTIONS(38),
  },
  [650] = {
    [anon_sym_SEMI] = ACTIONS(1599),
    [anon_sym_RBRACE] = ACTIONS(1599),
    [anon_sym_COLON] = ACTIONS(1599),
    [anon_sym_COMMA] = ACTIONS(1599),
    [anon_sym_RPAREN] = ACTIONS(1599),
    [sym_params_keyword] = ACTIONS(1599),
    [anon_sym_LBRACK] = ACTIONS(1599),
    [anon_sym_QMARK] = ACTIONS(1599),
    [anon_sym_AMP_AMP] = ACTIONS(1599),
    [anon_sym_PIPE_PIPE] = ACTIONS(1599),
    [anon_sym_GT_GT] = ACTIONS(1599),
    [anon_sym_LT_LT] = ACTIONS(1599),
    [anon_sym_AMP] = ACTIONS(1601),
    [anon_sym_CARET] = ACTIONS(1599),
    [anon_sym_PIPE] = ACTIONS(1601),
    [anon_sym_PLUS] = ACTIONS(1599),
    [anon_sym_DASH] = ACTIONS(1599),
    [anon_sym_STAR] = ACTIONS(1599),
    [anon_sym_SLASH] = ACTIONS(1601),
    [anon_sym_PERCENT] = ACTIONS(1599),
    [anon_sym_LT] = ACTIONS(1601),
    [anon_sym_LT_EQ] = ACTIONS(1599),
    [anon_sym_EQ_EQ] = ACTIONS(1599),
    [anon_sym_BANG_EQ] = ACTIONS(1599),
    [anon_sym_GT_EQ] = ACTIONS(1599),
    [anon_sym_GT] = ACTIONS(1601),
    [sym_comment] = ACTIONS(38),
  },
  [651] = {
    [anon_sym_SEMI] = ACTIONS(1599),
    [anon_sym_RBRACE] = ACTIONS(1599),
    [anon_sym_COLON] = ACTIONS(1599),
    [anon_sym_COMMA] = ACTIONS(1599),
    [anon_sym_RPAREN] = ACTIONS(1599),
    [sym_params_keyword] = ACTIONS(1599),
    [anon_sym_LBRACK] = ACTIONS(1599),
    [anon_sym_QMARK] = ACTIONS(1599),
    [anon_sym_AMP_AMP] = ACTIONS(1599),
    [anon_sym_PIPE_PIPE] = ACTIONS(1599),
    [anon_sym_GT_GT] = ACTIONS(1599),
    [anon_sym_LT_LT] = ACTIONS(1599),
    [anon_sym_AMP] = ACTIONS(1601),
    [anon_sym_CARET] = ACTIONS(1599),
    [anon_sym_PIPE] = ACTIONS(1601),
    [anon_sym_PLUS] = ACTIONS(1599),
    [anon_sym_DASH] = ACTIONS(1599),
    [anon_sym_STAR] = ACTIONS(1599),
    [anon_sym_SLASH] = ACTIONS(1601),
    [anon_sym_PERCENT] = ACTIONS(1599),
    [anon_sym_LT] = ACTIONS(1601),
    [anon_sym_LT_EQ] = ACTIONS(1599),
    [anon_sym_EQ_EQ] = ACTIONS(1599),
    [anon_sym_BANG_EQ] = ACTIONS(1599),
    [anon_sym_GT_EQ] = ACTIONS(1599),
    [anon_sym_GT] = ACTIONS(1601),
    [sym__real_type_suffix] = ACTIONS(1603),
    [sym_comment] = ACTIONS(38),
  },
  [652] = {
    [anon_sym_SEMI] = ACTIONS(1607),
    [anon_sym_RBRACE] = ACTIONS(1607),
    [anon_sym_COLON] = ACTIONS(1607),
    [anon_sym_COMMA] = ACTIONS(1607),
    [anon_sym_RPAREN] = ACTIONS(1607),
    [sym_params_keyword] = ACTIONS(1607),
    [anon_sym_LBRACK] = ACTIONS(1607),
    [anon_sym_QMARK] = ACTIONS(1607),
    [anon_sym_AMP_AMP] = ACTIONS(1607),
    [anon_sym_PIPE_PIPE] = ACTIONS(1607),
    [anon_sym_GT_GT] = ACTIONS(1607),
    [anon_sym_LT_LT] = ACTIONS(1607),
    [anon_sym_AMP] = ACTIONS(1609),
    [anon_sym_CARET] = ACTIONS(1607),
    [anon_sym_PIPE] = ACTIONS(1609),
    [anon_sym_PLUS] = ACTIONS(1607),
    [anon_sym_DASH] = ACTIONS(1607),
    [anon_sym_STAR] = ACTIONS(1607),
    [anon_sym_SLASH] = ACTIONS(1609),
    [anon_sym_PERCENT] = ACTIONS(1607),
    [anon_sym_LT] = ACTIONS(1609),
    [anon_sym_LT_EQ] = ACTIONS(1607),
    [anon_sym_EQ_EQ] = ACTIONS(1607),
    [anon_sym_BANG_EQ] = ACTIONS(1607),
    [anon_sym_GT_EQ] = ACTIONS(1607),
    [anon_sym_GT] = ACTIONS(1609),
    [sym_comment] = ACTIONS(38),
  },
  [653] = {
    [sym__unicode_escape_sequence] = STATE(653),
    [sym__simple_escape_sequence] = STATE(653),
    [sym__regular_string_literal_character] = STATE(653),
    [aux_sym__regular_string_literal_repeat1] = STATE(653),
    [sym__hexadecimal_escape_sequence] = ACTIONS(1611),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1611),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1611),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1611),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1611),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1611),
    [anon_sym_BSLASH0] = ACTIONS(1611),
    [anon_sym_BSLASHa] = ACTIONS(1611),
    [anon_sym_BSLASHb] = ACTIONS(1611),
    [anon_sym_BSLASHf] = ACTIONS(1611),
    [anon_sym_BSLASHn] = ACTIONS(1611),
    [anon_sym_BSLASHr] = ACTIONS(1611),
    [anon_sym_BSLASHt] = ACTIONS(1611),
    [anon_sym_BSLASHv] = ACTIONS(1611),
    [anon_sym_DQUOTE] = ACTIONS(1614),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1611),
    [sym_comment] = ACTIONS(1027),
  },
  [654] = {
    [anon_sym_SEMI] = ACTIONS(1616),
    [anon_sym_RBRACE] = ACTIONS(1616),
    [anon_sym_COLON] = ACTIONS(1616),
    [anon_sym_COMMA] = ACTIONS(1616),
    [anon_sym_RPAREN] = ACTIONS(1616),
    [sym_params_keyword] = ACTIONS(1616),
    [anon_sym_LBRACK] = ACTIONS(1616),
    [anon_sym_QMARK] = ACTIONS(1616),
    [anon_sym_AMP_AMP] = ACTIONS(1616),
    [anon_sym_PIPE_PIPE] = ACTIONS(1616),
    [anon_sym_GT_GT] = ACTIONS(1616),
    [anon_sym_LT_LT] = ACTIONS(1616),
    [anon_sym_AMP] = ACTIONS(1618),
    [anon_sym_CARET] = ACTIONS(1616),
    [anon_sym_PIPE] = ACTIONS(1618),
    [anon_sym_PLUS] = ACTIONS(1616),
    [anon_sym_DASH] = ACTIONS(1616),
    [anon_sym_STAR] = ACTIONS(1616),
    [anon_sym_SLASH] = ACTIONS(1618),
    [anon_sym_PERCENT] = ACTIONS(1616),
    [anon_sym_LT] = ACTIONS(1618),
    [anon_sym_LT_EQ] = ACTIONS(1616),
    [anon_sym_EQ_EQ] = ACTIONS(1616),
    [anon_sym_BANG_EQ] = ACTIONS(1616),
    [anon_sym_GT_EQ] = ACTIONS(1616),
    [anon_sym_GT] = ACTIONS(1618),
    [sym_comment] = ACTIONS(38),
  },
  [655] = {
    [sym__expression] = STATE(510),
    [sym_parenthesized_expression] = STATE(510),
    [sym_ternary_expression] = STATE(510),
    [sym_binary_expression] = STATE(510),
    [sym_unary_expression] = STATE(510),
    [sym__literal] = STATE(510),
    [sym_boolean_literal] = STATE(510),
    [sym_character_literal] = STATE(510),
    [sym_integer_literal] = STATE(510),
    [sym_real_literal] = STATE(510),
    [sym_string_literal] = STATE(510),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1019),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1019),
    [sym_comment] = ACTIONS(38),
  },
  [656] = {
    [anon_sym_COLON] = ACTIONS(1620),
    [anon_sym_QMARK] = ACTIONS(1622),
    [anon_sym_AMP_AMP] = ACTIONS(1624),
    [anon_sym_PIPE_PIPE] = ACTIONS(1626),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1630),
    [anon_sym_CARET] = ACTIONS(1632),
    [anon_sym_PIPE] = ACTIONS(1634),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [657] = {
    [anon_sym_RBRACE] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1057),
    [anon_sym_LT_LT] = ACTIONS(1057),
    [anon_sym_AMP] = ACTIONS(1059),
    [anon_sym_CARET] = ACTIONS(1061),
    [anon_sym_PIPE] = ACTIONS(1063),
    [anon_sym_PLUS] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1065),
    [anon_sym_STAR] = ACTIONS(1067),
    [anon_sym_SLASH] = ACTIONS(1069),
    [anon_sym_PERCENT] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_LT_EQ] = ACTIONS(1073),
    [anon_sym_EQ_EQ] = ACTIONS(1075),
    [anon_sym_BANG_EQ] = ACTIONS(1075),
    [anon_sym_GT_EQ] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1071),
    [sym_comment] = ACTIONS(38),
  },
  [658] = {
    [anon_sym_RBRACE] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1053),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1057),
    [anon_sym_LT_LT] = ACTIONS(1057),
    [anon_sym_AMP] = ACTIONS(1059),
    [anon_sym_CARET] = ACTIONS(1061),
    [anon_sym_PIPE] = ACTIONS(1063),
    [anon_sym_PLUS] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1065),
    [anon_sym_STAR] = ACTIONS(1067),
    [anon_sym_SLASH] = ACTIONS(1069),
    [anon_sym_PERCENT] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_LT_EQ] = ACTIONS(1073),
    [anon_sym_EQ_EQ] = ACTIONS(1075),
    [anon_sym_BANG_EQ] = ACTIONS(1075),
    [anon_sym_GT_EQ] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1071),
    [sym_comment] = ACTIONS(38),
  },
  [659] = {
    [anon_sym_RBRACE] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1065),
    [anon_sym_STAR] = ACTIONS(1067),
    [anon_sym_SLASH] = ACTIONS(1069),
    [anon_sym_PERCENT] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [660] = {
    [anon_sym_RBRACE] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1057),
    [anon_sym_LT_LT] = ACTIONS(1057),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1065),
    [anon_sym_STAR] = ACTIONS(1067),
    [anon_sym_SLASH] = ACTIONS(1069),
    [anon_sym_PERCENT] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_LT_EQ] = ACTIONS(1073),
    [anon_sym_EQ_EQ] = ACTIONS(1075),
    [anon_sym_BANG_EQ] = ACTIONS(1075),
    [anon_sym_GT_EQ] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1071),
    [sym_comment] = ACTIONS(38),
  },
  [661] = {
    [anon_sym_RBRACE] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1057),
    [anon_sym_LT_LT] = ACTIONS(1057),
    [anon_sym_AMP] = ACTIONS(1059),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1065),
    [anon_sym_STAR] = ACTIONS(1067),
    [anon_sym_SLASH] = ACTIONS(1069),
    [anon_sym_PERCENT] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_LT_EQ] = ACTIONS(1073),
    [anon_sym_EQ_EQ] = ACTIONS(1075),
    [anon_sym_BANG_EQ] = ACTIONS(1075),
    [anon_sym_GT_EQ] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1071),
    [sym_comment] = ACTIONS(38),
  },
  [662] = {
    [anon_sym_RBRACE] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1648),
    [anon_sym_DASH] = ACTIONS(1648),
    [anon_sym_STAR] = ACTIONS(1067),
    [anon_sym_SLASH] = ACTIONS(1069),
    [anon_sym_PERCENT] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [663] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_RBRACE] = ACTIONS(1648),
    [anon_sym_COLON] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_RPAREN] = ACTIONS(1648),
    [sym_params_keyword] = ACTIONS(1648),
    [anon_sym_LBRACK] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1648),
    [anon_sym_DASH] = ACTIONS(1648),
    [anon_sym_STAR] = ACTIONS(1648),
    [anon_sym_SLASH] = ACTIONS(1650),
    [anon_sym_PERCENT] = ACTIONS(1648),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [664] = {
    [anon_sym_RBRACE] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1057),
    [anon_sym_LT_LT] = ACTIONS(1057),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1065),
    [anon_sym_STAR] = ACTIONS(1067),
    [anon_sym_SLASH] = ACTIONS(1069),
    [anon_sym_PERCENT] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [665] = {
    [anon_sym_RBRACE] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1057),
    [anon_sym_LT_LT] = ACTIONS(1057),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1065),
    [anon_sym_STAR] = ACTIONS(1067),
    [anon_sym_SLASH] = ACTIONS(1069),
    [anon_sym_PERCENT] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_LT_EQ] = ACTIONS(1073),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1071),
    [sym_comment] = ACTIONS(38),
  },
  [666] = {
    [ts_builtin_sym_end] = ACTIONS(1652),
    [anon_sym_using] = ACTIONS(1652),
    [anon_sym_namespace] = ACTIONS(1652),
    [anon_sym_RBRACE] = ACTIONS(1652),
    [anon_sym_partial] = ACTIONS(1652),
    [anon_sym_class] = ACTIONS(1652),
    [anon_sym_unsafe] = ACTIONS(1652),
    [anon_sym_abstract] = ACTIONS(1652),
    [anon_sym_sealed] = ACTIONS(1652),
    [anon_sym_static] = ACTIONS(1652),
    [anon_sym_new] = ACTIONS(1652),
    [anon_sym_public] = ACTIONS(1652),
    [anon_sym_protected] = ACTIONS(1652),
    [anon_sym_internal] = ACTIONS(1652),
    [anon_sym_private] = ACTIONS(1652),
    [anon_sym_interface] = ACTIONS(1652),
    [anon_sym_struct] = ACTIONS(1652),
    [anon_sym_enum] = ACTIONS(1652),
    [anon_sym_delegate] = ACTIONS(1652),
    [anon_sym_LBRACK] = ACTIONS(1652),
    [sym_comment] = ACTIONS(38),
  },
  [667] = {
    [ts_builtin_sym_end] = ACTIONS(1652),
    [anon_sym_SEMI] = ACTIONS(1654),
    [anon_sym_using] = ACTIONS(1652),
    [anon_sym_namespace] = ACTIONS(1652),
    [anon_sym_RBRACE] = ACTIONS(1652),
    [anon_sym_partial] = ACTIONS(1652),
    [anon_sym_class] = ACTIONS(1652),
    [anon_sym_unsafe] = ACTIONS(1652),
    [anon_sym_abstract] = ACTIONS(1652),
    [anon_sym_sealed] = ACTIONS(1652),
    [anon_sym_static] = ACTIONS(1652),
    [anon_sym_new] = ACTIONS(1652),
    [anon_sym_public] = ACTIONS(1652),
    [anon_sym_protected] = ACTIONS(1652),
    [anon_sym_internal] = ACTIONS(1652),
    [anon_sym_private] = ACTIONS(1652),
    [anon_sym_interface] = ACTIONS(1652),
    [anon_sym_struct] = ACTIONS(1652),
    [anon_sym_enum] = ACTIONS(1652),
    [anon_sym_delegate] = ACTIONS(1652),
    [anon_sym_LBRACK] = ACTIONS(1652),
    [sym_comment] = ACTIONS(38),
  },
  [668] = {
    [sym_identifier_name] = ACTIONS(1656),
    [sym_comment] = ACTIONS(38),
  },
  [669] = {
    [aux_sym_array_rank_specifier_repeat1] = STATE(768),
    [anon_sym_COMMA] = ACTIONS(1658),
    [anon_sym_RBRACK] = ACTIONS(1660),
    [sym_comment] = ACTIONS(38),
  },
  [670] = {
    [anon_sym_RBRACK] = ACTIONS(1662),
    [sym_comment] = ACTIONS(38),
  },
  [671] = {
    [sym__attribute_section] = STATE(671),
    [aux_sym__attributes_repeat1] = STATE(671),
    [anon_sym_sbyte] = ACTIONS(703),
    [anon_sym_byte] = ACTIONS(703),
    [anon_sym_short] = ACTIONS(703),
    [anon_sym_ushort] = ACTIONS(703),
    [anon_sym_int] = ACTIONS(703),
    [anon_sym_uint] = ACTIONS(703),
    [anon_sym_long] = ACTIONS(703),
    [anon_sym_ulong] = ACTIONS(703),
    [anon_sym_char] = ACTIONS(703),
    [anon_sym_ref] = ACTIONS(703),
    [anon_sym_out] = ACTIONS(703),
    [anon_sym_this] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(1664),
    [anon_sym_bool] = ACTIONS(703),
    [anon_sym_decimal] = ACTIONS(703),
    [anon_sym_double] = ACTIONS(703),
    [anon_sym_float] = ACTIONS(703),
    [anon_sym_object] = ACTIONS(703),
    [anon_sym_string] = ACTIONS(703),
    [sym_identifier_name] = ACTIONS(703),
    [sym_comment] = ACTIONS(38),
  },
  [672] = {
    [anon_sym_COMMA] = ACTIONS(1667),
    [anon_sym_RPAREN] = ACTIONS(1667),
    [sym_params_keyword] = ACTIONS(1667),
    [anon_sym_LBRACK] = ACTIONS(1667),
    [sym_comment] = ACTIONS(38),
  },
  [673] = {
    [anon_sym_RPAREN] = ACTIONS(1669),
    [sym_comment] = ACTIONS(38),
  },
  [674] = {
    [sym_equals_value_clause] = STATE(770),
    [anon_sym_COMMA] = ACTIONS(1667),
    [anon_sym_RPAREN] = ACTIONS(1667),
    [sym_params_keyword] = ACTIONS(1667),
    [anon_sym_LBRACK] = ACTIONS(1667),
    [anon_sym_EQ] = ACTIONS(1112),
    [sym_comment] = ACTIONS(38),
  },
  [675] = {
    [sym__expression] = STATE(510),
    [sym_parenthesized_expression] = STATE(510),
    [sym_ternary_expression] = STATE(510),
    [sym_binary_expression] = STATE(510),
    [sym_unary_expression] = STATE(510),
    [sym__literal] = STATE(510),
    [sym_boolean_literal] = STATE(510),
    [sym_character_literal] = STATE(510),
    [sym_integer_literal] = STATE(510),
    [sym_real_literal] = STATE(510),
    [sym_string_literal] = STATE(510),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1019),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1019),
    [sym_comment] = ACTIONS(38),
  },
  [676] = {
    [anon_sym_COMMA] = ACTIONS(1049),
    [anon_sym_RPAREN] = ACTIONS(1049),
    [sym_params_keyword] = ACTIONS(1049),
    [anon_sym_LBRACK] = ACTIONS(1049),
    [anon_sym_QMARK] = ACTIONS(1671),
    [anon_sym_AMP_AMP] = ACTIONS(1673),
    [anon_sym_PIPE_PIPE] = ACTIONS(1675),
    [anon_sym_GT_GT] = ACTIONS(1677),
    [anon_sym_LT_LT] = ACTIONS(1677),
    [anon_sym_AMP] = ACTIONS(1679),
    [anon_sym_CARET] = ACTIONS(1681),
    [anon_sym_PIPE] = ACTIONS(1683),
    [anon_sym_PLUS] = ACTIONS(1685),
    [anon_sym_DASH] = ACTIONS(1685),
    [anon_sym_STAR] = ACTIONS(1687),
    [anon_sym_SLASH] = ACTIONS(1689),
    [anon_sym_PERCENT] = ACTIONS(1687),
    [anon_sym_LT] = ACTIONS(1691),
    [anon_sym_LT_EQ] = ACTIONS(1693),
    [anon_sym_EQ_EQ] = ACTIONS(1695),
    [anon_sym_BANG_EQ] = ACTIONS(1695),
    [anon_sym_GT_EQ] = ACTIONS(1693),
    [anon_sym_GT] = ACTIONS(1691),
    [sym_comment] = ACTIONS(38),
  },
  [677] = {
    [ts_builtin_sym_end] = ACTIONS(1697),
    [anon_sym_using] = ACTIONS(1697),
    [anon_sym_namespace] = ACTIONS(1697),
    [anon_sym_RBRACE] = ACTIONS(1697),
    [anon_sym_partial] = ACTIONS(1697),
    [anon_sym_class] = ACTIONS(1697),
    [anon_sym_unsafe] = ACTIONS(1697),
    [anon_sym_abstract] = ACTIONS(1697),
    [anon_sym_sealed] = ACTIONS(1697),
    [anon_sym_static] = ACTIONS(1697),
    [anon_sym_new] = ACTIONS(1697),
    [anon_sym_public] = ACTIONS(1697),
    [anon_sym_protected] = ACTIONS(1697),
    [anon_sym_internal] = ACTIONS(1697),
    [anon_sym_private] = ACTIONS(1697),
    [anon_sym_interface] = ACTIONS(1697),
    [anon_sym_struct] = ACTIONS(1697),
    [anon_sym_enum] = ACTIONS(1697),
    [anon_sym_delegate] = ACTIONS(1697),
    [anon_sym_LBRACK] = ACTIONS(1697),
    [sym_comment] = ACTIONS(38),
  },
  [678] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1699),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [679] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1701),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [680] = {
    [ts_builtin_sym_end] = ACTIONS(1703),
    [anon_sym_using] = ACTIONS(1703),
    [anon_sym_namespace] = ACTIONS(1703),
    [anon_sym_RBRACE] = ACTIONS(1703),
    [anon_sym_partial] = ACTIONS(1703),
    [anon_sym_class] = ACTIONS(1703),
    [anon_sym_unsafe] = ACTIONS(1703),
    [anon_sym_abstract] = ACTIONS(1703),
    [anon_sym_sealed] = ACTIONS(1703),
    [anon_sym_static] = ACTIONS(1703),
    [anon_sym_new] = ACTIONS(1703),
    [anon_sym_public] = ACTIONS(1703),
    [anon_sym_protected] = ACTIONS(1703),
    [anon_sym_internal] = ACTIONS(1703),
    [anon_sym_private] = ACTIONS(1703),
    [anon_sym_interface] = ACTIONS(1703),
    [anon_sym_struct] = ACTIONS(1703),
    [anon_sym_enum] = ACTIONS(1703),
    [anon_sym_delegate] = ACTIONS(1703),
    [anon_sym_LBRACK] = ACTIONS(1703),
    [sym_comment] = ACTIONS(38),
  },
  [681] = {
    [ts_builtin_sym_end] = ACTIONS(1705),
    [anon_sym_using] = ACTIONS(1705),
    [anon_sym_namespace] = ACTIONS(1705),
    [anon_sym_RBRACE] = ACTIONS(1705),
    [anon_sym_partial] = ACTIONS(1705),
    [anon_sym_class] = ACTIONS(1705),
    [anon_sym_unsafe] = ACTIONS(1705),
    [anon_sym_abstract] = ACTIONS(1705),
    [anon_sym_sealed] = ACTIONS(1705),
    [anon_sym_static] = ACTIONS(1705),
    [anon_sym_new] = ACTIONS(1705),
    [anon_sym_public] = ACTIONS(1705),
    [anon_sym_protected] = ACTIONS(1705),
    [anon_sym_internal] = ACTIONS(1705),
    [anon_sym_private] = ACTIONS(1705),
    [anon_sym_interface] = ACTIONS(1705),
    [anon_sym_struct] = ACTIONS(1705),
    [anon_sym_enum] = ACTIONS(1705),
    [anon_sym_delegate] = ACTIONS(1705),
    [anon_sym_LBRACK] = ACTIONS(1705),
    [sym_comment] = ACTIONS(38),
  },
  [682] = {
    [aux_sym_enum_declaration_repeat1] = STATE(783),
    [anon_sym_RBRACE] = ACTIONS(1699),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [683] = {
    [anon_sym_RBRACE] = ACTIONS(898),
    [anon_sym_partial] = ACTIONS(1707),
    [anon_sym_class] = ACTIONS(1707),
    [anon_sym_unsafe] = ACTIONS(1707),
    [anon_sym_abstract] = ACTIONS(1707),
    [anon_sym_sealed] = ACTIONS(1707),
    [anon_sym_static] = ACTIONS(1707),
    [anon_sym_new] = ACTIONS(1707),
    [anon_sym_public] = ACTIONS(1707),
    [anon_sym_protected] = ACTIONS(1707),
    [anon_sym_internal] = ACTIONS(1707),
    [anon_sym_private] = ACTIONS(1707),
    [anon_sym_interface] = ACTIONS(1707),
    [anon_sym_struct] = ACTIONS(1707),
    [anon_sym_enum] = ACTIONS(1707),
    [anon_sym_sbyte] = ACTIONS(1707),
    [anon_sym_byte] = ACTIONS(1707),
    [anon_sym_short] = ACTIONS(1707),
    [anon_sym_ushort] = ACTIONS(1707),
    [anon_sym_int] = ACTIONS(1707),
    [anon_sym_uint] = ACTIONS(1707),
    [anon_sym_long] = ACTIONS(1707),
    [anon_sym_ulong] = ACTIONS(1707),
    [anon_sym_char] = ACTIONS(1707),
    [anon_sym_delegate] = ACTIONS(1707),
    [sym_void_keyword] = ACTIONS(1707),
    [anon_sym_LBRACK] = ACTIONS(898),
    [sym_const_keyword] = ACTIONS(1707),
    [anon_sym_readonly] = ACTIONS(1707),
    [anon_sym_volatile] = ACTIONS(1707),
    [anon_sym_bool] = ACTIONS(1707),
    [anon_sym_decimal] = ACTIONS(1707),
    [anon_sym_double] = ACTIONS(1707),
    [anon_sym_float] = ACTIONS(1707),
    [anon_sym_object] = ACTIONS(1707),
    [anon_sym_string] = ACTIONS(1707),
    [sym_identifier_name] = ACTIONS(1707),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1707),
  },
  [684] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1709),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [685] = {
    [anon_sym_RBRACE] = ACTIONS(977),
    [anon_sym_partial] = ACTIONS(1711),
    [anon_sym_class] = ACTIONS(1711),
    [anon_sym_unsafe] = ACTIONS(1711),
    [anon_sym_abstract] = ACTIONS(1711),
    [anon_sym_sealed] = ACTIONS(1711),
    [anon_sym_static] = ACTIONS(1711),
    [anon_sym_new] = ACTIONS(1711),
    [anon_sym_public] = ACTIONS(1711),
    [anon_sym_protected] = ACTIONS(1711),
    [anon_sym_internal] = ACTIONS(1711),
    [anon_sym_private] = ACTIONS(1711),
    [anon_sym_interface] = ACTIONS(1711),
    [anon_sym_struct] = ACTIONS(1711),
    [anon_sym_enum] = ACTIONS(1711),
    [anon_sym_sbyte] = ACTIONS(1711),
    [anon_sym_byte] = ACTIONS(1711),
    [anon_sym_short] = ACTIONS(1711),
    [anon_sym_ushort] = ACTIONS(1711),
    [anon_sym_int] = ACTIONS(1711),
    [anon_sym_uint] = ACTIONS(1711),
    [anon_sym_long] = ACTIONS(1711),
    [anon_sym_ulong] = ACTIONS(1711),
    [anon_sym_char] = ACTIONS(1711),
    [anon_sym_delegate] = ACTIONS(1711),
    [sym_void_keyword] = ACTIONS(1711),
    [anon_sym_LBRACK] = ACTIONS(977),
    [sym_const_keyword] = ACTIONS(1711),
    [anon_sym_readonly] = ACTIONS(1711),
    [anon_sym_volatile] = ACTIONS(1711),
    [anon_sym_bool] = ACTIONS(1711),
    [anon_sym_decimal] = ACTIONS(1711),
    [anon_sym_double] = ACTIONS(1711),
    [anon_sym_float] = ACTIONS(1711),
    [anon_sym_object] = ACTIONS(1711),
    [anon_sym_string] = ACTIONS(1711),
    [sym_identifier_name] = ACTIONS(1711),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1711),
  },
  [686] = {
    [anon_sym_RBRACE] = ACTIONS(1011),
    [anon_sym_partial] = ACTIONS(1713),
    [anon_sym_class] = ACTIONS(1713),
    [anon_sym_unsafe] = ACTIONS(1713),
    [anon_sym_abstract] = ACTIONS(1713),
    [anon_sym_sealed] = ACTIONS(1713),
    [anon_sym_static] = ACTIONS(1713),
    [anon_sym_new] = ACTIONS(1713),
    [anon_sym_public] = ACTIONS(1713),
    [anon_sym_protected] = ACTIONS(1713),
    [anon_sym_internal] = ACTIONS(1713),
    [anon_sym_private] = ACTIONS(1713),
    [anon_sym_interface] = ACTIONS(1713),
    [anon_sym_struct] = ACTIONS(1713),
    [anon_sym_enum] = ACTIONS(1713),
    [anon_sym_sbyte] = ACTIONS(1713),
    [anon_sym_byte] = ACTIONS(1713),
    [anon_sym_short] = ACTIONS(1713),
    [anon_sym_ushort] = ACTIONS(1713),
    [anon_sym_int] = ACTIONS(1713),
    [anon_sym_uint] = ACTIONS(1713),
    [anon_sym_long] = ACTIONS(1713),
    [anon_sym_ulong] = ACTIONS(1713),
    [anon_sym_char] = ACTIONS(1713),
    [anon_sym_delegate] = ACTIONS(1713),
    [sym_void_keyword] = ACTIONS(1713),
    [anon_sym_LBRACK] = ACTIONS(1011),
    [sym_const_keyword] = ACTIONS(1713),
    [anon_sym_readonly] = ACTIONS(1713),
    [anon_sym_volatile] = ACTIONS(1713),
    [anon_sym_bool] = ACTIONS(1713),
    [anon_sym_decimal] = ACTIONS(1713),
    [anon_sym_double] = ACTIONS(1713),
    [anon_sym_float] = ACTIONS(1713),
    [anon_sym_object] = ACTIONS(1713),
    [anon_sym_string] = ACTIONS(1713),
    [sym_identifier_name] = ACTIONS(1713),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1713),
  },
  [687] = {
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_partial] = ACTIONS(1715),
    [anon_sym_class] = ACTIONS(1715),
    [anon_sym_unsafe] = ACTIONS(1715),
    [anon_sym_abstract] = ACTIONS(1715),
    [anon_sym_sealed] = ACTIONS(1715),
    [anon_sym_static] = ACTIONS(1715),
    [anon_sym_new] = ACTIONS(1715),
    [anon_sym_public] = ACTIONS(1715),
    [anon_sym_protected] = ACTIONS(1715),
    [anon_sym_internal] = ACTIONS(1715),
    [anon_sym_private] = ACTIONS(1715),
    [anon_sym_interface] = ACTIONS(1715),
    [anon_sym_struct] = ACTIONS(1715),
    [anon_sym_enum] = ACTIONS(1715),
    [anon_sym_sbyte] = ACTIONS(1715),
    [anon_sym_byte] = ACTIONS(1715),
    [anon_sym_short] = ACTIONS(1715),
    [anon_sym_ushort] = ACTIONS(1715),
    [anon_sym_int] = ACTIONS(1715),
    [anon_sym_uint] = ACTIONS(1715),
    [anon_sym_long] = ACTIONS(1715),
    [anon_sym_ulong] = ACTIONS(1715),
    [anon_sym_char] = ACTIONS(1715),
    [anon_sym_delegate] = ACTIONS(1715),
    [sym_void_keyword] = ACTIONS(1715),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [sym_const_keyword] = ACTIONS(1715),
    [anon_sym_readonly] = ACTIONS(1715),
    [anon_sym_volatile] = ACTIONS(1715),
    [anon_sym_bool] = ACTIONS(1715),
    [anon_sym_decimal] = ACTIONS(1715),
    [anon_sym_double] = ACTIONS(1715),
    [anon_sym_float] = ACTIONS(1715),
    [anon_sym_object] = ACTIONS(1715),
    [anon_sym_string] = ACTIONS(1715),
    [sym_identifier_name] = ACTIONS(1715),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1715),
  },
  [688] = {
    [anon_sym_SEMI] = ACTIONS(1717),
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_partial] = ACTIONS(1715),
    [anon_sym_class] = ACTIONS(1715),
    [anon_sym_unsafe] = ACTIONS(1715),
    [anon_sym_abstract] = ACTIONS(1715),
    [anon_sym_sealed] = ACTIONS(1715),
    [anon_sym_static] = ACTIONS(1715),
    [anon_sym_new] = ACTIONS(1715),
    [anon_sym_public] = ACTIONS(1715),
    [anon_sym_protected] = ACTIONS(1715),
    [anon_sym_internal] = ACTIONS(1715),
    [anon_sym_private] = ACTIONS(1715),
    [anon_sym_interface] = ACTIONS(1715),
    [anon_sym_struct] = ACTIONS(1715),
    [anon_sym_enum] = ACTIONS(1715),
    [anon_sym_sbyte] = ACTIONS(1715),
    [anon_sym_byte] = ACTIONS(1715),
    [anon_sym_short] = ACTIONS(1715),
    [anon_sym_ushort] = ACTIONS(1715),
    [anon_sym_int] = ACTIONS(1715),
    [anon_sym_uint] = ACTIONS(1715),
    [anon_sym_long] = ACTIONS(1715),
    [anon_sym_ulong] = ACTIONS(1715),
    [anon_sym_char] = ACTIONS(1715),
    [anon_sym_delegate] = ACTIONS(1715),
    [sym_void_keyword] = ACTIONS(1715),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [sym_const_keyword] = ACTIONS(1715),
    [anon_sym_readonly] = ACTIONS(1715),
    [anon_sym_volatile] = ACTIONS(1715),
    [anon_sym_bool] = ACTIONS(1715),
    [anon_sym_decimal] = ACTIONS(1715),
    [anon_sym_double] = ACTIONS(1715),
    [anon_sym_float] = ACTIONS(1715),
    [anon_sym_object] = ACTIONS(1715),
    [anon_sym_string] = ACTIONS(1715),
    [sym_identifier_name] = ACTIONS(1715),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1715),
  },
  [689] = {
    [aux_sym_enum_declaration_repeat1] = STATE(787),
    [anon_sym_RBRACE] = ACTIONS(1719),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [690] = {
    [anon_sym_SEMI] = ACTIONS(1049),
    [anon_sym_QMARK] = ACTIONS(1169),
    [anon_sym_AMP_AMP] = ACTIONS(1171),
    [anon_sym_PIPE_PIPE] = ACTIONS(1173),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1177),
    [anon_sym_CARET] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1181),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1189),
    [anon_sym_LT_EQ] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_GT_EQ] = ACTIONS(1191),
    [anon_sym_GT] = ACTIONS(1189),
    [sym_comment] = ACTIONS(38),
  },
  [691] = {
    [anon_sym_SEMI] = ACTIONS(1721),
    [anon_sym_RBRACE] = ACTIONS(1721),
    [anon_sym_LPAREN] = ACTIONS(1721),
    [anon_sym_PLUS] = ACTIONS(1723),
    [anon_sym_DASH] = ACTIONS(1723),
    [anon_sym_BANG] = ACTIONS(1721),
    [anon_sym_TILDE] = ACTIONS(1721),
    [anon_sym_DASH_DASH] = ACTIONS(1721),
    [anon_sym_PLUS_PLUS] = ACTIONS(1721),
    [anon_sym_typeof] = ACTIONS(1723),
    [anon_sym_sizeof] = ACTIONS(1723),
    [anon_sym_true] = ACTIONS(1723),
    [anon_sym_false] = ACTIONS(1723),
    [anon_sym_SQUOTE] = ACTIONS(1721),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1723),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1721),
    [sym_null_literal] = ACTIONS(1723),
    [anon_sym_DOT] = ACTIONS(1721),
    [anon_sym_DQUOTE] = ACTIONS(1721),
    [anon_sym_AT_DQUOTE] = ACTIONS(1721),
    [sym_identifier_name] = ACTIONS(1723),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1723),
  },
  [692] = {
    [anon_sym_SEMI] = ACTIONS(1725),
    [anon_sym_RBRACE] = ACTIONS(1725),
    [anon_sym_LPAREN] = ACTIONS(1725),
    [anon_sym_PLUS] = ACTIONS(1727),
    [anon_sym_DASH] = ACTIONS(1727),
    [anon_sym_BANG] = ACTIONS(1725),
    [anon_sym_TILDE] = ACTIONS(1725),
    [anon_sym_DASH_DASH] = ACTIONS(1725),
    [anon_sym_PLUS_PLUS] = ACTIONS(1725),
    [anon_sym_typeof] = ACTIONS(1727),
    [anon_sym_sizeof] = ACTIONS(1727),
    [anon_sym_true] = ACTIONS(1727),
    [anon_sym_false] = ACTIONS(1727),
    [anon_sym_SQUOTE] = ACTIONS(1725),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1727),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1725),
    [sym_null_literal] = ACTIONS(1727),
    [anon_sym_DOT] = ACTIONS(1725),
    [anon_sym_DQUOTE] = ACTIONS(1725),
    [anon_sym_AT_DQUOTE] = ACTIONS(1725),
    [sym_identifier_name] = ACTIONS(1727),
    [sym_comment] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(1727),
  },
  [693] = {
    [anon_sym_COLON] = ACTIONS(1729),
    [anon_sym_QMARK] = ACTIONS(1622),
    [anon_sym_AMP_AMP] = ACTIONS(1624),
    [anon_sym_PIPE_PIPE] = ACTIONS(1626),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1630),
    [anon_sym_CARET] = ACTIONS(1632),
    [anon_sym_PIPE] = ACTIONS(1634),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [694] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1177),
    [anon_sym_CARET] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1181),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1189),
    [anon_sym_LT_EQ] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_GT_EQ] = ACTIONS(1191),
    [anon_sym_GT] = ACTIONS(1189),
    [sym_comment] = ACTIONS(38),
  },
  [695] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1171),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1177),
    [anon_sym_CARET] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1181),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1189),
    [anon_sym_LT_EQ] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_GT_EQ] = ACTIONS(1191),
    [anon_sym_GT] = ACTIONS(1189),
    [sym_comment] = ACTIONS(38),
  },
  [696] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [697] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1189),
    [anon_sym_LT_EQ] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_GT_EQ] = ACTIONS(1191),
    [anon_sym_GT] = ACTIONS(1189),
    [sym_comment] = ACTIONS(38),
  },
  [698] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1177),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1189),
    [anon_sym_LT_EQ] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_GT_EQ] = ACTIONS(1191),
    [anon_sym_GT] = ACTIONS(1189),
    [sym_comment] = ACTIONS(38),
  },
  [699] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1648),
    [anon_sym_DASH] = ACTIONS(1648),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [700] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [701] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1189),
    [anon_sym_LT_EQ] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1191),
    [anon_sym_GT] = ACTIONS(1189),
    [sym_comment] = ACTIONS(38),
  },
  [702] = {
    [anon_sym_RBRACE] = ACTIONS(1731),
    [anon_sym_partial] = ACTIONS(1733),
    [anon_sym_class] = ACTIONS(1733),
    [anon_sym_unsafe] = ACTIONS(1733),
    [anon_sym_abstract] = ACTIONS(1733),
    [anon_sym_sealed] = ACTIONS(1733),
    [anon_sym_static] = ACTIONS(1733),
    [anon_sym_new] = ACTIONS(1733),
    [anon_sym_public] = ACTIONS(1733),
    [anon_sym_protected] = ACTIONS(1733),
    [anon_sym_internal] = ACTIONS(1733),
    [anon_sym_private] = ACTIONS(1733),
    [anon_sym_interface] = ACTIONS(1733),
    [anon_sym_struct] = ACTIONS(1733),
    [anon_sym_enum] = ACTIONS(1733),
    [anon_sym_sbyte] = ACTIONS(1733),
    [anon_sym_byte] = ACTIONS(1733),
    [anon_sym_short] = ACTIONS(1733),
    [anon_sym_ushort] = ACTIONS(1733),
    [anon_sym_int] = ACTIONS(1733),
    [anon_sym_uint] = ACTIONS(1733),
    [anon_sym_long] = ACTIONS(1733),
    [anon_sym_ulong] = ACTIONS(1733),
    [anon_sym_char] = ACTIONS(1733),
    [anon_sym_delegate] = ACTIONS(1733),
    [sym_void_keyword] = ACTIONS(1733),
    [anon_sym_LBRACK] = ACTIONS(1731),
    [sym_const_keyword] = ACTIONS(1733),
    [anon_sym_readonly] = ACTIONS(1733),
    [anon_sym_volatile] = ACTIONS(1733),
    [anon_sym_bool] = ACTIONS(1733),
    [anon_sym_decimal] = ACTIONS(1733),
    [anon_sym_double] = ACTIONS(1733),
    [anon_sym_float] = ACTIONS(1733),
    [anon_sym_object] = ACTIONS(1733),
    [anon_sym_string] = ACTIONS(1733),
    [sym_identifier_name] = ACTIONS(1733),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1733),
  },
  [703] = {
    [sym__type_declaration] = STATE(789),
    [sym_class_declaration] = STATE(789),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(789),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(789),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(789),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(789),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(789),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(789),
    [sym_method_declaration] = STATE(789),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(789),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1709),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [704] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1735),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [705] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1737),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [706] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1719),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [707] = {
    [sym_enum_member_declaration] = STATE(792),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [708] = {
    [anon_sym_RBRACE] = ACTIONS(1121),
    [anon_sym_partial] = ACTIONS(1739),
    [anon_sym_class] = ACTIONS(1739),
    [anon_sym_unsafe] = ACTIONS(1739),
    [anon_sym_abstract] = ACTIONS(1739),
    [anon_sym_sealed] = ACTIONS(1739),
    [anon_sym_static] = ACTIONS(1739),
    [anon_sym_new] = ACTIONS(1739),
    [anon_sym_public] = ACTIONS(1739),
    [anon_sym_protected] = ACTIONS(1739),
    [anon_sym_internal] = ACTIONS(1739),
    [anon_sym_private] = ACTIONS(1739),
    [anon_sym_interface] = ACTIONS(1739),
    [anon_sym_struct] = ACTIONS(1739),
    [anon_sym_enum] = ACTIONS(1739),
    [anon_sym_sbyte] = ACTIONS(1739),
    [anon_sym_byte] = ACTIONS(1739),
    [anon_sym_short] = ACTIONS(1739),
    [anon_sym_ushort] = ACTIONS(1739),
    [anon_sym_int] = ACTIONS(1739),
    [anon_sym_uint] = ACTIONS(1739),
    [anon_sym_long] = ACTIONS(1739),
    [anon_sym_ulong] = ACTIONS(1739),
    [anon_sym_char] = ACTIONS(1739),
    [anon_sym_delegate] = ACTIONS(1739),
    [sym_void_keyword] = ACTIONS(1739),
    [anon_sym_LBRACK] = ACTIONS(1121),
    [sym_const_keyword] = ACTIONS(1739),
    [anon_sym_readonly] = ACTIONS(1739),
    [anon_sym_volatile] = ACTIONS(1739),
    [anon_sym_bool] = ACTIONS(1739),
    [anon_sym_decimal] = ACTIONS(1739),
    [anon_sym_double] = ACTIONS(1739),
    [anon_sym_float] = ACTIONS(1739),
    [anon_sym_object] = ACTIONS(1739),
    [anon_sym_string] = ACTIONS(1739),
    [sym_identifier_name] = ACTIONS(1739),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1739),
  },
  [709] = {
    [sym_statement_block] = STATE(793),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(38),
  },
  [710] = {
    [anon_sym_LBRACE] = ACTIONS(1741),
    [sym_comment] = ACTIONS(38),
  },
  [711] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(795),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(795),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1735),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [712] = {
    [sym__type_declaration] = STATE(796),
    [sym_class_declaration] = STATE(796),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(796),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(796),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(796),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(796),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(796),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(796),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1737),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [713] = {
    [anon_sym_LBRACE] = ACTIONS(1743),
    [sym_comment] = ACTIONS(38),
  },
  [714] = {
    [anon_sym_SEMI] = ACTIONS(1745),
    [sym_comment] = ACTIONS(38),
  },
  [715] = {
    [anon_sym_RBRACE] = ACTIONS(1747),
    [anon_sym_partial] = ACTIONS(1749),
    [anon_sym_class] = ACTIONS(1749),
    [anon_sym_unsafe] = ACTIONS(1749),
    [anon_sym_abstract] = ACTIONS(1749),
    [anon_sym_sealed] = ACTIONS(1749),
    [anon_sym_static] = ACTIONS(1749),
    [anon_sym_new] = ACTIONS(1749),
    [anon_sym_public] = ACTIONS(1749),
    [anon_sym_protected] = ACTIONS(1749),
    [anon_sym_internal] = ACTIONS(1749),
    [anon_sym_private] = ACTIONS(1749),
    [anon_sym_interface] = ACTIONS(1749),
    [anon_sym_struct] = ACTIONS(1749),
    [anon_sym_enum] = ACTIONS(1749),
    [anon_sym_sbyte] = ACTIONS(1749),
    [anon_sym_byte] = ACTIONS(1749),
    [anon_sym_short] = ACTIONS(1749),
    [anon_sym_ushort] = ACTIONS(1749),
    [anon_sym_int] = ACTIONS(1749),
    [anon_sym_uint] = ACTIONS(1749),
    [anon_sym_long] = ACTIONS(1749),
    [anon_sym_ulong] = ACTIONS(1749),
    [anon_sym_char] = ACTIONS(1749),
    [anon_sym_delegate] = ACTIONS(1749),
    [sym_void_keyword] = ACTIONS(1749),
    [anon_sym_LBRACK] = ACTIONS(1747),
    [sym_const_keyword] = ACTIONS(1749),
    [anon_sym_readonly] = ACTIONS(1749),
    [anon_sym_volatile] = ACTIONS(1749),
    [anon_sym_bool] = ACTIONS(1749),
    [anon_sym_decimal] = ACTIONS(1749),
    [anon_sym_double] = ACTIONS(1749),
    [anon_sym_float] = ACTIONS(1749),
    [anon_sym_object] = ACTIONS(1749),
    [anon_sym_string] = ACTIONS(1749),
    [sym_identifier_name] = ACTIONS(1749),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1749),
  },
  [716] = {
    [sym_parameter_list] = STATE(799),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(38),
  },
  [717] = {
    [anon_sym_COLON] = ACTIONS(1751),
    [anon_sym_QMARK] = ACTIONS(1622),
    [anon_sym_AMP_AMP] = ACTIONS(1624),
    [anon_sym_PIPE_PIPE] = ACTIONS(1626),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1630),
    [anon_sym_CARET] = ACTIONS(1632),
    [anon_sym_PIPE] = ACTIONS(1634),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [718] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1231),
    [anon_sym_LT_LT] = ACTIONS(1231),
    [anon_sym_AMP] = ACTIONS(1233),
    [anon_sym_CARET] = ACTIONS(1235),
    [anon_sym_PIPE] = ACTIONS(1237),
    [anon_sym_PLUS] = ACTIONS(1239),
    [anon_sym_DASH] = ACTIONS(1239),
    [anon_sym_STAR] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1245),
    [anon_sym_LT_EQ] = ACTIONS(1247),
    [anon_sym_EQ_EQ] = ACTIONS(1249),
    [anon_sym_BANG_EQ] = ACTIONS(1249),
    [anon_sym_GT_EQ] = ACTIONS(1247),
    [anon_sym_GT] = ACTIONS(1245),
    [sym_comment] = ACTIONS(38),
  },
  [719] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1227),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1231),
    [anon_sym_LT_LT] = ACTIONS(1231),
    [anon_sym_AMP] = ACTIONS(1233),
    [anon_sym_CARET] = ACTIONS(1235),
    [anon_sym_PIPE] = ACTIONS(1237),
    [anon_sym_PLUS] = ACTIONS(1239),
    [anon_sym_DASH] = ACTIONS(1239),
    [anon_sym_STAR] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1245),
    [anon_sym_LT_EQ] = ACTIONS(1247),
    [anon_sym_EQ_EQ] = ACTIONS(1249),
    [anon_sym_BANG_EQ] = ACTIONS(1249),
    [anon_sym_GT_EQ] = ACTIONS(1247),
    [anon_sym_GT] = ACTIONS(1245),
    [sym_comment] = ACTIONS(38),
  },
  [720] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1239),
    [anon_sym_DASH] = ACTIONS(1239),
    [anon_sym_STAR] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [721] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1231),
    [anon_sym_LT_LT] = ACTIONS(1231),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1239),
    [anon_sym_DASH] = ACTIONS(1239),
    [anon_sym_STAR] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1245),
    [anon_sym_LT_EQ] = ACTIONS(1247),
    [anon_sym_EQ_EQ] = ACTIONS(1249),
    [anon_sym_BANG_EQ] = ACTIONS(1249),
    [anon_sym_GT_EQ] = ACTIONS(1247),
    [anon_sym_GT] = ACTIONS(1245),
    [sym_comment] = ACTIONS(38),
  },
  [722] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1231),
    [anon_sym_LT_LT] = ACTIONS(1231),
    [anon_sym_AMP] = ACTIONS(1233),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1239),
    [anon_sym_DASH] = ACTIONS(1239),
    [anon_sym_STAR] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1245),
    [anon_sym_LT_EQ] = ACTIONS(1247),
    [anon_sym_EQ_EQ] = ACTIONS(1249),
    [anon_sym_BANG_EQ] = ACTIONS(1249),
    [anon_sym_GT_EQ] = ACTIONS(1247),
    [anon_sym_GT] = ACTIONS(1245),
    [sym_comment] = ACTIONS(38),
  },
  [723] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1648),
    [anon_sym_DASH] = ACTIONS(1648),
    [anon_sym_STAR] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [724] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1231),
    [anon_sym_LT_LT] = ACTIONS(1231),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1239),
    [anon_sym_DASH] = ACTIONS(1239),
    [anon_sym_STAR] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [725] = {
    [anon_sym_SEMI] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1231),
    [anon_sym_LT_LT] = ACTIONS(1231),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1239),
    [anon_sym_DASH] = ACTIONS(1239),
    [anon_sym_STAR] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1245),
    [anon_sym_LT_EQ] = ACTIONS(1247),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1247),
    [anon_sym_GT] = ACTIONS(1245),
    [sym_comment] = ACTIONS(38),
  },
  [726] = {
    [anon_sym_RBRACE] = ACTIONS(898),
    [anon_sym_partial] = ACTIONS(1707),
    [anon_sym_class] = ACTIONS(1707),
    [anon_sym_unsafe] = ACTIONS(1707),
    [anon_sym_abstract] = ACTIONS(1707),
    [anon_sym_sealed] = ACTIONS(1707),
    [anon_sym_static] = ACTIONS(1707),
    [anon_sym_new] = ACTIONS(1707),
    [anon_sym_public] = ACTIONS(1707),
    [anon_sym_protected] = ACTIONS(1707),
    [anon_sym_internal] = ACTIONS(1707),
    [anon_sym_private] = ACTIONS(1707),
    [anon_sym_interface] = ACTIONS(1707),
    [anon_sym_struct] = ACTIONS(1707),
    [anon_sym_enum] = ACTIONS(1707),
    [anon_sym_sbyte] = ACTIONS(1707),
    [anon_sym_byte] = ACTIONS(1707),
    [anon_sym_short] = ACTIONS(1707),
    [anon_sym_ushort] = ACTIONS(1707),
    [anon_sym_int] = ACTIONS(1707),
    [anon_sym_uint] = ACTIONS(1707),
    [anon_sym_long] = ACTIONS(1707),
    [anon_sym_ulong] = ACTIONS(1707),
    [anon_sym_char] = ACTIONS(1707),
    [anon_sym_delegate] = ACTIONS(1707),
    [anon_sym_LBRACK] = ACTIONS(898),
    [sym_const_keyword] = ACTIONS(1707),
    [anon_sym_readonly] = ACTIONS(1707),
    [anon_sym_volatile] = ACTIONS(1707),
    [anon_sym_bool] = ACTIONS(1707),
    [anon_sym_decimal] = ACTIONS(1707),
    [anon_sym_double] = ACTIONS(1707),
    [anon_sym_float] = ACTIONS(1707),
    [anon_sym_object] = ACTIONS(1707),
    [anon_sym_string] = ACTIONS(1707),
    [sym_identifier_name] = ACTIONS(1707),
    [sym_comment] = ACTIONS(38),
  },
  [727] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1753),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [728] = {
    [anon_sym_RBRACE] = ACTIONS(977),
    [anon_sym_partial] = ACTIONS(1711),
    [anon_sym_class] = ACTIONS(1711),
    [anon_sym_unsafe] = ACTIONS(1711),
    [anon_sym_abstract] = ACTIONS(1711),
    [anon_sym_sealed] = ACTIONS(1711),
    [anon_sym_static] = ACTIONS(1711),
    [anon_sym_new] = ACTIONS(1711),
    [anon_sym_public] = ACTIONS(1711),
    [anon_sym_protected] = ACTIONS(1711),
    [anon_sym_internal] = ACTIONS(1711),
    [anon_sym_private] = ACTIONS(1711),
    [anon_sym_interface] = ACTIONS(1711),
    [anon_sym_struct] = ACTIONS(1711),
    [anon_sym_enum] = ACTIONS(1711),
    [anon_sym_sbyte] = ACTIONS(1711),
    [anon_sym_byte] = ACTIONS(1711),
    [anon_sym_short] = ACTIONS(1711),
    [anon_sym_ushort] = ACTIONS(1711),
    [anon_sym_int] = ACTIONS(1711),
    [anon_sym_uint] = ACTIONS(1711),
    [anon_sym_long] = ACTIONS(1711),
    [anon_sym_ulong] = ACTIONS(1711),
    [anon_sym_char] = ACTIONS(1711),
    [anon_sym_delegate] = ACTIONS(1711),
    [anon_sym_LBRACK] = ACTIONS(977),
    [sym_const_keyword] = ACTIONS(1711),
    [anon_sym_readonly] = ACTIONS(1711),
    [anon_sym_volatile] = ACTIONS(1711),
    [anon_sym_bool] = ACTIONS(1711),
    [anon_sym_decimal] = ACTIONS(1711),
    [anon_sym_double] = ACTIONS(1711),
    [anon_sym_float] = ACTIONS(1711),
    [anon_sym_object] = ACTIONS(1711),
    [anon_sym_string] = ACTIONS(1711),
    [sym_identifier_name] = ACTIONS(1711),
    [sym_comment] = ACTIONS(38),
  },
  [729] = {
    [anon_sym_RBRACE] = ACTIONS(1011),
    [anon_sym_partial] = ACTIONS(1713),
    [anon_sym_class] = ACTIONS(1713),
    [anon_sym_unsafe] = ACTIONS(1713),
    [anon_sym_abstract] = ACTIONS(1713),
    [anon_sym_sealed] = ACTIONS(1713),
    [anon_sym_static] = ACTIONS(1713),
    [anon_sym_new] = ACTIONS(1713),
    [anon_sym_public] = ACTIONS(1713),
    [anon_sym_protected] = ACTIONS(1713),
    [anon_sym_internal] = ACTIONS(1713),
    [anon_sym_private] = ACTIONS(1713),
    [anon_sym_interface] = ACTIONS(1713),
    [anon_sym_struct] = ACTIONS(1713),
    [anon_sym_enum] = ACTIONS(1713),
    [anon_sym_sbyte] = ACTIONS(1713),
    [anon_sym_byte] = ACTIONS(1713),
    [anon_sym_short] = ACTIONS(1713),
    [anon_sym_ushort] = ACTIONS(1713),
    [anon_sym_int] = ACTIONS(1713),
    [anon_sym_uint] = ACTIONS(1713),
    [anon_sym_long] = ACTIONS(1713),
    [anon_sym_ulong] = ACTIONS(1713),
    [anon_sym_char] = ACTIONS(1713),
    [anon_sym_delegate] = ACTIONS(1713),
    [anon_sym_LBRACK] = ACTIONS(1011),
    [sym_const_keyword] = ACTIONS(1713),
    [anon_sym_readonly] = ACTIONS(1713),
    [anon_sym_volatile] = ACTIONS(1713),
    [anon_sym_bool] = ACTIONS(1713),
    [anon_sym_decimal] = ACTIONS(1713),
    [anon_sym_double] = ACTIONS(1713),
    [anon_sym_float] = ACTIONS(1713),
    [anon_sym_object] = ACTIONS(1713),
    [anon_sym_string] = ACTIONS(1713),
    [sym_identifier_name] = ACTIONS(1713),
    [sym_comment] = ACTIONS(38),
  },
  [730] = {
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_partial] = ACTIONS(1715),
    [anon_sym_class] = ACTIONS(1715),
    [anon_sym_unsafe] = ACTIONS(1715),
    [anon_sym_abstract] = ACTIONS(1715),
    [anon_sym_sealed] = ACTIONS(1715),
    [anon_sym_static] = ACTIONS(1715),
    [anon_sym_new] = ACTIONS(1715),
    [anon_sym_public] = ACTIONS(1715),
    [anon_sym_protected] = ACTIONS(1715),
    [anon_sym_internal] = ACTIONS(1715),
    [anon_sym_private] = ACTIONS(1715),
    [anon_sym_interface] = ACTIONS(1715),
    [anon_sym_struct] = ACTIONS(1715),
    [anon_sym_enum] = ACTIONS(1715),
    [anon_sym_sbyte] = ACTIONS(1715),
    [anon_sym_byte] = ACTIONS(1715),
    [anon_sym_short] = ACTIONS(1715),
    [anon_sym_ushort] = ACTIONS(1715),
    [anon_sym_int] = ACTIONS(1715),
    [anon_sym_uint] = ACTIONS(1715),
    [anon_sym_long] = ACTIONS(1715),
    [anon_sym_ulong] = ACTIONS(1715),
    [anon_sym_char] = ACTIONS(1715),
    [anon_sym_delegate] = ACTIONS(1715),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [sym_const_keyword] = ACTIONS(1715),
    [anon_sym_readonly] = ACTIONS(1715),
    [anon_sym_volatile] = ACTIONS(1715),
    [anon_sym_bool] = ACTIONS(1715),
    [anon_sym_decimal] = ACTIONS(1715),
    [anon_sym_double] = ACTIONS(1715),
    [anon_sym_float] = ACTIONS(1715),
    [anon_sym_object] = ACTIONS(1715),
    [anon_sym_string] = ACTIONS(1715),
    [sym_identifier_name] = ACTIONS(1715),
    [sym_comment] = ACTIONS(38),
  },
  [731] = {
    [anon_sym_SEMI] = ACTIONS(1755),
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_partial] = ACTIONS(1715),
    [anon_sym_class] = ACTIONS(1715),
    [anon_sym_unsafe] = ACTIONS(1715),
    [anon_sym_abstract] = ACTIONS(1715),
    [anon_sym_sealed] = ACTIONS(1715),
    [anon_sym_static] = ACTIONS(1715),
    [anon_sym_new] = ACTIONS(1715),
    [anon_sym_public] = ACTIONS(1715),
    [anon_sym_protected] = ACTIONS(1715),
    [anon_sym_internal] = ACTIONS(1715),
    [anon_sym_private] = ACTIONS(1715),
    [anon_sym_interface] = ACTIONS(1715),
    [anon_sym_struct] = ACTIONS(1715),
    [anon_sym_enum] = ACTIONS(1715),
    [anon_sym_sbyte] = ACTIONS(1715),
    [anon_sym_byte] = ACTIONS(1715),
    [anon_sym_short] = ACTIONS(1715),
    [anon_sym_ushort] = ACTIONS(1715),
    [anon_sym_int] = ACTIONS(1715),
    [anon_sym_uint] = ACTIONS(1715),
    [anon_sym_long] = ACTIONS(1715),
    [anon_sym_ulong] = ACTIONS(1715),
    [anon_sym_char] = ACTIONS(1715),
    [anon_sym_delegate] = ACTIONS(1715),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [sym_const_keyword] = ACTIONS(1715),
    [anon_sym_readonly] = ACTIONS(1715),
    [anon_sym_volatile] = ACTIONS(1715),
    [anon_sym_bool] = ACTIONS(1715),
    [anon_sym_decimal] = ACTIONS(1715),
    [anon_sym_double] = ACTIONS(1715),
    [anon_sym_float] = ACTIONS(1715),
    [anon_sym_object] = ACTIONS(1715),
    [anon_sym_string] = ACTIONS(1715),
    [sym_identifier_name] = ACTIONS(1715),
    [sym_comment] = ACTIONS(38),
  },
  [732] = {
    [aux_sym_enum_declaration_repeat1] = STATE(804),
    [anon_sym_RBRACE] = ACTIONS(1757),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [733] = {
    [sym__type_declaration] = STATE(805),
    [sym_class_declaration] = STATE(805),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(805),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(805),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(805),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(805),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(805),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(805),
    [sym_method_declaration] = STATE(805),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(805),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1753),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [734] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1759),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [735] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1761),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [736] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1757),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [737] = {
    [sym_enum_member_declaration] = STATE(808),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [738] = {
    [anon_sym_RBRACE] = ACTIONS(1121),
    [anon_sym_partial] = ACTIONS(1739),
    [anon_sym_class] = ACTIONS(1739),
    [anon_sym_unsafe] = ACTIONS(1739),
    [anon_sym_abstract] = ACTIONS(1739),
    [anon_sym_sealed] = ACTIONS(1739),
    [anon_sym_static] = ACTIONS(1739),
    [anon_sym_new] = ACTIONS(1739),
    [anon_sym_public] = ACTIONS(1739),
    [anon_sym_protected] = ACTIONS(1739),
    [anon_sym_internal] = ACTIONS(1739),
    [anon_sym_private] = ACTIONS(1739),
    [anon_sym_interface] = ACTIONS(1739),
    [anon_sym_struct] = ACTIONS(1739),
    [anon_sym_enum] = ACTIONS(1739),
    [anon_sym_sbyte] = ACTIONS(1739),
    [anon_sym_byte] = ACTIONS(1739),
    [anon_sym_short] = ACTIONS(1739),
    [anon_sym_ushort] = ACTIONS(1739),
    [anon_sym_int] = ACTIONS(1739),
    [anon_sym_uint] = ACTIONS(1739),
    [anon_sym_long] = ACTIONS(1739),
    [anon_sym_ulong] = ACTIONS(1739),
    [anon_sym_char] = ACTIONS(1739),
    [anon_sym_delegate] = ACTIONS(1739),
    [anon_sym_LBRACK] = ACTIONS(1121),
    [sym_const_keyword] = ACTIONS(1739),
    [anon_sym_readonly] = ACTIONS(1739),
    [anon_sym_volatile] = ACTIONS(1739),
    [anon_sym_bool] = ACTIONS(1739),
    [anon_sym_decimal] = ACTIONS(1739),
    [anon_sym_double] = ACTIONS(1739),
    [anon_sym_float] = ACTIONS(1739),
    [anon_sym_object] = ACTIONS(1739),
    [anon_sym_string] = ACTIONS(1739),
    [sym_identifier_name] = ACTIONS(1739),
    [sym_comment] = ACTIONS(38),
  },
  [739] = {
    [anon_sym_LBRACE] = ACTIONS(1763),
    [sym_comment] = ACTIONS(38),
  },
  [740] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(810),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(810),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1759),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [741] = {
    [sym__type_declaration] = STATE(811),
    [sym_class_declaration] = STATE(811),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(811),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(811),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(811),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(811),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(811),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(811),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1761),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [742] = {
    [anon_sym_LBRACE] = ACTIONS(1765),
    [sym_comment] = ACTIONS(38),
  },
  [743] = {
    [anon_sym_SEMI] = ACTIONS(1767),
    [sym_comment] = ACTIONS(38),
  },
  [744] = {
    [anon_sym_COLON] = ACTIONS(1769),
    [anon_sym_QMARK] = ACTIONS(1622),
    [anon_sym_AMP_AMP] = ACTIONS(1624),
    [anon_sym_PIPE_PIPE] = ACTIONS(1626),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1630),
    [anon_sym_CARET] = ACTIONS(1632),
    [anon_sym_PIPE] = ACTIONS(1634),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [745] = {
    [anon_sym_RPAREN] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1294),
    [anon_sym_LT_LT] = ACTIONS(1294),
    [anon_sym_AMP] = ACTIONS(1296),
    [anon_sym_CARET] = ACTIONS(1298),
    [anon_sym_PIPE] = ACTIONS(1300),
    [anon_sym_PLUS] = ACTIONS(1302),
    [anon_sym_DASH] = ACTIONS(1302),
    [anon_sym_STAR] = ACTIONS(1304),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1304),
    [anon_sym_LT] = ACTIONS(1308),
    [anon_sym_LT_EQ] = ACTIONS(1310),
    [anon_sym_EQ_EQ] = ACTIONS(1312),
    [anon_sym_BANG_EQ] = ACTIONS(1312),
    [anon_sym_GT_EQ] = ACTIONS(1310),
    [anon_sym_GT] = ACTIONS(1308),
    [sym_comment] = ACTIONS(38),
  },
  [746] = {
    [anon_sym_RPAREN] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1290),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1294),
    [anon_sym_LT_LT] = ACTIONS(1294),
    [anon_sym_AMP] = ACTIONS(1296),
    [anon_sym_CARET] = ACTIONS(1298),
    [anon_sym_PIPE] = ACTIONS(1300),
    [anon_sym_PLUS] = ACTIONS(1302),
    [anon_sym_DASH] = ACTIONS(1302),
    [anon_sym_STAR] = ACTIONS(1304),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1304),
    [anon_sym_LT] = ACTIONS(1308),
    [anon_sym_LT_EQ] = ACTIONS(1310),
    [anon_sym_EQ_EQ] = ACTIONS(1312),
    [anon_sym_BANG_EQ] = ACTIONS(1312),
    [anon_sym_GT_EQ] = ACTIONS(1310),
    [anon_sym_GT] = ACTIONS(1308),
    [sym_comment] = ACTIONS(38),
  },
  [747] = {
    [anon_sym_RPAREN] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1302),
    [anon_sym_DASH] = ACTIONS(1302),
    [anon_sym_STAR] = ACTIONS(1304),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1304),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [748] = {
    [anon_sym_RPAREN] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1294),
    [anon_sym_LT_LT] = ACTIONS(1294),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1302),
    [anon_sym_DASH] = ACTIONS(1302),
    [anon_sym_STAR] = ACTIONS(1304),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1304),
    [anon_sym_LT] = ACTIONS(1308),
    [anon_sym_LT_EQ] = ACTIONS(1310),
    [anon_sym_EQ_EQ] = ACTIONS(1312),
    [anon_sym_BANG_EQ] = ACTIONS(1312),
    [anon_sym_GT_EQ] = ACTIONS(1310),
    [anon_sym_GT] = ACTIONS(1308),
    [sym_comment] = ACTIONS(38),
  },
  [749] = {
    [anon_sym_RPAREN] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1294),
    [anon_sym_LT_LT] = ACTIONS(1294),
    [anon_sym_AMP] = ACTIONS(1296),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1302),
    [anon_sym_DASH] = ACTIONS(1302),
    [anon_sym_STAR] = ACTIONS(1304),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1304),
    [anon_sym_LT] = ACTIONS(1308),
    [anon_sym_LT_EQ] = ACTIONS(1310),
    [anon_sym_EQ_EQ] = ACTIONS(1312),
    [anon_sym_BANG_EQ] = ACTIONS(1312),
    [anon_sym_GT_EQ] = ACTIONS(1310),
    [anon_sym_GT] = ACTIONS(1308),
    [sym_comment] = ACTIONS(38),
  },
  [750] = {
    [anon_sym_RPAREN] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1648),
    [anon_sym_DASH] = ACTIONS(1648),
    [anon_sym_STAR] = ACTIONS(1304),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1304),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [751] = {
    [anon_sym_RPAREN] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1294),
    [anon_sym_LT_LT] = ACTIONS(1294),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1302),
    [anon_sym_DASH] = ACTIONS(1302),
    [anon_sym_STAR] = ACTIONS(1304),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1304),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [752] = {
    [anon_sym_RPAREN] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1294),
    [anon_sym_LT_LT] = ACTIONS(1294),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1302),
    [anon_sym_DASH] = ACTIONS(1302),
    [anon_sym_STAR] = ACTIONS(1304),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1304),
    [anon_sym_LT] = ACTIONS(1308),
    [anon_sym_LT_EQ] = ACTIONS(1310),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1310),
    [anon_sym_GT] = ACTIONS(1308),
    [sym_comment] = ACTIONS(38),
  },
  [753] = {
    [anon_sym_SEMI] = ACTIONS(1771),
    [anon_sym_RBRACE] = ACTIONS(1771),
    [anon_sym_COLON] = ACTIONS(1771),
    [anon_sym_COMMA] = ACTIONS(1771),
    [anon_sym_RPAREN] = ACTIONS(1771),
    [sym_params_keyword] = ACTIONS(1771),
    [anon_sym_LBRACK] = ACTIONS(1771),
    [anon_sym_QMARK] = ACTIONS(1771),
    [anon_sym_AMP_AMP] = ACTIONS(1771),
    [anon_sym_PIPE_PIPE] = ACTIONS(1771),
    [anon_sym_GT_GT] = ACTIONS(1771),
    [anon_sym_LT_LT] = ACTIONS(1771),
    [anon_sym_AMP] = ACTIONS(1773),
    [anon_sym_CARET] = ACTIONS(1771),
    [anon_sym_PIPE] = ACTIONS(1773),
    [anon_sym_PLUS] = ACTIONS(1771),
    [anon_sym_DASH] = ACTIONS(1771),
    [anon_sym_STAR] = ACTIONS(1771),
    [anon_sym_SLASH] = ACTIONS(1773),
    [anon_sym_PERCENT] = ACTIONS(1771),
    [anon_sym_LT] = ACTIONS(1773),
    [anon_sym_LT_EQ] = ACTIONS(1771),
    [anon_sym_EQ_EQ] = ACTIONS(1771),
    [anon_sym_BANG_EQ] = ACTIONS(1771),
    [anon_sym_GT_EQ] = ACTIONS(1771),
    [anon_sym_GT] = ACTIONS(1773),
    [sym_comment] = ACTIONS(38),
  },
  [754] = {
    [anon_sym_SEMI] = ACTIONS(1771),
    [anon_sym_RBRACE] = ACTIONS(1771),
    [anon_sym_COLON] = ACTIONS(1771),
    [anon_sym_COMMA] = ACTIONS(1771),
    [anon_sym_RPAREN] = ACTIONS(1771),
    [sym_params_keyword] = ACTIONS(1771),
    [anon_sym_LBRACK] = ACTIONS(1771),
    [anon_sym_QMARK] = ACTIONS(1771),
    [anon_sym_AMP_AMP] = ACTIONS(1771),
    [anon_sym_PIPE_PIPE] = ACTIONS(1771),
    [anon_sym_GT_GT] = ACTIONS(1771),
    [anon_sym_LT_LT] = ACTIONS(1771),
    [anon_sym_AMP] = ACTIONS(1773),
    [anon_sym_CARET] = ACTIONS(1771),
    [anon_sym_PIPE] = ACTIONS(1773),
    [anon_sym_PLUS] = ACTIONS(1771),
    [anon_sym_DASH] = ACTIONS(1771),
    [anon_sym_STAR] = ACTIONS(1771),
    [anon_sym_SLASH] = ACTIONS(1773),
    [anon_sym_PERCENT] = ACTIONS(1771),
    [anon_sym_LT] = ACTIONS(1773),
    [anon_sym_LT_EQ] = ACTIONS(1771),
    [anon_sym_EQ_EQ] = ACTIONS(1771),
    [anon_sym_BANG_EQ] = ACTIONS(1771),
    [anon_sym_GT_EQ] = ACTIONS(1771),
    [anon_sym_GT] = ACTIONS(1773),
    [sym__real_type_suffix] = ACTIONS(1775),
    [sym_comment] = ACTIONS(38),
  },
  [755] = {
    [sym__expression] = STATE(816),
    [sym_parenthesized_expression] = STATE(816),
    [sym_ternary_expression] = STATE(816),
    [sym_binary_expression] = STATE(816),
    [sym_unary_expression] = STATE(816),
    [sym__literal] = STATE(816),
    [sym_boolean_literal] = STATE(816),
    [sym_character_literal] = STATE(816),
    [sym_integer_literal] = STATE(816),
    [sym_real_literal] = STATE(816),
    [sym_string_literal] = STATE(816),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(837),
    [anon_sym_TILDE] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(837),
    [anon_sym_typeof] = ACTIONS(835),
    [anon_sym_sizeof] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1777),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1777),
    [sym_comment] = ACTIONS(38),
  },
  [756] = {
    [sym__expression] = STATE(817),
    [sym_parenthesized_expression] = STATE(817),
    [sym_ternary_expression] = STATE(817),
    [sym_binary_expression] = STATE(817),
    [sym_unary_expression] = STATE(817),
    [sym__literal] = STATE(817),
    [sym_boolean_literal] = STATE(817),
    [sym_character_literal] = STATE(817),
    [sym_integer_literal] = STATE(817),
    [sym_real_literal] = STATE(817),
    [sym_string_literal] = STATE(817),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1779),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1779),
    [sym_comment] = ACTIONS(38),
  },
  [757] = {
    [sym__expression] = STATE(818),
    [sym_parenthesized_expression] = STATE(818),
    [sym_ternary_expression] = STATE(818),
    [sym_binary_expression] = STATE(818),
    [sym_unary_expression] = STATE(818),
    [sym__literal] = STATE(818),
    [sym_boolean_literal] = STATE(818),
    [sym_character_literal] = STATE(818),
    [sym_integer_literal] = STATE(818),
    [sym_real_literal] = STATE(818),
    [sym_string_literal] = STATE(818),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1781),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1781),
    [sym_comment] = ACTIONS(38),
  },
  [758] = {
    [sym__expression] = STATE(819),
    [sym_parenthesized_expression] = STATE(819),
    [sym_ternary_expression] = STATE(819),
    [sym_binary_expression] = STATE(819),
    [sym_unary_expression] = STATE(819),
    [sym__literal] = STATE(819),
    [sym_boolean_literal] = STATE(819),
    [sym_character_literal] = STATE(819),
    [sym_integer_literal] = STATE(819),
    [sym_real_literal] = STATE(819),
    [sym_string_literal] = STATE(819),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1783),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1783),
    [sym_comment] = ACTIONS(38),
  },
  [759] = {
    [sym__expression] = STATE(820),
    [sym_parenthesized_expression] = STATE(820),
    [sym_ternary_expression] = STATE(820),
    [sym_binary_expression] = STATE(820),
    [sym_unary_expression] = STATE(820),
    [sym__literal] = STATE(820),
    [sym_boolean_literal] = STATE(820),
    [sym_character_literal] = STATE(820),
    [sym_integer_literal] = STATE(820),
    [sym_real_literal] = STATE(820),
    [sym_string_literal] = STATE(820),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1785),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1785),
    [sym_comment] = ACTIONS(38),
  },
  [760] = {
    [sym__expression] = STATE(821),
    [sym_parenthesized_expression] = STATE(821),
    [sym_ternary_expression] = STATE(821),
    [sym_binary_expression] = STATE(821),
    [sym_unary_expression] = STATE(821),
    [sym__literal] = STATE(821),
    [sym_boolean_literal] = STATE(821),
    [sym_character_literal] = STATE(821),
    [sym_integer_literal] = STATE(821),
    [sym_real_literal] = STATE(821),
    [sym_string_literal] = STATE(821),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1787),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1787),
    [sym_comment] = ACTIONS(38),
  },
  [761] = {
    [sym__expression] = STATE(822),
    [sym_parenthesized_expression] = STATE(822),
    [sym_ternary_expression] = STATE(822),
    [sym_binary_expression] = STATE(822),
    [sym_unary_expression] = STATE(822),
    [sym__literal] = STATE(822),
    [sym_boolean_literal] = STATE(822),
    [sym_character_literal] = STATE(822),
    [sym_integer_literal] = STATE(822),
    [sym_real_literal] = STATE(822),
    [sym_string_literal] = STATE(822),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1789),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1789),
    [sym_comment] = ACTIONS(38),
  },
  [762] = {
    [sym__expression] = STATE(823),
    [sym_parenthesized_expression] = STATE(823),
    [sym_ternary_expression] = STATE(823),
    [sym_binary_expression] = STATE(823),
    [sym_unary_expression] = STATE(823),
    [sym__literal] = STATE(823),
    [sym_boolean_literal] = STATE(823),
    [sym_character_literal] = STATE(823),
    [sym_integer_literal] = STATE(823),
    [sym_real_literal] = STATE(823),
    [sym_string_literal] = STATE(823),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1791),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1791),
    [sym_comment] = ACTIONS(38),
  },
  [763] = {
    [sym__expression] = STATE(663),
    [sym_parenthesized_expression] = STATE(663),
    [sym_ternary_expression] = STATE(663),
    [sym_binary_expression] = STATE(663),
    [sym_unary_expression] = STATE(663),
    [sym__literal] = STATE(663),
    [sym_boolean_literal] = STATE(663),
    [sym_character_literal] = STATE(663),
    [sym_integer_literal] = STATE(663),
    [sym_real_literal] = STATE(663),
    [sym_string_literal] = STATE(663),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1362),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1362),
    [sym_comment] = ACTIONS(38),
  },
  [764] = {
    [sym__expression] = STATE(824),
    [sym_parenthesized_expression] = STATE(824),
    [sym_ternary_expression] = STATE(824),
    [sym_binary_expression] = STATE(824),
    [sym_unary_expression] = STATE(824),
    [sym__literal] = STATE(824),
    [sym_boolean_literal] = STATE(824),
    [sym_character_literal] = STATE(824),
    [sym_integer_literal] = STATE(824),
    [sym_real_literal] = STATE(824),
    [sym_string_literal] = STATE(824),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1793),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1793),
    [sym_comment] = ACTIONS(38),
  },
  [765] = {
    [sym__expression] = STATE(825),
    [sym_parenthesized_expression] = STATE(825),
    [sym_ternary_expression] = STATE(825),
    [sym_binary_expression] = STATE(825),
    [sym_unary_expression] = STATE(825),
    [sym__literal] = STATE(825),
    [sym_boolean_literal] = STATE(825),
    [sym_character_literal] = STATE(825),
    [sym_integer_literal] = STATE(825),
    [sym_real_literal] = STATE(825),
    [sym_string_literal] = STATE(825),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1795),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1795),
    [sym_comment] = ACTIONS(38),
  },
  [766] = {
    [ts_builtin_sym_end] = ACTIONS(1797),
    [anon_sym_using] = ACTIONS(1797),
    [anon_sym_namespace] = ACTIONS(1797),
    [anon_sym_RBRACE] = ACTIONS(1797),
    [anon_sym_partial] = ACTIONS(1797),
    [anon_sym_class] = ACTIONS(1797),
    [anon_sym_unsafe] = ACTIONS(1797),
    [anon_sym_abstract] = ACTIONS(1797),
    [anon_sym_sealed] = ACTIONS(1797),
    [anon_sym_static] = ACTIONS(1797),
    [anon_sym_new] = ACTIONS(1797),
    [anon_sym_public] = ACTIONS(1797),
    [anon_sym_protected] = ACTIONS(1797),
    [anon_sym_internal] = ACTIONS(1797),
    [anon_sym_private] = ACTIONS(1797),
    [anon_sym_interface] = ACTIONS(1797),
    [anon_sym_struct] = ACTIONS(1797),
    [anon_sym_enum] = ACTIONS(1797),
    [anon_sym_delegate] = ACTIONS(1797),
    [anon_sym_LBRACK] = ACTIONS(1797),
    [sym_comment] = ACTIONS(38),
  },
  [767] = {
    [sym_identifier_name] = ACTIONS(1799),
    [sym_comment] = ACTIONS(38),
  },
  [768] = {
    [aux_sym_array_rank_specifier_repeat1] = STATE(768),
    [anon_sym_COMMA] = ACTIONS(1801),
    [anon_sym_RBRACK] = ACTIONS(1804),
    [sym_comment] = ACTIONS(38),
  },
  [769] = {
    [anon_sym_sbyte] = ACTIONS(333),
    [anon_sym_byte] = ACTIONS(333),
    [anon_sym_short] = ACTIONS(333),
    [anon_sym_ushort] = ACTIONS(333),
    [anon_sym_int] = ACTIONS(333),
    [anon_sym_uint] = ACTIONS(333),
    [anon_sym_long] = ACTIONS(333),
    [anon_sym_ulong] = ACTIONS(333),
    [anon_sym_char] = ACTIONS(333),
    [anon_sym_ref] = ACTIONS(333),
    [anon_sym_out] = ACTIONS(333),
    [anon_sym_this] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_bool] = ACTIONS(333),
    [anon_sym_decimal] = ACTIONS(333),
    [anon_sym_double] = ACTIONS(333),
    [anon_sym_float] = ACTIONS(333),
    [anon_sym_object] = ACTIONS(333),
    [anon_sym_string] = ACTIONS(333),
    [sym_identifier_name] = ACTIONS(333),
    [sym_comment] = ACTIONS(38),
  },
  [770] = {
    [anon_sym_COMMA] = ACTIONS(1806),
    [anon_sym_RPAREN] = ACTIONS(1806),
    [sym_params_keyword] = ACTIONS(1806),
    [anon_sym_LBRACK] = ACTIONS(1806),
    [sym_comment] = ACTIONS(38),
  },
  [771] = {
    [sym__expression] = STATE(826),
    [sym_parenthesized_expression] = STATE(826),
    [sym_ternary_expression] = STATE(826),
    [sym_binary_expression] = STATE(826),
    [sym_unary_expression] = STATE(826),
    [sym__literal] = STATE(826),
    [sym_boolean_literal] = STATE(826),
    [sym_character_literal] = STATE(826),
    [sym_integer_literal] = STATE(826),
    [sym_real_literal] = STATE(826),
    [sym_string_literal] = STATE(826),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1808),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1808),
    [sym_comment] = ACTIONS(38),
  },
  [772] = {
    [sym__expression] = STATE(827),
    [sym_parenthesized_expression] = STATE(827),
    [sym_ternary_expression] = STATE(827),
    [sym_binary_expression] = STATE(827),
    [sym_unary_expression] = STATE(827),
    [sym__literal] = STATE(827),
    [sym_boolean_literal] = STATE(827),
    [sym_character_literal] = STATE(827),
    [sym_integer_literal] = STATE(827),
    [sym_real_literal] = STATE(827),
    [sym_string_literal] = STATE(827),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1810),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1810),
    [sym_comment] = ACTIONS(38),
  },
  [773] = {
    [sym__expression] = STATE(828),
    [sym_parenthesized_expression] = STATE(828),
    [sym_ternary_expression] = STATE(828),
    [sym_binary_expression] = STATE(828),
    [sym_unary_expression] = STATE(828),
    [sym__literal] = STATE(828),
    [sym_boolean_literal] = STATE(828),
    [sym_character_literal] = STATE(828),
    [sym_integer_literal] = STATE(828),
    [sym_real_literal] = STATE(828),
    [sym_string_literal] = STATE(828),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1812),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1812),
    [sym_comment] = ACTIONS(38),
  },
  [774] = {
    [sym__expression] = STATE(829),
    [sym_parenthesized_expression] = STATE(829),
    [sym_ternary_expression] = STATE(829),
    [sym_binary_expression] = STATE(829),
    [sym_unary_expression] = STATE(829),
    [sym__literal] = STATE(829),
    [sym_boolean_literal] = STATE(829),
    [sym_character_literal] = STATE(829),
    [sym_integer_literal] = STATE(829),
    [sym_real_literal] = STATE(829),
    [sym_string_literal] = STATE(829),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1814),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1814),
    [sym_comment] = ACTIONS(38),
  },
  [775] = {
    [sym__expression] = STATE(830),
    [sym_parenthesized_expression] = STATE(830),
    [sym_ternary_expression] = STATE(830),
    [sym_binary_expression] = STATE(830),
    [sym_unary_expression] = STATE(830),
    [sym__literal] = STATE(830),
    [sym_boolean_literal] = STATE(830),
    [sym_character_literal] = STATE(830),
    [sym_integer_literal] = STATE(830),
    [sym_real_literal] = STATE(830),
    [sym_string_literal] = STATE(830),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1816),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1816),
    [sym_comment] = ACTIONS(38),
  },
  [776] = {
    [sym__expression] = STATE(831),
    [sym_parenthesized_expression] = STATE(831),
    [sym_ternary_expression] = STATE(831),
    [sym_binary_expression] = STATE(831),
    [sym_unary_expression] = STATE(831),
    [sym__literal] = STATE(831),
    [sym_boolean_literal] = STATE(831),
    [sym_character_literal] = STATE(831),
    [sym_integer_literal] = STATE(831),
    [sym_real_literal] = STATE(831),
    [sym_string_literal] = STATE(831),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1818),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1818),
    [sym_comment] = ACTIONS(38),
  },
  [777] = {
    [sym__expression] = STATE(832),
    [sym_parenthesized_expression] = STATE(832),
    [sym_ternary_expression] = STATE(832),
    [sym_binary_expression] = STATE(832),
    [sym_unary_expression] = STATE(832),
    [sym__literal] = STATE(832),
    [sym_boolean_literal] = STATE(832),
    [sym_character_literal] = STATE(832),
    [sym_integer_literal] = STATE(832),
    [sym_real_literal] = STATE(832),
    [sym_string_literal] = STATE(832),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1820),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1820),
    [sym_comment] = ACTIONS(38),
  },
  [778] = {
    [sym__expression] = STATE(663),
    [sym_parenthesized_expression] = STATE(663),
    [sym_ternary_expression] = STATE(663),
    [sym_binary_expression] = STATE(663),
    [sym_unary_expression] = STATE(663),
    [sym__literal] = STATE(663),
    [sym_boolean_literal] = STATE(663),
    [sym_character_literal] = STATE(663),
    [sym_integer_literal] = STATE(663),
    [sym_real_literal] = STATE(663),
    [sym_string_literal] = STATE(663),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1362),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1362),
    [sym_comment] = ACTIONS(38),
  },
  [779] = {
    [sym__expression] = STATE(833),
    [sym_parenthesized_expression] = STATE(833),
    [sym_ternary_expression] = STATE(833),
    [sym_binary_expression] = STATE(833),
    [sym_unary_expression] = STATE(833),
    [sym__literal] = STATE(833),
    [sym_boolean_literal] = STATE(833),
    [sym_character_literal] = STATE(833),
    [sym_integer_literal] = STATE(833),
    [sym_real_literal] = STATE(833),
    [sym_string_literal] = STATE(833),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1822),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1822),
    [sym_comment] = ACTIONS(38),
  },
  [780] = {
    [sym__expression] = STATE(834),
    [sym_parenthesized_expression] = STATE(834),
    [sym_ternary_expression] = STATE(834),
    [sym_binary_expression] = STATE(834),
    [sym_unary_expression] = STATE(834),
    [sym__literal] = STATE(834),
    [sym_boolean_literal] = STATE(834),
    [sym_character_literal] = STATE(834),
    [sym_integer_literal] = STATE(834),
    [sym_real_literal] = STATE(834),
    [sym_string_literal] = STATE(834),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1824),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1824),
    [sym_comment] = ACTIONS(38),
  },
  [781] = {
    [ts_builtin_sym_end] = ACTIONS(1797),
    [anon_sym_SEMI] = ACTIONS(1826),
    [anon_sym_using] = ACTIONS(1797),
    [anon_sym_namespace] = ACTIONS(1797),
    [anon_sym_RBRACE] = ACTIONS(1797),
    [anon_sym_partial] = ACTIONS(1797),
    [anon_sym_class] = ACTIONS(1797),
    [anon_sym_unsafe] = ACTIONS(1797),
    [anon_sym_abstract] = ACTIONS(1797),
    [anon_sym_sealed] = ACTIONS(1797),
    [anon_sym_static] = ACTIONS(1797),
    [anon_sym_new] = ACTIONS(1797),
    [anon_sym_public] = ACTIONS(1797),
    [anon_sym_protected] = ACTIONS(1797),
    [anon_sym_internal] = ACTIONS(1797),
    [anon_sym_private] = ACTIONS(1797),
    [anon_sym_interface] = ACTIONS(1797),
    [anon_sym_struct] = ACTIONS(1797),
    [anon_sym_enum] = ACTIONS(1797),
    [anon_sym_delegate] = ACTIONS(1797),
    [anon_sym_LBRACK] = ACTIONS(1797),
    [sym_comment] = ACTIONS(38),
  },
  [782] = {
    [ts_builtin_sym_end] = ACTIONS(1828),
    [anon_sym_using] = ACTIONS(1828),
    [anon_sym_namespace] = ACTIONS(1828),
    [anon_sym_RBRACE] = ACTIONS(1828),
    [anon_sym_partial] = ACTIONS(1828),
    [anon_sym_class] = ACTIONS(1828),
    [anon_sym_unsafe] = ACTIONS(1828),
    [anon_sym_abstract] = ACTIONS(1828),
    [anon_sym_sealed] = ACTIONS(1828),
    [anon_sym_static] = ACTIONS(1828),
    [anon_sym_new] = ACTIONS(1828),
    [anon_sym_public] = ACTIONS(1828),
    [anon_sym_protected] = ACTIONS(1828),
    [anon_sym_internal] = ACTIONS(1828),
    [anon_sym_private] = ACTIONS(1828),
    [anon_sym_interface] = ACTIONS(1828),
    [anon_sym_struct] = ACTIONS(1828),
    [anon_sym_enum] = ACTIONS(1828),
    [anon_sym_delegate] = ACTIONS(1828),
    [anon_sym_LBRACK] = ACTIONS(1828),
    [sym_comment] = ACTIONS(38),
  },
  [783] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1830),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [784] = {
    [anon_sym_RBRACE] = ACTIONS(1129),
    [anon_sym_partial] = ACTIONS(1832),
    [anon_sym_class] = ACTIONS(1832),
    [anon_sym_unsafe] = ACTIONS(1832),
    [anon_sym_abstract] = ACTIONS(1832),
    [anon_sym_sealed] = ACTIONS(1832),
    [anon_sym_static] = ACTIONS(1832),
    [anon_sym_new] = ACTIONS(1832),
    [anon_sym_public] = ACTIONS(1832),
    [anon_sym_protected] = ACTIONS(1832),
    [anon_sym_internal] = ACTIONS(1832),
    [anon_sym_private] = ACTIONS(1832),
    [anon_sym_interface] = ACTIONS(1832),
    [anon_sym_struct] = ACTIONS(1832),
    [anon_sym_enum] = ACTIONS(1832),
    [anon_sym_sbyte] = ACTIONS(1832),
    [anon_sym_byte] = ACTIONS(1832),
    [anon_sym_short] = ACTIONS(1832),
    [anon_sym_ushort] = ACTIONS(1832),
    [anon_sym_int] = ACTIONS(1832),
    [anon_sym_uint] = ACTIONS(1832),
    [anon_sym_long] = ACTIONS(1832),
    [anon_sym_ulong] = ACTIONS(1832),
    [anon_sym_char] = ACTIONS(1832),
    [anon_sym_delegate] = ACTIONS(1832),
    [sym_void_keyword] = ACTIONS(1832),
    [anon_sym_LBRACK] = ACTIONS(1129),
    [sym_const_keyword] = ACTIONS(1832),
    [anon_sym_readonly] = ACTIONS(1832),
    [anon_sym_volatile] = ACTIONS(1832),
    [anon_sym_bool] = ACTIONS(1832),
    [anon_sym_decimal] = ACTIONS(1832),
    [anon_sym_double] = ACTIONS(1832),
    [anon_sym_float] = ACTIONS(1832),
    [anon_sym_object] = ACTIONS(1832),
    [anon_sym_string] = ACTIONS(1832),
    [sym_identifier_name] = ACTIONS(1832),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1832),
  },
  [785] = {
    [anon_sym_RBRACE] = ACTIONS(1368),
    [anon_sym_partial] = ACTIONS(1834),
    [anon_sym_class] = ACTIONS(1834),
    [anon_sym_unsafe] = ACTIONS(1834),
    [anon_sym_abstract] = ACTIONS(1834),
    [anon_sym_sealed] = ACTIONS(1834),
    [anon_sym_static] = ACTIONS(1834),
    [anon_sym_new] = ACTIONS(1834),
    [anon_sym_public] = ACTIONS(1834),
    [anon_sym_protected] = ACTIONS(1834),
    [anon_sym_internal] = ACTIONS(1834),
    [anon_sym_private] = ACTIONS(1834),
    [anon_sym_interface] = ACTIONS(1834),
    [anon_sym_struct] = ACTIONS(1834),
    [anon_sym_enum] = ACTIONS(1834),
    [anon_sym_sbyte] = ACTIONS(1834),
    [anon_sym_byte] = ACTIONS(1834),
    [anon_sym_short] = ACTIONS(1834),
    [anon_sym_ushort] = ACTIONS(1834),
    [anon_sym_int] = ACTIONS(1834),
    [anon_sym_uint] = ACTIONS(1834),
    [anon_sym_long] = ACTIONS(1834),
    [anon_sym_ulong] = ACTIONS(1834),
    [anon_sym_char] = ACTIONS(1834),
    [anon_sym_delegate] = ACTIONS(1834),
    [sym_void_keyword] = ACTIONS(1834),
    [anon_sym_LBRACK] = ACTIONS(1368),
    [sym_const_keyword] = ACTIONS(1834),
    [anon_sym_readonly] = ACTIONS(1834),
    [anon_sym_volatile] = ACTIONS(1834),
    [anon_sym_bool] = ACTIONS(1834),
    [anon_sym_decimal] = ACTIONS(1834),
    [anon_sym_double] = ACTIONS(1834),
    [anon_sym_float] = ACTIONS(1834),
    [anon_sym_object] = ACTIONS(1834),
    [anon_sym_string] = ACTIONS(1834),
    [sym_identifier_name] = ACTIONS(1834),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1834),
  },
  [786] = {
    [anon_sym_SEMI] = ACTIONS(1836),
    [anon_sym_RBRACE] = ACTIONS(1368),
    [anon_sym_partial] = ACTIONS(1834),
    [anon_sym_class] = ACTIONS(1834),
    [anon_sym_unsafe] = ACTIONS(1834),
    [anon_sym_abstract] = ACTIONS(1834),
    [anon_sym_sealed] = ACTIONS(1834),
    [anon_sym_static] = ACTIONS(1834),
    [anon_sym_new] = ACTIONS(1834),
    [anon_sym_public] = ACTIONS(1834),
    [anon_sym_protected] = ACTIONS(1834),
    [anon_sym_internal] = ACTIONS(1834),
    [anon_sym_private] = ACTIONS(1834),
    [anon_sym_interface] = ACTIONS(1834),
    [anon_sym_struct] = ACTIONS(1834),
    [anon_sym_enum] = ACTIONS(1834),
    [anon_sym_sbyte] = ACTIONS(1834),
    [anon_sym_byte] = ACTIONS(1834),
    [anon_sym_short] = ACTIONS(1834),
    [anon_sym_ushort] = ACTIONS(1834),
    [anon_sym_int] = ACTIONS(1834),
    [anon_sym_uint] = ACTIONS(1834),
    [anon_sym_long] = ACTIONS(1834),
    [anon_sym_ulong] = ACTIONS(1834),
    [anon_sym_char] = ACTIONS(1834),
    [anon_sym_delegate] = ACTIONS(1834),
    [sym_void_keyword] = ACTIONS(1834),
    [anon_sym_LBRACK] = ACTIONS(1368),
    [sym_const_keyword] = ACTIONS(1834),
    [anon_sym_readonly] = ACTIONS(1834),
    [anon_sym_volatile] = ACTIONS(1834),
    [anon_sym_bool] = ACTIONS(1834),
    [anon_sym_decimal] = ACTIONS(1834),
    [anon_sym_double] = ACTIONS(1834),
    [anon_sym_float] = ACTIONS(1834),
    [anon_sym_object] = ACTIONS(1834),
    [anon_sym_string] = ACTIONS(1834),
    [sym_identifier_name] = ACTIONS(1834),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1834),
  },
  [787] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1838),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [788] = {
    [sym__expression] = STATE(839),
    [sym_parenthesized_expression] = STATE(839),
    [sym_ternary_expression] = STATE(839),
    [sym_binary_expression] = STATE(839),
    [sym_unary_expression] = STATE(839),
    [sym__literal] = STATE(839),
    [sym_boolean_literal] = STATE(839),
    [sym_character_literal] = STATE(839),
    [sym_integer_literal] = STATE(839),
    [sym_real_literal] = STATE(839),
    [sym_string_literal] = STATE(839),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(924),
    [anon_sym_BANG] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_DASH_DASH] = ACTIONS(926),
    [anon_sym_PLUS_PLUS] = ACTIONS(926),
    [anon_sym_typeof] = ACTIONS(924),
    [anon_sym_sizeof] = ACTIONS(924),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1840),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1840),
    [sym_comment] = ACTIONS(38),
  },
  [789] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1842),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [790] = {
    [anon_sym_RBRACE] = ACTIONS(1403),
    [anon_sym_partial] = ACTIONS(1844),
    [anon_sym_class] = ACTIONS(1844),
    [anon_sym_unsafe] = ACTIONS(1844),
    [anon_sym_abstract] = ACTIONS(1844),
    [anon_sym_sealed] = ACTIONS(1844),
    [anon_sym_static] = ACTIONS(1844),
    [anon_sym_new] = ACTIONS(1844),
    [anon_sym_public] = ACTIONS(1844),
    [anon_sym_protected] = ACTIONS(1844),
    [anon_sym_internal] = ACTIONS(1844),
    [anon_sym_private] = ACTIONS(1844),
    [anon_sym_interface] = ACTIONS(1844),
    [anon_sym_struct] = ACTIONS(1844),
    [anon_sym_enum] = ACTIONS(1844),
    [anon_sym_sbyte] = ACTIONS(1844),
    [anon_sym_byte] = ACTIONS(1844),
    [anon_sym_short] = ACTIONS(1844),
    [anon_sym_ushort] = ACTIONS(1844),
    [anon_sym_int] = ACTIONS(1844),
    [anon_sym_uint] = ACTIONS(1844),
    [anon_sym_long] = ACTIONS(1844),
    [anon_sym_ulong] = ACTIONS(1844),
    [anon_sym_char] = ACTIONS(1844),
    [anon_sym_delegate] = ACTIONS(1844),
    [sym_void_keyword] = ACTIONS(1844),
    [anon_sym_LBRACK] = ACTIONS(1403),
    [sym_const_keyword] = ACTIONS(1844),
    [anon_sym_readonly] = ACTIONS(1844),
    [anon_sym_volatile] = ACTIONS(1844),
    [anon_sym_bool] = ACTIONS(1844),
    [anon_sym_decimal] = ACTIONS(1844),
    [anon_sym_double] = ACTIONS(1844),
    [anon_sym_float] = ACTIONS(1844),
    [anon_sym_object] = ACTIONS(1844),
    [anon_sym_string] = ACTIONS(1844),
    [sym_identifier_name] = ACTIONS(1844),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1844),
  },
  [791] = {
    [anon_sym_RBRACE] = ACTIONS(1405),
    [anon_sym_partial] = ACTIONS(1846),
    [anon_sym_class] = ACTIONS(1846),
    [anon_sym_unsafe] = ACTIONS(1846),
    [anon_sym_abstract] = ACTIONS(1846),
    [anon_sym_sealed] = ACTIONS(1846),
    [anon_sym_static] = ACTIONS(1846),
    [anon_sym_new] = ACTIONS(1846),
    [anon_sym_public] = ACTIONS(1846),
    [anon_sym_protected] = ACTIONS(1846),
    [anon_sym_internal] = ACTIONS(1846),
    [anon_sym_private] = ACTIONS(1846),
    [anon_sym_interface] = ACTIONS(1846),
    [anon_sym_struct] = ACTIONS(1846),
    [anon_sym_enum] = ACTIONS(1846),
    [anon_sym_sbyte] = ACTIONS(1846),
    [anon_sym_byte] = ACTIONS(1846),
    [anon_sym_short] = ACTIONS(1846),
    [anon_sym_ushort] = ACTIONS(1846),
    [anon_sym_int] = ACTIONS(1846),
    [anon_sym_uint] = ACTIONS(1846),
    [anon_sym_long] = ACTIONS(1846),
    [anon_sym_ulong] = ACTIONS(1846),
    [anon_sym_char] = ACTIONS(1846),
    [anon_sym_delegate] = ACTIONS(1846),
    [sym_void_keyword] = ACTIONS(1846),
    [anon_sym_LBRACK] = ACTIONS(1405),
    [sym_const_keyword] = ACTIONS(1846),
    [anon_sym_readonly] = ACTIONS(1846),
    [anon_sym_volatile] = ACTIONS(1846),
    [anon_sym_bool] = ACTIONS(1846),
    [anon_sym_decimal] = ACTIONS(1846),
    [anon_sym_double] = ACTIONS(1846),
    [anon_sym_float] = ACTIONS(1846),
    [anon_sym_object] = ACTIONS(1846),
    [anon_sym_string] = ACTIONS(1846),
    [sym_identifier_name] = ACTIONS(1846),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1846),
  },
  [792] = {
    [aux_sym_enum_declaration_repeat1] = STATE(841),
    [anon_sym_RBRACE] = ACTIONS(1838),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [793] = {
    [anon_sym_RBRACE] = ACTIONS(1848),
    [anon_sym_partial] = ACTIONS(1850),
    [anon_sym_class] = ACTIONS(1850),
    [anon_sym_unsafe] = ACTIONS(1850),
    [anon_sym_abstract] = ACTIONS(1850),
    [anon_sym_sealed] = ACTIONS(1850),
    [anon_sym_static] = ACTIONS(1850),
    [anon_sym_new] = ACTIONS(1850),
    [anon_sym_public] = ACTIONS(1850),
    [anon_sym_protected] = ACTIONS(1850),
    [anon_sym_internal] = ACTIONS(1850),
    [anon_sym_private] = ACTIONS(1850),
    [anon_sym_interface] = ACTIONS(1850),
    [anon_sym_struct] = ACTIONS(1850),
    [anon_sym_enum] = ACTIONS(1850),
    [anon_sym_sbyte] = ACTIONS(1850),
    [anon_sym_byte] = ACTIONS(1850),
    [anon_sym_short] = ACTIONS(1850),
    [anon_sym_ushort] = ACTIONS(1850),
    [anon_sym_int] = ACTIONS(1850),
    [anon_sym_uint] = ACTIONS(1850),
    [anon_sym_long] = ACTIONS(1850),
    [anon_sym_ulong] = ACTIONS(1850),
    [anon_sym_char] = ACTIONS(1850),
    [anon_sym_delegate] = ACTIONS(1850),
    [sym_void_keyword] = ACTIONS(1850),
    [anon_sym_LBRACK] = ACTIONS(1848),
    [sym_const_keyword] = ACTIONS(1850),
    [anon_sym_readonly] = ACTIONS(1850),
    [anon_sym_volatile] = ACTIONS(1850),
    [anon_sym_bool] = ACTIONS(1850),
    [anon_sym_decimal] = ACTIONS(1850),
    [anon_sym_double] = ACTIONS(1850),
    [anon_sym_float] = ACTIONS(1850),
    [anon_sym_object] = ACTIONS(1850),
    [anon_sym_string] = ACTIONS(1850),
    [sym_identifier_name] = ACTIONS(1850),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1850),
  },
  [794] = {
    [sym__type_declaration] = STATE(842),
    [sym_class_declaration] = STATE(842),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(842),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(842),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(842),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(842),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(842),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(842),
    [sym_method_declaration] = STATE(842),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(842),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1842),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [795] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1852),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [796] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1854),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [797] = {
    [sym_enum_member_declaration] = STATE(845),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [798] = {
    [anon_sym_RBRACE] = ACTIONS(1411),
    [anon_sym_partial] = ACTIONS(1856),
    [anon_sym_class] = ACTIONS(1856),
    [anon_sym_unsafe] = ACTIONS(1856),
    [anon_sym_abstract] = ACTIONS(1856),
    [anon_sym_sealed] = ACTIONS(1856),
    [anon_sym_static] = ACTIONS(1856),
    [anon_sym_new] = ACTIONS(1856),
    [anon_sym_public] = ACTIONS(1856),
    [anon_sym_protected] = ACTIONS(1856),
    [anon_sym_internal] = ACTIONS(1856),
    [anon_sym_private] = ACTIONS(1856),
    [anon_sym_interface] = ACTIONS(1856),
    [anon_sym_struct] = ACTIONS(1856),
    [anon_sym_enum] = ACTIONS(1856),
    [anon_sym_sbyte] = ACTIONS(1856),
    [anon_sym_byte] = ACTIONS(1856),
    [anon_sym_short] = ACTIONS(1856),
    [anon_sym_ushort] = ACTIONS(1856),
    [anon_sym_int] = ACTIONS(1856),
    [anon_sym_uint] = ACTIONS(1856),
    [anon_sym_long] = ACTIONS(1856),
    [anon_sym_ulong] = ACTIONS(1856),
    [anon_sym_char] = ACTIONS(1856),
    [anon_sym_delegate] = ACTIONS(1856),
    [sym_void_keyword] = ACTIONS(1856),
    [anon_sym_LBRACK] = ACTIONS(1411),
    [sym_const_keyword] = ACTIONS(1856),
    [anon_sym_readonly] = ACTIONS(1856),
    [anon_sym_volatile] = ACTIONS(1856),
    [anon_sym_bool] = ACTIONS(1856),
    [anon_sym_decimal] = ACTIONS(1856),
    [anon_sym_double] = ACTIONS(1856),
    [anon_sym_float] = ACTIONS(1856),
    [anon_sym_object] = ACTIONS(1856),
    [anon_sym_string] = ACTIONS(1856),
    [sym_identifier_name] = ACTIONS(1856),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1856),
  },
  [799] = {
    [sym_statement_block] = STATE(846),
    [anon_sym_LBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(38),
  },
  [800] = {
    [sym__expression] = STATE(847),
    [sym_parenthesized_expression] = STATE(847),
    [sym_ternary_expression] = STATE(847),
    [sym_binary_expression] = STATE(847),
    [sym_unary_expression] = STATE(847),
    [sym__literal] = STATE(847),
    [sym_boolean_literal] = STATE(847),
    [sym_character_literal] = STATE(847),
    [sym_integer_literal] = STATE(847),
    [sym_real_literal] = STATE(847),
    [sym_string_literal] = STATE(847),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(958),
    [anon_sym_DASH] = ACTIONS(958),
    [anon_sym_BANG] = ACTIONS(960),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_DASH_DASH] = ACTIONS(960),
    [anon_sym_PLUS_PLUS] = ACTIONS(960),
    [anon_sym_typeof] = ACTIONS(958),
    [anon_sym_sizeof] = ACTIONS(958),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1858),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1858),
    [sym_comment] = ACTIONS(38),
  },
  [801] = {
    [anon_sym_RBRACE] = ACTIONS(1129),
    [anon_sym_partial] = ACTIONS(1832),
    [anon_sym_class] = ACTIONS(1832),
    [anon_sym_unsafe] = ACTIONS(1832),
    [anon_sym_abstract] = ACTIONS(1832),
    [anon_sym_sealed] = ACTIONS(1832),
    [anon_sym_static] = ACTIONS(1832),
    [anon_sym_new] = ACTIONS(1832),
    [anon_sym_public] = ACTIONS(1832),
    [anon_sym_protected] = ACTIONS(1832),
    [anon_sym_internal] = ACTIONS(1832),
    [anon_sym_private] = ACTIONS(1832),
    [anon_sym_interface] = ACTIONS(1832),
    [anon_sym_struct] = ACTIONS(1832),
    [anon_sym_enum] = ACTIONS(1832),
    [anon_sym_sbyte] = ACTIONS(1832),
    [anon_sym_byte] = ACTIONS(1832),
    [anon_sym_short] = ACTIONS(1832),
    [anon_sym_ushort] = ACTIONS(1832),
    [anon_sym_int] = ACTIONS(1832),
    [anon_sym_uint] = ACTIONS(1832),
    [anon_sym_long] = ACTIONS(1832),
    [anon_sym_ulong] = ACTIONS(1832),
    [anon_sym_char] = ACTIONS(1832),
    [anon_sym_delegate] = ACTIONS(1832),
    [anon_sym_LBRACK] = ACTIONS(1129),
    [sym_const_keyword] = ACTIONS(1832),
    [anon_sym_readonly] = ACTIONS(1832),
    [anon_sym_volatile] = ACTIONS(1832),
    [anon_sym_bool] = ACTIONS(1832),
    [anon_sym_decimal] = ACTIONS(1832),
    [anon_sym_double] = ACTIONS(1832),
    [anon_sym_float] = ACTIONS(1832),
    [anon_sym_object] = ACTIONS(1832),
    [anon_sym_string] = ACTIONS(1832),
    [sym_identifier_name] = ACTIONS(1832),
    [sym_comment] = ACTIONS(38),
  },
  [802] = {
    [anon_sym_RBRACE] = ACTIONS(1368),
    [anon_sym_partial] = ACTIONS(1834),
    [anon_sym_class] = ACTIONS(1834),
    [anon_sym_unsafe] = ACTIONS(1834),
    [anon_sym_abstract] = ACTIONS(1834),
    [anon_sym_sealed] = ACTIONS(1834),
    [anon_sym_static] = ACTIONS(1834),
    [anon_sym_new] = ACTIONS(1834),
    [anon_sym_public] = ACTIONS(1834),
    [anon_sym_protected] = ACTIONS(1834),
    [anon_sym_internal] = ACTIONS(1834),
    [anon_sym_private] = ACTIONS(1834),
    [anon_sym_interface] = ACTIONS(1834),
    [anon_sym_struct] = ACTIONS(1834),
    [anon_sym_enum] = ACTIONS(1834),
    [anon_sym_sbyte] = ACTIONS(1834),
    [anon_sym_byte] = ACTIONS(1834),
    [anon_sym_short] = ACTIONS(1834),
    [anon_sym_ushort] = ACTIONS(1834),
    [anon_sym_int] = ACTIONS(1834),
    [anon_sym_uint] = ACTIONS(1834),
    [anon_sym_long] = ACTIONS(1834),
    [anon_sym_ulong] = ACTIONS(1834),
    [anon_sym_char] = ACTIONS(1834),
    [anon_sym_delegate] = ACTIONS(1834),
    [anon_sym_LBRACK] = ACTIONS(1368),
    [sym_const_keyword] = ACTIONS(1834),
    [anon_sym_readonly] = ACTIONS(1834),
    [anon_sym_volatile] = ACTIONS(1834),
    [anon_sym_bool] = ACTIONS(1834),
    [anon_sym_decimal] = ACTIONS(1834),
    [anon_sym_double] = ACTIONS(1834),
    [anon_sym_float] = ACTIONS(1834),
    [anon_sym_object] = ACTIONS(1834),
    [anon_sym_string] = ACTIONS(1834),
    [sym_identifier_name] = ACTIONS(1834),
    [sym_comment] = ACTIONS(38),
  },
  [803] = {
    [anon_sym_SEMI] = ACTIONS(1860),
    [anon_sym_RBRACE] = ACTIONS(1368),
    [anon_sym_partial] = ACTIONS(1834),
    [anon_sym_class] = ACTIONS(1834),
    [anon_sym_unsafe] = ACTIONS(1834),
    [anon_sym_abstract] = ACTIONS(1834),
    [anon_sym_sealed] = ACTIONS(1834),
    [anon_sym_static] = ACTIONS(1834),
    [anon_sym_new] = ACTIONS(1834),
    [anon_sym_public] = ACTIONS(1834),
    [anon_sym_protected] = ACTIONS(1834),
    [anon_sym_internal] = ACTIONS(1834),
    [anon_sym_private] = ACTIONS(1834),
    [anon_sym_interface] = ACTIONS(1834),
    [anon_sym_struct] = ACTIONS(1834),
    [anon_sym_enum] = ACTIONS(1834),
    [anon_sym_sbyte] = ACTIONS(1834),
    [anon_sym_byte] = ACTIONS(1834),
    [anon_sym_short] = ACTIONS(1834),
    [anon_sym_ushort] = ACTIONS(1834),
    [anon_sym_int] = ACTIONS(1834),
    [anon_sym_uint] = ACTIONS(1834),
    [anon_sym_long] = ACTIONS(1834),
    [anon_sym_ulong] = ACTIONS(1834),
    [anon_sym_char] = ACTIONS(1834),
    [anon_sym_delegate] = ACTIONS(1834),
    [anon_sym_LBRACK] = ACTIONS(1368),
    [sym_const_keyword] = ACTIONS(1834),
    [anon_sym_readonly] = ACTIONS(1834),
    [anon_sym_volatile] = ACTIONS(1834),
    [anon_sym_bool] = ACTIONS(1834),
    [anon_sym_decimal] = ACTIONS(1834),
    [anon_sym_double] = ACTIONS(1834),
    [anon_sym_float] = ACTIONS(1834),
    [anon_sym_object] = ACTIONS(1834),
    [anon_sym_string] = ACTIONS(1834),
    [sym_identifier_name] = ACTIONS(1834),
    [sym_comment] = ACTIONS(38),
  },
  [804] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1862),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [805] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1864),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [806] = {
    [anon_sym_RBRACE] = ACTIONS(1403),
    [anon_sym_partial] = ACTIONS(1844),
    [anon_sym_class] = ACTIONS(1844),
    [anon_sym_unsafe] = ACTIONS(1844),
    [anon_sym_abstract] = ACTIONS(1844),
    [anon_sym_sealed] = ACTIONS(1844),
    [anon_sym_static] = ACTIONS(1844),
    [anon_sym_new] = ACTIONS(1844),
    [anon_sym_public] = ACTIONS(1844),
    [anon_sym_protected] = ACTIONS(1844),
    [anon_sym_internal] = ACTIONS(1844),
    [anon_sym_private] = ACTIONS(1844),
    [anon_sym_interface] = ACTIONS(1844),
    [anon_sym_struct] = ACTIONS(1844),
    [anon_sym_enum] = ACTIONS(1844),
    [anon_sym_sbyte] = ACTIONS(1844),
    [anon_sym_byte] = ACTIONS(1844),
    [anon_sym_short] = ACTIONS(1844),
    [anon_sym_ushort] = ACTIONS(1844),
    [anon_sym_int] = ACTIONS(1844),
    [anon_sym_uint] = ACTIONS(1844),
    [anon_sym_long] = ACTIONS(1844),
    [anon_sym_ulong] = ACTIONS(1844),
    [anon_sym_char] = ACTIONS(1844),
    [anon_sym_delegate] = ACTIONS(1844),
    [anon_sym_LBRACK] = ACTIONS(1403),
    [sym_const_keyword] = ACTIONS(1844),
    [anon_sym_readonly] = ACTIONS(1844),
    [anon_sym_volatile] = ACTIONS(1844),
    [anon_sym_bool] = ACTIONS(1844),
    [anon_sym_decimal] = ACTIONS(1844),
    [anon_sym_double] = ACTIONS(1844),
    [anon_sym_float] = ACTIONS(1844),
    [anon_sym_object] = ACTIONS(1844),
    [anon_sym_string] = ACTIONS(1844),
    [sym_identifier_name] = ACTIONS(1844),
    [sym_comment] = ACTIONS(38),
  },
  [807] = {
    [anon_sym_RBRACE] = ACTIONS(1405),
    [anon_sym_partial] = ACTIONS(1846),
    [anon_sym_class] = ACTIONS(1846),
    [anon_sym_unsafe] = ACTIONS(1846),
    [anon_sym_abstract] = ACTIONS(1846),
    [anon_sym_sealed] = ACTIONS(1846),
    [anon_sym_static] = ACTIONS(1846),
    [anon_sym_new] = ACTIONS(1846),
    [anon_sym_public] = ACTIONS(1846),
    [anon_sym_protected] = ACTIONS(1846),
    [anon_sym_internal] = ACTIONS(1846),
    [anon_sym_private] = ACTIONS(1846),
    [anon_sym_interface] = ACTIONS(1846),
    [anon_sym_struct] = ACTIONS(1846),
    [anon_sym_enum] = ACTIONS(1846),
    [anon_sym_sbyte] = ACTIONS(1846),
    [anon_sym_byte] = ACTIONS(1846),
    [anon_sym_short] = ACTIONS(1846),
    [anon_sym_ushort] = ACTIONS(1846),
    [anon_sym_int] = ACTIONS(1846),
    [anon_sym_uint] = ACTIONS(1846),
    [anon_sym_long] = ACTIONS(1846),
    [anon_sym_ulong] = ACTIONS(1846),
    [anon_sym_char] = ACTIONS(1846),
    [anon_sym_delegate] = ACTIONS(1846),
    [anon_sym_LBRACK] = ACTIONS(1405),
    [sym_const_keyword] = ACTIONS(1846),
    [anon_sym_readonly] = ACTIONS(1846),
    [anon_sym_volatile] = ACTIONS(1846),
    [anon_sym_bool] = ACTIONS(1846),
    [anon_sym_decimal] = ACTIONS(1846),
    [anon_sym_double] = ACTIONS(1846),
    [anon_sym_float] = ACTIONS(1846),
    [anon_sym_object] = ACTIONS(1846),
    [anon_sym_string] = ACTIONS(1846),
    [sym_identifier_name] = ACTIONS(1846),
    [sym_comment] = ACTIONS(38),
  },
  [808] = {
    [aux_sym_enum_declaration_repeat1] = STATE(851),
    [anon_sym_RBRACE] = ACTIONS(1862),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [809] = {
    [sym__type_declaration] = STATE(852),
    [sym_class_declaration] = STATE(852),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(852),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(852),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(852),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(852),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(852),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(852),
    [sym_method_declaration] = STATE(852),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(852),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1864),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [810] = {
    [sym__attributes] = STATE(159),
    [sym__attribute_section] = STATE(164),
    [sym_field_declaration] = STATE(259),
    [sym_field_modifiers] = STATE(160),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(161),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_interface_declaration_repeat1] = STATE(259),
    [aux_sym__attributes_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(1866),
    [anon_sym_unsafe] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_public] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(283),
    [anon_sym_internal] = ACTIONS(283),
    [anon_sym_private] = ACTIONS(283),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_const_keyword] = ACTIONS(293),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [811] = {
    [sym__type_declaration] = STATE(284),
    [sym_class_declaration] = STATE(284),
    [sym_class_modifiers] = STATE(176),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(284),
    [sym_interface_modifiers] = STATE(177),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(284),
    [sym_struct_modifiers] = STATE(178),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(284),
    [sym_enum_modifiers] = STATE(179),
    [sym_delegate_declaration] = STATE(284),
    [sym_delegate_modifier] = STATE(180),
    [sym__attributes] = STATE(181),
    [sym__attribute_section] = STATE(185),
    [sym_field_declaration] = STATE(284),
    [sym_field_modifiers] = STATE(182),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(183),
    [sym__type] = STATE(162),
    [sym_generic_name] = STATE(162),
    [sym_predefined_type] = STATE(162),
    [aux_sym_struct_declaration_repeat1] = STATE(284),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_RBRACE] = ACTIONS(1868),
    [anon_sym_partial] = ACTIONS(299),
    [anon_sym_class] = ACTIONS(301),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_internal] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_const_keyword] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [812] = {
    [sym_enum_member_declaration] = STATE(855),
    [sym__attributes] = STATE(190),
    [sym__attribute_section] = STATE(191),
    [aux_sym__attributes_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_identifier_name] = ACTIONS(321),
    [sym_comment] = ACTIONS(38),
  },
  [813] = {
    [anon_sym_RBRACE] = ACTIONS(1411),
    [anon_sym_partial] = ACTIONS(1856),
    [anon_sym_class] = ACTIONS(1856),
    [anon_sym_unsafe] = ACTIONS(1856),
    [anon_sym_abstract] = ACTIONS(1856),
    [anon_sym_sealed] = ACTIONS(1856),
    [anon_sym_static] = ACTIONS(1856),
    [anon_sym_new] = ACTIONS(1856),
    [anon_sym_public] = ACTIONS(1856),
    [anon_sym_protected] = ACTIONS(1856),
    [anon_sym_internal] = ACTIONS(1856),
    [anon_sym_private] = ACTIONS(1856),
    [anon_sym_interface] = ACTIONS(1856),
    [anon_sym_struct] = ACTIONS(1856),
    [anon_sym_enum] = ACTIONS(1856),
    [anon_sym_sbyte] = ACTIONS(1856),
    [anon_sym_byte] = ACTIONS(1856),
    [anon_sym_short] = ACTIONS(1856),
    [anon_sym_ushort] = ACTIONS(1856),
    [anon_sym_int] = ACTIONS(1856),
    [anon_sym_uint] = ACTIONS(1856),
    [anon_sym_long] = ACTIONS(1856),
    [anon_sym_ulong] = ACTIONS(1856),
    [anon_sym_char] = ACTIONS(1856),
    [anon_sym_delegate] = ACTIONS(1856),
    [anon_sym_LBRACK] = ACTIONS(1411),
    [sym_const_keyword] = ACTIONS(1856),
    [anon_sym_readonly] = ACTIONS(1856),
    [anon_sym_volatile] = ACTIONS(1856),
    [anon_sym_bool] = ACTIONS(1856),
    [anon_sym_decimal] = ACTIONS(1856),
    [anon_sym_double] = ACTIONS(1856),
    [anon_sym_float] = ACTIONS(1856),
    [anon_sym_object] = ACTIONS(1856),
    [anon_sym_string] = ACTIONS(1856),
    [sym_identifier_name] = ACTIONS(1856),
    [sym_comment] = ACTIONS(38),
  },
  [814] = {
    [sym__expression] = STATE(856),
    [sym_parenthesized_expression] = STATE(856),
    [sym_ternary_expression] = STATE(856),
    [sym_binary_expression] = STATE(856),
    [sym_unary_expression] = STATE(856),
    [sym__literal] = STATE(856),
    [sym_boolean_literal] = STATE(856),
    [sym_character_literal] = STATE(856),
    [sym_integer_literal] = STATE(856),
    [sym_real_literal] = STATE(856),
    [sym_string_literal] = STATE(856),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1015),
    [anon_sym_TILDE] = ACTIONS(1015),
    [anon_sym_DASH_DASH] = ACTIONS(1015),
    [anon_sym_PLUS_PLUS] = ACTIONS(1015),
    [anon_sym_typeof] = ACTIONS(1013),
    [anon_sym_sizeof] = ACTIONS(1013),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1870),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1870),
    [sym_comment] = ACTIONS(38),
  },
  [815] = {
    [anon_sym_SEMI] = ACTIONS(1872),
    [anon_sym_RBRACE] = ACTIONS(1872),
    [anon_sym_COLON] = ACTIONS(1872),
    [anon_sym_COMMA] = ACTIONS(1872),
    [anon_sym_RPAREN] = ACTIONS(1872),
    [sym_params_keyword] = ACTIONS(1872),
    [anon_sym_LBRACK] = ACTIONS(1872),
    [anon_sym_QMARK] = ACTIONS(1872),
    [anon_sym_AMP_AMP] = ACTIONS(1872),
    [anon_sym_PIPE_PIPE] = ACTIONS(1872),
    [anon_sym_GT_GT] = ACTIONS(1872),
    [anon_sym_LT_LT] = ACTIONS(1872),
    [anon_sym_AMP] = ACTIONS(1874),
    [anon_sym_CARET] = ACTIONS(1872),
    [anon_sym_PIPE] = ACTIONS(1874),
    [anon_sym_PLUS] = ACTIONS(1872),
    [anon_sym_DASH] = ACTIONS(1872),
    [anon_sym_STAR] = ACTIONS(1872),
    [anon_sym_SLASH] = ACTIONS(1874),
    [anon_sym_PERCENT] = ACTIONS(1872),
    [anon_sym_LT] = ACTIONS(1874),
    [anon_sym_LT_EQ] = ACTIONS(1872),
    [anon_sym_EQ_EQ] = ACTIONS(1872),
    [anon_sym_BANG_EQ] = ACTIONS(1872),
    [anon_sym_GT_EQ] = ACTIONS(1872),
    [anon_sym_GT] = ACTIONS(1874),
    [sym_comment] = ACTIONS(38),
  },
  [816] = {
    [anon_sym_RBRACE] = ACTIONS(1876),
    [anon_sym_COMMA] = ACTIONS(1876),
    [anon_sym_QMARK] = ACTIONS(1051),
    [anon_sym_AMP_AMP] = ACTIONS(1053),
    [anon_sym_PIPE_PIPE] = ACTIONS(1055),
    [anon_sym_GT_GT] = ACTIONS(1057),
    [anon_sym_LT_LT] = ACTIONS(1057),
    [anon_sym_AMP] = ACTIONS(1059),
    [anon_sym_CARET] = ACTIONS(1061),
    [anon_sym_PIPE] = ACTIONS(1063),
    [anon_sym_PLUS] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1065),
    [anon_sym_STAR] = ACTIONS(1067),
    [anon_sym_SLASH] = ACTIONS(1069),
    [anon_sym_PERCENT] = ACTIONS(1067),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_LT_EQ] = ACTIONS(1073),
    [anon_sym_EQ_EQ] = ACTIONS(1075),
    [anon_sym_BANG_EQ] = ACTIONS(1075),
    [anon_sym_GT_EQ] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1071),
    [sym_comment] = ACTIONS(38),
  },
  [817] = {
    [anon_sym_COLON] = ACTIONS(1878),
    [anon_sym_QMARK] = ACTIONS(1622),
    [anon_sym_AMP_AMP] = ACTIONS(1624),
    [anon_sym_PIPE_PIPE] = ACTIONS(1626),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1630),
    [anon_sym_CARET] = ACTIONS(1632),
    [anon_sym_PIPE] = ACTIONS(1634),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [818] = {
    [anon_sym_COLON] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1630),
    [anon_sym_CARET] = ACTIONS(1632),
    [anon_sym_PIPE] = ACTIONS(1634),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [819] = {
    [anon_sym_COLON] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1624),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1630),
    [anon_sym_CARET] = ACTIONS(1632),
    [anon_sym_PIPE] = ACTIONS(1634),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [820] = {
    [anon_sym_COLON] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [821] = {
    [anon_sym_COLON] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [822] = {
    [anon_sym_COLON] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1630),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [823] = {
    [anon_sym_COLON] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1648),
    [anon_sym_DASH] = ACTIONS(1648),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [824] = {
    [anon_sym_COLON] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [825] = {
    [anon_sym_COLON] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [826] = {
    [anon_sym_COLON] = ACTIONS(1880),
    [anon_sym_QMARK] = ACTIONS(1622),
    [anon_sym_AMP_AMP] = ACTIONS(1624),
    [anon_sym_PIPE_PIPE] = ACTIONS(1626),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1630),
    [anon_sym_CARET] = ACTIONS(1632),
    [anon_sym_PIPE] = ACTIONS(1634),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [827] = {
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_RPAREN] = ACTIONS(1648),
    [sym_params_keyword] = ACTIONS(1648),
    [anon_sym_LBRACK] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1677),
    [anon_sym_LT_LT] = ACTIONS(1677),
    [anon_sym_AMP] = ACTIONS(1679),
    [anon_sym_CARET] = ACTIONS(1681),
    [anon_sym_PIPE] = ACTIONS(1683),
    [anon_sym_PLUS] = ACTIONS(1685),
    [anon_sym_DASH] = ACTIONS(1685),
    [anon_sym_STAR] = ACTIONS(1687),
    [anon_sym_SLASH] = ACTIONS(1689),
    [anon_sym_PERCENT] = ACTIONS(1687),
    [anon_sym_LT] = ACTIONS(1691),
    [anon_sym_LT_EQ] = ACTIONS(1693),
    [anon_sym_EQ_EQ] = ACTIONS(1695),
    [anon_sym_BANG_EQ] = ACTIONS(1695),
    [anon_sym_GT_EQ] = ACTIONS(1693),
    [anon_sym_GT] = ACTIONS(1691),
    [sym_comment] = ACTIONS(38),
  },
  [828] = {
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_RPAREN] = ACTIONS(1648),
    [sym_params_keyword] = ACTIONS(1648),
    [anon_sym_LBRACK] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1673),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1677),
    [anon_sym_LT_LT] = ACTIONS(1677),
    [anon_sym_AMP] = ACTIONS(1679),
    [anon_sym_CARET] = ACTIONS(1681),
    [anon_sym_PIPE] = ACTIONS(1683),
    [anon_sym_PLUS] = ACTIONS(1685),
    [anon_sym_DASH] = ACTIONS(1685),
    [anon_sym_STAR] = ACTIONS(1687),
    [anon_sym_SLASH] = ACTIONS(1689),
    [anon_sym_PERCENT] = ACTIONS(1687),
    [anon_sym_LT] = ACTIONS(1691),
    [anon_sym_LT_EQ] = ACTIONS(1693),
    [anon_sym_EQ_EQ] = ACTIONS(1695),
    [anon_sym_BANG_EQ] = ACTIONS(1695),
    [anon_sym_GT_EQ] = ACTIONS(1693),
    [anon_sym_GT] = ACTIONS(1691),
    [sym_comment] = ACTIONS(38),
  },
  [829] = {
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_RPAREN] = ACTIONS(1648),
    [sym_params_keyword] = ACTIONS(1648),
    [anon_sym_LBRACK] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1685),
    [anon_sym_DASH] = ACTIONS(1685),
    [anon_sym_STAR] = ACTIONS(1687),
    [anon_sym_SLASH] = ACTIONS(1689),
    [anon_sym_PERCENT] = ACTIONS(1687),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [830] = {
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_RPAREN] = ACTIONS(1648),
    [sym_params_keyword] = ACTIONS(1648),
    [anon_sym_LBRACK] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1677),
    [anon_sym_LT_LT] = ACTIONS(1677),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1685),
    [anon_sym_DASH] = ACTIONS(1685),
    [anon_sym_STAR] = ACTIONS(1687),
    [anon_sym_SLASH] = ACTIONS(1689),
    [anon_sym_PERCENT] = ACTIONS(1687),
    [anon_sym_LT] = ACTIONS(1691),
    [anon_sym_LT_EQ] = ACTIONS(1693),
    [anon_sym_EQ_EQ] = ACTIONS(1695),
    [anon_sym_BANG_EQ] = ACTIONS(1695),
    [anon_sym_GT_EQ] = ACTIONS(1693),
    [anon_sym_GT] = ACTIONS(1691),
    [sym_comment] = ACTIONS(38),
  },
  [831] = {
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_RPAREN] = ACTIONS(1648),
    [sym_params_keyword] = ACTIONS(1648),
    [anon_sym_LBRACK] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1677),
    [anon_sym_LT_LT] = ACTIONS(1677),
    [anon_sym_AMP] = ACTIONS(1679),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1685),
    [anon_sym_DASH] = ACTIONS(1685),
    [anon_sym_STAR] = ACTIONS(1687),
    [anon_sym_SLASH] = ACTIONS(1689),
    [anon_sym_PERCENT] = ACTIONS(1687),
    [anon_sym_LT] = ACTIONS(1691),
    [anon_sym_LT_EQ] = ACTIONS(1693),
    [anon_sym_EQ_EQ] = ACTIONS(1695),
    [anon_sym_BANG_EQ] = ACTIONS(1695),
    [anon_sym_GT_EQ] = ACTIONS(1693),
    [anon_sym_GT] = ACTIONS(1691),
    [sym_comment] = ACTIONS(38),
  },
  [832] = {
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_RPAREN] = ACTIONS(1648),
    [sym_params_keyword] = ACTIONS(1648),
    [anon_sym_LBRACK] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1648),
    [anon_sym_LT_LT] = ACTIONS(1648),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1648),
    [anon_sym_DASH] = ACTIONS(1648),
    [anon_sym_STAR] = ACTIONS(1687),
    [anon_sym_SLASH] = ACTIONS(1689),
    [anon_sym_PERCENT] = ACTIONS(1687),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [833] = {
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_RPAREN] = ACTIONS(1648),
    [sym_params_keyword] = ACTIONS(1648),
    [anon_sym_LBRACK] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1677),
    [anon_sym_LT_LT] = ACTIONS(1677),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1685),
    [anon_sym_DASH] = ACTIONS(1685),
    [anon_sym_STAR] = ACTIONS(1687),
    [anon_sym_SLASH] = ACTIONS(1689),
    [anon_sym_PERCENT] = ACTIONS(1687),
    [anon_sym_LT] = ACTIONS(1650),
    [anon_sym_LT_EQ] = ACTIONS(1648),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1648),
    [anon_sym_GT] = ACTIONS(1650),
    [sym_comment] = ACTIONS(38),
  },
  [834] = {
    [anon_sym_COMMA] = ACTIONS(1648),
    [anon_sym_RPAREN] = ACTIONS(1648),
    [sym_params_keyword] = ACTIONS(1648),
    [anon_sym_LBRACK] = ACTIONS(1648),
    [anon_sym_QMARK] = ACTIONS(1648),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_GT_GT] = ACTIONS(1677),
    [anon_sym_LT_LT] = ACTIONS(1677),
    [anon_sym_AMP] = ACTIONS(1650),
    [anon_sym_CARET] = ACTIONS(1648),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1685),
    [anon_sym_DASH] = ACTIONS(1685),
    [anon_sym_STAR] = ACTIONS(1687),
    [anon_sym_SLASH] = ACTIONS(1689),
    [anon_sym_PERCENT] = ACTIONS(1687),
    [anon_sym_LT] = ACTIONS(1691),
    [anon_sym_LT_EQ] = ACTIONS(1693),
    [anon_sym_EQ_EQ] = ACTIONS(1648),
    [anon_sym_BANG_EQ] = ACTIONS(1648),
    [anon_sym_GT_EQ] = ACTIONS(1693),
    [anon_sym_GT] = ACTIONS(1691),
    [sym_comment] = ACTIONS(38),
  },
  [835] = {
    [ts_builtin_sym_end] = ACTIONS(1882),
    [anon_sym_using] = ACTIONS(1882),
    [anon_sym_namespace] = ACTIONS(1882),
    [anon_sym_RBRACE] = ACTIONS(1882),
    [anon_sym_partial] = ACTIONS(1882),
    [anon_sym_class] = ACTIONS(1882),
    [anon_sym_unsafe] = ACTIONS(1882),
    [anon_sym_abstract] = ACTIONS(1882),
    [anon_sym_sealed] = ACTIONS(1882),
    [anon_sym_static] = ACTIONS(1882),
    [anon_sym_new] = ACTIONS(1882),
    [anon_sym_public] = ACTIONS(1882),
    [anon_sym_protected] = ACTIONS(1882),
    [anon_sym_internal] = ACTIONS(1882),
    [anon_sym_private] = ACTIONS(1882),
    [anon_sym_interface] = ACTIONS(1882),
    [anon_sym_struct] = ACTIONS(1882),
    [anon_sym_enum] = ACTIONS(1882),
    [anon_sym_delegate] = ACTIONS(1882),
    [anon_sym_LBRACK] = ACTIONS(1882),
    [sym_comment] = ACTIONS(38),
  },
  [836] = {
    [ts_builtin_sym_end] = ACTIONS(1882),
    [anon_sym_SEMI] = ACTIONS(1884),
    [anon_sym_using] = ACTIONS(1882),
    [anon_sym_namespace] = ACTIONS(1882),
    [anon_sym_RBRACE] = ACTIONS(1882),
    [anon_sym_partial] = ACTIONS(1882),
    [anon_sym_class] = ACTIONS(1882),
    [anon_sym_unsafe] = ACTIONS(1882),
    [anon_sym_abstract] = ACTIONS(1882),
    [anon_sym_sealed] = ACTIONS(1882),
    [anon_sym_static] = ACTIONS(1882),
    [anon_sym_new] = ACTIONS(1882),
    [anon_sym_public] = ACTIONS(1882),
    [anon_sym_protected] = ACTIONS(1882),
    [anon_sym_internal] = ACTIONS(1882),
    [anon_sym_private] = ACTIONS(1882),
    [anon_sym_interface] = ACTIONS(1882),
    [anon_sym_struct] = ACTIONS(1882),
    [anon_sym_enum] = ACTIONS(1882),
    [anon_sym_delegate] = ACTIONS(1882),
    [anon_sym_LBRACK] = ACTIONS(1882),
    [sym_comment] = ACTIONS(38),
  },
  [837] = {
    [anon_sym_RBRACE] = ACTIONS(1652),
    [anon_sym_partial] = ACTIONS(1886),
    [anon_sym_class] = ACTIONS(1886),
    [anon_sym_unsafe] = ACTIONS(1886),
    [anon_sym_abstract] = ACTIONS(1886),
    [anon_sym_sealed] = ACTIONS(1886),
    [anon_sym_static] = ACTIONS(1886),
    [anon_sym_new] = ACTIONS(1886),
    [anon_sym_public] = ACTIONS(1886),
    [anon_sym_protected] = ACTIONS(1886),
    [anon_sym_internal] = ACTIONS(1886),
    [anon_sym_private] = ACTIONS(1886),
    [anon_sym_interface] = ACTIONS(1886),
    [anon_sym_struct] = ACTIONS(1886),
    [anon_sym_enum] = ACTIONS(1886),
    [anon_sym_sbyte] = ACTIONS(1886),
    [anon_sym_byte] = ACTIONS(1886),
    [anon_sym_short] = ACTIONS(1886),
    [anon_sym_ushort] = ACTIONS(1886),
    [anon_sym_int] = ACTIONS(1886),
    [anon_sym_uint] = ACTIONS(1886),
    [anon_sym_long] = ACTIONS(1886),
    [anon_sym_ulong] = ACTIONS(1886),
    [anon_sym_char] = ACTIONS(1886),
    [anon_sym_delegate] = ACTIONS(1886),
    [sym_void_keyword] = ACTIONS(1886),
    [anon_sym_LBRACK] = ACTIONS(1652),
    [sym_const_keyword] = ACTIONS(1886),
    [anon_sym_readonly] = ACTIONS(1886),
    [anon_sym_volatile] = ACTIONS(1886),
    [anon_sym_bool] = ACTIONS(1886),
    [anon_sym_decimal] = ACTIONS(1886),
    [anon_sym_double] = ACTIONS(1886),
    [anon_sym_float] = ACTIONS(1886),
    [anon_sym_object] = ACTIONS(1886),
    [anon_sym_string] = ACTIONS(1886),
    [sym_identifier_name] = ACTIONS(1886),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1886),
  },
  [838] = {
    [anon_sym_SEMI] = ACTIONS(1888),
    [anon_sym_RBRACE] = ACTIONS(1652),
    [anon_sym_partial] = ACTIONS(1886),
    [anon_sym_class] = ACTIONS(1886),
    [anon_sym_unsafe] = ACTIONS(1886),
    [anon_sym_abstract] = ACTIONS(1886),
    [anon_sym_sealed] = ACTIONS(1886),
    [anon_sym_static] = ACTIONS(1886),
    [anon_sym_new] = ACTIONS(1886),
    [anon_sym_public] = ACTIONS(1886),
    [anon_sym_protected] = ACTIONS(1886),
    [anon_sym_internal] = ACTIONS(1886),
    [anon_sym_private] = ACTIONS(1886),
    [anon_sym_interface] = ACTIONS(1886),
    [anon_sym_struct] = ACTIONS(1886),
    [anon_sym_enum] = ACTIONS(1886),
    [anon_sym_sbyte] = ACTIONS(1886),
    [anon_sym_byte] = ACTIONS(1886),
    [anon_sym_short] = ACTIONS(1886),
    [anon_sym_ushort] = ACTIONS(1886),
    [anon_sym_int] = ACTIONS(1886),
    [anon_sym_uint] = ACTIONS(1886),
    [anon_sym_long] = ACTIONS(1886),
    [anon_sym_ulong] = ACTIONS(1886),
    [anon_sym_char] = ACTIONS(1886),
    [anon_sym_delegate] = ACTIONS(1886),
    [sym_void_keyword] = ACTIONS(1886),
    [anon_sym_LBRACK] = ACTIONS(1652),
    [sym_const_keyword] = ACTIONS(1886),
    [anon_sym_readonly] = ACTIONS(1886),
    [anon_sym_volatile] = ACTIONS(1886),
    [anon_sym_bool] = ACTIONS(1886),
    [anon_sym_decimal] = ACTIONS(1886),
    [anon_sym_double] = ACTIONS(1886),
    [anon_sym_float] = ACTIONS(1886),
    [anon_sym_object] = ACTIONS(1886),
    [anon_sym_string] = ACTIONS(1886),
    [sym_identifier_name] = ACTIONS(1886),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1886),
  },
  [839] = {
    [anon_sym_SEMI] = ACTIONS(1876),
    [anon_sym_QMARK] = ACTIONS(1169),
    [anon_sym_AMP_AMP] = ACTIONS(1171),
    [anon_sym_PIPE_PIPE] = ACTIONS(1173),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1177),
    [anon_sym_CARET] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1181),
    [anon_sym_PLUS] = ACTIONS(1183),
    [anon_sym_DASH] = ACTIONS(1183),
    [anon_sym_STAR] = ACTIONS(1185),
    [anon_sym_SLASH] = ACTIONS(1187),
    [anon_sym_PERCENT] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1189),
    [anon_sym_LT_EQ] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_GT_EQ] = ACTIONS(1191),
    [anon_sym_GT] = ACTIONS(1189),
    [sym_comment] = ACTIONS(38),
  },
  [840] = {
    [anon_sym_RBRACE] = ACTIONS(1697),
    [anon_sym_partial] = ACTIONS(1890),
    [anon_sym_class] = ACTIONS(1890),
    [anon_sym_unsafe] = ACTIONS(1890),
    [anon_sym_abstract] = ACTIONS(1890),
    [anon_sym_sealed] = ACTIONS(1890),
    [anon_sym_static] = ACTIONS(1890),
    [anon_sym_new] = ACTIONS(1890),
    [anon_sym_public] = ACTIONS(1890),
    [anon_sym_protected] = ACTIONS(1890),
    [anon_sym_internal] = ACTIONS(1890),
    [anon_sym_private] = ACTIONS(1890),
    [anon_sym_interface] = ACTIONS(1890),
    [anon_sym_struct] = ACTIONS(1890),
    [anon_sym_enum] = ACTIONS(1890),
    [anon_sym_sbyte] = ACTIONS(1890),
    [anon_sym_byte] = ACTIONS(1890),
    [anon_sym_short] = ACTIONS(1890),
    [anon_sym_ushort] = ACTIONS(1890),
    [anon_sym_int] = ACTIONS(1890),
    [anon_sym_uint] = ACTIONS(1890),
    [anon_sym_long] = ACTIONS(1890),
    [anon_sym_ulong] = ACTIONS(1890),
    [anon_sym_char] = ACTIONS(1890),
    [anon_sym_delegate] = ACTIONS(1890),
    [sym_void_keyword] = ACTIONS(1890),
    [anon_sym_LBRACK] = ACTIONS(1697),
    [sym_const_keyword] = ACTIONS(1890),
    [anon_sym_readonly] = ACTIONS(1890),
    [anon_sym_volatile] = ACTIONS(1890),
    [anon_sym_bool] = ACTIONS(1890),
    [anon_sym_decimal] = ACTIONS(1890),
    [anon_sym_double] = ACTIONS(1890),
    [anon_sym_float] = ACTIONS(1890),
    [anon_sym_object] = ACTIONS(1890),
    [anon_sym_string] = ACTIONS(1890),
    [sym_identifier_name] = ACTIONS(1890),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1890),
  },
  [841] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1892),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [842] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1894),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [843] = {
    [anon_sym_RBRACE] = ACTIONS(1703),
    [anon_sym_partial] = ACTIONS(1896),
    [anon_sym_class] = ACTIONS(1896),
    [anon_sym_unsafe] = ACTIONS(1896),
    [anon_sym_abstract] = ACTIONS(1896),
    [anon_sym_sealed] = ACTIONS(1896),
    [anon_sym_static] = ACTIONS(1896),
    [anon_sym_new] = ACTIONS(1896),
    [anon_sym_public] = ACTIONS(1896),
    [anon_sym_protected] = ACTIONS(1896),
    [anon_sym_internal] = ACTIONS(1896),
    [anon_sym_private] = ACTIONS(1896),
    [anon_sym_interface] = ACTIONS(1896),
    [anon_sym_struct] = ACTIONS(1896),
    [anon_sym_enum] = ACTIONS(1896),
    [anon_sym_sbyte] = ACTIONS(1896),
    [anon_sym_byte] = ACTIONS(1896),
    [anon_sym_short] = ACTIONS(1896),
    [anon_sym_ushort] = ACTIONS(1896),
    [anon_sym_int] = ACTIONS(1896),
    [anon_sym_uint] = ACTIONS(1896),
    [anon_sym_long] = ACTIONS(1896),
    [anon_sym_ulong] = ACTIONS(1896),
    [anon_sym_char] = ACTIONS(1896),
    [anon_sym_delegate] = ACTIONS(1896),
    [sym_void_keyword] = ACTIONS(1896),
    [anon_sym_LBRACK] = ACTIONS(1703),
    [sym_const_keyword] = ACTIONS(1896),
    [anon_sym_readonly] = ACTIONS(1896),
    [anon_sym_volatile] = ACTIONS(1896),
    [anon_sym_bool] = ACTIONS(1896),
    [anon_sym_decimal] = ACTIONS(1896),
    [anon_sym_double] = ACTIONS(1896),
    [anon_sym_float] = ACTIONS(1896),
    [anon_sym_object] = ACTIONS(1896),
    [anon_sym_string] = ACTIONS(1896),
    [sym_identifier_name] = ACTIONS(1896),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1896),
  },
  [844] = {
    [anon_sym_RBRACE] = ACTIONS(1705),
    [anon_sym_partial] = ACTIONS(1898),
    [anon_sym_class] = ACTIONS(1898),
    [anon_sym_unsafe] = ACTIONS(1898),
    [anon_sym_abstract] = ACTIONS(1898),
    [anon_sym_sealed] = ACTIONS(1898),
    [anon_sym_static] = ACTIONS(1898),
    [anon_sym_new] = ACTIONS(1898),
    [anon_sym_public] = ACTIONS(1898),
    [anon_sym_protected] = ACTIONS(1898),
    [anon_sym_internal] = ACTIONS(1898),
    [anon_sym_private] = ACTIONS(1898),
    [anon_sym_interface] = ACTIONS(1898),
    [anon_sym_struct] = ACTIONS(1898),
    [anon_sym_enum] = ACTIONS(1898),
    [anon_sym_sbyte] = ACTIONS(1898),
    [anon_sym_byte] = ACTIONS(1898),
    [anon_sym_short] = ACTIONS(1898),
    [anon_sym_ushort] = ACTIONS(1898),
    [anon_sym_int] = ACTIONS(1898),
    [anon_sym_uint] = ACTIONS(1898),
    [anon_sym_long] = ACTIONS(1898),
    [anon_sym_ulong] = ACTIONS(1898),
    [anon_sym_char] = ACTIONS(1898),
    [anon_sym_delegate] = ACTIONS(1898),
    [sym_void_keyword] = ACTIONS(1898),
    [anon_sym_LBRACK] = ACTIONS(1705),
    [sym_const_keyword] = ACTIONS(1898),
    [anon_sym_readonly] = ACTIONS(1898),
    [anon_sym_volatile] = ACTIONS(1898),
    [anon_sym_bool] = ACTIONS(1898),
    [anon_sym_decimal] = ACTIONS(1898),
    [anon_sym_double] = ACTIONS(1898),
    [anon_sym_float] = ACTIONS(1898),
    [anon_sym_object] = ACTIONS(1898),
    [anon_sym_string] = ACTIONS(1898),
    [sym_identifier_name] = ACTIONS(1898),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1898),
  },
  [845] = {
    [aux_sym_enum_declaration_repeat1] = STATE(863),
    [anon_sym_RBRACE] = ACTIONS(1892),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [846] = {
    [anon_sym_RBRACE] = ACTIONS(1900),
    [anon_sym_partial] = ACTIONS(1902),
    [anon_sym_class] = ACTIONS(1902),
    [anon_sym_unsafe] = ACTIONS(1902),
    [anon_sym_abstract] = ACTIONS(1902),
    [anon_sym_sealed] = ACTIONS(1902),
    [anon_sym_static] = ACTIONS(1902),
    [anon_sym_new] = ACTIONS(1902),
    [anon_sym_public] = ACTIONS(1902),
    [anon_sym_protected] = ACTIONS(1902),
    [anon_sym_internal] = ACTIONS(1902),
    [anon_sym_private] = ACTIONS(1902),
    [anon_sym_interface] = ACTIONS(1902),
    [anon_sym_struct] = ACTIONS(1902),
    [anon_sym_enum] = ACTIONS(1902),
    [anon_sym_sbyte] = ACTIONS(1902),
    [anon_sym_byte] = ACTIONS(1902),
    [anon_sym_short] = ACTIONS(1902),
    [anon_sym_ushort] = ACTIONS(1902),
    [anon_sym_int] = ACTIONS(1902),
    [anon_sym_uint] = ACTIONS(1902),
    [anon_sym_long] = ACTIONS(1902),
    [anon_sym_ulong] = ACTIONS(1902),
    [anon_sym_char] = ACTIONS(1902),
    [anon_sym_delegate] = ACTIONS(1902),
    [sym_void_keyword] = ACTIONS(1902),
    [anon_sym_LBRACK] = ACTIONS(1900),
    [sym_const_keyword] = ACTIONS(1902),
    [anon_sym_readonly] = ACTIONS(1902),
    [anon_sym_volatile] = ACTIONS(1902),
    [anon_sym_bool] = ACTIONS(1902),
    [anon_sym_decimal] = ACTIONS(1902),
    [anon_sym_double] = ACTIONS(1902),
    [anon_sym_float] = ACTIONS(1902),
    [anon_sym_object] = ACTIONS(1902),
    [anon_sym_string] = ACTIONS(1902),
    [sym_identifier_name] = ACTIONS(1902),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1902),
  },
  [847] = {
    [anon_sym_SEMI] = ACTIONS(1876),
    [anon_sym_COMMA] = ACTIONS(1876),
    [anon_sym_QMARK] = ACTIONS(1225),
    [anon_sym_AMP_AMP] = ACTIONS(1227),
    [anon_sym_PIPE_PIPE] = ACTIONS(1229),
    [anon_sym_GT_GT] = ACTIONS(1231),
    [anon_sym_LT_LT] = ACTIONS(1231),
    [anon_sym_AMP] = ACTIONS(1233),
    [anon_sym_CARET] = ACTIONS(1235),
    [anon_sym_PIPE] = ACTIONS(1237),
    [anon_sym_PLUS] = ACTIONS(1239),
    [anon_sym_DASH] = ACTIONS(1239),
    [anon_sym_STAR] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1245),
    [anon_sym_LT_EQ] = ACTIONS(1247),
    [anon_sym_EQ_EQ] = ACTIONS(1249),
    [anon_sym_BANG_EQ] = ACTIONS(1249),
    [anon_sym_GT_EQ] = ACTIONS(1247),
    [anon_sym_GT] = ACTIONS(1245),
    [sym_comment] = ACTIONS(38),
  },
  [848] = {
    [anon_sym_RBRACE] = ACTIONS(1652),
    [anon_sym_partial] = ACTIONS(1886),
    [anon_sym_class] = ACTIONS(1886),
    [anon_sym_unsafe] = ACTIONS(1886),
    [anon_sym_abstract] = ACTIONS(1886),
    [anon_sym_sealed] = ACTIONS(1886),
    [anon_sym_static] = ACTIONS(1886),
    [anon_sym_new] = ACTIONS(1886),
    [anon_sym_public] = ACTIONS(1886),
    [anon_sym_protected] = ACTIONS(1886),
    [anon_sym_internal] = ACTIONS(1886),
    [anon_sym_private] = ACTIONS(1886),
    [anon_sym_interface] = ACTIONS(1886),
    [anon_sym_struct] = ACTIONS(1886),
    [anon_sym_enum] = ACTIONS(1886),
    [anon_sym_sbyte] = ACTIONS(1886),
    [anon_sym_byte] = ACTIONS(1886),
    [anon_sym_short] = ACTIONS(1886),
    [anon_sym_ushort] = ACTIONS(1886),
    [anon_sym_int] = ACTIONS(1886),
    [anon_sym_uint] = ACTIONS(1886),
    [anon_sym_long] = ACTIONS(1886),
    [anon_sym_ulong] = ACTIONS(1886),
    [anon_sym_char] = ACTIONS(1886),
    [anon_sym_delegate] = ACTIONS(1886),
    [anon_sym_LBRACK] = ACTIONS(1652),
    [sym_const_keyword] = ACTIONS(1886),
    [anon_sym_readonly] = ACTIONS(1886),
    [anon_sym_volatile] = ACTIONS(1886),
    [anon_sym_bool] = ACTIONS(1886),
    [anon_sym_decimal] = ACTIONS(1886),
    [anon_sym_double] = ACTIONS(1886),
    [anon_sym_float] = ACTIONS(1886),
    [anon_sym_object] = ACTIONS(1886),
    [anon_sym_string] = ACTIONS(1886),
    [sym_identifier_name] = ACTIONS(1886),
    [sym_comment] = ACTIONS(38),
  },
  [849] = {
    [anon_sym_SEMI] = ACTIONS(1904),
    [anon_sym_RBRACE] = ACTIONS(1652),
    [anon_sym_partial] = ACTIONS(1886),
    [anon_sym_class] = ACTIONS(1886),
    [anon_sym_unsafe] = ACTIONS(1886),
    [anon_sym_abstract] = ACTIONS(1886),
    [anon_sym_sealed] = ACTIONS(1886),
    [anon_sym_static] = ACTIONS(1886),
    [anon_sym_new] = ACTIONS(1886),
    [anon_sym_public] = ACTIONS(1886),
    [anon_sym_protected] = ACTIONS(1886),
    [anon_sym_internal] = ACTIONS(1886),
    [anon_sym_private] = ACTIONS(1886),
    [anon_sym_interface] = ACTIONS(1886),
    [anon_sym_struct] = ACTIONS(1886),
    [anon_sym_enum] = ACTIONS(1886),
    [anon_sym_sbyte] = ACTIONS(1886),
    [anon_sym_byte] = ACTIONS(1886),
    [anon_sym_short] = ACTIONS(1886),
    [anon_sym_ushort] = ACTIONS(1886),
    [anon_sym_int] = ACTIONS(1886),
    [anon_sym_uint] = ACTIONS(1886),
    [anon_sym_long] = ACTIONS(1886),
    [anon_sym_ulong] = ACTIONS(1886),
    [anon_sym_char] = ACTIONS(1886),
    [anon_sym_delegate] = ACTIONS(1886),
    [anon_sym_LBRACK] = ACTIONS(1652),
    [sym_const_keyword] = ACTIONS(1886),
    [anon_sym_readonly] = ACTIONS(1886),
    [anon_sym_volatile] = ACTIONS(1886),
    [anon_sym_bool] = ACTIONS(1886),
    [anon_sym_decimal] = ACTIONS(1886),
    [anon_sym_double] = ACTIONS(1886),
    [anon_sym_float] = ACTIONS(1886),
    [anon_sym_object] = ACTIONS(1886),
    [anon_sym_string] = ACTIONS(1886),
    [sym_identifier_name] = ACTIONS(1886),
    [sym_comment] = ACTIONS(38),
  },
  [850] = {
    [anon_sym_RBRACE] = ACTIONS(1697),
    [anon_sym_partial] = ACTIONS(1890),
    [anon_sym_class] = ACTIONS(1890),
    [anon_sym_unsafe] = ACTIONS(1890),
    [anon_sym_abstract] = ACTIONS(1890),
    [anon_sym_sealed] = ACTIONS(1890),
    [anon_sym_static] = ACTIONS(1890),
    [anon_sym_new] = ACTIONS(1890),
    [anon_sym_public] = ACTIONS(1890),
    [anon_sym_protected] = ACTIONS(1890),
    [anon_sym_internal] = ACTIONS(1890),
    [anon_sym_private] = ACTIONS(1890),
    [anon_sym_interface] = ACTIONS(1890),
    [anon_sym_struct] = ACTIONS(1890),
    [anon_sym_enum] = ACTIONS(1890),
    [anon_sym_sbyte] = ACTIONS(1890),
    [anon_sym_byte] = ACTIONS(1890),
    [anon_sym_short] = ACTIONS(1890),
    [anon_sym_ushort] = ACTIONS(1890),
    [anon_sym_int] = ACTIONS(1890),
    [anon_sym_uint] = ACTIONS(1890),
    [anon_sym_long] = ACTIONS(1890),
    [anon_sym_ulong] = ACTIONS(1890),
    [anon_sym_char] = ACTIONS(1890),
    [anon_sym_delegate] = ACTIONS(1890),
    [anon_sym_LBRACK] = ACTIONS(1697),
    [sym_const_keyword] = ACTIONS(1890),
    [anon_sym_readonly] = ACTIONS(1890),
    [anon_sym_volatile] = ACTIONS(1890),
    [anon_sym_bool] = ACTIONS(1890),
    [anon_sym_decimal] = ACTIONS(1890),
    [anon_sym_double] = ACTIONS(1890),
    [anon_sym_float] = ACTIONS(1890),
    [anon_sym_object] = ACTIONS(1890),
    [anon_sym_string] = ACTIONS(1890),
    [sym_identifier_name] = ACTIONS(1890),
    [sym_comment] = ACTIONS(38),
  },
  [851] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1906),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [852] = {
    [sym__type_declaration] = STATE(248),
    [sym_class_declaration] = STATE(248),
    [sym_class_modifiers] = STATE(140),
    [sym__class_modifiers] = STATE(18),
    [sym_interface_declaration] = STATE(248),
    [sym_interface_modifiers] = STATE(141),
    [sym__interface_modifiers] = STATE(20),
    [sym_struct_declaration] = STATE(248),
    [sym_struct_modifiers] = STATE(142),
    [sym__struct_modifiers] = STATE(22),
    [sym_enum_declaration] = STATE(248),
    [sym_enum_modifiers] = STATE(143),
    [sym_delegate_declaration] = STATE(248),
    [sym_delegate_modifier] = STATE(144),
    [sym_return_type] = STATE(145),
    [sym__attributes] = STATE(146),
    [sym__attribute_section] = STATE(153),
    [sym_field_declaration] = STATE(248),
    [sym_field_modifiers] = STATE(147),
    [sym__field_modifiers] = STATE(148),
    [sym_variable_declaration] = STATE(149),
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(150),
    [sym_predefined_type] = STATE(150),
    [sym_constructor_declaration] = STATE(248),
    [sym_method_declaration] = STATE(248),
    [sym_method_modifiers] = STATE(151),
    [aux_sym_class_declaration_repeat1] = STATE(248),
    [aux_sym__attributes_repeat1] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(1908),
    [anon_sym_partial] = ACTIONS(261),
    [anon_sym_class] = ACTIONS(263),
    [anon_sym_unsafe] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(267),
    [anon_sym_sealed] = ACTIONS(267),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_public] = ACTIONS(271),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_internal] = ACTIONS(271),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_interface] = ACTIONS(273),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_sbyte] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(76),
    [anon_sym_short] = ACTIONS(76),
    [anon_sym_ushort] = ACTIONS(76),
    [anon_sym_int] = ACTIONS(76),
    [anon_sym_uint] = ACTIONS(76),
    [anon_sym_long] = ACTIONS(76),
    [anon_sym_ulong] = ACTIONS(76),
    [anon_sym_char] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(279),
    [sym_void_keyword] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(281),
    [anon_sym_readonly] = ACTIONS(283),
    [anon_sym_volatile] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(76),
    [anon_sym_decimal] = ACTIONS(76),
    [anon_sym_double] = ACTIONS(76),
    [anon_sym_float] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(285),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(287),
  },
  [853] = {
    [anon_sym_RBRACE] = ACTIONS(1703),
    [anon_sym_partial] = ACTIONS(1896),
    [anon_sym_class] = ACTIONS(1896),
    [anon_sym_unsafe] = ACTIONS(1896),
    [anon_sym_abstract] = ACTIONS(1896),
    [anon_sym_sealed] = ACTIONS(1896),
    [anon_sym_static] = ACTIONS(1896),
    [anon_sym_new] = ACTIONS(1896),
    [anon_sym_public] = ACTIONS(1896),
    [anon_sym_protected] = ACTIONS(1896),
    [anon_sym_internal] = ACTIONS(1896),
    [anon_sym_private] = ACTIONS(1896),
    [anon_sym_interface] = ACTIONS(1896),
    [anon_sym_struct] = ACTIONS(1896),
    [anon_sym_enum] = ACTIONS(1896),
    [anon_sym_sbyte] = ACTIONS(1896),
    [anon_sym_byte] = ACTIONS(1896),
    [anon_sym_short] = ACTIONS(1896),
    [anon_sym_ushort] = ACTIONS(1896),
    [anon_sym_int] = ACTIONS(1896),
    [anon_sym_uint] = ACTIONS(1896),
    [anon_sym_long] = ACTIONS(1896),
    [anon_sym_ulong] = ACTIONS(1896),
    [anon_sym_char] = ACTIONS(1896),
    [anon_sym_delegate] = ACTIONS(1896),
    [anon_sym_LBRACK] = ACTIONS(1703),
    [sym_const_keyword] = ACTIONS(1896),
    [anon_sym_readonly] = ACTIONS(1896),
    [anon_sym_volatile] = ACTIONS(1896),
    [anon_sym_bool] = ACTIONS(1896),
    [anon_sym_decimal] = ACTIONS(1896),
    [anon_sym_double] = ACTIONS(1896),
    [anon_sym_float] = ACTIONS(1896),
    [anon_sym_object] = ACTIONS(1896),
    [anon_sym_string] = ACTIONS(1896),
    [sym_identifier_name] = ACTIONS(1896),
    [sym_comment] = ACTIONS(38),
  },
  [854] = {
    [anon_sym_RBRACE] = ACTIONS(1705),
    [anon_sym_partial] = ACTIONS(1898),
    [anon_sym_class] = ACTIONS(1898),
    [anon_sym_unsafe] = ACTIONS(1898),
    [anon_sym_abstract] = ACTIONS(1898),
    [anon_sym_sealed] = ACTIONS(1898),
    [anon_sym_static] = ACTIONS(1898),
    [anon_sym_new] = ACTIONS(1898),
    [anon_sym_public] = ACTIONS(1898),
    [anon_sym_protected] = ACTIONS(1898),
    [anon_sym_internal] = ACTIONS(1898),
    [anon_sym_private] = ACTIONS(1898),
    [anon_sym_interface] = ACTIONS(1898),
    [anon_sym_struct] = ACTIONS(1898),
    [anon_sym_enum] = ACTIONS(1898),
    [anon_sym_sbyte] = ACTIONS(1898),
    [anon_sym_byte] = ACTIONS(1898),
    [anon_sym_short] = ACTIONS(1898),
    [anon_sym_ushort] = ACTIONS(1898),
    [anon_sym_int] = ACTIONS(1898),
    [anon_sym_uint] = ACTIONS(1898),
    [anon_sym_long] = ACTIONS(1898),
    [anon_sym_ulong] = ACTIONS(1898),
    [anon_sym_char] = ACTIONS(1898),
    [anon_sym_delegate] = ACTIONS(1898),
    [anon_sym_LBRACK] = ACTIONS(1705),
    [sym_const_keyword] = ACTIONS(1898),
    [anon_sym_readonly] = ACTIONS(1898),
    [anon_sym_volatile] = ACTIONS(1898),
    [anon_sym_bool] = ACTIONS(1898),
    [anon_sym_decimal] = ACTIONS(1898),
    [anon_sym_double] = ACTIONS(1898),
    [anon_sym_float] = ACTIONS(1898),
    [anon_sym_object] = ACTIONS(1898),
    [anon_sym_string] = ACTIONS(1898),
    [sym_identifier_name] = ACTIONS(1898),
    [sym_comment] = ACTIONS(38),
  },
  [855] = {
    [aux_sym_enum_declaration_repeat1] = STATE(867),
    [anon_sym_RBRACE] = ACTIONS(1906),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [856] = {
    [anon_sym_RPAREN] = ACTIONS(1876),
    [anon_sym_QMARK] = ACTIONS(1288),
    [anon_sym_AMP_AMP] = ACTIONS(1290),
    [anon_sym_PIPE_PIPE] = ACTIONS(1292),
    [anon_sym_GT_GT] = ACTIONS(1294),
    [anon_sym_LT_LT] = ACTIONS(1294),
    [anon_sym_AMP] = ACTIONS(1296),
    [anon_sym_CARET] = ACTIONS(1298),
    [anon_sym_PIPE] = ACTIONS(1300),
    [anon_sym_PLUS] = ACTIONS(1302),
    [anon_sym_DASH] = ACTIONS(1302),
    [anon_sym_STAR] = ACTIONS(1304),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1304),
    [anon_sym_LT] = ACTIONS(1308),
    [anon_sym_LT_EQ] = ACTIONS(1310),
    [anon_sym_EQ_EQ] = ACTIONS(1312),
    [anon_sym_BANG_EQ] = ACTIONS(1312),
    [anon_sym_GT_EQ] = ACTIONS(1310),
    [anon_sym_GT] = ACTIONS(1308),
    [sym_comment] = ACTIONS(38),
  },
  [857] = {
    [sym__expression] = STATE(868),
    [sym_parenthesized_expression] = STATE(868),
    [sym_ternary_expression] = STATE(868),
    [sym_binary_expression] = STATE(868),
    [sym_unary_expression] = STATE(868),
    [sym__literal] = STATE(868),
    [sym_boolean_literal] = STATE(868),
    [sym_character_literal] = STATE(868),
    [sym_integer_literal] = STATE(868),
    [sym_real_literal] = STATE(868),
    [sym_string_literal] = STATE(868),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(1344),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_typeof] = ACTIONS(1344),
    [anon_sym_sizeof] = ACTIONS(1344),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1910),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1910),
    [sym_comment] = ACTIONS(38),
  },
  [858] = {
    [sym__expression] = STATE(869),
    [sym_parenthesized_expression] = STATE(869),
    [sym_ternary_expression] = STATE(869),
    [sym_binary_expression] = STATE(869),
    [sym_unary_expression] = STATE(869),
    [sym__literal] = STATE(869),
    [sym_boolean_literal] = STATE(869),
    [sym_character_literal] = STATE(869),
    [sym_integer_literal] = STATE(869),
    [sym_real_literal] = STATE(869),
    [sym_string_literal] = STATE(869),
    [sym__regular_string_literal] = STATE(402),
    [sym__verbatim_string_literal] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(1395),
    [anon_sym_DASH] = ACTIONS(1395),
    [anon_sym_BANG] = ACTIONS(1397),
    [anon_sym_TILDE] = ACTIONS(1397),
    [anon_sym_DASH_DASH] = ACTIONS(1397),
    [anon_sym_PLUS_PLUS] = ACTIONS(1397),
    [anon_sym_typeof] = ACTIONS(1395),
    [anon_sym_sizeof] = ACTIONS(1395),
    [anon_sym_true] = ACTIONS(839),
    [anon_sym_false] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(843),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(845),
    [sym_null_literal] = ACTIONS(1912),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_AT_DQUOTE] = ACTIONS(853),
    [sym_identifier_name] = ACTIONS(1912),
    [sym_comment] = ACTIONS(38),
  },
  [859] = {
    [ts_builtin_sym_end] = ACTIONS(1914),
    [anon_sym_using] = ACTIONS(1914),
    [anon_sym_namespace] = ACTIONS(1914),
    [anon_sym_RBRACE] = ACTIONS(1914),
    [anon_sym_partial] = ACTIONS(1914),
    [anon_sym_class] = ACTIONS(1914),
    [anon_sym_unsafe] = ACTIONS(1914),
    [anon_sym_abstract] = ACTIONS(1914),
    [anon_sym_sealed] = ACTIONS(1914),
    [anon_sym_static] = ACTIONS(1914),
    [anon_sym_new] = ACTIONS(1914),
    [anon_sym_public] = ACTIONS(1914),
    [anon_sym_protected] = ACTIONS(1914),
    [anon_sym_internal] = ACTIONS(1914),
    [anon_sym_private] = ACTIONS(1914),
    [anon_sym_interface] = ACTIONS(1914),
    [anon_sym_struct] = ACTIONS(1914),
    [anon_sym_enum] = ACTIONS(1914),
    [anon_sym_delegate] = ACTIONS(1914),
    [anon_sym_LBRACK] = ACTIONS(1914),
    [sym_comment] = ACTIONS(38),
  },
  [860] = {
    [anon_sym_RBRACE] = ACTIONS(1797),
    [anon_sym_partial] = ACTIONS(1916),
    [anon_sym_class] = ACTIONS(1916),
    [anon_sym_unsafe] = ACTIONS(1916),
    [anon_sym_abstract] = ACTIONS(1916),
    [anon_sym_sealed] = ACTIONS(1916),
    [anon_sym_static] = ACTIONS(1916),
    [anon_sym_new] = ACTIONS(1916),
    [anon_sym_public] = ACTIONS(1916),
    [anon_sym_protected] = ACTIONS(1916),
    [anon_sym_internal] = ACTIONS(1916),
    [anon_sym_private] = ACTIONS(1916),
    [anon_sym_interface] = ACTIONS(1916),
    [anon_sym_struct] = ACTIONS(1916),
    [anon_sym_enum] = ACTIONS(1916),
    [anon_sym_sbyte] = ACTIONS(1916),
    [anon_sym_byte] = ACTIONS(1916),
    [anon_sym_short] = ACTIONS(1916),
    [anon_sym_ushort] = ACTIONS(1916),
    [anon_sym_int] = ACTIONS(1916),
    [anon_sym_uint] = ACTIONS(1916),
    [anon_sym_long] = ACTIONS(1916),
    [anon_sym_ulong] = ACTIONS(1916),
    [anon_sym_char] = ACTIONS(1916),
    [anon_sym_delegate] = ACTIONS(1916),
    [sym_void_keyword] = ACTIONS(1916),
    [anon_sym_LBRACK] = ACTIONS(1797),
    [sym_const_keyword] = ACTIONS(1916),
    [anon_sym_readonly] = ACTIONS(1916),
    [anon_sym_volatile] = ACTIONS(1916),
    [anon_sym_bool] = ACTIONS(1916),
    [anon_sym_decimal] = ACTIONS(1916),
    [anon_sym_double] = ACTIONS(1916),
    [anon_sym_float] = ACTIONS(1916),
    [anon_sym_object] = ACTIONS(1916),
    [anon_sym_string] = ACTIONS(1916),
    [sym_identifier_name] = ACTIONS(1916),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1916),
  },
  [861] = {
    [anon_sym_SEMI] = ACTIONS(1918),
    [anon_sym_RBRACE] = ACTIONS(1797),
    [anon_sym_partial] = ACTIONS(1916),
    [anon_sym_class] = ACTIONS(1916),
    [anon_sym_unsafe] = ACTIONS(1916),
    [anon_sym_abstract] = ACTIONS(1916),
    [anon_sym_sealed] = ACTIONS(1916),
    [anon_sym_static] = ACTIONS(1916),
    [anon_sym_new] = ACTIONS(1916),
    [anon_sym_public] = ACTIONS(1916),
    [anon_sym_protected] = ACTIONS(1916),
    [anon_sym_internal] = ACTIONS(1916),
    [anon_sym_private] = ACTIONS(1916),
    [anon_sym_interface] = ACTIONS(1916),
    [anon_sym_struct] = ACTIONS(1916),
    [anon_sym_enum] = ACTIONS(1916),
    [anon_sym_sbyte] = ACTIONS(1916),
    [anon_sym_byte] = ACTIONS(1916),
    [anon_sym_short] = ACTIONS(1916),
    [anon_sym_ushort] = ACTIONS(1916),
    [anon_sym_int] = ACTIONS(1916),
    [anon_sym_uint] = ACTIONS(1916),
    [anon_sym_long] = ACTIONS(1916),
    [anon_sym_ulong] = ACTIONS(1916),
    [anon_sym_char] = ACTIONS(1916),
    [anon_sym_delegate] = ACTIONS(1916),
    [sym_void_keyword] = ACTIONS(1916),
    [anon_sym_LBRACK] = ACTIONS(1797),
    [sym_const_keyword] = ACTIONS(1916),
    [anon_sym_readonly] = ACTIONS(1916),
    [anon_sym_volatile] = ACTIONS(1916),
    [anon_sym_bool] = ACTIONS(1916),
    [anon_sym_decimal] = ACTIONS(1916),
    [anon_sym_double] = ACTIONS(1916),
    [anon_sym_float] = ACTIONS(1916),
    [anon_sym_object] = ACTIONS(1916),
    [anon_sym_string] = ACTIONS(1916),
    [sym_identifier_name] = ACTIONS(1916),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1916),
  },
  [862] = {
    [anon_sym_RBRACE] = ACTIONS(1828),
    [anon_sym_partial] = ACTIONS(1920),
    [anon_sym_class] = ACTIONS(1920),
    [anon_sym_unsafe] = ACTIONS(1920),
    [anon_sym_abstract] = ACTIONS(1920),
    [anon_sym_sealed] = ACTIONS(1920),
    [anon_sym_static] = ACTIONS(1920),
    [anon_sym_new] = ACTIONS(1920),
    [anon_sym_public] = ACTIONS(1920),
    [anon_sym_protected] = ACTIONS(1920),
    [anon_sym_internal] = ACTIONS(1920),
    [anon_sym_private] = ACTIONS(1920),
    [anon_sym_interface] = ACTIONS(1920),
    [anon_sym_struct] = ACTIONS(1920),
    [anon_sym_enum] = ACTIONS(1920),
    [anon_sym_sbyte] = ACTIONS(1920),
    [anon_sym_byte] = ACTIONS(1920),
    [anon_sym_short] = ACTIONS(1920),
    [anon_sym_ushort] = ACTIONS(1920),
    [anon_sym_int] = ACTIONS(1920),
    [anon_sym_uint] = ACTIONS(1920),
    [anon_sym_long] = ACTIONS(1920),
    [anon_sym_ulong] = ACTIONS(1920),
    [anon_sym_char] = ACTIONS(1920),
    [anon_sym_delegate] = ACTIONS(1920),
    [sym_void_keyword] = ACTIONS(1920),
    [anon_sym_LBRACK] = ACTIONS(1828),
    [sym_const_keyword] = ACTIONS(1920),
    [anon_sym_readonly] = ACTIONS(1920),
    [anon_sym_volatile] = ACTIONS(1920),
    [anon_sym_bool] = ACTIONS(1920),
    [anon_sym_decimal] = ACTIONS(1920),
    [anon_sym_double] = ACTIONS(1920),
    [anon_sym_float] = ACTIONS(1920),
    [anon_sym_object] = ACTIONS(1920),
    [anon_sym_string] = ACTIONS(1920),
    [sym_identifier_name] = ACTIONS(1920),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1920),
  },
  [863] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1922),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [864] = {
    [anon_sym_RBRACE] = ACTIONS(1797),
    [anon_sym_partial] = ACTIONS(1916),
    [anon_sym_class] = ACTIONS(1916),
    [anon_sym_unsafe] = ACTIONS(1916),
    [anon_sym_abstract] = ACTIONS(1916),
    [anon_sym_sealed] = ACTIONS(1916),
    [anon_sym_static] = ACTIONS(1916),
    [anon_sym_new] = ACTIONS(1916),
    [anon_sym_public] = ACTIONS(1916),
    [anon_sym_protected] = ACTIONS(1916),
    [anon_sym_internal] = ACTIONS(1916),
    [anon_sym_private] = ACTIONS(1916),
    [anon_sym_interface] = ACTIONS(1916),
    [anon_sym_struct] = ACTIONS(1916),
    [anon_sym_enum] = ACTIONS(1916),
    [anon_sym_sbyte] = ACTIONS(1916),
    [anon_sym_byte] = ACTIONS(1916),
    [anon_sym_short] = ACTIONS(1916),
    [anon_sym_ushort] = ACTIONS(1916),
    [anon_sym_int] = ACTIONS(1916),
    [anon_sym_uint] = ACTIONS(1916),
    [anon_sym_long] = ACTIONS(1916),
    [anon_sym_ulong] = ACTIONS(1916),
    [anon_sym_char] = ACTIONS(1916),
    [anon_sym_delegate] = ACTIONS(1916),
    [anon_sym_LBRACK] = ACTIONS(1797),
    [sym_const_keyword] = ACTIONS(1916),
    [anon_sym_readonly] = ACTIONS(1916),
    [anon_sym_volatile] = ACTIONS(1916),
    [anon_sym_bool] = ACTIONS(1916),
    [anon_sym_decimal] = ACTIONS(1916),
    [anon_sym_double] = ACTIONS(1916),
    [anon_sym_float] = ACTIONS(1916),
    [anon_sym_object] = ACTIONS(1916),
    [anon_sym_string] = ACTIONS(1916),
    [sym_identifier_name] = ACTIONS(1916),
    [sym_comment] = ACTIONS(38),
  },
  [865] = {
    [anon_sym_SEMI] = ACTIONS(1924),
    [anon_sym_RBRACE] = ACTIONS(1797),
    [anon_sym_partial] = ACTIONS(1916),
    [anon_sym_class] = ACTIONS(1916),
    [anon_sym_unsafe] = ACTIONS(1916),
    [anon_sym_abstract] = ACTIONS(1916),
    [anon_sym_sealed] = ACTIONS(1916),
    [anon_sym_static] = ACTIONS(1916),
    [anon_sym_new] = ACTIONS(1916),
    [anon_sym_public] = ACTIONS(1916),
    [anon_sym_protected] = ACTIONS(1916),
    [anon_sym_internal] = ACTIONS(1916),
    [anon_sym_private] = ACTIONS(1916),
    [anon_sym_interface] = ACTIONS(1916),
    [anon_sym_struct] = ACTIONS(1916),
    [anon_sym_enum] = ACTIONS(1916),
    [anon_sym_sbyte] = ACTIONS(1916),
    [anon_sym_byte] = ACTIONS(1916),
    [anon_sym_short] = ACTIONS(1916),
    [anon_sym_ushort] = ACTIONS(1916),
    [anon_sym_int] = ACTIONS(1916),
    [anon_sym_uint] = ACTIONS(1916),
    [anon_sym_long] = ACTIONS(1916),
    [anon_sym_ulong] = ACTIONS(1916),
    [anon_sym_char] = ACTIONS(1916),
    [anon_sym_delegate] = ACTIONS(1916),
    [anon_sym_LBRACK] = ACTIONS(1797),
    [sym_const_keyword] = ACTIONS(1916),
    [anon_sym_readonly] = ACTIONS(1916),
    [anon_sym_volatile] = ACTIONS(1916),
    [anon_sym_bool] = ACTIONS(1916),
    [anon_sym_decimal] = ACTIONS(1916),
    [anon_sym_double] = ACTIONS(1916),
    [anon_sym_float] = ACTIONS(1916),
    [anon_sym_object] = ACTIONS(1916),
    [anon_sym_string] = ACTIONS(1916),
    [sym_identifier_name] = ACTIONS(1916),
    [sym_comment] = ACTIONS(38),
  },
  [866] = {
    [anon_sym_RBRACE] = ACTIONS(1828),
    [anon_sym_partial] = ACTIONS(1920),
    [anon_sym_class] = ACTIONS(1920),
    [anon_sym_unsafe] = ACTIONS(1920),
    [anon_sym_abstract] = ACTIONS(1920),
    [anon_sym_sealed] = ACTIONS(1920),
    [anon_sym_static] = ACTIONS(1920),
    [anon_sym_new] = ACTIONS(1920),
    [anon_sym_public] = ACTIONS(1920),
    [anon_sym_protected] = ACTIONS(1920),
    [anon_sym_internal] = ACTIONS(1920),
    [anon_sym_private] = ACTIONS(1920),
    [anon_sym_interface] = ACTIONS(1920),
    [anon_sym_struct] = ACTIONS(1920),
    [anon_sym_enum] = ACTIONS(1920),
    [anon_sym_sbyte] = ACTIONS(1920),
    [anon_sym_byte] = ACTIONS(1920),
    [anon_sym_short] = ACTIONS(1920),
    [anon_sym_ushort] = ACTIONS(1920),
    [anon_sym_int] = ACTIONS(1920),
    [anon_sym_uint] = ACTIONS(1920),
    [anon_sym_long] = ACTIONS(1920),
    [anon_sym_ulong] = ACTIONS(1920),
    [anon_sym_char] = ACTIONS(1920),
    [anon_sym_delegate] = ACTIONS(1920),
    [anon_sym_LBRACK] = ACTIONS(1828),
    [sym_const_keyword] = ACTIONS(1920),
    [anon_sym_readonly] = ACTIONS(1920),
    [anon_sym_volatile] = ACTIONS(1920),
    [anon_sym_bool] = ACTIONS(1920),
    [anon_sym_decimal] = ACTIONS(1920),
    [anon_sym_double] = ACTIONS(1920),
    [anon_sym_float] = ACTIONS(1920),
    [anon_sym_object] = ACTIONS(1920),
    [anon_sym_string] = ACTIONS(1920),
    [sym_identifier_name] = ACTIONS(1920),
    [sym_comment] = ACTIONS(38),
  },
  [867] = {
    [aux_sym_enum_declaration_repeat1] = STATE(406),
    [anon_sym_RBRACE] = ACTIONS(1926),
    [anon_sym_COMMA] = ACTIONS(509),
    [sym_comment] = ACTIONS(38),
  },
  [868] = {
    [anon_sym_COLON] = ACTIONS(1876),
    [anon_sym_QMARK] = ACTIONS(1622),
    [anon_sym_AMP_AMP] = ACTIONS(1624),
    [anon_sym_PIPE_PIPE] = ACTIONS(1626),
    [anon_sym_GT_GT] = ACTIONS(1628),
    [anon_sym_LT_LT] = ACTIONS(1628),
    [anon_sym_AMP] = ACTIONS(1630),
    [anon_sym_CARET] = ACTIONS(1632),
    [anon_sym_PIPE] = ACTIONS(1634),
    [anon_sym_PLUS] = ACTIONS(1636),
    [anon_sym_DASH] = ACTIONS(1636),
    [anon_sym_STAR] = ACTIONS(1638),
    [anon_sym_SLASH] = ACTIONS(1640),
    [anon_sym_PERCENT] = ACTIONS(1638),
    [anon_sym_LT] = ACTIONS(1642),
    [anon_sym_LT_EQ] = ACTIONS(1644),
    [anon_sym_EQ_EQ] = ACTIONS(1646),
    [anon_sym_BANG_EQ] = ACTIONS(1646),
    [anon_sym_GT_EQ] = ACTIONS(1644),
    [anon_sym_GT] = ACTIONS(1642),
    [sym_comment] = ACTIONS(38),
  },
  [869] = {
    [anon_sym_COMMA] = ACTIONS(1876),
    [anon_sym_RPAREN] = ACTIONS(1876),
    [sym_params_keyword] = ACTIONS(1876),
    [anon_sym_LBRACK] = ACTIONS(1876),
    [anon_sym_QMARK] = ACTIONS(1671),
    [anon_sym_AMP_AMP] = ACTIONS(1673),
    [anon_sym_PIPE_PIPE] = ACTIONS(1675),
    [anon_sym_GT_GT] = ACTIONS(1677),
    [anon_sym_LT_LT] = ACTIONS(1677),
    [anon_sym_AMP] = ACTIONS(1679),
    [anon_sym_CARET] = ACTIONS(1681),
    [anon_sym_PIPE] = ACTIONS(1683),
    [anon_sym_PLUS] = ACTIONS(1685),
    [anon_sym_DASH] = ACTIONS(1685),
    [anon_sym_STAR] = ACTIONS(1687),
    [anon_sym_SLASH] = ACTIONS(1689),
    [anon_sym_PERCENT] = ACTIONS(1687),
    [anon_sym_LT] = ACTIONS(1691),
    [anon_sym_LT_EQ] = ACTIONS(1693),
    [anon_sym_EQ_EQ] = ACTIONS(1695),
    [anon_sym_BANG_EQ] = ACTIONS(1695),
    [anon_sym_GT_EQ] = ACTIONS(1693),
    [anon_sym_GT] = ACTIONS(1691),
    [sym_comment] = ACTIONS(38),
  },
  [870] = {
    [anon_sym_RBRACE] = ACTIONS(1882),
    [anon_sym_partial] = ACTIONS(1928),
    [anon_sym_class] = ACTIONS(1928),
    [anon_sym_unsafe] = ACTIONS(1928),
    [anon_sym_abstract] = ACTIONS(1928),
    [anon_sym_sealed] = ACTIONS(1928),
    [anon_sym_static] = ACTIONS(1928),
    [anon_sym_new] = ACTIONS(1928),
    [anon_sym_public] = ACTIONS(1928),
    [anon_sym_protected] = ACTIONS(1928),
    [anon_sym_internal] = ACTIONS(1928),
    [anon_sym_private] = ACTIONS(1928),
    [anon_sym_interface] = ACTIONS(1928),
    [anon_sym_struct] = ACTIONS(1928),
    [anon_sym_enum] = ACTIONS(1928),
    [anon_sym_sbyte] = ACTIONS(1928),
    [anon_sym_byte] = ACTIONS(1928),
    [anon_sym_short] = ACTIONS(1928),
    [anon_sym_ushort] = ACTIONS(1928),
    [anon_sym_int] = ACTIONS(1928),
    [anon_sym_uint] = ACTIONS(1928),
    [anon_sym_long] = ACTIONS(1928),
    [anon_sym_ulong] = ACTIONS(1928),
    [anon_sym_char] = ACTIONS(1928),
    [anon_sym_delegate] = ACTIONS(1928),
    [sym_void_keyword] = ACTIONS(1928),
    [anon_sym_LBRACK] = ACTIONS(1882),
    [sym_const_keyword] = ACTIONS(1928),
    [anon_sym_readonly] = ACTIONS(1928),
    [anon_sym_volatile] = ACTIONS(1928),
    [anon_sym_bool] = ACTIONS(1928),
    [anon_sym_decimal] = ACTIONS(1928),
    [anon_sym_double] = ACTIONS(1928),
    [anon_sym_float] = ACTIONS(1928),
    [anon_sym_object] = ACTIONS(1928),
    [anon_sym_string] = ACTIONS(1928),
    [sym_identifier_name] = ACTIONS(1928),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1928),
  },
  [871] = {
    [anon_sym_SEMI] = ACTIONS(1930),
    [anon_sym_RBRACE] = ACTIONS(1882),
    [anon_sym_partial] = ACTIONS(1928),
    [anon_sym_class] = ACTIONS(1928),
    [anon_sym_unsafe] = ACTIONS(1928),
    [anon_sym_abstract] = ACTIONS(1928),
    [anon_sym_sealed] = ACTIONS(1928),
    [anon_sym_static] = ACTIONS(1928),
    [anon_sym_new] = ACTIONS(1928),
    [anon_sym_public] = ACTIONS(1928),
    [anon_sym_protected] = ACTIONS(1928),
    [anon_sym_internal] = ACTIONS(1928),
    [anon_sym_private] = ACTIONS(1928),
    [anon_sym_interface] = ACTIONS(1928),
    [anon_sym_struct] = ACTIONS(1928),
    [anon_sym_enum] = ACTIONS(1928),
    [anon_sym_sbyte] = ACTIONS(1928),
    [anon_sym_byte] = ACTIONS(1928),
    [anon_sym_short] = ACTIONS(1928),
    [anon_sym_ushort] = ACTIONS(1928),
    [anon_sym_int] = ACTIONS(1928),
    [anon_sym_uint] = ACTIONS(1928),
    [anon_sym_long] = ACTIONS(1928),
    [anon_sym_ulong] = ACTIONS(1928),
    [anon_sym_char] = ACTIONS(1928),
    [anon_sym_delegate] = ACTIONS(1928),
    [sym_void_keyword] = ACTIONS(1928),
    [anon_sym_LBRACK] = ACTIONS(1882),
    [sym_const_keyword] = ACTIONS(1928),
    [anon_sym_readonly] = ACTIONS(1928),
    [anon_sym_volatile] = ACTIONS(1928),
    [anon_sym_bool] = ACTIONS(1928),
    [anon_sym_decimal] = ACTIONS(1928),
    [anon_sym_double] = ACTIONS(1928),
    [anon_sym_float] = ACTIONS(1928),
    [anon_sym_object] = ACTIONS(1928),
    [anon_sym_string] = ACTIONS(1928),
    [sym_identifier_name] = ACTIONS(1928),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1928),
  },
  [872] = {
    [anon_sym_RBRACE] = ACTIONS(1882),
    [anon_sym_partial] = ACTIONS(1928),
    [anon_sym_class] = ACTIONS(1928),
    [anon_sym_unsafe] = ACTIONS(1928),
    [anon_sym_abstract] = ACTIONS(1928),
    [anon_sym_sealed] = ACTIONS(1928),
    [anon_sym_static] = ACTIONS(1928),
    [anon_sym_new] = ACTIONS(1928),
    [anon_sym_public] = ACTIONS(1928),
    [anon_sym_protected] = ACTIONS(1928),
    [anon_sym_internal] = ACTIONS(1928),
    [anon_sym_private] = ACTIONS(1928),
    [anon_sym_interface] = ACTIONS(1928),
    [anon_sym_struct] = ACTIONS(1928),
    [anon_sym_enum] = ACTIONS(1928),
    [anon_sym_sbyte] = ACTIONS(1928),
    [anon_sym_byte] = ACTIONS(1928),
    [anon_sym_short] = ACTIONS(1928),
    [anon_sym_ushort] = ACTIONS(1928),
    [anon_sym_int] = ACTIONS(1928),
    [anon_sym_uint] = ACTIONS(1928),
    [anon_sym_long] = ACTIONS(1928),
    [anon_sym_ulong] = ACTIONS(1928),
    [anon_sym_char] = ACTIONS(1928),
    [anon_sym_delegate] = ACTIONS(1928),
    [anon_sym_LBRACK] = ACTIONS(1882),
    [sym_const_keyword] = ACTIONS(1928),
    [anon_sym_readonly] = ACTIONS(1928),
    [anon_sym_volatile] = ACTIONS(1928),
    [anon_sym_bool] = ACTIONS(1928),
    [anon_sym_decimal] = ACTIONS(1928),
    [anon_sym_double] = ACTIONS(1928),
    [anon_sym_float] = ACTIONS(1928),
    [anon_sym_object] = ACTIONS(1928),
    [anon_sym_string] = ACTIONS(1928),
    [sym_identifier_name] = ACTIONS(1928),
    [sym_comment] = ACTIONS(38),
  },
  [873] = {
    [anon_sym_SEMI] = ACTIONS(1932),
    [anon_sym_RBRACE] = ACTIONS(1882),
    [anon_sym_partial] = ACTIONS(1928),
    [anon_sym_class] = ACTIONS(1928),
    [anon_sym_unsafe] = ACTIONS(1928),
    [anon_sym_abstract] = ACTIONS(1928),
    [anon_sym_sealed] = ACTIONS(1928),
    [anon_sym_static] = ACTIONS(1928),
    [anon_sym_new] = ACTIONS(1928),
    [anon_sym_public] = ACTIONS(1928),
    [anon_sym_protected] = ACTIONS(1928),
    [anon_sym_internal] = ACTIONS(1928),
    [anon_sym_private] = ACTIONS(1928),
    [anon_sym_interface] = ACTIONS(1928),
    [anon_sym_struct] = ACTIONS(1928),
    [anon_sym_enum] = ACTIONS(1928),
    [anon_sym_sbyte] = ACTIONS(1928),
    [anon_sym_byte] = ACTIONS(1928),
    [anon_sym_short] = ACTIONS(1928),
    [anon_sym_ushort] = ACTIONS(1928),
    [anon_sym_int] = ACTIONS(1928),
    [anon_sym_uint] = ACTIONS(1928),
    [anon_sym_long] = ACTIONS(1928),
    [anon_sym_ulong] = ACTIONS(1928),
    [anon_sym_char] = ACTIONS(1928),
    [anon_sym_delegate] = ACTIONS(1928),
    [anon_sym_LBRACK] = ACTIONS(1882),
    [sym_const_keyword] = ACTIONS(1928),
    [anon_sym_readonly] = ACTIONS(1928),
    [anon_sym_volatile] = ACTIONS(1928),
    [anon_sym_bool] = ACTIONS(1928),
    [anon_sym_decimal] = ACTIONS(1928),
    [anon_sym_double] = ACTIONS(1928),
    [anon_sym_float] = ACTIONS(1928),
    [anon_sym_object] = ACTIONS(1928),
    [anon_sym_string] = ACTIONS(1928),
    [sym_identifier_name] = ACTIONS(1928),
    [sym_comment] = ACTIONS(38),
  },
  [874] = {
    [anon_sym_RBRACE] = ACTIONS(1914),
    [anon_sym_partial] = ACTIONS(1934),
    [anon_sym_class] = ACTIONS(1934),
    [anon_sym_unsafe] = ACTIONS(1934),
    [anon_sym_abstract] = ACTIONS(1934),
    [anon_sym_sealed] = ACTIONS(1934),
    [anon_sym_static] = ACTIONS(1934),
    [anon_sym_new] = ACTIONS(1934),
    [anon_sym_public] = ACTIONS(1934),
    [anon_sym_protected] = ACTIONS(1934),
    [anon_sym_internal] = ACTIONS(1934),
    [anon_sym_private] = ACTIONS(1934),
    [anon_sym_interface] = ACTIONS(1934),
    [anon_sym_struct] = ACTIONS(1934),
    [anon_sym_enum] = ACTIONS(1934),
    [anon_sym_sbyte] = ACTIONS(1934),
    [anon_sym_byte] = ACTIONS(1934),
    [anon_sym_short] = ACTIONS(1934),
    [anon_sym_ushort] = ACTIONS(1934),
    [anon_sym_int] = ACTIONS(1934),
    [anon_sym_uint] = ACTIONS(1934),
    [anon_sym_long] = ACTIONS(1934),
    [anon_sym_ulong] = ACTIONS(1934),
    [anon_sym_char] = ACTIONS(1934),
    [anon_sym_delegate] = ACTIONS(1934),
    [sym_void_keyword] = ACTIONS(1934),
    [anon_sym_LBRACK] = ACTIONS(1914),
    [sym_const_keyword] = ACTIONS(1934),
    [anon_sym_readonly] = ACTIONS(1934),
    [anon_sym_volatile] = ACTIONS(1934),
    [anon_sym_bool] = ACTIONS(1934),
    [anon_sym_decimal] = ACTIONS(1934),
    [anon_sym_double] = ACTIONS(1934),
    [anon_sym_float] = ACTIONS(1934),
    [anon_sym_object] = ACTIONS(1934),
    [anon_sym_string] = ACTIONS(1934),
    [sym_identifier_name] = ACTIONS(1934),
    [sym_comment] = ACTIONS(38),
    [anon_sym_async] = ACTIONS(1934),
  },
  [875] = {
    [anon_sym_RBRACE] = ACTIONS(1914),
    [anon_sym_partial] = ACTIONS(1934),
    [anon_sym_class] = ACTIONS(1934),
    [anon_sym_unsafe] = ACTIONS(1934),
    [anon_sym_abstract] = ACTIONS(1934),
    [anon_sym_sealed] = ACTIONS(1934),
    [anon_sym_static] = ACTIONS(1934),
    [anon_sym_new] = ACTIONS(1934),
    [anon_sym_public] = ACTIONS(1934),
    [anon_sym_protected] = ACTIONS(1934),
    [anon_sym_internal] = ACTIONS(1934),
    [anon_sym_private] = ACTIONS(1934),
    [anon_sym_interface] = ACTIONS(1934),
    [anon_sym_struct] = ACTIONS(1934),
    [anon_sym_enum] = ACTIONS(1934),
    [anon_sym_sbyte] = ACTIONS(1934),
    [anon_sym_byte] = ACTIONS(1934),
    [anon_sym_short] = ACTIONS(1934),
    [anon_sym_ushort] = ACTIONS(1934),
    [anon_sym_int] = ACTIONS(1934),
    [anon_sym_uint] = ACTIONS(1934),
    [anon_sym_long] = ACTIONS(1934),
    [anon_sym_ulong] = ACTIONS(1934),
    [anon_sym_char] = ACTIONS(1934),
    [anon_sym_delegate] = ACTIONS(1934),
    [anon_sym_LBRACK] = ACTIONS(1914),
    [sym_const_keyword] = ACTIONS(1934),
    [anon_sym_readonly] = ACTIONS(1934),
    [anon_sym_volatile] = ACTIONS(1934),
    [anon_sym_bool] = ACTIONS(1934),
    [anon_sym_decimal] = ACTIONS(1934),
    [anon_sym_double] = ACTIONS(1934),
    [anon_sym_float] = ACTIONS(1934),
    [anon_sym_object] = ACTIONS(1934),
    [anon_sym_string] = ACTIONS(1934),
    [sym_identifier_name] = ACTIONS(1934),
    [sym_comment] = ACTIONS(38),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 2, .reusable = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 0),
  [10] = {.count = 1, .reusable = true}, SHIFT(2),
  [12] = {.count = 1, .reusable = true}, SHIFT(3),
  [14] = {.count = 1, .reusable = true}, SHIFT(4),
  [16] = {.count = 1, .reusable = true}, SHIFT(5),
  [18] = {.count = 1, .reusable = true}, SHIFT(6),
  [20] = {.count = 1, .reusable = true}, SHIFT(7),
  [22] = {.count = 1, .reusable = true}, SHIFT(8),
  [24] = {.count = 1, .reusable = true}, SHIFT(9),
  [26] = {.count = 1, .reusable = true}, SHIFT(10),
  [28] = {.count = 1, .reusable = true}, SHIFT(11),
  [30] = {.count = 1, .reusable = true}, SHIFT(12),
  [32] = {.count = 1, .reusable = true}, SHIFT(13),
  [34] = {.count = 1, .reusable = true}, SHIFT(14),
  [36] = {.count = 1, .reusable = true}, SHIFT(15),
  [38] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 1),
  [42] = {.count = 1, .reusable = true}, SHIFT(35),
  [44] = {.count = 1, .reusable = false}, SHIFT(36),
  [46] = {.count = 1, .reusable = false}, SHIFT(37),
  [48] = {.count = 1, .reusable = false}, SHIFT(38),
  [50] = {.count = 1, .reusable = false}, SHIFT(42),
  [52] = {.count = 1, .reusable = true}, SHIFT(43),
  [54] = {.count = 1, .reusable = true}, SHIFT(44),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym__class_modifiers, 1),
  [58] = {.count = 1, .reusable = true}, SHIFT(45),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym__struct_modifiers, 1),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_delegate_modifier, 1),
  [64] = {.count = 1, .reusable = true}, SHIFT(48),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym__interface_modifiers, 1),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_enum_modifiers, 1),
  [70] = {.count = 1, .reusable = true}, SHIFT(50),
  [72] = {.count = 1, .reusable = true}, SHIFT(51),
  [74] = {.count = 1, .reusable = true}, SHIFT(52),
  [76] = {.count = 1, .reusable = false}, SHIFT(53),
  [78] = {.count = 1, .reusable = false}, SHIFT(54),
  [80] = {.count = 1, .reusable = false}, SHIFT(55),
  [82] = {.count = 1, .reusable = false}, SHIFT(57),
  [84] = {.count = 1, .reusable = false}, SHIFT(58),
  [86] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [88] = {.count = 1, .reusable = true}, SHIFT(61),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_class_modifiers, 1),
  [92] = {.count = 1, .reusable = true}, SHIFT(62),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_interface_modifiers, 1),
  [96] = {.count = 1, .reusable = true}, SHIFT(63),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_struct_modifiers, 1),
  [100] = {.count = 1, .reusable = true}, SHIFT(64),
  [102] = {.count = 1, .reusable = true}, SHIFT(65),
  [104] = {.count = 1, .reusable = true}, SHIFT(74),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym__attributes, 1),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 2),
  [110] = {.count = 1, .reusable = true}, SHIFT(80),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_static, 1),
  [114] = {.count = 1, .reusable = true}, SHIFT(81),
  [116] = {.count = 1, .reusable = true}, SHIFT(82),
  [118] = {.count = 1, .reusable = true}, SHIFT(83),
  [120] = {.count = 1, .reusable = true}, SHIFT(84),
  [122] = {.count = 1, .reusable = false}, SHIFT(85),
  [124] = {.count = 1, .reusable = true}, SHIFT(86),
  [126] = {.count = 1, .reusable = true}, SHIFT(87),
  [128] = {.count = 1, .reusable = true}, SHIFT(88),
  [130] = {.count = 1, .reusable = true}, SHIFT(89),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym__class_modifiers, 2),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__struct_modifiers, 2),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym__interface_modifiers, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(91),
  [140] = {.count = 1, .reusable = true}, SHIFT(93),
  [142] = {.count = 1, .reusable = true}, SHIFT(95),
  [144] = {.count = 1, .reusable = true}, SHIFT(96),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_predefined_type, 1),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_return_type, 1),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym__type, 1),
  [152] = {.count = 1, .reusable = true}, SHIFT(98),
  [154] = {.count = 1, .reusable = true}, SHIFT(99),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1),
  [158] = {.count = 1, .reusable = true}, SHIFT(100),
  [160] = {.count = 1, .reusable = true}, SHIFT(102),
  [162] = {.count = 1, .reusable = true}, SHIFT(103),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_list, 1),
  [166] = {.count = 1, .reusable = true}, SHIFT(105),
  [168] = {.count = 1, .reusable = true}, SHIFT(106),
  [170] = {.count = 1, .reusable = true}, SHIFT(107),
  [172] = {.count = 1, .reusable = true}, SHIFT(108),
  [174] = {.count = 1, .reusable = true}, SHIFT(110),
  [176] = {.count = 1, .reusable = true}, SHIFT(111),
  [178] = {.count = 1, .reusable = true}, SHIFT(112),
  [180] = {.count = 1, .reusable = true}, SHIFT(113),
  [182] = {.count = 1, .reusable = true}, SHIFT(114),
  [184] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(3),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat2, 2), SHIFT_REPEAT(4),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat3, 2), SHIFT_REPEAT(115),
  [199] = {.count = 1, .reusable = true}, SHIFT(58),
  [201] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(5),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(6),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(7),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(8),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(9),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(10),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(11),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(12),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(13),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(14),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(74),
  [236] = {.count = 1, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(74),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 3),
  [243] = {.count = 1, .reusable = true}, SHIFT(118),
  [245] = {.count = 1, .reusable = true}, SHIFT(119),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_using_directive, 3),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_name_equals, 2),
  [251] = {.count = 1, .reusable = true}, SHIFT(120),
  [253] = {.count = 1, .reusable = true}, SHIFT(121),
  [255] = {.count = 1, .reusable = true}, SHIFT(122),
  [257] = {.count = 1, .reusable = true}, SHIFT(124),
  [259] = {.count = 1, .reusable = true}, SHIFT(126),
  [261] = {.count = 1, .reusable = false}, SHIFT(127),
  [263] = {.count = 1, .reusable = false}, SHIFT(128),
  [265] = {.count = 1, .reusable = false}, SHIFT(129),
  [267] = {.count = 1, .reusable = false}, SHIFT(9),
  [269] = {.count = 1, .reusable = false}, SHIFT(130),
  [271] = {.count = 1, .reusable = false}, SHIFT(131),
  [273] = {.count = 1, .reusable = false}, SHIFT(132),
  [275] = {.count = 1, .reusable = false}, SHIFT(133),
  [277] = {.count = 1, .reusable = false}, SHIFT(134),
  [279] = {.count = 1, .reusable = false}, SHIFT(135),
  [281] = {.count = 1, .reusable = false}, SHIFT(136),
  [283] = {.count = 1, .reusable = false}, SHIFT(137),
  [285] = {.count = 1, .reusable = false}, SHIFT(138),
  [287] = {.count = 1, .reusable = false}, SHIFT(139),
  [289] = {.count = 1, .reusable = true}, SHIFT(156),
  [291] = {.count = 1, .reusable = true}, SHIFT(157),
  [293] = {.count = 1, .reusable = false}, SHIFT(158),
  [295] = {.count = 1, .reusable = true}, SHIFT(165),
  [297] = {.count = 1, .reusable = true}, SHIFT(166),
  [299] = {.count = 1, .reusable = false}, SHIFT(167),
  [301] = {.count = 1, .reusable = false}, SHIFT(168),
  [303] = {.count = 1, .reusable = false}, SHIFT(169),
  [305] = {.count = 1, .reusable = false}, SHIFT(170),
  [307] = {.count = 1, .reusable = false}, SHIFT(171),
  [309] = {.count = 1, .reusable = false}, SHIFT(172),
  [311] = {.count = 1, .reusable = false}, SHIFT(173),
  [313] = {.count = 1, .reusable = true}, SHIFT(174),
  [315] = {.count = 1, .reusable = false}, SHIFT(175),
  [317] = {.count = 1, .reusable = true}, SHIFT(186),
  [319] = {.count = 1, .reusable = true}, SHIFT(187),
  [321] = {.count = 1, .reusable = true}, SHIFT(188),
  [323] = {.count = 1, .reusable = true}, SHIFT(192),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_generic_name, 2),
  [327] = {.count = 1, .reusable = true}, SHIFT(193),
  [329] = {.count = 1, .reusable = true}, SHIFT(196),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__attribute_section, 3),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym__attribute_section, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_list, 2),
  [339] = {.count = 1, .reusable = true}, SHIFT(199),
  [341] = {.count = 1, .reusable = true}, SHIFT(202),
  [343] = {.count = 1, .reusable = true}, SHIFT(203),
  [345] = {.count = 1, .reusable = true}, SHIFT(204),
  [347] = {.count = 1, .reusable = true}, SHIFT(205),
  [349] = {.count = 1, .reusable = true}, SHIFT(206),
  [351] = {.count = 1, .reusable = true}, SHIFT(207),
  [353] = {.count = 1, .reusable = true}, SHIFT(208),
  [355] = {.count = 1, .reusable = true}, SHIFT(57),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 4),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_extern_alias_directive, 4),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_alias_qualified_name, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 3),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_using_directive, 4),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_declaration, 4),
  [369] = {.count = 1, .reusable = true}, SHIFT(211),
  [371] = {.count = 1, .reusable = true}, SHIFT(213),
  [373] = {.count = 1, .reusable = true}, SHIFT(215),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 4),
  [377] = {.count = 1, .reusable = true}, SHIFT(216),
  [379] = {.count = 1, .reusable = true}, SHIFT(217),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym__class_modifiers, 1),
  [383] = {.count = 1, .reusable = false}, SHIFT(218),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym__struct_modifiers, 1),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym__field_modifiers, 1),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_delegate_modifier, 1),
  [391] = {.count = 1, .reusable = false}, SHIFT(220),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym__interface_modifiers, 1),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_enum_modifiers, 1),
  [397] = {.count = 2, .reusable = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_method_modifiers, 1),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_method_modifiers, 1),
  [402] = {.count = 1, .reusable = true}, SHIFT(221),
  [404] = {.count = 1, .reusable = true}, SHIFT(222),
  [406] = {.count = 1, .reusable = true}, SHIFT(223),
  [408] = {.count = 1, .reusable = true}, SHIFT(229),
  [410] = {.count = 1, .reusable = true}, SHIFT(230),
  [412] = {.count = 1, .reusable = true}, SHIFT(231),
  [414] = {.count = 1, .reusable = true}, SHIFT(232),
  [416] = {.count = 1, .reusable = true}, SHIFT(233),
  [418] = {.count = 1, .reusable = true}, SHIFT(234),
  [420] = {.count = 1, .reusable = false}, SHIFT(229),
  [422] = {.count = 1, .reusable = false}, SHIFT(216),
  [424] = {.count = 1, .reusable = false}, SHIFT(230),
  [426] = {.count = 1, .reusable = false}, SHIFT(231),
  [428] = {.count = 1, .reusable = false}, SHIFT(232),
  [430] = {.count = 1, .reusable = false}, SHIFT(233),
  [432] = {.count = 1, .reusable = false}, SHIFT(235),
  [434] = {.count = 1, .reusable = false}, SHIFT(236),
  [436] = {.count = 1, .reusable = false}, SHIFT(237),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_field_modifiers, 1),
  [440] = {.count = 1, .reusable = true}, SHIFT(245),
  [442] = {.count = 2, .reusable = true}, REDUCE(sym_return_type, 1), SHIFT(246),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym__attributes, 1),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_type_parameter, 1),
  [449] = {.count = 1, .reusable = true}, SHIFT(250),
  [451] = {.count = 1, .reusable = true}, SHIFT(251),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_interface_declaration, 4),
  [455] = {.count = 1, .reusable = false}, SHIFT(255),
  [457] = {.count = 1, .reusable = true}, SHIFT(257),
  [459] = {.count = 1, .reusable = true}, SHIFT(246),
  [461] = {.count = 1, .reusable = true}, SHIFT(258),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 4),
  [465] = {.count = 1, .reusable = true}, SHIFT(262),
  [467] = {.count = 1, .reusable = true}, SHIFT(263),
  [469] = {.count = 1, .reusable = true}, SHIFT(264),
  [471] = {.count = 1, .reusable = true}, SHIFT(265),
  [473] = {.count = 1, .reusable = true}, SHIFT(266),
  [475] = {.count = 1, .reusable = true}, SHIFT(270),
  [477] = {.count = 1, .reusable = true}, SHIFT(271),
  [479] = {.count = 1, .reusable = true}, SHIFT(272),
  [481] = {.count = 1, .reusable = true}, SHIFT(273),
  [483] = {.count = 1, .reusable = true}, SHIFT(274),
  [485] = {.count = 1, .reusable = false}, SHIFT(270),
  [487] = {.count = 1, .reusable = false}, SHIFT(262),
  [489] = {.count = 1, .reusable = false}, SHIFT(271),
  [491] = {.count = 1, .reusable = false}, SHIFT(272),
  [493] = {.count = 1, .reusable = false}, SHIFT(273),
  [495] = {.count = 1, .reusable = false}, SHIFT(274),
  [497] = {.count = 1, .reusable = false}, SHIFT(275),
  [499] = {.count = 1, .reusable = true}, SHIFT(282),
  [501] = {.count = 1, .reusable = true}, SHIFT(283),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_enum_member_declaration, 1),
  [505] = {.count = 1, .reusable = true}, SHIFT(288),
  [507] = {.count = 1, .reusable = true}, SHIFT(290),
  [509] = {.count = 1, .reusable = true}, SHIFT(291),
  [511] = {.count = 1, .reusable = true}, SHIFT(293),
  [513] = {.count = 1, .reusable = true}, SHIFT(295),
  [515] = {.count = 1, .reusable = true}, SHIFT(296),
  [517] = {.count = 1, .reusable = false}, SHIFT(297),
  [519] = {.count = 1, .reusable = false}, SHIFT(298),
  [521] = {.count = 1, .reusable = true}, SHIFT(299),
  [523] = {.count = 1, .reusable = true}, SHIFT(306),
  [525] = {.count = 1, .reusable = true}, SHIFT(307),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_argument_list, 2),
  [529] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(103),
  [534] = {.count = 1, .reusable = true}, SHIFT(309),
  [536] = {.count = 1, .reusable = true}, SHIFT(310),
  [538] = {.count = 1, .reusable = true}, SHIFT(312),
  [540] = {.count = 1, .reusable = true}, SHIFT(314),
  [542] = {.count = 1, .reusable = true}, SHIFT(317),
  [544] = {.count = 1, .reusable = true}, SHIFT(318),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 5),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_declaration, 5),
  [550] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(4),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(5),
  [556] = {.count = 1, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(6),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(7),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(8),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(9),
  [570] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(10),
  [573] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(11),
  [576] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(12),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(13),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(14),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(74),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 5),
  [590] = {.count = 1, .reusable = true}, SHIFT(319),
  [592] = {.count = 1, .reusable = true}, SHIFT(321),
  [594] = {.count = 1, .reusable = true}, SHIFT(322),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym__field_modifiers, 2),
  [598] = {.count = 1, .reusable = true}, SHIFT(324),
  [600] = {.count = 1, .reusable = true}, SHIFT(326),
  [602] = {.count = 1, .reusable = true}, SHIFT(328),
  [604] = {.count = 1, .reusable = true}, SHIFT(329),
  [606] = {.count = 1, .reusable = true}, SHIFT(330),
  [608] = {.count = 1, .reusable = true}, SHIFT(331),
  [610] = {.count = 1, .reusable = true}, SHIFT(332),
  [612] = {.count = 1, .reusable = true}, SHIFT(335),
  [614] = {.count = 1, .reusable = true}, SHIFT(336),
  [616] = {.count = 1, .reusable = true}, SHIFT(337),
  [618] = {.count = 1, .reusable = true}, SHIFT(338),
  [620] = {.count = 1, .reusable = true}, SHIFT(339),
  [622] = {.count = 1, .reusable = true}, SHIFT(346),
  [624] = {.count = 1, .reusable = true}, SHIFT(347),
  [626] = {.count = 1, .reusable = true}, SHIFT(348),
  [628] = {.count = 1, .reusable = true}, SHIFT(349),
  [630] = {.count = 1, .reusable = true}, SHIFT(350),
  [632] = {.count = 1, .reusable = false}, SHIFT(351),
  [634] = {.count = 1, .reusable = false}, SHIFT(352),
  [636] = {.count = 1, .reusable = false}, SHIFT(353),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_field_declaration, 2),
  [640] = {.count = 1, .reusable = false}, REDUCE(sym_field_declaration, 2),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 1),
  [644] = {.count = 1, .reusable = true}, SHIFT(354),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 2),
  [648] = {.count = 1, .reusable = true}, SHIFT(356),
  [650] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [652] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(127),
  [655] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(128),
  [658] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(129),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(9),
  [664] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(130),
  [667] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(131),
  [670] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(132),
  [673] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(133),
  [676] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(134),
  [679] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(53),
  [682] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(135),
  [685] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(54),
  [688] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(74),
  [691] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(136),
  [694] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(137),
  [697] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(138),
  [700] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(139),
  [703] = {.count = 1, .reusable = false}, REDUCE(aux_sym__attributes_repeat1, 2),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_type_parameter_list, 3),
  [707] = {.count = 1, .reusable = true}, SHIFT(359),
  [709] = {.count = 1, .reusable = true}, SHIFT(361),
  [711] = {.count = 1, .reusable = true}, SHIFT(362),
  [713] = {.count = 1, .reusable = false}, SHIFT(364),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_interface_declaration, 5),
  [717] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [719] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2), SHIFT_REPEAT(137),
  [722] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2), SHIFT_REPEAT(53),
  [725] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_declaration_repeat1, 2), SHIFT_REPEAT(157),
  [728] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2), SHIFT_REPEAT(158),
  [731] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2), SHIFT_REPEAT(55),
  [734] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(157),
  [737] = {.count = 1, .reusable = true}, SHIFT(365),
  [739] = {.count = 1, .reusable = true}, SHIFT(366),
  [741] = {.count = 1, .reusable = true}, SHIFT(367),
  [743] = {.count = 1, .reusable = true}, SHIFT(369),
  [745] = {.count = 1, .reusable = true}, SHIFT(371),
  [747] = {.count = 1, .reusable = true}, SHIFT(373),
  [749] = {.count = 1, .reusable = true}, SHIFT(374),
  [751] = {.count = 1, .reusable = true}, SHIFT(375),
  [753] = {.count = 1, .reusable = true}, SHIFT(376),
  [755] = {.count = 1, .reusable = true}, SHIFT(377),
  [757] = {.count = 1, .reusable = true}, SHIFT(378),
  [759] = {.count = 1, .reusable = true}, SHIFT(379),
  [761] = {.count = 1, .reusable = true}, SHIFT(380),
  [763] = {.count = 1, .reusable = true}, SHIFT(381),
  [765] = {.count = 1, .reusable = true}, SHIFT(384),
  [767] = {.count = 1, .reusable = true}, SHIFT(385),
  [769] = {.count = 1, .reusable = true}, SHIFT(386),
  [771] = {.count = 1, .reusable = true}, SHIFT(387),
  [773] = {.count = 1, .reusable = true}, SHIFT(388),
  [775] = {.count = 1, .reusable = false}, SHIFT(389),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 5),
  [779] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [781] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(167),
  [784] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(168),
  [787] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(129),
  [790] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(9),
  [793] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(130),
  [796] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(169),
  [799] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(170),
  [802] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(171),
  [805] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(172),
  [808] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(53),
  [811] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(173),
  [814] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(174),
  [817] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(175),
  [820] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(137),
  [823] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(55),
  [826] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(174),
  [829] = {.count = 1, .reusable = true}, SHIFT(390),
  [831] = {.count = 1, .reusable = true}, SHIFT(391),
  [833] = {.count = 1, .reusable = true}, SHIFT(392),
  [835] = {.count = 1, .reusable = false}, SHIFT(393),
  [837] = {.count = 1, .reusable = true}, SHIFT(393),
  [839] = {.count = 1, .reusable = false}, SHIFT(394),
  [841] = {.count = 1, .reusable = true}, SHIFT(395),
  [843] = {.count = 1, .reusable = false}, SHIFT(396),
  [845] = {.count = 1, .reusable = true}, SHIFT(397),
  [847] = {.count = 1, .reusable = false}, SHIFT(401),
  [849] = {.count = 1, .reusable = true}, SHIFT(398),
  [851] = {.count = 1, .reusable = true}, SHIFT(399),
  [853] = {.count = 1, .reusable = true}, SHIFT(400),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_enum_member_declaration, 2),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 5),
  [859] = {.count = 1, .reusable = true}, SHIFT(403),
  [861] = {.count = 1, .reusable = true}, SHIFT(405),
  [863] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(187),
  [866] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [868] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_modifier, 1),
  [870] = {.count = 1, .reusable = true}, SHIFT(412),
  [872] = {.count = 1, .reusable = true}, SHIFT(413),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym__formal_parameter_list, 1),
  [876] = {.count = 1, .reusable = true}, SHIFT(298),
  [878] = {.count = 1, .reusable = false}, SHIFT(419),
  [880] = {.count = 1, .reusable = true}, SHIFT(421),
  [882] = {.count = 1, .reusable = true}, REDUCE(sym_delegate_declaration, 5),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym__global_attributes, 5),
  [886] = {.count = 1, .reusable = true}, SHIFT(423),
  [888] = {.count = 1, .reusable = true}, SHIFT(427),
  [890] = {.count = 1, .reusable = true}, SHIFT(428),
  [892] = {.count = 1, .reusable = true}, SHIFT(430),
  [894] = {.count = 1, .reusable = true}, SHIFT(431),
  [896] = {.count = 1, .reusable = true}, SHIFT(432),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 6),
  [900] = {.count = 1, .reusable = true}, SHIFT(434),
  [902] = {.count = 1, .reusable = true}, SHIFT(435),
  [904] = {.count = 1, .reusable = true}, SHIFT(437),
  [906] = {.count = 1, .reusable = true}, SHIFT(439),
  [908] = {.count = 1, .reusable = true}, SHIFT(441),
  [910] = {.count = 1, .reusable = true}, SHIFT(442),
  [912] = {.count = 1, .reusable = true}, SHIFT(444),
  [914] = {.count = 1, .reusable = true}, SHIFT(446),
  [916] = {.count = 1, .reusable = true}, REDUCE(sym_field_declaration, 3),
  [918] = {.count = 1, .reusable = false}, REDUCE(sym_field_declaration, 3),
  [920] = {.count = 1, .reusable = true}, SHIFT(448),
  [922] = {.count = 1, .reusable = true}, SHIFT(449),
  [924] = {.count = 1, .reusable = false}, SHIFT(450),
  [926] = {.count = 1, .reusable = true}, SHIFT(450),
  [928] = {.count = 1, .reusable = false}, SHIFT(453),
  [930] = {.count = 1, .reusable = false}, SHIFT(451),
  [932] = {.count = 1, .reusable = false}, SHIFT(452),
  [934] = {.count = 1, .reusable = true}, REDUCE(sym_constructor_declaration, 3),
  [936] = {.count = 1, .reusable = false}, REDUCE(sym_constructor_declaration, 3),
  [938] = {.count = 1, .reusable = true}, SHIFT(458),
  [940] = {.count = 1, .reusable = true}, SHIFT(461),
  [942] = {.count = 1, .reusable = true}, SHIFT(462),
  [944] = {.count = 1, .reusable = true}, SHIFT(463),
  [946] = {.count = 1, .reusable = true}, SHIFT(465),
  [948] = {.count = 1, .reusable = true}, SHIFT(467),
  [950] = {.count = 1, .reusable = true}, SHIFT(468),
  [952] = {.count = 1, .reusable = true}, SHIFT(469),
  [954] = {.count = 1, .reusable = true}, SHIFT(470),
  [956] = {.count = 1, .reusable = true}, SHIFT(471),
  [958] = {.count = 1, .reusable = false}, SHIFT(476),
  [960] = {.count = 1, .reusable = true}, SHIFT(476),
  [962] = {.count = 1, .reusable = false}, SHIFT(477),
  [964] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 2),
  [966] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 3),
  [968] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym_type_parameter_list, 4),
  [972] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), SHIFT_REPEAT(250),
  [975] = {.count = 1, .reusable = true}, SHIFT(480),
  [977] = {.count = 1, .reusable = true}, REDUCE(sym_interface_declaration, 6),
  [979] = {.count = 1, .reusable = true}, SHIFT(482),
  [981] = {.count = 1, .reusable = true}, SHIFT(484),
  [983] = {.count = 1, .reusable = true}, SHIFT(486),
  [985] = {.count = 1, .reusable = true}, SHIFT(488),
  [987] = {.count = 1, .reusable = true}, SHIFT(489),
  [989] = {.count = 1, .reusable = true}, SHIFT(491),
  [991] = {.count = 1, .reusable = true}, SHIFT(493),
  [993] = {.count = 1, .reusable = true}, SHIFT(495),
  [995] = {.count = 1, .reusable = true}, SHIFT(498),
  [997] = {.count = 1, .reusable = true}, SHIFT(499),
  [999] = {.count = 1, .reusable = true}, SHIFT(500),
  [1001] = {.count = 1, .reusable = true}, SHIFT(501),
  [1003] = {.count = 1, .reusable = true}, SHIFT(502),
  [1005] = {.count = 1, .reusable = true}, SHIFT(503),
  [1007] = {.count = 1, .reusable = true}, SHIFT(504),
  [1009] = {.count = 1, .reusable = true}, SHIFT(505),
  [1011] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 6),
  [1013] = {.count = 1, .reusable = false}, SHIFT(508),
  [1015] = {.count = 1, .reusable = true}, SHIFT(508),
  [1017] = {.count = 1, .reusable = false}, SHIFT(509),
  [1019] = {.count = 1, .reusable = false}, SHIFT(510),
  [1021] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_literal, 1),
  [1023] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_literal, 1),
  [1025] = {.count = 1, .reusable = false}, SHIFT(511),
  [1027] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [1029] = {.count = 1, .reusable = true}, REDUCE(sym_integer_literal, 1),
  [1031] = {.count = 1, .reusable = false}, REDUCE(sym_integer_literal, 1),
  [1033] = {.count = 1, .reusable = true}, SHIFT(512),
  [1035] = {.count = 1, .reusable = true}, SHIFT(513),
  [1037] = {.count = 1, .reusable = true}, SHIFT(514),
  [1039] = {.count = 1, .reusable = true}, SHIFT(515),
  [1041] = {.count = 1, .reusable = true}, SHIFT(516),
  [1043] = {.count = 1, .reusable = false}, SHIFT(518),
  [1045] = {.count = 1, .reusable = false}, SHIFT(517),
  [1047] = {.count = 1, .reusable = false}, SHIFT(519),
  [1049] = {.count = 1, .reusable = true}, REDUCE(sym_equals_value_clause, 2),
  [1051] = {.count = 1, .reusable = true}, SHIFT(520),
  [1053] = {.count = 1, .reusable = true}, SHIFT(521),
  [1055] = {.count = 1, .reusable = true}, SHIFT(522),
  [1057] = {.count = 1, .reusable = true}, SHIFT(523),
  [1059] = {.count = 1, .reusable = false}, SHIFT(524),
  [1061] = {.count = 1, .reusable = true}, SHIFT(525),
  [1063] = {.count = 1, .reusable = false}, SHIFT(525),
  [1065] = {.count = 1, .reusable = true}, SHIFT(526),
  [1067] = {.count = 1, .reusable = true}, SHIFT(527),
  [1069] = {.count = 1, .reusable = false}, SHIFT(527),
  [1071] = {.count = 1, .reusable = false}, SHIFT(528),
  [1073] = {.count = 1, .reusable = true}, SHIFT(528),
  [1075] = {.count = 1, .reusable = true}, SHIFT(529),
  [1077] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 1),
  [1079] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 1),
  [1081] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 6),
  [1083] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [1085] = {.count = 1, .reusable = true}, SHIFT(530),
  [1087] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(291),
  [1090] = {.count = 1, .reusable = true}, REDUCE(sym_enum_member_declaration, 3),
  [1092] = {.count = 1, .reusable = true}, SHIFT(531),
  [1094] = {.count = 1, .reusable = true}, SHIFT(533),
  [1096] = {.count = 1, .reusable = true}, SHIFT(534),
  [1098] = {.count = 1, .reusable = true}, SHIFT(536),
  [1100] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [1102] = {.count = 1, .reusable = true}, SHIFT(537),
  [1104] = {.count = 1, .reusable = true}, REDUCE(sym__formal_parameter_list, 2),
  [1106] = {.count = 1, .reusable = true}, SHIFT(419),
  [1108] = {.count = 1, .reusable = true}, SHIFT(544),
  [1110] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [1112] = {.count = 1, .reusable = true}, SHIFT(547),
  [1114] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(299),
  [1117] = {.count = 1, .reusable = true}, SHIFT(550),
  [1119] = {.count = 1, .reusable = true}, SHIFT(551),
  [1121] = {.count = 1, .reusable = true}, REDUCE(sym_delegate_declaration, 6),
  [1123] = {.count = 1, .reusable = true}, SHIFT(553),
  [1125] = {.count = 1, .reusable = true}, SHIFT(556),
  [1127] = {.count = 1, .reusable = true}, SHIFT(557),
  [1129] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 7),
  [1131] = {.count = 1, .reusable = true}, SHIFT(558),
  [1133] = {.count = 1, .reusable = true}, SHIFT(560),
  [1135] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 4),
  [1137] = {.count = 1, .reusable = false}, REDUCE(sym_interface_declaration, 4),
  [1139] = {.count = 1, .reusable = true}, SHIFT(561),
  [1141] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 4),
  [1143] = {.count = 1, .reusable = true}, SHIFT(563),
  [1145] = {.count = 1, .reusable = true}, SHIFT(565),
  [1147] = {.count = 1, .reusable = true}, SHIFT(567),
  [1149] = {.count = 1, .reusable = true}, SHIFT(568),
  [1151] = {.count = 1, .reusable = true}, REDUCE(sym_empty_statement, 1),
  [1153] = {.count = 1, .reusable = false}, REDUCE(sym_empty_statement, 1),
  [1155] = {.count = 1, .reusable = true}, REDUCE(sym_statement_block, 2),
  [1157] = {.count = 1, .reusable = false}, REDUCE(sym_statement_block, 2),
  [1159] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [1161] = {.count = 1, .reusable = false}, SHIFT(569),
  [1163] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [1165] = {.count = 1, .reusable = false}, SHIFT(571),
  [1167] = {.count = 1, .reusable = true}, SHIFT(572),
  [1169] = {.count = 1, .reusable = true}, SHIFT(573),
  [1171] = {.count = 1, .reusable = true}, SHIFT(574),
  [1173] = {.count = 1, .reusable = true}, SHIFT(575),
  [1175] = {.count = 1, .reusable = true}, SHIFT(576),
  [1177] = {.count = 1, .reusable = false}, SHIFT(577),
  [1179] = {.count = 1, .reusable = true}, SHIFT(578),
  [1181] = {.count = 1, .reusable = false}, SHIFT(578),
  [1183] = {.count = 1, .reusable = true}, SHIFT(579),
  [1185] = {.count = 1, .reusable = true}, SHIFT(580),
  [1187] = {.count = 1, .reusable = false}, SHIFT(580),
  [1189] = {.count = 1, .reusable = false}, SHIFT(581),
  [1191] = {.count = 1, .reusable = true}, SHIFT(581),
  [1193] = {.count = 1, .reusable = true}, SHIFT(582),
  [1195] = {.count = 1, .reusable = true}, SHIFT(583),
  [1197] = {.count = 1, .reusable = true}, REDUCE(sym_constructor_declaration, 4),
  [1199] = {.count = 1, .reusable = false}, REDUCE(sym_constructor_declaration, 4),
  [1201] = {.count = 1, .reusable = true}, SHIFT(588),
  [1203] = {.count = 1, .reusable = true}, SHIFT(589),
  [1205] = {.count = 1, .reusable = true}, SHIFT(591),
  [1207] = {.count = 1, .reusable = true}, REDUCE(sym_method_declaration, 4),
  [1209] = {.count = 1, .reusable = false}, REDUCE(sym_method_declaration, 4),
  [1211] = {.count = 1, .reusable = true}, REDUCE(sym_field_declaration, 4),
  [1213] = {.count = 1, .reusable = false}, REDUCE(sym_field_declaration, 4),
  [1215] = {.count = 1, .reusable = true}, SHIFT(595),
  [1217] = {.count = 1, .reusable = true}, SHIFT(598),
  [1219] = {.count = 1, .reusable = true}, SHIFT(599),
  [1221] = {.count = 1, .reusable = true}, SHIFT(600),
  [1223] = {.count = 1, .reusable = true}, SHIFT(602),
  [1225] = {.count = 1, .reusable = true}, SHIFT(603),
  [1227] = {.count = 1, .reusable = true}, SHIFT(604),
  [1229] = {.count = 1, .reusable = true}, SHIFT(605),
  [1231] = {.count = 1, .reusable = true}, SHIFT(606),
  [1233] = {.count = 1, .reusable = false}, SHIFT(607),
  [1235] = {.count = 1, .reusable = true}, SHIFT(608),
  [1237] = {.count = 1, .reusable = false}, SHIFT(608),
  [1239] = {.count = 1, .reusable = true}, SHIFT(609),
  [1241] = {.count = 1, .reusable = true}, SHIFT(610),
  [1243] = {.count = 1, .reusable = false}, SHIFT(610),
  [1245] = {.count = 1, .reusable = false}, SHIFT(611),
  [1247] = {.count = 1, .reusable = true}, SHIFT(611),
  [1249] = {.count = 1, .reusable = true}, SHIFT(612),
  [1251] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [1253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(356),
  [1256] = {.count = 1, .reusable = true}, SHIFT(613),
  [1258] = {.count = 1, .reusable = true}, SHIFT(614),
  [1260] = {.count = 1, .reusable = true}, SHIFT(616),
  [1262] = {.count = 1, .reusable = true}, SHIFT(617),
  [1264] = {.count = 1, .reusable = true}, SHIFT(619),
  [1266] = {.count = 1, .reusable = true}, SHIFT(621),
  [1268] = {.count = 1, .reusable = true}, SHIFT(623),
  [1270] = {.count = 1, .reusable = true}, SHIFT(624),
  [1272] = {.count = 1, .reusable = true}, SHIFT(626),
  [1274] = {.count = 1, .reusable = true}, SHIFT(627),
  [1276] = {.count = 1, .reusable = true}, SHIFT(629),
  [1278] = {.count = 1, .reusable = true}, SHIFT(631),
  [1280] = {.count = 1, .reusable = true}, SHIFT(634),
  [1282] = {.count = 1, .reusable = true}, SHIFT(635),
  [1284] = {.count = 1, .reusable = true}, SHIFT(636),
  [1286] = {.count = 1, .reusable = true}, SHIFT(637),
  [1288] = {.count = 1, .reusable = true}, SHIFT(638),
  [1290] = {.count = 1, .reusable = true}, SHIFT(639),
  [1292] = {.count = 1, .reusable = true}, SHIFT(640),
  [1294] = {.count = 1, .reusable = true}, SHIFT(641),
  [1296] = {.count = 1, .reusable = false}, SHIFT(642),
  [1298] = {.count = 1, .reusable = true}, SHIFT(643),
  [1300] = {.count = 1, .reusable = false}, SHIFT(643),
  [1302] = {.count = 1, .reusable = true}, SHIFT(644),
  [1304] = {.count = 1, .reusable = true}, SHIFT(645),
  [1306] = {.count = 1, .reusable = false}, SHIFT(645),
  [1308] = {.count = 1, .reusable = false}, SHIFT(646),
  [1310] = {.count = 1, .reusable = true}, SHIFT(646),
  [1312] = {.count = 1, .reusable = true}, SHIFT(647),
  [1314] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [1316] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [1318] = {.count = 1, .reusable = true}, SHIFT(648),
  [1320] = {.count = 1, .reusable = true}, REDUCE(sym_integer_literal, 2),
  [1322] = {.count = 1, .reusable = false}, REDUCE(sym_integer_literal, 2),
  [1324] = {.count = 1, .reusable = true}, SHIFT(649),
  [1326] = {.count = 1, .reusable = true}, REDUCE(sym_real_literal, 2),
  [1328] = {.count = 1, .reusable = false}, REDUCE(sym_real_literal, 2),
  [1330] = {.count = 1, .reusable = true}, SHIFT(650),
  [1332] = {.count = 1, .reusable = true}, SHIFT(651),
  [1334] = {.count = 1, .reusable = true}, REDUCE(sym__regular_string_literal, 2),
  [1336] = {.count = 1, .reusable = false}, REDUCE(sym__regular_string_literal, 2),
  [1338] = {.count = 1, .reusable = false}, SHIFT(653),
  [1340] = {.count = 1, .reusable = false}, SHIFT(652),
  [1342] = {.count = 1, .reusable = true}, SHIFT(654),
  [1344] = {.count = 1, .reusable = false}, SHIFT(655),
  [1346] = {.count = 1, .reusable = true}, SHIFT(655),
  [1348] = {.count = 1, .reusable = false}, SHIFT(656),
  [1350] = {.count = 1, .reusable = false}, SHIFT(657),
  [1352] = {.count = 1, .reusable = false}, SHIFT(658),
  [1354] = {.count = 1, .reusable = false}, SHIFT(659),
  [1356] = {.count = 1, .reusable = false}, SHIFT(660),
  [1358] = {.count = 1, .reusable = false}, SHIFT(661),
  [1360] = {.count = 1, .reusable = false}, SHIFT(662),
  [1362] = {.count = 1, .reusable = false}, SHIFT(663),
  [1364] = {.count = 1, .reusable = false}, SHIFT(664),
  [1366] = {.count = 1, .reusable = false}, SHIFT(665),
  [1368] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 7),
  [1370] = {.count = 1, .reusable = true}, SHIFT(666),
  [1372] = {.count = 1, .reusable = true}, SHIFT(667),
  [1374] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_array, 3),
  [1376] = {.count = 1, .reusable = true}, SHIFT(669),
  [1378] = {.count = 1, .reusable = true}, SHIFT(668),
  [1380] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 2),
  [1382] = {.count = 1, .reusable = true}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2),
  [1384] = {.count = 1, .reusable = true}, REDUCE(sym__formal_parameter_list, 3),
  [1386] = {.count = 2, .reusable = true}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), SHIFT_REPEAT(413),
  [1389] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 3),
  [1391] = {.count = 1, .reusable = true}, SHIFT(673),
  [1393] = {.count = 1, .reusable = true}, SHIFT(674),
  [1395] = {.count = 1, .reusable = false}, SHIFT(675),
  [1397] = {.count = 1, .reusable = true}, SHIFT(675),
  [1399] = {.count = 1, .reusable = false}, SHIFT(676),
  [1401] = {.count = 1, .reusable = true}, SHIFT(677),
  [1403] = {.count = 1, .reusable = true}, REDUCE(sym_interface_declaration, 7),
  [1405] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 7),
  [1407] = {.count = 1, .reusable = true}, SHIFT(680),
  [1409] = {.count = 1, .reusable = true}, SHIFT(681),
  [1411] = {.count = 1, .reusable = true}, REDUCE(sym_delegate_declaration, 7),
  [1413] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 5),
  [1415] = {.count = 1, .reusable = true}, SHIFT(683),
  [1417] = {.count = 1, .reusable = false}, REDUCE(sym_interface_declaration, 5),
  [1419] = {.count = 1, .reusable = true}, SHIFT(685),
  [1421] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 5),
  [1423] = {.count = 1, .reusable = true}, SHIFT(686),
  [1425] = {.count = 1, .reusable = true}, SHIFT(687),
  [1427] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 5),
  [1429] = {.count = 1, .reusable = true}, SHIFT(688),
  [1431] = {.count = 1, .reusable = false}, REDUCE(sym_delegate_declaration, 5),
  [1433] = {.count = 1, .reusable = false}, SHIFT(690),
  [1435] = {.count = 1, .reusable = true}, SHIFT(691),
  [1437] = {.count = 1, .reusable = true}, SHIFT(692),
  [1439] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 2),
  [1441] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 2),
  [1443] = {.count = 1, .reusable = false}, SHIFT(693),
  [1445] = {.count = 1, .reusable = false}, SHIFT(694),
  [1447] = {.count = 1, .reusable = false}, SHIFT(695),
  [1449] = {.count = 1, .reusable = false}, SHIFT(696),
  [1451] = {.count = 1, .reusable = false}, SHIFT(697),
  [1453] = {.count = 1, .reusable = false}, SHIFT(698),
  [1455] = {.count = 1, .reusable = false}, SHIFT(699),
  [1457] = {.count = 1, .reusable = false}, SHIFT(700),
  [1459] = {.count = 1, .reusable = false}, SHIFT(701),
  [1461] = {.count = 1, .reusable = true}, REDUCE(sym_statement_block, 3),
  [1463] = {.count = 1, .reusable = false}, REDUCE(sym_statement_block, 3),
  [1465] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(448),
  [1468] = {.count = 1, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [1470] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(392),
  [1473] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(450),
  [1476] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(450),
  [1479] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(394),
  [1482] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(395),
  [1485] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(396),
  [1488] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(397),
  [1491] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(453),
  [1494] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(398),
  [1497] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(399),
  [1500] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(400),
  [1503] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(451),
  [1506] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(452),
  [1509] = {.count = 1, .reusable = true}, REDUCE(sym_method_declaration, 5),
  [1511] = {.count = 1, .reusable = false}, REDUCE(sym_method_declaration, 5),
  [1513] = {.count = 1, .reusable = true}, SHIFT(703),
  [1515] = {.count = 1, .reusable = true}, SHIFT(707),
  [1517] = {.count = 1, .reusable = true}, SHIFT(708),
  [1519] = {.count = 1, .reusable = true}, REDUCE(sym_constructor_declaration, 5),
  [1521] = {.count = 1, .reusable = false}, REDUCE(sym_constructor_declaration, 5),
  [1523] = {.count = 1, .reusable = true}, SHIFT(711),
  [1525] = {.count = 1, .reusable = true}, SHIFT(712),
  [1527] = {.count = 1, .reusable = true}, SHIFT(713),
  [1529] = {.count = 1, .reusable = true}, REDUCE(sym_field_declaration, 5),
  [1531] = {.count = 1, .reusable = false}, REDUCE(sym_field_declaration, 5),
  [1533] = {.count = 1, .reusable = false}, SHIFT(717),
  [1535] = {.count = 1, .reusable = false}, SHIFT(718),
  [1537] = {.count = 1, .reusable = false}, SHIFT(719),
  [1539] = {.count = 1, .reusable = false}, SHIFT(720),
  [1541] = {.count = 1, .reusable = false}, SHIFT(721),
  [1543] = {.count = 1, .reusable = false}, SHIFT(722),
  [1545] = {.count = 1, .reusable = false}, SHIFT(723),
  [1547] = {.count = 1, .reusable = false}, SHIFT(724),
  [1549] = {.count = 1, .reusable = false}, SHIFT(725),
  [1551] = {.count = 1, .reusable = true}, SHIFT(726),
  [1553] = {.count = 1, .reusable = true}, SHIFT(728),
  [1555] = {.count = 1, .reusable = true}, SHIFT(729),
  [1557] = {.count = 1, .reusable = true}, SHIFT(730),
  [1559] = {.count = 1, .reusable = true}, SHIFT(731),
  [1561] = {.count = 1, .reusable = true}, SHIFT(733),
  [1563] = {.count = 1, .reusable = true}, SHIFT(737),
  [1565] = {.count = 1, .reusable = true}, SHIFT(738),
  [1567] = {.count = 1, .reusable = true}, SHIFT(740),
  [1569] = {.count = 1, .reusable = true}, SHIFT(741),
  [1571] = {.count = 1, .reusable = true}, SHIFT(742),
  [1573] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_expression, 3),
  [1575] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_expression, 3),
  [1577] = {.count = 1, .reusable = false}, SHIFT(744),
  [1579] = {.count = 1, .reusable = false}, SHIFT(745),
  [1581] = {.count = 1, .reusable = false}, SHIFT(746),
  [1583] = {.count = 1, .reusable = false}, SHIFT(747),
  [1585] = {.count = 1, .reusable = false}, SHIFT(748),
  [1587] = {.count = 1, .reusable = false}, SHIFT(749),
  [1589] = {.count = 1, .reusable = false}, SHIFT(750),
  [1591] = {.count = 1, .reusable = false}, SHIFT(751),
  [1593] = {.count = 1, .reusable = false}, SHIFT(752),
  [1595] = {.count = 1, .reusable = true}, REDUCE(sym_character_literal, 3),
  [1597] = {.count = 1, .reusable = false}, REDUCE(sym_character_literal, 3),
  [1599] = {.count = 1, .reusable = true}, REDUCE(sym_real_literal, 3),
  [1601] = {.count = 1, .reusable = false}, REDUCE(sym_real_literal, 3),
  [1603] = {.count = 1, .reusable = true}, SHIFT(753),
  [1605] = {.count = 1, .reusable = true}, SHIFT(754),
  [1607] = {.count = 1, .reusable = true}, REDUCE(sym__regular_string_literal, 3),
  [1609] = {.count = 1, .reusable = false}, REDUCE(sym__regular_string_literal, 3),
  [1611] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2), SHIFT_REPEAT(653),
  [1614] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
  [1616] = {.count = 1, .reusable = true}, REDUCE(sym__verbatim_string_literal, 3),
  [1618] = {.count = 1, .reusable = false}, REDUCE(sym__verbatim_string_literal, 3),
  [1620] = {.count = 1, .reusable = true}, SHIFT(755),
  [1622] = {.count = 1, .reusable = true}, SHIFT(756),
  [1624] = {.count = 1, .reusable = true}, SHIFT(757),
  [1626] = {.count = 1, .reusable = true}, SHIFT(758),
  [1628] = {.count = 1, .reusable = true}, SHIFT(759),
  [1630] = {.count = 1, .reusable = false}, SHIFT(760),
  [1632] = {.count = 1, .reusable = true}, SHIFT(761),
  [1634] = {.count = 1, .reusable = false}, SHIFT(761),
  [1636] = {.count = 1, .reusable = true}, SHIFT(762),
  [1638] = {.count = 1, .reusable = true}, SHIFT(763),
  [1640] = {.count = 1, .reusable = false}, SHIFT(763),
  [1642] = {.count = 1, .reusable = false}, SHIFT(764),
  [1644] = {.count = 1, .reusable = true}, SHIFT(764),
  [1646] = {.count = 1, .reusable = true}, SHIFT(765),
  [1648] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [1650] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [1652] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 8),
  [1654] = {.count = 1, .reusable = true}, SHIFT(766),
  [1656] = {.count = 1, .reusable = true}, REDUCE(sym_array_rank_specifier, 2),
  [1658] = {.count = 1, .reusable = true}, SHIFT(768),
  [1660] = {.count = 1, .reusable = true}, SHIFT(767),
  [1662] = {.count = 1, .reusable = true}, SHIFT(769),
  [1664] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(537),
  [1667] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 4),
  [1669] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_array, 4),
  [1671] = {.count = 1, .reusable = true}, SHIFT(771),
  [1673] = {.count = 1, .reusable = true}, SHIFT(772),
  [1675] = {.count = 1, .reusable = true}, SHIFT(773),
  [1677] = {.count = 1, .reusable = true}, SHIFT(774),
  [1679] = {.count = 1, .reusable = false}, SHIFT(775),
  [1681] = {.count = 1, .reusable = true}, SHIFT(776),
  [1683] = {.count = 1, .reusable = false}, SHIFT(776),
  [1685] = {.count = 1, .reusable = true}, SHIFT(777),
  [1687] = {.count = 1, .reusable = true}, SHIFT(778),
  [1689] = {.count = 1, .reusable = false}, SHIFT(778),
  [1691] = {.count = 1, .reusable = false}, SHIFT(779),
  [1693] = {.count = 1, .reusable = true}, SHIFT(779),
  [1695] = {.count = 1, .reusable = true}, SHIFT(780),
  [1697] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 8),
  [1699] = {.count = 1, .reusable = true}, SHIFT(781),
  [1701] = {.count = 1, .reusable = true}, SHIFT(782),
  [1703] = {.count = 1, .reusable = true}, REDUCE(sym_interface_declaration, 8),
  [1705] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 8),
  [1707] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 6),
  [1709] = {.count = 1, .reusable = true}, SHIFT(784),
  [1711] = {.count = 1, .reusable = false}, REDUCE(sym_interface_declaration, 6),
  [1713] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 6),
  [1715] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 6),
  [1717] = {.count = 1, .reusable = true}, SHIFT(785),
  [1719] = {.count = 1, .reusable = true}, SHIFT(786),
  [1721] = {.count = 1, .reusable = true}, REDUCE(sym_variable_assignment_statement, 3),
  [1723] = {.count = 1, .reusable = false}, REDUCE(sym_variable_assignment_statement, 3),
  [1725] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 3),
  [1727] = {.count = 1, .reusable = false}, REDUCE(sym_return_statement, 3),
  [1729] = {.count = 1, .reusable = true}, SHIFT(788),
  [1731] = {.count = 1, .reusable = true}, REDUCE(sym_method_declaration, 6),
  [1733] = {.count = 1, .reusable = false}, REDUCE(sym_method_declaration, 6),
  [1735] = {.count = 1, .reusable = true}, SHIFT(790),
  [1737] = {.count = 1, .reusable = true}, SHIFT(791),
  [1739] = {.count = 1, .reusable = false}, REDUCE(sym_delegate_declaration, 6),
  [1741] = {.count = 1, .reusable = true}, SHIFT(794),
  [1743] = {.count = 1, .reusable = true}, SHIFT(797),
  [1745] = {.count = 1, .reusable = true}, SHIFT(798),
  [1747] = {.count = 1, .reusable = true}, REDUCE(sym_constructor_declaration, 6),
  [1749] = {.count = 1, .reusable = false}, REDUCE(sym_constructor_declaration, 6),
  [1751] = {.count = 1, .reusable = true}, SHIFT(800),
  [1753] = {.count = 1, .reusable = true}, SHIFT(801),
  [1755] = {.count = 1, .reusable = true}, SHIFT(802),
  [1757] = {.count = 1, .reusable = true}, SHIFT(803),
  [1759] = {.count = 1, .reusable = true}, SHIFT(806),
  [1761] = {.count = 1, .reusable = true}, SHIFT(807),
  [1763] = {.count = 1, .reusable = true}, SHIFT(809),
  [1765] = {.count = 1, .reusable = true}, SHIFT(812),
  [1767] = {.count = 1, .reusable = true}, SHIFT(813),
  [1769] = {.count = 1, .reusable = true}, SHIFT(814),
  [1771] = {.count = 1, .reusable = true}, REDUCE(sym_real_literal, 4),
  [1773] = {.count = 1, .reusable = false}, REDUCE(sym_real_literal, 4),
  [1775] = {.count = 1, .reusable = true}, SHIFT(815),
  [1777] = {.count = 1, .reusable = false}, SHIFT(816),
  [1779] = {.count = 1, .reusable = false}, SHIFT(817),
  [1781] = {.count = 1, .reusable = false}, SHIFT(818),
  [1783] = {.count = 1, .reusable = false}, SHIFT(819),
  [1785] = {.count = 1, .reusable = false}, SHIFT(820),
  [1787] = {.count = 1, .reusable = false}, SHIFT(821),
  [1789] = {.count = 1, .reusable = false}, SHIFT(822),
  [1791] = {.count = 1, .reusable = false}, SHIFT(823),
  [1793] = {.count = 1, .reusable = false}, SHIFT(824),
  [1795] = {.count = 1, .reusable = false}, SHIFT(825),
  [1797] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 9),
  [1799] = {.count = 1, .reusable = true}, REDUCE(sym_array_rank_specifier, 3),
  [1801] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2), SHIFT_REPEAT(768),
  [1804] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
  [1806] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 5),
  [1808] = {.count = 1, .reusable = false}, SHIFT(826),
  [1810] = {.count = 1, .reusable = false}, SHIFT(827),
  [1812] = {.count = 1, .reusable = false}, SHIFT(828),
  [1814] = {.count = 1, .reusable = false}, SHIFT(829),
  [1816] = {.count = 1, .reusable = false}, SHIFT(830),
  [1818] = {.count = 1, .reusable = false}, SHIFT(831),
  [1820] = {.count = 1, .reusable = false}, SHIFT(832),
  [1822] = {.count = 1, .reusable = false}, SHIFT(833),
  [1824] = {.count = 1, .reusable = false}, SHIFT(834),
  [1826] = {.count = 1, .reusable = true}, SHIFT(835),
  [1828] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 9),
  [1830] = {.count = 1, .reusable = true}, SHIFT(836),
  [1832] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 7),
  [1834] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 7),
  [1836] = {.count = 1, .reusable = true}, SHIFT(837),
  [1838] = {.count = 1, .reusable = true}, SHIFT(838),
  [1840] = {.count = 1, .reusable = false}, SHIFT(839),
  [1842] = {.count = 1, .reusable = true}, SHIFT(840),
  [1844] = {.count = 1, .reusable = false}, REDUCE(sym_interface_declaration, 7),
  [1846] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 7),
  [1848] = {.count = 1, .reusable = true}, REDUCE(sym_method_declaration, 7),
  [1850] = {.count = 1, .reusable = false}, REDUCE(sym_method_declaration, 7),
  [1852] = {.count = 1, .reusable = true}, SHIFT(843),
  [1854] = {.count = 1, .reusable = true}, SHIFT(844),
  [1856] = {.count = 1, .reusable = false}, REDUCE(sym_delegate_declaration, 7),
  [1858] = {.count = 1, .reusable = false}, SHIFT(847),
  [1860] = {.count = 1, .reusable = true}, SHIFT(848),
  [1862] = {.count = 1, .reusable = true}, SHIFT(849),
  [1864] = {.count = 1, .reusable = true}, SHIFT(850),
  [1866] = {.count = 1, .reusable = true}, SHIFT(853),
  [1868] = {.count = 1, .reusable = true}, SHIFT(854),
  [1870] = {.count = 1, .reusable = false}, SHIFT(856),
  [1872] = {.count = 1, .reusable = true}, REDUCE(sym_real_literal, 5),
  [1874] = {.count = 1, .reusable = false}, REDUCE(sym_real_literal, 5),
  [1876] = {.count = 1, .reusable = true}, REDUCE(sym_ternary_expression, 5),
  [1878] = {.count = 1, .reusable = true}, SHIFT(857),
  [1880] = {.count = 1, .reusable = true}, SHIFT(858),
  [1882] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 10),
  [1884] = {.count = 1, .reusable = true}, SHIFT(859),
  [1886] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 8),
  [1888] = {.count = 1, .reusable = true}, SHIFT(860),
  [1890] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 8),
  [1892] = {.count = 1, .reusable = true}, SHIFT(861),
  [1894] = {.count = 1, .reusable = true}, SHIFT(862),
  [1896] = {.count = 1, .reusable = false}, REDUCE(sym_interface_declaration, 8),
  [1898] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 8),
  [1900] = {.count = 1, .reusable = true}, REDUCE(sym_method_declaration, 8),
  [1902] = {.count = 1, .reusable = false}, REDUCE(sym_method_declaration, 8),
  [1904] = {.count = 1, .reusable = true}, SHIFT(864),
  [1906] = {.count = 1, .reusable = true}, SHIFT(865),
  [1908] = {.count = 1, .reusable = true}, SHIFT(866),
  [1910] = {.count = 1, .reusable = false}, SHIFT(868),
  [1912] = {.count = 1, .reusable = false}, SHIFT(869),
  [1914] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 11),
  [1916] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 9),
  [1918] = {.count = 1, .reusable = true}, SHIFT(870),
  [1920] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 9),
  [1922] = {.count = 1, .reusable = true}, SHIFT(871),
  [1924] = {.count = 1, .reusable = true}, SHIFT(872),
  [1926] = {.count = 1, .reusable = true}, SHIFT(873),
  [1928] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 10),
  [1930] = {.count = 1, .reusable = true}, SHIFT(874),
  [1932] = {.count = 1, .reusable = true}, SHIFT(875),
  [1934] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 11),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_c_sharp() {
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
