#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 520
#define SYMBOL_COUNT 165
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
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
  sym_compilation_unit = 89,
  sym__type_declaration = 90,
  sym_extern_alias_directive = 91,
  sym_using_directive = 92,
  sym_namespace_declaration = 93,
  sym_class_declaration = 94,
  sym_class_modifiers = 95,
  sym__class_modifiers = 96,
  sym_interface_declaration = 97,
  sym_interface_modifiers = 98,
  sym__interface_modifiers = 99,
  sym_struct_declaration = 100,
  sym_struct_modifiers = 101,
  sym__struct_modifiers = 102,
  sym_enum_declaration = 103,
  sym_enum_member_declaration = 104,
  sym_enum_modifier = 105,
  sym__integral_type = 106,
  sym_delegate_declaration = 107,
  sym_delegate_modifier = 108,
  sym__return_type = 109,
  sym_parameter_list = 110,
  sym__formal_parameter_list = 111,
  sym_parameter = 112,
  sym_parameter_modifier = 113,
  sym_parameter_array = 114,
  sym_array_type = 115,
  sym_array_rank_specifier = 116,
  sym__attributes = 117,
  sym__attribute_section = 118,
  sym_attribute_list = 119,
  sym_attribute = 120,
  sym_attribute_argument_list = 121,
  sym__global_attributes = 122,
  sym_field_declaration = 123,
  sym_field_modifiers = 124,
  sym__field_modifiers = 125,
  sym_variable_declaration = 126,
  sym__type = 127,
  sym_generic_name = 128,
  sym_variable_declarator = 129,
  sym_equals_value_clause = 130,
  sym__expression = 131,
  sym__literal = 132,
  sym_boolean_literal = 133,
  sym_character_literal = 134,
  sym__unicode_escape_sequence = 135,
  sym__simple_escape_sequence = 136,
  sym_integer_literal = 137,
  sym_real_literal = 138,
  sym_string_literal = 139,
  sym__regular_string_literal = 140,
  sym__regular_string_literal_character = 141,
  sym__verbatim_string_literal = 142,
  sym_predefined_type = 143,
  sym_type_parameter_list = 144,
  sym_type_parameter = 145,
  sym_qualified_name = 146,
  sym_alias_qualified_name = 147,
  sym_name_equals = 148,
  sym_static = 149,
  aux_sym_compilation_unit_repeat1 = 150,
  aux_sym_compilation_unit_repeat2 = 151,
  aux_sym_compilation_unit_repeat3 = 152,
  aux_sym_compilation_unit_repeat4 = 153,
  aux_sym_namespace_declaration_repeat1 = 154,
  aux_sym_class_declaration_repeat1 = 155,
  aux_sym_interface_declaration_repeat1 = 156,
  aux_sym_enum_declaration_repeat1 = 157,
  aux_sym__formal_parameter_list_repeat1 = 158,
  aux_sym_array_rank_specifier_repeat1 = 159,
  aux_sym__attributes_repeat1 = 160,
  aux_sym_attribute_list_repeat1 = 161,
  aux_sym_variable_declaration_repeat1 = 162,
  aux_sym__regular_string_literal_repeat1 = 163,
  aux_sym_type_parameter_list_repeat1 = 164,
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
  [sym_enum_modifier] = "enum_modifier",
  [sym__integral_type] = "_integral_type",
  [sym_delegate_declaration] = "delegate_declaration",
  [sym_delegate_modifier] = "delegate_modifier",
  [sym__return_type] = "_return_type",
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
  [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
  [aux_sym_compilation_unit_repeat2] = "compilation_unit_repeat2",
  [aux_sym_compilation_unit_repeat3] = "compilation_unit_repeat3",
  [aux_sym_compilation_unit_repeat4] = "compilation_unit_repeat4",
  [aux_sym_namespace_declaration_repeat1] = "namespace_declaration_repeat1",
  [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
  [aux_sym_interface_declaration_repeat1] = "interface_declaration_repeat1",
  [aux_sym_enum_declaration_repeat1] = "enum_declaration_repeat1",
  [aux_sym__formal_parameter_list_repeat1] = "_formal_parameter_list_repeat1",
  [aux_sym_array_rank_specifier_repeat1] = "array_rank_specifier_repeat1",
  [aux_sym__attributes_repeat1] = "_attributes_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
  [aux_sym__regular_string_literal_repeat1] = "_regular_string_literal_repeat1",
  [aux_sym_type_parameter_list_repeat1] = "type_parameter_list_repeat1",
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
  [sym_enum_modifier] = {
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
  [sym__return_type] = {
    .visible = false,
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
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(85);
      if (lookahead == 'e')
        ADVANCE(103);
      if (lookahead == 'f')
        ADVANCE(107);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(134);
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'o')
        ADVANCE(143);
      if (lookahead == 'p')
        ADVANCE(151);
      if (lookahead == 'r')
        ADVANCE(175);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead == 't')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(214);
      if (lookahead == 'v')
        ADVANCE(232);
      if (('D' <= lookahead && lookahead <= 'F'))
        ADVANCE(242);
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
      if (lookahead == 'o')
        ADVANCE(67);
      if (lookahead == 'y')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(74);
      if (lookahead == 'l')
        ADVANCE(77);
      if (lookahead == 'o')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_char);
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
      if (lookahead == 's')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'e')
        ADVANCE(86);
      if (lookahead == 'o')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(87);
      if (lookahead == 'l')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_delegate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(104);
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
    case 104:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'l')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_internal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(19);
      if (lookahead == 'o')
        ADVANCE(131);
      if (lookahead == 'u')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'o')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'w')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(144);
      if (lookahead == 'u')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'j')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(152);
      if (lookahead == 'r')
        ADVANCE(157);
      if (lookahead == 'u')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_params_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(158);
      if (lookahead == 'o')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'v')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(166);
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
      if (lookahead == 'd')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(177);
      if (lookahead == 'f')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(185);
      if (lookahead == 'e')
        ADVANCE(189);
      if (lookahead == 'h')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_sbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_sealed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(199);
      if (lookahead == 'r')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_static);
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
      if (lookahead == 'u')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'l')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == 's')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'o')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(234);
      if (lookahead == 'l')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_void_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 243:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(244);
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(245);
      if (lookahead == ')')
        ADVANCE(246);
      if (lookahead == ',')
        ADVANCE(247);
      if (lookahead == '.')
        ADVANCE(248);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(249);
      if (lookahead == ';')
        ADVANCE(250);
      if (lookahead == '<')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(252);
      if (lookahead == '>')
        ADVANCE(253);
      if (lookahead == '[')
        ADVANCE(254);
      if (lookahead == ']')
        ADVANCE(255);
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'b')
        ADVANCE(268);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'e')
        ADVANCE(288);
      if (lookahead == 'i')
        ADVANCE(297);
      if (lookahead == 'l')
        ADVANCE(309);
      if (lookahead == 'n')
        ADVANCE(313);
      if (lookahead == 'p')
        ADVANCE(324);
      if (lookahead == 's')
        ADVANCE(348);
      if (lookahead == 'u')
        ADVANCE(371);
      if (lookahead == '{')
        ADVANCE(392);
      if (lookahead == '}')
        ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(13);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 256:
      if (lookahead == 'b')
        ADVANCE(257);
      if (lookahead == 'l')
        ADVANCE(264);
      END_STATE();
    case 257:
      if (lookahead == 's')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 't')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'r')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'a')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'c')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 't')
        ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 264:
      if (lookahead == 'i')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'a')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 's')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 268:
      if (lookahead == 'y')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 't')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'e')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 272:
      if (lookahead == 'h')
        ADVANCE(273);
      if (lookahead == 'l')
        ADVANCE(276);
      END_STATE();
    case 273:
      if (lookahead == 'a')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'r')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 276:
      if (lookahead == 'a')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 's')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 's')
        ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 280:
      if (lookahead == 'e')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'l')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'e')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'g')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'a')
        ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 't')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 'e')
        ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 288:
      if (lookahead == 'n')
        ADVANCE(289);
      if (lookahead == 'x')
        ADVANCE(292);
      END_STATE();
    case 289:
      if (lookahead == 'u')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'm')
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 292:
      if (lookahead == 't')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'e')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'r')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'n')
        ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 297:
      if (lookahead == 'n')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 't')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'r')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'f')
        ADVANCE(302);
      if (lookahead == 'n')
        ADVANCE(306);
      END_STATE();
    case 302:
      if (lookahead == 'a')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'c')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'e')
        ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 306:
      if (lookahead == 'a')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'l')
        ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 309:
      if (lookahead == 'o')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'n')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'g')
        ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 313:
      if (lookahead == 'a')
        ADVANCE(314);
      if (lookahead == 'e')
        ADVANCE(322);
      END_STATE();
    case 314:
      if (lookahead == 'm')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'e')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 's')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'p')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'a')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'c')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'e')
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 322:
      if (lookahead == 'w')
        ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 324:
      if (lookahead == 'a')
        ADVANCE(325);
      if (lookahead == 'r')
        ADVANCE(330);
      if (lookahead == 'u')
        ADVANCE(343);
      END_STATE();
    case 325:
      if (lookahead == 'r')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'a')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'm')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 's')
        ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_params_keyword);
      END_STATE();
    case 330:
      if (lookahead == 'i')
        ADVANCE(331);
      if (lookahead == 'o')
        ADVANCE(336);
      END_STATE();
    case 331:
      if (lookahead == 'v')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'a')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 't')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'e')
        ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_private);
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
      if (lookahead == 'c')
        ADVANCE(339);
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
      if (lookahead == 'd')
        ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 343:
      if (lookahead == 'b')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'l')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'i')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'c')
        ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 348:
      if (lookahead == 'b')
        ADVANCE(349);
      if (lookahead == 'e')
        ADVANCE(353);
      if (lookahead == 'h')
        ADVANCE(358);
      if (lookahead == 't')
        ADVANCE(362);
      END_STATE();
    case 349:
      if (lookahead == 'y')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 't')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 'e')
        ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_sbyte);
      END_STATE();
    case 353:
      if (lookahead == 'a')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'l')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'e')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'd')
        ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 358:
      if (lookahead == 'o')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'r')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 't')
        ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 362:
      if (lookahead == 'a')
        ADVANCE(363);
      if (lookahead == 'r')
        ADVANCE(367);
      END_STATE();
    case 363:
      if (lookahead == 't')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 'i')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 'c')
        ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 367:
      if (lookahead == 'u')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'c')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 't')
        ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 371:
      if (lookahead == 'i')
        ADVANCE(372);
      if (lookahead == 'l')
        ADVANCE(375);
      if (lookahead == 'n')
        ADVANCE(379);
      if (lookahead == 's')
        ADVANCE(384);
      END_STATE();
    case 372:
      if (lookahead == 'n')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 't')
        ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 375:
      if (lookahead == 'o')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'n')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'g')
        ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 379:
      if (lookahead == 's')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'a')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'f')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'e')
        ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 384:
      if (lookahead == 'h')
        ADVANCE(385);
      if (lookahead == 'i')
        ADVANCE(389);
      END_STATE();
    case 385:
      if (lookahead == 'o')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'r')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 't')
        ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 389:
      if (lookahead == 'n')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'g')
        ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 394:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 's')
        ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 397:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'g')
        ADVANCE(112);
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
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 399:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(400);
      if (lookahead == 'd')
        ADVANCE(401);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(404);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 'u')
        ADVANCE(412);
      if (lookahead == 'v')
        ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(402);
      if (lookahead == 'o')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(185);
      if (lookahead == 'h')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'l')
        ADVANCE(413);
      if (lookahead == 's')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 416:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(417);
      if (lookahead == 'm')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 419:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(250);
      if (lookahead == '[')
        ADVANCE(254);
      if (lookahead == 'a')
        ADVANCE(420);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(421);
      if (lookahead == 'e')
        ADVANCE(422);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead == 'p')
        ADVANCE(423);
      if (lookahead == 'r')
        ADVANCE(424);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead == 'u')
        ADVANCE(426);
      if (lookahead == 'v')
        ADVANCE(427);
      if (lookahead == '}')
        ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(86);
      if (lookahead == 'o')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(157);
      if (lookahead == 'u')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'l')
        ADVANCE(413);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == 's')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 429:
      if (lookahead == ',')
        ADVANCE(247);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(251);
      if (lookahead == '>')
        ADVANCE(253);
      if (lookahead == '[')
        ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 430:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(400);
      if (lookahead == 'd')
        ADVANCE(401);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(404);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 'u')
        ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 431:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(254);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(432);
      if (lookahead == 'd')
        ADVANCE(401);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(433);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead == 'p')
        ADVANCE(423);
      if (lookahead == 'r')
        ADVANCE(424);
      if (lookahead == 's')
        ADVANCE(438);
      if (lookahead == 'u')
        ADVANCE(426);
      if (lookahead == 'v')
        ADVANCE(427);
      if (lookahead == '}')
        ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(74);
      if (lookahead == 'o')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(185);
      if (lookahead == 'h')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(199);
      if (lookahead == 'r')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 440:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(420);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(421);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(433);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead == 'p')
        ADVANCE(423);
      if (lookahead == 'r')
        ADVANCE(424);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead == 'u')
        ADVANCE(426);
      if (lookahead == 'v')
        ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 441:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(420);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(401);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(433);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead == 'p')
        ADVANCE(423);
      if (lookahead == 'r')
        ADVANCE(424);
      if (lookahead == 's')
        ADVANCE(442);
      if (lookahead == 'u')
        ADVANCE(426);
      if (lookahead == 'v')
        ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(185);
      if (lookahead == 'e')
        ADVANCE(189);
      if (lookahead == 'h')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 443:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(432);
      if (lookahead == 'd')
        ADVANCE(401);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(404);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 'u')
        ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 444:
      if (lookahead == ')')
        ADVANCE(246);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(254);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(400);
      if (lookahead == 'd')
        ADVANCE(401);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(404);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'o')
        ADVANCE(143);
      if (lookahead == 'p')
        ADVANCE(445);
      if (lookahead == 'r')
        ADVANCE(446);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 't')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(444);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 448:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(420);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(401);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(433);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead == 'p')
        ADVANCE(423);
      if (lookahead == 'r')
        ADVANCE(424);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead == 'u')
        ADVANCE(426);
      if (lookahead == 'v')
        ADVANCE(427);
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
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(420);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(401);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead == 'p')
        ADVANCE(423);
      if (lookahead == 'r')
        ADVANCE(424);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead == 'u')
        ADVANCE(426);
      if (lookahead == 'v')
        ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 450:
      if (lookahead == ',')
        ADVANCE(247);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(253);
      if (lookahead == '[')
        ADVANCE(254);
      if (lookahead == '{')
        ADVANCE(392);
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
      if (lookahead == '\"')
        ADVANCE(244);
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(248);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(452);
      if (lookahead == 'f')
        ADVANCE(454);
      if (lookahead == 'n')
        ADVANCE(459);
      if (lookahead == 't')
        ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(451);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 452:
      if (lookahead == '\"')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 454:
      if (lookahead == 'a')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'l')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 's')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'e')
        ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 459:
      if (lookahead == 'u')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'l')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'l')
        ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 463:
      if (lookahead == 'r')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'u')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 'e')
        ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 467:
      if (lookahead == '/')
        ADVANCE(468);
      if (lookahead == '\\')
        ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(471);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(7);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(470);
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
    case 470:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 472:
      if (lookahead == ')')
        ADVANCE(246);
      if (lookahead == ',')
        ADVANCE(247);
      if (lookahead == '.')
        ADVANCE(248);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(250);
      if (lookahead == 'L')
        ADVANCE(473);
      if (lookahead == 'U')
        ADVANCE(475);
      if (lookahead == '[')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(473);
      if (lookahead == 'p')
        ADVANCE(476);
      if (lookahead == 'u')
        ADVANCE(475);
      if (lookahead == '}')
        ADVANCE(393);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(472);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm')
        ADVANCE(478);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(474);
      if (lookahead == 'u')
        ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(474);
      if (lookahead == 'l')
        ADVANCE(474);
      END_STATE();
    case 476:
      if (lookahead == 'a')
        ADVANCE(325);
      END_STATE();
    case 477:
      if (('+' <= lookahead && lookahead <= ']'))
        ADVANCE(15);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__real_type_suffix);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        SKIP(479);
      if (lookahead == '\"')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(480);
      if (lookahead == '\\')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(482);
      if (lookahead != 0)
        ADVANCE(482);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(7);
      END_STATE();
    case 481:
      if (lookahead == '\"')
        ADVANCE(470);
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
    case 482:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(487);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(485);
      if (lookahead == '/')
        ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(487);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(485);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(487);
      END_STATE();
    case 490:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(254);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(400);
      if (lookahead == 'd')
        ADVANCE(401);
      if (lookahead == 'f')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(404);
      if (lookahead == 'l')
        ADVANCE(407);
      if (lookahead == 'o')
        ADVANCE(143);
      if (lookahead == 'r')
        ADVANCE(446);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 't')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(490);
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
  [1] = {.lex_state = 243},
  [2] = {.lex_state = 243},
  [3] = {.lex_state = 394},
  [4] = {.lex_state = 397},
  [5] = {.lex_state = 398},
  [6] = {.lex_state = 243},
  [7] = {.lex_state = 243},
  [8] = {.lex_state = 243},
  [9] = {.lex_state = 398},
  [10] = {.lex_state = 398},
  [11] = {.lex_state = 398},
  [12] = {.lex_state = 399},
  [13] = {.lex_state = 416},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 243},
  [16] = {.lex_state = 243},
  [17] = {.lex_state = 243},
  [18] = {.lex_state = 243},
  [19] = {.lex_state = 243},
  [20] = {.lex_state = 243},
  [21] = {.lex_state = 243},
  [22] = {.lex_state = 243},
  [23] = {.lex_state = 243},
  [24] = {.lex_state = 243},
  [25] = {.lex_state = 243},
  [26] = {.lex_state = 243},
  [27] = {.lex_state = 243},
  [28] = {.lex_state = 419},
  [29] = {.lex_state = 243},
  [30] = {.lex_state = 243},
  [31] = {.lex_state = 243},
  [32] = {.lex_state = 243},
  [33] = {.lex_state = 243},
  [34] = {.lex_state = 419},
  [35] = {.lex_state = 398},
  [36] = {.lex_state = 397},
  [37] = {.lex_state = 243},
  [38] = {.lex_state = 243},
  [39] = {.lex_state = 243},
  [40] = {.lex_state = 243},
  [41] = {.lex_state = 397},
  [42] = {.lex_state = 243},
  [43] = {.lex_state = 243},
  [44] = {.lex_state = 243},
  [45] = {.lex_state = 243},
  [46] = {.lex_state = 243},
  [47] = {.lex_state = 243},
  [48] = {.lex_state = 243},
  [49] = {.lex_state = 243},
  [50] = {.lex_state = 243},
  [51] = {.lex_state = 243},
  [52] = {.lex_state = 429},
  [53] = {.lex_state = 398},
  [54] = {.lex_state = 429},
  [55] = {.lex_state = 398},
  [56] = {.lex_state = 429},
  [57] = {.lex_state = 243},
  [58] = {.lex_state = 243},
  [59] = {.lex_state = 243},
  [60] = {.lex_state = 243},
  [61] = {.lex_state = 398},
  [62] = {.lex_state = 398},
  [63] = {.lex_state = 398},
  [64] = {.lex_state = 398},
  [65] = {.lex_state = 399},
  [66] = {.lex_state = 243},
  [67] = {.lex_state = 243},
  [68] = {.lex_state = 243},
  [69] = {.lex_state = 243},
  [70] = {.lex_state = 243},
  [71] = {.lex_state = 243},
  [72] = {.lex_state = 243},
  [73] = {.lex_state = 243},
  [74] = {.lex_state = 243},
  [75] = {.lex_state = 243},
  [76] = {.lex_state = 243},
  [77] = {.lex_state = 398},
  [78] = {.lex_state = 243},
  [79] = {.lex_state = 419},
  [80] = {.lex_state = 243},
  [81] = {.lex_state = 398},
  [82] = {.lex_state = 243},
  [83] = {.lex_state = 397},
  [84] = {.lex_state = 398},
  [85] = {.lex_state = 243},
  [86] = {.lex_state = 243},
  [87] = {.lex_state = 419},
  [88] = {.lex_state = 430},
  [89] = {.lex_state = 243},
  [90] = {.lex_state = 431},
  [91] = {.lex_state = 243},
  [92] = {.lex_state = 419},
  [93] = {.lex_state = 243},
  [94] = {.lex_state = 398},
  [95] = {.lex_state = 243},
  [96] = {.lex_state = 429},
  [97] = {.lex_state = 243},
  [98] = {.lex_state = 398},
  [99] = {.lex_state = 243},
  [100] = {.lex_state = 243},
  [101] = {.lex_state = 419},
  [102] = {.lex_state = 398},
  [103] = {.lex_state = 243},
  [104] = {.lex_state = 243},
  [105] = {.lex_state = 243},
  [106] = {.lex_state = 243},
  [107] = {.lex_state = 243},
  [108] = {.lex_state = 398},
  [109] = {.lex_state = 398},
  [110] = {.lex_state = 398},
  [111] = {.lex_state = 398},
  [112] = {.lex_state = 398},
  [113] = {.lex_state = 399},
  [114] = {.lex_state = 243},
  [115] = {.lex_state = 243},
  [116] = {.lex_state = 243},
  [117] = {.lex_state = 243},
  [118] = {.lex_state = 243},
  [119] = {.lex_state = 243},
  [120] = {.lex_state = 243},
  [121] = {.lex_state = 243},
  [122] = {.lex_state = 243},
  [123] = {.lex_state = 243},
  [124] = {.lex_state = 398},
  [125] = {.lex_state = 440},
  [126] = {.lex_state = 441},
  [127] = {.lex_state = 419},
  [128] = {.lex_state = 398},
  [129] = {.lex_state = 398},
  [130] = {.lex_state = 398},
  [131] = {.lex_state = 399},
  [132] = {.lex_state = 430},
  [133] = {.lex_state = 431},
  [134] = {.lex_state = 419},
  [135] = {.lex_state = 419},
  [136] = {.lex_state = 243},
  [137] = {.lex_state = 243},
  [138] = {.lex_state = 243},
  [139] = {.lex_state = 243},
  [140] = {.lex_state = 243},
  [141] = {.lex_state = 419},
  [142] = {.lex_state = 443},
  [143] = {.lex_state = 443},
  [144] = {.lex_state = 243},
  [145] = {.lex_state = 398},
  [146] = {.lex_state = 419},
  [147] = {.lex_state = 243},
  [148] = {.lex_state = 243},
  [149] = {.lex_state = 419},
  [150] = {.lex_state = 243},
  [151] = {.lex_state = 398},
  [152] = {.lex_state = 430},
  [153] = {.lex_state = 431},
  [154] = {.lex_state = 431},
  [155] = {.lex_state = 431},
  [156] = {.lex_state = 443},
  [157] = {.lex_state = 243},
  [158] = {.lex_state = 431},
  [159] = {.lex_state = 431},
  [160] = {.lex_state = 431},
  [161] = {.lex_state = 243},
  [162] = {.lex_state = 419},
  [163] = {.lex_state = 419},
  [164] = {.lex_state = 398},
  [165] = {.lex_state = 243},
  [166] = {.lex_state = 243},
  [167] = {.lex_state = 398},
  [168] = {.lex_state = 398},
  [169] = {.lex_state = 398},
  [170] = {.lex_state = 243},
  [171] = {.lex_state = 243},
  [172] = {.lex_state = 444},
  [173] = {.lex_state = 243},
  [174] = {.lex_state = 243},
  [175] = {.lex_state = 243},
  [176] = {.lex_state = 243},
  [177] = {.lex_state = 398},
  [178] = {.lex_state = 243},
  [179] = {.lex_state = 243},
  [180] = {.lex_state = 243},
  [181] = {.lex_state = 398},
  [182] = {.lex_state = 243},
  [183] = {.lex_state = 243},
  [184] = {.lex_state = 243},
  [185] = {.lex_state = 243},
  [186] = {.lex_state = 243},
  [187] = {.lex_state = 243},
  [188] = {.lex_state = 398},
  [189] = {.lex_state = 243},
  [190] = {.lex_state = 243},
  [191] = {.lex_state = 243},
  [192] = {.lex_state = 243},
  [193] = {.lex_state = 448},
  [194] = {.lex_state = 443},
  [195] = {.lex_state = 449},
  [196] = {.lex_state = 243},
  [197] = {.lex_state = 243},
  [198] = {.lex_state = 243},
  [199] = {.lex_state = 398},
  [200] = {.lex_state = 243},
  [201] = {.lex_state = 398},
  [202] = {.lex_state = 398},
  [203] = {.lex_state = 398},
  [204] = {.lex_state = 398},
  [205] = {.lex_state = 399},
  [206] = {.lex_state = 430},
  [207] = {.lex_state = 243},
  [208] = {.lex_state = 243},
  [209] = {.lex_state = 243},
  [210] = {.lex_state = 243},
  [211] = {.lex_state = 243},
  [212] = {.lex_state = 443},
  [213] = {.lex_state = 419},
  [214] = {.lex_state = 243},
  [215] = {.lex_state = 243},
  [216] = {.lex_state = 243},
  [217] = {.lex_state = 419},
  [218] = {.lex_state = 430},
  [219] = {.lex_state = 450},
  [220] = {.lex_state = 243},
  [221] = {.lex_state = 419},
  [222] = {.lex_state = 243},
  [223] = {.lex_state = 243},
  [224] = {.lex_state = 430},
  [225] = {.lex_state = 443},
  [226] = {.lex_state = 431},
  [227] = {.lex_state = 243},
  [228] = {.lex_state = 431},
  [229] = {.lex_state = 431},
  [230] = {.lex_state = 431},
  [231] = {.lex_state = 243},
  [232] = {.lex_state = 419},
  [233] = {.lex_state = 243},
  [234] = {.lex_state = 451},
  [235] = {.lex_state = 243},
  [236] = {.lex_state = 243},
  [237] = {.lex_state = 398},
  [238] = {.lex_state = 243},
  [239] = {.lex_state = 243},
  [240] = {.lex_state = 398},
  [241] = {.lex_state = 398},
  [242] = {.lex_state = 243},
  [243] = {.lex_state = 430},
  [244] = {.lex_state = 430},
  [245] = {.lex_state = 398},
  [246] = {.lex_state = 243},
  [247] = {.lex_state = 243},
  [248] = {.lex_state = 430},
  [249] = {.lex_state = 243},
  [250] = {.lex_state = 444},
  [251] = {.lex_state = 444},
  [252] = {.lex_state = 398},
  [253] = {.lex_state = 444},
  [254] = {.lex_state = 243},
  [255] = {.lex_state = 243},
  [256] = {.lex_state = 243},
  [257] = {.lex_state = 419},
  [258] = {.lex_state = 431},
  [259] = {.lex_state = 419},
  [260] = {.lex_state = 243},
  [261] = {.lex_state = 243},
  [262] = {.lex_state = 243},
  [263] = {.lex_state = 243},
  [264] = {.lex_state = 243},
  [265] = {.lex_state = 243},
  [266] = {.lex_state = 243},
  [267] = {.lex_state = 243},
  [268] = {.lex_state = 419},
  [269] = {.lex_state = 243},
  [270] = {.lex_state = 431},
  [271] = {.lex_state = 243},
  [272] = {.lex_state = 419},
  [273] = {.lex_state = 243},
  [274] = {.lex_state = 398},
  [275] = {.lex_state = 243},
  [276] = {.lex_state = 243},
  [277] = {.lex_state = 419},
  [278] = {.lex_state = 243},
  [279] = {.lex_state = 243},
  [280] = {.lex_state = 243},
  [281] = {.lex_state = 243},
  [282] = {.lex_state = 398},
  [283] = {.lex_state = 243},
  [284] = {.lex_state = 398},
  [285] = {.lex_state = 398},
  [286] = {.lex_state = 398},
  [287] = {.lex_state = 398},
  [288] = {.lex_state = 399},
  [289] = {.lex_state = 430},
  [290] = {.lex_state = 243},
  [291] = {.lex_state = 398},
  [292] = {.lex_state = 243},
  [293] = {.lex_state = 243},
  [294] = {.lex_state = 430},
  [295] = {.lex_state = 450},
  [296] = {.lex_state = 243},
  [297] = {.lex_state = 431},
  [298] = {.lex_state = 431},
  [299] = {.lex_state = 243},
  [300] = {.lex_state = 430},
  [301] = {.lex_state = 243},
  [302] = {.lex_state = 243},
  [303] = {.lex_state = 398},
  [304] = {.lex_state = 243},
  [305] = {.lex_state = 467},
  [306] = {.lex_state = 472},
  [307] = {.lex_state = 472},
  [308] = {.lex_state = 243},
  [309] = {.lex_state = 451},
  [310] = {.lex_state = 479},
  [311] = {.lex_state = 483},
  [312] = {.lex_state = 243},
  [313] = {.lex_state = 243},
  [314] = {.lex_state = 243},
  [315] = {.lex_state = 243},
  [316] = {.lex_state = 243},
  [317] = {.lex_state = 243},
  [318] = {.lex_state = 398},
  [319] = {.lex_state = 243},
  [320] = {.lex_state = 243},
  [321] = {.lex_state = 398},
  [322] = {.lex_state = 243},
  [323] = {.lex_state = 243},
  [324] = {.lex_state = 243},
  [325] = {.lex_state = 490},
  [326] = {.lex_state = 243},
  [327] = {.lex_state = 243},
  [328] = {.lex_state = 243},
  [329] = {.lex_state = 398},
  [330] = {.lex_state = 430},
  [331] = {.lex_state = 430},
  [332] = {.lex_state = 243},
  [333] = {.lex_state = 444},
  [334] = {.lex_state = 419},
  [335] = {.lex_state = 431},
  [336] = {.lex_state = 419},
  [337] = {.lex_state = 243},
  [338] = {.lex_state = 398},
  [339] = {.lex_state = 243},
  [340] = {.lex_state = 419},
  [341] = {.lex_state = 431},
  [342] = {.lex_state = 419},
  [343] = {.lex_state = 243},
  [344] = {.lex_state = 243},
  [345] = {.lex_state = 419},
  [346] = {.lex_state = 419},
  [347] = {.lex_state = 419},
  [348] = {.lex_state = 419},
  [349] = {.lex_state = 431},
  [350] = {.lex_state = 431},
  [351] = {.lex_state = 419},
  [352] = {.lex_state = 419},
  [353] = {.lex_state = 419},
  [354] = {.lex_state = 243},
  [355] = {.lex_state = 243},
  [356] = {.lex_state = 243},
  [357] = {.lex_state = 243},
  [358] = {.lex_state = 243},
  [359] = {.lex_state = 243},
  [360] = {.lex_state = 398},
  [361] = {.lex_state = 243},
  [362] = {.lex_state = 243},
  [363] = {.lex_state = 419},
  [364] = {.lex_state = 243},
  [365] = {.lex_state = 243},
  [366] = {.lex_state = 243},
  [367] = {.lex_state = 243},
  [368] = {.lex_state = 398},
  [369] = {.lex_state = 243},
  [370] = {.lex_state = 243},
  [371] = {.lex_state = 398},
  [372] = {.lex_state = 243},
  [373] = {.lex_state = 431},
  [374] = {.lex_state = 243},
  [375] = {.lex_state = 243},
  [376] = {.lex_state = 243},
  [377] = {.lex_state = 243},
  [378] = {.lex_state = 243},
  [379] = {.lex_state = 451},
  [380] = {.lex_state = 243},
  [381] = {.lex_state = 472},
  [382] = {.lex_state = 472},
  [383] = {.lex_state = 479},
  [384] = {.lex_state = 479},
  [385] = {.lex_state = 479},
  [386] = {.lex_state = 243},
  [387] = {.lex_state = 479},
  [388] = {.lex_state = 479},
  [389] = {.lex_state = 243},
  [390] = {.lex_state = 243},
  [391] = {.lex_state = 243},
  [392] = {.lex_state = 243},
  [393] = {.lex_state = 243},
  [394] = {.lex_state = 243},
  [395] = {.lex_state = 243},
  [396] = {.lex_state = 398},
  [397] = {.lex_state = 444},
  [398] = {.lex_state = 398},
  [399] = {.lex_state = 243},
  [400] = {.lex_state = 490},
  [401] = {.lex_state = 490},
  [402] = {.lex_state = 490},
  [403] = {.lex_state = 490},
  [404] = {.lex_state = 243},
  [405] = {.lex_state = 243},
  [406] = {.lex_state = 398},
  [407] = {.lex_state = 398},
  [408] = {.lex_state = 243},
  [409] = {.lex_state = 243},
  [410] = {.lex_state = 243},
  [411] = {.lex_state = 243},
  [412] = {.lex_state = 243},
  [413] = {.lex_state = 419},
  [414] = {.lex_state = 431},
  [415] = {.lex_state = 419},
  [416] = {.lex_state = 398},
  [417] = {.lex_state = 243},
  [418] = {.lex_state = 419},
  [419] = {.lex_state = 419},
  [420] = {.lex_state = 419},
  [421] = {.lex_state = 431},
  [422] = {.lex_state = 419},
  [423] = {.lex_state = 419},
  [424] = {.lex_state = 419},
  [425] = {.lex_state = 243},
  [426] = {.lex_state = 398},
  [427] = {.lex_state = 419},
  [428] = {.lex_state = 419},
  [429] = {.lex_state = 431},
  [430] = {.lex_state = 419},
  [431] = {.lex_state = 243},
  [432] = {.lex_state = 243},
  [433] = {.lex_state = 243},
  [434] = {.lex_state = 243},
  [435] = {.lex_state = 243},
  [436] = {.lex_state = 243},
  [437] = {.lex_state = 243},
  [438] = {.lex_state = 243},
  [439] = {.lex_state = 419},
  [440] = {.lex_state = 243},
  [441] = {.lex_state = 431},
  [442] = {.lex_state = 243},
  [443] = {.lex_state = 472},
  [444] = {.lex_state = 243},
  [445] = {.lex_state = 472},
  [446] = {.lex_state = 243},
  [447] = {.lex_state = 479},
  [448] = {.lex_state = 243},
  [449] = {.lex_state = 243},
  [450] = {.lex_state = 243},
  [451] = {.lex_state = 243},
  [452] = {.lex_state = 398},
  [453] = {.lex_state = 243},
  [454] = {.lex_state = 243},
  [455] = {.lex_state = 490},
  [456] = {.lex_state = 243},
  [457] = {.lex_state = 243},
  [458] = {.lex_state = 243},
  [459] = {.lex_state = 243},
  [460] = {.lex_state = 243},
  [461] = {.lex_state = 243},
  [462] = {.lex_state = 243},
  [463] = {.lex_state = 243},
  [464] = {.lex_state = 243},
  [465] = {.lex_state = 419},
  [466] = {.lex_state = 419},
  [467] = {.lex_state = 419},
  [468] = {.lex_state = 419},
  [469] = {.lex_state = 419},
  [470] = {.lex_state = 243},
  [471] = {.lex_state = 419},
  [472] = {.lex_state = 431},
  [473] = {.lex_state = 419},
  [474] = {.lex_state = 243},
  [475] = {.lex_state = 398},
  [476] = {.lex_state = 419},
  [477] = {.lex_state = 419},
  [478] = {.lex_state = 431},
  [479] = {.lex_state = 419},
  [480] = {.lex_state = 243},
  [481] = {.lex_state = 243},
  [482] = {.lex_state = 243},
  [483] = {.lex_state = 472},
  [484] = {.lex_state = 243},
  [485] = {.lex_state = 243},
  [486] = {.lex_state = 398},
  [487] = {.lex_state = 490},
  [488] = {.lex_state = 243},
  [489] = {.lex_state = 243},
  [490] = {.lex_state = 243},
  [491] = {.lex_state = 419},
  [492] = {.lex_state = 419},
  [493] = {.lex_state = 243},
  [494] = {.lex_state = 419},
  [495] = {.lex_state = 419},
  [496] = {.lex_state = 419},
  [497] = {.lex_state = 243},
  [498] = {.lex_state = 419},
  [499] = {.lex_state = 431},
  [500] = {.lex_state = 419},
  [501] = {.lex_state = 398},
  [502] = {.lex_state = 419},
  [503] = {.lex_state = 243},
  [504] = {.lex_state = 243},
  [505] = {.lex_state = 243},
  [506] = {.lex_state = 419},
  [507] = {.lex_state = 419},
  [508] = {.lex_state = 243},
  [509] = {.lex_state = 419},
  [510] = {.lex_state = 419},
  [511] = {.lex_state = 419},
  [512] = {.lex_state = 243},
  [513] = {.lex_state = 243},
  [514] = {.lex_state = 419},
  [515] = {.lex_state = 419},
  [516] = {.lex_state = 243},
  [517] = {.lex_state = 419},
  [518] = {.lex_state = 419},
  [519] = {.lex_state = 419},
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
    [sym_enum_modifier] = STATE(25),
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
    [sym__return_type] = STATE(55),
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
    [sym_enum_modifier] = STATE(69),
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
    [sym_enum_modifier] = STATE(25),
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
    [sym_enum_modifier] = STATE(25),
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
    [sym_enum_modifier] = STATE(25),
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
    [sym_enum_modifier] = STATE(25),
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
    [sym__return_type] = STATE(108),
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
    [sym_enum_modifier] = STATE(25),
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
    [sym_enum_modifier] = STATE(25),
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
    [sym_enum_modifier] = STATE(25),
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
    [sym_enum_modifier] = STATE(25),
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
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(146),
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
  },
  [88] = {
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_type_parameter] = STATE(148),
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
    [anon_sym_LBRACE] = ACTIONS(258),
    [sym_comment] = ACTIONS(36),
  },
  [90] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(155),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(158),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(260),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
    [anon_sym_LBRACE] = ACTIONS(266),
    [sym_comment] = ACTIONS(36),
  },
  [92] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(162),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(268),
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
  },
  [93] = {
    [anon_sym_LBRACE] = ACTIONS(270),
    [sym_comment] = ACTIONS(36),
  },
  [94] = {
    [sym_enum_member_declaration] = STATE(166),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [95] = {
    [sym__integral_type] = STATE(171),
    [anon_sym_sbyte] = ACTIONS(276),
    [anon_sym_byte] = ACTIONS(276),
    [anon_sym_short] = ACTIONS(276),
    [anon_sym_ushort] = ACTIONS(276),
    [anon_sym_int] = ACTIONS(276),
    [anon_sym_uint] = ACTIONS(276),
    [anon_sym_long] = ACTIONS(276),
    [anon_sym_ulong] = ACTIONS(276),
    [anon_sym_char] = ACTIONS(276),
    [sym_comment] = ACTIONS(36),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_GT] = ACTIONS(278),
    [sym_identifier_name] = ACTIONS(280),
    [sym_comment] = ACTIONS(36),
  },
  [97] = {
    [sym_parameter_list] = STATE(173),
    [anon_sym_LPAREN] = ACTIONS(282),
    [sym_comment] = ACTIONS(36),
  },
  [98] = {
    [sym_attribute_list] = STATE(174),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(284),
    [sym_comment] = ACTIONS(36),
  },
  [100] = {
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RBRACK] = ACTIONS(286),
    [sym_comment] = ACTIONS(36),
  },
  [101] = {
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_unsafe] = ACTIONS(288),
    [anon_sym_abstract] = ACTIONS(288),
    [anon_sym_sealed] = ACTIONS(288),
    [anon_sym_static] = ACTIONS(288),
    [anon_sym_new] = ACTIONS(288),
    [anon_sym_public] = ACTIONS(288),
    [anon_sym_protected] = ACTIONS(288),
    [anon_sym_internal] = ACTIONS(288),
    [anon_sym_private] = ACTIONS(288),
    [anon_sym_interface] = ACTIONS(288),
    [anon_sym_struct] = ACTIONS(288),
    [anon_sym_enum] = ACTIONS(288),
    [anon_sym_sbyte] = ACTIONS(288),
    [anon_sym_byte] = ACTIONS(288),
    [anon_sym_short] = ACTIONS(288),
    [anon_sym_ushort] = ACTIONS(288),
    [anon_sym_int] = ACTIONS(288),
    [anon_sym_uint] = ACTIONS(288),
    [anon_sym_long] = ACTIONS(288),
    [anon_sym_ulong] = ACTIONS(288),
    [anon_sym_char] = ACTIONS(288),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(288),
    [anon_sym_readonly] = ACTIONS(288),
    [anon_sym_volatile] = ACTIONS(288),
    [anon_sym_bool] = ACTIONS(288),
    [anon_sym_decimal] = ACTIONS(288),
    [anon_sym_double] = ACTIONS(288),
    [anon_sym_float] = ACTIONS(288),
    [anon_sym_object] = ACTIONS(288),
    [anon_sym_string] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [102] = {
    [sym_attribute] = STATE(176),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(296),
    [sym_comment] = ACTIONS(36),
  },
  [104] = {
    [sym_type_parameter_list] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [105] = {
    [sym_type_parameter_list] = STATE(179),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [106] = {
    [sym_type_parameter_list] = STATE(180),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [107] = {
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(300),
    [sym_comment] = ACTIONS(36),
  },
  [108] = {
    [sym_identifier_name] = ACTIONS(302),
    [sym_comment] = ACTIONS(36),
  },
  [109] = {
    [sym_identifier_name] = ACTIONS(304),
    [sym_comment] = ACTIONS(36),
  },
  [110] = {
    [sym_identifier_name] = ACTIONS(306),
    [sym_comment] = ACTIONS(36),
  },
  [111] = {
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(36),
  },
  [112] = {
    [sym_identifier_name] = ACTIONS(310),
    [sym_comment] = ACTIONS(36),
  },
  [113] = {
    [sym__return_type] = STATE(188),
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
    [sym_enum_modifier] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [sym__global_attributes] = STATE(76),
    [aux_sym_compilation_unit_repeat4] = STATE(189),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(312),
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
    [sym_enum_modifier] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(312),
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
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_extern] = ACTIONS(314),
    [anon_sym_using] = ACTIONS(314),
    [anon_sym_namespace] = ACTIONS(314),
    [anon_sym_class] = ACTIONS(314),
    [anon_sym_unsafe] = ACTIONS(314),
    [anon_sym_abstract] = ACTIONS(314),
    [anon_sym_sealed] = ACTIONS(314),
    [anon_sym_static] = ACTIONS(314),
    [anon_sym_new] = ACTIONS(314),
    [anon_sym_public] = ACTIONS(314),
    [anon_sym_protected] = ACTIONS(314),
    [anon_sym_internal] = ACTIONS(314),
    [anon_sym_private] = ACTIONS(314),
    [anon_sym_interface] = ACTIONS(314),
    [anon_sym_struct] = ACTIONS(314),
    [anon_sym_enum] = ACTIONS(314),
    [anon_sym_delegate] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(314),
    [sym_comment] = ACTIONS(36),
  },
  [117] = {
    [anon_sym_DOT] = ACTIONS(316),
    [sym_comment] = ACTIONS(36),
  },
  [118] = {
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(318),
    [sym_comment] = ACTIONS(36),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_using] = ACTIONS(320),
    [anon_sym_namespace] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(320),
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
    [anon_sym_delegate] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(320),
    [sym_comment] = ACTIONS(36),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [anon_sym_using] = ACTIONS(322),
    [anon_sym_namespace] = ACTIONS(322),
    [anon_sym_RBRACE] = ACTIONS(322),
    [anon_sym_class] = ACTIONS(322),
    [anon_sym_unsafe] = ACTIONS(322),
    [anon_sym_abstract] = ACTIONS(322),
    [anon_sym_sealed] = ACTIONS(322),
    [anon_sym_static] = ACTIONS(322),
    [anon_sym_new] = ACTIONS(322),
    [anon_sym_public] = ACTIONS(322),
    [anon_sym_protected] = ACTIONS(322),
    [anon_sym_internal] = ACTIONS(322),
    [anon_sym_private] = ACTIONS(322),
    [anon_sym_interface] = ACTIONS(322),
    [anon_sym_struct] = ACTIONS(322),
    [anon_sym_enum] = ACTIONS(322),
    [anon_sym_delegate] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym_comment] = ACTIONS(36),
  },
  [121] = {
    [anon_sym_using] = ACTIONS(324),
    [anon_sym_namespace] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_class] = ACTIONS(324),
    [anon_sym_unsafe] = ACTIONS(324),
    [anon_sym_abstract] = ACTIONS(324),
    [anon_sym_sealed] = ACTIONS(324),
    [anon_sym_static] = ACTIONS(324),
    [anon_sym_new] = ACTIONS(324),
    [anon_sym_public] = ACTIONS(324),
    [anon_sym_protected] = ACTIONS(324),
    [anon_sym_internal] = ACTIONS(324),
    [anon_sym_private] = ACTIONS(324),
    [anon_sym_interface] = ACTIONS(324),
    [anon_sym_struct] = ACTIONS(324),
    [anon_sym_enum] = ACTIONS(324),
    [anon_sym_delegate] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(324),
    [sym_comment] = ACTIONS(36),
  },
  [122] = {
    [sym__type_declaration] = STATE(191),
    [sym_using_directive] = STATE(191),
    [sym_namespace_declaration] = STATE(191),
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
    [sym_enum_modifier] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_using] = ACTIONS(14),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(326),
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
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_using] = ACTIONS(328),
    [anon_sym_namespace] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(328),
    [anon_sym_unsafe] = ACTIONS(328),
    [anon_sym_abstract] = ACTIONS(328),
    [anon_sym_sealed] = ACTIONS(328),
    [anon_sym_static] = ACTIONS(328),
    [anon_sym_new] = ACTIONS(328),
    [anon_sym_public] = ACTIONS(328),
    [anon_sym_protected] = ACTIONS(328),
    [anon_sym_internal] = ACTIONS(328),
    [anon_sym_private] = ACTIONS(328),
    [anon_sym_interface] = ACTIONS(328),
    [anon_sym_struct] = ACTIONS(328),
    [anon_sym_enum] = ACTIONS(328),
    [anon_sym_delegate] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(328),
    [sym_comment] = ACTIONS(36),
  },
  [124] = {
    [sym_identifier_name] = ACTIONS(330),
    [sym_comment] = ACTIONS(36),
  },
  [125] = {
    [sym__class_modifiers] = STATE(45),
    [sym__struct_modifiers] = STATE(46),
    [sym__field_modifiers] = STATE(194),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_unsafe] = ACTIONS(334),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(334),
    [anon_sym_public] = ACTIONS(334),
    [anon_sym_protected] = ACTIONS(334),
    [anon_sym_internal] = ACTIONS(334),
    [anon_sym_private] = ACTIONS(334),
    [anon_sym_struct] = ACTIONS(336),
    [anon_sym_sbyte] = ACTIONS(338),
    [anon_sym_byte] = ACTIONS(338),
    [anon_sym_short] = ACTIONS(338),
    [anon_sym_ushort] = ACTIONS(338),
    [anon_sym_int] = ACTIONS(338),
    [anon_sym_uint] = ACTIONS(338),
    [anon_sym_long] = ACTIONS(338),
    [anon_sym_ulong] = ACTIONS(338),
    [anon_sym_char] = ACTIONS(338),
    [anon_sym_delegate] = ACTIONS(340),
    [sym_const_keyword] = ACTIONS(338),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(338),
    [anon_sym_decimal] = ACTIONS(338),
    [anon_sym_double] = ACTIONS(338),
    [anon_sym_float] = ACTIONS(338),
    [anon_sym_object] = ACTIONS(338),
    [anon_sym_string] = ACTIONS(338),
    [sym_identifier_name] = ACTIONS(342),
    [sym_comment] = ACTIONS(36),
  },
  [126] = {
    [sym__class_modifiers] = STATE(45),
    [sym__field_modifiers] = STATE(194),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_unsafe] = ACTIONS(242),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(242),
    [anon_sym_public] = ACTIONS(242),
    [anon_sym_protected] = ACTIONS(242),
    [anon_sym_internal] = ACTIONS(242),
    [anon_sym_private] = ACTIONS(242),
    [anon_sym_sbyte] = ACTIONS(338),
    [anon_sym_byte] = ACTIONS(338),
    [anon_sym_short] = ACTIONS(338),
    [anon_sym_ushort] = ACTIONS(338),
    [anon_sym_int] = ACTIONS(338),
    [anon_sym_uint] = ACTIONS(338),
    [anon_sym_long] = ACTIONS(338),
    [anon_sym_ulong] = ACTIONS(338),
    [anon_sym_char] = ACTIONS(338),
    [sym_const_keyword] = ACTIONS(338),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(338),
    [anon_sym_decimal] = ACTIONS(338),
    [anon_sym_double] = ACTIONS(338),
    [anon_sym_float] = ACTIONS(338),
    [anon_sym_object] = ACTIONS(338),
    [anon_sym_string] = ACTIONS(338),
    [sym_identifier_name] = ACTIONS(342),
    [sym_comment] = ACTIONS(36),
  },
  [127] = {
    [sym__class_modifiers] = STATE(45),
    [sym__interface_modifiers] = STATE(48),
    [sym__struct_modifiers] = STATE(46),
    [sym__field_modifiers] = STATE(194),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_unsafe] = ACTIONS(334),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(344),
    [anon_sym_public] = ACTIONS(344),
    [anon_sym_protected] = ACTIONS(344),
    [anon_sym_internal] = ACTIONS(344),
    [anon_sym_private] = ACTIONS(344),
    [anon_sym_interface] = ACTIONS(346),
    [anon_sym_struct] = ACTIONS(336),
    [anon_sym_enum] = ACTIONS(348),
    [anon_sym_sbyte] = ACTIONS(338),
    [anon_sym_byte] = ACTIONS(338),
    [anon_sym_short] = ACTIONS(338),
    [anon_sym_ushort] = ACTIONS(338),
    [anon_sym_int] = ACTIONS(338),
    [anon_sym_uint] = ACTIONS(338),
    [anon_sym_long] = ACTIONS(338),
    [anon_sym_ulong] = ACTIONS(338),
    [anon_sym_char] = ACTIONS(338),
    [anon_sym_delegate] = ACTIONS(340),
    [sym_const_keyword] = ACTIONS(338),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(338),
    [anon_sym_decimal] = ACTIONS(338),
    [anon_sym_double] = ACTIONS(338),
    [anon_sym_float] = ACTIONS(338),
    [anon_sym_object] = ACTIONS(338),
    [anon_sym_string] = ACTIONS(338),
    [sym_identifier_name] = ACTIONS(342),
    [sym_comment] = ACTIONS(36),
  },
  [128] = {
    [sym_identifier_name] = ACTIONS(350),
    [sym_comment] = ACTIONS(36),
  },
  [129] = {
    [sym_identifier_name] = ACTIONS(352),
    [sym_comment] = ACTIONS(36),
  },
  [130] = {
    [sym_identifier_name] = ACTIONS(354),
    [sym_comment] = ACTIONS(36),
  },
  [131] = {
    [sym__return_type] = STATE(199),
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
    [sym_variable_declaration] = STATE(200),
    [sym__type] = STATE(145),
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
    [sym__field_modifiers] = STATE(194),
    [anon_sym_unsafe] = ACTIONS(256),
    [anon_sym_static] = ACTIONS(256),
    [anon_sym_new] = ACTIONS(256),
    [anon_sym_public] = ACTIONS(256),
    [anon_sym_protected] = ACTIONS(256),
    [anon_sym_internal] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(256),
    [anon_sym_sbyte] = ACTIONS(338),
    [anon_sym_byte] = ACTIONS(338),
    [anon_sym_short] = ACTIONS(338),
    [anon_sym_ushort] = ACTIONS(338),
    [anon_sym_int] = ACTIONS(338),
    [anon_sym_uint] = ACTIONS(338),
    [anon_sym_long] = ACTIONS(338),
    [anon_sym_ulong] = ACTIONS(338),
    [anon_sym_char] = ACTIONS(338),
    [sym_const_keyword] = ACTIONS(338),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(338),
    [anon_sym_decimal] = ACTIONS(338),
    [anon_sym_double] = ACTIONS(338),
    [anon_sym_float] = ACTIONS(338),
    [anon_sym_object] = ACTIONS(338),
    [anon_sym_string] = ACTIONS(338),
    [sym_identifier_name] = ACTIONS(342),
    [sym_comment] = ACTIONS(36),
  },
  [134] = {
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_class] = ACTIONS(358),
    [anon_sym_unsafe] = ACTIONS(358),
    [anon_sym_abstract] = ACTIONS(358),
    [anon_sym_sealed] = ACTIONS(358),
    [anon_sym_static] = ACTIONS(358),
    [anon_sym_new] = ACTIONS(358),
    [anon_sym_public] = ACTIONS(358),
    [anon_sym_protected] = ACTIONS(358),
    [anon_sym_internal] = ACTIONS(358),
    [anon_sym_private] = ACTIONS(358),
    [anon_sym_interface] = ACTIONS(358),
    [anon_sym_struct] = ACTIONS(358),
    [anon_sym_enum] = ACTIONS(358),
    [anon_sym_sbyte] = ACTIONS(358),
    [anon_sym_byte] = ACTIONS(358),
    [anon_sym_short] = ACTIONS(358),
    [anon_sym_ushort] = ACTIONS(358),
    [anon_sym_int] = ACTIONS(358),
    [anon_sym_uint] = ACTIONS(358),
    [anon_sym_long] = ACTIONS(358),
    [anon_sym_ulong] = ACTIONS(358),
    [anon_sym_char] = ACTIONS(358),
    [anon_sym_delegate] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym_const_keyword] = ACTIONS(358),
    [anon_sym_readonly] = ACTIONS(358),
    [anon_sym_volatile] = ACTIONS(358),
    [anon_sym_bool] = ACTIONS(358),
    [anon_sym_decimal] = ACTIONS(358),
    [anon_sym_double] = ACTIONS(358),
    [anon_sym_float] = ACTIONS(358),
    [anon_sym_object] = ACTIONS(358),
    [anon_sym_string] = ACTIONS(358),
    [sym_identifier_name] = ACTIONS(360),
    [sym_comment] = ACTIONS(36),
  },
  [135] = {
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_unsafe] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(362),
    [anon_sym_sealed] = ACTIONS(362),
    [anon_sym_static] = ACTIONS(362),
    [anon_sym_new] = ACTIONS(362),
    [anon_sym_public] = ACTIONS(362),
    [anon_sym_protected] = ACTIONS(362),
    [anon_sym_internal] = ACTIONS(362),
    [anon_sym_private] = ACTIONS(362),
    [anon_sym_interface] = ACTIONS(362),
    [anon_sym_struct] = ACTIONS(362),
    [anon_sym_enum] = ACTIONS(362),
    [anon_sym_sbyte] = ACTIONS(362),
    [anon_sym_byte] = ACTIONS(362),
    [anon_sym_short] = ACTIONS(362),
    [anon_sym_ushort] = ACTIONS(362),
    [anon_sym_int] = ACTIONS(362),
    [anon_sym_uint] = ACTIONS(362),
    [anon_sym_long] = ACTIONS(362),
    [anon_sym_ulong] = ACTIONS(362),
    [anon_sym_char] = ACTIONS(362),
    [anon_sym_delegate] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(88),
    [sym_const_keyword] = ACTIONS(362),
    [anon_sym_readonly] = ACTIONS(362),
    [anon_sym_volatile] = ACTIONS(362),
    [anon_sym_bool] = ACTIONS(362),
    [anon_sym_decimal] = ACTIONS(362),
    [anon_sym_double] = ACTIONS(362),
    [anon_sym_float] = ACTIONS(362),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_string] = ACTIONS(362),
    [sym_identifier_name] = ACTIONS(364),
    [sym_comment] = ACTIONS(36),
  },
  [136] = {
    [anon_sym_class] = ACTIONS(366),
    [sym_comment] = ACTIONS(36),
  },
  [137] = {
    [anon_sym_interface] = ACTIONS(368),
    [sym_comment] = ACTIONS(36),
  },
  [138] = {
    [anon_sym_struct] = ACTIONS(370),
    [sym_comment] = ACTIONS(36),
  },
  [139] = {
    [anon_sym_enum] = ACTIONS(372),
    [sym_comment] = ACTIONS(36),
  },
  [140] = {
    [anon_sym_delegate] = ACTIONS(374),
    [sym_comment] = ACTIONS(36),
  },
  [141] = {
    [sym_class_modifiers] = STATE(207),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_modifiers] = STATE(208),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_modifiers] = STATE(209),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_modifier] = STATE(210),
    [sym_delegate_modifier] = STATE(211),
    [sym_field_modifiers] = STATE(212),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(200),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [anon_sym_class] = ACTIONS(376),
    [anon_sym_unsafe] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(244),
    [anon_sym_public] = ACTIONS(244),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_internal] = ACTIONS(244),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_interface] = ACTIONS(378),
    [anon_sym_struct] = ACTIONS(380),
    [anon_sym_enum] = ACTIONS(382),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(384),
    [sym_const_keyword] = ACTIONS(386),
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
  [142] = {
    [sym_variable_declaration] = STATE(200),
    [sym__type] = STATE(145),
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
    [sym_const_keyword] = ACTIONS(386),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [143] = {
    [anon_sym_sbyte] = ACTIONS(388),
    [anon_sym_byte] = ACTIONS(388),
    [anon_sym_short] = ACTIONS(388),
    [anon_sym_ushort] = ACTIONS(388),
    [anon_sym_int] = ACTIONS(388),
    [anon_sym_uint] = ACTIONS(388),
    [anon_sym_long] = ACTIONS(388),
    [anon_sym_ulong] = ACTIONS(388),
    [anon_sym_char] = ACTIONS(388),
    [sym_const_keyword] = ACTIONS(388),
    [anon_sym_bool] = ACTIONS(388),
    [anon_sym_decimal] = ACTIONS(388),
    [anon_sym_double] = ACTIONS(388),
    [anon_sym_float] = ACTIONS(388),
    [anon_sym_object] = ACTIONS(388),
    [anon_sym_string] = ACTIONS(388),
    [sym_identifier_name] = ACTIONS(390),
    [sym_comment] = ACTIONS(36),
  },
  [144] = {
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(36),
  },
  [145] = {
    [sym_variable_declarator] = STATE(215),
    [sym_identifier_name] = ACTIONS(394),
    [sym_comment] = ACTIONS(36),
  },
  [146] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(396),
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
  },
  [147] = {
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [sym_comment] = ACTIONS(36),
  },
  [148] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(220),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [sym_comment] = ACTIONS(36),
  },
  [149] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(221),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(396),
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
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_using] = ACTIONS(404),
    [anon_sym_namespace] = ACTIONS(404),
    [anon_sym_RBRACE] = ACTIONS(404),
    [anon_sym_class] = ACTIONS(404),
    [anon_sym_unsafe] = ACTIONS(404),
    [anon_sym_abstract] = ACTIONS(404),
    [anon_sym_sealed] = ACTIONS(404),
    [anon_sym_static] = ACTIONS(404),
    [anon_sym_new] = ACTIONS(404),
    [anon_sym_public] = ACTIONS(404),
    [anon_sym_protected] = ACTIONS(404),
    [anon_sym_internal] = ACTIONS(404),
    [anon_sym_private] = ACTIONS(404),
    [anon_sym_interface] = ACTIONS(404),
    [anon_sym_struct] = ACTIONS(404),
    [anon_sym_enum] = ACTIONS(404),
    [anon_sym_delegate] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [sym_comment] = ACTIONS(36),
  },
  [151] = {
    [sym_attribute_list] = STATE(222),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [152] = {
    [sym_variable_declaration] = STATE(223),
    [sym__type] = STATE(145),
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
  [153] = {
    [sym_field_modifiers] = STATE(225),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(223),
    [sym__type] = STATE(145),
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
    [sym_const_keyword] = ACTIONS(406),
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
  [154] = {
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
  [155] = {
    [anon_sym_RBRACE] = ACTIONS(408),
    [anon_sym_unsafe] = ACTIONS(410),
    [anon_sym_static] = ACTIONS(410),
    [anon_sym_new] = ACTIONS(410),
    [anon_sym_public] = ACTIONS(410),
    [anon_sym_protected] = ACTIONS(410),
    [anon_sym_internal] = ACTIONS(410),
    [anon_sym_private] = ACTIONS(410),
    [anon_sym_sbyte] = ACTIONS(410),
    [anon_sym_byte] = ACTIONS(410),
    [anon_sym_short] = ACTIONS(410),
    [anon_sym_ushort] = ACTIONS(410),
    [anon_sym_int] = ACTIONS(410),
    [anon_sym_uint] = ACTIONS(410),
    [anon_sym_long] = ACTIONS(410),
    [anon_sym_ulong] = ACTIONS(410),
    [anon_sym_char] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(408),
    [sym_const_keyword] = ACTIONS(410),
    [anon_sym_readonly] = ACTIONS(410),
    [anon_sym_volatile] = ACTIONS(410),
    [anon_sym_bool] = ACTIONS(410),
    [anon_sym_decimal] = ACTIONS(410),
    [anon_sym_double] = ACTIONS(410),
    [anon_sym_float] = ACTIONS(410),
    [anon_sym_object] = ACTIONS(410),
    [anon_sym_string] = ACTIONS(410),
    [sym_identifier_name] = ACTIONS(412),
    [sym_comment] = ACTIONS(36),
  },
  [156] = {
    [sym_variable_declaration] = STATE(223),
    [sym__type] = STATE(145),
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
    [sym_const_keyword] = ACTIONS(406),
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
    [anon_sym_SEMI] = ACTIONS(414),
    [sym_comment] = ACTIONS(36),
  },
  [158] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(228),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(416),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [159] = {
    [sym__attribute_section] = STATE(229),
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
    [anon_sym_LBRACK] = ACTIONS(262),
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
  [160] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(155),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(230),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(416),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [anon_sym_using] = ACTIONS(418),
    [anon_sym_namespace] = ACTIONS(418),
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_class] = ACTIONS(418),
    [anon_sym_unsafe] = ACTIONS(418),
    [anon_sym_abstract] = ACTIONS(418),
    [anon_sym_sealed] = ACTIONS(418),
    [anon_sym_static] = ACTIONS(418),
    [anon_sym_new] = ACTIONS(418),
    [anon_sym_public] = ACTIONS(418),
    [anon_sym_protected] = ACTIONS(418),
    [anon_sym_internal] = ACTIONS(418),
    [anon_sym_private] = ACTIONS(418),
    [anon_sym_interface] = ACTIONS(418),
    [anon_sym_struct] = ACTIONS(418),
    [anon_sym_enum] = ACTIONS(418),
    [anon_sym_delegate] = ACTIONS(418),
    [anon_sym_LBRACK] = ACTIONS(418),
    [sym_comment] = ACTIONS(36),
  },
  [162] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(420),
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
  },
  [163] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(232),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(420),
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
  },
  [164] = {
    [sym_attribute_list] = STATE(233),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [165] = {
    [sym_equals_value_clause] = STATE(235),
    [anon_sym_RBRACE] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_EQ] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
  },
  [166] = {
    [aux_sym_enum_declaration_repeat1] = STATE(238),
    [anon_sym_RBRACE] = ACTIONS(426),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [167] = {
    [sym_identifier_name] = ACTIONS(430),
    [sym_comment] = ACTIONS(36),
  },
  [168] = {
    [anon_sym_LBRACK] = ACTIONS(108),
    [sym_identifier_name] = ACTIONS(106),
    [sym_comment] = ACTIONS(36),
  },
  [169] = {
    [sym__attribute_section] = STATE(240),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(118),
    [sym_comment] = ACTIONS(36),
  },
  [170] = {
    [anon_sym_LBRACE] = ACTIONS(432),
    [sym_comment] = ACTIONS(36),
  },
  [171] = {
    [anon_sym_LBRACE] = ACTIONS(434),
    [sym_comment] = ACTIONS(36),
  },
  [172] = {
    [sym__formal_parameter_list] = STATE(246),
    [sym_parameter] = STATE(247),
    [sym_parameter_modifier] = STATE(248),
    [sym_parameter_array] = STATE(249),
    [sym__attributes] = STATE(250),
    [sym__attribute_section] = STATE(251),
    [sym__type] = STATE(252),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(253),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_ref] = ACTIONS(438),
    [anon_sym_out] = ACTIONS(438),
    [anon_sym_this] = ACTIONS(438),
    [sym_params_keyword] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(442),
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
    [anon_sym_SEMI] = ACTIONS(444),
    [sym_comment] = ACTIONS(36),
  },
  [174] = {
    [anon_sym_RBRACK] = ACTIONS(446),
    [sym_comment] = ACTIONS(36),
  },
  [175] = {
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_RBRACK] = ACTIONS(448),
    [sym_comment] = ACTIONS(36),
  },
  [176] = {
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym_comment] = ACTIONS(36),
  },
  [177] = {
    [sym_attribute] = STATE(256),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [178] = {
    [anon_sym_LBRACE] = ACTIONS(452),
    [sym_comment] = ACTIONS(36),
  },
  [179] = {
    [anon_sym_LBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(36),
  },
  [180] = {
    [anon_sym_LBRACE] = ACTIONS(456),
    [sym_comment] = ACTIONS(36),
  },
  [181] = {
    [sym_enum_member_declaration] = STATE(260),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [182] = {
    [sym__integral_type] = STATE(261),
    [anon_sym_sbyte] = ACTIONS(276),
    [anon_sym_byte] = ACTIONS(276),
    [anon_sym_short] = ACTIONS(276),
    [anon_sym_ushort] = ACTIONS(276),
    [anon_sym_int] = ACTIONS(276),
    [anon_sym_uint] = ACTIONS(276),
    [anon_sym_long] = ACTIONS(276),
    [anon_sym_ulong] = ACTIONS(276),
    [anon_sym_char] = ACTIONS(276),
    [sym_comment] = ACTIONS(36),
  },
  [183] = {
    [sym_parameter_list] = STATE(262),
    [anon_sym_LPAREN] = ACTIONS(282),
    [sym_comment] = ACTIONS(36),
  },
  [184] = {
    [sym_type_parameter_list] = STATE(263),
    [anon_sym_LBRACE] = ACTIONS(452),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [185] = {
    [sym_type_parameter_list] = STATE(264),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [186] = {
    [sym_type_parameter_list] = STATE(265),
    [anon_sym_LBRACE] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [187] = {
    [anon_sym_LBRACE] = ACTIONS(434),
    [anon_sym_COLON] = ACTIONS(458),
    [sym_comment] = ACTIONS(36),
  },
  [188] = {
    [sym_identifier_name] = ACTIONS(460),
    [sym_comment] = ACTIONS(36),
  },
  [189] = {
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
    [sym_enum_modifier] = STATE(25),
    [sym_delegate_declaration] = STATE(18),
    [sym_delegate_modifier] = STATE(26),
    [sym__attributes] = STATE(27),
    [sym__attribute_section] = STATE(28),
    [aux_sym__attributes_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(462),
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
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_using] = ACTIONS(464),
    [anon_sym_namespace] = ACTIONS(464),
    [anon_sym_RBRACE] = ACTIONS(464),
    [anon_sym_class] = ACTIONS(464),
    [anon_sym_unsafe] = ACTIONS(464),
    [anon_sym_abstract] = ACTIONS(464),
    [anon_sym_sealed] = ACTIONS(464),
    [anon_sym_static] = ACTIONS(464),
    [anon_sym_new] = ACTIONS(464),
    [anon_sym_public] = ACTIONS(464),
    [anon_sym_protected] = ACTIONS(464),
    [anon_sym_internal] = ACTIONS(464),
    [anon_sym_private] = ACTIONS(464),
    [anon_sym_interface] = ACTIONS(464),
    [anon_sym_struct] = ACTIONS(464),
    [anon_sym_enum] = ACTIONS(464),
    [anon_sym_delegate] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(464),
    [sym_comment] = ACTIONS(36),
  },
  [191] = {
    [anon_sym_using] = ACTIONS(466),
    [anon_sym_namespace] = ACTIONS(466),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_class] = ACTIONS(466),
    [anon_sym_unsafe] = ACTIONS(466),
    [anon_sym_abstract] = ACTIONS(466),
    [anon_sym_sealed] = ACTIONS(466),
    [anon_sym_static] = ACTIONS(466),
    [anon_sym_new] = ACTIONS(466),
    [anon_sym_public] = ACTIONS(466),
    [anon_sym_protected] = ACTIONS(466),
    [anon_sym_internal] = ACTIONS(466),
    [anon_sym_private] = ACTIONS(466),
    [anon_sym_interface] = ACTIONS(466),
    [anon_sym_struct] = ACTIONS(466),
    [anon_sym_enum] = ACTIONS(466),
    [anon_sym_delegate] = ACTIONS(466),
    [anon_sym_LBRACK] = ACTIONS(466),
    [sym_comment] = ACTIONS(36),
  },
  [192] = {
    [sym_type_parameter_list] = STATE(269),
    [anon_sym_LBRACE] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [193] = {
    [sym__class_modifiers] = STATE(45),
    [sym__struct_modifiers] = STATE(46),
    [sym__field_modifiers] = STATE(194),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_unsafe] = ACTIONS(334),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(334),
    [anon_sym_public] = ACTIONS(334),
    [anon_sym_protected] = ACTIONS(334),
    [anon_sym_internal] = ACTIONS(334),
    [anon_sym_private] = ACTIONS(334),
    [anon_sym_struct] = ACTIONS(336),
    [anon_sym_sbyte] = ACTIONS(338),
    [anon_sym_byte] = ACTIONS(338),
    [anon_sym_short] = ACTIONS(338),
    [anon_sym_ushort] = ACTIONS(338),
    [anon_sym_int] = ACTIONS(338),
    [anon_sym_uint] = ACTIONS(338),
    [anon_sym_long] = ACTIONS(338),
    [anon_sym_ulong] = ACTIONS(338),
    [anon_sym_char] = ACTIONS(338),
    [sym_const_keyword] = ACTIONS(338),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(338),
    [anon_sym_decimal] = ACTIONS(338),
    [anon_sym_double] = ACTIONS(338),
    [anon_sym_float] = ACTIONS(338),
    [anon_sym_object] = ACTIONS(338),
    [anon_sym_string] = ACTIONS(338),
    [sym_identifier_name] = ACTIONS(342),
    [sym_comment] = ACTIONS(36),
  },
  [194] = {
    [anon_sym_sbyte] = ACTIONS(470),
    [anon_sym_byte] = ACTIONS(470),
    [anon_sym_short] = ACTIONS(470),
    [anon_sym_ushort] = ACTIONS(470),
    [anon_sym_int] = ACTIONS(470),
    [anon_sym_uint] = ACTIONS(470),
    [anon_sym_long] = ACTIONS(470),
    [anon_sym_ulong] = ACTIONS(470),
    [anon_sym_char] = ACTIONS(470),
    [sym_const_keyword] = ACTIONS(470),
    [anon_sym_bool] = ACTIONS(470),
    [anon_sym_decimal] = ACTIONS(470),
    [anon_sym_double] = ACTIONS(470),
    [anon_sym_float] = ACTIONS(470),
    [anon_sym_object] = ACTIONS(470),
    [anon_sym_string] = ACTIONS(470),
    [sym_identifier_name] = ACTIONS(472),
    [sym_comment] = ACTIONS(36),
  },
  [195] = {
    [sym__class_modifiers] = STATE(45),
    [sym__interface_modifiers] = STATE(48),
    [sym__struct_modifiers] = STATE(46),
    [sym__field_modifiers] = STATE(194),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_unsafe] = ACTIONS(334),
    [anon_sym_abstract] = ACTIONS(240),
    [anon_sym_sealed] = ACTIONS(240),
    [anon_sym_static] = ACTIONS(242),
    [anon_sym_new] = ACTIONS(344),
    [anon_sym_public] = ACTIONS(344),
    [anon_sym_protected] = ACTIONS(344),
    [anon_sym_internal] = ACTIONS(344),
    [anon_sym_private] = ACTIONS(344),
    [anon_sym_interface] = ACTIONS(346),
    [anon_sym_struct] = ACTIONS(336),
    [anon_sym_sbyte] = ACTIONS(338),
    [anon_sym_byte] = ACTIONS(338),
    [anon_sym_short] = ACTIONS(338),
    [anon_sym_ushort] = ACTIONS(338),
    [anon_sym_int] = ACTIONS(338),
    [anon_sym_uint] = ACTIONS(338),
    [anon_sym_long] = ACTIONS(338),
    [anon_sym_ulong] = ACTIONS(338),
    [anon_sym_char] = ACTIONS(338),
    [sym_const_keyword] = ACTIONS(338),
    [anon_sym_readonly] = ACTIONS(256),
    [anon_sym_volatile] = ACTIONS(256),
    [anon_sym_bool] = ACTIONS(338),
    [anon_sym_decimal] = ACTIONS(338),
    [anon_sym_double] = ACTIONS(338),
    [anon_sym_float] = ACTIONS(338),
    [anon_sym_object] = ACTIONS(338),
    [anon_sym_string] = ACTIONS(338),
    [sym_identifier_name] = ACTIONS(342),
    [sym_comment] = ACTIONS(36),
  },
  [196] = {
    [sym_type_parameter_list] = STATE(271),
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [197] = {
    [sym_type_parameter_list] = STATE(273),
    [anon_sym_LBRACE] = ACTIONS(476),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [198] = {
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_COLON] = ACTIONS(480),
    [sym_comment] = ACTIONS(36),
  },
  [199] = {
    [sym_identifier_name] = ACTIONS(482),
    [sym_comment] = ACTIONS(36),
  },
  [200] = {
    [anon_sym_SEMI] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [201] = {
    [sym_identifier_name] = ACTIONS(486),
    [sym_comment] = ACTIONS(36),
  },
  [202] = {
    [sym_identifier_name] = ACTIONS(488),
    [sym_comment] = ACTIONS(36),
  },
  [203] = {
    [sym_identifier_name] = ACTIONS(490),
    [sym_comment] = ACTIONS(36),
  },
  [204] = {
    [sym_identifier_name] = ACTIONS(492),
    [sym_comment] = ACTIONS(36),
  },
  [205] = {
    [sym__return_type] = STATE(282),
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
  [206] = {
    [sym_variable_declaration] = STATE(283),
    [sym__type] = STATE(145),
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
  [207] = {
    [anon_sym_class] = ACTIONS(494),
    [sym_comment] = ACTIONS(36),
  },
  [208] = {
    [anon_sym_interface] = ACTIONS(496),
    [sym_comment] = ACTIONS(36),
  },
  [209] = {
    [anon_sym_struct] = ACTIONS(498),
    [sym_comment] = ACTIONS(36),
  },
  [210] = {
    [anon_sym_enum] = ACTIONS(500),
    [sym_comment] = ACTIONS(36),
  },
  [211] = {
    [anon_sym_delegate] = ACTIONS(502),
    [sym_comment] = ACTIONS(36),
  },
  [212] = {
    [sym_variable_declaration] = STATE(283),
    [sym__type] = STATE(145),
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
    [sym_const_keyword] = ACTIONS(504),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [213] = {
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_class] = ACTIONS(508),
    [anon_sym_unsafe] = ACTIONS(508),
    [anon_sym_abstract] = ACTIONS(508),
    [anon_sym_sealed] = ACTIONS(508),
    [anon_sym_static] = ACTIONS(508),
    [anon_sym_new] = ACTIONS(508),
    [anon_sym_public] = ACTIONS(508),
    [anon_sym_protected] = ACTIONS(508),
    [anon_sym_internal] = ACTIONS(508),
    [anon_sym_private] = ACTIONS(508),
    [anon_sym_interface] = ACTIONS(508),
    [anon_sym_struct] = ACTIONS(508),
    [anon_sym_enum] = ACTIONS(508),
    [anon_sym_sbyte] = ACTIONS(508),
    [anon_sym_byte] = ACTIONS(508),
    [anon_sym_short] = ACTIONS(508),
    [anon_sym_ushort] = ACTIONS(508),
    [anon_sym_int] = ACTIONS(508),
    [anon_sym_uint] = ACTIONS(508),
    [anon_sym_long] = ACTIONS(508),
    [anon_sym_ulong] = ACTIONS(508),
    [anon_sym_char] = ACTIONS(508),
    [anon_sym_delegate] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [sym_const_keyword] = ACTIONS(508),
    [anon_sym_readonly] = ACTIONS(508),
    [anon_sym_volatile] = ACTIONS(508),
    [anon_sym_bool] = ACTIONS(508),
    [anon_sym_decimal] = ACTIONS(508),
    [anon_sym_double] = ACTIONS(508),
    [anon_sym_float] = ACTIONS(508),
    [anon_sym_object] = ACTIONS(508),
    [anon_sym_string] = ACTIONS(508),
    [sym_identifier_name] = ACTIONS(510),
    [sym_comment] = ACTIONS(36),
  },
  [214] = {
    [sym_equals_value_clause] = STATE(290),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_EQ] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
  },
  [215] = {
    [aux_sym_variable_declaration_repeat1] = STATE(292),
    [anon_sym_SEMI] = ACTIONS(514),
    [anon_sym_COMMA] = ACTIONS(516),
    [sym_comment] = ACTIONS(36),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(518),
    [anon_sym_using] = ACTIONS(518),
    [anon_sym_namespace] = ACTIONS(518),
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_class] = ACTIONS(518),
    [anon_sym_unsafe] = ACTIONS(518),
    [anon_sym_abstract] = ACTIONS(518),
    [anon_sym_sealed] = ACTIONS(518),
    [anon_sym_static] = ACTIONS(518),
    [anon_sym_new] = ACTIONS(518),
    [anon_sym_public] = ACTIONS(518),
    [anon_sym_protected] = ACTIONS(518),
    [anon_sym_internal] = ACTIONS(518),
    [anon_sym_private] = ACTIONS(518),
    [anon_sym_interface] = ACTIONS(518),
    [anon_sym_struct] = ACTIONS(518),
    [anon_sym_enum] = ACTIONS(518),
    [anon_sym_delegate] = ACTIONS(518),
    [anon_sym_LBRACK] = ACTIONS(518),
    [sym_comment] = ACTIONS(36),
  },
  [217] = {
    [anon_sym_RBRACE] = ACTIONS(520),
    [anon_sym_class] = ACTIONS(522),
    [anon_sym_unsafe] = ACTIONS(522),
    [anon_sym_abstract] = ACTIONS(522),
    [anon_sym_sealed] = ACTIONS(522),
    [anon_sym_static] = ACTIONS(522),
    [anon_sym_new] = ACTIONS(522),
    [anon_sym_public] = ACTIONS(522),
    [anon_sym_protected] = ACTIONS(522),
    [anon_sym_internal] = ACTIONS(522),
    [anon_sym_private] = ACTIONS(522),
    [anon_sym_interface] = ACTIONS(522),
    [anon_sym_struct] = ACTIONS(522),
    [anon_sym_enum] = ACTIONS(522),
    [anon_sym_sbyte] = ACTIONS(522),
    [anon_sym_byte] = ACTIONS(522),
    [anon_sym_short] = ACTIONS(522),
    [anon_sym_ushort] = ACTIONS(522),
    [anon_sym_int] = ACTIONS(522),
    [anon_sym_uint] = ACTIONS(522),
    [anon_sym_long] = ACTIONS(522),
    [anon_sym_ulong] = ACTIONS(522),
    [anon_sym_char] = ACTIONS(522),
    [anon_sym_delegate] = ACTIONS(522),
    [anon_sym_LBRACK] = ACTIONS(520),
    [sym_const_keyword] = ACTIONS(522),
    [anon_sym_readonly] = ACTIONS(522),
    [anon_sym_volatile] = ACTIONS(522),
    [anon_sym_bool] = ACTIONS(522),
    [anon_sym_decimal] = ACTIONS(522),
    [anon_sym_double] = ACTIONS(522),
    [anon_sym_float] = ACTIONS(522),
    [anon_sym_object] = ACTIONS(522),
    [anon_sym_string] = ACTIONS(522),
    [sym_identifier_name] = ACTIONS(524),
    [sym_comment] = ACTIONS(36),
  },
  [218] = {
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_type_parameter] = STATE(293),
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
  [219] = {
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_LBRACK] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(526),
    [sym_identifier_name] = ACTIONS(528),
    [sym_comment] = ACTIONS(36),
  },
  [220] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(532),
    [sym_comment] = ACTIONS(36),
  },
  [221] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(534),
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
  },
  [222] = {
    [anon_sym_RBRACK] = ACTIONS(536),
    [sym_comment] = ACTIONS(36),
  },
  [223] = {
    [anon_sym_SEMI] = ACTIONS(538),
    [sym_comment] = ACTIONS(36),
  },
  [224] = {
    [sym_variable_declaration] = STATE(299),
    [sym__type] = STATE(145),
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
  [225] = {
    [sym_variable_declaration] = STATE(299),
    [sym__type] = STATE(145),
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
    [sym_const_keyword] = ACTIONS(540),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [226] = {
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_unsafe] = ACTIONS(508),
    [anon_sym_static] = ACTIONS(508),
    [anon_sym_new] = ACTIONS(508),
    [anon_sym_public] = ACTIONS(508),
    [anon_sym_protected] = ACTIONS(508),
    [anon_sym_internal] = ACTIONS(508),
    [anon_sym_private] = ACTIONS(508),
    [anon_sym_sbyte] = ACTIONS(508),
    [anon_sym_byte] = ACTIONS(508),
    [anon_sym_short] = ACTIONS(508),
    [anon_sym_ushort] = ACTIONS(508),
    [anon_sym_int] = ACTIONS(508),
    [anon_sym_uint] = ACTIONS(508),
    [anon_sym_long] = ACTIONS(508),
    [anon_sym_ulong] = ACTIONS(508),
    [anon_sym_char] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [sym_const_keyword] = ACTIONS(508),
    [anon_sym_readonly] = ACTIONS(508),
    [anon_sym_volatile] = ACTIONS(508),
    [anon_sym_bool] = ACTIONS(508),
    [anon_sym_decimal] = ACTIONS(508),
    [anon_sym_double] = ACTIONS(508),
    [anon_sym_float] = ACTIONS(508),
    [anon_sym_object] = ACTIONS(508),
    [anon_sym_string] = ACTIONS(508),
    [sym_identifier_name] = ACTIONS(510),
    [sym_comment] = ACTIONS(36),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(542),
    [anon_sym_using] = ACTIONS(542),
    [anon_sym_namespace] = ACTIONS(542),
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_class] = ACTIONS(542),
    [anon_sym_unsafe] = ACTIONS(542),
    [anon_sym_abstract] = ACTIONS(542),
    [anon_sym_sealed] = ACTIONS(542),
    [anon_sym_static] = ACTIONS(542),
    [anon_sym_new] = ACTIONS(542),
    [anon_sym_public] = ACTIONS(542),
    [anon_sym_protected] = ACTIONS(542),
    [anon_sym_internal] = ACTIONS(542),
    [anon_sym_private] = ACTIONS(542),
    [anon_sym_interface] = ACTIONS(542),
    [anon_sym_struct] = ACTIONS(542),
    [anon_sym_enum] = ACTIONS(542),
    [anon_sym_delegate] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [sym_comment] = ACTIONS(36),
  },
  [228] = {
    [anon_sym_RBRACE] = ACTIONS(544),
    [anon_sym_unsafe] = ACTIONS(546),
    [anon_sym_static] = ACTIONS(546),
    [anon_sym_new] = ACTIONS(546),
    [anon_sym_public] = ACTIONS(546),
    [anon_sym_protected] = ACTIONS(546),
    [anon_sym_internal] = ACTIONS(546),
    [anon_sym_private] = ACTIONS(546),
    [anon_sym_sbyte] = ACTIONS(546),
    [anon_sym_byte] = ACTIONS(546),
    [anon_sym_short] = ACTIONS(546),
    [anon_sym_ushort] = ACTIONS(546),
    [anon_sym_int] = ACTIONS(546),
    [anon_sym_uint] = ACTIONS(546),
    [anon_sym_long] = ACTIONS(546),
    [anon_sym_ulong] = ACTIONS(546),
    [anon_sym_char] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(544),
    [sym_const_keyword] = ACTIONS(546),
    [anon_sym_readonly] = ACTIONS(546),
    [anon_sym_volatile] = ACTIONS(546),
    [anon_sym_bool] = ACTIONS(546),
    [anon_sym_decimal] = ACTIONS(546),
    [anon_sym_double] = ACTIONS(546),
    [anon_sym_float] = ACTIONS(546),
    [anon_sym_object] = ACTIONS(546),
    [anon_sym_string] = ACTIONS(546),
    [sym_identifier_name] = ACTIONS(548),
    [sym_comment] = ACTIONS(36),
  },
  [229] = {
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
  [230] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(228),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(550),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(552),
    [anon_sym_using] = ACTIONS(552),
    [anon_sym_namespace] = ACTIONS(552),
    [anon_sym_RBRACE] = ACTIONS(552),
    [anon_sym_class] = ACTIONS(552),
    [anon_sym_unsafe] = ACTIONS(552),
    [anon_sym_abstract] = ACTIONS(552),
    [anon_sym_sealed] = ACTIONS(552),
    [anon_sym_static] = ACTIONS(552),
    [anon_sym_new] = ACTIONS(552),
    [anon_sym_public] = ACTIONS(552),
    [anon_sym_protected] = ACTIONS(552),
    [anon_sym_internal] = ACTIONS(552),
    [anon_sym_private] = ACTIONS(552),
    [anon_sym_interface] = ACTIONS(552),
    [anon_sym_struct] = ACTIONS(552),
    [anon_sym_enum] = ACTIONS(552),
    [anon_sym_delegate] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(552),
    [sym_comment] = ACTIONS(36),
  },
  [232] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(554),
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
  },
  [233] = {
    [anon_sym_RBRACK] = ACTIONS(556),
    [sym_comment] = ACTIONS(36),
  },
  [234] = {
    [sym__expression] = STATE(312),
    [sym__literal] = STATE(313),
    [sym_boolean_literal] = STATE(308),
    [sym_character_literal] = STATE(308),
    [sym_integer_literal] = STATE(308),
    [sym_real_literal] = STATE(308),
    [sym_string_literal] = STATE(308),
    [sym__regular_string_literal] = STATE(314),
    [sym__verbatim_string_literal] = STATE(314),
    [anon_sym_true] = ACTIONS(558),
    [anon_sym_false] = ACTIONS(558),
    [anon_sym_SQUOTE] = ACTIONS(560),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(562),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(564),
    [sym_null_literal] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(568),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [anon_sym_AT_DQUOTE] = ACTIONS(572),
    [sym_comment] = ACTIONS(36),
  },
  [235] = {
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_COMMA] = ACTIONS(574),
    [sym_comment] = ACTIONS(36),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [anon_sym_SEMI] = ACTIONS(578),
    [anon_sym_using] = ACTIONS(576),
    [anon_sym_namespace] = ACTIONS(576),
    [anon_sym_RBRACE] = ACTIONS(576),
    [anon_sym_class] = ACTIONS(576),
    [anon_sym_unsafe] = ACTIONS(576),
    [anon_sym_abstract] = ACTIONS(576),
    [anon_sym_sealed] = ACTIONS(576),
    [anon_sym_static] = ACTIONS(576),
    [anon_sym_new] = ACTIONS(576),
    [anon_sym_public] = ACTIONS(576),
    [anon_sym_protected] = ACTIONS(576),
    [anon_sym_internal] = ACTIONS(576),
    [anon_sym_private] = ACTIONS(576),
    [anon_sym_interface] = ACTIONS(576),
    [anon_sym_struct] = ACTIONS(576),
    [anon_sym_enum] = ACTIONS(576),
    [anon_sym_delegate] = ACTIONS(576),
    [anon_sym_LBRACK] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [237] = {
    [sym_enum_member_declaration] = STATE(316),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [238] = {
    [anon_sym_RBRACE] = ACTIONS(580),
    [anon_sym_COMMA] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [239] = {
    [sym_equals_value_clause] = STATE(319),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_COMMA] = ACTIONS(574),
    [anon_sym_EQ] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
  },
  [240] = {
    [anon_sym_LBRACK] = ACTIONS(214),
    [sym_identifier_name] = ACTIONS(212),
    [sym_comment] = ACTIONS(36),
  },
  [241] = {
    [sym_enum_member_declaration] = STATE(320),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [242] = {
    [anon_sym_SEMI] = ACTIONS(584),
    [sym_comment] = ACTIONS(36),
  },
  [243] = {
    [anon_sym_sbyte] = ACTIONS(586),
    [anon_sym_byte] = ACTIONS(586),
    [anon_sym_short] = ACTIONS(586),
    [anon_sym_ushort] = ACTIONS(586),
    [anon_sym_int] = ACTIONS(586),
    [anon_sym_uint] = ACTIONS(586),
    [anon_sym_long] = ACTIONS(586),
    [anon_sym_ulong] = ACTIONS(586),
    [anon_sym_char] = ACTIONS(586),
    [anon_sym_bool] = ACTIONS(586),
    [anon_sym_decimal] = ACTIONS(586),
    [anon_sym_double] = ACTIONS(586),
    [anon_sym_float] = ACTIONS(586),
    [anon_sym_object] = ACTIONS(586),
    [anon_sym_string] = ACTIONS(586),
    [sym_identifier_name] = ACTIONS(588),
    [sym_comment] = ACTIONS(36),
  },
  [244] = {
    [sym_array_type] = STATE(321),
    [sym__type] = STATE(322),
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
  [245] = {
    [sym_attribute_list] = STATE(323),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [246] = {
    [anon_sym_RPAREN] = ACTIONS(590),
    [sym_comment] = ACTIONS(36),
  },
  [247] = {
    [sym_parameter_array] = STATE(326),
    [sym__attributes] = STATE(327),
    [sym__attribute_section] = STATE(251),
    [aux_sym__formal_parameter_list_repeat1] = STATE(328),
    [aux_sym__attributes_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(592),
    [anon_sym_RPAREN] = ACTIONS(594),
    [sym_params_keyword] = ACTIONS(596),
    [anon_sym_LBRACK] = ACTIONS(442),
    [sym_comment] = ACTIONS(36),
  },
  [248] = {
    [sym__type] = STATE(329),
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
    [anon_sym_RPAREN] = ACTIONS(594),
    [sym_comment] = ACTIONS(36),
  },
  [250] = {
    [sym_parameter_modifier] = STATE(331),
    [sym__type] = STATE(329),
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
    [anon_sym_ref] = ACTIONS(438),
    [anon_sym_out] = ACTIONS(438),
    [anon_sym_this] = ACTIONS(438),
    [sym_params_keyword] = ACTIONS(598),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [251] = {
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
  [252] = {
    [sym_identifier_name] = ACTIONS(600),
    [sym_comment] = ACTIONS(36),
  },
  [253] = {
    [sym__attribute_section] = STATE(333),
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
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_bool] = ACTIONS(118),
    [anon_sym_decimal] = ACTIONS(118),
    [anon_sym_double] = ACTIONS(118),
    [anon_sym_float] = ACTIONS(118),
    [anon_sym_object] = ACTIONS(118),
    [anon_sym_string] = ACTIONS(118),
    [sym_identifier_name] = ACTIONS(120),
    [sym_comment] = ACTIONS(36),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [anon_sym_using] = ACTIONS(602),
    [anon_sym_namespace] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(602),
    [anon_sym_class] = ACTIONS(602),
    [anon_sym_unsafe] = ACTIONS(602),
    [anon_sym_abstract] = ACTIONS(602),
    [anon_sym_sealed] = ACTIONS(602),
    [anon_sym_static] = ACTIONS(602),
    [anon_sym_new] = ACTIONS(602),
    [anon_sym_public] = ACTIONS(602),
    [anon_sym_protected] = ACTIONS(602),
    [anon_sym_internal] = ACTIONS(602),
    [anon_sym_private] = ACTIONS(602),
    [anon_sym_interface] = ACTIONS(602),
    [anon_sym_struct] = ACTIONS(602),
    [anon_sym_enum] = ACTIONS(602),
    [anon_sym_delegate] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(602),
    [sym_comment] = ACTIONS(36),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_namespace] = ACTIONS(604),
    [anon_sym_class] = ACTIONS(604),
    [anon_sym_unsafe] = ACTIONS(604),
    [anon_sym_abstract] = ACTIONS(604),
    [anon_sym_sealed] = ACTIONS(604),
    [anon_sym_static] = ACTIONS(604),
    [anon_sym_new] = ACTIONS(604),
    [anon_sym_public] = ACTIONS(604),
    [anon_sym_protected] = ACTIONS(604),
    [anon_sym_internal] = ACTIONS(604),
    [anon_sym_private] = ACTIONS(604),
    [anon_sym_interface] = ACTIONS(604),
    [anon_sym_struct] = ACTIONS(604),
    [anon_sym_enum] = ACTIONS(604),
    [anon_sym_delegate] = ACTIONS(604),
    [anon_sym_LBRACK] = ACTIONS(604),
    [sym_comment] = ACTIONS(36),
  },
  [256] = {
    [anon_sym_COMMA] = ACTIONS(606),
    [anon_sym_RBRACK] = ACTIONS(606),
    [sym_comment] = ACTIONS(36),
  },
  [257] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(334),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(534),
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
  },
  [258] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(155),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(335),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(550),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [259] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(336),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(554),
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
  },
  [260] = {
    [aux_sym_enum_declaration_repeat1] = STATE(337),
    [anon_sym_RBRACE] = ACTIONS(580),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [261] = {
    [anon_sym_LBRACE] = ACTIONS(608),
    [sym_comment] = ACTIONS(36),
  },
  [262] = {
    [anon_sym_SEMI] = ACTIONS(610),
    [sym_comment] = ACTIONS(36),
  },
  [263] = {
    [anon_sym_LBRACE] = ACTIONS(612),
    [sym_comment] = ACTIONS(36),
  },
  [264] = {
    [anon_sym_LBRACE] = ACTIONS(614),
    [sym_comment] = ACTIONS(36),
  },
  [265] = {
    [anon_sym_LBRACE] = ACTIONS(616),
    [sym_comment] = ACTIONS(36),
  },
  [266] = {
    [sym__integral_type] = STATE(343),
    [anon_sym_sbyte] = ACTIONS(276),
    [anon_sym_byte] = ACTIONS(276),
    [anon_sym_short] = ACTIONS(276),
    [anon_sym_ushort] = ACTIONS(276),
    [anon_sym_int] = ACTIONS(276),
    [anon_sym_uint] = ACTIONS(276),
    [anon_sym_long] = ACTIONS(276),
    [anon_sym_ulong] = ACTIONS(276),
    [anon_sym_char] = ACTIONS(276),
    [sym_comment] = ACTIONS(36),
  },
  [267] = {
    [sym_parameter_list] = STATE(344),
    [anon_sym_LPAREN] = ACTIONS(282),
    [sym_comment] = ACTIONS(36),
  },
  [268] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(346),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(618),
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
  },
  [269] = {
    [anon_sym_LBRACE] = ACTIONS(620),
    [sym_comment] = ACTIONS(36),
  },
  [270] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(155),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(349),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(622),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [271] = {
    [anon_sym_LBRACE] = ACTIONS(624),
    [sym_comment] = ACTIONS(36),
  },
  [272] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(352),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(626),
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
  },
  [273] = {
    [anon_sym_LBRACE] = ACTIONS(628),
    [sym_comment] = ACTIONS(36),
  },
  [274] = {
    [sym_enum_member_declaration] = STATE(354),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [275] = {
    [sym__integral_type] = STATE(355),
    [anon_sym_sbyte] = ACTIONS(276),
    [anon_sym_byte] = ACTIONS(276),
    [anon_sym_short] = ACTIONS(276),
    [anon_sym_ushort] = ACTIONS(276),
    [anon_sym_int] = ACTIONS(276),
    [anon_sym_uint] = ACTIONS(276),
    [anon_sym_long] = ACTIONS(276),
    [anon_sym_ulong] = ACTIONS(276),
    [anon_sym_char] = ACTIONS(276),
    [sym_comment] = ACTIONS(36),
  },
  [276] = {
    [sym_parameter_list] = STATE(356),
    [anon_sym_LPAREN] = ACTIONS(282),
    [sym_comment] = ACTIONS(36),
  },
  [277] = {
    [anon_sym_RBRACE] = ACTIONS(630),
    [anon_sym_class] = ACTIONS(632),
    [anon_sym_unsafe] = ACTIONS(632),
    [anon_sym_abstract] = ACTIONS(632),
    [anon_sym_sealed] = ACTIONS(632),
    [anon_sym_static] = ACTIONS(632),
    [anon_sym_new] = ACTIONS(632),
    [anon_sym_public] = ACTIONS(632),
    [anon_sym_protected] = ACTIONS(632),
    [anon_sym_internal] = ACTIONS(632),
    [anon_sym_private] = ACTIONS(632),
    [anon_sym_interface] = ACTIONS(632),
    [anon_sym_struct] = ACTIONS(632),
    [anon_sym_enum] = ACTIONS(632),
    [anon_sym_sbyte] = ACTIONS(632),
    [anon_sym_byte] = ACTIONS(632),
    [anon_sym_short] = ACTIONS(632),
    [anon_sym_ushort] = ACTIONS(632),
    [anon_sym_int] = ACTIONS(632),
    [anon_sym_uint] = ACTIONS(632),
    [anon_sym_long] = ACTIONS(632),
    [anon_sym_ulong] = ACTIONS(632),
    [anon_sym_char] = ACTIONS(632),
    [anon_sym_delegate] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(630),
    [sym_const_keyword] = ACTIONS(632),
    [anon_sym_readonly] = ACTIONS(632),
    [anon_sym_volatile] = ACTIONS(632),
    [anon_sym_bool] = ACTIONS(632),
    [anon_sym_decimal] = ACTIONS(632),
    [anon_sym_double] = ACTIONS(632),
    [anon_sym_float] = ACTIONS(632),
    [anon_sym_object] = ACTIONS(632),
    [anon_sym_string] = ACTIONS(632),
    [sym_identifier_name] = ACTIONS(634),
    [sym_comment] = ACTIONS(36),
  },
  [278] = {
    [sym_type_parameter_list] = STATE(357),
    [anon_sym_LBRACE] = ACTIONS(620),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [279] = {
    [sym_type_parameter_list] = STATE(358),
    [anon_sym_LBRACE] = ACTIONS(624),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [280] = {
    [sym_type_parameter_list] = STATE(359),
    [anon_sym_LBRACE] = ACTIONS(628),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [281] = {
    [anon_sym_LBRACE] = ACTIONS(636),
    [anon_sym_COLON] = ACTIONS(638),
    [sym_comment] = ACTIONS(36),
  },
  [282] = {
    [sym_identifier_name] = ACTIONS(640),
    [sym_comment] = ACTIONS(36),
  },
  [283] = {
    [anon_sym_SEMI] = ACTIONS(642),
    [sym_comment] = ACTIONS(36),
  },
  [284] = {
    [sym_identifier_name] = ACTIONS(644),
    [sym_comment] = ACTIONS(36),
  },
  [285] = {
    [sym_identifier_name] = ACTIONS(646),
    [sym_comment] = ACTIONS(36),
  },
  [286] = {
    [sym_identifier_name] = ACTIONS(648),
    [sym_comment] = ACTIONS(36),
  },
  [287] = {
    [sym_identifier_name] = ACTIONS(650),
    [sym_comment] = ACTIONS(36),
  },
  [288] = {
    [sym__return_type] = STATE(368),
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
  [289] = {
    [sym_variable_declaration] = STATE(369),
    [sym__type] = STATE(145),
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
  [290] = {
    [anon_sym_SEMI] = ACTIONS(652),
    [anon_sym_COMMA] = ACTIONS(652),
    [sym_comment] = ACTIONS(36),
  },
  [291] = {
    [sym_variable_declarator] = STATE(370),
    [sym_identifier_name] = ACTIONS(394),
    [sym_comment] = ACTIONS(36),
  },
  [292] = {
    [anon_sym_SEMI] = ACTIONS(654),
    [anon_sym_COMMA] = ACTIONS(656),
    [sym_comment] = ACTIONS(36),
  },
  [293] = {
    [anon_sym_COMMA] = ACTIONS(658),
    [anon_sym_GT] = ACTIONS(658),
    [sym_comment] = ACTIONS(36),
  },
  [294] = {
    [sym__type] = STATE(147),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [sym_type_parameter] = STATE(372),
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
  [295] = {
    [anon_sym_LBRACE] = ACTIONS(660),
    [anon_sym_COMMA] = ACTIONS(660),
    [anon_sym_LBRACK] = ACTIONS(660),
    [anon_sym_GT] = ACTIONS(660),
    [sym_identifier_name] = ACTIONS(662),
    [sym_comment] = ACTIONS(36),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(664),
    [anon_sym_using] = ACTIONS(664),
    [anon_sym_namespace] = ACTIONS(664),
    [anon_sym_RBRACE] = ACTIONS(664),
    [anon_sym_class] = ACTIONS(664),
    [anon_sym_unsafe] = ACTIONS(664),
    [anon_sym_abstract] = ACTIONS(664),
    [anon_sym_sealed] = ACTIONS(664),
    [anon_sym_static] = ACTIONS(664),
    [anon_sym_new] = ACTIONS(664),
    [anon_sym_public] = ACTIONS(664),
    [anon_sym_protected] = ACTIONS(664),
    [anon_sym_internal] = ACTIONS(664),
    [anon_sym_private] = ACTIONS(664),
    [anon_sym_interface] = ACTIONS(664),
    [anon_sym_struct] = ACTIONS(664),
    [anon_sym_enum] = ACTIONS(664),
    [anon_sym_delegate] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(664),
    [sym_comment] = ACTIONS(36),
  },
  [297] = {
    [anon_sym_unsafe] = ACTIONS(288),
    [anon_sym_static] = ACTIONS(288),
    [anon_sym_new] = ACTIONS(288),
    [anon_sym_public] = ACTIONS(288),
    [anon_sym_protected] = ACTIONS(288),
    [anon_sym_internal] = ACTIONS(288),
    [anon_sym_private] = ACTIONS(288),
    [anon_sym_sbyte] = ACTIONS(288),
    [anon_sym_byte] = ACTIONS(288),
    [anon_sym_short] = ACTIONS(288),
    [anon_sym_ushort] = ACTIONS(288),
    [anon_sym_int] = ACTIONS(288),
    [anon_sym_uint] = ACTIONS(288),
    [anon_sym_long] = ACTIONS(288),
    [anon_sym_ulong] = ACTIONS(288),
    [anon_sym_char] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_const_keyword] = ACTIONS(288),
    [anon_sym_readonly] = ACTIONS(288),
    [anon_sym_volatile] = ACTIONS(288),
    [anon_sym_bool] = ACTIONS(288),
    [anon_sym_decimal] = ACTIONS(288),
    [anon_sym_double] = ACTIONS(288),
    [anon_sym_float] = ACTIONS(288),
    [anon_sym_object] = ACTIONS(288),
    [anon_sym_string] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [298] = {
    [anon_sym_RBRACE] = ACTIONS(630),
    [anon_sym_unsafe] = ACTIONS(632),
    [anon_sym_static] = ACTIONS(632),
    [anon_sym_new] = ACTIONS(632),
    [anon_sym_public] = ACTIONS(632),
    [anon_sym_protected] = ACTIONS(632),
    [anon_sym_internal] = ACTIONS(632),
    [anon_sym_private] = ACTIONS(632),
    [anon_sym_sbyte] = ACTIONS(632),
    [anon_sym_byte] = ACTIONS(632),
    [anon_sym_short] = ACTIONS(632),
    [anon_sym_ushort] = ACTIONS(632),
    [anon_sym_int] = ACTIONS(632),
    [anon_sym_uint] = ACTIONS(632),
    [anon_sym_long] = ACTIONS(632),
    [anon_sym_ulong] = ACTIONS(632),
    [anon_sym_char] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(630),
    [sym_const_keyword] = ACTIONS(632),
    [anon_sym_readonly] = ACTIONS(632),
    [anon_sym_volatile] = ACTIONS(632),
    [anon_sym_bool] = ACTIONS(632),
    [anon_sym_decimal] = ACTIONS(632),
    [anon_sym_double] = ACTIONS(632),
    [anon_sym_float] = ACTIONS(632),
    [anon_sym_object] = ACTIONS(632),
    [anon_sym_string] = ACTIONS(632),
    [sym_identifier_name] = ACTIONS(634),
    [sym_comment] = ACTIONS(36),
  },
  [299] = {
    [anon_sym_SEMI] = ACTIONS(666),
    [sym_comment] = ACTIONS(36),
  },
  [300] = {
    [sym_variable_declaration] = STATE(374),
    [sym__type] = STATE(145),
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
  [301] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_using] = ACTIONS(668),
    [anon_sym_namespace] = ACTIONS(668),
    [anon_sym_RBRACE] = ACTIONS(668),
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
    [anon_sym_delegate] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(668),
    [sym_comment] = ACTIONS(36),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(670),
    [anon_sym_using] = ACTIONS(670),
    [anon_sym_namespace] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(670),
    [anon_sym_class] = ACTIONS(670),
    [anon_sym_unsafe] = ACTIONS(670),
    [anon_sym_abstract] = ACTIONS(670),
    [anon_sym_sealed] = ACTIONS(670),
    [anon_sym_static] = ACTIONS(670),
    [anon_sym_new] = ACTIONS(670),
    [anon_sym_public] = ACTIONS(670),
    [anon_sym_protected] = ACTIONS(670),
    [anon_sym_internal] = ACTIONS(670),
    [anon_sym_private] = ACTIONS(670),
    [anon_sym_interface] = ACTIONS(670),
    [anon_sym_struct] = ACTIONS(670),
    [anon_sym_enum] = ACTIONS(670),
    [anon_sym_delegate] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(670),
    [sym_comment] = ACTIONS(36),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_identifier_name] = ACTIONS(288),
    [sym_comment] = ACTIONS(36),
  },
  [304] = {
    [anon_sym_SEMI] = ACTIONS(672),
    [anon_sym_RBRACE] = ACTIONS(672),
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(672),
    [sym_params_keyword] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [sym_comment] = ACTIONS(36),
  },
  [305] = {
    [sym__unicode_escape_sequence] = STATE(375),
    [sym__simple_escape_sequence] = STATE(375),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(674),
    [sym__hexadecimal_escape_sequence] = ACTIONS(674),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(676),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(678),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(678),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(678),
    [anon_sym_BSLASH0] = ACTIONS(678),
    [anon_sym_BSLASHa] = ACTIONS(678),
    [anon_sym_BSLASHb] = ACTIONS(678),
    [anon_sym_BSLASHf] = ACTIONS(678),
    [anon_sym_BSLASHn] = ACTIONS(678),
    [anon_sym_BSLASHr] = ACTIONS(678),
    [anon_sym_BSLASHt] = ACTIONS(678),
    [anon_sym_BSLASHv] = ACTIONS(678),
    [sym_comment] = ACTIONS(680),
  },
  [306] = {
    [anon_sym_SEMI] = ACTIONS(682),
    [anon_sym_RBRACE] = ACTIONS(682),
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_params_keyword] = ACTIONS(682),
    [anon_sym_LBRACK] = ACTIONS(682),
    [sym__integer_type_suffix] = ACTIONS(684),
    [anon_sym_DOT] = ACTIONS(686),
    [sym__real_type_suffix] = ACTIONS(688),
    [sym__exponent_part] = ACTIONS(690),
    [sym_comment] = ACTIONS(36),
  },
  [307] = {
    [anon_sym_SEMI] = ACTIONS(682),
    [anon_sym_RBRACE] = ACTIONS(682),
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_params_keyword] = ACTIONS(682),
    [anon_sym_LBRACK] = ACTIONS(682),
    [sym__integer_type_suffix] = ACTIONS(684),
    [sym_comment] = ACTIONS(36),
  },
  [308] = {
    [anon_sym_SEMI] = ACTIONS(692),
    [anon_sym_RBRACE] = ACTIONS(692),
    [anon_sym_COMMA] = ACTIONS(692),
    [anon_sym_RPAREN] = ACTIONS(692),
    [sym_params_keyword] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(692),
    [sym_comment] = ACTIONS(36),
  },
  [309] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(694),
    [sym_comment] = ACTIONS(36),
  },
  [310] = {
    [sym__unicode_escape_sequence] = STATE(383),
    [sym__simple_escape_sequence] = STATE(383),
    [sym__regular_string_literal_character] = STATE(387),
    [aux_sym__regular_string_literal_repeat1] = STATE(388),
    [sym__hexadecimal_escape_sequence] = ACTIONS(696),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(698),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(698),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(700),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(700),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(700),
    [anon_sym_BSLASH0] = ACTIONS(700),
    [anon_sym_BSLASHa] = ACTIONS(700),
    [anon_sym_BSLASHb] = ACTIONS(700),
    [anon_sym_BSLASHf] = ACTIONS(700),
    [anon_sym_BSLASHn] = ACTIONS(700),
    [anon_sym_BSLASHr] = ACTIONS(700),
    [anon_sym_BSLASHt] = ACTIONS(700),
    [anon_sym_BSLASHv] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(696),
    [sym_comment] = ACTIONS(680),
  },
  [311] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(704),
    [sym_comment] = ACTIONS(680),
  },
  [312] = {
    [anon_sym_SEMI] = ACTIONS(706),
    [anon_sym_RBRACE] = ACTIONS(706),
    [anon_sym_COMMA] = ACTIONS(706),
    [anon_sym_RPAREN] = ACTIONS(706),
    [sym_params_keyword] = ACTIONS(706),
    [anon_sym_LBRACK] = ACTIONS(706),
    [sym_comment] = ACTIONS(36),
  },
  [313] = {
    [anon_sym_SEMI] = ACTIONS(708),
    [anon_sym_RBRACE] = ACTIONS(708),
    [anon_sym_COMMA] = ACTIONS(708),
    [anon_sym_RPAREN] = ACTIONS(708),
    [sym_params_keyword] = ACTIONS(708),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_comment] = ACTIONS(36),
  },
  [314] = {
    [anon_sym_SEMI] = ACTIONS(710),
    [anon_sym_RBRACE] = ACTIONS(710),
    [anon_sym_COMMA] = ACTIONS(710),
    [anon_sym_RPAREN] = ACTIONS(710),
    [sym_params_keyword] = ACTIONS(710),
    [anon_sym_LBRACK] = ACTIONS(710),
    [sym_comment] = ACTIONS(36),
  },
  [315] = {
    [ts_builtin_sym_end] = ACTIONS(712),
    [anon_sym_using] = ACTIONS(712),
    [anon_sym_namespace] = ACTIONS(712),
    [anon_sym_RBRACE] = ACTIONS(712),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_unsafe] = ACTIONS(712),
    [anon_sym_abstract] = ACTIONS(712),
    [anon_sym_sealed] = ACTIONS(712),
    [anon_sym_static] = ACTIONS(712),
    [anon_sym_new] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(712),
    [anon_sym_protected] = ACTIONS(712),
    [anon_sym_internal] = ACTIONS(712),
    [anon_sym_private] = ACTIONS(712),
    [anon_sym_interface] = ACTIONS(712),
    [anon_sym_struct] = ACTIONS(712),
    [anon_sym_enum] = ACTIONS(712),
    [anon_sym_delegate] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [sym_comment] = ACTIONS(36),
  },
  [316] = {
    [anon_sym_RBRACE] = ACTIONS(714),
    [anon_sym_COMMA] = ACTIONS(714),
    [sym_comment] = ACTIONS(36),
  },
  [317] = {
    [ts_builtin_sym_end] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(716),
    [anon_sym_using] = ACTIONS(712),
    [anon_sym_namespace] = ACTIONS(712),
    [anon_sym_RBRACE] = ACTIONS(712),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_unsafe] = ACTIONS(712),
    [anon_sym_abstract] = ACTIONS(712),
    [anon_sym_sealed] = ACTIONS(712),
    [anon_sym_static] = ACTIONS(712),
    [anon_sym_new] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(712),
    [anon_sym_protected] = ACTIONS(712),
    [anon_sym_internal] = ACTIONS(712),
    [anon_sym_private] = ACTIONS(712),
    [anon_sym_interface] = ACTIONS(712),
    [anon_sym_struct] = ACTIONS(712),
    [anon_sym_enum] = ACTIONS(712),
    [anon_sym_delegate] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [sym_comment] = ACTIONS(36),
  },
  [318] = {
    [sym_enum_member_declaration] = STATE(391),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [319] = {
    [anon_sym_RBRACE] = ACTIONS(718),
    [anon_sym_COMMA] = ACTIONS(718),
    [sym_comment] = ACTIONS(36),
  },
  [320] = {
    [aux_sym_enum_declaration_repeat1] = STATE(393),
    [anon_sym_RBRACE] = ACTIONS(720),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [321] = {
    [sym_identifier_name] = ACTIONS(722),
    [sym_comment] = ACTIONS(36),
  },
  [322] = {
    [sym_array_rank_specifier] = STATE(396),
    [anon_sym_LBRACK] = ACTIONS(724),
    [sym_comment] = ACTIONS(36),
  },
  [323] = {
    [anon_sym_RBRACK] = ACTIONS(726),
    [sym_comment] = ACTIONS(36),
  },
  [324] = {
    [anon_sym_SEMI] = ACTIONS(728),
    [sym_comment] = ACTIONS(36),
  },
  [325] = {
    [sym_parameter] = STATE(399),
    [sym_parameter_modifier] = STATE(248),
    [sym__attributes] = STATE(400),
    [sym__attribute_section] = STATE(401),
    [sym__type] = STATE(252),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(402),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_ref] = ACTIONS(438),
    [anon_sym_out] = ACTIONS(438),
    [anon_sym_this] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [326] = {
    [anon_sym_RPAREN] = ACTIONS(732),
    [sym_comment] = ACTIONS(36),
  },
  [327] = {
    [sym_params_keyword] = ACTIONS(734),
    [sym_comment] = ACTIONS(36),
  },
  [328] = {
    [sym_parameter_array] = STATE(404),
    [sym__attributes] = STATE(327),
    [sym__attribute_section] = STATE(251),
    [aux_sym__attributes_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(736),
    [anon_sym_RPAREN] = ACTIONS(732),
    [sym_params_keyword] = ACTIONS(596),
    [anon_sym_LBRACK] = ACTIONS(442),
    [sym_comment] = ACTIONS(36),
  },
  [329] = {
    [sym_identifier_name] = ACTIONS(738),
    [sym_comment] = ACTIONS(36),
  },
  [330] = {
    [sym_array_type] = STATE(406),
    [sym__type] = STATE(322),
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
  [331] = {
    [sym__type] = STATE(407),
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
  [332] = {
    [sym_equals_value_clause] = STATE(408),
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(740),
    [sym_params_keyword] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(740),
    [anon_sym_EQ] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
  },
  [333] = {
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
  [334] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(742),
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
  },
  [335] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(228),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(744),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [336] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(746),
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
  },
  [337] = {
    [anon_sym_RBRACE] = ACTIONS(720),
    [anon_sym_COMMA] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [338] = {
    [sym_enum_member_declaration] = STATE(412),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [339] = {
    [ts_builtin_sym_end] = ACTIONS(748),
    [anon_sym_using] = ACTIONS(748),
    [anon_sym_namespace] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(748),
    [anon_sym_class] = ACTIONS(748),
    [anon_sym_unsafe] = ACTIONS(748),
    [anon_sym_abstract] = ACTIONS(748),
    [anon_sym_sealed] = ACTIONS(748),
    [anon_sym_static] = ACTIONS(748),
    [anon_sym_new] = ACTIONS(748),
    [anon_sym_public] = ACTIONS(748),
    [anon_sym_protected] = ACTIONS(748),
    [anon_sym_internal] = ACTIONS(748),
    [anon_sym_private] = ACTIONS(748),
    [anon_sym_interface] = ACTIONS(748),
    [anon_sym_struct] = ACTIONS(748),
    [anon_sym_enum] = ACTIONS(748),
    [anon_sym_delegate] = ACTIONS(748),
    [anon_sym_LBRACK] = ACTIONS(748),
    [sym_comment] = ACTIONS(36),
  },
  [340] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(413),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(742),
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
  },
  [341] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(155),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(414),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(744),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [342] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(415),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(746),
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
  },
  [343] = {
    [anon_sym_LBRACE] = ACTIONS(750),
    [sym_comment] = ACTIONS(36),
  },
  [344] = {
    [anon_sym_SEMI] = ACTIONS(752),
    [sym_comment] = ACTIONS(36),
  },
  [345] = {
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_class] = ACTIONS(754),
    [anon_sym_unsafe] = ACTIONS(754),
    [anon_sym_abstract] = ACTIONS(754),
    [anon_sym_sealed] = ACTIONS(754),
    [anon_sym_static] = ACTIONS(754),
    [anon_sym_new] = ACTIONS(754),
    [anon_sym_public] = ACTIONS(754),
    [anon_sym_protected] = ACTIONS(754),
    [anon_sym_internal] = ACTIONS(754),
    [anon_sym_private] = ACTIONS(754),
    [anon_sym_interface] = ACTIONS(754),
    [anon_sym_struct] = ACTIONS(754),
    [anon_sym_enum] = ACTIONS(754),
    [anon_sym_sbyte] = ACTIONS(754),
    [anon_sym_byte] = ACTIONS(754),
    [anon_sym_short] = ACTIONS(754),
    [anon_sym_ushort] = ACTIONS(754),
    [anon_sym_int] = ACTIONS(754),
    [anon_sym_uint] = ACTIONS(754),
    [anon_sym_long] = ACTIONS(754),
    [anon_sym_ulong] = ACTIONS(754),
    [anon_sym_char] = ACTIONS(754),
    [anon_sym_delegate] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(328),
    [sym_const_keyword] = ACTIONS(754),
    [anon_sym_readonly] = ACTIONS(754),
    [anon_sym_volatile] = ACTIONS(754),
    [anon_sym_bool] = ACTIONS(754),
    [anon_sym_decimal] = ACTIONS(754),
    [anon_sym_double] = ACTIONS(754),
    [anon_sym_float] = ACTIONS(754),
    [anon_sym_object] = ACTIONS(754),
    [anon_sym_string] = ACTIONS(754),
    [sym_identifier_name] = ACTIONS(756),
    [sym_comment] = ACTIONS(36),
  },
  [346] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(758),
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
  },
  [347] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(419),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(758),
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
  },
  [348] = {
    [anon_sym_RBRACE] = ACTIONS(404),
    [anon_sym_class] = ACTIONS(760),
    [anon_sym_unsafe] = ACTIONS(760),
    [anon_sym_abstract] = ACTIONS(760),
    [anon_sym_sealed] = ACTIONS(760),
    [anon_sym_static] = ACTIONS(760),
    [anon_sym_new] = ACTIONS(760),
    [anon_sym_public] = ACTIONS(760),
    [anon_sym_protected] = ACTIONS(760),
    [anon_sym_internal] = ACTIONS(760),
    [anon_sym_private] = ACTIONS(760),
    [anon_sym_interface] = ACTIONS(760),
    [anon_sym_struct] = ACTIONS(760),
    [anon_sym_enum] = ACTIONS(760),
    [anon_sym_sbyte] = ACTIONS(760),
    [anon_sym_byte] = ACTIONS(760),
    [anon_sym_short] = ACTIONS(760),
    [anon_sym_ushort] = ACTIONS(760),
    [anon_sym_int] = ACTIONS(760),
    [anon_sym_uint] = ACTIONS(760),
    [anon_sym_long] = ACTIONS(760),
    [anon_sym_ulong] = ACTIONS(760),
    [anon_sym_char] = ACTIONS(760),
    [anon_sym_delegate] = ACTIONS(760),
    [anon_sym_LBRACK] = ACTIONS(404),
    [sym_const_keyword] = ACTIONS(760),
    [anon_sym_readonly] = ACTIONS(760),
    [anon_sym_volatile] = ACTIONS(760),
    [anon_sym_bool] = ACTIONS(760),
    [anon_sym_decimal] = ACTIONS(760),
    [anon_sym_double] = ACTIONS(760),
    [anon_sym_float] = ACTIONS(760),
    [anon_sym_object] = ACTIONS(760),
    [anon_sym_string] = ACTIONS(760),
    [sym_identifier_name] = ACTIONS(762),
    [sym_comment] = ACTIONS(36),
  },
  [349] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(228),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(764),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [350] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(155),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(421),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(764),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [351] = {
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_class] = ACTIONS(766),
    [anon_sym_unsafe] = ACTIONS(766),
    [anon_sym_abstract] = ACTIONS(766),
    [anon_sym_sealed] = ACTIONS(766),
    [anon_sym_static] = ACTIONS(766),
    [anon_sym_new] = ACTIONS(766),
    [anon_sym_public] = ACTIONS(766),
    [anon_sym_protected] = ACTIONS(766),
    [anon_sym_internal] = ACTIONS(766),
    [anon_sym_private] = ACTIONS(766),
    [anon_sym_interface] = ACTIONS(766),
    [anon_sym_struct] = ACTIONS(766),
    [anon_sym_enum] = ACTIONS(766),
    [anon_sym_sbyte] = ACTIONS(766),
    [anon_sym_byte] = ACTIONS(766),
    [anon_sym_short] = ACTIONS(766),
    [anon_sym_ushort] = ACTIONS(766),
    [anon_sym_int] = ACTIONS(766),
    [anon_sym_uint] = ACTIONS(766),
    [anon_sym_long] = ACTIONS(766),
    [anon_sym_ulong] = ACTIONS(766),
    [anon_sym_char] = ACTIONS(766),
    [anon_sym_delegate] = ACTIONS(766),
    [anon_sym_LBRACK] = ACTIONS(418),
    [sym_const_keyword] = ACTIONS(766),
    [anon_sym_readonly] = ACTIONS(766),
    [anon_sym_volatile] = ACTIONS(766),
    [anon_sym_bool] = ACTIONS(766),
    [anon_sym_decimal] = ACTIONS(766),
    [anon_sym_double] = ACTIONS(766),
    [anon_sym_float] = ACTIONS(766),
    [anon_sym_object] = ACTIONS(766),
    [anon_sym_string] = ACTIONS(766),
    [sym_identifier_name] = ACTIONS(768),
    [sym_comment] = ACTIONS(36),
  },
  [352] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(770),
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
  },
  [353] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(423),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(770),
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
  },
  [354] = {
    [aux_sym_enum_declaration_repeat1] = STATE(425),
    [anon_sym_RBRACE] = ACTIONS(772),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [355] = {
    [anon_sym_LBRACE] = ACTIONS(774),
    [sym_comment] = ACTIONS(36),
  },
  [356] = {
    [anon_sym_SEMI] = ACTIONS(776),
    [sym_comment] = ACTIONS(36),
  },
  [357] = {
    [anon_sym_LBRACE] = ACTIONS(778),
    [sym_comment] = ACTIONS(36),
  },
  [358] = {
    [anon_sym_LBRACE] = ACTIONS(780),
    [sym_comment] = ACTIONS(36),
  },
  [359] = {
    [anon_sym_LBRACE] = ACTIONS(782),
    [sym_comment] = ACTIONS(36),
  },
  [360] = {
    [sym_enum_member_declaration] = STATE(431),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [361] = {
    [sym__integral_type] = STATE(432),
    [anon_sym_sbyte] = ACTIONS(276),
    [anon_sym_byte] = ACTIONS(276),
    [anon_sym_short] = ACTIONS(276),
    [anon_sym_ushort] = ACTIONS(276),
    [anon_sym_int] = ACTIONS(276),
    [anon_sym_uint] = ACTIONS(276),
    [anon_sym_long] = ACTIONS(276),
    [anon_sym_ulong] = ACTIONS(276),
    [anon_sym_char] = ACTIONS(276),
    [sym_comment] = ACTIONS(36),
  },
  [362] = {
    [sym_parameter_list] = STATE(433),
    [anon_sym_LPAREN] = ACTIONS(282),
    [sym_comment] = ACTIONS(36),
  },
  [363] = {
    [anon_sym_RBRACE] = ACTIONS(784),
    [anon_sym_class] = ACTIONS(786),
    [anon_sym_unsafe] = ACTIONS(786),
    [anon_sym_abstract] = ACTIONS(786),
    [anon_sym_sealed] = ACTIONS(786),
    [anon_sym_static] = ACTIONS(786),
    [anon_sym_new] = ACTIONS(786),
    [anon_sym_public] = ACTIONS(786),
    [anon_sym_protected] = ACTIONS(786),
    [anon_sym_internal] = ACTIONS(786),
    [anon_sym_private] = ACTIONS(786),
    [anon_sym_interface] = ACTIONS(786),
    [anon_sym_struct] = ACTIONS(786),
    [anon_sym_enum] = ACTIONS(786),
    [anon_sym_sbyte] = ACTIONS(786),
    [anon_sym_byte] = ACTIONS(786),
    [anon_sym_short] = ACTIONS(786),
    [anon_sym_ushort] = ACTIONS(786),
    [anon_sym_int] = ACTIONS(786),
    [anon_sym_uint] = ACTIONS(786),
    [anon_sym_long] = ACTIONS(786),
    [anon_sym_ulong] = ACTIONS(786),
    [anon_sym_char] = ACTIONS(786),
    [anon_sym_delegate] = ACTIONS(786),
    [anon_sym_LBRACK] = ACTIONS(784),
    [sym_const_keyword] = ACTIONS(786),
    [anon_sym_readonly] = ACTIONS(786),
    [anon_sym_volatile] = ACTIONS(786),
    [anon_sym_bool] = ACTIONS(786),
    [anon_sym_decimal] = ACTIONS(786),
    [anon_sym_double] = ACTIONS(786),
    [anon_sym_float] = ACTIONS(786),
    [anon_sym_object] = ACTIONS(786),
    [anon_sym_string] = ACTIONS(786),
    [sym_identifier_name] = ACTIONS(788),
    [sym_comment] = ACTIONS(36),
  },
  [364] = {
    [sym_type_parameter_list] = STATE(434),
    [anon_sym_LBRACE] = ACTIONS(778),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [365] = {
    [sym_type_parameter_list] = STATE(435),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [366] = {
    [sym_type_parameter_list] = STATE(436),
    [anon_sym_LBRACE] = ACTIONS(782),
    [anon_sym_LT] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [367] = {
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_COLON] = ACTIONS(790),
    [sym_comment] = ACTIONS(36),
  },
  [368] = {
    [sym_identifier_name] = ACTIONS(792),
    [sym_comment] = ACTIONS(36),
  },
  [369] = {
    [anon_sym_SEMI] = ACTIONS(794),
    [sym_comment] = ACTIONS(36),
  },
  [370] = {
    [anon_sym_SEMI] = ACTIONS(796),
    [anon_sym_COMMA] = ACTIONS(796),
    [sym_comment] = ACTIONS(36),
  },
  [371] = {
    [sym_variable_declarator] = STATE(440),
    [sym_identifier_name] = ACTIONS(394),
    [sym_comment] = ACTIONS(36),
  },
  [372] = {
    [anon_sym_COMMA] = ACTIONS(798),
    [anon_sym_GT] = ACTIONS(798),
    [sym_comment] = ACTIONS(36),
  },
  [373] = {
    [anon_sym_RBRACE] = ACTIONS(784),
    [anon_sym_unsafe] = ACTIONS(786),
    [anon_sym_static] = ACTIONS(786),
    [anon_sym_new] = ACTIONS(786),
    [anon_sym_public] = ACTIONS(786),
    [anon_sym_protected] = ACTIONS(786),
    [anon_sym_internal] = ACTIONS(786),
    [anon_sym_private] = ACTIONS(786),
    [anon_sym_sbyte] = ACTIONS(786),
    [anon_sym_byte] = ACTIONS(786),
    [anon_sym_short] = ACTIONS(786),
    [anon_sym_ushort] = ACTIONS(786),
    [anon_sym_int] = ACTIONS(786),
    [anon_sym_uint] = ACTIONS(786),
    [anon_sym_long] = ACTIONS(786),
    [anon_sym_ulong] = ACTIONS(786),
    [anon_sym_char] = ACTIONS(786),
    [anon_sym_LBRACK] = ACTIONS(784),
    [sym_const_keyword] = ACTIONS(786),
    [anon_sym_readonly] = ACTIONS(786),
    [anon_sym_volatile] = ACTIONS(786),
    [anon_sym_bool] = ACTIONS(786),
    [anon_sym_decimal] = ACTIONS(786),
    [anon_sym_double] = ACTIONS(786),
    [anon_sym_float] = ACTIONS(786),
    [anon_sym_object] = ACTIONS(786),
    [anon_sym_string] = ACTIONS(786),
    [sym_identifier_name] = ACTIONS(788),
    [sym_comment] = ACTIONS(36),
  },
  [374] = {
    [anon_sym_SEMI] = ACTIONS(800),
    [sym_comment] = ACTIONS(36),
  },
  [375] = {
    [anon_sym_SQUOTE] = ACTIONS(802),
    [sym_comment] = ACTIONS(36),
  },
  [376] = {
    [anon_sym_SQUOTE] = ACTIONS(804),
    [sym_comment] = ACTIONS(36),
  },
  [377] = {
    [anon_sym_SQUOTE] = ACTIONS(806),
    [sym_comment] = ACTIONS(36),
  },
  [378] = {
    [anon_sym_SEMI] = ACTIONS(808),
    [anon_sym_RBRACE] = ACTIONS(808),
    [anon_sym_COMMA] = ACTIONS(808),
    [anon_sym_RPAREN] = ACTIONS(808),
    [sym_params_keyword] = ACTIONS(808),
    [anon_sym_LBRACK] = ACTIONS(808),
    [sym_comment] = ACTIONS(36),
  },
  [379] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(810),
    [sym_comment] = ACTIONS(36),
  },
  [380] = {
    [anon_sym_SEMI] = ACTIONS(812),
    [anon_sym_RBRACE] = ACTIONS(812),
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_RPAREN] = ACTIONS(812),
    [sym_params_keyword] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(812),
    [sym_comment] = ACTIONS(36),
  },
  [381] = {
    [anon_sym_SEMI] = ACTIONS(812),
    [anon_sym_RBRACE] = ACTIONS(812),
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_RPAREN] = ACTIONS(812),
    [sym_params_keyword] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(812),
    [sym__real_type_suffix] = ACTIONS(814),
    [sym_comment] = ACTIONS(36),
  },
  [382] = {
    [anon_sym_SEMI] = ACTIONS(812),
    [anon_sym_RBRACE] = ACTIONS(812),
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_RPAREN] = ACTIONS(812),
    [sym_params_keyword] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(812),
    [sym__real_type_suffix] = ACTIONS(814),
    [sym__exponent_part] = ACTIONS(816),
    [sym_comment] = ACTIONS(36),
  },
  [383] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(818),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(818),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(818),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(818),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(818),
    [anon_sym_BSLASH0] = ACTIONS(818),
    [anon_sym_BSLASHa] = ACTIONS(818),
    [anon_sym_BSLASHb] = ACTIONS(818),
    [anon_sym_BSLASHf] = ACTIONS(818),
    [anon_sym_BSLASHn] = ACTIONS(818),
    [anon_sym_BSLASHr] = ACTIONS(818),
    [anon_sym_BSLASHt] = ACTIONS(818),
    [anon_sym_BSLASHv] = ACTIONS(818),
    [anon_sym_DQUOTE] = ACTIONS(818),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(818),
    [sym_comment] = ACTIONS(680),
  },
  [384] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(820),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(820),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(820),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(820),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(820),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(820),
    [anon_sym_BSLASH0] = ACTIONS(820),
    [anon_sym_BSLASHa] = ACTIONS(820),
    [anon_sym_BSLASHb] = ACTIONS(820),
    [anon_sym_BSLASHf] = ACTIONS(820),
    [anon_sym_BSLASHn] = ACTIONS(820),
    [anon_sym_BSLASHr] = ACTIONS(820),
    [anon_sym_BSLASHt] = ACTIONS(820),
    [anon_sym_BSLASHv] = ACTIONS(820),
    [anon_sym_DQUOTE] = ACTIONS(820),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(820),
    [sym_comment] = ACTIONS(680),
  },
  [385] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(822),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(822),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(822),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(822),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(822),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(822),
    [anon_sym_BSLASH0] = ACTIONS(822),
    [anon_sym_BSLASHa] = ACTIONS(822),
    [anon_sym_BSLASHb] = ACTIONS(822),
    [anon_sym_BSLASHf] = ACTIONS(822),
    [anon_sym_BSLASHn] = ACTIONS(822),
    [anon_sym_BSLASHr] = ACTIONS(822),
    [anon_sym_BSLASHt] = ACTIONS(822),
    [anon_sym_BSLASHv] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(822),
    [sym_comment] = ACTIONS(680),
  },
  [386] = {
    [anon_sym_SEMI] = ACTIONS(824),
    [anon_sym_RBRACE] = ACTIONS(824),
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_RPAREN] = ACTIONS(824),
    [sym_params_keyword] = ACTIONS(824),
    [anon_sym_LBRACK] = ACTIONS(824),
    [sym_comment] = ACTIONS(36),
  },
  [387] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(826),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(826),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(826),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(826),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(826),
    [anon_sym_BSLASH0] = ACTIONS(826),
    [anon_sym_BSLASHa] = ACTIONS(826),
    [anon_sym_BSLASHb] = ACTIONS(826),
    [anon_sym_BSLASHf] = ACTIONS(826),
    [anon_sym_BSLASHn] = ACTIONS(826),
    [anon_sym_BSLASHr] = ACTIONS(826),
    [anon_sym_BSLASHt] = ACTIONS(826),
    [anon_sym_BSLASHv] = ACTIONS(826),
    [anon_sym_DQUOTE] = ACTIONS(826),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(826),
    [sym_comment] = ACTIONS(680),
  },
  [388] = {
    [sym__unicode_escape_sequence] = STATE(383),
    [sym__simple_escape_sequence] = STATE(383),
    [sym__regular_string_literal_character] = STATE(447),
    [sym__hexadecimal_escape_sequence] = ACTIONS(696),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(698),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(698),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(700),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(700),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(700),
    [anon_sym_BSLASH0] = ACTIONS(700),
    [anon_sym_BSLASHa] = ACTIONS(700),
    [anon_sym_BSLASHb] = ACTIONS(700),
    [anon_sym_BSLASHf] = ACTIONS(700),
    [anon_sym_BSLASHn] = ACTIONS(700),
    [anon_sym_BSLASHr] = ACTIONS(700),
    [anon_sym_BSLASHt] = ACTIONS(700),
    [anon_sym_BSLASHv] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(696),
    [sym_comment] = ACTIONS(680),
  },
  [389] = {
    [anon_sym_DQUOTE] = ACTIONS(830),
    [sym_comment] = ACTIONS(36),
  },
  [390] = {
    [ts_builtin_sym_end] = ACTIONS(832),
    [anon_sym_using] = ACTIONS(832),
    [anon_sym_namespace] = ACTIONS(832),
    [anon_sym_RBRACE] = ACTIONS(832),
    [anon_sym_class] = ACTIONS(832),
    [anon_sym_unsafe] = ACTIONS(832),
    [anon_sym_abstract] = ACTIONS(832),
    [anon_sym_sealed] = ACTIONS(832),
    [anon_sym_static] = ACTIONS(832),
    [anon_sym_new] = ACTIONS(832),
    [anon_sym_public] = ACTIONS(832),
    [anon_sym_protected] = ACTIONS(832),
    [anon_sym_internal] = ACTIONS(832),
    [anon_sym_private] = ACTIONS(832),
    [anon_sym_interface] = ACTIONS(832),
    [anon_sym_struct] = ACTIONS(832),
    [anon_sym_enum] = ACTIONS(832),
    [anon_sym_delegate] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [sym_comment] = ACTIONS(36),
  },
  [391] = {
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_COMMA] = ACTIONS(834),
    [sym_comment] = ACTIONS(36),
  },
  [392] = {
    [ts_builtin_sym_end] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(836),
    [anon_sym_using] = ACTIONS(832),
    [anon_sym_namespace] = ACTIONS(832),
    [anon_sym_RBRACE] = ACTIONS(832),
    [anon_sym_class] = ACTIONS(832),
    [anon_sym_unsafe] = ACTIONS(832),
    [anon_sym_abstract] = ACTIONS(832),
    [anon_sym_sealed] = ACTIONS(832),
    [anon_sym_static] = ACTIONS(832),
    [anon_sym_new] = ACTIONS(832),
    [anon_sym_public] = ACTIONS(832),
    [anon_sym_protected] = ACTIONS(832),
    [anon_sym_internal] = ACTIONS(832),
    [anon_sym_private] = ACTIONS(832),
    [anon_sym_interface] = ACTIONS(832),
    [anon_sym_struct] = ACTIONS(832),
    [anon_sym_enum] = ACTIONS(832),
    [anon_sym_delegate] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [sym_comment] = ACTIONS(36),
  },
  [393] = {
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_COMMA] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [394] = {
    [anon_sym_RPAREN] = ACTIONS(840),
    [sym_comment] = ACTIONS(36),
  },
  [395] = {
    [aux_sym_array_rank_specifier_repeat1] = STATE(453),
    [anon_sym_COMMA] = ACTIONS(842),
    [anon_sym_RBRACK] = ACTIONS(844),
    [sym_comment] = ACTIONS(36),
  },
  [396] = {
    [sym_identifier_name] = ACTIONS(846),
    [sym_comment] = ACTIONS(36),
  },
  [397] = {
    [anon_sym_sbyte] = ACTIONS(288),
    [anon_sym_byte] = ACTIONS(288),
    [anon_sym_short] = ACTIONS(288),
    [anon_sym_ushort] = ACTIONS(288),
    [anon_sym_int] = ACTIONS(288),
    [anon_sym_uint] = ACTIONS(288),
    [anon_sym_long] = ACTIONS(288),
    [anon_sym_ulong] = ACTIONS(288),
    [anon_sym_char] = ACTIONS(288),
    [anon_sym_ref] = ACTIONS(288),
    [anon_sym_out] = ACTIONS(288),
    [anon_sym_this] = ACTIONS(288),
    [sym_params_keyword] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [anon_sym_bool] = ACTIONS(288),
    [anon_sym_decimal] = ACTIONS(288),
    [anon_sym_double] = ACTIONS(288),
    [anon_sym_float] = ACTIONS(288),
    [anon_sym_object] = ACTIONS(288),
    [anon_sym_string] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [398] = {
    [sym_attribute_list] = STATE(454),
    [sym_attribute] = STATE(60),
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(36),
  },
  [399] = {
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_RPAREN] = ACTIONS(848),
    [sym_params_keyword] = ACTIONS(848),
    [anon_sym_LBRACK] = ACTIONS(848),
    [sym_comment] = ACTIONS(36),
  },
  [400] = {
    [sym_parameter_modifier] = STATE(331),
    [sym__type] = STATE(329),
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
    [anon_sym_ref] = ACTIONS(438),
    [anon_sym_out] = ACTIONS(438),
    [anon_sym_this] = ACTIONS(438),
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
  [402] = {
    [sym__attribute_section] = STATE(455),
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
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_bool] = ACTIONS(118),
    [anon_sym_decimal] = ACTIONS(118),
    [anon_sym_double] = ACTIONS(118),
    [anon_sym_float] = ACTIONS(118),
    [anon_sym_object] = ACTIONS(118),
    [anon_sym_string] = ACTIONS(118),
    [sym_identifier_name] = ACTIONS(120),
    [sym_comment] = ACTIONS(36),
  },
  [403] = {
    [sym_parameter] = STATE(456),
    [sym_parameter_modifier] = STATE(248),
    [sym__attributes] = STATE(400),
    [sym__attribute_section] = STATE(401),
    [sym__type] = STATE(252),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(402),
    [anon_sym_sbyte] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_short] = ACTIONS(70),
    [anon_sym_ushort] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_uint] = ACTIONS(70),
    [anon_sym_long] = ACTIONS(70),
    [anon_sym_ulong] = ACTIONS(70),
    [anon_sym_char] = ACTIONS(70),
    [anon_sym_ref] = ACTIONS(438),
    [anon_sym_out] = ACTIONS(438),
    [anon_sym_this] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_decimal] = ACTIONS(70),
    [anon_sym_double] = ACTIONS(70),
    [anon_sym_float] = ACTIONS(70),
    [anon_sym_object] = ACTIONS(70),
    [anon_sym_string] = ACTIONS(70),
    [sym_identifier_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(36),
  },
  [404] = {
    [anon_sym_RPAREN] = ACTIONS(850),
    [sym_comment] = ACTIONS(36),
  },
  [405] = {
    [sym_equals_value_clause] = STATE(457),
    [anon_sym_COMMA] = ACTIONS(852),
    [anon_sym_RPAREN] = ACTIONS(852),
    [sym_params_keyword] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_EQ] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
  },
  [406] = {
    [sym_identifier_name] = ACTIONS(854),
    [sym_comment] = ACTIONS(36),
  },
  [407] = {
    [sym_identifier_name] = ACTIONS(856),
    [sym_comment] = ACTIONS(36),
  },
  [408] = {
    [anon_sym_COMMA] = ACTIONS(852),
    [anon_sym_RPAREN] = ACTIONS(852),
    [sym_params_keyword] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [sym_comment] = ACTIONS(36),
  },
  [409] = {
    [ts_builtin_sym_end] = ACTIONS(858),
    [anon_sym_using] = ACTIONS(858),
    [anon_sym_namespace] = ACTIONS(858),
    [anon_sym_RBRACE] = ACTIONS(858),
    [anon_sym_class] = ACTIONS(858),
    [anon_sym_unsafe] = ACTIONS(858),
    [anon_sym_abstract] = ACTIONS(858),
    [anon_sym_sealed] = ACTIONS(858),
    [anon_sym_static] = ACTIONS(858),
    [anon_sym_new] = ACTIONS(858),
    [anon_sym_public] = ACTIONS(858),
    [anon_sym_protected] = ACTIONS(858),
    [anon_sym_internal] = ACTIONS(858),
    [anon_sym_private] = ACTIONS(858),
    [anon_sym_interface] = ACTIONS(858),
    [anon_sym_struct] = ACTIONS(858),
    [anon_sym_enum] = ACTIONS(858),
    [anon_sym_delegate] = ACTIONS(858),
    [anon_sym_LBRACK] = ACTIONS(858),
    [sym_comment] = ACTIONS(36),
  },
  [410] = {
    [ts_builtin_sym_end] = ACTIONS(860),
    [anon_sym_using] = ACTIONS(860),
    [anon_sym_namespace] = ACTIONS(860),
    [anon_sym_RBRACE] = ACTIONS(860),
    [anon_sym_class] = ACTIONS(860),
    [anon_sym_unsafe] = ACTIONS(860),
    [anon_sym_abstract] = ACTIONS(860),
    [anon_sym_sealed] = ACTIONS(860),
    [anon_sym_static] = ACTIONS(860),
    [anon_sym_new] = ACTIONS(860),
    [anon_sym_public] = ACTIONS(860),
    [anon_sym_protected] = ACTIONS(860),
    [anon_sym_internal] = ACTIONS(860),
    [anon_sym_private] = ACTIONS(860),
    [anon_sym_interface] = ACTIONS(860),
    [anon_sym_struct] = ACTIONS(860),
    [anon_sym_enum] = ACTIONS(860),
    [anon_sym_delegate] = ACTIONS(860),
    [anon_sym_LBRACK] = ACTIONS(860),
    [sym_comment] = ACTIONS(36),
  },
  [411] = {
    [ts_builtin_sym_end] = ACTIONS(862),
    [anon_sym_using] = ACTIONS(862),
    [anon_sym_namespace] = ACTIONS(862),
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_class] = ACTIONS(862),
    [anon_sym_unsafe] = ACTIONS(862),
    [anon_sym_abstract] = ACTIONS(862),
    [anon_sym_sealed] = ACTIONS(862),
    [anon_sym_static] = ACTIONS(862),
    [anon_sym_new] = ACTIONS(862),
    [anon_sym_public] = ACTIONS(862),
    [anon_sym_protected] = ACTIONS(862),
    [anon_sym_internal] = ACTIONS(862),
    [anon_sym_private] = ACTIONS(862),
    [anon_sym_interface] = ACTIONS(862),
    [anon_sym_struct] = ACTIONS(862),
    [anon_sym_enum] = ACTIONS(862),
    [anon_sym_delegate] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [sym_comment] = ACTIONS(36),
  },
  [412] = {
    [aux_sym_enum_declaration_repeat1] = STATE(460),
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [413] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(864),
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
  },
  [414] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(228),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(866),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [415] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(868),
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
  },
  [416] = {
    [sym_enum_member_declaration] = STATE(464),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [417] = {
    [ts_builtin_sym_end] = ACTIONS(870),
    [anon_sym_using] = ACTIONS(870),
    [anon_sym_namespace] = ACTIONS(870),
    [anon_sym_RBRACE] = ACTIONS(870),
    [anon_sym_class] = ACTIONS(870),
    [anon_sym_unsafe] = ACTIONS(870),
    [anon_sym_abstract] = ACTIONS(870),
    [anon_sym_sealed] = ACTIONS(870),
    [anon_sym_static] = ACTIONS(870),
    [anon_sym_new] = ACTIONS(870),
    [anon_sym_public] = ACTIONS(870),
    [anon_sym_protected] = ACTIONS(870),
    [anon_sym_internal] = ACTIONS(870),
    [anon_sym_private] = ACTIONS(870),
    [anon_sym_interface] = ACTIONS(870),
    [anon_sym_struct] = ACTIONS(870),
    [anon_sym_enum] = ACTIONS(870),
    [anon_sym_delegate] = ACTIONS(870),
    [anon_sym_LBRACK] = ACTIONS(870),
    [sym_comment] = ACTIONS(36),
  },
  [418] = {
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_class] = ACTIONS(872),
    [anon_sym_unsafe] = ACTIONS(872),
    [anon_sym_abstract] = ACTIONS(872),
    [anon_sym_sealed] = ACTIONS(872),
    [anon_sym_static] = ACTIONS(872),
    [anon_sym_new] = ACTIONS(872),
    [anon_sym_public] = ACTIONS(872),
    [anon_sym_protected] = ACTIONS(872),
    [anon_sym_internal] = ACTIONS(872),
    [anon_sym_private] = ACTIONS(872),
    [anon_sym_interface] = ACTIONS(872),
    [anon_sym_struct] = ACTIONS(872),
    [anon_sym_enum] = ACTIONS(872),
    [anon_sym_sbyte] = ACTIONS(872),
    [anon_sym_byte] = ACTIONS(872),
    [anon_sym_short] = ACTIONS(872),
    [anon_sym_ushort] = ACTIONS(872),
    [anon_sym_int] = ACTIONS(872),
    [anon_sym_uint] = ACTIONS(872),
    [anon_sym_long] = ACTIONS(872),
    [anon_sym_ulong] = ACTIONS(872),
    [anon_sym_char] = ACTIONS(872),
    [anon_sym_delegate] = ACTIONS(872),
    [anon_sym_LBRACK] = ACTIONS(518),
    [sym_const_keyword] = ACTIONS(872),
    [anon_sym_readonly] = ACTIONS(872),
    [anon_sym_volatile] = ACTIONS(872),
    [anon_sym_bool] = ACTIONS(872),
    [anon_sym_decimal] = ACTIONS(872),
    [anon_sym_double] = ACTIONS(872),
    [anon_sym_float] = ACTIONS(872),
    [anon_sym_object] = ACTIONS(872),
    [anon_sym_string] = ACTIONS(872),
    [sym_identifier_name] = ACTIONS(874),
    [sym_comment] = ACTIONS(36),
  },
  [419] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(876),
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
  },
  [420] = {
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_class] = ACTIONS(878),
    [anon_sym_unsafe] = ACTIONS(878),
    [anon_sym_abstract] = ACTIONS(878),
    [anon_sym_sealed] = ACTIONS(878),
    [anon_sym_static] = ACTIONS(878),
    [anon_sym_new] = ACTIONS(878),
    [anon_sym_public] = ACTIONS(878),
    [anon_sym_protected] = ACTIONS(878),
    [anon_sym_internal] = ACTIONS(878),
    [anon_sym_private] = ACTIONS(878),
    [anon_sym_interface] = ACTIONS(878),
    [anon_sym_struct] = ACTIONS(878),
    [anon_sym_enum] = ACTIONS(878),
    [anon_sym_sbyte] = ACTIONS(878),
    [anon_sym_byte] = ACTIONS(878),
    [anon_sym_short] = ACTIONS(878),
    [anon_sym_ushort] = ACTIONS(878),
    [anon_sym_int] = ACTIONS(878),
    [anon_sym_uint] = ACTIONS(878),
    [anon_sym_long] = ACTIONS(878),
    [anon_sym_ulong] = ACTIONS(878),
    [anon_sym_char] = ACTIONS(878),
    [anon_sym_delegate] = ACTIONS(878),
    [anon_sym_LBRACK] = ACTIONS(542),
    [sym_const_keyword] = ACTIONS(878),
    [anon_sym_readonly] = ACTIONS(878),
    [anon_sym_volatile] = ACTIONS(878),
    [anon_sym_bool] = ACTIONS(878),
    [anon_sym_decimal] = ACTIONS(878),
    [anon_sym_double] = ACTIONS(878),
    [anon_sym_float] = ACTIONS(878),
    [anon_sym_object] = ACTIONS(878),
    [anon_sym_string] = ACTIONS(878),
    [sym_identifier_name] = ACTIONS(880),
    [sym_comment] = ACTIONS(36),
  },
  [421] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(228),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(882),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [422] = {
    [anon_sym_RBRACE] = ACTIONS(552),
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
    [anon_sym_sbyte] = ACTIONS(884),
    [anon_sym_byte] = ACTIONS(884),
    [anon_sym_short] = ACTIONS(884),
    [anon_sym_ushort] = ACTIONS(884),
    [anon_sym_int] = ACTIONS(884),
    [anon_sym_uint] = ACTIONS(884),
    [anon_sym_long] = ACTIONS(884),
    [anon_sym_ulong] = ACTIONS(884),
    [anon_sym_char] = ACTIONS(884),
    [anon_sym_delegate] = ACTIONS(884),
    [anon_sym_LBRACK] = ACTIONS(552),
    [sym_const_keyword] = ACTIONS(884),
    [anon_sym_readonly] = ACTIONS(884),
    [anon_sym_volatile] = ACTIONS(884),
    [anon_sym_bool] = ACTIONS(884),
    [anon_sym_decimal] = ACTIONS(884),
    [anon_sym_double] = ACTIONS(884),
    [anon_sym_float] = ACTIONS(884),
    [anon_sym_object] = ACTIONS(884),
    [anon_sym_string] = ACTIONS(884),
    [sym_identifier_name] = ACTIONS(886),
    [sym_comment] = ACTIONS(36),
  },
  [423] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(888),
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
  },
  [424] = {
    [anon_sym_SEMI] = ACTIONS(890),
    [anon_sym_RBRACE] = ACTIONS(576),
    [anon_sym_class] = ACTIONS(892),
    [anon_sym_unsafe] = ACTIONS(892),
    [anon_sym_abstract] = ACTIONS(892),
    [anon_sym_sealed] = ACTIONS(892),
    [anon_sym_static] = ACTIONS(892),
    [anon_sym_new] = ACTIONS(892),
    [anon_sym_public] = ACTIONS(892),
    [anon_sym_protected] = ACTIONS(892),
    [anon_sym_internal] = ACTIONS(892),
    [anon_sym_private] = ACTIONS(892),
    [anon_sym_interface] = ACTIONS(892),
    [anon_sym_struct] = ACTIONS(892),
    [anon_sym_enum] = ACTIONS(892),
    [anon_sym_sbyte] = ACTIONS(892),
    [anon_sym_byte] = ACTIONS(892),
    [anon_sym_short] = ACTIONS(892),
    [anon_sym_ushort] = ACTIONS(892),
    [anon_sym_int] = ACTIONS(892),
    [anon_sym_uint] = ACTIONS(892),
    [anon_sym_long] = ACTIONS(892),
    [anon_sym_ulong] = ACTIONS(892),
    [anon_sym_char] = ACTIONS(892),
    [anon_sym_delegate] = ACTIONS(892),
    [anon_sym_LBRACK] = ACTIONS(576),
    [sym_const_keyword] = ACTIONS(892),
    [anon_sym_readonly] = ACTIONS(892),
    [anon_sym_volatile] = ACTIONS(892),
    [anon_sym_bool] = ACTIONS(892),
    [anon_sym_decimal] = ACTIONS(892),
    [anon_sym_double] = ACTIONS(892),
    [anon_sym_float] = ACTIONS(892),
    [anon_sym_object] = ACTIONS(892),
    [anon_sym_string] = ACTIONS(892),
    [sym_identifier_name] = ACTIONS(894),
    [sym_comment] = ACTIONS(36),
  },
  [425] = {
    [anon_sym_RBRACE] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [426] = {
    [sym_enum_member_declaration] = STATE(470),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [427] = {
    [anon_sym_RBRACE] = ACTIONS(602),
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
    [anon_sym_sbyte] = ACTIONS(898),
    [anon_sym_byte] = ACTIONS(898),
    [anon_sym_short] = ACTIONS(898),
    [anon_sym_ushort] = ACTIONS(898),
    [anon_sym_int] = ACTIONS(898),
    [anon_sym_uint] = ACTIONS(898),
    [anon_sym_long] = ACTIONS(898),
    [anon_sym_ulong] = ACTIONS(898),
    [anon_sym_char] = ACTIONS(898),
    [anon_sym_delegate] = ACTIONS(898),
    [anon_sym_LBRACK] = ACTIONS(602),
    [sym_const_keyword] = ACTIONS(898),
    [anon_sym_readonly] = ACTIONS(898),
    [anon_sym_volatile] = ACTIONS(898),
    [anon_sym_bool] = ACTIONS(898),
    [anon_sym_decimal] = ACTIONS(898),
    [anon_sym_double] = ACTIONS(898),
    [anon_sym_float] = ACTIONS(898),
    [anon_sym_object] = ACTIONS(898),
    [anon_sym_string] = ACTIONS(898),
    [sym_identifier_name] = ACTIONS(900),
    [sym_comment] = ACTIONS(36),
  },
  [428] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(471),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(876),
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
  },
  [429] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(155),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(472),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(882),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [430] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(473),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(888),
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
  },
  [431] = {
    [aux_sym_enum_declaration_repeat1] = STATE(474),
    [anon_sym_RBRACE] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [432] = {
    [anon_sym_LBRACE] = ACTIONS(902),
    [sym_comment] = ACTIONS(36),
  },
  [433] = {
    [anon_sym_SEMI] = ACTIONS(904),
    [sym_comment] = ACTIONS(36),
  },
  [434] = {
    [anon_sym_LBRACE] = ACTIONS(906),
    [sym_comment] = ACTIONS(36),
  },
  [435] = {
    [anon_sym_LBRACE] = ACTIONS(908),
    [sym_comment] = ACTIONS(36),
  },
  [436] = {
    [anon_sym_LBRACE] = ACTIONS(910),
    [sym_comment] = ACTIONS(36),
  },
  [437] = {
    [sym__integral_type] = STATE(480),
    [anon_sym_sbyte] = ACTIONS(276),
    [anon_sym_byte] = ACTIONS(276),
    [anon_sym_short] = ACTIONS(276),
    [anon_sym_ushort] = ACTIONS(276),
    [anon_sym_int] = ACTIONS(276),
    [anon_sym_uint] = ACTIONS(276),
    [anon_sym_long] = ACTIONS(276),
    [anon_sym_ulong] = ACTIONS(276),
    [anon_sym_char] = ACTIONS(276),
    [sym_comment] = ACTIONS(36),
  },
  [438] = {
    [sym_parameter_list] = STATE(481),
    [anon_sym_LPAREN] = ACTIONS(282),
    [sym_comment] = ACTIONS(36),
  },
  [439] = {
    [anon_sym_RBRACE] = ACTIONS(912),
    [anon_sym_class] = ACTIONS(914),
    [anon_sym_unsafe] = ACTIONS(914),
    [anon_sym_abstract] = ACTIONS(914),
    [anon_sym_sealed] = ACTIONS(914),
    [anon_sym_static] = ACTIONS(914),
    [anon_sym_new] = ACTIONS(914),
    [anon_sym_public] = ACTIONS(914),
    [anon_sym_protected] = ACTIONS(914),
    [anon_sym_internal] = ACTIONS(914),
    [anon_sym_private] = ACTIONS(914),
    [anon_sym_interface] = ACTIONS(914),
    [anon_sym_struct] = ACTIONS(914),
    [anon_sym_enum] = ACTIONS(914),
    [anon_sym_sbyte] = ACTIONS(914),
    [anon_sym_byte] = ACTIONS(914),
    [anon_sym_short] = ACTIONS(914),
    [anon_sym_ushort] = ACTIONS(914),
    [anon_sym_int] = ACTIONS(914),
    [anon_sym_uint] = ACTIONS(914),
    [anon_sym_long] = ACTIONS(914),
    [anon_sym_ulong] = ACTIONS(914),
    [anon_sym_char] = ACTIONS(914),
    [anon_sym_delegate] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(912),
    [sym_const_keyword] = ACTIONS(914),
    [anon_sym_readonly] = ACTIONS(914),
    [anon_sym_volatile] = ACTIONS(914),
    [anon_sym_bool] = ACTIONS(914),
    [anon_sym_decimal] = ACTIONS(914),
    [anon_sym_double] = ACTIONS(914),
    [anon_sym_float] = ACTIONS(914),
    [anon_sym_object] = ACTIONS(914),
    [anon_sym_string] = ACTIONS(914),
    [sym_identifier_name] = ACTIONS(916),
    [sym_comment] = ACTIONS(36),
  },
  [440] = {
    [anon_sym_SEMI] = ACTIONS(918),
    [anon_sym_COMMA] = ACTIONS(918),
    [sym_comment] = ACTIONS(36),
  },
  [441] = {
    [anon_sym_RBRACE] = ACTIONS(912),
    [anon_sym_unsafe] = ACTIONS(914),
    [anon_sym_static] = ACTIONS(914),
    [anon_sym_new] = ACTIONS(914),
    [anon_sym_public] = ACTIONS(914),
    [anon_sym_protected] = ACTIONS(914),
    [anon_sym_internal] = ACTIONS(914),
    [anon_sym_private] = ACTIONS(914),
    [anon_sym_sbyte] = ACTIONS(914),
    [anon_sym_byte] = ACTIONS(914),
    [anon_sym_short] = ACTIONS(914),
    [anon_sym_ushort] = ACTIONS(914),
    [anon_sym_int] = ACTIONS(914),
    [anon_sym_uint] = ACTIONS(914),
    [anon_sym_long] = ACTIONS(914),
    [anon_sym_ulong] = ACTIONS(914),
    [anon_sym_char] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(912),
    [sym_const_keyword] = ACTIONS(914),
    [anon_sym_readonly] = ACTIONS(914),
    [anon_sym_volatile] = ACTIONS(914),
    [anon_sym_bool] = ACTIONS(914),
    [anon_sym_decimal] = ACTIONS(914),
    [anon_sym_double] = ACTIONS(914),
    [anon_sym_float] = ACTIONS(914),
    [anon_sym_object] = ACTIONS(914),
    [anon_sym_string] = ACTIONS(914),
    [sym_identifier_name] = ACTIONS(916),
    [sym_comment] = ACTIONS(36),
  },
  [442] = {
    [anon_sym_SEMI] = ACTIONS(920),
    [anon_sym_RBRACE] = ACTIONS(920),
    [anon_sym_COMMA] = ACTIONS(920),
    [anon_sym_RPAREN] = ACTIONS(920),
    [sym_params_keyword] = ACTIONS(920),
    [anon_sym_LBRACK] = ACTIONS(920),
    [sym_comment] = ACTIONS(36),
  },
  [443] = {
    [anon_sym_SEMI] = ACTIONS(922),
    [anon_sym_RBRACE] = ACTIONS(922),
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(922),
    [sym_params_keyword] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(922),
    [sym__real_type_suffix] = ACTIONS(924),
    [sym__exponent_part] = ACTIONS(926),
    [sym_comment] = ACTIONS(36),
  },
  [444] = {
    [anon_sym_SEMI] = ACTIONS(922),
    [anon_sym_RBRACE] = ACTIONS(922),
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(922),
    [sym_params_keyword] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(922),
    [sym_comment] = ACTIONS(36),
  },
  [445] = {
    [anon_sym_SEMI] = ACTIONS(922),
    [anon_sym_RBRACE] = ACTIONS(922),
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(922),
    [sym_params_keyword] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(922),
    [sym__real_type_suffix] = ACTIONS(924),
    [sym_comment] = ACTIONS(36),
  },
  [446] = {
    [anon_sym_SEMI] = ACTIONS(928),
    [anon_sym_RBRACE] = ACTIONS(928),
    [anon_sym_COMMA] = ACTIONS(928),
    [anon_sym_RPAREN] = ACTIONS(928),
    [sym_params_keyword] = ACTIONS(928),
    [anon_sym_LBRACK] = ACTIONS(928),
    [sym_comment] = ACTIONS(36),
  },
  [447] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(930),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(930),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(930),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(930),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(930),
    [anon_sym_BSLASH0] = ACTIONS(930),
    [anon_sym_BSLASHa] = ACTIONS(930),
    [anon_sym_BSLASHb] = ACTIONS(930),
    [anon_sym_BSLASHf] = ACTIONS(930),
    [anon_sym_BSLASHn] = ACTIONS(930),
    [anon_sym_BSLASHr] = ACTIONS(930),
    [anon_sym_BSLASHt] = ACTIONS(930),
    [anon_sym_BSLASHv] = ACTIONS(930),
    [anon_sym_DQUOTE] = ACTIONS(930),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(930),
    [sym_comment] = ACTIONS(680),
  },
  [448] = {
    [anon_sym_SEMI] = ACTIONS(932),
    [anon_sym_RBRACE] = ACTIONS(932),
    [anon_sym_COMMA] = ACTIONS(932),
    [anon_sym_RPAREN] = ACTIONS(932),
    [sym_params_keyword] = ACTIONS(932),
    [anon_sym_LBRACK] = ACTIONS(932),
    [sym_comment] = ACTIONS(36),
  },
  [449] = {
    [ts_builtin_sym_end] = ACTIONS(934),
    [anon_sym_using] = ACTIONS(934),
    [anon_sym_namespace] = ACTIONS(934),
    [anon_sym_RBRACE] = ACTIONS(934),
    [anon_sym_class] = ACTIONS(934),
    [anon_sym_unsafe] = ACTIONS(934),
    [anon_sym_abstract] = ACTIONS(934),
    [anon_sym_sealed] = ACTIONS(934),
    [anon_sym_static] = ACTIONS(934),
    [anon_sym_new] = ACTIONS(934),
    [anon_sym_public] = ACTIONS(934),
    [anon_sym_protected] = ACTIONS(934),
    [anon_sym_internal] = ACTIONS(934),
    [anon_sym_private] = ACTIONS(934),
    [anon_sym_interface] = ACTIONS(934),
    [anon_sym_struct] = ACTIONS(934),
    [anon_sym_enum] = ACTIONS(934),
    [anon_sym_delegate] = ACTIONS(934),
    [anon_sym_LBRACK] = ACTIONS(934),
    [sym_comment] = ACTIONS(36),
  },
  [450] = {
    [ts_builtin_sym_end] = ACTIONS(934),
    [anon_sym_SEMI] = ACTIONS(936),
    [anon_sym_using] = ACTIONS(934),
    [anon_sym_namespace] = ACTIONS(934),
    [anon_sym_RBRACE] = ACTIONS(934),
    [anon_sym_class] = ACTIONS(934),
    [anon_sym_unsafe] = ACTIONS(934),
    [anon_sym_abstract] = ACTIONS(934),
    [anon_sym_sealed] = ACTIONS(934),
    [anon_sym_static] = ACTIONS(934),
    [anon_sym_new] = ACTIONS(934),
    [anon_sym_public] = ACTIONS(934),
    [anon_sym_protected] = ACTIONS(934),
    [anon_sym_internal] = ACTIONS(934),
    [anon_sym_private] = ACTIONS(934),
    [anon_sym_interface] = ACTIONS(934),
    [anon_sym_struct] = ACTIONS(934),
    [anon_sym_enum] = ACTIONS(934),
    [anon_sym_delegate] = ACTIONS(934),
    [anon_sym_LBRACK] = ACTIONS(934),
    [sym_comment] = ACTIONS(36),
  },
  [451] = {
    [anon_sym_COMMA] = ACTIONS(938),
    [anon_sym_RBRACK] = ACTIONS(938),
    [sym_comment] = ACTIONS(36),
  },
  [452] = {
    [sym_identifier_name] = ACTIONS(940),
    [sym_comment] = ACTIONS(36),
  },
  [453] = {
    [anon_sym_COMMA] = ACTIONS(942),
    [anon_sym_RBRACK] = ACTIONS(944),
    [sym_comment] = ACTIONS(36),
  },
  [454] = {
    [anon_sym_RBRACK] = ACTIONS(946),
    [sym_comment] = ACTIONS(36),
  },
  [455] = {
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
  [456] = {
    [anon_sym_COMMA] = ACTIONS(948),
    [anon_sym_RPAREN] = ACTIONS(948),
    [sym_params_keyword] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(948),
    [sym_comment] = ACTIONS(36),
  },
  [457] = {
    [anon_sym_COMMA] = ACTIONS(950),
    [anon_sym_RPAREN] = ACTIONS(950),
    [sym_params_keyword] = ACTIONS(950),
    [anon_sym_LBRACK] = ACTIONS(950),
    [sym_comment] = ACTIONS(36),
  },
  [458] = {
    [anon_sym_RPAREN] = ACTIONS(952),
    [sym_comment] = ACTIONS(36),
  },
  [459] = {
    [sym_equals_value_clause] = STATE(488),
    [anon_sym_COMMA] = ACTIONS(950),
    [anon_sym_RPAREN] = ACTIONS(950),
    [sym_params_keyword] = ACTIONS(950),
    [anon_sym_LBRACK] = ACTIONS(950),
    [anon_sym_EQ] = ACTIONS(424),
    [sym_comment] = ACTIONS(36),
  },
  [460] = {
    [anon_sym_RBRACE] = ACTIONS(954),
    [anon_sym_COMMA] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [461] = {
    [ts_builtin_sym_end] = ACTIONS(956),
    [anon_sym_using] = ACTIONS(956),
    [anon_sym_namespace] = ACTIONS(956),
    [anon_sym_RBRACE] = ACTIONS(956),
    [anon_sym_class] = ACTIONS(956),
    [anon_sym_unsafe] = ACTIONS(956),
    [anon_sym_abstract] = ACTIONS(956),
    [anon_sym_sealed] = ACTIONS(956),
    [anon_sym_static] = ACTIONS(956),
    [anon_sym_new] = ACTIONS(956),
    [anon_sym_public] = ACTIONS(956),
    [anon_sym_protected] = ACTIONS(956),
    [anon_sym_internal] = ACTIONS(956),
    [anon_sym_private] = ACTIONS(956),
    [anon_sym_interface] = ACTIONS(956),
    [anon_sym_struct] = ACTIONS(956),
    [anon_sym_enum] = ACTIONS(956),
    [anon_sym_delegate] = ACTIONS(956),
    [anon_sym_LBRACK] = ACTIONS(956),
    [sym_comment] = ACTIONS(36),
  },
  [462] = {
    [ts_builtin_sym_end] = ACTIONS(958),
    [anon_sym_using] = ACTIONS(958),
    [anon_sym_namespace] = ACTIONS(958),
    [anon_sym_RBRACE] = ACTIONS(958),
    [anon_sym_class] = ACTIONS(958),
    [anon_sym_unsafe] = ACTIONS(958),
    [anon_sym_abstract] = ACTIONS(958),
    [anon_sym_sealed] = ACTIONS(958),
    [anon_sym_static] = ACTIONS(958),
    [anon_sym_new] = ACTIONS(958),
    [anon_sym_public] = ACTIONS(958),
    [anon_sym_protected] = ACTIONS(958),
    [anon_sym_internal] = ACTIONS(958),
    [anon_sym_private] = ACTIONS(958),
    [anon_sym_interface] = ACTIONS(958),
    [anon_sym_struct] = ACTIONS(958),
    [anon_sym_enum] = ACTIONS(958),
    [anon_sym_delegate] = ACTIONS(958),
    [anon_sym_LBRACK] = ACTIONS(958),
    [sym_comment] = ACTIONS(36),
  },
  [463] = {
    [ts_builtin_sym_end] = ACTIONS(960),
    [anon_sym_using] = ACTIONS(960),
    [anon_sym_namespace] = ACTIONS(960),
    [anon_sym_RBRACE] = ACTIONS(960),
    [anon_sym_class] = ACTIONS(960),
    [anon_sym_unsafe] = ACTIONS(960),
    [anon_sym_abstract] = ACTIONS(960),
    [anon_sym_sealed] = ACTIONS(960),
    [anon_sym_static] = ACTIONS(960),
    [anon_sym_new] = ACTIONS(960),
    [anon_sym_public] = ACTIONS(960),
    [anon_sym_protected] = ACTIONS(960),
    [anon_sym_internal] = ACTIONS(960),
    [anon_sym_private] = ACTIONS(960),
    [anon_sym_interface] = ACTIONS(960),
    [anon_sym_struct] = ACTIONS(960),
    [anon_sym_enum] = ACTIONS(960),
    [anon_sym_delegate] = ACTIONS(960),
    [anon_sym_LBRACK] = ACTIONS(960),
    [sym_comment] = ACTIONS(36),
  },
  [464] = {
    [aux_sym_enum_declaration_repeat1] = STATE(490),
    [anon_sym_RBRACE] = ACTIONS(954),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [465] = {
    [anon_sym_RBRACE] = ACTIONS(664),
    [anon_sym_class] = ACTIONS(962),
    [anon_sym_unsafe] = ACTIONS(962),
    [anon_sym_abstract] = ACTIONS(962),
    [anon_sym_sealed] = ACTIONS(962),
    [anon_sym_static] = ACTIONS(962),
    [anon_sym_new] = ACTIONS(962),
    [anon_sym_public] = ACTIONS(962),
    [anon_sym_protected] = ACTIONS(962),
    [anon_sym_internal] = ACTIONS(962),
    [anon_sym_private] = ACTIONS(962),
    [anon_sym_interface] = ACTIONS(962),
    [anon_sym_struct] = ACTIONS(962),
    [anon_sym_enum] = ACTIONS(962),
    [anon_sym_sbyte] = ACTIONS(962),
    [anon_sym_byte] = ACTIONS(962),
    [anon_sym_short] = ACTIONS(962),
    [anon_sym_ushort] = ACTIONS(962),
    [anon_sym_int] = ACTIONS(962),
    [anon_sym_uint] = ACTIONS(962),
    [anon_sym_long] = ACTIONS(962),
    [anon_sym_ulong] = ACTIONS(962),
    [anon_sym_char] = ACTIONS(962),
    [anon_sym_delegate] = ACTIONS(962),
    [anon_sym_LBRACK] = ACTIONS(664),
    [sym_const_keyword] = ACTIONS(962),
    [anon_sym_readonly] = ACTIONS(962),
    [anon_sym_volatile] = ACTIONS(962),
    [anon_sym_bool] = ACTIONS(962),
    [anon_sym_decimal] = ACTIONS(962),
    [anon_sym_double] = ACTIONS(962),
    [anon_sym_float] = ACTIONS(962),
    [anon_sym_object] = ACTIONS(962),
    [anon_sym_string] = ACTIONS(962),
    [sym_identifier_name] = ACTIONS(964),
    [sym_comment] = ACTIONS(36),
  },
  [466] = {
    [anon_sym_RBRACE] = ACTIONS(668),
    [anon_sym_class] = ACTIONS(966),
    [anon_sym_unsafe] = ACTIONS(966),
    [anon_sym_abstract] = ACTIONS(966),
    [anon_sym_sealed] = ACTIONS(966),
    [anon_sym_static] = ACTIONS(966),
    [anon_sym_new] = ACTIONS(966),
    [anon_sym_public] = ACTIONS(966),
    [anon_sym_protected] = ACTIONS(966),
    [anon_sym_internal] = ACTIONS(966),
    [anon_sym_private] = ACTIONS(966),
    [anon_sym_interface] = ACTIONS(966),
    [anon_sym_struct] = ACTIONS(966),
    [anon_sym_enum] = ACTIONS(966),
    [anon_sym_sbyte] = ACTIONS(966),
    [anon_sym_byte] = ACTIONS(966),
    [anon_sym_short] = ACTIONS(966),
    [anon_sym_ushort] = ACTIONS(966),
    [anon_sym_int] = ACTIONS(966),
    [anon_sym_uint] = ACTIONS(966),
    [anon_sym_long] = ACTIONS(966),
    [anon_sym_ulong] = ACTIONS(966),
    [anon_sym_char] = ACTIONS(966),
    [anon_sym_delegate] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(668),
    [sym_const_keyword] = ACTIONS(966),
    [anon_sym_readonly] = ACTIONS(966),
    [anon_sym_volatile] = ACTIONS(966),
    [anon_sym_bool] = ACTIONS(966),
    [anon_sym_decimal] = ACTIONS(966),
    [anon_sym_double] = ACTIONS(966),
    [anon_sym_float] = ACTIONS(966),
    [anon_sym_object] = ACTIONS(966),
    [anon_sym_string] = ACTIONS(966),
    [sym_identifier_name] = ACTIONS(968),
    [sym_comment] = ACTIONS(36),
  },
  [467] = {
    [anon_sym_RBRACE] = ACTIONS(670),
    [anon_sym_class] = ACTIONS(970),
    [anon_sym_unsafe] = ACTIONS(970),
    [anon_sym_abstract] = ACTIONS(970),
    [anon_sym_sealed] = ACTIONS(970),
    [anon_sym_static] = ACTIONS(970),
    [anon_sym_new] = ACTIONS(970),
    [anon_sym_public] = ACTIONS(970),
    [anon_sym_protected] = ACTIONS(970),
    [anon_sym_internal] = ACTIONS(970),
    [anon_sym_private] = ACTIONS(970),
    [anon_sym_interface] = ACTIONS(970),
    [anon_sym_struct] = ACTIONS(970),
    [anon_sym_enum] = ACTIONS(970),
    [anon_sym_sbyte] = ACTIONS(970),
    [anon_sym_byte] = ACTIONS(970),
    [anon_sym_short] = ACTIONS(970),
    [anon_sym_ushort] = ACTIONS(970),
    [anon_sym_int] = ACTIONS(970),
    [anon_sym_uint] = ACTIONS(970),
    [anon_sym_long] = ACTIONS(970),
    [anon_sym_ulong] = ACTIONS(970),
    [anon_sym_char] = ACTIONS(970),
    [anon_sym_delegate] = ACTIONS(970),
    [anon_sym_LBRACK] = ACTIONS(670),
    [sym_const_keyword] = ACTIONS(970),
    [anon_sym_readonly] = ACTIONS(970),
    [anon_sym_volatile] = ACTIONS(970),
    [anon_sym_bool] = ACTIONS(970),
    [anon_sym_decimal] = ACTIONS(970),
    [anon_sym_double] = ACTIONS(970),
    [anon_sym_float] = ACTIONS(970),
    [anon_sym_object] = ACTIONS(970),
    [anon_sym_string] = ACTIONS(970),
    [sym_identifier_name] = ACTIONS(972),
    [sym_comment] = ACTIONS(36),
  },
  [468] = {
    [anon_sym_RBRACE] = ACTIONS(712),
    [anon_sym_class] = ACTIONS(974),
    [anon_sym_unsafe] = ACTIONS(974),
    [anon_sym_abstract] = ACTIONS(974),
    [anon_sym_sealed] = ACTIONS(974),
    [anon_sym_static] = ACTIONS(974),
    [anon_sym_new] = ACTIONS(974),
    [anon_sym_public] = ACTIONS(974),
    [anon_sym_protected] = ACTIONS(974),
    [anon_sym_internal] = ACTIONS(974),
    [anon_sym_private] = ACTIONS(974),
    [anon_sym_interface] = ACTIONS(974),
    [anon_sym_struct] = ACTIONS(974),
    [anon_sym_enum] = ACTIONS(974),
    [anon_sym_sbyte] = ACTIONS(974),
    [anon_sym_byte] = ACTIONS(974),
    [anon_sym_short] = ACTIONS(974),
    [anon_sym_ushort] = ACTIONS(974),
    [anon_sym_int] = ACTIONS(974),
    [anon_sym_uint] = ACTIONS(974),
    [anon_sym_long] = ACTIONS(974),
    [anon_sym_ulong] = ACTIONS(974),
    [anon_sym_char] = ACTIONS(974),
    [anon_sym_delegate] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(712),
    [sym_const_keyword] = ACTIONS(974),
    [anon_sym_readonly] = ACTIONS(974),
    [anon_sym_volatile] = ACTIONS(974),
    [anon_sym_bool] = ACTIONS(974),
    [anon_sym_decimal] = ACTIONS(974),
    [anon_sym_double] = ACTIONS(974),
    [anon_sym_float] = ACTIONS(974),
    [anon_sym_object] = ACTIONS(974),
    [anon_sym_string] = ACTIONS(974),
    [sym_identifier_name] = ACTIONS(976),
    [sym_comment] = ACTIONS(36),
  },
  [469] = {
    [anon_sym_SEMI] = ACTIONS(978),
    [anon_sym_RBRACE] = ACTIONS(712),
    [anon_sym_class] = ACTIONS(974),
    [anon_sym_unsafe] = ACTIONS(974),
    [anon_sym_abstract] = ACTIONS(974),
    [anon_sym_sealed] = ACTIONS(974),
    [anon_sym_static] = ACTIONS(974),
    [anon_sym_new] = ACTIONS(974),
    [anon_sym_public] = ACTIONS(974),
    [anon_sym_protected] = ACTIONS(974),
    [anon_sym_internal] = ACTIONS(974),
    [anon_sym_private] = ACTIONS(974),
    [anon_sym_interface] = ACTIONS(974),
    [anon_sym_struct] = ACTIONS(974),
    [anon_sym_enum] = ACTIONS(974),
    [anon_sym_sbyte] = ACTIONS(974),
    [anon_sym_byte] = ACTIONS(974),
    [anon_sym_short] = ACTIONS(974),
    [anon_sym_ushort] = ACTIONS(974),
    [anon_sym_int] = ACTIONS(974),
    [anon_sym_uint] = ACTIONS(974),
    [anon_sym_long] = ACTIONS(974),
    [anon_sym_ulong] = ACTIONS(974),
    [anon_sym_char] = ACTIONS(974),
    [anon_sym_delegate] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(712),
    [sym_const_keyword] = ACTIONS(974),
    [anon_sym_readonly] = ACTIONS(974),
    [anon_sym_volatile] = ACTIONS(974),
    [anon_sym_bool] = ACTIONS(974),
    [anon_sym_decimal] = ACTIONS(974),
    [anon_sym_double] = ACTIONS(974),
    [anon_sym_float] = ACTIONS(974),
    [anon_sym_object] = ACTIONS(974),
    [anon_sym_string] = ACTIONS(974),
    [sym_identifier_name] = ACTIONS(976),
    [sym_comment] = ACTIONS(36),
  },
  [470] = {
    [aux_sym_enum_declaration_repeat1] = STATE(493),
    [anon_sym_RBRACE] = ACTIONS(980),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [471] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(982),
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
  },
  [472] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(228),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(984),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [473] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(986),
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
  },
  [474] = {
    [anon_sym_RBRACE] = ACTIONS(980),
    [anon_sym_COMMA] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [475] = {
    [sym_enum_member_declaration] = STATE(497),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [476] = {
    [anon_sym_RBRACE] = ACTIONS(748),
    [anon_sym_class] = ACTIONS(988),
    [anon_sym_unsafe] = ACTIONS(988),
    [anon_sym_abstract] = ACTIONS(988),
    [anon_sym_sealed] = ACTIONS(988),
    [anon_sym_static] = ACTIONS(988),
    [anon_sym_new] = ACTIONS(988),
    [anon_sym_public] = ACTIONS(988),
    [anon_sym_protected] = ACTIONS(988),
    [anon_sym_internal] = ACTIONS(988),
    [anon_sym_private] = ACTIONS(988),
    [anon_sym_interface] = ACTIONS(988),
    [anon_sym_struct] = ACTIONS(988),
    [anon_sym_enum] = ACTIONS(988),
    [anon_sym_sbyte] = ACTIONS(988),
    [anon_sym_byte] = ACTIONS(988),
    [anon_sym_short] = ACTIONS(988),
    [anon_sym_ushort] = ACTIONS(988),
    [anon_sym_int] = ACTIONS(988),
    [anon_sym_uint] = ACTIONS(988),
    [anon_sym_long] = ACTIONS(988),
    [anon_sym_ulong] = ACTIONS(988),
    [anon_sym_char] = ACTIONS(988),
    [anon_sym_delegate] = ACTIONS(988),
    [anon_sym_LBRACK] = ACTIONS(748),
    [sym_const_keyword] = ACTIONS(988),
    [anon_sym_readonly] = ACTIONS(988),
    [anon_sym_volatile] = ACTIONS(988),
    [anon_sym_bool] = ACTIONS(988),
    [anon_sym_decimal] = ACTIONS(988),
    [anon_sym_double] = ACTIONS(988),
    [anon_sym_float] = ACTIONS(988),
    [anon_sym_object] = ACTIONS(988),
    [anon_sym_string] = ACTIONS(988),
    [sym_identifier_name] = ACTIONS(990),
    [sym_comment] = ACTIONS(36),
  },
  [477] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(498),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(982),
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
  },
  [478] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(155),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_interface_declaration_repeat1] = STATE(499),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(984),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [479] = {
    [sym__type_declaration] = STATE(134),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(134),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym_class_declaration_repeat1] = STATE(500),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(986),
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
  },
  [480] = {
    [anon_sym_LBRACE] = ACTIONS(992),
    [sym_comment] = ACTIONS(36),
  },
  [481] = {
    [anon_sym_SEMI] = ACTIONS(994),
    [sym_comment] = ACTIONS(36),
  },
  [482] = {
    [anon_sym_SEMI] = ACTIONS(996),
    [anon_sym_RBRACE] = ACTIONS(996),
    [anon_sym_COMMA] = ACTIONS(996),
    [anon_sym_RPAREN] = ACTIONS(996),
    [sym_params_keyword] = ACTIONS(996),
    [anon_sym_LBRACK] = ACTIONS(996),
    [sym_comment] = ACTIONS(36),
  },
  [483] = {
    [anon_sym_SEMI] = ACTIONS(996),
    [anon_sym_RBRACE] = ACTIONS(996),
    [anon_sym_COMMA] = ACTIONS(996),
    [anon_sym_RPAREN] = ACTIONS(996),
    [sym_params_keyword] = ACTIONS(996),
    [anon_sym_LBRACK] = ACTIONS(996),
    [sym__real_type_suffix] = ACTIONS(998),
    [sym_comment] = ACTIONS(36),
  },
  [484] = {
    [ts_builtin_sym_end] = ACTIONS(1000),
    [anon_sym_using] = ACTIONS(1000),
    [anon_sym_namespace] = ACTIONS(1000),
    [anon_sym_RBRACE] = ACTIONS(1000),
    [anon_sym_class] = ACTIONS(1000),
    [anon_sym_unsafe] = ACTIONS(1000),
    [anon_sym_abstract] = ACTIONS(1000),
    [anon_sym_sealed] = ACTIONS(1000),
    [anon_sym_static] = ACTIONS(1000),
    [anon_sym_new] = ACTIONS(1000),
    [anon_sym_public] = ACTIONS(1000),
    [anon_sym_protected] = ACTIONS(1000),
    [anon_sym_internal] = ACTIONS(1000),
    [anon_sym_private] = ACTIONS(1000),
    [anon_sym_interface] = ACTIONS(1000),
    [anon_sym_struct] = ACTIONS(1000),
    [anon_sym_enum] = ACTIONS(1000),
    [anon_sym_delegate] = ACTIONS(1000),
    [anon_sym_LBRACK] = ACTIONS(1000),
    [sym_comment] = ACTIONS(36),
  },
  [485] = {
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_RBRACK] = ACTIONS(1002),
    [sym_comment] = ACTIONS(36),
  },
  [486] = {
    [sym_identifier_name] = ACTIONS(1004),
    [sym_comment] = ACTIONS(36),
  },
  [487] = {
    [anon_sym_sbyte] = ACTIONS(288),
    [anon_sym_byte] = ACTIONS(288),
    [anon_sym_short] = ACTIONS(288),
    [anon_sym_ushort] = ACTIONS(288),
    [anon_sym_int] = ACTIONS(288),
    [anon_sym_uint] = ACTIONS(288),
    [anon_sym_long] = ACTIONS(288),
    [anon_sym_ulong] = ACTIONS(288),
    [anon_sym_char] = ACTIONS(288),
    [anon_sym_ref] = ACTIONS(288),
    [anon_sym_out] = ACTIONS(288),
    [anon_sym_this] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [anon_sym_bool] = ACTIONS(288),
    [anon_sym_decimal] = ACTIONS(288),
    [anon_sym_double] = ACTIONS(288),
    [anon_sym_float] = ACTIONS(288),
    [anon_sym_object] = ACTIONS(288),
    [anon_sym_string] = ACTIONS(288),
    [sym_identifier_name] = ACTIONS(292),
    [sym_comment] = ACTIONS(36),
  },
  [488] = {
    [anon_sym_COMMA] = ACTIONS(1006),
    [anon_sym_RPAREN] = ACTIONS(1006),
    [sym_params_keyword] = ACTIONS(1006),
    [anon_sym_LBRACK] = ACTIONS(1006),
    [sym_comment] = ACTIONS(36),
  },
  [489] = {
    [ts_builtin_sym_end] = ACTIONS(1000),
    [anon_sym_SEMI] = ACTIONS(1008),
    [anon_sym_using] = ACTIONS(1000),
    [anon_sym_namespace] = ACTIONS(1000),
    [anon_sym_RBRACE] = ACTIONS(1000),
    [anon_sym_class] = ACTIONS(1000),
    [anon_sym_unsafe] = ACTIONS(1000),
    [anon_sym_abstract] = ACTIONS(1000),
    [anon_sym_sealed] = ACTIONS(1000),
    [anon_sym_static] = ACTIONS(1000),
    [anon_sym_new] = ACTIONS(1000),
    [anon_sym_public] = ACTIONS(1000),
    [anon_sym_protected] = ACTIONS(1000),
    [anon_sym_internal] = ACTIONS(1000),
    [anon_sym_private] = ACTIONS(1000),
    [anon_sym_interface] = ACTIONS(1000),
    [anon_sym_struct] = ACTIONS(1000),
    [anon_sym_enum] = ACTIONS(1000),
    [anon_sym_delegate] = ACTIONS(1000),
    [anon_sym_LBRACK] = ACTIONS(1000),
    [sym_comment] = ACTIONS(36),
  },
  [490] = {
    [anon_sym_RBRACE] = ACTIONS(1010),
    [anon_sym_COMMA] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [491] = {
    [anon_sym_RBRACE] = ACTIONS(832),
    [anon_sym_class] = ACTIONS(1012),
    [anon_sym_unsafe] = ACTIONS(1012),
    [anon_sym_abstract] = ACTIONS(1012),
    [anon_sym_sealed] = ACTIONS(1012),
    [anon_sym_static] = ACTIONS(1012),
    [anon_sym_new] = ACTIONS(1012),
    [anon_sym_public] = ACTIONS(1012),
    [anon_sym_protected] = ACTIONS(1012),
    [anon_sym_internal] = ACTIONS(1012),
    [anon_sym_private] = ACTIONS(1012),
    [anon_sym_interface] = ACTIONS(1012),
    [anon_sym_struct] = ACTIONS(1012),
    [anon_sym_enum] = ACTIONS(1012),
    [anon_sym_sbyte] = ACTIONS(1012),
    [anon_sym_byte] = ACTIONS(1012),
    [anon_sym_short] = ACTIONS(1012),
    [anon_sym_ushort] = ACTIONS(1012),
    [anon_sym_int] = ACTIONS(1012),
    [anon_sym_uint] = ACTIONS(1012),
    [anon_sym_long] = ACTIONS(1012),
    [anon_sym_ulong] = ACTIONS(1012),
    [anon_sym_char] = ACTIONS(1012),
    [anon_sym_delegate] = ACTIONS(1012),
    [anon_sym_LBRACK] = ACTIONS(832),
    [sym_const_keyword] = ACTIONS(1012),
    [anon_sym_readonly] = ACTIONS(1012),
    [anon_sym_volatile] = ACTIONS(1012),
    [anon_sym_bool] = ACTIONS(1012),
    [anon_sym_decimal] = ACTIONS(1012),
    [anon_sym_double] = ACTIONS(1012),
    [anon_sym_float] = ACTIONS(1012),
    [anon_sym_object] = ACTIONS(1012),
    [anon_sym_string] = ACTIONS(1012),
    [sym_identifier_name] = ACTIONS(1014),
    [sym_comment] = ACTIONS(36),
  },
  [492] = {
    [anon_sym_SEMI] = ACTIONS(1016),
    [anon_sym_RBRACE] = ACTIONS(832),
    [anon_sym_class] = ACTIONS(1012),
    [anon_sym_unsafe] = ACTIONS(1012),
    [anon_sym_abstract] = ACTIONS(1012),
    [anon_sym_sealed] = ACTIONS(1012),
    [anon_sym_static] = ACTIONS(1012),
    [anon_sym_new] = ACTIONS(1012),
    [anon_sym_public] = ACTIONS(1012),
    [anon_sym_protected] = ACTIONS(1012),
    [anon_sym_internal] = ACTIONS(1012),
    [anon_sym_private] = ACTIONS(1012),
    [anon_sym_interface] = ACTIONS(1012),
    [anon_sym_struct] = ACTIONS(1012),
    [anon_sym_enum] = ACTIONS(1012),
    [anon_sym_sbyte] = ACTIONS(1012),
    [anon_sym_byte] = ACTIONS(1012),
    [anon_sym_short] = ACTIONS(1012),
    [anon_sym_ushort] = ACTIONS(1012),
    [anon_sym_int] = ACTIONS(1012),
    [anon_sym_uint] = ACTIONS(1012),
    [anon_sym_long] = ACTIONS(1012),
    [anon_sym_ulong] = ACTIONS(1012),
    [anon_sym_char] = ACTIONS(1012),
    [anon_sym_delegate] = ACTIONS(1012),
    [anon_sym_LBRACK] = ACTIONS(832),
    [sym_const_keyword] = ACTIONS(1012),
    [anon_sym_readonly] = ACTIONS(1012),
    [anon_sym_volatile] = ACTIONS(1012),
    [anon_sym_bool] = ACTIONS(1012),
    [anon_sym_decimal] = ACTIONS(1012),
    [anon_sym_double] = ACTIONS(1012),
    [anon_sym_float] = ACTIONS(1012),
    [anon_sym_object] = ACTIONS(1012),
    [anon_sym_string] = ACTIONS(1012),
    [sym_identifier_name] = ACTIONS(1014),
    [sym_comment] = ACTIONS(36),
  },
  [493] = {
    [anon_sym_RBRACE] = ACTIONS(1018),
    [anon_sym_COMMA] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [494] = {
    [anon_sym_RBRACE] = ACTIONS(858),
    [anon_sym_class] = ACTIONS(1020),
    [anon_sym_unsafe] = ACTIONS(1020),
    [anon_sym_abstract] = ACTIONS(1020),
    [anon_sym_sealed] = ACTIONS(1020),
    [anon_sym_static] = ACTIONS(1020),
    [anon_sym_new] = ACTIONS(1020),
    [anon_sym_public] = ACTIONS(1020),
    [anon_sym_protected] = ACTIONS(1020),
    [anon_sym_internal] = ACTIONS(1020),
    [anon_sym_private] = ACTIONS(1020),
    [anon_sym_interface] = ACTIONS(1020),
    [anon_sym_struct] = ACTIONS(1020),
    [anon_sym_enum] = ACTIONS(1020),
    [anon_sym_sbyte] = ACTIONS(1020),
    [anon_sym_byte] = ACTIONS(1020),
    [anon_sym_short] = ACTIONS(1020),
    [anon_sym_ushort] = ACTIONS(1020),
    [anon_sym_int] = ACTIONS(1020),
    [anon_sym_uint] = ACTIONS(1020),
    [anon_sym_long] = ACTIONS(1020),
    [anon_sym_ulong] = ACTIONS(1020),
    [anon_sym_char] = ACTIONS(1020),
    [anon_sym_delegate] = ACTIONS(1020),
    [anon_sym_LBRACK] = ACTIONS(858),
    [sym_const_keyword] = ACTIONS(1020),
    [anon_sym_readonly] = ACTIONS(1020),
    [anon_sym_volatile] = ACTIONS(1020),
    [anon_sym_bool] = ACTIONS(1020),
    [anon_sym_decimal] = ACTIONS(1020),
    [anon_sym_double] = ACTIONS(1020),
    [anon_sym_float] = ACTIONS(1020),
    [anon_sym_object] = ACTIONS(1020),
    [anon_sym_string] = ACTIONS(1020),
    [sym_identifier_name] = ACTIONS(1022),
    [sym_comment] = ACTIONS(36),
  },
  [495] = {
    [anon_sym_RBRACE] = ACTIONS(860),
    [anon_sym_class] = ACTIONS(1024),
    [anon_sym_unsafe] = ACTIONS(1024),
    [anon_sym_abstract] = ACTIONS(1024),
    [anon_sym_sealed] = ACTIONS(1024),
    [anon_sym_static] = ACTIONS(1024),
    [anon_sym_new] = ACTIONS(1024),
    [anon_sym_public] = ACTIONS(1024),
    [anon_sym_protected] = ACTIONS(1024),
    [anon_sym_internal] = ACTIONS(1024),
    [anon_sym_private] = ACTIONS(1024),
    [anon_sym_interface] = ACTIONS(1024),
    [anon_sym_struct] = ACTIONS(1024),
    [anon_sym_enum] = ACTIONS(1024),
    [anon_sym_sbyte] = ACTIONS(1024),
    [anon_sym_byte] = ACTIONS(1024),
    [anon_sym_short] = ACTIONS(1024),
    [anon_sym_ushort] = ACTIONS(1024),
    [anon_sym_int] = ACTIONS(1024),
    [anon_sym_uint] = ACTIONS(1024),
    [anon_sym_long] = ACTIONS(1024),
    [anon_sym_ulong] = ACTIONS(1024),
    [anon_sym_char] = ACTIONS(1024),
    [anon_sym_delegate] = ACTIONS(1024),
    [anon_sym_LBRACK] = ACTIONS(860),
    [sym_const_keyword] = ACTIONS(1024),
    [anon_sym_readonly] = ACTIONS(1024),
    [anon_sym_volatile] = ACTIONS(1024),
    [anon_sym_bool] = ACTIONS(1024),
    [anon_sym_decimal] = ACTIONS(1024),
    [anon_sym_double] = ACTIONS(1024),
    [anon_sym_float] = ACTIONS(1024),
    [anon_sym_object] = ACTIONS(1024),
    [anon_sym_string] = ACTIONS(1024),
    [sym_identifier_name] = ACTIONS(1026),
    [sym_comment] = ACTIONS(36),
  },
  [496] = {
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_class] = ACTIONS(1028),
    [anon_sym_unsafe] = ACTIONS(1028),
    [anon_sym_abstract] = ACTIONS(1028),
    [anon_sym_sealed] = ACTIONS(1028),
    [anon_sym_static] = ACTIONS(1028),
    [anon_sym_new] = ACTIONS(1028),
    [anon_sym_public] = ACTIONS(1028),
    [anon_sym_protected] = ACTIONS(1028),
    [anon_sym_internal] = ACTIONS(1028),
    [anon_sym_private] = ACTIONS(1028),
    [anon_sym_interface] = ACTIONS(1028),
    [anon_sym_struct] = ACTIONS(1028),
    [anon_sym_enum] = ACTIONS(1028),
    [anon_sym_sbyte] = ACTIONS(1028),
    [anon_sym_byte] = ACTIONS(1028),
    [anon_sym_short] = ACTIONS(1028),
    [anon_sym_ushort] = ACTIONS(1028),
    [anon_sym_int] = ACTIONS(1028),
    [anon_sym_uint] = ACTIONS(1028),
    [anon_sym_long] = ACTIONS(1028),
    [anon_sym_ulong] = ACTIONS(1028),
    [anon_sym_char] = ACTIONS(1028),
    [anon_sym_delegate] = ACTIONS(1028),
    [anon_sym_LBRACK] = ACTIONS(862),
    [sym_const_keyword] = ACTIONS(1028),
    [anon_sym_readonly] = ACTIONS(1028),
    [anon_sym_volatile] = ACTIONS(1028),
    [anon_sym_bool] = ACTIONS(1028),
    [anon_sym_decimal] = ACTIONS(1028),
    [anon_sym_double] = ACTIONS(1028),
    [anon_sym_float] = ACTIONS(1028),
    [anon_sym_object] = ACTIONS(1028),
    [anon_sym_string] = ACTIONS(1028),
    [sym_identifier_name] = ACTIONS(1030),
    [sym_comment] = ACTIONS(36),
  },
  [497] = {
    [aux_sym_enum_declaration_repeat1] = STATE(508),
    [anon_sym_RBRACE] = ACTIONS(1018),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [498] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1032),
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
  },
  [499] = {
    [sym__attributes] = STATE(153),
    [sym__attribute_section] = STATE(154),
    [sym_field_declaration] = STATE(228),
    [sym_field_modifiers] = STATE(156),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(157),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(1034),
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
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_const_keyword] = ACTIONS(264),
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
  [500] = {
    [sym__type_declaration] = STATE(217),
    [sym_class_declaration] = STATE(135),
    [sym_class_modifiers] = STATE(136),
    [sym__class_modifiers] = STATE(20),
    [sym_interface_declaration] = STATE(135),
    [sym_interface_modifiers] = STATE(137),
    [sym__interface_modifiers] = STATE(22),
    [sym_struct_declaration] = STATE(135),
    [sym_struct_modifiers] = STATE(138),
    [sym__struct_modifiers] = STATE(24),
    [sym_enum_declaration] = STATE(135),
    [sym_enum_modifier] = STATE(139),
    [sym_delegate_declaration] = STATE(135),
    [sym_delegate_modifier] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(28),
    [sym_field_declaration] = STATE(217),
    [sym_field_modifiers] = STATE(142),
    [sym__field_modifiers] = STATE(143),
    [sym_variable_declaration] = STATE(144),
    [sym__type] = STATE(145),
    [sym_generic_name] = STATE(56),
    [sym_predefined_type] = STATE(56),
    [aux_sym__attributes_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(1036),
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
  },
  [501] = {
    [sym_enum_member_declaration] = STATE(512),
    [sym__attributes] = STATE(167),
    [sym__attribute_section] = STATE(168),
    [aux_sym__attributes_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(36),
  },
  [502] = {
    [anon_sym_RBRACE] = ACTIONS(870),
    [anon_sym_class] = ACTIONS(1038),
    [anon_sym_unsafe] = ACTIONS(1038),
    [anon_sym_abstract] = ACTIONS(1038),
    [anon_sym_sealed] = ACTIONS(1038),
    [anon_sym_static] = ACTIONS(1038),
    [anon_sym_new] = ACTIONS(1038),
    [anon_sym_public] = ACTIONS(1038),
    [anon_sym_protected] = ACTIONS(1038),
    [anon_sym_internal] = ACTIONS(1038),
    [anon_sym_private] = ACTIONS(1038),
    [anon_sym_interface] = ACTIONS(1038),
    [anon_sym_struct] = ACTIONS(1038),
    [anon_sym_enum] = ACTIONS(1038),
    [anon_sym_sbyte] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(1038),
    [anon_sym_short] = ACTIONS(1038),
    [anon_sym_ushort] = ACTIONS(1038),
    [anon_sym_int] = ACTIONS(1038),
    [anon_sym_uint] = ACTIONS(1038),
    [anon_sym_long] = ACTIONS(1038),
    [anon_sym_ulong] = ACTIONS(1038),
    [anon_sym_char] = ACTIONS(1038),
    [anon_sym_delegate] = ACTIONS(1038),
    [anon_sym_LBRACK] = ACTIONS(870),
    [sym_const_keyword] = ACTIONS(1038),
    [anon_sym_readonly] = ACTIONS(1038),
    [anon_sym_volatile] = ACTIONS(1038),
    [anon_sym_bool] = ACTIONS(1038),
    [anon_sym_decimal] = ACTIONS(1038),
    [anon_sym_double] = ACTIONS(1038),
    [anon_sym_float] = ACTIONS(1038),
    [anon_sym_object] = ACTIONS(1038),
    [anon_sym_string] = ACTIONS(1038),
    [sym_identifier_name] = ACTIONS(1040),
    [sym_comment] = ACTIONS(36),
  },
  [503] = {
    [anon_sym_SEMI] = ACTIONS(1042),
    [anon_sym_RBRACE] = ACTIONS(1042),
    [anon_sym_COMMA] = ACTIONS(1042),
    [anon_sym_RPAREN] = ACTIONS(1042),
    [sym_params_keyword] = ACTIONS(1042),
    [anon_sym_LBRACK] = ACTIONS(1042),
    [sym_comment] = ACTIONS(36),
  },
  [504] = {
    [ts_builtin_sym_end] = ACTIONS(1044),
    [anon_sym_using] = ACTIONS(1044),
    [anon_sym_namespace] = ACTIONS(1044),
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_class] = ACTIONS(1044),
    [anon_sym_unsafe] = ACTIONS(1044),
    [anon_sym_abstract] = ACTIONS(1044),
    [anon_sym_sealed] = ACTIONS(1044),
    [anon_sym_static] = ACTIONS(1044),
    [anon_sym_new] = ACTIONS(1044),
    [anon_sym_public] = ACTIONS(1044),
    [anon_sym_protected] = ACTIONS(1044),
    [anon_sym_internal] = ACTIONS(1044),
    [anon_sym_private] = ACTIONS(1044),
    [anon_sym_interface] = ACTIONS(1044),
    [anon_sym_struct] = ACTIONS(1044),
    [anon_sym_enum] = ACTIONS(1044),
    [anon_sym_delegate] = ACTIONS(1044),
    [anon_sym_LBRACK] = ACTIONS(1044),
    [sym_comment] = ACTIONS(36),
  },
  [505] = {
    [ts_builtin_sym_end] = ACTIONS(1044),
    [anon_sym_SEMI] = ACTIONS(1046),
    [anon_sym_using] = ACTIONS(1044),
    [anon_sym_namespace] = ACTIONS(1044),
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_class] = ACTIONS(1044),
    [anon_sym_unsafe] = ACTIONS(1044),
    [anon_sym_abstract] = ACTIONS(1044),
    [anon_sym_sealed] = ACTIONS(1044),
    [anon_sym_static] = ACTIONS(1044),
    [anon_sym_new] = ACTIONS(1044),
    [anon_sym_public] = ACTIONS(1044),
    [anon_sym_protected] = ACTIONS(1044),
    [anon_sym_internal] = ACTIONS(1044),
    [anon_sym_private] = ACTIONS(1044),
    [anon_sym_interface] = ACTIONS(1044),
    [anon_sym_struct] = ACTIONS(1044),
    [anon_sym_enum] = ACTIONS(1044),
    [anon_sym_delegate] = ACTIONS(1044),
    [anon_sym_LBRACK] = ACTIONS(1044),
    [sym_comment] = ACTIONS(36),
  },
  [506] = {
    [anon_sym_RBRACE] = ACTIONS(934),
    [anon_sym_class] = ACTIONS(1048),
    [anon_sym_unsafe] = ACTIONS(1048),
    [anon_sym_abstract] = ACTIONS(1048),
    [anon_sym_sealed] = ACTIONS(1048),
    [anon_sym_static] = ACTIONS(1048),
    [anon_sym_new] = ACTIONS(1048),
    [anon_sym_public] = ACTIONS(1048),
    [anon_sym_protected] = ACTIONS(1048),
    [anon_sym_internal] = ACTIONS(1048),
    [anon_sym_private] = ACTIONS(1048),
    [anon_sym_interface] = ACTIONS(1048),
    [anon_sym_struct] = ACTIONS(1048),
    [anon_sym_enum] = ACTIONS(1048),
    [anon_sym_sbyte] = ACTIONS(1048),
    [anon_sym_byte] = ACTIONS(1048),
    [anon_sym_short] = ACTIONS(1048),
    [anon_sym_ushort] = ACTIONS(1048),
    [anon_sym_int] = ACTIONS(1048),
    [anon_sym_uint] = ACTIONS(1048),
    [anon_sym_long] = ACTIONS(1048),
    [anon_sym_ulong] = ACTIONS(1048),
    [anon_sym_char] = ACTIONS(1048),
    [anon_sym_delegate] = ACTIONS(1048),
    [anon_sym_LBRACK] = ACTIONS(934),
    [sym_const_keyword] = ACTIONS(1048),
    [anon_sym_readonly] = ACTIONS(1048),
    [anon_sym_volatile] = ACTIONS(1048),
    [anon_sym_bool] = ACTIONS(1048),
    [anon_sym_decimal] = ACTIONS(1048),
    [anon_sym_double] = ACTIONS(1048),
    [anon_sym_float] = ACTIONS(1048),
    [anon_sym_object] = ACTIONS(1048),
    [anon_sym_string] = ACTIONS(1048),
    [sym_identifier_name] = ACTIONS(1050),
    [sym_comment] = ACTIONS(36),
  },
  [507] = {
    [anon_sym_SEMI] = ACTIONS(1052),
    [anon_sym_RBRACE] = ACTIONS(934),
    [anon_sym_class] = ACTIONS(1048),
    [anon_sym_unsafe] = ACTIONS(1048),
    [anon_sym_abstract] = ACTIONS(1048),
    [anon_sym_sealed] = ACTIONS(1048),
    [anon_sym_static] = ACTIONS(1048),
    [anon_sym_new] = ACTIONS(1048),
    [anon_sym_public] = ACTIONS(1048),
    [anon_sym_protected] = ACTIONS(1048),
    [anon_sym_internal] = ACTIONS(1048),
    [anon_sym_private] = ACTIONS(1048),
    [anon_sym_interface] = ACTIONS(1048),
    [anon_sym_struct] = ACTIONS(1048),
    [anon_sym_enum] = ACTIONS(1048),
    [anon_sym_sbyte] = ACTIONS(1048),
    [anon_sym_byte] = ACTIONS(1048),
    [anon_sym_short] = ACTIONS(1048),
    [anon_sym_ushort] = ACTIONS(1048),
    [anon_sym_int] = ACTIONS(1048),
    [anon_sym_uint] = ACTIONS(1048),
    [anon_sym_long] = ACTIONS(1048),
    [anon_sym_ulong] = ACTIONS(1048),
    [anon_sym_char] = ACTIONS(1048),
    [anon_sym_delegate] = ACTIONS(1048),
    [anon_sym_LBRACK] = ACTIONS(934),
    [sym_const_keyword] = ACTIONS(1048),
    [anon_sym_readonly] = ACTIONS(1048),
    [anon_sym_volatile] = ACTIONS(1048),
    [anon_sym_bool] = ACTIONS(1048),
    [anon_sym_decimal] = ACTIONS(1048),
    [anon_sym_double] = ACTIONS(1048),
    [anon_sym_float] = ACTIONS(1048),
    [anon_sym_object] = ACTIONS(1048),
    [anon_sym_string] = ACTIONS(1048),
    [sym_identifier_name] = ACTIONS(1050),
    [sym_comment] = ACTIONS(36),
  },
  [508] = {
    [anon_sym_RBRACE] = ACTIONS(1054),
    [anon_sym_COMMA] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [509] = {
    [anon_sym_RBRACE] = ACTIONS(956),
    [anon_sym_class] = ACTIONS(1056),
    [anon_sym_unsafe] = ACTIONS(1056),
    [anon_sym_abstract] = ACTIONS(1056),
    [anon_sym_sealed] = ACTIONS(1056),
    [anon_sym_static] = ACTIONS(1056),
    [anon_sym_new] = ACTIONS(1056),
    [anon_sym_public] = ACTIONS(1056),
    [anon_sym_protected] = ACTIONS(1056),
    [anon_sym_internal] = ACTIONS(1056),
    [anon_sym_private] = ACTIONS(1056),
    [anon_sym_interface] = ACTIONS(1056),
    [anon_sym_struct] = ACTIONS(1056),
    [anon_sym_enum] = ACTIONS(1056),
    [anon_sym_sbyte] = ACTIONS(1056),
    [anon_sym_byte] = ACTIONS(1056),
    [anon_sym_short] = ACTIONS(1056),
    [anon_sym_ushort] = ACTIONS(1056),
    [anon_sym_int] = ACTIONS(1056),
    [anon_sym_uint] = ACTIONS(1056),
    [anon_sym_long] = ACTIONS(1056),
    [anon_sym_ulong] = ACTIONS(1056),
    [anon_sym_char] = ACTIONS(1056),
    [anon_sym_delegate] = ACTIONS(1056),
    [anon_sym_LBRACK] = ACTIONS(956),
    [sym_const_keyword] = ACTIONS(1056),
    [anon_sym_readonly] = ACTIONS(1056),
    [anon_sym_volatile] = ACTIONS(1056),
    [anon_sym_bool] = ACTIONS(1056),
    [anon_sym_decimal] = ACTIONS(1056),
    [anon_sym_double] = ACTIONS(1056),
    [anon_sym_float] = ACTIONS(1056),
    [anon_sym_object] = ACTIONS(1056),
    [anon_sym_string] = ACTIONS(1056),
    [sym_identifier_name] = ACTIONS(1058),
    [sym_comment] = ACTIONS(36),
  },
  [510] = {
    [anon_sym_RBRACE] = ACTIONS(958),
    [anon_sym_class] = ACTIONS(1060),
    [anon_sym_unsafe] = ACTIONS(1060),
    [anon_sym_abstract] = ACTIONS(1060),
    [anon_sym_sealed] = ACTIONS(1060),
    [anon_sym_static] = ACTIONS(1060),
    [anon_sym_new] = ACTIONS(1060),
    [anon_sym_public] = ACTIONS(1060),
    [anon_sym_protected] = ACTIONS(1060),
    [anon_sym_internal] = ACTIONS(1060),
    [anon_sym_private] = ACTIONS(1060),
    [anon_sym_interface] = ACTIONS(1060),
    [anon_sym_struct] = ACTIONS(1060),
    [anon_sym_enum] = ACTIONS(1060),
    [anon_sym_sbyte] = ACTIONS(1060),
    [anon_sym_byte] = ACTIONS(1060),
    [anon_sym_short] = ACTIONS(1060),
    [anon_sym_ushort] = ACTIONS(1060),
    [anon_sym_int] = ACTIONS(1060),
    [anon_sym_uint] = ACTIONS(1060),
    [anon_sym_long] = ACTIONS(1060),
    [anon_sym_ulong] = ACTIONS(1060),
    [anon_sym_char] = ACTIONS(1060),
    [anon_sym_delegate] = ACTIONS(1060),
    [anon_sym_LBRACK] = ACTIONS(958),
    [sym_const_keyword] = ACTIONS(1060),
    [anon_sym_readonly] = ACTIONS(1060),
    [anon_sym_volatile] = ACTIONS(1060),
    [anon_sym_bool] = ACTIONS(1060),
    [anon_sym_decimal] = ACTIONS(1060),
    [anon_sym_double] = ACTIONS(1060),
    [anon_sym_float] = ACTIONS(1060),
    [anon_sym_object] = ACTIONS(1060),
    [anon_sym_string] = ACTIONS(1060),
    [sym_identifier_name] = ACTIONS(1062),
    [sym_comment] = ACTIONS(36),
  },
  [511] = {
    [anon_sym_RBRACE] = ACTIONS(960),
    [anon_sym_class] = ACTIONS(1064),
    [anon_sym_unsafe] = ACTIONS(1064),
    [anon_sym_abstract] = ACTIONS(1064),
    [anon_sym_sealed] = ACTIONS(1064),
    [anon_sym_static] = ACTIONS(1064),
    [anon_sym_new] = ACTIONS(1064),
    [anon_sym_public] = ACTIONS(1064),
    [anon_sym_protected] = ACTIONS(1064),
    [anon_sym_internal] = ACTIONS(1064),
    [anon_sym_private] = ACTIONS(1064),
    [anon_sym_interface] = ACTIONS(1064),
    [anon_sym_struct] = ACTIONS(1064),
    [anon_sym_enum] = ACTIONS(1064),
    [anon_sym_sbyte] = ACTIONS(1064),
    [anon_sym_byte] = ACTIONS(1064),
    [anon_sym_short] = ACTIONS(1064),
    [anon_sym_ushort] = ACTIONS(1064),
    [anon_sym_int] = ACTIONS(1064),
    [anon_sym_uint] = ACTIONS(1064),
    [anon_sym_long] = ACTIONS(1064),
    [anon_sym_ulong] = ACTIONS(1064),
    [anon_sym_char] = ACTIONS(1064),
    [anon_sym_delegate] = ACTIONS(1064),
    [anon_sym_LBRACK] = ACTIONS(960),
    [sym_const_keyword] = ACTIONS(1064),
    [anon_sym_readonly] = ACTIONS(1064),
    [anon_sym_volatile] = ACTIONS(1064),
    [anon_sym_bool] = ACTIONS(1064),
    [anon_sym_decimal] = ACTIONS(1064),
    [anon_sym_double] = ACTIONS(1064),
    [anon_sym_float] = ACTIONS(1064),
    [anon_sym_object] = ACTIONS(1064),
    [anon_sym_string] = ACTIONS(1064),
    [sym_identifier_name] = ACTIONS(1066),
    [sym_comment] = ACTIONS(36),
  },
  [512] = {
    [aux_sym_enum_declaration_repeat1] = STATE(516),
    [anon_sym_RBRACE] = ACTIONS(1054),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [513] = {
    [ts_builtin_sym_end] = ACTIONS(1068),
    [anon_sym_using] = ACTIONS(1068),
    [anon_sym_namespace] = ACTIONS(1068),
    [anon_sym_RBRACE] = ACTIONS(1068),
    [anon_sym_class] = ACTIONS(1068),
    [anon_sym_unsafe] = ACTIONS(1068),
    [anon_sym_abstract] = ACTIONS(1068),
    [anon_sym_sealed] = ACTIONS(1068),
    [anon_sym_static] = ACTIONS(1068),
    [anon_sym_new] = ACTIONS(1068),
    [anon_sym_public] = ACTIONS(1068),
    [anon_sym_protected] = ACTIONS(1068),
    [anon_sym_internal] = ACTIONS(1068),
    [anon_sym_private] = ACTIONS(1068),
    [anon_sym_interface] = ACTIONS(1068),
    [anon_sym_struct] = ACTIONS(1068),
    [anon_sym_enum] = ACTIONS(1068),
    [anon_sym_delegate] = ACTIONS(1068),
    [anon_sym_LBRACK] = ACTIONS(1068),
    [sym_comment] = ACTIONS(36),
  },
  [514] = {
    [anon_sym_RBRACE] = ACTIONS(1000),
    [anon_sym_class] = ACTIONS(1070),
    [anon_sym_unsafe] = ACTIONS(1070),
    [anon_sym_abstract] = ACTIONS(1070),
    [anon_sym_sealed] = ACTIONS(1070),
    [anon_sym_static] = ACTIONS(1070),
    [anon_sym_new] = ACTIONS(1070),
    [anon_sym_public] = ACTIONS(1070),
    [anon_sym_protected] = ACTIONS(1070),
    [anon_sym_internal] = ACTIONS(1070),
    [anon_sym_private] = ACTIONS(1070),
    [anon_sym_interface] = ACTIONS(1070),
    [anon_sym_struct] = ACTIONS(1070),
    [anon_sym_enum] = ACTIONS(1070),
    [anon_sym_sbyte] = ACTIONS(1070),
    [anon_sym_byte] = ACTIONS(1070),
    [anon_sym_short] = ACTIONS(1070),
    [anon_sym_ushort] = ACTIONS(1070),
    [anon_sym_int] = ACTIONS(1070),
    [anon_sym_uint] = ACTIONS(1070),
    [anon_sym_long] = ACTIONS(1070),
    [anon_sym_ulong] = ACTIONS(1070),
    [anon_sym_char] = ACTIONS(1070),
    [anon_sym_delegate] = ACTIONS(1070),
    [anon_sym_LBRACK] = ACTIONS(1000),
    [sym_const_keyword] = ACTIONS(1070),
    [anon_sym_readonly] = ACTIONS(1070),
    [anon_sym_volatile] = ACTIONS(1070),
    [anon_sym_bool] = ACTIONS(1070),
    [anon_sym_decimal] = ACTIONS(1070),
    [anon_sym_double] = ACTIONS(1070),
    [anon_sym_float] = ACTIONS(1070),
    [anon_sym_object] = ACTIONS(1070),
    [anon_sym_string] = ACTIONS(1070),
    [sym_identifier_name] = ACTIONS(1072),
    [sym_comment] = ACTIONS(36),
  },
  [515] = {
    [anon_sym_SEMI] = ACTIONS(1074),
    [anon_sym_RBRACE] = ACTIONS(1000),
    [anon_sym_class] = ACTIONS(1070),
    [anon_sym_unsafe] = ACTIONS(1070),
    [anon_sym_abstract] = ACTIONS(1070),
    [anon_sym_sealed] = ACTIONS(1070),
    [anon_sym_static] = ACTIONS(1070),
    [anon_sym_new] = ACTIONS(1070),
    [anon_sym_public] = ACTIONS(1070),
    [anon_sym_protected] = ACTIONS(1070),
    [anon_sym_internal] = ACTIONS(1070),
    [anon_sym_private] = ACTIONS(1070),
    [anon_sym_interface] = ACTIONS(1070),
    [anon_sym_struct] = ACTIONS(1070),
    [anon_sym_enum] = ACTIONS(1070),
    [anon_sym_sbyte] = ACTIONS(1070),
    [anon_sym_byte] = ACTIONS(1070),
    [anon_sym_short] = ACTIONS(1070),
    [anon_sym_ushort] = ACTIONS(1070),
    [anon_sym_int] = ACTIONS(1070),
    [anon_sym_uint] = ACTIONS(1070),
    [anon_sym_long] = ACTIONS(1070),
    [anon_sym_ulong] = ACTIONS(1070),
    [anon_sym_char] = ACTIONS(1070),
    [anon_sym_delegate] = ACTIONS(1070),
    [anon_sym_LBRACK] = ACTIONS(1000),
    [sym_const_keyword] = ACTIONS(1070),
    [anon_sym_readonly] = ACTIONS(1070),
    [anon_sym_volatile] = ACTIONS(1070),
    [anon_sym_bool] = ACTIONS(1070),
    [anon_sym_decimal] = ACTIONS(1070),
    [anon_sym_double] = ACTIONS(1070),
    [anon_sym_float] = ACTIONS(1070),
    [anon_sym_object] = ACTIONS(1070),
    [anon_sym_string] = ACTIONS(1070),
    [sym_identifier_name] = ACTIONS(1072),
    [sym_comment] = ACTIONS(36),
  },
  [516] = {
    [anon_sym_RBRACE] = ACTIONS(1076),
    [anon_sym_COMMA] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
  },
  [517] = {
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_class] = ACTIONS(1078),
    [anon_sym_unsafe] = ACTIONS(1078),
    [anon_sym_abstract] = ACTIONS(1078),
    [anon_sym_sealed] = ACTIONS(1078),
    [anon_sym_static] = ACTIONS(1078),
    [anon_sym_new] = ACTIONS(1078),
    [anon_sym_public] = ACTIONS(1078),
    [anon_sym_protected] = ACTIONS(1078),
    [anon_sym_internal] = ACTIONS(1078),
    [anon_sym_private] = ACTIONS(1078),
    [anon_sym_interface] = ACTIONS(1078),
    [anon_sym_struct] = ACTIONS(1078),
    [anon_sym_enum] = ACTIONS(1078),
    [anon_sym_sbyte] = ACTIONS(1078),
    [anon_sym_byte] = ACTIONS(1078),
    [anon_sym_short] = ACTIONS(1078),
    [anon_sym_ushort] = ACTIONS(1078),
    [anon_sym_int] = ACTIONS(1078),
    [anon_sym_uint] = ACTIONS(1078),
    [anon_sym_long] = ACTIONS(1078),
    [anon_sym_ulong] = ACTIONS(1078),
    [anon_sym_char] = ACTIONS(1078),
    [anon_sym_delegate] = ACTIONS(1078),
    [anon_sym_LBRACK] = ACTIONS(1044),
    [sym_const_keyword] = ACTIONS(1078),
    [anon_sym_readonly] = ACTIONS(1078),
    [anon_sym_volatile] = ACTIONS(1078),
    [anon_sym_bool] = ACTIONS(1078),
    [anon_sym_decimal] = ACTIONS(1078),
    [anon_sym_double] = ACTIONS(1078),
    [anon_sym_float] = ACTIONS(1078),
    [anon_sym_object] = ACTIONS(1078),
    [anon_sym_string] = ACTIONS(1078),
    [sym_identifier_name] = ACTIONS(1080),
    [sym_comment] = ACTIONS(36),
  },
  [518] = {
    [anon_sym_SEMI] = ACTIONS(1082),
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_class] = ACTIONS(1078),
    [anon_sym_unsafe] = ACTIONS(1078),
    [anon_sym_abstract] = ACTIONS(1078),
    [anon_sym_sealed] = ACTIONS(1078),
    [anon_sym_static] = ACTIONS(1078),
    [anon_sym_new] = ACTIONS(1078),
    [anon_sym_public] = ACTIONS(1078),
    [anon_sym_protected] = ACTIONS(1078),
    [anon_sym_internal] = ACTIONS(1078),
    [anon_sym_private] = ACTIONS(1078),
    [anon_sym_interface] = ACTIONS(1078),
    [anon_sym_struct] = ACTIONS(1078),
    [anon_sym_enum] = ACTIONS(1078),
    [anon_sym_sbyte] = ACTIONS(1078),
    [anon_sym_byte] = ACTIONS(1078),
    [anon_sym_short] = ACTIONS(1078),
    [anon_sym_ushort] = ACTIONS(1078),
    [anon_sym_int] = ACTIONS(1078),
    [anon_sym_uint] = ACTIONS(1078),
    [anon_sym_long] = ACTIONS(1078),
    [anon_sym_ulong] = ACTIONS(1078),
    [anon_sym_char] = ACTIONS(1078),
    [anon_sym_delegate] = ACTIONS(1078),
    [anon_sym_LBRACK] = ACTIONS(1044),
    [sym_const_keyword] = ACTIONS(1078),
    [anon_sym_readonly] = ACTIONS(1078),
    [anon_sym_volatile] = ACTIONS(1078),
    [anon_sym_bool] = ACTIONS(1078),
    [anon_sym_decimal] = ACTIONS(1078),
    [anon_sym_double] = ACTIONS(1078),
    [anon_sym_float] = ACTIONS(1078),
    [anon_sym_object] = ACTIONS(1078),
    [anon_sym_string] = ACTIONS(1078),
    [sym_identifier_name] = ACTIONS(1080),
    [sym_comment] = ACTIONS(36),
  },
  [519] = {
    [anon_sym_RBRACE] = ACTIONS(1068),
    [anon_sym_class] = ACTIONS(1084),
    [anon_sym_unsafe] = ACTIONS(1084),
    [anon_sym_abstract] = ACTIONS(1084),
    [anon_sym_sealed] = ACTIONS(1084),
    [anon_sym_static] = ACTIONS(1084),
    [anon_sym_new] = ACTIONS(1084),
    [anon_sym_public] = ACTIONS(1084),
    [anon_sym_protected] = ACTIONS(1084),
    [anon_sym_internal] = ACTIONS(1084),
    [anon_sym_private] = ACTIONS(1084),
    [anon_sym_interface] = ACTIONS(1084),
    [anon_sym_struct] = ACTIONS(1084),
    [anon_sym_enum] = ACTIONS(1084),
    [anon_sym_sbyte] = ACTIONS(1084),
    [anon_sym_byte] = ACTIONS(1084),
    [anon_sym_short] = ACTIONS(1084),
    [anon_sym_ushort] = ACTIONS(1084),
    [anon_sym_int] = ACTIONS(1084),
    [anon_sym_uint] = ACTIONS(1084),
    [anon_sym_long] = ACTIONS(1084),
    [anon_sym_ulong] = ACTIONS(1084),
    [anon_sym_char] = ACTIONS(1084),
    [anon_sym_delegate] = ACTIONS(1084),
    [anon_sym_LBRACK] = ACTIONS(1068),
    [sym_const_keyword] = ACTIONS(1084),
    [anon_sym_readonly] = ACTIONS(1084),
    [anon_sym_volatile] = ACTIONS(1084),
    [anon_sym_bool] = ACTIONS(1084),
    [anon_sym_decimal] = ACTIONS(1084),
    [anon_sym_double] = ACTIONS(1084),
    [anon_sym_float] = ACTIONS(1084),
    [anon_sym_object] = ACTIONS(1084),
    [anon_sym_string] = ACTIONS(1084),
    [sym_identifier_name] = ACTIONS(1086),
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
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
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
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1),
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
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_modifier, 1),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__interface_modifiers, 1),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_declaration, 1),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 4),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 1),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_declaration_repeat1, 1),
  [412] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 1),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 4),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
  [510] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [524] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 5),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [548] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_declaration_repeat1, 2),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_modifier, 1),
  [588] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_modifier, 1),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 5),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
  [634] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 6),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [674] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(375),
  [676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(376),
  [678] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(377),
  [680] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
  [696] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(383),
  [698] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(384),
  [700] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(385),
  [702] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(386),
  [704] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(389),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 2),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
  [756] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 4),
  [762] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 4),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
  [768] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
  [788] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [818] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
  [820] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
  [822] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
  [826] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
  [828] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(446),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 3),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_type, 2),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(459),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 7),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
  [874] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 5),
  [880] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 5),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
  [886] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
  [894] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5),
  [900] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 5),
  [916] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
  [930] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 2),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 4),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 4),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 8),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
  [964] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 6),
  [968] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 6),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
  [972] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
  [976] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6),
  [990] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 3),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 5),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(504),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
  [1014] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
  [1022] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 7),
  [1026] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 7),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
  [1030] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 7),
  [1040] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(513),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8),
  [1050] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
  [1058] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 8),
  [1062] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 8),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
  [1066] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9),
  [1072] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10),
  [1080] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 11),
  [1086] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
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
