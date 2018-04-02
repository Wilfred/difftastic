#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 849
#define SYMBOL_COUNT 206
#define ALIAS_COUNT 0
#define TOKEN_COUNT 115
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
  anon_sym_class = 9,
  anon_sym_unsafe = 10,
  anon_sym_abstract = 11,
  anon_sym_sealed = 12,
  anon_sym_static = 13,
  anon_sym_new = 14,
  anon_sym_public = 15,
  anon_sym_protected = 16,
  anon_sym_internal = 17,
  anon_sym_private = 18,
  anon_sym_interface = 19,
  anon_sym_struct = 20,
  anon_sym_enum = 21,
  anon_sym_COLON = 22,
  anon_sym_COMMA = 23,
  anon_sym_sbyte = 24,
  anon_sym_byte = 25,
  anon_sym_short = 26,
  anon_sym_ushort = 27,
  anon_sym_int = 28,
  anon_sym_uint = 29,
  anon_sym_long = 30,
  anon_sym_ulong = 31,
  anon_sym_char = 32,
  anon_sym_delegate = 33,
  sym_void_keyword = 34,
  anon_sym_LPAREN = 35,
  anon_sym_RPAREN = 36,
  anon_sym_ref = 37,
  anon_sym_out = 38,
  anon_sym_this = 39,
  sym_params_keyword = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  anon_sym_assembly = 43,
  anon_sym_module = 44,
  sym_const_keyword = 45,
  anon_sym_readonly = 46,
  anon_sym_volatile = 47,
  anon_sym_EQ = 48,
  anon_sym_QMARK = 49,
  anon_sym_AMP_AMP = 50,
  anon_sym_PIPE_PIPE = 51,
  anon_sym_GT_GT = 52,
  anon_sym_LT_LT = 53,
  anon_sym_AMP = 54,
  anon_sym_CARET = 55,
  anon_sym_PIPE = 56,
  anon_sym_PLUS = 57,
  anon_sym_DASH = 58,
  anon_sym_STAR = 59,
  anon_sym_SLASH = 60,
  anon_sym_PERCENT = 61,
  anon_sym_LT = 62,
  anon_sym_LT_EQ = 63,
  anon_sym_EQ_EQ = 64,
  anon_sym_BANG_EQ = 65,
  anon_sym_GT_EQ = 66,
  anon_sym_GT = 67,
  anon_sym_BANG = 68,
  anon_sym_TILDE = 69,
  anon_sym_DASH_DASH = 70,
  anon_sym_PLUS_PLUS = 71,
  anon_sym_typeof = 72,
  anon_sym_sizeof = 73,
  anon_sym_true = 74,
  anon_sym_false = 75,
  anon_sym_SQUOTE = 76,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 77,
  sym__hexadecimal_escape_sequence = 78,
  aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 79,
  aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 80,
  anon_sym_BSLASH_SQUOTE = 81,
  anon_sym_BSLASH_DQUOTE = 82,
  anon_sym_BSLASH_BSLASH = 83,
  anon_sym_BSLASH0 = 84,
  anon_sym_BSLASHa = 85,
  anon_sym_BSLASHb = 86,
  anon_sym_BSLASHf = 87,
  anon_sym_BSLASHn = 88,
  anon_sym_BSLASHr = 89,
  anon_sym_BSLASHt = 90,
  anon_sym_BSLASHv = 91,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 92,
  aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 93,
  sym__integer_type_suffix = 94,
  sym_null_literal = 95,
  anon_sym_DOT = 96,
  sym__real_type_suffix = 97,
  sym__exponent_part = 98,
  anon_sym_DQUOTE = 99,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 100,
  anon_sym_AT_DQUOTE = 101,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 102,
  anon_sym_bool = 103,
  anon_sym_decimal = 104,
  anon_sym_double = 105,
  anon_sym_float = 106,
  anon_sym_object = 107,
  anon_sym_string = 108,
  anon_sym_COLON_COLON = 109,
  sym_global = 110,
  sym_identifier_name = 111,
  sym_comment = 112,
  anon_sym_async = 113,
  anon_sym_return = 114,
  sym_compilation_unit = 115,
  sym__type_declaration = 116,
  sym_extern_alias_directive = 117,
  sym_using_directive = 118,
  sym_namespace_declaration = 119,
  sym_class_declaration = 120,
  sym_class_modifiers = 121,
  sym__class_modifiers = 122,
  sym_interface_declaration = 123,
  sym_interface_modifiers = 124,
  sym__interface_modifiers = 125,
  sym_struct_declaration = 126,
  sym_struct_modifiers = 127,
  sym__struct_modifiers = 128,
  sym_enum_declaration = 129,
  sym_enum_member_declaration = 130,
  sym_enum_modifiers = 131,
  sym__integral_type = 132,
  sym_delegate_declaration = 133,
  sym_delegate_modifier = 134,
  sym_return_type = 135,
  sym_parameter_list = 136,
  sym__formal_parameter_list = 137,
  sym_parameter = 138,
  sym_parameter_modifier = 139,
  sym_parameter_array = 140,
  sym_array_type = 141,
  sym_array_rank_specifier = 142,
  sym__attributes = 143,
  sym__attribute_section = 144,
  sym_attribute_list = 145,
  sym_attribute = 146,
  sym_attribute_argument_list = 147,
  sym__global_attributes = 148,
  sym_field_declaration = 149,
  sym_field_modifiers = 150,
  sym__field_modifiers = 151,
  sym_variable_declaration = 152,
  sym__type = 153,
  sym_generic_name = 154,
  sym_variable_declarator = 155,
  sym_equals_value_clause = 156,
  sym__expression = 157,
  sym_parenthesized_expression = 158,
  sym_ternary_expression = 159,
  sym_binary_expression = 160,
  sym_unary_expression = 161,
  sym__literal = 162,
  sym_boolean_literal = 163,
  sym_character_literal = 164,
  sym__unicode_escape_sequence = 165,
  sym__simple_escape_sequence = 166,
  sym_integer_literal = 167,
  sym_real_literal = 168,
  sym_string_literal = 169,
  sym__regular_string_literal = 170,
  sym__regular_string_literal_character = 171,
  sym__verbatim_string_literal = 172,
  sym_predefined_type = 173,
  sym_type_parameter_list = 174,
  sym_type_parameter = 175,
  sym_qualified_name = 176,
  sym_alias_qualified_name = 177,
  sym_name_equals = 178,
  sym_static = 179,
  sym_constructor_declaration = 180,
  sym_method_declaration = 181,
  sym_method_modifiers = 182,
  sym_statement_block = 183,
  sym__statement = 184,
  sym_expression_statement = 185,
  sym_return_statement = 186,
  sym_variable_assignment_statement = 187,
  sym_empty_statement = 188,
  aux_sym_compilation_unit_repeat1 = 189,
  aux_sym_compilation_unit_repeat2 = 190,
  aux_sym_compilation_unit_repeat3 = 191,
  aux_sym_compilation_unit_repeat4 = 192,
  aux_sym_namespace_declaration_repeat1 = 193,
  aux_sym_class_declaration_repeat1 = 194,
  aux_sym_interface_declaration_repeat1 = 195,
  aux_sym_struct_declaration_repeat1 = 196,
  aux_sym_enum_declaration_repeat1 = 197,
  aux_sym__formal_parameter_list_repeat1 = 198,
  aux_sym_array_rank_specifier_repeat1 = 199,
  aux_sym__attributes_repeat1 = 200,
  aux_sym_attribute_list_repeat1 = 201,
  aux_sym_variable_declaration_repeat1 = 202,
  aux_sym__regular_string_literal_repeat1 = 203,
  aux_sym_type_parameter_list_repeat1 = 204,
  aux_sym_statement_block_repeat1 = 205,
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
        ADVANCE(231);
      if (lookahead == 's')
        ADVANCE(244);
      if (lookahead == 't')
        ADVANCE(275);
      if (lookahead == 'u')
        ADVANCE(287);
      if (lookahead == 'v')
        ADVANCE(308);
      if (lookahead == '{')
        ADVANCE(318);
      if (lookahead == '|')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(321);
      if (lookahead == '~')
        ADVANCE(322);
      if (lookahead == 239)
        ADVANCE(323);
      if (('D' <= lookahead && lookahead <= 'F'))
        ADVANCE(326);
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
        ADVANCE(213);
      if (lookahead == 'u')
        ADVANCE(226);
      END_STATE();
    case 208:
      if (lookahead == 'r')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'a')
        ADVANCE(210);
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
      if (lookahead == 'o')
        ADVANCE(219);
      END_STATE();
    case 214:
      if (lookahead == 'v')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'a')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 't')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 219:
      if (lookahead == 't')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'e')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'c')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 't')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'e')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'd')
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 226:
      if (lookahead == 'b')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'l')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'i')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'c')
        ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 231:
      if (lookahead == 'e')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'a')
        ADVANCE(233);
      if (lookahead == 'f')
        ADVANCE(239);
      if (lookahead == 't')
        ADVANCE(240);
      END_STATE();
    case 233:
      if (lookahead == 'd')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'o')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'n')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'l')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'y')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 240:
      if (lookahead == 'u')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'r')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'n')
        ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 244:
      if (lookahead == 'b')
        ADVANCE(245);
      if (lookahead == 'e')
        ADVANCE(249);
      if (lookahead == 'h')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead == 't')
        ADVANCE(263);
      END_STATE();
    case 245:
      if (lookahead == 'y')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 't')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'e')
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_sbyte);
      END_STATE();
    case 249:
      if (lookahead == 'a')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'l')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'e')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'd')
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 254:
      if (lookahead == 'o')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 258:
      if (lookahead == 'z')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'e')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'o')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'f')
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_sizeof);
      END_STATE();
    case 263:
      if (lookahead == 'a')
        ADVANCE(264);
      if (lookahead == 'r')
        ADVANCE(268);
      END_STATE();
    case 264:
      if (lookahead == 't')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'i')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'c')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 268:
      if (lookahead == 'i')
        ADVANCE(269);
      if (lookahead == 'u')
        ADVANCE(272);
      END_STATE();
    case 269:
      if (lookahead == 'n')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'g')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 272:
      if (lookahead == 'c')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 't')
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 275:
      if (lookahead == 'h')
        ADVANCE(276);
      if (lookahead == 'r')
        ADVANCE(279);
      if (lookahead == 'y')
        ADVANCE(282);
      END_STATE();
    case 276:
      if (lookahead == 'i')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 's')
        ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 279:
      if (lookahead == 'u')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'e')
        ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 282:
      if (lookahead == 'p')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'e')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'o')
        ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 'f')
        ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(44);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'l')
        ADVANCE(291);
      if (lookahead == 'n')
        ADVANCE(295);
      if (lookahead == 's')
        ADVANCE(300);
      END_STATE();
    case 288:
      if (lookahead == 'n')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 't')
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'o')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'n')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'g')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 295:
      if (lookahead == 's')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'a')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'f')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'e')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 300:
      if (lookahead == 'h')
        ADVANCE(301);
      if (lookahead == 'i')
        ADVANCE(305);
      END_STATE();
    case 301:
      if (lookahead == 'o')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'r')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 't')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 305:
      if (lookahead == 'n')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'g')
        ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 308:
      if (lookahead == 'o')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'l')
        ADVANCE(312);
      END_STATE();
    case 310:
      if (lookahead == 'd')
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_void_keyword);
      END_STATE();
    case 312:
      if (lookahead == 'a')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 't')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'i')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'l')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'e')
        ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 323:
      if (lookahead == 187)
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 191)
        ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__real_type_suffix);
      END_STATE();
    case 327:
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
        ADVANCE(328);
      if (lookahead == ':')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(330);
      if (lookahead == '>')
        ADVANCE(331);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(332);
      if (lookahead == 'b')
        ADVANCE(334);
      if (lookahead == 'c')
        ADVANCE(335);
      if (lookahead == 'd')
        ADVANCE(336);
      if (lookahead == 'e')
        ADVANCE(338);
      if (lookahead == 'i')
        ADVANCE(163);
      if (lookahead == 'l')
        ADVANCE(339);
      if (lookahead == 'm')
        ADVANCE(340);
      if (lookahead == 'n')
        ADVANCE(341);
      if (lookahead == 'p')
        ADVANCE(207);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(345);
      if (lookahead == '{')
        ADVANCE(318);
      if (lookahead == '}')
        ADVANCE(321);
      if (lookahead == 239)
        ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(327);
      END_STATE();
    case 328:
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(22);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 332:
      if (lookahead == 'b')
        ADVANCE(81);
      if (lookahead == 'l')
        ADVANCE(88);
      if (lookahead == 's')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 's')
        ADVANCE(93);
      END_STATE();
    case 334:
      if (lookahead == 'y')
        ADVANCE(106);
      END_STATE();
    case 335:
      if (lookahead == 'h')
        ADVANCE(110);
      if (lookahead == 'l')
        ADVANCE(113);
      END_STATE();
    case 336:
      if (lookahead == 'e')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'l')
        ADVANCE(128);
      END_STATE();
    case 338:
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'x')
        ADVANCE(143);
      END_STATE();
    case 339:
      if (lookahead == 'o')
        ADVANCE(176);
      END_STATE();
    case 340:
      if (lookahead == 'o')
        ADVANCE(180);
      END_STATE();
    case 341:
      if (lookahead == 'a')
        ADVANCE(186);
      if (lookahead == 'e')
        ADVANCE(194);
      END_STATE();
    case 342:
      if (lookahead == 'b')
        ADVANCE(245);
      if (lookahead == 'e')
        ADVANCE(249);
      if (lookahead == 'h')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'a')
        ADVANCE(264);
      if (lookahead == 'r')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'u')
        ADVANCE(272);
      END_STATE();
    case 345:
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'l')
        ADVANCE(346);
      if (lookahead == 'n')
        ADVANCE(295);
      if (lookahead == 's')
        ADVANCE(300);
      END_STATE();
    case 346:
      if (lookahead == 'o')
        ADVANCE(292);
      END_STATE();
    case 347:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'g')
        ADVANCE(348);
      if (lookahead == 's')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 361:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'g')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 362:
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 363:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(371);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 's')
        ADVANCE(405);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == 'v')
        ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(365);
      if (lookahead == 'y')
        ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(376);
      if (lookahead == 'o')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'j')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(406);
      if (lookahead == 'h')
        ADVANCE(410);
      if (lookahead == 't')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_sbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(420);
      if (lookahead == 'l')
        ADVANCE(423);
      if (lookahead == 's')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_void_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 436:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'a')
        ADVANCE(437);
      if (lookahead == 'm')
        ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(436);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_assembly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 451:
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '>')
        ADVANCE(331);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 452:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(465);
      if (lookahead == 'd')
        ADVANCE(474);
      if (lookahead == 'e')
        ADVANCE(482);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(486);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(501);
      if (lookahead == 'r')
        ADVANCE(520);
      if (lookahead == 's')
        ADVANCE(528);
      if (lookahead == 'u')
        ADVANCE(539);
      if (lookahead == 'v')
        ADVANCE(545);
      if (lookahead == '}')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(454);
      if (lookahead == 's')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_async);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(372);
      if (lookahead == 'l')
        ADVANCE(466);
      if (lookahead == 'o')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(475);
      if (lookahead == 'o')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'l')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_delegate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(491);
      if (lookahead == 'n')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_internal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'w')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(502);
      if (lookahead == 'u')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(503);
      if (lookahead == 'o')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'v')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(406);
      if (lookahead == 'e')
        ADVANCE(529);
      if (lookahead == 'h')
        ADVANCE(410);
      if (lookahead == 't')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_sealed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(357);
      if (lookahead == 'r')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(416);
      if (lookahead == 'u')
        ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(420);
      if (lookahead == 'l')
        ADVANCE(423);
      if (lookahead == 'n')
        ADVANCE(540);
      if (lookahead == 's')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(434);
      if (lookahead == 'l')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 553:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(371);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 's')
        ADVANCE(405);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(553);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 554:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(555);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(556);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(501);
      if (lookahead == 'r')
        ADVANCE(520);
      if (lookahead == 's')
        ADVANCE(561);
      if (lookahead == 'u')
        ADVANCE(539);
      if (lookahead == 'v')
        ADVANCE(563);
      if (lookahead == '}')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(372);
      if (lookahead == 'o')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(406);
      if (lookahead == 'h')
        ADVANCE(410);
      if (lookahead == 't')
        ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(357);
      if (lookahead == 'r')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 565:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(566);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(465);
      if (lookahead == 'd')
        ADVANCE(474);
      if (lookahead == 'e')
        ADVANCE(482);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(486);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(501);
      if (lookahead == 'r')
        ADVANCE(520);
      if (lookahead == 's')
        ADVANCE(528);
      if (lookahead == 'u')
        ADVANCE(539);
      if (lookahead == 'v')
        ADVANCE(563);
      if (lookahead == '}')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(565);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 567:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'a')
        ADVANCE(566);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(465);
      if (lookahead == 'd')
        ADVANCE(474);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(556);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(501);
      if (lookahead == 'r')
        ADVANCE(520);
      if (lookahead == 's')
        ADVANCE(528);
      if (lookahead == 'u')
        ADVANCE(539);
      if (lookahead == 'v')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 568:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'a')
        ADVANCE(566);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(465);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(556);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(501);
      if (lookahead == 'r')
        ADVANCE(520);
      if (lookahead == 's')
        ADVANCE(569);
      if (lookahead == 'u')
        ADVANCE(539);
      if (lookahead == 'v')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(568);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(406);
      if (lookahead == 'e')
        ADVANCE(529);
      if (lookahead == 'h')
        ADVANCE(410);
      if (lookahead == 't')
        ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 570:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(555);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 's')
        ADVANCE(405);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(570);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 571:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'a')
        ADVANCE(572);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(371);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 's')
        ADVANCE(405);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == 'v')
        ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(571);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 573:
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(371);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'o')
        ADVANCE(574);
      if (lookahead == 'p')
        ADVANCE(577);
      if (lookahead == 'r')
        ADVANCE(583);
      if (lookahead == 's')
        ADVANCE(405);
      if (lookahead == 't')
        ADVANCE(586);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(573);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'u')
        ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_params_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 590:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'a')
        ADVANCE(566);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(465);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(556);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(501);
      if (lookahead == 'r')
        ADVANCE(520);
      if (lookahead == 's')
        ADVANCE(528);
      if (lookahead == 'u')
        ADVANCE(539);
      if (lookahead == 'v')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(590);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 591:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == 'a')
        ADVANCE(566);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(465);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(486);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(501);
      if (lookahead == 'r')
        ADVANCE(520);
      if (lookahead == 's')
        ADVANCE(528);
      if (lookahead == 'u')
        ADVANCE(539);
      if (lookahead == 'v')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(591);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 592:
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == '>')
        ADVANCE(331);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 593:
      if (lookahead == '!')
        ADVANCE(594);
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
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == '@')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(595);
      if (lookahead == 'n')
        ADVANCE(600);
      if (lookahead == 's')
        ADVANCE(604);
      if (lookahead == 't')
        ADVANCE(610);
      if (lookahead == '~')
        ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(593);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'z')
        ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(354);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_sizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(611);
      if (lookahead == 'y')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'p')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 619:
      if (lookahead == '!')
        ADVANCE(594);
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
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '@')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(595);
      if (lookahead == 'n')
        ADVANCE(600);
      if (lookahead == 'r')
        ADVANCE(620);
      if (lookahead == 's')
        ADVANCE(604);
      if (lookahead == 't')
        ADVANCE(610);
      if (lookahead == '}')
        ADVANCE(321);
      if (lookahead == '~')
        ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(619);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 626:
      if (lookahead == '!')
        ADVANCE(627);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(628);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(630);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(631);
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
        ADVANCE(632);
      if (lookahead == 'u')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(626);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm')
        ADVANCE(326);
      END_STATE();
    case 627:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 631:
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 632:
      if (lookahead == 'a')
        ADVANCE(208);
      END_STATE();
    case 633:
      if (lookahead == '/')
        ADVANCE(634);
      if (lookahead == '\\')
        ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(636);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(22);
      END_STATE();
    case 635:
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
    case 636:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 637:
      if (lookahead == '\n')
        SKIP(637);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(638);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(639);
      if (lookahead != 0)
        ADVANCE(639);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(22);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(644);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(642);
      if (lookahead == '/')
        ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(644);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(644);
      if (lookahead != 0)
        ADVANCE(642);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(644);
      if (lookahead == '\"')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(644);
      END_STATE();
    case 647:
      if (lookahead == '/')
        ADVANCE(328);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(371);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'f')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead == 'o')
        ADVANCE(574);
      if (lookahead == 'r')
        ADVANCE(583);
      if (lookahead == 's')
        ADVANCE(405);
      if (lookahead == 't')
        ADVANCE(586);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(647);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 648:
      if (lookahead == '!')
        ADVANCE(627);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(628);
      if (lookahead == '-')
        ADVANCE(629);
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
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(648);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 327},
  [2] = {.lex_state = 327},
  [3] = {.lex_state = 327},
  [4] = {.lex_state = 347},
  [5] = {.lex_state = 361},
  [6] = {.lex_state = 362},
  [7] = {.lex_state = 327},
  [8] = {.lex_state = 327},
  [9] = {.lex_state = 327},
  [10] = {.lex_state = 362},
  [11] = {.lex_state = 362},
  [12] = {.lex_state = 362},
  [13] = {.lex_state = 363},
  [14] = {.lex_state = 436},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 327},
  [17] = {.lex_state = 327},
  [18] = {.lex_state = 327},
  [19] = {.lex_state = 327},
  [20] = {.lex_state = 327},
  [21] = {.lex_state = 327},
  [22] = {.lex_state = 327},
  [23] = {.lex_state = 327},
  [24] = {.lex_state = 327},
  [25] = {.lex_state = 327},
  [26] = {.lex_state = 327},
  [27] = {.lex_state = 327},
  [28] = {.lex_state = 327},
  [29] = {.lex_state = 327},
  [30] = {.lex_state = 327},
  [31] = {.lex_state = 327},
  [32] = {.lex_state = 327},
  [33] = {.lex_state = 327},
  [34] = {.lex_state = 362},
  [35] = {.lex_state = 361},
  [36] = {.lex_state = 327},
  [37] = {.lex_state = 327},
  [38] = {.lex_state = 327},
  [39] = {.lex_state = 327},
  [40] = {.lex_state = 361},
  [41] = {.lex_state = 327},
  [42] = {.lex_state = 327},
  [43] = {.lex_state = 327},
  [44] = {.lex_state = 327},
  [45] = {.lex_state = 327},
  [46] = {.lex_state = 327},
  [47] = {.lex_state = 327},
  [48] = {.lex_state = 327},
  [49] = {.lex_state = 327},
  [50] = {.lex_state = 327},
  [51] = {.lex_state = 451},
  [52] = {.lex_state = 362},
  [53] = {.lex_state = 451},
  [54] = {.lex_state = 362},
  [55] = {.lex_state = 327},
  [56] = {.lex_state = 327},
  [57] = {.lex_state = 327},
  [58] = {.lex_state = 327},
  [59] = {.lex_state = 362},
  [60] = {.lex_state = 362},
  [61] = {.lex_state = 362},
  [62] = {.lex_state = 362},
  [63] = {.lex_state = 363},
  [64] = {.lex_state = 327},
  [65] = {.lex_state = 327},
  [66] = {.lex_state = 327},
  [67] = {.lex_state = 327},
  [68] = {.lex_state = 327},
  [69] = {.lex_state = 327},
  [70] = {.lex_state = 327},
  [71] = {.lex_state = 327},
  [72] = {.lex_state = 362},
  [73] = {.lex_state = 327},
  [74] = {.lex_state = 327},
  [75] = {.lex_state = 327},
  [76] = {.lex_state = 327},
  [77] = {.lex_state = 327},
  [78] = {.lex_state = 327},
  [79] = {.lex_state = 362},
  [80] = {.lex_state = 327},
  [81] = {.lex_state = 361},
  [82] = {.lex_state = 362},
  [83] = {.lex_state = 327},
  [84] = {.lex_state = 327},
  [85] = {.lex_state = 452},
  [86] = {.lex_state = 553},
  [87] = {.lex_state = 327},
  [88] = {.lex_state = 554},
  [89] = {.lex_state = 327},
  [90] = {.lex_state = 565},
  [91] = {.lex_state = 327},
  [92] = {.lex_state = 362},
  [93] = {.lex_state = 327},
  [94] = {.lex_state = 451},
  [95] = {.lex_state = 327},
  [96] = {.lex_state = 362},
  [97] = {.lex_state = 327},
  [98] = {.lex_state = 327},
  [99] = {.lex_state = 452},
  [100] = {.lex_state = 362},
  [101] = {.lex_state = 327},
  [102] = {.lex_state = 327},
  [103] = {.lex_state = 327},
  [104] = {.lex_state = 327},
  [105] = {.lex_state = 327},
  [106] = {.lex_state = 362},
  [107] = {.lex_state = 362},
  [108] = {.lex_state = 362},
  [109] = {.lex_state = 362},
  [110] = {.lex_state = 362},
  [111] = {.lex_state = 363},
  [112] = {.lex_state = 327},
  [113] = {.lex_state = 327},
  [114] = {.lex_state = 327},
  [115] = {.lex_state = 327},
  [116] = {.lex_state = 327},
  [117] = {.lex_state = 327},
  [118] = {.lex_state = 327},
  [119] = {.lex_state = 327},
  [120] = {.lex_state = 327},
  [121] = {.lex_state = 327},
  [122] = {.lex_state = 362},
  [123] = {.lex_state = 567},
  [124] = {.lex_state = 568},
  [125] = {.lex_state = 452},
  [126] = {.lex_state = 362},
  [127] = {.lex_state = 362},
  [128] = {.lex_state = 362},
  [129] = {.lex_state = 363},
  [130] = {.lex_state = 553},
  [131] = {.lex_state = 554},
  [132] = {.lex_state = 362},
  [133] = {.lex_state = 363},
  [134] = {.lex_state = 327},
  [135] = {.lex_state = 327},
  [136] = {.lex_state = 327},
  [137] = {.lex_state = 327},
  [138] = {.lex_state = 327},
  [139] = {.lex_state = 362},
  [140] = {.lex_state = 452},
  [141] = {.lex_state = 570},
  [142] = {.lex_state = 570},
  [143] = {.lex_state = 327},
  [144] = {.lex_state = 362},
  [145] = {.lex_state = 571},
  [146] = {.lex_state = 452},
  [147] = {.lex_state = 452},
  [148] = {.lex_state = 327},
  [149] = {.lex_state = 327},
  [150] = {.lex_state = 452},
  [151] = {.lex_state = 327},
  [152] = {.lex_state = 362},
  [153] = {.lex_state = 553},
  [154] = {.lex_state = 554},
  [155] = {.lex_state = 570},
  [156] = {.lex_state = 327},
  [157] = {.lex_state = 362},
  [158] = {.lex_state = 554},
  [159] = {.lex_state = 554},
  [160] = {.lex_state = 554},
  [161] = {.lex_state = 327},
  [162] = {.lex_state = 362},
  [163] = {.lex_state = 565},
  [164] = {.lex_state = 362},
  [165] = {.lex_state = 362},
  [166] = {.lex_state = 362},
  [167] = {.lex_state = 363},
  [168] = {.lex_state = 362},
  [169] = {.lex_state = 553},
  [170] = {.lex_state = 327},
  [171] = {.lex_state = 327},
  [172] = {.lex_state = 327},
  [173] = {.lex_state = 327},
  [174] = {.lex_state = 327},
  [175] = {.lex_state = 565},
  [176] = {.lex_state = 570},
  [177] = {.lex_state = 327},
  [178] = {.lex_state = 565},
  [179] = {.lex_state = 565},
  [180] = {.lex_state = 565},
  [181] = {.lex_state = 362},
  [182] = {.lex_state = 327},
  [183] = {.lex_state = 327},
  [184] = {.lex_state = 362},
  [185] = {.lex_state = 362},
  [186] = {.lex_state = 327},
  [187] = {.lex_state = 573},
  [188] = {.lex_state = 327},
  [189] = {.lex_state = 327},
  [190] = {.lex_state = 327},
  [191] = {.lex_state = 327},
  [192] = {.lex_state = 327},
  [193] = {.lex_state = 327},
  [194] = {.lex_state = 327},
  [195] = {.lex_state = 327},
  [196] = {.lex_state = 362},
  [197] = {.lex_state = 327},
  [198] = {.lex_state = 327},
  [199] = {.lex_state = 327},
  [200] = {.lex_state = 327},
  [201] = {.lex_state = 327},
  [202] = {.lex_state = 327},
  [203] = {.lex_state = 362},
  [204] = {.lex_state = 327},
  [205] = {.lex_state = 327},
  [206] = {.lex_state = 327},
  [207] = {.lex_state = 327},
  [208] = {.lex_state = 590},
  [209] = {.lex_state = 570},
  [210] = {.lex_state = 591},
  [211] = {.lex_state = 327},
  [212] = {.lex_state = 327},
  [213] = {.lex_state = 327},
  [214] = {.lex_state = 362},
  [215] = {.lex_state = 327},
  [216] = {.lex_state = 327},
  [217] = {.lex_state = 362},
  [218] = {.lex_state = 362},
  [219] = {.lex_state = 362},
  [220] = {.lex_state = 362},
  [221] = {.lex_state = 362},
  [222] = {.lex_state = 362},
  [223] = {.lex_state = 363},
  [224] = {.lex_state = 327},
  [225] = {.lex_state = 553},
  [226] = {.lex_state = 362},
  [227] = {.lex_state = 363},
  [228] = {.lex_state = 327},
  [229] = {.lex_state = 327},
  [230] = {.lex_state = 327},
  [231] = {.lex_state = 327},
  [232] = {.lex_state = 327},
  [233] = {.lex_state = 570},
  [234] = {.lex_state = 571},
  [235] = {.lex_state = 452},
  [236] = {.lex_state = 327},
  [237] = {.lex_state = 327},
  [238] = {.lex_state = 327},
  [239] = {.lex_state = 452},
  [240] = {.lex_state = 452},
  [241] = {.lex_state = 553},
  [242] = {.lex_state = 592},
  [243] = {.lex_state = 327},
  [244] = {.lex_state = 452},
  [245] = {.lex_state = 327},
  [246] = {.lex_state = 327},
  [247] = {.lex_state = 553},
  [248] = {.lex_state = 570},
  [249] = {.lex_state = 554},
  [250] = {.lex_state = 327},
  [251] = {.lex_state = 554},
  [252] = {.lex_state = 554},
  [253] = {.lex_state = 554},
  [254] = {.lex_state = 327},
  [255] = {.lex_state = 327},
  [256] = {.lex_state = 327},
  [257] = {.lex_state = 327},
  [258] = {.lex_state = 362},
  [259] = {.lex_state = 327},
  [260] = {.lex_state = 327},
  [261] = {.lex_state = 362},
  [262] = {.lex_state = 362},
  [263] = {.lex_state = 362},
  [264] = {.lex_state = 362},
  [265] = {.lex_state = 363},
  [266] = {.lex_state = 553},
  [267] = {.lex_state = 327},
  [268] = {.lex_state = 327},
  [269] = {.lex_state = 327},
  [270] = {.lex_state = 327},
  [271] = {.lex_state = 327},
  [272] = {.lex_state = 570},
  [273] = {.lex_state = 565},
  [274] = {.lex_state = 327},
  [275] = {.lex_state = 565},
  [276] = {.lex_state = 565},
  [277] = {.lex_state = 565},
  [278] = {.lex_state = 327},
  [279] = {.lex_state = 593},
  [280] = {.lex_state = 327},
  [281] = {.lex_state = 327},
  [282] = {.lex_state = 362},
  [283] = {.lex_state = 327},
  [284] = {.lex_state = 327},
  [285] = {.lex_state = 362},
  [286] = {.lex_state = 362},
  [287] = {.lex_state = 327},
  [288] = {.lex_state = 553},
  [289] = {.lex_state = 553},
  [290] = {.lex_state = 362},
  [291] = {.lex_state = 327},
  [292] = {.lex_state = 327},
  [293] = {.lex_state = 553},
  [294] = {.lex_state = 573},
  [295] = {.lex_state = 362},
  [296] = {.lex_state = 573},
  [297] = {.lex_state = 327},
  [298] = {.lex_state = 327},
  [299] = {.lex_state = 452},
  [300] = {.lex_state = 554},
  [301] = {.lex_state = 565},
  [302] = {.lex_state = 327},
  [303] = {.lex_state = 327},
  [304] = {.lex_state = 327},
  [305] = {.lex_state = 327},
  [306] = {.lex_state = 327},
  [307] = {.lex_state = 327},
  [308] = {.lex_state = 327},
  [309] = {.lex_state = 327},
  [310] = {.lex_state = 452},
  [311] = {.lex_state = 327},
  [312] = {.lex_state = 554},
  [313] = {.lex_state = 327},
  [314] = {.lex_state = 565},
  [315] = {.lex_state = 327},
  [316] = {.lex_state = 362},
  [317] = {.lex_state = 327},
  [318] = {.lex_state = 327},
  [319] = {.lex_state = 452},
  [320] = {.lex_state = 619},
  [321] = {.lex_state = 452},
  [322] = {.lex_state = 327},
  [323] = {.lex_state = 327},
  [324] = {.lex_state = 327},
  [325] = {.lex_state = 327},
  [326] = {.lex_state = 327},
  [327] = {.lex_state = 327},
  [328] = {.lex_state = 362},
  [329] = {.lex_state = 327},
  [330] = {.lex_state = 327},
  [331] = {.lex_state = 327},
  [332] = {.lex_state = 362},
  [333] = {.lex_state = 362},
  [334] = {.lex_state = 362},
  [335] = {.lex_state = 362},
  [336] = {.lex_state = 362},
  [337] = {.lex_state = 362},
  [338] = {.lex_state = 363},
  [339] = {.lex_state = 553},
  [340] = {.lex_state = 362},
  [341] = {.lex_state = 363},
  [342] = {.lex_state = 593},
  [343] = {.lex_state = 327},
  [344] = {.lex_state = 362},
  [345] = {.lex_state = 327},
  [346] = {.lex_state = 327},
  [347] = {.lex_state = 592},
  [348] = {.lex_state = 327},
  [349] = {.lex_state = 327},
  [350] = {.lex_state = 554},
  [351] = {.lex_state = 554},
  [352] = {.lex_state = 327},
  [353] = {.lex_state = 553},
  [354] = {.lex_state = 327},
  [355] = {.lex_state = 452},
  [356] = {.lex_state = 327},
  [357] = {.lex_state = 554},
  [358] = {.lex_state = 327},
  [359] = {.lex_state = 565},
  [360] = {.lex_state = 327},
  [361] = {.lex_state = 362},
  [362] = {.lex_state = 327},
  [363] = {.lex_state = 327},
  [364] = {.lex_state = 565},
  [365] = {.lex_state = 565},
  [366] = {.lex_state = 327},
  [367] = {.lex_state = 327},
  [368] = {.lex_state = 327},
  [369] = {.lex_state = 327},
  [370] = {.lex_state = 362},
  [371] = {.lex_state = 327},
  [372] = {.lex_state = 362},
  [373] = {.lex_state = 362},
  [374] = {.lex_state = 362},
  [375] = {.lex_state = 362},
  [376] = {.lex_state = 363},
  [377] = {.lex_state = 553},
  [378] = {.lex_state = 327},
  [379] = {.lex_state = 362},
  [380] = {.lex_state = 593},
  [381] = {.lex_state = 593},
  [382] = {.lex_state = 626},
  [383] = {.lex_state = 633},
  [384] = {.lex_state = 626},
  [385] = {.lex_state = 626},
  [386] = {.lex_state = 593},
  [387] = {.lex_state = 637},
  [388] = {.lex_state = 640},
  [389] = {.lex_state = 626},
  [390] = {.lex_state = 626},
  [391] = {.lex_state = 327},
  [392] = {.lex_state = 327},
  [393] = {.lex_state = 327},
  [394] = {.lex_state = 327},
  [395] = {.lex_state = 327},
  [396] = {.lex_state = 327},
  [397] = {.lex_state = 362},
  [398] = {.lex_state = 327},
  [399] = {.lex_state = 327},
  [400] = {.lex_state = 327},
  [401] = {.lex_state = 647},
  [402] = {.lex_state = 327},
  [403] = {.lex_state = 327},
  [404] = {.lex_state = 327},
  [405] = {.lex_state = 327},
  [406] = {.lex_state = 362},
  [407] = {.lex_state = 553},
  [408] = {.lex_state = 553},
  [409] = {.lex_state = 327},
  [410] = {.lex_state = 573},
  [411] = {.lex_state = 452},
  [412] = {.lex_state = 554},
  [413] = {.lex_state = 565},
  [414] = {.lex_state = 327},
  [415] = {.lex_state = 362},
  [416] = {.lex_state = 327},
  [417] = {.lex_state = 452},
  [418] = {.lex_state = 554},
  [419] = {.lex_state = 565},
  [420] = {.lex_state = 327},
  [421] = {.lex_state = 327},
  [422] = {.lex_state = 452},
  [423] = {.lex_state = 452},
  [424] = {.lex_state = 452},
  [425] = {.lex_state = 452},
  [426] = {.lex_state = 554},
  [427] = {.lex_state = 554},
  [428] = {.lex_state = 452},
  [429] = {.lex_state = 565},
  [430] = {.lex_state = 565},
  [431] = {.lex_state = 327},
  [432] = {.lex_state = 327},
  [433] = {.lex_state = 327},
  [434] = {.lex_state = 619},
  [435] = {.lex_state = 452},
  [436] = {.lex_state = 593},
  [437] = {.lex_state = 648},
  [438] = {.lex_state = 593},
  [439] = {.lex_state = 626},
  [440] = {.lex_state = 619},
  [441] = {.lex_state = 452},
  [442] = {.lex_state = 327},
  [443] = {.lex_state = 327},
  [444] = {.lex_state = 327},
  [445] = {.lex_state = 327},
  [446] = {.lex_state = 327},
  [447] = {.lex_state = 362},
  [448] = {.lex_state = 327},
  [449] = {.lex_state = 327},
  [450] = {.lex_state = 452},
  [451] = {.lex_state = 452},
  [452] = {.lex_state = 327},
  [453] = {.lex_state = 327},
  [454] = {.lex_state = 327},
  [455] = {.lex_state = 327},
  [456] = {.lex_state = 327},
  [457] = {.lex_state = 327},
  [458] = {.lex_state = 362},
  [459] = {.lex_state = 327},
  [460] = {.lex_state = 362},
  [461] = {.lex_state = 362},
  [462] = {.lex_state = 593},
  [463] = {.lex_state = 626},
  [464] = {.lex_state = 327},
  [465] = {.lex_state = 327},
  [466] = {.lex_state = 554},
  [467] = {.lex_state = 327},
  [468] = {.lex_state = 565},
  [469] = {.lex_state = 452},
  [470] = {.lex_state = 452},
  [471] = {.lex_state = 565},
  [472] = {.lex_state = 554},
  [473] = {.lex_state = 554},
  [474] = {.lex_state = 565},
  [475] = {.lex_state = 565},
  [476] = {.lex_state = 565},
  [477] = {.lex_state = 327},
  [478] = {.lex_state = 327},
  [479] = {.lex_state = 327},
  [480] = {.lex_state = 327},
  [481] = {.lex_state = 327},
  [482] = {.lex_state = 327},
  [483] = {.lex_state = 362},
  [484] = {.lex_state = 327},
  [485] = {.lex_state = 327},
  [486] = {.lex_state = 565},
  [487] = {.lex_state = 327},
  [488] = {.lex_state = 327},
  [489] = {.lex_state = 327},
  [490] = {.lex_state = 327},
  [491] = {.lex_state = 362},
  [492] = {.lex_state = 327},
  [493] = {.lex_state = 593},
  [494] = {.lex_state = 626},
  [495] = {.lex_state = 626},
  [496] = {.lex_state = 327},
  [497] = {.lex_state = 626},
  [498] = {.lex_state = 593},
  [499] = {.lex_state = 626},
  [500] = {.lex_state = 626},
  [501] = {.lex_state = 626},
  [502] = {.lex_state = 626},
  [503] = {.lex_state = 637},
  [504] = {.lex_state = 327},
  [505] = {.lex_state = 593},
  [506] = {.lex_state = 593},
  [507] = {.lex_state = 593},
  [508] = {.lex_state = 593},
  [509] = {.lex_state = 593},
  [510] = {.lex_state = 593},
  [511] = {.lex_state = 593},
  [512] = {.lex_state = 593},
  [513] = {.lex_state = 593},
  [514] = {.lex_state = 593},
  [515] = {.lex_state = 327},
  [516] = {.lex_state = 327},
  [517] = {.lex_state = 327},
  [518] = {.lex_state = 327},
  [519] = {.lex_state = 327},
  [520] = {.lex_state = 362},
  [521] = {.lex_state = 573},
  [522] = {.lex_state = 362},
  [523] = {.lex_state = 327},
  [524] = {.lex_state = 647},
  [525] = {.lex_state = 647},
  [526] = {.lex_state = 327},
  [527] = {.lex_state = 327},
  [528] = {.lex_state = 327},
  [529] = {.lex_state = 327},
  [530] = {.lex_state = 362},
  [531] = {.lex_state = 362},
  [532] = {.lex_state = 593},
  [533] = {.lex_state = 327},
  [534] = {.lex_state = 327},
  [535] = {.lex_state = 327},
  [536] = {.lex_state = 327},
  [537] = {.lex_state = 327},
  [538] = {.lex_state = 452},
  [539] = {.lex_state = 554},
  [540] = {.lex_state = 565},
  [541] = {.lex_state = 362},
  [542] = {.lex_state = 327},
  [543] = {.lex_state = 452},
  [544] = {.lex_state = 452},
  [545] = {.lex_state = 452},
  [546] = {.lex_state = 554},
  [547] = {.lex_state = 452},
  [548] = {.lex_state = 565},
  [549] = {.lex_state = 452},
  [550] = {.lex_state = 327},
  [551] = {.lex_state = 362},
  [552] = {.lex_state = 452},
  [553] = {.lex_state = 593},
  [554] = {.lex_state = 327},
  [555] = {.lex_state = 626},
  [556] = {.lex_state = 619},
  [557] = {.lex_state = 593},
  [558] = {.lex_state = 593},
  [559] = {.lex_state = 593},
  [560] = {.lex_state = 593},
  [561] = {.lex_state = 593},
  [562] = {.lex_state = 593},
  [563] = {.lex_state = 593},
  [564] = {.lex_state = 593},
  [565] = {.lex_state = 593},
  [566] = {.lex_state = 593},
  [567] = {.lex_state = 452},
  [568] = {.lex_state = 619},
  [569] = {.lex_state = 452},
  [570] = {.lex_state = 327},
  [571] = {.lex_state = 452},
  [572] = {.lex_state = 554},
  [573] = {.lex_state = 565},
  [574] = {.lex_state = 327},
  [575] = {.lex_state = 327},
  [576] = {.lex_state = 327},
  [577] = {.lex_state = 452},
  [578] = {.lex_state = 327},
  [579] = {.lex_state = 327},
  [580] = {.lex_state = 327},
  [581] = {.lex_state = 327},
  [582] = {.lex_state = 327},
  [583] = {.lex_state = 327},
  [584] = {.lex_state = 452},
  [585] = {.lex_state = 327},
  [586] = {.lex_state = 327},
  [587] = {.lex_state = 593},
  [588] = {.lex_state = 593},
  [589] = {.lex_state = 593},
  [590] = {.lex_state = 593},
  [591] = {.lex_state = 593},
  [592] = {.lex_state = 593},
  [593] = {.lex_state = 593},
  [594] = {.lex_state = 593},
  [595] = {.lex_state = 593},
  [596] = {.lex_state = 593},
  [597] = {.lex_state = 554},
  [598] = {.lex_state = 565},
  [599] = {.lex_state = 452},
  [600] = {.lex_state = 565},
  [601] = {.lex_state = 554},
  [602] = {.lex_state = 565},
  [603] = {.lex_state = 565},
  [604] = {.lex_state = 565},
  [605] = {.lex_state = 327},
  [606] = {.lex_state = 362},
  [607] = {.lex_state = 565},
  [608] = {.lex_state = 452},
  [609] = {.lex_state = 554},
  [610] = {.lex_state = 565},
  [611] = {.lex_state = 327},
  [612] = {.lex_state = 327},
  [613] = {.lex_state = 327},
  [614] = {.lex_state = 327},
  [615] = {.lex_state = 327},
  [616] = {.lex_state = 327},
  [617] = {.lex_state = 327},
  [618] = {.lex_state = 327},
  [619] = {.lex_state = 565},
  [620] = {.lex_state = 626},
  [621] = {.lex_state = 593},
  [622] = {.lex_state = 593},
  [623] = {.lex_state = 593},
  [624] = {.lex_state = 593},
  [625] = {.lex_state = 593},
  [626] = {.lex_state = 593},
  [627] = {.lex_state = 593},
  [628] = {.lex_state = 593},
  [629] = {.lex_state = 593},
  [630] = {.lex_state = 593},
  [631] = {.lex_state = 626},
  [632] = {.lex_state = 626},
  [633] = {.lex_state = 626},
  [634] = {.lex_state = 626},
  [635] = {.lex_state = 626},
  [636] = {.lex_state = 637},
  [637] = {.lex_state = 626},
  [638] = {.lex_state = 593},
  [639] = {.lex_state = 626},
  [640] = {.lex_state = 626},
  [641] = {.lex_state = 626},
  [642] = {.lex_state = 626},
  [643] = {.lex_state = 626},
  [644] = {.lex_state = 626},
  [645] = {.lex_state = 626},
  [646] = {.lex_state = 626},
  [647] = {.lex_state = 626},
  [648] = {.lex_state = 626},
  [649] = {.lex_state = 327},
  [650] = {.lex_state = 327},
  [651] = {.lex_state = 362},
  [652] = {.lex_state = 327},
  [653] = {.lex_state = 327},
  [654] = {.lex_state = 647},
  [655] = {.lex_state = 327},
  [656] = {.lex_state = 327},
  [657] = {.lex_state = 327},
  [658] = {.lex_state = 593},
  [659] = {.lex_state = 626},
  [660] = {.lex_state = 327},
  [661] = {.lex_state = 327},
  [662] = {.lex_state = 327},
  [663] = {.lex_state = 327},
  [664] = {.lex_state = 327},
  [665] = {.lex_state = 452},
  [666] = {.lex_state = 452},
  [667] = {.lex_state = 452},
  [668] = {.lex_state = 452},
  [669] = {.lex_state = 452},
  [670] = {.lex_state = 327},
  [671] = {.lex_state = 626},
  [672] = {.lex_state = 619},
  [673] = {.lex_state = 619},
  [674] = {.lex_state = 626},
  [675] = {.lex_state = 626},
  [676] = {.lex_state = 626},
  [677] = {.lex_state = 626},
  [678] = {.lex_state = 626},
  [679] = {.lex_state = 626},
  [680] = {.lex_state = 626},
  [681] = {.lex_state = 626},
  [682] = {.lex_state = 626},
  [683] = {.lex_state = 452},
  [684] = {.lex_state = 452},
  [685] = {.lex_state = 554},
  [686] = {.lex_state = 565},
  [687] = {.lex_state = 327},
  [688] = {.lex_state = 362},
  [689] = {.lex_state = 452},
  [690] = {.lex_state = 327},
  [691] = {.lex_state = 452},
  [692] = {.lex_state = 554},
  [693] = {.lex_state = 565},
  [694] = {.lex_state = 327},
  [695] = {.lex_state = 327},
  [696] = {.lex_state = 452},
  [697] = {.lex_state = 327},
  [698] = {.lex_state = 626},
  [699] = {.lex_state = 626},
  [700] = {.lex_state = 626},
  [701] = {.lex_state = 626},
  [702] = {.lex_state = 626},
  [703] = {.lex_state = 626},
  [704] = {.lex_state = 626},
  [705] = {.lex_state = 626},
  [706] = {.lex_state = 626},
  [707] = {.lex_state = 565},
  [708] = {.lex_state = 565},
  [709] = {.lex_state = 565},
  [710] = {.lex_state = 565},
  [711] = {.lex_state = 565},
  [712] = {.lex_state = 327},
  [713] = {.lex_state = 452},
  [714] = {.lex_state = 554},
  [715] = {.lex_state = 565},
  [716] = {.lex_state = 327},
  [717] = {.lex_state = 362},
  [718] = {.lex_state = 565},
  [719] = {.lex_state = 452},
  [720] = {.lex_state = 554},
  [721] = {.lex_state = 565},
  [722] = {.lex_state = 327},
  [723] = {.lex_state = 327},
  [724] = {.lex_state = 626},
  [725] = {.lex_state = 626},
  [726] = {.lex_state = 626},
  [727] = {.lex_state = 626},
  [728] = {.lex_state = 626},
  [729] = {.lex_state = 626},
  [730] = {.lex_state = 626},
  [731] = {.lex_state = 626},
  [732] = {.lex_state = 626},
  [733] = {.lex_state = 626},
  [734] = {.lex_state = 626},
  [735] = {.lex_state = 593},
  [736] = {.lex_state = 593},
  [737] = {.lex_state = 593},
  [738] = {.lex_state = 593},
  [739] = {.lex_state = 593},
  [740] = {.lex_state = 593},
  [741] = {.lex_state = 593},
  [742] = {.lex_state = 593},
  [743] = {.lex_state = 593},
  [744] = {.lex_state = 593},
  [745] = {.lex_state = 593},
  [746] = {.lex_state = 327},
  [747] = {.lex_state = 362},
  [748] = {.lex_state = 327},
  [749] = {.lex_state = 647},
  [750] = {.lex_state = 327},
  [751] = {.lex_state = 593},
  [752] = {.lex_state = 593},
  [753] = {.lex_state = 593},
  [754] = {.lex_state = 593},
  [755] = {.lex_state = 593},
  [756] = {.lex_state = 593},
  [757] = {.lex_state = 593},
  [758] = {.lex_state = 593},
  [759] = {.lex_state = 593},
  [760] = {.lex_state = 593},
  [761] = {.lex_state = 327},
  [762] = {.lex_state = 327},
  [763] = {.lex_state = 452},
  [764] = {.lex_state = 452},
  [765] = {.lex_state = 327},
  [766] = {.lex_state = 593},
  [767] = {.lex_state = 452},
  [768] = {.lex_state = 452},
  [769] = {.lex_state = 452},
  [770] = {.lex_state = 327},
  [771] = {.lex_state = 452},
  [772] = {.lex_state = 452},
  [773] = {.lex_state = 554},
  [774] = {.lex_state = 565},
  [775] = {.lex_state = 362},
  [776] = {.lex_state = 452},
  [777] = {.lex_state = 327},
  [778] = {.lex_state = 593},
  [779] = {.lex_state = 565},
  [780] = {.lex_state = 565},
  [781] = {.lex_state = 327},
  [782] = {.lex_state = 565},
  [783] = {.lex_state = 565},
  [784] = {.lex_state = 565},
  [785] = {.lex_state = 327},
  [786] = {.lex_state = 452},
  [787] = {.lex_state = 554},
  [788] = {.lex_state = 565},
  [789] = {.lex_state = 362},
  [790] = {.lex_state = 565},
  [791] = {.lex_state = 593},
  [792] = {.lex_state = 626},
  [793] = {.lex_state = 626},
  [794] = {.lex_state = 626},
  [795] = {.lex_state = 626},
  [796] = {.lex_state = 626},
  [797] = {.lex_state = 626},
  [798] = {.lex_state = 626},
  [799] = {.lex_state = 626},
  [800] = {.lex_state = 626},
  [801] = {.lex_state = 626},
  [802] = {.lex_state = 626},
  [803] = {.lex_state = 626},
  [804] = {.lex_state = 626},
  [805] = {.lex_state = 626},
  [806] = {.lex_state = 626},
  [807] = {.lex_state = 626},
  [808] = {.lex_state = 626},
  [809] = {.lex_state = 626},
  [810] = {.lex_state = 626},
  [811] = {.lex_state = 626},
  [812] = {.lex_state = 327},
  [813] = {.lex_state = 327},
  [814] = {.lex_state = 452},
  [815] = {.lex_state = 452},
  [816] = {.lex_state = 626},
  [817] = {.lex_state = 327},
  [818] = {.lex_state = 452},
  [819] = {.lex_state = 452},
  [820] = {.lex_state = 452},
  [821] = {.lex_state = 327},
  [822] = {.lex_state = 452},
  [823] = {.lex_state = 626},
  [824] = {.lex_state = 565},
  [825] = {.lex_state = 565},
  [826] = {.lex_state = 327},
  [827] = {.lex_state = 565},
  [828] = {.lex_state = 565},
  [829] = {.lex_state = 565},
  [830] = {.lex_state = 327},
  [831] = {.lex_state = 626},
  [832] = {.lex_state = 593},
  [833] = {.lex_state = 593},
  [834] = {.lex_state = 327},
  [835] = {.lex_state = 452},
  [836] = {.lex_state = 452},
  [837] = {.lex_state = 327},
  [838] = {.lex_state = 565},
  [839] = {.lex_state = 565},
  [840] = {.lex_state = 327},
  [841] = {.lex_state = 626},
  [842] = {.lex_state = 626},
  [843] = {.lex_state = 452},
  [844] = {.lex_state = 452},
  [845] = {.lex_state = 565},
  [846] = {.lex_state = 565},
  [847] = {.lex_state = 452},
  [848] = {.lex_state = 565},
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
    [sym_compilation_unit] = STATE(15),
    [sym__type_declaration] = STATE(28),
    [sym_extern_alias_directive] = STATE(25),
    [sym_using_directive] = STATE(26),
    [sym_namespace_declaration] = STATE(28),
    [sym_class_declaration] = STATE(28),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(28),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(28),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(28),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(28),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(27),
    [aux_sym_compilation_unit_repeat1] = STATE(25),
    [aux_sym_compilation_unit_repeat2] = STATE(26),
    [aux_sym_compilation_unit_repeat3] = STATE(27),
    [aux_sym_compilation_unit_repeat4] = STATE(28),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(8),
    [anon_sym_1] = ACTIONS(10),
    [anon_sym_extern] = ACTIONS(12),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [2] = {
    [sym__type_declaration] = STATE(33),
    [sym_extern_alias_directive] = STATE(30),
    [sym_using_directive] = STATE(31),
    [sym_namespace_declaration] = STATE(33),
    [sym_class_declaration] = STATE(33),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(33),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(33),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(33),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(33),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(32),
    [aux_sym_compilation_unit_repeat1] = STATE(30),
    [aux_sym_compilation_unit_repeat2] = STATE(31),
    [aux_sym_compilation_unit_repeat3] = STATE(32),
    [aux_sym_compilation_unit_repeat4] = STATE(33),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_extern] = ACTIONS(12),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [3] = {
    [anon_sym_alias] = ACTIONS(40),
    [sym_comment] = ACTIONS(36),
  },
  [4] = {
    [sym_qualified_name] = STATE(38),
    [sym_alias_qualified_name] = STATE(39),
    [sym_name_equals] = STATE(40),
    [sym_static] = STATE(40),
    [anon_sym_static] = ACTIONS(42),
    [sym_global] = ACTIONS(44),
    [sym_identifier_name] = ACTIONS(46),
    [sym_comment] = ACTIONS(36),
  },
  [5] = {
    [sym_qualified_name] = STATE(41),
    [sym_alias_qualified_name] = STATE(39),
    [sym_global] = ACTIONS(44),
    [sym_identifier_name] = ACTIONS(48),
    [sym_comment] = ACTIONS(36),
  },
  [6] = {
    [sym_identifier_name] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
  },
  [7] = {
    [sym__class_modifiers] = STATE(44),
    [sym__struct_modifiers] = STATE(45),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_unsafe] = ACTIONS(54),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(54),
    [anon_sym_public] = ACTIONS(54),
    [anon_sym_protected] = ACTIONS(54),
    [anon_sym_internal] = ACTIONS(54),
    [anon_sym_private] = ACTIONS(54),
    [anon_sym_struct] = ACTIONS(56),
    [anon_sym_delegate] = ACTIONS(58),
    [sym_comment] = ACTIONS(36),
  },
  [8] = {
    [sym__class_modifiers] = STATE(44),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(22),
    [anon_sym_public] = ACTIONS(22),
    [anon_sym_protected] = ACTIONS(22),
    [anon_sym_internal] = ACTIONS(22),
    [anon_sym_private] = ACTIONS(22),
    [sym_comment] = ACTIONS(36),
  },
  [9] = {
    [sym__class_modifiers] = STATE(44),
    [sym__interface_modifiers] = STATE(47),
    [sym__struct_modifiers] = STATE(45),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_unsafe] = ACTIONS(54),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(60),
    [anon_sym_public] = ACTIONS(60),
    [anon_sym_protected] = ACTIONS(60),
    [anon_sym_internal] = ACTIONS(60),
    [anon_sym_private] = ACTIONS(60),
    [anon_sym_interface] = ACTIONS(62),
    [anon_sym_struct] = ACTIONS(56),
    [anon_sym_enum] = ACTIONS(64),
    [anon_sym_delegate] = ACTIONS(58),
    [sym_comment] = ACTIONS(36),
  },
  [10] = {
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(36),
  },
  [11] = {
    [sym_identifier_name] = ACTIONS(68),
    [sym_comment] = ACTIONS(36),
  },
  [12] = {
    [sym_identifier_name] = ACTIONS(70),
    [sym_comment] = ACTIONS(36),
  },
  [13] = {
    [sym_return_type] = STATE(54),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [14] = {
    [sym_attribute_list] = STATE(57),
    [sym_attribute] = STATE(58),
    [anon_sym_assembly] = ACTIONS(78),
    [anon_sym_module] = ACTIONS(78),
    [sym_identifier_name] = ACTIONS(80),
    [sym_comment] = ACTIONS(36),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_comment] = ACTIONS(36),
  },
  [16] = {
    [anon_sym_class] = ACTIONS(84),
    [sym_comment] = ACTIONS(36),
  },
  [17] = {
    [anon_sym_class] = ACTIONS(86),
    [sym_comment] = ACTIONS(36),
  },
  [18] = {
    [anon_sym_interface] = ACTIONS(88),
    [sym_comment] = ACTIONS(36),
  },
  [19] = {
    [anon_sym_interface] = ACTIONS(90),
    [sym_comment] = ACTIONS(36),
  },
  [20] = {
    [anon_sym_struct] = ACTIONS(92),
    [sym_comment] = ACTIONS(36),
  },
  [21] = {
    [anon_sym_struct] = ACTIONS(94),
    [sym_comment] = ACTIONS(36),
  },
  [22] = {
    [anon_sym_enum] = ACTIONS(96),
    [sym_comment] = ACTIONS(36),
  },
  [23] = {
    [anon_sym_delegate] = ACTIONS(98),
    [sym_comment] = ACTIONS(36),
  },
  [24] = {
    [sym_class_modifiers] = STATE(64),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_modifiers] = STATE(65),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_modifiers] = STATE(66),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_modifiers] = STATE(67),
    [sym_delegate_modifier] = STATE(68),
    [anon_sym_class] = ACTIONS(84),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(88),
    [anon_sym_struct] = ACTIONS(92),
    [anon_sym_enum] = ACTIONS(96),
    [anon_sym_delegate] = ACTIONS(98),
    [sym_comment] = ACTIONS(36),
  },
  [25] = {
    [sym__type_declaration] = STATE(33),
    [sym_extern_alias_directive] = STATE(69),
    [sym_using_directive] = STATE(31),
    [sym_namespace_declaration] = STATE(33),
    [sym_class_declaration] = STATE(33),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(33),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(33),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(33),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(33),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(32),
    [aux_sym_compilation_unit_repeat1] = STATE(69),
    [aux_sym_compilation_unit_repeat2] = STATE(31),
    [aux_sym_compilation_unit_repeat3] = STATE(32),
    [aux_sym_compilation_unit_repeat4] = STATE(33),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_extern] = ACTIONS(12),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [26] = {
    [sym__type_declaration] = STATE(33),
    [sym_using_directive] = STATE(70),
    [sym_namespace_declaration] = STATE(33),
    [sym_class_declaration] = STATE(33),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(33),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(33),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(33),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(33),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(32),
    [aux_sym_compilation_unit_repeat2] = STATE(70),
    [aux_sym_compilation_unit_repeat3] = STATE(32),
    [aux_sym_compilation_unit_repeat4] = STATE(33),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [27] = {
    [sym__type_declaration] = STATE(33),
    [sym_namespace_declaration] = STATE(33),
    [sym_class_declaration] = STATE(33),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(33),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(33),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(33),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(33),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(71),
    [aux_sym_compilation_unit_repeat3] = STATE(71),
    [aux_sym_compilation_unit_repeat4] = STATE(33),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [28] = {
    [sym__type_declaration] = STATE(73),
    [sym_namespace_declaration] = STATE(73),
    [sym_class_declaration] = STATE(73),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(73),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(73),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(73),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(73),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [aux_sym_compilation_unit_repeat4] = STATE(73),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(36),
  },
  [29] = {
    [sym__attribute_section] = STATE(74),
    [aux_sym__attributes_repeat1] = STATE(74),
    [anon_sym_class] = ACTIONS(102),
    [anon_sym_unsafe] = ACTIONS(102),
    [anon_sym_abstract] = ACTIONS(102),
    [anon_sym_sealed] = ACTIONS(102),
    [anon_sym_static] = ACTIONS(102),
    [anon_sym_new] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_protected] = ACTIONS(102),
    [anon_sym_internal] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_interface] = ACTIONS(102),
    [anon_sym_struct] = ACTIONS(102),
    [anon_sym_enum] = ACTIONS(102),
    [anon_sym_delegate] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(36),
  },
  [30] = {
    [sym__type_declaration] = STATE(77),
    [sym_extern_alias_directive] = STATE(69),
    [sym_using_directive] = STATE(75),
    [sym_namespace_declaration] = STATE(77),
    [sym_class_declaration] = STATE(77),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(77),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(77),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(77),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(77),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(76),
    [aux_sym_compilation_unit_repeat1] = STATE(69),
    [aux_sym_compilation_unit_repeat2] = STATE(75),
    [aux_sym_compilation_unit_repeat3] = STATE(76),
    [aux_sym_compilation_unit_repeat4] = STATE(77),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_extern] = ACTIONS(12),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [31] = {
    [sym__type_declaration] = STATE(77),
    [sym_using_directive] = STATE(70),
    [sym_namespace_declaration] = STATE(77),
    [sym_class_declaration] = STATE(77),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(77),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(77),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(77),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(77),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(76),
    [aux_sym_compilation_unit_repeat2] = STATE(70),
    [aux_sym_compilation_unit_repeat3] = STATE(76),
    [aux_sym_compilation_unit_repeat4] = STATE(77),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [32] = {
    [sym__type_declaration] = STATE(77),
    [sym_namespace_declaration] = STATE(77),
    [sym_class_declaration] = STATE(77),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(77),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(77),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(77),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(77),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(71),
    [aux_sym_compilation_unit_repeat3] = STATE(71),
    [aux_sym_compilation_unit_repeat4] = STATE(77),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [33] = {
    [sym__type_declaration] = STATE(73),
    [sym_namespace_declaration] = STATE(73),
    [sym_class_declaration] = STATE(73),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(73),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(73),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(73),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(73),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [aux_sym_compilation_unit_repeat4] = STATE(73),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(36),
  },
  [34] = {
    [sym_identifier_name] = ACTIONS(106),
    [sym_comment] = ACTIONS(36),
  },
  [35] = {
    [sym_global] = ACTIONS(108),
    [sym_identifier_name] = ACTIONS(108),
    [sym_comment] = ACTIONS(36),
  },
  [36] = {
    [anon_sym_COLON_COLON] = ACTIONS(110),
    [sym_comment] = ACTIONS(36),
  },
  [37] = {
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [39] = {
    [anon_sym_DOT] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [40] = {
    [sym_qualified_name] = STATE(83),
    [sym_alias_qualified_name] = STATE(39),
    [sym_global] = ACTIONS(44),
    [sym_identifier_name] = ACTIONS(118),
    [sym_comment] = ACTIONS(36),
  },
  [41] = {
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [42] = {
    [sym_type_parameter_list] = STATE(87),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [43] = {
    [sym__class_modifiers] = STATE(44),
    [sym__struct_modifiers] = STATE(45),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_unsafe] = ACTIONS(54),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(54),
    [anon_sym_public] = ACTIONS(54),
    [anon_sym_protected] = ACTIONS(54),
    [anon_sym_internal] = ACTIONS(54),
    [anon_sym_private] = ACTIONS(54),
    [anon_sym_struct] = ACTIONS(56),
    [sym_comment] = ACTIONS(36),
  },
  [44] = {
    [anon_sym_class] = ACTIONS(126),
    [sym_comment] = ACTIONS(36),
  },
  [45] = {
    [anon_sym_struct] = ACTIONS(128),
    [sym_comment] = ACTIONS(36),
  },
  [46] = {
    [sym__class_modifiers] = STATE(44),
    [sym__interface_modifiers] = STATE(47),
    [sym__struct_modifiers] = STATE(45),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_unsafe] = ACTIONS(54),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(60),
    [anon_sym_public] = ACTIONS(60),
    [anon_sym_protected] = ACTIONS(60),
    [anon_sym_internal] = ACTIONS(60),
    [anon_sym_private] = ACTIONS(60),
    [anon_sym_interface] = ACTIONS(62),
    [anon_sym_struct] = ACTIONS(56),
    [sym_comment] = ACTIONS(36),
  },
  [47] = {
    [anon_sym_interface] = ACTIONS(130),
    [sym_comment] = ACTIONS(36),
  },
  [48] = {
    [sym_type_parameter_list] = STATE(89),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [49] = {
    [sym_type_parameter_list] = STATE(91),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [50] = {
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(138),
    [sym_comment] = ACTIONS(36),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [sym_identifier_name] = ACTIONS(140),
    [sym_comment] = ACTIONS(36),
  },
  [52] = {
    [sym_identifier_name] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [53] = {
    [sym_type_parameter_list] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(144),
    [sym_identifier_name] = ACTIONS(144),
    [sym_comment] = ACTIONS(36),
  },
  [54] = {
    [sym_identifier_name] = ACTIONS(146),
    [sym_comment] = ACTIONS(36),
  },
  [55] = {
    [anon_sym_COLON] = ACTIONS(148),
    [sym_comment] = ACTIONS(36),
  },
  [56] = {
    [sym_attribute_argument_list] = STATE(98),
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(150),
    [sym_comment] = ACTIONS(36),
  },
  [57] = {
    [anon_sym_RBRACK] = ACTIONS(154),
    [sym_comment] = ACTIONS(36),
  },
  [58] = {
    [aux_sym_attribute_list_repeat1] = STATE(101),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(158),
    [sym_comment] = ACTIONS(36),
  },
  [59] = {
    [sym_identifier_name] = ACTIONS(160),
    [sym_comment] = ACTIONS(36),
  },
  [60] = {
    [sym_identifier_name] = ACTIONS(162),
    [sym_comment] = ACTIONS(36),
  },
  [61] = {
    [sym_identifier_name] = ACTIONS(164),
    [sym_comment] = ACTIONS(36),
  },
  [62] = {
    [sym_identifier_name] = ACTIONS(166),
    [sym_comment] = ACTIONS(36),
  },
  [63] = {
    [sym_return_type] = STATE(106),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [64] = {
    [anon_sym_class] = ACTIONS(168),
    [sym_comment] = ACTIONS(36),
  },
  [65] = {
    [anon_sym_interface] = ACTIONS(170),
    [sym_comment] = ACTIONS(36),
  },
  [66] = {
    [anon_sym_struct] = ACTIONS(172),
    [sym_comment] = ACTIONS(36),
  },
  [67] = {
    [anon_sym_enum] = ACTIONS(174),
    [sym_comment] = ACTIONS(36),
  },
  [68] = {
    [anon_sym_delegate] = ACTIONS(176),
    [sym_comment] = ACTIONS(36),
  },
  [69] = {
    [sym_extern_alias_directive] = STATE(69),
    [aux_sym_compilation_unit_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_extern] = ACTIONS(180),
    [anon_sym_using] = ACTIONS(178),
    [anon_sym_namespace] = ACTIONS(178),
    [anon_sym_class] = ACTIONS(178),
    [anon_sym_unsafe] = ACTIONS(178),
    [anon_sym_abstract] = ACTIONS(178),
    [anon_sym_sealed] = ACTIONS(178),
    [anon_sym_static] = ACTIONS(178),
    [anon_sym_new] = ACTIONS(178),
    [anon_sym_public] = ACTIONS(178),
    [anon_sym_protected] = ACTIONS(178),
    [anon_sym_internal] = ACTIONS(178),
    [anon_sym_private] = ACTIONS(178),
    [anon_sym_interface] = ACTIONS(178),
    [anon_sym_struct] = ACTIONS(178),
    [anon_sym_enum] = ACTIONS(178),
    [anon_sym_delegate] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(178),
    [sym_comment] = ACTIONS(36),
  },
  [70] = {
    [sym_using_directive] = STATE(70),
    [aux_sym_compilation_unit_repeat2] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_using] = ACTIONS(185),
    [anon_sym_namespace] = ACTIONS(183),
    [anon_sym_class] = ACTIONS(183),
    [anon_sym_unsafe] = ACTIONS(183),
    [anon_sym_abstract] = ACTIONS(183),
    [anon_sym_sealed] = ACTIONS(183),
    [anon_sym_static] = ACTIONS(183),
    [anon_sym_new] = ACTIONS(183),
    [anon_sym_public] = ACTIONS(183),
    [anon_sym_protected] = ACTIONS(183),
    [anon_sym_internal] = ACTIONS(183),
    [anon_sym_private] = ACTIONS(183),
    [anon_sym_interface] = ACTIONS(183),
    [anon_sym_struct] = ACTIONS(183),
    [anon_sym_enum] = ACTIONS(183),
    [anon_sym_delegate] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [sym_comment] = ACTIONS(36),
  },
  [71] = {
    [sym__global_attributes] = STATE(71),
    [aux_sym_compilation_unit_repeat3] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_namespace] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(188),
    [anon_sym_unsafe] = ACTIONS(188),
    [anon_sym_abstract] = ACTIONS(188),
    [anon_sym_sealed] = ACTIONS(188),
    [anon_sym_static] = ACTIONS(188),
    [anon_sym_new] = ACTIONS(188),
    [anon_sym_public] = ACTIONS(188),
    [anon_sym_protected] = ACTIONS(188),
    [anon_sym_internal] = ACTIONS(188),
    [anon_sym_private] = ACTIONS(188),
    [anon_sym_interface] = ACTIONS(188),
    [anon_sym_struct] = ACTIONS(188),
    [anon_sym_enum] = ACTIONS(188),
    [anon_sym_delegate] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(190),
    [sym_comment] = ACTIONS(36),
  },
  [72] = {
    [sym_attribute_list] = STATE(57),
    [sym_attribute] = STATE(58),
    [sym_identifier_name] = ACTIONS(193),
    [sym_comment] = ACTIONS(36),
  },
  [73] = {
    [sym__type_declaration] = STATE(73),
    [sym_namespace_declaration] = STATE(73),
    [sym_class_declaration] = STATE(73),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(73),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(73),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(73),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(73),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [aux_sym_compilation_unit_repeat4] = STATE(73),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_namespace] = ACTIONS(197),
    [anon_sym_class] = ACTIONS(200),
    [anon_sym_unsafe] = ACTIONS(203),
    [anon_sym_abstract] = ACTIONS(206),
    [anon_sym_sealed] = ACTIONS(206),
    [anon_sym_static] = ACTIONS(206),
    [anon_sym_new] = ACTIONS(209),
    [anon_sym_public] = ACTIONS(209),
    [anon_sym_protected] = ACTIONS(209),
    [anon_sym_internal] = ACTIONS(209),
    [anon_sym_private] = ACTIONS(209),
    [anon_sym_interface] = ACTIONS(212),
    [anon_sym_struct] = ACTIONS(215),
    [anon_sym_enum] = ACTIONS(218),
    [anon_sym_delegate] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(224),
    [sym_comment] = ACTIONS(36),
  },
  [74] = {
    [sym__attribute_section] = STATE(74),
    [aux_sym__attributes_repeat1] = STATE(74),
    [anon_sym_class] = ACTIONS(227),
    [anon_sym_unsafe] = ACTIONS(227),
    [anon_sym_abstract] = ACTIONS(227),
    [anon_sym_sealed] = ACTIONS(227),
    [anon_sym_static] = ACTIONS(227),
    [anon_sym_new] = ACTIONS(227),
    [anon_sym_public] = ACTIONS(227),
    [anon_sym_protected] = ACTIONS(227),
    [anon_sym_internal] = ACTIONS(227),
    [anon_sym_private] = ACTIONS(227),
    [anon_sym_interface] = ACTIONS(227),
    [anon_sym_struct] = ACTIONS(227),
    [anon_sym_enum] = ACTIONS(227),
    [anon_sym_delegate] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(229),
    [sym_comment] = ACTIONS(36),
  },
  [75] = {
    [sym__type_declaration] = STATE(114),
    [sym_using_directive] = STATE(70),
    [sym_namespace_declaration] = STATE(114),
    [sym_class_declaration] = STATE(114),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(114),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(114),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(114),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(114),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(113),
    [aux_sym_compilation_unit_repeat2] = STATE(70),
    [aux_sym_compilation_unit_repeat3] = STATE(113),
    [aux_sym_compilation_unit_repeat4] = STATE(114),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [76] = {
    [sym__type_declaration] = STATE(114),
    [sym_namespace_declaration] = STATE(114),
    [sym_class_declaration] = STATE(114),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(114),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(114),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(114),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(114),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(71),
    [aux_sym_compilation_unit_repeat3] = STATE(71),
    [aux_sym_compilation_unit_repeat4] = STATE(114),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [77] = {
    [sym__type_declaration] = STATE(73),
    [sym_namespace_declaration] = STATE(73),
    [sym_class_declaration] = STATE(73),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(73),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(73),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(73),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(73),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [aux_sym_compilation_unit_repeat4] = STATE(73),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(36),
  },
  [78] = {
    [anon_sym_SEMI] = ACTIONS(234),
    [sym_comment] = ACTIONS(36),
  },
  [79] = {
    [sym_identifier_name] = ACTIONS(236),
    [sym_comment] = ACTIONS(36),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_using] = ACTIONS(238),
    [anon_sym_namespace] = ACTIONS(238),
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(238),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(238),
    [anon_sym_sealed] = ACTIONS(238),
    [anon_sym_static] = ACTIONS(238),
    [anon_sym_new] = ACTIONS(238),
    [anon_sym_public] = ACTIONS(238),
    [anon_sym_protected] = ACTIONS(238),
    [anon_sym_internal] = ACTIONS(238),
    [anon_sym_private] = ACTIONS(238),
    [anon_sym_interface] = ACTIONS(238),
    [anon_sym_struct] = ACTIONS(238),
    [anon_sym_enum] = ACTIONS(238),
    [anon_sym_delegate] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(238),
    [sym_comment] = ACTIONS(36),
  },
  [81] = {
    [sym_global] = ACTIONS(240),
    [sym_identifier_name] = ACTIONS(240),
    [sym_comment] = ACTIONS(36),
  },
  [82] = {
    [sym_identifier_name] = ACTIONS(242),
    [sym_comment] = ACTIONS(36),
  },
  [83] = {
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [84] = {
    [sym__type_declaration] = STATE(120),
    [sym_using_directive] = STATE(120),
    [sym_namespace_declaration] = STATE(120),
    [sym_class_declaration] = STATE(120),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(120),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(120),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(120),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(120),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [aux_sym_namespace_declaration_repeat1] = STATE(120),
    [aux_sym__attributes_repeat1] = STATE(29),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(36),
  },
  [85] = {
    [sym__type_declaration] = STATE(146),
    [sym_class_declaration] = STATE(146),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(146),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(146),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(146),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(146),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(146),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(146),
    [sym_method_declaration] = STATE(146),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(146),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [86] = {
    [sym__type] = STATE(148),
    [sym_generic_name] = STATE(148),
    [sym_predefined_type] = STATE(148),
    [sym_type_parameter] = STATE(149),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [87] = {
    [anon_sym_LBRACE] = ACTIONS(276),
    [sym_comment] = ACTIONS(36),
  },
  [88] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(158),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [89] = {
    [anon_sym_LBRACE] = ACTIONS(284),
    [sym_comment] = ACTIONS(36),
  },
  [90] = {
    [sym__type_declaration] = STATE(178),
    [sym_class_declaration] = STATE(178),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(178),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(178),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(178),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(178),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(178),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(178),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(286),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [91] = {
    [anon_sym_LBRACE] = ACTIONS(304),
    [sym_comment] = ACTIONS(36),
  },
  [92] = {
    [sym_enum_member_declaration] = STATE(183),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [93] = {
    [sym__integral_type] = STATE(186),
    [anon_sym_sbyte] = ACTIONS(310),
    [anon_sym_byte] = ACTIONS(310),
    [anon_sym_short] = ACTIONS(310),
    [anon_sym_ushort] = ACTIONS(310),
    [anon_sym_int] = ACTIONS(310),
    [anon_sym_uint] = ACTIONS(310),
    [anon_sym_long] = ACTIONS(310),
    [anon_sym_ulong] = ACTIONS(310),
    [anon_sym_char] = ACTIONS(310),
    [sym_comment] = ACTIONS(36),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(312),
    [sym_identifier_name] = ACTIONS(312),
    [sym_comment] = ACTIONS(36),
  },
  [95] = {
    [sym_parameter_list] = STATE(188),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [96] = {
    [sym_attribute_list] = STATE(189),
    [sym_attribute] = STATE(58),
    [sym_identifier_name] = ACTIONS(193),
    [sym_comment] = ACTIONS(36),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(316),
    [sym_comment] = ACTIONS(36),
  },
  [98] = {
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(318),
    [sym_comment] = ACTIONS(36),
  },
  [99] = {
    [anon_sym_class] = ACTIONS(320),
    [anon_sym_unsafe] = ACTIONS(320),
    [anon_sym_abstract] = ACTIONS(320),
    [anon_sym_sealed] = ACTIONS(320),
    [anon_sym_static] = ACTIONS(320),
    [anon_sym_new] = ACTIONS(320),
    [anon_sym_public] = ACTIONS(320),
    [anon_sym_protected] = ACTIONS(320),
    [anon_sym_internal] = ACTIONS(320),
    [anon_sym_private] = ACTIONS(320),
    [anon_sym_interface] = ACTIONS(320),
    [anon_sym_struct] = ACTIONS(320),
    [anon_sym_enum] = ACTIONS(320),
    [anon_sym_sbyte] = ACTIONS(320),
    [anon_sym_byte] = ACTIONS(320),
    [anon_sym_short] = ACTIONS(320),
    [anon_sym_ushort] = ACTIONS(320),
    [anon_sym_int] = ACTIONS(320),
    [anon_sym_uint] = ACTIONS(320),
    [anon_sym_long] = ACTIONS(320),
    [anon_sym_ulong] = ACTIONS(320),
    [anon_sym_char] = ACTIONS(320),
    [anon_sym_delegate] = ACTIONS(320),
    [sym_void_keyword] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym_const_keyword] = ACTIONS(320),
    [anon_sym_readonly] = ACTIONS(320),
    [anon_sym_volatile] = ACTIONS(320),
    [anon_sym_bool] = ACTIONS(320),
    [anon_sym_decimal] = ACTIONS(320),
    [anon_sym_double] = ACTIONS(320),
    [anon_sym_float] = ACTIONS(320),
    [anon_sym_object] = ACTIONS(320),
    [anon_sym_string] = ACTIONS(320),
    [sym_identifier_name] = ACTIONS(320),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(320),
  },
  [100] = {
    [sym_attribute] = STATE(191),
    [sym_identifier_name] = ACTIONS(193),
    [sym_comment] = ACTIONS(36),
  },
  [101] = {
    [aux_sym_attribute_list_repeat1] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(324),
    [sym_comment] = ACTIONS(36),
  },
  [102] = {
    [sym_type_parameter_list] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [103] = {
    [sym_type_parameter_list] = STATE(194),
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [104] = {
    [sym_type_parameter_list] = STATE(195),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [105] = {
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(328),
    [sym_comment] = ACTIONS(36),
  },
  [106] = {
    [sym_identifier_name] = ACTIONS(330),
    [sym_comment] = ACTIONS(36),
  },
  [107] = {
    [sym_identifier_name] = ACTIONS(332),
    [sym_comment] = ACTIONS(36),
  },
  [108] = {
    [sym_identifier_name] = ACTIONS(334),
    [sym_comment] = ACTIONS(36),
  },
  [109] = {
    [sym_identifier_name] = ACTIONS(336),
    [sym_comment] = ACTIONS(36),
  },
  [110] = {
    [sym_identifier_name] = ACTIONS(338),
    [sym_comment] = ACTIONS(36),
  },
  [111] = {
    [sym_return_type] = STATE(203),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [112] = {
    [anon_sym_assembly] = ACTIONS(340),
    [anon_sym_module] = ACTIONS(340),
    [sym_comment] = ACTIONS(36),
  },
  [113] = {
    [sym__type_declaration] = STATE(204),
    [sym_namespace_declaration] = STATE(204),
    [sym_class_declaration] = STATE(204),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(204),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(204),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(204),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(204),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [sym__global_attributes] = STATE(71),
    [aux_sym_compilation_unit_repeat3] = STATE(71),
    [aux_sym_compilation_unit_repeat4] = STATE(204),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [114] = {
    [sym__type_declaration] = STATE(73),
    [sym_namespace_declaration] = STATE(73),
    [sym_class_declaration] = STATE(73),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(73),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(73),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(73),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(73),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [aux_sym_compilation_unit_repeat4] = STATE(73),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(36),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_extern] = ACTIONS(344),
    [anon_sym_using] = ACTIONS(344),
    [anon_sym_namespace] = ACTIONS(344),
    [anon_sym_class] = ACTIONS(344),
    [anon_sym_unsafe] = ACTIONS(344),
    [anon_sym_abstract] = ACTIONS(344),
    [anon_sym_sealed] = ACTIONS(344),
    [anon_sym_static] = ACTIONS(344),
    [anon_sym_new] = ACTIONS(344),
    [anon_sym_public] = ACTIONS(344),
    [anon_sym_protected] = ACTIONS(344),
    [anon_sym_internal] = ACTIONS(344),
    [anon_sym_private] = ACTIONS(344),
    [anon_sym_interface] = ACTIONS(344),
    [anon_sym_struct] = ACTIONS(344),
    [anon_sym_enum] = ACTIONS(344),
    [anon_sym_delegate] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(344),
    [sym_comment] = ACTIONS(36),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(346),
    [sym_comment] = ACTIONS(36),
  },
  [117] = {
    [anon_sym_SEMI] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [sym_comment] = ACTIONS(36),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_using] = ACTIONS(350),
    [anon_sym_namespace] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_class] = ACTIONS(350),
    [anon_sym_unsafe] = ACTIONS(350),
    [anon_sym_abstract] = ACTIONS(350),
    [anon_sym_sealed] = ACTIONS(350),
    [anon_sym_static] = ACTIONS(350),
    [anon_sym_new] = ACTIONS(350),
    [anon_sym_public] = ACTIONS(350),
    [anon_sym_protected] = ACTIONS(350),
    [anon_sym_internal] = ACTIONS(350),
    [anon_sym_private] = ACTIONS(350),
    [anon_sym_interface] = ACTIONS(350),
    [anon_sym_struct] = ACTIONS(350),
    [anon_sym_enum] = ACTIONS(350),
    [anon_sym_delegate] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(350),
    [sym_comment] = ACTIONS(36),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_using] = ACTIONS(352),
    [anon_sym_namespace] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_class] = ACTIONS(352),
    [anon_sym_unsafe] = ACTIONS(352),
    [anon_sym_abstract] = ACTIONS(352),
    [anon_sym_sealed] = ACTIONS(352),
    [anon_sym_static] = ACTIONS(352),
    [anon_sym_new] = ACTIONS(352),
    [anon_sym_public] = ACTIONS(352),
    [anon_sym_protected] = ACTIONS(352),
    [anon_sym_internal] = ACTIONS(352),
    [anon_sym_private] = ACTIONS(352),
    [anon_sym_interface] = ACTIONS(352),
    [anon_sym_struct] = ACTIONS(352),
    [anon_sym_enum] = ACTIONS(352),
    [anon_sym_delegate] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [sym_comment] = ACTIONS(36),
  },
  [120] = {
    [sym__type_declaration] = STATE(206),
    [sym_using_directive] = STATE(206),
    [sym_namespace_declaration] = STATE(206),
    [sym_class_declaration] = STATE(206),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(206),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(206),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(206),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(206),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [aux_sym_namespace_declaration_repeat1] = STATE(206),
    [aux_sym__attributes_repeat1] = STATE(29),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(36),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_using] = ACTIONS(356),
    [anon_sym_namespace] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_unsafe] = ACTIONS(356),
    [anon_sym_abstract] = ACTIONS(356),
    [anon_sym_sealed] = ACTIONS(356),
    [anon_sym_static] = ACTIONS(356),
    [anon_sym_new] = ACTIONS(356),
    [anon_sym_public] = ACTIONS(356),
    [anon_sym_protected] = ACTIONS(356),
    [anon_sym_internal] = ACTIONS(356),
    [anon_sym_private] = ACTIONS(356),
    [anon_sym_interface] = ACTIONS(356),
    [anon_sym_struct] = ACTIONS(356),
    [anon_sym_enum] = ACTIONS(356),
    [anon_sym_delegate] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym_comment] = ACTIONS(36),
  },
  [122] = {
    [sym_identifier_name] = ACTIONS(358),
    [sym_comment] = ACTIONS(36),
  },
  [123] = {
    [sym__class_modifiers] = STATE(44),
    [sym__struct_modifiers] = STATE(45),
    [sym__field_modifiers] = STATE(209),
    [anon_sym_class] = ACTIONS(360),
    [anon_sym_unsafe] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(362),
    [anon_sym_public] = ACTIONS(362),
    [anon_sym_protected] = ACTIONS(362),
    [anon_sym_internal] = ACTIONS(362),
    [anon_sym_private] = ACTIONS(362),
    [anon_sym_struct] = ACTIONS(364),
    [anon_sym_sbyte] = ACTIONS(366),
    [anon_sym_byte] = ACTIONS(366),
    [anon_sym_short] = ACTIONS(366),
    [anon_sym_ushort] = ACTIONS(366),
    [anon_sym_int] = ACTIONS(366),
    [anon_sym_uint] = ACTIONS(366),
    [anon_sym_long] = ACTIONS(366),
    [anon_sym_ulong] = ACTIONS(366),
    [anon_sym_char] = ACTIONS(366),
    [anon_sym_delegate] = ACTIONS(368),
    [sym_const_keyword] = ACTIONS(366),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(366),
    [anon_sym_decimal] = ACTIONS(366),
    [anon_sym_double] = ACTIONS(366),
    [anon_sym_float] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(366),
    [anon_sym_string] = ACTIONS(366),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(36),
  },
  [124] = {
    [sym__class_modifiers] = STATE(44),
    [sym__field_modifiers] = STATE(209),
    [anon_sym_class] = ACTIONS(360),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(366),
    [anon_sym_byte] = ACTIONS(366),
    [anon_sym_short] = ACTIONS(366),
    [anon_sym_ushort] = ACTIONS(366),
    [anon_sym_int] = ACTIONS(366),
    [anon_sym_uint] = ACTIONS(366),
    [anon_sym_long] = ACTIONS(366),
    [anon_sym_ulong] = ACTIONS(366),
    [anon_sym_char] = ACTIONS(366),
    [sym_const_keyword] = ACTIONS(366),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(366),
    [anon_sym_decimal] = ACTIONS(366),
    [anon_sym_double] = ACTIONS(366),
    [anon_sym_float] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(366),
    [anon_sym_string] = ACTIONS(366),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(36),
  },
  [125] = {
    [sym__class_modifiers] = STATE(44),
    [sym__interface_modifiers] = STATE(47),
    [sym__struct_modifiers] = STATE(45),
    [sym__field_modifiers] = STATE(209),
    [anon_sym_class] = ACTIONS(360),
    [anon_sym_unsafe] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(370),
    [anon_sym_public] = ACTIONS(370),
    [anon_sym_protected] = ACTIONS(370),
    [anon_sym_internal] = ACTIONS(370),
    [anon_sym_private] = ACTIONS(370),
    [anon_sym_interface] = ACTIONS(372),
    [anon_sym_struct] = ACTIONS(364),
    [anon_sym_enum] = ACTIONS(374),
    [anon_sym_sbyte] = ACTIONS(376),
    [anon_sym_byte] = ACTIONS(376),
    [anon_sym_short] = ACTIONS(376),
    [anon_sym_ushort] = ACTIONS(376),
    [anon_sym_int] = ACTIONS(376),
    [anon_sym_uint] = ACTIONS(376),
    [anon_sym_long] = ACTIONS(376),
    [anon_sym_ulong] = ACTIONS(376),
    [anon_sym_char] = ACTIONS(376),
    [anon_sym_delegate] = ACTIONS(368),
    [sym_void_keyword] = ACTIONS(379),
    [sym_const_keyword] = ACTIONS(366),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(376),
    [anon_sym_decimal] = ACTIONS(376),
    [anon_sym_double] = ACTIONS(376),
    [anon_sym_float] = ACTIONS(376),
    [anon_sym_object] = ACTIONS(376),
    [anon_sym_string] = ACTIONS(376),
    [sym_identifier_name] = ACTIONS(376),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(379),
  },
  [126] = {
    [sym_identifier_name] = ACTIONS(381),
    [sym_comment] = ACTIONS(36),
  },
  [127] = {
    [sym_identifier_name] = ACTIONS(383),
    [sym_comment] = ACTIONS(36),
  },
  [128] = {
    [sym_identifier_name] = ACTIONS(385),
    [sym_comment] = ACTIONS(36),
  },
  [129] = {
    [sym_return_type] = STATE(214),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [130] = {
    [sym_variable_declaration] = STATE(215),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [131] = {
    [sym__field_modifiers] = STATE(209),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(366),
    [anon_sym_byte] = ACTIONS(366),
    [anon_sym_short] = ACTIONS(366),
    [anon_sym_ushort] = ACTIONS(366),
    [anon_sym_int] = ACTIONS(366),
    [anon_sym_uint] = ACTIONS(366),
    [anon_sym_long] = ACTIONS(366),
    [anon_sym_ulong] = ACTIONS(366),
    [anon_sym_char] = ACTIONS(366),
    [sym_const_keyword] = ACTIONS(366),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(366),
    [anon_sym_decimal] = ACTIONS(366),
    [anon_sym_double] = ACTIONS(366),
    [anon_sym_float] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(366),
    [anon_sym_string] = ACTIONS(366),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(36),
  },
  [132] = {
    [sym_parameter_list] = STATE(216),
    [sym_type_parameter_list] = STATE(217),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(124),
    [sym_identifier_name] = ACTIONS(144),
    [sym_comment] = ACTIONS(36),
  },
  [133] = {
    [sym_return_type] = STATE(218),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [134] = {
    [anon_sym_class] = ACTIONS(387),
    [sym_comment] = ACTIONS(36),
  },
  [135] = {
    [anon_sym_interface] = ACTIONS(389),
    [sym_comment] = ACTIONS(36),
  },
  [136] = {
    [anon_sym_struct] = ACTIONS(391),
    [sym_comment] = ACTIONS(36),
  },
  [137] = {
    [anon_sym_enum] = ACTIONS(393),
    [sym_comment] = ACTIONS(36),
  },
  [138] = {
    [anon_sym_delegate] = ACTIONS(395),
    [sym_comment] = ACTIONS(36),
  },
  [139] = {
    [sym_identifier_name] = ACTIONS(397),
    [sym_comment] = ACTIONS(36),
  },
  [140] = {
    [sym_class_modifiers] = STATE(228),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_modifiers] = STATE(229),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_modifiers] = STATE(230),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_modifiers] = STATE(231),
    [sym_delegate_modifier] = STATE(232),
    [sym_return_type] = STATE(218),
    [sym_field_modifiers] = STATE(233),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(215),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_method_modifiers] = STATE(234),
    [anon_sym_class] = ACTIONS(399),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(401),
    [anon_sym_struct] = ACTIONS(403),
    [anon_sym_enum] = ACTIONS(405),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(407),
    [sym_void_keyword] = ACTIONS(74),
    [sym_const_keyword] = ACTIONS(409),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(411),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(413),
  },
  [141] = {
    [sym_variable_declaration] = STATE(215),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_const_keyword] = ACTIONS(409),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [142] = {
    [anon_sym_sbyte] = ACTIONS(415),
    [anon_sym_byte] = ACTIONS(415),
    [anon_sym_short] = ACTIONS(415),
    [anon_sym_ushort] = ACTIONS(415),
    [anon_sym_int] = ACTIONS(415),
    [anon_sym_uint] = ACTIONS(415),
    [anon_sym_long] = ACTIONS(415),
    [anon_sym_ulong] = ACTIONS(415),
    [anon_sym_char] = ACTIONS(415),
    [sym_const_keyword] = ACTIONS(415),
    [anon_sym_bool] = ACTIONS(415),
    [anon_sym_decimal] = ACTIONS(415),
    [anon_sym_double] = ACTIONS(415),
    [anon_sym_float] = ACTIONS(415),
    [anon_sym_object] = ACTIONS(415),
    [anon_sym_string] = ACTIONS(415),
    [sym_identifier_name] = ACTIONS(415),
    [sym_comment] = ACTIONS(36),
  },
  [143] = {
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_comment] = ACTIONS(36),
  },
  [144] = {
    [sym_variable_declarator] = STATE(237),
    [sym_identifier_name] = ACTIONS(419),
    [sym_comment] = ACTIONS(36),
  },
  [145] = {
    [sym_return_type] = STATE(218),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(411),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(413),
  },
  [146] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(422),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [147] = {
    [sym__attribute_section] = STATE(240),
    [aux_sym__attributes_repeat1] = STATE(240),
    [anon_sym_class] = ACTIONS(424),
    [anon_sym_unsafe] = ACTIONS(424),
    [anon_sym_abstract] = ACTIONS(424),
    [anon_sym_sealed] = ACTIONS(424),
    [anon_sym_static] = ACTIONS(424),
    [anon_sym_new] = ACTIONS(424),
    [anon_sym_public] = ACTIONS(424),
    [anon_sym_protected] = ACTIONS(424),
    [anon_sym_internal] = ACTIONS(424),
    [anon_sym_private] = ACTIONS(424),
    [anon_sym_interface] = ACTIONS(424),
    [anon_sym_struct] = ACTIONS(424),
    [anon_sym_enum] = ACTIONS(424),
    [anon_sym_sbyte] = ACTIONS(424),
    [anon_sym_byte] = ACTIONS(424),
    [anon_sym_short] = ACTIONS(424),
    [anon_sym_ushort] = ACTIONS(424),
    [anon_sym_int] = ACTIONS(424),
    [anon_sym_uint] = ACTIONS(424),
    [anon_sym_long] = ACTIONS(424),
    [anon_sym_ulong] = ACTIONS(424),
    [anon_sym_char] = ACTIONS(424),
    [anon_sym_delegate] = ACTIONS(424),
    [sym_void_keyword] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(424),
    [anon_sym_readonly] = ACTIONS(424),
    [anon_sym_volatile] = ACTIONS(424),
    [anon_sym_bool] = ACTIONS(424),
    [anon_sym_decimal] = ACTIONS(424),
    [anon_sym_double] = ACTIONS(424),
    [anon_sym_float] = ACTIONS(424),
    [anon_sym_object] = ACTIONS(424),
    [anon_sym_string] = ACTIONS(424),
    [sym_identifier_name] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(424),
  },
  [148] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_GT] = ACTIONS(426),
    [sym_comment] = ACTIONS(36),
  },
  [149] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(243),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(430),
    [sym_comment] = ACTIONS(36),
  },
  [150] = {
    [sym__type_declaration] = STATE(244),
    [sym_class_declaration] = STATE(244),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(244),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(244),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(244),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(244),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(244),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(244),
    [sym_method_declaration] = STATE(244),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(244),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(422),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [anon_sym_using] = ACTIONS(432),
    [anon_sym_namespace] = ACTIONS(432),
    [anon_sym_RBRACE] = ACTIONS(432),
    [anon_sym_class] = ACTIONS(432),
    [anon_sym_unsafe] = ACTIONS(432),
    [anon_sym_abstract] = ACTIONS(432),
    [anon_sym_sealed] = ACTIONS(432),
    [anon_sym_static] = ACTIONS(432),
    [anon_sym_new] = ACTIONS(432),
    [anon_sym_public] = ACTIONS(432),
    [anon_sym_protected] = ACTIONS(432),
    [anon_sym_internal] = ACTIONS(432),
    [anon_sym_private] = ACTIONS(432),
    [anon_sym_interface] = ACTIONS(432),
    [anon_sym_struct] = ACTIONS(432),
    [anon_sym_enum] = ACTIONS(432),
    [anon_sym_delegate] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym_comment] = ACTIONS(36),
  },
  [152] = {
    [sym_attribute_list] = STATE(245),
    [sym_attribute] = STATE(58),
    [sym_identifier_name] = ACTIONS(193),
    [sym_comment] = ACTIONS(36),
  },
  [153] = {
    [sym_variable_declaration] = STATE(246),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [154] = {
    [sym_field_modifiers] = STATE(248),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(246),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_const_keyword] = ACTIONS(434),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [155] = {
    [sym_variable_declaration] = STATE(246),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_const_keyword] = ACTIONS(434),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(436),
    [sym_comment] = ACTIONS(36),
  },
  [157] = {
    [sym_variable_declarator] = STATE(237),
    [sym_identifier_name] = ACTIONS(438),
    [sym_comment] = ACTIONS(36),
  },
  [158] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [159] = {
    [sym__attribute_section] = STATE(252),
    [aux_sym__attributes_repeat1] = STATE(252),
    [anon_sym_unsafe] = ACTIONS(424),
    [anon_sym_static] = ACTIONS(424),
    [anon_sym_new] = ACTIONS(424),
    [anon_sym_public] = ACTIONS(424),
    [anon_sym_protected] = ACTIONS(424),
    [anon_sym_internal] = ACTIONS(424),
    [anon_sym_private] = ACTIONS(424),
    [anon_sym_sbyte] = ACTIONS(424),
    [anon_sym_byte] = ACTIONS(424),
    [anon_sym_short] = ACTIONS(424),
    [anon_sym_ushort] = ACTIONS(424),
    [anon_sym_int] = ACTIONS(424),
    [anon_sym_uint] = ACTIONS(424),
    [anon_sym_long] = ACTIONS(424),
    [anon_sym_ulong] = ACTIONS(424),
    [anon_sym_char] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(424),
    [anon_sym_readonly] = ACTIONS(424),
    [anon_sym_volatile] = ACTIONS(424),
    [anon_sym_bool] = ACTIONS(424),
    [anon_sym_decimal] = ACTIONS(424),
    [anon_sym_double] = ACTIONS(424),
    [anon_sym_float] = ACTIONS(424),
    [anon_sym_object] = ACTIONS(424),
    [anon_sym_string] = ACTIONS(424),
    [sym_identifier_name] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
  },
  [160] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(253),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(253),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [anon_sym_using] = ACTIONS(442),
    [anon_sym_namespace] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_class] = ACTIONS(442),
    [anon_sym_unsafe] = ACTIONS(442),
    [anon_sym_abstract] = ACTIONS(442),
    [anon_sym_sealed] = ACTIONS(442),
    [anon_sym_static] = ACTIONS(442),
    [anon_sym_new] = ACTIONS(442),
    [anon_sym_public] = ACTIONS(442),
    [anon_sym_protected] = ACTIONS(442),
    [anon_sym_internal] = ACTIONS(442),
    [anon_sym_private] = ACTIONS(442),
    [anon_sym_interface] = ACTIONS(442),
    [anon_sym_struct] = ACTIONS(442),
    [anon_sym_enum] = ACTIONS(442),
    [anon_sym_delegate] = ACTIONS(442),
    [anon_sym_LBRACK] = ACTIONS(442),
    [sym_comment] = ACTIONS(36),
  },
  [162] = {
    [sym_identifier_name] = ACTIONS(444),
    [sym_comment] = ACTIONS(36),
  },
  [163] = {
    [sym__class_modifiers] = STATE(44),
    [sym__interface_modifiers] = STATE(47),
    [sym__struct_modifiers] = STATE(45),
    [sym__field_modifiers] = STATE(209),
    [anon_sym_class] = ACTIONS(360),
    [anon_sym_unsafe] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(370),
    [anon_sym_public] = ACTIONS(370),
    [anon_sym_protected] = ACTIONS(370),
    [anon_sym_internal] = ACTIONS(370),
    [anon_sym_private] = ACTIONS(370),
    [anon_sym_interface] = ACTIONS(372),
    [anon_sym_struct] = ACTIONS(364),
    [anon_sym_enum] = ACTIONS(374),
    [anon_sym_sbyte] = ACTIONS(366),
    [anon_sym_byte] = ACTIONS(366),
    [anon_sym_short] = ACTIONS(366),
    [anon_sym_ushort] = ACTIONS(366),
    [anon_sym_int] = ACTIONS(366),
    [anon_sym_uint] = ACTIONS(366),
    [anon_sym_long] = ACTIONS(366),
    [anon_sym_ulong] = ACTIONS(366),
    [anon_sym_char] = ACTIONS(366),
    [anon_sym_delegate] = ACTIONS(368),
    [sym_const_keyword] = ACTIONS(366),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(366),
    [anon_sym_decimal] = ACTIONS(366),
    [anon_sym_double] = ACTIONS(366),
    [anon_sym_float] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(366),
    [anon_sym_string] = ACTIONS(366),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(36),
  },
  [164] = {
    [sym_identifier_name] = ACTIONS(446),
    [sym_comment] = ACTIONS(36),
  },
  [165] = {
    [sym_identifier_name] = ACTIONS(448),
    [sym_comment] = ACTIONS(36),
  },
  [166] = {
    [sym_identifier_name] = ACTIONS(450),
    [sym_comment] = ACTIONS(36),
  },
  [167] = {
    [sym_return_type] = STATE(258),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [168] = {
    [sym_attribute_list] = STATE(259),
    [sym_attribute] = STATE(58),
    [sym_identifier_name] = ACTIONS(193),
    [sym_comment] = ACTIONS(36),
  },
  [169] = {
    [sym_variable_declaration] = STATE(260),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [170] = {
    [anon_sym_class] = ACTIONS(452),
    [sym_comment] = ACTIONS(36),
  },
  [171] = {
    [anon_sym_interface] = ACTIONS(454),
    [sym_comment] = ACTIONS(36),
  },
  [172] = {
    [anon_sym_struct] = ACTIONS(456),
    [sym_comment] = ACTIONS(36),
  },
  [173] = {
    [anon_sym_enum] = ACTIONS(458),
    [sym_comment] = ACTIONS(36),
  },
  [174] = {
    [anon_sym_delegate] = ACTIONS(460),
    [sym_comment] = ACTIONS(36),
  },
  [175] = {
    [sym_class_modifiers] = STATE(267),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_modifiers] = STATE(268),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_modifiers] = STATE(269),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_modifiers] = STATE(270),
    [sym_delegate_modifier] = STATE(271),
    [sym_field_modifiers] = STATE(272),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(260),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_class] = ACTIONS(462),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(464),
    [anon_sym_struct] = ACTIONS(466),
    [anon_sym_enum] = ACTIONS(468),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(470),
    [sym_const_keyword] = ACTIONS(472),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [176] = {
    [sym_variable_declaration] = STATE(260),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_const_keyword] = ACTIONS(472),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [177] = {
    [anon_sym_SEMI] = ACTIONS(474),
    [sym_comment] = ACTIONS(36),
  },
  [178] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(476),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [179] = {
    [sym__attribute_section] = STATE(276),
    [aux_sym__attributes_repeat1] = STATE(276),
    [anon_sym_class] = ACTIONS(424),
    [anon_sym_unsafe] = ACTIONS(424),
    [anon_sym_abstract] = ACTIONS(424),
    [anon_sym_sealed] = ACTIONS(424),
    [anon_sym_static] = ACTIONS(424),
    [anon_sym_new] = ACTIONS(424),
    [anon_sym_public] = ACTIONS(424),
    [anon_sym_protected] = ACTIONS(424),
    [anon_sym_internal] = ACTIONS(424),
    [anon_sym_private] = ACTIONS(424),
    [anon_sym_interface] = ACTIONS(424),
    [anon_sym_struct] = ACTIONS(424),
    [anon_sym_enum] = ACTIONS(424),
    [anon_sym_sbyte] = ACTIONS(424),
    [anon_sym_byte] = ACTIONS(424),
    [anon_sym_short] = ACTIONS(424),
    [anon_sym_ushort] = ACTIONS(424),
    [anon_sym_int] = ACTIONS(424),
    [anon_sym_uint] = ACTIONS(424),
    [anon_sym_long] = ACTIONS(424),
    [anon_sym_ulong] = ACTIONS(424),
    [anon_sym_char] = ACTIONS(424),
    [anon_sym_delegate] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(424),
    [anon_sym_readonly] = ACTIONS(424),
    [anon_sym_volatile] = ACTIONS(424),
    [anon_sym_bool] = ACTIONS(424),
    [anon_sym_decimal] = ACTIONS(424),
    [anon_sym_double] = ACTIONS(424),
    [anon_sym_float] = ACTIONS(424),
    [anon_sym_object] = ACTIONS(424),
    [anon_sym_string] = ACTIONS(424),
    [sym_identifier_name] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
  },
  [180] = {
    [sym__type_declaration] = STATE(277),
    [sym_class_declaration] = STATE(277),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(277),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(277),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(277),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(277),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(277),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(277),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(476),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [181] = {
    [sym_attribute_list] = STATE(278),
    [sym_attribute] = STATE(58),
    [sym_identifier_name] = ACTIONS(193),
    [sym_comment] = ACTIONS(36),
  },
  [182] = {
    [sym_equals_value_clause] = STATE(280),
    [anon_sym_RBRACE] = ACTIONS(478),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_EQ] = ACTIONS(480),
    [sym_comment] = ACTIONS(36),
  },
  [183] = {
    [aux_sym_enum_declaration_repeat1] = STATE(283),
    [anon_sym_RBRACE] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [184] = {
    [sym_identifier_name] = ACTIONS(486),
    [sym_comment] = ACTIONS(36),
  },
  [185] = {
    [sym__attribute_section] = STATE(285),
    [aux_sym__attributes_repeat1] = STATE(285),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(102),
    [sym_comment] = ACTIONS(36),
  },
  [186] = {
    [anon_sym_LBRACE] = ACTIONS(488),
    [sym_comment] = ACTIONS(36),
  },
  [187] = {
    [sym__formal_parameter_list] = STATE(291),
    [sym_parameter] = STATE(292),
    [sym_parameter_modifier] = STATE(293),
    [sym_parameter_array] = STATE(291),
    [sym__attributes] = STATE(294),
    [sym__attribute_section] = STATE(296),
    [sym__type] = STATE(295),
    [sym_generic_name] = STATE(295),
    [sym_predefined_type] = STATE(295),
    [aux_sym__attributes_repeat1] = STATE(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_ref] = ACTIONS(492),
    [anon_sym_out] = ACTIONS(492),
    [anon_sym_this] = ACTIONS(492),
    [sym_params_keyword] = ACTIONS(494),
    [anon_sym_LBRACK] = ACTIONS(496),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [188] = {
    [anon_sym_SEMI] = ACTIONS(498),
    [sym_comment] = ACTIONS(36),
  },
  [189] = {
    [anon_sym_RBRACK] = ACTIONS(500),
    [sym_comment] = ACTIONS(36),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(502),
    [sym_comment] = ACTIONS(36),
  },
  [191] = {
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_RBRACK] = ACTIONS(504),
    [sym_comment] = ACTIONS(36),
  },
  [192] = {
    [aux_sym_attribute_list_repeat1] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_RBRACK] = ACTIONS(504),
    [sym_comment] = ACTIONS(36),
  },
  [193] = {
    [anon_sym_LBRACE] = ACTIONS(509),
    [sym_comment] = ACTIONS(36),
  },
  [194] = {
    [anon_sym_LBRACE] = ACTIONS(511),
    [sym_comment] = ACTIONS(36),
  },
  [195] = {
    [anon_sym_LBRACE] = ACTIONS(513),
    [sym_comment] = ACTIONS(36),
  },
  [196] = {
    [sym_enum_member_declaration] = STATE(302),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [197] = {
    [sym__integral_type] = STATE(303),
    [anon_sym_sbyte] = ACTIONS(515),
    [anon_sym_byte] = ACTIONS(515),
    [anon_sym_short] = ACTIONS(515),
    [anon_sym_ushort] = ACTIONS(515),
    [anon_sym_int] = ACTIONS(515),
    [anon_sym_uint] = ACTIONS(515),
    [anon_sym_long] = ACTIONS(515),
    [anon_sym_ulong] = ACTIONS(515),
    [anon_sym_char] = ACTIONS(515),
    [sym_comment] = ACTIONS(36),
  },
  [198] = {
    [sym_parameter_list] = STATE(304),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [199] = {
    [sym_type_parameter_list] = STATE(305),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [200] = {
    [sym_type_parameter_list] = STATE(306),
    [anon_sym_LBRACE] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [201] = {
    [sym_type_parameter_list] = STATE(307),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [202] = {
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_COLON] = ACTIONS(517),
    [sym_comment] = ACTIONS(36),
  },
  [203] = {
    [sym_identifier_name] = ACTIONS(519),
    [sym_comment] = ACTIONS(36),
  },
  [204] = {
    [sym__type_declaration] = STATE(73),
    [sym_namespace_declaration] = STATE(73),
    [sym_class_declaration] = STATE(73),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(73),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(73),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(73),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(73),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [aux_sym_compilation_unit_repeat4] = STATE(73),
    [aux_sym__attributes_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_delegate] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(36),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_using] = ACTIONS(523),
    [anon_sym_namespace] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_class] = ACTIONS(523),
    [anon_sym_unsafe] = ACTIONS(523),
    [anon_sym_abstract] = ACTIONS(523),
    [anon_sym_sealed] = ACTIONS(523),
    [anon_sym_static] = ACTIONS(523),
    [anon_sym_new] = ACTIONS(523),
    [anon_sym_public] = ACTIONS(523),
    [anon_sym_protected] = ACTIONS(523),
    [anon_sym_internal] = ACTIONS(523),
    [anon_sym_private] = ACTIONS(523),
    [anon_sym_interface] = ACTIONS(523),
    [anon_sym_struct] = ACTIONS(523),
    [anon_sym_enum] = ACTIONS(523),
    [anon_sym_delegate] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(523),
    [sym_comment] = ACTIONS(36),
  },
  [206] = {
    [sym__type_declaration] = STATE(206),
    [sym_using_directive] = STATE(206),
    [sym_namespace_declaration] = STATE(206),
    [sym_class_declaration] = STATE(206),
    [sym_class_modifiers] = STATE(16),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(206),
    [sym_interface_modifiers] = STATE(18),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(206),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(206),
    [sym_enum_modifiers] = STATE(22),
    [sym_delegate_declaration] = STATE(206),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(29),
    [aux_sym_namespace_declaration_repeat1] = STATE(206),
    [aux_sym__attributes_repeat1] = STATE(29),
    [anon_sym_using] = ACTIONS(525),
    [anon_sym_namespace] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_class] = ACTIONS(533),
    [anon_sym_unsafe] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(539),
    [anon_sym_sealed] = ACTIONS(539),
    [anon_sym_static] = ACTIONS(539),
    [anon_sym_new] = ACTIONS(542),
    [anon_sym_public] = ACTIONS(542),
    [anon_sym_protected] = ACTIONS(542),
    [anon_sym_internal] = ACTIONS(542),
    [anon_sym_private] = ACTIONS(542),
    [anon_sym_interface] = ACTIONS(545),
    [anon_sym_struct] = ACTIONS(548),
    [anon_sym_enum] = ACTIONS(551),
    [anon_sym_delegate] = ACTIONS(554),
    [anon_sym_LBRACK] = ACTIONS(557),
    [sym_comment] = ACTIONS(36),
  },
  [207] = {
    [sym_type_parameter_list] = STATE(311),
    [anon_sym_LBRACE] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [208] = {
    [sym__class_modifiers] = STATE(44),
    [sym__struct_modifiers] = STATE(45),
    [sym__field_modifiers] = STATE(209),
    [anon_sym_class] = ACTIONS(360),
    [anon_sym_unsafe] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(362),
    [anon_sym_public] = ACTIONS(362),
    [anon_sym_protected] = ACTIONS(362),
    [anon_sym_internal] = ACTIONS(362),
    [anon_sym_private] = ACTIONS(362),
    [anon_sym_struct] = ACTIONS(364),
    [anon_sym_sbyte] = ACTIONS(366),
    [anon_sym_byte] = ACTIONS(366),
    [anon_sym_short] = ACTIONS(366),
    [anon_sym_ushort] = ACTIONS(366),
    [anon_sym_int] = ACTIONS(366),
    [anon_sym_uint] = ACTIONS(366),
    [anon_sym_long] = ACTIONS(366),
    [anon_sym_ulong] = ACTIONS(366),
    [anon_sym_char] = ACTIONS(366),
    [sym_const_keyword] = ACTIONS(366),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(366),
    [anon_sym_decimal] = ACTIONS(366),
    [anon_sym_double] = ACTIONS(366),
    [anon_sym_float] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(366),
    [anon_sym_string] = ACTIONS(366),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(36),
  },
  [209] = {
    [anon_sym_sbyte] = ACTIONS(562),
    [anon_sym_byte] = ACTIONS(562),
    [anon_sym_short] = ACTIONS(562),
    [anon_sym_ushort] = ACTIONS(562),
    [anon_sym_int] = ACTIONS(562),
    [anon_sym_uint] = ACTIONS(562),
    [anon_sym_long] = ACTIONS(562),
    [anon_sym_ulong] = ACTIONS(562),
    [anon_sym_char] = ACTIONS(562),
    [sym_const_keyword] = ACTIONS(562),
    [anon_sym_bool] = ACTIONS(562),
    [anon_sym_decimal] = ACTIONS(562),
    [anon_sym_double] = ACTIONS(562),
    [anon_sym_float] = ACTIONS(562),
    [anon_sym_object] = ACTIONS(562),
    [anon_sym_string] = ACTIONS(562),
    [sym_identifier_name] = ACTIONS(562),
    [sym_comment] = ACTIONS(36),
  },
  [210] = {
    [sym__class_modifiers] = STATE(44),
    [sym__interface_modifiers] = STATE(47),
    [sym__struct_modifiers] = STATE(45),
    [sym__field_modifiers] = STATE(209),
    [anon_sym_class] = ACTIONS(360),
    [anon_sym_unsafe] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(370),
    [anon_sym_public] = ACTIONS(370),
    [anon_sym_protected] = ACTIONS(370),
    [anon_sym_internal] = ACTIONS(370),
    [anon_sym_private] = ACTIONS(370),
    [anon_sym_interface] = ACTIONS(372),
    [anon_sym_struct] = ACTIONS(364),
    [anon_sym_sbyte] = ACTIONS(366),
    [anon_sym_byte] = ACTIONS(366),
    [anon_sym_short] = ACTIONS(366),
    [anon_sym_ushort] = ACTIONS(366),
    [anon_sym_int] = ACTIONS(366),
    [anon_sym_uint] = ACTIONS(366),
    [anon_sym_long] = ACTIONS(366),
    [anon_sym_ulong] = ACTIONS(366),
    [anon_sym_char] = ACTIONS(366),
    [sym_const_keyword] = ACTIONS(366),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(366),
    [anon_sym_decimal] = ACTIONS(366),
    [anon_sym_double] = ACTIONS(366),
    [anon_sym_float] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(366),
    [anon_sym_string] = ACTIONS(366),
    [sym_identifier_name] = ACTIONS(366),
    [sym_comment] = ACTIONS(36),
  },
  [211] = {
    [sym_type_parameter_list] = STATE(313),
    [anon_sym_LBRACE] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [212] = {
    [sym_type_parameter_list] = STATE(315),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [213] = {
    [anon_sym_LBRACE] = ACTIONS(568),
    [anon_sym_COLON] = ACTIONS(570),
    [sym_comment] = ACTIONS(36),
  },
  [214] = {
    [sym_identifier_name] = ACTIONS(572),
    [sym_comment] = ACTIONS(36),
  },
  [215] = {
    [anon_sym_SEMI] = ACTIONS(574),
    [sym_comment] = ACTIONS(36),
  },
  [216] = {
    [sym_statement_block] = STATE(321),
    [anon_sym_LBRACE] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [217] = {
    [sym_parameter_list] = STATE(322),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_identifier_name] = ACTIONS(312),
    [sym_comment] = ACTIONS(36),
  },
  [218] = {
    [sym_identifier_name] = ACTIONS(578),
    [sym_comment] = ACTIONS(36),
  },
  [219] = {
    [sym_identifier_name] = ACTIONS(580),
    [sym_comment] = ACTIONS(36),
  },
  [220] = {
    [sym_identifier_name] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [221] = {
    [sym_identifier_name] = ACTIONS(584),
    [sym_comment] = ACTIONS(36),
  },
  [222] = {
    [sym_identifier_name] = ACTIONS(586),
    [sym_comment] = ACTIONS(36),
  },
  [223] = {
    [sym_return_type] = STATE(328),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [224] = {
    [sym_parameter_list] = STATE(329),
    [sym_type_parameter_list] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [225] = {
    [sym_variable_declaration] = STATE(331),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [226] = {
    [sym_parameter_list] = STATE(322),
    [sym_type_parameter_list] = STATE(332),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(124),
    [sym_identifier_name] = ACTIONS(144),
    [sym_comment] = ACTIONS(36),
  },
  [227] = {
    [sym_return_type] = STATE(333),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [228] = {
    [anon_sym_class] = ACTIONS(588),
    [sym_comment] = ACTIONS(36),
  },
  [229] = {
    [anon_sym_interface] = ACTIONS(590),
    [sym_comment] = ACTIONS(36),
  },
  [230] = {
    [anon_sym_struct] = ACTIONS(592),
    [sym_comment] = ACTIONS(36),
  },
  [231] = {
    [anon_sym_enum] = ACTIONS(594),
    [sym_comment] = ACTIONS(36),
  },
  [232] = {
    [anon_sym_delegate] = ACTIONS(596),
    [sym_comment] = ACTIONS(36),
  },
  [233] = {
    [sym_variable_declaration] = STATE(331),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_const_keyword] = ACTIONS(598),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [234] = {
    [sym_return_type] = STATE(333),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(600),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(602),
  },
  [235] = {
    [anon_sym_RBRACE] = ACTIONS(604),
    [anon_sym_class] = ACTIONS(606),
    [anon_sym_unsafe] = ACTIONS(606),
    [anon_sym_abstract] = ACTIONS(606),
    [anon_sym_sealed] = ACTIONS(606),
    [anon_sym_static] = ACTIONS(606),
    [anon_sym_new] = ACTIONS(606),
    [anon_sym_public] = ACTIONS(606),
    [anon_sym_protected] = ACTIONS(606),
    [anon_sym_internal] = ACTIONS(606),
    [anon_sym_private] = ACTIONS(606),
    [anon_sym_interface] = ACTIONS(606),
    [anon_sym_struct] = ACTIONS(606),
    [anon_sym_enum] = ACTIONS(606),
    [anon_sym_sbyte] = ACTIONS(606),
    [anon_sym_byte] = ACTIONS(606),
    [anon_sym_short] = ACTIONS(606),
    [anon_sym_ushort] = ACTIONS(606),
    [anon_sym_int] = ACTIONS(606),
    [anon_sym_uint] = ACTIONS(606),
    [anon_sym_long] = ACTIONS(606),
    [anon_sym_ulong] = ACTIONS(606),
    [anon_sym_char] = ACTIONS(606),
    [anon_sym_delegate] = ACTIONS(606),
    [sym_void_keyword] = ACTIONS(606),
    [anon_sym_LBRACK] = ACTIONS(604),
    [sym_const_keyword] = ACTIONS(606),
    [anon_sym_readonly] = ACTIONS(606),
    [anon_sym_volatile] = ACTIONS(606),
    [anon_sym_bool] = ACTIONS(606),
    [anon_sym_decimal] = ACTIONS(606),
    [anon_sym_double] = ACTIONS(606),
    [anon_sym_float] = ACTIONS(606),
    [anon_sym_object] = ACTIONS(606),
    [anon_sym_string] = ACTIONS(606),
    [sym_identifier_name] = ACTIONS(606),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(606),
  },
  [236] = {
    [sym_equals_value_clause] = STATE(343),
    [anon_sym_SEMI] = ACTIONS(608),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_EQ] = ACTIONS(610),
    [sym_comment] = ACTIONS(36),
  },
  [237] = {
    [aux_sym_variable_declaration_repeat1] = STATE(345),
    [anon_sym_SEMI] = ACTIONS(612),
    [anon_sym_COMMA] = ACTIONS(614),
    [sym_comment] = ACTIONS(36),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(616),
    [anon_sym_using] = ACTIONS(616),
    [anon_sym_namespace] = ACTIONS(616),
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(616),
    [anon_sym_unsafe] = ACTIONS(616),
    [anon_sym_abstract] = ACTIONS(616),
    [anon_sym_sealed] = ACTIONS(616),
    [anon_sym_static] = ACTIONS(616),
    [anon_sym_new] = ACTIONS(616),
    [anon_sym_public] = ACTIONS(616),
    [anon_sym_protected] = ACTIONS(616),
    [anon_sym_internal] = ACTIONS(616),
    [anon_sym_private] = ACTIONS(616),
    [anon_sym_interface] = ACTIONS(616),
    [anon_sym_struct] = ACTIONS(616),
    [anon_sym_enum] = ACTIONS(616),
    [anon_sym_delegate] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(616),
    [sym_comment] = ACTIONS(36),
  },
  [239] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(618),
    [anon_sym_class] = ACTIONS(620),
    [anon_sym_unsafe] = ACTIONS(623),
    [anon_sym_abstract] = ACTIONS(626),
    [anon_sym_sealed] = ACTIONS(626),
    [anon_sym_static] = ACTIONS(629),
    [anon_sym_new] = ACTIONS(632),
    [anon_sym_public] = ACTIONS(632),
    [anon_sym_protected] = ACTIONS(632),
    [anon_sym_internal] = ACTIONS(632),
    [anon_sym_private] = ACTIONS(632),
    [anon_sym_interface] = ACTIONS(635),
    [anon_sym_struct] = ACTIONS(638),
    [anon_sym_enum] = ACTIONS(641),
    [anon_sym_sbyte] = ACTIONS(644),
    [anon_sym_byte] = ACTIONS(644),
    [anon_sym_short] = ACTIONS(644),
    [anon_sym_ushort] = ACTIONS(644),
    [anon_sym_int] = ACTIONS(644),
    [anon_sym_uint] = ACTIONS(644),
    [anon_sym_long] = ACTIONS(644),
    [anon_sym_ulong] = ACTIONS(644),
    [anon_sym_char] = ACTIONS(644),
    [anon_sym_delegate] = ACTIONS(647),
    [sym_void_keyword] = ACTIONS(650),
    [anon_sym_LBRACK] = ACTIONS(653),
    [sym_const_keyword] = ACTIONS(656),
    [anon_sym_readonly] = ACTIONS(659),
    [anon_sym_volatile] = ACTIONS(659),
    [anon_sym_bool] = ACTIONS(644),
    [anon_sym_decimal] = ACTIONS(644),
    [anon_sym_double] = ACTIONS(644),
    [anon_sym_float] = ACTIONS(644),
    [anon_sym_object] = ACTIONS(644),
    [anon_sym_string] = ACTIONS(644),
    [sym_identifier_name] = ACTIONS(662),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(665),
  },
  [240] = {
    [sym__attribute_section] = STATE(240),
    [aux_sym__attributes_repeat1] = STATE(240),
    [anon_sym_class] = ACTIONS(668),
    [anon_sym_unsafe] = ACTIONS(668),
    [anon_sym_abstract] = ACTIONS(668),
    [anon_sym_sealed] = ACTIONS(668),
    [anon_sym_static] = ACTIONS(668),
    [anon_sym_new] = ACTIONS(668),
    [anon_sym_public] = ACTIONS(668),
    [anon_sym_protected] = ACTIONS(668),
    [anon_sym_internal] = ACTIONS(668),
    [anon_sym_private] = ACTIONS(668),
    [anon_sym_interface] = ACTIONS(668),
    [anon_sym_struct] = ACTIONS(668),
    [anon_sym_enum] = ACTIONS(668),
    [anon_sym_sbyte] = ACTIONS(668),
    [anon_sym_byte] = ACTIONS(668),
    [anon_sym_short] = ACTIONS(668),
    [anon_sym_ushort] = ACTIONS(668),
    [anon_sym_int] = ACTIONS(668),
    [anon_sym_uint] = ACTIONS(668),
    [anon_sym_long] = ACTIONS(668),
    [anon_sym_ulong] = ACTIONS(668),
    [anon_sym_char] = ACTIONS(668),
    [anon_sym_delegate] = ACTIONS(668),
    [sym_void_keyword] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(229),
    [sym_const_keyword] = ACTIONS(668),
    [anon_sym_readonly] = ACTIONS(668),
    [anon_sym_volatile] = ACTIONS(668),
    [anon_sym_bool] = ACTIONS(668),
    [anon_sym_decimal] = ACTIONS(668),
    [anon_sym_double] = ACTIONS(668),
    [anon_sym_float] = ACTIONS(668),
    [anon_sym_object] = ACTIONS(668),
    [anon_sym_string] = ACTIONS(668),
    [sym_identifier_name] = ACTIONS(668),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(668),
  },
  [241] = {
    [sym__type] = STATE(148),
    [sym_generic_name] = STATE(148),
    [sym_predefined_type] = STATE(148),
    [sym_type_parameter] = STATE(346),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [242] = {
    [anon_sym_LBRACE] = ACTIONS(670),
    [anon_sym_COMMA] = ACTIONS(670),
    [anon_sym_LPAREN] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(670),
    [anon_sym_GT] = ACTIONS(670),
    [sym_identifier_name] = ACTIONS(670),
    [sym_comment] = ACTIONS(36),
  },
  [243] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(348),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(672),
    [sym_comment] = ACTIONS(36),
  },
  [244] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(674),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [245] = {
    [anon_sym_RBRACK] = ACTIONS(676),
    [sym_comment] = ACTIONS(36),
  },
  [246] = {
    [anon_sym_SEMI] = ACTIONS(678),
    [sym_comment] = ACTIONS(36),
  },
  [247] = {
    [sym_variable_declaration] = STATE(352),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [248] = {
    [sym_variable_declaration] = STATE(352),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_const_keyword] = ACTIONS(680),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [249] = {
    [anon_sym_RBRACE] = ACTIONS(604),
    [anon_sym_unsafe] = ACTIONS(606),
    [anon_sym_static] = ACTIONS(606),
    [anon_sym_new] = ACTIONS(606),
    [anon_sym_public] = ACTIONS(606),
    [anon_sym_protected] = ACTIONS(606),
    [anon_sym_internal] = ACTIONS(606),
    [anon_sym_private] = ACTIONS(606),
    [anon_sym_sbyte] = ACTIONS(606),
    [anon_sym_byte] = ACTIONS(606),
    [anon_sym_short] = ACTIONS(606),
    [anon_sym_ushort] = ACTIONS(606),
    [anon_sym_int] = ACTIONS(606),
    [anon_sym_uint] = ACTIONS(606),
    [anon_sym_long] = ACTIONS(606),
    [anon_sym_ulong] = ACTIONS(606),
    [anon_sym_char] = ACTIONS(606),
    [anon_sym_LBRACK] = ACTIONS(604),
    [sym_const_keyword] = ACTIONS(606),
    [anon_sym_readonly] = ACTIONS(606),
    [anon_sym_volatile] = ACTIONS(606),
    [anon_sym_bool] = ACTIONS(606),
    [anon_sym_decimal] = ACTIONS(606),
    [anon_sym_double] = ACTIONS(606),
    [anon_sym_float] = ACTIONS(606),
    [anon_sym_object] = ACTIONS(606),
    [anon_sym_string] = ACTIONS(606),
    [sym_identifier_name] = ACTIONS(606),
    [sym_comment] = ACTIONS(36),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(682),
    [anon_sym_using] = ACTIONS(682),
    [anon_sym_namespace] = ACTIONS(682),
    [anon_sym_RBRACE] = ACTIONS(682),
    [anon_sym_class] = ACTIONS(682),
    [anon_sym_unsafe] = ACTIONS(682),
    [anon_sym_abstract] = ACTIONS(682),
    [anon_sym_sealed] = ACTIONS(682),
    [anon_sym_static] = ACTIONS(682),
    [anon_sym_new] = ACTIONS(682),
    [anon_sym_public] = ACTIONS(682),
    [anon_sym_protected] = ACTIONS(682),
    [anon_sym_internal] = ACTIONS(682),
    [anon_sym_private] = ACTIONS(682),
    [anon_sym_interface] = ACTIONS(682),
    [anon_sym_struct] = ACTIONS(682),
    [anon_sym_enum] = ACTIONS(682),
    [anon_sym_delegate] = ACTIONS(682),
    [anon_sym_LBRACK] = ACTIONS(682),
    [sym_comment] = ACTIONS(36),
  },
  [251] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(684),
    [anon_sym_unsafe] = ACTIONS(686),
    [anon_sym_static] = ACTIONS(686),
    [anon_sym_new] = ACTIONS(686),
    [anon_sym_public] = ACTIONS(686),
    [anon_sym_protected] = ACTIONS(686),
    [anon_sym_internal] = ACTIONS(686),
    [anon_sym_private] = ACTIONS(686),
    [anon_sym_sbyte] = ACTIONS(689),
    [anon_sym_byte] = ACTIONS(689),
    [anon_sym_short] = ACTIONS(689),
    [anon_sym_ushort] = ACTIONS(689),
    [anon_sym_int] = ACTIONS(689),
    [anon_sym_uint] = ACTIONS(689),
    [anon_sym_long] = ACTIONS(689),
    [anon_sym_ulong] = ACTIONS(689),
    [anon_sym_char] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(692),
    [sym_const_keyword] = ACTIONS(695),
    [anon_sym_readonly] = ACTIONS(686),
    [anon_sym_volatile] = ACTIONS(686),
    [anon_sym_bool] = ACTIONS(689),
    [anon_sym_decimal] = ACTIONS(689),
    [anon_sym_double] = ACTIONS(689),
    [anon_sym_float] = ACTIONS(689),
    [anon_sym_object] = ACTIONS(689),
    [anon_sym_string] = ACTIONS(689),
    [sym_identifier_name] = ACTIONS(698),
    [sym_comment] = ACTIONS(36),
  },
  [252] = {
    [sym__attribute_section] = STATE(252),
    [aux_sym__attributes_repeat1] = STATE(252),
    [anon_sym_unsafe] = ACTIONS(668),
    [anon_sym_static] = ACTIONS(668),
    [anon_sym_new] = ACTIONS(668),
    [anon_sym_public] = ACTIONS(668),
    [anon_sym_protected] = ACTIONS(668),
    [anon_sym_internal] = ACTIONS(668),
    [anon_sym_private] = ACTIONS(668),
    [anon_sym_sbyte] = ACTIONS(668),
    [anon_sym_byte] = ACTIONS(668),
    [anon_sym_short] = ACTIONS(668),
    [anon_sym_ushort] = ACTIONS(668),
    [anon_sym_int] = ACTIONS(668),
    [anon_sym_uint] = ACTIONS(668),
    [anon_sym_long] = ACTIONS(668),
    [anon_sym_ulong] = ACTIONS(668),
    [anon_sym_char] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(701),
    [sym_const_keyword] = ACTIONS(668),
    [anon_sym_readonly] = ACTIONS(668),
    [anon_sym_volatile] = ACTIONS(668),
    [anon_sym_bool] = ACTIONS(668),
    [anon_sym_decimal] = ACTIONS(668),
    [anon_sym_double] = ACTIONS(668),
    [anon_sym_float] = ACTIONS(668),
    [anon_sym_object] = ACTIONS(668),
    [anon_sym_string] = ACTIONS(668),
    [sym_identifier_name] = ACTIONS(668),
    [sym_comment] = ACTIONS(36),
  },
  [253] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(704),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [254] = {
    [sym_type_parameter_list] = STATE(356),
    [anon_sym_LBRACE] = ACTIONS(706),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [255] = {
    [sym_type_parameter_list] = STATE(358),
    [anon_sym_LBRACE] = ACTIONS(708),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [256] = {
    [sym_type_parameter_list] = STATE(360),
    [anon_sym_LBRACE] = ACTIONS(710),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [257] = {
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_COLON] = ACTIONS(714),
    [sym_comment] = ACTIONS(36),
  },
  [258] = {
    [sym_identifier_name] = ACTIONS(716),
    [sym_comment] = ACTIONS(36),
  },
  [259] = {
    [anon_sym_RBRACK] = ACTIONS(718),
    [sym_comment] = ACTIONS(36),
  },
  [260] = {
    [anon_sym_SEMI] = ACTIONS(720),
    [sym_comment] = ACTIONS(36),
  },
  [261] = {
    [sym_identifier_name] = ACTIONS(722),
    [sym_comment] = ACTIONS(36),
  },
  [262] = {
    [sym_identifier_name] = ACTIONS(724),
    [sym_comment] = ACTIONS(36),
  },
  [263] = {
    [sym_identifier_name] = ACTIONS(726),
    [sym_comment] = ACTIONS(36),
  },
  [264] = {
    [sym_identifier_name] = ACTIONS(728),
    [sym_comment] = ACTIONS(36),
  },
  [265] = {
    [sym_return_type] = STATE(370),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [266] = {
    [sym_variable_declaration] = STATE(371),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [267] = {
    [anon_sym_class] = ACTIONS(730),
    [sym_comment] = ACTIONS(36),
  },
  [268] = {
    [anon_sym_interface] = ACTIONS(732),
    [sym_comment] = ACTIONS(36),
  },
  [269] = {
    [anon_sym_struct] = ACTIONS(734),
    [sym_comment] = ACTIONS(36),
  },
  [270] = {
    [anon_sym_enum] = ACTIONS(736),
    [sym_comment] = ACTIONS(36),
  },
  [271] = {
    [anon_sym_delegate] = ACTIONS(738),
    [sym_comment] = ACTIONS(36),
  },
  [272] = {
    [sym_variable_declaration] = STATE(371),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_const_keyword] = ACTIONS(740),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [273] = {
    [anon_sym_RBRACE] = ACTIONS(604),
    [anon_sym_class] = ACTIONS(606),
    [anon_sym_unsafe] = ACTIONS(606),
    [anon_sym_abstract] = ACTIONS(606),
    [anon_sym_sealed] = ACTIONS(606),
    [anon_sym_static] = ACTIONS(606),
    [anon_sym_new] = ACTIONS(606),
    [anon_sym_public] = ACTIONS(606),
    [anon_sym_protected] = ACTIONS(606),
    [anon_sym_internal] = ACTIONS(606),
    [anon_sym_private] = ACTIONS(606),
    [anon_sym_interface] = ACTIONS(606),
    [anon_sym_struct] = ACTIONS(606),
    [anon_sym_enum] = ACTIONS(606),
    [anon_sym_sbyte] = ACTIONS(606),
    [anon_sym_byte] = ACTIONS(606),
    [anon_sym_short] = ACTIONS(606),
    [anon_sym_ushort] = ACTIONS(606),
    [anon_sym_int] = ACTIONS(606),
    [anon_sym_uint] = ACTIONS(606),
    [anon_sym_long] = ACTIONS(606),
    [anon_sym_ulong] = ACTIONS(606),
    [anon_sym_char] = ACTIONS(606),
    [anon_sym_delegate] = ACTIONS(606),
    [anon_sym_LBRACK] = ACTIONS(604),
    [sym_const_keyword] = ACTIONS(606),
    [anon_sym_readonly] = ACTIONS(606),
    [anon_sym_volatile] = ACTIONS(606),
    [anon_sym_bool] = ACTIONS(606),
    [anon_sym_decimal] = ACTIONS(606),
    [anon_sym_double] = ACTIONS(606),
    [anon_sym_float] = ACTIONS(606),
    [anon_sym_object] = ACTIONS(606),
    [anon_sym_string] = ACTIONS(606),
    [sym_identifier_name] = ACTIONS(606),
    [sym_comment] = ACTIONS(36),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(742),
    [anon_sym_using] = ACTIONS(742),
    [anon_sym_namespace] = ACTIONS(742),
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_class] = ACTIONS(742),
    [anon_sym_unsafe] = ACTIONS(742),
    [anon_sym_abstract] = ACTIONS(742),
    [anon_sym_sealed] = ACTIONS(742),
    [anon_sym_static] = ACTIONS(742),
    [anon_sym_new] = ACTIONS(742),
    [anon_sym_public] = ACTIONS(742),
    [anon_sym_protected] = ACTIONS(742),
    [anon_sym_internal] = ACTIONS(742),
    [anon_sym_private] = ACTIONS(742),
    [anon_sym_interface] = ACTIONS(742),
    [anon_sym_struct] = ACTIONS(742),
    [anon_sym_enum] = ACTIONS(742),
    [anon_sym_delegate] = ACTIONS(742),
    [anon_sym_LBRACK] = ACTIONS(742),
    [sym_comment] = ACTIONS(36),
  },
  [275] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(744),
    [anon_sym_class] = ACTIONS(746),
    [anon_sym_unsafe] = ACTIONS(749),
    [anon_sym_abstract] = ACTIONS(752),
    [anon_sym_sealed] = ACTIONS(752),
    [anon_sym_static] = ACTIONS(755),
    [anon_sym_new] = ACTIONS(758),
    [anon_sym_public] = ACTIONS(758),
    [anon_sym_protected] = ACTIONS(758),
    [anon_sym_internal] = ACTIONS(758),
    [anon_sym_private] = ACTIONS(758),
    [anon_sym_interface] = ACTIONS(761),
    [anon_sym_struct] = ACTIONS(764),
    [anon_sym_enum] = ACTIONS(767),
    [anon_sym_sbyte] = ACTIONS(770),
    [anon_sym_byte] = ACTIONS(770),
    [anon_sym_short] = ACTIONS(770),
    [anon_sym_ushort] = ACTIONS(770),
    [anon_sym_int] = ACTIONS(770),
    [anon_sym_uint] = ACTIONS(770),
    [anon_sym_long] = ACTIONS(770),
    [anon_sym_ulong] = ACTIONS(770),
    [anon_sym_char] = ACTIONS(770),
    [anon_sym_delegate] = ACTIONS(773),
    [anon_sym_LBRACK] = ACTIONS(776),
    [sym_const_keyword] = ACTIONS(779),
    [anon_sym_readonly] = ACTIONS(782),
    [anon_sym_volatile] = ACTIONS(782),
    [anon_sym_bool] = ACTIONS(770),
    [anon_sym_decimal] = ACTIONS(770),
    [anon_sym_double] = ACTIONS(770),
    [anon_sym_float] = ACTIONS(770),
    [anon_sym_object] = ACTIONS(770),
    [anon_sym_string] = ACTIONS(770),
    [sym_identifier_name] = ACTIONS(785),
    [sym_comment] = ACTIONS(36),
  },
  [276] = {
    [sym__attribute_section] = STATE(276),
    [aux_sym__attributes_repeat1] = STATE(276),
    [anon_sym_class] = ACTIONS(668),
    [anon_sym_unsafe] = ACTIONS(668),
    [anon_sym_abstract] = ACTIONS(668),
    [anon_sym_sealed] = ACTIONS(668),
    [anon_sym_static] = ACTIONS(668),
    [anon_sym_new] = ACTIONS(668),
    [anon_sym_public] = ACTIONS(668),
    [anon_sym_protected] = ACTIONS(668),
    [anon_sym_internal] = ACTIONS(668),
    [anon_sym_private] = ACTIONS(668),
    [anon_sym_interface] = ACTIONS(668),
    [anon_sym_struct] = ACTIONS(668),
    [anon_sym_enum] = ACTIONS(668),
    [anon_sym_sbyte] = ACTIONS(668),
    [anon_sym_byte] = ACTIONS(668),
    [anon_sym_short] = ACTIONS(668),
    [anon_sym_ushort] = ACTIONS(668),
    [anon_sym_int] = ACTIONS(668),
    [anon_sym_uint] = ACTIONS(668),
    [anon_sym_long] = ACTIONS(668),
    [anon_sym_ulong] = ACTIONS(668),
    [anon_sym_char] = ACTIONS(668),
    [anon_sym_delegate] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(788),
    [sym_const_keyword] = ACTIONS(668),
    [anon_sym_readonly] = ACTIONS(668),
    [anon_sym_volatile] = ACTIONS(668),
    [anon_sym_bool] = ACTIONS(668),
    [anon_sym_decimal] = ACTIONS(668),
    [anon_sym_double] = ACTIONS(668),
    [anon_sym_float] = ACTIONS(668),
    [anon_sym_object] = ACTIONS(668),
    [anon_sym_string] = ACTIONS(668),
    [sym_identifier_name] = ACTIONS(668),
    [sym_comment] = ACTIONS(36),
  },
  [277] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(791),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [278] = {
    [anon_sym_RBRACK] = ACTIONS(793),
    [sym_comment] = ACTIONS(36),
  },
  [279] = {
    [sym__expression] = STATE(389),
    [sym_parenthesized_expression] = STATE(389),
    [sym_ternary_expression] = STATE(389),
    [sym_binary_expression] = STATE(389),
    [sym_unary_expression] = STATE(389),
    [sym__literal] = STATE(389),
    [sym_boolean_literal] = STATE(389),
    [sym_character_literal] = STATE(389),
    [sym_integer_literal] = STATE(389),
    [sym_real_literal] = STATE(389),
    [sym_string_literal] = STATE(389),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(809),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(809),
    [sym_comment] = ACTIONS(36),
  },
  [280] = {
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_COMMA] = ACTIONS(817),
    [sym_comment] = ACTIONS(36),
  },
  [281] = {
    [ts_builtin_sym_end] = ACTIONS(819),
    [anon_sym_SEMI] = ACTIONS(821),
    [anon_sym_using] = ACTIONS(819),
    [anon_sym_namespace] = ACTIONS(819),
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_class] = ACTIONS(819),
    [anon_sym_unsafe] = ACTIONS(819),
    [anon_sym_abstract] = ACTIONS(819),
    [anon_sym_sealed] = ACTIONS(819),
    [anon_sym_static] = ACTIONS(819),
    [anon_sym_new] = ACTIONS(819),
    [anon_sym_public] = ACTIONS(819),
    [anon_sym_protected] = ACTIONS(819),
    [anon_sym_internal] = ACTIONS(819),
    [anon_sym_private] = ACTIONS(819),
    [anon_sym_interface] = ACTIONS(819),
    [anon_sym_struct] = ACTIONS(819),
    [anon_sym_enum] = ACTIONS(819),
    [anon_sym_delegate] = ACTIONS(819),
    [anon_sym_LBRACK] = ACTIONS(819),
    [sym_comment] = ACTIONS(36),
  },
  [282] = {
    [sym_enum_member_declaration] = STATE(392),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [283] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [284] = {
    [sym_equals_value_clause] = STATE(395),
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_COMMA] = ACTIONS(817),
    [anon_sym_EQ] = ACTIONS(480),
    [sym_comment] = ACTIONS(36),
  },
  [285] = {
    [sym__attribute_section] = STATE(285),
    [aux_sym__attributes_repeat1] = STATE(285),
    [anon_sym_LBRACK] = ACTIONS(825),
    [sym_identifier_name] = ACTIONS(227),
    [sym_comment] = ACTIONS(36),
  },
  [286] = {
    [sym_enum_member_declaration] = STATE(396),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [287] = {
    [anon_sym_SEMI] = ACTIONS(828),
    [anon_sym_LBRACE] = ACTIONS(828),
    [sym_comment] = ACTIONS(36),
  },
  [288] = {
    [anon_sym_sbyte] = ACTIONS(830),
    [anon_sym_byte] = ACTIONS(830),
    [anon_sym_short] = ACTIONS(830),
    [anon_sym_ushort] = ACTIONS(830),
    [anon_sym_int] = ACTIONS(830),
    [anon_sym_uint] = ACTIONS(830),
    [anon_sym_long] = ACTIONS(830),
    [anon_sym_ulong] = ACTIONS(830),
    [anon_sym_char] = ACTIONS(830),
    [anon_sym_bool] = ACTIONS(830),
    [anon_sym_decimal] = ACTIONS(830),
    [anon_sym_double] = ACTIONS(830),
    [anon_sym_float] = ACTIONS(830),
    [anon_sym_object] = ACTIONS(830),
    [anon_sym_string] = ACTIONS(830),
    [sym_identifier_name] = ACTIONS(830),
    [sym_comment] = ACTIONS(36),
  },
  [289] = {
    [sym_array_type] = STATE(397),
    [sym__type] = STATE(398),
    [sym_generic_name] = STATE(398),
    [sym_predefined_type] = STATE(398),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [290] = {
    [sym_attribute_list] = STATE(399),
    [sym_attribute] = STATE(58),
    [sym_identifier_name] = ACTIONS(193),
    [sym_comment] = ACTIONS(36),
  },
  [291] = {
    [anon_sym_RPAREN] = ACTIONS(832),
    [sym_comment] = ACTIONS(36),
  },
  [292] = {
    [sym_parameter_array] = STATE(402),
    [sym__attributes] = STATE(403),
    [sym__attribute_section] = STATE(405),
    [aux_sym__formal_parameter_list_repeat1] = STATE(404),
    [aux_sym__attributes_repeat1] = STATE(405),
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(836),
    [sym_params_keyword] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(496),
    [sym_comment] = ACTIONS(36),
  },
  [293] = {
    [sym__type] = STATE(406),
    [sym_generic_name] = STATE(406),
    [sym_predefined_type] = STATE(406),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [294] = {
    [sym_parameter_modifier] = STATE(408),
    [sym__type] = STATE(406),
    [sym_generic_name] = STATE(406),
    [sym_predefined_type] = STATE(406),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_ref] = ACTIONS(492),
    [anon_sym_out] = ACTIONS(492),
    [anon_sym_this] = ACTIONS(492),
    [sym_params_keyword] = ACTIONS(840),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [295] = {
    [sym_identifier_name] = ACTIONS(842),
    [sym_comment] = ACTIONS(36),
  },
  [296] = {
    [sym__attribute_section] = STATE(410),
    [aux_sym__attributes_repeat1] = STATE(410),
    [anon_sym_sbyte] = ACTIONS(424),
    [anon_sym_byte] = ACTIONS(424),
    [anon_sym_short] = ACTIONS(424),
    [anon_sym_ushort] = ACTIONS(424),
    [anon_sym_int] = ACTIONS(424),
    [anon_sym_uint] = ACTIONS(424),
    [anon_sym_long] = ACTIONS(424),
    [anon_sym_ulong] = ACTIONS(424),
    [anon_sym_char] = ACTIONS(424),
    [anon_sym_ref] = ACTIONS(424),
    [anon_sym_out] = ACTIONS(424),
    [anon_sym_this] = ACTIONS(424),
    [sym_params_keyword] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(496),
    [anon_sym_bool] = ACTIONS(424),
    [anon_sym_decimal] = ACTIONS(424),
    [anon_sym_double] = ACTIONS(424),
    [anon_sym_float] = ACTIONS(424),
    [anon_sym_object] = ACTIONS(424),
    [anon_sym_string] = ACTIONS(424),
    [sym_identifier_name] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
  },
  [297] = {
    [ts_builtin_sym_end] = ACTIONS(844),
    [anon_sym_using] = ACTIONS(844),
    [anon_sym_namespace] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_class] = ACTIONS(844),
    [anon_sym_unsafe] = ACTIONS(844),
    [anon_sym_abstract] = ACTIONS(844),
    [anon_sym_sealed] = ACTIONS(844),
    [anon_sym_static] = ACTIONS(844),
    [anon_sym_new] = ACTIONS(844),
    [anon_sym_public] = ACTIONS(844),
    [anon_sym_protected] = ACTIONS(844),
    [anon_sym_internal] = ACTIONS(844),
    [anon_sym_private] = ACTIONS(844),
    [anon_sym_interface] = ACTIONS(844),
    [anon_sym_struct] = ACTIONS(844),
    [anon_sym_enum] = ACTIONS(844),
    [anon_sym_delegate] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [sym_comment] = ACTIONS(36),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(846),
    [anon_sym_namespace] = ACTIONS(846),
    [anon_sym_class] = ACTIONS(846),
    [anon_sym_unsafe] = ACTIONS(846),
    [anon_sym_abstract] = ACTIONS(846),
    [anon_sym_sealed] = ACTIONS(846),
    [anon_sym_static] = ACTIONS(846),
    [anon_sym_new] = ACTIONS(846),
    [anon_sym_public] = ACTIONS(846),
    [anon_sym_protected] = ACTIONS(846),
    [anon_sym_internal] = ACTIONS(846),
    [anon_sym_private] = ACTIONS(846),
    [anon_sym_interface] = ACTIONS(846),
    [anon_sym_struct] = ACTIONS(846),
    [anon_sym_enum] = ACTIONS(846),
    [anon_sym_delegate] = ACTIONS(846),
    [anon_sym_LBRACK] = ACTIONS(846),
    [sym_comment] = ACTIONS(36),
  },
  [299] = {
    [sym__type_declaration] = STATE(411),
    [sym_class_declaration] = STATE(411),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(411),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(411),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(411),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(411),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(411),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(411),
    [sym_method_declaration] = STATE(411),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(411),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(674),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [300] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(412),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(412),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(704),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [301] = {
    [sym__type_declaration] = STATE(413),
    [sym_class_declaration] = STATE(413),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(413),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(413),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(413),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(413),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(413),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(413),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(791),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [302] = {
    [aux_sym_enum_declaration_repeat1] = STATE(414),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [303] = {
    [anon_sym_LBRACE] = ACTIONS(848),
    [sym_comment] = ACTIONS(36),
  },
  [304] = {
    [anon_sym_SEMI] = ACTIONS(850),
    [sym_comment] = ACTIONS(36),
  },
  [305] = {
    [anon_sym_LBRACE] = ACTIONS(852),
    [sym_comment] = ACTIONS(36),
  },
  [306] = {
    [anon_sym_LBRACE] = ACTIONS(854),
    [sym_comment] = ACTIONS(36),
  },
  [307] = {
    [anon_sym_LBRACE] = ACTIONS(856),
    [sym_comment] = ACTIONS(36),
  },
  [308] = {
    [sym__integral_type] = STATE(420),
    [anon_sym_sbyte] = ACTIONS(858),
    [anon_sym_byte] = ACTIONS(858),
    [anon_sym_short] = ACTIONS(858),
    [anon_sym_ushort] = ACTIONS(858),
    [anon_sym_int] = ACTIONS(858),
    [anon_sym_uint] = ACTIONS(858),
    [anon_sym_long] = ACTIONS(858),
    [anon_sym_ulong] = ACTIONS(858),
    [anon_sym_char] = ACTIONS(858),
    [sym_comment] = ACTIONS(36),
  },
  [309] = {
    [sym_parameter_list] = STATE(421),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [310] = {
    [sym__type_declaration] = STATE(423),
    [sym_class_declaration] = STATE(423),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(423),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(423),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(423),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(423),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(423),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(423),
    [sym_method_declaration] = STATE(423),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(423),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(860),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [311] = {
    [anon_sym_LBRACE] = ACTIONS(862),
    [sym_comment] = ACTIONS(36),
  },
  [312] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(426),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(426),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(864),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [313] = {
    [anon_sym_LBRACE] = ACTIONS(866),
    [sym_comment] = ACTIONS(36),
  },
  [314] = {
    [sym__type_declaration] = STATE(429),
    [sym_class_declaration] = STATE(429),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(429),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(429),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(429),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(429),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(429),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(429),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(868),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [315] = {
    [anon_sym_LBRACE] = ACTIONS(870),
    [sym_comment] = ACTIONS(36),
  },
  [316] = {
    [sym_enum_member_declaration] = STATE(431),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [317] = {
    [sym__integral_type] = STATE(432),
    [anon_sym_sbyte] = ACTIONS(872),
    [anon_sym_byte] = ACTIONS(872),
    [anon_sym_short] = ACTIONS(872),
    [anon_sym_ushort] = ACTIONS(872),
    [anon_sym_int] = ACTIONS(872),
    [anon_sym_uint] = ACTIONS(872),
    [anon_sym_long] = ACTIONS(872),
    [anon_sym_ulong] = ACTIONS(872),
    [anon_sym_char] = ACTIONS(872),
    [sym_comment] = ACTIONS(36),
  },
  [318] = {
    [sym_parameter_list] = STATE(433),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [319] = {
    [anon_sym_RBRACE] = ACTIONS(874),
    [anon_sym_class] = ACTIONS(876),
    [anon_sym_unsafe] = ACTIONS(876),
    [anon_sym_abstract] = ACTIONS(876),
    [anon_sym_sealed] = ACTIONS(876),
    [anon_sym_static] = ACTIONS(876),
    [anon_sym_new] = ACTIONS(876),
    [anon_sym_public] = ACTIONS(876),
    [anon_sym_protected] = ACTIONS(876),
    [anon_sym_internal] = ACTIONS(876),
    [anon_sym_private] = ACTIONS(876),
    [anon_sym_interface] = ACTIONS(876),
    [anon_sym_struct] = ACTIONS(876),
    [anon_sym_enum] = ACTIONS(876),
    [anon_sym_sbyte] = ACTIONS(876),
    [anon_sym_byte] = ACTIONS(876),
    [anon_sym_short] = ACTIONS(876),
    [anon_sym_ushort] = ACTIONS(876),
    [anon_sym_int] = ACTIONS(876),
    [anon_sym_uint] = ACTIONS(876),
    [anon_sym_long] = ACTIONS(876),
    [anon_sym_ulong] = ACTIONS(876),
    [anon_sym_char] = ACTIONS(876),
    [anon_sym_delegate] = ACTIONS(876),
    [sym_void_keyword] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(874),
    [sym_const_keyword] = ACTIONS(876),
    [anon_sym_readonly] = ACTIONS(876),
    [anon_sym_volatile] = ACTIONS(876),
    [anon_sym_bool] = ACTIONS(876),
    [anon_sym_decimal] = ACTIONS(876),
    [anon_sym_double] = ACTIONS(876),
    [anon_sym_float] = ACTIONS(876),
    [anon_sym_object] = ACTIONS(876),
    [anon_sym_string] = ACTIONS(876),
    [sym_identifier_name] = ACTIONS(876),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(876),
  },
  [320] = {
    [sym__expression] = STATE(439),
    [sym_parenthesized_expression] = STATE(439),
    [sym_ternary_expression] = STATE(439),
    [sym_binary_expression] = STATE(439),
    [sym_unary_expression] = STATE(439),
    [sym__literal] = STATE(439),
    [sym_boolean_literal] = STATE(439),
    [sym_character_literal] = STATE(439),
    [sym_integer_literal] = STATE(439),
    [sym_real_literal] = STATE(439),
    [sym_string_literal] = STATE(439),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [sym__statement] = STATE(440),
    [sym_expression_statement] = STATE(440),
    [sym_return_statement] = STATE(440),
    [sym_variable_assignment_statement] = STATE(440),
    [sym_empty_statement] = STATE(440),
    [aux_sym_statement_block_repeat1] = STATE(440),
    [anon_sym_SEMI] = ACTIONS(878),
    [anon_sym_RBRACE] = ACTIONS(880),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(886),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(888),
    [sym_comment] = ACTIONS(36),
    [anon_sym_return] = ACTIONS(890),
  },
  [321] = {
    [anon_sym_RBRACE] = ACTIONS(892),
    [anon_sym_class] = ACTIONS(894),
    [anon_sym_unsafe] = ACTIONS(894),
    [anon_sym_abstract] = ACTIONS(894),
    [anon_sym_sealed] = ACTIONS(894),
    [anon_sym_static] = ACTIONS(894),
    [anon_sym_new] = ACTIONS(894),
    [anon_sym_public] = ACTIONS(894),
    [anon_sym_protected] = ACTIONS(894),
    [anon_sym_internal] = ACTIONS(894),
    [anon_sym_private] = ACTIONS(894),
    [anon_sym_interface] = ACTIONS(894),
    [anon_sym_struct] = ACTIONS(894),
    [anon_sym_enum] = ACTIONS(894),
    [anon_sym_sbyte] = ACTIONS(894),
    [anon_sym_byte] = ACTIONS(894),
    [anon_sym_short] = ACTIONS(894),
    [anon_sym_ushort] = ACTIONS(894),
    [anon_sym_int] = ACTIONS(894),
    [anon_sym_uint] = ACTIONS(894),
    [anon_sym_long] = ACTIONS(894),
    [anon_sym_ulong] = ACTIONS(894),
    [anon_sym_char] = ACTIONS(894),
    [anon_sym_delegate] = ACTIONS(894),
    [sym_void_keyword] = ACTIONS(894),
    [anon_sym_LBRACK] = ACTIONS(892),
    [sym_const_keyword] = ACTIONS(894),
    [anon_sym_readonly] = ACTIONS(894),
    [anon_sym_volatile] = ACTIONS(894),
    [anon_sym_bool] = ACTIONS(894),
    [anon_sym_decimal] = ACTIONS(894),
    [anon_sym_double] = ACTIONS(894),
    [anon_sym_float] = ACTIONS(894),
    [anon_sym_object] = ACTIONS(894),
    [anon_sym_string] = ACTIONS(894),
    [sym_identifier_name] = ACTIONS(894),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(894),
  },
  [322] = {
    [sym_statement_block] = STATE(441),
    [anon_sym_LBRACE] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [323] = {
    [sym_parameter_list] = STATE(442),
    [sym_type_parameter_list] = STATE(443),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [324] = {
    [sym_type_parameter_list] = STATE(444),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [325] = {
    [sym_type_parameter_list] = STATE(445),
    [anon_sym_LBRACE] = ACTIONS(866),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [326] = {
    [sym_type_parameter_list] = STATE(446),
    [anon_sym_LBRACE] = ACTIONS(870),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [327] = {
    [anon_sym_LBRACE] = ACTIONS(896),
    [anon_sym_COLON] = ACTIONS(898),
    [sym_comment] = ACTIONS(36),
  },
  [328] = {
    [sym_identifier_name] = ACTIONS(900),
    [sym_comment] = ACTIONS(36),
  },
  [329] = {
    [sym_statement_block] = STATE(450),
    [anon_sym_LBRACE] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [330] = {
    [sym_parameter_list] = STATE(442),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [331] = {
    [anon_sym_SEMI] = ACTIONS(902),
    [sym_comment] = ACTIONS(36),
  },
  [332] = {
    [sym_parameter_list] = STATE(452),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_identifier_name] = ACTIONS(312),
    [sym_comment] = ACTIONS(36),
  },
  [333] = {
    [sym_identifier_name] = ACTIONS(904),
    [sym_comment] = ACTIONS(36),
  },
  [334] = {
    [sym_identifier_name] = ACTIONS(906),
    [sym_comment] = ACTIONS(36),
  },
  [335] = {
    [sym_identifier_name] = ACTIONS(908),
    [sym_comment] = ACTIONS(36),
  },
  [336] = {
    [sym_identifier_name] = ACTIONS(910),
    [sym_comment] = ACTIONS(36),
  },
  [337] = {
    [sym_identifier_name] = ACTIONS(912),
    [sym_comment] = ACTIONS(36),
  },
  [338] = {
    [sym_return_type] = STATE(458),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [339] = {
    [sym_variable_declaration] = STATE(459),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [340] = {
    [sym_parameter_list] = STATE(452),
    [sym_type_parameter_list] = STATE(460),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(124),
    [sym_identifier_name] = ACTIONS(144),
    [sym_comment] = ACTIONS(36),
  },
  [341] = {
    [sym_return_type] = STATE(461),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [342] = {
    [sym__expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(463),
    [sym_ternary_expression] = STATE(463),
    [sym_binary_expression] = STATE(463),
    [sym_unary_expression] = STATE(463),
    [sym__literal] = STATE(463),
    [sym_boolean_literal] = STATE(463),
    [sym_character_literal] = STATE(463),
    [sym_integer_literal] = STATE(463),
    [sym_real_literal] = STATE(463),
    [sym_string_literal] = STATE(463),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(918),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(918),
    [sym_comment] = ACTIONS(36),
  },
  [343] = {
    [anon_sym_SEMI] = ACTIONS(920),
    [anon_sym_COMMA] = ACTIONS(920),
    [sym_comment] = ACTIONS(36),
  },
  [344] = {
    [sym_variable_declarator] = STATE(464),
    [sym_identifier_name] = ACTIONS(438),
    [sym_comment] = ACTIONS(36),
  },
  [345] = {
    [aux_sym_variable_declaration_repeat1] = STATE(465),
    [anon_sym_SEMI] = ACTIONS(922),
    [anon_sym_COMMA] = ACTIONS(614),
    [sym_comment] = ACTIONS(36),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(924),
    [anon_sym_GT] = ACTIONS(924),
    [sym_comment] = ACTIONS(36),
  },
  [347] = {
    [anon_sym_LBRACE] = ACTIONS(926),
    [anon_sym_COMMA] = ACTIONS(926),
    [anon_sym_LPAREN] = ACTIONS(926),
    [anon_sym_LBRACK] = ACTIONS(926),
    [anon_sym_GT] = ACTIONS(926),
    [sym_identifier_name] = ACTIONS(926),
    [sym_comment] = ACTIONS(36),
  },
  [348] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(348),
    [anon_sym_COMMA] = ACTIONS(928),
    [anon_sym_GT] = ACTIONS(924),
    [sym_comment] = ACTIONS(36),
  },
  [349] = {
    [ts_builtin_sym_end] = ACTIONS(931),
    [anon_sym_using] = ACTIONS(931),
    [anon_sym_namespace] = ACTIONS(931),
    [anon_sym_RBRACE] = ACTIONS(931),
    [anon_sym_class] = ACTIONS(931),
    [anon_sym_unsafe] = ACTIONS(931),
    [anon_sym_abstract] = ACTIONS(931),
    [anon_sym_sealed] = ACTIONS(931),
    [anon_sym_static] = ACTIONS(931),
    [anon_sym_new] = ACTIONS(931),
    [anon_sym_public] = ACTIONS(931),
    [anon_sym_protected] = ACTIONS(931),
    [anon_sym_internal] = ACTIONS(931),
    [anon_sym_private] = ACTIONS(931),
    [anon_sym_interface] = ACTIONS(931),
    [anon_sym_struct] = ACTIONS(931),
    [anon_sym_enum] = ACTIONS(931),
    [anon_sym_delegate] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(931),
    [sym_comment] = ACTIONS(36),
  },
  [350] = {
    [anon_sym_unsafe] = ACTIONS(320),
    [anon_sym_static] = ACTIONS(320),
    [anon_sym_new] = ACTIONS(320),
    [anon_sym_public] = ACTIONS(320),
    [anon_sym_protected] = ACTIONS(320),
    [anon_sym_internal] = ACTIONS(320),
    [anon_sym_private] = ACTIONS(320),
    [anon_sym_sbyte] = ACTIONS(320),
    [anon_sym_byte] = ACTIONS(320),
    [anon_sym_short] = ACTIONS(320),
    [anon_sym_ushort] = ACTIONS(320),
    [anon_sym_int] = ACTIONS(320),
    [anon_sym_uint] = ACTIONS(320),
    [anon_sym_long] = ACTIONS(320),
    [anon_sym_ulong] = ACTIONS(320),
    [anon_sym_char] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym_const_keyword] = ACTIONS(320),
    [anon_sym_readonly] = ACTIONS(320),
    [anon_sym_volatile] = ACTIONS(320),
    [anon_sym_bool] = ACTIONS(320),
    [anon_sym_decimal] = ACTIONS(320),
    [anon_sym_double] = ACTIONS(320),
    [anon_sym_float] = ACTIONS(320),
    [anon_sym_object] = ACTIONS(320),
    [anon_sym_string] = ACTIONS(320),
    [sym_identifier_name] = ACTIONS(320),
    [sym_comment] = ACTIONS(36),
  },
  [351] = {
    [anon_sym_RBRACE] = ACTIONS(874),
    [anon_sym_unsafe] = ACTIONS(876),
    [anon_sym_static] = ACTIONS(876),
    [anon_sym_new] = ACTIONS(876),
    [anon_sym_public] = ACTIONS(876),
    [anon_sym_protected] = ACTIONS(876),
    [anon_sym_internal] = ACTIONS(876),
    [anon_sym_private] = ACTIONS(876),
    [anon_sym_sbyte] = ACTIONS(876),
    [anon_sym_byte] = ACTIONS(876),
    [anon_sym_short] = ACTIONS(876),
    [anon_sym_ushort] = ACTIONS(876),
    [anon_sym_int] = ACTIONS(876),
    [anon_sym_uint] = ACTIONS(876),
    [anon_sym_long] = ACTIONS(876),
    [anon_sym_ulong] = ACTIONS(876),
    [anon_sym_char] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(874),
    [sym_const_keyword] = ACTIONS(876),
    [anon_sym_readonly] = ACTIONS(876),
    [anon_sym_volatile] = ACTIONS(876),
    [anon_sym_bool] = ACTIONS(876),
    [anon_sym_decimal] = ACTIONS(876),
    [anon_sym_double] = ACTIONS(876),
    [anon_sym_float] = ACTIONS(876),
    [anon_sym_object] = ACTIONS(876),
    [anon_sym_string] = ACTIONS(876),
    [sym_identifier_name] = ACTIONS(876),
    [sym_comment] = ACTIONS(36),
  },
  [352] = {
    [anon_sym_SEMI] = ACTIONS(933),
    [sym_comment] = ACTIONS(36),
  },
  [353] = {
    [sym_variable_declaration] = STATE(467),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(935),
    [anon_sym_using] = ACTIONS(935),
    [anon_sym_namespace] = ACTIONS(935),
    [anon_sym_RBRACE] = ACTIONS(935),
    [anon_sym_class] = ACTIONS(935),
    [anon_sym_unsafe] = ACTIONS(935),
    [anon_sym_abstract] = ACTIONS(935),
    [anon_sym_sealed] = ACTIONS(935),
    [anon_sym_static] = ACTIONS(935),
    [anon_sym_new] = ACTIONS(935),
    [anon_sym_public] = ACTIONS(935),
    [anon_sym_protected] = ACTIONS(935),
    [anon_sym_internal] = ACTIONS(935),
    [anon_sym_private] = ACTIONS(935),
    [anon_sym_interface] = ACTIONS(935),
    [anon_sym_struct] = ACTIONS(935),
    [anon_sym_enum] = ACTIONS(935),
    [anon_sym_delegate] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(935),
    [sym_comment] = ACTIONS(36),
  },
  [355] = {
    [sym__type_declaration] = STATE(469),
    [sym_class_declaration] = STATE(469),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(469),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(469),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(469),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(469),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(469),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(469),
    [sym_method_declaration] = STATE(469),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(469),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [356] = {
    [anon_sym_LBRACE] = ACTIONS(939),
    [sym_comment] = ACTIONS(36),
  },
  [357] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(472),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(472),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(941),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [358] = {
    [anon_sym_LBRACE] = ACTIONS(943),
    [sym_comment] = ACTIONS(36),
  },
  [359] = {
    [sym__type_declaration] = STATE(475),
    [sym_class_declaration] = STATE(475),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(475),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(475),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(475),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(475),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(475),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(475),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(945),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [360] = {
    [anon_sym_LBRACE] = ACTIONS(947),
    [sym_comment] = ACTIONS(36),
  },
  [361] = {
    [sym_enum_member_declaration] = STATE(477),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [362] = {
    [sym__integral_type] = STATE(478),
    [anon_sym_sbyte] = ACTIONS(949),
    [anon_sym_byte] = ACTIONS(949),
    [anon_sym_short] = ACTIONS(949),
    [anon_sym_ushort] = ACTIONS(949),
    [anon_sym_int] = ACTIONS(949),
    [anon_sym_uint] = ACTIONS(949),
    [anon_sym_long] = ACTIONS(949),
    [anon_sym_ulong] = ACTIONS(949),
    [anon_sym_char] = ACTIONS(949),
    [sym_comment] = ACTIONS(36),
  },
  [363] = {
    [sym_parameter_list] = STATE(479),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [364] = {
    [anon_sym_class] = ACTIONS(320),
    [anon_sym_unsafe] = ACTIONS(320),
    [anon_sym_abstract] = ACTIONS(320),
    [anon_sym_sealed] = ACTIONS(320),
    [anon_sym_static] = ACTIONS(320),
    [anon_sym_new] = ACTIONS(320),
    [anon_sym_public] = ACTIONS(320),
    [anon_sym_protected] = ACTIONS(320),
    [anon_sym_internal] = ACTIONS(320),
    [anon_sym_private] = ACTIONS(320),
    [anon_sym_interface] = ACTIONS(320),
    [anon_sym_struct] = ACTIONS(320),
    [anon_sym_enum] = ACTIONS(320),
    [anon_sym_sbyte] = ACTIONS(320),
    [anon_sym_byte] = ACTIONS(320),
    [anon_sym_short] = ACTIONS(320),
    [anon_sym_ushort] = ACTIONS(320),
    [anon_sym_int] = ACTIONS(320),
    [anon_sym_uint] = ACTIONS(320),
    [anon_sym_long] = ACTIONS(320),
    [anon_sym_ulong] = ACTIONS(320),
    [anon_sym_char] = ACTIONS(320),
    [anon_sym_delegate] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym_const_keyword] = ACTIONS(320),
    [anon_sym_readonly] = ACTIONS(320),
    [anon_sym_volatile] = ACTIONS(320),
    [anon_sym_bool] = ACTIONS(320),
    [anon_sym_decimal] = ACTIONS(320),
    [anon_sym_double] = ACTIONS(320),
    [anon_sym_float] = ACTIONS(320),
    [anon_sym_object] = ACTIONS(320),
    [anon_sym_string] = ACTIONS(320),
    [sym_identifier_name] = ACTIONS(320),
    [sym_comment] = ACTIONS(36),
  },
  [365] = {
    [anon_sym_RBRACE] = ACTIONS(874),
    [anon_sym_class] = ACTIONS(876),
    [anon_sym_unsafe] = ACTIONS(876),
    [anon_sym_abstract] = ACTIONS(876),
    [anon_sym_sealed] = ACTIONS(876),
    [anon_sym_static] = ACTIONS(876),
    [anon_sym_new] = ACTIONS(876),
    [anon_sym_public] = ACTIONS(876),
    [anon_sym_protected] = ACTIONS(876),
    [anon_sym_internal] = ACTIONS(876),
    [anon_sym_private] = ACTIONS(876),
    [anon_sym_interface] = ACTIONS(876),
    [anon_sym_struct] = ACTIONS(876),
    [anon_sym_enum] = ACTIONS(876),
    [anon_sym_sbyte] = ACTIONS(876),
    [anon_sym_byte] = ACTIONS(876),
    [anon_sym_short] = ACTIONS(876),
    [anon_sym_ushort] = ACTIONS(876),
    [anon_sym_int] = ACTIONS(876),
    [anon_sym_uint] = ACTIONS(876),
    [anon_sym_long] = ACTIONS(876),
    [anon_sym_ulong] = ACTIONS(876),
    [anon_sym_char] = ACTIONS(876),
    [anon_sym_delegate] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(874),
    [sym_const_keyword] = ACTIONS(876),
    [anon_sym_readonly] = ACTIONS(876),
    [anon_sym_volatile] = ACTIONS(876),
    [anon_sym_bool] = ACTIONS(876),
    [anon_sym_decimal] = ACTIONS(876),
    [anon_sym_double] = ACTIONS(876),
    [anon_sym_float] = ACTIONS(876),
    [anon_sym_object] = ACTIONS(876),
    [anon_sym_string] = ACTIONS(876),
    [sym_identifier_name] = ACTIONS(876),
    [sym_comment] = ACTIONS(36),
  },
  [366] = {
    [sym_type_parameter_list] = STATE(480),
    [anon_sym_LBRACE] = ACTIONS(939),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [367] = {
    [sym_type_parameter_list] = STATE(481),
    [anon_sym_LBRACE] = ACTIONS(943),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [368] = {
    [sym_type_parameter_list] = STATE(482),
    [anon_sym_LBRACE] = ACTIONS(947),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [369] = {
    [anon_sym_LBRACE] = ACTIONS(951),
    [anon_sym_COLON] = ACTIONS(953),
    [sym_comment] = ACTIONS(36),
  },
  [370] = {
    [sym_identifier_name] = ACTIONS(955),
    [sym_comment] = ACTIONS(36),
  },
  [371] = {
    [anon_sym_SEMI] = ACTIONS(957),
    [sym_comment] = ACTIONS(36),
  },
  [372] = {
    [sym_identifier_name] = ACTIONS(959),
    [sym_comment] = ACTIONS(36),
  },
  [373] = {
    [sym_identifier_name] = ACTIONS(961),
    [sym_comment] = ACTIONS(36),
  },
  [374] = {
    [sym_identifier_name] = ACTIONS(963),
    [sym_comment] = ACTIONS(36),
  },
  [375] = {
    [sym_identifier_name] = ACTIONS(965),
    [sym_comment] = ACTIONS(36),
  },
  [376] = {
    [sym_return_type] = STATE(491),
    [sym__type] = STATE(52),
    [sym_generic_name] = STATE(52),
    [sym_predefined_type] = STATE(52),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [377] = {
    [sym_variable_declaration] = STATE(492),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [378] = {
    [ts_builtin_sym_end] = ACTIONS(967),
    [anon_sym_using] = ACTIONS(967),
    [anon_sym_namespace] = ACTIONS(967),
    [anon_sym_RBRACE] = ACTIONS(967),
    [anon_sym_class] = ACTIONS(967),
    [anon_sym_unsafe] = ACTIONS(967),
    [anon_sym_abstract] = ACTIONS(967),
    [anon_sym_sealed] = ACTIONS(967),
    [anon_sym_static] = ACTIONS(967),
    [anon_sym_new] = ACTIONS(967),
    [anon_sym_public] = ACTIONS(967),
    [anon_sym_protected] = ACTIONS(967),
    [anon_sym_internal] = ACTIONS(967),
    [anon_sym_private] = ACTIONS(967),
    [anon_sym_interface] = ACTIONS(967),
    [anon_sym_struct] = ACTIONS(967),
    [anon_sym_enum] = ACTIONS(967),
    [anon_sym_delegate] = ACTIONS(967),
    [anon_sym_LBRACK] = ACTIONS(967),
    [sym_comment] = ACTIONS(36),
  },
  [379] = {
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym_identifier_name] = ACTIONS(322),
    [sym_comment] = ACTIONS(36),
  },
  [380] = {
    [sym__expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(494),
    [sym_ternary_expression] = STATE(494),
    [sym_binary_expression] = STATE(494),
    [sym_unary_expression] = STATE(494),
    [sym__literal] = STATE(494),
    [sym_boolean_literal] = STATE(494),
    [sym_character_literal] = STATE(494),
    [sym_integer_literal] = STATE(494),
    [sym_real_literal] = STATE(494),
    [sym_string_literal] = STATE(494),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(973),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(973),
    [sym_comment] = ACTIONS(36),
  },
  [381] = {
    [sym__expression] = STATE(495),
    [sym_parenthesized_expression] = STATE(495),
    [sym_ternary_expression] = STATE(495),
    [sym_binary_expression] = STATE(495),
    [sym_unary_expression] = STATE(495),
    [sym__literal] = STATE(495),
    [sym_boolean_literal] = STATE(495),
    [sym_character_literal] = STATE(495),
    [sym_integer_literal] = STATE(495),
    [sym_real_literal] = STATE(495),
    [sym_string_literal] = STATE(495),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(975),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(975),
    [sym_comment] = ACTIONS(36),
  },
  [382] = {
    [anon_sym_SEMI] = ACTIONS(977),
    [anon_sym_RBRACE] = ACTIONS(977),
    [anon_sym_COLON] = ACTIONS(977),
    [anon_sym_COMMA] = ACTIONS(977),
    [anon_sym_RPAREN] = ACTIONS(977),
    [sym_params_keyword] = ACTIONS(977),
    [anon_sym_LBRACK] = ACTIONS(977),
    [anon_sym_QMARK] = ACTIONS(977),
    [anon_sym_AMP_AMP] = ACTIONS(977),
    [anon_sym_PIPE_PIPE] = ACTIONS(977),
    [anon_sym_GT_GT] = ACTIONS(977),
    [anon_sym_LT_LT] = ACTIONS(977),
    [anon_sym_AMP] = ACTIONS(979),
    [anon_sym_CARET] = ACTIONS(977),
    [anon_sym_PIPE] = ACTIONS(979),
    [anon_sym_PLUS] = ACTIONS(977),
    [anon_sym_DASH] = ACTIONS(977),
    [anon_sym_STAR] = ACTIONS(977),
    [anon_sym_SLASH] = ACTIONS(979),
    [anon_sym_PERCENT] = ACTIONS(977),
    [anon_sym_LT] = ACTIONS(979),
    [anon_sym_LT_EQ] = ACTIONS(977),
    [anon_sym_EQ_EQ] = ACTIONS(977),
    [anon_sym_BANG_EQ] = ACTIONS(977),
    [anon_sym_GT_EQ] = ACTIONS(977),
    [anon_sym_GT] = ACTIONS(979),
    [sym_comment] = ACTIONS(36),
  },
  [383] = {
    [sym__unicode_escape_sequence] = STATE(496),
    [sym__simple_escape_sequence] = STATE(496),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(981),
    [sym__hexadecimal_escape_sequence] = ACTIONS(981),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(981),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(981),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(981),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(981),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(981),
    [anon_sym_BSLASH0] = ACTIONS(981),
    [anon_sym_BSLASHa] = ACTIONS(981),
    [anon_sym_BSLASHb] = ACTIONS(981),
    [anon_sym_BSLASHf] = ACTIONS(981),
    [anon_sym_BSLASHn] = ACTIONS(981),
    [anon_sym_BSLASHr] = ACTIONS(981),
    [anon_sym_BSLASHt] = ACTIONS(981),
    [anon_sym_BSLASHv] = ACTIONS(981),
    [sym_comment] = ACTIONS(983),
  },
  [384] = {
    [anon_sym_SEMI] = ACTIONS(985),
    [anon_sym_RBRACE] = ACTIONS(985),
    [anon_sym_COLON] = ACTIONS(985),
    [anon_sym_COMMA] = ACTIONS(985),
    [anon_sym_RPAREN] = ACTIONS(985),
    [sym_params_keyword] = ACTIONS(985),
    [anon_sym_LBRACK] = ACTIONS(985),
    [anon_sym_QMARK] = ACTIONS(985),
    [anon_sym_AMP_AMP] = ACTIONS(985),
    [anon_sym_PIPE_PIPE] = ACTIONS(985),
    [anon_sym_GT_GT] = ACTIONS(985),
    [anon_sym_LT_LT] = ACTIONS(985),
    [anon_sym_AMP] = ACTIONS(987),
    [anon_sym_CARET] = ACTIONS(985),
    [anon_sym_PIPE] = ACTIONS(987),
    [anon_sym_PLUS] = ACTIONS(985),
    [anon_sym_DASH] = ACTIONS(985),
    [anon_sym_STAR] = ACTIONS(985),
    [anon_sym_SLASH] = ACTIONS(987),
    [anon_sym_PERCENT] = ACTIONS(985),
    [anon_sym_LT] = ACTIONS(987),
    [anon_sym_LT_EQ] = ACTIONS(985),
    [anon_sym_EQ_EQ] = ACTIONS(985),
    [anon_sym_BANG_EQ] = ACTIONS(985),
    [anon_sym_GT_EQ] = ACTIONS(985),
    [anon_sym_GT] = ACTIONS(987),
    [sym__integer_type_suffix] = ACTIONS(989),
    [anon_sym_DOT] = ACTIONS(991),
    [sym__real_type_suffix] = ACTIONS(993),
    [sym__exponent_part] = ACTIONS(995),
    [sym_comment] = ACTIONS(36),
  },
  [385] = {
    [anon_sym_SEMI] = ACTIONS(985),
    [anon_sym_RBRACE] = ACTIONS(985),
    [anon_sym_COLON] = ACTIONS(985),
    [anon_sym_COMMA] = ACTIONS(985),
    [anon_sym_RPAREN] = ACTIONS(985),
    [sym_params_keyword] = ACTIONS(985),
    [anon_sym_LBRACK] = ACTIONS(985),
    [anon_sym_QMARK] = ACTIONS(985),
    [anon_sym_AMP_AMP] = ACTIONS(985),
    [anon_sym_PIPE_PIPE] = ACTIONS(985),
    [anon_sym_GT_GT] = ACTIONS(985),
    [anon_sym_LT_LT] = ACTIONS(985),
    [anon_sym_AMP] = ACTIONS(987),
    [anon_sym_CARET] = ACTIONS(985),
    [anon_sym_PIPE] = ACTIONS(987),
    [anon_sym_PLUS] = ACTIONS(985),
    [anon_sym_DASH] = ACTIONS(985),
    [anon_sym_STAR] = ACTIONS(985),
    [anon_sym_SLASH] = ACTIONS(987),
    [anon_sym_PERCENT] = ACTIONS(985),
    [anon_sym_LT] = ACTIONS(987),
    [anon_sym_LT_EQ] = ACTIONS(985),
    [anon_sym_EQ_EQ] = ACTIONS(985),
    [anon_sym_BANG_EQ] = ACTIONS(985),
    [anon_sym_GT_EQ] = ACTIONS(985),
    [anon_sym_GT] = ACTIONS(987),
    [sym__integer_type_suffix] = ACTIONS(989),
    [sym_comment] = ACTIONS(36),
  },
  [386] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(997),
    [sym_comment] = ACTIONS(36),
  },
  [387] = {
    [sym__unicode_escape_sequence] = STATE(503),
    [sym__simple_escape_sequence] = STATE(503),
    [sym__regular_string_literal_character] = STATE(503),
    [aux_sym__regular_string_literal_repeat1] = STATE(503),
    [sym__hexadecimal_escape_sequence] = ACTIONS(999),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(999),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(999),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(999),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(999),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(999),
    [anon_sym_BSLASH0] = ACTIONS(999),
    [anon_sym_BSLASHa] = ACTIONS(999),
    [anon_sym_BSLASHb] = ACTIONS(999),
    [anon_sym_BSLASHf] = ACTIONS(999),
    [anon_sym_BSLASHn] = ACTIONS(999),
    [anon_sym_BSLASHr] = ACTIONS(999),
    [anon_sym_BSLASHt] = ACTIONS(999),
    [anon_sym_BSLASHv] = ACTIONS(999),
    [anon_sym_DQUOTE] = ACTIONS(1001),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(999),
    [sym_comment] = ACTIONS(983),
  },
  [388] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(1003),
    [sym_comment] = ACTIONS(983),
  },
  [389] = {
    [anon_sym_RBRACE] = ACTIONS(1005),
    [anon_sym_COMMA] = ACTIONS(1005),
    [anon_sym_QMARK] = ACTIONS(1007),
    [anon_sym_AMP_AMP] = ACTIONS(1009),
    [anon_sym_PIPE_PIPE] = ACTIONS(1011),
    [anon_sym_GT_GT] = ACTIONS(1013),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_AMP] = ACTIONS(1015),
    [anon_sym_CARET] = ACTIONS(1017),
    [anon_sym_PIPE] = ACTIONS(1019),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_SLASH] = ACTIONS(1025),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LT] = ACTIONS(1027),
    [anon_sym_LT_EQ] = ACTIONS(1029),
    [anon_sym_EQ_EQ] = ACTIONS(1031),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_GT_EQ] = ACTIONS(1029),
    [anon_sym_GT] = ACTIONS(1027),
    [sym_comment] = ACTIONS(36),
  },
  [390] = {
    [anon_sym_SEMI] = ACTIONS(1033),
    [anon_sym_RBRACE] = ACTIONS(1033),
    [anon_sym_COLON] = ACTIONS(1033),
    [anon_sym_COMMA] = ACTIONS(1033),
    [anon_sym_RPAREN] = ACTIONS(1033),
    [sym_params_keyword] = ACTIONS(1033),
    [anon_sym_LBRACK] = ACTIONS(1033),
    [anon_sym_QMARK] = ACTIONS(1033),
    [anon_sym_AMP_AMP] = ACTIONS(1033),
    [anon_sym_PIPE_PIPE] = ACTIONS(1033),
    [anon_sym_GT_GT] = ACTIONS(1033),
    [anon_sym_LT_LT] = ACTIONS(1033),
    [anon_sym_AMP] = ACTIONS(1035),
    [anon_sym_CARET] = ACTIONS(1033),
    [anon_sym_PIPE] = ACTIONS(1035),
    [anon_sym_PLUS] = ACTIONS(1033),
    [anon_sym_DASH] = ACTIONS(1033),
    [anon_sym_STAR] = ACTIONS(1033),
    [anon_sym_SLASH] = ACTIONS(1035),
    [anon_sym_PERCENT] = ACTIONS(1033),
    [anon_sym_LT] = ACTIONS(1035),
    [anon_sym_LT_EQ] = ACTIONS(1033),
    [anon_sym_EQ_EQ] = ACTIONS(1033),
    [anon_sym_BANG_EQ] = ACTIONS(1033),
    [anon_sym_GT_EQ] = ACTIONS(1033),
    [anon_sym_GT] = ACTIONS(1035),
    [sym_comment] = ACTIONS(36),
  },
  [391] = {
    [ts_builtin_sym_end] = ACTIONS(1037),
    [anon_sym_using] = ACTIONS(1037),
    [anon_sym_namespace] = ACTIONS(1037),
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_class] = ACTIONS(1037),
    [anon_sym_unsafe] = ACTIONS(1037),
    [anon_sym_abstract] = ACTIONS(1037),
    [anon_sym_sealed] = ACTIONS(1037),
    [anon_sym_static] = ACTIONS(1037),
    [anon_sym_new] = ACTIONS(1037),
    [anon_sym_public] = ACTIONS(1037),
    [anon_sym_protected] = ACTIONS(1037),
    [anon_sym_internal] = ACTIONS(1037),
    [anon_sym_private] = ACTIONS(1037),
    [anon_sym_interface] = ACTIONS(1037),
    [anon_sym_struct] = ACTIONS(1037),
    [anon_sym_enum] = ACTIONS(1037),
    [anon_sym_delegate] = ACTIONS(1037),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym_comment] = ACTIONS(36),
  },
  [392] = {
    [anon_sym_RBRACE] = ACTIONS(1039),
    [anon_sym_COMMA] = ACTIONS(1039),
    [sym_comment] = ACTIONS(36),
  },
  [393] = {
    [ts_builtin_sym_end] = ACTIONS(1037),
    [anon_sym_SEMI] = ACTIONS(1041),
    [anon_sym_using] = ACTIONS(1037),
    [anon_sym_namespace] = ACTIONS(1037),
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_class] = ACTIONS(1037),
    [anon_sym_unsafe] = ACTIONS(1037),
    [anon_sym_abstract] = ACTIONS(1037),
    [anon_sym_sealed] = ACTIONS(1037),
    [anon_sym_static] = ACTIONS(1037),
    [anon_sym_new] = ACTIONS(1037),
    [anon_sym_public] = ACTIONS(1037),
    [anon_sym_protected] = ACTIONS(1037),
    [anon_sym_internal] = ACTIONS(1037),
    [anon_sym_private] = ACTIONS(1037),
    [anon_sym_interface] = ACTIONS(1037),
    [anon_sym_struct] = ACTIONS(1037),
    [anon_sym_enum] = ACTIONS(1037),
    [anon_sym_delegate] = ACTIONS(1037),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym_comment] = ACTIONS(36),
  },
  [394] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1039),
    [anon_sym_COMMA] = ACTIONS(1043),
    [sym_comment] = ACTIONS(36),
  },
  [395] = {
    [anon_sym_RBRACE] = ACTIONS(1046),
    [anon_sym_COMMA] = ACTIONS(1046),
    [sym_comment] = ACTIONS(36),
  },
  [396] = {
    [aux_sym_enum_declaration_repeat1] = STATE(517),
    [anon_sym_RBRACE] = ACTIONS(1048),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [397] = {
    [sym_identifier_name] = ACTIONS(1050),
    [sym_comment] = ACTIONS(36),
  },
  [398] = {
    [sym_array_rank_specifier] = STATE(520),
    [anon_sym_LBRACK] = ACTIONS(1052),
    [sym_comment] = ACTIONS(36),
  },
  [399] = {
    [anon_sym_RBRACK] = ACTIONS(1054),
    [sym_comment] = ACTIONS(36),
  },
  [400] = {
    [anon_sym_SEMI] = ACTIONS(1056),
    [anon_sym_LBRACE] = ACTIONS(1056),
    [sym_comment] = ACTIONS(36),
  },
  [401] = {
    [sym_parameter] = STATE(523),
    [sym_parameter_modifier] = STATE(293),
    [sym__attributes] = STATE(524),
    [sym__attribute_section] = STATE(525),
    [sym__type] = STATE(295),
    [sym_generic_name] = STATE(295),
    [sym_predefined_type] = STATE(295),
    [aux_sym__attributes_repeat1] = STATE(525),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_ref] = ACTIONS(492),
    [anon_sym_out] = ACTIONS(492),
    [anon_sym_this] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(1058),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [402] = {
    [anon_sym_RPAREN] = ACTIONS(1060),
    [sym_comment] = ACTIONS(36),
  },
  [403] = {
    [sym_params_keyword] = ACTIONS(1062),
    [sym_comment] = ACTIONS(36),
  },
  [404] = {
    [sym_parameter_array] = STATE(526),
    [sym__attributes] = STATE(403),
    [sym__attribute_section] = STATE(405),
    [aux_sym__formal_parameter_list_repeat1] = STATE(527),
    [aux_sym__attributes_repeat1] = STATE(405),
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(1060),
    [sym_params_keyword] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(496),
    [sym_comment] = ACTIONS(36),
  },
  [405] = {
    [sym__attribute_section] = STATE(528),
    [aux_sym__attributes_repeat1] = STATE(528),
    [sym_params_keyword] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(496),
    [sym_comment] = ACTIONS(36),
  },
  [406] = {
    [sym_identifier_name] = ACTIONS(1064),
    [sym_comment] = ACTIONS(36),
  },
  [407] = {
    [sym_array_type] = STATE(530),
    [sym__type] = STATE(398),
    [sym_generic_name] = STATE(398),
    [sym_predefined_type] = STATE(398),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [408] = {
    [sym__type] = STATE(531),
    [sym_generic_name] = STATE(531),
    [sym_predefined_type] = STATE(531),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [409] = {
    [sym_equals_value_clause] = STATE(533),
    [anon_sym_COMMA] = ACTIONS(1066),
    [anon_sym_RPAREN] = ACTIONS(1066),
    [sym_params_keyword] = ACTIONS(1066),
    [anon_sym_LBRACK] = ACTIONS(1066),
    [anon_sym_EQ] = ACTIONS(1068),
    [sym_comment] = ACTIONS(36),
  },
  [410] = {
    [sym__attribute_section] = STATE(410),
    [aux_sym__attributes_repeat1] = STATE(410),
    [anon_sym_sbyte] = ACTIONS(668),
    [anon_sym_byte] = ACTIONS(668),
    [anon_sym_short] = ACTIONS(668),
    [anon_sym_ushort] = ACTIONS(668),
    [anon_sym_int] = ACTIONS(668),
    [anon_sym_uint] = ACTIONS(668),
    [anon_sym_long] = ACTIONS(668),
    [anon_sym_ulong] = ACTIONS(668),
    [anon_sym_char] = ACTIONS(668),
    [anon_sym_ref] = ACTIONS(668),
    [anon_sym_out] = ACTIONS(668),
    [anon_sym_this] = ACTIONS(668),
    [sym_params_keyword] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(1070),
    [anon_sym_bool] = ACTIONS(668),
    [anon_sym_decimal] = ACTIONS(668),
    [anon_sym_double] = ACTIONS(668),
    [anon_sym_float] = ACTIONS(668),
    [anon_sym_object] = ACTIONS(668),
    [anon_sym_string] = ACTIONS(668),
    [sym_identifier_name] = ACTIONS(668),
    [sym_comment] = ACTIONS(36),
  },
  [411] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [412] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1075),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [413] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1077),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [414] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1048),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [415] = {
    [sym_enum_member_declaration] = STATE(537),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [416] = {
    [ts_builtin_sym_end] = ACTIONS(1079),
    [anon_sym_using] = ACTIONS(1079),
    [anon_sym_namespace] = ACTIONS(1079),
    [anon_sym_RBRACE] = ACTIONS(1079),
    [anon_sym_class] = ACTIONS(1079),
    [anon_sym_unsafe] = ACTIONS(1079),
    [anon_sym_abstract] = ACTIONS(1079),
    [anon_sym_sealed] = ACTIONS(1079),
    [anon_sym_static] = ACTIONS(1079),
    [anon_sym_new] = ACTIONS(1079),
    [anon_sym_public] = ACTIONS(1079),
    [anon_sym_protected] = ACTIONS(1079),
    [anon_sym_internal] = ACTIONS(1079),
    [anon_sym_private] = ACTIONS(1079),
    [anon_sym_interface] = ACTIONS(1079),
    [anon_sym_struct] = ACTIONS(1079),
    [anon_sym_enum] = ACTIONS(1079),
    [anon_sym_delegate] = ACTIONS(1079),
    [anon_sym_LBRACK] = ACTIONS(1079),
    [sym_comment] = ACTIONS(36),
  },
  [417] = {
    [sym__type_declaration] = STATE(538),
    [sym_class_declaration] = STATE(538),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(538),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(538),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(538),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(538),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(538),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(538),
    [sym_method_declaration] = STATE(538),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(538),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [418] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(539),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(539),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1075),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [419] = {
    [sym__type_declaration] = STATE(540),
    [sym_class_declaration] = STATE(540),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(540),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(540),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(540),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(540),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(540),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(540),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1077),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [420] = {
    [anon_sym_LBRACE] = ACTIONS(1081),
    [sym_comment] = ACTIONS(36),
  },
  [421] = {
    [anon_sym_SEMI] = ACTIONS(1083),
    [sym_comment] = ACTIONS(36),
  },
  [422] = {
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_class] = ACTIONS(1085),
    [anon_sym_unsafe] = ACTIONS(1085),
    [anon_sym_abstract] = ACTIONS(1085),
    [anon_sym_sealed] = ACTIONS(1085),
    [anon_sym_static] = ACTIONS(1085),
    [anon_sym_new] = ACTIONS(1085),
    [anon_sym_public] = ACTIONS(1085),
    [anon_sym_protected] = ACTIONS(1085),
    [anon_sym_internal] = ACTIONS(1085),
    [anon_sym_private] = ACTIONS(1085),
    [anon_sym_interface] = ACTIONS(1085),
    [anon_sym_struct] = ACTIONS(1085),
    [anon_sym_enum] = ACTIONS(1085),
    [anon_sym_sbyte] = ACTIONS(1085),
    [anon_sym_byte] = ACTIONS(1085),
    [anon_sym_short] = ACTIONS(1085),
    [anon_sym_ushort] = ACTIONS(1085),
    [anon_sym_int] = ACTIONS(1085),
    [anon_sym_uint] = ACTIONS(1085),
    [anon_sym_long] = ACTIONS(1085),
    [anon_sym_ulong] = ACTIONS(1085),
    [anon_sym_char] = ACTIONS(1085),
    [anon_sym_delegate] = ACTIONS(1085),
    [sym_void_keyword] = ACTIONS(1085),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym_const_keyword] = ACTIONS(1085),
    [anon_sym_readonly] = ACTIONS(1085),
    [anon_sym_volatile] = ACTIONS(1085),
    [anon_sym_bool] = ACTIONS(1085),
    [anon_sym_decimal] = ACTIONS(1085),
    [anon_sym_double] = ACTIONS(1085),
    [anon_sym_float] = ACTIONS(1085),
    [anon_sym_object] = ACTIONS(1085),
    [anon_sym_string] = ACTIONS(1085),
    [sym_identifier_name] = ACTIONS(1085),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1085),
  },
  [423] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1087),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [424] = {
    [sym__type_declaration] = STATE(544),
    [sym_class_declaration] = STATE(544),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(544),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(544),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(544),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(544),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(544),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(544),
    [sym_method_declaration] = STATE(544),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(544),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1087),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [425] = {
    [anon_sym_RBRACE] = ACTIONS(432),
    [anon_sym_class] = ACTIONS(1089),
    [anon_sym_unsafe] = ACTIONS(1089),
    [anon_sym_abstract] = ACTIONS(1089),
    [anon_sym_sealed] = ACTIONS(1089),
    [anon_sym_static] = ACTIONS(1089),
    [anon_sym_new] = ACTIONS(1089),
    [anon_sym_public] = ACTIONS(1089),
    [anon_sym_protected] = ACTIONS(1089),
    [anon_sym_internal] = ACTIONS(1089),
    [anon_sym_private] = ACTIONS(1089),
    [anon_sym_interface] = ACTIONS(1089),
    [anon_sym_struct] = ACTIONS(1089),
    [anon_sym_enum] = ACTIONS(1089),
    [anon_sym_sbyte] = ACTIONS(1089),
    [anon_sym_byte] = ACTIONS(1089),
    [anon_sym_short] = ACTIONS(1089),
    [anon_sym_ushort] = ACTIONS(1089),
    [anon_sym_int] = ACTIONS(1089),
    [anon_sym_uint] = ACTIONS(1089),
    [anon_sym_long] = ACTIONS(1089),
    [anon_sym_ulong] = ACTIONS(1089),
    [anon_sym_char] = ACTIONS(1089),
    [anon_sym_delegate] = ACTIONS(1089),
    [sym_void_keyword] = ACTIONS(1089),
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym_const_keyword] = ACTIONS(1089),
    [anon_sym_readonly] = ACTIONS(1089),
    [anon_sym_volatile] = ACTIONS(1089),
    [anon_sym_bool] = ACTIONS(1089),
    [anon_sym_decimal] = ACTIONS(1089),
    [anon_sym_double] = ACTIONS(1089),
    [anon_sym_float] = ACTIONS(1089),
    [anon_sym_object] = ACTIONS(1089),
    [anon_sym_string] = ACTIONS(1089),
    [sym_identifier_name] = ACTIONS(1089),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1089),
  },
  [426] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1091),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [427] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(546),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(546),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1091),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [428] = {
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_class] = ACTIONS(1093),
    [anon_sym_unsafe] = ACTIONS(1093),
    [anon_sym_abstract] = ACTIONS(1093),
    [anon_sym_sealed] = ACTIONS(1093),
    [anon_sym_static] = ACTIONS(1093),
    [anon_sym_new] = ACTIONS(1093),
    [anon_sym_public] = ACTIONS(1093),
    [anon_sym_protected] = ACTIONS(1093),
    [anon_sym_internal] = ACTIONS(1093),
    [anon_sym_private] = ACTIONS(1093),
    [anon_sym_interface] = ACTIONS(1093),
    [anon_sym_struct] = ACTIONS(1093),
    [anon_sym_enum] = ACTIONS(1093),
    [anon_sym_sbyte] = ACTIONS(1093),
    [anon_sym_byte] = ACTIONS(1093),
    [anon_sym_short] = ACTIONS(1093),
    [anon_sym_ushort] = ACTIONS(1093),
    [anon_sym_int] = ACTIONS(1093),
    [anon_sym_uint] = ACTIONS(1093),
    [anon_sym_long] = ACTIONS(1093),
    [anon_sym_ulong] = ACTIONS(1093),
    [anon_sym_char] = ACTIONS(1093),
    [anon_sym_delegate] = ACTIONS(1093),
    [sym_void_keyword] = ACTIONS(1093),
    [anon_sym_LBRACK] = ACTIONS(442),
    [sym_const_keyword] = ACTIONS(1093),
    [anon_sym_readonly] = ACTIONS(1093),
    [anon_sym_volatile] = ACTIONS(1093),
    [anon_sym_bool] = ACTIONS(1093),
    [anon_sym_decimal] = ACTIONS(1093),
    [anon_sym_double] = ACTIONS(1093),
    [anon_sym_float] = ACTIONS(1093),
    [anon_sym_object] = ACTIONS(1093),
    [anon_sym_string] = ACTIONS(1093),
    [sym_identifier_name] = ACTIONS(1093),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1093),
  },
  [429] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1095),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [430] = {
    [sym__type_declaration] = STATE(548),
    [sym_class_declaration] = STATE(548),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(548),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(548),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(548),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(548),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(548),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(548),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1095),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [431] = {
    [aux_sym_enum_declaration_repeat1] = STATE(550),
    [anon_sym_RBRACE] = ACTIONS(1097),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [432] = {
    [anon_sym_LBRACE] = ACTIONS(1099),
    [sym_comment] = ACTIONS(36),
  },
  [433] = {
    [anon_sym_SEMI] = ACTIONS(1101),
    [sym_comment] = ACTIONS(36),
  },
  [434] = {
    [anon_sym_SEMI] = ACTIONS(1103),
    [anon_sym_RBRACE] = ACTIONS(1103),
    [anon_sym_LPAREN] = ACTIONS(1103),
    [anon_sym_PLUS] = ACTIONS(1105),
    [anon_sym_DASH] = ACTIONS(1105),
    [anon_sym_BANG] = ACTIONS(1103),
    [anon_sym_TILDE] = ACTIONS(1103),
    [anon_sym_DASH_DASH] = ACTIONS(1103),
    [anon_sym_PLUS_PLUS] = ACTIONS(1103),
    [anon_sym_typeof] = ACTIONS(1105),
    [anon_sym_sizeof] = ACTIONS(1105),
    [anon_sym_true] = ACTIONS(1105),
    [anon_sym_false] = ACTIONS(1105),
    [anon_sym_SQUOTE] = ACTIONS(1103),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1105),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1103),
    [sym_null_literal] = ACTIONS(1105),
    [anon_sym_DOT] = ACTIONS(1103),
    [anon_sym_DQUOTE] = ACTIONS(1103),
    [anon_sym_AT_DQUOTE] = ACTIONS(1103),
    [sym_identifier_name] = ACTIONS(1105),
    [sym_comment] = ACTIONS(36),
    [anon_sym_return] = ACTIONS(1105),
  },
  [435] = {
    [anon_sym_RBRACE] = ACTIONS(1107),
    [anon_sym_class] = ACTIONS(1109),
    [anon_sym_unsafe] = ACTIONS(1109),
    [anon_sym_abstract] = ACTIONS(1109),
    [anon_sym_sealed] = ACTIONS(1109),
    [anon_sym_static] = ACTIONS(1109),
    [anon_sym_new] = ACTIONS(1109),
    [anon_sym_public] = ACTIONS(1109),
    [anon_sym_protected] = ACTIONS(1109),
    [anon_sym_internal] = ACTIONS(1109),
    [anon_sym_private] = ACTIONS(1109),
    [anon_sym_interface] = ACTIONS(1109),
    [anon_sym_struct] = ACTIONS(1109),
    [anon_sym_enum] = ACTIONS(1109),
    [anon_sym_sbyte] = ACTIONS(1109),
    [anon_sym_byte] = ACTIONS(1109),
    [anon_sym_short] = ACTIONS(1109),
    [anon_sym_ushort] = ACTIONS(1109),
    [anon_sym_int] = ACTIONS(1109),
    [anon_sym_uint] = ACTIONS(1109),
    [anon_sym_long] = ACTIONS(1109),
    [anon_sym_ulong] = ACTIONS(1109),
    [anon_sym_char] = ACTIONS(1109),
    [anon_sym_delegate] = ACTIONS(1109),
    [sym_void_keyword] = ACTIONS(1109),
    [anon_sym_LBRACK] = ACTIONS(1107),
    [sym_const_keyword] = ACTIONS(1109),
    [anon_sym_readonly] = ACTIONS(1109),
    [anon_sym_volatile] = ACTIONS(1109),
    [anon_sym_bool] = ACTIONS(1109),
    [anon_sym_decimal] = ACTIONS(1109),
    [anon_sym_double] = ACTIONS(1109),
    [anon_sym_float] = ACTIONS(1109),
    [anon_sym_object] = ACTIONS(1109),
    [anon_sym_string] = ACTIONS(1109),
    [sym_identifier_name] = ACTIONS(1109),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1109),
  },
  [436] = {
    [sym__expression] = STATE(495),
    [sym_parenthesized_expression] = STATE(495),
    [sym_ternary_expression] = STATE(495),
    [sym_binary_expression] = STATE(495),
    [sym_unary_expression] = STATE(495),
    [sym__literal] = STATE(495),
    [sym_boolean_literal] = STATE(495),
    [sym_character_literal] = STATE(495),
    [sym_integer_literal] = STATE(495),
    [sym_real_literal] = STATE(495),
    [sym_string_literal] = STATE(495),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(975),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(975),
    [sym_comment] = ACTIONS(36),
  },
  [437] = {
    [sym_equals_value_clause] = STATE(554),
    [anon_sym_SEMI] = ACTIONS(1111),
    [anon_sym_EQ] = ACTIONS(1113),
    [anon_sym_QMARK] = ACTIONS(1111),
    [anon_sym_AMP_AMP] = ACTIONS(1111),
    [anon_sym_PIPE_PIPE] = ACTIONS(1111),
    [anon_sym_GT_GT] = ACTIONS(1111),
    [anon_sym_LT_LT] = ACTIONS(1111),
    [anon_sym_AMP] = ACTIONS(1115),
    [anon_sym_CARET] = ACTIONS(1111),
    [anon_sym_PIPE] = ACTIONS(1115),
    [anon_sym_PLUS] = ACTIONS(1111),
    [anon_sym_DASH] = ACTIONS(1111),
    [anon_sym_STAR] = ACTIONS(1111),
    [anon_sym_SLASH] = ACTIONS(1115),
    [anon_sym_PERCENT] = ACTIONS(1111),
    [anon_sym_LT] = ACTIONS(1115),
    [anon_sym_LT_EQ] = ACTIONS(1111),
    [anon_sym_EQ_EQ] = ACTIONS(1111),
    [anon_sym_BANG_EQ] = ACTIONS(1111),
    [anon_sym_GT_EQ] = ACTIONS(1111),
    [anon_sym_GT] = ACTIONS(1115),
    [sym_comment] = ACTIONS(36),
  },
  [438] = {
    [sym__expression] = STATE(555),
    [sym_parenthesized_expression] = STATE(555),
    [sym_ternary_expression] = STATE(555),
    [sym_binary_expression] = STATE(555),
    [sym_unary_expression] = STATE(555),
    [sym__literal] = STATE(555),
    [sym_boolean_literal] = STATE(555),
    [sym_character_literal] = STATE(555),
    [sym_integer_literal] = STATE(555),
    [sym_real_literal] = STATE(555),
    [sym_string_literal] = STATE(555),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1117),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1117),
    [sym_comment] = ACTIONS(36),
  },
  [439] = {
    [anon_sym_SEMI] = ACTIONS(1119),
    [anon_sym_QMARK] = ACTIONS(1121),
    [anon_sym_AMP_AMP] = ACTIONS(1123),
    [anon_sym_PIPE_PIPE] = ACTIONS(1125),
    [anon_sym_GT_GT] = ACTIONS(1127),
    [anon_sym_LT_LT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1129),
    [anon_sym_CARET] = ACTIONS(1131),
    [anon_sym_PIPE] = ACTIONS(1133),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1141),
    [anon_sym_LT_EQ] = ACTIONS(1143),
    [anon_sym_EQ_EQ] = ACTIONS(1145),
    [anon_sym_BANG_EQ] = ACTIONS(1145),
    [anon_sym_GT_EQ] = ACTIONS(1143),
    [anon_sym_GT] = ACTIONS(1141),
    [sym_comment] = ACTIONS(36),
  },
  [440] = {
    [sym__expression] = STATE(439),
    [sym_parenthesized_expression] = STATE(439),
    [sym_ternary_expression] = STATE(439),
    [sym_binary_expression] = STATE(439),
    [sym_unary_expression] = STATE(439),
    [sym__literal] = STATE(439),
    [sym_boolean_literal] = STATE(439),
    [sym_character_literal] = STATE(439),
    [sym_integer_literal] = STATE(439),
    [sym_real_literal] = STATE(439),
    [sym_string_literal] = STATE(439),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [sym__statement] = STATE(568),
    [sym_expression_statement] = STATE(568),
    [sym_return_statement] = STATE(568),
    [sym_variable_assignment_statement] = STATE(568),
    [sym_empty_statement] = STATE(568),
    [aux_sym_statement_block_repeat1] = STATE(568),
    [anon_sym_SEMI] = ACTIONS(878),
    [anon_sym_RBRACE] = ACTIONS(1147),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(886),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(888),
    [sym_comment] = ACTIONS(36),
    [anon_sym_return] = ACTIONS(890),
  },
  [441] = {
    [anon_sym_RBRACE] = ACTIONS(1149),
    [anon_sym_class] = ACTIONS(1151),
    [anon_sym_unsafe] = ACTIONS(1151),
    [anon_sym_abstract] = ACTIONS(1151),
    [anon_sym_sealed] = ACTIONS(1151),
    [anon_sym_static] = ACTIONS(1151),
    [anon_sym_new] = ACTIONS(1151),
    [anon_sym_public] = ACTIONS(1151),
    [anon_sym_protected] = ACTIONS(1151),
    [anon_sym_internal] = ACTIONS(1151),
    [anon_sym_private] = ACTIONS(1151),
    [anon_sym_interface] = ACTIONS(1151),
    [anon_sym_struct] = ACTIONS(1151),
    [anon_sym_enum] = ACTIONS(1151),
    [anon_sym_sbyte] = ACTIONS(1151),
    [anon_sym_byte] = ACTIONS(1151),
    [anon_sym_short] = ACTIONS(1151),
    [anon_sym_ushort] = ACTIONS(1151),
    [anon_sym_int] = ACTIONS(1151),
    [anon_sym_uint] = ACTIONS(1151),
    [anon_sym_long] = ACTIONS(1151),
    [anon_sym_ulong] = ACTIONS(1151),
    [anon_sym_char] = ACTIONS(1151),
    [anon_sym_delegate] = ACTIONS(1151),
    [sym_void_keyword] = ACTIONS(1151),
    [anon_sym_LBRACK] = ACTIONS(1149),
    [sym_const_keyword] = ACTIONS(1151),
    [anon_sym_readonly] = ACTIONS(1151),
    [anon_sym_volatile] = ACTIONS(1151),
    [anon_sym_bool] = ACTIONS(1151),
    [anon_sym_decimal] = ACTIONS(1151),
    [anon_sym_double] = ACTIONS(1151),
    [anon_sym_float] = ACTIONS(1151),
    [anon_sym_object] = ACTIONS(1151),
    [anon_sym_string] = ACTIONS(1151),
    [sym_identifier_name] = ACTIONS(1151),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1151),
  },
  [442] = {
    [sym_statement_block] = STATE(569),
    [anon_sym_LBRACE] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [443] = {
    [sym_parameter_list] = STATE(570),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [444] = {
    [anon_sym_LBRACE] = ACTIONS(1153),
    [sym_comment] = ACTIONS(36),
  },
  [445] = {
    [anon_sym_LBRACE] = ACTIONS(1155),
    [sym_comment] = ACTIONS(36),
  },
  [446] = {
    [anon_sym_LBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(36),
  },
  [447] = {
    [sym_enum_member_declaration] = STATE(574),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [448] = {
    [sym__integral_type] = STATE(575),
    [anon_sym_sbyte] = ACTIONS(1159),
    [anon_sym_byte] = ACTIONS(1159),
    [anon_sym_short] = ACTIONS(1159),
    [anon_sym_ushort] = ACTIONS(1159),
    [anon_sym_int] = ACTIONS(1159),
    [anon_sym_uint] = ACTIONS(1159),
    [anon_sym_long] = ACTIONS(1159),
    [anon_sym_ulong] = ACTIONS(1159),
    [anon_sym_char] = ACTIONS(1159),
    [sym_comment] = ACTIONS(36),
  },
  [449] = {
    [sym_parameter_list] = STATE(576),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [450] = {
    [anon_sym_RBRACE] = ACTIONS(1161),
    [anon_sym_class] = ACTIONS(1163),
    [anon_sym_unsafe] = ACTIONS(1163),
    [anon_sym_abstract] = ACTIONS(1163),
    [anon_sym_sealed] = ACTIONS(1163),
    [anon_sym_static] = ACTIONS(1163),
    [anon_sym_new] = ACTIONS(1163),
    [anon_sym_public] = ACTIONS(1163),
    [anon_sym_protected] = ACTIONS(1163),
    [anon_sym_internal] = ACTIONS(1163),
    [anon_sym_private] = ACTIONS(1163),
    [anon_sym_interface] = ACTIONS(1163),
    [anon_sym_struct] = ACTIONS(1163),
    [anon_sym_enum] = ACTIONS(1163),
    [anon_sym_sbyte] = ACTIONS(1163),
    [anon_sym_byte] = ACTIONS(1163),
    [anon_sym_short] = ACTIONS(1163),
    [anon_sym_ushort] = ACTIONS(1163),
    [anon_sym_int] = ACTIONS(1163),
    [anon_sym_uint] = ACTIONS(1163),
    [anon_sym_long] = ACTIONS(1163),
    [anon_sym_ulong] = ACTIONS(1163),
    [anon_sym_char] = ACTIONS(1163),
    [anon_sym_delegate] = ACTIONS(1163),
    [sym_void_keyword] = ACTIONS(1163),
    [anon_sym_LBRACK] = ACTIONS(1161),
    [sym_const_keyword] = ACTIONS(1163),
    [anon_sym_readonly] = ACTIONS(1163),
    [anon_sym_volatile] = ACTIONS(1163),
    [anon_sym_bool] = ACTIONS(1163),
    [anon_sym_decimal] = ACTIONS(1163),
    [anon_sym_double] = ACTIONS(1163),
    [anon_sym_float] = ACTIONS(1163),
    [anon_sym_object] = ACTIONS(1163),
    [anon_sym_string] = ACTIONS(1163),
    [sym_identifier_name] = ACTIONS(1163),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1163),
  },
  [451] = {
    [anon_sym_RBRACE] = ACTIONS(1165),
    [anon_sym_class] = ACTIONS(1167),
    [anon_sym_unsafe] = ACTIONS(1167),
    [anon_sym_abstract] = ACTIONS(1167),
    [anon_sym_sealed] = ACTIONS(1167),
    [anon_sym_static] = ACTIONS(1167),
    [anon_sym_new] = ACTIONS(1167),
    [anon_sym_public] = ACTIONS(1167),
    [anon_sym_protected] = ACTIONS(1167),
    [anon_sym_internal] = ACTIONS(1167),
    [anon_sym_private] = ACTIONS(1167),
    [anon_sym_interface] = ACTIONS(1167),
    [anon_sym_struct] = ACTIONS(1167),
    [anon_sym_enum] = ACTIONS(1167),
    [anon_sym_sbyte] = ACTIONS(1167),
    [anon_sym_byte] = ACTIONS(1167),
    [anon_sym_short] = ACTIONS(1167),
    [anon_sym_ushort] = ACTIONS(1167),
    [anon_sym_int] = ACTIONS(1167),
    [anon_sym_uint] = ACTIONS(1167),
    [anon_sym_long] = ACTIONS(1167),
    [anon_sym_ulong] = ACTIONS(1167),
    [anon_sym_char] = ACTIONS(1167),
    [anon_sym_delegate] = ACTIONS(1167),
    [sym_void_keyword] = ACTIONS(1167),
    [anon_sym_LBRACK] = ACTIONS(1165),
    [sym_const_keyword] = ACTIONS(1167),
    [anon_sym_readonly] = ACTIONS(1167),
    [anon_sym_volatile] = ACTIONS(1167),
    [anon_sym_bool] = ACTIONS(1167),
    [anon_sym_decimal] = ACTIONS(1167),
    [anon_sym_double] = ACTIONS(1167),
    [anon_sym_float] = ACTIONS(1167),
    [anon_sym_object] = ACTIONS(1167),
    [anon_sym_string] = ACTIONS(1167),
    [sym_identifier_name] = ACTIONS(1167),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1167),
  },
  [452] = {
    [sym_statement_block] = STATE(577),
    [anon_sym_LBRACE] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [453] = {
    [sym_parameter_list] = STATE(570),
    [sym_type_parameter_list] = STATE(578),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [454] = {
    [sym_type_parameter_list] = STATE(579),
    [anon_sym_LBRACE] = ACTIONS(1153),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [455] = {
    [sym_type_parameter_list] = STATE(580),
    [anon_sym_LBRACE] = ACTIONS(1155),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [456] = {
    [sym_type_parameter_list] = STATE(581),
    [anon_sym_LBRACE] = ACTIONS(1157),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [457] = {
    [anon_sym_LBRACE] = ACTIONS(1099),
    [anon_sym_COLON] = ACTIONS(1169),
    [sym_comment] = ACTIONS(36),
  },
  [458] = {
    [sym_identifier_name] = ACTIONS(1171),
    [sym_comment] = ACTIONS(36),
  },
  [459] = {
    [anon_sym_SEMI] = ACTIONS(1173),
    [sym_comment] = ACTIONS(36),
  },
  [460] = {
    [sym_parameter_list] = STATE(585),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_identifier_name] = ACTIONS(312),
    [sym_comment] = ACTIONS(36),
  },
  [461] = {
    [sym_identifier_name] = ACTIONS(1175),
    [sym_comment] = ACTIONS(36),
  },
  [462] = {
    [sym__expression] = STATE(495),
    [sym_parenthesized_expression] = STATE(495),
    [sym_ternary_expression] = STATE(495),
    [sym_binary_expression] = STATE(495),
    [sym_unary_expression] = STATE(495),
    [sym__literal] = STATE(495),
    [sym_boolean_literal] = STATE(495),
    [sym_character_literal] = STATE(495),
    [sym_integer_literal] = STATE(495),
    [sym_real_literal] = STATE(495),
    [sym_string_literal] = STATE(495),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(975),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(975),
    [sym_comment] = ACTIONS(36),
  },
  [463] = {
    [anon_sym_SEMI] = ACTIONS(1005),
    [anon_sym_COMMA] = ACTIONS(1005),
    [anon_sym_QMARK] = ACTIONS(1177),
    [anon_sym_AMP_AMP] = ACTIONS(1179),
    [anon_sym_PIPE_PIPE] = ACTIONS(1181),
    [anon_sym_GT_GT] = ACTIONS(1183),
    [anon_sym_LT_LT] = ACTIONS(1183),
    [anon_sym_AMP] = ACTIONS(1185),
    [anon_sym_CARET] = ACTIONS(1187),
    [anon_sym_PIPE] = ACTIONS(1189),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1197),
    [anon_sym_LT_EQ] = ACTIONS(1199),
    [anon_sym_EQ_EQ] = ACTIONS(1201),
    [anon_sym_BANG_EQ] = ACTIONS(1201),
    [anon_sym_GT_EQ] = ACTIONS(1199),
    [anon_sym_GT] = ACTIONS(1197),
    [sym_comment] = ACTIONS(36),
  },
  [464] = {
    [anon_sym_SEMI] = ACTIONS(1203),
    [anon_sym_COMMA] = ACTIONS(1203),
    [sym_comment] = ACTIONS(36),
  },
  [465] = {
    [aux_sym_variable_declaration_repeat1] = STATE(465),
    [anon_sym_SEMI] = ACTIONS(1203),
    [anon_sym_COMMA] = ACTIONS(1205),
    [sym_comment] = ACTIONS(36),
  },
  [466] = {
    [anon_sym_RBRACE] = ACTIONS(1165),
    [anon_sym_unsafe] = ACTIONS(1167),
    [anon_sym_static] = ACTIONS(1167),
    [anon_sym_new] = ACTIONS(1167),
    [anon_sym_public] = ACTIONS(1167),
    [anon_sym_protected] = ACTIONS(1167),
    [anon_sym_internal] = ACTIONS(1167),
    [anon_sym_private] = ACTIONS(1167),
    [anon_sym_sbyte] = ACTIONS(1167),
    [anon_sym_byte] = ACTIONS(1167),
    [anon_sym_short] = ACTIONS(1167),
    [anon_sym_ushort] = ACTIONS(1167),
    [anon_sym_int] = ACTIONS(1167),
    [anon_sym_uint] = ACTIONS(1167),
    [anon_sym_long] = ACTIONS(1167),
    [anon_sym_ulong] = ACTIONS(1167),
    [anon_sym_char] = ACTIONS(1167),
    [anon_sym_LBRACK] = ACTIONS(1165),
    [sym_const_keyword] = ACTIONS(1167),
    [anon_sym_readonly] = ACTIONS(1167),
    [anon_sym_volatile] = ACTIONS(1167),
    [anon_sym_bool] = ACTIONS(1167),
    [anon_sym_decimal] = ACTIONS(1167),
    [anon_sym_double] = ACTIONS(1167),
    [anon_sym_float] = ACTIONS(1167),
    [anon_sym_object] = ACTIONS(1167),
    [anon_sym_string] = ACTIONS(1167),
    [sym_identifier_name] = ACTIONS(1167),
    [sym_comment] = ACTIONS(36),
  },
  [467] = {
    [anon_sym_SEMI] = ACTIONS(1208),
    [sym_comment] = ACTIONS(36),
  },
  [468] = {
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_class] = ACTIONS(1085),
    [anon_sym_unsafe] = ACTIONS(1085),
    [anon_sym_abstract] = ACTIONS(1085),
    [anon_sym_sealed] = ACTIONS(1085),
    [anon_sym_static] = ACTIONS(1085),
    [anon_sym_new] = ACTIONS(1085),
    [anon_sym_public] = ACTIONS(1085),
    [anon_sym_protected] = ACTIONS(1085),
    [anon_sym_internal] = ACTIONS(1085),
    [anon_sym_private] = ACTIONS(1085),
    [anon_sym_interface] = ACTIONS(1085),
    [anon_sym_struct] = ACTIONS(1085),
    [anon_sym_enum] = ACTIONS(1085),
    [anon_sym_sbyte] = ACTIONS(1085),
    [anon_sym_byte] = ACTIONS(1085),
    [anon_sym_short] = ACTIONS(1085),
    [anon_sym_ushort] = ACTIONS(1085),
    [anon_sym_int] = ACTIONS(1085),
    [anon_sym_uint] = ACTIONS(1085),
    [anon_sym_long] = ACTIONS(1085),
    [anon_sym_ulong] = ACTIONS(1085),
    [anon_sym_char] = ACTIONS(1085),
    [anon_sym_delegate] = ACTIONS(1085),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym_const_keyword] = ACTIONS(1085),
    [anon_sym_readonly] = ACTIONS(1085),
    [anon_sym_volatile] = ACTIONS(1085),
    [anon_sym_bool] = ACTIONS(1085),
    [anon_sym_decimal] = ACTIONS(1085),
    [anon_sym_double] = ACTIONS(1085),
    [anon_sym_float] = ACTIONS(1085),
    [anon_sym_object] = ACTIONS(1085),
    [anon_sym_string] = ACTIONS(1085),
    [sym_identifier_name] = ACTIONS(1085),
    [sym_comment] = ACTIONS(36),
  },
  [469] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1210),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [470] = {
    [sym__type_declaration] = STATE(599),
    [sym_class_declaration] = STATE(599),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(599),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(599),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(599),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(599),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(599),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(599),
    [sym_method_declaration] = STATE(599),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(599),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1210),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [471] = {
    [anon_sym_RBRACE] = ACTIONS(432),
    [anon_sym_class] = ACTIONS(1089),
    [anon_sym_unsafe] = ACTIONS(1089),
    [anon_sym_abstract] = ACTIONS(1089),
    [anon_sym_sealed] = ACTIONS(1089),
    [anon_sym_static] = ACTIONS(1089),
    [anon_sym_new] = ACTIONS(1089),
    [anon_sym_public] = ACTIONS(1089),
    [anon_sym_protected] = ACTIONS(1089),
    [anon_sym_internal] = ACTIONS(1089),
    [anon_sym_private] = ACTIONS(1089),
    [anon_sym_interface] = ACTIONS(1089),
    [anon_sym_struct] = ACTIONS(1089),
    [anon_sym_enum] = ACTIONS(1089),
    [anon_sym_sbyte] = ACTIONS(1089),
    [anon_sym_byte] = ACTIONS(1089),
    [anon_sym_short] = ACTIONS(1089),
    [anon_sym_ushort] = ACTIONS(1089),
    [anon_sym_int] = ACTIONS(1089),
    [anon_sym_uint] = ACTIONS(1089),
    [anon_sym_long] = ACTIONS(1089),
    [anon_sym_ulong] = ACTIONS(1089),
    [anon_sym_char] = ACTIONS(1089),
    [anon_sym_delegate] = ACTIONS(1089),
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym_const_keyword] = ACTIONS(1089),
    [anon_sym_readonly] = ACTIONS(1089),
    [anon_sym_volatile] = ACTIONS(1089),
    [anon_sym_bool] = ACTIONS(1089),
    [anon_sym_decimal] = ACTIONS(1089),
    [anon_sym_double] = ACTIONS(1089),
    [anon_sym_float] = ACTIONS(1089),
    [anon_sym_object] = ACTIONS(1089),
    [anon_sym_string] = ACTIONS(1089),
    [sym_identifier_name] = ACTIONS(1089),
    [sym_comment] = ACTIONS(36),
  },
  [472] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1212),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [473] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(601),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(601),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1212),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [474] = {
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_class] = ACTIONS(1093),
    [anon_sym_unsafe] = ACTIONS(1093),
    [anon_sym_abstract] = ACTIONS(1093),
    [anon_sym_sealed] = ACTIONS(1093),
    [anon_sym_static] = ACTIONS(1093),
    [anon_sym_new] = ACTIONS(1093),
    [anon_sym_public] = ACTIONS(1093),
    [anon_sym_protected] = ACTIONS(1093),
    [anon_sym_internal] = ACTIONS(1093),
    [anon_sym_private] = ACTIONS(1093),
    [anon_sym_interface] = ACTIONS(1093),
    [anon_sym_struct] = ACTIONS(1093),
    [anon_sym_enum] = ACTIONS(1093),
    [anon_sym_sbyte] = ACTIONS(1093),
    [anon_sym_byte] = ACTIONS(1093),
    [anon_sym_short] = ACTIONS(1093),
    [anon_sym_ushort] = ACTIONS(1093),
    [anon_sym_int] = ACTIONS(1093),
    [anon_sym_uint] = ACTIONS(1093),
    [anon_sym_long] = ACTIONS(1093),
    [anon_sym_ulong] = ACTIONS(1093),
    [anon_sym_char] = ACTIONS(1093),
    [anon_sym_delegate] = ACTIONS(1093),
    [anon_sym_LBRACK] = ACTIONS(442),
    [sym_const_keyword] = ACTIONS(1093),
    [anon_sym_readonly] = ACTIONS(1093),
    [anon_sym_volatile] = ACTIONS(1093),
    [anon_sym_bool] = ACTIONS(1093),
    [anon_sym_decimal] = ACTIONS(1093),
    [anon_sym_double] = ACTIONS(1093),
    [anon_sym_float] = ACTIONS(1093),
    [anon_sym_object] = ACTIONS(1093),
    [anon_sym_string] = ACTIONS(1093),
    [sym_identifier_name] = ACTIONS(1093),
    [sym_comment] = ACTIONS(36),
  },
  [475] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1214),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [476] = {
    [sym__type_declaration] = STATE(603),
    [sym_class_declaration] = STATE(603),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(603),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(603),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(603),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(603),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(603),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(603),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1214),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [477] = {
    [aux_sym_enum_declaration_repeat1] = STATE(605),
    [anon_sym_RBRACE] = ACTIONS(1216),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [478] = {
    [anon_sym_LBRACE] = ACTIONS(1218),
    [sym_comment] = ACTIONS(36),
  },
  [479] = {
    [anon_sym_SEMI] = ACTIONS(1220),
    [sym_comment] = ACTIONS(36),
  },
  [480] = {
    [anon_sym_LBRACE] = ACTIONS(1222),
    [sym_comment] = ACTIONS(36),
  },
  [481] = {
    [anon_sym_LBRACE] = ACTIONS(1224),
    [sym_comment] = ACTIONS(36),
  },
  [482] = {
    [anon_sym_LBRACE] = ACTIONS(1226),
    [sym_comment] = ACTIONS(36),
  },
  [483] = {
    [sym_enum_member_declaration] = STATE(611),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [484] = {
    [sym__integral_type] = STATE(612),
    [anon_sym_sbyte] = ACTIONS(1228),
    [anon_sym_byte] = ACTIONS(1228),
    [anon_sym_short] = ACTIONS(1228),
    [anon_sym_ushort] = ACTIONS(1228),
    [anon_sym_int] = ACTIONS(1228),
    [anon_sym_uint] = ACTIONS(1228),
    [anon_sym_long] = ACTIONS(1228),
    [anon_sym_ulong] = ACTIONS(1228),
    [anon_sym_char] = ACTIONS(1228),
    [sym_comment] = ACTIONS(36),
  },
  [485] = {
    [sym_parameter_list] = STATE(613),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [486] = {
    [anon_sym_RBRACE] = ACTIONS(1165),
    [anon_sym_class] = ACTIONS(1167),
    [anon_sym_unsafe] = ACTIONS(1167),
    [anon_sym_abstract] = ACTIONS(1167),
    [anon_sym_sealed] = ACTIONS(1167),
    [anon_sym_static] = ACTIONS(1167),
    [anon_sym_new] = ACTIONS(1167),
    [anon_sym_public] = ACTIONS(1167),
    [anon_sym_protected] = ACTIONS(1167),
    [anon_sym_internal] = ACTIONS(1167),
    [anon_sym_private] = ACTIONS(1167),
    [anon_sym_interface] = ACTIONS(1167),
    [anon_sym_struct] = ACTIONS(1167),
    [anon_sym_enum] = ACTIONS(1167),
    [anon_sym_sbyte] = ACTIONS(1167),
    [anon_sym_byte] = ACTIONS(1167),
    [anon_sym_short] = ACTIONS(1167),
    [anon_sym_ushort] = ACTIONS(1167),
    [anon_sym_int] = ACTIONS(1167),
    [anon_sym_uint] = ACTIONS(1167),
    [anon_sym_long] = ACTIONS(1167),
    [anon_sym_ulong] = ACTIONS(1167),
    [anon_sym_char] = ACTIONS(1167),
    [anon_sym_delegate] = ACTIONS(1167),
    [anon_sym_LBRACK] = ACTIONS(1165),
    [sym_const_keyword] = ACTIONS(1167),
    [anon_sym_readonly] = ACTIONS(1167),
    [anon_sym_volatile] = ACTIONS(1167),
    [anon_sym_bool] = ACTIONS(1167),
    [anon_sym_decimal] = ACTIONS(1167),
    [anon_sym_double] = ACTIONS(1167),
    [anon_sym_float] = ACTIONS(1167),
    [anon_sym_object] = ACTIONS(1167),
    [anon_sym_string] = ACTIONS(1167),
    [sym_identifier_name] = ACTIONS(1167),
    [sym_comment] = ACTIONS(36),
  },
  [487] = {
    [sym_type_parameter_list] = STATE(614),
    [anon_sym_LBRACE] = ACTIONS(1222),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [488] = {
    [sym_type_parameter_list] = STATE(615),
    [anon_sym_LBRACE] = ACTIONS(1224),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [489] = {
    [sym_type_parameter_list] = STATE(616),
    [anon_sym_LBRACE] = ACTIONS(1226),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [490] = {
    [anon_sym_LBRACE] = ACTIONS(1218),
    [anon_sym_COLON] = ACTIONS(1230),
    [sym_comment] = ACTIONS(36),
  },
  [491] = {
    [sym_identifier_name] = ACTIONS(1232),
    [sym_comment] = ACTIONS(36),
  },
  [492] = {
    [anon_sym_SEMI] = ACTIONS(1234),
    [sym_comment] = ACTIONS(36),
  },
  [493] = {
    [sym__expression] = STATE(495),
    [sym_parenthesized_expression] = STATE(495),
    [sym_ternary_expression] = STATE(495),
    [sym_binary_expression] = STATE(495),
    [sym_unary_expression] = STATE(495),
    [sym__literal] = STATE(495),
    [sym_boolean_literal] = STATE(495),
    [sym_character_literal] = STATE(495),
    [sym_integer_literal] = STATE(495),
    [sym_real_literal] = STATE(495),
    [sym_string_literal] = STATE(495),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(975),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(975),
    [sym_comment] = ACTIONS(36),
  },
  [494] = {
    [anon_sym_RPAREN] = ACTIONS(1236),
    [anon_sym_QMARK] = ACTIONS(1238),
    [anon_sym_AMP_AMP] = ACTIONS(1240),
    [anon_sym_PIPE_PIPE] = ACTIONS(1242),
    [anon_sym_GT_GT] = ACTIONS(1244),
    [anon_sym_LT_LT] = ACTIONS(1244),
    [anon_sym_AMP] = ACTIONS(1246),
    [anon_sym_CARET] = ACTIONS(1248),
    [anon_sym_PIPE] = ACTIONS(1250),
    [anon_sym_PLUS] = ACTIONS(1252),
    [anon_sym_DASH] = ACTIONS(1252),
    [anon_sym_STAR] = ACTIONS(1254),
    [anon_sym_SLASH] = ACTIONS(1256),
    [anon_sym_PERCENT] = ACTIONS(1254),
    [anon_sym_LT] = ACTIONS(1258),
    [anon_sym_LT_EQ] = ACTIONS(1260),
    [anon_sym_EQ_EQ] = ACTIONS(1262),
    [anon_sym_BANG_EQ] = ACTIONS(1262),
    [anon_sym_GT_EQ] = ACTIONS(1260),
    [anon_sym_GT] = ACTIONS(1258),
    [sym_comment] = ACTIONS(36),
  },
  [495] = {
    [anon_sym_SEMI] = ACTIONS(1264),
    [anon_sym_RBRACE] = ACTIONS(1264),
    [anon_sym_COLON] = ACTIONS(1264),
    [anon_sym_COMMA] = ACTIONS(1264),
    [anon_sym_RPAREN] = ACTIONS(1264),
    [sym_params_keyword] = ACTIONS(1264),
    [anon_sym_LBRACK] = ACTIONS(1264),
    [anon_sym_QMARK] = ACTIONS(1264),
    [anon_sym_AMP_AMP] = ACTIONS(1264),
    [anon_sym_PIPE_PIPE] = ACTIONS(1264),
    [anon_sym_GT_GT] = ACTIONS(1264),
    [anon_sym_LT_LT] = ACTIONS(1264),
    [anon_sym_AMP] = ACTIONS(1266),
    [anon_sym_CARET] = ACTIONS(1264),
    [anon_sym_PIPE] = ACTIONS(1266),
    [anon_sym_PLUS] = ACTIONS(1264),
    [anon_sym_DASH] = ACTIONS(1264),
    [anon_sym_STAR] = ACTIONS(1264),
    [anon_sym_SLASH] = ACTIONS(1266),
    [anon_sym_PERCENT] = ACTIONS(1264),
    [anon_sym_LT] = ACTIONS(1266),
    [anon_sym_LT_EQ] = ACTIONS(1264),
    [anon_sym_EQ_EQ] = ACTIONS(1264),
    [anon_sym_BANG_EQ] = ACTIONS(1264),
    [anon_sym_GT_EQ] = ACTIONS(1264),
    [anon_sym_GT] = ACTIONS(1266),
    [sym_comment] = ACTIONS(36),
  },
  [496] = {
    [anon_sym_SQUOTE] = ACTIONS(1268),
    [sym_comment] = ACTIONS(36),
  },
  [497] = {
    [anon_sym_SEMI] = ACTIONS(1270),
    [anon_sym_RBRACE] = ACTIONS(1270),
    [anon_sym_COLON] = ACTIONS(1270),
    [anon_sym_COMMA] = ACTIONS(1270),
    [anon_sym_RPAREN] = ACTIONS(1270),
    [sym_params_keyword] = ACTIONS(1270),
    [anon_sym_LBRACK] = ACTIONS(1270),
    [anon_sym_QMARK] = ACTIONS(1270),
    [anon_sym_AMP_AMP] = ACTIONS(1270),
    [anon_sym_PIPE_PIPE] = ACTIONS(1270),
    [anon_sym_GT_GT] = ACTIONS(1270),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_AMP] = ACTIONS(1272),
    [anon_sym_CARET] = ACTIONS(1270),
    [anon_sym_PIPE] = ACTIONS(1272),
    [anon_sym_PLUS] = ACTIONS(1270),
    [anon_sym_DASH] = ACTIONS(1270),
    [anon_sym_STAR] = ACTIONS(1270),
    [anon_sym_SLASH] = ACTIONS(1272),
    [anon_sym_PERCENT] = ACTIONS(1270),
    [anon_sym_LT] = ACTIONS(1272),
    [anon_sym_LT_EQ] = ACTIONS(1270),
    [anon_sym_EQ_EQ] = ACTIONS(1270),
    [anon_sym_BANG_EQ] = ACTIONS(1270),
    [anon_sym_GT_EQ] = ACTIONS(1270),
    [anon_sym_GT] = ACTIONS(1272),
    [sym_comment] = ACTIONS(36),
  },
  [498] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1274),
    [sym_comment] = ACTIONS(36),
  },
  [499] = {
    [anon_sym_SEMI] = ACTIONS(1276),
    [anon_sym_RBRACE] = ACTIONS(1276),
    [anon_sym_COLON] = ACTIONS(1276),
    [anon_sym_COMMA] = ACTIONS(1276),
    [anon_sym_RPAREN] = ACTIONS(1276),
    [sym_params_keyword] = ACTIONS(1276),
    [anon_sym_LBRACK] = ACTIONS(1276),
    [anon_sym_QMARK] = ACTIONS(1276),
    [anon_sym_AMP_AMP] = ACTIONS(1276),
    [anon_sym_PIPE_PIPE] = ACTIONS(1276),
    [anon_sym_GT_GT] = ACTIONS(1276),
    [anon_sym_LT_LT] = ACTIONS(1276),
    [anon_sym_AMP] = ACTIONS(1278),
    [anon_sym_CARET] = ACTIONS(1276),
    [anon_sym_PIPE] = ACTIONS(1278),
    [anon_sym_PLUS] = ACTIONS(1276),
    [anon_sym_DASH] = ACTIONS(1276),
    [anon_sym_STAR] = ACTIONS(1276),
    [anon_sym_SLASH] = ACTIONS(1278),
    [anon_sym_PERCENT] = ACTIONS(1276),
    [anon_sym_LT] = ACTIONS(1278),
    [anon_sym_LT_EQ] = ACTIONS(1276),
    [anon_sym_EQ_EQ] = ACTIONS(1276),
    [anon_sym_BANG_EQ] = ACTIONS(1276),
    [anon_sym_GT_EQ] = ACTIONS(1276),
    [anon_sym_GT] = ACTIONS(1278),
    [sym_comment] = ACTIONS(36),
  },
  [500] = {
    [anon_sym_SEMI] = ACTIONS(1276),
    [anon_sym_RBRACE] = ACTIONS(1276),
    [anon_sym_COLON] = ACTIONS(1276),
    [anon_sym_COMMA] = ACTIONS(1276),
    [anon_sym_RPAREN] = ACTIONS(1276),
    [sym_params_keyword] = ACTIONS(1276),
    [anon_sym_LBRACK] = ACTIONS(1276),
    [anon_sym_QMARK] = ACTIONS(1276),
    [anon_sym_AMP_AMP] = ACTIONS(1276),
    [anon_sym_PIPE_PIPE] = ACTIONS(1276),
    [anon_sym_GT_GT] = ACTIONS(1276),
    [anon_sym_LT_LT] = ACTIONS(1276),
    [anon_sym_AMP] = ACTIONS(1278),
    [anon_sym_CARET] = ACTIONS(1276),
    [anon_sym_PIPE] = ACTIONS(1278),
    [anon_sym_PLUS] = ACTIONS(1276),
    [anon_sym_DASH] = ACTIONS(1276),
    [anon_sym_STAR] = ACTIONS(1276),
    [anon_sym_SLASH] = ACTIONS(1278),
    [anon_sym_PERCENT] = ACTIONS(1276),
    [anon_sym_LT] = ACTIONS(1278),
    [anon_sym_LT_EQ] = ACTIONS(1276),
    [anon_sym_EQ_EQ] = ACTIONS(1276),
    [anon_sym_BANG_EQ] = ACTIONS(1276),
    [anon_sym_GT_EQ] = ACTIONS(1276),
    [anon_sym_GT] = ACTIONS(1278),
    [sym__real_type_suffix] = ACTIONS(1280),
    [sym_comment] = ACTIONS(36),
  },
  [501] = {
    [anon_sym_SEMI] = ACTIONS(1276),
    [anon_sym_RBRACE] = ACTIONS(1276),
    [anon_sym_COLON] = ACTIONS(1276),
    [anon_sym_COMMA] = ACTIONS(1276),
    [anon_sym_RPAREN] = ACTIONS(1276),
    [sym_params_keyword] = ACTIONS(1276),
    [anon_sym_LBRACK] = ACTIONS(1276),
    [anon_sym_QMARK] = ACTIONS(1276),
    [anon_sym_AMP_AMP] = ACTIONS(1276),
    [anon_sym_PIPE_PIPE] = ACTIONS(1276),
    [anon_sym_GT_GT] = ACTIONS(1276),
    [anon_sym_LT_LT] = ACTIONS(1276),
    [anon_sym_AMP] = ACTIONS(1278),
    [anon_sym_CARET] = ACTIONS(1276),
    [anon_sym_PIPE] = ACTIONS(1278),
    [anon_sym_PLUS] = ACTIONS(1276),
    [anon_sym_DASH] = ACTIONS(1276),
    [anon_sym_STAR] = ACTIONS(1276),
    [anon_sym_SLASH] = ACTIONS(1278),
    [anon_sym_PERCENT] = ACTIONS(1276),
    [anon_sym_LT] = ACTIONS(1278),
    [anon_sym_LT_EQ] = ACTIONS(1276),
    [anon_sym_EQ_EQ] = ACTIONS(1276),
    [anon_sym_BANG_EQ] = ACTIONS(1276),
    [anon_sym_GT_EQ] = ACTIONS(1276),
    [anon_sym_GT] = ACTIONS(1278),
    [sym__real_type_suffix] = ACTIONS(1280),
    [sym__exponent_part] = ACTIONS(1282),
    [sym_comment] = ACTIONS(36),
  },
  [502] = {
    [anon_sym_SEMI] = ACTIONS(1284),
    [anon_sym_RBRACE] = ACTIONS(1284),
    [anon_sym_COLON] = ACTIONS(1284),
    [anon_sym_COMMA] = ACTIONS(1284),
    [anon_sym_RPAREN] = ACTIONS(1284),
    [sym_params_keyword] = ACTIONS(1284),
    [anon_sym_LBRACK] = ACTIONS(1284),
    [anon_sym_QMARK] = ACTIONS(1284),
    [anon_sym_AMP_AMP] = ACTIONS(1284),
    [anon_sym_PIPE_PIPE] = ACTIONS(1284),
    [anon_sym_GT_GT] = ACTIONS(1284),
    [anon_sym_LT_LT] = ACTIONS(1284),
    [anon_sym_AMP] = ACTIONS(1286),
    [anon_sym_CARET] = ACTIONS(1284),
    [anon_sym_PIPE] = ACTIONS(1286),
    [anon_sym_PLUS] = ACTIONS(1284),
    [anon_sym_DASH] = ACTIONS(1284),
    [anon_sym_STAR] = ACTIONS(1284),
    [anon_sym_SLASH] = ACTIONS(1286),
    [anon_sym_PERCENT] = ACTIONS(1284),
    [anon_sym_LT] = ACTIONS(1286),
    [anon_sym_LT_EQ] = ACTIONS(1284),
    [anon_sym_EQ_EQ] = ACTIONS(1284),
    [anon_sym_BANG_EQ] = ACTIONS(1284),
    [anon_sym_GT_EQ] = ACTIONS(1284),
    [anon_sym_GT] = ACTIONS(1286),
    [sym_comment] = ACTIONS(36),
  },
  [503] = {
    [sym__unicode_escape_sequence] = STATE(636),
    [sym__simple_escape_sequence] = STATE(636),
    [sym__regular_string_literal_character] = STATE(636),
    [aux_sym__regular_string_literal_repeat1] = STATE(636),
    [sym__hexadecimal_escape_sequence] = ACTIONS(1288),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1288),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1288),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1288),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1288),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1288),
    [anon_sym_BSLASH0] = ACTIONS(1288),
    [anon_sym_BSLASHa] = ACTIONS(1288),
    [anon_sym_BSLASHb] = ACTIONS(1288),
    [anon_sym_BSLASHf] = ACTIONS(1288),
    [anon_sym_BSLASHn] = ACTIONS(1288),
    [anon_sym_BSLASHr] = ACTIONS(1288),
    [anon_sym_BSLASHt] = ACTIONS(1288),
    [anon_sym_BSLASHv] = ACTIONS(1288),
    [anon_sym_DQUOTE] = ACTIONS(1290),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1288),
    [sym_comment] = ACTIONS(983),
  },
  [504] = {
    [anon_sym_DQUOTE] = ACTIONS(1292),
    [sym_comment] = ACTIONS(36),
  },
  [505] = {
    [sym__expression] = STATE(639),
    [sym_parenthesized_expression] = STATE(639),
    [sym_ternary_expression] = STATE(639),
    [sym_binary_expression] = STATE(639),
    [sym_unary_expression] = STATE(639),
    [sym__literal] = STATE(639),
    [sym_boolean_literal] = STATE(639),
    [sym_character_literal] = STATE(639),
    [sym_integer_literal] = STATE(639),
    [sym_real_literal] = STATE(639),
    [sym_string_literal] = STATE(639),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1298),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1298),
    [sym_comment] = ACTIONS(36),
  },
  [506] = {
    [sym__expression] = STATE(640),
    [sym_parenthesized_expression] = STATE(640),
    [sym_ternary_expression] = STATE(640),
    [sym_binary_expression] = STATE(640),
    [sym_unary_expression] = STATE(640),
    [sym__literal] = STATE(640),
    [sym_boolean_literal] = STATE(640),
    [sym_character_literal] = STATE(640),
    [sym_integer_literal] = STATE(640),
    [sym_real_literal] = STATE(640),
    [sym_string_literal] = STATE(640),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1300),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1300),
    [sym_comment] = ACTIONS(36),
  },
  [507] = {
    [sym__expression] = STATE(641),
    [sym_parenthesized_expression] = STATE(641),
    [sym_ternary_expression] = STATE(641),
    [sym_binary_expression] = STATE(641),
    [sym_unary_expression] = STATE(641),
    [sym__literal] = STATE(641),
    [sym_boolean_literal] = STATE(641),
    [sym_character_literal] = STATE(641),
    [sym_integer_literal] = STATE(641),
    [sym_real_literal] = STATE(641),
    [sym_string_literal] = STATE(641),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1302),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1302),
    [sym_comment] = ACTIONS(36),
  },
  [508] = {
    [sym__expression] = STATE(642),
    [sym_parenthesized_expression] = STATE(642),
    [sym_ternary_expression] = STATE(642),
    [sym_binary_expression] = STATE(642),
    [sym_unary_expression] = STATE(642),
    [sym__literal] = STATE(642),
    [sym_boolean_literal] = STATE(642),
    [sym_character_literal] = STATE(642),
    [sym_integer_literal] = STATE(642),
    [sym_real_literal] = STATE(642),
    [sym_string_literal] = STATE(642),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1304),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1304),
    [sym_comment] = ACTIONS(36),
  },
  [509] = {
    [sym__expression] = STATE(643),
    [sym_parenthesized_expression] = STATE(643),
    [sym_ternary_expression] = STATE(643),
    [sym_binary_expression] = STATE(643),
    [sym_unary_expression] = STATE(643),
    [sym__literal] = STATE(643),
    [sym_boolean_literal] = STATE(643),
    [sym_character_literal] = STATE(643),
    [sym_integer_literal] = STATE(643),
    [sym_real_literal] = STATE(643),
    [sym_string_literal] = STATE(643),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1306),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1306),
    [sym_comment] = ACTIONS(36),
  },
  [510] = {
    [sym__expression] = STATE(644),
    [sym_parenthesized_expression] = STATE(644),
    [sym_ternary_expression] = STATE(644),
    [sym_binary_expression] = STATE(644),
    [sym_unary_expression] = STATE(644),
    [sym__literal] = STATE(644),
    [sym_boolean_literal] = STATE(644),
    [sym_character_literal] = STATE(644),
    [sym_integer_literal] = STATE(644),
    [sym_real_literal] = STATE(644),
    [sym_string_literal] = STATE(644),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1308),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1308),
    [sym_comment] = ACTIONS(36),
  },
  [511] = {
    [sym__expression] = STATE(645),
    [sym_parenthesized_expression] = STATE(645),
    [sym_ternary_expression] = STATE(645),
    [sym_binary_expression] = STATE(645),
    [sym_unary_expression] = STATE(645),
    [sym__literal] = STATE(645),
    [sym_boolean_literal] = STATE(645),
    [sym_character_literal] = STATE(645),
    [sym_integer_literal] = STATE(645),
    [sym_real_literal] = STATE(645),
    [sym_string_literal] = STATE(645),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1310),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1310),
    [sym_comment] = ACTIONS(36),
  },
  [512] = {
    [sym__expression] = STATE(646),
    [sym_parenthesized_expression] = STATE(646),
    [sym_ternary_expression] = STATE(646),
    [sym_binary_expression] = STATE(646),
    [sym_unary_expression] = STATE(646),
    [sym__literal] = STATE(646),
    [sym_boolean_literal] = STATE(646),
    [sym_character_literal] = STATE(646),
    [sym_integer_literal] = STATE(646),
    [sym_real_literal] = STATE(646),
    [sym_string_literal] = STATE(646),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1312),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1312),
    [sym_comment] = ACTIONS(36),
  },
  [513] = {
    [sym__expression] = STATE(647),
    [sym_parenthesized_expression] = STATE(647),
    [sym_ternary_expression] = STATE(647),
    [sym_binary_expression] = STATE(647),
    [sym_unary_expression] = STATE(647),
    [sym__literal] = STATE(647),
    [sym_boolean_literal] = STATE(647),
    [sym_character_literal] = STATE(647),
    [sym_integer_literal] = STATE(647),
    [sym_real_literal] = STATE(647),
    [sym_string_literal] = STATE(647),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1314),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1314),
    [sym_comment] = ACTIONS(36),
  },
  [514] = {
    [sym__expression] = STATE(648),
    [sym_parenthesized_expression] = STATE(648),
    [sym_ternary_expression] = STATE(648),
    [sym_binary_expression] = STATE(648),
    [sym_unary_expression] = STATE(648),
    [sym__literal] = STATE(648),
    [sym_boolean_literal] = STATE(648),
    [sym_character_literal] = STATE(648),
    [sym_integer_literal] = STATE(648),
    [sym_real_literal] = STATE(648),
    [sym_string_literal] = STATE(648),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1316),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1316),
    [sym_comment] = ACTIONS(36),
  },
  [515] = {
    [ts_builtin_sym_end] = ACTIONS(1318),
    [anon_sym_using] = ACTIONS(1318),
    [anon_sym_namespace] = ACTIONS(1318),
    [anon_sym_RBRACE] = ACTIONS(1318),
    [anon_sym_class] = ACTIONS(1318),
    [anon_sym_unsafe] = ACTIONS(1318),
    [anon_sym_abstract] = ACTIONS(1318),
    [anon_sym_sealed] = ACTIONS(1318),
    [anon_sym_static] = ACTIONS(1318),
    [anon_sym_new] = ACTIONS(1318),
    [anon_sym_public] = ACTIONS(1318),
    [anon_sym_protected] = ACTIONS(1318),
    [anon_sym_internal] = ACTIONS(1318),
    [anon_sym_private] = ACTIONS(1318),
    [anon_sym_interface] = ACTIONS(1318),
    [anon_sym_struct] = ACTIONS(1318),
    [anon_sym_enum] = ACTIONS(1318),
    [anon_sym_delegate] = ACTIONS(1318),
    [anon_sym_LBRACK] = ACTIONS(1318),
    [sym_comment] = ACTIONS(36),
  },
  [516] = {
    [ts_builtin_sym_end] = ACTIONS(1318),
    [anon_sym_SEMI] = ACTIONS(1320),
    [anon_sym_using] = ACTIONS(1318),
    [anon_sym_namespace] = ACTIONS(1318),
    [anon_sym_RBRACE] = ACTIONS(1318),
    [anon_sym_class] = ACTIONS(1318),
    [anon_sym_unsafe] = ACTIONS(1318),
    [anon_sym_abstract] = ACTIONS(1318),
    [anon_sym_sealed] = ACTIONS(1318),
    [anon_sym_static] = ACTIONS(1318),
    [anon_sym_new] = ACTIONS(1318),
    [anon_sym_public] = ACTIONS(1318),
    [anon_sym_protected] = ACTIONS(1318),
    [anon_sym_internal] = ACTIONS(1318),
    [anon_sym_private] = ACTIONS(1318),
    [anon_sym_interface] = ACTIONS(1318),
    [anon_sym_struct] = ACTIONS(1318),
    [anon_sym_enum] = ACTIONS(1318),
    [anon_sym_delegate] = ACTIONS(1318),
    [anon_sym_LBRACK] = ACTIONS(1318),
    [sym_comment] = ACTIONS(36),
  },
  [517] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1322),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [518] = {
    [anon_sym_RPAREN] = ACTIONS(1324),
    [sym_comment] = ACTIONS(36),
  },
  [519] = {
    [aux_sym_array_rank_specifier_repeat1] = STATE(652),
    [anon_sym_COMMA] = ACTIONS(1326),
    [anon_sym_RBRACK] = ACTIONS(1328),
    [sym_comment] = ACTIONS(36),
  },
  [520] = {
    [sym_identifier_name] = ACTIONS(1330),
    [sym_comment] = ACTIONS(36),
  },
  [521] = {
    [anon_sym_sbyte] = ACTIONS(320),
    [anon_sym_byte] = ACTIONS(320),
    [anon_sym_short] = ACTIONS(320),
    [anon_sym_ushort] = ACTIONS(320),
    [anon_sym_int] = ACTIONS(320),
    [anon_sym_uint] = ACTIONS(320),
    [anon_sym_long] = ACTIONS(320),
    [anon_sym_ulong] = ACTIONS(320),
    [anon_sym_char] = ACTIONS(320),
    [anon_sym_ref] = ACTIONS(320),
    [anon_sym_out] = ACTIONS(320),
    [anon_sym_this] = ACTIONS(320),
    [sym_params_keyword] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(322),
    [anon_sym_bool] = ACTIONS(320),
    [anon_sym_decimal] = ACTIONS(320),
    [anon_sym_double] = ACTIONS(320),
    [anon_sym_float] = ACTIONS(320),
    [anon_sym_object] = ACTIONS(320),
    [anon_sym_string] = ACTIONS(320),
    [sym_identifier_name] = ACTIONS(320),
    [sym_comment] = ACTIONS(36),
  },
  [522] = {
    [sym_attribute_list] = STATE(653),
    [sym_attribute] = STATE(58),
    [sym_identifier_name] = ACTIONS(193),
    [sym_comment] = ACTIONS(36),
  },
  [523] = {
    [anon_sym_COMMA] = ACTIONS(1332),
    [anon_sym_RPAREN] = ACTIONS(1332),
    [sym_params_keyword] = ACTIONS(1332),
    [anon_sym_LBRACK] = ACTIONS(1332),
    [sym_comment] = ACTIONS(36),
  },
  [524] = {
    [sym_parameter_modifier] = STATE(408),
    [sym__type] = STATE(406),
    [sym_generic_name] = STATE(406),
    [sym_predefined_type] = STATE(406),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_ref] = ACTIONS(492),
    [anon_sym_out] = ACTIONS(492),
    [anon_sym_this] = ACTIONS(492),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [525] = {
    [sym__attribute_section] = STATE(654),
    [aux_sym__attributes_repeat1] = STATE(654),
    [anon_sym_sbyte] = ACTIONS(424),
    [anon_sym_byte] = ACTIONS(424),
    [anon_sym_short] = ACTIONS(424),
    [anon_sym_ushort] = ACTIONS(424),
    [anon_sym_int] = ACTIONS(424),
    [anon_sym_uint] = ACTIONS(424),
    [anon_sym_long] = ACTIONS(424),
    [anon_sym_ulong] = ACTIONS(424),
    [anon_sym_char] = ACTIONS(424),
    [anon_sym_ref] = ACTIONS(424),
    [anon_sym_out] = ACTIONS(424),
    [anon_sym_this] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(1058),
    [anon_sym_bool] = ACTIONS(424),
    [anon_sym_decimal] = ACTIONS(424),
    [anon_sym_double] = ACTIONS(424),
    [anon_sym_float] = ACTIONS(424),
    [anon_sym_object] = ACTIONS(424),
    [anon_sym_string] = ACTIONS(424),
    [sym_identifier_name] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
  },
  [526] = {
    [anon_sym_RPAREN] = ACTIONS(1334),
    [sym_comment] = ACTIONS(36),
  },
  [527] = {
    [aux_sym__formal_parameter_list_repeat1] = STATE(527),
    [anon_sym_COMMA] = ACTIONS(1336),
    [anon_sym_RPAREN] = ACTIONS(1332),
    [sym_params_keyword] = ACTIONS(1332),
    [anon_sym_LBRACK] = ACTIONS(1332),
    [sym_comment] = ACTIONS(36),
  },
  [528] = {
    [sym__attribute_section] = STATE(528),
    [aux_sym__attributes_repeat1] = STATE(528),
    [sym_params_keyword] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(1070),
    [sym_comment] = ACTIONS(36),
  },
  [529] = {
    [sym_equals_value_clause] = STATE(655),
    [anon_sym_COMMA] = ACTIONS(1339),
    [anon_sym_RPAREN] = ACTIONS(1339),
    [sym_params_keyword] = ACTIONS(1339),
    [anon_sym_LBRACK] = ACTIONS(1339),
    [anon_sym_EQ] = ACTIONS(1068),
    [sym_comment] = ACTIONS(36),
  },
  [530] = {
    [sym_identifier_name] = ACTIONS(1341),
    [sym_comment] = ACTIONS(36),
  },
  [531] = {
    [sym_identifier_name] = ACTIONS(1343),
    [sym_comment] = ACTIONS(36),
  },
  [532] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1349),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1349),
    [sym_comment] = ACTIONS(36),
  },
  [533] = {
    [anon_sym_COMMA] = ACTIONS(1339),
    [anon_sym_RPAREN] = ACTIONS(1339),
    [sym_params_keyword] = ACTIONS(1339),
    [anon_sym_LBRACK] = ACTIONS(1339),
    [sym_comment] = ACTIONS(36),
  },
  [534] = {
    [ts_builtin_sym_end] = ACTIONS(1351),
    [anon_sym_using] = ACTIONS(1351),
    [anon_sym_namespace] = ACTIONS(1351),
    [anon_sym_RBRACE] = ACTIONS(1351),
    [anon_sym_class] = ACTIONS(1351),
    [anon_sym_unsafe] = ACTIONS(1351),
    [anon_sym_abstract] = ACTIONS(1351),
    [anon_sym_sealed] = ACTIONS(1351),
    [anon_sym_static] = ACTIONS(1351),
    [anon_sym_new] = ACTIONS(1351),
    [anon_sym_public] = ACTIONS(1351),
    [anon_sym_protected] = ACTIONS(1351),
    [anon_sym_internal] = ACTIONS(1351),
    [anon_sym_private] = ACTIONS(1351),
    [anon_sym_interface] = ACTIONS(1351),
    [anon_sym_struct] = ACTIONS(1351),
    [anon_sym_enum] = ACTIONS(1351),
    [anon_sym_delegate] = ACTIONS(1351),
    [anon_sym_LBRACK] = ACTIONS(1351),
    [sym_comment] = ACTIONS(36),
  },
  [535] = {
    [ts_builtin_sym_end] = ACTIONS(1353),
    [anon_sym_using] = ACTIONS(1353),
    [anon_sym_namespace] = ACTIONS(1353),
    [anon_sym_RBRACE] = ACTIONS(1353),
    [anon_sym_class] = ACTIONS(1353),
    [anon_sym_unsafe] = ACTIONS(1353),
    [anon_sym_abstract] = ACTIONS(1353),
    [anon_sym_sealed] = ACTIONS(1353),
    [anon_sym_static] = ACTIONS(1353),
    [anon_sym_new] = ACTIONS(1353),
    [anon_sym_public] = ACTIONS(1353),
    [anon_sym_protected] = ACTIONS(1353),
    [anon_sym_internal] = ACTIONS(1353),
    [anon_sym_private] = ACTIONS(1353),
    [anon_sym_interface] = ACTIONS(1353),
    [anon_sym_struct] = ACTIONS(1353),
    [anon_sym_enum] = ACTIONS(1353),
    [anon_sym_delegate] = ACTIONS(1353),
    [anon_sym_LBRACK] = ACTIONS(1353),
    [sym_comment] = ACTIONS(36),
  },
  [536] = {
    [ts_builtin_sym_end] = ACTIONS(1355),
    [anon_sym_using] = ACTIONS(1355),
    [anon_sym_namespace] = ACTIONS(1355),
    [anon_sym_RBRACE] = ACTIONS(1355),
    [anon_sym_class] = ACTIONS(1355),
    [anon_sym_unsafe] = ACTIONS(1355),
    [anon_sym_abstract] = ACTIONS(1355),
    [anon_sym_sealed] = ACTIONS(1355),
    [anon_sym_static] = ACTIONS(1355),
    [anon_sym_new] = ACTIONS(1355),
    [anon_sym_public] = ACTIONS(1355),
    [anon_sym_protected] = ACTIONS(1355),
    [anon_sym_internal] = ACTIONS(1355),
    [anon_sym_private] = ACTIONS(1355),
    [anon_sym_interface] = ACTIONS(1355),
    [anon_sym_struct] = ACTIONS(1355),
    [anon_sym_enum] = ACTIONS(1355),
    [anon_sym_delegate] = ACTIONS(1355),
    [anon_sym_LBRACK] = ACTIONS(1355),
    [sym_comment] = ACTIONS(36),
  },
  [537] = {
    [aux_sym_enum_declaration_repeat1] = STATE(660),
    [anon_sym_RBRACE] = ACTIONS(1322),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [538] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1357),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [539] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1359),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [540] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1361),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [541] = {
    [sym_enum_member_declaration] = STATE(664),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [542] = {
    [ts_builtin_sym_end] = ACTIONS(1363),
    [anon_sym_using] = ACTIONS(1363),
    [anon_sym_namespace] = ACTIONS(1363),
    [anon_sym_RBRACE] = ACTIONS(1363),
    [anon_sym_class] = ACTIONS(1363),
    [anon_sym_unsafe] = ACTIONS(1363),
    [anon_sym_abstract] = ACTIONS(1363),
    [anon_sym_sealed] = ACTIONS(1363),
    [anon_sym_static] = ACTIONS(1363),
    [anon_sym_new] = ACTIONS(1363),
    [anon_sym_public] = ACTIONS(1363),
    [anon_sym_protected] = ACTIONS(1363),
    [anon_sym_internal] = ACTIONS(1363),
    [anon_sym_private] = ACTIONS(1363),
    [anon_sym_interface] = ACTIONS(1363),
    [anon_sym_struct] = ACTIONS(1363),
    [anon_sym_enum] = ACTIONS(1363),
    [anon_sym_delegate] = ACTIONS(1363),
    [anon_sym_LBRACK] = ACTIONS(1363),
    [sym_comment] = ACTIONS(36),
  },
  [543] = {
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(1365),
    [anon_sym_unsafe] = ACTIONS(1365),
    [anon_sym_abstract] = ACTIONS(1365),
    [anon_sym_sealed] = ACTIONS(1365),
    [anon_sym_static] = ACTIONS(1365),
    [anon_sym_new] = ACTIONS(1365),
    [anon_sym_public] = ACTIONS(1365),
    [anon_sym_protected] = ACTIONS(1365),
    [anon_sym_internal] = ACTIONS(1365),
    [anon_sym_private] = ACTIONS(1365),
    [anon_sym_interface] = ACTIONS(1365),
    [anon_sym_struct] = ACTIONS(1365),
    [anon_sym_enum] = ACTIONS(1365),
    [anon_sym_sbyte] = ACTIONS(1365),
    [anon_sym_byte] = ACTIONS(1365),
    [anon_sym_short] = ACTIONS(1365),
    [anon_sym_ushort] = ACTIONS(1365),
    [anon_sym_int] = ACTIONS(1365),
    [anon_sym_uint] = ACTIONS(1365),
    [anon_sym_long] = ACTIONS(1365),
    [anon_sym_ulong] = ACTIONS(1365),
    [anon_sym_char] = ACTIONS(1365),
    [anon_sym_delegate] = ACTIONS(1365),
    [sym_void_keyword] = ACTIONS(1365),
    [anon_sym_LBRACK] = ACTIONS(616),
    [sym_const_keyword] = ACTIONS(1365),
    [anon_sym_readonly] = ACTIONS(1365),
    [anon_sym_volatile] = ACTIONS(1365),
    [anon_sym_bool] = ACTIONS(1365),
    [anon_sym_decimal] = ACTIONS(1365),
    [anon_sym_double] = ACTIONS(1365),
    [anon_sym_float] = ACTIONS(1365),
    [anon_sym_object] = ACTIONS(1365),
    [anon_sym_string] = ACTIONS(1365),
    [sym_identifier_name] = ACTIONS(1365),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1365),
  },
  [544] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1367),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [545] = {
    [anon_sym_RBRACE] = ACTIONS(682),
    [anon_sym_class] = ACTIONS(1369),
    [anon_sym_unsafe] = ACTIONS(1369),
    [anon_sym_abstract] = ACTIONS(1369),
    [anon_sym_sealed] = ACTIONS(1369),
    [anon_sym_static] = ACTIONS(1369),
    [anon_sym_new] = ACTIONS(1369),
    [anon_sym_public] = ACTIONS(1369),
    [anon_sym_protected] = ACTIONS(1369),
    [anon_sym_internal] = ACTIONS(1369),
    [anon_sym_private] = ACTIONS(1369),
    [anon_sym_interface] = ACTIONS(1369),
    [anon_sym_struct] = ACTIONS(1369),
    [anon_sym_enum] = ACTIONS(1369),
    [anon_sym_sbyte] = ACTIONS(1369),
    [anon_sym_byte] = ACTIONS(1369),
    [anon_sym_short] = ACTIONS(1369),
    [anon_sym_ushort] = ACTIONS(1369),
    [anon_sym_int] = ACTIONS(1369),
    [anon_sym_uint] = ACTIONS(1369),
    [anon_sym_long] = ACTIONS(1369),
    [anon_sym_ulong] = ACTIONS(1369),
    [anon_sym_char] = ACTIONS(1369),
    [anon_sym_delegate] = ACTIONS(1369),
    [sym_void_keyword] = ACTIONS(1369),
    [anon_sym_LBRACK] = ACTIONS(682),
    [sym_const_keyword] = ACTIONS(1369),
    [anon_sym_readonly] = ACTIONS(1369),
    [anon_sym_volatile] = ACTIONS(1369),
    [anon_sym_bool] = ACTIONS(1369),
    [anon_sym_decimal] = ACTIONS(1369),
    [anon_sym_double] = ACTIONS(1369),
    [anon_sym_float] = ACTIONS(1369),
    [anon_sym_object] = ACTIONS(1369),
    [anon_sym_string] = ACTIONS(1369),
    [sym_identifier_name] = ACTIONS(1369),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1369),
  },
  [546] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1371),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [547] = {
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_class] = ACTIONS(1373),
    [anon_sym_unsafe] = ACTIONS(1373),
    [anon_sym_abstract] = ACTIONS(1373),
    [anon_sym_sealed] = ACTIONS(1373),
    [anon_sym_static] = ACTIONS(1373),
    [anon_sym_new] = ACTIONS(1373),
    [anon_sym_public] = ACTIONS(1373),
    [anon_sym_protected] = ACTIONS(1373),
    [anon_sym_internal] = ACTIONS(1373),
    [anon_sym_private] = ACTIONS(1373),
    [anon_sym_interface] = ACTIONS(1373),
    [anon_sym_struct] = ACTIONS(1373),
    [anon_sym_enum] = ACTIONS(1373),
    [anon_sym_sbyte] = ACTIONS(1373),
    [anon_sym_byte] = ACTIONS(1373),
    [anon_sym_short] = ACTIONS(1373),
    [anon_sym_ushort] = ACTIONS(1373),
    [anon_sym_int] = ACTIONS(1373),
    [anon_sym_uint] = ACTIONS(1373),
    [anon_sym_long] = ACTIONS(1373),
    [anon_sym_ulong] = ACTIONS(1373),
    [anon_sym_char] = ACTIONS(1373),
    [anon_sym_delegate] = ACTIONS(1373),
    [sym_void_keyword] = ACTIONS(1373),
    [anon_sym_LBRACK] = ACTIONS(742),
    [sym_const_keyword] = ACTIONS(1373),
    [anon_sym_readonly] = ACTIONS(1373),
    [anon_sym_volatile] = ACTIONS(1373),
    [anon_sym_bool] = ACTIONS(1373),
    [anon_sym_decimal] = ACTIONS(1373),
    [anon_sym_double] = ACTIONS(1373),
    [anon_sym_float] = ACTIONS(1373),
    [anon_sym_object] = ACTIONS(1373),
    [anon_sym_string] = ACTIONS(1373),
    [sym_identifier_name] = ACTIONS(1373),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1373),
  },
  [548] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1375),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [549] = {
    [anon_sym_SEMI] = ACTIONS(1377),
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_class] = ACTIONS(1379),
    [anon_sym_unsafe] = ACTIONS(1379),
    [anon_sym_abstract] = ACTIONS(1379),
    [anon_sym_sealed] = ACTIONS(1379),
    [anon_sym_static] = ACTIONS(1379),
    [anon_sym_new] = ACTIONS(1379),
    [anon_sym_public] = ACTIONS(1379),
    [anon_sym_protected] = ACTIONS(1379),
    [anon_sym_internal] = ACTIONS(1379),
    [anon_sym_private] = ACTIONS(1379),
    [anon_sym_interface] = ACTIONS(1379),
    [anon_sym_struct] = ACTIONS(1379),
    [anon_sym_enum] = ACTIONS(1379),
    [anon_sym_sbyte] = ACTIONS(1379),
    [anon_sym_byte] = ACTIONS(1379),
    [anon_sym_short] = ACTIONS(1379),
    [anon_sym_ushort] = ACTIONS(1379),
    [anon_sym_int] = ACTIONS(1379),
    [anon_sym_uint] = ACTIONS(1379),
    [anon_sym_long] = ACTIONS(1379),
    [anon_sym_ulong] = ACTIONS(1379),
    [anon_sym_char] = ACTIONS(1379),
    [anon_sym_delegate] = ACTIONS(1379),
    [sym_void_keyword] = ACTIONS(1379),
    [anon_sym_LBRACK] = ACTIONS(819),
    [sym_const_keyword] = ACTIONS(1379),
    [anon_sym_readonly] = ACTIONS(1379),
    [anon_sym_volatile] = ACTIONS(1379),
    [anon_sym_bool] = ACTIONS(1379),
    [anon_sym_decimal] = ACTIONS(1379),
    [anon_sym_double] = ACTIONS(1379),
    [anon_sym_float] = ACTIONS(1379),
    [anon_sym_object] = ACTIONS(1379),
    [anon_sym_string] = ACTIONS(1379),
    [sym_identifier_name] = ACTIONS(1379),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1379),
  },
  [550] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1381),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [551] = {
    [sym_enum_member_declaration] = STATE(670),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [552] = {
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_class] = ACTIONS(1383),
    [anon_sym_unsafe] = ACTIONS(1383),
    [anon_sym_abstract] = ACTIONS(1383),
    [anon_sym_sealed] = ACTIONS(1383),
    [anon_sym_static] = ACTIONS(1383),
    [anon_sym_new] = ACTIONS(1383),
    [anon_sym_public] = ACTIONS(1383),
    [anon_sym_protected] = ACTIONS(1383),
    [anon_sym_internal] = ACTIONS(1383),
    [anon_sym_private] = ACTIONS(1383),
    [anon_sym_interface] = ACTIONS(1383),
    [anon_sym_struct] = ACTIONS(1383),
    [anon_sym_enum] = ACTIONS(1383),
    [anon_sym_sbyte] = ACTIONS(1383),
    [anon_sym_byte] = ACTIONS(1383),
    [anon_sym_short] = ACTIONS(1383),
    [anon_sym_ushort] = ACTIONS(1383),
    [anon_sym_int] = ACTIONS(1383),
    [anon_sym_uint] = ACTIONS(1383),
    [anon_sym_long] = ACTIONS(1383),
    [anon_sym_ulong] = ACTIONS(1383),
    [anon_sym_char] = ACTIONS(1383),
    [anon_sym_delegate] = ACTIONS(1383),
    [sym_void_keyword] = ACTIONS(1383),
    [anon_sym_LBRACK] = ACTIONS(844),
    [sym_const_keyword] = ACTIONS(1383),
    [anon_sym_readonly] = ACTIONS(1383),
    [anon_sym_volatile] = ACTIONS(1383),
    [anon_sym_bool] = ACTIONS(1383),
    [anon_sym_decimal] = ACTIONS(1383),
    [anon_sym_double] = ACTIONS(1383),
    [anon_sym_float] = ACTIONS(1383),
    [anon_sym_object] = ACTIONS(1383),
    [anon_sym_string] = ACTIONS(1383),
    [sym_identifier_name] = ACTIONS(1383),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1383),
  },
  [553] = {
    [sym__expression] = STATE(671),
    [sym_parenthesized_expression] = STATE(671),
    [sym_ternary_expression] = STATE(671),
    [sym_binary_expression] = STATE(671),
    [sym_unary_expression] = STATE(671),
    [sym__literal] = STATE(671),
    [sym_boolean_literal] = STATE(671),
    [sym_character_literal] = STATE(671),
    [sym_integer_literal] = STATE(671),
    [sym_real_literal] = STATE(671),
    [sym_string_literal] = STATE(671),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1385),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1385),
    [sym_comment] = ACTIONS(36),
  },
  [554] = {
    [anon_sym_SEMI] = ACTIONS(1387),
    [sym_comment] = ACTIONS(36),
  },
  [555] = {
    [anon_sym_SEMI] = ACTIONS(1389),
    [anon_sym_QMARK] = ACTIONS(1121),
    [anon_sym_AMP_AMP] = ACTIONS(1123),
    [anon_sym_PIPE_PIPE] = ACTIONS(1125),
    [anon_sym_GT_GT] = ACTIONS(1127),
    [anon_sym_LT_LT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1129),
    [anon_sym_CARET] = ACTIONS(1131),
    [anon_sym_PIPE] = ACTIONS(1133),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1141),
    [anon_sym_LT_EQ] = ACTIONS(1143),
    [anon_sym_EQ_EQ] = ACTIONS(1145),
    [anon_sym_BANG_EQ] = ACTIONS(1145),
    [anon_sym_GT_EQ] = ACTIONS(1143),
    [anon_sym_GT] = ACTIONS(1141),
    [sym_comment] = ACTIONS(36),
  },
  [556] = {
    [anon_sym_SEMI] = ACTIONS(1391),
    [anon_sym_RBRACE] = ACTIONS(1391),
    [anon_sym_LPAREN] = ACTIONS(1391),
    [anon_sym_PLUS] = ACTIONS(1393),
    [anon_sym_DASH] = ACTIONS(1393),
    [anon_sym_BANG] = ACTIONS(1391),
    [anon_sym_TILDE] = ACTIONS(1391),
    [anon_sym_DASH_DASH] = ACTIONS(1391),
    [anon_sym_PLUS_PLUS] = ACTIONS(1391),
    [anon_sym_typeof] = ACTIONS(1393),
    [anon_sym_sizeof] = ACTIONS(1393),
    [anon_sym_true] = ACTIONS(1393),
    [anon_sym_false] = ACTIONS(1393),
    [anon_sym_SQUOTE] = ACTIONS(1391),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1393),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1391),
    [sym_null_literal] = ACTIONS(1393),
    [anon_sym_DOT] = ACTIONS(1391),
    [anon_sym_DQUOTE] = ACTIONS(1391),
    [anon_sym_AT_DQUOTE] = ACTIONS(1391),
    [sym_identifier_name] = ACTIONS(1393),
    [sym_comment] = ACTIONS(36),
    [anon_sym_return] = ACTIONS(1393),
  },
  [557] = {
    [sym__expression] = STATE(674),
    [sym_parenthesized_expression] = STATE(674),
    [sym_ternary_expression] = STATE(674),
    [sym_binary_expression] = STATE(674),
    [sym_unary_expression] = STATE(674),
    [sym__literal] = STATE(674),
    [sym_boolean_literal] = STATE(674),
    [sym_character_literal] = STATE(674),
    [sym_integer_literal] = STATE(674),
    [sym_real_literal] = STATE(674),
    [sym_string_literal] = STATE(674),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1395),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1395),
    [sym_comment] = ACTIONS(36),
  },
  [558] = {
    [sym__expression] = STATE(675),
    [sym_parenthesized_expression] = STATE(675),
    [sym_ternary_expression] = STATE(675),
    [sym_binary_expression] = STATE(675),
    [sym_unary_expression] = STATE(675),
    [sym__literal] = STATE(675),
    [sym_boolean_literal] = STATE(675),
    [sym_character_literal] = STATE(675),
    [sym_integer_literal] = STATE(675),
    [sym_real_literal] = STATE(675),
    [sym_string_literal] = STATE(675),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1397),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1397),
    [sym_comment] = ACTIONS(36),
  },
  [559] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1399),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1399),
    [sym_comment] = ACTIONS(36),
  },
  [560] = {
    [sym__expression] = STATE(677),
    [sym_parenthesized_expression] = STATE(677),
    [sym_ternary_expression] = STATE(677),
    [sym_binary_expression] = STATE(677),
    [sym_unary_expression] = STATE(677),
    [sym__literal] = STATE(677),
    [sym_boolean_literal] = STATE(677),
    [sym_character_literal] = STATE(677),
    [sym_integer_literal] = STATE(677),
    [sym_real_literal] = STATE(677),
    [sym_string_literal] = STATE(677),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1401),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1401),
    [sym_comment] = ACTIONS(36),
  },
  [561] = {
    [sym__expression] = STATE(678),
    [sym_parenthesized_expression] = STATE(678),
    [sym_ternary_expression] = STATE(678),
    [sym_binary_expression] = STATE(678),
    [sym_unary_expression] = STATE(678),
    [sym__literal] = STATE(678),
    [sym_boolean_literal] = STATE(678),
    [sym_character_literal] = STATE(678),
    [sym_integer_literal] = STATE(678),
    [sym_real_literal] = STATE(678),
    [sym_string_literal] = STATE(678),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1403),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1403),
    [sym_comment] = ACTIONS(36),
  },
  [562] = {
    [sym__expression] = STATE(679),
    [sym_parenthesized_expression] = STATE(679),
    [sym_ternary_expression] = STATE(679),
    [sym_binary_expression] = STATE(679),
    [sym_unary_expression] = STATE(679),
    [sym__literal] = STATE(679),
    [sym_boolean_literal] = STATE(679),
    [sym_character_literal] = STATE(679),
    [sym_integer_literal] = STATE(679),
    [sym_real_literal] = STATE(679),
    [sym_string_literal] = STATE(679),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1405),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1405),
    [sym_comment] = ACTIONS(36),
  },
  [563] = {
    [sym__expression] = STATE(680),
    [sym_parenthesized_expression] = STATE(680),
    [sym_ternary_expression] = STATE(680),
    [sym_binary_expression] = STATE(680),
    [sym_unary_expression] = STATE(680),
    [sym__literal] = STATE(680),
    [sym_boolean_literal] = STATE(680),
    [sym_character_literal] = STATE(680),
    [sym_integer_literal] = STATE(680),
    [sym_real_literal] = STATE(680),
    [sym_string_literal] = STATE(680),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1407),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1407),
    [sym_comment] = ACTIONS(36),
  },
  [564] = {
    [sym__expression] = STATE(646),
    [sym_parenthesized_expression] = STATE(646),
    [sym_ternary_expression] = STATE(646),
    [sym_binary_expression] = STATE(646),
    [sym_unary_expression] = STATE(646),
    [sym__literal] = STATE(646),
    [sym_boolean_literal] = STATE(646),
    [sym_character_literal] = STATE(646),
    [sym_integer_literal] = STATE(646),
    [sym_real_literal] = STATE(646),
    [sym_string_literal] = STATE(646),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1312),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1312),
    [sym_comment] = ACTIONS(36),
  },
  [565] = {
    [sym__expression] = STATE(681),
    [sym_parenthesized_expression] = STATE(681),
    [sym_ternary_expression] = STATE(681),
    [sym_binary_expression] = STATE(681),
    [sym_unary_expression] = STATE(681),
    [sym__literal] = STATE(681),
    [sym_boolean_literal] = STATE(681),
    [sym_character_literal] = STATE(681),
    [sym_integer_literal] = STATE(681),
    [sym_real_literal] = STATE(681),
    [sym_string_literal] = STATE(681),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1409),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1409),
    [sym_comment] = ACTIONS(36),
  },
  [566] = {
    [sym__expression] = STATE(682),
    [sym_parenthesized_expression] = STATE(682),
    [sym_ternary_expression] = STATE(682),
    [sym_binary_expression] = STATE(682),
    [sym_unary_expression] = STATE(682),
    [sym__literal] = STATE(682),
    [sym_boolean_literal] = STATE(682),
    [sym_character_literal] = STATE(682),
    [sym_integer_literal] = STATE(682),
    [sym_real_literal] = STATE(682),
    [sym_string_literal] = STATE(682),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1411),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1411),
    [sym_comment] = ACTIONS(36),
  },
  [567] = {
    [anon_sym_RBRACE] = ACTIONS(1413),
    [anon_sym_class] = ACTIONS(1415),
    [anon_sym_unsafe] = ACTIONS(1415),
    [anon_sym_abstract] = ACTIONS(1415),
    [anon_sym_sealed] = ACTIONS(1415),
    [anon_sym_static] = ACTIONS(1415),
    [anon_sym_new] = ACTIONS(1415),
    [anon_sym_public] = ACTIONS(1415),
    [anon_sym_protected] = ACTIONS(1415),
    [anon_sym_internal] = ACTIONS(1415),
    [anon_sym_private] = ACTIONS(1415),
    [anon_sym_interface] = ACTIONS(1415),
    [anon_sym_struct] = ACTIONS(1415),
    [anon_sym_enum] = ACTIONS(1415),
    [anon_sym_sbyte] = ACTIONS(1415),
    [anon_sym_byte] = ACTIONS(1415),
    [anon_sym_short] = ACTIONS(1415),
    [anon_sym_ushort] = ACTIONS(1415),
    [anon_sym_int] = ACTIONS(1415),
    [anon_sym_uint] = ACTIONS(1415),
    [anon_sym_long] = ACTIONS(1415),
    [anon_sym_ulong] = ACTIONS(1415),
    [anon_sym_char] = ACTIONS(1415),
    [anon_sym_delegate] = ACTIONS(1415),
    [sym_void_keyword] = ACTIONS(1415),
    [anon_sym_LBRACK] = ACTIONS(1413),
    [sym_const_keyword] = ACTIONS(1415),
    [anon_sym_readonly] = ACTIONS(1415),
    [anon_sym_volatile] = ACTIONS(1415),
    [anon_sym_bool] = ACTIONS(1415),
    [anon_sym_decimal] = ACTIONS(1415),
    [anon_sym_double] = ACTIONS(1415),
    [anon_sym_float] = ACTIONS(1415),
    [anon_sym_object] = ACTIONS(1415),
    [anon_sym_string] = ACTIONS(1415),
    [sym_identifier_name] = ACTIONS(1415),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1415),
  },
  [568] = {
    [sym__expression] = STATE(439),
    [sym_parenthesized_expression] = STATE(439),
    [sym_ternary_expression] = STATE(439),
    [sym_binary_expression] = STATE(439),
    [sym_unary_expression] = STATE(439),
    [sym__literal] = STATE(439),
    [sym_boolean_literal] = STATE(439),
    [sym_character_literal] = STATE(439),
    [sym_integer_literal] = STATE(439),
    [sym_real_literal] = STATE(439),
    [sym_string_literal] = STATE(439),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [sym__statement] = STATE(568),
    [sym_expression_statement] = STATE(568),
    [sym_return_statement] = STATE(568),
    [sym_variable_assignment_statement] = STATE(568),
    [sym_empty_statement] = STATE(568),
    [aux_sym_statement_block_repeat1] = STATE(568),
    [anon_sym_SEMI] = ACTIONS(1417),
    [anon_sym_RBRACE] = ACTIONS(1420),
    [anon_sym_LPAREN] = ACTIONS(1422),
    [anon_sym_PLUS] = ACTIONS(1425),
    [anon_sym_DASH] = ACTIONS(1425),
    [anon_sym_BANG] = ACTIONS(1428),
    [anon_sym_TILDE] = ACTIONS(1428),
    [anon_sym_DASH_DASH] = ACTIONS(1428),
    [anon_sym_PLUS_PLUS] = ACTIONS(1428),
    [anon_sym_typeof] = ACTIONS(1425),
    [anon_sym_sizeof] = ACTIONS(1425),
    [anon_sym_true] = ACTIONS(1431),
    [anon_sym_false] = ACTIONS(1431),
    [anon_sym_SQUOTE] = ACTIONS(1434),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1437),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1440),
    [sym_null_literal] = ACTIONS(1443),
    [anon_sym_DOT] = ACTIONS(1446),
    [anon_sym_DQUOTE] = ACTIONS(1449),
    [anon_sym_AT_DQUOTE] = ACTIONS(1452),
    [sym_identifier_name] = ACTIONS(1455),
    [sym_comment] = ACTIONS(36),
    [anon_sym_return] = ACTIONS(1458),
  },
  [569] = {
    [anon_sym_RBRACE] = ACTIONS(1461),
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
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1463),
  },
  [570] = {
    [sym_statement_block] = STATE(683),
    [anon_sym_LBRACE] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [571] = {
    [sym__type_declaration] = STATE(684),
    [sym_class_declaration] = STATE(684),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(684),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(684),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(684),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(684),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(684),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(684),
    [sym_method_declaration] = STATE(684),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(684),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1367),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [572] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(685),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(685),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1371),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [573] = {
    [sym__type_declaration] = STATE(686),
    [sym_class_declaration] = STATE(686),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(686),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(686),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(686),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(686),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(686),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(686),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1375),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [574] = {
    [aux_sym_enum_declaration_repeat1] = STATE(687),
    [anon_sym_RBRACE] = ACTIONS(1381),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [575] = {
    [anon_sym_LBRACE] = ACTIONS(1465),
    [sym_comment] = ACTIONS(36),
  },
  [576] = {
    [anon_sym_SEMI] = ACTIONS(1467),
    [sym_comment] = ACTIONS(36),
  },
  [577] = {
    [anon_sym_RBRACE] = ACTIONS(1469),
    [anon_sym_class] = ACTIONS(1471),
    [anon_sym_unsafe] = ACTIONS(1471),
    [anon_sym_abstract] = ACTIONS(1471),
    [anon_sym_sealed] = ACTIONS(1471),
    [anon_sym_static] = ACTIONS(1471),
    [anon_sym_new] = ACTIONS(1471),
    [anon_sym_public] = ACTIONS(1471),
    [anon_sym_protected] = ACTIONS(1471),
    [anon_sym_internal] = ACTIONS(1471),
    [anon_sym_private] = ACTIONS(1471),
    [anon_sym_interface] = ACTIONS(1471),
    [anon_sym_struct] = ACTIONS(1471),
    [anon_sym_enum] = ACTIONS(1471),
    [anon_sym_sbyte] = ACTIONS(1471),
    [anon_sym_byte] = ACTIONS(1471),
    [anon_sym_short] = ACTIONS(1471),
    [anon_sym_ushort] = ACTIONS(1471),
    [anon_sym_int] = ACTIONS(1471),
    [anon_sym_uint] = ACTIONS(1471),
    [anon_sym_long] = ACTIONS(1471),
    [anon_sym_ulong] = ACTIONS(1471),
    [anon_sym_char] = ACTIONS(1471),
    [anon_sym_delegate] = ACTIONS(1471),
    [sym_void_keyword] = ACTIONS(1471),
    [anon_sym_LBRACK] = ACTIONS(1469),
    [sym_const_keyword] = ACTIONS(1471),
    [anon_sym_readonly] = ACTIONS(1471),
    [anon_sym_volatile] = ACTIONS(1471),
    [anon_sym_bool] = ACTIONS(1471),
    [anon_sym_decimal] = ACTIONS(1471),
    [anon_sym_double] = ACTIONS(1471),
    [anon_sym_float] = ACTIONS(1471),
    [anon_sym_object] = ACTIONS(1471),
    [anon_sym_string] = ACTIONS(1471),
    [sym_identifier_name] = ACTIONS(1471),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1471),
  },
  [578] = {
    [sym_parameter_list] = STATE(690),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [579] = {
    [anon_sym_LBRACE] = ACTIONS(1473),
    [sym_comment] = ACTIONS(36),
  },
  [580] = {
    [anon_sym_LBRACE] = ACTIONS(1475),
    [sym_comment] = ACTIONS(36),
  },
  [581] = {
    [anon_sym_LBRACE] = ACTIONS(1477),
    [sym_comment] = ACTIONS(36),
  },
  [582] = {
    [sym__integral_type] = STATE(694),
    [anon_sym_sbyte] = ACTIONS(1479),
    [anon_sym_byte] = ACTIONS(1479),
    [anon_sym_short] = ACTIONS(1479),
    [anon_sym_ushort] = ACTIONS(1479),
    [anon_sym_int] = ACTIONS(1479),
    [anon_sym_uint] = ACTIONS(1479),
    [anon_sym_long] = ACTIONS(1479),
    [anon_sym_ulong] = ACTIONS(1479),
    [anon_sym_char] = ACTIONS(1479),
    [sym_comment] = ACTIONS(36),
  },
  [583] = {
    [sym_parameter_list] = STATE(695),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [584] = {
    [anon_sym_RBRACE] = ACTIONS(1481),
    [anon_sym_class] = ACTIONS(1483),
    [anon_sym_unsafe] = ACTIONS(1483),
    [anon_sym_abstract] = ACTIONS(1483),
    [anon_sym_sealed] = ACTIONS(1483),
    [anon_sym_static] = ACTIONS(1483),
    [anon_sym_new] = ACTIONS(1483),
    [anon_sym_public] = ACTIONS(1483),
    [anon_sym_protected] = ACTIONS(1483),
    [anon_sym_internal] = ACTIONS(1483),
    [anon_sym_private] = ACTIONS(1483),
    [anon_sym_interface] = ACTIONS(1483),
    [anon_sym_struct] = ACTIONS(1483),
    [anon_sym_enum] = ACTIONS(1483),
    [anon_sym_sbyte] = ACTIONS(1483),
    [anon_sym_byte] = ACTIONS(1483),
    [anon_sym_short] = ACTIONS(1483),
    [anon_sym_ushort] = ACTIONS(1483),
    [anon_sym_int] = ACTIONS(1483),
    [anon_sym_uint] = ACTIONS(1483),
    [anon_sym_long] = ACTIONS(1483),
    [anon_sym_ulong] = ACTIONS(1483),
    [anon_sym_char] = ACTIONS(1483),
    [anon_sym_delegate] = ACTIONS(1483),
    [sym_void_keyword] = ACTIONS(1483),
    [anon_sym_LBRACK] = ACTIONS(1481),
    [sym_const_keyword] = ACTIONS(1483),
    [anon_sym_readonly] = ACTIONS(1483),
    [anon_sym_volatile] = ACTIONS(1483),
    [anon_sym_bool] = ACTIONS(1483),
    [anon_sym_decimal] = ACTIONS(1483),
    [anon_sym_double] = ACTIONS(1483),
    [anon_sym_float] = ACTIONS(1483),
    [anon_sym_object] = ACTIONS(1483),
    [anon_sym_string] = ACTIONS(1483),
    [sym_identifier_name] = ACTIONS(1483),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1483),
  },
  [585] = {
    [sym_statement_block] = STATE(696),
    [anon_sym_LBRACE] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [586] = {
    [sym_parameter_list] = STATE(690),
    [sym_type_parameter_list] = STATE(697),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(124),
    [sym_comment] = ACTIONS(36),
  },
  [587] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1485),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1485),
    [sym_comment] = ACTIONS(36),
  },
  [588] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1487),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1487),
    [sym_comment] = ACTIONS(36),
  },
  [589] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1489),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1489),
    [sym_comment] = ACTIONS(36),
  },
  [590] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1491),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1491),
    [sym_comment] = ACTIONS(36),
  },
  [591] = {
    [sym__expression] = STATE(702),
    [sym_parenthesized_expression] = STATE(702),
    [sym_ternary_expression] = STATE(702),
    [sym_binary_expression] = STATE(702),
    [sym_unary_expression] = STATE(702),
    [sym__literal] = STATE(702),
    [sym_boolean_literal] = STATE(702),
    [sym_character_literal] = STATE(702),
    [sym_integer_literal] = STATE(702),
    [sym_real_literal] = STATE(702),
    [sym_string_literal] = STATE(702),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1493),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1493),
    [sym_comment] = ACTIONS(36),
  },
  [592] = {
    [sym__expression] = STATE(703),
    [sym_parenthesized_expression] = STATE(703),
    [sym_ternary_expression] = STATE(703),
    [sym_binary_expression] = STATE(703),
    [sym_unary_expression] = STATE(703),
    [sym__literal] = STATE(703),
    [sym_boolean_literal] = STATE(703),
    [sym_character_literal] = STATE(703),
    [sym_integer_literal] = STATE(703),
    [sym_real_literal] = STATE(703),
    [sym_string_literal] = STATE(703),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1495),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1495),
    [sym_comment] = ACTIONS(36),
  },
  [593] = {
    [sym__expression] = STATE(704),
    [sym_parenthesized_expression] = STATE(704),
    [sym_ternary_expression] = STATE(704),
    [sym_binary_expression] = STATE(704),
    [sym_unary_expression] = STATE(704),
    [sym__literal] = STATE(704),
    [sym_boolean_literal] = STATE(704),
    [sym_character_literal] = STATE(704),
    [sym_integer_literal] = STATE(704),
    [sym_real_literal] = STATE(704),
    [sym_string_literal] = STATE(704),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1497),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1497),
    [sym_comment] = ACTIONS(36),
  },
  [594] = {
    [sym__expression] = STATE(646),
    [sym_parenthesized_expression] = STATE(646),
    [sym_ternary_expression] = STATE(646),
    [sym_binary_expression] = STATE(646),
    [sym_unary_expression] = STATE(646),
    [sym__literal] = STATE(646),
    [sym_boolean_literal] = STATE(646),
    [sym_character_literal] = STATE(646),
    [sym_integer_literal] = STATE(646),
    [sym_real_literal] = STATE(646),
    [sym_string_literal] = STATE(646),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1312),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1312),
    [sym_comment] = ACTIONS(36),
  },
  [595] = {
    [sym__expression] = STATE(705),
    [sym_parenthesized_expression] = STATE(705),
    [sym_ternary_expression] = STATE(705),
    [sym_binary_expression] = STATE(705),
    [sym_unary_expression] = STATE(705),
    [sym__literal] = STATE(705),
    [sym_boolean_literal] = STATE(705),
    [sym_character_literal] = STATE(705),
    [sym_integer_literal] = STATE(705),
    [sym_real_literal] = STATE(705),
    [sym_string_literal] = STATE(705),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1499),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1499),
    [sym_comment] = ACTIONS(36),
  },
  [596] = {
    [sym__expression] = STATE(706),
    [sym_parenthesized_expression] = STATE(706),
    [sym_ternary_expression] = STATE(706),
    [sym_binary_expression] = STATE(706),
    [sym_unary_expression] = STATE(706),
    [sym__literal] = STATE(706),
    [sym_boolean_literal] = STATE(706),
    [sym_character_literal] = STATE(706),
    [sym_integer_literal] = STATE(706),
    [sym_real_literal] = STATE(706),
    [sym_string_literal] = STATE(706),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1501),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1501),
    [sym_comment] = ACTIONS(36),
  },
  [597] = {
    [anon_sym_RBRACE] = ACTIONS(1481),
    [anon_sym_unsafe] = ACTIONS(1483),
    [anon_sym_static] = ACTIONS(1483),
    [anon_sym_new] = ACTIONS(1483),
    [anon_sym_public] = ACTIONS(1483),
    [anon_sym_protected] = ACTIONS(1483),
    [anon_sym_internal] = ACTIONS(1483),
    [anon_sym_private] = ACTIONS(1483),
    [anon_sym_sbyte] = ACTIONS(1483),
    [anon_sym_byte] = ACTIONS(1483),
    [anon_sym_short] = ACTIONS(1483),
    [anon_sym_ushort] = ACTIONS(1483),
    [anon_sym_int] = ACTIONS(1483),
    [anon_sym_uint] = ACTIONS(1483),
    [anon_sym_long] = ACTIONS(1483),
    [anon_sym_ulong] = ACTIONS(1483),
    [anon_sym_char] = ACTIONS(1483),
    [anon_sym_LBRACK] = ACTIONS(1481),
    [sym_const_keyword] = ACTIONS(1483),
    [anon_sym_readonly] = ACTIONS(1483),
    [anon_sym_volatile] = ACTIONS(1483),
    [anon_sym_bool] = ACTIONS(1483),
    [anon_sym_decimal] = ACTIONS(1483),
    [anon_sym_double] = ACTIONS(1483),
    [anon_sym_float] = ACTIONS(1483),
    [anon_sym_object] = ACTIONS(1483),
    [anon_sym_string] = ACTIONS(1483),
    [sym_identifier_name] = ACTIONS(1483),
    [sym_comment] = ACTIONS(36),
  },
  [598] = {
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(1365),
    [anon_sym_unsafe] = ACTIONS(1365),
    [anon_sym_abstract] = ACTIONS(1365),
    [anon_sym_sealed] = ACTIONS(1365),
    [anon_sym_static] = ACTIONS(1365),
    [anon_sym_new] = ACTIONS(1365),
    [anon_sym_public] = ACTIONS(1365),
    [anon_sym_protected] = ACTIONS(1365),
    [anon_sym_internal] = ACTIONS(1365),
    [anon_sym_private] = ACTIONS(1365),
    [anon_sym_interface] = ACTIONS(1365),
    [anon_sym_struct] = ACTIONS(1365),
    [anon_sym_enum] = ACTIONS(1365),
    [anon_sym_sbyte] = ACTIONS(1365),
    [anon_sym_byte] = ACTIONS(1365),
    [anon_sym_short] = ACTIONS(1365),
    [anon_sym_ushort] = ACTIONS(1365),
    [anon_sym_int] = ACTIONS(1365),
    [anon_sym_uint] = ACTIONS(1365),
    [anon_sym_long] = ACTIONS(1365),
    [anon_sym_ulong] = ACTIONS(1365),
    [anon_sym_char] = ACTIONS(1365),
    [anon_sym_delegate] = ACTIONS(1365),
    [anon_sym_LBRACK] = ACTIONS(616),
    [sym_const_keyword] = ACTIONS(1365),
    [anon_sym_readonly] = ACTIONS(1365),
    [anon_sym_volatile] = ACTIONS(1365),
    [anon_sym_bool] = ACTIONS(1365),
    [anon_sym_decimal] = ACTIONS(1365),
    [anon_sym_double] = ACTIONS(1365),
    [anon_sym_float] = ACTIONS(1365),
    [anon_sym_object] = ACTIONS(1365),
    [anon_sym_string] = ACTIONS(1365),
    [sym_identifier_name] = ACTIONS(1365),
    [sym_comment] = ACTIONS(36),
  },
  [599] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1503),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [600] = {
    [anon_sym_RBRACE] = ACTIONS(682),
    [anon_sym_class] = ACTIONS(1369),
    [anon_sym_unsafe] = ACTIONS(1369),
    [anon_sym_abstract] = ACTIONS(1369),
    [anon_sym_sealed] = ACTIONS(1369),
    [anon_sym_static] = ACTIONS(1369),
    [anon_sym_new] = ACTIONS(1369),
    [anon_sym_public] = ACTIONS(1369),
    [anon_sym_protected] = ACTIONS(1369),
    [anon_sym_internal] = ACTIONS(1369),
    [anon_sym_private] = ACTIONS(1369),
    [anon_sym_interface] = ACTIONS(1369),
    [anon_sym_struct] = ACTIONS(1369),
    [anon_sym_enum] = ACTIONS(1369),
    [anon_sym_sbyte] = ACTIONS(1369),
    [anon_sym_byte] = ACTIONS(1369),
    [anon_sym_short] = ACTIONS(1369),
    [anon_sym_ushort] = ACTIONS(1369),
    [anon_sym_int] = ACTIONS(1369),
    [anon_sym_uint] = ACTIONS(1369),
    [anon_sym_long] = ACTIONS(1369),
    [anon_sym_ulong] = ACTIONS(1369),
    [anon_sym_char] = ACTIONS(1369),
    [anon_sym_delegate] = ACTIONS(1369),
    [anon_sym_LBRACK] = ACTIONS(682),
    [sym_const_keyword] = ACTIONS(1369),
    [anon_sym_readonly] = ACTIONS(1369),
    [anon_sym_volatile] = ACTIONS(1369),
    [anon_sym_bool] = ACTIONS(1369),
    [anon_sym_decimal] = ACTIONS(1369),
    [anon_sym_double] = ACTIONS(1369),
    [anon_sym_float] = ACTIONS(1369),
    [anon_sym_object] = ACTIONS(1369),
    [anon_sym_string] = ACTIONS(1369),
    [sym_identifier_name] = ACTIONS(1369),
    [sym_comment] = ACTIONS(36),
  },
  [601] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1505),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [602] = {
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_class] = ACTIONS(1373),
    [anon_sym_unsafe] = ACTIONS(1373),
    [anon_sym_abstract] = ACTIONS(1373),
    [anon_sym_sealed] = ACTIONS(1373),
    [anon_sym_static] = ACTIONS(1373),
    [anon_sym_new] = ACTIONS(1373),
    [anon_sym_public] = ACTIONS(1373),
    [anon_sym_protected] = ACTIONS(1373),
    [anon_sym_internal] = ACTIONS(1373),
    [anon_sym_private] = ACTIONS(1373),
    [anon_sym_interface] = ACTIONS(1373),
    [anon_sym_struct] = ACTIONS(1373),
    [anon_sym_enum] = ACTIONS(1373),
    [anon_sym_sbyte] = ACTIONS(1373),
    [anon_sym_byte] = ACTIONS(1373),
    [anon_sym_short] = ACTIONS(1373),
    [anon_sym_ushort] = ACTIONS(1373),
    [anon_sym_int] = ACTIONS(1373),
    [anon_sym_uint] = ACTIONS(1373),
    [anon_sym_long] = ACTIONS(1373),
    [anon_sym_ulong] = ACTIONS(1373),
    [anon_sym_char] = ACTIONS(1373),
    [anon_sym_delegate] = ACTIONS(1373),
    [anon_sym_LBRACK] = ACTIONS(742),
    [sym_const_keyword] = ACTIONS(1373),
    [anon_sym_readonly] = ACTIONS(1373),
    [anon_sym_volatile] = ACTIONS(1373),
    [anon_sym_bool] = ACTIONS(1373),
    [anon_sym_decimal] = ACTIONS(1373),
    [anon_sym_double] = ACTIONS(1373),
    [anon_sym_float] = ACTIONS(1373),
    [anon_sym_object] = ACTIONS(1373),
    [anon_sym_string] = ACTIONS(1373),
    [sym_identifier_name] = ACTIONS(1373),
    [sym_comment] = ACTIONS(36),
  },
  [603] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1507),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [604] = {
    [anon_sym_SEMI] = ACTIONS(1509),
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_class] = ACTIONS(1379),
    [anon_sym_unsafe] = ACTIONS(1379),
    [anon_sym_abstract] = ACTIONS(1379),
    [anon_sym_sealed] = ACTIONS(1379),
    [anon_sym_static] = ACTIONS(1379),
    [anon_sym_new] = ACTIONS(1379),
    [anon_sym_public] = ACTIONS(1379),
    [anon_sym_protected] = ACTIONS(1379),
    [anon_sym_internal] = ACTIONS(1379),
    [anon_sym_private] = ACTIONS(1379),
    [anon_sym_interface] = ACTIONS(1379),
    [anon_sym_struct] = ACTIONS(1379),
    [anon_sym_enum] = ACTIONS(1379),
    [anon_sym_sbyte] = ACTIONS(1379),
    [anon_sym_byte] = ACTIONS(1379),
    [anon_sym_short] = ACTIONS(1379),
    [anon_sym_ushort] = ACTIONS(1379),
    [anon_sym_int] = ACTIONS(1379),
    [anon_sym_uint] = ACTIONS(1379),
    [anon_sym_long] = ACTIONS(1379),
    [anon_sym_ulong] = ACTIONS(1379),
    [anon_sym_char] = ACTIONS(1379),
    [anon_sym_delegate] = ACTIONS(1379),
    [anon_sym_LBRACK] = ACTIONS(819),
    [sym_const_keyword] = ACTIONS(1379),
    [anon_sym_readonly] = ACTIONS(1379),
    [anon_sym_volatile] = ACTIONS(1379),
    [anon_sym_bool] = ACTIONS(1379),
    [anon_sym_decimal] = ACTIONS(1379),
    [anon_sym_double] = ACTIONS(1379),
    [anon_sym_float] = ACTIONS(1379),
    [anon_sym_object] = ACTIONS(1379),
    [anon_sym_string] = ACTIONS(1379),
    [sym_identifier_name] = ACTIONS(1379),
    [sym_comment] = ACTIONS(36),
  },
  [605] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1511),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [606] = {
    [sym_enum_member_declaration] = STATE(712),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [607] = {
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_class] = ACTIONS(1383),
    [anon_sym_unsafe] = ACTIONS(1383),
    [anon_sym_abstract] = ACTIONS(1383),
    [anon_sym_sealed] = ACTIONS(1383),
    [anon_sym_static] = ACTIONS(1383),
    [anon_sym_new] = ACTIONS(1383),
    [anon_sym_public] = ACTIONS(1383),
    [anon_sym_protected] = ACTIONS(1383),
    [anon_sym_internal] = ACTIONS(1383),
    [anon_sym_private] = ACTIONS(1383),
    [anon_sym_interface] = ACTIONS(1383),
    [anon_sym_struct] = ACTIONS(1383),
    [anon_sym_enum] = ACTIONS(1383),
    [anon_sym_sbyte] = ACTIONS(1383),
    [anon_sym_byte] = ACTIONS(1383),
    [anon_sym_short] = ACTIONS(1383),
    [anon_sym_ushort] = ACTIONS(1383),
    [anon_sym_int] = ACTIONS(1383),
    [anon_sym_uint] = ACTIONS(1383),
    [anon_sym_long] = ACTIONS(1383),
    [anon_sym_ulong] = ACTIONS(1383),
    [anon_sym_char] = ACTIONS(1383),
    [anon_sym_delegate] = ACTIONS(1383),
    [anon_sym_LBRACK] = ACTIONS(844),
    [sym_const_keyword] = ACTIONS(1383),
    [anon_sym_readonly] = ACTIONS(1383),
    [anon_sym_volatile] = ACTIONS(1383),
    [anon_sym_bool] = ACTIONS(1383),
    [anon_sym_decimal] = ACTIONS(1383),
    [anon_sym_double] = ACTIONS(1383),
    [anon_sym_float] = ACTIONS(1383),
    [anon_sym_object] = ACTIONS(1383),
    [anon_sym_string] = ACTIONS(1383),
    [sym_identifier_name] = ACTIONS(1383),
    [sym_comment] = ACTIONS(36),
  },
  [608] = {
    [sym__type_declaration] = STATE(713),
    [sym_class_declaration] = STATE(713),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(713),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(713),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(713),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(713),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(713),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(713),
    [sym_method_declaration] = STATE(713),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(713),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1503),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [609] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(714),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(714),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1505),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [610] = {
    [sym__type_declaration] = STATE(715),
    [sym_class_declaration] = STATE(715),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(715),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(715),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(715),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(715),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(715),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(715),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1507),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [611] = {
    [aux_sym_enum_declaration_repeat1] = STATE(716),
    [anon_sym_RBRACE] = ACTIONS(1511),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [612] = {
    [anon_sym_LBRACE] = ACTIONS(1513),
    [sym_comment] = ACTIONS(36),
  },
  [613] = {
    [anon_sym_SEMI] = ACTIONS(1515),
    [sym_comment] = ACTIONS(36),
  },
  [614] = {
    [anon_sym_LBRACE] = ACTIONS(1517),
    [sym_comment] = ACTIONS(36),
  },
  [615] = {
    [anon_sym_LBRACE] = ACTIONS(1519),
    [sym_comment] = ACTIONS(36),
  },
  [616] = {
    [anon_sym_LBRACE] = ACTIONS(1521),
    [sym_comment] = ACTIONS(36),
  },
  [617] = {
    [sym__integral_type] = STATE(722),
    [anon_sym_sbyte] = ACTIONS(1523),
    [anon_sym_byte] = ACTIONS(1523),
    [anon_sym_short] = ACTIONS(1523),
    [anon_sym_ushort] = ACTIONS(1523),
    [anon_sym_int] = ACTIONS(1523),
    [anon_sym_uint] = ACTIONS(1523),
    [anon_sym_long] = ACTIONS(1523),
    [anon_sym_ulong] = ACTIONS(1523),
    [anon_sym_char] = ACTIONS(1523),
    [sym_comment] = ACTIONS(36),
  },
  [618] = {
    [sym_parameter_list] = STATE(723),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [619] = {
    [anon_sym_RBRACE] = ACTIONS(1481),
    [anon_sym_class] = ACTIONS(1483),
    [anon_sym_unsafe] = ACTIONS(1483),
    [anon_sym_abstract] = ACTIONS(1483),
    [anon_sym_sealed] = ACTIONS(1483),
    [anon_sym_static] = ACTIONS(1483),
    [anon_sym_new] = ACTIONS(1483),
    [anon_sym_public] = ACTIONS(1483),
    [anon_sym_protected] = ACTIONS(1483),
    [anon_sym_internal] = ACTIONS(1483),
    [anon_sym_private] = ACTIONS(1483),
    [anon_sym_interface] = ACTIONS(1483),
    [anon_sym_struct] = ACTIONS(1483),
    [anon_sym_enum] = ACTIONS(1483),
    [anon_sym_sbyte] = ACTIONS(1483),
    [anon_sym_byte] = ACTIONS(1483),
    [anon_sym_short] = ACTIONS(1483),
    [anon_sym_ushort] = ACTIONS(1483),
    [anon_sym_int] = ACTIONS(1483),
    [anon_sym_uint] = ACTIONS(1483),
    [anon_sym_long] = ACTIONS(1483),
    [anon_sym_ulong] = ACTIONS(1483),
    [anon_sym_char] = ACTIONS(1483),
    [anon_sym_delegate] = ACTIONS(1483),
    [anon_sym_LBRACK] = ACTIONS(1481),
    [sym_const_keyword] = ACTIONS(1483),
    [anon_sym_readonly] = ACTIONS(1483),
    [anon_sym_volatile] = ACTIONS(1483),
    [anon_sym_bool] = ACTIONS(1483),
    [anon_sym_decimal] = ACTIONS(1483),
    [anon_sym_double] = ACTIONS(1483),
    [anon_sym_float] = ACTIONS(1483),
    [anon_sym_object] = ACTIONS(1483),
    [anon_sym_string] = ACTIONS(1483),
    [sym_identifier_name] = ACTIONS(1483),
    [sym_comment] = ACTIONS(36),
  },
  [620] = {
    [anon_sym_SEMI] = ACTIONS(1525),
    [anon_sym_RBRACE] = ACTIONS(1525),
    [anon_sym_COLON] = ACTIONS(1525),
    [anon_sym_COMMA] = ACTIONS(1525),
    [anon_sym_RPAREN] = ACTIONS(1525),
    [sym_params_keyword] = ACTIONS(1525),
    [anon_sym_LBRACK] = ACTIONS(1525),
    [anon_sym_QMARK] = ACTIONS(1525),
    [anon_sym_AMP_AMP] = ACTIONS(1525),
    [anon_sym_PIPE_PIPE] = ACTIONS(1525),
    [anon_sym_GT_GT] = ACTIONS(1525),
    [anon_sym_LT_LT] = ACTIONS(1525),
    [anon_sym_AMP] = ACTIONS(1527),
    [anon_sym_CARET] = ACTIONS(1525),
    [anon_sym_PIPE] = ACTIONS(1527),
    [anon_sym_PLUS] = ACTIONS(1525),
    [anon_sym_DASH] = ACTIONS(1525),
    [anon_sym_STAR] = ACTIONS(1525),
    [anon_sym_SLASH] = ACTIONS(1527),
    [anon_sym_PERCENT] = ACTIONS(1525),
    [anon_sym_LT] = ACTIONS(1527),
    [anon_sym_LT_EQ] = ACTIONS(1525),
    [anon_sym_EQ_EQ] = ACTIONS(1525),
    [anon_sym_BANG_EQ] = ACTIONS(1525),
    [anon_sym_GT_EQ] = ACTIONS(1525),
    [anon_sym_GT] = ACTIONS(1527),
    [sym_comment] = ACTIONS(36),
  },
  [621] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1529),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1529),
    [sym_comment] = ACTIONS(36),
  },
  [622] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1531),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1531),
    [sym_comment] = ACTIONS(36),
  },
  [623] = {
    [sym__expression] = STATE(726),
    [sym_parenthesized_expression] = STATE(726),
    [sym_ternary_expression] = STATE(726),
    [sym_binary_expression] = STATE(726),
    [sym_unary_expression] = STATE(726),
    [sym__literal] = STATE(726),
    [sym_boolean_literal] = STATE(726),
    [sym_character_literal] = STATE(726),
    [sym_integer_literal] = STATE(726),
    [sym_real_literal] = STATE(726),
    [sym_string_literal] = STATE(726),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1533),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1533),
    [sym_comment] = ACTIONS(36),
  },
  [624] = {
    [sym__expression] = STATE(727),
    [sym_parenthesized_expression] = STATE(727),
    [sym_ternary_expression] = STATE(727),
    [sym_binary_expression] = STATE(727),
    [sym_unary_expression] = STATE(727),
    [sym__literal] = STATE(727),
    [sym_boolean_literal] = STATE(727),
    [sym_character_literal] = STATE(727),
    [sym_integer_literal] = STATE(727),
    [sym_real_literal] = STATE(727),
    [sym_string_literal] = STATE(727),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1535),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1535),
    [sym_comment] = ACTIONS(36),
  },
  [625] = {
    [sym__expression] = STATE(728),
    [sym_parenthesized_expression] = STATE(728),
    [sym_ternary_expression] = STATE(728),
    [sym_binary_expression] = STATE(728),
    [sym_unary_expression] = STATE(728),
    [sym__literal] = STATE(728),
    [sym_boolean_literal] = STATE(728),
    [sym_character_literal] = STATE(728),
    [sym_integer_literal] = STATE(728),
    [sym_real_literal] = STATE(728),
    [sym_string_literal] = STATE(728),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1537),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1537),
    [sym_comment] = ACTIONS(36),
  },
  [626] = {
    [sym__expression] = STATE(729),
    [sym_parenthesized_expression] = STATE(729),
    [sym_ternary_expression] = STATE(729),
    [sym_binary_expression] = STATE(729),
    [sym_unary_expression] = STATE(729),
    [sym__literal] = STATE(729),
    [sym_boolean_literal] = STATE(729),
    [sym_character_literal] = STATE(729),
    [sym_integer_literal] = STATE(729),
    [sym_real_literal] = STATE(729),
    [sym_string_literal] = STATE(729),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1539),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1539),
    [sym_comment] = ACTIONS(36),
  },
  [627] = {
    [sym__expression] = STATE(730),
    [sym_parenthesized_expression] = STATE(730),
    [sym_ternary_expression] = STATE(730),
    [sym_binary_expression] = STATE(730),
    [sym_unary_expression] = STATE(730),
    [sym__literal] = STATE(730),
    [sym_boolean_literal] = STATE(730),
    [sym_character_literal] = STATE(730),
    [sym_integer_literal] = STATE(730),
    [sym_real_literal] = STATE(730),
    [sym_string_literal] = STATE(730),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1541),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1541),
    [sym_comment] = ACTIONS(36),
  },
  [628] = {
    [sym__expression] = STATE(646),
    [sym_parenthesized_expression] = STATE(646),
    [sym_ternary_expression] = STATE(646),
    [sym_binary_expression] = STATE(646),
    [sym_unary_expression] = STATE(646),
    [sym__literal] = STATE(646),
    [sym_boolean_literal] = STATE(646),
    [sym_character_literal] = STATE(646),
    [sym_integer_literal] = STATE(646),
    [sym_real_literal] = STATE(646),
    [sym_string_literal] = STATE(646),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1312),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1312),
    [sym_comment] = ACTIONS(36),
  },
  [629] = {
    [sym__expression] = STATE(731),
    [sym_parenthesized_expression] = STATE(731),
    [sym_ternary_expression] = STATE(731),
    [sym_binary_expression] = STATE(731),
    [sym_unary_expression] = STATE(731),
    [sym__literal] = STATE(731),
    [sym_boolean_literal] = STATE(731),
    [sym_character_literal] = STATE(731),
    [sym_integer_literal] = STATE(731),
    [sym_real_literal] = STATE(731),
    [sym_string_literal] = STATE(731),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1543),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1543),
    [sym_comment] = ACTIONS(36),
  },
  [630] = {
    [sym__expression] = STATE(732),
    [sym_parenthesized_expression] = STATE(732),
    [sym_ternary_expression] = STATE(732),
    [sym_binary_expression] = STATE(732),
    [sym_unary_expression] = STATE(732),
    [sym__literal] = STATE(732),
    [sym_boolean_literal] = STATE(732),
    [sym_character_literal] = STATE(732),
    [sym_integer_literal] = STATE(732),
    [sym_real_literal] = STATE(732),
    [sym_string_literal] = STATE(732),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1545),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1545),
    [sym_comment] = ACTIONS(36),
  },
  [631] = {
    [anon_sym_SEMI] = ACTIONS(1547),
    [anon_sym_RBRACE] = ACTIONS(1547),
    [anon_sym_COLON] = ACTIONS(1547),
    [anon_sym_COMMA] = ACTIONS(1547),
    [anon_sym_RPAREN] = ACTIONS(1547),
    [sym_params_keyword] = ACTIONS(1547),
    [anon_sym_LBRACK] = ACTIONS(1547),
    [anon_sym_QMARK] = ACTIONS(1547),
    [anon_sym_AMP_AMP] = ACTIONS(1547),
    [anon_sym_PIPE_PIPE] = ACTIONS(1547),
    [anon_sym_GT_GT] = ACTIONS(1547),
    [anon_sym_LT_LT] = ACTIONS(1547),
    [anon_sym_AMP] = ACTIONS(1549),
    [anon_sym_CARET] = ACTIONS(1547),
    [anon_sym_PIPE] = ACTIONS(1549),
    [anon_sym_PLUS] = ACTIONS(1547),
    [anon_sym_DASH] = ACTIONS(1547),
    [anon_sym_STAR] = ACTIONS(1547),
    [anon_sym_SLASH] = ACTIONS(1549),
    [anon_sym_PERCENT] = ACTIONS(1547),
    [anon_sym_LT] = ACTIONS(1549),
    [anon_sym_LT_EQ] = ACTIONS(1547),
    [anon_sym_EQ_EQ] = ACTIONS(1547),
    [anon_sym_BANG_EQ] = ACTIONS(1547),
    [anon_sym_GT_EQ] = ACTIONS(1547),
    [anon_sym_GT] = ACTIONS(1549),
    [sym_comment] = ACTIONS(36),
  },
  [632] = {
    [anon_sym_SEMI] = ACTIONS(1551),
    [anon_sym_RBRACE] = ACTIONS(1551),
    [anon_sym_COLON] = ACTIONS(1551),
    [anon_sym_COMMA] = ACTIONS(1551),
    [anon_sym_RPAREN] = ACTIONS(1551),
    [sym_params_keyword] = ACTIONS(1551),
    [anon_sym_LBRACK] = ACTIONS(1551),
    [anon_sym_QMARK] = ACTIONS(1551),
    [anon_sym_AMP_AMP] = ACTIONS(1551),
    [anon_sym_PIPE_PIPE] = ACTIONS(1551),
    [anon_sym_GT_GT] = ACTIONS(1551),
    [anon_sym_LT_LT] = ACTIONS(1551),
    [anon_sym_AMP] = ACTIONS(1553),
    [anon_sym_CARET] = ACTIONS(1551),
    [anon_sym_PIPE] = ACTIONS(1553),
    [anon_sym_PLUS] = ACTIONS(1551),
    [anon_sym_DASH] = ACTIONS(1551),
    [anon_sym_STAR] = ACTIONS(1551),
    [anon_sym_SLASH] = ACTIONS(1553),
    [anon_sym_PERCENT] = ACTIONS(1551),
    [anon_sym_LT] = ACTIONS(1553),
    [anon_sym_LT_EQ] = ACTIONS(1551),
    [anon_sym_EQ_EQ] = ACTIONS(1551),
    [anon_sym_BANG_EQ] = ACTIONS(1551),
    [anon_sym_GT_EQ] = ACTIONS(1551),
    [anon_sym_GT] = ACTIONS(1553),
    [sym__real_type_suffix] = ACTIONS(1555),
    [sym__exponent_part] = ACTIONS(1557),
    [sym_comment] = ACTIONS(36),
  },
  [633] = {
    [anon_sym_SEMI] = ACTIONS(1551),
    [anon_sym_RBRACE] = ACTIONS(1551),
    [anon_sym_COLON] = ACTIONS(1551),
    [anon_sym_COMMA] = ACTIONS(1551),
    [anon_sym_RPAREN] = ACTIONS(1551),
    [sym_params_keyword] = ACTIONS(1551),
    [anon_sym_LBRACK] = ACTIONS(1551),
    [anon_sym_QMARK] = ACTIONS(1551),
    [anon_sym_AMP_AMP] = ACTIONS(1551),
    [anon_sym_PIPE_PIPE] = ACTIONS(1551),
    [anon_sym_GT_GT] = ACTIONS(1551),
    [anon_sym_LT_LT] = ACTIONS(1551),
    [anon_sym_AMP] = ACTIONS(1553),
    [anon_sym_CARET] = ACTIONS(1551),
    [anon_sym_PIPE] = ACTIONS(1553),
    [anon_sym_PLUS] = ACTIONS(1551),
    [anon_sym_DASH] = ACTIONS(1551),
    [anon_sym_STAR] = ACTIONS(1551),
    [anon_sym_SLASH] = ACTIONS(1553),
    [anon_sym_PERCENT] = ACTIONS(1551),
    [anon_sym_LT] = ACTIONS(1553),
    [anon_sym_LT_EQ] = ACTIONS(1551),
    [anon_sym_EQ_EQ] = ACTIONS(1551),
    [anon_sym_BANG_EQ] = ACTIONS(1551),
    [anon_sym_GT_EQ] = ACTIONS(1551),
    [anon_sym_GT] = ACTIONS(1553),
    [sym_comment] = ACTIONS(36),
  },
  [634] = {
    [anon_sym_SEMI] = ACTIONS(1551),
    [anon_sym_RBRACE] = ACTIONS(1551),
    [anon_sym_COLON] = ACTIONS(1551),
    [anon_sym_COMMA] = ACTIONS(1551),
    [anon_sym_RPAREN] = ACTIONS(1551),
    [sym_params_keyword] = ACTIONS(1551),
    [anon_sym_LBRACK] = ACTIONS(1551),
    [anon_sym_QMARK] = ACTIONS(1551),
    [anon_sym_AMP_AMP] = ACTIONS(1551),
    [anon_sym_PIPE_PIPE] = ACTIONS(1551),
    [anon_sym_GT_GT] = ACTIONS(1551),
    [anon_sym_LT_LT] = ACTIONS(1551),
    [anon_sym_AMP] = ACTIONS(1553),
    [anon_sym_CARET] = ACTIONS(1551),
    [anon_sym_PIPE] = ACTIONS(1553),
    [anon_sym_PLUS] = ACTIONS(1551),
    [anon_sym_DASH] = ACTIONS(1551),
    [anon_sym_STAR] = ACTIONS(1551),
    [anon_sym_SLASH] = ACTIONS(1553),
    [anon_sym_PERCENT] = ACTIONS(1551),
    [anon_sym_LT] = ACTIONS(1553),
    [anon_sym_LT_EQ] = ACTIONS(1551),
    [anon_sym_EQ_EQ] = ACTIONS(1551),
    [anon_sym_BANG_EQ] = ACTIONS(1551),
    [anon_sym_GT_EQ] = ACTIONS(1551),
    [anon_sym_GT] = ACTIONS(1553),
    [sym__real_type_suffix] = ACTIONS(1555),
    [sym_comment] = ACTIONS(36),
  },
  [635] = {
    [anon_sym_SEMI] = ACTIONS(1559),
    [anon_sym_RBRACE] = ACTIONS(1559),
    [anon_sym_COLON] = ACTIONS(1559),
    [anon_sym_COMMA] = ACTIONS(1559),
    [anon_sym_RPAREN] = ACTIONS(1559),
    [sym_params_keyword] = ACTIONS(1559),
    [anon_sym_LBRACK] = ACTIONS(1559),
    [anon_sym_QMARK] = ACTIONS(1559),
    [anon_sym_AMP_AMP] = ACTIONS(1559),
    [anon_sym_PIPE_PIPE] = ACTIONS(1559),
    [anon_sym_GT_GT] = ACTIONS(1559),
    [anon_sym_LT_LT] = ACTIONS(1559),
    [anon_sym_AMP] = ACTIONS(1561),
    [anon_sym_CARET] = ACTIONS(1559),
    [anon_sym_PIPE] = ACTIONS(1561),
    [anon_sym_PLUS] = ACTIONS(1559),
    [anon_sym_DASH] = ACTIONS(1559),
    [anon_sym_STAR] = ACTIONS(1559),
    [anon_sym_SLASH] = ACTIONS(1561),
    [anon_sym_PERCENT] = ACTIONS(1559),
    [anon_sym_LT] = ACTIONS(1561),
    [anon_sym_LT_EQ] = ACTIONS(1559),
    [anon_sym_EQ_EQ] = ACTIONS(1559),
    [anon_sym_BANG_EQ] = ACTIONS(1559),
    [anon_sym_GT_EQ] = ACTIONS(1559),
    [anon_sym_GT] = ACTIONS(1561),
    [sym_comment] = ACTIONS(36),
  },
  [636] = {
    [sym__unicode_escape_sequence] = STATE(636),
    [sym__simple_escape_sequence] = STATE(636),
    [sym__regular_string_literal_character] = STATE(636),
    [aux_sym__regular_string_literal_repeat1] = STATE(636),
    [sym__hexadecimal_escape_sequence] = ACTIONS(1563),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1563),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1563),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1563),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1563),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1563),
    [anon_sym_BSLASH0] = ACTIONS(1563),
    [anon_sym_BSLASHa] = ACTIONS(1563),
    [anon_sym_BSLASHb] = ACTIONS(1563),
    [anon_sym_BSLASHf] = ACTIONS(1563),
    [anon_sym_BSLASHn] = ACTIONS(1563),
    [anon_sym_BSLASHr] = ACTIONS(1563),
    [anon_sym_BSLASHt] = ACTIONS(1563),
    [anon_sym_BSLASHv] = ACTIONS(1563),
    [anon_sym_DQUOTE] = ACTIONS(1566),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1563),
    [sym_comment] = ACTIONS(983),
  },
  [637] = {
    [anon_sym_SEMI] = ACTIONS(1568),
    [anon_sym_RBRACE] = ACTIONS(1568),
    [anon_sym_COLON] = ACTIONS(1568),
    [anon_sym_COMMA] = ACTIONS(1568),
    [anon_sym_RPAREN] = ACTIONS(1568),
    [sym_params_keyword] = ACTIONS(1568),
    [anon_sym_LBRACK] = ACTIONS(1568),
    [anon_sym_QMARK] = ACTIONS(1568),
    [anon_sym_AMP_AMP] = ACTIONS(1568),
    [anon_sym_PIPE_PIPE] = ACTIONS(1568),
    [anon_sym_GT_GT] = ACTIONS(1568),
    [anon_sym_LT_LT] = ACTIONS(1568),
    [anon_sym_AMP] = ACTIONS(1570),
    [anon_sym_CARET] = ACTIONS(1568),
    [anon_sym_PIPE] = ACTIONS(1570),
    [anon_sym_PLUS] = ACTIONS(1568),
    [anon_sym_DASH] = ACTIONS(1568),
    [anon_sym_STAR] = ACTIONS(1568),
    [anon_sym_SLASH] = ACTIONS(1570),
    [anon_sym_PERCENT] = ACTIONS(1568),
    [anon_sym_LT] = ACTIONS(1570),
    [anon_sym_LT_EQ] = ACTIONS(1568),
    [anon_sym_EQ_EQ] = ACTIONS(1568),
    [anon_sym_BANG_EQ] = ACTIONS(1568),
    [anon_sym_GT_EQ] = ACTIONS(1568),
    [anon_sym_GT] = ACTIONS(1570),
    [sym_comment] = ACTIONS(36),
  },
  [638] = {
    [sym__expression] = STATE(495),
    [sym_parenthesized_expression] = STATE(495),
    [sym_ternary_expression] = STATE(495),
    [sym_binary_expression] = STATE(495),
    [sym_unary_expression] = STATE(495),
    [sym__literal] = STATE(495),
    [sym_boolean_literal] = STATE(495),
    [sym_character_literal] = STATE(495),
    [sym_integer_literal] = STATE(495),
    [sym_real_literal] = STATE(495),
    [sym_string_literal] = STATE(495),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(975),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(975),
    [sym_comment] = ACTIONS(36),
  },
  [639] = {
    [anon_sym_COLON] = ACTIONS(1572),
    [anon_sym_QMARK] = ACTIONS(1574),
    [anon_sym_AMP_AMP] = ACTIONS(1576),
    [anon_sym_PIPE_PIPE] = ACTIONS(1578),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_CARET] = ACTIONS(1584),
    [anon_sym_PIPE] = ACTIONS(1586),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [640] = {
    [anon_sym_RBRACE] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1013),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_AMP] = ACTIONS(1015),
    [anon_sym_CARET] = ACTIONS(1017),
    [anon_sym_PIPE] = ACTIONS(1019),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_SLASH] = ACTIONS(1025),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LT] = ACTIONS(1027),
    [anon_sym_LT_EQ] = ACTIONS(1029),
    [anon_sym_EQ_EQ] = ACTIONS(1031),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_GT_EQ] = ACTIONS(1029),
    [anon_sym_GT] = ACTIONS(1027),
    [sym_comment] = ACTIONS(36),
  },
  [641] = {
    [anon_sym_RBRACE] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1009),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1013),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_AMP] = ACTIONS(1015),
    [anon_sym_CARET] = ACTIONS(1017),
    [anon_sym_PIPE] = ACTIONS(1019),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_SLASH] = ACTIONS(1025),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LT] = ACTIONS(1027),
    [anon_sym_LT_EQ] = ACTIONS(1029),
    [anon_sym_EQ_EQ] = ACTIONS(1031),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_GT_EQ] = ACTIONS(1029),
    [anon_sym_GT] = ACTIONS(1027),
    [sym_comment] = ACTIONS(36),
  },
  [642] = {
    [anon_sym_RBRACE] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_SLASH] = ACTIONS(1025),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [643] = {
    [anon_sym_RBRACE] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1013),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_SLASH] = ACTIONS(1025),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LT] = ACTIONS(1027),
    [anon_sym_LT_EQ] = ACTIONS(1029),
    [anon_sym_EQ_EQ] = ACTIONS(1031),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_GT_EQ] = ACTIONS(1029),
    [anon_sym_GT] = ACTIONS(1027),
    [sym_comment] = ACTIONS(36),
  },
  [644] = {
    [anon_sym_RBRACE] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1013),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_AMP] = ACTIONS(1015),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_SLASH] = ACTIONS(1025),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LT] = ACTIONS(1027),
    [anon_sym_LT_EQ] = ACTIONS(1029),
    [anon_sym_EQ_EQ] = ACTIONS(1031),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_GT_EQ] = ACTIONS(1029),
    [anon_sym_GT] = ACTIONS(1027),
    [sym_comment] = ACTIONS(36),
  },
  [645] = {
    [anon_sym_RBRACE] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1600),
    [anon_sym_DASH] = ACTIONS(1600),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_SLASH] = ACTIONS(1025),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [646] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_RBRACE] = ACTIONS(1600),
    [anon_sym_COLON] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_RPAREN] = ACTIONS(1600),
    [sym_params_keyword] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1600),
    [anon_sym_DASH] = ACTIONS(1600),
    [anon_sym_STAR] = ACTIONS(1600),
    [anon_sym_SLASH] = ACTIONS(1602),
    [anon_sym_PERCENT] = ACTIONS(1600),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [647] = {
    [anon_sym_RBRACE] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1013),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_SLASH] = ACTIONS(1025),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [648] = {
    [anon_sym_RBRACE] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1013),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_SLASH] = ACTIONS(1025),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LT] = ACTIONS(1027),
    [anon_sym_LT_EQ] = ACTIONS(1029),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1029),
    [anon_sym_GT] = ACTIONS(1027),
    [sym_comment] = ACTIONS(36),
  },
  [649] = {
    [ts_builtin_sym_end] = ACTIONS(1604),
    [anon_sym_using] = ACTIONS(1604),
    [anon_sym_namespace] = ACTIONS(1604),
    [anon_sym_RBRACE] = ACTIONS(1604),
    [anon_sym_class] = ACTIONS(1604),
    [anon_sym_unsafe] = ACTIONS(1604),
    [anon_sym_abstract] = ACTIONS(1604),
    [anon_sym_sealed] = ACTIONS(1604),
    [anon_sym_static] = ACTIONS(1604),
    [anon_sym_new] = ACTIONS(1604),
    [anon_sym_public] = ACTIONS(1604),
    [anon_sym_protected] = ACTIONS(1604),
    [anon_sym_internal] = ACTIONS(1604),
    [anon_sym_private] = ACTIONS(1604),
    [anon_sym_interface] = ACTIONS(1604),
    [anon_sym_struct] = ACTIONS(1604),
    [anon_sym_enum] = ACTIONS(1604),
    [anon_sym_delegate] = ACTIONS(1604),
    [anon_sym_LBRACK] = ACTIONS(1604),
    [sym_comment] = ACTIONS(36),
  },
  [650] = {
    [ts_builtin_sym_end] = ACTIONS(1604),
    [anon_sym_SEMI] = ACTIONS(1606),
    [anon_sym_using] = ACTIONS(1604),
    [anon_sym_namespace] = ACTIONS(1604),
    [anon_sym_RBRACE] = ACTIONS(1604),
    [anon_sym_class] = ACTIONS(1604),
    [anon_sym_unsafe] = ACTIONS(1604),
    [anon_sym_abstract] = ACTIONS(1604),
    [anon_sym_sealed] = ACTIONS(1604),
    [anon_sym_static] = ACTIONS(1604),
    [anon_sym_new] = ACTIONS(1604),
    [anon_sym_public] = ACTIONS(1604),
    [anon_sym_protected] = ACTIONS(1604),
    [anon_sym_internal] = ACTIONS(1604),
    [anon_sym_private] = ACTIONS(1604),
    [anon_sym_interface] = ACTIONS(1604),
    [anon_sym_struct] = ACTIONS(1604),
    [anon_sym_enum] = ACTIONS(1604),
    [anon_sym_delegate] = ACTIONS(1604),
    [anon_sym_LBRACK] = ACTIONS(1604),
    [sym_comment] = ACTIONS(36),
  },
  [651] = {
    [sym_identifier_name] = ACTIONS(1608),
    [sym_comment] = ACTIONS(36),
  },
  [652] = {
    [aux_sym_array_rank_specifier_repeat1] = STATE(748),
    [anon_sym_COMMA] = ACTIONS(1610),
    [anon_sym_RBRACK] = ACTIONS(1612),
    [sym_comment] = ACTIONS(36),
  },
  [653] = {
    [anon_sym_RBRACK] = ACTIONS(1614),
    [sym_comment] = ACTIONS(36),
  },
  [654] = {
    [sym__attribute_section] = STATE(654),
    [aux_sym__attributes_repeat1] = STATE(654),
    [anon_sym_sbyte] = ACTIONS(668),
    [anon_sym_byte] = ACTIONS(668),
    [anon_sym_short] = ACTIONS(668),
    [anon_sym_ushort] = ACTIONS(668),
    [anon_sym_int] = ACTIONS(668),
    [anon_sym_uint] = ACTIONS(668),
    [anon_sym_long] = ACTIONS(668),
    [anon_sym_ulong] = ACTIONS(668),
    [anon_sym_char] = ACTIONS(668),
    [anon_sym_ref] = ACTIONS(668),
    [anon_sym_out] = ACTIONS(668),
    [anon_sym_this] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(1616),
    [anon_sym_bool] = ACTIONS(668),
    [anon_sym_decimal] = ACTIONS(668),
    [anon_sym_double] = ACTIONS(668),
    [anon_sym_float] = ACTIONS(668),
    [anon_sym_object] = ACTIONS(668),
    [anon_sym_string] = ACTIONS(668),
    [sym_identifier_name] = ACTIONS(668),
    [sym_comment] = ACTIONS(36),
  },
  [655] = {
    [anon_sym_COMMA] = ACTIONS(1619),
    [anon_sym_RPAREN] = ACTIONS(1619),
    [sym_params_keyword] = ACTIONS(1619),
    [anon_sym_LBRACK] = ACTIONS(1619),
    [sym_comment] = ACTIONS(36),
  },
  [656] = {
    [anon_sym_RPAREN] = ACTIONS(1621),
    [sym_comment] = ACTIONS(36),
  },
  [657] = {
    [sym_equals_value_clause] = STATE(750),
    [anon_sym_COMMA] = ACTIONS(1619),
    [anon_sym_RPAREN] = ACTIONS(1619),
    [sym_params_keyword] = ACTIONS(1619),
    [anon_sym_LBRACK] = ACTIONS(1619),
    [anon_sym_EQ] = ACTIONS(1068),
    [sym_comment] = ACTIONS(36),
  },
  [658] = {
    [sym__expression] = STATE(495),
    [sym_parenthesized_expression] = STATE(495),
    [sym_ternary_expression] = STATE(495),
    [sym_binary_expression] = STATE(495),
    [sym_unary_expression] = STATE(495),
    [sym__literal] = STATE(495),
    [sym_boolean_literal] = STATE(495),
    [sym_character_literal] = STATE(495),
    [sym_integer_literal] = STATE(495),
    [sym_real_literal] = STATE(495),
    [sym_string_literal] = STATE(495),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(975),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(975),
    [sym_comment] = ACTIONS(36),
  },
  [659] = {
    [anon_sym_COMMA] = ACTIONS(1005),
    [anon_sym_RPAREN] = ACTIONS(1005),
    [sym_params_keyword] = ACTIONS(1005),
    [anon_sym_LBRACK] = ACTIONS(1005),
    [anon_sym_QMARK] = ACTIONS(1623),
    [anon_sym_AMP_AMP] = ACTIONS(1625),
    [anon_sym_PIPE_PIPE] = ACTIONS(1627),
    [anon_sym_GT_GT] = ACTIONS(1629),
    [anon_sym_LT_LT] = ACTIONS(1629),
    [anon_sym_AMP] = ACTIONS(1631),
    [anon_sym_CARET] = ACTIONS(1633),
    [anon_sym_PIPE] = ACTIONS(1635),
    [anon_sym_PLUS] = ACTIONS(1637),
    [anon_sym_DASH] = ACTIONS(1637),
    [anon_sym_STAR] = ACTIONS(1639),
    [anon_sym_SLASH] = ACTIONS(1641),
    [anon_sym_PERCENT] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(1643),
    [anon_sym_LT_EQ] = ACTIONS(1645),
    [anon_sym_EQ_EQ] = ACTIONS(1647),
    [anon_sym_BANG_EQ] = ACTIONS(1647),
    [anon_sym_GT_EQ] = ACTIONS(1645),
    [anon_sym_GT] = ACTIONS(1643),
    [sym_comment] = ACTIONS(36),
  },
  [660] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1649),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [661] = {
    [ts_builtin_sym_end] = ACTIONS(1651),
    [anon_sym_using] = ACTIONS(1651),
    [anon_sym_namespace] = ACTIONS(1651),
    [anon_sym_RBRACE] = ACTIONS(1651),
    [anon_sym_class] = ACTIONS(1651),
    [anon_sym_unsafe] = ACTIONS(1651),
    [anon_sym_abstract] = ACTIONS(1651),
    [anon_sym_sealed] = ACTIONS(1651),
    [anon_sym_static] = ACTIONS(1651),
    [anon_sym_new] = ACTIONS(1651),
    [anon_sym_public] = ACTIONS(1651),
    [anon_sym_protected] = ACTIONS(1651),
    [anon_sym_internal] = ACTIONS(1651),
    [anon_sym_private] = ACTIONS(1651),
    [anon_sym_interface] = ACTIONS(1651),
    [anon_sym_struct] = ACTIONS(1651),
    [anon_sym_enum] = ACTIONS(1651),
    [anon_sym_delegate] = ACTIONS(1651),
    [anon_sym_LBRACK] = ACTIONS(1651),
    [sym_comment] = ACTIONS(36),
  },
  [662] = {
    [ts_builtin_sym_end] = ACTIONS(1653),
    [anon_sym_using] = ACTIONS(1653),
    [anon_sym_namespace] = ACTIONS(1653),
    [anon_sym_RBRACE] = ACTIONS(1653),
    [anon_sym_class] = ACTIONS(1653),
    [anon_sym_unsafe] = ACTIONS(1653),
    [anon_sym_abstract] = ACTIONS(1653),
    [anon_sym_sealed] = ACTIONS(1653),
    [anon_sym_static] = ACTIONS(1653),
    [anon_sym_new] = ACTIONS(1653),
    [anon_sym_public] = ACTIONS(1653),
    [anon_sym_protected] = ACTIONS(1653),
    [anon_sym_internal] = ACTIONS(1653),
    [anon_sym_private] = ACTIONS(1653),
    [anon_sym_interface] = ACTIONS(1653),
    [anon_sym_struct] = ACTIONS(1653),
    [anon_sym_enum] = ACTIONS(1653),
    [anon_sym_delegate] = ACTIONS(1653),
    [anon_sym_LBRACK] = ACTIONS(1653),
    [sym_comment] = ACTIONS(36),
  },
  [663] = {
    [ts_builtin_sym_end] = ACTIONS(1655),
    [anon_sym_using] = ACTIONS(1655),
    [anon_sym_namespace] = ACTIONS(1655),
    [anon_sym_RBRACE] = ACTIONS(1655),
    [anon_sym_class] = ACTIONS(1655),
    [anon_sym_unsafe] = ACTIONS(1655),
    [anon_sym_abstract] = ACTIONS(1655),
    [anon_sym_sealed] = ACTIONS(1655),
    [anon_sym_static] = ACTIONS(1655),
    [anon_sym_new] = ACTIONS(1655),
    [anon_sym_public] = ACTIONS(1655),
    [anon_sym_protected] = ACTIONS(1655),
    [anon_sym_internal] = ACTIONS(1655),
    [anon_sym_private] = ACTIONS(1655),
    [anon_sym_interface] = ACTIONS(1655),
    [anon_sym_struct] = ACTIONS(1655),
    [anon_sym_enum] = ACTIONS(1655),
    [anon_sym_delegate] = ACTIONS(1655),
    [anon_sym_LBRACK] = ACTIONS(1655),
    [sym_comment] = ACTIONS(36),
  },
  [664] = {
    [aux_sym_enum_declaration_repeat1] = STATE(762),
    [anon_sym_RBRACE] = ACTIONS(1649),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [665] = {
    [anon_sym_RBRACE] = ACTIONS(931),
    [anon_sym_class] = ACTIONS(1657),
    [anon_sym_unsafe] = ACTIONS(1657),
    [anon_sym_abstract] = ACTIONS(1657),
    [anon_sym_sealed] = ACTIONS(1657),
    [anon_sym_static] = ACTIONS(1657),
    [anon_sym_new] = ACTIONS(1657),
    [anon_sym_public] = ACTIONS(1657),
    [anon_sym_protected] = ACTIONS(1657),
    [anon_sym_internal] = ACTIONS(1657),
    [anon_sym_private] = ACTIONS(1657),
    [anon_sym_interface] = ACTIONS(1657),
    [anon_sym_struct] = ACTIONS(1657),
    [anon_sym_enum] = ACTIONS(1657),
    [anon_sym_sbyte] = ACTIONS(1657),
    [anon_sym_byte] = ACTIONS(1657),
    [anon_sym_short] = ACTIONS(1657),
    [anon_sym_ushort] = ACTIONS(1657),
    [anon_sym_int] = ACTIONS(1657),
    [anon_sym_uint] = ACTIONS(1657),
    [anon_sym_long] = ACTIONS(1657),
    [anon_sym_ulong] = ACTIONS(1657),
    [anon_sym_char] = ACTIONS(1657),
    [anon_sym_delegate] = ACTIONS(1657),
    [sym_void_keyword] = ACTIONS(1657),
    [anon_sym_LBRACK] = ACTIONS(931),
    [sym_const_keyword] = ACTIONS(1657),
    [anon_sym_readonly] = ACTIONS(1657),
    [anon_sym_volatile] = ACTIONS(1657),
    [anon_sym_bool] = ACTIONS(1657),
    [anon_sym_decimal] = ACTIONS(1657),
    [anon_sym_double] = ACTIONS(1657),
    [anon_sym_float] = ACTIONS(1657),
    [anon_sym_object] = ACTIONS(1657),
    [anon_sym_string] = ACTIONS(1657),
    [sym_identifier_name] = ACTIONS(1657),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1657),
  },
  [666] = {
    [anon_sym_RBRACE] = ACTIONS(935),
    [anon_sym_class] = ACTIONS(1659),
    [anon_sym_unsafe] = ACTIONS(1659),
    [anon_sym_abstract] = ACTIONS(1659),
    [anon_sym_sealed] = ACTIONS(1659),
    [anon_sym_static] = ACTIONS(1659),
    [anon_sym_new] = ACTIONS(1659),
    [anon_sym_public] = ACTIONS(1659),
    [anon_sym_protected] = ACTIONS(1659),
    [anon_sym_internal] = ACTIONS(1659),
    [anon_sym_private] = ACTIONS(1659),
    [anon_sym_interface] = ACTIONS(1659),
    [anon_sym_struct] = ACTIONS(1659),
    [anon_sym_enum] = ACTIONS(1659),
    [anon_sym_sbyte] = ACTIONS(1659),
    [anon_sym_byte] = ACTIONS(1659),
    [anon_sym_short] = ACTIONS(1659),
    [anon_sym_ushort] = ACTIONS(1659),
    [anon_sym_int] = ACTIONS(1659),
    [anon_sym_uint] = ACTIONS(1659),
    [anon_sym_long] = ACTIONS(1659),
    [anon_sym_ulong] = ACTIONS(1659),
    [anon_sym_char] = ACTIONS(1659),
    [anon_sym_delegate] = ACTIONS(1659),
    [sym_void_keyword] = ACTIONS(1659),
    [anon_sym_LBRACK] = ACTIONS(935),
    [sym_const_keyword] = ACTIONS(1659),
    [anon_sym_readonly] = ACTIONS(1659),
    [anon_sym_volatile] = ACTIONS(1659),
    [anon_sym_bool] = ACTIONS(1659),
    [anon_sym_decimal] = ACTIONS(1659),
    [anon_sym_double] = ACTIONS(1659),
    [anon_sym_float] = ACTIONS(1659),
    [anon_sym_object] = ACTIONS(1659),
    [anon_sym_string] = ACTIONS(1659),
    [sym_identifier_name] = ACTIONS(1659),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1659),
  },
  [667] = {
    [anon_sym_RBRACE] = ACTIONS(967),
    [anon_sym_class] = ACTIONS(1661),
    [anon_sym_unsafe] = ACTIONS(1661),
    [anon_sym_abstract] = ACTIONS(1661),
    [anon_sym_sealed] = ACTIONS(1661),
    [anon_sym_static] = ACTIONS(1661),
    [anon_sym_new] = ACTIONS(1661),
    [anon_sym_public] = ACTIONS(1661),
    [anon_sym_protected] = ACTIONS(1661),
    [anon_sym_internal] = ACTIONS(1661),
    [anon_sym_private] = ACTIONS(1661),
    [anon_sym_interface] = ACTIONS(1661),
    [anon_sym_struct] = ACTIONS(1661),
    [anon_sym_enum] = ACTIONS(1661),
    [anon_sym_sbyte] = ACTIONS(1661),
    [anon_sym_byte] = ACTIONS(1661),
    [anon_sym_short] = ACTIONS(1661),
    [anon_sym_ushort] = ACTIONS(1661),
    [anon_sym_int] = ACTIONS(1661),
    [anon_sym_uint] = ACTIONS(1661),
    [anon_sym_long] = ACTIONS(1661),
    [anon_sym_ulong] = ACTIONS(1661),
    [anon_sym_char] = ACTIONS(1661),
    [anon_sym_delegate] = ACTIONS(1661),
    [sym_void_keyword] = ACTIONS(1661),
    [anon_sym_LBRACK] = ACTIONS(967),
    [sym_const_keyword] = ACTIONS(1661),
    [anon_sym_readonly] = ACTIONS(1661),
    [anon_sym_volatile] = ACTIONS(1661),
    [anon_sym_bool] = ACTIONS(1661),
    [anon_sym_decimal] = ACTIONS(1661),
    [anon_sym_double] = ACTIONS(1661),
    [anon_sym_float] = ACTIONS(1661),
    [anon_sym_object] = ACTIONS(1661),
    [anon_sym_string] = ACTIONS(1661),
    [sym_identifier_name] = ACTIONS(1661),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1661),
  },
  [668] = {
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_class] = ACTIONS(1663),
    [anon_sym_unsafe] = ACTIONS(1663),
    [anon_sym_abstract] = ACTIONS(1663),
    [anon_sym_sealed] = ACTIONS(1663),
    [anon_sym_static] = ACTIONS(1663),
    [anon_sym_new] = ACTIONS(1663),
    [anon_sym_public] = ACTIONS(1663),
    [anon_sym_protected] = ACTIONS(1663),
    [anon_sym_internal] = ACTIONS(1663),
    [anon_sym_private] = ACTIONS(1663),
    [anon_sym_interface] = ACTIONS(1663),
    [anon_sym_struct] = ACTIONS(1663),
    [anon_sym_enum] = ACTIONS(1663),
    [anon_sym_sbyte] = ACTIONS(1663),
    [anon_sym_byte] = ACTIONS(1663),
    [anon_sym_short] = ACTIONS(1663),
    [anon_sym_ushort] = ACTIONS(1663),
    [anon_sym_int] = ACTIONS(1663),
    [anon_sym_uint] = ACTIONS(1663),
    [anon_sym_long] = ACTIONS(1663),
    [anon_sym_ulong] = ACTIONS(1663),
    [anon_sym_char] = ACTIONS(1663),
    [anon_sym_delegate] = ACTIONS(1663),
    [sym_void_keyword] = ACTIONS(1663),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym_const_keyword] = ACTIONS(1663),
    [anon_sym_readonly] = ACTIONS(1663),
    [anon_sym_volatile] = ACTIONS(1663),
    [anon_sym_bool] = ACTIONS(1663),
    [anon_sym_decimal] = ACTIONS(1663),
    [anon_sym_double] = ACTIONS(1663),
    [anon_sym_float] = ACTIONS(1663),
    [anon_sym_object] = ACTIONS(1663),
    [anon_sym_string] = ACTIONS(1663),
    [sym_identifier_name] = ACTIONS(1663),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1663),
  },
  [669] = {
    [anon_sym_SEMI] = ACTIONS(1665),
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_class] = ACTIONS(1663),
    [anon_sym_unsafe] = ACTIONS(1663),
    [anon_sym_abstract] = ACTIONS(1663),
    [anon_sym_sealed] = ACTIONS(1663),
    [anon_sym_static] = ACTIONS(1663),
    [anon_sym_new] = ACTIONS(1663),
    [anon_sym_public] = ACTIONS(1663),
    [anon_sym_protected] = ACTIONS(1663),
    [anon_sym_internal] = ACTIONS(1663),
    [anon_sym_private] = ACTIONS(1663),
    [anon_sym_interface] = ACTIONS(1663),
    [anon_sym_struct] = ACTIONS(1663),
    [anon_sym_enum] = ACTIONS(1663),
    [anon_sym_sbyte] = ACTIONS(1663),
    [anon_sym_byte] = ACTIONS(1663),
    [anon_sym_short] = ACTIONS(1663),
    [anon_sym_ushort] = ACTIONS(1663),
    [anon_sym_int] = ACTIONS(1663),
    [anon_sym_uint] = ACTIONS(1663),
    [anon_sym_long] = ACTIONS(1663),
    [anon_sym_ulong] = ACTIONS(1663),
    [anon_sym_char] = ACTIONS(1663),
    [anon_sym_delegate] = ACTIONS(1663),
    [sym_void_keyword] = ACTIONS(1663),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym_const_keyword] = ACTIONS(1663),
    [anon_sym_readonly] = ACTIONS(1663),
    [anon_sym_volatile] = ACTIONS(1663),
    [anon_sym_bool] = ACTIONS(1663),
    [anon_sym_decimal] = ACTIONS(1663),
    [anon_sym_double] = ACTIONS(1663),
    [anon_sym_float] = ACTIONS(1663),
    [anon_sym_object] = ACTIONS(1663),
    [anon_sym_string] = ACTIONS(1663),
    [sym_identifier_name] = ACTIONS(1663),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1663),
  },
  [670] = {
    [aux_sym_enum_declaration_repeat1] = STATE(765),
    [anon_sym_RBRACE] = ACTIONS(1667),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [671] = {
    [anon_sym_SEMI] = ACTIONS(1005),
    [anon_sym_QMARK] = ACTIONS(1121),
    [anon_sym_AMP_AMP] = ACTIONS(1123),
    [anon_sym_PIPE_PIPE] = ACTIONS(1125),
    [anon_sym_GT_GT] = ACTIONS(1127),
    [anon_sym_LT_LT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1129),
    [anon_sym_CARET] = ACTIONS(1131),
    [anon_sym_PIPE] = ACTIONS(1133),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1141),
    [anon_sym_LT_EQ] = ACTIONS(1143),
    [anon_sym_EQ_EQ] = ACTIONS(1145),
    [anon_sym_BANG_EQ] = ACTIONS(1145),
    [anon_sym_GT_EQ] = ACTIONS(1143),
    [anon_sym_GT] = ACTIONS(1141),
    [sym_comment] = ACTIONS(36),
  },
  [672] = {
    [anon_sym_SEMI] = ACTIONS(1669),
    [anon_sym_RBRACE] = ACTIONS(1669),
    [anon_sym_LPAREN] = ACTIONS(1669),
    [anon_sym_PLUS] = ACTIONS(1671),
    [anon_sym_DASH] = ACTIONS(1671),
    [anon_sym_BANG] = ACTIONS(1669),
    [anon_sym_TILDE] = ACTIONS(1669),
    [anon_sym_DASH_DASH] = ACTIONS(1669),
    [anon_sym_PLUS_PLUS] = ACTIONS(1669),
    [anon_sym_typeof] = ACTIONS(1671),
    [anon_sym_sizeof] = ACTIONS(1671),
    [anon_sym_true] = ACTIONS(1671),
    [anon_sym_false] = ACTIONS(1671),
    [anon_sym_SQUOTE] = ACTIONS(1669),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1671),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1669),
    [sym_null_literal] = ACTIONS(1671),
    [anon_sym_DOT] = ACTIONS(1669),
    [anon_sym_DQUOTE] = ACTIONS(1669),
    [anon_sym_AT_DQUOTE] = ACTIONS(1669),
    [sym_identifier_name] = ACTIONS(1671),
    [sym_comment] = ACTIONS(36),
    [anon_sym_return] = ACTIONS(1671),
  },
  [673] = {
    [anon_sym_SEMI] = ACTIONS(1673),
    [anon_sym_RBRACE] = ACTIONS(1673),
    [anon_sym_LPAREN] = ACTIONS(1673),
    [anon_sym_PLUS] = ACTIONS(1675),
    [anon_sym_DASH] = ACTIONS(1675),
    [anon_sym_BANG] = ACTIONS(1673),
    [anon_sym_TILDE] = ACTIONS(1673),
    [anon_sym_DASH_DASH] = ACTIONS(1673),
    [anon_sym_PLUS_PLUS] = ACTIONS(1673),
    [anon_sym_typeof] = ACTIONS(1675),
    [anon_sym_sizeof] = ACTIONS(1675),
    [anon_sym_true] = ACTIONS(1675),
    [anon_sym_false] = ACTIONS(1675),
    [anon_sym_SQUOTE] = ACTIONS(1673),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1675),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(1673),
    [sym_null_literal] = ACTIONS(1675),
    [anon_sym_DOT] = ACTIONS(1673),
    [anon_sym_DQUOTE] = ACTIONS(1673),
    [anon_sym_AT_DQUOTE] = ACTIONS(1673),
    [sym_identifier_name] = ACTIONS(1675),
    [sym_comment] = ACTIONS(36),
    [anon_sym_return] = ACTIONS(1675),
  },
  [674] = {
    [anon_sym_COLON] = ACTIONS(1677),
    [anon_sym_QMARK] = ACTIONS(1574),
    [anon_sym_AMP_AMP] = ACTIONS(1576),
    [anon_sym_PIPE_PIPE] = ACTIONS(1578),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_CARET] = ACTIONS(1584),
    [anon_sym_PIPE] = ACTIONS(1586),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [675] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1127),
    [anon_sym_LT_LT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1129),
    [anon_sym_CARET] = ACTIONS(1131),
    [anon_sym_PIPE] = ACTIONS(1133),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1141),
    [anon_sym_LT_EQ] = ACTIONS(1143),
    [anon_sym_EQ_EQ] = ACTIONS(1145),
    [anon_sym_BANG_EQ] = ACTIONS(1145),
    [anon_sym_GT_EQ] = ACTIONS(1143),
    [anon_sym_GT] = ACTIONS(1141),
    [sym_comment] = ACTIONS(36),
  },
  [676] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1123),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1127),
    [anon_sym_LT_LT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1129),
    [anon_sym_CARET] = ACTIONS(1131),
    [anon_sym_PIPE] = ACTIONS(1133),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1141),
    [anon_sym_LT_EQ] = ACTIONS(1143),
    [anon_sym_EQ_EQ] = ACTIONS(1145),
    [anon_sym_BANG_EQ] = ACTIONS(1145),
    [anon_sym_GT_EQ] = ACTIONS(1143),
    [anon_sym_GT] = ACTIONS(1141),
    [sym_comment] = ACTIONS(36),
  },
  [677] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [678] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1127),
    [anon_sym_LT_LT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1141),
    [anon_sym_LT_EQ] = ACTIONS(1143),
    [anon_sym_EQ_EQ] = ACTIONS(1145),
    [anon_sym_BANG_EQ] = ACTIONS(1145),
    [anon_sym_GT_EQ] = ACTIONS(1143),
    [anon_sym_GT] = ACTIONS(1141),
    [sym_comment] = ACTIONS(36),
  },
  [679] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1127),
    [anon_sym_LT_LT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1129),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1141),
    [anon_sym_LT_EQ] = ACTIONS(1143),
    [anon_sym_EQ_EQ] = ACTIONS(1145),
    [anon_sym_BANG_EQ] = ACTIONS(1145),
    [anon_sym_GT_EQ] = ACTIONS(1143),
    [anon_sym_GT] = ACTIONS(1141),
    [sym_comment] = ACTIONS(36),
  },
  [680] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1600),
    [anon_sym_DASH] = ACTIONS(1600),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [681] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1127),
    [anon_sym_LT_LT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [682] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1127),
    [anon_sym_LT_LT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1141),
    [anon_sym_LT_EQ] = ACTIONS(1143),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1143),
    [anon_sym_GT] = ACTIONS(1141),
    [sym_comment] = ACTIONS(36),
  },
  [683] = {
    [anon_sym_RBRACE] = ACTIONS(1679),
    [anon_sym_class] = ACTIONS(1681),
    [anon_sym_unsafe] = ACTIONS(1681),
    [anon_sym_abstract] = ACTIONS(1681),
    [anon_sym_sealed] = ACTIONS(1681),
    [anon_sym_static] = ACTIONS(1681),
    [anon_sym_new] = ACTIONS(1681),
    [anon_sym_public] = ACTIONS(1681),
    [anon_sym_protected] = ACTIONS(1681),
    [anon_sym_internal] = ACTIONS(1681),
    [anon_sym_private] = ACTIONS(1681),
    [anon_sym_interface] = ACTIONS(1681),
    [anon_sym_struct] = ACTIONS(1681),
    [anon_sym_enum] = ACTIONS(1681),
    [anon_sym_sbyte] = ACTIONS(1681),
    [anon_sym_byte] = ACTIONS(1681),
    [anon_sym_short] = ACTIONS(1681),
    [anon_sym_ushort] = ACTIONS(1681),
    [anon_sym_int] = ACTIONS(1681),
    [anon_sym_uint] = ACTIONS(1681),
    [anon_sym_long] = ACTIONS(1681),
    [anon_sym_ulong] = ACTIONS(1681),
    [anon_sym_char] = ACTIONS(1681),
    [anon_sym_delegate] = ACTIONS(1681),
    [sym_void_keyword] = ACTIONS(1681),
    [anon_sym_LBRACK] = ACTIONS(1679),
    [sym_const_keyword] = ACTIONS(1681),
    [anon_sym_readonly] = ACTIONS(1681),
    [anon_sym_volatile] = ACTIONS(1681),
    [anon_sym_bool] = ACTIONS(1681),
    [anon_sym_decimal] = ACTIONS(1681),
    [anon_sym_double] = ACTIONS(1681),
    [anon_sym_float] = ACTIONS(1681),
    [anon_sym_object] = ACTIONS(1681),
    [anon_sym_string] = ACTIONS(1681),
    [sym_identifier_name] = ACTIONS(1681),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1681),
  },
  [684] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1683),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [685] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1685),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [686] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1687),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [687] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1667),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [688] = {
    [sym_enum_member_declaration] = STATE(770),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [689] = {
    [anon_sym_RBRACE] = ACTIONS(1079),
    [anon_sym_class] = ACTIONS(1689),
    [anon_sym_unsafe] = ACTIONS(1689),
    [anon_sym_abstract] = ACTIONS(1689),
    [anon_sym_sealed] = ACTIONS(1689),
    [anon_sym_static] = ACTIONS(1689),
    [anon_sym_new] = ACTIONS(1689),
    [anon_sym_public] = ACTIONS(1689),
    [anon_sym_protected] = ACTIONS(1689),
    [anon_sym_internal] = ACTIONS(1689),
    [anon_sym_private] = ACTIONS(1689),
    [anon_sym_interface] = ACTIONS(1689),
    [anon_sym_struct] = ACTIONS(1689),
    [anon_sym_enum] = ACTIONS(1689),
    [anon_sym_sbyte] = ACTIONS(1689),
    [anon_sym_byte] = ACTIONS(1689),
    [anon_sym_short] = ACTIONS(1689),
    [anon_sym_ushort] = ACTIONS(1689),
    [anon_sym_int] = ACTIONS(1689),
    [anon_sym_uint] = ACTIONS(1689),
    [anon_sym_long] = ACTIONS(1689),
    [anon_sym_ulong] = ACTIONS(1689),
    [anon_sym_char] = ACTIONS(1689),
    [anon_sym_delegate] = ACTIONS(1689),
    [sym_void_keyword] = ACTIONS(1689),
    [anon_sym_LBRACK] = ACTIONS(1079),
    [sym_const_keyword] = ACTIONS(1689),
    [anon_sym_readonly] = ACTIONS(1689),
    [anon_sym_volatile] = ACTIONS(1689),
    [anon_sym_bool] = ACTIONS(1689),
    [anon_sym_decimal] = ACTIONS(1689),
    [anon_sym_double] = ACTIONS(1689),
    [anon_sym_float] = ACTIONS(1689),
    [anon_sym_object] = ACTIONS(1689),
    [anon_sym_string] = ACTIONS(1689),
    [sym_identifier_name] = ACTIONS(1689),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1689),
  },
  [690] = {
    [sym_statement_block] = STATE(771),
    [anon_sym_LBRACE] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [691] = {
    [sym__type_declaration] = STATE(772),
    [sym_class_declaration] = STATE(772),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(772),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(772),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(772),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(772),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(772),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(772),
    [sym_method_declaration] = STATE(772),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(772),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1683),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [692] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(773),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(773),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1685),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [693] = {
    [sym__type_declaration] = STATE(774),
    [sym_class_declaration] = STATE(774),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(774),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(774),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(774),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(774),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(774),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(774),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1687),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [694] = {
    [anon_sym_LBRACE] = ACTIONS(1691),
    [sym_comment] = ACTIONS(36),
  },
  [695] = {
    [anon_sym_SEMI] = ACTIONS(1693),
    [sym_comment] = ACTIONS(36),
  },
  [696] = {
    [anon_sym_RBRACE] = ACTIONS(1695),
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
    [anon_sym_sbyte] = ACTIONS(1697),
    [anon_sym_byte] = ACTIONS(1697),
    [anon_sym_short] = ACTIONS(1697),
    [anon_sym_ushort] = ACTIONS(1697),
    [anon_sym_int] = ACTIONS(1697),
    [anon_sym_uint] = ACTIONS(1697),
    [anon_sym_long] = ACTIONS(1697),
    [anon_sym_ulong] = ACTIONS(1697),
    [anon_sym_char] = ACTIONS(1697),
    [anon_sym_delegate] = ACTIONS(1697),
    [sym_void_keyword] = ACTIONS(1697),
    [anon_sym_LBRACK] = ACTIONS(1695),
    [sym_const_keyword] = ACTIONS(1697),
    [anon_sym_readonly] = ACTIONS(1697),
    [anon_sym_volatile] = ACTIONS(1697),
    [anon_sym_bool] = ACTIONS(1697),
    [anon_sym_decimal] = ACTIONS(1697),
    [anon_sym_double] = ACTIONS(1697),
    [anon_sym_float] = ACTIONS(1697),
    [anon_sym_object] = ACTIONS(1697),
    [anon_sym_string] = ACTIONS(1697),
    [sym_identifier_name] = ACTIONS(1697),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1697),
  },
  [697] = {
    [sym_parameter_list] = STATE(777),
    [anon_sym_LPAREN] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [698] = {
    [anon_sym_COLON] = ACTIONS(1699),
    [anon_sym_QMARK] = ACTIONS(1574),
    [anon_sym_AMP_AMP] = ACTIONS(1576),
    [anon_sym_PIPE_PIPE] = ACTIONS(1578),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_CARET] = ACTIONS(1584),
    [anon_sym_PIPE] = ACTIONS(1586),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [699] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1183),
    [anon_sym_LT_LT] = ACTIONS(1183),
    [anon_sym_AMP] = ACTIONS(1185),
    [anon_sym_CARET] = ACTIONS(1187),
    [anon_sym_PIPE] = ACTIONS(1189),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1197),
    [anon_sym_LT_EQ] = ACTIONS(1199),
    [anon_sym_EQ_EQ] = ACTIONS(1201),
    [anon_sym_BANG_EQ] = ACTIONS(1201),
    [anon_sym_GT_EQ] = ACTIONS(1199),
    [anon_sym_GT] = ACTIONS(1197),
    [sym_comment] = ACTIONS(36),
  },
  [700] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1179),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1183),
    [anon_sym_LT_LT] = ACTIONS(1183),
    [anon_sym_AMP] = ACTIONS(1185),
    [anon_sym_CARET] = ACTIONS(1187),
    [anon_sym_PIPE] = ACTIONS(1189),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1197),
    [anon_sym_LT_EQ] = ACTIONS(1199),
    [anon_sym_EQ_EQ] = ACTIONS(1201),
    [anon_sym_BANG_EQ] = ACTIONS(1201),
    [anon_sym_GT_EQ] = ACTIONS(1199),
    [anon_sym_GT] = ACTIONS(1197),
    [sym_comment] = ACTIONS(36),
  },
  [701] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [702] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1183),
    [anon_sym_LT_LT] = ACTIONS(1183),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1197),
    [anon_sym_LT_EQ] = ACTIONS(1199),
    [anon_sym_EQ_EQ] = ACTIONS(1201),
    [anon_sym_BANG_EQ] = ACTIONS(1201),
    [anon_sym_GT_EQ] = ACTIONS(1199),
    [anon_sym_GT] = ACTIONS(1197),
    [sym_comment] = ACTIONS(36),
  },
  [703] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1183),
    [anon_sym_LT_LT] = ACTIONS(1183),
    [anon_sym_AMP] = ACTIONS(1185),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1197),
    [anon_sym_LT_EQ] = ACTIONS(1199),
    [anon_sym_EQ_EQ] = ACTIONS(1201),
    [anon_sym_BANG_EQ] = ACTIONS(1201),
    [anon_sym_GT_EQ] = ACTIONS(1199),
    [anon_sym_GT] = ACTIONS(1197),
    [sym_comment] = ACTIONS(36),
  },
  [704] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1600),
    [anon_sym_DASH] = ACTIONS(1600),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [705] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1183),
    [anon_sym_LT_LT] = ACTIONS(1183),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [706] = {
    [anon_sym_SEMI] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1183),
    [anon_sym_LT_LT] = ACTIONS(1183),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1197),
    [anon_sym_LT_EQ] = ACTIONS(1199),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1199),
    [anon_sym_GT] = ACTIONS(1197),
    [sym_comment] = ACTIONS(36),
  },
  [707] = {
    [anon_sym_RBRACE] = ACTIONS(931),
    [anon_sym_class] = ACTIONS(1657),
    [anon_sym_unsafe] = ACTIONS(1657),
    [anon_sym_abstract] = ACTIONS(1657),
    [anon_sym_sealed] = ACTIONS(1657),
    [anon_sym_static] = ACTIONS(1657),
    [anon_sym_new] = ACTIONS(1657),
    [anon_sym_public] = ACTIONS(1657),
    [anon_sym_protected] = ACTIONS(1657),
    [anon_sym_internal] = ACTIONS(1657),
    [anon_sym_private] = ACTIONS(1657),
    [anon_sym_interface] = ACTIONS(1657),
    [anon_sym_struct] = ACTIONS(1657),
    [anon_sym_enum] = ACTIONS(1657),
    [anon_sym_sbyte] = ACTIONS(1657),
    [anon_sym_byte] = ACTIONS(1657),
    [anon_sym_short] = ACTIONS(1657),
    [anon_sym_ushort] = ACTIONS(1657),
    [anon_sym_int] = ACTIONS(1657),
    [anon_sym_uint] = ACTIONS(1657),
    [anon_sym_long] = ACTIONS(1657),
    [anon_sym_ulong] = ACTIONS(1657),
    [anon_sym_char] = ACTIONS(1657),
    [anon_sym_delegate] = ACTIONS(1657),
    [anon_sym_LBRACK] = ACTIONS(931),
    [sym_const_keyword] = ACTIONS(1657),
    [anon_sym_readonly] = ACTIONS(1657),
    [anon_sym_volatile] = ACTIONS(1657),
    [anon_sym_bool] = ACTIONS(1657),
    [anon_sym_decimal] = ACTIONS(1657),
    [anon_sym_double] = ACTIONS(1657),
    [anon_sym_float] = ACTIONS(1657),
    [anon_sym_object] = ACTIONS(1657),
    [anon_sym_string] = ACTIONS(1657),
    [sym_identifier_name] = ACTIONS(1657),
    [sym_comment] = ACTIONS(36),
  },
  [708] = {
    [anon_sym_RBRACE] = ACTIONS(935),
    [anon_sym_class] = ACTIONS(1659),
    [anon_sym_unsafe] = ACTIONS(1659),
    [anon_sym_abstract] = ACTIONS(1659),
    [anon_sym_sealed] = ACTIONS(1659),
    [anon_sym_static] = ACTIONS(1659),
    [anon_sym_new] = ACTIONS(1659),
    [anon_sym_public] = ACTIONS(1659),
    [anon_sym_protected] = ACTIONS(1659),
    [anon_sym_internal] = ACTIONS(1659),
    [anon_sym_private] = ACTIONS(1659),
    [anon_sym_interface] = ACTIONS(1659),
    [anon_sym_struct] = ACTIONS(1659),
    [anon_sym_enum] = ACTIONS(1659),
    [anon_sym_sbyte] = ACTIONS(1659),
    [anon_sym_byte] = ACTIONS(1659),
    [anon_sym_short] = ACTIONS(1659),
    [anon_sym_ushort] = ACTIONS(1659),
    [anon_sym_int] = ACTIONS(1659),
    [anon_sym_uint] = ACTIONS(1659),
    [anon_sym_long] = ACTIONS(1659),
    [anon_sym_ulong] = ACTIONS(1659),
    [anon_sym_char] = ACTIONS(1659),
    [anon_sym_delegate] = ACTIONS(1659),
    [anon_sym_LBRACK] = ACTIONS(935),
    [sym_const_keyword] = ACTIONS(1659),
    [anon_sym_readonly] = ACTIONS(1659),
    [anon_sym_volatile] = ACTIONS(1659),
    [anon_sym_bool] = ACTIONS(1659),
    [anon_sym_decimal] = ACTIONS(1659),
    [anon_sym_double] = ACTIONS(1659),
    [anon_sym_float] = ACTIONS(1659),
    [anon_sym_object] = ACTIONS(1659),
    [anon_sym_string] = ACTIONS(1659),
    [sym_identifier_name] = ACTIONS(1659),
    [sym_comment] = ACTIONS(36),
  },
  [709] = {
    [anon_sym_RBRACE] = ACTIONS(967),
    [anon_sym_class] = ACTIONS(1661),
    [anon_sym_unsafe] = ACTIONS(1661),
    [anon_sym_abstract] = ACTIONS(1661),
    [anon_sym_sealed] = ACTIONS(1661),
    [anon_sym_static] = ACTIONS(1661),
    [anon_sym_new] = ACTIONS(1661),
    [anon_sym_public] = ACTIONS(1661),
    [anon_sym_protected] = ACTIONS(1661),
    [anon_sym_internal] = ACTIONS(1661),
    [anon_sym_private] = ACTIONS(1661),
    [anon_sym_interface] = ACTIONS(1661),
    [anon_sym_struct] = ACTIONS(1661),
    [anon_sym_enum] = ACTIONS(1661),
    [anon_sym_sbyte] = ACTIONS(1661),
    [anon_sym_byte] = ACTIONS(1661),
    [anon_sym_short] = ACTIONS(1661),
    [anon_sym_ushort] = ACTIONS(1661),
    [anon_sym_int] = ACTIONS(1661),
    [anon_sym_uint] = ACTIONS(1661),
    [anon_sym_long] = ACTIONS(1661),
    [anon_sym_ulong] = ACTIONS(1661),
    [anon_sym_char] = ACTIONS(1661),
    [anon_sym_delegate] = ACTIONS(1661),
    [anon_sym_LBRACK] = ACTIONS(967),
    [sym_const_keyword] = ACTIONS(1661),
    [anon_sym_readonly] = ACTIONS(1661),
    [anon_sym_volatile] = ACTIONS(1661),
    [anon_sym_bool] = ACTIONS(1661),
    [anon_sym_decimal] = ACTIONS(1661),
    [anon_sym_double] = ACTIONS(1661),
    [anon_sym_float] = ACTIONS(1661),
    [anon_sym_object] = ACTIONS(1661),
    [anon_sym_string] = ACTIONS(1661),
    [sym_identifier_name] = ACTIONS(1661),
    [sym_comment] = ACTIONS(36),
  },
  [710] = {
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_class] = ACTIONS(1663),
    [anon_sym_unsafe] = ACTIONS(1663),
    [anon_sym_abstract] = ACTIONS(1663),
    [anon_sym_sealed] = ACTIONS(1663),
    [anon_sym_static] = ACTIONS(1663),
    [anon_sym_new] = ACTIONS(1663),
    [anon_sym_public] = ACTIONS(1663),
    [anon_sym_protected] = ACTIONS(1663),
    [anon_sym_internal] = ACTIONS(1663),
    [anon_sym_private] = ACTIONS(1663),
    [anon_sym_interface] = ACTIONS(1663),
    [anon_sym_struct] = ACTIONS(1663),
    [anon_sym_enum] = ACTIONS(1663),
    [anon_sym_sbyte] = ACTIONS(1663),
    [anon_sym_byte] = ACTIONS(1663),
    [anon_sym_short] = ACTIONS(1663),
    [anon_sym_ushort] = ACTIONS(1663),
    [anon_sym_int] = ACTIONS(1663),
    [anon_sym_uint] = ACTIONS(1663),
    [anon_sym_long] = ACTIONS(1663),
    [anon_sym_ulong] = ACTIONS(1663),
    [anon_sym_char] = ACTIONS(1663),
    [anon_sym_delegate] = ACTIONS(1663),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym_const_keyword] = ACTIONS(1663),
    [anon_sym_readonly] = ACTIONS(1663),
    [anon_sym_volatile] = ACTIONS(1663),
    [anon_sym_bool] = ACTIONS(1663),
    [anon_sym_decimal] = ACTIONS(1663),
    [anon_sym_double] = ACTIONS(1663),
    [anon_sym_float] = ACTIONS(1663),
    [anon_sym_object] = ACTIONS(1663),
    [anon_sym_string] = ACTIONS(1663),
    [sym_identifier_name] = ACTIONS(1663),
    [sym_comment] = ACTIONS(36),
  },
  [711] = {
    [anon_sym_SEMI] = ACTIONS(1701),
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_class] = ACTIONS(1663),
    [anon_sym_unsafe] = ACTIONS(1663),
    [anon_sym_abstract] = ACTIONS(1663),
    [anon_sym_sealed] = ACTIONS(1663),
    [anon_sym_static] = ACTIONS(1663),
    [anon_sym_new] = ACTIONS(1663),
    [anon_sym_public] = ACTIONS(1663),
    [anon_sym_protected] = ACTIONS(1663),
    [anon_sym_internal] = ACTIONS(1663),
    [anon_sym_private] = ACTIONS(1663),
    [anon_sym_interface] = ACTIONS(1663),
    [anon_sym_struct] = ACTIONS(1663),
    [anon_sym_enum] = ACTIONS(1663),
    [anon_sym_sbyte] = ACTIONS(1663),
    [anon_sym_byte] = ACTIONS(1663),
    [anon_sym_short] = ACTIONS(1663),
    [anon_sym_ushort] = ACTIONS(1663),
    [anon_sym_int] = ACTIONS(1663),
    [anon_sym_uint] = ACTIONS(1663),
    [anon_sym_long] = ACTIONS(1663),
    [anon_sym_ulong] = ACTIONS(1663),
    [anon_sym_char] = ACTIONS(1663),
    [anon_sym_delegate] = ACTIONS(1663),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym_const_keyword] = ACTIONS(1663),
    [anon_sym_readonly] = ACTIONS(1663),
    [anon_sym_volatile] = ACTIONS(1663),
    [anon_sym_bool] = ACTIONS(1663),
    [anon_sym_decimal] = ACTIONS(1663),
    [anon_sym_double] = ACTIONS(1663),
    [anon_sym_float] = ACTIONS(1663),
    [anon_sym_object] = ACTIONS(1663),
    [anon_sym_string] = ACTIONS(1663),
    [sym_identifier_name] = ACTIONS(1663),
    [sym_comment] = ACTIONS(36),
  },
  [712] = {
    [aux_sym_enum_declaration_repeat1] = STATE(781),
    [anon_sym_RBRACE] = ACTIONS(1703),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [713] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1705),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [714] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1707),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [715] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1709),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [716] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1703),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [717] = {
    [sym_enum_member_declaration] = STATE(785),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [718] = {
    [anon_sym_RBRACE] = ACTIONS(1079),
    [anon_sym_class] = ACTIONS(1689),
    [anon_sym_unsafe] = ACTIONS(1689),
    [anon_sym_abstract] = ACTIONS(1689),
    [anon_sym_sealed] = ACTIONS(1689),
    [anon_sym_static] = ACTIONS(1689),
    [anon_sym_new] = ACTIONS(1689),
    [anon_sym_public] = ACTIONS(1689),
    [anon_sym_protected] = ACTIONS(1689),
    [anon_sym_internal] = ACTIONS(1689),
    [anon_sym_private] = ACTIONS(1689),
    [anon_sym_interface] = ACTIONS(1689),
    [anon_sym_struct] = ACTIONS(1689),
    [anon_sym_enum] = ACTIONS(1689),
    [anon_sym_sbyte] = ACTIONS(1689),
    [anon_sym_byte] = ACTIONS(1689),
    [anon_sym_short] = ACTIONS(1689),
    [anon_sym_ushort] = ACTIONS(1689),
    [anon_sym_int] = ACTIONS(1689),
    [anon_sym_uint] = ACTIONS(1689),
    [anon_sym_long] = ACTIONS(1689),
    [anon_sym_ulong] = ACTIONS(1689),
    [anon_sym_char] = ACTIONS(1689),
    [anon_sym_delegate] = ACTIONS(1689),
    [anon_sym_LBRACK] = ACTIONS(1079),
    [sym_const_keyword] = ACTIONS(1689),
    [anon_sym_readonly] = ACTIONS(1689),
    [anon_sym_volatile] = ACTIONS(1689),
    [anon_sym_bool] = ACTIONS(1689),
    [anon_sym_decimal] = ACTIONS(1689),
    [anon_sym_double] = ACTIONS(1689),
    [anon_sym_float] = ACTIONS(1689),
    [anon_sym_object] = ACTIONS(1689),
    [anon_sym_string] = ACTIONS(1689),
    [sym_identifier_name] = ACTIONS(1689),
    [sym_comment] = ACTIONS(36),
  },
  [719] = {
    [sym__type_declaration] = STATE(786),
    [sym_class_declaration] = STATE(786),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(786),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(786),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(786),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(786),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(786),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(786),
    [sym_method_declaration] = STATE(786),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(786),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1705),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [720] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(787),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(787),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1707),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [721] = {
    [sym__type_declaration] = STATE(788),
    [sym_class_declaration] = STATE(788),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(788),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(788),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(788),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(788),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(788),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(788),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1709),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [722] = {
    [anon_sym_LBRACE] = ACTIONS(1711),
    [sym_comment] = ACTIONS(36),
  },
  [723] = {
    [anon_sym_SEMI] = ACTIONS(1713),
    [sym_comment] = ACTIONS(36),
  },
  [724] = {
    [anon_sym_COLON] = ACTIONS(1715),
    [anon_sym_QMARK] = ACTIONS(1574),
    [anon_sym_AMP_AMP] = ACTIONS(1576),
    [anon_sym_PIPE_PIPE] = ACTIONS(1578),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_CARET] = ACTIONS(1584),
    [anon_sym_PIPE] = ACTIONS(1586),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [725] = {
    [anon_sym_RPAREN] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1244),
    [anon_sym_LT_LT] = ACTIONS(1244),
    [anon_sym_AMP] = ACTIONS(1246),
    [anon_sym_CARET] = ACTIONS(1248),
    [anon_sym_PIPE] = ACTIONS(1250),
    [anon_sym_PLUS] = ACTIONS(1252),
    [anon_sym_DASH] = ACTIONS(1252),
    [anon_sym_STAR] = ACTIONS(1254),
    [anon_sym_SLASH] = ACTIONS(1256),
    [anon_sym_PERCENT] = ACTIONS(1254),
    [anon_sym_LT] = ACTIONS(1258),
    [anon_sym_LT_EQ] = ACTIONS(1260),
    [anon_sym_EQ_EQ] = ACTIONS(1262),
    [anon_sym_BANG_EQ] = ACTIONS(1262),
    [anon_sym_GT_EQ] = ACTIONS(1260),
    [anon_sym_GT] = ACTIONS(1258),
    [sym_comment] = ACTIONS(36),
  },
  [726] = {
    [anon_sym_RPAREN] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1240),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1244),
    [anon_sym_LT_LT] = ACTIONS(1244),
    [anon_sym_AMP] = ACTIONS(1246),
    [anon_sym_CARET] = ACTIONS(1248),
    [anon_sym_PIPE] = ACTIONS(1250),
    [anon_sym_PLUS] = ACTIONS(1252),
    [anon_sym_DASH] = ACTIONS(1252),
    [anon_sym_STAR] = ACTIONS(1254),
    [anon_sym_SLASH] = ACTIONS(1256),
    [anon_sym_PERCENT] = ACTIONS(1254),
    [anon_sym_LT] = ACTIONS(1258),
    [anon_sym_LT_EQ] = ACTIONS(1260),
    [anon_sym_EQ_EQ] = ACTIONS(1262),
    [anon_sym_BANG_EQ] = ACTIONS(1262),
    [anon_sym_GT_EQ] = ACTIONS(1260),
    [anon_sym_GT] = ACTIONS(1258),
    [sym_comment] = ACTIONS(36),
  },
  [727] = {
    [anon_sym_RPAREN] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1252),
    [anon_sym_DASH] = ACTIONS(1252),
    [anon_sym_STAR] = ACTIONS(1254),
    [anon_sym_SLASH] = ACTIONS(1256),
    [anon_sym_PERCENT] = ACTIONS(1254),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [728] = {
    [anon_sym_RPAREN] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1244),
    [anon_sym_LT_LT] = ACTIONS(1244),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1252),
    [anon_sym_DASH] = ACTIONS(1252),
    [anon_sym_STAR] = ACTIONS(1254),
    [anon_sym_SLASH] = ACTIONS(1256),
    [anon_sym_PERCENT] = ACTIONS(1254),
    [anon_sym_LT] = ACTIONS(1258),
    [anon_sym_LT_EQ] = ACTIONS(1260),
    [anon_sym_EQ_EQ] = ACTIONS(1262),
    [anon_sym_BANG_EQ] = ACTIONS(1262),
    [anon_sym_GT_EQ] = ACTIONS(1260),
    [anon_sym_GT] = ACTIONS(1258),
    [sym_comment] = ACTIONS(36),
  },
  [729] = {
    [anon_sym_RPAREN] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1244),
    [anon_sym_LT_LT] = ACTIONS(1244),
    [anon_sym_AMP] = ACTIONS(1246),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1252),
    [anon_sym_DASH] = ACTIONS(1252),
    [anon_sym_STAR] = ACTIONS(1254),
    [anon_sym_SLASH] = ACTIONS(1256),
    [anon_sym_PERCENT] = ACTIONS(1254),
    [anon_sym_LT] = ACTIONS(1258),
    [anon_sym_LT_EQ] = ACTIONS(1260),
    [anon_sym_EQ_EQ] = ACTIONS(1262),
    [anon_sym_BANG_EQ] = ACTIONS(1262),
    [anon_sym_GT_EQ] = ACTIONS(1260),
    [anon_sym_GT] = ACTIONS(1258),
    [sym_comment] = ACTIONS(36),
  },
  [730] = {
    [anon_sym_RPAREN] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1600),
    [anon_sym_DASH] = ACTIONS(1600),
    [anon_sym_STAR] = ACTIONS(1254),
    [anon_sym_SLASH] = ACTIONS(1256),
    [anon_sym_PERCENT] = ACTIONS(1254),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [731] = {
    [anon_sym_RPAREN] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1244),
    [anon_sym_LT_LT] = ACTIONS(1244),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1252),
    [anon_sym_DASH] = ACTIONS(1252),
    [anon_sym_STAR] = ACTIONS(1254),
    [anon_sym_SLASH] = ACTIONS(1256),
    [anon_sym_PERCENT] = ACTIONS(1254),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [732] = {
    [anon_sym_RPAREN] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1244),
    [anon_sym_LT_LT] = ACTIONS(1244),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1252),
    [anon_sym_DASH] = ACTIONS(1252),
    [anon_sym_STAR] = ACTIONS(1254),
    [anon_sym_SLASH] = ACTIONS(1256),
    [anon_sym_PERCENT] = ACTIONS(1254),
    [anon_sym_LT] = ACTIONS(1258),
    [anon_sym_LT_EQ] = ACTIONS(1260),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1260),
    [anon_sym_GT] = ACTIONS(1258),
    [sym_comment] = ACTIONS(36),
  },
  [733] = {
    [anon_sym_SEMI] = ACTIONS(1717),
    [anon_sym_RBRACE] = ACTIONS(1717),
    [anon_sym_COLON] = ACTIONS(1717),
    [anon_sym_COMMA] = ACTIONS(1717),
    [anon_sym_RPAREN] = ACTIONS(1717),
    [sym_params_keyword] = ACTIONS(1717),
    [anon_sym_LBRACK] = ACTIONS(1717),
    [anon_sym_QMARK] = ACTIONS(1717),
    [anon_sym_AMP_AMP] = ACTIONS(1717),
    [anon_sym_PIPE_PIPE] = ACTIONS(1717),
    [anon_sym_GT_GT] = ACTIONS(1717),
    [anon_sym_LT_LT] = ACTIONS(1717),
    [anon_sym_AMP] = ACTIONS(1719),
    [anon_sym_CARET] = ACTIONS(1717),
    [anon_sym_PIPE] = ACTIONS(1719),
    [anon_sym_PLUS] = ACTIONS(1717),
    [anon_sym_DASH] = ACTIONS(1717),
    [anon_sym_STAR] = ACTIONS(1717),
    [anon_sym_SLASH] = ACTIONS(1719),
    [anon_sym_PERCENT] = ACTIONS(1717),
    [anon_sym_LT] = ACTIONS(1719),
    [anon_sym_LT_EQ] = ACTIONS(1717),
    [anon_sym_EQ_EQ] = ACTIONS(1717),
    [anon_sym_BANG_EQ] = ACTIONS(1717),
    [anon_sym_GT_EQ] = ACTIONS(1717),
    [anon_sym_GT] = ACTIONS(1719),
    [sym_comment] = ACTIONS(36),
  },
  [734] = {
    [anon_sym_SEMI] = ACTIONS(1717),
    [anon_sym_RBRACE] = ACTIONS(1717),
    [anon_sym_COLON] = ACTIONS(1717),
    [anon_sym_COMMA] = ACTIONS(1717),
    [anon_sym_RPAREN] = ACTIONS(1717),
    [sym_params_keyword] = ACTIONS(1717),
    [anon_sym_LBRACK] = ACTIONS(1717),
    [anon_sym_QMARK] = ACTIONS(1717),
    [anon_sym_AMP_AMP] = ACTIONS(1717),
    [anon_sym_PIPE_PIPE] = ACTIONS(1717),
    [anon_sym_GT_GT] = ACTIONS(1717),
    [anon_sym_LT_LT] = ACTIONS(1717),
    [anon_sym_AMP] = ACTIONS(1719),
    [anon_sym_CARET] = ACTIONS(1717),
    [anon_sym_PIPE] = ACTIONS(1719),
    [anon_sym_PLUS] = ACTIONS(1717),
    [anon_sym_DASH] = ACTIONS(1717),
    [anon_sym_STAR] = ACTIONS(1717),
    [anon_sym_SLASH] = ACTIONS(1719),
    [anon_sym_PERCENT] = ACTIONS(1717),
    [anon_sym_LT] = ACTIONS(1719),
    [anon_sym_LT_EQ] = ACTIONS(1717),
    [anon_sym_EQ_EQ] = ACTIONS(1717),
    [anon_sym_BANG_EQ] = ACTIONS(1717),
    [anon_sym_GT_EQ] = ACTIONS(1717),
    [anon_sym_GT] = ACTIONS(1719),
    [sym__real_type_suffix] = ACTIONS(1721),
    [sym_comment] = ACTIONS(36),
  },
  [735] = {
    [sym__expression] = STATE(793),
    [sym_parenthesized_expression] = STATE(793),
    [sym_ternary_expression] = STATE(793),
    [sym_binary_expression] = STATE(793),
    [sym_unary_expression] = STATE(793),
    [sym__literal] = STATE(793),
    [sym_boolean_literal] = STATE(793),
    [sym_character_literal] = STATE(793),
    [sym_integer_literal] = STATE(793),
    [sym_real_literal] = STATE(793),
    [sym_string_literal] = STATE(793),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(797),
    [anon_sym_DASH] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_DASH_DASH] = ACTIONS(799),
    [anon_sym_PLUS_PLUS] = ACTIONS(799),
    [anon_sym_typeof] = ACTIONS(797),
    [anon_sym_sizeof] = ACTIONS(797),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1723),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1723),
    [sym_comment] = ACTIONS(36),
  },
  [736] = {
    [sym__expression] = STATE(794),
    [sym_parenthesized_expression] = STATE(794),
    [sym_ternary_expression] = STATE(794),
    [sym_binary_expression] = STATE(794),
    [sym_unary_expression] = STATE(794),
    [sym__literal] = STATE(794),
    [sym_boolean_literal] = STATE(794),
    [sym_character_literal] = STATE(794),
    [sym_integer_literal] = STATE(794),
    [sym_real_literal] = STATE(794),
    [sym_string_literal] = STATE(794),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1725),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1725),
    [sym_comment] = ACTIONS(36),
  },
  [737] = {
    [sym__expression] = STATE(795),
    [sym_parenthesized_expression] = STATE(795),
    [sym_ternary_expression] = STATE(795),
    [sym_binary_expression] = STATE(795),
    [sym_unary_expression] = STATE(795),
    [sym__literal] = STATE(795),
    [sym_boolean_literal] = STATE(795),
    [sym_character_literal] = STATE(795),
    [sym_integer_literal] = STATE(795),
    [sym_real_literal] = STATE(795),
    [sym_string_literal] = STATE(795),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1727),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1727),
    [sym_comment] = ACTIONS(36),
  },
  [738] = {
    [sym__expression] = STATE(796),
    [sym_parenthesized_expression] = STATE(796),
    [sym_ternary_expression] = STATE(796),
    [sym_binary_expression] = STATE(796),
    [sym_unary_expression] = STATE(796),
    [sym__literal] = STATE(796),
    [sym_boolean_literal] = STATE(796),
    [sym_character_literal] = STATE(796),
    [sym_integer_literal] = STATE(796),
    [sym_real_literal] = STATE(796),
    [sym_string_literal] = STATE(796),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1729),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1729),
    [sym_comment] = ACTIONS(36),
  },
  [739] = {
    [sym__expression] = STATE(797),
    [sym_parenthesized_expression] = STATE(797),
    [sym_ternary_expression] = STATE(797),
    [sym_binary_expression] = STATE(797),
    [sym_unary_expression] = STATE(797),
    [sym__literal] = STATE(797),
    [sym_boolean_literal] = STATE(797),
    [sym_character_literal] = STATE(797),
    [sym_integer_literal] = STATE(797),
    [sym_real_literal] = STATE(797),
    [sym_string_literal] = STATE(797),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1731),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1731),
    [sym_comment] = ACTIONS(36),
  },
  [740] = {
    [sym__expression] = STATE(798),
    [sym_parenthesized_expression] = STATE(798),
    [sym_ternary_expression] = STATE(798),
    [sym_binary_expression] = STATE(798),
    [sym_unary_expression] = STATE(798),
    [sym__literal] = STATE(798),
    [sym_boolean_literal] = STATE(798),
    [sym_character_literal] = STATE(798),
    [sym_integer_literal] = STATE(798),
    [sym_real_literal] = STATE(798),
    [sym_string_literal] = STATE(798),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1733),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1733),
    [sym_comment] = ACTIONS(36),
  },
  [741] = {
    [sym__expression] = STATE(799),
    [sym_parenthesized_expression] = STATE(799),
    [sym_ternary_expression] = STATE(799),
    [sym_binary_expression] = STATE(799),
    [sym_unary_expression] = STATE(799),
    [sym__literal] = STATE(799),
    [sym_boolean_literal] = STATE(799),
    [sym_character_literal] = STATE(799),
    [sym_integer_literal] = STATE(799),
    [sym_real_literal] = STATE(799),
    [sym_string_literal] = STATE(799),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1735),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1735),
    [sym_comment] = ACTIONS(36),
  },
  [742] = {
    [sym__expression] = STATE(800),
    [sym_parenthesized_expression] = STATE(800),
    [sym_ternary_expression] = STATE(800),
    [sym_binary_expression] = STATE(800),
    [sym_unary_expression] = STATE(800),
    [sym__literal] = STATE(800),
    [sym_boolean_literal] = STATE(800),
    [sym_character_literal] = STATE(800),
    [sym_integer_literal] = STATE(800),
    [sym_real_literal] = STATE(800),
    [sym_string_literal] = STATE(800),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1737),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1737),
    [sym_comment] = ACTIONS(36),
  },
  [743] = {
    [sym__expression] = STATE(646),
    [sym_parenthesized_expression] = STATE(646),
    [sym_ternary_expression] = STATE(646),
    [sym_binary_expression] = STATE(646),
    [sym_unary_expression] = STATE(646),
    [sym__literal] = STATE(646),
    [sym_boolean_literal] = STATE(646),
    [sym_character_literal] = STATE(646),
    [sym_integer_literal] = STATE(646),
    [sym_real_literal] = STATE(646),
    [sym_string_literal] = STATE(646),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1312),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1312),
    [sym_comment] = ACTIONS(36),
  },
  [744] = {
    [sym__expression] = STATE(801),
    [sym_parenthesized_expression] = STATE(801),
    [sym_ternary_expression] = STATE(801),
    [sym_binary_expression] = STATE(801),
    [sym_unary_expression] = STATE(801),
    [sym__literal] = STATE(801),
    [sym_boolean_literal] = STATE(801),
    [sym_character_literal] = STATE(801),
    [sym_integer_literal] = STATE(801),
    [sym_real_literal] = STATE(801),
    [sym_string_literal] = STATE(801),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1739),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1739),
    [sym_comment] = ACTIONS(36),
  },
  [745] = {
    [sym__expression] = STATE(802),
    [sym_parenthesized_expression] = STATE(802),
    [sym_ternary_expression] = STATE(802),
    [sym_binary_expression] = STATE(802),
    [sym_unary_expression] = STATE(802),
    [sym__literal] = STATE(802),
    [sym_boolean_literal] = STATE(802),
    [sym_character_literal] = STATE(802),
    [sym_integer_literal] = STATE(802),
    [sym_real_literal] = STATE(802),
    [sym_string_literal] = STATE(802),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1741),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1741),
    [sym_comment] = ACTIONS(36),
  },
  [746] = {
    [ts_builtin_sym_end] = ACTIONS(1743),
    [anon_sym_using] = ACTIONS(1743),
    [anon_sym_namespace] = ACTIONS(1743),
    [anon_sym_RBRACE] = ACTIONS(1743),
    [anon_sym_class] = ACTIONS(1743),
    [anon_sym_unsafe] = ACTIONS(1743),
    [anon_sym_abstract] = ACTIONS(1743),
    [anon_sym_sealed] = ACTIONS(1743),
    [anon_sym_static] = ACTIONS(1743),
    [anon_sym_new] = ACTIONS(1743),
    [anon_sym_public] = ACTIONS(1743),
    [anon_sym_protected] = ACTIONS(1743),
    [anon_sym_internal] = ACTIONS(1743),
    [anon_sym_private] = ACTIONS(1743),
    [anon_sym_interface] = ACTIONS(1743),
    [anon_sym_struct] = ACTIONS(1743),
    [anon_sym_enum] = ACTIONS(1743),
    [anon_sym_delegate] = ACTIONS(1743),
    [anon_sym_LBRACK] = ACTIONS(1743),
    [sym_comment] = ACTIONS(36),
  },
  [747] = {
    [sym_identifier_name] = ACTIONS(1745),
    [sym_comment] = ACTIONS(36),
  },
  [748] = {
    [aux_sym_array_rank_specifier_repeat1] = STATE(748),
    [anon_sym_COMMA] = ACTIONS(1747),
    [anon_sym_RBRACK] = ACTIONS(1750),
    [sym_comment] = ACTIONS(36),
  },
  [749] = {
    [anon_sym_sbyte] = ACTIONS(320),
    [anon_sym_byte] = ACTIONS(320),
    [anon_sym_short] = ACTIONS(320),
    [anon_sym_ushort] = ACTIONS(320),
    [anon_sym_int] = ACTIONS(320),
    [anon_sym_uint] = ACTIONS(320),
    [anon_sym_long] = ACTIONS(320),
    [anon_sym_ulong] = ACTIONS(320),
    [anon_sym_char] = ACTIONS(320),
    [anon_sym_ref] = ACTIONS(320),
    [anon_sym_out] = ACTIONS(320),
    [anon_sym_this] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(322),
    [anon_sym_bool] = ACTIONS(320),
    [anon_sym_decimal] = ACTIONS(320),
    [anon_sym_double] = ACTIONS(320),
    [anon_sym_float] = ACTIONS(320),
    [anon_sym_object] = ACTIONS(320),
    [anon_sym_string] = ACTIONS(320),
    [sym_identifier_name] = ACTIONS(320),
    [sym_comment] = ACTIONS(36),
  },
  [750] = {
    [anon_sym_COMMA] = ACTIONS(1752),
    [anon_sym_RPAREN] = ACTIONS(1752),
    [sym_params_keyword] = ACTIONS(1752),
    [anon_sym_LBRACK] = ACTIONS(1752),
    [sym_comment] = ACTIONS(36),
  },
  [751] = {
    [sym__expression] = STATE(803),
    [sym_parenthesized_expression] = STATE(803),
    [sym_ternary_expression] = STATE(803),
    [sym_binary_expression] = STATE(803),
    [sym_unary_expression] = STATE(803),
    [sym__literal] = STATE(803),
    [sym_boolean_literal] = STATE(803),
    [sym_character_literal] = STATE(803),
    [sym_integer_literal] = STATE(803),
    [sym_real_literal] = STATE(803),
    [sym_string_literal] = STATE(803),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1754),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1754),
    [sym_comment] = ACTIONS(36),
  },
  [752] = {
    [sym__expression] = STATE(804),
    [sym_parenthesized_expression] = STATE(804),
    [sym_ternary_expression] = STATE(804),
    [sym_binary_expression] = STATE(804),
    [sym_unary_expression] = STATE(804),
    [sym__literal] = STATE(804),
    [sym_boolean_literal] = STATE(804),
    [sym_character_literal] = STATE(804),
    [sym_integer_literal] = STATE(804),
    [sym_real_literal] = STATE(804),
    [sym_string_literal] = STATE(804),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1756),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1756),
    [sym_comment] = ACTIONS(36),
  },
  [753] = {
    [sym__expression] = STATE(805),
    [sym_parenthesized_expression] = STATE(805),
    [sym_ternary_expression] = STATE(805),
    [sym_binary_expression] = STATE(805),
    [sym_unary_expression] = STATE(805),
    [sym__literal] = STATE(805),
    [sym_boolean_literal] = STATE(805),
    [sym_character_literal] = STATE(805),
    [sym_integer_literal] = STATE(805),
    [sym_real_literal] = STATE(805),
    [sym_string_literal] = STATE(805),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1758),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1758),
    [sym_comment] = ACTIONS(36),
  },
  [754] = {
    [sym__expression] = STATE(806),
    [sym_parenthesized_expression] = STATE(806),
    [sym_ternary_expression] = STATE(806),
    [sym_binary_expression] = STATE(806),
    [sym_unary_expression] = STATE(806),
    [sym__literal] = STATE(806),
    [sym_boolean_literal] = STATE(806),
    [sym_character_literal] = STATE(806),
    [sym_integer_literal] = STATE(806),
    [sym_real_literal] = STATE(806),
    [sym_string_literal] = STATE(806),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1760),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1760),
    [sym_comment] = ACTIONS(36),
  },
  [755] = {
    [sym__expression] = STATE(807),
    [sym_parenthesized_expression] = STATE(807),
    [sym_ternary_expression] = STATE(807),
    [sym_binary_expression] = STATE(807),
    [sym_unary_expression] = STATE(807),
    [sym__literal] = STATE(807),
    [sym_boolean_literal] = STATE(807),
    [sym_character_literal] = STATE(807),
    [sym_integer_literal] = STATE(807),
    [sym_real_literal] = STATE(807),
    [sym_string_literal] = STATE(807),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1762),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1762),
    [sym_comment] = ACTIONS(36),
  },
  [756] = {
    [sym__expression] = STATE(808),
    [sym_parenthesized_expression] = STATE(808),
    [sym_ternary_expression] = STATE(808),
    [sym_binary_expression] = STATE(808),
    [sym_unary_expression] = STATE(808),
    [sym__literal] = STATE(808),
    [sym_boolean_literal] = STATE(808),
    [sym_character_literal] = STATE(808),
    [sym_integer_literal] = STATE(808),
    [sym_real_literal] = STATE(808),
    [sym_string_literal] = STATE(808),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1764),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1764),
    [sym_comment] = ACTIONS(36),
  },
  [757] = {
    [sym__expression] = STATE(809),
    [sym_parenthesized_expression] = STATE(809),
    [sym_ternary_expression] = STATE(809),
    [sym_binary_expression] = STATE(809),
    [sym_unary_expression] = STATE(809),
    [sym__literal] = STATE(809),
    [sym_boolean_literal] = STATE(809),
    [sym_character_literal] = STATE(809),
    [sym_integer_literal] = STATE(809),
    [sym_real_literal] = STATE(809),
    [sym_string_literal] = STATE(809),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1766),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1766),
    [sym_comment] = ACTIONS(36),
  },
  [758] = {
    [sym__expression] = STATE(646),
    [sym_parenthesized_expression] = STATE(646),
    [sym_ternary_expression] = STATE(646),
    [sym_binary_expression] = STATE(646),
    [sym_unary_expression] = STATE(646),
    [sym__literal] = STATE(646),
    [sym_boolean_literal] = STATE(646),
    [sym_character_literal] = STATE(646),
    [sym_integer_literal] = STATE(646),
    [sym_real_literal] = STATE(646),
    [sym_string_literal] = STATE(646),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1312),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1312),
    [sym_comment] = ACTIONS(36),
  },
  [759] = {
    [sym__expression] = STATE(810),
    [sym_parenthesized_expression] = STATE(810),
    [sym_ternary_expression] = STATE(810),
    [sym_binary_expression] = STATE(810),
    [sym_unary_expression] = STATE(810),
    [sym__literal] = STATE(810),
    [sym_boolean_literal] = STATE(810),
    [sym_character_literal] = STATE(810),
    [sym_integer_literal] = STATE(810),
    [sym_real_literal] = STATE(810),
    [sym_string_literal] = STATE(810),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1768),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1768),
    [sym_comment] = ACTIONS(36),
  },
  [760] = {
    [sym__expression] = STATE(811),
    [sym_parenthesized_expression] = STATE(811),
    [sym_ternary_expression] = STATE(811),
    [sym_binary_expression] = STATE(811),
    [sym_unary_expression] = STATE(811),
    [sym__literal] = STATE(811),
    [sym_boolean_literal] = STATE(811),
    [sym_character_literal] = STATE(811),
    [sym_integer_literal] = STATE(811),
    [sym_real_literal] = STATE(811),
    [sym_string_literal] = STATE(811),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1770),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1770),
    [sym_comment] = ACTIONS(36),
  },
  [761] = {
    [ts_builtin_sym_end] = ACTIONS(1743),
    [anon_sym_SEMI] = ACTIONS(1772),
    [anon_sym_using] = ACTIONS(1743),
    [anon_sym_namespace] = ACTIONS(1743),
    [anon_sym_RBRACE] = ACTIONS(1743),
    [anon_sym_class] = ACTIONS(1743),
    [anon_sym_unsafe] = ACTIONS(1743),
    [anon_sym_abstract] = ACTIONS(1743),
    [anon_sym_sealed] = ACTIONS(1743),
    [anon_sym_static] = ACTIONS(1743),
    [anon_sym_new] = ACTIONS(1743),
    [anon_sym_public] = ACTIONS(1743),
    [anon_sym_protected] = ACTIONS(1743),
    [anon_sym_internal] = ACTIONS(1743),
    [anon_sym_private] = ACTIONS(1743),
    [anon_sym_interface] = ACTIONS(1743),
    [anon_sym_struct] = ACTIONS(1743),
    [anon_sym_enum] = ACTIONS(1743),
    [anon_sym_delegate] = ACTIONS(1743),
    [anon_sym_LBRACK] = ACTIONS(1743),
    [sym_comment] = ACTIONS(36),
  },
  [762] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1774),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [763] = {
    [anon_sym_RBRACE] = ACTIONS(1318),
    [anon_sym_class] = ACTIONS(1776),
    [anon_sym_unsafe] = ACTIONS(1776),
    [anon_sym_abstract] = ACTIONS(1776),
    [anon_sym_sealed] = ACTIONS(1776),
    [anon_sym_static] = ACTIONS(1776),
    [anon_sym_new] = ACTIONS(1776),
    [anon_sym_public] = ACTIONS(1776),
    [anon_sym_protected] = ACTIONS(1776),
    [anon_sym_internal] = ACTIONS(1776),
    [anon_sym_private] = ACTIONS(1776),
    [anon_sym_interface] = ACTIONS(1776),
    [anon_sym_struct] = ACTIONS(1776),
    [anon_sym_enum] = ACTIONS(1776),
    [anon_sym_sbyte] = ACTIONS(1776),
    [anon_sym_byte] = ACTIONS(1776),
    [anon_sym_short] = ACTIONS(1776),
    [anon_sym_ushort] = ACTIONS(1776),
    [anon_sym_int] = ACTIONS(1776),
    [anon_sym_uint] = ACTIONS(1776),
    [anon_sym_long] = ACTIONS(1776),
    [anon_sym_ulong] = ACTIONS(1776),
    [anon_sym_char] = ACTIONS(1776),
    [anon_sym_delegate] = ACTIONS(1776),
    [sym_void_keyword] = ACTIONS(1776),
    [anon_sym_LBRACK] = ACTIONS(1318),
    [sym_const_keyword] = ACTIONS(1776),
    [anon_sym_readonly] = ACTIONS(1776),
    [anon_sym_volatile] = ACTIONS(1776),
    [anon_sym_bool] = ACTIONS(1776),
    [anon_sym_decimal] = ACTIONS(1776),
    [anon_sym_double] = ACTIONS(1776),
    [anon_sym_float] = ACTIONS(1776),
    [anon_sym_object] = ACTIONS(1776),
    [anon_sym_string] = ACTIONS(1776),
    [sym_identifier_name] = ACTIONS(1776),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1776),
  },
  [764] = {
    [anon_sym_SEMI] = ACTIONS(1778),
    [anon_sym_RBRACE] = ACTIONS(1318),
    [anon_sym_class] = ACTIONS(1776),
    [anon_sym_unsafe] = ACTIONS(1776),
    [anon_sym_abstract] = ACTIONS(1776),
    [anon_sym_sealed] = ACTIONS(1776),
    [anon_sym_static] = ACTIONS(1776),
    [anon_sym_new] = ACTIONS(1776),
    [anon_sym_public] = ACTIONS(1776),
    [anon_sym_protected] = ACTIONS(1776),
    [anon_sym_internal] = ACTIONS(1776),
    [anon_sym_private] = ACTIONS(1776),
    [anon_sym_interface] = ACTIONS(1776),
    [anon_sym_struct] = ACTIONS(1776),
    [anon_sym_enum] = ACTIONS(1776),
    [anon_sym_sbyte] = ACTIONS(1776),
    [anon_sym_byte] = ACTIONS(1776),
    [anon_sym_short] = ACTIONS(1776),
    [anon_sym_ushort] = ACTIONS(1776),
    [anon_sym_int] = ACTIONS(1776),
    [anon_sym_uint] = ACTIONS(1776),
    [anon_sym_long] = ACTIONS(1776),
    [anon_sym_ulong] = ACTIONS(1776),
    [anon_sym_char] = ACTIONS(1776),
    [anon_sym_delegate] = ACTIONS(1776),
    [sym_void_keyword] = ACTIONS(1776),
    [anon_sym_LBRACK] = ACTIONS(1318),
    [sym_const_keyword] = ACTIONS(1776),
    [anon_sym_readonly] = ACTIONS(1776),
    [anon_sym_volatile] = ACTIONS(1776),
    [anon_sym_bool] = ACTIONS(1776),
    [anon_sym_decimal] = ACTIONS(1776),
    [anon_sym_double] = ACTIONS(1776),
    [anon_sym_float] = ACTIONS(1776),
    [anon_sym_object] = ACTIONS(1776),
    [anon_sym_string] = ACTIONS(1776),
    [sym_identifier_name] = ACTIONS(1776),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1776),
  },
  [765] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1780),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [766] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(882),
    [anon_sym_DASH] = ACTIONS(882),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_DASH_DASH] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(884),
    [anon_sym_typeof] = ACTIONS(882),
    [anon_sym_sizeof] = ACTIONS(882),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1782),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1782),
    [sym_comment] = ACTIONS(36),
  },
  [767] = {
    [anon_sym_RBRACE] = ACTIONS(1351),
    [anon_sym_class] = ACTIONS(1784),
    [anon_sym_unsafe] = ACTIONS(1784),
    [anon_sym_abstract] = ACTIONS(1784),
    [anon_sym_sealed] = ACTIONS(1784),
    [anon_sym_static] = ACTIONS(1784),
    [anon_sym_new] = ACTIONS(1784),
    [anon_sym_public] = ACTIONS(1784),
    [anon_sym_protected] = ACTIONS(1784),
    [anon_sym_internal] = ACTIONS(1784),
    [anon_sym_private] = ACTIONS(1784),
    [anon_sym_interface] = ACTIONS(1784),
    [anon_sym_struct] = ACTIONS(1784),
    [anon_sym_enum] = ACTIONS(1784),
    [anon_sym_sbyte] = ACTIONS(1784),
    [anon_sym_byte] = ACTIONS(1784),
    [anon_sym_short] = ACTIONS(1784),
    [anon_sym_ushort] = ACTIONS(1784),
    [anon_sym_int] = ACTIONS(1784),
    [anon_sym_uint] = ACTIONS(1784),
    [anon_sym_long] = ACTIONS(1784),
    [anon_sym_ulong] = ACTIONS(1784),
    [anon_sym_char] = ACTIONS(1784),
    [anon_sym_delegate] = ACTIONS(1784),
    [sym_void_keyword] = ACTIONS(1784),
    [anon_sym_LBRACK] = ACTIONS(1351),
    [sym_const_keyword] = ACTIONS(1784),
    [anon_sym_readonly] = ACTIONS(1784),
    [anon_sym_volatile] = ACTIONS(1784),
    [anon_sym_bool] = ACTIONS(1784),
    [anon_sym_decimal] = ACTIONS(1784),
    [anon_sym_double] = ACTIONS(1784),
    [anon_sym_float] = ACTIONS(1784),
    [anon_sym_object] = ACTIONS(1784),
    [anon_sym_string] = ACTIONS(1784),
    [sym_identifier_name] = ACTIONS(1784),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1784),
  },
  [768] = {
    [anon_sym_RBRACE] = ACTIONS(1353),
    [anon_sym_class] = ACTIONS(1786),
    [anon_sym_unsafe] = ACTIONS(1786),
    [anon_sym_abstract] = ACTIONS(1786),
    [anon_sym_sealed] = ACTIONS(1786),
    [anon_sym_static] = ACTIONS(1786),
    [anon_sym_new] = ACTIONS(1786),
    [anon_sym_public] = ACTIONS(1786),
    [anon_sym_protected] = ACTIONS(1786),
    [anon_sym_internal] = ACTIONS(1786),
    [anon_sym_private] = ACTIONS(1786),
    [anon_sym_interface] = ACTIONS(1786),
    [anon_sym_struct] = ACTIONS(1786),
    [anon_sym_enum] = ACTIONS(1786),
    [anon_sym_sbyte] = ACTIONS(1786),
    [anon_sym_byte] = ACTIONS(1786),
    [anon_sym_short] = ACTIONS(1786),
    [anon_sym_ushort] = ACTIONS(1786),
    [anon_sym_int] = ACTIONS(1786),
    [anon_sym_uint] = ACTIONS(1786),
    [anon_sym_long] = ACTIONS(1786),
    [anon_sym_ulong] = ACTIONS(1786),
    [anon_sym_char] = ACTIONS(1786),
    [anon_sym_delegate] = ACTIONS(1786),
    [sym_void_keyword] = ACTIONS(1786),
    [anon_sym_LBRACK] = ACTIONS(1353),
    [sym_const_keyword] = ACTIONS(1786),
    [anon_sym_readonly] = ACTIONS(1786),
    [anon_sym_volatile] = ACTIONS(1786),
    [anon_sym_bool] = ACTIONS(1786),
    [anon_sym_decimal] = ACTIONS(1786),
    [anon_sym_double] = ACTIONS(1786),
    [anon_sym_float] = ACTIONS(1786),
    [anon_sym_object] = ACTIONS(1786),
    [anon_sym_string] = ACTIONS(1786),
    [sym_identifier_name] = ACTIONS(1786),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1786),
  },
  [769] = {
    [anon_sym_RBRACE] = ACTIONS(1355),
    [anon_sym_class] = ACTIONS(1788),
    [anon_sym_unsafe] = ACTIONS(1788),
    [anon_sym_abstract] = ACTIONS(1788),
    [anon_sym_sealed] = ACTIONS(1788),
    [anon_sym_static] = ACTIONS(1788),
    [anon_sym_new] = ACTIONS(1788),
    [anon_sym_public] = ACTIONS(1788),
    [anon_sym_protected] = ACTIONS(1788),
    [anon_sym_internal] = ACTIONS(1788),
    [anon_sym_private] = ACTIONS(1788),
    [anon_sym_interface] = ACTIONS(1788),
    [anon_sym_struct] = ACTIONS(1788),
    [anon_sym_enum] = ACTIONS(1788),
    [anon_sym_sbyte] = ACTIONS(1788),
    [anon_sym_byte] = ACTIONS(1788),
    [anon_sym_short] = ACTIONS(1788),
    [anon_sym_ushort] = ACTIONS(1788),
    [anon_sym_int] = ACTIONS(1788),
    [anon_sym_uint] = ACTIONS(1788),
    [anon_sym_long] = ACTIONS(1788),
    [anon_sym_ulong] = ACTIONS(1788),
    [anon_sym_char] = ACTIONS(1788),
    [anon_sym_delegate] = ACTIONS(1788),
    [sym_void_keyword] = ACTIONS(1788),
    [anon_sym_LBRACK] = ACTIONS(1355),
    [sym_const_keyword] = ACTIONS(1788),
    [anon_sym_readonly] = ACTIONS(1788),
    [anon_sym_volatile] = ACTIONS(1788),
    [anon_sym_bool] = ACTIONS(1788),
    [anon_sym_decimal] = ACTIONS(1788),
    [anon_sym_double] = ACTIONS(1788),
    [anon_sym_float] = ACTIONS(1788),
    [anon_sym_object] = ACTIONS(1788),
    [anon_sym_string] = ACTIONS(1788),
    [sym_identifier_name] = ACTIONS(1788),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1788),
  },
  [770] = {
    [aux_sym_enum_declaration_repeat1] = STATE(817),
    [anon_sym_RBRACE] = ACTIONS(1780),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [771] = {
    [anon_sym_RBRACE] = ACTIONS(1790),
    [anon_sym_class] = ACTIONS(1792),
    [anon_sym_unsafe] = ACTIONS(1792),
    [anon_sym_abstract] = ACTIONS(1792),
    [anon_sym_sealed] = ACTIONS(1792),
    [anon_sym_static] = ACTIONS(1792),
    [anon_sym_new] = ACTIONS(1792),
    [anon_sym_public] = ACTIONS(1792),
    [anon_sym_protected] = ACTIONS(1792),
    [anon_sym_internal] = ACTIONS(1792),
    [anon_sym_private] = ACTIONS(1792),
    [anon_sym_interface] = ACTIONS(1792),
    [anon_sym_struct] = ACTIONS(1792),
    [anon_sym_enum] = ACTIONS(1792),
    [anon_sym_sbyte] = ACTIONS(1792),
    [anon_sym_byte] = ACTIONS(1792),
    [anon_sym_short] = ACTIONS(1792),
    [anon_sym_ushort] = ACTIONS(1792),
    [anon_sym_int] = ACTIONS(1792),
    [anon_sym_uint] = ACTIONS(1792),
    [anon_sym_long] = ACTIONS(1792),
    [anon_sym_ulong] = ACTIONS(1792),
    [anon_sym_char] = ACTIONS(1792),
    [anon_sym_delegate] = ACTIONS(1792),
    [sym_void_keyword] = ACTIONS(1792),
    [anon_sym_LBRACK] = ACTIONS(1790),
    [sym_const_keyword] = ACTIONS(1792),
    [anon_sym_readonly] = ACTIONS(1792),
    [anon_sym_volatile] = ACTIONS(1792),
    [anon_sym_bool] = ACTIONS(1792),
    [anon_sym_decimal] = ACTIONS(1792),
    [anon_sym_double] = ACTIONS(1792),
    [anon_sym_float] = ACTIONS(1792),
    [anon_sym_object] = ACTIONS(1792),
    [anon_sym_string] = ACTIONS(1792),
    [sym_identifier_name] = ACTIONS(1792),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1792),
  },
  [772] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1794),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [773] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1796),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [774] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1798),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [775] = {
    [sym_enum_member_declaration] = STATE(821),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [776] = {
    [anon_sym_RBRACE] = ACTIONS(1363),
    [anon_sym_class] = ACTIONS(1800),
    [anon_sym_unsafe] = ACTIONS(1800),
    [anon_sym_abstract] = ACTIONS(1800),
    [anon_sym_sealed] = ACTIONS(1800),
    [anon_sym_static] = ACTIONS(1800),
    [anon_sym_new] = ACTIONS(1800),
    [anon_sym_public] = ACTIONS(1800),
    [anon_sym_protected] = ACTIONS(1800),
    [anon_sym_internal] = ACTIONS(1800),
    [anon_sym_private] = ACTIONS(1800),
    [anon_sym_interface] = ACTIONS(1800),
    [anon_sym_struct] = ACTIONS(1800),
    [anon_sym_enum] = ACTIONS(1800),
    [anon_sym_sbyte] = ACTIONS(1800),
    [anon_sym_byte] = ACTIONS(1800),
    [anon_sym_short] = ACTIONS(1800),
    [anon_sym_ushort] = ACTIONS(1800),
    [anon_sym_int] = ACTIONS(1800),
    [anon_sym_uint] = ACTIONS(1800),
    [anon_sym_long] = ACTIONS(1800),
    [anon_sym_ulong] = ACTIONS(1800),
    [anon_sym_char] = ACTIONS(1800),
    [anon_sym_delegate] = ACTIONS(1800),
    [sym_void_keyword] = ACTIONS(1800),
    [anon_sym_LBRACK] = ACTIONS(1363),
    [sym_const_keyword] = ACTIONS(1800),
    [anon_sym_readonly] = ACTIONS(1800),
    [anon_sym_volatile] = ACTIONS(1800),
    [anon_sym_bool] = ACTIONS(1800),
    [anon_sym_decimal] = ACTIONS(1800),
    [anon_sym_double] = ACTIONS(1800),
    [anon_sym_float] = ACTIONS(1800),
    [anon_sym_object] = ACTIONS(1800),
    [anon_sym_string] = ACTIONS(1800),
    [sym_identifier_name] = ACTIONS(1800),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1800),
  },
  [777] = {
    [sym_statement_block] = STATE(822),
    [anon_sym_LBRACE] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [778] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(916),
    [anon_sym_TILDE] = ACTIONS(916),
    [anon_sym_DASH_DASH] = ACTIONS(916),
    [anon_sym_PLUS_PLUS] = ACTIONS(916),
    [anon_sym_typeof] = ACTIONS(914),
    [anon_sym_sizeof] = ACTIONS(914),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1802),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1802),
    [sym_comment] = ACTIONS(36),
  },
  [779] = {
    [anon_sym_RBRACE] = ACTIONS(1318),
    [anon_sym_class] = ACTIONS(1776),
    [anon_sym_unsafe] = ACTIONS(1776),
    [anon_sym_abstract] = ACTIONS(1776),
    [anon_sym_sealed] = ACTIONS(1776),
    [anon_sym_static] = ACTIONS(1776),
    [anon_sym_new] = ACTIONS(1776),
    [anon_sym_public] = ACTIONS(1776),
    [anon_sym_protected] = ACTIONS(1776),
    [anon_sym_internal] = ACTIONS(1776),
    [anon_sym_private] = ACTIONS(1776),
    [anon_sym_interface] = ACTIONS(1776),
    [anon_sym_struct] = ACTIONS(1776),
    [anon_sym_enum] = ACTIONS(1776),
    [anon_sym_sbyte] = ACTIONS(1776),
    [anon_sym_byte] = ACTIONS(1776),
    [anon_sym_short] = ACTIONS(1776),
    [anon_sym_ushort] = ACTIONS(1776),
    [anon_sym_int] = ACTIONS(1776),
    [anon_sym_uint] = ACTIONS(1776),
    [anon_sym_long] = ACTIONS(1776),
    [anon_sym_ulong] = ACTIONS(1776),
    [anon_sym_char] = ACTIONS(1776),
    [anon_sym_delegate] = ACTIONS(1776),
    [anon_sym_LBRACK] = ACTIONS(1318),
    [sym_const_keyword] = ACTIONS(1776),
    [anon_sym_readonly] = ACTIONS(1776),
    [anon_sym_volatile] = ACTIONS(1776),
    [anon_sym_bool] = ACTIONS(1776),
    [anon_sym_decimal] = ACTIONS(1776),
    [anon_sym_double] = ACTIONS(1776),
    [anon_sym_float] = ACTIONS(1776),
    [anon_sym_object] = ACTIONS(1776),
    [anon_sym_string] = ACTIONS(1776),
    [sym_identifier_name] = ACTIONS(1776),
    [sym_comment] = ACTIONS(36),
  },
  [780] = {
    [anon_sym_SEMI] = ACTIONS(1804),
    [anon_sym_RBRACE] = ACTIONS(1318),
    [anon_sym_class] = ACTIONS(1776),
    [anon_sym_unsafe] = ACTIONS(1776),
    [anon_sym_abstract] = ACTIONS(1776),
    [anon_sym_sealed] = ACTIONS(1776),
    [anon_sym_static] = ACTIONS(1776),
    [anon_sym_new] = ACTIONS(1776),
    [anon_sym_public] = ACTIONS(1776),
    [anon_sym_protected] = ACTIONS(1776),
    [anon_sym_internal] = ACTIONS(1776),
    [anon_sym_private] = ACTIONS(1776),
    [anon_sym_interface] = ACTIONS(1776),
    [anon_sym_struct] = ACTIONS(1776),
    [anon_sym_enum] = ACTIONS(1776),
    [anon_sym_sbyte] = ACTIONS(1776),
    [anon_sym_byte] = ACTIONS(1776),
    [anon_sym_short] = ACTIONS(1776),
    [anon_sym_ushort] = ACTIONS(1776),
    [anon_sym_int] = ACTIONS(1776),
    [anon_sym_uint] = ACTIONS(1776),
    [anon_sym_long] = ACTIONS(1776),
    [anon_sym_ulong] = ACTIONS(1776),
    [anon_sym_char] = ACTIONS(1776),
    [anon_sym_delegate] = ACTIONS(1776),
    [anon_sym_LBRACK] = ACTIONS(1318),
    [sym_const_keyword] = ACTIONS(1776),
    [anon_sym_readonly] = ACTIONS(1776),
    [anon_sym_volatile] = ACTIONS(1776),
    [anon_sym_bool] = ACTIONS(1776),
    [anon_sym_decimal] = ACTIONS(1776),
    [anon_sym_double] = ACTIONS(1776),
    [anon_sym_float] = ACTIONS(1776),
    [anon_sym_object] = ACTIONS(1776),
    [anon_sym_string] = ACTIONS(1776),
    [sym_identifier_name] = ACTIONS(1776),
    [sym_comment] = ACTIONS(36),
  },
  [781] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1806),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [782] = {
    [anon_sym_RBRACE] = ACTIONS(1351),
    [anon_sym_class] = ACTIONS(1784),
    [anon_sym_unsafe] = ACTIONS(1784),
    [anon_sym_abstract] = ACTIONS(1784),
    [anon_sym_sealed] = ACTIONS(1784),
    [anon_sym_static] = ACTIONS(1784),
    [anon_sym_new] = ACTIONS(1784),
    [anon_sym_public] = ACTIONS(1784),
    [anon_sym_protected] = ACTIONS(1784),
    [anon_sym_internal] = ACTIONS(1784),
    [anon_sym_private] = ACTIONS(1784),
    [anon_sym_interface] = ACTIONS(1784),
    [anon_sym_struct] = ACTIONS(1784),
    [anon_sym_enum] = ACTIONS(1784),
    [anon_sym_sbyte] = ACTIONS(1784),
    [anon_sym_byte] = ACTIONS(1784),
    [anon_sym_short] = ACTIONS(1784),
    [anon_sym_ushort] = ACTIONS(1784),
    [anon_sym_int] = ACTIONS(1784),
    [anon_sym_uint] = ACTIONS(1784),
    [anon_sym_long] = ACTIONS(1784),
    [anon_sym_ulong] = ACTIONS(1784),
    [anon_sym_char] = ACTIONS(1784),
    [anon_sym_delegate] = ACTIONS(1784),
    [anon_sym_LBRACK] = ACTIONS(1351),
    [sym_const_keyword] = ACTIONS(1784),
    [anon_sym_readonly] = ACTIONS(1784),
    [anon_sym_volatile] = ACTIONS(1784),
    [anon_sym_bool] = ACTIONS(1784),
    [anon_sym_decimal] = ACTIONS(1784),
    [anon_sym_double] = ACTIONS(1784),
    [anon_sym_float] = ACTIONS(1784),
    [anon_sym_object] = ACTIONS(1784),
    [anon_sym_string] = ACTIONS(1784),
    [sym_identifier_name] = ACTIONS(1784),
    [sym_comment] = ACTIONS(36),
  },
  [783] = {
    [anon_sym_RBRACE] = ACTIONS(1353),
    [anon_sym_class] = ACTIONS(1786),
    [anon_sym_unsafe] = ACTIONS(1786),
    [anon_sym_abstract] = ACTIONS(1786),
    [anon_sym_sealed] = ACTIONS(1786),
    [anon_sym_static] = ACTIONS(1786),
    [anon_sym_new] = ACTIONS(1786),
    [anon_sym_public] = ACTIONS(1786),
    [anon_sym_protected] = ACTIONS(1786),
    [anon_sym_internal] = ACTIONS(1786),
    [anon_sym_private] = ACTIONS(1786),
    [anon_sym_interface] = ACTIONS(1786),
    [anon_sym_struct] = ACTIONS(1786),
    [anon_sym_enum] = ACTIONS(1786),
    [anon_sym_sbyte] = ACTIONS(1786),
    [anon_sym_byte] = ACTIONS(1786),
    [anon_sym_short] = ACTIONS(1786),
    [anon_sym_ushort] = ACTIONS(1786),
    [anon_sym_int] = ACTIONS(1786),
    [anon_sym_uint] = ACTIONS(1786),
    [anon_sym_long] = ACTIONS(1786),
    [anon_sym_ulong] = ACTIONS(1786),
    [anon_sym_char] = ACTIONS(1786),
    [anon_sym_delegate] = ACTIONS(1786),
    [anon_sym_LBRACK] = ACTIONS(1353),
    [sym_const_keyword] = ACTIONS(1786),
    [anon_sym_readonly] = ACTIONS(1786),
    [anon_sym_volatile] = ACTIONS(1786),
    [anon_sym_bool] = ACTIONS(1786),
    [anon_sym_decimal] = ACTIONS(1786),
    [anon_sym_double] = ACTIONS(1786),
    [anon_sym_float] = ACTIONS(1786),
    [anon_sym_object] = ACTIONS(1786),
    [anon_sym_string] = ACTIONS(1786),
    [sym_identifier_name] = ACTIONS(1786),
    [sym_comment] = ACTIONS(36),
  },
  [784] = {
    [anon_sym_RBRACE] = ACTIONS(1355),
    [anon_sym_class] = ACTIONS(1788),
    [anon_sym_unsafe] = ACTIONS(1788),
    [anon_sym_abstract] = ACTIONS(1788),
    [anon_sym_sealed] = ACTIONS(1788),
    [anon_sym_static] = ACTIONS(1788),
    [anon_sym_new] = ACTIONS(1788),
    [anon_sym_public] = ACTIONS(1788),
    [anon_sym_protected] = ACTIONS(1788),
    [anon_sym_internal] = ACTIONS(1788),
    [anon_sym_private] = ACTIONS(1788),
    [anon_sym_interface] = ACTIONS(1788),
    [anon_sym_struct] = ACTIONS(1788),
    [anon_sym_enum] = ACTIONS(1788),
    [anon_sym_sbyte] = ACTIONS(1788),
    [anon_sym_byte] = ACTIONS(1788),
    [anon_sym_short] = ACTIONS(1788),
    [anon_sym_ushort] = ACTIONS(1788),
    [anon_sym_int] = ACTIONS(1788),
    [anon_sym_uint] = ACTIONS(1788),
    [anon_sym_long] = ACTIONS(1788),
    [anon_sym_ulong] = ACTIONS(1788),
    [anon_sym_char] = ACTIONS(1788),
    [anon_sym_delegate] = ACTIONS(1788),
    [anon_sym_LBRACK] = ACTIONS(1355),
    [sym_const_keyword] = ACTIONS(1788),
    [anon_sym_readonly] = ACTIONS(1788),
    [anon_sym_volatile] = ACTIONS(1788),
    [anon_sym_bool] = ACTIONS(1788),
    [anon_sym_decimal] = ACTIONS(1788),
    [anon_sym_double] = ACTIONS(1788),
    [anon_sym_float] = ACTIONS(1788),
    [anon_sym_object] = ACTIONS(1788),
    [anon_sym_string] = ACTIONS(1788),
    [sym_identifier_name] = ACTIONS(1788),
    [sym_comment] = ACTIONS(36),
  },
  [785] = {
    [aux_sym_enum_declaration_repeat1] = STATE(826),
    [anon_sym_RBRACE] = ACTIONS(1806),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [786] = {
    [sym__type_declaration] = STATE(239),
    [sym_class_declaration] = STATE(239),
    [sym_class_modifiers] = STATE(134),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(239),
    [sym_interface_modifiers] = STATE(135),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(239),
    [sym_struct_modifiers] = STATE(136),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(239),
    [sym_enum_modifiers] = STATE(137),
    [sym_delegate_declaration] = STATE(239),
    [sym_delegate_modifier] = STATE(138),
    [sym_return_type] = STATE(139),
    [sym__attributes] = STATE(140),
    [sym__attribute_section] = STATE(147),
    [sym_field_declaration] = STATE(239),
    [sym_field_modifiers] = STATE(141),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(143),
    [sym__type] = STATE(144),
    [sym_generic_name] = STATE(144),
    [sym_predefined_type] = STATE(144),
    [sym_constructor_declaration] = STATE(239),
    [sym_method_declaration] = STATE(239),
    [sym_method_modifiers] = STATE(145),
    [aux_sym_class_declaration_repeat1] = STATE(239),
    [aux_sym__attributes_repeat1] = STATE(147),
    [anon_sym_RBRACE] = ACTIONS(1808),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_interface] = ACTIONS(260),
    [anon_sym_struct] = ACTIONS(262),
    [anon_sym_enum] = ACTIONS(264),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(266),
    [sym_void_keyword] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_const_keyword] = ACTIONS(268),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(274),
  },
  [787] = {
    [sym__attributes] = STATE(154),
    [sym__attribute_section] = STATE(159),
    [sym_field_declaration] = STATE(251),
    [sym_field_modifiers] = STATE(155),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(156),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_interface_declaration_repeat1] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1810),
    [anon_sym_unsafe] = ACTIONS(270),
    [anon_sym_static] = ACTIONS(270),
    [anon_sym_new] = ACTIONS(270),
    [anon_sym_public] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_internal] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(280),
    [sym_const_keyword] = ACTIONS(282),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [788] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(275),
    [sym_class_modifiers] = STATE(170),
    [sym__class_modifiers] = STATE(17),
    [sym_interface_declaration] = STATE(275),
    [sym_interface_modifiers] = STATE(171),
    [sym__interface_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(275),
    [sym_struct_modifiers] = STATE(172),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(275),
    [sym_enum_modifiers] = STATE(173),
    [sym_delegate_declaration] = STATE(275),
    [sym_delegate_modifier] = STATE(174),
    [sym__attributes] = STATE(175),
    [sym__attribute_section] = STATE(179),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(176),
    [sym__field_modifiers] = STATE(142),
    [sym_variable_declaration] = STATE(177),
    [sym__type] = STATE(157),
    [sym_generic_name] = STATE(157),
    [sym_predefined_type] = STATE(157),
    [aux_sym_struct_declaration_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(179),
    [anon_sym_RBRACE] = ACTIONS(1812),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(252),
    [anon_sym_abstract] = ACTIONS(254),
    [anon_sym_sealed] = ACTIONS(254),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_interface] = ACTIONS(292),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(296),
    [anon_sym_sbyte] = ACTIONS(72),
    [anon_sym_byte] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_delegate] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_const_keyword] = ACTIONS(302),
    [anon_sym_readonly] = ACTIONS(270),
    [anon_sym_volatile] = ACTIONS(270),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_decimal] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [sym_identifier_name] = ACTIONS(76),
    [sym_comment] = ACTIONS(36),
  },
  [789] = {
    [sym_enum_member_declaration] = STATE(830),
    [sym__attributes] = STATE(184),
    [sym__attribute_section] = STATE(185),
    [aux_sym__attributes_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [790] = {
    [anon_sym_RBRACE] = ACTIONS(1363),
    [anon_sym_class] = ACTIONS(1800),
    [anon_sym_unsafe] = ACTIONS(1800),
    [anon_sym_abstract] = ACTIONS(1800),
    [anon_sym_sealed] = ACTIONS(1800),
    [anon_sym_static] = ACTIONS(1800),
    [anon_sym_new] = ACTIONS(1800),
    [anon_sym_public] = ACTIONS(1800),
    [anon_sym_protected] = ACTIONS(1800),
    [anon_sym_internal] = ACTIONS(1800),
    [anon_sym_private] = ACTIONS(1800),
    [anon_sym_interface] = ACTIONS(1800),
    [anon_sym_struct] = ACTIONS(1800),
    [anon_sym_enum] = ACTIONS(1800),
    [anon_sym_sbyte] = ACTIONS(1800),
    [anon_sym_byte] = ACTIONS(1800),
    [anon_sym_short] = ACTIONS(1800),
    [anon_sym_ushort] = ACTIONS(1800),
    [anon_sym_int] = ACTIONS(1800),
    [anon_sym_uint] = ACTIONS(1800),
    [anon_sym_long] = ACTIONS(1800),
    [anon_sym_ulong] = ACTIONS(1800),
    [anon_sym_char] = ACTIONS(1800),
    [anon_sym_delegate] = ACTIONS(1800),
    [anon_sym_LBRACK] = ACTIONS(1363),
    [sym_const_keyword] = ACTIONS(1800),
    [anon_sym_readonly] = ACTIONS(1800),
    [anon_sym_volatile] = ACTIONS(1800),
    [anon_sym_bool] = ACTIONS(1800),
    [anon_sym_decimal] = ACTIONS(1800),
    [anon_sym_double] = ACTIONS(1800),
    [anon_sym_float] = ACTIONS(1800),
    [anon_sym_object] = ACTIONS(1800),
    [anon_sym_string] = ACTIONS(1800),
    [sym_identifier_name] = ACTIONS(1800),
    [sym_comment] = ACTIONS(36),
  },
  [791] = {
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
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_DASH_DASH] = ACTIONS(971),
    [anon_sym_PLUS_PLUS] = ACTIONS(971),
    [anon_sym_typeof] = ACTIONS(969),
    [anon_sym_sizeof] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1814),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1814),
    [sym_comment] = ACTIONS(36),
  },
  [792] = {
    [anon_sym_SEMI] = ACTIONS(1816),
    [anon_sym_RBRACE] = ACTIONS(1816),
    [anon_sym_COLON] = ACTIONS(1816),
    [anon_sym_COMMA] = ACTIONS(1816),
    [anon_sym_RPAREN] = ACTIONS(1816),
    [sym_params_keyword] = ACTIONS(1816),
    [anon_sym_LBRACK] = ACTIONS(1816),
    [anon_sym_QMARK] = ACTIONS(1816),
    [anon_sym_AMP_AMP] = ACTIONS(1816),
    [anon_sym_PIPE_PIPE] = ACTIONS(1816),
    [anon_sym_GT_GT] = ACTIONS(1816),
    [anon_sym_LT_LT] = ACTIONS(1816),
    [anon_sym_AMP] = ACTIONS(1818),
    [anon_sym_CARET] = ACTIONS(1816),
    [anon_sym_PIPE] = ACTIONS(1818),
    [anon_sym_PLUS] = ACTIONS(1816),
    [anon_sym_DASH] = ACTIONS(1816),
    [anon_sym_STAR] = ACTIONS(1816),
    [anon_sym_SLASH] = ACTIONS(1818),
    [anon_sym_PERCENT] = ACTIONS(1816),
    [anon_sym_LT] = ACTIONS(1818),
    [anon_sym_LT_EQ] = ACTIONS(1816),
    [anon_sym_EQ_EQ] = ACTIONS(1816),
    [anon_sym_BANG_EQ] = ACTIONS(1816),
    [anon_sym_GT_EQ] = ACTIONS(1816),
    [anon_sym_GT] = ACTIONS(1818),
    [sym_comment] = ACTIONS(36),
  },
  [793] = {
    [anon_sym_RBRACE] = ACTIONS(1820),
    [anon_sym_COMMA] = ACTIONS(1820),
    [anon_sym_QMARK] = ACTIONS(1007),
    [anon_sym_AMP_AMP] = ACTIONS(1009),
    [anon_sym_PIPE_PIPE] = ACTIONS(1011),
    [anon_sym_GT_GT] = ACTIONS(1013),
    [anon_sym_LT_LT] = ACTIONS(1013),
    [anon_sym_AMP] = ACTIONS(1015),
    [anon_sym_CARET] = ACTIONS(1017),
    [anon_sym_PIPE] = ACTIONS(1019),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_SLASH] = ACTIONS(1025),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LT] = ACTIONS(1027),
    [anon_sym_LT_EQ] = ACTIONS(1029),
    [anon_sym_EQ_EQ] = ACTIONS(1031),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_GT_EQ] = ACTIONS(1029),
    [anon_sym_GT] = ACTIONS(1027),
    [sym_comment] = ACTIONS(36),
  },
  [794] = {
    [anon_sym_COLON] = ACTIONS(1822),
    [anon_sym_QMARK] = ACTIONS(1574),
    [anon_sym_AMP_AMP] = ACTIONS(1576),
    [anon_sym_PIPE_PIPE] = ACTIONS(1578),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_CARET] = ACTIONS(1584),
    [anon_sym_PIPE] = ACTIONS(1586),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [795] = {
    [anon_sym_COLON] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_CARET] = ACTIONS(1584),
    [anon_sym_PIPE] = ACTIONS(1586),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [796] = {
    [anon_sym_COLON] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1576),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_CARET] = ACTIONS(1584),
    [anon_sym_PIPE] = ACTIONS(1586),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [797] = {
    [anon_sym_COLON] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [798] = {
    [anon_sym_COLON] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [799] = {
    [anon_sym_COLON] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [800] = {
    [anon_sym_COLON] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1600),
    [anon_sym_DASH] = ACTIONS(1600),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [801] = {
    [anon_sym_COLON] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [802] = {
    [anon_sym_COLON] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [803] = {
    [anon_sym_COLON] = ACTIONS(1824),
    [anon_sym_QMARK] = ACTIONS(1574),
    [anon_sym_AMP_AMP] = ACTIONS(1576),
    [anon_sym_PIPE_PIPE] = ACTIONS(1578),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_CARET] = ACTIONS(1584),
    [anon_sym_PIPE] = ACTIONS(1586),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [804] = {
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_RPAREN] = ACTIONS(1600),
    [sym_params_keyword] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1629),
    [anon_sym_LT_LT] = ACTIONS(1629),
    [anon_sym_AMP] = ACTIONS(1631),
    [anon_sym_CARET] = ACTIONS(1633),
    [anon_sym_PIPE] = ACTIONS(1635),
    [anon_sym_PLUS] = ACTIONS(1637),
    [anon_sym_DASH] = ACTIONS(1637),
    [anon_sym_STAR] = ACTIONS(1639),
    [anon_sym_SLASH] = ACTIONS(1641),
    [anon_sym_PERCENT] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(1643),
    [anon_sym_LT_EQ] = ACTIONS(1645),
    [anon_sym_EQ_EQ] = ACTIONS(1647),
    [anon_sym_BANG_EQ] = ACTIONS(1647),
    [anon_sym_GT_EQ] = ACTIONS(1645),
    [anon_sym_GT] = ACTIONS(1643),
    [sym_comment] = ACTIONS(36),
  },
  [805] = {
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_RPAREN] = ACTIONS(1600),
    [sym_params_keyword] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1625),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1629),
    [anon_sym_LT_LT] = ACTIONS(1629),
    [anon_sym_AMP] = ACTIONS(1631),
    [anon_sym_CARET] = ACTIONS(1633),
    [anon_sym_PIPE] = ACTIONS(1635),
    [anon_sym_PLUS] = ACTIONS(1637),
    [anon_sym_DASH] = ACTIONS(1637),
    [anon_sym_STAR] = ACTIONS(1639),
    [anon_sym_SLASH] = ACTIONS(1641),
    [anon_sym_PERCENT] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(1643),
    [anon_sym_LT_EQ] = ACTIONS(1645),
    [anon_sym_EQ_EQ] = ACTIONS(1647),
    [anon_sym_BANG_EQ] = ACTIONS(1647),
    [anon_sym_GT_EQ] = ACTIONS(1645),
    [anon_sym_GT] = ACTIONS(1643),
    [sym_comment] = ACTIONS(36),
  },
  [806] = {
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_RPAREN] = ACTIONS(1600),
    [sym_params_keyword] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1637),
    [anon_sym_DASH] = ACTIONS(1637),
    [anon_sym_STAR] = ACTIONS(1639),
    [anon_sym_SLASH] = ACTIONS(1641),
    [anon_sym_PERCENT] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [807] = {
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_RPAREN] = ACTIONS(1600),
    [sym_params_keyword] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1629),
    [anon_sym_LT_LT] = ACTIONS(1629),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1637),
    [anon_sym_DASH] = ACTIONS(1637),
    [anon_sym_STAR] = ACTIONS(1639),
    [anon_sym_SLASH] = ACTIONS(1641),
    [anon_sym_PERCENT] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(1643),
    [anon_sym_LT_EQ] = ACTIONS(1645),
    [anon_sym_EQ_EQ] = ACTIONS(1647),
    [anon_sym_BANG_EQ] = ACTIONS(1647),
    [anon_sym_GT_EQ] = ACTIONS(1645),
    [anon_sym_GT] = ACTIONS(1643),
    [sym_comment] = ACTIONS(36),
  },
  [808] = {
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_RPAREN] = ACTIONS(1600),
    [sym_params_keyword] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1629),
    [anon_sym_LT_LT] = ACTIONS(1629),
    [anon_sym_AMP] = ACTIONS(1631),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1637),
    [anon_sym_DASH] = ACTIONS(1637),
    [anon_sym_STAR] = ACTIONS(1639),
    [anon_sym_SLASH] = ACTIONS(1641),
    [anon_sym_PERCENT] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(1643),
    [anon_sym_LT_EQ] = ACTIONS(1645),
    [anon_sym_EQ_EQ] = ACTIONS(1647),
    [anon_sym_BANG_EQ] = ACTIONS(1647),
    [anon_sym_GT_EQ] = ACTIONS(1645),
    [anon_sym_GT] = ACTIONS(1643),
    [sym_comment] = ACTIONS(36),
  },
  [809] = {
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_RPAREN] = ACTIONS(1600),
    [sym_params_keyword] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1600),
    [anon_sym_LT_LT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1600),
    [anon_sym_DASH] = ACTIONS(1600),
    [anon_sym_STAR] = ACTIONS(1639),
    [anon_sym_SLASH] = ACTIONS(1641),
    [anon_sym_PERCENT] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [810] = {
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_RPAREN] = ACTIONS(1600),
    [sym_params_keyword] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1629),
    [anon_sym_LT_LT] = ACTIONS(1629),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1637),
    [anon_sym_DASH] = ACTIONS(1637),
    [anon_sym_STAR] = ACTIONS(1639),
    [anon_sym_SLASH] = ACTIONS(1641),
    [anon_sym_PERCENT] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LT_EQ] = ACTIONS(1600),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1600),
    [anon_sym_GT] = ACTIONS(1602),
    [sym_comment] = ACTIONS(36),
  },
  [811] = {
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_RPAREN] = ACTIONS(1600),
    [sym_params_keyword] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_QMARK] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [anon_sym_GT_GT] = ACTIONS(1629),
    [anon_sym_LT_LT] = ACTIONS(1629),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_CARET] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(1602),
    [anon_sym_PLUS] = ACTIONS(1637),
    [anon_sym_DASH] = ACTIONS(1637),
    [anon_sym_STAR] = ACTIONS(1639),
    [anon_sym_SLASH] = ACTIONS(1641),
    [anon_sym_PERCENT] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(1643),
    [anon_sym_LT_EQ] = ACTIONS(1645),
    [anon_sym_EQ_EQ] = ACTIONS(1600),
    [anon_sym_BANG_EQ] = ACTIONS(1600),
    [anon_sym_GT_EQ] = ACTIONS(1645),
    [anon_sym_GT] = ACTIONS(1643),
    [sym_comment] = ACTIONS(36),
  },
  [812] = {
    [ts_builtin_sym_end] = ACTIONS(1826),
    [anon_sym_using] = ACTIONS(1826),
    [anon_sym_namespace] = ACTIONS(1826),
    [anon_sym_RBRACE] = ACTIONS(1826),
    [anon_sym_class] = ACTIONS(1826),
    [anon_sym_unsafe] = ACTIONS(1826),
    [anon_sym_abstract] = ACTIONS(1826),
    [anon_sym_sealed] = ACTIONS(1826),
    [anon_sym_static] = ACTIONS(1826),
    [anon_sym_new] = ACTIONS(1826),
    [anon_sym_public] = ACTIONS(1826),
    [anon_sym_protected] = ACTIONS(1826),
    [anon_sym_internal] = ACTIONS(1826),
    [anon_sym_private] = ACTIONS(1826),
    [anon_sym_interface] = ACTIONS(1826),
    [anon_sym_struct] = ACTIONS(1826),
    [anon_sym_enum] = ACTIONS(1826),
    [anon_sym_delegate] = ACTIONS(1826),
    [anon_sym_LBRACK] = ACTIONS(1826),
    [sym_comment] = ACTIONS(36),
  },
  [813] = {
    [ts_builtin_sym_end] = ACTIONS(1826),
    [anon_sym_SEMI] = ACTIONS(1828),
    [anon_sym_using] = ACTIONS(1826),
    [anon_sym_namespace] = ACTIONS(1826),
    [anon_sym_RBRACE] = ACTIONS(1826),
    [anon_sym_class] = ACTIONS(1826),
    [anon_sym_unsafe] = ACTIONS(1826),
    [anon_sym_abstract] = ACTIONS(1826),
    [anon_sym_sealed] = ACTIONS(1826),
    [anon_sym_static] = ACTIONS(1826),
    [anon_sym_new] = ACTIONS(1826),
    [anon_sym_public] = ACTIONS(1826),
    [anon_sym_protected] = ACTIONS(1826),
    [anon_sym_internal] = ACTIONS(1826),
    [anon_sym_private] = ACTIONS(1826),
    [anon_sym_interface] = ACTIONS(1826),
    [anon_sym_struct] = ACTIONS(1826),
    [anon_sym_enum] = ACTIONS(1826),
    [anon_sym_delegate] = ACTIONS(1826),
    [anon_sym_LBRACK] = ACTIONS(1826),
    [sym_comment] = ACTIONS(36),
  },
  [814] = {
    [anon_sym_RBRACE] = ACTIONS(1604),
    [anon_sym_class] = ACTIONS(1830),
    [anon_sym_unsafe] = ACTIONS(1830),
    [anon_sym_abstract] = ACTIONS(1830),
    [anon_sym_sealed] = ACTIONS(1830),
    [anon_sym_static] = ACTIONS(1830),
    [anon_sym_new] = ACTIONS(1830),
    [anon_sym_public] = ACTIONS(1830),
    [anon_sym_protected] = ACTIONS(1830),
    [anon_sym_internal] = ACTIONS(1830),
    [anon_sym_private] = ACTIONS(1830),
    [anon_sym_interface] = ACTIONS(1830),
    [anon_sym_struct] = ACTIONS(1830),
    [anon_sym_enum] = ACTIONS(1830),
    [anon_sym_sbyte] = ACTIONS(1830),
    [anon_sym_byte] = ACTIONS(1830),
    [anon_sym_short] = ACTIONS(1830),
    [anon_sym_ushort] = ACTIONS(1830),
    [anon_sym_int] = ACTIONS(1830),
    [anon_sym_uint] = ACTIONS(1830),
    [anon_sym_long] = ACTIONS(1830),
    [anon_sym_ulong] = ACTIONS(1830),
    [anon_sym_char] = ACTIONS(1830),
    [anon_sym_delegate] = ACTIONS(1830),
    [sym_void_keyword] = ACTIONS(1830),
    [anon_sym_LBRACK] = ACTIONS(1604),
    [sym_const_keyword] = ACTIONS(1830),
    [anon_sym_readonly] = ACTIONS(1830),
    [anon_sym_volatile] = ACTIONS(1830),
    [anon_sym_bool] = ACTIONS(1830),
    [anon_sym_decimal] = ACTIONS(1830),
    [anon_sym_double] = ACTIONS(1830),
    [anon_sym_float] = ACTIONS(1830),
    [anon_sym_object] = ACTIONS(1830),
    [anon_sym_string] = ACTIONS(1830),
    [sym_identifier_name] = ACTIONS(1830),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1830),
  },
  [815] = {
    [anon_sym_SEMI] = ACTIONS(1832),
    [anon_sym_RBRACE] = ACTIONS(1604),
    [anon_sym_class] = ACTIONS(1830),
    [anon_sym_unsafe] = ACTIONS(1830),
    [anon_sym_abstract] = ACTIONS(1830),
    [anon_sym_sealed] = ACTIONS(1830),
    [anon_sym_static] = ACTIONS(1830),
    [anon_sym_new] = ACTIONS(1830),
    [anon_sym_public] = ACTIONS(1830),
    [anon_sym_protected] = ACTIONS(1830),
    [anon_sym_internal] = ACTIONS(1830),
    [anon_sym_private] = ACTIONS(1830),
    [anon_sym_interface] = ACTIONS(1830),
    [anon_sym_struct] = ACTIONS(1830),
    [anon_sym_enum] = ACTIONS(1830),
    [anon_sym_sbyte] = ACTIONS(1830),
    [anon_sym_byte] = ACTIONS(1830),
    [anon_sym_short] = ACTIONS(1830),
    [anon_sym_ushort] = ACTIONS(1830),
    [anon_sym_int] = ACTIONS(1830),
    [anon_sym_uint] = ACTIONS(1830),
    [anon_sym_long] = ACTIONS(1830),
    [anon_sym_ulong] = ACTIONS(1830),
    [anon_sym_char] = ACTIONS(1830),
    [anon_sym_delegate] = ACTIONS(1830),
    [sym_void_keyword] = ACTIONS(1830),
    [anon_sym_LBRACK] = ACTIONS(1604),
    [sym_const_keyword] = ACTIONS(1830),
    [anon_sym_readonly] = ACTIONS(1830),
    [anon_sym_volatile] = ACTIONS(1830),
    [anon_sym_bool] = ACTIONS(1830),
    [anon_sym_decimal] = ACTIONS(1830),
    [anon_sym_double] = ACTIONS(1830),
    [anon_sym_float] = ACTIONS(1830),
    [anon_sym_object] = ACTIONS(1830),
    [anon_sym_string] = ACTIONS(1830),
    [sym_identifier_name] = ACTIONS(1830),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1830),
  },
  [816] = {
    [anon_sym_SEMI] = ACTIONS(1820),
    [anon_sym_QMARK] = ACTIONS(1121),
    [anon_sym_AMP_AMP] = ACTIONS(1123),
    [anon_sym_PIPE_PIPE] = ACTIONS(1125),
    [anon_sym_GT_GT] = ACTIONS(1127),
    [anon_sym_LT_LT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1129),
    [anon_sym_CARET] = ACTIONS(1131),
    [anon_sym_PIPE] = ACTIONS(1133),
    [anon_sym_PLUS] = ACTIONS(1135),
    [anon_sym_DASH] = ACTIONS(1135),
    [anon_sym_STAR] = ACTIONS(1137),
    [anon_sym_SLASH] = ACTIONS(1139),
    [anon_sym_PERCENT] = ACTIONS(1137),
    [anon_sym_LT] = ACTIONS(1141),
    [anon_sym_LT_EQ] = ACTIONS(1143),
    [anon_sym_EQ_EQ] = ACTIONS(1145),
    [anon_sym_BANG_EQ] = ACTIONS(1145),
    [anon_sym_GT_EQ] = ACTIONS(1143),
    [anon_sym_GT] = ACTIONS(1141),
    [sym_comment] = ACTIONS(36),
  },
  [817] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1834),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [818] = {
    [anon_sym_RBRACE] = ACTIONS(1651),
    [anon_sym_class] = ACTIONS(1836),
    [anon_sym_unsafe] = ACTIONS(1836),
    [anon_sym_abstract] = ACTIONS(1836),
    [anon_sym_sealed] = ACTIONS(1836),
    [anon_sym_static] = ACTIONS(1836),
    [anon_sym_new] = ACTIONS(1836),
    [anon_sym_public] = ACTIONS(1836),
    [anon_sym_protected] = ACTIONS(1836),
    [anon_sym_internal] = ACTIONS(1836),
    [anon_sym_private] = ACTIONS(1836),
    [anon_sym_interface] = ACTIONS(1836),
    [anon_sym_struct] = ACTIONS(1836),
    [anon_sym_enum] = ACTIONS(1836),
    [anon_sym_sbyte] = ACTIONS(1836),
    [anon_sym_byte] = ACTIONS(1836),
    [anon_sym_short] = ACTIONS(1836),
    [anon_sym_ushort] = ACTIONS(1836),
    [anon_sym_int] = ACTIONS(1836),
    [anon_sym_uint] = ACTIONS(1836),
    [anon_sym_long] = ACTIONS(1836),
    [anon_sym_ulong] = ACTIONS(1836),
    [anon_sym_char] = ACTIONS(1836),
    [anon_sym_delegate] = ACTIONS(1836),
    [sym_void_keyword] = ACTIONS(1836),
    [anon_sym_LBRACK] = ACTIONS(1651),
    [sym_const_keyword] = ACTIONS(1836),
    [anon_sym_readonly] = ACTIONS(1836),
    [anon_sym_volatile] = ACTIONS(1836),
    [anon_sym_bool] = ACTIONS(1836),
    [anon_sym_decimal] = ACTIONS(1836),
    [anon_sym_double] = ACTIONS(1836),
    [anon_sym_float] = ACTIONS(1836),
    [anon_sym_object] = ACTIONS(1836),
    [anon_sym_string] = ACTIONS(1836),
    [sym_identifier_name] = ACTIONS(1836),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1836),
  },
  [819] = {
    [anon_sym_RBRACE] = ACTIONS(1653),
    [anon_sym_class] = ACTIONS(1838),
    [anon_sym_unsafe] = ACTIONS(1838),
    [anon_sym_abstract] = ACTIONS(1838),
    [anon_sym_sealed] = ACTIONS(1838),
    [anon_sym_static] = ACTIONS(1838),
    [anon_sym_new] = ACTIONS(1838),
    [anon_sym_public] = ACTIONS(1838),
    [anon_sym_protected] = ACTIONS(1838),
    [anon_sym_internal] = ACTIONS(1838),
    [anon_sym_private] = ACTIONS(1838),
    [anon_sym_interface] = ACTIONS(1838),
    [anon_sym_struct] = ACTIONS(1838),
    [anon_sym_enum] = ACTIONS(1838),
    [anon_sym_sbyte] = ACTIONS(1838),
    [anon_sym_byte] = ACTIONS(1838),
    [anon_sym_short] = ACTIONS(1838),
    [anon_sym_ushort] = ACTIONS(1838),
    [anon_sym_int] = ACTIONS(1838),
    [anon_sym_uint] = ACTIONS(1838),
    [anon_sym_long] = ACTIONS(1838),
    [anon_sym_ulong] = ACTIONS(1838),
    [anon_sym_char] = ACTIONS(1838),
    [anon_sym_delegate] = ACTIONS(1838),
    [sym_void_keyword] = ACTIONS(1838),
    [anon_sym_LBRACK] = ACTIONS(1653),
    [sym_const_keyword] = ACTIONS(1838),
    [anon_sym_readonly] = ACTIONS(1838),
    [anon_sym_volatile] = ACTIONS(1838),
    [anon_sym_bool] = ACTIONS(1838),
    [anon_sym_decimal] = ACTIONS(1838),
    [anon_sym_double] = ACTIONS(1838),
    [anon_sym_float] = ACTIONS(1838),
    [anon_sym_object] = ACTIONS(1838),
    [anon_sym_string] = ACTIONS(1838),
    [sym_identifier_name] = ACTIONS(1838),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1838),
  },
  [820] = {
    [anon_sym_RBRACE] = ACTIONS(1655),
    [anon_sym_class] = ACTIONS(1840),
    [anon_sym_unsafe] = ACTIONS(1840),
    [anon_sym_abstract] = ACTIONS(1840),
    [anon_sym_sealed] = ACTIONS(1840),
    [anon_sym_static] = ACTIONS(1840),
    [anon_sym_new] = ACTIONS(1840),
    [anon_sym_public] = ACTIONS(1840),
    [anon_sym_protected] = ACTIONS(1840),
    [anon_sym_internal] = ACTIONS(1840),
    [anon_sym_private] = ACTIONS(1840),
    [anon_sym_interface] = ACTIONS(1840),
    [anon_sym_struct] = ACTIONS(1840),
    [anon_sym_enum] = ACTIONS(1840),
    [anon_sym_sbyte] = ACTIONS(1840),
    [anon_sym_byte] = ACTIONS(1840),
    [anon_sym_short] = ACTIONS(1840),
    [anon_sym_ushort] = ACTIONS(1840),
    [anon_sym_int] = ACTIONS(1840),
    [anon_sym_uint] = ACTIONS(1840),
    [anon_sym_long] = ACTIONS(1840),
    [anon_sym_ulong] = ACTIONS(1840),
    [anon_sym_char] = ACTIONS(1840),
    [anon_sym_delegate] = ACTIONS(1840),
    [sym_void_keyword] = ACTIONS(1840),
    [anon_sym_LBRACK] = ACTIONS(1655),
    [sym_const_keyword] = ACTIONS(1840),
    [anon_sym_readonly] = ACTIONS(1840),
    [anon_sym_volatile] = ACTIONS(1840),
    [anon_sym_bool] = ACTIONS(1840),
    [anon_sym_decimal] = ACTIONS(1840),
    [anon_sym_double] = ACTIONS(1840),
    [anon_sym_float] = ACTIONS(1840),
    [anon_sym_object] = ACTIONS(1840),
    [anon_sym_string] = ACTIONS(1840),
    [sym_identifier_name] = ACTIONS(1840),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1840),
  },
  [821] = {
    [aux_sym_enum_declaration_repeat1] = STATE(837),
    [anon_sym_RBRACE] = ACTIONS(1834),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [822] = {
    [anon_sym_RBRACE] = ACTIONS(1842),
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
    [anon_sym_LBRACK] = ACTIONS(1842),
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
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1844),
  },
  [823] = {
    [anon_sym_SEMI] = ACTIONS(1820),
    [anon_sym_COMMA] = ACTIONS(1820),
    [anon_sym_QMARK] = ACTIONS(1177),
    [anon_sym_AMP_AMP] = ACTIONS(1179),
    [anon_sym_PIPE_PIPE] = ACTIONS(1181),
    [anon_sym_GT_GT] = ACTIONS(1183),
    [anon_sym_LT_LT] = ACTIONS(1183),
    [anon_sym_AMP] = ACTIONS(1185),
    [anon_sym_CARET] = ACTIONS(1187),
    [anon_sym_PIPE] = ACTIONS(1189),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1197),
    [anon_sym_LT_EQ] = ACTIONS(1199),
    [anon_sym_EQ_EQ] = ACTIONS(1201),
    [anon_sym_BANG_EQ] = ACTIONS(1201),
    [anon_sym_GT_EQ] = ACTIONS(1199),
    [anon_sym_GT] = ACTIONS(1197),
    [sym_comment] = ACTIONS(36),
  },
  [824] = {
    [anon_sym_RBRACE] = ACTIONS(1604),
    [anon_sym_class] = ACTIONS(1830),
    [anon_sym_unsafe] = ACTIONS(1830),
    [anon_sym_abstract] = ACTIONS(1830),
    [anon_sym_sealed] = ACTIONS(1830),
    [anon_sym_static] = ACTIONS(1830),
    [anon_sym_new] = ACTIONS(1830),
    [anon_sym_public] = ACTIONS(1830),
    [anon_sym_protected] = ACTIONS(1830),
    [anon_sym_internal] = ACTIONS(1830),
    [anon_sym_private] = ACTIONS(1830),
    [anon_sym_interface] = ACTIONS(1830),
    [anon_sym_struct] = ACTIONS(1830),
    [anon_sym_enum] = ACTIONS(1830),
    [anon_sym_sbyte] = ACTIONS(1830),
    [anon_sym_byte] = ACTIONS(1830),
    [anon_sym_short] = ACTIONS(1830),
    [anon_sym_ushort] = ACTIONS(1830),
    [anon_sym_int] = ACTIONS(1830),
    [anon_sym_uint] = ACTIONS(1830),
    [anon_sym_long] = ACTIONS(1830),
    [anon_sym_ulong] = ACTIONS(1830),
    [anon_sym_char] = ACTIONS(1830),
    [anon_sym_delegate] = ACTIONS(1830),
    [anon_sym_LBRACK] = ACTIONS(1604),
    [sym_const_keyword] = ACTIONS(1830),
    [anon_sym_readonly] = ACTIONS(1830),
    [anon_sym_volatile] = ACTIONS(1830),
    [anon_sym_bool] = ACTIONS(1830),
    [anon_sym_decimal] = ACTIONS(1830),
    [anon_sym_double] = ACTIONS(1830),
    [anon_sym_float] = ACTIONS(1830),
    [anon_sym_object] = ACTIONS(1830),
    [anon_sym_string] = ACTIONS(1830),
    [sym_identifier_name] = ACTIONS(1830),
    [sym_comment] = ACTIONS(36),
  },
  [825] = {
    [anon_sym_SEMI] = ACTIONS(1846),
    [anon_sym_RBRACE] = ACTIONS(1604),
    [anon_sym_class] = ACTIONS(1830),
    [anon_sym_unsafe] = ACTIONS(1830),
    [anon_sym_abstract] = ACTIONS(1830),
    [anon_sym_sealed] = ACTIONS(1830),
    [anon_sym_static] = ACTIONS(1830),
    [anon_sym_new] = ACTIONS(1830),
    [anon_sym_public] = ACTIONS(1830),
    [anon_sym_protected] = ACTIONS(1830),
    [anon_sym_internal] = ACTIONS(1830),
    [anon_sym_private] = ACTIONS(1830),
    [anon_sym_interface] = ACTIONS(1830),
    [anon_sym_struct] = ACTIONS(1830),
    [anon_sym_enum] = ACTIONS(1830),
    [anon_sym_sbyte] = ACTIONS(1830),
    [anon_sym_byte] = ACTIONS(1830),
    [anon_sym_short] = ACTIONS(1830),
    [anon_sym_ushort] = ACTIONS(1830),
    [anon_sym_int] = ACTIONS(1830),
    [anon_sym_uint] = ACTIONS(1830),
    [anon_sym_long] = ACTIONS(1830),
    [anon_sym_ulong] = ACTIONS(1830),
    [anon_sym_char] = ACTIONS(1830),
    [anon_sym_delegate] = ACTIONS(1830),
    [anon_sym_LBRACK] = ACTIONS(1604),
    [sym_const_keyword] = ACTIONS(1830),
    [anon_sym_readonly] = ACTIONS(1830),
    [anon_sym_volatile] = ACTIONS(1830),
    [anon_sym_bool] = ACTIONS(1830),
    [anon_sym_decimal] = ACTIONS(1830),
    [anon_sym_double] = ACTIONS(1830),
    [anon_sym_float] = ACTIONS(1830),
    [anon_sym_object] = ACTIONS(1830),
    [anon_sym_string] = ACTIONS(1830),
    [sym_identifier_name] = ACTIONS(1830),
    [sym_comment] = ACTIONS(36),
  },
  [826] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1848),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [827] = {
    [anon_sym_RBRACE] = ACTIONS(1651),
    [anon_sym_class] = ACTIONS(1836),
    [anon_sym_unsafe] = ACTIONS(1836),
    [anon_sym_abstract] = ACTIONS(1836),
    [anon_sym_sealed] = ACTIONS(1836),
    [anon_sym_static] = ACTIONS(1836),
    [anon_sym_new] = ACTIONS(1836),
    [anon_sym_public] = ACTIONS(1836),
    [anon_sym_protected] = ACTIONS(1836),
    [anon_sym_internal] = ACTIONS(1836),
    [anon_sym_private] = ACTIONS(1836),
    [anon_sym_interface] = ACTIONS(1836),
    [anon_sym_struct] = ACTIONS(1836),
    [anon_sym_enum] = ACTIONS(1836),
    [anon_sym_sbyte] = ACTIONS(1836),
    [anon_sym_byte] = ACTIONS(1836),
    [anon_sym_short] = ACTIONS(1836),
    [anon_sym_ushort] = ACTIONS(1836),
    [anon_sym_int] = ACTIONS(1836),
    [anon_sym_uint] = ACTIONS(1836),
    [anon_sym_long] = ACTIONS(1836),
    [anon_sym_ulong] = ACTIONS(1836),
    [anon_sym_char] = ACTIONS(1836),
    [anon_sym_delegate] = ACTIONS(1836),
    [anon_sym_LBRACK] = ACTIONS(1651),
    [sym_const_keyword] = ACTIONS(1836),
    [anon_sym_readonly] = ACTIONS(1836),
    [anon_sym_volatile] = ACTIONS(1836),
    [anon_sym_bool] = ACTIONS(1836),
    [anon_sym_decimal] = ACTIONS(1836),
    [anon_sym_double] = ACTIONS(1836),
    [anon_sym_float] = ACTIONS(1836),
    [anon_sym_object] = ACTIONS(1836),
    [anon_sym_string] = ACTIONS(1836),
    [sym_identifier_name] = ACTIONS(1836),
    [sym_comment] = ACTIONS(36),
  },
  [828] = {
    [anon_sym_RBRACE] = ACTIONS(1653),
    [anon_sym_class] = ACTIONS(1838),
    [anon_sym_unsafe] = ACTIONS(1838),
    [anon_sym_abstract] = ACTIONS(1838),
    [anon_sym_sealed] = ACTIONS(1838),
    [anon_sym_static] = ACTIONS(1838),
    [anon_sym_new] = ACTIONS(1838),
    [anon_sym_public] = ACTIONS(1838),
    [anon_sym_protected] = ACTIONS(1838),
    [anon_sym_internal] = ACTIONS(1838),
    [anon_sym_private] = ACTIONS(1838),
    [anon_sym_interface] = ACTIONS(1838),
    [anon_sym_struct] = ACTIONS(1838),
    [anon_sym_enum] = ACTIONS(1838),
    [anon_sym_sbyte] = ACTIONS(1838),
    [anon_sym_byte] = ACTIONS(1838),
    [anon_sym_short] = ACTIONS(1838),
    [anon_sym_ushort] = ACTIONS(1838),
    [anon_sym_int] = ACTIONS(1838),
    [anon_sym_uint] = ACTIONS(1838),
    [anon_sym_long] = ACTIONS(1838),
    [anon_sym_ulong] = ACTIONS(1838),
    [anon_sym_char] = ACTIONS(1838),
    [anon_sym_delegate] = ACTIONS(1838),
    [anon_sym_LBRACK] = ACTIONS(1653),
    [sym_const_keyword] = ACTIONS(1838),
    [anon_sym_readonly] = ACTIONS(1838),
    [anon_sym_volatile] = ACTIONS(1838),
    [anon_sym_bool] = ACTIONS(1838),
    [anon_sym_decimal] = ACTIONS(1838),
    [anon_sym_double] = ACTIONS(1838),
    [anon_sym_float] = ACTIONS(1838),
    [anon_sym_object] = ACTIONS(1838),
    [anon_sym_string] = ACTIONS(1838),
    [sym_identifier_name] = ACTIONS(1838),
    [sym_comment] = ACTIONS(36),
  },
  [829] = {
    [anon_sym_RBRACE] = ACTIONS(1655),
    [anon_sym_class] = ACTIONS(1840),
    [anon_sym_unsafe] = ACTIONS(1840),
    [anon_sym_abstract] = ACTIONS(1840),
    [anon_sym_sealed] = ACTIONS(1840),
    [anon_sym_static] = ACTIONS(1840),
    [anon_sym_new] = ACTIONS(1840),
    [anon_sym_public] = ACTIONS(1840),
    [anon_sym_protected] = ACTIONS(1840),
    [anon_sym_internal] = ACTIONS(1840),
    [anon_sym_private] = ACTIONS(1840),
    [anon_sym_interface] = ACTIONS(1840),
    [anon_sym_struct] = ACTIONS(1840),
    [anon_sym_enum] = ACTIONS(1840),
    [anon_sym_sbyte] = ACTIONS(1840),
    [anon_sym_byte] = ACTIONS(1840),
    [anon_sym_short] = ACTIONS(1840),
    [anon_sym_ushort] = ACTIONS(1840),
    [anon_sym_int] = ACTIONS(1840),
    [anon_sym_uint] = ACTIONS(1840),
    [anon_sym_long] = ACTIONS(1840),
    [anon_sym_ulong] = ACTIONS(1840),
    [anon_sym_char] = ACTIONS(1840),
    [anon_sym_delegate] = ACTIONS(1840),
    [anon_sym_LBRACK] = ACTIONS(1655),
    [sym_const_keyword] = ACTIONS(1840),
    [anon_sym_readonly] = ACTIONS(1840),
    [anon_sym_volatile] = ACTIONS(1840),
    [anon_sym_bool] = ACTIONS(1840),
    [anon_sym_decimal] = ACTIONS(1840),
    [anon_sym_double] = ACTIONS(1840),
    [anon_sym_float] = ACTIONS(1840),
    [anon_sym_object] = ACTIONS(1840),
    [anon_sym_string] = ACTIONS(1840),
    [sym_identifier_name] = ACTIONS(1840),
    [sym_comment] = ACTIONS(36),
  },
  [830] = {
    [aux_sym_enum_declaration_repeat1] = STATE(840),
    [anon_sym_RBRACE] = ACTIONS(1848),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [831] = {
    [anon_sym_RPAREN] = ACTIONS(1820),
    [anon_sym_QMARK] = ACTIONS(1238),
    [anon_sym_AMP_AMP] = ACTIONS(1240),
    [anon_sym_PIPE_PIPE] = ACTIONS(1242),
    [anon_sym_GT_GT] = ACTIONS(1244),
    [anon_sym_LT_LT] = ACTIONS(1244),
    [anon_sym_AMP] = ACTIONS(1246),
    [anon_sym_CARET] = ACTIONS(1248),
    [anon_sym_PIPE] = ACTIONS(1250),
    [anon_sym_PLUS] = ACTIONS(1252),
    [anon_sym_DASH] = ACTIONS(1252),
    [anon_sym_STAR] = ACTIONS(1254),
    [anon_sym_SLASH] = ACTIONS(1256),
    [anon_sym_PERCENT] = ACTIONS(1254),
    [anon_sym_LT] = ACTIONS(1258),
    [anon_sym_LT_EQ] = ACTIONS(1260),
    [anon_sym_EQ_EQ] = ACTIONS(1262),
    [anon_sym_BANG_EQ] = ACTIONS(1262),
    [anon_sym_GT_EQ] = ACTIONS(1260),
    [anon_sym_GT] = ACTIONS(1258),
    [sym_comment] = ACTIONS(36),
  },
  [832] = {
    [sym__expression] = STATE(841),
    [sym_parenthesized_expression] = STATE(841),
    [sym_ternary_expression] = STATE(841),
    [sym_binary_expression] = STATE(841),
    [sym_unary_expression] = STATE(841),
    [sym__literal] = STATE(841),
    [sym_boolean_literal] = STATE(841),
    [sym_character_literal] = STATE(841),
    [sym_integer_literal] = STATE(841),
    [sym_real_literal] = STATE(841),
    [sym_string_literal] = STATE(841),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1294),
    [anon_sym_DASH] = ACTIONS(1294),
    [anon_sym_BANG] = ACTIONS(1296),
    [anon_sym_TILDE] = ACTIONS(1296),
    [anon_sym_DASH_DASH] = ACTIONS(1296),
    [anon_sym_PLUS_PLUS] = ACTIONS(1296),
    [anon_sym_typeof] = ACTIONS(1294),
    [anon_sym_sizeof] = ACTIONS(1294),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1850),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1850),
    [sym_comment] = ACTIONS(36),
  },
  [833] = {
    [sym__expression] = STATE(842),
    [sym_parenthesized_expression] = STATE(842),
    [sym_ternary_expression] = STATE(842),
    [sym_binary_expression] = STATE(842),
    [sym_unary_expression] = STATE(842),
    [sym__literal] = STATE(842),
    [sym_boolean_literal] = STATE(842),
    [sym_character_literal] = STATE(842),
    [sym_integer_literal] = STATE(842),
    [sym_real_literal] = STATE(842),
    [sym_string_literal] = STATE(842),
    [sym__regular_string_literal] = STATE(390),
    [sym__verbatim_string_literal] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_PLUS] = ACTIONS(1345),
    [anon_sym_DASH] = ACTIONS(1345),
    [anon_sym_BANG] = ACTIONS(1347),
    [anon_sym_TILDE] = ACTIONS(1347),
    [anon_sym_DASH_DASH] = ACTIONS(1347),
    [anon_sym_PLUS_PLUS] = ACTIONS(1347),
    [anon_sym_typeof] = ACTIONS(1345),
    [anon_sym_sizeof] = ACTIONS(1345),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_false] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(807),
    [sym_null_literal] = ACTIONS(1852),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_AT_DQUOTE] = ACTIONS(815),
    [sym_identifier_name] = ACTIONS(1852),
    [sym_comment] = ACTIONS(36),
  },
  [834] = {
    [ts_builtin_sym_end] = ACTIONS(1854),
    [anon_sym_using] = ACTIONS(1854),
    [anon_sym_namespace] = ACTIONS(1854),
    [anon_sym_RBRACE] = ACTIONS(1854),
    [anon_sym_class] = ACTIONS(1854),
    [anon_sym_unsafe] = ACTIONS(1854),
    [anon_sym_abstract] = ACTIONS(1854),
    [anon_sym_sealed] = ACTIONS(1854),
    [anon_sym_static] = ACTIONS(1854),
    [anon_sym_new] = ACTIONS(1854),
    [anon_sym_public] = ACTIONS(1854),
    [anon_sym_protected] = ACTIONS(1854),
    [anon_sym_internal] = ACTIONS(1854),
    [anon_sym_private] = ACTIONS(1854),
    [anon_sym_interface] = ACTIONS(1854),
    [anon_sym_struct] = ACTIONS(1854),
    [anon_sym_enum] = ACTIONS(1854),
    [anon_sym_delegate] = ACTIONS(1854),
    [anon_sym_LBRACK] = ACTIONS(1854),
    [sym_comment] = ACTIONS(36),
  },
  [835] = {
    [anon_sym_RBRACE] = ACTIONS(1743),
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
    [anon_sym_LBRACK] = ACTIONS(1743),
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
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1856),
  },
  [836] = {
    [anon_sym_SEMI] = ACTIONS(1858),
    [anon_sym_RBRACE] = ACTIONS(1743),
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
    [anon_sym_LBRACK] = ACTIONS(1743),
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
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1856),
  },
  [837] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1860),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [838] = {
    [anon_sym_RBRACE] = ACTIONS(1743),
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
    [anon_sym_LBRACK] = ACTIONS(1743),
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
    [sym_comment] = ACTIONS(36),
  },
  [839] = {
    [anon_sym_SEMI] = ACTIONS(1862),
    [anon_sym_RBRACE] = ACTIONS(1743),
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
    [anon_sym_LBRACK] = ACTIONS(1743),
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
    [sym_comment] = ACTIONS(36),
  },
  [840] = {
    [aux_sym_enum_declaration_repeat1] = STATE(394),
    [anon_sym_RBRACE] = ACTIONS(1864),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [841] = {
    [anon_sym_COLON] = ACTIONS(1820),
    [anon_sym_QMARK] = ACTIONS(1574),
    [anon_sym_AMP_AMP] = ACTIONS(1576),
    [anon_sym_PIPE_PIPE] = ACTIONS(1578),
    [anon_sym_GT_GT] = ACTIONS(1580),
    [anon_sym_LT_LT] = ACTIONS(1580),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_CARET] = ACTIONS(1584),
    [anon_sym_PIPE] = ACTIONS(1586),
    [anon_sym_PLUS] = ACTIONS(1588),
    [anon_sym_DASH] = ACTIONS(1588),
    [anon_sym_STAR] = ACTIONS(1590),
    [anon_sym_SLASH] = ACTIONS(1592),
    [anon_sym_PERCENT] = ACTIONS(1590),
    [anon_sym_LT] = ACTIONS(1594),
    [anon_sym_LT_EQ] = ACTIONS(1596),
    [anon_sym_EQ_EQ] = ACTIONS(1598),
    [anon_sym_BANG_EQ] = ACTIONS(1598),
    [anon_sym_GT_EQ] = ACTIONS(1596),
    [anon_sym_GT] = ACTIONS(1594),
    [sym_comment] = ACTIONS(36),
  },
  [842] = {
    [anon_sym_COMMA] = ACTIONS(1820),
    [anon_sym_RPAREN] = ACTIONS(1820),
    [sym_params_keyword] = ACTIONS(1820),
    [anon_sym_LBRACK] = ACTIONS(1820),
    [anon_sym_QMARK] = ACTIONS(1623),
    [anon_sym_AMP_AMP] = ACTIONS(1625),
    [anon_sym_PIPE_PIPE] = ACTIONS(1627),
    [anon_sym_GT_GT] = ACTIONS(1629),
    [anon_sym_LT_LT] = ACTIONS(1629),
    [anon_sym_AMP] = ACTIONS(1631),
    [anon_sym_CARET] = ACTIONS(1633),
    [anon_sym_PIPE] = ACTIONS(1635),
    [anon_sym_PLUS] = ACTIONS(1637),
    [anon_sym_DASH] = ACTIONS(1637),
    [anon_sym_STAR] = ACTIONS(1639),
    [anon_sym_SLASH] = ACTIONS(1641),
    [anon_sym_PERCENT] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(1643),
    [anon_sym_LT_EQ] = ACTIONS(1645),
    [anon_sym_EQ_EQ] = ACTIONS(1647),
    [anon_sym_BANG_EQ] = ACTIONS(1647),
    [anon_sym_GT_EQ] = ACTIONS(1645),
    [anon_sym_GT] = ACTIONS(1643),
    [sym_comment] = ACTIONS(36),
  },
  [843] = {
    [anon_sym_RBRACE] = ACTIONS(1826),
    [anon_sym_class] = ACTIONS(1866),
    [anon_sym_unsafe] = ACTIONS(1866),
    [anon_sym_abstract] = ACTIONS(1866),
    [anon_sym_sealed] = ACTIONS(1866),
    [anon_sym_static] = ACTIONS(1866),
    [anon_sym_new] = ACTIONS(1866),
    [anon_sym_public] = ACTIONS(1866),
    [anon_sym_protected] = ACTIONS(1866),
    [anon_sym_internal] = ACTIONS(1866),
    [anon_sym_private] = ACTIONS(1866),
    [anon_sym_interface] = ACTIONS(1866),
    [anon_sym_struct] = ACTIONS(1866),
    [anon_sym_enum] = ACTIONS(1866),
    [anon_sym_sbyte] = ACTIONS(1866),
    [anon_sym_byte] = ACTIONS(1866),
    [anon_sym_short] = ACTIONS(1866),
    [anon_sym_ushort] = ACTIONS(1866),
    [anon_sym_int] = ACTIONS(1866),
    [anon_sym_uint] = ACTIONS(1866),
    [anon_sym_long] = ACTIONS(1866),
    [anon_sym_ulong] = ACTIONS(1866),
    [anon_sym_char] = ACTIONS(1866),
    [anon_sym_delegate] = ACTIONS(1866),
    [sym_void_keyword] = ACTIONS(1866),
    [anon_sym_LBRACK] = ACTIONS(1826),
    [sym_const_keyword] = ACTIONS(1866),
    [anon_sym_readonly] = ACTIONS(1866),
    [anon_sym_volatile] = ACTIONS(1866),
    [anon_sym_bool] = ACTIONS(1866),
    [anon_sym_decimal] = ACTIONS(1866),
    [anon_sym_double] = ACTIONS(1866),
    [anon_sym_float] = ACTIONS(1866),
    [anon_sym_object] = ACTIONS(1866),
    [anon_sym_string] = ACTIONS(1866),
    [sym_identifier_name] = ACTIONS(1866),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1866),
  },
  [844] = {
    [anon_sym_SEMI] = ACTIONS(1868),
    [anon_sym_RBRACE] = ACTIONS(1826),
    [anon_sym_class] = ACTIONS(1866),
    [anon_sym_unsafe] = ACTIONS(1866),
    [anon_sym_abstract] = ACTIONS(1866),
    [anon_sym_sealed] = ACTIONS(1866),
    [anon_sym_static] = ACTIONS(1866),
    [anon_sym_new] = ACTIONS(1866),
    [anon_sym_public] = ACTIONS(1866),
    [anon_sym_protected] = ACTIONS(1866),
    [anon_sym_internal] = ACTIONS(1866),
    [anon_sym_private] = ACTIONS(1866),
    [anon_sym_interface] = ACTIONS(1866),
    [anon_sym_struct] = ACTIONS(1866),
    [anon_sym_enum] = ACTIONS(1866),
    [anon_sym_sbyte] = ACTIONS(1866),
    [anon_sym_byte] = ACTIONS(1866),
    [anon_sym_short] = ACTIONS(1866),
    [anon_sym_ushort] = ACTIONS(1866),
    [anon_sym_int] = ACTIONS(1866),
    [anon_sym_uint] = ACTIONS(1866),
    [anon_sym_long] = ACTIONS(1866),
    [anon_sym_ulong] = ACTIONS(1866),
    [anon_sym_char] = ACTIONS(1866),
    [anon_sym_delegate] = ACTIONS(1866),
    [sym_void_keyword] = ACTIONS(1866),
    [anon_sym_LBRACK] = ACTIONS(1826),
    [sym_const_keyword] = ACTIONS(1866),
    [anon_sym_readonly] = ACTIONS(1866),
    [anon_sym_volatile] = ACTIONS(1866),
    [anon_sym_bool] = ACTIONS(1866),
    [anon_sym_decimal] = ACTIONS(1866),
    [anon_sym_double] = ACTIONS(1866),
    [anon_sym_float] = ACTIONS(1866),
    [anon_sym_object] = ACTIONS(1866),
    [anon_sym_string] = ACTIONS(1866),
    [sym_identifier_name] = ACTIONS(1866),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1866),
  },
  [845] = {
    [anon_sym_RBRACE] = ACTIONS(1826),
    [anon_sym_class] = ACTIONS(1866),
    [anon_sym_unsafe] = ACTIONS(1866),
    [anon_sym_abstract] = ACTIONS(1866),
    [anon_sym_sealed] = ACTIONS(1866),
    [anon_sym_static] = ACTIONS(1866),
    [anon_sym_new] = ACTIONS(1866),
    [anon_sym_public] = ACTIONS(1866),
    [anon_sym_protected] = ACTIONS(1866),
    [anon_sym_internal] = ACTIONS(1866),
    [anon_sym_private] = ACTIONS(1866),
    [anon_sym_interface] = ACTIONS(1866),
    [anon_sym_struct] = ACTIONS(1866),
    [anon_sym_enum] = ACTIONS(1866),
    [anon_sym_sbyte] = ACTIONS(1866),
    [anon_sym_byte] = ACTIONS(1866),
    [anon_sym_short] = ACTIONS(1866),
    [anon_sym_ushort] = ACTIONS(1866),
    [anon_sym_int] = ACTIONS(1866),
    [anon_sym_uint] = ACTIONS(1866),
    [anon_sym_long] = ACTIONS(1866),
    [anon_sym_ulong] = ACTIONS(1866),
    [anon_sym_char] = ACTIONS(1866),
    [anon_sym_delegate] = ACTIONS(1866),
    [anon_sym_LBRACK] = ACTIONS(1826),
    [sym_const_keyword] = ACTIONS(1866),
    [anon_sym_readonly] = ACTIONS(1866),
    [anon_sym_volatile] = ACTIONS(1866),
    [anon_sym_bool] = ACTIONS(1866),
    [anon_sym_decimal] = ACTIONS(1866),
    [anon_sym_double] = ACTIONS(1866),
    [anon_sym_float] = ACTIONS(1866),
    [anon_sym_object] = ACTIONS(1866),
    [anon_sym_string] = ACTIONS(1866),
    [sym_identifier_name] = ACTIONS(1866),
    [sym_comment] = ACTIONS(36),
  },
  [846] = {
    [anon_sym_SEMI] = ACTIONS(1870),
    [anon_sym_RBRACE] = ACTIONS(1826),
    [anon_sym_class] = ACTIONS(1866),
    [anon_sym_unsafe] = ACTIONS(1866),
    [anon_sym_abstract] = ACTIONS(1866),
    [anon_sym_sealed] = ACTIONS(1866),
    [anon_sym_static] = ACTIONS(1866),
    [anon_sym_new] = ACTIONS(1866),
    [anon_sym_public] = ACTIONS(1866),
    [anon_sym_protected] = ACTIONS(1866),
    [anon_sym_internal] = ACTIONS(1866),
    [anon_sym_private] = ACTIONS(1866),
    [anon_sym_interface] = ACTIONS(1866),
    [anon_sym_struct] = ACTIONS(1866),
    [anon_sym_enum] = ACTIONS(1866),
    [anon_sym_sbyte] = ACTIONS(1866),
    [anon_sym_byte] = ACTIONS(1866),
    [anon_sym_short] = ACTIONS(1866),
    [anon_sym_ushort] = ACTIONS(1866),
    [anon_sym_int] = ACTIONS(1866),
    [anon_sym_uint] = ACTIONS(1866),
    [anon_sym_long] = ACTIONS(1866),
    [anon_sym_ulong] = ACTIONS(1866),
    [anon_sym_char] = ACTIONS(1866),
    [anon_sym_delegate] = ACTIONS(1866),
    [anon_sym_LBRACK] = ACTIONS(1826),
    [sym_const_keyword] = ACTIONS(1866),
    [anon_sym_readonly] = ACTIONS(1866),
    [anon_sym_volatile] = ACTIONS(1866),
    [anon_sym_bool] = ACTIONS(1866),
    [anon_sym_decimal] = ACTIONS(1866),
    [anon_sym_double] = ACTIONS(1866),
    [anon_sym_float] = ACTIONS(1866),
    [anon_sym_object] = ACTIONS(1866),
    [anon_sym_string] = ACTIONS(1866),
    [sym_identifier_name] = ACTIONS(1866),
    [sym_comment] = ACTIONS(36),
  },
  [847] = {
    [anon_sym_RBRACE] = ACTIONS(1854),
    [anon_sym_class] = ACTIONS(1872),
    [anon_sym_unsafe] = ACTIONS(1872),
    [anon_sym_abstract] = ACTIONS(1872),
    [anon_sym_sealed] = ACTIONS(1872),
    [anon_sym_static] = ACTIONS(1872),
    [anon_sym_new] = ACTIONS(1872),
    [anon_sym_public] = ACTIONS(1872),
    [anon_sym_protected] = ACTIONS(1872),
    [anon_sym_internal] = ACTIONS(1872),
    [anon_sym_private] = ACTIONS(1872),
    [anon_sym_interface] = ACTIONS(1872),
    [anon_sym_struct] = ACTIONS(1872),
    [anon_sym_enum] = ACTIONS(1872),
    [anon_sym_sbyte] = ACTIONS(1872),
    [anon_sym_byte] = ACTIONS(1872),
    [anon_sym_short] = ACTIONS(1872),
    [anon_sym_ushort] = ACTIONS(1872),
    [anon_sym_int] = ACTIONS(1872),
    [anon_sym_uint] = ACTIONS(1872),
    [anon_sym_long] = ACTIONS(1872),
    [anon_sym_ulong] = ACTIONS(1872),
    [anon_sym_char] = ACTIONS(1872),
    [anon_sym_delegate] = ACTIONS(1872),
    [sym_void_keyword] = ACTIONS(1872),
    [anon_sym_LBRACK] = ACTIONS(1854),
    [sym_const_keyword] = ACTIONS(1872),
    [anon_sym_readonly] = ACTIONS(1872),
    [anon_sym_volatile] = ACTIONS(1872),
    [anon_sym_bool] = ACTIONS(1872),
    [anon_sym_decimal] = ACTIONS(1872),
    [anon_sym_double] = ACTIONS(1872),
    [anon_sym_float] = ACTIONS(1872),
    [anon_sym_object] = ACTIONS(1872),
    [anon_sym_string] = ACTIONS(1872),
    [sym_identifier_name] = ACTIONS(1872),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1872),
  },
  [848] = {
    [anon_sym_RBRACE] = ACTIONS(1854),
    [anon_sym_class] = ACTIONS(1872),
    [anon_sym_unsafe] = ACTIONS(1872),
    [anon_sym_abstract] = ACTIONS(1872),
    [anon_sym_sealed] = ACTIONS(1872),
    [anon_sym_static] = ACTIONS(1872),
    [anon_sym_new] = ACTIONS(1872),
    [anon_sym_public] = ACTIONS(1872),
    [anon_sym_protected] = ACTIONS(1872),
    [anon_sym_internal] = ACTIONS(1872),
    [anon_sym_private] = ACTIONS(1872),
    [anon_sym_interface] = ACTIONS(1872),
    [anon_sym_struct] = ACTIONS(1872),
    [anon_sym_enum] = ACTIONS(1872),
    [anon_sym_sbyte] = ACTIONS(1872),
    [anon_sym_byte] = ACTIONS(1872),
    [anon_sym_short] = ACTIONS(1872),
    [anon_sym_ushort] = ACTIONS(1872),
    [anon_sym_int] = ACTIONS(1872),
    [anon_sym_uint] = ACTIONS(1872),
    [anon_sym_long] = ACTIONS(1872),
    [anon_sym_ulong] = ACTIONS(1872),
    [anon_sym_char] = ACTIONS(1872),
    [anon_sym_delegate] = ACTIONS(1872),
    [anon_sym_LBRACK] = ACTIONS(1854),
    [sym_const_keyword] = ACTIONS(1872),
    [anon_sym_readonly] = ACTIONS(1872),
    [anon_sym_volatile] = ACTIONS(1872),
    [anon_sym_bool] = ACTIONS(1872),
    [anon_sym_decimal] = ACTIONS(1872),
    [anon_sym_double] = ACTIONS(1872),
    [anon_sym_float] = ACTIONS(1872),
    [anon_sym_object] = ACTIONS(1872),
    [anon_sym_string] = ACTIONS(1872),
    [sym_identifier_name] = ACTIONS(1872),
    [sym_comment] = ACTIONS(36),
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
  [36] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 1),
  [40] = {.count = 1, .reusable = true}, SHIFT(34),
  [42] = {.count = 1, .reusable = false}, SHIFT(35),
  [44] = {.count = 1, .reusable = false}, SHIFT(36),
  [46] = {.count = 1, .reusable = false}, SHIFT(37),
  [48] = {.count = 1, .reusable = false}, SHIFT(41),
  [50] = {.count = 1, .reusable = true}, SHIFT(42),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym__class_modifiers, 1),
  [54] = {.count = 1, .reusable = true}, SHIFT(43),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym__struct_modifiers, 1),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_delegate_modifier, 1),
  [60] = {.count = 1, .reusable = true}, SHIFT(46),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym__interface_modifiers, 1),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_enum_modifiers, 1),
  [66] = {.count = 1, .reusable = true}, SHIFT(48),
  [68] = {.count = 1, .reusable = true}, SHIFT(49),
  [70] = {.count = 1, .reusable = true}, SHIFT(50),
  [72] = {.count = 1, .reusable = false}, SHIFT(51),
  [74] = {.count = 1, .reusable = false}, SHIFT(52),
  [76] = {.count = 1, .reusable = false}, SHIFT(53),
  [78] = {.count = 1, .reusable = false}, SHIFT(55),
  [80] = {.count = 1, .reusable = false}, SHIFT(56),
  [82] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [84] = {.count = 1, .reusable = true}, SHIFT(59),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_class_modifiers, 1),
  [88] = {.count = 1, .reusable = true}, SHIFT(60),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_interface_modifiers, 1),
  [92] = {.count = 1, .reusable = true}, SHIFT(61),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_struct_modifiers, 1),
  [96] = {.count = 1, .reusable = true}, SHIFT(62),
  [98] = {.count = 1, .reusable = true}, SHIFT(63),
  [100] = {.count = 1, .reusable = true}, SHIFT(72),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym__attributes, 1),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 2),
  [106] = {.count = 1, .reusable = true}, SHIFT(78),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_static, 1),
  [110] = {.count = 1, .reusable = true}, SHIFT(79),
  [112] = {.count = 1, .reusable = true}, SHIFT(80),
  [114] = {.count = 1, .reusable = true}, SHIFT(81),
  [116] = {.count = 1, .reusable = true}, SHIFT(82),
  [118] = {.count = 1, .reusable = false}, SHIFT(83),
  [120] = {.count = 1, .reusable = true}, SHIFT(84),
  [122] = {.count = 1, .reusable = true}, SHIFT(85),
  [124] = {.count = 1, .reusable = true}, SHIFT(86),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__class_modifiers, 2),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym__struct_modifiers, 2),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym__interface_modifiers, 2),
  [132] = {.count = 1, .reusable = true}, SHIFT(88),
  [134] = {.count = 1, .reusable = true}, SHIFT(90),
  [136] = {.count = 1, .reusable = true}, SHIFT(92),
  [138] = {.count = 1, .reusable = true}, SHIFT(93),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_predefined_type, 1),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_return_type, 1),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym__type, 1),
  [146] = {.count = 1, .reusable = true}, SHIFT(95),
  [148] = {.count = 1, .reusable = true}, SHIFT(96),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1),
  [152] = {.count = 1, .reusable = true}, SHIFT(97),
  [154] = {.count = 1, .reusable = true}, SHIFT(99),
  [156] = {.count = 1, .reusable = true}, SHIFT(100),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_list, 1),
  [160] = {.count = 1, .reusable = true}, SHIFT(102),
  [162] = {.count = 1, .reusable = true}, SHIFT(103),
  [164] = {.count = 1, .reusable = true}, SHIFT(104),
  [166] = {.count = 1, .reusable = true}, SHIFT(105),
  [168] = {.count = 1, .reusable = true}, SHIFT(107),
  [170] = {.count = 1, .reusable = true}, SHIFT(108),
  [172] = {.count = 1, .reusable = true}, SHIFT(109),
  [174] = {.count = 1, .reusable = true}, SHIFT(110),
  [176] = {.count = 1, .reusable = true}, SHIFT(111),
  [178] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(3),
  [183] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat2, 2), SHIFT_REPEAT(4),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat3, 2), SHIFT_REPEAT(112),
  [193] = {.count = 1, .reusable = true}, SHIFT(56),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(5),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(6),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(7),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(8),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(9),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(10),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(11),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(12),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(13),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(72),
  [227] = {.count = 1, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(72),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 3),
  [234] = {.count = 1, .reusable = true}, SHIFT(115),
  [236] = {.count = 1, .reusable = true}, SHIFT(116),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_using_directive, 3),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_name_equals, 2),
  [242] = {.count = 1, .reusable = true}, SHIFT(117),
  [244] = {.count = 1, .reusable = true}, SHIFT(118),
  [246] = {.count = 1, .reusable = true}, SHIFT(119),
  [248] = {.count = 1, .reusable = true}, SHIFT(121),
  [250] = {.count = 1, .reusable = false}, SHIFT(122),
  [252] = {.count = 1, .reusable = false}, SHIFT(123),
  [254] = {.count = 1, .reusable = false}, SHIFT(8),
  [256] = {.count = 1, .reusable = false}, SHIFT(124),
  [258] = {.count = 1, .reusable = false}, SHIFT(125),
  [260] = {.count = 1, .reusable = false}, SHIFT(126),
  [262] = {.count = 1, .reusable = false}, SHIFT(127),
  [264] = {.count = 1, .reusable = false}, SHIFT(128),
  [266] = {.count = 1, .reusable = false}, SHIFT(129),
  [268] = {.count = 1, .reusable = false}, SHIFT(130),
  [270] = {.count = 1, .reusable = false}, SHIFT(131),
  [272] = {.count = 1, .reusable = false}, SHIFT(132),
  [274] = {.count = 1, .reusable = false}, SHIFT(133),
  [276] = {.count = 1, .reusable = true}, SHIFT(150),
  [278] = {.count = 1, .reusable = true}, SHIFT(151),
  [280] = {.count = 1, .reusable = true}, SHIFT(152),
  [282] = {.count = 1, .reusable = false}, SHIFT(153),
  [284] = {.count = 1, .reusable = true}, SHIFT(160),
  [286] = {.count = 1, .reusable = true}, SHIFT(161),
  [288] = {.count = 1, .reusable = false}, SHIFT(162),
  [290] = {.count = 1, .reusable = false}, SHIFT(163),
  [292] = {.count = 1, .reusable = false}, SHIFT(164),
  [294] = {.count = 1, .reusable = false}, SHIFT(165),
  [296] = {.count = 1, .reusable = false}, SHIFT(166),
  [298] = {.count = 1, .reusable = false}, SHIFT(167),
  [300] = {.count = 1, .reusable = true}, SHIFT(168),
  [302] = {.count = 1, .reusable = false}, SHIFT(169),
  [304] = {.count = 1, .reusable = true}, SHIFT(180),
  [306] = {.count = 1, .reusable = true}, SHIFT(181),
  [308] = {.count = 1, .reusable = true}, SHIFT(182),
  [310] = {.count = 1, .reusable = true}, SHIFT(186),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_generic_name, 2),
  [314] = {.count = 1, .reusable = true}, SHIFT(187),
  [316] = {.count = 1, .reusable = true}, SHIFT(190),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 2),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym__attribute_section, 3),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym__attribute_section, 3),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_list, 2),
  [326] = {.count = 1, .reusable = true}, SHIFT(196),
  [328] = {.count = 1, .reusable = true}, SHIFT(197),
  [330] = {.count = 1, .reusable = true}, SHIFT(198),
  [332] = {.count = 1, .reusable = true}, SHIFT(199),
  [334] = {.count = 1, .reusable = true}, SHIFT(200),
  [336] = {.count = 1, .reusable = true}, SHIFT(201),
  [338] = {.count = 1, .reusable = true}, SHIFT(202),
  [340] = {.count = 1, .reusable = true}, SHIFT(55),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 4),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_extern_alias_directive, 4),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_alias_qualified_name, 3),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 3),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_using_directive, 4),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_declaration, 4),
  [354] = {.count = 1, .reusable = true}, SHIFT(205),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 4),
  [358] = {.count = 1, .reusable = true}, SHIFT(207),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym__class_modifiers, 1),
  [362] = {.count = 1, .reusable = false}, SHIFT(208),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym__struct_modifiers, 1),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym__field_modifiers, 1),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_delegate_modifier, 1),
  [370] = {.count = 1, .reusable = false}, SHIFT(210),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym__interface_modifiers, 1),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_enum_modifiers, 1),
  [376] = {.count = 2, .reusable = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_method_modifiers, 1),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_method_modifiers, 1),
  [381] = {.count = 1, .reusable = true}, SHIFT(211),
  [383] = {.count = 1, .reusable = true}, SHIFT(212),
  [385] = {.count = 1, .reusable = true}, SHIFT(213),
  [387] = {.count = 1, .reusable = true}, SHIFT(219),
  [389] = {.count = 1, .reusable = true}, SHIFT(220),
  [391] = {.count = 1, .reusable = true}, SHIFT(221),
  [393] = {.count = 1, .reusable = true}, SHIFT(222),
  [395] = {.count = 1, .reusable = true}, SHIFT(223),
  [397] = {.count = 1, .reusable = true}, SHIFT(224),
  [399] = {.count = 1, .reusable = false}, SHIFT(219),
  [401] = {.count = 1, .reusable = false}, SHIFT(220),
  [403] = {.count = 1, .reusable = false}, SHIFT(221),
  [405] = {.count = 1, .reusable = false}, SHIFT(222),
  [407] = {.count = 1, .reusable = false}, SHIFT(223),
  [409] = {.count = 1, .reusable = false}, SHIFT(225),
  [411] = {.count = 1, .reusable = false}, SHIFT(226),
  [413] = {.count = 1, .reusable = false}, SHIFT(227),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_field_modifiers, 1),
  [417] = {.count = 1, .reusable = true}, SHIFT(235),
  [419] = {.count = 2, .reusable = true}, REDUCE(sym_return_type, 1), SHIFT(236),
  [422] = {.count = 1, .reusable = true}, SHIFT(238),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym__attributes, 1),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_type_parameter, 1),
  [428] = {.count = 1, .reusable = true}, SHIFT(241),
  [430] = {.count = 1, .reusable = true}, SHIFT(242),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_interface_declaration, 4),
  [434] = {.count = 1, .reusable = false}, SHIFT(247),
  [436] = {.count = 1, .reusable = true}, SHIFT(249),
  [438] = {.count = 1, .reusable = true}, SHIFT(236),
  [440] = {.count = 1, .reusable = true}, SHIFT(250),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 4),
  [444] = {.count = 1, .reusable = true}, SHIFT(254),
  [446] = {.count = 1, .reusable = true}, SHIFT(255),
  [448] = {.count = 1, .reusable = true}, SHIFT(256),
  [450] = {.count = 1, .reusable = true}, SHIFT(257),
  [452] = {.count = 1, .reusable = true}, SHIFT(261),
  [454] = {.count = 1, .reusable = true}, SHIFT(262),
  [456] = {.count = 1, .reusable = true}, SHIFT(263),
  [458] = {.count = 1, .reusable = true}, SHIFT(264),
  [460] = {.count = 1, .reusable = true}, SHIFT(265),
  [462] = {.count = 1, .reusable = false}, SHIFT(261),
  [464] = {.count = 1, .reusable = false}, SHIFT(262),
  [466] = {.count = 1, .reusable = false}, SHIFT(263),
  [468] = {.count = 1, .reusable = false}, SHIFT(264),
  [470] = {.count = 1, .reusable = false}, SHIFT(265),
  [472] = {.count = 1, .reusable = false}, SHIFT(266),
  [474] = {.count = 1, .reusable = true}, SHIFT(273),
  [476] = {.count = 1, .reusable = true}, SHIFT(274),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_enum_member_declaration, 1),
  [480] = {.count = 1, .reusable = true}, SHIFT(279),
  [482] = {.count = 1, .reusable = true}, SHIFT(281),
  [484] = {.count = 1, .reusable = true}, SHIFT(282),
  [486] = {.count = 1, .reusable = true}, SHIFT(284),
  [488] = {.count = 1, .reusable = true}, SHIFT(286),
  [490] = {.count = 1, .reusable = true}, SHIFT(287),
  [492] = {.count = 1, .reusable = false}, SHIFT(288),
  [494] = {.count = 1, .reusable = false}, SHIFT(289),
  [496] = {.count = 1, .reusable = true}, SHIFT(290),
  [498] = {.count = 1, .reusable = true}, SHIFT(297),
  [500] = {.count = 1, .reusable = true}, SHIFT(298),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_argument_list, 2),
  [504] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(100),
  [509] = {.count = 1, .reusable = true}, SHIFT(299),
  [511] = {.count = 1, .reusable = true}, SHIFT(300),
  [513] = {.count = 1, .reusable = true}, SHIFT(301),
  [515] = {.count = 1, .reusable = true}, SHIFT(303),
  [517] = {.count = 1, .reusable = true}, SHIFT(308),
  [519] = {.count = 1, .reusable = true}, SHIFT(309),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_compilation_unit, 5),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_declaration, 5),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(4),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(5),
  [531] = {.count = 1, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
  [533] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(6),
  [536] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(7),
  [539] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(8),
  [542] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(9),
  [545] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(10),
  [548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(11),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(12),
  [554] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(13),
  [557] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 2), SHIFT_REPEAT(72),
  [560] = {.count = 1, .reusable = true}, SHIFT(310),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym__field_modifiers, 2),
  [564] = {.count = 1, .reusable = true}, SHIFT(312),
  [566] = {.count = 1, .reusable = true}, SHIFT(314),
  [568] = {.count = 1, .reusable = true}, SHIFT(316),
  [570] = {.count = 1, .reusable = true}, SHIFT(317),
  [572] = {.count = 1, .reusable = true}, SHIFT(318),
  [574] = {.count = 1, .reusable = true}, SHIFT(319),
  [576] = {.count = 1, .reusable = true}, SHIFT(320),
  [578] = {.count = 1, .reusable = true}, SHIFT(323),
  [580] = {.count = 1, .reusable = true}, SHIFT(324),
  [582] = {.count = 1, .reusable = true}, SHIFT(325),
  [584] = {.count = 1, .reusable = true}, SHIFT(326),
  [586] = {.count = 1, .reusable = true}, SHIFT(327),
  [588] = {.count = 1, .reusable = true}, SHIFT(334),
  [590] = {.count = 1, .reusable = true}, SHIFT(335),
  [592] = {.count = 1, .reusable = true}, SHIFT(336),
  [594] = {.count = 1, .reusable = true}, SHIFT(337),
  [596] = {.count = 1, .reusable = true}, SHIFT(338),
  [598] = {.count = 1, .reusable = false}, SHIFT(339),
  [600] = {.count = 1, .reusable = false}, SHIFT(340),
  [602] = {.count = 1, .reusable = false}, SHIFT(341),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_field_declaration, 2),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_field_declaration, 2),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 1),
  [610] = {.count = 1, .reusable = true}, SHIFT(342),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 2),
  [614] = {.count = 1, .reusable = true}, SHIFT(344),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 5),
  [618] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [620] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(122),
  [623] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(123),
  [626] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(8),
  [629] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(124),
  [632] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(125),
  [635] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(126),
  [638] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(127),
  [641] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(128),
  [644] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(51),
  [647] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(129),
  [650] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(52),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(72),
  [656] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(130),
  [659] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(131),
  [662] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(132),
  [665] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_declaration_repeat1, 2), SHIFT_REPEAT(133),
  [668] = {.count = 1, .reusable = false}, REDUCE(aux_sym__attributes_repeat1, 2),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_type_parameter_list, 3),
  [672] = {.count = 1, .reusable = true}, SHIFT(347),
  [674] = {.count = 1, .reusable = true}, SHIFT(349),
  [676] = {.count = 1, .reusable = true}, SHIFT(350),
  [678] = {.count = 1, .reusable = true}, SHIFT(351),
  [680] = {.count = 1, .reusable = false}, SHIFT(353),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_interface_declaration, 5),
  [684] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [686] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2), SHIFT_REPEAT(131),
  [689] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2), SHIFT_REPEAT(51),
  [692] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_declaration_repeat1, 2), SHIFT_REPEAT(152),
  [695] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2), SHIFT_REPEAT(153),
  [698] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2), SHIFT_REPEAT(53),
  [701] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(152),
  [704] = {.count = 1, .reusable = true}, SHIFT(354),
  [706] = {.count = 1, .reusable = true}, SHIFT(355),
  [708] = {.count = 1, .reusable = true}, SHIFT(357),
  [710] = {.count = 1, .reusable = true}, SHIFT(359),
  [712] = {.count = 1, .reusable = true}, SHIFT(361),
  [714] = {.count = 1, .reusable = true}, SHIFT(362),
  [716] = {.count = 1, .reusable = true}, SHIFT(363),
  [718] = {.count = 1, .reusable = true}, SHIFT(364),
  [720] = {.count = 1, .reusable = true}, SHIFT(365),
  [722] = {.count = 1, .reusable = true}, SHIFT(366),
  [724] = {.count = 1, .reusable = true}, SHIFT(367),
  [726] = {.count = 1, .reusable = true}, SHIFT(368),
  [728] = {.count = 1, .reusable = true}, SHIFT(369),
  [730] = {.count = 1, .reusable = true}, SHIFT(372),
  [732] = {.count = 1, .reusable = true}, SHIFT(373),
  [734] = {.count = 1, .reusable = true}, SHIFT(374),
  [736] = {.count = 1, .reusable = true}, SHIFT(375),
  [738] = {.count = 1, .reusable = true}, SHIFT(376),
  [740] = {.count = 1, .reusable = false}, SHIFT(377),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 5),
  [744] = {.count = 1, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [746] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(162),
  [749] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(123),
  [752] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(8),
  [755] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(124),
  [758] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(163),
  [761] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(164),
  [764] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(165),
  [767] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(166),
  [770] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(51),
  [773] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(167),
  [776] = {.count = 2, .reusable = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(168),
  [779] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(169),
  [782] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(131),
  [785] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(53),
  [788] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(168),
  [791] = {.count = 1, .reusable = true}, SHIFT(378),
  [793] = {.count = 1, .reusable = true}, SHIFT(379),
  [795] = {.count = 1, .reusable = true}, SHIFT(380),
  [797] = {.count = 1, .reusable = false}, SHIFT(381),
  [799] = {.count = 1, .reusable = true}, SHIFT(381),
  [801] = {.count = 1, .reusable = false}, SHIFT(382),
  [803] = {.count = 1, .reusable = true}, SHIFT(383),
  [805] = {.count = 1, .reusable = false}, SHIFT(384),
  [807] = {.count = 1, .reusable = true}, SHIFT(385),
  [809] = {.count = 1, .reusable = false}, SHIFT(389),
  [811] = {.count = 1, .reusable = true}, SHIFT(386),
  [813] = {.count = 1, .reusable = true}, SHIFT(387),
  [815] = {.count = 1, .reusable = true}, SHIFT(388),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_enum_member_declaration, 2),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 5),
  [821] = {.count = 1, .reusable = true}, SHIFT(391),
  [823] = {.count = 1, .reusable = true}, SHIFT(393),
  [825] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(181),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [830] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_modifier, 1),
  [832] = {.count = 1, .reusable = true}, SHIFT(400),
  [834] = {.count = 1, .reusable = true}, SHIFT(401),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym__formal_parameter_list, 1),
  [838] = {.count = 1, .reusable = true}, SHIFT(289),
  [840] = {.count = 1, .reusable = false}, SHIFT(407),
  [842] = {.count = 1, .reusable = true}, SHIFT(409),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym_delegate_declaration, 5),
  [846] = {.count = 1, .reusable = true}, REDUCE(sym__global_attributes, 5),
  [848] = {.count = 1, .reusable = true}, SHIFT(415),
  [850] = {.count = 1, .reusable = true}, SHIFT(416),
  [852] = {.count = 1, .reusable = true}, SHIFT(417),
  [854] = {.count = 1, .reusable = true}, SHIFT(418),
  [856] = {.count = 1, .reusable = true}, SHIFT(419),
  [858] = {.count = 1, .reusable = true}, SHIFT(420),
  [860] = {.count = 1, .reusable = true}, SHIFT(422),
  [862] = {.count = 1, .reusable = true}, SHIFT(424),
  [864] = {.count = 1, .reusable = true}, SHIFT(425),
  [866] = {.count = 1, .reusable = true}, SHIFT(427),
  [868] = {.count = 1, .reusable = true}, SHIFT(428),
  [870] = {.count = 1, .reusable = true}, SHIFT(430),
  [872] = {.count = 1, .reusable = true}, SHIFT(432),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym_field_declaration, 3),
  [876] = {.count = 1, .reusable = false}, REDUCE(sym_field_declaration, 3),
  [878] = {.count = 1, .reusable = true}, SHIFT(434),
  [880] = {.count = 1, .reusable = true}, SHIFT(435),
  [882] = {.count = 1, .reusable = false}, SHIFT(436),
  [884] = {.count = 1, .reusable = true}, SHIFT(436),
  [886] = {.count = 1, .reusable = false}, SHIFT(439),
  [888] = {.count = 1, .reusable = false}, SHIFT(437),
  [890] = {.count = 1, .reusable = false}, SHIFT(438),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym_constructor_declaration, 3),
  [894] = {.count = 1, .reusable = false}, REDUCE(sym_constructor_declaration, 3),
  [896] = {.count = 1, .reusable = true}, SHIFT(447),
  [898] = {.count = 1, .reusable = true}, SHIFT(448),
  [900] = {.count = 1, .reusable = true}, SHIFT(449),
  [902] = {.count = 1, .reusable = true}, SHIFT(451),
  [904] = {.count = 1, .reusable = true}, SHIFT(453),
  [906] = {.count = 1, .reusable = true}, SHIFT(454),
  [908] = {.count = 1, .reusable = true}, SHIFT(455),
  [910] = {.count = 1, .reusable = true}, SHIFT(456),
  [912] = {.count = 1, .reusable = true}, SHIFT(457),
  [914] = {.count = 1, .reusable = false}, SHIFT(462),
  [916] = {.count = 1, .reusable = true}, SHIFT(462),
  [918] = {.count = 1, .reusable = false}, SHIFT(463),
  [920] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 2),
  [922] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 3),
  [924] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [926] = {.count = 1, .reusable = true}, REDUCE(sym_type_parameter_list, 4),
  [928] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), SHIFT_REPEAT(241),
  [931] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 6),
  [933] = {.count = 1, .reusable = true}, SHIFT(466),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym_interface_declaration, 6),
  [937] = {.count = 1, .reusable = true}, SHIFT(468),
  [939] = {.count = 1, .reusable = true}, SHIFT(470),
  [941] = {.count = 1, .reusable = true}, SHIFT(471),
  [943] = {.count = 1, .reusable = true}, SHIFT(473),
  [945] = {.count = 1, .reusable = true}, SHIFT(474),
  [947] = {.count = 1, .reusable = true}, SHIFT(476),
  [949] = {.count = 1, .reusable = true}, SHIFT(478),
  [951] = {.count = 1, .reusable = true}, SHIFT(483),
  [953] = {.count = 1, .reusable = true}, SHIFT(484),
  [955] = {.count = 1, .reusable = true}, SHIFT(485),
  [957] = {.count = 1, .reusable = true}, SHIFT(486),
  [959] = {.count = 1, .reusable = true}, SHIFT(487),
  [961] = {.count = 1, .reusable = true}, SHIFT(488),
  [963] = {.count = 1, .reusable = true}, SHIFT(489),
  [965] = {.count = 1, .reusable = true}, SHIFT(490),
  [967] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 6),
  [969] = {.count = 1, .reusable = false}, SHIFT(493),
  [971] = {.count = 1, .reusable = true}, SHIFT(493),
  [973] = {.count = 1, .reusable = false}, SHIFT(494),
  [975] = {.count = 1, .reusable = false}, SHIFT(495),
  [977] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_literal, 1),
  [979] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_literal, 1),
  [981] = {.count = 1, .reusable = false}, SHIFT(496),
  [983] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym_integer_literal, 1),
  [987] = {.count = 1, .reusable = false}, REDUCE(sym_integer_literal, 1),
  [989] = {.count = 1, .reusable = true}, SHIFT(497),
  [991] = {.count = 1, .reusable = true}, SHIFT(498),
  [993] = {.count = 1, .reusable = true}, SHIFT(499),
  [995] = {.count = 1, .reusable = true}, SHIFT(500),
  [997] = {.count = 1, .reusable = true}, SHIFT(501),
  [999] = {.count = 1, .reusable = false}, SHIFT(503),
  [1001] = {.count = 1, .reusable = false}, SHIFT(502),
  [1003] = {.count = 1, .reusable = false}, SHIFT(504),
  [1005] = {.count = 1, .reusable = true}, REDUCE(sym_equals_value_clause, 2),
  [1007] = {.count = 1, .reusable = true}, SHIFT(505),
  [1009] = {.count = 1, .reusable = true}, SHIFT(506),
  [1011] = {.count = 1, .reusable = true}, SHIFT(507),
  [1013] = {.count = 1, .reusable = true}, SHIFT(508),
  [1015] = {.count = 1, .reusable = false}, SHIFT(509),
  [1017] = {.count = 1, .reusable = true}, SHIFT(510),
  [1019] = {.count = 1, .reusable = false}, SHIFT(510),
  [1021] = {.count = 1, .reusable = true}, SHIFT(511),
  [1023] = {.count = 1, .reusable = true}, SHIFT(512),
  [1025] = {.count = 1, .reusable = false}, SHIFT(512),
  [1027] = {.count = 1, .reusable = false}, SHIFT(513),
  [1029] = {.count = 1, .reusable = true}, SHIFT(513),
  [1031] = {.count = 1, .reusable = true}, SHIFT(514),
  [1033] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 1),
  [1035] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 1),
  [1037] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 6),
  [1039] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [1041] = {.count = 1, .reusable = true}, SHIFT(515),
  [1043] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(282),
  [1046] = {.count = 1, .reusable = true}, REDUCE(sym_enum_member_declaration, 3),
  [1048] = {.count = 1, .reusable = true}, SHIFT(516),
  [1050] = {.count = 1, .reusable = true}, SHIFT(518),
  [1052] = {.count = 1, .reusable = true}, SHIFT(519),
  [1054] = {.count = 1, .reusable = true}, SHIFT(521),
  [1056] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [1058] = {.count = 1, .reusable = true}, SHIFT(522),
  [1060] = {.count = 1, .reusable = true}, REDUCE(sym__formal_parameter_list, 2),
  [1062] = {.count = 1, .reusable = true}, SHIFT(407),
  [1064] = {.count = 1, .reusable = true}, SHIFT(529),
  [1066] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [1068] = {.count = 1, .reusable = true}, SHIFT(532),
  [1070] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(290),
  [1073] = {.count = 1, .reusable = true}, SHIFT(534),
  [1075] = {.count = 1, .reusable = true}, SHIFT(535),
  [1077] = {.count = 1, .reusable = true}, SHIFT(536),
  [1079] = {.count = 1, .reusable = true}, REDUCE(sym_delegate_declaration, 6),
  [1081] = {.count = 1, .reusable = true}, SHIFT(541),
  [1083] = {.count = 1, .reusable = true}, SHIFT(542),
  [1085] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 4),
  [1087] = {.count = 1, .reusable = true}, SHIFT(543),
  [1089] = {.count = 1, .reusable = false}, REDUCE(sym_interface_declaration, 4),
  [1091] = {.count = 1, .reusable = true}, SHIFT(545),
  [1093] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 4),
  [1095] = {.count = 1, .reusable = true}, SHIFT(547),
  [1097] = {.count = 1, .reusable = true}, SHIFT(549),
  [1099] = {.count = 1, .reusable = true}, SHIFT(551),
  [1101] = {.count = 1, .reusable = true}, SHIFT(552),
  [1103] = {.count = 1, .reusable = true}, REDUCE(sym_empty_statement, 1),
  [1105] = {.count = 1, .reusable = false}, REDUCE(sym_empty_statement, 1),
  [1107] = {.count = 1, .reusable = true}, REDUCE(sym_statement_block, 2),
  [1109] = {.count = 1, .reusable = false}, REDUCE(sym_statement_block, 2),
  [1111] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [1113] = {.count = 1, .reusable = false}, SHIFT(553),
  [1115] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [1117] = {.count = 1, .reusable = false}, SHIFT(555),
  [1119] = {.count = 1, .reusable = true}, SHIFT(556),
  [1121] = {.count = 1, .reusable = true}, SHIFT(557),
  [1123] = {.count = 1, .reusable = true}, SHIFT(558),
  [1125] = {.count = 1, .reusable = true}, SHIFT(559),
  [1127] = {.count = 1, .reusable = true}, SHIFT(560),
  [1129] = {.count = 1, .reusable = false}, SHIFT(561),
  [1131] = {.count = 1, .reusable = true}, SHIFT(562),
  [1133] = {.count = 1, .reusable = false}, SHIFT(562),
  [1135] = {.count = 1, .reusable = true}, SHIFT(563),
  [1137] = {.count = 1, .reusable = true}, SHIFT(564),
  [1139] = {.count = 1, .reusable = false}, SHIFT(564),
  [1141] = {.count = 1, .reusable = false}, SHIFT(565),
  [1143] = {.count = 1, .reusable = true}, SHIFT(565),
  [1145] = {.count = 1, .reusable = true}, SHIFT(566),
  [1147] = {.count = 1, .reusable = true}, SHIFT(567),
  [1149] = {.count = 1, .reusable = true}, REDUCE(sym_constructor_declaration, 4),
  [1151] = {.count = 1, .reusable = false}, REDUCE(sym_constructor_declaration, 4),
  [1153] = {.count = 1, .reusable = true}, SHIFT(571),
  [1155] = {.count = 1, .reusable = true}, SHIFT(572),
  [1157] = {.count = 1, .reusable = true}, SHIFT(573),
  [1159] = {.count = 1, .reusable = true}, SHIFT(575),
  [1161] = {.count = 1, .reusable = true}, REDUCE(sym_method_declaration, 4),
  [1163] = {.count = 1, .reusable = false}, REDUCE(sym_method_declaration, 4),
  [1165] = {.count = 1, .reusable = true}, REDUCE(sym_field_declaration, 4),
  [1167] = {.count = 1, .reusable = false}, REDUCE(sym_field_declaration, 4),
  [1169] = {.count = 1, .reusable = true}, SHIFT(582),
  [1171] = {.count = 1, .reusable = true}, SHIFT(583),
  [1173] = {.count = 1, .reusable = true}, SHIFT(584),
  [1175] = {.count = 1, .reusable = true}, SHIFT(586),
  [1177] = {.count = 1, .reusable = true}, SHIFT(587),
  [1179] = {.count = 1, .reusable = true}, SHIFT(588),
  [1181] = {.count = 1, .reusable = true}, SHIFT(589),
  [1183] = {.count = 1, .reusable = true}, SHIFT(590),
  [1185] = {.count = 1, .reusable = false}, SHIFT(591),
  [1187] = {.count = 1, .reusable = true}, SHIFT(592),
  [1189] = {.count = 1, .reusable = false}, SHIFT(592),
  [1191] = {.count = 1, .reusable = true}, SHIFT(593),
  [1193] = {.count = 1, .reusable = true}, SHIFT(594),
  [1195] = {.count = 1, .reusable = false}, SHIFT(594),
  [1197] = {.count = 1, .reusable = false}, SHIFT(595),
  [1199] = {.count = 1, .reusable = true}, SHIFT(595),
  [1201] = {.count = 1, .reusable = true}, SHIFT(596),
  [1203] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [1205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(344),
  [1208] = {.count = 1, .reusable = true}, SHIFT(597),
  [1210] = {.count = 1, .reusable = true}, SHIFT(598),
  [1212] = {.count = 1, .reusable = true}, SHIFT(600),
  [1214] = {.count = 1, .reusable = true}, SHIFT(602),
  [1216] = {.count = 1, .reusable = true}, SHIFT(604),
  [1218] = {.count = 1, .reusable = true}, SHIFT(606),
  [1220] = {.count = 1, .reusable = true}, SHIFT(607),
  [1222] = {.count = 1, .reusable = true}, SHIFT(608),
  [1224] = {.count = 1, .reusable = true}, SHIFT(609),
  [1226] = {.count = 1, .reusable = true}, SHIFT(610),
  [1228] = {.count = 1, .reusable = true}, SHIFT(612),
  [1230] = {.count = 1, .reusable = true}, SHIFT(617),
  [1232] = {.count = 1, .reusable = true}, SHIFT(618),
  [1234] = {.count = 1, .reusable = true}, SHIFT(619),
  [1236] = {.count = 1, .reusable = true}, SHIFT(620),
  [1238] = {.count = 1, .reusable = true}, SHIFT(621),
  [1240] = {.count = 1, .reusable = true}, SHIFT(622),
  [1242] = {.count = 1, .reusable = true}, SHIFT(623),
  [1244] = {.count = 1, .reusable = true}, SHIFT(624),
  [1246] = {.count = 1, .reusable = false}, SHIFT(625),
  [1248] = {.count = 1, .reusable = true}, SHIFT(626),
  [1250] = {.count = 1, .reusable = false}, SHIFT(626),
  [1252] = {.count = 1, .reusable = true}, SHIFT(627),
  [1254] = {.count = 1, .reusable = true}, SHIFT(628),
  [1256] = {.count = 1, .reusable = false}, SHIFT(628),
  [1258] = {.count = 1, .reusable = false}, SHIFT(629),
  [1260] = {.count = 1, .reusable = true}, SHIFT(629),
  [1262] = {.count = 1, .reusable = true}, SHIFT(630),
  [1264] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [1266] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [1268] = {.count = 1, .reusable = true}, SHIFT(631),
  [1270] = {.count = 1, .reusable = true}, REDUCE(sym_integer_literal, 2),
  [1272] = {.count = 1, .reusable = false}, REDUCE(sym_integer_literal, 2),
  [1274] = {.count = 1, .reusable = true}, SHIFT(632),
  [1276] = {.count = 1, .reusable = true}, REDUCE(sym_real_literal, 2),
  [1278] = {.count = 1, .reusable = false}, REDUCE(sym_real_literal, 2),
  [1280] = {.count = 1, .reusable = true}, SHIFT(633),
  [1282] = {.count = 1, .reusable = true}, SHIFT(634),
  [1284] = {.count = 1, .reusable = true}, REDUCE(sym__regular_string_literal, 2),
  [1286] = {.count = 1, .reusable = false}, REDUCE(sym__regular_string_literal, 2),
  [1288] = {.count = 1, .reusable = false}, SHIFT(636),
  [1290] = {.count = 1, .reusable = false}, SHIFT(635),
  [1292] = {.count = 1, .reusable = true}, SHIFT(637),
  [1294] = {.count = 1, .reusable = false}, SHIFT(638),
  [1296] = {.count = 1, .reusable = true}, SHIFT(638),
  [1298] = {.count = 1, .reusable = false}, SHIFT(639),
  [1300] = {.count = 1, .reusable = false}, SHIFT(640),
  [1302] = {.count = 1, .reusable = false}, SHIFT(641),
  [1304] = {.count = 1, .reusable = false}, SHIFT(642),
  [1306] = {.count = 1, .reusable = false}, SHIFT(643),
  [1308] = {.count = 1, .reusable = false}, SHIFT(644),
  [1310] = {.count = 1, .reusable = false}, SHIFT(645),
  [1312] = {.count = 1, .reusable = false}, SHIFT(646),
  [1314] = {.count = 1, .reusable = false}, SHIFT(647),
  [1316] = {.count = 1, .reusable = false}, SHIFT(648),
  [1318] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 7),
  [1320] = {.count = 1, .reusable = true}, SHIFT(649),
  [1322] = {.count = 1, .reusable = true}, SHIFT(650),
  [1324] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_array, 3),
  [1326] = {.count = 1, .reusable = true}, SHIFT(652),
  [1328] = {.count = 1, .reusable = true}, SHIFT(651),
  [1330] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 2),
  [1332] = {.count = 1, .reusable = true}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2),
  [1334] = {.count = 1, .reusable = true}, REDUCE(sym__formal_parameter_list, 3),
  [1336] = {.count = 2, .reusable = true}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2), SHIFT_REPEAT(401),
  [1339] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 3),
  [1341] = {.count = 1, .reusable = true}, SHIFT(656),
  [1343] = {.count = 1, .reusable = true}, SHIFT(657),
  [1345] = {.count = 1, .reusable = false}, SHIFT(658),
  [1347] = {.count = 1, .reusable = true}, SHIFT(658),
  [1349] = {.count = 1, .reusable = false}, SHIFT(659),
  [1351] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 7),
  [1353] = {.count = 1, .reusable = true}, REDUCE(sym_interface_declaration, 7),
  [1355] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 7),
  [1357] = {.count = 1, .reusable = true}, SHIFT(661),
  [1359] = {.count = 1, .reusable = true}, SHIFT(662),
  [1361] = {.count = 1, .reusable = true}, SHIFT(663),
  [1363] = {.count = 1, .reusable = true}, REDUCE(sym_delegate_declaration, 7),
  [1365] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 5),
  [1367] = {.count = 1, .reusable = true}, SHIFT(665),
  [1369] = {.count = 1, .reusable = false}, REDUCE(sym_interface_declaration, 5),
  [1371] = {.count = 1, .reusable = true}, SHIFT(666),
  [1373] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 5),
  [1375] = {.count = 1, .reusable = true}, SHIFT(667),
  [1377] = {.count = 1, .reusable = true}, SHIFT(668),
  [1379] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 5),
  [1381] = {.count = 1, .reusable = true}, SHIFT(669),
  [1383] = {.count = 1, .reusable = false}, REDUCE(sym_delegate_declaration, 5),
  [1385] = {.count = 1, .reusable = false}, SHIFT(671),
  [1387] = {.count = 1, .reusable = true}, SHIFT(672),
  [1389] = {.count = 1, .reusable = true}, SHIFT(673),
  [1391] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 2),
  [1393] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 2),
  [1395] = {.count = 1, .reusable = false}, SHIFT(674),
  [1397] = {.count = 1, .reusable = false}, SHIFT(675),
  [1399] = {.count = 1, .reusable = false}, SHIFT(676),
  [1401] = {.count = 1, .reusable = false}, SHIFT(677),
  [1403] = {.count = 1, .reusable = false}, SHIFT(678),
  [1405] = {.count = 1, .reusable = false}, SHIFT(679),
  [1407] = {.count = 1, .reusable = false}, SHIFT(680),
  [1409] = {.count = 1, .reusable = false}, SHIFT(681),
  [1411] = {.count = 1, .reusable = false}, SHIFT(682),
  [1413] = {.count = 1, .reusable = true}, REDUCE(sym_statement_block, 3),
  [1415] = {.count = 1, .reusable = false}, REDUCE(sym_statement_block, 3),
  [1417] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(434),
  [1420] = {.count = 1, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [1422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(380),
  [1425] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(436),
  [1428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(436),
  [1431] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(382),
  [1434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(383),
  [1437] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(384),
  [1440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(385),
  [1443] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(439),
  [1446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(386),
  [1449] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(387),
  [1452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(388),
  [1455] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(437),
  [1458] = {.count = 2, .reusable = false}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(438),
  [1461] = {.count = 1, .reusable = true}, REDUCE(sym_method_declaration, 5),
  [1463] = {.count = 1, .reusable = false}, REDUCE(sym_method_declaration, 5),
  [1465] = {.count = 1, .reusable = true}, SHIFT(688),
  [1467] = {.count = 1, .reusable = true}, SHIFT(689),
  [1469] = {.count = 1, .reusable = true}, REDUCE(sym_constructor_declaration, 5),
  [1471] = {.count = 1, .reusable = false}, REDUCE(sym_constructor_declaration, 5),
  [1473] = {.count = 1, .reusable = true}, SHIFT(691),
  [1475] = {.count = 1, .reusable = true}, SHIFT(692),
  [1477] = {.count = 1, .reusable = true}, SHIFT(693),
  [1479] = {.count = 1, .reusable = true}, SHIFT(694),
  [1481] = {.count = 1, .reusable = true}, REDUCE(sym_field_declaration, 5),
  [1483] = {.count = 1, .reusable = false}, REDUCE(sym_field_declaration, 5),
  [1485] = {.count = 1, .reusable = false}, SHIFT(698),
  [1487] = {.count = 1, .reusable = false}, SHIFT(699),
  [1489] = {.count = 1, .reusable = false}, SHIFT(700),
  [1491] = {.count = 1, .reusable = false}, SHIFT(701),
  [1493] = {.count = 1, .reusable = false}, SHIFT(702),
  [1495] = {.count = 1, .reusable = false}, SHIFT(703),
  [1497] = {.count = 1, .reusable = false}, SHIFT(704),
  [1499] = {.count = 1, .reusable = false}, SHIFT(705),
  [1501] = {.count = 1, .reusable = false}, SHIFT(706),
  [1503] = {.count = 1, .reusable = true}, SHIFT(707),
  [1505] = {.count = 1, .reusable = true}, SHIFT(708),
  [1507] = {.count = 1, .reusable = true}, SHIFT(709),
  [1509] = {.count = 1, .reusable = true}, SHIFT(710),
  [1511] = {.count = 1, .reusable = true}, SHIFT(711),
  [1513] = {.count = 1, .reusable = true}, SHIFT(717),
  [1515] = {.count = 1, .reusable = true}, SHIFT(718),
  [1517] = {.count = 1, .reusable = true}, SHIFT(719),
  [1519] = {.count = 1, .reusable = true}, SHIFT(720),
  [1521] = {.count = 1, .reusable = true}, SHIFT(721),
  [1523] = {.count = 1, .reusable = true}, SHIFT(722),
  [1525] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_expression, 3),
  [1527] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_expression, 3),
  [1529] = {.count = 1, .reusable = false}, SHIFT(724),
  [1531] = {.count = 1, .reusable = false}, SHIFT(725),
  [1533] = {.count = 1, .reusable = false}, SHIFT(726),
  [1535] = {.count = 1, .reusable = false}, SHIFT(727),
  [1537] = {.count = 1, .reusable = false}, SHIFT(728),
  [1539] = {.count = 1, .reusable = false}, SHIFT(729),
  [1541] = {.count = 1, .reusable = false}, SHIFT(730),
  [1543] = {.count = 1, .reusable = false}, SHIFT(731),
  [1545] = {.count = 1, .reusable = false}, SHIFT(732),
  [1547] = {.count = 1, .reusable = true}, REDUCE(sym_character_literal, 3),
  [1549] = {.count = 1, .reusable = false}, REDUCE(sym_character_literal, 3),
  [1551] = {.count = 1, .reusable = true}, REDUCE(sym_real_literal, 3),
  [1553] = {.count = 1, .reusable = false}, REDUCE(sym_real_literal, 3),
  [1555] = {.count = 1, .reusable = true}, SHIFT(733),
  [1557] = {.count = 1, .reusable = true}, SHIFT(734),
  [1559] = {.count = 1, .reusable = true}, REDUCE(sym__regular_string_literal, 3),
  [1561] = {.count = 1, .reusable = false}, REDUCE(sym__regular_string_literal, 3),
  [1563] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2), SHIFT_REPEAT(636),
  [1566] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
  [1568] = {.count = 1, .reusable = true}, REDUCE(sym__verbatim_string_literal, 3),
  [1570] = {.count = 1, .reusable = false}, REDUCE(sym__verbatim_string_literal, 3),
  [1572] = {.count = 1, .reusable = true}, SHIFT(735),
  [1574] = {.count = 1, .reusable = true}, SHIFT(736),
  [1576] = {.count = 1, .reusable = true}, SHIFT(737),
  [1578] = {.count = 1, .reusable = true}, SHIFT(738),
  [1580] = {.count = 1, .reusable = true}, SHIFT(739),
  [1582] = {.count = 1, .reusable = false}, SHIFT(740),
  [1584] = {.count = 1, .reusable = true}, SHIFT(741),
  [1586] = {.count = 1, .reusable = false}, SHIFT(741),
  [1588] = {.count = 1, .reusable = true}, SHIFT(742),
  [1590] = {.count = 1, .reusable = true}, SHIFT(743),
  [1592] = {.count = 1, .reusable = false}, SHIFT(743),
  [1594] = {.count = 1, .reusable = false}, SHIFT(744),
  [1596] = {.count = 1, .reusable = true}, SHIFT(744),
  [1598] = {.count = 1, .reusable = true}, SHIFT(745),
  [1600] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [1602] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [1604] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 8),
  [1606] = {.count = 1, .reusable = true}, SHIFT(746),
  [1608] = {.count = 1, .reusable = true}, REDUCE(sym_array_rank_specifier, 2),
  [1610] = {.count = 1, .reusable = true}, SHIFT(748),
  [1612] = {.count = 1, .reusable = true}, SHIFT(747),
  [1614] = {.count = 1, .reusable = true}, SHIFT(749),
  [1616] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(522),
  [1619] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 4),
  [1621] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_array, 4),
  [1623] = {.count = 1, .reusable = true}, SHIFT(751),
  [1625] = {.count = 1, .reusable = true}, SHIFT(752),
  [1627] = {.count = 1, .reusable = true}, SHIFT(753),
  [1629] = {.count = 1, .reusable = true}, SHIFT(754),
  [1631] = {.count = 1, .reusable = false}, SHIFT(755),
  [1633] = {.count = 1, .reusable = true}, SHIFT(756),
  [1635] = {.count = 1, .reusable = false}, SHIFT(756),
  [1637] = {.count = 1, .reusable = true}, SHIFT(757),
  [1639] = {.count = 1, .reusable = true}, SHIFT(758),
  [1641] = {.count = 1, .reusable = false}, SHIFT(758),
  [1643] = {.count = 1, .reusable = false}, SHIFT(759),
  [1645] = {.count = 1, .reusable = true}, SHIFT(759),
  [1647] = {.count = 1, .reusable = true}, SHIFT(760),
  [1649] = {.count = 1, .reusable = true}, SHIFT(761),
  [1651] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 8),
  [1653] = {.count = 1, .reusable = true}, REDUCE(sym_interface_declaration, 8),
  [1655] = {.count = 1, .reusable = true}, REDUCE(sym_struct_declaration, 8),
  [1657] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 6),
  [1659] = {.count = 1, .reusable = false}, REDUCE(sym_interface_declaration, 6),
  [1661] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 6),
  [1663] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 6),
  [1665] = {.count = 1, .reusable = true}, SHIFT(763),
  [1667] = {.count = 1, .reusable = true}, SHIFT(764),
  [1669] = {.count = 1, .reusable = true}, REDUCE(sym_variable_assignment_statement, 3),
  [1671] = {.count = 1, .reusable = false}, REDUCE(sym_variable_assignment_statement, 3),
  [1673] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 3),
  [1675] = {.count = 1, .reusable = false}, REDUCE(sym_return_statement, 3),
  [1677] = {.count = 1, .reusable = true}, SHIFT(766),
  [1679] = {.count = 1, .reusable = true}, REDUCE(sym_method_declaration, 6),
  [1681] = {.count = 1, .reusable = false}, REDUCE(sym_method_declaration, 6),
  [1683] = {.count = 1, .reusable = true}, SHIFT(767),
  [1685] = {.count = 1, .reusable = true}, SHIFT(768),
  [1687] = {.count = 1, .reusable = true}, SHIFT(769),
  [1689] = {.count = 1, .reusable = false}, REDUCE(sym_delegate_declaration, 6),
  [1691] = {.count = 1, .reusable = true}, SHIFT(775),
  [1693] = {.count = 1, .reusable = true}, SHIFT(776),
  [1695] = {.count = 1, .reusable = true}, REDUCE(sym_constructor_declaration, 6),
  [1697] = {.count = 1, .reusable = false}, REDUCE(sym_constructor_declaration, 6),
  [1699] = {.count = 1, .reusable = true}, SHIFT(778),
  [1701] = {.count = 1, .reusable = true}, SHIFT(779),
  [1703] = {.count = 1, .reusable = true}, SHIFT(780),
  [1705] = {.count = 1, .reusable = true}, SHIFT(782),
  [1707] = {.count = 1, .reusable = true}, SHIFT(783),
  [1709] = {.count = 1, .reusable = true}, SHIFT(784),
  [1711] = {.count = 1, .reusable = true}, SHIFT(789),
  [1713] = {.count = 1, .reusable = true}, SHIFT(790),
  [1715] = {.count = 1, .reusable = true}, SHIFT(791),
  [1717] = {.count = 1, .reusable = true}, REDUCE(sym_real_literal, 4),
  [1719] = {.count = 1, .reusable = false}, REDUCE(sym_real_literal, 4),
  [1721] = {.count = 1, .reusable = true}, SHIFT(792),
  [1723] = {.count = 1, .reusable = false}, SHIFT(793),
  [1725] = {.count = 1, .reusable = false}, SHIFT(794),
  [1727] = {.count = 1, .reusable = false}, SHIFT(795),
  [1729] = {.count = 1, .reusable = false}, SHIFT(796),
  [1731] = {.count = 1, .reusable = false}, SHIFT(797),
  [1733] = {.count = 1, .reusable = false}, SHIFT(798),
  [1735] = {.count = 1, .reusable = false}, SHIFT(799),
  [1737] = {.count = 1, .reusable = false}, SHIFT(800),
  [1739] = {.count = 1, .reusable = false}, SHIFT(801),
  [1741] = {.count = 1, .reusable = false}, SHIFT(802),
  [1743] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 9),
  [1745] = {.count = 1, .reusable = true}, REDUCE(sym_array_rank_specifier, 3),
  [1747] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2), SHIFT_REPEAT(748),
  [1750] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
  [1752] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 5),
  [1754] = {.count = 1, .reusable = false}, SHIFT(803),
  [1756] = {.count = 1, .reusable = false}, SHIFT(804),
  [1758] = {.count = 1, .reusable = false}, SHIFT(805),
  [1760] = {.count = 1, .reusable = false}, SHIFT(806),
  [1762] = {.count = 1, .reusable = false}, SHIFT(807),
  [1764] = {.count = 1, .reusable = false}, SHIFT(808),
  [1766] = {.count = 1, .reusable = false}, SHIFT(809),
  [1768] = {.count = 1, .reusable = false}, SHIFT(810),
  [1770] = {.count = 1, .reusable = false}, SHIFT(811),
  [1772] = {.count = 1, .reusable = true}, SHIFT(812),
  [1774] = {.count = 1, .reusable = true}, SHIFT(813),
  [1776] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 7),
  [1778] = {.count = 1, .reusable = true}, SHIFT(814),
  [1780] = {.count = 1, .reusable = true}, SHIFT(815),
  [1782] = {.count = 1, .reusable = false}, SHIFT(816),
  [1784] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 7),
  [1786] = {.count = 1, .reusable = false}, REDUCE(sym_interface_declaration, 7),
  [1788] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 7),
  [1790] = {.count = 1, .reusable = true}, REDUCE(sym_method_declaration, 7),
  [1792] = {.count = 1, .reusable = false}, REDUCE(sym_method_declaration, 7),
  [1794] = {.count = 1, .reusable = true}, SHIFT(818),
  [1796] = {.count = 1, .reusable = true}, SHIFT(819),
  [1798] = {.count = 1, .reusable = true}, SHIFT(820),
  [1800] = {.count = 1, .reusable = false}, REDUCE(sym_delegate_declaration, 7),
  [1802] = {.count = 1, .reusable = false}, SHIFT(823),
  [1804] = {.count = 1, .reusable = true}, SHIFT(824),
  [1806] = {.count = 1, .reusable = true}, SHIFT(825),
  [1808] = {.count = 1, .reusable = true}, SHIFT(827),
  [1810] = {.count = 1, .reusable = true}, SHIFT(828),
  [1812] = {.count = 1, .reusable = true}, SHIFT(829),
  [1814] = {.count = 1, .reusable = false}, SHIFT(831),
  [1816] = {.count = 1, .reusable = true}, REDUCE(sym_real_literal, 5),
  [1818] = {.count = 1, .reusable = false}, REDUCE(sym_real_literal, 5),
  [1820] = {.count = 1, .reusable = true}, REDUCE(sym_ternary_expression, 5),
  [1822] = {.count = 1, .reusable = true}, SHIFT(832),
  [1824] = {.count = 1, .reusable = true}, SHIFT(833),
  [1826] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 10),
  [1828] = {.count = 1, .reusable = true}, SHIFT(834),
  [1830] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 8),
  [1832] = {.count = 1, .reusable = true}, SHIFT(835),
  [1834] = {.count = 1, .reusable = true}, SHIFT(836),
  [1836] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 8),
  [1838] = {.count = 1, .reusable = false}, REDUCE(sym_interface_declaration, 8),
  [1840] = {.count = 1, .reusable = false}, REDUCE(sym_struct_declaration, 8),
  [1842] = {.count = 1, .reusable = true}, REDUCE(sym_method_declaration, 8),
  [1844] = {.count = 1, .reusable = false}, REDUCE(sym_method_declaration, 8),
  [1846] = {.count = 1, .reusable = true}, SHIFT(838),
  [1848] = {.count = 1, .reusable = true}, SHIFT(839),
  [1850] = {.count = 1, .reusable = false}, SHIFT(841),
  [1852] = {.count = 1, .reusable = false}, SHIFT(842),
  [1854] = {.count = 1, .reusable = true}, REDUCE(sym_enum_declaration, 11),
  [1856] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 9),
  [1858] = {.count = 1, .reusable = true}, SHIFT(843),
  [1860] = {.count = 1, .reusable = true}, SHIFT(844),
  [1862] = {.count = 1, .reusable = true}, SHIFT(845),
  [1864] = {.count = 1, .reusable = true}, SHIFT(846),
  [1866] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 10),
  [1868] = {.count = 1, .reusable = true}, SHIFT(847),
  [1870] = {.count = 1, .reusable = true}, SHIFT(848),
  [1872] = {.count = 1, .reusable = false}, REDUCE(sym_enum_declaration, 11),
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
