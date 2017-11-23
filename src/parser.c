#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 697
#define SYMBOL_COUNT 173
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_extern = 1,
  anon_sym_alias = 2,
  anon_sym_SEMI = 3,
  anon_sym_using = 4,
  anon_sym_namespace = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_class = 8,
  anon_sym_unsafe = 9,
  anon_sym_abstract = 10,
  anon_sym_sealed = 11,
  anon_sym_static = 12,
  anon_sym_new = 13,
  anon_sym_public = 14,
  anon_sym_protected = 15,
  anon_sym_internal = 16,
  anon_sym_private = 17,
  anon_sym_interface = 18,
  anon_sym_struct = 19,
  anon_sym_enum = 20,
  anon_sym_COLON = 21,
  anon_sym_COMMA = 22,
  anon_sym_sbyte = 23,
  anon_sym_byte = 24,
  anon_sym_short = 25,
  anon_sym_ushort = 26,
  anon_sym_int = 27,
  anon_sym_uint = 28,
  anon_sym_long = 29,
  anon_sym_ulong = 30,
  anon_sym_char = 31,
  anon_sym_delegate = 32,
  sym_void_keyword = 33,
  anon_sym_LPAREN = 34,
  anon_sym_RPAREN = 35,
  anon_sym_ref = 36,
  anon_sym_out = 37,
  anon_sym_this = 38,
  sym_params_keyword = 39,
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  anon_sym_assembly = 42,
  anon_sym_module = 43,
  sym_const_keyword = 44,
  anon_sym_readonly = 45,
  anon_sym_volatile = 46,
  anon_sym_EQ = 47,
  anon_sym_true = 48,
  anon_sym_false = 49,
  anon_sym_SQUOTE = 50,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 51,
  sym__hexadecimal_escape_sequence = 52,
  aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 53,
  aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 54,
  anon_sym_BSLASH_SQUOTE = 55,
  anon_sym_BSLASH_DQUOTE = 56,
  anon_sym_BSLASH_BSLASH = 57,
  anon_sym_BSLASH0 = 58,
  anon_sym_BSLASHa = 59,
  anon_sym_BSLASHb = 60,
  anon_sym_BSLASHf = 61,
  anon_sym_BSLASHn = 62,
  anon_sym_BSLASHr = 63,
  anon_sym_BSLASHt = 64,
  anon_sym_BSLASHv = 65,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 66,
  aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 67,
  sym__integer_type_suffix = 68,
  sym_null_literal = 69,
  anon_sym_DOT = 70,
  sym__real_type_suffix = 71,
  sym__exponent_part = 72,
  anon_sym_DQUOTE = 73,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 74,
  anon_sym_AT_DQUOTE = 75,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 76,
  anon_sym_bool = 77,
  anon_sym_decimal = 78,
  anon_sym_double = 79,
  anon_sym_float = 80,
  anon_sym_object = 81,
  anon_sym_string = 82,
  anon_sym_LT = 83,
  anon_sym_GT = 84,
  anon_sym_COLON_COLON = 85,
  sym_global = 86,
  sym_identifier_name = 87,
  sym_comment = 88,
  anon_sym_async = 89,
  sym_compilation_unit = 90,
  sym__type_declaration = 91,
  sym_extern_alias_directive = 92,
  sym_using_directive = 93,
  sym_namespace_declaration = 94,
  sym_class_declaration = 95,
  sym_class_modifiers = 96,
  sym__class_modifiers = 97,
  sym_interface_declaration = 98,
  sym_interface_modifiers = 99,
  sym__interface_modifiers = 100,
  sym_struct_declaration = 101,
  sym_struct_modifiers = 102,
  sym__struct_modifiers = 103,
  sym_enum_declaration = 104,
  sym_enum_member_declaration = 105,
  sym_enum_modifiers = 106,
  sym__integral_type = 107,
  sym_delegate_declaration = 108,
  sym_delegate_modifier = 109,
  sym_return_type = 110,
  sym_parameter_list = 111,
  sym__formal_parameter_list = 112,
  sym_parameter = 113,
  sym_parameter_modifier = 114,
  sym_parameter_array = 115,
  sym_array_type = 116,
  sym_array_rank_specifier = 117,
  sym__attributes = 118,
  sym__attribute_section = 119,
  sym_attribute_list = 120,
  sym_attribute = 121,
  sym_attribute_argument_list = 122,
  sym__global_attributes = 123,
  sym_field_declaration = 124,
  sym_field_modifiers = 125,
  sym__field_modifiers = 126,
  sym_variable_declaration = 127,
  sym__type = 128,
  sym_generic_name = 129,
  sym_variable_declarator = 130,
  sym_equals_value_clause = 131,
  sym__expression = 132,
  sym__literal = 133,
  sym_boolean_literal = 134,
  sym_character_literal = 135,
  sym__unicode_escape_sequence = 136,
  sym__simple_escape_sequence = 137,
  sym_integer_literal = 138,
  sym_real_literal = 139,
  sym_string_literal = 140,
  sym__regular_string_literal = 141,
  sym__regular_string_literal_character = 142,
  sym__verbatim_string_literal = 143,
  sym_predefined_type = 144,
  sym_type_parameter_list = 145,
  sym_type_parameter = 146,
  sym_qualified_name = 147,
  sym_alias_qualified_name = 148,
  sym_name_equals = 149,
  sym_static = 150,
  sym_method_declaration = 151,
  sym_method_modifiers = 152,
  sym_statement_block = 153,
  sym__statement = 154,
  sym_empty_statement = 155,
  aux_sym_compilation_unit_repeat1 = 156,
  aux_sym_compilation_unit_repeat2 = 157,
  aux_sym_compilation_unit_repeat3 = 158,
  aux_sym_compilation_unit_repeat4 = 159,
  aux_sym_namespace_declaration_repeat1 = 160,
  aux_sym_class_declaration_repeat1 = 161,
  aux_sym_interface_declaration_repeat1 = 162,
  aux_sym_struct_declaration_repeat1 = 163,
  aux_sym_enum_declaration_repeat1 = 164,
  aux_sym__formal_parameter_list_repeat1 = 165,
  aux_sym_array_rank_specifier_repeat1 = 166,
  aux_sym__attributes_repeat1 = 167,
  aux_sym_attribute_list_repeat1 = 168,
  aux_sym_variable_declaration_repeat1 = 169,
  aux_sym__regular_string_literal_repeat1 = 170,
  aux_sym_type_parameter_list_repeat1 = 171,
  aux_sym_statement_block_repeat1 = 172,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
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
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COLON_COLON] = "::",
  [sym_global] = "global",
  [sym_identifier_name] = "identifier_name",
  [sym_comment] = "comment",
  [anon_sym_async] = "async",
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
  [sym_method_declaration] = "method_declaration",
  [sym_method_modifiers] = "method_modifiers",
  [sym_statement_block] = "statement_block",
  [sym__statement] = "_statement",
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'E')
        ADVANCE(14);
      if (lookahead == 'L')
        ADVANCE(18);
      if (lookahead == 'U')
        ADVANCE(20);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead == 'a')
        ADVANCE(51);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'e')
        ADVANCE(106);
      if (lookahead == 'f')
        ADVANCE(110);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(133);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(146);
      if (lookahead == 'p')
        ADVANCE(154);
      if (lookahead == 'r')
        ADVANCE(178);
      if (lookahead == 's')
        ADVANCE(187);
      if (lookahead == 't')
        ADVANCE(213);
      if (lookahead == 'u')
        ADVANCE(217);
      if (lookahead == 'v')
        ADVANCE(235);
      if (('D' <= lookahead && lookahead <= 'F'))
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 3:
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'x')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier_name);
      if (('+' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= ']'))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= 'Z'))
        ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__exponent_part);
      if (('+' <= lookahead && lookahead <= ']'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__exponent_part);
      if (('+' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= ']'))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= 'Z'))
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(19);
      if (lookahead == 'u')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(19);
      if (lookahead == 'l')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '\'')
        ADVANCE(22);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == 'U')
        ADVANCE(24);
      if (lookahead == '\\')
        ADVANCE(33);
      if (lookahead == 'a')
        ADVANCE(34);
      if (lookahead == 'b')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'n')
        ADVANCE(37);
      if (lookahead == 'r')
        ADVANCE(38);
      if (lookahead == 't')
        ADVANCE(39);
      if (lookahead == 'u')
        ADVANCE(40);
      if (lookahead == 'v')
        ADVANCE(45);
      if (lookahead == 'x')
        ADVANCE(46);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(25);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(26);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(42);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 's')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(60);
      if (lookahead == 'y')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_assembly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_async);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 'y')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(77);
      if (lookahead == 'l')
        ADVANCE(80);
      if (lookahead == 'o')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == 'o')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(90);
      if (lookahead == 'l')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_delegate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(107);
      if (('+' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= ']'))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= 'Z'))
        ADVANCE(17);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'l')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead == 'n')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_internal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(19);
      if (lookahead == 'o')
        ADVANCE(134);
      if (lookahead == 'u')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'o')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'w')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(147);
      if (lookahead == 'u')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'j')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(155);
      if (lookahead == 'r')
        ADVANCE(160);
      if (lookahead == 'u')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_params_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(161);
      if (lookahead == 'o')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'v')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(180);
      if (lookahead == 'f')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(188);
      if (lookahead == 'e')
        ADVANCE(192);
      if (lookahead == 'h')
        ADVANCE(197);
      if (lookahead == 't')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_sbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_sealed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(202);
      if (lookahead == 'r')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(207);
      if (lookahead == 'u')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(221);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'o')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead == 'l')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_void_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 246:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(247);
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(248);
      if (lookahead == ')')
        ADVANCE(249);
      if (lookahead == ',')
        ADVANCE(250);
      if (lookahead == '.')
        ADVANCE(251);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(252);
      if (lookahead == ';')
        ADVANCE(253);
      if (lookahead == '<')
        ADVANCE(254);
      if (lookahead == '=')
        ADVANCE(255);
      if (lookahead == '>')
        ADVANCE(256);
      if (lookahead == '[')
        ADVANCE(257);
      if (lookahead == ']')
        ADVANCE(258);
      if (lookahead == 'a')
        ADVANCE(259);
      if (lookahead == 'b')
        ADVANCE(271);
      if (lookahead == 'c')
        ADVANCE(275);
      if (lookahead == 'd')
        ADVANCE(283);
      if (lookahead == 'e')
        ADVANCE(291);
      if (lookahead == 'i')
        ADVANCE(300);
      if (lookahead == 'l')
        ADVANCE(312);
      if (lookahead == 'n')
        ADVANCE(316);
      if (lookahead == 'p')
        ADVANCE(327);
      if (lookahead == 's')
        ADVANCE(351);
      if (lookahead == 'u')
        ADVANCE(374);
      if (lookahead == '{')
        ADVANCE(395);
      if (lookahead == '}')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(13);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 259:
      if (lookahead == 'b')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(267);
      END_STATE();
    case 260:
      if (lookahead == 's')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 't')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'r')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'a')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'c')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 't')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 267:
      if (lookahead == 'i')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'a')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 's')
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 271:
      if (lookahead == 'y')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 't')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'e')
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 275:
      if (lookahead == 'h')
        ADVANCE(276);
      if (lookahead == 'l')
        ADVANCE(279);
      END_STATE();
    case 276:
      if (lookahead == 'a')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'r')
        ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 279:
      if (lookahead == 'a')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 's')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 's')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 283:
      if (lookahead == 'e')
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
      if (lookahead == 'g')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'a')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 't')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'e')
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 291:
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'x')
        ADVANCE(295);
      END_STATE();
    case 292:
      if (lookahead == 'u')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'm')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 295:
      if (lookahead == 't')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'e')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'r')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'n')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 300:
      if (lookahead == 'n')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 't')
        ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'r')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'f')
        ADVANCE(305);
      if (lookahead == 'n')
        ADVANCE(309);
      END_STATE();
    case 305:
      if (lookahead == 'a')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'c')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'e')
        ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 309:
      if (lookahead == 'a')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'l')
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 312:
      if (lookahead == 'o')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'n')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'g')
        ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 316:
      if (lookahead == 'a')
        ADVANCE(317);
      if (lookahead == 'e')
        ADVANCE(325);
      END_STATE();
    case 317:
      if (lookahead == 'm')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'e')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 's')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'p')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'a')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'c')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'e')
        ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 325:
      if (lookahead == 'w')
        ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 327:
      if (lookahead == 'a')
        ADVANCE(328);
      if (lookahead == 'r')
        ADVANCE(333);
      if (lookahead == 'u')
        ADVANCE(346);
      END_STATE();
    case 328:
      if (lookahead == 'r')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'a')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'm')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 's')
        ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_params_keyword);
      END_STATE();
    case 333:
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'o')
        ADVANCE(339);
      END_STATE();
    case 334:
      if (lookahead == 'v')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 'a')
        ADVANCE(336);
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
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 339:
      if (lookahead == 't')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'e')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'c')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 't')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'e')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'd')
        ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 346:
      if (lookahead == 'b')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'l')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'i')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'c')
        ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 351:
      if (lookahead == 'b')
        ADVANCE(352);
      if (lookahead == 'e')
        ADVANCE(356);
      if (lookahead == 'h')
        ADVANCE(361);
      if (lookahead == 't')
        ADVANCE(365);
      END_STATE();
    case 352:
      if (lookahead == 'y')
        ADVANCE(353);
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
      ACCEPT_TOKEN(anon_sym_sbyte);
      END_STATE();
    case 356:
      if (lookahead == 'a')
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
      if (lookahead == 'd')
        ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_sealed);
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
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 365:
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 'r')
        ADVANCE(370);
      END_STATE();
    case 366:
      if (lookahead == 't')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 'i')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'c')
        ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 370:
      if (lookahead == 'u')
        ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 'c')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 't')
        ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 374:
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == 'l')
        ADVANCE(378);
      if (lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 's')
        ADVANCE(387);
      END_STATE();
    case 375:
      if (lookahead == 'n')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 't')
        ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 378:
      if (lookahead == 'o')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'n')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'g')
        ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 382:
      if (lookahead == 's')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'a')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'f')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'e')
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 387:
      if (lookahead == 'h')
        ADVANCE(388);
      if (lookahead == 'i')
        ADVANCE(392);
      END_STATE();
    case 388:
      if (lookahead == 'o')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'r')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 't')
        ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 392:
      if (lookahead == 'n')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 'g')
        ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 397:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 's')
        ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 400:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 401:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 402:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(403);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 's')
        ADVANCE(412);
      if (lookahead == 'u')
        ADVANCE(415);
      if (lookahead == 'v')
        ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(405);
      if (lookahead == 'o')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(188);
      if (lookahead == 'h')
        ADVANCE(197);
      if (lookahead == 't')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(416);
      if (lookahead == 's')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 419:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(420);
      if (lookahead == 'm')
        ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 423:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(253);
      if (lookahead == '[')
        ADVANCE(257);
      if (lookahead == 'a')
        ADVANCE(424);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(425);
      if (lookahead == 'e')
        ADVANCE(426);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 'p')
        ADVANCE(427);
      if (lookahead == 'r')
        ADVANCE(428);
      if (lookahead == 's')
        ADVANCE(187);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead == 'v')
        ADVANCE(431);
      if (lookahead == '}')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == 'o')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(160);
      if (lookahead == 'u')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(416);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 433:
      if (lookahead == ',')
        ADVANCE(250);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(254);
      if (lookahead == '>')
        ADVANCE(256);
      if (lookahead == '[')
        ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(433);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 434:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(253);
      if (lookahead == '[')
        ADVANCE(257);
      if (lookahead == 'a')
        ADVANCE(435);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(425);
      if (lookahead == 'e')
        ADVANCE(426);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 'p')
        ADVANCE(427);
      if (lookahead == 'r')
        ADVANCE(428);
      if (lookahead == 's')
        ADVANCE(187);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead == 'v')
        ADVANCE(235);
      if (lookahead == '}')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 's')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 437:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(403);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 's')
        ADVANCE(412);
      if (lookahead == 'u')
        ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 438:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(257);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(439);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(440);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 'p')
        ADVANCE(427);
      if (lookahead == 'r')
        ADVANCE(428);
      if (lookahead == 's')
        ADVANCE(445);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead == 'v')
        ADVANCE(431);
      if (lookahead == '}')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(77);
      if (lookahead == 'o')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(188);
      if (lookahead == 'h')
        ADVANCE(197);
      if (lookahead == 't')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(202);
      if (lookahead == 'r')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 447:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(424);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(425);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(440);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 'p')
        ADVANCE(427);
      if (lookahead == 'r')
        ADVANCE(428);
      if (lookahead == 's')
        ADVANCE(187);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead == 'v')
        ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 448:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(424);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(440);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 'p')
        ADVANCE(427);
      if (lookahead == 'r')
        ADVANCE(428);
      if (lookahead == 's')
        ADVANCE(449);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead == 'v')
        ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(448);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(188);
      if (lookahead == 'e')
        ADVANCE(192);
      if (lookahead == 'h')
        ADVANCE(197);
      if (lookahead == 't')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 450:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(439);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 's')
        ADVANCE(412);
      if (lookahead == 'u')
        ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 451:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(452);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(403);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 's')
        ADVANCE(412);
      if (lookahead == 'u')
        ADVANCE(415);
      if (lookahead == 'v')
        ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 453:
      if (lookahead == ')')
        ADVANCE(249);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(257);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(403);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'o')
        ADVANCE(146);
      if (lookahead == 'p')
        ADVANCE(454);
      if (lookahead == 'r')
        ADVANCE(455);
      if (lookahead == 's')
        ADVANCE(412);
      if (lookahead == 't')
        ADVANCE(213);
      if (lookahead == 'u')
        ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 457:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(424);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(440);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 'p')
        ADVANCE(427);
      if (lookahead == 'r')
        ADVANCE(428);
      if (lookahead == 's')
        ADVANCE(187);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead == 'v')
        ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 458:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(424);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(411);
      if (lookahead == 'p')
        ADVANCE(427);
      if (lookahead == 'r')
        ADVANCE(428);
      if (lookahead == 's')
        ADVANCE(187);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead == 'v')
        ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 459:
      if (lookahead == '(')
        ADVANCE(248);
      if (lookahead == ',')
        ADVANCE(250);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(256);
      if (lookahead == '[')
        ADVANCE(257);
      if (lookahead == '{')
        ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 460:
      if (lookahead == '\"')
        ADVANCE(247);
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(251);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(461);
      if (lookahead == 'f')
        ADVANCE(463);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead == 't')
        ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(460);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 461:
      if (lookahead == '\"')
        ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 463:
      if (lookahead == 'a')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'l')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 's')
        ADVANCE(466);
      END_STATE();
    case 466:
      if (lookahead == 'e')
        ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 468:
      if (lookahead == 'u')
        ADVANCE(469);
      END_STATE();
    case 469:
      if (lookahead == 'l')
        ADVANCE(470);
      END_STATE();
    case 470:
      if (lookahead == 'l')
        ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 472:
      if (lookahead == 'r')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == 'u')
        ADVANCE(474);
      END_STATE();
    case 474:
      if (lookahead == 'e')
        ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 476:
      if (lookahead == '/')
        ADVANCE(477);
      if (lookahead == '\\')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(480);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(7);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(479);
      if (lookahead == '\'')
        ADVANCE(22);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == 'U')
        ADVANCE(24);
      if (lookahead == '\\')
        ADVANCE(33);
      if (lookahead == 'a')
        ADVANCE(34);
      if (lookahead == 'b')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'n')
        ADVANCE(37);
      if (lookahead == 'r')
        ADVANCE(38);
      if (lookahead == 't')
        ADVANCE(39);
      if (lookahead == 'u')
        ADVANCE(40);
      if (lookahead == 'v')
        ADVANCE(45);
      if (lookahead == 'x')
        ADVANCE(46);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 481:
      if (lookahead == ')')
        ADVANCE(249);
      if (lookahead == ',')
        ADVANCE(250);
      if (lookahead == '.')
        ADVANCE(251);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(253);
      if (lookahead == 'L')
        ADVANCE(482);
      if (lookahead == 'U')
        ADVANCE(484);
      if (lookahead == '[')
        ADVANCE(257);
      if (lookahead == 'l')
        ADVANCE(482);
      if (lookahead == 'p')
        ADVANCE(485);
      if (lookahead == 'u')
        ADVANCE(484);
      if (lookahead == '}')
        ADVANCE(396);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(481);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm')
        ADVANCE(487);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(483);
      if (lookahead == 'u')
        ADVANCE(483);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(483);
      if (lookahead == 'l')
        ADVANCE(483);
      END_STATE();
    case 485:
      if (lookahead == 'a')
        ADVANCE(328);
      END_STATE();
    case 486:
      if (('+' <= lookahead && lookahead <= ']'))
        ADVANCE(15);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__real_type_suffix);
      END_STATE();
    case 488:
      if (lookahead == '\n')
        SKIP(488);
      if (lookahead == '\"')
        ADVANCE(247);
      if (lookahead == '/')
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(491);
      if (lookahead != 0)
        ADVANCE(491);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(7);
      END_STATE();
    case 490:
      if (lookahead == '\"')
        ADVANCE(479);
      if (lookahead == '\'')
        ADVANCE(22);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == 'U')
        ADVANCE(24);
      if (lookahead == '\\')
        ADVANCE(33);
      if (lookahead == 'a')
        ADVANCE(34);
      if (lookahead == 'b')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'n')
        ADVANCE(37);
      if (lookahead == 'r')
        ADVANCE(38);
      if (lookahead == 't')
        ADVANCE(39);
      if (lookahead == 'u')
        ADVANCE(40);
      if (lookahead == 'v')
        ADVANCE(45);
      if (lookahead == 'x')
        ADVANCE(46);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(496);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(494);
      if (lookahead == '/')
        ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(496);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(496);
      if (lookahead != 0)
        ADVANCE(494);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(496);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(496);
      END_STATE();
    case 499:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(257);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(403);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'l')
        ADVANCE(410);
      if (lookahead == 'o')
        ADVANCE(146);
      if (lookahead == 'r')
        ADVANCE(455);
      if (lookahead == 's')
        ADVANCE(412);
      if (lookahead == 't')
        ADVANCE(213);
      if (lookahead == 'u')
        ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(499);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 246},
  [2] = {.lex_state = 246},
  [3] = {.lex_state = 397},
  [4] = {.lex_state = 400},
  [5] = {.lex_state = 401},
  [6] = {.lex_state = 246},
  [7] = {.lex_state = 246},
  [8] = {.lex_state = 246},
  [9] = {.lex_state = 401},
  [10] = {.lex_state = 401},
  [11] = {.lex_state = 401},
  [12] = {.lex_state = 402},
  [13] = {.lex_state = 419},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 246},
  [16] = {.lex_state = 246},
  [17] = {.lex_state = 246},
  [18] = {.lex_state = 246},
  [19] = {.lex_state = 246},
  [20] = {.lex_state = 246},
  [21] = {.lex_state = 246},
  [22] = {.lex_state = 246},
  [23] = {.lex_state = 246},
  [24] = {.lex_state = 246},
  [25] = {.lex_state = 246},
  [26] = {.lex_state = 246},
  [27] = {.lex_state = 246},
  [28] = {.lex_state = 423},
  [29] = {.lex_state = 246},
  [30] = {.lex_state = 246},
  [31] = {.lex_state = 246},
  [32] = {.lex_state = 246},
  [33] = {.lex_state = 246},
  [34] = {.lex_state = 423},
  [35] = {.lex_state = 401},
  [36] = {.lex_state = 400},
  [37] = {.lex_state = 246},
  [38] = {.lex_state = 246},
  [39] = {.lex_state = 246},
  [40] = {.lex_state = 246},
  [41] = {.lex_state = 400},
  [42] = {.lex_state = 246},
  [43] = {.lex_state = 246},
  [44] = {.lex_state = 246},
  [45] = {.lex_state = 246},
  [46] = {.lex_state = 246},
  [47] = {.lex_state = 246},
  [48] = {.lex_state = 246},
  [49] = {.lex_state = 246},
  [50] = {.lex_state = 246},
  [51] = {.lex_state = 246},
  [52] = {.lex_state = 433},
  [53] = {.lex_state = 401},
  [54] = {.lex_state = 433},
  [55] = {.lex_state = 401},
  [56] = {.lex_state = 433},
  [57] = {.lex_state = 246},
  [58] = {.lex_state = 246},
  [59] = {.lex_state = 246},
  [60] = {.lex_state = 246},
  [61] = {.lex_state = 401},
  [62] = {.lex_state = 401},
  [63] = {.lex_state = 401},
  [64] = {.lex_state = 401},
  [65] = {.lex_state = 402},
  [66] = {.lex_state = 246},
  [67] = {.lex_state = 246},
  [68] = {.lex_state = 246},
  [69] = {.lex_state = 246},
  [70] = {.lex_state = 246},
  [71] = {.lex_state = 246},
  [72] = {.lex_state = 246},
  [73] = {.lex_state = 246},
  [74] = {.lex_state = 246},
  [75] = {.lex_state = 246},
  [76] = {.lex_state = 246},
  [77] = {.lex_state = 401},
  [78] = {.lex_state = 246},
  [79] = {.lex_state = 423},
  [80] = {.lex_state = 246},
  [81] = {.lex_state = 401},
  [82] = {.lex_state = 246},
  [83] = {.lex_state = 400},
  [84] = {.lex_state = 401},
  [85] = {.lex_state = 246},
  [86] = {.lex_state = 246},
  [87] = {.lex_state = 434},
  [88] = {.lex_state = 437},
  [89] = {.lex_state = 246},
  [90] = {.lex_state = 438},
  [91] = {.lex_state = 246},
  [92] = {.lex_state = 423},
  [93] = {.lex_state = 246},
  [94] = {.lex_state = 401},
  [95] = {.lex_state = 246},
  [96] = {.lex_state = 433},
  [97] = {.lex_state = 246},
  [98] = {.lex_state = 401},
  [99] = {.lex_state = 246},
  [100] = {.lex_state = 246},
  [101] = {.lex_state = 423},
  [102] = {.lex_state = 401},
  [103] = {.lex_state = 246},
  [104] = {.lex_state = 246},
  [105] = {.lex_state = 246},
  [106] = {.lex_state = 246},
  [107] = {.lex_state = 246},
  [108] = {.lex_state = 401},
  [109] = {.lex_state = 401},
  [110] = {.lex_state = 401},
  [111] = {.lex_state = 401},
  [112] = {.lex_state = 401},
  [113] = {.lex_state = 402},
  [114] = {.lex_state = 246},
  [115] = {.lex_state = 246},
  [116] = {.lex_state = 246},
  [117] = {.lex_state = 246},
  [118] = {.lex_state = 246},
  [119] = {.lex_state = 246},
  [120] = {.lex_state = 246},
  [121] = {.lex_state = 246},
  [122] = {.lex_state = 246},
  [123] = {.lex_state = 246},
  [124] = {.lex_state = 401},
  [125] = {.lex_state = 447},
  [126] = {.lex_state = 448},
  [127] = {.lex_state = 434},
  [128] = {.lex_state = 401},
  [129] = {.lex_state = 401},
  [130] = {.lex_state = 401},
  [131] = {.lex_state = 402},
  [132] = {.lex_state = 437},
  [133] = {.lex_state = 438},
  [134] = {.lex_state = 402},
  [135] = {.lex_state = 434},
  [136] = {.lex_state = 434},
  [137] = {.lex_state = 246},
  [138] = {.lex_state = 246},
  [139] = {.lex_state = 246},
  [140] = {.lex_state = 246},
  [141] = {.lex_state = 246},
  [142] = {.lex_state = 401},
  [143] = {.lex_state = 423},
  [144] = {.lex_state = 450},
  [145] = {.lex_state = 450},
  [146] = {.lex_state = 246},
  [147] = {.lex_state = 401},
  [148] = {.lex_state = 451},
  [149] = {.lex_state = 434},
  [150] = {.lex_state = 246},
  [151] = {.lex_state = 246},
  [152] = {.lex_state = 434},
  [153] = {.lex_state = 246},
  [154] = {.lex_state = 401},
  [155] = {.lex_state = 437},
  [156] = {.lex_state = 438},
  [157] = {.lex_state = 438},
  [158] = {.lex_state = 438},
  [159] = {.lex_state = 450},
  [160] = {.lex_state = 246},
  [161] = {.lex_state = 401},
  [162] = {.lex_state = 438},
  [163] = {.lex_state = 438},
  [164] = {.lex_state = 438},
  [165] = {.lex_state = 246},
  [166] = {.lex_state = 401},
  [167] = {.lex_state = 423},
  [168] = {.lex_state = 401},
  [169] = {.lex_state = 401},
  [170] = {.lex_state = 401},
  [171] = {.lex_state = 402},
  [172] = {.lex_state = 437},
  [173] = {.lex_state = 423},
  [174] = {.lex_state = 423},
  [175] = {.lex_state = 246},
  [176] = {.lex_state = 246},
  [177] = {.lex_state = 246},
  [178] = {.lex_state = 246},
  [179] = {.lex_state = 246},
  [180] = {.lex_state = 423},
  [181] = {.lex_state = 450},
  [182] = {.lex_state = 246},
  [183] = {.lex_state = 423},
  [184] = {.lex_state = 423},
  [185] = {.lex_state = 401},
  [186] = {.lex_state = 246},
  [187] = {.lex_state = 246},
  [188] = {.lex_state = 401},
  [189] = {.lex_state = 401},
  [190] = {.lex_state = 401},
  [191] = {.lex_state = 246},
  [192] = {.lex_state = 246},
  [193] = {.lex_state = 453},
  [194] = {.lex_state = 246},
  [195] = {.lex_state = 246},
  [196] = {.lex_state = 246},
  [197] = {.lex_state = 246},
  [198] = {.lex_state = 401},
  [199] = {.lex_state = 246},
  [200] = {.lex_state = 246},
  [201] = {.lex_state = 246},
  [202] = {.lex_state = 401},
  [203] = {.lex_state = 246},
  [204] = {.lex_state = 246},
  [205] = {.lex_state = 246},
  [206] = {.lex_state = 246},
  [207] = {.lex_state = 246},
  [208] = {.lex_state = 246},
  [209] = {.lex_state = 401},
  [210] = {.lex_state = 246},
  [211] = {.lex_state = 246},
  [212] = {.lex_state = 246},
  [213] = {.lex_state = 246},
  [214] = {.lex_state = 457},
  [215] = {.lex_state = 450},
  [216] = {.lex_state = 458},
  [217] = {.lex_state = 246},
  [218] = {.lex_state = 246},
  [219] = {.lex_state = 246},
  [220] = {.lex_state = 401},
  [221] = {.lex_state = 246},
  [222] = {.lex_state = 401},
  [223] = {.lex_state = 401},
  [224] = {.lex_state = 401},
  [225] = {.lex_state = 401},
  [226] = {.lex_state = 401},
  [227] = {.lex_state = 402},
  [228] = {.lex_state = 246},
  [229] = {.lex_state = 437},
  [230] = {.lex_state = 246},
  [231] = {.lex_state = 246},
  [232] = {.lex_state = 246},
  [233] = {.lex_state = 246},
  [234] = {.lex_state = 246},
  [235] = {.lex_state = 450},
  [236] = {.lex_state = 434},
  [237] = {.lex_state = 246},
  [238] = {.lex_state = 246},
  [239] = {.lex_state = 402},
  [240] = {.lex_state = 246},
  [241] = {.lex_state = 434},
  [242] = {.lex_state = 437},
  [243] = {.lex_state = 459},
  [244] = {.lex_state = 246},
  [245] = {.lex_state = 434},
  [246] = {.lex_state = 246},
  [247] = {.lex_state = 246},
  [248] = {.lex_state = 437},
  [249] = {.lex_state = 450},
  [250] = {.lex_state = 438},
  [251] = {.lex_state = 246},
  [252] = {.lex_state = 438},
  [253] = {.lex_state = 438},
  [254] = {.lex_state = 438},
  [255] = {.lex_state = 246},
  [256] = {.lex_state = 246},
  [257] = {.lex_state = 246},
  [258] = {.lex_state = 246},
  [259] = {.lex_state = 401},
  [260] = {.lex_state = 246},
  [261] = {.lex_state = 401},
  [262] = {.lex_state = 401},
  [263] = {.lex_state = 401},
  [264] = {.lex_state = 401},
  [265] = {.lex_state = 402},
  [266] = {.lex_state = 437},
  [267] = {.lex_state = 246},
  [268] = {.lex_state = 246},
  [269] = {.lex_state = 246},
  [270] = {.lex_state = 246},
  [271] = {.lex_state = 246},
  [272] = {.lex_state = 450},
  [273] = {.lex_state = 423},
  [274] = {.lex_state = 246},
  [275] = {.lex_state = 423},
  [276] = {.lex_state = 423},
  [277] = {.lex_state = 246},
  [278] = {.lex_state = 460},
  [279] = {.lex_state = 246},
  [280] = {.lex_state = 246},
  [281] = {.lex_state = 401},
  [282] = {.lex_state = 246},
  [283] = {.lex_state = 246},
  [284] = {.lex_state = 401},
  [285] = {.lex_state = 401},
  [286] = {.lex_state = 246},
  [287] = {.lex_state = 437},
  [288] = {.lex_state = 437},
  [289] = {.lex_state = 401},
  [290] = {.lex_state = 246},
  [291] = {.lex_state = 246},
  [292] = {.lex_state = 437},
  [293] = {.lex_state = 246},
  [294] = {.lex_state = 453},
  [295] = {.lex_state = 453},
  [296] = {.lex_state = 401},
  [297] = {.lex_state = 453},
  [298] = {.lex_state = 246},
  [299] = {.lex_state = 246},
  [300] = {.lex_state = 246},
  [301] = {.lex_state = 434},
  [302] = {.lex_state = 438},
  [303] = {.lex_state = 423},
  [304] = {.lex_state = 246},
  [305] = {.lex_state = 246},
  [306] = {.lex_state = 246},
  [307] = {.lex_state = 246},
  [308] = {.lex_state = 246},
  [309] = {.lex_state = 246},
  [310] = {.lex_state = 246},
  [311] = {.lex_state = 246},
  [312] = {.lex_state = 434},
  [313] = {.lex_state = 246},
  [314] = {.lex_state = 438},
  [315] = {.lex_state = 246},
  [316] = {.lex_state = 423},
  [317] = {.lex_state = 246},
  [318] = {.lex_state = 401},
  [319] = {.lex_state = 246},
  [320] = {.lex_state = 246},
  [321] = {.lex_state = 434},
  [322] = {.lex_state = 246},
  [323] = {.lex_state = 246},
  [324] = {.lex_state = 246},
  [325] = {.lex_state = 246},
  [326] = {.lex_state = 246},
  [327] = {.lex_state = 401},
  [328] = {.lex_state = 246},
  [329] = {.lex_state = 246},
  [330] = {.lex_state = 246},
  [331] = {.lex_state = 401},
  [332] = {.lex_state = 401},
  [333] = {.lex_state = 401},
  [334] = {.lex_state = 401},
  [335] = {.lex_state = 402},
  [336] = {.lex_state = 437},
  [337] = {.lex_state = 246},
  [338] = {.lex_state = 401},
  [339] = {.lex_state = 246},
  [340] = {.lex_state = 401},
  [341] = {.lex_state = 246},
  [342] = {.lex_state = 437},
  [343] = {.lex_state = 459},
  [344] = {.lex_state = 246},
  [345] = {.lex_state = 438},
  [346] = {.lex_state = 438},
  [347] = {.lex_state = 246},
  [348] = {.lex_state = 437},
  [349] = {.lex_state = 246},
  [350] = {.lex_state = 434},
  [351] = {.lex_state = 246},
  [352] = {.lex_state = 438},
  [353] = {.lex_state = 246},
  [354] = {.lex_state = 423},
  [355] = {.lex_state = 246},
  [356] = {.lex_state = 401},
  [357] = {.lex_state = 246},
  [358] = {.lex_state = 246},
  [359] = {.lex_state = 423},
  [360] = {.lex_state = 246},
  [361] = {.lex_state = 246},
  [362] = {.lex_state = 246},
  [363] = {.lex_state = 246},
  [364] = {.lex_state = 401},
  [365] = {.lex_state = 246},
  [366] = {.lex_state = 401},
  [367] = {.lex_state = 401},
  [368] = {.lex_state = 401},
  [369] = {.lex_state = 401},
  [370] = {.lex_state = 402},
  [371] = {.lex_state = 437},
  [372] = {.lex_state = 246},
  [373] = {.lex_state = 401},
  [374] = {.lex_state = 246},
  [375] = {.lex_state = 476},
  [376] = {.lex_state = 481},
  [377] = {.lex_state = 481},
  [378] = {.lex_state = 246},
  [379] = {.lex_state = 460},
  [380] = {.lex_state = 488},
  [381] = {.lex_state = 492},
  [382] = {.lex_state = 246},
  [383] = {.lex_state = 246},
  [384] = {.lex_state = 246},
  [385] = {.lex_state = 246},
  [386] = {.lex_state = 246},
  [387] = {.lex_state = 246},
  [388] = {.lex_state = 401},
  [389] = {.lex_state = 246},
  [390] = {.lex_state = 246},
  [391] = {.lex_state = 401},
  [392] = {.lex_state = 246},
  [393] = {.lex_state = 246},
  [394] = {.lex_state = 246},
  [395] = {.lex_state = 499},
  [396] = {.lex_state = 246},
  [397] = {.lex_state = 246},
  [398] = {.lex_state = 246},
  [399] = {.lex_state = 401},
  [400] = {.lex_state = 437},
  [401] = {.lex_state = 437},
  [402] = {.lex_state = 246},
  [403] = {.lex_state = 453},
  [404] = {.lex_state = 434},
  [405] = {.lex_state = 438},
  [406] = {.lex_state = 423},
  [407] = {.lex_state = 246},
  [408] = {.lex_state = 401},
  [409] = {.lex_state = 246},
  [410] = {.lex_state = 434},
  [411] = {.lex_state = 438},
  [412] = {.lex_state = 423},
  [413] = {.lex_state = 246},
  [414] = {.lex_state = 246},
  [415] = {.lex_state = 434},
  [416] = {.lex_state = 434},
  [417] = {.lex_state = 434},
  [418] = {.lex_state = 434},
  [419] = {.lex_state = 438},
  [420] = {.lex_state = 438},
  [421] = {.lex_state = 434},
  [422] = {.lex_state = 423},
  [423] = {.lex_state = 423},
  [424] = {.lex_state = 246},
  [425] = {.lex_state = 246},
  [426] = {.lex_state = 246},
  [427] = {.lex_state = 246},
  [428] = {.lex_state = 246},
  [429] = {.lex_state = 246},
  [430] = {.lex_state = 246},
  [431] = {.lex_state = 246},
  [432] = {.lex_state = 401},
  [433] = {.lex_state = 246},
  [434] = {.lex_state = 246},
  [435] = {.lex_state = 246},
  [436] = {.lex_state = 434},
  [437] = {.lex_state = 434},
  [438] = {.lex_state = 246},
  [439] = {.lex_state = 246},
  [440] = {.lex_state = 246},
  [441] = {.lex_state = 246},
  [442] = {.lex_state = 401},
  [443] = {.lex_state = 246},
  [444] = {.lex_state = 246},
  [445] = {.lex_state = 401},
  [446] = {.lex_state = 246},
  [447] = {.lex_state = 246},
  [448] = {.lex_state = 438},
  [449] = {.lex_state = 246},
  [450] = {.lex_state = 423},
  [451] = {.lex_state = 434},
  [452] = {.lex_state = 434},
  [453] = {.lex_state = 423},
  [454] = {.lex_state = 438},
  [455] = {.lex_state = 438},
  [456] = {.lex_state = 423},
  [457] = {.lex_state = 423},
  [458] = {.lex_state = 423},
  [459] = {.lex_state = 246},
  [460] = {.lex_state = 246},
  [461] = {.lex_state = 246},
  [462] = {.lex_state = 246},
  [463] = {.lex_state = 246},
  [464] = {.lex_state = 246},
  [465] = {.lex_state = 401},
  [466] = {.lex_state = 246},
  [467] = {.lex_state = 246},
  [468] = {.lex_state = 423},
  [469] = {.lex_state = 246},
  [470] = {.lex_state = 246},
  [471] = {.lex_state = 246},
  [472] = {.lex_state = 246},
  [473] = {.lex_state = 401},
  [474] = {.lex_state = 246},
  [475] = {.lex_state = 246},
  [476] = {.lex_state = 246},
  [477] = {.lex_state = 246},
  [478] = {.lex_state = 246},
  [479] = {.lex_state = 460},
  [480] = {.lex_state = 246},
  [481] = {.lex_state = 481},
  [482] = {.lex_state = 481},
  [483] = {.lex_state = 488},
  [484] = {.lex_state = 488},
  [485] = {.lex_state = 488},
  [486] = {.lex_state = 246},
  [487] = {.lex_state = 488},
  [488] = {.lex_state = 488},
  [489] = {.lex_state = 246},
  [490] = {.lex_state = 246},
  [491] = {.lex_state = 246},
  [492] = {.lex_state = 246},
  [493] = {.lex_state = 246},
  [494] = {.lex_state = 246},
  [495] = {.lex_state = 246},
  [496] = {.lex_state = 401},
  [497] = {.lex_state = 453},
  [498] = {.lex_state = 401},
  [499] = {.lex_state = 246},
  [500] = {.lex_state = 499},
  [501] = {.lex_state = 499},
  [502] = {.lex_state = 499},
  [503] = {.lex_state = 499},
  [504] = {.lex_state = 246},
  [505] = {.lex_state = 246},
  [506] = {.lex_state = 401},
  [507] = {.lex_state = 401},
  [508] = {.lex_state = 246},
  [509] = {.lex_state = 246},
  [510] = {.lex_state = 246},
  [511] = {.lex_state = 246},
  [512] = {.lex_state = 246},
  [513] = {.lex_state = 434},
  [514] = {.lex_state = 438},
  [515] = {.lex_state = 423},
  [516] = {.lex_state = 401},
  [517] = {.lex_state = 246},
  [518] = {.lex_state = 434},
  [519] = {.lex_state = 434},
  [520] = {.lex_state = 434},
  [521] = {.lex_state = 438},
  [522] = {.lex_state = 434},
  [523] = {.lex_state = 423},
  [524] = {.lex_state = 434},
  [525] = {.lex_state = 246},
  [526] = {.lex_state = 401},
  [527] = {.lex_state = 434},
  [528] = {.lex_state = 434},
  [529] = {.lex_state = 246},
  [530] = {.lex_state = 434},
  [531] = {.lex_state = 438},
  [532] = {.lex_state = 423},
  [533] = {.lex_state = 246},
  [534] = {.lex_state = 246},
  [535] = {.lex_state = 246},
  [536] = {.lex_state = 246},
  [537] = {.lex_state = 434},
  [538] = {.lex_state = 246},
  [539] = {.lex_state = 246},
  [540] = {.lex_state = 246},
  [541] = {.lex_state = 246},
  [542] = {.lex_state = 246},
  [543] = {.lex_state = 246},
  [544] = {.lex_state = 246},
  [545] = {.lex_state = 246},
  [546] = {.lex_state = 434},
  [547] = {.lex_state = 246},
  [548] = {.lex_state = 246},
  [549] = {.lex_state = 438},
  [550] = {.lex_state = 423},
  [551] = {.lex_state = 434},
  [552] = {.lex_state = 423},
  [553] = {.lex_state = 438},
  [554] = {.lex_state = 423},
  [555] = {.lex_state = 423},
  [556] = {.lex_state = 423},
  [557] = {.lex_state = 246},
  [558] = {.lex_state = 401},
  [559] = {.lex_state = 423},
  [560] = {.lex_state = 434},
  [561] = {.lex_state = 438},
  [562] = {.lex_state = 423},
  [563] = {.lex_state = 246},
  [564] = {.lex_state = 246},
  [565] = {.lex_state = 246},
  [566] = {.lex_state = 246},
  [567] = {.lex_state = 246},
  [568] = {.lex_state = 246},
  [569] = {.lex_state = 246},
  [570] = {.lex_state = 246},
  [571] = {.lex_state = 423},
  [572] = {.lex_state = 246},
  [573] = {.lex_state = 481},
  [574] = {.lex_state = 246},
  [575] = {.lex_state = 481},
  [576] = {.lex_state = 246},
  [577] = {.lex_state = 488},
  [578] = {.lex_state = 246},
  [579] = {.lex_state = 246},
  [580] = {.lex_state = 246},
  [581] = {.lex_state = 246},
  [582] = {.lex_state = 401},
  [583] = {.lex_state = 246},
  [584] = {.lex_state = 246},
  [585] = {.lex_state = 499},
  [586] = {.lex_state = 246},
  [587] = {.lex_state = 246},
  [588] = {.lex_state = 246},
  [589] = {.lex_state = 246},
  [590] = {.lex_state = 246},
  [591] = {.lex_state = 246},
  [592] = {.lex_state = 246},
  [593] = {.lex_state = 246},
  [594] = {.lex_state = 246},
  [595] = {.lex_state = 434},
  [596] = {.lex_state = 434},
  [597] = {.lex_state = 434},
  [598] = {.lex_state = 434},
  [599] = {.lex_state = 434},
  [600] = {.lex_state = 246},
  [601] = {.lex_state = 434},
  [602] = {.lex_state = 434},
  [603] = {.lex_state = 438},
  [604] = {.lex_state = 423},
  [605] = {.lex_state = 246},
  [606] = {.lex_state = 401},
  [607] = {.lex_state = 434},
  [608] = {.lex_state = 434},
  [609] = {.lex_state = 246},
  [610] = {.lex_state = 434},
  [611] = {.lex_state = 438},
  [612] = {.lex_state = 423},
  [613] = {.lex_state = 246},
  [614] = {.lex_state = 246},
  [615] = {.lex_state = 246},
  [616] = {.lex_state = 423},
  [617] = {.lex_state = 423},
  [618] = {.lex_state = 423},
  [619] = {.lex_state = 423},
  [620] = {.lex_state = 423},
  [621] = {.lex_state = 246},
  [622] = {.lex_state = 434},
  [623] = {.lex_state = 438},
  [624] = {.lex_state = 423},
  [625] = {.lex_state = 246},
  [626] = {.lex_state = 401},
  [627] = {.lex_state = 423},
  [628] = {.lex_state = 434},
  [629] = {.lex_state = 438},
  [630] = {.lex_state = 423},
  [631] = {.lex_state = 246},
  [632] = {.lex_state = 246},
  [633] = {.lex_state = 246},
  [634] = {.lex_state = 481},
  [635] = {.lex_state = 246},
  [636] = {.lex_state = 246},
  [637] = {.lex_state = 401},
  [638] = {.lex_state = 499},
  [639] = {.lex_state = 246},
  [640] = {.lex_state = 246},
  [641] = {.lex_state = 246},
  [642] = {.lex_state = 434},
  [643] = {.lex_state = 434},
  [644] = {.lex_state = 246},
  [645] = {.lex_state = 434},
  [646] = {.lex_state = 434},
  [647] = {.lex_state = 434},
  [648] = {.lex_state = 246},
  [649] = {.lex_state = 434},
  [650] = {.lex_state = 438},
  [651] = {.lex_state = 423},
  [652] = {.lex_state = 401},
  [653] = {.lex_state = 434},
  [654] = {.lex_state = 434},
  [655] = {.lex_state = 423},
  [656] = {.lex_state = 423},
  [657] = {.lex_state = 246},
  [658] = {.lex_state = 423},
  [659] = {.lex_state = 423},
  [660] = {.lex_state = 423},
  [661] = {.lex_state = 246},
  [662] = {.lex_state = 434},
  [663] = {.lex_state = 438},
  [664] = {.lex_state = 423},
  [665] = {.lex_state = 401},
  [666] = {.lex_state = 423},
  [667] = {.lex_state = 246},
  [668] = {.lex_state = 246},
  [669] = {.lex_state = 246},
  [670] = {.lex_state = 434},
  [671] = {.lex_state = 434},
  [672] = {.lex_state = 246},
  [673] = {.lex_state = 434},
  [674] = {.lex_state = 434},
  [675] = {.lex_state = 434},
  [676] = {.lex_state = 246},
  [677] = {.lex_state = 423},
  [678] = {.lex_state = 423},
  [679] = {.lex_state = 246},
  [680] = {.lex_state = 423},
  [681] = {.lex_state = 423},
  [682] = {.lex_state = 423},
  [683] = {.lex_state = 246},
  [684] = {.lex_state = 246},
  [685] = {.lex_state = 434},
  [686] = {.lex_state = 434},
  [687] = {.lex_state = 246},
  [688] = {.lex_state = 423},
  [689] = {.lex_state = 423},
  [690] = {.lex_state = 246},
  [691] = {.lex_state = 434},
  [692] = {.lex_state = 434},
  [693] = {.lex_state = 423},
  [694] = {.lex_state = 423},
  [695] = {.lex_state = 434},
  [696] = {.lex_state = 423},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_unsafe] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(3),
    [anon_sym_sealed] = ACTIONS(3),
    [anon_sym_static] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(3),
    [anon_sym_public] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(3),
    [anon_sym_internal] = ACTIONS(3),
    [anon_sym_private] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(3),
    [anon_sym_sbyte] = ACTIONS(3),
    [anon_sym_byte] = ACTIONS(3),
    [anon_sym_short] = ACTIONS(3),
    [anon_sym_ushort] = ACTIONS(3),
    [anon_sym_int] = ACTIONS(3),
    [anon_sym_uint] = ACTIONS(3),
    [anon_sym_long] = ACTIONS(3),
    [anon_sym_ulong] = ACTIONS(3),
    [anon_sym_char] = ACTIONS(3),
    [anon_sym_delegate] = ACTIONS(3),
    [sym_void_keyword] = ACTIONS(3),
    [anon_sym_ref] = ACTIONS(3),
    [anon_sym_out] = ACTIONS(3),
    [anon_sym_this] = ACTIONS(3),
    [sym_params_keyword] = ACTIONS(3),
    [anon_sym_assembly] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(3),
    [sym_const_keyword] = ACTIONS(3),
    [anon_sym_readonly] = ACTIONS(3),
    [anon_sym_volatile] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__hexadecimal_escape_sequence] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
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
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [sym__integer_type_suffix] = ACTIONS(3),
    [sym__real_type_suffix] = ACTIONS(3),
    [sym__exponent_part] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(3),
    [anon_sym_decimal] = ACTIONS(3),
    [anon_sym_double] = ACTIONS(3),
    [anon_sym_float] = ACTIONS(3),
    [anon_sym_object] = ACTIONS(3),
    [anon_sym_string] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_global] = ACTIONS(3),
    [sym_identifier_name] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(3),
  },
  [1] = {
    [sym_compilation_unit] = STATE(14),
    [sym__type_declaration] = STATE(15),
    [sym_extern_alias_directive] = STATE(16),
    [sym_using_directive] = STATE(17),
    [sym_namespace_declaration] = STATE(15),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [sym__global_attributes] = STATE(29),
    [aux_sym_compilation_unit_repeat1] = STATE(30),
    [aux_sym_compilation_unit_repeat2] = STATE(31),
    [aux_sym_compilation_unit_repeat3] = STATE(32),
    [aux_sym_compilation_unit_repeat4] = STATE(33),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(10),
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
    [anon_sym_alias] = ACTIONS(38),
    [sym_comment] = ACTIONS(36),
  },
  [3] = {
    [sym_qualified_name] = STATE(39),
    [sym_alias_qualified_name] = STATE(40),
    [sym_name_equals] = STATE(41),
    [sym_static] = STATE(41),
    [anon_sym_static] = ACTIONS(40),
    [sym_global] = ACTIONS(42),
    [sym_identifier_name] = ACTIONS(44),
    [sym_comment] = ACTIONS(36),
  },
  [4] = {
    [sym_qualified_name] = STATE(42),
    [sym_alias_qualified_name] = STATE(40),
    [sym_global] = ACTIONS(42),
    [sym_identifier_name] = ACTIONS(46),
    [sym_comment] = ACTIONS(36),
  },
  [5] = {
    [sym_identifier_name] = ACTIONS(48),
    [sym_comment] = ACTIONS(36),
  },
  [6] = {
    [sym__class_modifiers] = STATE(45),
    [sym__struct_modifiers] = STATE(46),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_unsafe] = ACTIONS(52),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(52),
    [anon_sym_public] = ACTIONS(52),
    [anon_sym_protected] = ACTIONS(52),
    [anon_sym_internal] = ACTIONS(52),
    [anon_sym_private] = ACTIONS(52),
    [anon_sym_struct] = ACTIONS(54),
    [anon_sym_delegate] = ACTIONS(56),
    [sym_comment] = ACTIONS(36),
  },
  [7] = {
    [sym__class_modifiers] = STATE(45),
    [anon_sym_class] = ACTIONS(50),
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
  [8] = {
    [sym__class_modifiers] = STATE(45),
    [sym__interface_modifiers] = STATE(48),
    [sym__struct_modifiers] = STATE(46),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_unsafe] = ACTIONS(52),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(58),
    [anon_sym_public] = ACTIONS(58),
    [anon_sym_protected] = ACTIONS(58),
    [anon_sym_internal] = ACTIONS(58),
    [anon_sym_private] = ACTIONS(58),
    [anon_sym_interface] = ACTIONS(60),
    [anon_sym_struct] = ACTIONS(54),
    [anon_sym_enum] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(56),
    [sym_comment] = ACTIONS(36),
  },
  [9] = {
    [sym_identifier_name] = ACTIONS(64),
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
    [sym_return_type] = STATE(55),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [13] = {
    [sym_attribute_list] = STATE(59),
    [sym_attribute] = STATE(60),
    [anon_sym_assembly] = ACTIONS(76),
    [anon_sym_module] = ACTIONS(76),
    [sym_identifier_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(36),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_comment] = ACTIONS(36),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_namespace] = ACTIONS(82),
    [anon_sym_class] = ACTIONS(82),
    [anon_sym_unsafe] = ACTIONS(82),
    [anon_sym_abstract] = ACTIONS(82),
    [anon_sym_sealed] = ACTIONS(82),
    [anon_sym_static] = ACTIONS(82),
    [anon_sym_new] = ACTIONS(82),
    [anon_sym_public] = ACTIONS(82),
    [anon_sym_protected] = ACTIONS(82),
    [anon_sym_internal] = ACTIONS(82),
    [anon_sym_private] = ACTIONS(82),
    [anon_sym_interface] = ACTIONS(82),
    [anon_sym_struct] = ACTIONS(82),
    [anon_sym_enum] = ACTIONS(82),
    [anon_sym_delegate] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [sym_comment] = ACTIONS(36),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_extern] = ACTIONS(84),
    [anon_sym_using] = ACTIONS(84),
    [anon_sym_namespace] = ACTIONS(84),
    [anon_sym_class] = ACTIONS(84),
    [anon_sym_unsafe] = ACTIONS(84),
    [anon_sym_abstract] = ACTIONS(84),
    [anon_sym_sealed] = ACTIONS(84),
    [anon_sym_static] = ACTIONS(84),
    [anon_sym_new] = ACTIONS(84),
    [anon_sym_public] = ACTIONS(84),
    [anon_sym_protected] = ACTIONS(84),
    [anon_sym_internal] = ACTIONS(84),
    [anon_sym_private] = ACTIONS(84),
    [anon_sym_interface] = ACTIONS(84),
    [anon_sym_struct] = ACTIONS(84),
    [anon_sym_enum] = ACTIONS(84),
    [anon_sym_delegate] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [sym_comment] = ACTIONS(36),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_using] = ACTIONS(86),
    [anon_sym_namespace] = ACTIONS(86),
    [anon_sym_class] = ACTIONS(86),
    [anon_sym_unsafe] = ACTIONS(86),
    [anon_sym_abstract] = ACTIONS(86),
    [anon_sym_sealed] = ACTIONS(86),
    [anon_sym_static] = ACTIONS(86),
    [anon_sym_new] = ACTIONS(86),
    [anon_sym_public] = ACTIONS(86),
    [anon_sym_protected] = ACTIONS(86),
    [anon_sym_internal] = ACTIONS(86),
    [anon_sym_private] = ACTIONS(86),
    [anon_sym_interface] = ACTIONS(86),
    [anon_sym_struct] = ACTIONS(86),
    [anon_sym_enum] = ACTIONS(86),
    [anon_sym_delegate] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [sym_comment] = ACTIONS(36),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_using] = ACTIONS(88),
    [anon_sym_namespace] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_class] = ACTIONS(88),
    [anon_sym_unsafe] = ACTIONS(88),
    [anon_sym_abstract] = ACTIONS(88),
    [anon_sym_sealed] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(88),
    [anon_sym_new] = ACTIONS(88),
    [anon_sym_public] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_internal] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_interface] = ACTIONS(88),
    [anon_sym_struct] = ACTIONS(88),
    [anon_sym_enum] = ACTIONS(88),
    [anon_sym_delegate] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [sym_comment] = ACTIONS(36),
  },
  [19] = {
    [anon_sym_class] = ACTIONS(90),
    [sym_comment] = ACTIONS(36),
  },
  [20] = {
    [anon_sym_class] = ACTIONS(92),
    [sym_comment] = ACTIONS(36),
  },
  [21] = {
    [anon_sym_interface] = ACTIONS(94),
    [sym_comment] = ACTIONS(36),
  },
  [22] = {
    [anon_sym_interface] = ACTIONS(96),
    [sym_comment] = ACTIONS(36),
  },
  [23] = {
    [anon_sym_struct] = ACTIONS(98),
    [sym_comment] = ACTIONS(36),
  },
  [24] = {
    [anon_sym_struct] = ACTIONS(100),
    [sym_comment] = ACTIONS(36),
  },
  [25] = {
    [anon_sym_enum] = ACTIONS(102),
    [sym_comment] = ACTIONS(36),
  },
  [26] = {
    [anon_sym_delegate] = ACTIONS(104),
    [sym_comment] = ACTIONS(36),
  },
  [27] = {
    [sym_class_modifiers] = STATE(66),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_modifiers] = STATE(67),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_modifiers] = STATE(68),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_modifiers] = STATE(69),
    [sym_delegate_modifier] = STATE(70),
    [anon_sym_class] = ACTIONS(90),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_interface] = ACTIONS(94),
    [anon_sym_struct] = ACTIONS(98),
    [anon_sym_enum] = ACTIONS(102),
    [anon_sym_delegate] = ACTIONS(104),
    [sym_comment] = ACTIONS(36),
  },
  [28] = {
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
    [anon_sym_sbyte] = ACTIONS(106),
    [anon_sym_byte] = ACTIONS(106),
    [anon_sym_short] = ACTIONS(106),
    [anon_sym_ushort] = ACTIONS(106),
    [anon_sym_int] = ACTIONS(106),
    [anon_sym_uint] = ACTIONS(106),
    [anon_sym_long] = ACTIONS(106),
    [anon_sym_ulong] = ACTIONS(106),
    [anon_sym_char] = ACTIONS(106),
    [anon_sym_delegate] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [sym_const_keyword] = ACTIONS(106),
    [anon_sym_readonly] = ACTIONS(106),
    [anon_sym_volatile] = ACTIONS(106),
    [anon_sym_bool] = ACTIONS(106),
    [anon_sym_decimal] = ACTIONS(106),
    [anon_sym_double] = ACTIONS(106),
    [anon_sym_float] = ACTIONS(106),
    [anon_sym_object] = ACTIONS(106),
    [anon_sym_string] = ACTIONS(106),
    [sym_identifier_name] = ACTIONS(110),
    [sym_comment] = ACTIONS(36),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_namespace] = ACTIONS(112),
    [anon_sym_class] = ACTIONS(112),
    [anon_sym_unsafe] = ACTIONS(112),
    [anon_sym_abstract] = ACTIONS(112),
    [anon_sym_sealed] = ACTIONS(112),
    [anon_sym_static] = ACTIONS(112),
    [anon_sym_new] = ACTIONS(112),
    [anon_sym_public] = ACTIONS(112),
    [anon_sym_protected] = ACTIONS(112),
    [anon_sym_internal] = ACTIONS(112),
    [anon_sym_private] = ACTIONS(112),
    [anon_sym_interface] = ACTIONS(112),
    [anon_sym_struct] = ACTIONS(112),
    [anon_sym_enum] = ACTIONS(112),
    [anon_sym_delegate] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym_comment] = ACTIONS(36),
  },
  [30] = {
    [sym__type_declaration] = STATE(15),
    [sym_extern_alias_directive] = STATE(71),
    [sym_using_directive] = STATE(17),
    [sym_namespace_declaration] = STATE(15),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [sym__global_attributes] = STATE(29),
    [aux_sym_compilation_unit_repeat2] = STATE(72),
    [aux_sym_compilation_unit_repeat3] = STATE(73),
    [aux_sym_compilation_unit_repeat4] = STATE(74),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(114),
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
    [sym__type_declaration] = STATE(15),
    [sym_using_directive] = STATE(75),
    [sym_namespace_declaration] = STATE(15),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [sym__global_attributes] = STATE(29),
    [aux_sym_compilation_unit_repeat3] = STATE(73),
    [aux_sym_compilation_unit_repeat4] = STATE(74),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(114),
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
    [sym__type_declaration] = STATE(15),
    [sym_namespace_declaration] = STATE(15),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [sym__global_attributes] = STATE(76),
    [aux_sym_compilation_unit_repeat4] = STATE(74),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(114),
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
    [sym__type_declaration] = STATE(78),
    [sym_namespace_declaration] = STATE(78),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(114),
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
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [34] = {
    [sym__attribute_section] = STATE(79),
    [anon_sym_class] = ACTIONS(118),
    [anon_sym_unsafe] = ACTIONS(118),
    [anon_sym_abstract] = ACTIONS(118),
    [anon_sym_sealed] = ACTIONS(118),
    [anon_sym_static] = ACTIONS(118),
    [anon_sym_new] = ACTIONS(118),
    [anon_sym_public] = ACTIONS(118),
    [anon_sym_protected] = ACTIONS(118),
    [anon_sym_internal] = ACTIONS(118),
    [anon_sym_private] = ACTIONS(118),
    [anon_sym_interface] = ACTIONS(118),
    [anon_sym_struct] = ACTIONS(118),
    [anon_sym_enum] = ACTIONS(118),
    [anon_sym_sbyte] = ACTIONS(118),
    [anon_sym_byte] = ACTIONS(118),
    [anon_sym_short] = ACTIONS(118),
    [anon_sym_ushort] = ACTIONS(118),
    [anon_sym_int] = ACTIONS(118),
    [anon_sym_uint] = ACTIONS(118),
    [anon_sym_long] = ACTIONS(118),
    [anon_sym_ulong] = ACTIONS(118),
    [anon_sym_char] = ACTIONS(118),
    [anon_sym_delegate] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(118),
    [anon_sym_readonly] = ACTIONS(118),
    [anon_sym_volatile] = ACTIONS(118),
    [anon_sym_bool] = ACTIONS(118),
    [anon_sym_decimal] = ACTIONS(118),
    [anon_sym_double] = ACTIONS(118),
    [anon_sym_float] = ACTIONS(118),
    [anon_sym_object] = ACTIONS(118),
    [anon_sym_string] = ACTIONS(118),
    [sym_identifier_name] = ACTIONS(120),
    [sym_comment] = ACTIONS(36),
  },
  [35] = {
    [sym_identifier_name] = ACTIONS(122),
    [sym_comment] = ACTIONS(36),
  },
  [36] = {
    [sym_global] = ACTIONS(124),
    [sym_identifier_name] = ACTIONS(126),
    [sym_comment] = ACTIONS(36),
  },
  [37] = {
    [anon_sym_COLON_COLON] = ACTIONS(128),
    [sym_comment] = ACTIONS(36),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(134),
    [sym_comment] = ACTIONS(36),
  },
  [39] = {
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(134),
    [sym_comment] = ACTIONS(36),
  },
  [40] = {
    [anon_sym_DOT] = ACTIONS(134),
    [sym_comment] = ACTIONS(36),
  },
  [41] = {
    [sym_qualified_name] = STATE(85),
    [sym_alias_qualified_name] = STATE(40),
    [sym_global] = ACTIONS(42),
    [sym_identifier_name] = ACTIONS(136),
    [sym_comment] = ACTIONS(36),
  },
  [42] = {
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(134),
    [sym_comment] = ACTIONS(36),
  },
  [43] = {
    [sym_type_parameter_list] = STATE(89),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [44] = {
    [sym__class_modifiers] = STATE(45),
    [sym__struct_modifiers] = STATE(46),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_unsafe] = ACTIONS(52),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(52),
    [anon_sym_public] = ACTIONS(52),
    [anon_sym_protected] = ACTIONS(52),
    [anon_sym_internal] = ACTIONS(52),
    [anon_sym_private] = ACTIONS(52),
    [anon_sym_struct] = ACTIONS(54),
    [sym_comment] = ACTIONS(36),
  },
  [45] = {
    [anon_sym_class] = ACTIONS(144),
    [sym_comment] = ACTIONS(36),
  },
  [46] = {
    [anon_sym_struct] = ACTIONS(146),
    [sym_comment] = ACTIONS(36),
  },
  [47] = {
    [sym__class_modifiers] = STATE(45),
    [sym__interface_modifiers] = STATE(48),
    [sym__struct_modifiers] = STATE(46),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_unsafe] = ACTIONS(52),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(58),
    [anon_sym_public] = ACTIONS(58),
    [anon_sym_protected] = ACTIONS(58),
    [anon_sym_internal] = ACTIONS(58),
    [anon_sym_private] = ACTIONS(58),
    [anon_sym_interface] = ACTIONS(60),
    [anon_sym_struct] = ACTIONS(54),
    [sym_comment] = ACTIONS(36),
  },
  [48] = {
    [anon_sym_interface] = ACTIONS(148),
    [sym_comment] = ACTIONS(36),
  },
  [49] = {
    [sym_type_parameter_list] = STATE(91),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [50] = {
    [sym_type_parameter_list] = STATE(93),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [51] = {
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(156),
    [sym_comment] = ACTIONS(36),
  },
  [52] = {
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [sym_identifier_name] = ACTIONS(160),
    [sym_comment] = ACTIONS(36),
  },
  [53] = {
    [sym_identifier_name] = ACTIONS(162),
    [sym_comment] = ACTIONS(36),
  },
  [54] = {
    [sym_type_parameter_list] = STATE(96),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(164),
    [sym_identifier_name] = ACTIONS(166),
    [sym_comment] = ACTIONS(36),
  },
  [55] = {
    [sym_identifier_name] = ACTIONS(168),
    [sym_comment] = ACTIONS(36),
  },
  [56] = {
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [sym_identifier_name] = ACTIONS(166),
    [sym_comment] = ACTIONS(36),
  },
  [57] = {
    [anon_sym_COLON] = ACTIONS(170),
    [sym_comment] = ACTIONS(36),
  },
  [58] = {
    [sym_attribute_argument_list] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(172),
    [sym_comment] = ACTIONS(36),
  },
  [59] = {
    [anon_sym_RBRACK] = ACTIONS(176),
    [sym_comment] = ACTIONS(36),
  },
  [60] = {
    [aux_sym_attribute_list_repeat1] = STATE(103),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(180),
    [sym_comment] = ACTIONS(36),
  },
  [61] = {
    [sym_identifier_name] = ACTIONS(182),
    [sym_comment] = ACTIONS(36),
  },
  [62] = {
    [sym_identifier_name] = ACTIONS(184),
    [sym_comment] = ACTIONS(36),
  },
  [63] = {
    [sym_identifier_name] = ACTIONS(186),
    [sym_comment] = ACTIONS(36),
  },
  [64] = {
    [sym_identifier_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(36),
  },
  [65] = {
    [sym_return_type] = STATE(108),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [66] = {
    [anon_sym_class] = ACTIONS(190),
    [sym_comment] = ACTIONS(36),
  },
  [67] = {
    [anon_sym_interface] = ACTIONS(192),
    [sym_comment] = ACTIONS(36),
  },
  [68] = {
    [anon_sym_struct] = ACTIONS(194),
    [sym_comment] = ACTIONS(36),
  },
  [69] = {
    [anon_sym_enum] = ACTIONS(196),
    [sym_comment] = ACTIONS(36),
  },
  [70] = {
    [anon_sym_delegate] = ACTIONS(198),
    [sym_comment] = ACTIONS(36),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_extern] = ACTIONS(200),
    [anon_sym_using] = ACTIONS(200),
    [anon_sym_namespace] = ACTIONS(200),
    [anon_sym_class] = ACTIONS(200),
    [anon_sym_unsafe] = ACTIONS(200),
    [anon_sym_abstract] = ACTIONS(200),
    [anon_sym_sealed] = ACTIONS(200),
    [anon_sym_static] = ACTIONS(200),
    [anon_sym_new] = ACTIONS(200),
    [anon_sym_public] = ACTIONS(200),
    [anon_sym_protected] = ACTIONS(200),
    [anon_sym_internal] = ACTIONS(200),
    [anon_sym_private] = ACTIONS(200),
    [anon_sym_interface] = ACTIONS(200),
    [anon_sym_struct] = ACTIONS(200),
    [anon_sym_enum] = ACTIONS(200),
    [anon_sym_delegate] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(200),
    [sym_comment] = ACTIONS(36),
  },
  [72] = {
    [sym__type_declaration] = STATE(15),
    [sym_using_directive] = STATE(75),
    [sym_namespace_declaration] = STATE(15),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [sym__global_attributes] = STATE(29),
    [aux_sym_compilation_unit_repeat3] = STATE(114),
    [aux_sym_compilation_unit_repeat4] = STATE(115),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(202),
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
  [73] = {
    [sym__type_declaration] = STATE(15),
    [sym_namespace_declaration] = STATE(15),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [sym__global_attributes] = STATE(76),
    [aux_sym_compilation_unit_repeat4] = STATE(115),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(202),
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
  [74] = {
    [sym__type_declaration] = STATE(78),
    [sym_namespace_declaration] = STATE(78),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(202),
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
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_using] = ACTIONS(204),
    [anon_sym_namespace] = ACTIONS(204),
    [anon_sym_class] = ACTIONS(204),
    [anon_sym_unsafe] = ACTIONS(204),
    [anon_sym_abstract] = ACTIONS(204),
    [anon_sym_sealed] = ACTIONS(204),
    [anon_sym_static] = ACTIONS(204),
    [anon_sym_new] = ACTIONS(204),
    [anon_sym_public] = ACTIONS(204),
    [anon_sym_protected] = ACTIONS(204),
    [anon_sym_internal] = ACTIONS(204),
    [anon_sym_private] = ACTIONS(204),
    [anon_sym_interface] = ACTIONS(204),
    [anon_sym_struct] = ACTIONS(204),
    [anon_sym_enum] = ACTIONS(204),
    [anon_sym_delegate] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym_comment] = ACTIONS(36),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [anon_sym_namespace] = ACTIONS(206),
    [anon_sym_class] = ACTIONS(206),
    [anon_sym_unsafe] = ACTIONS(206),
    [anon_sym_abstract] = ACTIONS(206),
    [anon_sym_sealed] = ACTIONS(206),
    [anon_sym_static] = ACTIONS(206),
    [anon_sym_new] = ACTIONS(206),
    [anon_sym_public] = ACTIONS(206),
    [anon_sym_protected] = ACTIONS(206),
    [anon_sym_internal] = ACTIONS(206),
    [anon_sym_private] = ACTIONS(206),
    [anon_sym_interface] = ACTIONS(206),
    [anon_sym_struct] = ACTIONS(206),
    [anon_sym_enum] = ACTIONS(206),
    [anon_sym_delegate] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [sym_comment] = ACTIONS(36),
  },
  [77] = {
    [sym_attribute_list] = STATE(59),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [anon_sym_namespace] = ACTIONS(210),
    [anon_sym_class] = ACTIONS(210),
    [anon_sym_unsafe] = ACTIONS(210),
    [anon_sym_abstract] = ACTIONS(210),
    [anon_sym_sealed] = ACTIONS(210),
    [anon_sym_static] = ACTIONS(210),
    [anon_sym_new] = ACTIONS(210),
    [anon_sym_public] = ACTIONS(210),
    [anon_sym_protected] = ACTIONS(210),
    [anon_sym_internal] = ACTIONS(210),
    [anon_sym_private] = ACTIONS(210),
    [anon_sym_interface] = ACTIONS(210),
    [anon_sym_struct] = ACTIONS(210),
    [anon_sym_enum] = ACTIONS(210),
    [anon_sym_delegate] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [sym_comment] = ACTIONS(36),
  },
  [79] = {
    [anon_sym_class] = ACTIONS(212),
    [anon_sym_unsafe] = ACTIONS(212),
    [anon_sym_abstract] = ACTIONS(212),
    [anon_sym_sealed] = ACTIONS(212),
    [anon_sym_static] = ACTIONS(212),
    [anon_sym_new] = ACTIONS(212),
    [anon_sym_public] = ACTIONS(212),
    [anon_sym_protected] = ACTIONS(212),
    [anon_sym_internal] = ACTIONS(212),
    [anon_sym_private] = ACTIONS(212),
    [anon_sym_interface] = ACTIONS(212),
    [anon_sym_struct] = ACTIONS(212),
    [anon_sym_enum] = ACTIONS(212),
    [anon_sym_sbyte] = ACTIONS(212),
    [anon_sym_byte] = ACTIONS(212),
    [anon_sym_short] = ACTIONS(212),
    [anon_sym_ushort] = ACTIONS(212),
    [anon_sym_int] = ACTIONS(212),
    [anon_sym_uint] = ACTIONS(212),
    [anon_sym_long] = ACTIONS(212),
    [anon_sym_ulong] = ACTIONS(212),
    [anon_sym_char] = ACTIONS(212),
    [anon_sym_delegate] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(214),
    [sym_const_keyword] = ACTIONS(212),
    [anon_sym_readonly] = ACTIONS(212),
    [anon_sym_volatile] = ACTIONS(212),
    [anon_sym_bool] = ACTIONS(212),
    [anon_sym_decimal] = ACTIONS(212),
    [anon_sym_double] = ACTIONS(212),
    [anon_sym_float] = ACTIONS(212),
    [anon_sym_object] = ACTIONS(212),
    [anon_sym_string] = ACTIONS(212),
    [sym_identifier_name] = ACTIONS(216),
    [sym_comment] = ACTIONS(36),
  },
  [80] = {
    [anon_sym_SEMI] = ACTIONS(218),
    [sym_comment] = ACTIONS(36),
  },
  [81] = {
    [sym_identifier_name] = ACTIONS(220),
    [sym_comment] = ACTIONS(36),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_using] = ACTIONS(222),
    [anon_sym_namespace] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_class] = ACTIONS(222),
    [anon_sym_unsafe] = ACTIONS(222),
    [anon_sym_abstract] = ACTIONS(222),
    [anon_sym_sealed] = ACTIONS(222),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(222),
    [anon_sym_public] = ACTIONS(222),
    [anon_sym_protected] = ACTIONS(222),
    [anon_sym_internal] = ACTIONS(222),
    [anon_sym_private] = ACTIONS(222),
    [anon_sym_interface] = ACTIONS(222),
    [anon_sym_struct] = ACTIONS(222),
    [anon_sym_enum] = ACTIONS(222),
    [anon_sym_delegate] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [sym_comment] = ACTIONS(36),
  },
  [83] = {
    [sym_global] = ACTIONS(224),
    [sym_identifier_name] = ACTIONS(226),
    [sym_comment] = ACTIONS(36),
  },
  [84] = {
    [sym_identifier_name] = ACTIONS(228),
    [sym_comment] = ACTIONS(36),
  },
  [85] = {
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(134),
    [sym_comment] = ACTIONS(36),
  },
  [86] = {
    [sym__type_declaration] = STATE(121),
    [sym_using_directive] = STATE(121),
    [sym_namespace_declaration] = STATE(121),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [aux_sym_namespace_declaration_repeat1] = STATE(122),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(232),
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
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [87] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(149),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [88] = {
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_type_parameter] = STATE(151),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [89] = {
    [anon_sym_LBRACE] = ACTIONS(260),
    [sym_comment] = ACTIONS(36),
  },
  [90] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(162),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [91] = {
    [anon_sym_LBRACE] = ACTIONS(268),
    [sym_comment] = ACTIONS(36),
  },
  [92] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(183),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [93] = {
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(36),
  },
  [94] = {
    [sym_enum_member_declaration] = STATE(187),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [95] = {
    [sym__integral_type] = STATE(192),
    [anon_sym_sbyte] = ACTIONS(292),
    [anon_sym_byte] = ACTIONS(292),
    [anon_sym_short] = ACTIONS(292),
    [anon_sym_ushort] = ACTIONS(292),
    [anon_sym_int] = ACTIONS(292),
    [anon_sym_uint] = ACTIONS(292),
    [anon_sym_long] = ACTIONS(292),
    [anon_sym_ulong] = ACTIONS(292),
    [anon_sym_char] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(294),
    [sym_identifier_name] = ACTIONS(296),
    [sym_comment] = ACTIONS(36),
  },
  [97] = {
    [sym_parameter_list] = STATE(194),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [98] = {
    [sym_attribute_list] = STATE(195),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(300),
    [sym_comment] = ACTIONS(36),
  },
  [100] = {
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(302),
    [sym_comment] = ACTIONS(36),
  },
  [101] = {
    [anon_sym_class] = ACTIONS(304),
    [anon_sym_unsafe] = ACTIONS(304),
    [anon_sym_abstract] = ACTIONS(304),
    [anon_sym_sealed] = ACTIONS(304),
    [anon_sym_static] = ACTIONS(304),
    [anon_sym_new] = ACTIONS(304),
    [anon_sym_public] = ACTIONS(304),
    [anon_sym_protected] = ACTIONS(304),
    [anon_sym_internal] = ACTIONS(304),
    [anon_sym_private] = ACTIONS(304),
    [anon_sym_interface] = ACTIONS(304),
    [anon_sym_struct] = ACTIONS(304),
    [anon_sym_enum] = ACTIONS(304),
    [anon_sym_sbyte] = ACTIONS(304),
    [anon_sym_byte] = ACTIONS(304),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_ushort] = ACTIONS(304),
    [anon_sym_int] = ACTIONS(304),
    [anon_sym_uint] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(304),
    [anon_sym_ulong] = ACTIONS(304),
    [anon_sym_char] = ACTIONS(304),
    [anon_sym_delegate] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_const_keyword] = ACTIONS(304),
    [anon_sym_readonly] = ACTIONS(304),
    [anon_sym_volatile] = ACTIONS(304),
    [anon_sym_bool] = ACTIONS(304),
    [anon_sym_decimal] = ACTIONS(304),
    [anon_sym_double] = ACTIONS(304),
    [anon_sym_float] = ACTIONS(304),
    [anon_sym_object] = ACTIONS(304),
    [anon_sym_string] = ACTIONS(304),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [102] = {
    [sym_attribute] = STATE(197),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(312),
    [sym_comment] = ACTIONS(36),
  },
  [104] = {
    [sym_type_parameter_list] = STATE(199),
    [anon_sym_LBRACE] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [105] = {
    [sym_type_parameter_list] = STATE(200),
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [106] = {
    [sym_type_parameter_list] = STATE(201),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [107] = {
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_COLON] = ACTIONS(316),
    [sym_comment] = ACTIONS(36),
  },
  [108] = {
    [sym_identifier_name] = ACTIONS(318),
    [sym_comment] = ACTIONS(36),
  },
  [109] = {
    [sym_identifier_name] = ACTIONS(320),
    [sym_comment] = ACTIONS(36),
  },
  [110] = {
    [sym_identifier_name] = ACTIONS(322),
    [sym_comment] = ACTIONS(36),
  },
  [111] = {
    [sym_identifier_name] = ACTIONS(324),
    [sym_comment] = ACTIONS(36),
  },
  [112] = {
    [sym_identifier_name] = ACTIONS(326),
    [sym_comment] = ACTIONS(36),
  },
  [113] = {
    [sym_return_type] = STATE(209),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [114] = {
    [sym__type_declaration] = STATE(15),
    [sym_namespace_declaration] = STATE(15),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [sym__global_attributes] = STATE(76),
    [aux_sym_compilation_unit_repeat4] = STATE(210),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(328),
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
  [115] = {
    [sym__type_declaration] = STATE(78),
    [sym_namespace_declaration] = STATE(78),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(328),
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
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_extern] = ACTIONS(330),
    [anon_sym_using] = ACTIONS(330),
    [anon_sym_namespace] = ACTIONS(330),
    [anon_sym_class] = ACTIONS(330),
    [anon_sym_unsafe] = ACTIONS(330),
    [anon_sym_abstract] = ACTIONS(330),
    [anon_sym_sealed] = ACTIONS(330),
    [anon_sym_static] = ACTIONS(330),
    [anon_sym_new] = ACTIONS(330),
    [anon_sym_public] = ACTIONS(330),
    [anon_sym_protected] = ACTIONS(330),
    [anon_sym_internal] = ACTIONS(330),
    [anon_sym_private] = ACTIONS(330),
    [anon_sym_interface] = ACTIONS(330),
    [anon_sym_struct] = ACTIONS(330),
    [anon_sym_enum] = ACTIONS(330),
    [anon_sym_delegate] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [sym_comment] = ACTIONS(36),
  },
  [117] = {
    [anon_sym_DOT] = ACTIONS(332),
    [sym_comment] = ACTIONS(36),
  },
  [118] = {
    [anon_sym_SEMI] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(334),
    [sym_comment] = ACTIONS(36),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_using] = ACTIONS(336),
    [anon_sym_namespace] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_unsafe] = ACTIONS(336),
    [anon_sym_abstract] = ACTIONS(336),
    [anon_sym_sealed] = ACTIONS(336),
    [anon_sym_static] = ACTIONS(336),
    [anon_sym_new] = ACTIONS(336),
    [anon_sym_public] = ACTIONS(336),
    [anon_sym_protected] = ACTIONS(336),
    [anon_sym_internal] = ACTIONS(336),
    [anon_sym_private] = ACTIONS(336),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_struct] = ACTIONS(336),
    [anon_sym_enum] = ACTIONS(336),
    [anon_sym_delegate] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [sym_comment] = ACTIONS(36),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_using] = ACTIONS(338),
    [anon_sym_namespace] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_class] = ACTIONS(338),
    [anon_sym_unsafe] = ACTIONS(338),
    [anon_sym_abstract] = ACTIONS(338),
    [anon_sym_sealed] = ACTIONS(338),
    [anon_sym_static] = ACTIONS(338),
    [anon_sym_new] = ACTIONS(338),
    [anon_sym_public] = ACTIONS(338),
    [anon_sym_protected] = ACTIONS(338),
    [anon_sym_internal] = ACTIONS(338),
    [anon_sym_private] = ACTIONS(338),
    [anon_sym_interface] = ACTIONS(338),
    [anon_sym_struct] = ACTIONS(338),
    [anon_sym_enum] = ACTIONS(338),
    [anon_sym_delegate] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [sym_comment] = ACTIONS(36),
  },
  [121] = {
    [anon_sym_using] = ACTIONS(340),
    [anon_sym_namespace] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [anon_sym_class] = ACTIONS(340),
    [anon_sym_unsafe] = ACTIONS(340),
    [anon_sym_abstract] = ACTIONS(340),
    [anon_sym_sealed] = ACTIONS(340),
    [anon_sym_static] = ACTIONS(340),
    [anon_sym_new] = ACTIONS(340),
    [anon_sym_public] = ACTIONS(340),
    [anon_sym_protected] = ACTIONS(340),
    [anon_sym_internal] = ACTIONS(340),
    [anon_sym_private] = ACTIONS(340),
    [anon_sym_interface] = ACTIONS(340),
    [anon_sym_struct] = ACTIONS(340),
    [anon_sym_enum] = ACTIONS(340),
    [anon_sym_delegate] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(340),
    [sym_comment] = ACTIONS(36),
  },
  [122] = {
    [sym__type_declaration] = STATE(212),
    [sym_using_directive] = STATE(212),
    [sym_namespace_declaration] = STATE(212),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(342),
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
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_using] = ACTIONS(344),
    [anon_sym_namespace] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(344),
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
  [124] = {
    [sym_identifier_name] = ACTIONS(346),
    [sym_comment] = ACTIONS(36),
  },
  [125] = {
    [sym__class_modifiers] = STATE(45),
    [sym__struct_modifiers] = STATE(46),
    [sym__field_modifiers] = STATE(215),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_unsafe] = ACTIONS(350),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(350),
    [anon_sym_public] = ACTIONS(350),
    [anon_sym_protected] = ACTIONS(350),
    [anon_sym_internal] = ACTIONS(350),
    [anon_sym_private] = ACTIONS(350),
    [anon_sym_struct] = ACTIONS(352),
    [anon_sym_sbyte] = ACTIONS(354),
    [anon_sym_byte] = ACTIONS(354),
    [anon_sym_short] = ACTIONS(354),
    [anon_sym_ushort] = ACTIONS(354),
    [anon_sym_int] = ACTIONS(354),
    [anon_sym_uint] = ACTIONS(354),
    [anon_sym_long] = ACTIONS(354),
    [anon_sym_ulong] = ACTIONS(354),
    [anon_sym_char] = ACTIONS(354),
    [anon_sym_delegate] = ACTIONS(356),
    [sym_const_keyword] = ACTIONS(354),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(354),
    [anon_sym_decimal] = ACTIONS(354),
    [anon_sym_double] = ACTIONS(354),
    [anon_sym_float] = ACTIONS(354),
    [anon_sym_object] = ACTIONS(354),
    [anon_sym_string] = ACTIONS(354),
    [sym_identifier_name] = ACTIONS(358),
    [sym_comment] = ACTIONS(36),
  },
  [126] = {
    [sym__class_modifiers] = STATE(45),
    [sym__field_modifiers] = STATE(215),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(242),
    [anon_sym_public] = ACTIONS(242),
    [anon_sym_protected] = ACTIONS(242),
    [anon_sym_internal] = ACTIONS(242),
    [anon_sym_private] = ACTIONS(242),
    [anon_sym_sbyte] = ACTIONS(354),
    [anon_sym_byte] = ACTIONS(354),
    [anon_sym_short] = ACTIONS(354),
    [anon_sym_ushort] = ACTIONS(354),
    [anon_sym_int] = ACTIONS(354),
    [anon_sym_uint] = ACTIONS(354),
    [anon_sym_long] = ACTIONS(354),
    [anon_sym_ulong] = ACTIONS(354),
    [anon_sym_char] = ACTIONS(354),
    [sym_const_keyword] = ACTIONS(354),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(354),
    [anon_sym_decimal] = ACTIONS(354),
    [anon_sym_double] = ACTIONS(354),
    [anon_sym_float] = ACTIONS(354),
    [anon_sym_object] = ACTIONS(354),
    [anon_sym_string] = ACTIONS(354),
    [sym_identifier_name] = ACTIONS(358),
    [sym_comment] = ACTIONS(36),
  },
  [127] = {
    [sym__class_modifiers] = STATE(45),
    [sym__interface_modifiers] = STATE(48),
    [sym__struct_modifiers] = STATE(46),
    [sym__field_modifiers] = STATE(215),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_unsafe] = ACTIONS(350),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(360),
    [anon_sym_public] = ACTIONS(360),
    [anon_sym_protected] = ACTIONS(360),
    [anon_sym_internal] = ACTIONS(360),
    [anon_sym_private] = ACTIONS(360),
    [anon_sym_interface] = ACTIONS(362),
    [anon_sym_struct] = ACTIONS(352),
    [anon_sym_enum] = ACTIONS(364),
    [anon_sym_sbyte] = ACTIONS(366),
    [anon_sym_byte] = ACTIONS(366),
    [anon_sym_short] = ACTIONS(366),
    [anon_sym_ushort] = ACTIONS(366),
    [anon_sym_int] = ACTIONS(366),
    [anon_sym_uint] = ACTIONS(366),
    [anon_sym_long] = ACTIONS(366),
    [anon_sym_ulong] = ACTIONS(366),
    [anon_sym_char] = ACTIONS(366),
    [anon_sym_delegate] = ACTIONS(356),
    [sym_void_keyword] = ACTIONS(369),
    [sym_const_keyword] = ACTIONS(354),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(366),
    [anon_sym_decimal] = ACTIONS(366),
    [anon_sym_double] = ACTIONS(366),
    [anon_sym_float] = ACTIONS(366),
    [anon_sym_object] = ACTIONS(366),
    [anon_sym_string] = ACTIONS(366),
    [sym_identifier_name] = ACTIONS(371),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(369),
  },
  [128] = {
    [sym_identifier_name] = ACTIONS(374),
    [sym_comment] = ACTIONS(36),
  },
  [129] = {
    [sym_identifier_name] = ACTIONS(376),
    [sym_comment] = ACTIONS(36),
  },
  [130] = {
    [sym_identifier_name] = ACTIONS(378),
    [sym_comment] = ACTIONS(36),
  },
  [131] = {
    [sym_return_type] = STATE(220),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [132] = {
    [sym_variable_declaration] = STATE(221),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [133] = {
    [sym__field_modifiers] = STATE(215),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(354),
    [anon_sym_byte] = ACTIONS(354),
    [anon_sym_short] = ACTIONS(354),
    [anon_sym_ushort] = ACTIONS(354),
    [anon_sym_int] = ACTIONS(354),
    [anon_sym_uint] = ACTIONS(354),
    [anon_sym_long] = ACTIONS(354),
    [anon_sym_ulong] = ACTIONS(354),
    [anon_sym_char] = ACTIONS(354),
    [sym_const_keyword] = ACTIONS(354),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(354),
    [anon_sym_decimal] = ACTIONS(354),
    [anon_sym_double] = ACTIONS(354),
    [anon_sym_float] = ACTIONS(354),
    [anon_sym_object] = ACTIONS(354),
    [anon_sym_string] = ACTIONS(354),
    [sym_identifier_name] = ACTIONS(358),
    [sym_comment] = ACTIONS(36),
  },
  [134] = {
    [sym_return_type] = STATE(222),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [135] = {
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_class] = ACTIONS(382),
    [anon_sym_unsafe] = ACTIONS(382),
    [anon_sym_abstract] = ACTIONS(382),
    [anon_sym_sealed] = ACTIONS(382),
    [anon_sym_static] = ACTIONS(382),
    [anon_sym_new] = ACTIONS(382),
    [anon_sym_public] = ACTIONS(382),
    [anon_sym_protected] = ACTIONS(382),
    [anon_sym_internal] = ACTIONS(382),
    [anon_sym_private] = ACTIONS(382),
    [anon_sym_interface] = ACTIONS(382),
    [anon_sym_struct] = ACTIONS(382),
    [anon_sym_enum] = ACTIONS(382),
    [anon_sym_sbyte] = ACTIONS(382),
    [anon_sym_byte] = ACTIONS(382),
    [anon_sym_short] = ACTIONS(382),
    [anon_sym_ushort] = ACTIONS(382),
    [anon_sym_int] = ACTIONS(382),
    [anon_sym_uint] = ACTIONS(382),
    [anon_sym_long] = ACTIONS(382),
    [anon_sym_ulong] = ACTIONS(382),
    [anon_sym_char] = ACTIONS(382),
    [anon_sym_delegate] = ACTIONS(382),
    [sym_void_keyword] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(380),
    [sym_const_keyword] = ACTIONS(382),
    [anon_sym_readonly] = ACTIONS(382),
    [anon_sym_volatile] = ACTIONS(382),
    [anon_sym_bool] = ACTIONS(382),
    [anon_sym_decimal] = ACTIONS(382),
    [anon_sym_double] = ACTIONS(382),
    [anon_sym_float] = ACTIONS(382),
    [anon_sym_object] = ACTIONS(382),
    [anon_sym_string] = ACTIONS(382),
    [sym_identifier_name] = ACTIONS(384),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(382),
  },
  [136] = {
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_class] = ACTIONS(386),
    [anon_sym_unsafe] = ACTIONS(386),
    [anon_sym_abstract] = ACTIONS(386),
    [anon_sym_sealed] = ACTIONS(386),
    [anon_sym_static] = ACTIONS(386),
    [anon_sym_new] = ACTIONS(386),
    [anon_sym_public] = ACTIONS(386),
    [anon_sym_protected] = ACTIONS(386),
    [anon_sym_internal] = ACTIONS(386),
    [anon_sym_private] = ACTIONS(386),
    [anon_sym_interface] = ACTIONS(386),
    [anon_sym_struct] = ACTIONS(386),
    [anon_sym_enum] = ACTIONS(386),
    [anon_sym_sbyte] = ACTIONS(386),
    [anon_sym_byte] = ACTIONS(386),
    [anon_sym_short] = ACTIONS(386),
    [anon_sym_ushort] = ACTIONS(386),
    [anon_sym_int] = ACTIONS(386),
    [anon_sym_uint] = ACTIONS(386),
    [anon_sym_long] = ACTIONS(386),
    [anon_sym_ulong] = ACTIONS(386),
    [anon_sym_char] = ACTIONS(386),
    [anon_sym_delegate] = ACTIONS(386),
    [sym_void_keyword] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(88),
    [sym_const_keyword] = ACTIONS(386),
    [anon_sym_readonly] = ACTIONS(386),
    [anon_sym_volatile] = ACTIONS(386),
    [anon_sym_bool] = ACTIONS(386),
    [anon_sym_decimal] = ACTIONS(386),
    [anon_sym_double] = ACTIONS(386),
    [anon_sym_float] = ACTIONS(386),
    [anon_sym_object] = ACTIONS(386),
    [anon_sym_string] = ACTIONS(386),
    [sym_identifier_name] = ACTIONS(388),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(386),
  },
  [137] = {
    [anon_sym_class] = ACTIONS(390),
    [sym_comment] = ACTIONS(36),
  },
  [138] = {
    [anon_sym_interface] = ACTIONS(392),
    [sym_comment] = ACTIONS(36),
  },
  [139] = {
    [anon_sym_struct] = ACTIONS(394),
    [sym_comment] = ACTIONS(36),
  },
  [140] = {
    [anon_sym_enum] = ACTIONS(396),
    [sym_comment] = ACTIONS(36),
  },
  [141] = {
    [anon_sym_delegate] = ACTIONS(398),
    [sym_comment] = ACTIONS(36),
  },
  [142] = {
    [sym_identifier_name] = ACTIONS(400),
    [sym_comment] = ACTIONS(36),
  },
  [143] = {
    [sym_class_modifiers] = STATE(230),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_modifiers] = STATE(231),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_modifiers] = STATE(232),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_modifiers] = STATE(233),
    [sym_delegate_modifier] = STATE(234),
    [sym_field_modifiers] = STATE(235),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(221),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_class] = ACTIONS(402),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(404),
    [anon_sym_struct] = ACTIONS(406),
    [anon_sym_enum] = ACTIONS(408),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(410),
    [sym_const_keyword] = ACTIONS(412),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [144] = {
    [sym_variable_declaration] = STATE(221),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_const_keyword] = ACTIONS(412),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [145] = {
    [anon_sym_sbyte] = ACTIONS(414),
    [anon_sym_byte] = ACTIONS(414),
    [anon_sym_short] = ACTIONS(414),
    [anon_sym_ushort] = ACTIONS(414),
    [anon_sym_int] = ACTIONS(414),
    [anon_sym_uint] = ACTIONS(414),
    [anon_sym_long] = ACTIONS(414),
    [anon_sym_ulong] = ACTIONS(414),
    [anon_sym_char] = ACTIONS(414),
    [sym_const_keyword] = ACTIONS(414),
    [anon_sym_bool] = ACTIONS(414),
    [anon_sym_decimal] = ACTIONS(414),
    [anon_sym_double] = ACTIONS(414),
    [anon_sym_float] = ACTIONS(414),
    [anon_sym_object] = ACTIONS(414),
    [anon_sym_string] = ACTIONS(414),
    [sym_identifier_name] = ACTIONS(416),
    [sym_comment] = ACTIONS(36),
  },
  [146] = {
    [anon_sym_SEMI] = ACTIONS(418),
    [sym_comment] = ACTIONS(36),
  },
  [147] = {
    [sym_variable_declarator] = STATE(238),
    [sym_identifier_name] = ACTIONS(420),
    [sym_comment] = ACTIONS(36),
  },
  [148] = {
    [sym_return_type] = STATE(222),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(423),
  },
  [149] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(425),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(427),
    [sym_comment] = ACTIONS(36),
  },
  [151] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(431),
    [sym_comment] = ACTIONS(36),
  },
  [152] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(245),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(425),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [anon_sym_using] = ACTIONS(433),
    [anon_sym_namespace] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(433),
    [anon_sym_unsafe] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_sealed] = ACTIONS(433),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_new] = ACTIONS(433),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_internal] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_interface] = ACTIONS(433),
    [anon_sym_struct] = ACTIONS(433),
    [anon_sym_enum] = ACTIONS(433),
    [anon_sym_delegate] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [sym_comment] = ACTIONS(36),
  },
  [154] = {
    [sym_attribute_list] = STATE(246),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [155] = {
    [sym_variable_declaration] = STATE(247),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [156] = {
    [sym_field_modifiers] = STATE(249),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(247),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_const_keyword] = ACTIONS(435),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [157] = {
    [anon_sym_unsafe] = ACTIONS(106),
    [anon_sym_static] = ACTIONS(106),
    [anon_sym_new] = ACTIONS(106),
    [anon_sym_public] = ACTIONS(106),
    [anon_sym_protected] = ACTIONS(106),
    [anon_sym_internal] = ACTIONS(106),
    [anon_sym_private] = ACTIONS(106),
    [anon_sym_sbyte] = ACTIONS(106),
    [anon_sym_byte] = ACTIONS(106),
    [anon_sym_short] = ACTIONS(106),
    [anon_sym_ushort] = ACTIONS(106),
    [anon_sym_int] = ACTIONS(106),
    [anon_sym_uint] = ACTIONS(106),
    [anon_sym_long] = ACTIONS(106),
    [anon_sym_ulong] = ACTIONS(106),
    [anon_sym_char] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [sym_const_keyword] = ACTIONS(106),
    [anon_sym_readonly] = ACTIONS(106),
    [anon_sym_volatile] = ACTIONS(106),
    [anon_sym_bool] = ACTIONS(106),
    [anon_sym_decimal] = ACTIONS(106),
    [anon_sym_double] = ACTIONS(106),
    [anon_sym_float] = ACTIONS(106),
    [anon_sym_object] = ACTIONS(106),
    [anon_sym_string] = ACTIONS(106),
    [sym_identifier_name] = ACTIONS(110),
    [sym_comment] = ACTIONS(36),
  },
  [158] = {
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_unsafe] = ACTIONS(439),
    [anon_sym_static] = ACTIONS(439),
    [anon_sym_new] = ACTIONS(439),
    [anon_sym_public] = ACTIONS(439),
    [anon_sym_protected] = ACTIONS(439),
    [anon_sym_internal] = ACTIONS(439),
    [anon_sym_private] = ACTIONS(439),
    [anon_sym_sbyte] = ACTIONS(439),
    [anon_sym_byte] = ACTIONS(439),
    [anon_sym_short] = ACTIONS(439),
    [anon_sym_ushort] = ACTIONS(439),
    [anon_sym_int] = ACTIONS(439),
    [anon_sym_uint] = ACTIONS(439),
    [anon_sym_long] = ACTIONS(439),
    [anon_sym_ulong] = ACTIONS(439),
    [anon_sym_char] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(437),
    [sym_const_keyword] = ACTIONS(439),
    [anon_sym_readonly] = ACTIONS(439),
    [anon_sym_volatile] = ACTIONS(439),
    [anon_sym_bool] = ACTIONS(439),
    [anon_sym_decimal] = ACTIONS(439),
    [anon_sym_double] = ACTIONS(439),
    [anon_sym_float] = ACTIONS(439),
    [anon_sym_object] = ACTIONS(439),
    [anon_sym_string] = ACTIONS(439),
    [sym_identifier_name] = ACTIONS(441),
    [sym_comment] = ACTIONS(36),
  },
  [159] = {
    [sym_variable_declaration] = STATE(247),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_const_keyword] = ACTIONS(435),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [160] = {
    [anon_sym_SEMI] = ACTIONS(443),
    [sym_comment] = ACTIONS(36),
  },
  [161] = {
    [sym_variable_declarator] = STATE(238),
    [sym_identifier_name] = ACTIONS(445),
    [sym_comment] = ACTIONS(36),
  },
  [162] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [163] = {
    [sym__attribute_section] = STATE(253),
    [anon_sym_unsafe] = ACTIONS(118),
    [anon_sym_static] = ACTIONS(118),
    [anon_sym_new] = ACTIONS(118),
    [anon_sym_public] = ACTIONS(118),
    [anon_sym_protected] = ACTIONS(118),
    [anon_sym_internal] = ACTIONS(118),
    [anon_sym_private] = ACTIONS(118),
    [anon_sym_sbyte] = ACTIONS(118),
    [anon_sym_byte] = ACTIONS(118),
    [anon_sym_short] = ACTIONS(118),
    [anon_sym_ushort] = ACTIONS(118),
    [anon_sym_int] = ACTIONS(118),
    [anon_sym_uint] = ACTIONS(118),
    [anon_sym_long] = ACTIONS(118),
    [anon_sym_ulong] = ACTIONS(118),
    [anon_sym_char] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(118),
    [anon_sym_readonly] = ACTIONS(118),
    [anon_sym_volatile] = ACTIONS(118),
    [anon_sym_bool] = ACTIONS(118),
    [anon_sym_decimal] = ACTIONS(118),
    [anon_sym_double] = ACTIONS(118),
    [anon_sym_float] = ACTIONS(118),
    [anon_sym_object] = ACTIONS(118),
    [anon_sym_string] = ACTIONS(118),
    [sym_identifier_name] = ACTIONS(120),
    [sym_comment] = ACTIONS(36),
  },
  [164] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(254),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_using] = ACTIONS(449),
    [anon_sym_namespace] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_class] = ACTIONS(449),
    [anon_sym_unsafe] = ACTIONS(449),
    [anon_sym_abstract] = ACTIONS(449),
    [anon_sym_sealed] = ACTIONS(449),
    [anon_sym_static] = ACTIONS(449),
    [anon_sym_new] = ACTIONS(449),
    [anon_sym_public] = ACTIONS(449),
    [anon_sym_protected] = ACTIONS(449),
    [anon_sym_internal] = ACTIONS(449),
    [anon_sym_private] = ACTIONS(449),
    [anon_sym_interface] = ACTIONS(449),
    [anon_sym_struct] = ACTIONS(449),
    [anon_sym_enum] = ACTIONS(449),
    [anon_sym_delegate] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [sym_comment] = ACTIONS(36),
  },
  [166] = {
    [sym_identifier_name] = ACTIONS(451),
    [sym_comment] = ACTIONS(36),
  },
  [167] = {
    [sym__class_modifiers] = STATE(45),
    [sym__interface_modifiers] = STATE(48),
    [sym__struct_modifiers] = STATE(46),
    [sym__field_modifiers] = STATE(215),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_unsafe] = ACTIONS(350),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(360),
    [anon_sym_public] = ACTIONS(360),
    [anon_sym_protected] = ACTIONS(360),
    [anon_sym_internal] = ACTIONS(360),
    [anon_sym_private] = ACTIONS(360),
    [anon_sym_interface] = ACTIONS(362),
    [anon_sym_struct] = ACTIONS(352),
    [anon_sym_enum] = ACTIONS(364),
    [anon_sym_sbyte] = ACTIONS(354),
    [anon_sym_byte] = ACTIONS(354),
    [anon_sym_short] = ACTIONS(354),
    [anon_sym_ushort] = ACTIONS(354),
    [anon_sym_int] = ACTIONS(354),
    [anon_sym_uint] = ACTIONS(354),
    [anon_sym_long] = ACTIONS(354),
    [anon_sym_ulong] = ACTIONS(354),
    [anon_sym_char] = ACTIONS(354),
    [anon_sym_delegate] = ACTIONS(356),
    [sym_const_keyword] = ACTIONS(354),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(354),
    [anon_sym_decimal] = ACTIONS(354),
    [anon_sym_double] = ACTIONS(354),
    [anon_sym_float] = ACTIONS(354),
    [anon_sym_object] = ACTIONS(354),
    [anon_sym_string] = ACTIONS(354),
    [sym_identifier_name] = ACTIONS(358),
    [sym_comment] = ACTIONS(36),
  },
  [168] = {
    [sym_identifier_name] = ACTIONS(453),
    [sym_comment] = ACTIONS(36),
  },
  [169] = {
    [sym_identifier_name] = ACTIONS(455),
    [sym_comment] = ACTIONS(36),
  },
  [170] = {
    [sym_identifier_name] = ACTIONS(457),
    [sym_comment] = ACTIONS(36),
  },
  [171] = {
    [sym_return_type] = STATE(259),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [172] = {
    [sym_variable_declaration] = STATE(260),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [173] = {
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_class] = ACTIONS(461),
    [anon_sym_unsafe] = ACTIONS(461),
    [anon_sym_abstract] = ACTIONS(461),
    [anon_sym_sealed] = ACTIONS(461),
    [anon_sym_static] = ACTIONS(461),
    [anon_sym_new] = ACTIONS(461),
    [anon_sym_public] = ACTIONS(461),
    [anon_sym_protected] = ACTIONS(461),
    [anon_sym_internal] = ACTIONS(461),
    [anon_sym_private] = ACTIONS(461),
    [anon_sym_interface] = ACTIONS(461),
    [anon_sym_struct] = ACTIONS(461),
    [anon_sym_enum] = ACTIONS(461),
    [anon_sym_sbyte] = ACTIONS(461),
    [anon_sym_byte] = ACTIONS(461),
    [anon_sym_short] = ACTIONS(461),
    [anon_sym_ushort] = ACTIONS(461),
    [anon_sym_int] = ACTIONS(461),
    [anon_sym_uint] = ACTIONS(461),
    [anon_sym_long] = ACTIONS(461),
    [anon_sym_ulong] = ACTIONS(461),
    [anon_sym_char] = ACTIONS(461),
    [anon_sym_delegate] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(459),
    [sym_const_keyword] = ACTIONS(461),
    [anon_sym_readonly] = ACTIONS(461),
    [anon_sym_volatile] = ACTIONS(461),
    [anon_sym_bool] = ACTIONS(461),
    [anon_sym_decimal] = ACTIONS(461),
    [anon_sym_double] = ACTIONS(461),
    [anon_sym_float] = ACTIONS(461),
    [anon_sym_object] = ACTIONS(461),
    [anon_sym_string] = ACTIONS(461),
    [sym_identifier_name] = ACTIONS(463),
    [sym_comment] = ACTIONS(36),
  },
  [174] = {
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_class] = ACTIONS(386),
    [anon_sym_unsafe] = ACTIONS(386),
    [anon_sym_abstract] = ACTIONS(386),
    [anon_sym_sealed] = ACTIONS(386),
    [anon_sym_static] = ACTIONS(386),
    [anon_sym_new] = ACTIONS(386),
    [anon_sym_public] = ACTIONS(386),
    [anon_sym_protected] = ACTIONS(386),
    [anon_sym_internal] = ACTIONS(386),
    [anon_sym_private] = ACTIONS(386),
    [anon_sym_interface] = ACTIONS(386),
    [anon_sym_struct] = ACTIONS(386),
    [anon_sym_enum] = ACTIONS(386),
    [anon_sym_sbyte] = ACTIONS(386),
    [anon_sym_byte] = ACTIONS(386),
    [anon_sym_short] = ACTIONS(386),
    [anon_sym_ushort] = ACTIONS(386),
    [anon_sym_int] = ACTIONS(386),
    [anon_sym_uint] = ACTIONS(386),
    [anon_sym_long] = ACTIONS(386),
    [anon_sym_ulong] = ACTIONS(386),
    [anon_sym_char] = ACTIONS(386),
    [anon_sym_delegate] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(88),
    [sym_const_keyword] = ACTIONS(386),
    [anon_sym_readonly] = ACTIONS(386),
    [anon_sym_volatile] = ACTIONS(386),
    [anon_sym_bool] = ACTIONS(386),
    [anon_sym_decimal] = ACTIONS(386),
    [anon_sym_double] = ACTIONS(386),
    [anon_sym_float] = ACTIONS(386),
    [anon_sym_object] = ACTIONS(386),
    [anon_sym_string] = ACTIONS(386),
    [sym_identifier_name] = ACTIONS(388),
    [sym_comment] = ACTIONS(36),
  },
  [175] = {
    [anon_sym_class] = ACTIONS(465),
    [sym_comment] = ACTIONS(36),
  },
  [176] = {
    [anon_sym_interface] = ACTIONS(467),
    [sym_comment] = ACTIONS(36),
  },
  [177] = {
    [anon_sym_struct] = ACTIONS(469),
    [sym_comment] = ACTIONS(36),
  },
  [178] = {
    [anon_sym_enum] = ACTIONS(471),
    [sym_comment] = ACTIONS(36),
  },
  [179] = {
    [anon_sym_delegate] = ACTIONS(473),
    [sym_comment] = ACTIONS(36),
  },
  [180] = {
    [sym_class_modifiers] = STATE(267),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_modifiers] = STATE(268),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_modifiers] = STATE(269),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_modifiers] = STATE(270),
    [sym_delegate_modifier] = STATE(271),
    [sym_field_modifiers] = STATE(272),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(260),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_class] = ACTIONS(475),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(477),
    [anon_sym_struct] = ACTIONS(479),
    [anon_sym_enum] = ACTIONS(481),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(483),
    [sym_const_keyword] = ACTIONS(485),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [181] = {
    [sym_variable_declaration] = STATE(260),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_const_keyword] = ACTIONS(485),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [182] = {
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(36),
  },
  [183] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [184] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(276),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [185] = {
    [sym_attribute_list] = STATE(277),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [186] = {
    [sym_equals_value_clause] = STATE(279),
    [anon_sym_RBRACE] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_EQ] = ACTIONS(493),
    [sym_comment] = ACTIONS(36),
  },
  [187] = {
    [aux_sym_enum_declaration_repeat1] = STATE(282),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [188] = {
    [sym_identifier_name] = ACTIONS(499),
    [sym_comment] = ACTIONS(36),
  },
  [189] = {
    [anon_sym_LBRACK] = ACTIONS(108),
    [sym_identifier_name] = ACTIONS(106),
    [sym_comment] = ACTIONS(36),
  },
  [190] = {
    [sym__attribute_section] = STATE(284),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(118),
    [sym_comment] = ACTIONS(36),
  },
  [191] = {
    [anon_sym_LBRACE] = ACTIONS(501),
    [sym_comment] = ACTIONS(36),
  },
  [192] = {
    [anon_sym_LBRACE] = ACTIONS(503),
    [sym_comment] = ACTIONS(36),
  },
  [193] = {
    [sym__formal_parameter_list] = STATE(290),
    [sym_parameter] = STATE(291),
    [sym_parameter_modifier] = STATE(292),
    [sym_parameter_array] = STATE(293),
    [sym__attributes] = STATE(294),
    [sym__attribute_section] = STATE(295),
    [sym__type] = STATE(296),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(297),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_ref] = ACTIONS(507),
    [anon_sym_out] = ACTIONS(507),
    [anon_sym_this] = ACTIONS(507),
    [sym_params_keyword] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [194] = {
    [anon_sym_SEMI] = ACTIONS(513),
    [sym_comment] = ACTIONS(36),
  },
  [195] = {
    [anon_sym_RBRACK] = ACTIONS(515),
    [sym_comment] = ACTIONS(36),
  },
  [196] = {
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(517),
    [sym_comment] = ACTIONS(36),
  },
  [197] = {
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(519),
    [sym_comment] = ACTIONS(36),
  },
  [198] = {
    [sym_attribute] = STATE(300),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [199] = {
    [anon_sym_LBRACE] = ACTIONS(521),
    [sym_comment] = ACTIONS(36),
  },
  [200] = {
    [anon_sym_LBRACE] = ACTIONS(523),
    [sym_comment] = ACTIONS(36),
  },
  [201] = {
    [anon_sym_LBRACE] = ACTIONS(525),
    [sym_comment] = ACTIONS(36),
  },
  [202] = {
    [sym_enum_member_declaration] = STATE(304),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [203] = {
    [sym__integral_type] = STATE(305),
    [anon_sym_sbyte] = ACTIONS(292),
    [anon_sym_byte] = ACTIONS(292),
    [anon_sym_short] = ACTIONS(292),
    [anon_sym_ushort] = ACTIONS(292),
    [anon_sym_int] = ACTIONS(292),
    [anon_sym_uint] = ACTIONS(292),
    [anon_sym_long] = ACTIONS(292),
    [anon_sym_ulong] = ACTIONS(292),
    [anon_sym_char] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [204] = {
    [sym_parameter_list] = STATE(306),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [205] = {
    [sym_type_parameter_list] = STATE(307),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [206] = {
    [sym_type_parameter_list] = STATE(308),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [207] = {
    [sym_type_parameter_list] = STATE(309),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [208] = {
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(527),
    [sym_comment] = ACTIONS(36),
  },
  [209] = {
    [sym_identifier_name] = ACTIONS(529),
    [sym_comment] = ACTIONS(36),
  },
  [210] = {
    [sym__type_declaration] = STATE(78),
    [sym_namespace_declaration] = STATE(78),
    [sym_class_declaration] = STATE(18),
    [sym_class_modifiers] = STATE(19),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(18),
    [sym_interface_modifiers] = STATE(21),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(18),
    [sym_struct_modifiers] = STATE(23),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(18),
    [sym_enum_modifiers] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(531),
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
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(36),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [anon_sym_using] = ACTIONS(533),
    [anon_sym_namespace] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_class] = ACTIONS(533),
    [anon_sym_unsafe] = ACTIONS(533),
    [anon_sym_abstract] = ACTIONS(533),
    [anon_sym_sealed] = ACTIONS(533),
    [anon_sym_static] = ACTIONS(533),
    [anon_sym_new] = ACTIONS(533),
    [anon_sym_public] = ACTIONS(533),
    [anon_sym_protected] = ACTIONS(533),
    [anon_sym_internal] = ACTIONS(533),
    [anon_sym_private] = ACTIONS(533),
    [anon_sym_interface] = ACTIONS(533),
    [anon_sym_struct] = ACTIONS(533),
    [anon_sym_enum] = ACTIONS(533),
    [anon_sym_delegate] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(533),
    [sym_comment] = ACTIONS(36),
  },
  [212] = {
    [anon_sym_using] = ACTIONS(535),
    [anon_sym_namespace] = ACTIONS(535),
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_class] = ACTIONS(535),
    [anon_sym_unsafe] = ACTIONS(535),
    [anon_sym_abstract] = ACTIONS(535),
    [anon_sym_sealed] = ACTIONS(535),
    [anon_sym_static] = ACTIONS(535),
    [anon_sym_new] = ACTIONS(535),
    [anon_sym_public] = ACTIONS(535),
    [anon_sym_protected] = ACTIONS(535),
    [anon_sym_internal] = ACTIONS(535),
    [anon_sym_private] = ACTIONS(535),
    [anon_sym_interface] = ACTIONS(535),
    [anon_sym_struct] = ACTIONS(535),
    [anon_sym_enum] = ACTIONS(535),
    [anon_sym_delegate] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [sym_comment] = ACTIONS(36),
  },
  [213] = {
    [sym_type_parameter_list] = STATE(313),
    [anon_sym_LBRACE] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [214] = {
    [sym__class_modifiers] = STATE(45),
    [sym__struct_modifiers] = STATE(46),
    [sym__field_modifiers] = STATE(215),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_unsafe] = ACTIONS(350),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(350),
    [anon_sym_public] = ACTIONS(350),
    [anon_sym_protected] = ACTIONS(350),
    [anon_sym_internal] = ACTIONS(350),
    [anon_sym_private] = ACTIONS(350),
    [anon_sym_struct] = ACTIONS(352),
    [anon_sym_sbyte] = ACTIONS(354),
    [anon_sym_byte] = ACTIONS(354),
    [anon_sym_short] = ACTIONS(354),
    [anon_sym_ushort] = ACTIONS(354),
    [anon_sym_int] = ACTIONS(354),
    [anon_sym_uint] = ACTIONS(354),
    [anon_sym_long] = ACTIONS(354),
    [anon_sym_ulong] = ACTIONS(354),
    [anon_sym_char] = ACTIONS(354),
    [sym_const_keyword] = ACTIONS(354),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(354),
    [anon_sym_decimal] = ACTIONS(354),
    [anon_sym_double] = ACTIONS(354),
    [anon_sym_float] = ACTIONS(354),
    [anon_sym_object] = ACTIONS(354),
    [anon_sym_string] = ACTIONS(354),
    [sym_identifier_name] = ACTIONS(358),
    [sym_comment] = ACTIONS(36),
  },
  [215] = {
    [anon_sym_sbyte] = ACTIONS(539),
    [anon_sym_byte] = ACTIONS(539),
    [anon_sym_short] = ACTIONS(539),
    [anon_sym_ushort] = ACTIONS(539),
    [anon_sym_int] = ACTIONS(539),
    [anon_sym_uint] = ACTIONS(539),
    [anon_sym_long] = ACTIONS(539),
    [anon_sym_ulong] = ACTIONS(539),
    [anon_sym_char] = ACTIONS(539),
    [sym_const_keyword] = ACTIONS(539),
    [anon_sym_bool] = ACTIONS(539),
    [anon_sym_decimal] = ACTIONS(539),
    [anon_sym_double] = ACTIONS(539),
    [anon_sym_float] = ACTIONS(539),
    [anon_sym_object] = ACTIONS(539),
    [anon_sym_string] = ACTIONS(539),
    [sym_identifier_name] = ACTIONS(541),
    [sym_comment] = ACTIONS(36),
  },
  [216] = {
    [sym__class_modifiers] = STATE(45),
    [sym__interface_modifiers] = STATE(48),
    [sym__struct_modifiers] = STATE(46),
    [sym__field_modifiers] = STATE(215),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_unsafe] = ACTIONS(350),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(360),
    [anon_sym_public] = ACTIONS(360),
    [anon_sym_protected] = ACTIONS(360),
    [anon_sym_internal] = ACTIONS(360),
    [anon_sym_private] = ACTIONS(360),
    [anon_sym_interface] = ACTIONS(362),
    [anon_sym_struct] = ACTIONS(352),
    [anon_sym_sbyte] = ACTIONS(354),
    [anon_sym_byte] = ACTIONS(354),
    [anon_sym_short] = ACTIONS(354),
    [anon_sym_ushort] = ACTIONS(354),
    [anon_sym_int] = ACTIONS(354),
    [anon_sym_uint] = ACTIONS(354),
    [anon_sym_long] = ACTIONS(354),
    [anon_sym_ulong] = ACTIONS(354),
    [anon_sym_char] = ACTIONS(354),
    [sym_const_keyword] = ACTIONS(354),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(354),
    [anon_sym_decimal] = ACTIONS(354),
    [anon_sym_double] = ACTIONS(354),
    [anon_sym_float] = ACTIONS(354),
    [anon_sym_object] = ACTIONS(354),
    [anon_sym_string] = ACTIONS(354),
    [sym_identifier_name] = ACTIONS(358),
    [sym_comment] = ACTIONS(36),
  },
  [217] = {
    [sym_type_parameter_list] = STATE(315),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [218] = {
    [sym_type_parameter_list] = STATE(317),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [219] = {
    [anon_sym_LBRACE] = ACTIONS(547),
    [anon_sym_COLON] = ACTIONS(549),
    [sym_comment] = ACTIONS(36),
  },
  [220] = {
    [sym_identifier_name] = ACTIONS(551),
    [sym_comment] = ACTIONS(36),
  },
  [221] = {
    [anon_sym_SEMI] = ACTIONS(553),
    [sym_comment] = ACTIONS(36),
  },
  [222] = {
    [sym_identifier_name] = ACTIONS(555),
    [sym_comment] = ACTIONS(36),
  },
  [223] = {
    [sym_identifier_name] = ACTIONS(557),
    [sym_comment] = ACTIONS(36),
  },
  [224] = {
    [sym_identifier_name] = ACTIONS(559),
    [sym_comment] = ACTIONS(36),
  },
  [225] = {
    [sym_identifier_name] = ACTIONS(561),
    [sym_comment] = ACTIONS(36),
  },
  [226] = {
    [sym_identifier_name] = ACTIONS(563),
    [sym_comment] = ACTIONS(36),
  },
  [227] = {
    [sym_return_type] = STATE(327),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [228] = {
    [sym_parameter_list] = STATE(328),
    [sym_type_parameter_list] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [229] = {
    [sym_variable_declaration] = STATE(330),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [230] = {
    [anon_sym_class] = ACTIONS(565),
    [sym_comment] = ACTIONS(36),
  },
  [231] = {
    [anon_sym_interface] = ACTIONS(567),
    [sym_comment] = ACTIONS(36),
  },
  [232] = {
    [anon_sym_struct] = ACTIONS(569),
    [sym_comment] = ACTIONS(36),
  },
  [233] = {
    [anon_sym_enum] = ACTIONS(571),
    [sym_comment] = ACTIONS(36),
  },
  [234] = {
    [anon_sym_delegate] = ACTIONS(573),
    [sym_comment] = ACTIONS(36),
  },
  [235] = {
    [sym_variable_declaration] = STATE(330),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_const_keyword] = ACTIONS(575),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [236] = {
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_class] = ACTIONS(579),
    [anon_sym_unsafe] = ACTIONS(579),
    [anon_sym_abstract] = ACTIONS(579),
    [anon_sym_sealed] = ACTIONS(579),
    [anon_sym_static] = ACTIONS(579),
    [anon_sym_new] = ACTIONS(579),
    [anon_sym_public] = ACTIONS(579),
    [anon_sym_protected] = ACTIONS(579),
    [anon_sym_internal] = ACTIONS(579),
    [anon_sym_private] = ACTIONS(579),
    [anon_sym_interface] = ACTIONS(579),
    [anon_sym_struct] = ACTIONS(579),
    [anon_sym_enum] = ACTIONS(579),
    [anon_sym_sbyte] = ACTIONS(579),
    [anon_sym_byte] = ACTIONS(579),
    [anon_sym_short] = ACTIONS(579),
    [anon_sym_ushort] = ACTIONS(579),
    [anon_sym_int] = ACTIONS(579),
    [anon_sym_uint] = ACTIONS(579),
    [anon_sym_long] = ACTIONS(579),
    [anon_sym_ulong] = ACTIONS(579),
    [anon_sym_char] = ACTIONS(579),
    [anon_sym_delegate] = ACTIONS(579),
    [sym_void_keyword] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(577),
    [sym_const_keyword] = ACTIONS(579),
    [anon_sym_readonly] = ACTIONS(579),
    [anon_sym_volatile] = ACTIONS(579),
    [anon_sym_bool] = ACTIONS(579),
    [anon_sym_decimal] = ACTIONS(579),
    [anon_sym_double] = ACTIONS(579),
    [anon_sym_float] = ACTIONS(579),
    [anon_sym_object] = ACTIONS(579),
    [anon_sym_string] = ACTIONS(579),
    [sym_identifier_name] = ACTIONS(581),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(579),
  },
  [237] = {
    [sym_equals_value_clause] = STATE(337),
    [anon_sym_SEMI] = ACTIONS(583),
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_EQ] = ACTIONS(493),
    [sym_comment] = ACTIONS(36),
  },
  [238] = {
    [aux_sym_variable_declaration_repeat1] = STATE(339),
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_COMMA] = ACTIONS(587),
    [sym_comment] = ACTIONS(36),
  },
  [239] = {
    [sym_return_type] = STATE(340),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [240] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [anon_sym_using] = ACTIONS(589),
    [anon_sym_namespace] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_unsafe] = ACTIONS(589),
    [anon_sym_abstract] = ACTIONS(589),
    [anon_sym_sealed] = ACTIONS(589),
    [anon_sym_static] = ACTIONS(589),
    [anon_sym_new] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(589),
    [anon_sym_protected] = ACTIONS(589),
    [anon_sym_internal] = ACTIONS(589),
    [anon_sym_private] = ACTIONS(589),
    [anon_sym_interface] = ACTIONS(589),
    [anon_sym_struct] = ACTIONS(589),
    [anon_sym_enum] = ACTIONS(589),
    [anon_sym_delegate] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [sym_comment] = ACTIONS(36),
  },
  [241] = {
    [anon_sym_RBRACE] = ACTIONS(591),
    [anon_sym_class] = ACTIONS(593),
    [anon_sym_unsafe] = ACTIONS(593),
    [anon_sym_abstract] = ACTIONS(593),
    [anon_sym_sealed] = ACTIONS(593),
    [anon_sym_static] = ACTIONS(593),
    [anon_sym_new] = ACTIONS(593),
    [anon_sym_public] = ACTIONS(593),
    [anon_sym_protected] = ACTIONS(593),
    [anon_sym_internal] = ACTIONS(593),
    [anon_sym_private] = ACTIONS(593),
    [anon_sym_interface] = ACTIONS(593),
    [anon_sym_struct] = ACTIONS(593),
    [anon_sym_enum] = ACTIONS(593),
    [anon_sym_sbyte] = ACTIONS(593),
    [anon_sym_byte] = ACTIONS(593),
    [anon_sym_short] = ACTIONS(593),
    [anon_sym_ushort] = ACTIONS(593),
    [anon_sym_int] = ACTIONS(593),
    [anon_sym_uint] = ACTIONS(593),
    [anon_sym_long] = ACTIONS(593),
    [anon_sym_ulong] = ACTIONS(593),
    [anon_sym_char] = ACTIONS(593),
    [anon_sym_delegate] = ACTIONS(593),
    [sym_void_keyword] = ACTIONS(593),
    [anon_sym_LBRACK] = ACTIONS(591),
    [sym_const_keyword] = ACTIONS(593),
    [anon_sym_readonly] = ACTIONS(593),
    [anon_sym_volatile] = ACTIONS(593),
    [anon_sym_bool] = ACTIONS(593),
    [anon_sym_decimal] = ACTIONS(593),
    [anon_sym_double] = ACTIONS(593),
    [anon_sym_float] = ACTIONS(593),
    [anon_sym_object] = ACTIONS(593),
    [anon_sym_string] = ACTIONS(593),
    [sym_identifier_name] = ACTIONS(595),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(593),
  },
  [242] = {
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_type_parameter] = STATE(341),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [243] = {
    [anon_sym_LBRACE] = ACTIONS(597),
    [anon_sym_COMMA] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_GT] = ACTIONS(597),
    [sym_identifier_name] = ACTIONS(599),
    [sym_comment] = ACTIONS(36),
  },
  [244] = {
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_GT] = ACTIONS(603),
    [sym_comment] = ACTIONS(36),
  },
  [245] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(605),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [246] = {
    [anon_sym_RBRACK] = ACTIONS(607),
    [sym_comment] = ACTIONS(36),
  },
  [247] = {
    [anon_sym_SEMI] = ACTIONS(609),
    [sym_comment] = ACTIONS(36),
  },
  [248] = {
    [sym_variable_declaration] = STATE(347),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [249] = {
    [sym_variable_declaration] = STATE(347),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_const_keyword] = ACTIONS(611),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [250] = {
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_unsafe] = ACTIONS(579),
    [anon_sym_static] = ACTIONS(579),
    [anon_sym_new] = ACTIONS(579),
    [anon_sym_public] = ACTIONS(579),
    [anon_sym_protected] = ACTIONS(579),
    [anon_sym_internal] = ACTIONS(579),
    [anon_sym_private] = ACTIONS(579),
    [anon_sym_sbyte] = ACTIONS(579),
    [anon_sym_byte] = ACTIONS(579),
    [anon_sym_short] = ACTIONS(579),
    [anon_sym_ushort] = ACTIONS(579),
    [anon_sym_int] = ACTIONS(579),
    [anon_sym_uint] = ACTIONS(579),
    [anon_sym_long] = ACTIONS(579),
    [anon_sym_ulong] = ACTIONS(579),
    [anon_sym_char] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(577),
    [sym_const_keyword] = ACTIONS(579),
    [anon_sym_readonly] = ACTIONS(579),
    [anon_sym_volatile] = ACTIONS(579),
    [anon_sym_bool] = ACTIONS(579),
    [anon_sym_decimal] = ACTIONS(579),
    [anon_sym_double] = ACTIONS(579),
    [anon_sym_float] = ACTIONS(579),
    [anon_sym_object] = ACTIONS(579),
    [anon_sym_string] = ACTIONS(579),
    [sym_identifier_name] = ACTIONS(581),
    [sym_comment] = ACTIONS(36),
  },
  [251] = {
    [ts_builtin_sym_end] = ACTIONS(613),
    [anon_sym_using] = ACTIONS(613),
    [anon_sym_namespace] = ACTIONS(613),
    [anon_sym_RBRACE] = ACTIONS(613),
    [anon_sym_class] = ACTIONS(613),
    [anon_sym_unsafe] = ACTIONS(613),
    [anon_sym_abstract] = ACTIONS(613),
    [anon_sym_sealed] = ACTIONS(613),
    [anon_sym_static] = ACTIONS(613),
    [anon_sym_new] = ACTIONS(613),
    [anon_sym_public] = ACTIONS(613),
    [anon_sym_protected] = ACTIONS(613),
    [anon_sym_internal] = ACTIONS(613),
    [anon_sym_private] = ACTIONS(613),
    [anon_sym_interface] = ACTIONS(613),
    [anon_sym_struct] = ACTIONS(613),
    [anon_sym_enum] = ACTIONS(613),
    [anon_sym_delegate] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(613),
    [sym_comment] = ACTIONS(36),
  },
  [252] = {
    [anon_sym_RBRACE] = ACTIONS(615),
    [anon_sym_unsafe] = ACTIONS(617),
    [anon_sym_static] = ACTIONS(617),
    [anon_sym_new] = ACTIONS(617),
    [anon_sym_public] = ACTIONS(617),
    [anon_sym_protected] = ACTIONS(617),
    [anon_sym_internal] = ACTIONS(617),
    [anon_sym_private] = ACTIONS(617),
    [anon_sym_sbyte] = ACTIONS(617),
    [anon_sym_byte] = ACTIONS(617),
    [anon_sym_short] = ACTIONS(617),
    [anon_sym_ushort] = ACTIONS(617),
    [anon_sym_int] = ACTIONS(617),
    [anon_sym_uint] = ACTIONS(617),
    [anon_sym_long] = ACTIONS(617),
    [anon_sym_ulong] = ACTIONS(617),
    [anon_sym_char] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(615),
    [sym_const_keyword] = ACTIONS(617),
    [anon_sym_readonly] = ACTIONS(617),
    [anon_sym_volatile] = ACTIONS(617),
    [anon_sym_bool] = ACTIONS(617),
    [anon_sym_decimal] = ACTIONS(617),
    [anon_sym_double] = ACTIONS(617),
    [anon_sym_float] = ACTIONS(617),
    [anon_sym_object] = ACTIONS(617),
    [anon_sym_string] = ACTIONS(617),
    [sym_identifier_name] = ACTIONS(619),
    [sym_comment] = ACTIONS(36),
  },
  [253] = {
    [anon_sym_unsafe] = ACTIONS(212),
    [anon_sym_static] = ACTIONS(212),
    [anon_sym_new] = ACTIONS(212),
    [anon_sym_public] = ACTIONS(212),
    [anon_sym_protected] = ACTIONS(212),
    [anon_sym_internal] = ACTIONS(212),
    [anon_sym_private] = ACTIONS(212),
    [anon_sym_sbyte] = ACTIONS(212),
    [anon_sym_byte] = ACTIONS(212),
    [anon_sym_short] = ACTIONS(212),
    [anon_sym_ushort] = ACTIONS(212),
    [anon_sym_int] = ACTIONS(212),
    [anon_sym_uint] = ACTIONS(212),
    [anon_sym_long] = ACTIONS(212),
    [anon_sym_ulong] = ACTIONS(212),
    [anon_sym_char] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(214),
    [sym_const_keyword] = ACTIONS(212),
    [anon_sym_readonly] = ACTIONS(212),
    [anon_sym_volatile] = ACTIONS(212),
    [anon_sym_bool] = ACTIONS(212),
    [anon_sym_decimal] = ACTIONS(212),
    [anon_sym_double] = ACTIONS(212),
    [anon_sym_float] = ACTIONS(212),
    [anon_sym_object] = ACTIONS(212),
    [anon_sym_string] = ACTIONS(212),
    [sym_identifier_name] = ACTIONS(216),
    [sym_comment] = ACTIONS(36),
  },
  [254] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(621),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [255] = {
    [sym_type_parameter_list] = STATE(351),
    [anon_sym_LBRACE] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [256] = {
    [sym_type_parameter_list] = STATE(353),
    [anon_sym_LBRACE] = ACTIONS(625),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [257] = {
    [sym_type_parameter_list] = STATE(355),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [258] = {
    [anon_sym_LBRACE] = ACTIONS(629),
    [anon_sym_COLON] = ACTIONS(631),
    [sym_comment] = ACTIONS(36),
  },
  [259] = {
    [sym_identifier_name] = ACTIONS(633),
    [sym_comment] = ACTIONS(36),
  },
  [260] = {
    [anon_sym_SEMI] = ACTIONS(635),
    [sym_comment] = ACTIONS(36),
  },
  [261] = {
    [sym_identifier_name] = ACTIONS(637),
    [sym_comment] = ACTIONS(36),
  },
  [262] = {
    [sym_identifier_name] = ACTIONS(639),
    [sym_comment] = ACTIONS(36),
  },
  [263] = {
    [sym_identifier_name] = ACTIONS(641),
    [sym_comment] = ACTIONS(36),
  },
  [264] = {
    [sym_identifier_name] = ACTIONS(643),
    [sym_comment] = ACTIONS(36),
  },
  [265] = {
    [sym_return_type] = STATE(364),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [266] = {
    [sym_variable_declaration] = STATE(365),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [267] = {
    [anon_sym_class] = ACTIONS(645),
    [sym_comment] = ACTIONS(36),
  },
  [268] = {
    [anon_sym_interface] = ACTIONS(647),
    [sym_comment] = ACTIONS(36),
  },
  [269] = {
    [anon_sym_struct] = ACTIONS(649),
    [sym_comment] = ACTIONS(36),
  },
  [270] = {
    [anon_sym_enum] = ACTIONS(651),
    [sym_comment] = ACTIONS(36),
  },
  [271] = {
    [anon_sym_delegate] = ACTIONS(653),
    [sym_comment] = ACTIONS(36),
  },
  [272] = {
    [sym_variable_declaration] = STATE(365),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_const_keyword] = ACTIONS(655),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [273] = {
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_class] = ACTIONS(579),
    [anon_sym_unsafe] = ACTIONS(579),
    [anon_sym_abstract] = ACTIONS(579),
    [anon_sym_sealed] = ACTIONS(579),
    [anon_sym_static] = ACTIONS(579),
    [anon_sym_new] = ACTIONS(579),
    [anon_sym_public] = ACTIONS(579),
    [anon_sym_protected] = ACTIONS(579),
    [anon_sym_internal] = ACTIONS(579),
    [anon_sym_private] = ACTIONS(579),
    [anon_sym_interface] = ACTIONS(579),
    [anon_sym_struct] = ACTIONS(579),
    [anon_sym_enum] = ACTIONS(579),
    [anon_sym_sbyte] = ACTIONS(579),
    [anon_sym_byte] = ACTIONS(579),
    [anon_sym_short] = ACTIONS(579),
    [anon_sym_ushort] = ACTIONS(579),
    [anon_sym_int] = ACTIONS(579),
    [anon_sym_uint] = ACTIONS(579),
    [anon_sym_long] = ACTIONS(579),
    [anon_sym_ulong] = ACTIONS(579),
    [anon_sym_char] = ACTIONS(579),
    [anon_sym_delegate] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(577),
    [sym_const_keyword] = ACTIONS(579),
    [anon_sym_readonly] = ACTIONS(579),
    [anon_sym_volatile] = ACTIONS(579),
    [anon_sym_bool] = ACTIONS(579),
    [anon_sym_decimal] = ACTIONS(579),
    [anon_sym_double] = ACTIONS(579),
    [anon_sym_float] = ACTIONS(579),
    [anon_sym_object] = ACTIONS(579),
    [anon_sym_string] = ACTIONS(579),
    [sym_identifier_name] = ACTIONS(581),
    [sym_comment] = ACTIONS(36),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(657),
    [anon_sym_using] = ACTIONS(657),
    [anon_sym_namespace] = ACTIONS(657),
    [anon_sym_RBRACE] = ACTIONS(657),
    [anon_sym_class] = ACTIONS(657),
    [anon_sym_unsafe] = ACTIONS(657),
    [anon_sym_abstract] = ACTIONS(657),
    [anon_sym_sealed] = ACTIONS(657),
    [anon_sym_static] = ACTIONS(657),
    [anon_sym_new] = ACTIONS(657),
    [anon_sym_public] = ACTIONS(657),
    [anon_sym_protected] = ACTIONS(657),
    [anon_sym_internal] = ACTIONS(657),
    [anon_sym_private] = ACTIONS(657),
    [anon_sym_interface] = ACTIONS(657),
    [anon_sym_struct] = ACTIONS(657),
    [anon_sym_enum] = ACTIONS(657),
    [anon_sym_delegate] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [sym_comment] = ACTIONS(36),
  },
  [275] = {
    [anon_sym_RBRACE] = ACTIONS(659),
    [anon_sym_class] = ACTIONS(661),
    [anon_sym_unsafe] = ACTIONS(661),
    [anon_sym_abstract] = ACTIONS(661),
    [anon_sym_sealed] = ACTIONS(661),
    [anon_sym_static] = ACTIONS(661),
    [anon_sym_new] = ACTIONS(661),
    [anon_sym_public] = ACTIONS(661),
    [anon_sym_protected] = ACTIONS(661),
    [anon_sym_internal] = ACTIONS(661),
    [anon_sym_private] = ACTIONS(661),
    [anon_sym_interface] = ACTIONS(661),
    [anon_sym_struct] = ACTIONS(661),
    [anon_sym_enum] = ACTIONS(661),
    [anon_sym_sbyte] = ACTIONS(661),
    [anon_sym_byte] = ACTIONS(661),
    [anon_sym_short] = ACTIONS(661),
    [anon_sym_ushort] = ACTIONS(661),
    [anon_sym_int] = ACTIONS(661),
    [anon_sym_uint] = ACTIONS(661),
    [anon_sym_long] = ACTIONS(661),
    [anon_sym_ulong] = ACTIONS(661),
    [anon_sym_char] = ACTIONS(661),
    [anon_sym_delegate] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(659),
    [sym_const_keyword] = ACTIONS(661),
    [anon_sym_readonly] = ACTIONS(661),
    [anon_sym_volatile] = ACTIONS(661),
    [anon_sym_bool] = ACTIONS(661),
    [anon_sym_decimal] = ACTIONS(661),
    [anon_sym_double] = ACTIONS(661),
    [anon_sym_float] = ACTIONS(661),
    [anon_sym_object] = ACTIONS(661),
    [anon_sym_string] = ACTIONS(661),
    [sym_identifier_name] = ACTIONS(663),
    [sym_comment] = ACTIONS(36),
  },
  [276] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(665),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [277] = {
    [anon_sym_RBRACK] = ACTIONS(667),
    [sym_comment] = ACTIONS(36),
  },
  [278] = {
    [sym__expression] = STATE(382),
    [sym__literal] = STATE(383),
    [sym_boolean_literal] = STATE(378),
    [sym_character_literal] = STATE(378),
    [sym_integer_literal] = STATE(378),
    [sym_real_literal] = STATE(378),
    [sym_string_literal] = STATE(378),
    [sym__regular_string_literal] = STATE(384),
    [sym__verbatim_string_literal] = STATE(384),
    [anon_sym_true] = ACTIONS(669),
    [anon_sym_false] = ACTIONS(669),
    [anon_sym_SQUOTE] = ACTIONS(671),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(673),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(675),
    [sym_null_literal] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(679),
    [anon_sym_DQUOTE] = ACTIONS(681),
    [anon_sym_AT_DQUOTE] = ACTIONS(683),
    [sym_comment] = ACTIONS(36),
  },
  [279] = {
    [anon_sym_RBRACE] = ACTIONS(685),
    [anon_sym_COMMA] = ACTIONS(685),
    [sym_comment] = ACTIONS(36),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(687),
    [anon_sym_SEMI] = ACTIONS(689),
    [anon_sym_using] = ACTIONS(687),
    [anon_sym_namespace] = ACTIONS(687),
    [anon_sym_RBRACE] = ACTIONS(687),
    [anon_sym_class] = ACTIONS(687),
    [anon_sym_unsafe] = ACTIONS(687),
    [anon_sym_abstract] = ACTIONS(687),
    [anon_sym_sealed] = ACTIONS(687),
    [anon_sym_static] = ACTIONS(687),
    [anon_sym_new] = ACTIONS(687),
    [anon_sym_public] = ACTIONS(687),
    [anon_sym_protected] = ACTIONS(687),
    [anon_sym_internal] = ACTIONS(687),
    [anon_sym_private] = ACTIONS(687),
    [anon_sym_interface] = ACTIONS(687),
    [anon_sym_struct] = ACTIONS(687),
    [anon_sym_enum] = ACTIONS(687),
    [anon_sym_delegate] = ACTIONS(687),
    [anon_sym_LBRACK] = ACTIONS(687),
    [sym_comment] = ACTIONS(36),
  },
  [281] = {
    [sym_enum_member_declaration] = STATE(386),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [282] = {
    [anon_sym_RBRACE] = ACTIONS(691),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [283] = {
    [sym_equals_value_clause] = STATE(389),
    [anon_sym_RBRACE] = ACTIONS(685),
    [anon_sym_COMMA] = ACTIONS(685),
    [anon_sym_EQ] = ACTIONS(493),
    [sym_comment] = ACTIONS(36),
  },
  [284] = {
    [anon_sym_LBRACK] = ACTIONS(214),
    [sym_identifier_name] = ACTIONS(212),
    [sym_comment] = ACTIONS(36),
  },
  [285] = {
    [sym_enum_member_declaration] = STATE(390),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [286] = {
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(695),
    [sym_comment] = ACTIONS(36),
  },
  [287] = {
    [anon_sym_sbyte] = ACTIONS(697),
    [anon_sym_byte] = ACTIONS(697),
    [anon_sym_short] = ACTIONS(697),
    [anon_sym_ushort] = ACTIONS(697),
    [anon_sym_int] = ACTIONS(697),
    [anon_sym_uint] = ACTIONS(697),
    [anon_sym_long] = ACTIONS(697),
    [anon_sym_ulong] = ACTIONS(697),
    [anon_sym_char] = ACTIONS(697),
    [anon_sym_bool] = ACTIONS(697),
    [anon_sym_decimal] = ACTIONS(697),
    [anon_sym_double] = ACTIONS(697),
    [anon_sym_float] = ACTIONS(697),
    [anon_sym_object] = ACTIONS(697),
    [anon_sym_string] = ACTIONS(697),
    [sym_identifier_name] = ACTIONS(699),
    [sym_comment] = ACTIONS(36),
  },
  [288] = {
    [sym_array_type] = STATE(391),
    [sym__type] = STATE(392),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [289] = {
    [sym_attribute_list] = STATE(393),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [290] = {
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym_comment] = ACTIONS(36),
  },
  [291] = {
    [sym_parameter_array] = STATE(396),
    [sym__attributes] = STATE(397),
    [sym__attribute_section] = STATE(295),
    [aux_sym__formal_parameter_list_repeat1] = STATE(398),
    [aux_sym__attributes_repeat1] = STATE(297),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(705),
    [sym_params_keyword] = ACTIONS(707),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(36),
  },
  [292] = {
    [sym__type] = STATE(399),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [293] = {
    [anon_sym_RPAREN] = ACTIONS(705),
    [sym_comment] = ACTIONS(36),
  },
  [294] = {
    [sym_parameter_modifier] = STATE(401),
    [sym__type] = STATE(399),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_ref] = ACTIONS(507),
    [anon_sym_out] = ACTIONS(507),
    [anon_sym_this] = ACTIONS(507),
    [sym_params_keyword] = ACTIONS(709),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [295] = {
    [anon_sym_sbyte] = ACTIONS(106),
    [anon_sym_byte] = ACTIONS(106),
    [anon_sym_short] = ACTIONS(106),
    [anon_sym_ushort] = ACTIONS(106),
    [anon_sym_int] = ACTIONS(106),
    [anon_sym_uint] = ACTIONS(106),
    [anon_sym_long] = ACTIONS(106),
    [anon_sym_ulong] = ACTIONS(106),
    [anon_sym_char] = ACTIONS(106),
    [anon_sym_ref] = ACTIONS(106),
    [anon_sym_out] = ACTIONS(106),
    [anon_sym_this] = ACTIONS(106),
    [sym_params_keyword] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_bool] = ACTIONS(106),
    [anon_sym_decimal] = ACTIONS(106),
    [anon_sym_double] = ACTIONS(106),
    [anon_sym_float] = ACTIONS(106),
    [anon_sym_object] = ACTIONS(106),
    [anon_sym_string] = ACTIONS(106),
    [sym_identifier_name] = ACTIONS(110),
    [sym_comment] = ACTIONS(36),
  },
  [296] = {
    [sym_identifier_name] = ACTIONS(711),
    [sym_comment] = ACTIONS(36),
  },
  [297] = {
    [sym__attribute_section] = STATE(403),
    [anon_sym_sbyte] = ACTIONS(118),
    [anon_sym_byte] = ACTIONS(118),
    [anon_sym_short] = ACTIONS(118),
    [anon_sym_ushort] = ACTIONS(118),
    [anon_sym_int] = ACTIONS(118),
    [anon_sym_uint] = ACTIONS(118),
    [anon_sym_long] = ACTIONS(118),
    [anon_sym_ulong] = ACTIONS(118),
    [anon_sym_char] = ACTIONS(118),
    [anon_sym_ref] = ACTIONS(118),
    [anon_sym_out] = ACTIONS(118),
    [anon_sym_this] = ACTIONS(118),
    [sym_params_keyword] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_bool] = ACTIONS(118),
    [anon_sym_decimal] = ACTIONS(118),
    [anon_sym_double] = ACTIONS(118),
    [anon_sym_float] = ACTIONS(118),
    [anon_sym_object] = ACTIONS(118),
    [anon_sym_string] = ACTIONS(118),
    [sym_identifier_name] = ACTIONS(120),
    [sym_comment] = ACTIONS(36),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(713),
    [anon_sym_using] = ACTIONS(713),
    [anon_sym_namespace] = ACTIONS(713),
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_class] = ACTIONS(713),
    [anon_sym_unsafe] = ACTIONS(713),
    [anon_sym_abstract] = ACTIONS(713),
    [anon_sym_sealed] = ACTIONS(713),
    [anon_sym_static] = ACTIONS(713),
    [anon_sym_new] = ACTIONS(713),
    [anon_sym_public] = ACTIONS(713),
    [anon_sym_protected] = ACTIONS(713),
    [anon_sym_internal] = ACTIONS(713),
    [anon_sym_private] = ACTIONS(713),
    [anon_sym_interface] = ACTIONS(713),
    [anon_sym_struct] = ACTIONS(713),
    [anon_sym_enum] = ACTIONS(713),
    [anon_sym_delegate] = ACTIONS(713),
    [anon_sym_LBRACK] = ACTIONS(713),
    [sym_comment] = ACTIONS(36),
  },
  [299] = {
    [ts_builtin_sym_end] = ACTIONS(715),
    [anon_sym_namespace] = ACTIONS(715),
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
    [sym_comment] = ACTIONS(36),
  },
  [300] = {
    [anon_sym_COMMA] = ACTIONS(717),
    [anon_sym_RBRACK] = ACTIONS(717),
    [sym_comment] = ACTIONS(36),
  },
  [301] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(404),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(605),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [302] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(405),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(621),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [303] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(406),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(665),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [304] = {
    [aux_sym_enum_declaration_repeat1] = STATE(407),
    [anon_sym_RBRACE] = ACTIONS(691),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [305] = {
    [anon_sym_LBRACE] = ACTIONS(719),
    [sym_comment] = ACTIONS(36),
  },
  [306] = {
    [anon_sym_SEMI] = ACTIONS(721),
    [sym_comment] = ACTIONS(36),
  },
  [307] = {
    [anon_sym_LBRACE] = ACTIONS(723),
    [sym_comment] = ACTIONS(36),
  },
  [308] = {
    [anon_sym_LBRACE] = ACTIONS(725),
    [sym_comment] = ACTIONS(36),
  },
  [309] = {
    [anon_sym_LBRACE] = ACTIONS(727),
    [sym_comment] = ACTIONS(36),
  },
  [310] = {
    [sym__integral_type] = STATE(413),
    [anon_sym_sbyte] = ACTIONS(292),
    [anon_sym_byte] = ACTIONS(292),
    [anon_sym_short] = ACTIONS(292),
    [anon_sym_ushort] = ACTIONS(292),
    [anon_sym_int] = ACTIONS(292),
    [anon_sym_uint] = ACTIONS(292),
    [anon_sym_long] = ACTIONS(292),
    [anon_sym_ulong] = ACTIONS(292),
    [anon_sym_char] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [311] = {
    [sym_parameter_list] = STATE(414),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [312] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(416),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(729),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [313] = {
    [anon_sym_LBRACE] = ACTIONS(731),
    [sym_comment] = ACTIONS(36),
  },
  [314] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(419),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(733),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [315] = {
    [anon_sym_LBRACE] = ACTIONS(735),
    [sym_comment] = ACTIONS(36),
  },
  [316] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(422),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(737),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [317] = {
    [anon_sym_LBRACE] = ACTIONS(739),
    [sym_comment] = ACTIONS(36),
  },
  [318] = {
    [sym_enum_member_declaration] = STATE(424),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [319] = {
    [sym__integral_type] = STATE(425),
    [anon_sym_sbyte] = ACTIONS(292),
    [anon_sym_byte] = ACTIONS(292),
    [anon_sym_short] = ACTIONS(292),
    [anon_sym_ushort] = ACTIONS(292),
    [anon_sym_int] = ACTIONS(292),
    [anon_sym_uint] = ACTIONS(292),
    [anon_sym_long] = ACTIONS(292),
    [anon_sym_ulong] = ACTIONS(292),
    [anon_sym_char] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [320] = {
    [sym_parameter_list] = STATE(426),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [321] = {
    [anon_sym_RBRACE] = ACTIONS(741),
    [anon_sym_class] = ACTIONS(743),
    [anon_sym_unsafe] = ACTIONS(743),
    [anon_sym_abstract] = ACTIONS(743),
    [anon_sym_sealed] = ACTIONS(743),
    [anon_sym_static] = ACTIONS(743),
    [anon_sym_new] = ACTIONS(743),
    [anon_sym_public] = ACTIONS(743),
    [anon_sym_protected] = ACTIONS(743),
    [anon_sym_internal] = ACTIONS(743),
    [anon_sym_private] = ACTIONS(743),
    [anon_sym_interface] = ACTIONS(743),
    [anon_sym_struct] = ACTIONS(743),
    [anon_sym_enum] = ACTIONS(743),
    [anon_sym_sbyte] = ACTIONS(743),
    [anon_sym_byte] = ACTIONS(743),
    [anon_sym_short] = ACTIONS(743),
    [anon_sym_ushort] = ACTIONS(743),
    [anon_sym_int] = ACTIONS(743),
    [anon_sym_uint] = ACTIONS(743),
    [anon_sym_long] = ACTIONS(743),
    [anon_sym_ulong] = ACTIONS(743),
    [anon_sym_char] = ACTIONS(743),
    [anon_sym_delegate] = ACTIONS(743),
    [sym_void_keyword] = ACTIONS(743),
    [anon_sym_LBRACK] = ACTIONS(741),
    [sym_const_keyword] = ACTIONS(743),
    [anon_sym_readonly] = ACTIONS(743),
    [anon_sym_volatile] = ACTIONS(743),
    [anon_sym_bool] = ACTIONS(743),
    [anon_sym_decimal] = ACTIONS(743),
    [anon_sym_double] = ACTIONS(743),
    [anon_sym_float] = ACTIONS(743),
    [anon_sym_object] = ACTIONS(743),
    [anon_sym_string] = ACTIONS(743),
    [sym_identifier_name] = ACTIONS(745),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(743),
  },
  [322] = {
    [sym_parameter_list] = STATE(427),
    [sym_type_parameter_list] = STATE(428),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [323] = {
    [sym_type_parameter_list] = STATE(429),
    [anon_sym_LBRACE] = ACTIONS(731),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [324] = {
    [sym_type_parameter_list] = STATE(430),
    [anon_sym_LBRACE] = ACTIONS(735),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [325] = {
    [sym_type_parameter_list] = STATE(431),
    [anon_sym_LBRACE] = ACTIONS(739),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [326] = {
    [anon_sym_LBRACE] = ACTIONS(747),
    [anon_sym_COLON] = ACTIONS(749),
    [sym_comment] = ACTIONS(36),
  },
  [327] = {
    [sym_identifier_name] = ACTIONS(751),
    [sym_comment] = ACTIONS(36),
  },
  [328] = {
    [sym_statement_block] = STATE(436),
    [anon_sym_LBRACE] = ACTIONS(753),
    [sym_comment] = ACTIONS(36),
  },
  [329] = {
    [sym_parameter_list] = STATE(427),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [330] = {
    [anon_sym_SEMI] = ACTIONS(755),
    [sym_comment] = ACTIONS(36),
  },
  [331] = {
    [sym_identifier_name] = ACTIONS(757),
    [sym_comment] = ACTIONS(36),
  },
  [332] = {
    [sym_identifier_name] = ACTIONS(759),
    [sym_comment] = ACTIONS(36),
  },
  [333] = {
    [sym_identifier_name] = ACTIONS(761),
    [sym_comment] = ACTIONS(36),
  },
  [334] = {
    [sym_identifier_name] = ACTIONS(763),
    [sym_comment] = ACTIONS(36),
  },
  [335] = {
    [sym_return_type] = STATE(442),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [336] = {
    [sym_variable_declaration] = STATE(443),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [337] = {
    [anon_sym_SEMI] = ACTIONS(765),
    [anon_sym_COMMA] = ACTIONS(765),
    [sym_comment] = ACTIONS(36),
  },
  [338] = {
    [sym_variable_declarator] = STATE(444),
    [sym_identifier_name] = ACTIONS(445),
    [sym_comment] = ACTIONS(36),
  },
  [339] = {
    [anon_sym_SEMI] = ACTIONS(767),
    [anon_sym_COMMA] = ACTIONS(769),
    [sym_comment] = ACTIONS(36),
  },
  [340] = {
    [sym_identifier_name] = ACTIONS(771),
    [sym_comment] = ACTIONS(36),
  },
  [341] = {
    [anon_sym_COMMA] = ACTIONS(773),
    [anon_sym_GT] = ACTIONS(773),
    [sym_comment] = ACTIONS(36),
  },
  [342] = {
    [sym__type] = STATE(150),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_type_parameter] = STATE(447),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [343] = {
    [anon_sym_LBRACE] = ACTIONS(775),
    [anon_sym_COMMA] = ACTIONS(775),
    [anon_sym_LPAREN] = ACTIONS(775),
    [anon_sym_LBRACK] = ACTIONS(775),
    [anon_sym_GT] = ACTIONS(775),
    [sym_identifier_name] = ACTIONS(777),
    [sym_comment] = ACTIONS(36),
  },
  [344] = {
    [ts_builtin_sym_end] = ACTIONS(779),
    [anon_sym_using] = ACTIONS(779),
    [anon_sym_namespace] = ACTIONS(779),
    [anon_sym_RBRACE] = ACTIONS(779),
    [anon_sym_class] = ACTIONS(779),
    [anon_sym_unsafe] = ACTIONS(779),
    [anon_sym_abstract] = ACTIONS(779),
    [anon_sym_sealed] = ACTIONS(779),
    [anon_sym_static] = ACTIONS(779),
    [anon_sym_new] = ACTIONS(779),
    [anon_sym_public] = ACTIONS(779),
    [anon_sym_protected] = ACTIONS(779),
    [anon_sym_internal] = ACTIONS(779),
    [anon_sym_private] = ACTIONS(779),
    [anon_sym_interface] = ACTIONS(779),
    [anon_sym_struct] = ACTIONS(779),
    [anon_sym_enum] = ACTIONS(779),
    [anon_sym_delegate] = ACTIONS(779),
    [anon_sym_LBRACK] = ACTIONS(779),
    [sym_comment] = ACTIONS(36),
  },
  [345] = {
    [anon_sym_unsafe] = ACTIONS(304),
    [anon_sym_static] = ACTIONS(304),
    [anon_sym_new] = ACTIONS(304),
    [anon_sym_public] = ACTIONS(304),
    [anon_sym_protected] = ACTIONS(304),
    [anon_sym_internal] = ACTIONS(304),
    [anon_sym_private] = ACTIONS(304),
    [anon_sym_sbyte] = ACTIONS(304),
    [anon_sym_byte] = ACTIONS(304),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_ushort] = ACTIONS(304),
    [anon_sym_int] = ACTIONS(304),
    [anon_sym_uint] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(304),
    [anon_sym_ulong] = ACTIONS(304),
    [anon_sym_char] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_const_keyword] = ACTIONS(304),
    [anon_sym_readonly] = ACTIONS(304),
    [anon_sym_volatile] = ACTIONS(304),
    [anon_sym_bool] = ACTIONS(304),
    [anon_sym_decimal] = ACTIONS(304),
    [anon_sym_double] = ACTIONS(304),
    [anon_sym_float] = ACTIONS(304),
    [anon_sym_object] = ACTIONS(304),
    [anon_sym_string] = ACTIONS(304),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [346] = {
    [anon_sym_RBRACE] = ACTIONS(741),
    [anon_sym_unsafe] = ACTIONS(743),
    [anon_sym_static] = ACTIONS(743),
    [anon_sym_new] = ACTIONS(743),
    [anon_sym_public] = ACTIONS(743),
    [anon_sym_protected] = ACTIONS(743),
    [anon_sym_internal] = ACTIONS(743),
    [anon_sym_private] = ACTIONS(743),
    [anon_sym_sbyte] = ACTIONS(743),
    [anon_sym_byte] = ACTIONS(743),
    [anon_sym_short] = ACTIONS(743),
    [anon_sym_ushort] = ACTIONS(743),
    [anon_sym_int] = ACTIONS(743),
    [anon_sym_uint] = ACTIONS(743),
    [anon_sym_long] = ACTIONS(743),
    [anon_sym_ulong] = ACTIONS(743),
    [anon_sym_char] = ACTIONS(743),
    [anon_sym_LBRACK] = ACTIONS(741),
    [sym_const_keyword] = ACTIONS(743),
    [anon_sym_readonly] = ACTIONS(743),
    [anon_sym_volatile] = ACTIONS(743),
    [anon_sym_bool] = ACTIONS(743),
    [anon_sym_decimal] = ACTIONS(743),
    [anon_sym_double] = ACTIONS(743),
    [anon_sym_float] = ACTIONS(743),
    [anon_sym_object] = ACTIONS(743),
    [anon_sym_string] = ACTIONS(743),
    [sym_identifier_name] = ACTIONS(745),
    [sym_comment] = ACTIONS(36),
  },
  [347] = {
    [anon_sym_SEMI] = ACTIONS(781),
    [sym_comment] = ACTIONS(36),
  },
  [348] = {
    [sym_variable_declaration] = STATE(449),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [349] = {
    [ts_builtin_sym_end] = ACTIONS(783),
    [anon_sym_using] = ACTIONS(783),
    [anon_sym_namespace] = ACTIONS(783),
    [anon_sym_RBRACE] = ACTIONS(783),
    [anon_sym_class] = ACTIONS(783),
    [anon_sym_unsafe] = ACTIONS(783),
    [anon_sym_abstract] = ACTIONS(783),
    [anon_sym_sealed] = ACTIONS(783),
    [anon_sym_static] = ACTIONS(783),
    [anon_sym_new] = ACTIONS(783),
    [anon_sym_public] = ACTIONS(783),
    [anon_sym_protected] = ACTIONS(783),
    [anon_sym_internal] = ACTIONS(783),
    [anon_sym_private] = ACTIONS(783),
    [anon_sym_interface] = ACTIONS(783),
    [anon_sym_struct] = ACTIONS(783),
    [anon_sym_enum] = ACTIONS(783),
    [anon_sym_delegate] = ACTIONS(783),
    [anon_sym_LBRACK] = ACTIONS(783),
    [sym_comment] = ACTIONS(36),
  },
  [350] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(451),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(785),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [351] = {
    [anon_sym_LBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(36),
  },
  [352] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(454),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(789),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [353] = {
    [anon_sym_LBRACE] = ACTIONS(791),
    [sym_comment] = ACTIONS(36),
  },
  [354] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(457),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(793),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [355] = {
    [anon_sym_LBRACE] = ACTIONS(795),
    [sym_comment] = ACTIONS(36),
  },
  [356] = {
    [sym_enum_member_declaration] = STATE(459),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [357] = {
    [sym__integral_type] = STATE(460),
    [anon_sym_sbyte] = ACTIONS(292),
    [anon_sym_byte] = ACTIONS(292),
    [anon_sym_short] = ACTIONS(292),
    [anon_sym_ushort] = ACTIONS(292),
    [anon_sym_int] = ACTIONS(292),
    [anon_sym_uint] = ACTIONS(292),
    [anon_sym_long] = ACTIONS(292),
    [anon_sym_ulong] = ACTIONS(292),
    [anon_sym_char] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [358] = {
    [sym_parameter_list] = STATE(461),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [359] = {
    [anon_sym_RBRACE] = ACTIONS(741),
    [anon_sym_class] = ACTIONS(743),
    [anon_sym_unsafe] = ACTIONS(743),
    [anon_sym_abstract] = ACTIONS(743),
    [anon_sym_sealed] = ACTIONS(743),
    [anon_sym_static] = ACTIONS(743),
    [anon_sym_new] = ACTIONS(743),
    [anon_sym_public] = ACTIONS(743),
    [anon_sym_protected] = ACTIONS(743),
    [anon_sym_internal] = ACTIONS(743),
    [anon_sym_private] = ACTIONS(743),
    [anon_sym_interface] = ACTIONS(743),
    [anon_sym_struct] = ACTIONS(743),
    [anon_sym_enum] = ACTIONS(743),
    [anon_sym_sbyte] = ACTIONS(743),
    [anon_sym_byte] = ACTIONS(743),
    [anon_sym_short] = ACTIONS(743),
    [anon_sym_ushort] = ACTIONS(743),
    [anon_sym_int] = ACTIONS(743),
    [anon_sym_uint] = ACTIONS(743),
    [anon_sym_long] = ACTIONS(743),
    [anon_sym_ulong] = ACTIONS(743),
    [anon_sym_char] = ACTIONS(743),
    [anon_sym_delegate] = ACTIONS(743),
    [anon_sym_LBRACK] = ACTIONS(741),
    [sym_const_keyword] = ACTIONS(743),
    [anon_sym_readonly] = ACTIONS(743),
    [anon_sym_volatile] = ACTIONS(743),
    [anon_sym_bool] = ACTIONS(743),
    [anon_sym_decimal] = ACTIONS(743),
    [anon_sym_double] = ACTIONS(743),
    [anon_sym_float] = ACTIONS(743),
    [anon_sym_object] = ACTIONS(743),
    [anon_sym_string] = ACTIONS(743),
    [sym_identifier_name] = ACTIONS(745),
    [sym_comment] = ACTIONS(36),
  },
  [360] = {
    [sym_type_parameter_list] = STATE(462),
    [anon_sym_LBRACE] = ACTIONS(787),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [361] = {
    [sym_type_parameter_list] = STATE(463),
    [anon_sym_LBRACE] = ACTIONS(791),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [362] = {
    [sym_type_parameter_list] = STATE(464),
    [anon_sym_LBRACE] = ACTIONS(795),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [363] = {
    [anon_sym_LBRACE] = ACTIONS(797),
    [anon_sym_COLON] = ACTIONS(799),
    [sym_comment] = ACTIONS(36),
  },
  [364] = {
    [sym_identifier_name] = ACTIONS(801),
    [sym_comment] = ACTIONS(36),
  },
  [365] = {
    [anon_sym_SEMI] = ACTIONS(803),
    [sym_comment] = ACTIONS(36),
  },
  [366] = {
    [sym_identifier_name] = ACTIONS(805),
    [sym_comment] = ACTIONS(36),
  },
  [367] = {
    [sym_identifier_name] = ACTIONS(807),
    [sym_comment] = ACTIONS(36),
  },
  [368] = {
    [sym_identifier_name] = ACTIONS(809),
    [sym_comment] = ACTIONS(36),
  },
  [369] = {
    [sym_identifier_name] = ACTIONS(811),
    [sym_comment] = ACTIONS(36),
  },
  [370] = {
    [sym_return_type] = STATE(473),
    [sym__type] = STATE(53),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [371] = {
    [sym_variable_declaration] = STATE(474),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [372] = {
    [ts_builtin_sym_end] = ACTIONS(813),
    [anon_sym_using] = ACTIONS(813),
    [anon_sym_namespace] = ACTIONS(813),
    [anon_sym_RBRACE] = ACTIONS(813),
    [anon_sym_class] = ACTIONS(813),
    [anon_sym_unsafe] = ACTIONS(813),
    [anon_sym_abstract] = ACTIONS(813),
    [anon_sym_sealed] = ACTIONS(813),
    [anon_sym_static] = ACTIONS(813),
    [anon_sym_new] = ACTIONS(813),
    [anon_sym_public] = ACTIONS(813),
    [anon_sym_protected] = ACTIONS(813),
    [anon_sym_internal] = ACTIONS(813),
    [anon_sym_private] = ACTIONS(813),
    [anon_sym_interface] = ACTIONS(813),
    [anon_sym_struct] = ACTIONS(813),
    [anon_sym_enum] = ACTIONS(813),
    [anon_sym_delegate] = ACTIONS(813),
    [anon_sym_LBRACK] = ACTIONS(813),
    [sym_comment] = ACTIONS(36),
  },
  [373] = {
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym_identifier_name] = ACTIONS(304),
    [sym_comment] = ACTIONS(36),
  },
  [374] = {
    [anon_sym_SEMI] = ACTIONS(815),
    [anon_sym_RBRACE] = ACTIONS(815),
    [anon_sym_COMMA] = ACTIONS(815),
    [anon_sym_RPAREN] = ACTIONS(815),
    [sym_params_keyword] = ACTIONS(815),
    [anon_sym_LBRACK] = ACTIONS(815),
    [sym_comment] = ACTIONS(36),
  },
  [375] = {
    [sym__unicode_escape_sequence] = STATE(475),
    [sym__simple_escape_sequence] = STATE(475),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(817),
    [sym__hexadecimal_escape_sequence] = ACTIONS(817),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(819),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(819),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(821),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(821),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(821),
    [anon_sym_BSLASH0] = ACTIONS(821),
    [anon_sym_BSLASHa] = ACTIONS(821),
    [anon_sym_BSLASHb] = ACTIONS(821),
    [anon_sym_BSLASHf] = ACTIONS(821),
    [anon_sym_BSLASHn] = ACTIONS(821),
    [anon_sym_BSLASHr] = ACTIONS(821),
    [anon_sym_BSLASHt] = ACTIONS(821),
    [anon_sym_BSLASHv] = ACTIONS(821),
    [sym_comment] = ACTIONS(823),
  },
  [376] = {
    [anon_sym_SEMI] = ACTIONS(825),
    [anon_sym_RBRACE] = ACTIONS(825),
    [anon_sym_COMMA] = ACTIONS(825),
    [anon_sym_RPAREN] = ACTIONS(825),
    [sym_params_keyword] = ACTIONS(825),
    [anon_sym_LBRACK] = ACTIONS(825),
    [sym__integer_type_suffix] = ACTIONS(827),
    [anon_sym_DOT] = ACTIONS(829),
    [sym__real_type_suffix] = ACTIONS(831),
    [sym__exponent_part] = ACTIONS(833),
    [sym_comment] = ACTIONS(36),
  },
  [377] = {
    [anon_sym_SEMI] = ACTIONS(825),
    [anon_sym_RBRACE] = ACTIONS(825),
    [anon_sym_COMMA] = ACTIONS(825),
    [anon_sym_RPAREN] = ACTIONS(825),
    [sym_params_keyword] = ACTIONS(825),
    [anon_sym_LBRACK] = ACTIONS(825),
    [sym__integer_type_suffix] = ACTIONS(827),
    [sym_comment] = ACTIONS(36),
  },
  [378] = {
    [anon_sym_SEMI] = ACTIONS(835),
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_COMMA] = ACTIONS(835),
    [anon_sym_RPAREN] = ACTIONS(835),
    [sym_params_keyword] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(835),
    [sym_comment] = ACTIONS(36),
  },
  [379] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(837),
    [sym_comment] = ACTIONS(36),
  },
  [380] = {
    [sym__unicode_escape_sequence] = STATE(483),
    [sym__simple_escape_sequence] = STATE(483),
    [sym__regular_string_literal_character] = STATE(487),
    [aux_sym__regular_string_literal_repeat1] = STATE(488),
    [sym__hexadecimal_escape_sequence] = ACTIONS(839),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(841),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(843),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(843),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(843),
    [anon_sym_BSLASH0] = ACTIONS(843),
    [anon_sym_BSLASHa] = ACTIONS(843),
    [anon_sym_BSLASHb] = ACTIONS(843),
    [anon_sym_BSLASHf] = ACTIONS(843),
    [anon_sym_BSLASHn] = ACTIONS(843),
    [anon_sym_BSLASHr] = ACTIONS(843),
    [anon_sym_BSLASHt] = ACTIONS(843),
    [anon_sym_BSLASHv] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(839),
    [sym_comment] = ACTIONS(823),
  },
  [381] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(847),
    [sym_comment] = ACTIONS(823),
  },
  [382] = {
    [anon_sym_SEMI] = ACTIONS(849),
    [anon_sym_RBRACE] = ACTIONS(849),
    [anon_sym_COMMA] = ACTIONS(849),
    [anon_sym_RPAREN] = ACTIONS(849),
    [sym_params_keyword] = ACTIONS(849),
    [anon_sym_LBRACK] = ACTIONS(849),
    [sym_comment] = ACTIONS(36),
  },
  [383] = {
    [anon_sym_SEMI] = ACTIONS(851),
    [anon_sym_RBRACE] = ACTIONS(851),
    [anon_sym_COMMA] = ACTIONS(851),
    [anon_sym_RPAREN] = ACTIONS(851),
    [sym_params_keyword] = ACTIONS(851),
    [anon_sym_LBRACK] = ACTIONS(851),
    [sym_comment] = ACTIONS(36),
  },
  [384] = {
    [anon_sym_SEMI] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_RPAREN] = ACTIONS(853),
    [sym_params_keyword] = ACTIONS(853),
    [anon_sym_LBRACK] = ACTIONS(853),
    [sym_comment] = ACTIONS(36),
  },
  [385] = {
    [ts_builtin_sym_end] = ACTIONS(855),
    [anon_sym_using] = ACTIONS(855),
    [anon_sym_namespace] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_class] = ACTIONS(855),
    [anon_sym_unsafe] = ACTIONS(855),
    [anon_sym_abstract] = ACTIONS(855),
    [anon_sym_sealed] = ACTIONS(855),
    [anon_sym_static] = ACTIONS(855),
    [anon_sym_new] = ACTIONS(855),
    [anon_sym_public] = ACTIONS(855),
    [anon_sym_protected] = ACTIONS(855),
    [anon_sym_internal] = ACTIONS(855),
    [anon_sym_private] = ACTIONS(855),
    [anon_sym_interface] = ACTIONS(855),
    [anon_sym_struct] = ACTIONS(855),
    [anon_sym_enum] = ACTIONS(855),
    [anon_sym_delegate] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [sym_comment] = ACTIONS(36),
  },
  [386] = {
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_COMMA] = ACTIONS(857),
    [sym_comment] = ACTIONS(36),
  },
  [387] = {
    [ts_builtin_sym_end] = ACTIONS(855),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_using] = ACTIONS(855),
    [anon_sym_namespace] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_class] = ACTIONS(855),
    [anon_sym_unsafe] = ACTIONS(855),
    [anon_sym_abstract] = ACTIONS(855),
    [anon_sym_sealed] = ACTIONS(855),
    [anon_sym_static] = ACTIONS(855),
    [anon_sym_new] = ACTIONS(855),
    [anon_sym_public] = ACTIONS(855),
    [anon_sym_protected] = ACTIONS(855),
    [anon_sym_internal] = ACTIONS(855),
    [anon_sym_private] = ACTIONS(855),
    [anon_sym_interface] = ACTIONS(855),
    [anon_sym_struct] = ACTIONS(855),
    [anon_sym_enum] = ACTIONS(855),
    [anon_sym_delegate] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [sym_comment] = ACTIONS(36),
  },
  [388] = {
    [sym_enum_member_declaration] = STATE(491),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [389] = {
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_COMMA] = ACTIONS(861),
    [sym_comment] = ACTIONS(36),
  },
  [390] = {
    [aux_sym_enum_declaration_repeat1] = STATE(493),
    [anon_sym_RBRACE] = ACTIONS(863),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [391] = {
    [sym_identifier_name] = ACTIONS(865),
    [sym_comment] = ACTIONS(36),
  },
  [392] = {
    [sym_array_rank_specifier] = STATE(496),
    [anon_sym_LBRACK] = ACTIONS(867),
    [sym_comment] = ACTIONS(36),
  },
  [393] = {
    [anon_sym_RBRACK] = ACTIONS(869),
    [sym_comment] = ACTIONS(36),
  },
  [394] = {
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_LBRACE] = ACTIONS(871),
    [sym_comment] = ACTIONS(36),
  },
  [395] = {
    [sym_parameter] = STATE(499),
    [sym_parameter_modifier] = STATE(292),
    [sym__attributes] = STATE(500),
    [sym__attribute_section] = STATE(501),
    [sym__type] = STATE(296),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(502),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_ref] = ACTIONS(507),
    [anon_sym_out] = ACTIONS(507),
    [anon_sym_this] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(873),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [396] = {
    [anon_sym_RPAREN] = ACTIONS(875),
    [sym_comment] = ACTIONS(36),
  },
  [397] = {
    [sym_params_keyword] = ACTIONS(877),
    [sym_comment] = ACTIONS(36),
  },
  [398] = {
    [sym_parameter_array] = STATE(504),
    [sym__attributes] = STATE(397),
    [sym__attribute_section] = STATE(295),
    [aux_sym__attributes_repeat1] = STATE(297),
    [anon_sym_COMMA] = ACTIONS(879),
    [anon_sym_RPAREN] = ACTIONS(875),
    [sym_params_keyword] = ACTIONS(707),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(36),
  },
  [399] = {
    [sym_identifier_name] = ACTIONS(881),
    [sym_comment] = ACTIONS(36),
  },
  [400] = {
    [sym_array_type] = STATE(506),
    [sym__type] = STATE(392),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [401] = {
    [sym__type] = STATE(507),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [402] = {
    [sym_equals_value_clause] = STATE(508),
    [anon_sym_COMMA] = ACTIONS(883),
    [anon_sym_RPAREN] = ACTIONS(883),
    [sym_params_keyword] = ACTIONS(883),
    [anon_sym_LBRACK] = ACTIONS(883),
    [anon_sym_EQ] = ACTIONS(493),
    [sym_comment] = ACTIONS(36),
  },
  [403] = {
    [anon_sym_sbyte] = ACTIONS(212),
    [anon_sym_byte] = ACTIONS(212),
    [anon_sym_short] = ACTIONS(212),
    [anon_sym_ushort] = ACTIONS(212),
    [anon_sym_int] = ACTIONS(212),
    [anon_sym_uint] = ACTIONS(212),
    [anon_sym_long] = ACTIONS(212),
    [anon_sym_ulong] = ACTIONS(212),
    [anon_sym_char] = ACTIONS(212),
    [anon_sym_ref] = ACTIONS(212),
    [anon_sym_out] = ACTIONS(212),
    [anon_sym_this] = ACTIONS(212),
    [sym_params_keyword] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_bool] = ACTIONS(212),
    [anon_sym_decimal] = ACTIONS(212),
    [anon_sym_double] = ACTIONS(212),
    [anon_sym_float] = ACTIONS(212),
    [anon_sym_object] = ACTIONS(212),
    [anon_sym_string] = ACTIONS(212),
    [sym_identifier_name] = ACTIONS(216),
    [sym_comment] = ACTIONS(36),
  },
  [404] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(885),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [405] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(887),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [406] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(889),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [407] = {
    [anon_sym_RBRACE] = ACTIONS(863),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [408] = {
    [sym_enum_member_declaration] = STATE(512),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [409] = {
    [ts_builtin_sym_end] = ACTIONS(891),
    [anon_sym_using] = ACTIONS(891),
    [anon_sym_namespace] = ACTIONS(891),
    [anon_sym_RBRACE] = ACTIONS(891),
    [anon_sym_class] = ACTIONS(891),
    [anon_sym_unsafe] = ACTIONS(891),
    [anon_sym_abstract] = ACTIONS(891),
    [anon_sym_sealed] = ACTIONS(891),
    [anon_sym_static] = ACTIONS(891),
    [anon_sym_new] = ACTIONS(891),
    [anon_sym_public] = ACTIONS(891),
    [anon_sym_protected] = ACTIONS(891),
    [anon_sym_internal] = ACTIONS(891),
    [anon_sym_private] = ACTIONS(891),
    [anon_sym_interface] = ACTIONS(891),
    [anon_sym_struct] = ACTIONS(891),
    [anon_sym_enum] = ACTIONS(891),
    [anon_sym_delegate] = ACTIONS(891),
    [anon_sym_LBRACK] = ACTIONS(891),
    [sym_comment] = ACTIONS(36),
  },
  [410] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(513),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(885),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [411] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(514),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(887),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [412] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(515),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(889),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [413] = {
    [anon_sym_LBRACE] = ACTIONS(893),
    [sym_comment] = ACTIONS(36),
  },
  [414] = {
    [anon_sym_SEMI] = ACTIONS(895),
    [sym_comment] = ACTIONS(36),
  },
  [415] = {
    [anon_sym_RBRACE] = ACTIONS(344),
    [anon_sym_class] = ACTIONS(897),
    [anon_sym_unsafe] = ACTIONS(897),
    [anon_sym_abstract] = ACTIONS(897),
    [anon_sym_sealed] = ACTIONS(897),
    [anon_sym_static] = ACTIONS(897),
    [anon_sym_new] = ACTIONS(897),
    [anon_sym_public] = ACTIONS(897),
    [anon_sym_protected] = ACTIONS(897),
    [anon_sym_internal] = ACTIONS(897),
    [anon_sym_private] = ACTIONS(897),
    [anon_sym_interface] = ACTIONS(897),
    [anon_sym_struct] = ACTIONS(897),
    [anon_sym_enum] = ACTIONS(897),
    [anon_sym_sbyte] = ACTIONS(897),
    [anon_sym_byte] = ACTIONS(897),
    [anon_sym_short] = ACTIONS(897),
    [anon_sym_ushort] = ACTIONS(897),
    [anon_sym_int] = ACTIONS(897),
    [anon_sym_uint] = ACTIONS(897),
    [anon_sym_long] = ACTIONS(897),
    [anon_sym_ulong] = ACTIONS(897),
    [anon_sym_char] = ACTIONS(897),
    [anon_sym_delegate] = ACTIONS(897),
    [sym_void_keyword] = ACTIONS(897),
    [anon_sym_LBRACK] = ACTIONS(344),
    [sym_const_keyword] = ACTIONS(897),
    [anon_sym_readonly] = ACTIONS(897),
    [anon_sym_volatile] = ACTIONS(897),
    [anon_sym_bool] = ACTIONS(897),
    [anon_sym_decimal] = ACTIONS(897),
    [anon_sym_double] = ACTIONS(897),
    [anon_sym_float] = ACTIONS(897),
    [anon_sym_object] = ACTIONS(897),
    [anon_sym_string] = ACTIONS(897),
    [sym_identifier_name] = ACTIONS(899),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(897),
  },
  [416] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(901),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [417] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(519),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(901),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [418] = {
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(903),
    [anon_sym_unsafe] = ACTIONS(903),
    [anon_sym_abstract] = ACTIONS(903),
    [anon_sym_sealed] = ACTIONS(903),
    [anon_sym_static] = ACTIONS(903),
    [anon_sym_new] = ACTIONS(903),
    [anon_sym_public] = ACTIONS(903),
    [anon_sym_protected] = ACTIONS(903),
    [anon_sym_internal] = ACTIONS(903),
    [anon_sym_private] = ACTIONS(903),
    [anon_sym_interface] = ACTIONS(903),
    [anon_sym_struct] = ACTIONS(903),
    [anon_sym_enum] = ACTIONS(903),
    [anon_sym_sbyte] = ACTIONS(903),
    [anon_sym_byte] = ACTIONS(903),
    [anon_sym_short] = ACTIONS(903),
    [anon_sym_ushort] = ACTIONS(903),
    [anon_sym_int] = ACTIONS(903),
    [anon_sym_uint] = ACTIONS(903),
    [anon_sym_long] = ACTIONS(903),
    [anon_sym_ulong] = ACTIONS(903),
    [anon_sym_char] = ACTIONS(903),
    [anon_sym_delegate] = ACTIONS(903),
    [sym_void_keyword] = ACTIONS(903),
    [anon_sym_LBRACK] = ACTIONS(433),
    [sym_const_keyword] = ACTIONS(903),
    [anon_sym_readonly] = ACTIONS(903),
    [anon_sym_volatile] = ACTIONS(903),
    [anon_sym_bool] = ACTIONS(903),
    [anon_sym_decimal] = ACTIONS(903),
    [anon_sym_double] = ACTIONS(903),
    [anon_sym_float] = ACTIONS(903),
    [anon_sym_object] = ACTIONS(903),
    [anon_sym_string] = ACTIONS(903),
    [sym_identifier_name] = ACTIONS(905),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(903),
  },
  [419] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(907),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [420] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(521),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(907),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [421] = {
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_class] = ACTIONS(909),
    [anon_sym_unsafe] = ACTIONS(909),
    [anon_sym_abstract] = ACTIONS(909),
    [anon_sym_sealed] = ACTIONS(909),
    [anon_sym_static] = ACTIONS(909),
    [anon_sym_new] = ACTIONS(909),
    [anon_sym_public] = ACTIONS(909),
    [anon_sym_protected] = ACTIONS(909),
    [anon_sym_internal] = ACTIONS(909),
    [anon_sym_private] = ACTIONS(909),
    [anon_sym_interface] = ACTIONS(909),
    [anon_sym_struct] = ACTIONS(909),
    [anon_sym_enum] = ACTIONS(909),
    [anon_sym_sbyte] = ACTIONS(909),
    [anon_sym_byte] = ACTIONS(909),
    [anon_sym_short] = ACTIONS(909),
    [anon_sym_ushort] = ACTIONS(909),
    [anon_sym_int] = ACTIONS(909),
    [anon_sym_uint] = ACTIONS(909),
    [anon_sym_long] = ACTIONS(909),
    [anon_sym_ulong] = ACTIONS(909),
    [anon_sym_char] = ACTIONS(909),
    [anon_sym_delegate] = ACTIONS(909),
    [sym_void_keyword] = ACTIONS(909),
    [anon_sym_LBRACK] = ACTIONS(449),
    [sym_const_keyword] = ACTIONS(909),
    [anon_sym_readonly] = ACTIONS(909),
    [anon_sym_volatile] = ACTIONS(909),
    [anon_sym_bool] = ACTIONS(909),
    [anon_sym_decimal] = ACTIONS(909),
    [anon_sym_double] = ACTIONS(909),
    [anon_sym_float] = ACTIONS(909),
    [anon_sym_object] = ACTIONS(909),
    [anon_sym_string] = ACTIONS(909),
    [sym_identifier_name] = ACTIONS(911),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(909),
  },
  [422] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(913),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [423] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(523),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(913),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [424] = {
    [aux_sym_enum_declaration_repeat1] = STATE(525),
    [anon_sym_RBRACE] = ACTIONS(915),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [425] = {
    [anon_sym_LBRACE] = ACTIONS(917),
    [sym_comment] = ACTIONS(36),
  },
  [426] = {
    [anon_sym_SEMI] = ACTIONS(919),
    [sym_comment] = ACTIONS(36),
  },
  [427] = {
    [sym_statement_block] = STATE(528),
    [anon_sym_LBRACE] = ACTIONS(753),
    [sym_comment] = ACTIONS(36),
  },
  [428] = {
    [sym_parameter_list] = STATE(529),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [429] = {
    [anon_sym_LBRACE] = ACTIONS(921),
    [sym_comment] = ACTIONS(36),
  },
  [430] = {
    [anon_sym_LBRACE] = ACTIONS(923),
    [sym_comment] = ACTIONS(36),
  },
  [431] = {
    [anon_sym_LBRACE] = ACTIONS(925),
    [sym_comment] = ACTIONS(36),
  },
  [432] = {
    [sym_enum_member_declaration] = STATE(533),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [433] = {
    [sym__integral_type] = STATE(534),
    [anon_sym_sbyte] = ACTIONS(292),
    [anon_sym_byte] = ACTIONS(292),
    [anon_sym_short] = ACTIONS(292),
    [anon_sym_ushort] = ACTIONS(292),
    [anon_sym_int] = ACTIONS(292),
    [anon_sym_uint] = ACTIONS(292),
    [anon_sym_long] = ACTIONS(292),
    [anon_sym_ulong] = ACTIONS(292),
    [anon_sym_char] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [434] = {
    [sym_parameter_list] = STATE(535),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [435] = {
    [sym__statement] = STATE(538),
    [sym_empty_statement] = STATE(539),
    [aux_sym_statement_block_repeat1] = STATE(540),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_RBRACE] = ACTIONS(929),
    [sym_comment] = ACTIONS(36),
  },
  [436] = {
    [anon_sym_RBRACE] = ACTIONS(931),
    [anon_sym_class] = ACTIONS(933),
    [anon_sym_unsafe] = ACTIONS(933),
    [anon_sym_abstract] = ACTIONS(933),
    [anon_sym_sealed] = ACTIONS(933),
    [anon_sym_static] = ACTIONS(933),
    [anon_sym_new] = ACTIONS(933),
    [anon_sym_public] = ACTIONS(933),
    [anon_sym_protected] = ACTIONS(933),
    [anon_sym_internal] = ACTIONS(933),
    [anon_sym_private] = ACTIONS(933),
    [anon_sym_interface] = ACTIONS(933),
    [anon_sym_struct] = ACTIONS(933),
    [anon_sym_enum] = ACTIONS(933),
    [anon_sym_sbyte] = ACTIONS(933),
    [anon_sym_byte] = ACTIONS(933),
    [anon_sym_short] = ACTIONS(933),
    [anon_sym_ushort] = ACTIONS(933),
    [anon_sym_int] = ACTIONS(933),
    [anon_sym_uint] = ACTIONS(933),
    [anon_sym_long] = ACTIONS(933),
    [anon_sym_ulong] = ACTIONS(933),
    [anon_sym_char] = ACTIONS(933),
    [anon_sym_delegate] = ACTIONS(933),
    [sym_void_keyword] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(931),
    [sym_const_keyword] = ACTIONS(933),
    [anon_sym_readonly] = ACTIONS(933),
    [anon_sym_volatile] = ACTIONS(933),
    [anon_sym_bool] = ACTIONS(933),
    [anon_sym_decimal] = ACTIONS(933),
    [anon_sym_double] = ACTIONS(933),
    [anon_sym_float] = ACTIONS(933),
    [anon_sym_object] = ACTIONS(933),
    [anon_sym_string] = ACTIONS(933),
    [sym_identifier_name] = ACTIONS(935),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(933),
  },
  [437] = {
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_class] = ACTIONS(939),
    [anon_sym_unsafe] = ACTIONS(939),
    [anon_sym_abstract] = ACTIONS(939),
    [anon_sym_sealed] = ACTIONS(939),
    [anon_sym_static] = ACTIONS(939),
    [anon_sym_new] = ACTIONS(939),
    [anon_sym_public] = ACTIONS(939),
    [anon_sym_protected] = ACTIONS(939),
    [anon_sym_internal] = ACTIONS(939),
    [anon_sym_private] = ACTIONS(939),
    [anon_sym_interface] = ACTIONS(939),
    [anon_sym_struct] = ACTIONS(939),
    [anon_sym_enum] = ACTIONS(939),
    [anon_sym_sbyte] = ACTIONS(939),
    [anon_sym_byte] = ACTIONS(939),
    [anon_sym_short] = ACTIONS(939),
    [anon_sym_ushort] = ACTIONS(939),
    [anon_sym_int] = ACTIONS(939),
    [anon_sym_uint] = ACTIONS(939),
    [anon_sym_long] = ACTIONS(939),
    [anon_sym_ulong] = ACTIONS(939),
    [anon_sym_char] = ACTIONS(939),
    [anon_sym_delegate] = ACTIONS(939),
    [sym_void_keyword] = ACTIONS(939),
    [anon_sym_LBRACK] = ACTIONS(937),
    [sym_const_keyword] = ACTIONS(939),
    [anon_sym_readonly] = ACTIONS(939),
    [anon_sym_volatile] = ACTIONS(939),
    [anon_sym_bool] = ACTIONS(939),
    [anon_sym_decimal] = ACTIONS(939),
    [anon_sym_double] = ACTIONS(939),
    [anon_sym_float] = ACTIONS(939),
    [anon_sym_object] = ACTIONS(939),
    [anon_sym_string] = ACTIONS(939),
    [sym_identifier_name] = ACTIONS(941),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(939),
  },
  [438] = {
    [sym_type_parameter_list] = STATE(541),
    [anon_sym_LBRACE] = ACTIONS(921),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [439] = {
    [sym_type_parameter_list] = STATE(542),
    [anon_sym_LBRACE] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [440] = {
    [sym_type_parameter_list] = STATE(543),
    [anon_sym_LBRACE] = ACTIONS(925),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [441] = {
    [anon_sym_LBRACE] = ACTIONS(917),
    [anon_sym_COLON] = ACTIONS(943),
    [sym_comment] = ACTIONS(36),
  },
  [442] = {
    [sym_identifier_name] = ACTIONS(945),
    [sym_comment] = ACTIONS(36),
  },
  [443] = {
    [anon_sym_SEMI] = ACTIONS(947),
    [sym_comment] = ACTIONS(36),
  },
  [444] = {
    [anon_sym_SEMI] = ACTIONS(949),
    [anon_sym_COMMA] = ACTIONS(949),
    [sym_comment] = ACTIONS(36),
  },
  [445] = {
    [sym_variable_declarator] = STATE(547),
    [sym_identifier_name] = ACTIONS(445),
    [sym_comment] = ACTIONS(36),
  },
  [446] = {
    [sym_parameter_list] = STATE(529),
    [sym_type_parameter_list] = STATE(548),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [447] = {
    [anon_sym_COMMA] = ACTIONS(951),
    [anon_sym_GT] = ACTIONS(951),
    [sym_comment] = ACTIONS(36),
  },
  [448] = {
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_unsafe] = ACTIONS(939),
    [anon_sym_static] = ACTIONS(939),
    [anon_sym_new] = ACTIONS(939),
    [anon_sym_public] = ACTIONS(939),
    [anon_sym_protected] = ACTIONS(939),
    [anon_sym_internal] = ACTIONS(939),
    [anon_sym_private] = ACTIONS(939),
    [anon_sym_sbyte] = ACTIONS(939),
    [anon_sym_byte] = ACTIONS(939),
    [anon_sym_short] = ACTIONS(939),
    [anon_sym_ushort] = ACTIONS(939),
    [anon_sym_int] = ACTIONS(939),
    [anon_sym_uint] = ACTIONS(939),
    [anon_sym_long] = ACTIONS(939),
    [anon_sym_ulong] = ACTIONS(939),
    [anon_sym_char] = ACTIONS(939),
    [anon_sym_LBRACK] = ACTIONS(937),
    [sym_const_keyword] = ACTIONS(939),
    [anon_sym_readonly] = ACTIONS(939),
    [anon_sym_volatile] = ACTIONS(939),
    [anon_sym_bool] = ACTIONS(939),
    [anon_sym_decimal] = ACTIONS(939),
    [anon_sym_double] = ACTIONS(939),
    [anon_sym_float] = ACTIONS(939),
    [anon_sym_object] = ACTIONS(939),
    [anon_sym_string] = ACTIONS(939),
    [sym_identifier_name] = ACTIONS(941),
    [sym_comment] = ACTIONS(36),
  },
  [449] = {
    [anon_sym_SEMI] = ACTIONS(953),
    [sym_comment] = ACTIONS(36),
  },
  [450] = {
    [anon_sym_RBRACE] = ACTIONS(344),
    [anon_sym_class] = ACTIONS(897),
    [anon_sym_unsafe] = ACTIONS(897),
    [anon_sym_abstract] = ACTIONS(897),
    [anon_sym_sealed] = ACTIONS(897),
    [anon_sym_static] = ACTIONS(897),
    [anon_sym_new] = ACTIONS(897),
    [anon_sym_public] = ACTIONS(897),
    [anon_sym_protected] = ACTIONS(897),
    [anon_sym_internal] = ACTIONS(897),
    [anon_sym_private] = ACTIONS(897),
    [anon_sym_interface] = ACTIONS(897),
    [anon_sym_struct] = ACTIONS(897),
    [anon_sym_enum] = ACTIONS(897),
    [anon_sym_sbyte] = ACTIONS(897),
    [anon_sym_byte] = ACTIONS(897),
    [anon_sym_short] = ACTIONS(897),
    [anon_sym_ushort] = ACTIONS(897),
    [anon_sym_int] = ACTIONS(897),
    [anon_sym_uint] = ACTIONS(897),
    [anon_sym_long] = ACTIONS(897),
    [anon_sym_ulong] = ACTIONS(897),
    [anon_sym_char] = ACTIONS(897),
    [anon_sym_delegate] = ACTIONS(897),
    [anon_sym_LBRACK] = ACTIONS(344),
    [sym_const_keyword] = ACTIONS(897),
    [anon_sym_readonly] = ACTIONS(897),
    [anon_sym_volatile] = ACTIONS(897),
    [anon_sym_bool] = ACTIONS(897),
    [anon_sym_decimal] = ACTIONS(897),
    [anon_sym_double] = ACTIONS(897),
    [anon_sym_float] = ACTIONS(897),
    [anon_sym_object] = ACTIONS(897),
    [anon_sym_string] = ACTIONS(897),
    [sym_identifier_name] = ACTIONS(899),
    [sym_comment] = ACTIONS(36),
  },
  [451] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(955),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [452] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(551),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(955),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [453] = {
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(903),
    [anon_sym_unsafe] = ACTIONS(903),
    [anon_sym_abstract] = ACTIONS(903),
    [anon_sym_sealed] = ACTIONS(903),
    [anon_sym_static] = ACTIONS(903),
    [anon_sym_new] = ACTIONS(903),
    [anon_sym_public] = ACTIONS(903),
    [anon_sym_protected] = ACTIONS(903),
    [anon_sym_internal] = ACTIONS(903),
    [anon_sym_private] = ACTIONS(903),
    [anon_sym_interface] = ACTIONS(903),
    [anon_sym_struct] = ACTIONS(903),
    [anon_sym_enum] = ACTIONS(903),
    [anon_sym_sbyte] = ACTIONS(903),
    [anon_sym_byte] = ACTIONS(903),
    [anon_sym_short] = ACTIONS(903),
    [anon_sym_ushort] = ACTIONS(903),
    [anon_sym_int] = ACTIONS(903),
    [anon_sym_uint] = ACTIONS(903),
    [anon_sym_long] = ACTIONS(903),
    [anon_sym_ulong] = ACTIONS(903),
    [anon_sym_char] = ACTIONS(903),
    [anon_sym_delegate] = ACTIONS(903),
    [anon_sym_LBRACK] = ACTIONS(433),
    [sym_const_keyword] = ACTIONS(903),
    [anon_sym_readonly] = ACTIONS(903),
    [anon_sym_volatile] = ACTIONS(903),
    [anon_sym_bool] = ACTIONS(903),
    [anon_sym_decimal] = ACTIONS(903),
    [anon_sym_double] = ACTIONS(903),
    [anon_sym_float] = ACTIONS(903),
    [anon_sym_object] = ACTIONS(903),
    [anon_sym_string] = ACTIONS(903),
    [sym_identifier_name] = ACTIONS(905),
    [sym_comment] = ACTIONS(36),
  },
  [454] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(957),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [455] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(553),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(957),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [456] = {
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_class] = ACTIONS(909),
    [anon_sym_unsafe] = ACTIONS(909),
    [anon_sym_abstract] = ACTIONS(909),
    [anon_sym_sealed] = ACTIONS(909),
    [anon_sym_static] = ACTIONS(909),
    [anon_sym_new] = ACTIONS(909),
    [anon_sym_public] = ACTIONS(909),
    [anon_sym_protected] = ACTIONS(909),
    [anon_sym_internal] = ACTIONS(909),
    [anon_sym_private] = ACTIONS(909),
    [anon_sym_interface] = ACTIONS(909),
    [anon_sym_struct] = ACTIONS(909),
    [anon_sym_enum] = ACTIONS(909),
    [anon_sym_sbyte] = ACTIONS(909),
    [anon_sym_byte] = ACTIONS(909),
    [anon_sym_short] = ACTIONS(909),
    [anon_sym_ushort] = ACTIONS(909),
    [anon_sym_int] = ACTIONS(909),
    [anon_sym_uint] = ACTIONS(909),
    [anon_sym_long] = ACTIONS(909),
    [anon_sym_ulong] = ACTIONS(909),
    [anon_sym_char] = ACTIONS(909),
    [anon_sym_delegate] = ACTIONS(909),
    [anon_sym_LBRACK] = ACTIONS(449),
    [sym_const_keyword] = ACTIONS(909),
    [anon_sym_readonly] = ACTIONS(909),
    [anon_sym_volatile] = ACTIONS(909),
    [anon_sym_bool] = ACTIONS(909),
    [anon_sym_decimal] = ACTIONS(909),
    [anon_sym_double] = ACTIONS(909),
    [anon_sym_float] = ACTIONS(909),
    [anon_sym_object] = ACTIONS(909),
    [anon_sym_string] = ACTIONS(909),
    [sym_identifier_name] = ACTIONS(911),
    [sym_comment] = ACTIONS(36),
  },
  [457] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(959),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [458] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(555),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(959),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [459] = {
    [aux_sym_enum_declaration_repeat1] = STATE(557),
    [anon_sym_RBRACE] = ACTIONS(961),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [460] = {
    [anon_sym_LBRACE] = ACTIONS(963),
    [sym_comment] = ACTIONS(36),
  },
  [461] = {
    [anon_sym_SEMI] = ACTIONS(965),
    [sym_comment] = ACTIONS(36),
  },
  [462] = {
    [anon_sym_LBRACE] = ACTIONS(967),
    [sym_comment] = ACTIONS(36),
  },
  [463] = {
    [anon_sym_LBRACE] = ACTIONS(969),
    [sym_comment] = ACTIONS(36),
  },
  [464] = {
    [anon_sym_LBRACE] = ACTIONS(971),
    [sym_comment] = ACTIONS(36),
  },
  [465] = {
    [sym_enum_member_declaration] = STATE(563),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [466] = {
    [sym__integral_type] = STATE(564),
    [anon_sym_sbyte] = ACTIONS(292),
    [anon_sym_byte] = ACTIONS(292),
    [anon_sym_short] = ACTIONS(292),
    [anon_sym_ushort] = ACTIONS(292),
    [anon_sym_int] = ACTIONS(292),
    [anon_sym_uint] = ACTIONS(292),
    [anon_sym_long] = ACTIONS(292),
    [anon_sym_ulong] = ACTIONS(292),
    [anon_sym_char] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [467] = {
    [sym_parameter_list] = STATE(565),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [468] = {
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_class] = ACTIONS(939),
    [anon_sym_unsafe] = ACTIONS(939),
    [anon_sym_abstract] = ACTIONS(939),
    [anon_sym_sealed] = ACTIONS(939),
    [anon_sym_static] = ACTIONS(939),
    [anon_sym_new] = ACTIONS(939),
    [anon_sym_public] = ACTIONS(939),
    [anon_sym_protected] = ACTIONS(939),
    [anon_sym_internal] = ACTIONS(939),
    [anon_sym_private] = ACTIONS(939),
    [anon_sym_interface] = ACTIONS(939),
    [anon_sym_struct] = ACTIONS(939),
    [anon_sym_enum] = ACTIONS(939),
    [anon_sym_sbyte] = ACTIONS(939),
    [anon_sym_byte] = ACTIONS(939),
    [anon_sym_short] = ACTIONS(939),
    [anon_sym_ushort] = ACTIONS(939),
    [anon_sym_int] = ACTIONS(939),
    [anon_sym_uint] = ACTIONS(939),
    [anon_sym_long] = ACTIONS(939),
    [anon_sym_ulong] = ACTIONS(939),
    [anon_sym_char] = ACTIONS(939),
    [anon_sym_delegate] = ACTIONS(939),
    [anon_sym_LBRACK] = ACTIONS(937),
    [sym_const_keyword] = ACTIONS(939),
    [anon_sym_readonly] = ACTIONS(939),
    [anon_sym_volatile] = ACTIONS(939),
    [anon_sym_bool] = ACTIONS(939),
    [anon_sym_decimal] = ACTIONS(939),
    [anon_sym_double] = ACTIONS(939),
    [anon_sym_float] = ACTIONS(939),
    [anon_sym_object] = ACTIONS(939),
    [anon_sym_string] = ACTIONS(939),
    [sym_identifier_name] = ACTIONS(941),
    [sym_comment] = ACTIONS(36),
  },
  [469] = {
    [sym_type_parameter_list] = STATE(566),
    [anon_sym_LBRACE] = ACTIONS(967),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [470] = {
    [sym_type_parameter_list] = STATE(567),
    [anon_sym_LBRACE] = ACTIONS(969),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [471] = {
    [sym_type_parameter_list] = STATE(568),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [472] = {
    [anon_sym_LBRACE] = ACTIONS(963),
    [anon_sym_COLON] = ACTIONS(973),
    [sym_comment] = ACTIONS(36),
  },
  [473] = {
    [sym_identifier_name] = ACTIONS(975),
    [sym_comment] = ACTIONS(36),
  },
  [474] = {
    [anon_sym_SEMI] = ACTIONS(977),
    [sym_comment] = ACTIONS(36),
  },
  [475] = {
    [anon_sym_SQUOTE] = ACTIONS(979),
    [sym_comment] = ACTIONS(36),
  },
  [476] = {
    [anon_sym_SQUOTE] = ACTIONS(981),
    [sym_comment] = ACTIONS(36),
  },
  [477] = {
    [anon_sym_SQUOTE] = ACTIONS(983),
    [sym_comment] = ACTIONS(36),
  },
  [478] = {
    [anon_sym_SEMI] = ACTIONS(985),
    [anon_sym_RBRACE] = ACTIONS(985),
    [anon_sym_COMMA] = ACTIONS(985),
    [anon_sym_RPAREN] = ACTIONS(985),
    [sym_params_keyword] = ACTIONS(985),
    [anon_sym_LBRACK] = ACTIONS(985),
    [sym_comment] = ACTIONS(36),
  },
  [479] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(987),
    [sym_comment] = ACTIONS(36),
  },
  [480] = {
    [anon_sym_SEMI] = ACTIONS(989),
    [anon_sym_RBRACE] = ACTIONS(989),
    [anon_sym_COMMA] = ACTIONS(989),
    [anon_sym_RPAREN] = ACTIONS(989),
    [sym_params_keyword] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(989),
    [sym_comment] = ACTIONS(36),
  },
  [481] = {
    [anon_sym_SEMI] = ACTIONS(989),
    [anon_sym_RBRACE] = ACTIONS(989),
    [anon_sym_COMMA] = ACTIONS(989),
    [anon_sym_RPAREN] = ACTIONS(989),
    [sym_params_keyword] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(989),
    [sym__real_type_suffix] = ACTIONS(991),
    [sym_comment] = ACTIONS(36),
  },
  [482] = {
    [anon_sym_SEMI] = ACTIONS(989),
    [anon_sym_RBRACE] = ACTIONS(989),
    [anon_sym_COMMA] = ACTIONS(989),
    [anon_sym_RPAREN] = ACTIONS(989),
    [sym_params_keyword] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(989),
    [sym__real_type_suffix] = ACTIONS(991),
    [sym__exponent_part] = ACTIONS(993),
    [sym_comment] = ACTIONS(36),
  },
  [483] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(995),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(995),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(995),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(995),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(995),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(995),
    [anon_sym_BSLASH0] = ACTIONS(995),
    [anon_sym_BSLASHa] = ACTIONS(995),
    [anon_sym_BSLASHb] = ACTIONS(995),
    [anon_sym_BSLASHf] = ACTIONS(995),
    [anon_sym_BSLASHn] = ACTIONS(995),
    [anon_sym_BSLASHr] = ACTIONS(995),
    [anon_sym_BSLASHt] = ACTIONS(995),
    [anon_sym_BSLASHv] = ACTIONS(995),
    [anon_sym_DQUOTE] = ACTIONS(995),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(995),
    [sym_comment] = ACTIONS(823),
  },
  [484] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(997),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(997),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(997),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(997),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(997),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(997),
    [anon_sym_BSLASH0] = ACTIONS(997),
    [anon_sym_BSLASHa] = ACTIONS(997),
    [anon_sym_BSLASHb] = ACTIONS(997),
    [anon_sym_BSLASHf] = ACTIONS(997),
    [anon_sym_BSLASHn] = ACTIONS(997),
    [anon_sym_BSLASHr] = ACTIONS(997),
    [anon_sym_BSLASHt] = ACTIONS(997),
    [anon_sym_BSLASHv] = ACTIONS(997),
    [anon_sym_DQUOTE] = ACTIONS(997),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(997),
    [sym_comment] = ACTIONS(823),
  },
  [485] = {
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
    [anon_sym_DQUOTE] = ACTIONS(999),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(999),
    [sym_comment] = ACTIONS(823),
  },
  [486] = {
    [anon_sym_SEMI] = ACTIONS(1001),
    [anon_sym_RBRACE] = ACTIONS(1001),
    [anon_sym_COMMA] = ACTIONS(1001),
    [anon_sym_RPAREN] = ACTIONS(1001),
    [sym_params_keyword] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(1001),
    [sym_comment] = ACTIONS(36),
  },
  [487] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(1003),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1003),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1003),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1003),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1003),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1003),
    [anon_sym_BSLASH0] = ACTIONS(1003),
    [anon_sym_BSLASHa] = ACTIONS(1003),
    [anon_sym_BSLASHb] = ACTIONS(1003),
    [anon_sym_BSLASHf] = ACTIONS(1003),
    [anon_sym_BSLASHn] = ACTIONS(1003),
    [anon_sym_BSLASHr] = ACTIONS(1003),
    [anon_sym_BSLASHt] = ACTIONS(1003),
    [anon_sym_BSLASHv] = ACTIONS(1003),
    [anon_sym_DQUOTE] = ACTIONS(1003),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1003),
    [sym_comment] = ACTIONS(823),
  },
  [488] = {
    [sym__unicode_escape_sequence] = STATE(483),
    [sym__simple_escape_sequence] = STATE(483),
    [sym__regular_string_literal_character] = STATE(577),
    [sym__hexadecimal_escape_sequence] = ACTIONS(839),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(841),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(843),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(843),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(843),
    [anon_sym_BSLASH0] = ACTIONS(843),
    [anon_sym_BSLASHa] = ACTIONS(843),
    [anon_sym_BSLASHb] = ACTIONS(843),
    [anon_sym_BSLASHf] = ACTIONS(843),
    [anon_sym_BSLASHn] = ACTIONS(843),
    [anon_sym_BSLASHr] = ACTIONS(843),
    [anon_sym_BSLASHt] = ACTIONS(843),
    [anon_sym_BSLASHv] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(1005),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(839),
    [sym_comment] = ACTIONS(823),
  },
  [489] = {
    [anon_sym_DQUOTE] = ACTIONS(1007),
    [sym_comment] = ACTIONS(36),
  },
  [490] = {
    [ts_builtin_sym_end] = ACTIONS(1009),
    [anon_sym_using] = ACTIONS(1009),
    [anon_sym_namespace] = ACTIONS(1009),
    [anon_sym_RBRACE] = ACTIONS(1009),
    [anon_sym_class] = ACTIONS(1009),
    [anon_sym_unsafe] = ACTIONS(1009),
    [anon_sym_abstract] = ACTIONS(1009),
    [anon_sym_sealed] = ACTIONS(1009),
    [anon_sym_static] = ACTIONS(1009),
    [anon_sym_new] = ACTIONS(1009),
    [anon_sym_public] = ACTIONS(1009),
    [anon_sym_protected] = ACTIONS(1009),
    [anon_sym_internal] = ACTIONS(1009),
    [anon_sym_private] = ACTIONS(1009),
    [anon_sym_interface] = ACTIONS(1009),
    [anon_sym_struct] = ACTIONS(1009),
    [anon_sym_enum] = ACTIONS(1009),
    [anon_sym_delegate] = ACTIONS(1009),
    [anon_sym_LBRACK] = ACTIONS(1009),
    [sym_comment] = ACTIONS(36),
  },
  [491] = {
    [anon_sym_RBRACE] = ACTIONS(1011),
    [anon_sym_COMMA] = ACTIONS(1011),
    [sym_comment] = ACTIONS(36),
  },
  [492] = {
    [ts_builtin_sym_end] = ACTIONS(1009),
    [anon_sym_SEMI] = ACTIONS(1013),
    [anon_sym_using] = ACTIONS(1009),
    [anon_sym_namespace] = ACTIONS(1009),
    [anon_sym_RBRACE] = ACTIONS(1009),
    [anon_sym_class] = ACTIONS(1009),
    [anon_sym_unsafe] = ACTIONS(1009),
    [anon_sym_abstract] = ACTIONS(1009),
    [anon_sym_sealed] = ACTIONS(1009),
    [anon_sym_static] = ACTIONS(1009),
    [anon_sym_new] = ACTIONS(1009),
    [anon_sym_public] = ACTIONS(1009),
    [anon_sym_protected] = ACTIONS(1009),
    [anon_sym_internal] = ACTIONS(1009),
    [anon_sym_private] = ACTIONS(1009),
    [anon_sym_interface] = ACTIONS(1009),
    [anon_sym_struct] = ACTIONS(1009),
    [anon_sym_enum] = ACTIONS(1009),
    [anon_sym_delegate] = ACTIONS(1009),
    [anon_sym_LBRACK] = ACTIONS(1009),
    [sym_comment] = ACTIONS(36),
  },
  [493] = {
    [anon_sym_RBRACE] = ACTIONS(1015),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [494] = {
    [anon_sym_RPAREN] = ACTIONS(1017),
    [sym_comment] = ACTIONS(36),
  },
  [495] = {
    [aux_sym_array_rank_specifier_repeat1] = STATE(583),
    [anon_sym_COMMA] = ACTIONS(1019),
    [anon_sym_RBRACK] = ACTIONS(1021),
    [sym_comment] = ACTIONS(36),
  },
  [496] = {
    [sym_identifier_name] = ACTIONS(1023),
    [sym_comment] = ACTIONS(36),
  },
  [497] = {
    [anon_sym_sbyte] = ACTIONS(304),
    [anon_sym_byte] = ACTIONS(304),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_ushort] = ACTIONS(304),
    [anon_sym_int] = ACTIONS(304),
    [anon_sym_uint] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(304),
    [anon_sym_ulong] = ACTIONS(304),
    [anon_sym_char] = ACTIONS(304),
    [anon_sym_ref] = ACTIONS(304),
    [anon_sym_out] = ACTIONS(304),
    [anon_sym_this] = ACTIONS(304),
    [sym_params_keyword] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_bool] = ACTIONS(304),
    [anon_sym_decimal] = ACTIONS(304),
    [anon_sym_double] = ACTIONS(304),
    [anon_sym_float] = ACTIONS(304),
    [anon_sym_object] = ACTIONS(304),
    [anon_sym_string] = ACTIONS(304),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [498] = {
    [sym_attribute_list] = STATE(584),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [499] = {
    [anon_sym_COMMA] = ACTIONS(1025),
    [anon_sym_RPAREN] = ACTIONS(1025),
    [sym_params_keyword] = ACTIONS(1025),
    [anon_sym_LBRACK] = ACTIONS(1025),
    [sym_comment] = ACTIONS(36),
  },
  [500] = {
    [sym_parameter_modifier] = STATE(401),
    [sym__type] = STATE(399),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_ref] = ACTIONS(507),
    [anon_sym_out] = ACTIONS(507),
    [anon_sym_this] = ACTIONS(507),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [501] = {
    [anon_sym_sbyte] = ACTIONS(106),
    [anon_sym_byte] = ACTIONS(106),
    [anon_sym_short] = ACTIONS(106),
    [anon_sym_ushort] = ACTIONS(106),
    [anon_sym_int] = ACTIONS(106),
    [anon_sym_uint] = ACTIONS(106),
    [anon_sym_long] = ACTIONS(106),
    [anon_sym_ulong] = ACTIONS(106),
    [anon_sym_char] = ACTIONS(106),
    [anon_sym_ref] = ACTIONS(106),
    [anon_sym_out] = ACTIONS(106),
    [anon_sym_this] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_bool] = ACTIONS(106),
    [anon_sym_decimal] = ACTIONS(106),
    [anon_sym_double] = ACTIONS(106),
    [anon_sym_float] = ACTIONS(106),
    [anon_sym_object] = ACTIONS(106),
    [anon_sym_string] = ACTIONS(106),
    [sym_identifier_name] = ACTIONS(110),
    [sym_comment] = ACTIONS(36),
  },
  [502] = {
    [sym__attribute_section] = STATE(585),
    [anon_sym_sbyte] = ACTIONS(118),
    [anon_sym_byte] = ACTIONS(118),
    [anon_sym_short] = ACTIONS(118),
    [anon_sym_ushort] = ACTIONS(118),
    [anon_sym_int] = ACTIONS(118),
    [anon_sym_uint] = ACTIONS(118),
    [anon_sym_long] = ACTIONS(118),
    [anon_sym_ulong] = ACTIONS(118),
    [anon_sym_char] = ACTIONS(118),
    [anon_sym_ref] = ACTIONS(118),
    [anon_sym_out] = ACTIONS(118),
    [anon_sym_this] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(873),
    [anon_sym_bool] = ACTIONS(118),
    [anon_sym_decimal] = ACTIONS(118),
    [anon_sym_double] = ACTIONS(118),
    [anon_sym_float] = ACTIONS(118),
    [anon_sym_object] = ACTIONS(118),
    [anon_sym_string] = ACTIONS(118),
    [sym_identifier_name] = ACTIONS(120),
    [sym_comment] = ACTIONS(36),
  },
  [503] = {
    [sym_parameter] = STATE(586),
    [sym_parameter_modifier] = STATE(292),
    [sym__attributes] = STATE(500),
    [sym__attribute_section] = STATE(501),
    [sym__type] = STATE(296),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(502),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_ref] = ACTIONS(507),
    [anon_sym_out] = ACTIONS(507),
    [anon_sym_this] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(873),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [504] = {
    [anon_sym_RPAREN] = ACTIONS(1027),
    [sym_comment] = ACTIONS(36),
  },
  [505] = {
    [sym_equals_value_clause] = STATE(587),
    [anon_sym_COMMA] = ACTIONS(1029),
    [anon_sym_RPAREN] = ACTIONS(1029),
    [sym_params_keyword] = ACTIONS(1029),
    [anon_sym_LBRACK] = ACTIONS(1029),
    [anon_sym_EQ] = ACTIONS(493),
    [sym_comment] = ACTIONS(36),
  },
  [506] = {
    [sym_identifier_name] = ACTIONS(1031),
    [sym_comment] = ACTIONS(36),
  },
  [507] = {
    [sym_identifier_name] = ACTIONS(1033),
    [sym_comment] = ACTIONS(36),
  },
  [508] = {
    [anon_sym_COMMA] = ACTIONS(1029),
    [anon_sym_RPAREN] = ACTIONS(1029),
    [sym_params_keyword] = ACTIONS(1029),
    [anon_sym_LBRACK] = ACTIONS(1029),
    [sym_comment] = ACTIONS(36),
  },
  [509] = {
    [ts_builtin_sym_end] = ACTIONS(1035),
    [anon_sym_using] = ACTIONS(1035),
    [anon_sym_namespace] = ACTIONS(1035),
    [anon_sym_RBRACE] = ACTIONS(1035),
    [anon_sym_class] = ACTIONS(1035),
    [anon_sym_unsafe] = ACTIONS(1035),
    [anon_sym_abstract] = ACTIONS(1035),
    [anon_sym_sealed] = ACTIONS(1035),
    [anon_sym_static] = ACTIONS(1035),
    [anon_sym_new] = ACTIONS(1035),
    [anon_sym_public] = ACTIONS(1035),
    [anon_sym_protected] = ACTIONS(1035),
    [anon_sym_internal] = ACTIONS(1035),
    [anon_sym_private] = ACTIONS(1035),
    [anon_sym_interface] = ACTIONS(1035),
    [anon_sym_struct] = ACTIONS(1035),
    [anon_sym_enum] = ACTIONS(1035),
    [anon_sym_delegate] = ACTIONS(1035),
    [anon_sym_LBRACK] = ACTIONS(1035),
    [sym_comment] = ACTIONS(36),
  },
  [510] = {
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
  [511] = {
    [ts_builtin_sym_end] = ACTIONS(1039),
    [anon_sym_using] = ACTIONS(1039),
    [anon_sym_namespace] = ACTIONS(1039),
    [anon_sym_RBRACE] = ACTIONS(1039),
    [anon_sym_class] = ACTIONS(1039),
    [anon_sym_unsafe] = ACTIONS(1039),
    [anon_sym_abstract] = ACTIONS(1039),
    [anon_sym_sealed] = ACTIONS(1039),
    [anon_sym_static] = ACTIONS(1039),
    [anon_sym_new] = ACTIONS(1039),
    [anon_sym_public] = ACTIONS(1039),
    [anon_sym_protected] = ACTIONS(1039),
    [anon_sym_internal] = ACTIONS(1039),
    [anon_sym_private] = ACTIONS(1039),
    [anon_sym_interface] = ACTIONS(1039),
    [anon_sym_struct] = ACTIONS(1039),
    [anon_sym_enum] = ACTIONS(1039),
    [anon_sym_delegate] = ACTIONS(1039),
    [anon_sym_LBRACK] = ACTIONS(1039),
    [sym_comment] = ACTIONS(36),
  },
  [512] = {
    [aux_sym_enum_declaration_repeat1] = STATE(590),
    [anon_sym_RBRACE] = ACTIONS(1015),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [513] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1041),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [514] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1043),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [515] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1045),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [516] = {
    [sym_enum_member_declaration] = STATE(594),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [517] = {
    [ts_builtin_sym_end] = ACTIONS(1047),
    [anon_sym_using] = ACTIONS(1047),
    [anon_sym_namespace] = ACTIONS(1047),
    [anon_sym_RBRACE] = ACTIONS(1047),
    [anon_sym_class] = ACTIONS(1047),
    [anon_sym_unsafe] = ACTIONS(1047),
    [anon_sym_abstract] = ACTIONS(1047),
    [anon_sym_sealed] = ACTIONS(1047),
    [anon_sym_static] = ACTIONS(1047),
    [anon_sym_new] = ACTIONS(1047),
    [anon_sym_public] = ACTIONS(1047),
    [anon_sym_protected] = ACTIONS(1047),
    [anon_sym_internal] = ACTIONS(1047),
    [anon_sym_private] = ACTIONS(1047),
    [anon_sym_interface] = ACTIONS(1047),
    [anon_sym_struct] = ACTIONS(1047),
    [anon_sym_enum] = ACTIONS(1047),
    [anon_sym_delegate] = ACTIONS(1047),
    [anon_sym_LBRACK] = ACTIONS(1047),
    [sym_comment] = ACTIONS(36),
  },
  [518] = {
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_class] = ACTIONS(1049),
    [anon_sym_unsafe] = ACTIONS(1049),
    [anon_sym_abstract] = ACTIONS(1049),
    [anon_sym_sealed] = ACTIONS(1049),
    [anon_sym_static] = ACTIONS(1049),
    [anon_sym_new] = ACTIONS(1049),
    [anon_sym_public] = ACTIONS(1049),
    [anon_sym_protected] = ACTIONS(1049),
    [anon_sym_internal] = ACTIONS(1049),
    [anon_sym_private] = ACTIONS(1049),
    [anon_sym_interface] = ACTIONS(1049),
    [anon_sym_struct] = ACTIONS(1049),
    [anon_sym_enum] = ACTIONS(1049),
    [anon_sym_sbyte] = ACTIONS(1049),
    [anon_sym_byte] = ACTIONS(1049),
    [anon_sym_short] = ACTIONS(1049),
    [anon_sym_ushort] = ACTIONS(1049),
    [anon_sym_int] = ACTIONS(1049),
    [anon_sym_uint] = ACTIONS(1049),
    [anon_sym_long] = ACTIONS(1049),
    [anon_sym_ulong] = ACTIONS(1049),
    [anon_sym_char] = ACTIONS(1049),
    [anon_sym_delegate] = ACTIONS(1049),
    [sym_void_keyword] = ACTIONS(1049),
    [anon_sym_LBRACK] = ACTIONS(589),
    [sym_const_keyword] = ACTIONS(1049),
    [anon_sym_readonly] = ACTIONS(1049),
    [anon_sym_volatile] = ACTIONS(1049),
    [anon_sym_bool] = ACTIONS(1049),
    [anon_sym_decimal] = ACTIONS(1049),
    [anon_sym_double] = ACTIONS(1049),
    [anon_sym_float] = ACTIONS(1049),
    [anon_sym_object] = ACTIONS(1049),
    [anon_sym_string] = ACTIONS(1049),
    [sym_identifier_name] = ACTIONS(1051),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1049),
  },
  [519] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1053),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(613),
    [anon_sym_class] = ACTIONS(1055),
    [anon_sym_unsafe] = ACTIONS(1055),
    [anon_sym_abstract] = ACTIONS(1055),
    [anon_sym_sealed] = ACTIONS(1055),
    [anon_sym_static] = ACTIONS(1055),
    [anon_sym_new] = ACTIONS(1055),
    [anon_sym_public] = ACTIONS(1055),
    [anon_sym_protected] = ACTIONS(1055),
    [anon_sym_internal] = ACTIONS(1055),
    [anon_sym_private] = ACTIONS(1055),
    [anon_sym_interface] = ACTIONS(1055),
    [anon_sym_struct] = ACTIONS(1055),
    [anon_sym_enum] = ACTIONS(1055),
    [anon_sym_sbyte] = ACTIONS(1055),
    [anon_sym_byte] = ACTIONS(1055),
    [anon_sym_short] = ACTIONS(1055),
    [anon_sym_ushort] = ACTIONS(1055),
    [anon_sym_int] = ACTIONS(1055),
    [anon_sym_uint] = ACTIONS(1055),
    [anon_sym_long] = ACTIONS(1055),
    [anon_sym_ulong] = ACTIONS(1055),
    [anon_sym_char] = ACTIONS(1055),
    [anon_sym_delegate] = ACTIONS(1055),
    [sym_void_keyword] = ACTIONS(1055),
    [anon_sym_LBRACK] = ACTIONS(613),
    [sym_const_keyword] = ACTIONS(1055),
    [anon_sym_readonly] = ACTIONS(1055),
    [anon_sym_volatile] = ACTIONS(1055),
    [anon_sym_bool] = ACTIONS(1055),
    [anon_sym_decimal] = ACTIONS(1055),
    [anon_sym_double] = ACTIONS(1055),
    [anon_sym_float] = ACTIONS(1055),
    [anon_sym_object] = ACTIONS(1055),
    [anon_sym_string] = ACTIONS(1055),
    [sym_identifier_name] = ACTIONS(1057),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1055),
  },
  [521] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1059),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [522] = {
    [anon_sym_RBRACE] = ACTIONS(657),
    [anon_sym_class] = ACTIONS(1061),
    [anon_sym_unsafe] = ACTIONS(1061),
    [anon_sym_abstract] = ACTIONS(1061),
    [anon_sym_sealed] = ACTIONS(1061),
    [anon_sym_static] = ACTIONS(1061),
    [anon_sym_new] = ACTIONS(1061),
    [anon_sym_public] = ACTIONS(1061),
    [anon_sym_protected] = ACTIONS(1061),
    [anon_sym_internal] = ACTIONS(1061),
    [anon_sym_private] = ACTIONS(1061),
    [anon_sym_interface] = ACTIONS(1061),
    [anon_sym_struct] = ACTIONS(1061),
    [anon_sym_enum] = ACTIONS(1061),
    [anon_sym_sbyte] = ACTIONS(1061),
    [anon_sym_byte] = ACTIONS(1061),
    [anon_sym_short] = ACTIONS(1061),
    [anon_sym_ushort] = ACTIONS(1061),
    [anon_sym_int] = ACTIONS(1061),
    [anon_sym_uint] = ACTIONS(1061),
    [anon_sym_long] = ACTIONS(1061),
    [anon_sym_ulong] = ACTIONS(1061),
    [anon_sym_char] = ACTIONS(1061),
    [anon_sym_delegate] = ACTIONS(1061),
    [sym_void_keyword] = ACTIONS(1061),
    [anon_sym_LBRACK] = ACTIONS(657),
    [sym_const_keyword] = ACTIONS(1061),
    [anon_sym_readonly] = ACTIONS(1061),
    [anon_sym_volatile] = ACTIONS(1061),
    [anon_sym_bool] = ACTIONS(1061),
    [anon_sym_decimal] = ACTIONS(1061),
    [anon_sym_double] = ACTIONS(1061),
    [anon_sym_float] = ACTIONS(1061),
    [anon_sym_object] = ACTIONS(1061),
    [anon_sym_string] = ACTIONS(1061),
    [sym_identifier_name] = ACTIONS(1063),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1061),
  },
  [523] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1065),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [524] = {
    [anon_sym_SEMI] = ACTIONS(1067),
    [anon_sym_RBRACE] = ACTIONS(687),
    [anon_sym_class] = ACTIONS(1069),
    [anon_sym_unsafe] = ACTIONS(1069),
    [anon_sym_abstract] = ACTIONS(1069),
    [anon_sym_sealed] = ACTIONS(1069),
    [anon_sym_static] = ACTIONS(1069),
    [anon_sym_new] = ACTIONS(1069),
    [anon_sym_public] = ACTIONS(1069),
    [anon_sym_protected] = ACTIONS(1069),
    [anon_sym_internal] = ACTIONS(1069),
    [anon_sym_private] = ACTIONS(1069),
    [anon_sym_interface] = ACTIONS(1069),
    [anon_sym_struct] = ACTIONS(1069),
    [anon_sym_enum] = ACTIONS(1069),
    [anon_sym_sbyte] = ACTIONS(1069),
    [anon_sym_byte] = ACTIONS(1069),
    [anon_sym_short] = ACTIONS(1069),
    [anon_sym_ushort] = ACTIONS(1069),
    [anon_sym_int] = ACTIONS(1069),
    [anon_sym_uint] = ACTIONS(1069),
    [anon_sym_long] = ACTIONS(1069),
    [anon_sym_ulong] = ACTIONS(1069),
    [anon_sym_char] = ACTIONS(1069),
    [anon_sym_delegate] = ACTIONS(1069),
    [sym_void_keyword] = ACTIONS(1069),
    [anon_sym_LBRACK] = ACTIONS(687),
    [sym_const_keyword] = ACTIONS(1069),
    [anon_sym_readonly] = ACTIONS(1069),
    [anon_sym_volatile] = ACTIONS(1069),
    [anon_sym_bool] = ACTIONS(1069),
    [anon_sym_decimal] = ACTIONS(1069),
    [anon_sym_double] = ACTIONS(1069),
    [anon_sym_float] = ACTIONS(1069),
    [anon_sym_object] = ACTIONS(1069),
    [anon_sym_string] = ACTIONS(1069),
    [sym_identifier_name] = ACTIONS(1071),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1069),
  },
  [525] = {
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [526] = {
    [sym_enum_member_declaration] = STATE(600),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [527] = {
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_class] = ACTIONS(1075),
    [anon_sym_unsafe] = ACTIONS(1075),
    [anon_sym_abstract] = ACTIONS(1075),
    [anon_sym_sealed] = ACTIONS(1075),
    [anon_sym_static] = ACTIONS(1075),
    [anon_sym_new] = ACTIONS(1075),
    [anon_sym_public] = ACTIONS(1075),
    [anon_sym_protected] = ACTIONS(1075),
    [anon_sym_internal] = ACTIONS(1075),
    [anon_sym_private] = ACTIONS(1075),
    [anon_sym_interface] = ACTIONS(1075),
    [anon_sym_struct] = ACTIONS(1075),
    [anon_sym_enum] = ACTIONS(1075),
    [anon_sym_sbyte] = ACTIONS(1075),
    [anon_sym_byte] = ACTIONS(1075),
    [anon_sym_short] = ACTIONS(1075),
    [anon_sym_ushort] = ACTIONS(1075),
    [anon_sym_int] = ACTIONS(1075),
    [anon_sym_uint] = ACTIONS(1075),
    [anon_sym_long] = ACTIONS(1075),
    [anon_sym_ulong] = ACTIONS(1075),
    [anon_sym_char] = ACTIONS(1075),
    [anon_sym_delegate] = ACTIONS(1075),
    [sym_void_keyword] = ACTIONS(1075),
    [anon_sym_LBRACK] = ACTIONS(713),
    [sym_const_keyword] = ACTIONS(1075),
    [anon_sym_readonly] = ACTIONS(1075),
    [anon_sym_volatile] = ACTIONS(1075),
    [anon_sym_bool] = ACTIONS(1075),
    [anon_sym_decimal] = ACTIONS(1075),
    [anon_sym_double] = ACTIONS(1075),
    [anon_sym_float] = ACTIONS(1075),
    [anon_sym_object] = ACTIONS(1075),
    [anon_sym_string] = ACTIONS(1075),
    [sym_identifier_name] = ACTIONS(1077),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1075),
  },
  [528] = {
    [anon_sym_RBRACE] = ACTIONS(1079),
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
    [anon_sym_sbyte] = ACTIONS(1081),
    [anon_sym_byte] = ACTIONS(1081),
    [anon_sym_short] = ACTIONS(1081),
    [anon_sym_ushort] = ACTIONS(1081),
    [anon_sym_int] = ACTIONS(1081),
    [anon_sym_uint] = ACTIONS(1081),
    [anon_sym_long] = ACTIONS(1081),
    [anon_sym_ulong] = ACTIONS(1081),
    [anon_sym_char] = ACTIONS(1081),
    [anon_sym_delegate] = ACTIONS(1081),
    [sym_void_keyword] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1079),
    [sym_const_keyword] = ACTIONS(1081),
    [anon_sym_readonly] = ACTIONS(1081),
    [anon_sym_volatile] = ACTIONS(1081),
    [anon_sym_bool] = ACTIONS(1081),
    [anon_sym_decimal] = ACTIONS(1081),
    [anon_sym_double] = ACTIONS(1081),
    [anon_sym_float] = ACTIONS(1081),
    [anon_sym_object] = ACTIONS(1081),
    [anon_sym_string] = ACTIONS(1081),
    [sym_identifier_name] = ACTIONS(1083),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1081),
  },
  [529] = {
    [sym_statement_block] = STATE(601),
    [anon_sym_LBRACE] = ACTIONS(753),
    [sym_comment] = ACTIONS(36),
  },
  [530] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(602),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1053),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [531] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(603),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1059),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [532] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(604),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1065),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [533] = {
    [aux_sym_enum_declaration_repeat1] = STATE(605),
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [534] = {
    [anon_sym_LBRACE] = ACTIONS(1085),
    [sym_comment] = ACTIONS(36),
  },
  [535] = {
    [anon_sym_SEMI] = ACTIONS(1087),
    [sym_comment] = ACTIONS(36),
  },
  [536] = {
    [anon_sym_SEMI] = ACTIONS(1089),
    [anon_sym_RBRACE] = ACTIONS(1089),
    [sym_comment] = ACTIONS(36),
  },
  [537] = {
    [anon_sym_RBRACE] = ACTIONS(1091),
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
    [anon_sym_LBRACK] = ACTIONS(1091),
    [sym_const_keyword] = ACTIONS(1093),
    [anon_sym_readonly] = ACTIONS(1093),
    [anon_sym_volatile] = ACTIONS(1093),
    [anon_sym_bool] = ACTIONS(1093),
    [anon_sym_decimal] = ACTIONS(1093),
    [anon_sym_double] = ACTIONS(1093),
    [anon_sym_float] = ACTIONS(1093),
    [anon_sym_object] = ACTIONS(1093),
    [anon_sym_string] = ACTIONS(1093),
    [sym_identifier_name] = ACTIONS(1095),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1093),
  },
  [538] = {
    [anon_sym_SEMI] = ACTIONS(1097),
    [anon_sym_RBRACE] = ACTIONS(1097),
    [sym_comment] = ACTIONS(36),
  },
  [539] = {
    [anon_sym_SEMI] = ACTIONS(1099),
    [anon_sym_RBRACE] = ACTIONS(1099),
    [sym_comment] = ACTIONS(36),
  },
  [540] = {
    [sym__statement] = STATE(609),
    [sym_empty_statement] = STATE(539),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_RBRACE] = ACTIONS(1101),
    [sym_comment] = ACTIONS(36),
  },
  [541] = {
    [anon_sym_LBRACE] = ACTIONS(1103),
    [sym_comment] = ACTIONS(36),
  },
  [542] = {
    [anon_sym_LBRACE] = ACTIONS(1105),
    [sym_comment] = ACTIONS(36),
  },
  [543] = {
    [anon_sym_LBRACE] = ACTIONS(1107),
    [sym_comment] = ACTIONS(36),
  },
  [544] = {
    [sym__integral_type] = STATE(613),
    [anon_sym_sbyte] = ACTIONS(292),
    [anon_sym_byte] = ACTIONS(292),
    [anon_sym_short] = ACTIONS(292),
    [anon_sym_ushort] = ACTIONS(292),
    [anon_sym_int] = ACTIONS(292),
    [anon_sym_uint] = ACTIONS(292),
    [anon_sym_long] = ACTIONS(292),
    [anon_sym_ulong] = ACTIONS(292),
    [anon_sym_char] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [545] = {
    [sym_parameter_list] = STATE(614),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [546] = {
    [anon_sym_RBRACE] = ACTIONS(1109),
    [anon_sym_class] = ACTIONS(1111),
    [anon_sym_unsafe] = ACTIONS(1111),
    [anon_sym_abstract] = ACTIONS(1111),
    [anon_sym_sealed] = ACTIONS(1111),
    [anon_sym_static] = ACTIONS(1111),
    [anon_sym_new] = ACTIONS(1111),
    [anon_sym_public] = ACTIONS(1111),
    [anon_sym_protected] = ACTIONS(1111),
    [anon_sym_internal] = ACTIONS(1111),
    [anon_sym_private] = ACTIONS(1111),
    [anon_sym_interface] = ACTIONS(1111),
    [anon_sym_struct] = ACTIONS(1111),
    [anon_sym_enum] = ACTIONS(1111),
    [anon_sym_sbyte] = ACTIONS(1111),
    [anon_sym_byte] = ACTIONS(1111),
    [anon_sym_short] = ACTIONS(1111),
    [anon_sym_ushort] = ACTIONS(1111),
    [anon_sym_int] = ACTIONS(1111),
    [anon_sym_uint] = ACTIONS(1111),
    [anon_sym_long] = ACTIONS(1111),
    [anon_sym_ulong] = ACTIONS(1111),
    [anon_sym_char] = ACTIONS(1111),
    [anon_sym_delegate] = ACTIONS(1111),
    [sym_void_keyword] = ACTIONS(1111),
    [anon_sym_LBRACK] = ACTIONS(1109),
    [sym_const_keyword] = ACTIONS(1111),
    [anon_sym_readonly] = ACTIONS(1111),
    [anon_sym_volatile] = ACTIONS(1111),
    [anon_sym_bool] = ACTIONS(1111),
    [anon_sym_decimal] = ACTIONS(1111),
    [anon_sym_double] = ACTIONS(1111),
    [anon_sym_float] = ACTIONS(1111),
    [anon_sym_object] = ACTIONS(1111),
    [anon_sym_string] = ACTIONS(1111),
    [sym_identifier_name] = ACTIONS(1113),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1111),
  },
  [547] = {
    [anon_sym_SEMI] = ACTIONS(1115),
    [anon_sym_COMMA] = ACTIONS(1115),
    [sym_comment] = ACTIONS(36),
  },
  [548] = {
    [sym_parameter_list] = STATE(615),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [549] = {
    [anon_sym_RBRACE] = ACTIONS(1109),
    [anon_sym_unsafe] = ACTIONS(1111),
    [anon_sym_static] = ACTIONS(1111),
    [anon_sym_new] = ACTIONS(1111),
    [anon_sym_public] = ACTIONS(1111),
    [anon_sym_protected] = ACTIONS(1111),
    [anon_sym_internal] = ACTIONS(1111),
    [anon_sym_private] = ACTIONS(1111),
    [anon_sym_sbyte] = ACTIONS(1111),
    [anon_sym_byte] = ACTIONS(1111),
    [anon_sym_short] = ACTIONS(1111),
    [anon_sym_ushort] = ACTIONS(1111),
    [anon_sym_int] = ACTIONS(1111),
    [anon_sym_uint] = ACTIONS(1111),
    [anon_sym_long] = ACTIONS(1111),
    [anon_sym_ulong] = ACTIONS(1111),
    [anon_sym_char] = ACTIONS(1111),
    [anon_sym_LBRACK] = ACTIONS(1109),
    [sym_const_keyword] = ACTIONS(1111),
    [anon_sym_readonly] = ACTIONS(1111),
    [anon_sym_volatile] = ACTIONS(1111),
    [anon_sym_bool] = ACTIONS(1111),
    [anon_sym_decimal] = ACTIONS(1111),
    [anon_sym_double] = ACTIONS(1111),
    [anon_sym_float] = ACTIONS(1111),
    [anon_sym_object] = ACTIONS(1111),
    [anon_sym_string] = ACTIONS(1111),
    [sym_identifier_name] = ACTIONS(1113),
    [sym_comment] = ACTIONS(36),
  },
  [550] = {
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_class] = ACTIONS(1049),
    [anon_sym_unsafe] = ACTIONS(1049),
    [anon_sym_abstract] = ACTIONS(1049),
    [anon_sym_sealed] = ACTIONS(1049),
    [anon_sym_static] = ACTIONS(1049),
    [anon_sym_new] = ACTIONS(1049),
    [anon_sym_public] = ACTIONS(1049),
    [anon_sym_protected] = ACTIONS(1049),
    [anon_sym_internal] = ACTIONS(1049),
    [anon_sym_private] = ACTIONS(1049),
    [anon_sym_interface] = ACTIONS(1049),
    [anon_sym_struct] = ACTIONS(1049),
    [anon_sym_enum] = ACTIONS(1049),
    [anon_sym_sbyte] = ACTIONS(1049),
    [anon_sym_byte] = ACTIONS(1049),
    [anon_sym_short] = ACTIONS(1049),
    [anon_sym_ushort] = ACTIONS(1049),
    [anon_sym_int] = ACTIONS(1049),
    [anon_sym_uint] = ACTIONS(1049),
    [anon_sym_long] = ACTIONS(1049),
    [anon_sym_ulong] = ACTIONS(1049),
    [anon_sym_char] = ACTIONS(1049),
    [anon_sym_delegate] = ACTIONS(1049),
    [anon_sym_LBRACK] = ACTIONS(589),
    [sym_const_keyword] = ACTIONS(1049),
    [anon_sym_readonly] = ACTIONS(1049),
    [anon_sym_volatile] = ACTIONS(1049),
    [anon_sym_bool] = ACTIONS(1049),
    [anon_sym_decimal] = ACTIONS(1049),
    [anon_sym_double] = ACTIONS(1049),
    [anon_sym_float] = ACTIONS(1049),
    [anon_sym_object] = ACTIONS(1049),
    [anon_sym_string] = ACTIONS(1049),
    [sym_identifier_name] = ACTIONS(1051),
    [sym_comment] = ACTIONS(36),
  },
  [551] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1117),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [552] = {
    [anon_sym_RBRACE] = ACTIONS(613),
    [anon_sym_class] = ACTIONS(1055),
    [anon_sym_unsafe] = ACTIONS(1055),
    [anon_sym_abstract] = ACTIONS(1055),
    [anon_sym_sealed] = ACTIONS(1055),
    [anon_sym_static] = ACTIONS(1055),
    [anon_sym_new] = ACTIONS(1055),
    [anon_sym_public] = ACTIONS(1055),
    [anon_sym_protected] = ACTIONS(1055),
    [anon_sym_internal] = ACTIONS(1055),
    [anon_sym_private] = ACTIONS(1055),
    [anon_sym_interface] = ACTIONS(1055),
    [anon_sym_struct] = ACTIONS(1055),
    [anon_sym_enum] = ACTIONS(1055),
    [anon_sym_sbyte] = ACTIONS(1055),
    [anon_sym_byte] = ACTIONS(1055),
    [anon_sym_short] = ACTIONS(1055),
    [anon_sym_ushort] = ACTIONS(1055),
    [anon_sym_int] = ACTIONS(1055),
    [anon_sym_uint] = ACTIONS(1055),
    [anon_sym_long] = ACTIONS(1055),
    [anon_sym_ulong] = ACTIONS(1055),
    [anon_sym_char] = ACTIONS(1055),
    [anon_sym_delegate] = ACTIONS(1055),
    [anon_sym_LBRACK] = ACTIONS(613),
    [sym_const_keyword] = ACTIONS(1055),
    [anon_sym_readonly] = ACTIONS(1055),
    [anon_sym_volatile] = ACTIONS(1055),
    [anon_sym_bool] = ACTIONS(1055),
    [anon_sym_decimal] = ACTIONS(1055),
    [anon_sym_double] = ACTIONS(1055),
    [anon_sym_float] = ACTIONS(1055),
    [anon_sym_object] = ACTIONS(1055),
    [anon_sym_string] = ACTIONS(1055),
    [sym_identifier_name] = ACTIONS(1057),
    [sym_comment] = ACTIONS(36),
  },
  [553] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1119),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [554] = {
    [anon_sym_RBRACE] = ACTIONS(657),
    [anon_sym_class] = ACTIONS(1061),
    [anon_sym_unsafe] = ACTIONS(1061),
    [anon_sym_abstract] = ACTIONS(1061),
    [anon_sym_sealed] = ACTIONS(1061),
    [anon_sym_static] = ACTIONS(1061),
    [anon_sym_new] = ACTIONS(1061),
    [anon_sym_public] = ACTIONS(1061),
    [anon_sym_protected] = ACTIONS(1061),
    [anon_sym_internal] = ACTIONS(1061),
    [anon_sym_private] = ACTIONS(1061),
    [anon_sym_interface] = ACTIONS(1061),
    [anon_sym_struct] = ACTIONS(1061),
    [anon_sym_enum] = ACTIONS(1061),
    [anon_sym_sbyte] = ACTIONS(1061),
    [anon_sym_byte] = ACTIONS(1061),
    [anon_sym_short] = ACTIONS(1061),
    [anon_sym_ushort] = ACTIONS(1061),
    [anon_sym_int] = ACTIONS(1061),
    [anon_sym_uint] = ACTIONS(1061),
    [anon_sym_long] = ACTIONS(1061),
    [anon_sym_ulong] = ACTIONS(1061),
    [anon_sym_char] = ACTIONS(1061),
    [anon_sym_delegate] = ACTIONS(1061),
    [anon_sym_LBRACK] = ACTIONS(657),
    [sym_const_keyword] = ACTIONS(1061),
    [anon_sym_readonly] = ACTIONS(1061),
    [anon_sym_volatile] = ACTIONS(1061),
    [anon_sym_bool] = ACTIONS(1061),
    [anon_sym_decimal] = ACTIONS(1061),
    [anon_sym_double] = ACTIONS(1061),
    [anon_sym_float] = ACTIONS(1061),
    [anon_sym_object] = ACTIONS(1061),
    [anon_sym_string] = ACTIONS(1061),
    [sym_identifier_name] = ACTIONS(1063),
    [sym_comment] = ACTIONS(36),
  },
  [555] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1121),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [556] = {
    [anon_sym_SEMI] = ACTIONS(1123),
    [anon_sym_RBRACE] = ACTIONS(687),
    [anon_sym_class] = ACTIONS(1069),
    [anon_sym_unsafe] = ACTIONS(1069),
    [anon_sym_abstract] = ACTIONS(1069),
    [anon_sym_sealed] = ACTIONS(1069),
    [anon_sym_static] = ACTIONS(1069),
    [anon_sym_new] = ACTIONS(1069),
    [anon_sym_public] = ACTIONS(1069),
    [anon_sym_protected] = ACTIONS(1069),
    [anon_sym_internal] = ACTIONS(1069),
    [anon_sym_private] = ACTIONS(1069),
    [anon_sym_interface] = ACTIONS(1069),
    [anon_sym_struct] = ACTIONS(1069),
    [anon_sym_enum] = ACTIONS(1069),
    [anon_sym_sbyte] = ACTIONS(1069),
    [anon_sym_byte] = ACTIONS(1069),
    [anon_sym_short] = ACTIONS(1069),
    [anon_sym_ushort] = ACTIONS(1069),
    [anon_sym_int] = ACTIONS(1069),
    [anon_sym_uint] = ACTIONS(1069),
    [anon_sym_long] = ACTIONS(1069),
    [anon_sym_ulong] = ACTIONS(1069),
    [anon_sym_char] = ACTIONS(1069),
    [anon_sym_delegate] = ACTIONS(1069),
    [anon_sym_LBRACK] = ACTIONS(687),
    [sym_const_keyword] = ACTIONS(1069),
    [anon_sym_readonly] = ACTIONS(1069),
    [anon_sym_volatile] = ACTIONS(1069),
    [anon_sym_bool] = ACTIONS(1069),
    [anon_sym_decimal] = ACTIONS(1069),
    [anon_sym_double] = ACTIONS(1069),
    [anon_sym_float] = ACTIONS(1069),
    [anon_sym_object] = ACTIONS(1069),
    [anon_sym_string] = ACTIONS(1069),
    [sym_identifier_name] = ACTIONS(1071),
    [sym_comment] = ACTIONS(36),
  },
  [557] = {
    [anon_sym_RBRACE] = ACTIONS(1125),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [558] = {
    [sym_enum_member_declaration] = STATE(621),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [559] = {
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_class] = ACTIONS(1075),
    [anon_sym_unsafe] = ACTIONS(1075),
    [anon_sym_abstract] = ACTIONS(1075),
    [anon_sym_sealed] = ACTIONS(1075),
    [anon_sym_static] = ACTIONS(1075),
    [anon_sym_new] = ACTIONS(1075),
    [anon_sym_public] = ACTIONS(1075),
    [anon_sym_protected] = ACTIONS(1075),
    [anon_sym_internal] = ACTIONS(1075),
    [anon_sym_private] = ACTIONS(1075),
    [anon_sym_interface] = ACTIONS(1075),
    [anon_sym_struct] = ACTIONS(1075),
    [anon_sym_enum] = ACTIONS(1075),
    [anon_sym_sbyte] = ACTIONS(1075),
    [anon_sym_byte] = ACTIONS(1075),
    [anon_sym_short] = ACTIONS(1075),
    [anon_sym_ushort] = ACTIONS(1075),
    [anon_sym_int] = ACTIONS(1075),
    [anon_sym_uint] = ACTIONS(1075),
    [anon_sym_long] = ACTIONS(1075),
    [anon_sym_ulong] = ACTIONS(1075),
    [anon_sym_char] = ACTIONS(1075),
    [anon_sym_delegate] = ACTIONS(1075),
    [anon_sym_LBRACK] = ACTIONS(713),
    [sym_const_keyword] = ACTIONS(1075),
    [anon_sym_readonly] = ACTIONS(1075),
    [anon_sym_volatile] = ACTIONS(1075),
    [anon_sym_bool] = ACTIONS(1075),
    [anon_sym_decimal] = ACTIONS(1075),
    [anon_sym_double] = ACTIONS(1075),
    [anon_sym_float] = ACTIONS(1075),
    [anon_sym_object] = ACTIONS(1075),
    [anon_sym_string] = ACTIONS(1075),
    [sym_identifier_name] = ACTIONS(1077),
    [sym_comment] = ACTIONS(36),
  },
  [560] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(622),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1117),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [561] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(623),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1119),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [562] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(624),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1121),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [563] = {
    [aux_sym_enum_declaration_repeat1] = STATE(625),
    [anon_sym_RBRACE] = ACTIONS(1125),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [564] = {
    [anon_sym_LBRACE] = ACTIONS(1127),
    [sym_comment] = ACTIONS(36),
  },
  [565] = {
    [anon_sym_SEMI] = ACTIONS(1129),
    [sym_comment] = ACTIONS(36),
  },
  [566] = {
    [anon_sym_LBRACE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(36),
  },
  [567] = {
    [anon_sym_LBRACE] = ACTIONS(1133),
    [sym_comment] = ACTIONS(36),
  },
  [568] = {
    [anon_sym_LBRACE] = ACTIONS(1135),
    [sym_comment] = ACTIONS(36),
  },
  [569] = {
    [sym__integral_type] = STATE(631),
    [anon_sym_sbyte] = ACTIONS(292),
    [anon_sym_byte] = ACTIONS(292),
    [anon_sym_short] = ACTIONS(292),
    [anon_sym_ushort] = ACTIONS(292),
    [anon_sym_int] = ACTIONS(292),
    [anon_sym_uint] = ACTIONS(292),
    [anon_sym_long] = ACTIONS(292),
    [anon_sym_ulong] = ACTIONS(292),
    [anon_sym_char] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [570] = {
    [sym_parameter_list] = STATE(632),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(36),
  },
  [571] = {
    [anon_sym_RBRACE] = ACTIONS(1109),
    [anon_sym_class] = ACTIONS(1111),
    [anon_sym_unsafe] = ACTIONS(1111),
    [anon_sym_abstract] = ACTIONS(1111),
    [anon_sym_sealed] = ACTIONS(1111),
    [anon_sym_static] = ACTIONS(1111),
    [anon_sym_new] = ACTIONS(1111),
    [anon_sym_public] = ACTIONS(1111),
    [anon_sym_protected] = ACTIONS(1111),
    [anon_sym_internal] = ACTIONS(1111),
    [anon_sym_private] = ACTIONS(1111),
    [anon_sym_interface] = ACTIONS(1111),
    [anon_sym_struct] = ACTIONS(1111),
    [anon_sym_enum] = ACTIONS(1111),
    [anon_sym_sbyte] = ACTIONS(1111),
    [anon_sym_byte] = ACTIONS(1111),
    [anon_sym_short] = ACTIONS(1111),
    [anon_sym_ushort] = ACTIONS(1111),
    [anon_sym_int] = ACTIONS(1111),
    [anon_sym_uint] = ACTIONS(1111),
    [anon_sym_long] = ACTIONS(1111),
    [anon_sym_ulong] = ACTIONS(1111),
    [anon_sym_char] = ACTIONS(1111),
    [anon_sym_delegate] = ACTIONS(1111),
    [anon_sym_LBRACK] = ACTIONS(1109),
    [sym_const_keyword] = ACTIONS(1111),
    [anon_sym_readonly] = ACTIONS(1111),
    [anon_sym_volatile] = ACTIONS(1111),
    [anon_sym_bool] = ACTIONS(1111),
    [anon_sym_decimal] = ACTIONS(1111),
    [anon_sym_double] = ACTIONS(1111),
    [anon_sym_float] = ACTIONS(1111),
    [anon_sym_object] = ACTIONS(1111),
    [anon_sym_string] = ACTIONS(1111),
    [sym_identifier_name] = ACTIONS(1113),
    [sym_comment] = ACTIONS(36),
  },
  [572] = {
    [anon_sym_SEMI] = ACTIONS(1137),
    [anon_sym_RBRACE] = ACTIONS(1137),
    [anon_sym_COMMA] = ACTIONS(1137),
    [anon_sym_RPAREN] = ACTIONS(1137),
    [sym_params_keyword] = ACTIONS(1137),
    [anon_sym_LBRACK] = ACTIONS(1137),
    [sym_comment] = ACTIONS(36),
  },
  [573] = {
    [anon_sym_SEMI] = ACTIONS(1139),
    [anon_sym_RBRACE] = ACTIONS(1139),
    [anon_sym_COMMA] = ACTIONS(1139),
    [anon_sym_RPAREN] = ACTIONS(1139),
    [sym_params_keyword] = ACTIONS(1139),
    [anon_sym_LBRACK] = ACTIONS(1139),
    [sym__real_type_suffix] = ACTIONS(1141),
    [sym__exponent_part] = ACTIONS(1143),
    [sym_comment] = ACTIONS(36),
  },
  [574] = {
    [anon_sym_SEMI] = ACTIONS(1139),
    [anon_sym_RBRACE] = ACTIONS(1139),
    [anon_sym_COMMA] = ACTIONS(1139),
    [anon_sym_RPAREN] = ACTIONS(1139),
    [sym_params_keyword] = ACTIONS(1139),
    [anon_sym_LBRACK] = ACTIONS(1139),
    [sym_comment] = ACTIONS(36),
  },
  [575] = {
    [anon_sym_SEMI] = ACTIONS(1139),
    [anon_sym_RBRACE] = ACTIONS(1139),
    [anon_sym_COMMA] = ACTIONS(1139),
    [anon_sym_RPAREN] = ACTIONS(1139),
    [sym_params_keyword] = ACTIONS(1139),
    [anon_sym_LBRACK] = ACTIONS(1139),
    [sym__real_type_suffix] = ACTIONS(1141),
    [sym_comment] = ACTIONS(36),
  },
  [576] = {
    [anon_sym_SEMI] = ACTIONS(1145),
    [anon_sym_RBRACE] = ACTIONS(1145),
    [anon_sym_COMMA] = ACTIONS(1145),
    [anon_sym_RPAREN] = ACTIONS(1145),
    [sym_params_keyword] = ACTIONS(1145),
    [anon_sym_LBRACK] = ACTIONS(1145),
    [sym_comment] = ACTIONS(36),
  },
  [577] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(1147),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1147),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1147),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1147),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1147),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1147),
    [anon_sym_BSLASH0] = ACTIONS(1147),
    [anon_sym_BSLASHa] = ACTIONS(1147),
    [anon_sym_BSLASHb] = ACTIONS(1147),
    [anon_sym_BSLASHf] = ACTIONS(1147),
    [anon_sym_BSLASHn] = ACTIONS(1147),
    [anon_sym_BSLASHr] = ACTIONS(1147),
    [anon_sym_BSLASHt] = ACTIONS(1147),
    [anon_sym_BSLASHv] = ACTIONS(1147),
    [anon_sym_DQUOTE] = ACTIONS(1147),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1147),
    [sym_comment] = ACTIONS(823),
  },
  [578] = {
    [anon_sym_SEMI] = ACTIONS(1149),
    [anon_sym_RBRACE] = ACTIONS(1149),
    [anon_sym_COMMA] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1149),
    [sym_params_keyword] = ACTIONS(1149),
    [anon_sym_LBRACK] = ACTIONS(1149),
    [sym_comment] = ACTIONS(36),
  },
  [579] = {
    [ts_builtin_sym_end] = ACTIONS(1151),
    [anon_sym_using] = ACTIONS(1151),
    [anon_sym_namespace] = ACTIONS(1151),
    [anon_sym_RBRACE] = ACTIONS(1151),
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
    [anon_sym_delegate] = ACTIONS(1151),
    [anon_sym_LBRACK] = ACTIONS(1151),
    [sym_comment] = ACTIONS(36),
  },
  [580] = {
    [ts_builtin_sym_end] = ACTIONS(1151),
    [anon_sym_SEMI] = ACTIONS(1153),
    [anon_sym_using] = ACTIONS(1151),
    [anon_sym_namespace] = ACTIONS(1151),
    [anon_sym_RBRACE] = ACTIONS(1151),
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
    [anon_sym_delegate] = ACTIONS(1151),
    [anon_sym_LBRACK] = ACTIONS(1151),
    [sym_comment] = ACTIONS(36),
  },
  [581] = {
    [anon_sym_COMMA] = ACTIONS(1155),
    [anon_sym_RBRACK] = ACTIONS(1155),
    [sym_comment] = ACTIONS(36),
  },
  [582] = {
    [sym_identifier_name] = ACTIONS(1157),
    [sym_comment] = ACTIONS(36),
  },
  [583] = {
    [anon_sym_COMMA] = ACTIONS(1159),
    [anon_sym_RBRACK] = ACTIONS(1161),
    [sym_comment] = ACTIONS(36),
  },
  [584] = {
    [anon_sym_RBRACK] = ACTIONS(1163),
    [sym_comment] = ACTIONS(36),
  },
  [585] = {
    [anon_sym_sbyte] = ACTIONS(212),
    [anon_sym_byte] = ACTIONS(212),
    [anon_sym_short] = ACTIONS(212),
    [anon_sym_ushort] = ACTIONS(212),
    [anon_sym_int] = ACTIONS(212),
    [anon_sym_uint] = ACTIONS(212),
    [anon_sym_long] = ACTIONS(212),
    [anon_sym_ulong] = ACTIONS(212),
    [anon_sym_char] = ACTIONS(212),
    [anon_sym_ref] = ACTIONS(212),
    [anon_sym_out] = ACTIONS(212),
    [anon_sym_this] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_bool] = ACTIONS(212),
    [anon_sym_decimal] = ACTIONS(212),
    [anon_sym_double] = ACTIONS(212),
    [anon_sym_float] = ACTIONS(212),
    [anon_sym_object] = ACTIONS(212),
    [anon_sym_string] = ACTIONS(212),
    [sym_identifier_name] = ACTIONS(216),
    [sym_comment] = ACTIONS(36),
  },
  [586] = {
    [anon_sym_COMMA] = ACTIONS(1165),
    [anon_sym_RPAREN] = ACTIONS(1165),
    [sym_params_keyword] = ACTIONS(1165),
    [anon_sym_LBRACK] = ACTIONS(1165),
    [sym_comment] = ACTIONS(36),
  },
  [587] = {
    [anon_sym_COMMA] = ACTIONS(1167),
    [anon_sym_RPAREN] = ACTIONS(1167),
    [sym_params_keyword] = ACTIONS(1167),
    [anon_sym_LBRACK] = ACTIONS(1167),
    [sym_comment] = ACTIONS(36),
  },
  [588] = {
    [anon_sym_RPAREN] = ACTIONS(1169),
    [sym_comment] = ACTIONS(36),
  },
  [589] = {
    [sym_equals_value_clause] = STATE(639),
    [anon_sym_COMMA] = ACTIONS(1167),
    [anon_sym_RPAREN] = ACTIONS(1167),
    [sym_params_keyword] = ACTIONS(1167),
    [anon_sym_LBRACK] = ACTIONS(1167),
    [anon_sym_EQ] = ACTIONS(493),
    [sym_comment] = ACTIONS(36),
  },
  [590] = {
    [anon_sym_RBRACE] = ACTIONS(1171),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [591] = {
    [ts_builtin_sym_end] = ACTIONS(1173),
    [anon_sym_using] = ACTIONS(1173),
    [anon_sym_namespace] = ACTIONS(1173),
    [anon_sym_RBRACE] = ACTIONS(1173),
    [anon_sym_class] = ACTIONS(1173),
    [anon_sym_unsafe] = ACTIONS(1173),
    [anon_sym_abstract] = ACTIONS(1173),
    [anon_sym_sealed] = ACTIONS(1173),
    [anon_sym_static] = ACTIONS(1173),
    [anon_sym_new] = ACTIONS(1173),
    [anon_sym_public] = ACTIONS(1173),
    [anon_sym_protected] = ACTIONS(1173),
    [anon_sym_internal] = ACTIONS(1173),
    [anon_sym_private] = ACTIONS(1173),
    [anon_sym_interface] = ACTIONS(1173),
    [anon_sym_struct] = ACTIONS(1173),
    [anon_sym_enum] = ACTIONS(1173),
    [anon_sym_delegate] = ACTIONS(1173),
    [anon_sym_LBRACK] = ACTIONS(1173),
    [sym_comment] = ACTIONS(36),
  },
  [592] = {
    [ts_builtin_sym_end] = ACTIONS(1175),
    [anon_sym_using] = ACTIONS(1175),
    [anon_sym_namespace] = ACTIONS(1175),
    [anon_sym_RBRACE] = ACTIONS(1175),
    [anon_sym_class] = ACTIONS(1175),
    [anon_sym_unsafe] = ACTIONS(1175),
    [anon_sym_abstract] = ACTIONS(1175),
    [anon_sym_sealed] = ACTIONS(1175),
    [anon_sym_static] = ACTIONS(1175),
    [anon_sym_new] = ACTIONS(1175),
    [anon_sym_public] = ACTIONS(1175),
    [anon_sym_protected] = ACTIONS(1175),
    [anon_sym_internal] = ACTIONS(1175),
    [anon_sym_private] = ACTIONS(1175),
    [anon_sym_interface] = ACTIONS(1175),
    [anon_sym_struct] = ACTIONS(1175),
    [anon_sym_enum] = ACTIONS(1175),
    [anon_sym_delegate] = ACTIONS(1175),
    [anon_sym_LBRACK] = ACTIONS(1175),
    [sym_comment] = ACTIONS(36),
  },
  [593] = {
    [ts_builtin_sym_end] = ACTIONS(1177),
    [anon_sym_using] = ACTIONS(1177),
    [anon_sym_namespace] = ACTIONS(1177),
    [anon_sym_RBRACE] = ACTIONS(1177),
    [anon_sym_class] = ACTIONS(1177),
    [anon_sym_unsafe] = ACTIONS(1177),
    [anon_sym_abstract] = ACTIONS(1177),
    [anon_sym_sealed] = ACTIONS(1177),
    [anon_sym_static] = ACTIONS(1177),
    [anon_sym_new] = ACTIONS(1177),
    [anon_sym_public] = ACTIONS(1177),
    [anon_sym_protected] = ACTIONS(1177),
    [anon_sym_internal] = ACTIONS(1177),
    [anon_sym_private] = ACTIONS(1177),
    [anon_sym_interface] = ACTIONS(1177),
    [anon_sym_struct] = ACTIONS(1177),
    [anon_sym_enum] = ACTIONS(1177),
    [anon_sym_delegate] = ACTIONS(1177),
    [anon_sym_LBRACK] = ACTIONS(1177),
    [sym_comment] = ACTIONS(36),
  },
  [594] = {
    [aux_sym_enum_declaration_repeat1] = STATE(641),
    [anon_sym_RBRACE] = ACTIONS(1171),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [595] = {
    [anon_sym_RBRACE] = ACTIONS(779),
    [anon_sym_class] = ACTIONS(1179),
    [anon_sym_unsafe] = ACTIONS(1179),
    [anon_sym_abstract] = ACTIONS(1179),
    [anon_sym_sealed] = ACTIONS(1179),
    [anon_sym_static] = ACTIONS(1179),
    [anon_sym_new] = ACTIONS(1179),
    [anon_sym_public] = ACTIONS(1179),
    [anon_sym_protected] = ACTIONS(1179),
    [anon_sym_internal] = ACTIONS(1179),
    [anon_sym_private] = ACTIONS(1179),
    [anon_sym_interface] = ACTIONS(1179),
    [anon_sym_struct] = ACTIONS(1179),
    [anon_sym_enum] = ACTIONS(1179),
    [anon_sym_sbyte] = ACTIONS(1179),
    [anon_sym_byte] = ACTIONS(1179),
    [anon_sym_short] = ACTIONS(1179),
    [anon_sym_ushort] = ACTIONS(1179),
    [anon_sym_int] = ACTIONS(1179),
    [anon_sym_uint] = ACTIONS(1179),
    [anon_sym_long] = ACTIONS(1179),
    [anon_sym_ulong] = ACTIONS(1179),
    [anon_sym_char] = ACTIONS(1179),
    [anon_sym_delegate] = ACTIONS(1179),
    [sym_void_keyword] = ACTIONS(1179),
    [anon_sym_LBRACK] = ACTIONS(779),
    [sym_const_keyword] = ACTIONS(1179),
    [anon_sym_readonly] = ACTIONS(1179),
    [anon_sym_volatile] = ACTIONS(1179),
    [anon_sym_bool] = ACTIONS(1179),
    [anon_sym_decimal] = ACTIONS(1179),
    [anon_sym_double] = ACTIONS(1179),
    [anon_sym_float] = ACTIONS(1179),
    [anon_sym_object] = ACTIONS(1179),
    [anon_sym_string] = ACTIONS(1179),
    [sym_identifier_name] = ACTIONS(1181),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1179),
  },
  [596] = {
    [anon_sym_RBRACE] = ACTIONS(783),
    [anon_sym_class] = ACTIONS(1183),
    [anon_sym_unsafe] = ACTIONS(1183),
    [anon_sym_abstract] = ACTIONS(1183),
    [anon_sym_sealed] = ACTIONS(1183),
    [anon_sym_static] = ACTIONS(1183),
    [anon_sym_new] = ACTIONS(1183),
    [anon_sym_public] = ACTIONS(1183),
    [anon_sym_protected] = ACTIONS(1183),
    [anon_sym_internal] = ACTIONS(1183),
    [anon_sym_private] = ACTIONS(1183),
    [anon_sym_interface] = ACTIONS(1183),
    [anon_sym_struct] = ACTIONS(1183),
    [anon_sym_enum] = ACTIONS(1183),
    [anon_sym_sbyte] = ACTIONS(1183),
    [anon_sym_byte] = ACTIONS(1183),
    [anon_sym_short] = ACTIONS(1183),
    [anon_sym_ushort] = ACTIONS(1183),
    [anon_sym_int] = ACTIONS(1183),
    [anon_sym_uint] = ACTIONS(1183),
    [anon_sym_long] = ACTIONS(1183),
    [anon_sym_ulong] = ACTIONS(1183),
    [anon_sym_char] = ACTIONS(1183),
    [anon_sym_delegate] = ACTIONS(1183),
    [sym_void_keyword] = ACTIONS(1183),
    [anon_sym_LBRACK] = ACTIONS(783),
    [sym_const_keyword] = ACTIONS(1183),
    [anon_sym_readonly] = ACTIONS(1183),
    [anon_sym_volatile] = ACTIONS(1183),
    [anon_sym_bool] = ACTIONS(1183),
    [anon_sym_decimal] = ACTIONS(1183),
    [anon_sym_double] = ACTIONS(1183),
    [anon_sym_float] = ACTIONS(1183),
    [anon_sym_object] = ACTIONS(1183),
    [anon_sym_string] = ACTIONS(1183),
    [sym_identifier_name] = ACTIONS(1185),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1183),
  },
  [597] = {
    [anon_sym_RBRACE] = ACTIONS(813),
    [anon_sym_class] = ACTIONS(1187),
    [anon_sym_unsafe] = ACTIONS(1187),
    [anon_sym_abstract] = ACTIONS(1187),
    [anon_sym_sealed] = ACTIONS(1187),
    [anon_sym_static] = ACTIONS(1187),
    [anon_sym_new] = ACTIONS(1187),
    [anon_sym_public] = ACTIONS(1187),
    [anon_sym_protected] = ACTIONS(1187),
    [anon_sym_internal] = ACTIONS(1187),
    [anon_sym_private] = ACTIONS(1187),
    [anon_sym_interface] = ACTIONS(1187),
    [anon_sym_struct] = ACTIONS(1187),
    [anon_sym_enum] = ACTIONS(1187),
    [anon_sym_sbyte] = ACTIONS(1187),
    [anon_sym_byte] = ACTIONS(1187),
    [anon_sym_short] = ACTIONS(1187),
    [anon_sym_ushort] = ACTIONS(1187),
    [anon_sym_int] = ACTIONS(1187),
    [anon_sym_uint] = ACTIONS(1187),
    [anon_sym_long] = ACTIONS(1187),
    [anon_sym_ulong] = ACTIONS(1187),
    [anon_sym_char] = ACTIONS(1187),
    [anon_sym_delegate] = ACTIONS(1187),
    [sym_void_keyword] = ACTIONS(1187),
    [anon_sym_LBRACK] = ACTIONS(813),
    [sym_const_keyword] = ACTIONS(1187),
    [anon_sym_readonly] = ACTIONS(1187),
    [anon_sym_volatile] = ACTIONS(1187),
    [anon_sym_bool] = ACTIONS(1187),
    [anon_sym_decimal] = ACTIONS(1187),
    [anon_sym_double] = ACTIONS(1187),
    [anon_sym_float] = ACTIONS(1187),
    [anon_sym_object] = ACTIONS(1187),
    [anon_sym_string] = ACTIONS(1187),
    [sym_identifier_name] = ACTIONS(1189),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1187),
  },
  [598] = {
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_class] = ACTIONS(1191),
    [anon_sym_unsafe] = ACTIONS(1191),
    [anon_sym_abstract] = ACTIONS(1191),
    [anon_sym_sealed] = ACTIONS(1191),
    [anon_sym_static] = ACTIONS(1191),
    [anon_sym_new] = ACTIONS(1191),
    [anon_sym_public] = ACTIONS(1191),
    [anon_sym_protected] = ACTIONS(1191),
    [anon_sym_internal] = ACTIONS(1191),
    [anon_sym_private] = ACTIONS(1191),
    [anon_sym_interface] = ACTIONS(1191),
    [anon_sym_struct] = ACTIONS(1191),
    [anon_sym_enum] = ACTIONS(1191),
    [anon_sym_sbyte] = ACTIONS(1191),
    [anon_sym_byte] = ACTIONS(1191),
    [anon_sym_short] = ACTIONS(1191),
    [anon_sym_ushort] = ACTIONS(1191),
    [anon_sym_int] = ACTIONS(1191),
    [anon_sym_uint] = ACTIONS(1191),
    [anon_sym_long] = ACTIONS(1191),
    [anon_sym_ulong] = ACTIONS(1191),
    [anon_sym_char] = ACTIONS(1191),
    [anon_sym_delegate] = ACTIONS(1191),
    [sym_void_keyword] = ACTIONS(1191),
    [anon_sym_LBRACK] = ACTIONS(855),
    [sym_const_keyword] = ACTIONS(1191),
    [anon_sym_readonly] = ACTIONS(1191),
    [anon_sym_volatile] = ACTIONS(1191),
    [anon_sym_bool] = ACTIONS(1191),
    [anon_sym_decimal] = ACTIONS(1191),
    [anon_sym_double] = ACTIONS(1191),
    [anon_sym_float] = ACTIONS(1191),
    [anon_sym_object] = ACTIONS(1191),
    [anon_sym_string] = ACTIONS(1191),
    [sym_identifier_name] = ACTIONS(1193),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1191),
  },
  [599] = {
    [anon_sym_SEMI] = ACTIONS(1195),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_class] = ACTIONS(1191),
    [anon_sym_unsafe] = ACTIONS(1191),
    [anon_sym_abstract] = ACTIONS(1191),
    [anon_sym_sealed] = ACTIONS(1191),
    [anon_sym_static] = ACTIONS(1191),
    [anon_sym_new] = ACTIONS(1191),
    [anon_sym_public] = ACTIONS(1191),
    [anon_sym_protected] = ACTIONS(1191),
    [anon_sym_internal] = ACTIONS(1191),
    [anon_sym_private] = ACTIONS(1191),
    [anon_sym_interface] = ACTIONS(1191),
    [anon_sym_struct] = ACTIONS(1191),
    [anon_sym_enum] = ACTIONS(1191),
    [anon_sym_sbyte] = ACTIONS(1191),
    [anon_sym_byte] = ACTIONS(1191),
    [anon_sym_short] = ACTIONS(1191),
    [anon_sym_ushort] = ACTIONS(1191),
    [anon_sym_int] = ACTIONS(1191),
    [anon_sym_uint] = ACTIONS(1191),
    [anon_sym_long] = ACTIONS(1191),
    [anon_sym_ulong] = ACTIONS(1191),
    [anon_sym_char] = ACTIONS(1191),
    [anon_sym_delegate] = ACTIONS(1191),
    [sym_void_keyword] = ACTIONS(1191),
    [anon_sym_LBRACK] = ACTIONS(855),
    [sym_const_keyword] = ACTIONS(1191),
    [anon_sym_readonly] = ACTIONS(1191),
    [anon_sym_volatile] = ACTIONS(1191),
    [anon_sym_bool] = ACTIONS(1191),
    [anon_sym_decimal] = ACTIONS(1191),
    [anon_sym_double] = ACTIONS(1191),
    [anon_sym_float] = ACTIONS(1191),
    [anon_sym_object] = ACTIONS(1191),
    [anon_sym_string] = ACTIONS(1191),
    [sym_identifier_name] = ACTIONS(1193),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1191),
  },
  [600] = {
    [aux_sym_enum_declaration_repeat1] = STATE(644),
    [anon_sym_RBRACE] = ACTIONS(1197),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [601] = {
    [anon_sym_RBRACE] = ACTIONS(1199),
    [anon_sym_class] = ACTIONS(1201),
    [anon_sym_unsafe] = ACTIONS(1201),
    [anon_sym_abstract] = ACTIONS(1201),
    [anon_sym_sealed] = ACTIONS(1201),
    [anon_sym_static] = ACTIONS(1201),
    [anon_sym_new] = ACTIONS(1201),
    [anon_sym_public] = ACTIONS(1201),
    [anon_sym_protected] = ACTIONS(1201),
    [anon_sym_internal] = ACTIONS(1201),
    [anon_sym_private] = ACTIONS(1201),
    [anon_sym_interface] = ACTIONS(1201),
    [anon_sym_struct] = ACTIONS(1201),
    [anon_sym_enum] = ACTIONS(1201),
    [anon_sym_sbyte] = ACTIONS(1201),
    [anon_sym_byte] = ACTIONS(1201),
    [anon_sym_short] = ACTIONS(1201),
    [anon_sym_ushort] = ACTIONS(1201),
    [anon_sym_int] = ACTIONS(1201),
    [anon_sym_uint] = ACTIONS(1201),
    [anon_sym_long] = ACTIONS(1201),
    [anon_sym_ulong] = ACTIONS(1201),
    [anon_sym_char] = ACTIONS(1201),
    [anon_sym_delegate] = ACTIONS(1201),
    [sym_void_keyword] = ACTIONS(1201),
    [anon_sym_LBRACK] = ACTIONS(1199),
    [sym_const_keyword] = ACTIONS(1201),
    [anon_sym_readonly] = ACTIONS(1201),
    [anon_sym_volatile] = ACTIONS(1201),
    [anon_sym_bool] = ACTIONS(1201),
    [anon_sym_decimal] = ACTIONS(1201),
    [anon_sym_double] = ACTIONS(1201),
    [anon_sym_float] = ACTIONS(1201),
    [anon_sym_object] = ACTIONS(1201),
    [anon_sym_string] = ACTIONS(1201),
    [sym_identifier_name] = ACTIONS(1203),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1201),
  },
  [602] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1205),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [603] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1207),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [604] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1209),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [605] = {
    [anon_sym_RBRACE] = ACTIONS(1197),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [606] = {
    [sym_enum_member_declaration] = STATE(648),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [607] = {
    [anon_sym_RBRACE] = ACTIONS(891),
    [anon_sym_class] = ACTIONS(1211),
    [anon_sym_unsafe] = ACTIONS(1211),
    [anon_sym_abstract] = ACTIONS(1211),
    [anon_sym_sealed] = ACTIONS(1211),
    [anon_sym_static] = ACTIONS(1211),
    [anon_sym_new] = ACTIONS(1211),
    [anon_sym_public] = ACTIONS(1211),
    [anon_sym_protected] = ACTIONS(1211),
    [anon_sym_internal] = ACTIONS(1211),
    [anon_sym_private] = ACTIONS(1211),
    [anon_sym_interface] = ACTIONS(1211),
    [anon_sym_struct] = ACTIONS(1211),
    [anon_sym_enum] = ACTIONS(1211),
    [anon_sym_sbyte] = ACTIONS(1211),
    [anon_sym_byte] = ACTIONS(1211),
    [anon_sym_short] = ACTIONS(1211),
    [anon_sym_ushort] = ACTIONS(1211),
    [anon_sym_int] = ACTIONS(1211),
    [anon_sym_uint] = ACTIONS(1211),
    [anon_sym_long] = ACTIONS(1211),
    [anon_sym_ulong] = ACTIONS(1211),
    [anon_sym_char] = ACTIONS(1211),
    [anon_sym_delegate] = ACTIONS(1211),
    [sym_void_keyword] = ACTIONS(1211),
    [anon_sym_LBRACK] = ACTIONS(891),
    [sym_const_keyword] = ACTIONS(1211),
    [anon_sym_readonly] = ACTIONS(1211),
    [anon_sym_volatile] = ACTIONS(1211),
    [anon_sym_bool] = ACTIONS(1211),
    [anon_sym_decimal] = ACTIONS(1211),
    [anon_sym_double] = ACTIONS(1211),
    [anon_sym_float] = ACTIONS(1211),
    [anon_sym_object] = ACTIONS(1211),
    [anon_sym_string] = ACTIONS(1211),
    [sym_identifier_name] = ACTIONS(1213),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1211),
  },
  [608] = {
    [anon_sym_RBRACE] = ACTIONS(1215),
    [anon_sym_class] = ACTIONS(1217),
    [anon_sym_unsafe] = ACTIONS(1217),
    [anon_sym_abstract] = ACTIONS(1217),
    [anon_sym_sealed] = ACTIONS(1217),
    [anon_sym_static] = ACTIONS(1217),
    [anon_sym_new] = ACTIONS(1217),
    [anon_sym_public] = ACTIONS(1217),
    [anon_sym_protected] = ACTIONS(1217),
    [anon_sym_internal] = ACTIONS(1217),
    [anon_sym_private] = ACTIONS(1217),
    [anon_sym_interface] = ACTIONS(1217),
    [anon_sym_struct] = ACTIONS(1217),
    [anon_sym_enum] = ACTIONS(1217),
    [anon_sym_sbyte] = ACTIONS(1217),
    [anon_sym_byte] = ACTIONS(1217),
    [anon_sym_short] = ACTIONS(1217),
    [anon_sym_ushort] = ACTIONS(1217),
    [anon_sym_int] = ACTIONS(1217),
    [anon_sym_uint] = ACTIONS(1217),
    [anon_sym_long] = ACTIONS(1217),
    [anon_sym_ulong] = ACTIONS(1217),
    [anon_sym_char] = ACTIONS(1217),
    [anon_sym_delegate] = ACTIONS(1217),
    [sym_void_keyword] = ACTIONS(1217),
    [anon_sym_LBRACK] = ACTIONS(1215),
    [sym_const_keyword] = ACTIONS(1217),
    [anon_sym_readonly] = ACTIONS(1217),
    [anon_sym_volatile] = ACTIONS(1217),
    [anon_sym_bool] = ACTIONS(1217),
    [anon_sym_decimal] = ACTIONS(1217),
    [anon_sym_double] = ACTIONS(1217),
    [anon_sym_float] = ACTIONS(1217),
    [anon_sym_object] = ACTIONS(1217),
    [anon_sym_string] = ACTIONS(1217),
    [sym_identifier_name] = ACTIONS(1219),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1217),
  },
  [609] = {
    [anon_sym_SEMI] = ACTIONS(1221),
    [anon_sym_RBRACE] = ACTIONS(1221),
    [sym_comment] = ACTIONS(36),
  },
  [610] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(649),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1205),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [611] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(650),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1207),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [612] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(651),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1209),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [613] = {
    [anon_sym_LBRACE] = ACTIONS(1223),
    [sym_comment] = ACTIONS(36),
  },
  [614] = {
    [anon_sym_SEMI] = ACTIONS(1225),
    [sym_comment] = ACTIONS(36),
  },
  [615] = {
    [sym_statement_block] = STATE(654),
    [anon_sym_LBRACE] = ACTIONS(753),
    [sym_comment] = ACTIONS(36),
  },
  [616] = {
    [anon_sym_RBRACE] = ACTIONS(779),
    [anon_sym_class] = ACTIONS(1179),
    [anon_sym_unsafe] = ACTIONS(1179),
    [anon_sym_abstract] = ACTIONS(1179),
    [anon_sym_sealed] = ACTIONS(1179),
    [anon_sym_static] = ACTIONS(1179),
    [anon_sym_new] = ACTIONS(1179),
    [anon_sym_public] = ACTIONS(1179),
    [anon_sym_protected] = ACTIONS(1179),
    [anon_sym_internal] = ACTIONS(1179),
    [anon_sym_private] = ACTIONS(1179),
    [anon_sym_interface] = ACTIONS(1179),
    [anon_sym_struct] = ACTIONS(1179),
    [anon_sym_enum] = ACTIONS(1179),
    [anon_sym_sbyte] = ACTIONS(1179),
    [anon_sym_byte] = ACTIONS(1179),
    [anon_sym_short] = ACTIONS(1179),
    [anon_sym_ushort] = ACTIONS(1179),
    [anon_sym_int] = ACTIONS(1179),
    [anon_sym_uint] = ACTIONS(1179),
    [anon_sym_long] = ACTIONS(1179),
    [anon_sym_ulong] = ACTIONS(1179),
    [anon_sym_char] = ACTIONS(1179),
    [anon_sym_delegate] = ACTIONS(1179),
    [anon_sym_LBRACK] = ACTIONS(779),
    [sym_const_keyword] = ACTIONS(1179),
    [anon_sym_readonly] = ACTIONS(1179),
    [anon_sym_volatile] = ACTIONS(1179),
    [anon_sym_bool] = ACTIONS(1179),
    [anon_sym_decimal] = ACTIONS(1179),
    [anon_sym_double] = ACTIONS(1179),
    [anon_sym_float] = ACTIONS(1179),
    [anon_sym_object] = ACTIONS(1179),
    [anon_sym_string] = ACTIONS(1179),
    [sym_identifier_name] = ACTIONS(1181),
    [sym_comment] = ACTIONS(36),
  },
  [617] = {
    [anon_sym_RBRACE] = ACTIONS(783),
    [anon_sym_class] = ACTIONS(1183),
    [anon_sym_unsafe] = ACTIONS(1183),
    [anon_sym_abstract] = ACTIONS(1183),
    [anon_sym_sealed] = ACTIONS(1183),
    [anon_sym_static] = ACTIONS(1183),
    [anon_sym_new] = ACTIONS(1183),
    [anon_sym_public] = ACTIONS(1183),
    [anon_sym_protected] = ACTIONS(1183),
    [anon_sym_internal] = ACTIONS(1183),
    [anon_sym_private] = ACTIONS(1183),
    [anon_sym_interface] = ACTIONS(1183),
    [anon_sym_struct] = ACTIONS(1183),
    [anon_sym_enum] = ACTIONS(1183),
    [anon_sym_sbyte] = ACTIONS(1183),
    [anon_sym_byte] = ACTIONS(1183),
    [anon_sym_short] = ACTIONS(1183),
    [anon_sym_ushort] = ACTIONS(1183),
    [anon_sym_int] = ACTIONS(1183),
    [anon_sym_uint] = ACTIONS(1183),
    [anon_sym_long] = ACTIONS(1183),
    [anon_sym_ulong] = ACTIONS(1183),
    [anon_sym_char] = ACTIONS(1183),
    [anon_sym_delegate] = ACTIONS(1183),
    [anon_sym_LBRACK] = ACTIONS(783),
    [sym_const_keyword] = ACTIONS(1183),
    [anon_sym_readonly] = ACTIONS(1183),
    [anon_sym_volatile] = ACTIONS(1183),
    [anon_sym_bool] = ACTIONS(1183),
    [anon_sym_decimal] = ACTIONS(1183),
    [anon_sym_double] = ACTIONS(1183),
    [anon_sym_float] = ACTIONS(1183),
    [anon_sym_object] = ACTIONS(1183),
    [anon_sym_string] = ACTIONS(1183),
    [sym_identifier_name] = ACTIONS(1185),
    [sym_comment] = ACTIONS(36),
  },
  [618] = {
    [anon_sym_RBRACE] = ACTIONS(813),
    [anon_sym_class] = ACTIONS(1187),
    [anon_sym_unsafe] = ACTIONS(1187),
    [anon_sym_abstract] = ACTIONS(1187),
    [anon_sym_sealed] = ACTIONS(1187),
    [anon_sym_static] = ACTIONS(1187),
    [anon_sym_new] = ACTIONS(1187),
    [anon_sym_public] = ACTIONS(1187),
    [anon_sym_protected] = ACTIONS(1187),
    [anon_sym_internal] = ACTIONS(1187),
    [anon_sym_private] = ACTIONS(1187),
    [anon_sym_interface] = ACTIONS(1187),
    [anon_sym_struct] = ACTIONS(1187),
    [anon_sym_enum] = ACTIONS(1187),
    [anon_sym_sbyte] = ACTIONS(1187),
    [anon_sym_byte] = ACTIONS(1187),
    [anon_sym_short] = ACTIONS(1187),
    [anon_sym_ushort] = ACTIONS(1187),
    [anon_sym_int] = ACTIONS(1187),
    [anon_sym_uint] = ACTIONS(1187),
    [anon_sym_long] = ACTIONS(1187),
    [anon_sym_ulong] = ACTIONS(1187),
    [anon_sym_char] = ACTIONS(1187),
    [anon_sym_delegate] = ACTIONS(1187),
    [anon_sym_LBRACK] = ACTIONS(813),
    [sym_const_keyword] = ACTIONS(1187),
    [anon_sym_readonly] = ACTIONS(1187),
    [anon_sym_volatile] = ACTIONS(1187),
    [anon_sym_bool] = ACTIONS(1187),
    [anon_sym_decimal] = ACTIONS(1187),
    [anon_sym_double] = ACTIONS(1187),
    [anon_sym_float] = ACTIONS(1187),
    [anon_sym_object] = ACTIONS(1187),
    [anon_sym_string] = ACTIONS(1187),
    [sym_identifier_name] = ACTIONS(1189),
    [sym_comment] = ACTIONS(36),
  },
  [619] = {
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_class] = ACTIONS(1191),
    [anon_sym_unsafe] = ACTIONS(1191),
    [anon_sym_abstract] = ACTIONS(1191),
    [anon_sym_sealed] = ACTIONS(1191),
    [anon_sym_static] = ACTIONS(1191),
    [anon_sym_new] = ACTIONS(1191),
    [anon_sym_public] = ACTIONS(1191),
    [anon_sym_protected] = ACTIONS(1191),
    [anon_sym_internal] = ACTIONS(1191),
    [anon_sym_private] = ACTIONS(1191),
    [anon_sym_interface] = ACTIONS(1191),
    [anon_sym_struct] = ACTIONS(1191),
    [anon_sym_enum] = ACTIONS(1191),
    [anon_sym_sbyte] = ACTIONS(1191),
    [anon_sym_byte] = ACTIONS(1191),
    [anon_sym_short] = ACTIONS(1191),
    [anon_sym_ushort] = ACTIONS(1191),
    [anon_sym_int] = ACTIONS(1191),
    [anon_sym_uint] = ACTIONS(1191),
    [anon_sym_long] = ACTIONS(1191),
    [anon_sym_ulong] = ACTIONS(1191),
    [anon_sym_char] = ACTIONS(1191),
    [anon_sym_delegate] = ACTIONS(1191),
    [anon_sym_LBRACK] = ACTIONS(855),
    [sym_const_keyword] = ACTIONS(1191),
    [anon_sym_readonly] = ACTIONS(1191),
    [anon_sym_volatile] = ACTIONS(1191),
    [anon_sym_bool] = ACTIONS(1191),
    [anon_sym_decimal] = ACTIONS(1191),
    [anon_sym_double] = ACTIONS(1191),
    [anon_sym_float] = ACTIONS(1191),
    [anon_sym_object] = ACTIONS(1191),
    [anon_sym_string] = ACTIONS(1191),
    [sym_identifier_name] = ACTIONS(1193),
    [sym_comment] = ACTIONS(36),
  },
  [620] = {
    [anon_sym_SEMI] = ACTIONS(1227),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_class] = ACTIONS(1191),
    [anon_sym_unsafe] = ACTIONS(1191),
    [anon_sym_abstract] = ACTIONS(1191),
    [anon_sym_sealed] = ACTIONS(1191),
    [anon_sym_static] = ACTIONS(1191),
    [anon_sym_new] = ACTIONS(1191),
    [anon_sym_public] = ACTIONS(1191),
    [anon_sym_protected] = ACTIONS(1191),
    [anon_sym_internal] = ACTIONS(1191),
    [anon_sym_private] = ACTIONS(1191),
    [anon_sym_interface] = ACTIONS(1191),
    [anon_sym_struct] = ACTIONS(1191),
    [anon_sym_enum] = ACTIONS(1191),
    [anon_sym_sbyte] = ACTIONS(1191),
    [anon_sym_byte] = ACTIONS(1191),
    [anon_sym_short] = ACTIONS(1191),
    [anon_sym_ushort] = ACTIONS(1191),
    [anon_sym_int] = ACTIONS(1191),
    [anon_sym_uint] = ACTIONS(1191),
    [anon_sym_long] = ACTIONS(1191),
    [anon_sym_ulong] = ACTIONS(1191),
    [anon_sym_char] = ACTIONS(1191),
    [anon_sym_delegate] = ACTIONS(1191),
    [anon_sym_LBRACK] = ACTIONS(855),
    [sym_const_keyword] = ACTIONS(1191),
    [anon_sym_readonly] = ACTIONS(1191),
    [anon_sym_volatile] = ACTIONS(1191),
    [anon_sym_bool] = ACTIONS(1191),
    [anon_sym_decimal] = ACTIONS(1191),
    [anon_sym_double] = ACTIONS(1191),
    [anon_sym_float] = ACTIONS(1191),
    [anon_sym_object] = ACTIONS(1191),
    [anon_sym_string] = ACTIONS(1191),
    [sym_identifier_name] = ACTIONS(1193),
    [sym_comment] = ACTIONS(36),
  },
  [621] = {
    [aux_sym_enum_declaration_repeat1] = STATE(657),
    [anon_sym_RBRACE] = ACTIONS(1229),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [622] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1231),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [623] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1233),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [624] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1235),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [625] = {
    [anon_sym_RBRACE] = ACTIONS(1229),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [626] = {
    [sym_enum_member_declaration] = STATE(661),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [627] = {
    [anon_sym_RBRACE] = ACTIONS(891),
    [anon_sym_class] = ACTIONS(1211),
    [anon_sym_unsafe] = ACTIONS(1211),
    [anon_sym_abstract] = ACTIONS(1211),
    [anon_sym_sealed] = ACTIONS(1211),
    [anon_sym_static] = ACTIONS(1211),
    [anon_sym_new] = ACTIONS(1211),
    [anon_sym_public] = ACTIONS(1211),
    [anon_sym_protected] = ACTIONS(1211),
    [anon_sym_internal] = ACTIONS(1211),
    [anon_sym_private] = ACTIONS(1211),
    [anon_sym_interface] = ACTIONS(1211),
    [anon_sym_struct] = ACTIONS(1211),
    [anon_sym_enum] = ACTIONS(1211),
    [anon_sym_sbyte] = ACTIONS(1211),
    [anon_sym_byte] = ACTIONS(1211),
    [anon_sym_short] = ACTIONS(1211),
    [anon_sym_ushort] = ACTIONS(1211),
    [anon_sym_int] = ACTIONS(1211),
    [anon_sym_uint] = ACTIONS(1211),
    [anon_sym_long] = ACTIONS(1211),
    [anon_sym_ulong] = ACTIONS(1211),
    [anon_sym_char] = ACTIONS(1211),
    [anon_sym_delegate] = ACTIONS(1211),
    [anon_sym_LBRACK] = ACTIONS(891),
    [sym_const_keyword] = ACTIONS(1211),
    [anon_sym_readonly] = ACTIONS(1211),
    [anon_sym_volatile] = ACTIONS(1211),
    [anon_sym_bool] = ACTIONS(1211),
    [anon_sym_decimal] = ACTIONS(1211),
    [anon_sym_double] = ACTIONS(1211),
    [anon_sym_float] = ACTIONS(1211),
    [anon_sym_object] = ACTIONS(1211),
    [anon_sym_string] = ACTIONS(1211),
    [sym_identifier_name] = ACTIONS(1213),
    [sym_comment] = ACTIONS(36),
  },
  [628] = {
    [sym__type_declaration] = STATE(135),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(135),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(135),
    [sym_method_modifiers] = STATE(148),
    [aux_sym_class_declaration_repeat1] = STATE(662),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1231),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [629] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(158),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(663),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1233),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [630] = {
    [sym__type_declaration] = STATE(173),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(173),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_struct_declaration_repeat1] = STATE(664),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1235),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [631] = {
    [anon_sym_LBRACE] = ACTIONS(1237),
    [sym_comment] = ACTIONS(36),
  },
  [632] = {
    [anon_sym_SEMI] = ACTIONS(1239),
    [sym_comment] = ACTIONS(36),
  },
  [633] = {
    [anon_sym_SEMI] = ACTIONS(1241),
    [anon_sym_RBRACE] = ACTIONS(1241),
    [anon_sym_COMMA] = ACTIONS(1241),
    [anon_sym_RPAREN] = ACTIONS(1241),
    [sym_params_keyword] = ACTIONS(1241),
    [anon_sym_LBRACK] = ACTIONS(1241),
    [sym_comment] = ACTIONS(36),
  },
  [634] = {
    [anon_sym_SEMI] = ACTIONS(1241),
    [anon_sym_RBRACE] = ACTIONS(1241),
    [anon_sym_COMMA] = ACTIONS(1241),
    [anon_sym_RPAREN] = ACTIONS(1241),
    [sym_params_keyword] = ACTIONS(1241),
    [anon_sym_LBRACK] = ACTIONS(1241),
    [sym__real_type_suffix] = ACTIONS(1243),
    [sym_comment] = ACTIONS(36),
  },
  [635] = {
    [ts_builtin_sym_end] = ACTIONS(1245),
    [anon_sym_using] = ACTIONS(1245),
    [anon_sym_namespace] = ACTIONS(1245),
    [anon_sym_RBRACE] = ACTIONS(1245),
    [anon_sym_class] = ACTIONS(1245),
    [anon_sym_unsafe] = ACTIONS(1245),
    [anon_sym_abstract] = ACTIONS(1245),
    [anon_sym_sealed] = ACTIONS(1245),
    [anon_sym_static] = ACTIONS(1245),
    [anon_sym_new] = ACTIONS(1245),
    [anon_sym_public] = ACTIONS(1245),
    [anon_sym_protected] = ACTIONS(1245),
    [anon_sym_internal] = ACTIONS(1245),
    [anon_sym_private] = ACTIONS(1245),
    [anon_sym_interface] = ACTIONS(1245),
    [anon_sym_struct] = ACTIONS(1245),
    [anon_sym_enum] = ACTIONS(1245),
    [anon_sym_delegate] = ACTIONS(1245),
    [anon_sym_LBRACK] = ACTIONS(1245),
    [sym_comment] = ACTIONS(36),
  },
  [636] = {
    [anon_sym_COMMA] = ACTIONS(1247),
    [anon_sym_RBRACK] = ACTIONS(1247),
    [sym_comment] = ACTIONS(36),
  },
  [637] = {
    [sym_identifier_name] = ACTIONS(1249),
    [sym_comment] = ACTIONS(36),
  },
  [638] = {
    [anon_sym_sbyte] = ACTIONS(304),
    [anon_sym_byte] = ACTIONS(304),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_ushort] = ACTIONS(304),
    [anon_sym_int] = ACTIONS(304),
    [anon_sym_uint] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(304),
    [anon_sym_ulong] = ACTIONS(304),
    [anon_sym_char] = ACTIONS(304),
    [anon_sym_ref] = ACTIONS(304),
    [anon_sym_out] = ACTIONS(304),
    [anon_sym_this] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_bool] = ACTIONS(304),
    [anon_sym_decimal] = ACTIONS(304),
    [anon_sym_double] = ACTIONS(304),
    [anon_sym_float] = ACTIONS(304),
    [anon_sym_object] = ACTIONS(304),
    [anon_sym_string] = ACTIONS(304),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [639] = {
    [anon_sym_COMMA] = ACTIONS(1251),
    [anon_sym_RPAREN] = ACTIONS(1251),
    [sym_params_keyword] = ACTIONS(1251),
    [anon_sym_LBRACK] = ACTIONS(1251),
    [sym_comment] = ACTIONS(36),
  },
  [640] = {
    [ts_builtin_sym_end] = ACTIONS(1245),
    [anon_sym_SEMI] = ACTIONS(1253),
    [anon_sym_using] = ACTIONS(1245),
    [anon_sym_namespace] = ACTIONS(1245),
    [anon_sym_RBRACE] = ACTIONS(1245),
    [anon_sym_class] = ACTIONS(1245),
    [anon_sym_unsafe] = ACTIONS(1245),
    [anon_sym_abstract] = ACTIONS(1245),
    [anon_sym_sealed] = ACTIONS(1245),
    [anon_sym_static] = ACTIONS(1245),
    [anon_sym_new] = ACTIONS(1245),
    [anon_sym_public] = ACTIONS(1245),
    [anon_sym_protected] = ACTIONS(1245),
    [anon_sym_internal] = ACTIONS(1245),
    [anon_sym_private] = ACTIONS(1245),
    [anon_sym_interface] = ACTIONS(1245),
    [anon_sym_struct] = ACTIONS(1245),
    [anon_sym_enum] = ACTIONS(1245),
    [anon_sym_delegate] = ACTIONS(1245),
    [anon_sym_LBRACK] = ACTIONS(1245),
    [sym_comment] = ACTIONS(36),
  },
  [641] = {
    [anon_sym_RBRACE] = ACTIONS(1255),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [642] = {
    [anon_sym_RBRACE] = ACTIONS(1009),
    [anon_sym_class] = ACTIONS(1257),
    [anon_sym_unsafe] = ACTIONS(1257),
    [anon_sym_abstract] = ACTIONS(1257),
    [anon_sym_sealed] = ACTIONS(1257),
    [anon_sym_static] = ACTIONS(1257),
    [anon_sym_new] = ACTIONS(1257),
    [anon_sym_public] = ACTIONS(1257),
    [anon_sym_protected] = ACTIONS(1257),
    [anon_sym_internal] = ACTIONS(1257),
    [anon_sym_private] = ACTIONS(1257),
    [anon_sym_interface] = ACTIONS(1257),
    [anon_sym_struct] = ACTIONS(1257),
    [anon_sym_enum] = ACTIONS(1257),
    [anon_sym_sbyte] = ACTIONS(1257),
    [anon_sym_byte] = ACTIONS(1257),
    [anon_sym_short] = ACTIONS(1257),
    [anon_sym_ushort] = ACTIONS(1257),
    [anon_sym_int] = ACTIONS(1257),
    [anon_sym_uint] = ACTIONS(1257),
    [anon_sym_long] = ACTIONS(1257),
    [anon_sym_ulong] = ACTIONS(1257),
    [anon_sym_char] = ACTIONS(1257),
    [anon_sym_delegate] = ACTIONS(1257),
    [sym_void_keyword] = ACTIONS(1257),
    [anon_sym_LBRACK] = ACTIONS(1009),
    [sym_const_keyword] = ACTIONS(1257),
    [anon_sym_readonly] = ACTIONS(1257),
    [anon_sym_volatile] = ACTIONS(1257),
    [anon_sym_bool] = ACTIONS(1257),
    [anon_sym_decimal] = ACTIONS(1257),
    [anon_sym_double] = ACTIONS(1257),
    [anon_sym_float] = ACTIONS(1257),
    [anon_sym_object] = ACTIONS(1257),
    [anon_sym_string] = ACTIONS(1257),
    [sym_identifier_name] = ACTIONS(1259),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1257),
  },
  [643] = {
    [anon_sym_SEMI] = ACTIONS(1261),
    [anon_sym_RBRACE] = ACTIONS(1009),
    [anon_sym_class] = ACTIONS(1257),
    [anon_sym_unsafe] = ACTIONS(1257),
    [anon_sym_abstract] = ACTIONS(1257),
    [anon_sym_sealed] = ACTIONS(1257),
    [anon_sym_static] = ACTIONS(1257),
    [anon_sym_new] = ACTIONS(1257),
    [anon_sym_public] = ACTIONS(1257),
    [anon_sym_protected] = ACTIONS(1257),
    [anon_sym_internal] = ACTIONS(1257),
    [anon_sym_private] = ACTIONS(1257),
    [anon_sym_interface] = ACTIONS(1257),
    [anon_sym_struct] = ACTIONS(1257),
    [anon_sym_enum] = ACTIONS(1257),
    [anon_sym_sbyte] = ACTIONS(1257),
    [anon_sym_byte] = ACTIONS(1257),
    [anon_sym_short] = ACTIONS(1257),
    [anon_sym_ushort] = ACTIONS(1257),
    [anon_sym_int] = ACTIONS(1257),
    [anon_sym_uint] = ACTIONS(1257),
    [anon_sym_long] = ACTIONS(1257),
    [anon_sym_ulong] = ACTIONS(1257),
    [anon_sym_char] = ACTIONS(1257),
    [anon_sym_delegate] = ACTIONS(1257),
    [sym_void_keyword] = ACTIONS(1257),
    [anon_sym_LBRACK] = ACTIONS(1009),
    [sym_const_keyword] = ACTIONS(1257),
    [anon_sym_readonly] = ACTIONS(1257),
    [anon_sym_volatile] = ACTIONS(1257),
    [anon_sym_bool] = ACTIONS(1257),
    [anon_sym_decimal] = ACTIONS(1257),
    [anon_sym_double] = ACTIONS(1257),
    [anon_sym_float] = ACTIONS(1257),
    [anon_sym_object] = ACTIONS(1257),
    [anon_sym_string] = ACTIONS(1257),
    [sym_identifier_name] = ACTIONS(1259),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1257),
  },
  [644] = {
    [anon_sym_RBRACE] = ACTIONS(1263),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [645] = {
    [anon_sym_RBRACE] = ACTIONS(1035),
    [anon_sym_class] = ACTIONS(1265),
    [anon_sym_unsafe] = ACTIONS(1265),
    [anon_sym_abstract] = ACTIONS(1265),
    [anon_sym_sealed] = ACTIONS(1265),
    [anon_sym_static] = ACTIONS(1265),
    [anon_sym_new] = ACTIONS(1265),
    [anon_sym_public] = ACTIONS(1265),
    [anon_sym_protected] = ACTIONS(1265),
    [anon_sym_internal] = ACTIONS(1265),
    [anon_sym_private] = ACTIONS(1265),
    [anon_sym_interface] = ACTIONS(1265),
    [anon_sym_struct] = ACTIONS(1265),
    [anon_sym_enum] = ACTIONS(1265),
    [anon_sym_sbyte] = ACTIONS(1265),
    [anon_sym_byte] = ACTIONS(1265),
    [anon_sym_short] = ACTIONS(1265),
    [anon_sym_ushort] = ACTIONS(1265),
    [anon_sym_int] = ACTIONS(1265),
    [anon_sym_uint] = ACTIONS(1265),
    [anon_sym_long] = ACTIONS(1265),
    [anon_sym_ulong] = ACTIONS(1265),
    [anon_sym_char] = ACTIONS(1265),
    [anon_sym_delegate] = ACTIONS(1265),
    [sym_void_keyword] = ACTIONS(1265),
    [anon_sym_LBRACK] = ACTIONS(1035),
    [sym_const_keyword] = ACTIONS(1265),
    [anon_sym_readonly] = ACTIONS(1265),
    [anon_sym_volatile] = ACTIONS(1265),
    [anon_sym_bool] = ACTIONS(1265),
    [anon_sym_decimal] = ACTIONS(1265),
    [anon_sym_double] = ACTIONS(1265),
    [anon_sym_float] = ACTIONS(1265),
    [anon_sym_object] = ACTIONS(1265),
    [anon_sym_string] = ACTIONS(1265),
    [sym_identifier_name] = ACTIONS(1267),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1265),
  },
  [646] = {
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_class] = ACTIONS(1269),
    [anon_sym_unsafe] = ACTIONS(1269),
    [anon_sym_abstract] = ACTIONS(1269),
    [anon_sym_sealed] = ACTIONS(1269),
    [anon_sym_static] = ACTIONS(1269),
    [anon_sym_new] = ACTIONS(1269),
    [anon_sym_public] = ACTIONS(1269),
    [anon_sym_protected] = ACTIONS(1269),
    [anon_sym_internal] = ACTIONS(1269),
    [anon_sym_private] = ACTIONS(1269),
    [anon_sym_interface] = ACTIONS(1269),
    [anon_sym_struct] = ACTIONS(1269),
    [anon_sym_enum] = ACTIONS(1269),
    [anon_sym_sbyte] = ACTIONS(1269),
    [anon_sym_byte] = ACTIONS(1269),
    [anon_sym_short] = ACTIONS(1269),
    [anon_sym_ushort] = ACTIONS(1269),
    [anon_sym_int] = ACTIONS(1269),
    [anon_sym_uint] = ACTIONS(1269),
    [anon_sym_long] = ACTIONS(1269),
    [anon_sym_ulong] = ACTIONS(1269),
    [anon_sym_char] = ACTIONS(1269),
    [anon_sym_delegate] = ACTIONS(1269),
    [sym_void_keyword] = ACTIONS(1269),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym_const_keyword] = ACTIONS(1269),
    [anon_sym_readonly] = ACTIONS(1269),
    [anon_sym_volatile] = ACTIONS(1269),
    [anon_sym_bool] = ACTIONS(1269),
    [anon_sym_decimal] = ACTIONS(1269),
    [anon_sym_double] = ACTIONS(1269),
    [anon_sym_float] = ACTIONS(1269),
    [anon_sym_object] = ACTIONS(1269),
    [anon_sym_string] = ACTIONS(1269),
    [sym_identifier_name] = ACTIONS(1271),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1269),
  },
  [647] = {
    [anon_sym_RBRACE] = ACTIONS(1039),
    [anon_sym_class] = ACTIONS(1273),
    [anon_sym_unsafe] = ACTIONS(1273),
    [anon_sym_abstract] = ACTIONS(1273),
    [anon_sym_sealed] = ACTIONS(1273),
    [anon_sym_static] = ACTIONS(1273),
    [anon_sym_new] = ACTIONS(1273),
    [anon_sym_public] = ACTIONS(1273),
    [anon_sym_protected] = ACTIONS(1273),
    [anon_sym_internal] = ACTIONS(1273),
    [anon_sym_private] = ACTIONS(1273),
    [anon_sym_interface] = ACTIONS(1273),
    [anon_sym_struct] = ACTIONS(1273),
    [anon_sym_enum] = ACTIONS(1273),
    [anon_sym_sbyte] = ACTIONS(1273),
    [anon_sym_byte] = ACTIONS(1273),
    [anon_sym_short] = ACTIONS(1273),
    [anon_sym_ushort] = ACTIONS(1273),
    [anon_sym_int] = ACTIONS(1273),
    [anon_sym_uint] = ACTIONS(1273),
    [anon_sym_long] = ACTIONS(1273),
    [anon_sym_ulong] = ACTIONS(1273),
    [anon_sym_char] = ACTIONS(1273),
    [anon_sym_delegate] = ACTIONS(1273),
    [sym_void_keyword] = ACTIONS(1273),
    [anon_sym_LBRACK] = ACTIONS(1039),
    [sym_const_keyword] = ACTIONS(1273),
    [anon_sym_readonly] = ACTIONS(1273),
    [anon_sym_volatile] = ACTIONS(1273),
    [anon_sym_bool] = ACTIONS(1273),
    [anon_sym_decimal] = ACTIONS(1273),
    [anon_sym_double] = ACTIONS(1273),
    [anon_sym_float] = ACTIONS(1273),
    [anon_sym_object] = ACTIONS(1273),
    [anon_sym_string] = ACTIONS(1273),
    [sym_identifier_name] = ACTIONS(1275),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1273),
  },
  [648] = {
    [aux_sym_enum_declaration_repeat1] = STATE(672),
    [anon_sym_RBRACE] = ACTIONS(1263),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [649] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1277),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [650] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1279),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [651] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1281),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [652] = {
    [sym_enum_member_declaration] = STATE(676),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [653] = {
    [anon_sym_RBRACE] = ACTIONS(1047),
    [anon_sym_class] = ACTIONS(1283),
    [anon_sym_unsafe] = ACTIONS(1283),
    [anon_sym_abstract] = ACTIONS(1283),
    [anon_sym_sealed] = ACTIONS(1283),
    [anon_sym_static] = ACTIONS(1283),
    [anon_sym_new] = ACTIONS(1283),
    [anon_sym_public] = ACTIONS(1283),
    [anon_sym_protected] = ACTIONS(1283),
    [anon_sym_internal] = ACTIONS(1283),
    [anon_sym_private] = ACTIONS(1283),
    [anon_sym_interface] = ACTIONS(1283),
    [anon_sym_struct] = ACTIONS(1283),
    [anon_sym_enum] = ACTIONS(1283),
    [anon_sym_sbyte] = ACTIONS(1283),
    [anon_sym_byte] = ACTIONS(1283),
    [anon_sym_short] = ACTIONS(1283),
    [anon_sym_ushort] = ACTIONS(1283),
    [anon_sym_int] = ACTIONS(1283),
    [anon_sym_uint] = ACTIONS(1283),
    [anon_sym_long] = ACTIONS(1283),
    [anon_sym_ulong] = ACTIONS(1283),
    [anon_sym_char] = ACTIONS(1283),
    [anon_sym_delegate] = ACTIONS(1283),
    [sym_void_keyword] = ACTIONS(1283),
    [anon_sym_LBRACK] = ACTIONS(1047),
    [sym_const_keyword] = ACTIONS(1283),
    [anon_sym_readonly] = ACTIONS(1283),
    [anon_sym_volatile] = ACTIONS(1283),
    [anon_sym_bool] = ACTIONS(1283),
    [anon_sym_decimal] = ACTIONS(1283),
    [anon_sym_double] = ACTIONS(1283),
    [anon_sym_float] = ACTIONS(1283),
    [anon_sym_object] = ACTIONS(1283),
    [anon_sym_string] = ACTIONS(1283),
    [sym_identifier_name] = ACTIONS(1285),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1283),
  },
  [654] = {
    [anon_sym_RBRACE] = ACTIONS(1287),
    [anon_sym_class] = ACTIONS(1289),
    [anon_sym_unsafe] = ACTIONS(1289),
    [anon_sym_abstract] = ACTIONS(1289),
    [anon_sym_sealed] = ACTIONS(1289),
    [anon_sym_static] = ACTIONS(1289),
    [anon_sym_new] = ACTIONS(1289),
    [anon_sym_public] = ACTIONS(1289),
    [anon_sym_protected] = ACTIONS(1289),
    [anon_sym_internal] = ACTIONS(1289),
    [anon_sym_private] = ACTIONS(1289),
    [anon_sym_interface] = ACTIONS(1289),
    [anon_sym_struct] = ACTIONS(1289),
    [anon_sym_enum] = ACTIONS(1289),
    [anon_sym_sbyte] = ACTIONS(1289),
    [anon_sym_byte] = ACTIONS(1289),
    [anon_sym_short] = ACTIONS(1289),
    [anon_sym_ushort] = ACTIONS(1289),
    [anon_sym_int] = ACTIONS(1289),
    [anon_sym_uint] = ACTIONS(1289),
    [anon_sym_long] = ACTIONS(1289),
    [anon_sym_ulong] = ACTIONS(1289),
    [anon_sym_char] = ACTIONS(1289),
    [anon_sym_delegate] = ACTIONS(1289),
    [sym_void_keyword] = ACTIONS(1289),
    [anon_sym_LBRACK] = ACTIONS(1287),
    [sym_const_keyword] = ACTIONS(1289),
    [anon_sym_readonly] = ACTIONS(1289),
    [anon_sym_volatile] = ACTIONS(1289),
    [anon_sym_bool] = ACTIONS(1289),
    [anon_sym_decimal] = ACTIONS(1289),
    [anon_sym_double] = ACTIONS(1289),
    [anon_sym_float] = ACTIONS(1289),
    [anon_sym_object] = ACTIONS(1289),
    [anon_sym_string] = ACTIONS(1289),
    [sym_identifier_name] = ACTIONS(1291),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1289),
  },
  [655] = {
    [anon_sym_RBRACE] = ACTIONS(1009),
    [anon_sym_class] = ACTIONS(1257),
    [anon_sym_unsafe] = ACTIONS(1257),
    [anon_sym_abstract] = ACTIONS(1257),
    [anon_sym_sealed] = ACTIONS(1257),
    [anon_sym_static] = ACTIONS(1257),
    [anon_sym_new] = ACTIONS(1257),
    [anon_sym_public] = ACTIONS(1257),
    [anon_sym_protected] = ACTIONS(1257),
    [anon_sym_internal] = ACTIONS(1257),
    [anon_sym_private] = ACTIONS(1257),
    [anon_sym_interface] = ACTIONS(1257),
    [anon_sym_struct] = ACTIONS(1257),
    [anon_sym_enum] = ACTIONS(1257),
    [anon_sym_sbyte] = ACTIONS(1257),
    [anon_sym_byte] = ACTIONS(1257),
    [anon_sym_short] = ACTIONS(1257),
    [anon_sym_ushort] = ACTIONS(1257),
    [anon_sym_int] = ACTIONS(1257),
    [anon_sym_uint] = ACTIONS(1257),
    [anon_sym_long] = ACTIONS(1257),
    [anon_sym_ulong] = ACTIONS(1257),
    [anon_sym_char] = ACTIONS(1257),
    [anon_sym_delegate] = ACTIONS(1257),
    [anon_sym_LBRACK] = ACTIONS(1009),
    [sym_const_keyword] = ACTIONS(1257),
    [anon_sym_readonly] = ACTIONS(1257),
    [anon_sym_volatile] = ACTIONS(1257),
    [anon_sym_bool] = ACTIONS(1257),
    [anon_sym_decimal] = ACTIONS(1257),
    [anon_sym_double] = ACTIONS(1257),
    [anon_sym_float] = ACTIONS(1257),
    [anon_sym_object] = ACTIONS(1257),
    [anon_sym_string] = ACTIONS(1257),
    [sym_identifier_name] = ACTIONS(1259),
    [sym_comment] = ACTIONS(36),
  },
  [656] = {
    [anon_sym_SEMI] = ACTIONS(1293),
    [anon_sym_RBRACE] = ACTIONS(1009),
    [anon_sym_class] = ACTIONS(1257),
    [anon_sym_unsafe] = ACTIONS(1257),
    [anon_sym_abstract] = ACTIONS(1257),
    [anon_sym_sealed] = ACTIONS(1257),
    [anon_sym_static] = ACTIONS(1257),
    [anon_sym_new] = ACTIONS(1257),
    [anon_sym_public] = ACTIONS(1257),
    [anon_sym_protected] = ACTIONS(1257),
    [anon_sym_internal] = ACTIONS(1257),
    [anon_sym_private] = ACTIONS(1257),
    [anon_sym_interface] = ACTIONS(1257),
    [anon_sym_struct] = ACTIONS(1257),
    [anon_sym_enum] = ACTIONS(1257),
    [anon_sym_sbyte] = ACTIONS(1257),
    [anon_sym_byte] = ACTIONS(1257),
    [anon_sym_short] = ACTIONS(1257),
    [anon_sym_ushort] = ACTIONS(1257),
    [anon_sym_int] = ACTIONS(1257),
    [anon_sym_uint] = ACTIONS(1257),
    [anon_sym_long] = ACTIONS(1257),
    [anon_sym_ulong] = ACTIONS(1257),
    [anon_sym_char] = ACTIONS(1257),
    [anon_sym_delegate] = ACTIONS(1257),
    [anon_sym_LBRACK] = ACTIONS(1009),
    [sym_const_keyword] = ACTIONS(1257),
    [anon_sym_readonly] = ACTIONS(1257),
    [anon_sym_volatile] = ACTIONS(1257),
    [anon_sym_bool] = ACTIONS(1257),
    [anon_sym_decimal] = ACTIONS(1257),
    [anon_sym_double] = ACTIONS(1257),
    [anon_sym_float] = ACTIONS(1257),
    [anon_sym_object] = ACTIONS(1257),
    [anon_sym_string] = ACTIONS(1257),
    [sym_identifier_name] = ACTIONS(1259),
    [sym_comment] = ACTIONS(36),
  },
  [657] = {
    [anon_sym_RBRACE] = ACTIONS(1295),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [658] = {
    [anon_sym_RBRACE] = ACTIONS(1035),
    [anon_sym_class] = ACTIONS(1265),
    [anon_sym_unsafe] = ACTIONS(1265),
    [anon_sym_abstract] = ACTIONS(1265),
    [anon_sym_sealed] = ACTIONS(1265),
    [anon_sym_static] = ACTIONS(1265),
    [anon_sym_new] = ACTIONS(1265),
    [anon_sym_public] = ACTIONS(1265),
    [anon_sym_protected] = ACTIONS(1265),
    [anon_sym_internal] = ACTIONS(1265),
    [anon_sym_private] = ACTIONS(1265),
    [anon_sym_interface] = ACTIONS(1265),
    [anon_sym_struct] = ACTIONS(1265),
    [anon_sym_enum] = ACTIONS(1265),
    [anon_sym_sbyte] = ACTIONS(1265),
    [anon_sym_byte] = ACTIONS(1265),
    [anon_sym_short] = ACTIONS(1265),
    [anon_sym_ushort] = ACTIONS(1265),
    [anon_sym_int] = ACTIONS(1265),
    [anon_sym_uint] = ACTIONS(1265),
    [anon_sym_long] = ACTIONS(1265),
    [anon_sym_ulong] = ACTIONS(1265),
    [anon_sym_char] = ACTIONS(1265),
    [anon_sym_delegate] = ACTIONS(1265),
    [anon_sym_LBRACK] = ACTIONS(1035),
    [sym_const_keyword] = ACTIONS(1265),
    [anon_sym_readonly] = ACTIONS(1265),
    [anon_sym_volatile] = ACTIONS(1265),
    [anon_sym_bool] = ACTIONS(1265),
    [anon_sym_decimal] = ACTIONS(1265),
    [anon_sym_double] = ACTIONS(1265),
    [anon_sym_float] = ACTIONS(1265),
    [anon_sym_object] = ACTIONS(1265),
    [anon_sym_string] = ACTIONS(1265),
    [sym_identifier_name] = ACTIONS(1267),
    [sym_comment] = ACTIONS(36),
  },
  [659] = {
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_class] = ACTIONS(1269),
    [anon_sym_unsafe] = ACTIONS(1269),
    [anon_sym_abstract] = ACTIONS(1269),
    [anon_sym_sealed] = ACTIONS(1269),
    [anon_sym_static] = ACTIONS(1269),
    [anon_sym_new] = ACTIONS(1269),
    [anon_sym_public] = ACTIONS(1269),
    [anon_sym_protected] = ACTIONS(1269),
    [anon_sym_internal] = ACTIONS(1269),
    [anon_sym_private] = ACTIONS(1269),
    [anon_sym_interface] = ACTIONS(1269),
    [anon_sym_struct] = ACTIONS(1269),
    [anon_sym_enum] = ACTIONS(1269),
    [anon_sym_sbyte] = ACTIONS(1269),
    [anon_sym_byte] = ACTIONS(1269),
    [anon_sym_short] = ACTIONS(1269),
    [anon_sym_ushort] = ACTIONS(1269),
    [anon_sym_int] = ACTIONS(1269),
    [anon_sym_uint] = ACTIONS(1269),
    [anon_sym_long] = ACTIONS(1269),
    [anon_sym_ulong] = ACTIONS(1269),
    [anon_sym_char] = ACTIONS(1269),
    [anon_sym_delegate] = ACTIONS(1269),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym_const_keyword] = ACTIONS(1269),
    [anon_sym_readonly] = ACTIONS(1269),
    [anon_sym_volatile] = ACTIONS(1269),
    [anon_sym_bool] = ACTIONS(1269),
    [anon_sym_decimal] = ACTIONS(1269),
    [anon_sym_double] = ACTIONS(1269),
    [anon_sym_float] = ACTIONS(1269),
    [anon_sym_object] = ACTIONS(1269),
    [anon_sym_string] = ACTIONS(1269),
    [sym_identifier_name] = ACTIONS(1271),
    [sym_comment] = ACTIONS(36),
  },
  [660] = {
    [anon_sym_RBRACE] = ACTIONS(1039),
    [anon_sym_class] = ACTIONS(1273),
    [anon_sym_unsafe] = ACTIONS(1273),
    [anon_sym_abstract] = ACTIONS(1273),
    [anon_sym_sealed] = ACTIONS(1273),
    [anon_sym_static] = ACTIONS(1273),
    [anon_sym_new] = ACTIONS(1273),
    [anon_sym_public] = ACTIONS(1273),
    [anon_sym_protected] = ACTIONS(1273),
    [anon_sym_internal] = ACTIONS(1273),
    [anon_sym_private] = ACTIONS(1273),
    [anon_sym_interface] = ACTIONS(1273),
    [anon_sym_struct] = ACTIONS(1273),
    [anon_sym_enum] = ACTIONS(1273),
    [anon_sym_sbyte] = ACTIONS(1273),
    [anon_sym_byte] = ACTIONS(1273),
    [anon_sym_short] = ACTIONS(1273),
    [anon_sym_ushort] = ACTIONS(1273),
    [anon_sym_int] = ACTIONS(1273),
    [anon_sym_uint] = ACTIONS(1273),
    [anon_sym_long] = ACTIONS(1273),
    [anon_sym_ulong] = ACTIONS(1273),
    [anon_sym_char] = ACTIONS(1273),
    [anon_sym_delegate] = ACTIONS(1273),
    [anon_sym_LBRACK] = ACTIONS(1039),
    [sym_const_keyword] = ACTIONS(1273),
    [anon_sym_readonly] = ACTIONS(1273),
    [anon_sym_volatile] = ACTIONS(1273),
    [anon_sym_bool] = ACTIONS(1273),
    [anon_sym_decimal] = ACTIONS(1273),
    [anon_sym_double] = ACTIONS(1273),
    [anon_sym_float] = ACTIONS(1273),
    [anon_sym_object] = ACTIONS(1273),
    [anon_sym_string] = ACTIONS(1273),
    [sym_identifier_name] = ACTIONS(1275),
    [sym_comment] = ACTIONS(36),
  },
  [661] = {
    [aux_sym_enum_declaration_repeat1] = STATE(679),
    [anon_sym_RBRACE] = ACTIONS(1295),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [662] = {
    [sym__type_declaration] = STATE(241),
    [sym_class_declaration] = STATE(136),
    [sym_class_modifiers] = STATE(137),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(136),
    [sym_interface_modifiers] = STATE(138),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(136),
    [sym_struct_modifiers] = STATE(139),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(136),
    [sym_enum_modifiers] = STATE(140),
    [sym_delegate_declaration] = STATE(136),
    [sym_delegate_modifier] = STATE(141),
    [sym_return_type] = STATE(142),
    [sym__attributes] = STATE(143),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(241),
    [sym_field_modifiers] = STATE(144),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(146),
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_method_declaration] = STATE(241),
    [sym_method_modifiers] = STATE(148),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1297),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(246),
    [anon_sym_struct] = ACTIONS(248),
    [anon_sym_enum] = ACTIONS(250),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(252),
    [sym_void_keyword] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(254),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(258),
  },
  [663] = {
    [sym__attributes] = STATE(156),
    [sym__attribute_section] = STATE(157),
    [sym_field_declaration] = STATE(252),
    [sym_field_modifiers] = STATE(159),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(160),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(1299),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_const_keyword] = ACTIONS(266),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [664] = {
    [sym__type_declaration] = STATE(275),
    [sym_class_declaration] = STATE(174),
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(174),
    [sym_interface_modifiers] = STATE(176),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(174),
    [sym_struct_modifiers] = STATE(177),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(174),
    [sym_enum_modifiers] = STATE(178),
    [sym_delegate_declaration] = STATE(174),
    [sym_delegate_modifier] = STATE(179),
    [sym__attributes] = STATE(180),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(275),
    [sym_field_modifiers] = STATE(181),
    [sym__field_modifiers] = STATE(145),
    [sym_variable_declaration] = STATE(182),
    [sym__type] = STATE(161),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1301),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_internal] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_struct] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(116),
    [sym_const_keyword] = ACTIONS(284),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [665] = {
    [sym_enum_member_declaration] = STATE(683),
    [sym__attributes] = STATE(188),
    [sym__attribute_section] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(290),
    [sym_comment] = ACTIONS(36),
  },
  [666] = {
    [anon_sym_RBRACE] = ACTIONS(1047),
    [anon_sym_class] = ACTIONS(1283),
    [anon_sym_unsafe] = ACTIONS(1283),
    [anon_sym_abstract] = ACTIONS(1283),
    [anon_sym_sealed] = ACTIONS(1283),
    [anon_sym_static] = ACTIONS(1283),
    [anon_sym_new] = ACTIONS(1283),
    [anon_sym_public] = ACTIONS(1283),
    [anon_sym_protected] = ACTIONS(1283),
    [anon_sym_internal] = ACTIONS(1283),
    [anon_sym_private] = ACTIONS(1283),
    [anon_sym_interface] = ACTIONS(1283),
    [anon_sym_struct] = ACTIONS(1283),
    [anon_sym_enum] = ACTIONS(1283),
    [anon_sym_sbyte] = ACTIONS(1283),
    [anon_sym_byte] = ACTIONS(1283),
    [anon_sym_short] = ACTIONS(1283),
    [anon_sym_ushort] = ACTIONS(1283),
    [anon_sym_int] = ACTIONS(1283),
    [anon_sym_uint] = ACTIONS(1283),
    [anon_sym_long] = ACTIONS(1283),
    [anon_sym_ulong] = ACTIONS(1283),
    [anon_sym_char] = ACTIONS(1283),
    [anon_sym_delegate] = ACTIONS(1283),
    [anon_sym_LBRACK] = ACTIONS(1047),
    [sym_const_keyword] = ACTIONS(1283),
    [anon_sym_readonly] = ACTIONS(1283),
    [anon_sym_volatile] = ACTIONS(1283),
    [anon_sym_bool] = ACTIONS(1283),
    [anon_sym_decimal] = ACTIONS(1283),
    [anon_sym_double] = ACTIONS(1283),
    [anon_sym_float] = ACTIONS(1283),
    [anon_sym_object] = ACTIONS(1283),
    [anon_sym_string] = ACTIONS(1283),
    [sym_identifier_name] = ACTIONS(1285),
    [sym_comment] = ACTIONS(36),
  },
  [667] = {
    [anon_sym_SEMI] = ACTIONS(1303),
    [anon_sym_RBRACE] = ACTIONS(1303),
    [anon_sym_COMMA] = ACTIONS(1303),
    [anon_sym_RPAREN] = ACTIONS(1303),
    [sym_params_keyword] = ACTIONS(1303),
    [anon_sym_LBRACK] = ACTIONS(1303),
    [sym_comment] = ACTIONS(36),
  },
  [668] = {
    [ts_builtin_sym_end] = ACTIONS(1305),
    [anon_sym_using] = ACTIONS(1305),
    [anon_sym_namespace] = ACTIONS(1305),
    [anon_sym_RBRACE] = ACTIONS(1305),
    [anon_sym_class] = ACTIONS(1305),
    [anon_sym_unsafe] = ACTIONS(1305),
    [anon_sym_abstract] = ACTIONS(1305),
    [anon_sym_sealed] = ACTIONS(1305),
    [anon_sym_static] = ACTIONS(1305),
    [anon_sym_new] = ACTIONS(1305),
    [anon_sym_public] = ACTIONS(1305),
    [anon_sym_protected] = ACTIONS(1305),
    [anon_sym_internal] = ACTIONS(1305),
    [anon_sym_private] = ACTIONS(1305),
    [anon_sym_interface] = ACTIONS(1305),
    [anon_sym_struct] = ACTIONS(1305),
    [anon_sym_enum] = ACTIONS(1305),
    [anon_sym_delegate] = ACTIONS(1305),
    [anon_sym_LBRACK] = ACTIONS(1305),
    [sym_comment] = ACTIONS(36),
  },
  [669] = {
    [ts_builtin_sym_end] = ACTIONS(1305),
    [anon_sym_SEMI] = ACTIONS(1307),
    [anon_sym_using] = ACTIONS(1305),
    [anon_sym_namespace] = ACTIONS(1305),
    [anon_sym_RBRACE] = ACTIONS(1305),
    [anon_sym_class] = ACTIONS(1305),
    [anon_sym_unsafe] = ACTIONS(1305),
    [anon_sym_abstract] = ACTIONS(1305),
    [anon_sym_sealed] = ACTIONS(1305),
    [anon_sym_static] = ACTIONS(1305),
    [anon_sym_new] = ACTIONS(1305),
    [anon_sym_public] = ACTIONS(1305),
    [anon_sym_protected] = ACTIONS(1305),
    [anon_sym_internal] = ACTIONS(1305),
    [anon_sym_private] = ACTIONS(1305),
    [anon_sym_interface] = ACTIONS(1305),
    [anon_sym_struct] = ACTIONS(1305),
    [anon_sym_enum] = ACTIONS(1305),
    [anon_sym_delegate] = ACTIONS(1305),
    [anon_sym_LBRACK] = ACTIONS(1305),
    [sym_comment] = ACTIONS(36),
  },
  [670] = {
    [anon_sym_RBRACE] = ACTIONS(1151),
    [anon_sym_class] = ACTIONS(1309),
    [anon_sym_unsafe] = ACTIONS(1309),
    [anon_sym_abstract] = ACTIONS(1309),
    [anon_sym_sealed] = ACTIONS(1309),
    [anon_sym_static] = ACTIONS(1309),
    [anon_sym_new] = ACTIONS(1309),
    [anon_sym_public] = ACTIONS(1309),
    [anon_sym_protected] = ACTIONS(1309),
    [anon_sym_internal] = ACTIONS(1309),
    [anon_sym_private] = ACTIONS(1309),
    [anon_sym_interface] = ACTIONS(1309),
    [anon_sym_struct] = ACTIONS(1309),
    [anon_sym_enum] = ACTIONS(1309),
    [anon_sym_sbyte] = ACTIONS(1309),
    [anon_sym_byte] = ACTIONS(1309),
    [anon_sym_short] = ACTIONS(1309),
    [anon_sym_ushort] = ACTIONS(1309),
    [anon_sym_int] = ACTIONS(1309),
    [anon_sym_uint] = ACTIONS(1309),
    [anon_sym_long] = ACTIONS(1309),
    [anon_sym_ulong] = ACTIONS(1309),
    [anon_sym_char] = ACTIONS(1309),
    [anon_sym_delegate] = ACTIONS(1309),
    [sym_void_keyword] = ACTIONS(1309),
    [anon_sym_LBRACK] = ACTIONS(1151),
    [sym_const_keyword] = ACTIONS(1309),
    [anon_sym_readonly] = ACTIONS(1309),
    [anon_sym_volatile] = ACTIONS(1309),
    [anon_sym_bool] = ACTIONS(1309),
    [anon_sym_decimal] = ACTIONS(1309),
    [anon_sym_double] = ACTIONS(1309),
    [anon_sym_float] = ACTIONS(1309),
    [anon_sym_object] = ACTIONS(1309),
    [anon_sym_string] = ACTIONS(1309),
    [sym_identifier_name] = ACTIONS(1311),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1309),
  },
  [671] = {
    [anon_sym_SEMI] = ACTIONS(1313),
    [anon_sym_RBRACE] = ACTIONS(1151),
    [anon_sym_class] = ACTIONS(1309),
    [anon_sym_unsafe] = ACTIONS(1309),
    [anon_sym_abstract] = ACTIONS(1309),
    [anon_sym_sealed] = ACTIONS(1309),
    [anon_sym_static] = ACTIONS(1309),
    [anon_sym_new] = ACTIONS(1309),
    [anon_sym_public] = ACTIONS(1309),
    [anon_sym_protected] = ACTIONS(1309),
    [anon_sym_internal] = ACTIONS(1309),
    [anon_sym_private] = ACTIONS(1309),
    [anon_sym_interface] = ACTIONS(1309),
    [anon_sym_struct] = ACTIONS(1309),
    [anon_sym_enum] = ACTIONS(1309),
    [anon_sym_sbyte] = ACTIONS(1309),
    [anon_sym_byte] = ACTIONS(1309),
    [anon_sym_short] = ACTIONS(1309),
    [anon_sym_ushort] = ACTIONS(1309),
    [anon_sym_int] = ACTIONS(1309),
    [anon_sym_uint] = ACTIONS(1309),
    [anon_sym_long] = ACTIONS(1309),
    [anon_sym_ulong] = ACTIONS(1309),
    [anon_sym_char] = ACTIONS(1309),
    [anon_sym_delegate] = ACTIONS(1309),
    [sym_void_keyword] = ACTIONS(1309),
    [anon_sym_LBRACK] = ACTIONS(1151),
    [sym_const_keyword] = ACTIONS(1309),
    [anon_sym_readonly] = ACTIONS(1309),
    [anon_sym_volatile] = ACTIONS(1309),
    [anon_sym_bool] = ACTIONS(1309),
    [anon_sym_decimal] = ACTIONS(1309),
    [anon_sym_double] = ACTIONS(1309),
    [anon_sym_float] = ACTIONS(1309),
    [anon_sym_object] = ACTIONS(1309),
    [anon_sym_string] = ACTIONS(1309),
    [sym_identifier_name] = ACTIONS(1311),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1309),
  },
  [672] = {
    [anon_sym_RBRACE] = ACTIONS(1315),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [673] = {
    [anon_sym_RBRACE] = ACTIONS(1173),
    [anon_sym_class] = ACTIONS(1317),
    [anon_sym_unsafe] = ACTIONS(1317),
    [anon_sym_abstract] = ACTIONS(1317),
    [anon_sym_sealed] = ACTIONS(1317),
    [anon_sym_static] = ACTIONS(1317),
    [anon_sym_new] = ACTIONS(1317),
    [anon_sym_public] = ACTIONS(1317),
    [anon_sym_protected] = ACTIONS(1317),
    [anon_sym_internal] = ACTIONS(1317),
    [anon_sym_private] = ACTIONS(1317),
    [anon_sym_interface] = ACTIONS(1317),
    [anon_sym_struct] = ACTIONS(1317),
    [anon_sym_enum] = ACTIONS(1317),
    [anon_sym_sbyte] = ACTIONS(1317),
    [anon_sym_byte] = ACTIONS(1317),
    [anon_sym_short] = ACTIONS(1317),
    [anon_sym_ushort] = ACTIONS(1317),
    [anon_sym_int] = ACTIONS(1317),
    [anon_sym_uint] = ACTIONS(1317),
    [anon_sym_long] = ACTIONS(1317),
    [anon_sym_ulong] = ACTIONS(1317),
    [anon_sym_char] = ACTIONS(1317),
    [anon_sym_delegate] = ACTIONS(1317),
    [sym_void_keyword] = ACTIONS(1317),
    [anon_sym_LBRACK] = ACTIONS(1173),
    [sym_const_keyword] = ACTIONS(1317),
    [anon_sym_readonly] = ACTIONS(1317),
    [anon_sym_volatile] = ACTIONS(1317),
    [anon_sym_bool] = ACTIONS(1317),
    [anon_sym_decimal] = ACTIONS(1317),
    [anon_sym_double] = ACTIONS(1317),
    [anon_sym_float] = ACTIONS(1317),
    [anon_sym_object] = ACTIONS(1317),
    [anon_sym_string] = ACTIONS(1317),
    [sym_identifier_name] = ACTIONS(1319),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1317),
  },
  [674] = {
    [anon_sym_RBRACE] = ACTIONS(1175),
    [anon_sym_class] = ACTIONS(1321),
    [anon_sym_unsafe] = ACTIONS(1321),
    [anon_sym_abstract] = ACTIONS(1321),
    [anon_sym_sealed] = ACTIONS(1321),
    [anon_sym_static] = ACTIONS(1321),
    [anon_sym_new] = ACTIONS(1321),
    [anon_sym_public] = ACTIONS(1321),
    [anon_sym_protected] = ACTIONS(1321),
    [anon_sym_internal] = ACTIONS(1321),
    [anon_sym_private] = ACTIONS(1321),
    [anon_sym_interface] = ACTIONS(1321),
    [anon_sym_struct] = ACTIONS(1321),
    [anon_sym_enum] = ACTIONS(1321),
    [anon_sym_sbyte] = ACTIONS(1321),
    [anon_sym_byte] = ACTIONS(1321),
    [anon_sym_short] = ACTIONS(1321),
    [anon_sym_ushort] = ACTIONS(1321),
    [anon_sym_int] = ACTIONS(1321),
    [anon_sym_uint] = ACTIONS(1321),
    [anon_sym_long] = ACTIONS(1321),
    [anon_sym_ulong] = ACTIONS(1321),
    [anon_sym_char] = ACTIONS(1321),
    [anon_sym_delegate] = ACTIONS(1321),
    [sym_void_keyword] = ACTIONS(1321),
    [anon_sym_LBRACK] = ACTIONS(1175),
    [sym_const_keyword] = ACTIONS(1321),
    [anon_sym_readonly] = ACTIONS(1321),
    [anon_sym_volatile] = ACTIONS(1321),
    [anon_sym_bool] = ACTIONS(1321),
    [anon_sym_decimal] = ACTIONS(1321),
    [anon_sym_double] = ACTIONS(1321),
    [anon_sym_float] = ACTIONS(1321),
    [anon_sym_object] = ACTIONS(1321),
    [anon_sym_string] = ACTIONS(1321),
    [sym_identifier_name] = ACTIONS(1323),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1321),
  },
  [675] = {
    [anon_sym_RBRACE] = ACTIONS(1177),
    [anon_sym_class] = ACTIONS(1325),
    [anon_sym_unsafe] = ACTIONS(1325),
    [anon_sym_abstract] = ACTIONS(1325),
    [anon_sym_sealed] = ACTIONS(1325),
    [anon_sym_static] = ACTIONS(1325),
    [anon_sym_new] = ACTIONS(1325),
    [anon_sym_public] = ACTIONS(1325),
    [anon_sym_protected] = ACTIONS(1325),
    [anon_sym_internal] = ACTIONS(1325),
    [anon_sym_private] = ACTIONS(1325),
    [anon_sym_interface] = ACTIONS(1325),
    [anon_sym_struct] = ACTIONS(1325),
    [anon_sym_enum] = ACTIONS(1325),
    [anon_sym_sbyte] = ACTIONS(1325),
    [anon_sym_byte] = ACTIONS(1325),
    [anon_sym_short] = ACTIONS(1325),
    [anon_sym_ushort] = ACTIONS(1325),
    [anon_sym_int] = ACTIONS(1325),
    [anon_sym_uint] = ACTIONS(1325),
    [anon_sym_long] = ACTIONS(1325),
    [anon_sym_ulong] = ACTIONS(1325),
    [anon_sym_char] = ACTIONS(1325),
    [anon_sym_delegate] = ACTIONS(1325),
    [sym_void_keyword] = ACTIONS(1325),
    [anon_sym_LBRACK] = ACTIONS(1177),
    [sym_const_keyword] = ACTIONS(1325),
    [anon_sym_readonly] = ACTIONS(1325),
    [anon_sym_volatile] = ACTIONS(1325),
    [anon_sym_bool] = ACTIONS(1325),
    [anon_sym_decimal] = ACTIONS(1325),
    [anon_sym_double] = ACTIONS(1325),
    [anon_sym_float] = ACTIONS(1325),
    [anon_sym_object] = ACTIONS(1325),
    [anon_sym_string] = ACTIONS(1325),
    [sym_identifier_name] = ACTIONS(1327),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1325),
  },
  [676] = {
    [aux_sym_enum_declaration_repeat1] = STATE(687),
    [anon_sym_RBRACE] = ACTIONS(1315),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [677] = {
    [anon_sym_RBRACE] = ACTIONS(1151),
    [anon_sym_class] = ACTIONS(1309),
    [anon_sym_unsafe] = ACTIONS(1309),
    [anon_sym_abstract] = ACTIONS(1309),
    [anon_sym_sealed] = ACTIONS(1309),
    [anon_sym_static] = ACTIONS(1309),
    [anon_sym_new] = ACTIONS(1309),
    [anon_sym_public] = ACTIONS(1309),
    [anon_sym_protected] = ACTIONS(1309),
    [anon_sym_internal] = ACTIONS(1309),
    [anon_sym_private] = ACTIONS(1309),
    [anon_sym_interface] = ACTIONS(1309),
    [anon_sym_struct] = ACTIONS(1309),
    [anon_sym_enum] = ACTIONS(1309),
    [anon_sym_sbyte] = ACTIONS(1309),
    [anon_sym_byte] = ACTIONS(1309),
    [anon_sym_short] = ACTIONS(1309),
    [anon_sym_ushort] = ACTIONS(1309),
    [anon_sym_int] = ACTIONS(1309),
    [anon_sym_uint] = ACTIONS(1309),
    [anon_sym_long] = ACTIONS(1309),
    [anon_sym_ulong] = ACTIONS(1309),
    [anon_sym_char] = ACTIONS(1309),
    [anon_sym_delegate] = ACTIONS(1309),
    [anon_sym_LBRACK] = ACTIONS(1151),
    [sym_const_keyword] = ACTIONS(1309),
    [anon_sym_readonly] = ACTIONS(1309),
    [anon_sym_volatile] = ACTIONS(1309),
    [anon_sym_bool] = ACTIONS(1309),
    [anon_sym_decimal] = ACTIONS(1309),
    [anon_sym_double] = ACTIONS(1309),
    [anon_sym_float] = ACTIONS(1309),
    [anon_sym_object] = ACTIONS(1309),
    [anon_sym_string] = ACTIONS(1309),
    [sym_identifier_name] = ACTIONS(1311),
    [sym_comment] = ACTIONS(36),
  },
  [678] = {
    [anon_sym_SEMI] = ACTIONS(1329),
    [anon_sym_RBRACE] = ACTIONS(1151),
    [anon_sym_class] = ACTIONS(1309),
    [anon_sym_unsafe] = ACTIONS(1309),
    [anon_sym_abstract] = ACTIONS(1309),
    [anon_sym_sealed] = ACTIONS(1309),
    [anon_sym_static] = ACTIONS(1309),
    [anon_sym_new] = ACTIONS(1309),
    [anon_sym_public] = ACTIONS(1309),
    [anon_sym_protected] = ACTIONS(1309),
    [anon_sym_internal] = ACTIONS(1309),
    [anon_sym_private] = ACTIONS(1309),
    [anon_sym_interface] = ACTIONS(1309),
    [anon_sym_struct] = ACTIONS(1309),
    [anon_sym_enum] = ACTIONS(1309),
    [anon_sym_sbyte] = ACTIONS(1309),
    [anon_sym_byte] = ACTIONS(1309),
    [anon_sym_short] = ACTIONS(1309),
    [anon_sym_ushort] = ACTIONS(1309),
    [anon_sym_int] = ACTIONS(1309),
    [anon_sym_uint] = ACTIONS(1309),
    [anon_sym_long] = ACTIONS(1309),
    [anon_sym_ulong] = ACTIONS(1309),
    [anon_sym_char] = ACTIONS(1309),
    [anon_sym_delegate] = ACTIONS(1309),
    [anon_sym_LBRACK] = ACTIONS(1151),
    [sym_const_keyword] = ACTIONS(1309),
    [anon_sym_readonly] = ACTIONS(1309),
    [anon_sym_volatile] = ACTIONS(1309),
    [anon_sym_bool] = ACTIONS(1309),
    [anon_sym_decimal] = ACTIONS(1309),
    [anon_sym_double] = ACTIONS(1309),
    [anon_sym_float] = ACTIONS(1309),
    [anon_sym_object] = ACTIONS(1309),
    [anon_sym_string] = ACTIONS(1309),
    [sym_identifier_name] = ACTIONS(1311),
    [sym_comment] = ACTIONS(36),
  },
  [679] = {
    [anon_sym_RBRACE] = ACTIONS(1331),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [680] = {
    [anon_sym_RBRACE] = ACTIONS(1173),
    [anon_sym_class] = ACTIONS(1317),
    [anon_sym_unsafe] = ACTIONS(1317),
    [anon_sym_abstract] = ACTIONS(1317),
    [anon_sym_sealed] = ACTIONS(1317),
    [anon_sym_static] = ACTIONS(1317),
    [anon_sym_new] = ACTIONS(1317),
    [anon_sym_public] = ACTIONS(1317),
    [anon_sym_protected] = ACTIONS(1317),
    [anon_sym_internal] = ACTIONS(1317),
    [anon_sym_private] = ACTIONS(1317),
    [anon_sym_interface] = ACTIONS(1317),
    [anon_sym_struct] = ACTIONS(1317),
    [anon_sym_enum] = ACTIONS(1317),
    [anon_sym_sbyte] = ACTIONS(1317),
    [anon_sym_byte] = ACTIONS(1317),
    [anon_sym_short] = ACTIONS(1317),
    [anon_sym_ushort] = ACTIONS(1317),
    [anon_sym_int] = ACTIONS(1317),
    [anon_sym_uint] = ACTIONS(1317),
    [anon_sym_long] = ACTIONS(1317),
    [anon_sym_ulong] = ACTIONS(1317),
    [anon_sym_char] = ACTIONS(1317),
    [anon_sym_delegate] = ACTIONS(1317),
    [anon_sym_LBRACK] = ACTIONS(1173),
    [sym_const_keyword] = ACTIONS(1317),
    [anon_sym_readonly] = ACTIONS(1317),
    [anon_sym_volatile] = ACTIONS(1317),
    [anon_sym_bool] = ACTIONS(1317),
    [anon_sym_decimal] = ACTIONS(1317),
    [anon_sym_double] = ACTIONS(1317),
    [anon_sym_float] = ACTIONS(1317),
    [anon_sym_object] = ACTIONS(1317),
    [anon_sym_string] = ACTIONS(1317),
    [sym_identifier_name] = ACTIONS(1319),
    [sym_comment] = ACTIONS(36),
  },
  [681] = {
    [anon_sym_RBRACE] = ACTIONS(1175),
    [anon_sym_class] = ACTIONS(1321),
    [anon_sym_unsafe] = ACTIONS(1321),
    [anon_sym_abstract] = ACTIONS(1321),
    [anon_sym_sealed] = ACTIONS(1321),
    [anon_sym_static] = ACTIONS(1321),
    [anon_sym_new] = ACTIONS(1321),
    [anon_sym_public] = ACTIONS(1321),
    [anon_sym_protected] = ACTIONS(1321),
    [anon_sym_internal] = ACTIONS(1321),
    [anon_sym_private] = ACTIONS(1321),
    [anon_sym_interface] = ACTIONS(1321),
    [anon_sym_struct] = ACTIONS(1321),
    [anon_sym_enum] = ACTIONS(1321),
    [anon_sym_sbyte] = ACTIONS(1321),
    [anon_sym_byte] = ACTIONS(1321),
    [anon_sym_short] = ACTIONS(1321),
    [anon_sym_ushort] = ACTIONS(1321),
    [anon_sym_int] = ACTIONS(1321),
    [anon_sym_uint] = ACTIONS(1321),
    [anon_sym_long] = ACTIONS(1321),
    [anon_sym_ulong] = ACTIONS(1321),
    [anon_sym_char] = ACTIONS(1321),
    [anon_sym_delegate] = ACTIONS(1321),
    [anon_sym_LBRACK] = ACTIONS(1175),
    [sym_const_keyword] = ACTIONS(1321),
    [anon_sym_readonly] = ACTIONS(1321),
    [anon_sym_volatile] = ACTIONS(1321),
    [anon_sym_bool] = ACTIONS(1321),
    [anon_sym_decimal] = ACTIONS(1321),
    [anon_sym_double] = ACTIONS(1321),
    [anon_sym_float] = ACTIONS(1321),
    [anon_sym_object] = ACTIONS(1321),
    [anon_sym_string] = ACTIONS(1321),
    [sym_identifier_name] = ACTIONS(1323),
    [sym_comment] = ACTIONS(36),
  },
  [682] = {
    [anon_sym_RBRACE] = ACTIONS(1177),
    [anon_sym_class] = ACTIONS(1325),
    [anon_sym_unsafe] = ACTIONS(1325),
    [anon_sym_abstract] = ACTIONS(1325),
    [anon_sym_sealed] = ACTIONS(1325),
    [anon_sym_static] = ACTIONS(1325),
    [anon_sym_new] = ACTIONS(1325),
    [anon_sym_public] = ACTIONS(1325),
    [anon_sym_protected] = ACTIONS(1325),
    [anon_sym_internal] = ACTIONS(1325),
    [anon_sym_private] = ACTIONS(1325),
    [anon_sym_interface] = ACTIONS(1325),
    [anon_sym_struct] = ACTIONS(1325),
    [anon_sym_enum] = ACTIONS(1325),
    [anon_sym_sbyte] = ACTIONS(1325),
    [anon_sym_byte] = ACTIONS(1325),
    [anon_sym_short] = ACTIONS(1325),
    [anon_sym_ushort] = ACTIONS(1325),
    [anon_sym_int] = ACTIONS(1325),
    [anon_sym_uint] = ACTIONS(1325),
    [anon_sym_long] = ACTIONS(1325),
    [anon_sym_ulong] = ACTIONS(1325),
    [anon_sym_char] = ACTIONS(1325),
    [anon_sym_delegate] = ACTIONS(1325),
    [anon_sym_LBRACK] = ACTIONS(1177),
    [sym_const_keyword] = ACTIONS(1325),
    [anon_sym_readonly] = ACTIONS(1325),
    [anon_sym_volatile] = ACTIONS(1325),
    [anon_sym_bool] = ACTIONS(1325),
    [anon_sym_decimal] = ACTIONS(1325),
    [anon_sym_double] = ACTIONS(1325),
    [anon_sym_float] = ACTIONS(1325),
    [anon_sym_object] = ACTIONS(1325),
    [anon_sym_string] = ACTIONS(1325),
    [sym_identifier_name] = ACTIONS(1327),
    [sym_comment] = ACTIONS(36),
  },
  [683] = {
    [aux_sym_enum_declaration_repeat1] = STATE(690),
    [anon_sym_RBRACE] = ACTIONS(1331),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(36),
  },
  [684] = {
    [ts_builtin_sym_end] = ACTIONS(1333),
    [anon_sym_using] = ACTIONS(1333),
    [anon_sym_namespace] = ACTIONS(1333),
    [anon_sym_RBRACE] = ACTIONS(1333),
    [anon_sym_class] = ACTIONS(1333),
    [anon_sym_unsafe] = ACTIONS(1333),
    [anon_sym_abstract] = ACTIONS(1333),
    [anon_sym_sealed] = ACTIONS(1333),
    [anon_sym_static] = ACTIONS(1333),
    [anon_sym_new] = ACTIONS(1333),
    [anon_sym_public] = ACTIONS(1333),
    [anon_sym_protected] = ACTIONS(1333),
    [anon_sym_internal] = ACTIONS(1333),
    [anon_sym_private] = ACTIONS(1333),
    [anon_sym_interface] = ACTIONS(1333),
    [anon_sym_struct] = ACTIONS(1333),
    [anon_sym_enum] = ACTIONS(1333),
    [anon_sym_delegate] = ACTIONS(1333),
    [anon_sym_LBRACK] = ACTIONS(1333),
    [sym_comment] = ACTIONS(36),
  },
  [685] = {
    [anon_sym_RBRACE] = ACTIONS(1245),
    [anon_sym_class] = ACTIONS(1335),
    [anon_sym_unsafe] = ACTIONS(1335),
    [anon_sym_abstract] = ACTIONS(1335),
    [anon_sym_sealed] = ACTIONS(1335),
    [anon_sym_static] = ACTIONS(1335),
    [anon_sym_new] = ACTIONS(1335),
    [anon_sym_public] = ACTIONS(1335),
    [anon_sym_protected] = ACTIONS(1335),
    [anon_sym_internal] = ACTIONS(1335),
    [anon_sym_private] = ACTIONS(1335),
    [anon_sym_interface] = ACTIONS(1335),
    [anon_sym_struct] = ACTIONS(1335),
    [anon_sym_enum] = ACTIONS(1335),
    [anon_sym_sbyte] = ACTIONS(1335),
    [anon_sym_byte] = ACTIONS(1335),
    [anon_sym_short] = ACTIONS(1335),
    [anon_sym_ushort] = ACTIONS(1335),
    [anon_sym_int] = ACTIONS(1335),
    [anon_sym_uint] = ACTIONS(1335),
    [anon_sym_long] = ACTIONS(1335),
    [anon_sym_ulong] = ACTIONS(1335),
    [anon_sym_char] = ACTIONS(1335),
    [anon_sym_delegate] = ACTIONS(1335),
    [sym_void_keyword] = ACTIONS(1335),
    [anon_sym_LBRACK] = ACTIONS(1245),
    [sym_const_keyword] = ACTIONS(1335),
    [anon_sym_readonly] = ACTIONS(1335),
    [anon_sym_volatile] = ACTIONS(1335),
    [anon_sym_bool] = ACTIONS(1335),
    [anon_sym_decimal] = ACTIONS(1335),
    [anon_sym_double] = ACTIONS(1335),
    [anon_sym_float] = ACTIONS(1335),
    [anon_sym_object] = ACTIONS(1335),
    [anon_sym_string] = ACTIONS(1335),
    [sym_identifier_name] = ACTIONS(1337),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1335),
  },
  [686] = {
    [anon_sym_SEMI] = ACTIONS(1339),
    [anon_sym_RBRACE] = ACTIONS(1245),
    [anon_sym_class] = ACTIONS(1335),
    [anon_sym_unsafe] = ACTIONS(1335),
    [anon_sym_abstract] = ACTIONS(1335),
    [anon_sym_sealed] = ACTIONS(1335),
    [anon_sym_static] = ACTIONS(1335),
    [anon_sym_new] = ACTIONS(1335),
    [anon_sym_public] = ACTIONS(1335),
    [anon_sym_protected] = ACTIONS(1335),
    [anon_sym_internal] = ACTIONS(1335),
    [anon_sym_private] = ACTIONS(1335),
    [anon_sym_interface] = ACTIONS(1335),
    [anon_sym_struct] = ACTIONS(1335),
    [anon_sym_enum] = ACTIONS(1335),
    [anon_sym_sbyte] = ACTIONS(1335),
    [anon_sym_byte] = ACTIONS(1335),
    [anon_sym_short] = ACTIONS(1335),
    [anon_sym_ushort] = ACTIONS(1335),
    [anon_sym_int] = ACTIONS(1335),
    [anon_sym_uint] = ACTIONS(1335),
    [anon_sym_long] = ACTIONS(1335),
    [anon_sym_ulong] = ACTIONS(1335),
    [anon_sym_char] = ACTIONS(1335),
    [anon_sym_delegate] = ACTIONS(1335),
    [sym_void_keyword] = ACTIONS(1335),
    [anon_sym_LBRACK] = ACTIONS(1245),
    [sym_const_keyword] = ACTIONS(1335),
    [anon_sym_readonly] = ACTIONS(1335),
    [anon_sym_volatile] = ACTIONS(1335),
    [anon_sym_bool] = ACTIONS(1335),
    [anon_sym_decimal] = ACTIONS(1335),
    [anon_sym_double] = ACTIONS(1335),
    [anon_sym_float] = ACTIONS(1335),
    [anon_sym_object] = ACTIONS(1335),
    [anon_sym_string] = ACTIONS(1335),
    [sym_identifier_name] = ACTIONS(1337),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1335),
  },
  [687] = {
    [anon_sym_RBRACE] = ACTIONS(1341),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [688] = {
    [anon_sym_RBRACE] = ACTIONS(1245),
    [anon_sym_class] = ACTIONS(1335),
    [anon_sym_unsafe] = ACTIONS(1335),
    [anon_sym_abstract] = ACTIONS(1335),
    [anon_sym_sealed] = ACTIONS(1335),
    [anon_sym_static] = ACTIONS(1335),
    [anon_sym_new] = ACTIONS(1335),
    [anon_sym_public] = ACTIONS(1335),
    [anon_sym_protected] = ACTIONS(1335),
    [anon_sym_internal] = ACTIONS(1335),
    [anon_sym_private] = ACTIONS(1335),
    [anon_sym_interface] = ACTIONS(1335),
    [anon_sym_struct] = ACTIONS(1335),
    [anon_sym_enum] = ACTIONS(1335),
    [anon_sym_sbyte] = ACTIONS(1335),
    [anon_sym_byte] = ACTIONS(1335),
    [anon_sym_short] = ACTIONS(1335),
    [anon_sym_ushort] = ACTIONS(1335),
    [anon_sym_int] = ACTIONS(1335),
    [anon_sym_uint] = ACTIONS(1335),
    [anon_sym_long] = ACTIONS(1335),
    [anon_sym_ulong] = ACTIONS(1335),
    [anon_sym_char] = ACTIONS(1335),
    [anon_sym_delegate] = ACTIONS(1335),
    [anon_sym_LBRACK] = ACTIONS(1245),
    [sym_const_keyword] = ACTIONS(1335),
    [anon_sym_readonly] = ACTIONS(1335),
    [anon_sym_volatile] = ACTIONS(1335),
    [anon_sym_bool] = ACTIONS(1335),
    [anon_sym_decimal] = ACTIONS(1335),
    [anon_sym_double] = ACTIONS(1335),
    [anon_sym_float] = ACTIONS(1335),
    [anon_sym_object] = ACTIONS(1335),
    [anon_sym_string] = ACTIONS(1335),
    [sym_identifier_name] = ACTIONS(1337),
    [sym_comment] = ACTIONS(36),
  },
  [689] = {
    [anon_sym_SEMI] = ACTIONS(1343),
    [anon_sym_RBRACE] = ACTIONS(1245),
    [anon_sym_class] = ACTIONS(1335),
    [anon_sym_unsafe] = ACTIONS(1335),
    [anon_sym_abstract] = ACTIONS(1335),
    [anon_sym_sealed] = ACTIONS(1335),
    [anon_sym_static] = ACTIONS(1335),
    [anon_sym_new] = ACTIONS(1335),
    [anon_sym_public] = ACTIONS(1335),
    [anon_sym_protected] = ACTIONS(1335),
    [anon_sym_internal] = ACTIONS(1335),
    [anon_sym_private] = ACTIONS(1335),
    [anon_sym_interface] = ACTIONS(1335),
    [anon_sym_struct] = ACTIONS(1335),
    [anon_sym_enum] = ACTIONS(1335),
    [anon_sym_sbyte] = ACTIONS(1335),
    [anon_sym_byte] = ACTIONS(1335),
    [anon_sym_short] = ACTIONS(1335),
    [anon_sym_ushort] = ACTIONS(1335),
    [anon_sym_int] = ACTIONS(1335),
    [anon_sym_uint] = ACTIONS(1335),
    [anon_sym_long] = ACTIONS(1335),
    [anon_sym_ulong] = ACTIONS(1335),
    [anon_sym_char] = ACTIONS(1335),
    [anon_sym_delegate] = ACTIONS(1335),
    [anon_sym_LBRACK] = ACTIONS(1245),
    [sym_const_keyword] = ACTIONS(1335),
    [anon_sym_readonly] = ACTIONS(1335),
    [anon_sym_volatile] = ACTIONS(1335),
    [anon_sym_bool] = ACTIONS(1335),
    [anon_sym_decimal] = ACTIONS(1335),
    [anon_sym_double] = ACTIONS(1335),
    [anon_sym_float] = ACTIONS(1335),
    [anon_sym_object] = ACTIONS(1335),
    [anon_sym_string] = ACTIONS(1335),
    [sym_identifier_name] = ACTIONS(1337),
    [sym_comment] = ACTIONS(36),
  },
  [690] = {
    [anon_sym_RBRACE] = ACTIONS(1345),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym_comment] = ACTIONS(36),
  },
  [691] = {
    [anon_sym_RBRACE] = ACTIONS(1305),
    [anon_sym_class] = ACTIONS(1347),
    [anon_sym_unsafe] = ACTIONS(1347),
    [anon_sym_abstract] = ACTIONS(1347),
    [anon_sym_sealed] = ACTIONS(1347),
    [anon_sym_static] = ACTIONS(1347),
    [anon_sym_new] = ACTIONS(1347),
    [anon_sym_public] = ACTIONS(1347),
    [anon_sym_protected] = ACTIONS(1347),
    [anon_sym_internal] = ACTIONS(1347),
    [anon_sym_private] = ACTIONS(1347),
    [anon_sym_interface] = ACTIONS(1347),
    [anon_sym_struct] = ACTIONS(1347),
    [anon_sym_enum] = ACTIONS(1347),
    [anon_sym_sbyte] = ACTIONS(1347),
    [anon_sym_byte] = ACTIONS(1347),
    [anon_sym_short] = ACTIONS(1347),
    [anon_sym_ushort] = ACTIONS(1347),
    [anon_sym_int] = ACTIONS(1347),
    [anon_sym_uint] = ACTIONS(1347),
    [anon_sym_long] = ACTIONS(1347),
    [anon_sym_ulong] = ACTIONS(1347),
    [anon_sym_char] = ACTIONS(1347),
    [anon_sym_delegate] = ACTIONS(1347),
    [sym_void_keyword] = ACTIONS(1347),
    [anon_sym_LBRACK] = ACTIONS(1305),
    [sym_const_keyword] = ACTIONS(1347),
    [anon_sym_readonly] = ACTIONS(1347),
    [anon_sym_volatile] = ACTIONS(1347),
    [anon_sym_bool] = ACTIONS(1347),
    [anon_sym_decimal] = ACTIONS(1347),
    [anon_sym_double] = ACTIONS(1347),
    [anon_sym_float] = ACTIONS(1347),
    [anon_sym_object] = ACTIONS(1347),
    [anon_sym_string] = ACTIONS(1347),
    [sym_identifier_name] = ACTIONS(1349),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1347),
  },
  [692] = {
    [anon_sym_SEMI] = ACTIONS(1351),
    [anon_sym_RBRACE] = ACTIONS(1305),
    [anon_sym_class] = ACTIONS(1347),
    [anon_sym_unsafe] = ACTIONS(1347),
    [anon_sym_abstract] = ACTIONS(1347),
    [anon_sym_sealed] = ACTIONS(1347),
    [anon_sym_static] = ACTIONS(1347),
    [anon_sym_new] = ACTIONS(1347),
    [anon_sym_public] = ACTIONS(1347),
    [anon_sym_protected] = ACTIONS(1347),
    [anon_sym_internal] = ACTIONS(1347),
    [anon_sym_private] = ACTIONS(1347),
    [anon_sym_interface] = ACTIONS(1347),
    [anon_sym_struct] = ACTIONS(1347),
    [anon_sym_enum] = ACTIONS(1347),
    [anon_sym_sbyte] = ACTIONS(1347),
    [anon_sym_byte] = ACTIONS(1347),
    [anon_sym_short] = ACTIONS(1347),
    [anon_sym_ushort] = ACTIONS(1347),
    [anon_sym_int] = ACTIONS(1347),
    [anon_sym_uint] = ACTIONS(1347),
    [anon_sym_long] = ACTIONS(1347),
    [anon_sym_ulong] = ACTIONS(1347),
    [anon_sym_char] = ACTIONS(1347),
    [anon_sym_delegate] = ACTIONS(1347),
    [sym_void_keyword] = ACTIONS(1347),
    [anon_sym_LBRACK] = ACTIONS(1305),
    [sym_const_keyword] = ACTIONS(1347),
    [anon_sym_readonly] = ACTIONS(1347),
    [anon_sym_volatile] = ACTIONS(1347),
    [anon_sym_bool] = ACTIONS(1347),
    [anon_sym_decimal] = ACTIONS(1347),
    [anon_sym_double] = ACTIONS(1347),
    [anon_sym_float] = ACTIONS(1347),
    [anon_sym_object] = ACTIONS(1347),
    [anon_sym_string] = ACTIONS(1347),
    [sym_identifier_name] = ACTIONS(1349),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1347),
  },
  [693] = {
    [anon_sym_RBRACE] = ACTIONS(1305),
    [anon_sym_class] = ACTIONS(1347),
    [anon_sym_unsafe] = ACTIONS(1347),
    [anon_sym_abstract] = ACTIONS(1347),
    [anon_sym_sealed] = ACTIONS(1347),
    [anon_sym_static] = ACTIONS(1347),
    [anon_sym_new] = ACTIONS(1347),
    [anon_sym_public] = ACTIONS(1347),
    [anon_sym_protected] = ACTIONS(1347),
    [anon_sym_internal] = ACTIONS(1347),
    [anon_sym_private] = ACTIONS(1347),
    [anon_sym_interface] = ACTIONS(1347),
    [anon_sym_struct] = ACTIONS(1347),
    [anon_sym_enum] = ACTIONS(1347),
    [anon_sym_sbyte] = ACTIONS(1347),
    [anon_sym_byte] = ACTIONS(1347),
    [anon_sym_short] = ACTIONS(1347),
    [anon_sym_ushort] = ACTIONS(1347),
    [anon_sym_int] = ACTIONS(1347),
    [anon_sym_uint] = ACTIONS(1347),
    [anon_sym_long] = ACTIONS(1347),
    [anon_sym_ulong] = ACTIONS(1347),
    [anon_sym_char] = ACTIONS(1347),
    [anon_sym_delegate] = ACTIONS(1347),
    [anon_sym_LBRACK] = ACTIONS(1305),
    [sym_const_keyword] = ACTIONS(1347),
    [anon_sym_readonly] = ACTIONS(1347),
    [anon_sym_volatile] = ACTIONS(1347),
    [anon_sym_bool] = ACTIONS(1347),
    [anon_sym_decimal] = ACTIONS(1347),
    [anon_sym_double] = ACTIONS(1347),
    [anon_sym_float] = ACTIONS(1347),
    [anon_sym_object] = ACTIONS(1347),
    [anon_sym_string] = ACTIONS(1347),
    [sym_identifier_name] = ACTIONS(1349),
    [sym_comment] = ACTIONS(36),
  },
  [694] = {
    [anon_sym_SEMI] = ACTIONS(1353),
    [anon_sym_RBRACE] = ACTIONS(1305),
    [anon_sym_class] = ACTIONS(1347),
    [anon_sym_unsafe] = ACTIONS(1347),
    [anon_sym_abstract] = ACTIONS(1347),
    [anon_sym_sealed] = ACTIONS(1347),
    [anon_sym_static] = ACTIONS(1347),
    [anon_sym_new] = ACTIONS(1347),
    [anon_sym_public] = ACTIONS(1347),
    [anon_sym_protected] = ACTIONS(1347),
    [anon_sym_internal] = ACTIONS(1347),
    [anon_sym_private] = ACTIONS(1347),
    [anon_sym_interface] = ACTIONS(1347),
    [anon_sym_struct] = ACTIONS(1347),
    [anon_sym_enum] = ACTIONS(1347),
    [anon_sym_sbyte] = ACTIONS(1347),
    [anon_sym_byte] = ACTIONS(1347),
    [anon_sym_short] = ACTIONS(1347),
    [anon_sym_ushort] = ACTIONS(1347),
    [anon_sym_int] = ACTIONS(1347),
    [anon_sym_uint] = ACTIONS(1347),
    [anon_sym_long] = ACTIONS(1347),
    [anon_sym_ulong] = ACTIONS(1347),
    [anon_sym_char] = ACTIONS(1347),
    [anon_sym_delegate] = ACTIONS(1347),
    [anon_sym_LBRACK] = ACTIONS(1305),
    [sym_const_keyword] = ACTIONS(1347),
    [anon_sym_readonly] = ACTIONS(1347),
    [anon_sym_volatile] = ACTIONS(1347),
    [anon_sym_bool] = ACTIONS(1347),
    [anon_sym_decimal] = ACTIONS(1347),
    [anon_sym_double] = ACTIONS(1347),
    [anon_sym_float] = ACTIONS(1347),
    [anon_sym_object] = ACTIONS(1347),
    [anon_sym_string] = ACTIONS(1347),
    [sym_identifier_name] = ACTIONS(1349),
    [sym_comment] = ACTIONS(36),
  },
  [695] = {
    [anon_sym_RBRACE] = ACTIONS(1333),
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
    [anon_sym_sbyte] = ACTIONS(1355),
    [anon_sym_byte] = ACTIONS(1355),
    [anon_sym_short] = ACTIONS(1355),
    [anon_sym_ushort] = ACTIONS(1355),
    [anon_sym_int] = ACTIONS(1355),
    [anon_sym_uint] = ACTIONS(1355),
    [anon_sym_long] = ACTIONS(1355),
    [anon_sym_ulong] = ACTIONS(1355),
    [anon_sym_char] = ACTIONS(1355),
    [anon_sym_delegate] = ACTIONS(1355),
    [sym_void_keyword] = ACTIONS(1355),
    [anon_sym_LBRACK] = ACTIONS(1333),
    [sym_const_keyword] = ACTIONS(1355),
    [anon_sym_readonly] = ACTIONS(1355),
    [anon_sym_volatile] = ACTIONS(1355),
    [anon_sym_bool] = ACTIONS(1355),
    [anon_sym_decimal] = ACTIONS(1355),
    [anon_sym_double] = ACTIONS(1355),
    [anon_sym_float] = ACTIONS(1355),
    [anon_sym_object] = ACTIONS(1355),
    [anon_sym_string] = ACTIONS(1355),
    [sym_identifier_name] = ACTIONS(1357),
    [sym_comment] = ACTIONS(36),
    [anon_sym_async] = ACTIONS(1355),
  },
  [696] = {
    [anon_sym_RBRACE] = ACTIONS(1333),
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
    [anon_sym_sbyte] = ACTIONS(1355),
    [anon_sym_byte] = ACTIONS(1355),
    [anon_sym_short] = ACTIONS(1355),
    [anon_sym_ushort] = ACTIONS(1355),
    [anon_sym_int] = ACTIONS(1355),
    [anon_sym_uint] = ACTIONS(1355),
    [anon_sym_long] = ACTIONS(1355),
    [anon_sym_ulong] = ACTIONS(1355),
    [anon_sym_char] = ACTIONS(1355),
    [anon_sym_delegate] = ACTIONS(1355),
    [anon_sym_LBRACK] = ACTIONS(1333),
    [sym_const_keyword] = ACTIONS(1355),
    [anon_sym_readonly] = ACTIONS(1355),
    [anon_sym_volatile] = ACTIONS(1355),
    [anon_sym_bool] = ACTIONS(1355),
    [anon_sym_decimal] = ACTIONS(1355),
    [anon_sym_double] = ACTIONS(1355),
    [anon_sym_float] = ACTIONS(1355),
    [anon_sym_object] = ACTIONS(1355),
    [anon_sym_string] = ACTIONS(1355),
    [sym_identifier_name] = ACTIONS(1357),
    [sym_comment] = ACTIONS(36),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_modifier, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__interface_modifiers, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifiers, 1),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_modifiers, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__interface_modifiers, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_type, 1, .fragile = true),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 2),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1, .fragile = true),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_modifier, 1),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1, .fragile = true),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__interface_modifiers, 1),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifiers, 1),
  [366] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1, .fragile = true), REDUCE(sym_method_modifiers, 1, .fragile = true),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_modifiers, 1, .fragile = true),
  [371] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1, .fragile = true), REDUCE(sym_method_modifiers, 1, .fragile = true),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_declaration, 1),
  [388] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [420] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_type, 1, .fragile = true), SHIFT(237),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 4),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 1),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_declaration_repeat1, 1),
  [441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 1),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
  [463] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 4),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
  [541] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
  [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 5),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_modifier, 1),
  [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_modifier, 1),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 5),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 6),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(471),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(472),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(475),
  [819] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(476),
  [821] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(477),
  [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(481),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(483),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(484),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(485),
  [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(486),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(489),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 2),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(516),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
  [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 4),
  [905] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 4),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
  [911] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(531),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(532),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 4),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 4),
  [935] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 4),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
  [941] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(545),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(556),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(558),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(559),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(561),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(569),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(570),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(573),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [995] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
  [997] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
  [999] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
  [1003] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
  [1005] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(576),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
  [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 3),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
  [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
  [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(581),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(582),
  [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_type, 2),
  [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
  [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3),
  [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(588),
  [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(589),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
  [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 7),
  [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
  [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(592),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(593),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
  [1051] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
  [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(595),
  [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 5),
  [1057] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 5),
  [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(596),
  [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
  [1063] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
  [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(598),
  [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
  [1071] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
  [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(599),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5),
  [1077] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
  [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 5),
  [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 5),
  [1083] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 5),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
  [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
  [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 2),
  [1095] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 2),
  [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 1),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
  [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
  [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
  [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
  [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 5),
  [1113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
  [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(616),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(617),
  [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(618),
  [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(619),
  [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
  [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(626),
  [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(627),
  [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(628),
  [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(629),
  [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
  [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(633),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(634),
  [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
  [1147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
  [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
  [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
  [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
  [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1),
  [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 2),
  [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(636),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(637),
  [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(638),
  [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
  [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 4),
  [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 4),
  [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(640),
  [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
  [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 8),
  [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
  [1181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
  [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 6),
  [1185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 6),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
  [1189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
  [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
  [1193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
  [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(642),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(643),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 6),
  [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 6),
  [1203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 6),
  [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(645),
  [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
  [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(647),
  [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6),
  [1213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
  [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_block, 3),
  [1219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_block, 3),
  [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(652),
  [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(653),
  [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(655),
  [1229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(656),
  [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(658),
  [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(659),
  [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(660),
  [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(665),
  [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(666),
  [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
  [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(667),
  [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
  [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
  [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 3),
  [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 5),
  [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(668),
  [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(669),
  [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
  [1259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
  [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(670),
  [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(671),
  [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
  [1267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 7),
  [1271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 7),
  [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
  [1275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(673),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(674),
  [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(675),
  [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 7),
  [1285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 7),
  [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 7),
  [1291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 7),
  [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(677),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(678),
  [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(680),
  [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(681),
  [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(682),
  [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
  [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
  [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(684),
  [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8),
  [1311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
  [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(685),
  [1315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(686),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
  [1319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
  [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 8),
  [1323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 8),
  [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
  [1327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
  [1329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(688),
  [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(689),
  [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9),
  [1337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
  [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(691),
  [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(692),
  [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(693),
  [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(694),
  [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10),
  [1349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
  [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(695),
  [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(696),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 11),
  [1357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
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
