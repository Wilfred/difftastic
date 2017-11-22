#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 444
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
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
  anon_sym_struct = 18,
  anon_sym_enum = 19,
  anon_sym_COLON = 20,
  anon_sym_COMMA = 21,
  anon_sym_sbyte = 22,
  anon_sym_byte = 23,
  anon_sym_short = 24,
  anon_sym_ushort = 25,
  anon_sym_int = 26,
  anon_sym_uint = 27,
  anon_sym_long = 28,
  anon_sym_ulong = 29,
  anon_sym_char = 30,
  anon_sym_delegate = 31,
  sym_void_keyword = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  anon_sym_ref = 35,
  anon_sym_out = 36,
  anon_sym_this = 37,
  sym_params_keyword = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  anon_sym_assembly = 41,
  anon_sym_module = 42,
  sym_const_keyword = 43,
  anon_sym_readonly = 44,
  anon_sym_volatile = 45,
  anon_sym_EQ = 46,
  anon_sym_true = 47,
  anon_sym_false = 48,
  anon_sym_SQUOTE = 49,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 50,
  sym__hexadecimal_escape_sequence = 51,
  aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 52,
  aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 53,
  anon_sym_BSLASH_SQUOTE = 54,
  anon_sym_BSLASH_DQUOTE = 55,
  anon_sym_BSLASH_BSLASH = 56,
  anon_sym_BSLASH0 = 57,
  anon_sym_BSLASHa = 58,
  anon_sym_BSLASHb = 59,
  anon_sym_BSLASHf = 60,
  anon_sym_BSLASHn = 61,
  anon_sym_BSLASHr = 62,
  anon_sym_BSLASHt = 63,
  anon_sym_BSLASHv = 64,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 65,
  aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 66,
  sym__integer_type_suffix = 67,
  sym_null_literal = 68,
  anon_sym_DOT = 69,
  sym__real_type_suffix = 70,
  sym__exponent_part = 71,
  anon_sym_DQUOTE = 72,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 73,
  anon_sym_AT_DQUOTE = 74,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 75,
  anon_sym_bool = 76,
  anon_sym_decimal = 77,
  anon_sym_double = 78,
  anon_sym_float = 79,
  anon_sym_object = 80,
  anon_sym_string = 81,
  anon_sym_LT = 82,
  anon_sym_GT = 83,
  anon_sym_COLON_COLON = 84,
  sym_global = 85,
  sym_identifier_name = 86,
  sym_comment = 87,
  sym_compilation_unit = 88,
  sym__type_declaration = 89,
  sym_extern_alias_directive = 90,
  sym_using_directive = 91,
  sym_namespace_declaration = 92,
  sym_class_declaration = 93,
  sym_class_modifiers = 94,
  sym__class_modifiers = 95,
  sym_struct_declaration = 96,
  sym_struct_modifiers = 97,
  sym__struct_modifiers = 98,
  sym_enum_declaration = 99,
  sym_enum_member_declaration = 100,
  sym_enum_modifier = 101,
  sym__integral_type = 102,
  sym_delegate_declaration = 103,
  sym_delegate_modifier = 104,
  sym__return_type = 105,
  sym_parameter_list = 106,
  sym__formal_parameter_list = 107,
  sym_parameter = 108,
  sym_parameter_modifier = 109,
  sym_parameter_array = 110,
  sym_array_type = 111,
  sym_array_rank_specifier = 112,
  sym__attributes = 113,
  sym__attribute_section = 114,
  sym_attribute_list = 115,
  sym_attribute = 116,
  sym_attribute_argument_list = 117,
  sym__global_attributes = 118,
  sym_field_declaration = 119,
  sym_field_modifiers = 120,
  sym__field_modifiers = 121,
  sym_variable_declaration = 122,
  sym__type = 123,
  sym_generic_name = 124,
  sym_variable_declarator = 125,
  sym_equals_value_clause = 126,
  sym__expression = 127,
  sym__literal = 128,
  sym_boolean_literal = 129,
  sym_character_literal = 130,
  sym__unicode_escape_sequence = 131,
  sym__simple_escape_sequence = 132,
  sym_integer_literal = 133,
  sym_real_literal = 134,
  sym_string_literal = 135,
  sym__regular_string_literal = 136,
  sym__regular_string_literal_character = 137,
  sym__verbatim_string_literal = 138,
  sym_predefined_type = 139,
  sym_type_parameter_list = 140,
  sym_type_parameter = 141,
  sym_qualified_name = 142,
  sym_alias_qualified_name = 143,
  sym_name_equals = 144,
  sym_static = 145,
  aux_sym_compilation_unit_repeat1 = 146,
  aux_sym_compilation_unit_repeat2 = 147,
  aux_sym_compilation_unit_repeat3 = 148,
  aux_sym_compilation_unit_repeat4 = 149,
  aux_sym_class_declaration_repeat1 = 150,
  aux_sym_enum_declaration_repeat1 = 151,
  aux_sym__formal_parameter_list_repeat1 = 152,
  aux_sym_array_rank_specifier_repeat1 = 153,
  aux_sym__attributes_repeat1 = 154,
  aux_sym_attribute_list_repeat1 = 155,
  aux_sym_variable_declaration_repeat1 = 156,
  aux_sym__regular_string_literal_repeat1 = 157,
  aux_sym_type_parameter_list_repeat1 = 158,
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
  [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
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
  [aux_sym_class_declaration_repeat1] = {
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
        ADVANCE(126);
      if (lookahead == 'm')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(136);
      if (lookahead == 'o')
        ADVANCE(139);
      if (lookahead == 'p')
        ADVANCE(147);
      if (lookahead == 'r')
        ADVANCE(171);
      if (lookahead == 's')
        ADVANCE(180);
      if (lookahead == 't')
        ADVANCE(206);
      if (lookahead == 'u')
        ADVANCE(210);
      if (lookahead == 'v')
        ADVANCE(228);
      if (('D' <= lookahead && lookahead <= 'F'))
        ADVANCE(238);
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
      if (lookahead == 'n')
        ADVANCE(123);
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
      if (lookahead == 'l')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_internal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(19);
      if (lookahead == 'o')
        ADVANCE(127);
      if (lookahead == 'u')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (lookahead == 'o')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'u')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'w')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(140);
      if (lookahead == 'u')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'j')
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
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(148);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 'u')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'm')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_params_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(154);
      if (lookahead == 'o')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'v')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(173);
      if (lookahead == 'f')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'y')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(181);
      if (lookahead == 'e')
        ADVANCE(185);
      if (lookahead == 'h')
        ADVANCE(190);
      if (lookahead == 't')
        ADVANCE(194);
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
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_sbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_sealed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(195);
      if (lookahead == 'r')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(200);
      if (lookahead == 'u')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'g')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(211);
      if (lookahead == 'l')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(218);
      if (lookahead == 's')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'o')
        ADVANCE(215);
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
      if (lookahead == 'g')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_ushort);
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
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == 'l')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'd')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_void_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__real_type_suffix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 239:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(241);
      if (lookahead == ')')
        ADVANCE(242);
      if (lookahead == ',')
        ADVANCE(243);
      if (lookahead == '.')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(246);
      if (lookahead == '<')
        ADVANCE(247);
      if (lookahead == '=')
        ADVANCE(248);
      if (lookahead == '>')
        ADVANCE(249);
      if (lookahead == '[')
        ADVANCE(250);
      if (lookahead == ']')
        ADVANCE(251);
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'b')
        ADVANCE(264);
      if (lookahead == 'c')
        ADVANCE(268);
      if (lookahead == 'd')
        ADVANCE(276);
      if (lookahead == 'e')
        ADVANCE(284);
      if (lookahead == 'i')
        ADVANCE(293);
      if (lookahead == 'l')
        ADVANCE(301);
      if (lookahead == 'n')
        ADVANCE(305);
      if (lookahead == 'p')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(340);
      if (lookahead == 'u')
        ADVANCE(363);
      if (lookahead == '{')
        ADVANCE(384);
      if (lookahead == '}')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(13);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 252:
      if (lookahead == 'b')
        ADVANCE(253);
      if (lookahead == 'l')
        ADVANCE(260);
      END_STATE();
    case 253:
      if (lookahead == 's')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 't')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'a')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'c')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 't')
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 260:
      if (lookahead == 'i')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'a')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 's')
        ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 264:
      if (lookahead == 'y')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 't')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'e')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 268:
      if (lookahead == 'h')
        ADVANCE(269);
      if (lookahead == 'l')
        ADVANCE(272);
      END_STATE();
    case 269:
      if (lookahead == 'a')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'r')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 272:
      if (lookahead == 'a')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 's')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 's')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 276:
      if (lookahead == 'e')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'l')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'e')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'g')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'a')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 't')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'e')
        ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 284:
      if (lookahead == 'n')
        ADVANCE(285);
      if (lookahead == 'x')
        ADVANCE(288);
      END_STATE();
    case 285:
      if (lookahead == 'u')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 'm')
        ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_enum);
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
      if (lookahead == 'r')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'n')
        ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 293:
      if (lookahead == 'n')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 't')
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'r')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'n')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'a')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'l')
        ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 301:
      if (lookahead == 'o')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'n')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'g')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 305:
      if (lookahead == 'a')
        ADVANCE(306);
      if (lookahead == 'e')
        ADVANCE(314);
      END_STATE();
    case 306:
      if (lookahead == 'm')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'e')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 's')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'p')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'a')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'c')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'e')
        ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 314:
      if (lookahead == 'w')
        ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 316:
      if (lookahead == 'a')
        ADVANCE(317);
      if (lookahead == 'r')
        ADVANCE(322);
      if (lookahead == 'u')
        ADVANCE(335);
      END_STATE();
    case 317:
      if (lookahead == 'r')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'a')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'm')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 's')
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_params_keyword);
      END_STATE();
    case 322:
      if (lookahead == 'i')
        ADVANCE(323);
      if (lookahead == 'o')
        ADVANCE(328);
      END_STATE();
    case 323:
      if (lookahead == 'v')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'a')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 't')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'e')
        ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 328:
      if (lookahead == 't')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'e')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'c')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 't')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'e')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'd')
        ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 335:
      if (lookahead == 'b')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'l')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'i')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'c')
        ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 340:
      if (lookahead == 'b')
        ADVANCE(341);
      if (lookahead == 'e')
        ADVANCE(345);
      if (lookahead == 'h')
        ADVANCE(350);
      if (lookahead == 't')
        ADVANCE(354);
      END_STATE();
    case 341:
      if (lookahead == 'y')
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
      ACCEPT_TOKEN(anon_sym_sbyte);
      END_STATE();
    case 345:
      if (lookahead == 'a')
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
      if (lookahead == 'd')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 350:
      if (lookahead == 'o')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 'r')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 't')
        ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 354:
      if (lookahead == 'a')
        ADVANCE(355);
      if (lookahead == 'r')
        ADVANCE(359);
      END_STATE();
    case 355:
      if (lookahead == 't')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'i')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'c')
        ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 359:
      if (lookahead == 'u')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'c')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 't')
        ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 363:
      if (lookahead == 'i')
        ADVANCE(364);
      if (lookahead == 'l')
        ADVANCE(367);
      if (lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 's')
        ADVANCE(376);
      END_STATE();
    case 364:
      if (lookahead == 'n')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 't')
        ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 367:
      if (lookahead == 'o')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'n')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'g')
        ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 371:
      if (lookahead == 's')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'a')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'f')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'e')
        ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 376:
      if (lookahead == 'h')
        ADVANCE(377);
      if (lookahead == 'i')
        ADVANCE(381);
      END_STATE();
    case 377:
      if (lookahead == 'o')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'r')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 't')
        ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 381:
      if (lookahead == 'n')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'g')
        ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 386:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 's')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 389:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 390:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 391:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(392);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'f')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(400);
      if (lookahead == 's')
        ADVANCE(401);
      if (lookahead == 'u')
        ADVANCE(404);
      if (lookahead == 'v')
        ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(391);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'h')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(394);
      if (lookahead == 'o')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'c')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 't')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(181);
      if (lookahead == 'h')
        ADVANCE(190);
      if (lookahead == 't')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(211);
      if (lookahead == 'l')
        ADVANCE(405);
      if (lookahead == 's')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 408:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(409);
      if (lookahead == 'm')
        ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 's')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 411:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(246);
      if (lookahead == '[')
        ADVANCE(250);
      if (lookahead == 'a')
        ADVANCE(412);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(413);
      if (lookahead == 'e')
        ADVANCE(414);
      if (lookahead == 'f')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(136);
      if (lookahead == 'o')
        ADVANCE(400);
      if (lookahead == 'p')
        ADVANCE(415);
      if (lookahead == 'r')
        ADVANCE(416);
      if (lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'u')
        ADVANCE(418);
      if (lookahead == 'v')
        ADVANCE(419);
      if (lookahead == '}')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 413:
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
    case 414:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'n')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 'u')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'i')
        ADVANCE(211);
      if (lookahead == 'l')
        ADVANCE(405);
      if (lookahead == 'n')
        ADVANCE(218);
      if (lookahead == 's')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'o')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'l')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 421:
      if (lookahead == ',')
        ADVANCE(243);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(249);
      if (lookahead == '[')
        ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 422:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(392);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'f')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(400);
      if (lookahead == 's')
        ADVANCE(401);
      if (lookahead == 'u')
        ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 423:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(412);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(413);
      if (lookahead == 'f')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(136);
      if (lookahead == 'o')
        ADVANCE(400);
      if (lookahead == 'p')
        ADVANCE(415);
      if (lookahead == 'r')
        ADVANCE(416);
      if (lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'u')
        ADVANCE(418);
      if (lookahead == 'v')
        ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 424:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(412);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'f')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(136);
      if (lookahead == 'o')
        ADVANCE(400);
      if (lookahead == 'p')
        ADVANCE(415);
      if (lookahead == 'r')
        ADVANCE(416);
      if (lookahead == 's')
        ADVANCE(425);
      if (lookahead == 'u')
        ADVANCE(418);
      if (lookahead == 'v')
        ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(181);
      if (lookahead == 'e')
        ADVANCE(185);
      if (lookahead == 'h')
        ADVANCE(190);
      if (lookahead == 't')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'a')
        ADVANCE(195);
      if (lookahead == 'r')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 427:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(428);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'f')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(136);
      if (lookahead == 'o')
        ADVANCE(400);
      if (lookahead == 'p')
        ADVANCE(415);
      if (lookahead == 'r')
        ADVANCE(416);
      if (lookahead == 's')
        ADVANCE(429);
      if (lookahead == 'u')
        ADVANCE(418);
      if (lookahead == 'v')
        ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 428:
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
    case 429:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'b')
        ADVANCE(181);
      if (lookahead == 'h')
        ADVANCE(190);
      if (lookahead == 't')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
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
        ADVANCE(428);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'f')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(400);
      if (lookahead == 's')
        ADVANCE(401);
      if (lookahead == 'u')
        ADVANCE(404);
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
      if (lookahead == ')')
        ADVANCE(242);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(250);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(392);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'f')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(139);
      if (lookahead == 'p')
        ADVANCE(432);
      if (lookahead == 'r')
        ADVANCE(433);
      if (lookahead == 's')
        ADVANCE(401);
      if (lookahead == 't')
        ADVANCE(206);
      if (lookahead == 'u')
        ADVANCE(404);
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
      if (lookahead == 'a')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'e')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier_name);
      if (lookahead == 'f')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 435:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(412);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'f')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'n')
        ADVANCE(136);
      if (lookahead == 'o')
        ADVANCE(400);
      if (lookahead == 'p')
        ADVANCE(415);
      if (lookahead == 'r')
        ADVANCE(416);
      if (lookahead == 's')
        ADVANCE(180);
      if (lookahead == 'u')
        ADVANCE(418);
      if (lookahead == 'v')
        ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 436:
      if (lookahead == ',')
        ADVANCE(243);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(249);
      if (lookahead == '[')
        ADVANCE(250);
      if (lookahead == '{')
        ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(436);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 437:
      if (lookahead == '\"')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(438);
      if (lookahead == 'f')
        ADVANCE(440);
      if (lookahead == 'n')
        ADVANCE(445);
      if (lookahead == 't')
        ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 438:
      if (lookahead == '\"')
        ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 440:
      if (lookahead == 'a')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'l')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 's')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'e')
        ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 445:
      if (lookahead == 'u')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'l')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'l')
        ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 449:
      if (lookahead == 'r')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'u')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'e')
        ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 453:
      if (lookahead == '/')
        ADVANCE(454);
      if (lookahead == '\\')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(457);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(7);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(456);
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
    case 456:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 458:
      if (lookahead == ')')
        ADVANCE(242);
      if (lookahead == ',')
        ADVANCE(243);
      if (lookahead == '.')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(246);
      if (lookahead == 'L')
        ADVANCE(459);
      if (lookahead == 'U')
        ADVANCE(461);
      if (lookahead == '[')
        ADVANCE(250);
      if (lookahead == 'l')
        ADVANCE(459);
      if (lookahead == 'p')
        ADVANCE(462);
      if (lookahead == 'u')
        ADVANCE(461);
      if (lookahead == '}')
        ADVANCE(385);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(458);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm')
        ADVANCE(464);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'U')
        ADVANCE(460);
      if (lookahead == 'u')
        ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__integer_type_suffix);
      if (lookahead == 'L')
        ADVANCE(460);
      if (lookahead == 'l')
        ADVANCE(460);
      END_STATE();
    case 462:
      if (lookahead == 'a')
        ADVANCE(317);
      END_STATE();
    case 463:
      if (('+' <= lookahead && lookahead <= ']'))
        ADVANCE(15);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__real_type_suffix);
      END_STATE();
    case 465:
      if (lookahead == '\n')
        SKIP(465);
      if (lookahead == '\"')
        ADVANCE(240);
      if (lookahead == '/')
        ADVANCE(466);
      if (lookahead == '\\')
        ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(468);
      if (lookahead != 0)
        ADVANCE(468);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(7);
      END_STATE();
    case 467:
      if (lookahead == '\"')
        ADVANCE(456);
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
    case 468:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(473);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(471);
      if (lookahead == '/')
        ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(473);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(472);
      if (lookahead != 0)
        ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(473);
      if (lookahead != 0)
        ADVANCE(471);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(473);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(473);
      END_STATE();
    case 476:
      if (lookahead == '/')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(250);
      if (lookahead == 'b')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(392);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'f')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(396);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead == 'o')
        ADVANCE(139);
      if (lookahead == 'r')
        ADVANCE(433);
      if (lookahead == 's')
        ADVANCE(401);
      if (lookahead == 't')
        ADVANCE(206);
      if (lookahead == 'u')
        ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(476);
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
  [1] = {.lex_state = 239},
  [2] = {.lex_state = 239},
  [3] = {.lex_state = 386},
  [4] = {.lex_state = 389},
  [5] = {.lex_state = 390},
  [6] = {.lex_state = 239},
  [7] = {.lex_state = 239},
  [8] = {.lex_state = 239},
  [9] = {.lex_state = 390},
  [10] = {.lex_state = 390},
  [11] = {.lex_state = 391},
  [12] = {.lex_state = 408},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 239},
  [15] = {.lex_state = 239},
  [16] = {.lex_state = 239},
  [17] = {.lex_state = 239},
  [18] = {.lex_state = 239},
  [19] = {.lex_state = 239},
  [20] = {.lex_state = 239},
  [21] = {.lex_state = 239},
  [22] = {.lex_state = 239},
  [23] = {.lex_state = 239},
  [24] = {.lex_state = 239},
  [25] = {.lex_state = 411},
  [26] = {.lex_state = 239},
  [27] = {.lex_state = 239},
  [28] = {.lex_state = 239},
  [29] = {.lex_state = 239},
  [30] = {.lex_state = 239},
  [31] = {.lex_state = 411},
  [32] = {.lex_state = 390},
  [33] = {.lex_state = 389},
  [34] = {.lex_state = 239},
  [35] = {.lex_state = 239},
  [36] = {.lex_state = 239},
  [37] = {.lex_state = 239},
  [38] = {.lex_state = 389},
  [39] = {.lex_state = 239},
  [40] = {.lex_state = 239},
  [41] = {.lex_state = 239},
  [42] = {.lex_state = 239},
  [43] = {.lex_state = 239},
  [44] = {.lex_state = 239},
  [45] = {.lex_state = 239},
  [46] = {.lex_state = 421},
  [47] = {.lex_state = 390},
  [48] = {.lex_state = 421},
  [49] = {.lex_state = 390},
  [50] = {.lex_state = 421},
  [51] = {.lex_state = 239},
  [52] = {.lex_state = 239},
  [53] = {.lex_state = 239},
  [54] = {.lex_state = 239},
  [55] = {.lex_state = 390},
  [56] = {.lex_state = 390},
  [57] = {.lex_state = 390},
  [58] = {.lex_state = 391},
  [59] = {.lex_state = 239},
  [60] = {.lex_state = 239},
  [61] = {.lex_state = 239},
  [62] = {.lex_state = 239},
  [63] = {.lex_state = 239},
  [64] = {.lex_state = 239},
  [65] = {.lex_state = 239},
  [66] = {.lex_state = 239},
  [67] = {.lex_state = 239},
  [68] = {.lex_state = 239},
  [69] = {.lex_state = 390},
  [70] = {.lex_state = 239},
  [71] = {.lex_state = 411},
  [72] = {.lex_state = 239},
  [73] = {.lex_state = 390},
  [74] = {.lex_state = 239},
  [75] = {.lex_state = 389},
  [76] = {.lex_state = 390},
  [77] = {.lex_state = 239},
  [78] = {.lex_state = 239},
  [79] = {.lex_state = 411},
  [80] = {.lex_state = 422},
  [81] = {.lex_state = 239},
  [82] = {.lex_state = 411},
  [83] = {.lex_state = 239},
  [84] = {.lex_state = 390},
  [85] = {.lex_state = 239},
  [86] = {.lex_state = 421},
  [87] = {.lex_state = 239},
  [88] = {.lex_state = 390},
  [89] = {.lex_state = 239},
  [90] = {.lex_state = 239},
  [91] = {.lex_state = 411},
  [92] = {.lex_state = 390},
  [93] = {.lex_state = 239},
  [94] = {.lex_state = 239},
  [95] = {.lex_state = 239},
  [96] = {.lex_state = 239},
  [97] = {.lex_state = 390},
  [98] = {.lex_state = 390},
  [99] = {.lex_state = 390},
  [100] = {.lex_state = 390},
  [101] = {.lex_state = 391},
  [102] = {.lex_state = 239},
  [103] = {.lex_state = 239},
  [104] = {.lex_state = 239},
  [105] = {.lex_state = 239},
  [106] = {.lex_state = 239},
  [107] = {.lex_state = 239},
  [108] = {.lex_state = 239},
  [109] = {.lex_state = 239},
  [110] = {.lex_state = 239},
  [111] = {.lex_state = 390},
  [112] = {.lex_state = 423},
  [113] = {.lex_state = 424},
  [114] = {.lex_state = 411},
  [115] = {.lex_state = 390},
  [116] = {.lex_state = 390},
  [117] = {.lex_state = 391},
  [118] = {.lex_state = 422},
  [119] = {.lex_state = 427},
  [120] = {.lex_state = 411},
  [121] = {.lex_state = 411},
  [122] = {.lex_state = 239},
  [123] = {.lex_state = 239},
  [124] = {.lex_state = 239},
  [125] = {.lex_state = 239},
  [126] = {.lex_state = 411},
  [127] = {.lex_state = 430},
  [128] = {.lex_state = 430},
  [129] = {.lex_state = 239},
  [130] = {.lex_state = 390},
  [131] = {.lex_state = 411},
  [132] = {.lex_state = 239},
  [133] = {.lex_state = 239},
  [134] = {.lex_state = 411},
  [135] = {.lex_state = 239},
  [136] = {.lex_state = 411},
  [137] = {.lex_state = 411},
  [138] = {.lex_state = 390},
  [139] = {.lex_state = 239},
  [140] = {.lex_state = 239},
  [141] = {.lex_state = 390},
  [142] = {.lex_state = 390},
  [143] = {.lex_state = 390},
  [144] = {.lex_state = 239},
  [145] = {.lex_state = 239},
  [146] = {.lex_state = 431},
  [147] = {.lex_state = 239},
  [148] = {.lex_state = 239},
  [149] = {.lex_state = 239},
  [150] = {.lex_state = 239},
  [151] = {.lex_state = 390},
  [152] = {.lex_state = 239},
  [153] = {.lex_state = 239},
  [154] = {.lex_state = 390},
  [155] = {.lex_state = 239},
  [156] = {.lex_state = 239},
  [157] = {.lex_state = 239},
  [158] = {.lex_state = 239},
  [159] = {.lex_state = 239},
  [160] = {.lex_state = 390},
  [161] = {.lex_state = 239},
  [162] = {.lex_state = 239},
  [163] = {.lex_state = 239},
  [164] = {.lex_state = 435},
  [165] = {.lex_state = 430},
  [166] = {.lex_state = 239},
  [167] = {.lex_state = 239},
  [168] = {.lex_state = 390},
  [169] = {.lex_state = 239},
  [170] = {.lex_state = 390},
  [171] = {.lex_state = 390},
  [172] = {.lex_state = 390},
  [173] = {.lex_state = 391},
  [174] = {.lex_state = 422},
  [175] = {.lex_state = 239},
  [176] = {.lex_state = 239},
  [177] = {.lex_state = 239},
  [178] = {.lex_state = 239},
  [179] = {.lex_state = 430},
  [180] = {.lex_state = 411},
  [181] = {.lex_state = 239},
  [182] = {.lex_state = 239},
  [183] = {.lex_state = 239},
  [184] = {.lex_state = 411},
  [185] = {.lex_state = 422},
  [186] = {.lex_state = 436},
  [187] = {.lex_state = 239},
  [188] = {.lex_state = 411},
  [189] = {.lex_state = 239},
  [190] = {.lex_state = 411},
  [191] = {.lex_state = 239},
  [192] = {.lex_state = 437},
  [193] = {.lex_state = 239},
  [194] = {.lex_state = 239},
  [195] = {.lex_state = 390},
  [196] = {.lex_state = 239},
  [197] = {.lex_state = 239},
  [198] = {.lex_state = 390},
  [199] = {.lex_state = 390},
  [200] = {.lex_state = 239},
  [201] = {.lex_state = 422},
  [202] = {.lex_state = 422},
  [203] = {.lex_state = 390},
  [204] = {.lex_state = 239},
  [205] = {.lex_state = 239},
  [206] = {.lex_state = 422},
  [207] = {.lex_state = 239},
  [208] = {.lex_state = 431},
  [209] = {.lex_state = 431},
  [210] = {.lex_state = 390},
  [211] = {.lex_state = 431},
  [212] = {.lex_state = 239},
  [213] = {.lex_state = 239},
  [214] = {.lex_state = 239},
  [215] = {.lex_state = 411},
  [216] = {.lex_state = 411},
  [217] = {.lex_state = 239},
  [218] = {.lex_state = 239},
  [219] = {.lex_state = 239},
  [220] = {.lex_state = 239},
  [221] = {.lex_state = 239},
  [222] = {.lex_state = 239},
  [223] = {.lex_state = 239},
  [224] = {.lex_state = 411},
  [225] = {.lex_state = 239},
  [226] = {.lex_state = 411},
  [227] = {.lex_state = 239},
  [228] = {.lex_state = 390},
  [229] = {.lex_state = 239},
  [230] = {.lex_state = 239},
  [231] = {.lex_state = 411},
  [232] = {.lex_state = 239},
  [233] = {.lex_state = 239},
  [234] = {.lex_state = 239},
  [235] = {.lex_state = 390},
  [236] = {.lex_state = 239},
  [237] = {.lex_state = 390},
  [238] = {.lex_state = 390},
  [239] = {.lex_state = 390},
  [240] = {.lex_state = 391},
  [241] = {.lex_state = 422},
  [242] = {.lex_state = 239},
  [243] = {.lex_state = 390},
  [244] = {.lex_state = 239},
  [245] = {.lex_state = 239},
  [246] = {.lex_state = 422},
  [247] = {.lex_state = 436},
  [248] = {.lex_state = 239},
  [249] = {.lex_state = 239},
  [250] = {.lex_state = 390},
  [251] = {.lex_state = 239},
  [252] = {.lex_state = 453},
  [253] = {.lex_state = 458},
  [254] = {.lex_state = 458},
  [255] = {.lex_state = 239},
  [256] = {.lex_state = 437},
  [257] = {.lex_state = 465},
  [258] = {.lex_state = 469},
  [259] = {.lex_state = 239},
  [260] = {.lex_state = 239},
  [261] = {.lex_state = 239},
  [262] = {.lex_state = 239},
  [263] = {.lex_state = 239},
  [264] = {.lex_state = 239},
  [265] = {.lex_state = 390},
  [266] = {.lex_state = 239},
  [267] = {.lex_state = 239},
  [268] = {.lex_state = 390},
  [269] = {.lex_state = 239},
  [270] = {.lex_state = 239},
  [271] = {.lex_state = 239},
  [272] = {.lex_state = 476},
  [273] = {.lex_state = 239},
  [274] = {.lex_state = 239},
  [275] = {.lex_state = 239},
  [276] = {.lex_state = 390},
  [277] = {.lex_state = 422},
  [278] = {.lex_state = 422},
  [279] = {.lex_state = 239},
  [280] = {.lex_state = 431},
  [281] = {.lex_state = 411},
  [282] = {.lex_state = 411},
  [283] = {.lex_state = 239},
  [284] = {.lex_state = 390},
  [285] = {.lex_state = 239},
  [286] = {.lex_state = 411},
  [287] = {.lex_state = 411},
  [288] = {.lex_state = 239},
  [289] = {.lex_state = 239},
  [290] = {.lex_state = 411},
  [291] = {.lex_state = 411},
  [292] = {.lex_state = 411},
  [293] = {.lex_state = 411},
  [294] = {.lex_state = 411},
  [295] = {.lex_state = 411},
  [296] = {.lex_state = 239},
  [297] = {.lex_state = 239},
  [298] = {.lex_state = 239},
  [299] = {.lex_state = 239},
  [300] = {.lex_state = 239},
  [301] = {.lex_state = 390},
  [302] = {.lex_state = 239},
  [303] = {.lex_state = 239},
  [304] = {.lex_state = 411},
  [305] = {.lex_state = 239},
  [306] = {.lex_state = 239},
  [307] = {.lex_state = 239},
  [308] = {.lex_state = 390},
  [309] = {.lex_state = 239},
  [310] = {.lex_state = 239},
  [311] = {.lex_state = 390},
  [312] = {.lex_state = 239},
  [313] = {.lex_state = 239},
  [314] = {.lex_state = 239},
  [315] = {.lex_state = 239},
  [316] = {.lex_state = 239},
  [317] = {.lex_state = 437},
  [318] = {.lex_state = 239},
  [319] = {.lex_state = 458},
  [320] = {.lex_state = 458},
  [321] = {.lex_state = 465},
  [322] = {.lex_state = 465},
  [323] = {.lex_state = 465},
  [324] = {.lex_state = 239},
  [325] = {.lex_state = 465},
  [326] = {.lex_state = 465},
  [327] = {.lex_state = 239},
  [328] = {.lex_state = 239},
  [329] = {.lex_state = 239},
  [330] = {.lex_state = 239},
  [331] = {.lex_state = 239},
  [332] = {.lex_state = 239},
  [333] = {.lex_state = 239},
  [334] = {.lex_state = 390},
  [335] = {.lex_state = 431},
  [336] = {.lex_state = 390},
  [337] = {.lex_state = 239},
  [338] = {.lex_state = 476},
  [339] = {.lex_state = 476},
  [340] = {.lex_state = 476},
  [341] = {.lex_state = 476},
  [342] = {.lex_state = 239},
  [343] = {.lex_state = 239},
  [344] = {.lex_state = 390},
  [345] = {.lex_state = 390},
  [346] = {.lex_state = 239},
  [347] = {.lex_state = 239},
  [348] = {.lex_state = 239},
  [349] = {.lex_state = 239},
  [350] = {.lex_state = 411},
  [351] = {.lex_state = 411},
  [352] = {.lex_state = 390},
  [353] = {.lex_state = 239},
  [354] = {.lex_state = 411},
  [355] = {.lex_state = 411},
  [356] = {.lex_state = 411},
  [357] = {.lex_state = 411},
  [358] = {.lex_state = 411},
  [359] = {.lex_state = 239},
  [360] = {.lex_state = 390},
  [361] = {.lex_state = 411},
  [362] = {.lex_state = 411},
  [363] = {.lex_state = 411},
  [364] = {.lex_state = 239},
  [365] = {.lex_state = 239},
  [366] = {.lex_state = 239},
  [367] = {.lex_state = 239},
  [368] = {.lex_state = 239},
  [369] = {.lex_state = 239},
  [370] = {.lex_state = 239},
  [371] = {.lex_state = 411},
  [372] = {.lex_state = 239},
  [373] = {.lex_state = 239},
  [374] = {.lex_state = 458},
  [375] = {.lex_state = 239},
  [376] = {.lex_state = 458},
  [377] = {.lex_state = 239},
  [378] = {.lex_state = 465},
  [379] = {.lex_state = 239},
  [380] = {.lex_state = 239},
  [381] = {.lex_state = 239},
  [382] = {.lex_state = 239},
  [383] = {.lex_state = 390},
  [384] = {.lex_state = 239},
  [385] = {.lex_state = 239},
  [386] = {.lex_state = 476},
  [387] = {.lex_state = 239},
  [388] = {.lex_state = 239},
  [389] = {.lex_state = 239},
  [390] = {.lex_state = 239},
  [391] = {.lex_state = 239},
  [392] = {.lex_state = 239},
  [393] = {.lex_state = 239},
  [394] = {.lex_state = 239},
  [395] = {.lex_state = 411},
  [396] = {.lex_state = 411},
  [397] = {.lex_state = 411},
  [398] = {.lex_state = 411},
  [399] = {.lex_state = 239},
  [400] = {.lex_state = 411},
  [401] = {.lex_state = 411},
  [402] = {.lex_state = 239},
  [403] = {.lex_state = 390},
  [404] = {.lex_state = 411},
  [405] = {.lex_state = 411},
  [406] = {.lex_state = 411},
  [407] = {.lex_state = 239},
  [408] = {.lex_state = 239},
  [409] = {.lex_state = 239},
  [410] = {.lex_state = 458},
  [411] = {.lex_state = 239},
  [412] = {.lex_state = 239},
  [413] = {.lex_state = 390},
  [414] = {.lex_state = 476},
  [415] = {.lex_state = 239},
  [416] = {.lex_state = 239},
  [417] = {.lex_state = 239},
  [418] = {.lex_state = 411},
  [419] = {.lex_state = 411},
  [420] = {.lex_state = 239},
  [421] = {.lex_state = 411},
  [422] = {.lex_state = 411},
  [423] = {.lex_state = 239},
  [424] = {.lex_state = 411},
  [425] = {.lex_state = 411},
  [426] = {.lex_state = 390},
  [427] = {.lex_state = 411},
  [428] = {.lex_state = 239},
  [429] = {.lex_state = 239},
  [430] = {.lex_state = 239},
  [431] = {.lex_state = 411},
  [432] = {.lex_state = 411},
  [433] = {.lex_state = 239},
  [434] = {.lex_state = 411},
  [435] = {.lex_state = 411},
  [436] = {.lex_state = 239},
  [437] = {.lex_state = 239},
  [438] = {.lex_state = 411},
  [439] = {.lex_state = 411},
  [440] = {.lex_state = 239},
  [441] = {.lex_state = 411},
  [442] = {.lex_state = 411},
  [443] = {.lex_state = 411},
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
    [sym_compilation_unit] = STATE(13),
    [sym__type_declaration] = STATE(14),
    [sym_extern_alias_directive] = STATE(15),
    [sym_using_directive] = STATE(16),
    [sym_namespace_declaration] = STATE(14),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [sym__global_attributes] = STATE(26),
    [aux_sym_compilation_unit_repeat1] = STATE(27),
    [aux_sym_compilation_unit_repeat2] = STATE(28),
    [aux_sym_compilation_unit_repeat3] = STATE(29),
    [aux_sym_compilation_unit_repeat4] = STATE(30),
    [aux_sym__attributes_repeat1] = STATE(31),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [2] = {
    [anon_sym_alias] = ACTIONS(36),
    [sym_comment] = ACTIONS(34),
  },
  [3] = {
    [sym_qualified_name] = STATE(36),
    [sym_alias_qualified_name] = STATE(37),
    [sym_name_equals] = STATE(38),
    [sym_static] = STATE(38),
    [anon_sym_static] = ACTIONS(38),
    [sym_global] = ACTIONS(40),
    [sym_identifier_name] = ACTIONS(42),
    [sym_comment] = ACTIONS(34),
  },
  [4] = {
    [sym_qualified_name] = STATE(39),
    [sym_alias_qualified_name] = STATE(37),
    [sym_global] = ACTIONS(40),
    [sym_identifier_name] = ACTIONS(44),
    [sym_comment] = ACTIONS(34),
  },
  [5] = {
    [sym_identifier_name] = ACTIONS(46),
    [sym_comment] = ACTIONS(34),
  },
  [6] = {
    [sym__class_modifiers] = STATE(42),
    [sym__struct_modifiers] = STATE(43),
    [anon_sym_class] = ACTIONS(48),
    [anon_sym_unsafe] = ACTIONS(50),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(50),
    [anon_sym_public] = ACTIONS(50),
    [anon_sym_protected] = ACTIONS(50),
    [anon_sym_internal] = ACTIONS(50),
    [anon_sym_private] = ACTIONS(50),
    [anon_sym_struct] = ACTIONS(52),
    [anon_sym_delegate] = ACTIONS(54),
    [sym_comment] = ACTIONS(34),
  },
  [7] = {
    [sym__class_modifiers] = STATE(42),
    [anon_sym_class] = ACTIONS(48),
    [anon_sym_unsafe] = ACTIONS(22),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(22),
    [anon_sym_public] = ACTIONS(22),
    [anon_sym_protected] = ACTIONS(22),
    [anon_sym_internal] = ACTIONS(22),
    [anon_sym_private] = ACTIONS(22),
    [sym_comment] = ACTIONS(34),
  },
  [8] = {
    [sym__class_modifiers] = STATE(42),
    [sym__struct_modifiers] = STATE(43),
    [anon_sym_class] = ACTIONS(48),
    [anon_sym_unsafe] = ACTIONS(50),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(50),
    [anon_sym_public] = ACTIONS(50),
    [anon_sym_protected] = ACTIONS(50),
    [anon_sym_internal] = ACTIONS(50),
    [anon_sym_private] = ACTIONS(50),
    [anon_sym_struct] = ACTIONS(52),
    [anon_sym_enum] = ACTIONS(56),
    [anon_sym_delegate] = ACTIONS(54),
    [sym_comment] = ACTIONS(34),
  },
  [9] = {
    [sym_identifier_name] = ACTIONS(58),
    [sym_comment] = ACTIONS(34),
  },
  [10] = {
    [sym_identifier_name] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym__return_type] = STATE(49),
    [sym__type] = STATE(47),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [sym_void_keyword] = ACTIONS(64),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [sym_attribute_list] = STATE(53),
    [sym_attribute] = STATE(54),
    [anon_sym_assembly] = ACTIONS(68),
    [anon_sym_module] = ACTIONS(68),
    [sym_identifier_name] = ACTIONS(70),
    [sym_comment] = ACTIONS(34),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_namespace] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_class] = ACTIONS(74),
    [anon_sym_unsafe] = ACTIONS(74),
    [anon_sym_abstract] = ACTIONS(74),
    [anon_sym_sealed] = ACTIONS(74),
    [anon_sym_static] = ACTIONS(74),
    [anon_sym_new] = ACTIONS(74),
    [anon_sym_public] = ACTIONS(74),
    [anon_sym_protected] = ACTIONS(74),
    [anon_sym_internal] = ACTIONS(74),
    [anon_sym_private] = ACTIONS(74),
    [anon_sym_struct] = ACTIONS(74),
    [anon_sym_enum] = ACTIONS(74),
    [anon_sym_delegate] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [sym_comment] = ACTIONS(34),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_extern] = ACTIONS(76),
    [anon_sym_using] = ACTIONS(76),
    [anon_sym_namespace] = ACTIONS(76),
    [anon_sym_class] = ACTIONS(76),
    [anon_sym_unsafe] = ACTIONS(76),
    [anon_sym_abstract] = ACTIONS(76),
    [anon_sym_sealed] = ACTIONS(76),
    [anon_sym_static] = ACTIONS(76),
    [anon_sym_new] = ACTIONS(76),
    [anon_sym_public] = ACTIONS(76),
    [anon_sym_protected] = ACTIONS(76),
    [anon_sym_internal] = ACTIONS(76),
    [anon_sym_private] = ACTIONS(76),
    [anon_sym_struct] = ACTIONS(76),
    [anon_sym_enum] = ACTIONS(76),
    [anon_sym_delegate] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_using] = ACTIONS(78),
    [anon_sym_namespace] = ACTIONS(78),
    [anon_sym_class] = ACTIONS(78),
    [anon_sym_unsafe] = ACTIONS(78),
    [anon_sym_abstract] = ACTIONS(78),
    [anon_sym_sealed] = ACTIONS(78),
    [anon_sym_static] = ACTIONS(78),
    [anon_sym_new] = ACTIONS(78),
    [anon_sym_public] = ACTIONS(78),
    [anon_sym_protected] = ACTIONS(78),
    [anon_sym_internal] = ACTIONS(78),
    [anon_sym_private] = ACTIONS(78),
    [anon_sym_struct] = ACTIONS(78),
    [anon_sym_enum] = ACTIONS(78),
    [anon_sym_delegate] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_namespace] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_class] = ACTIONS(80),
    [anon_sym_unsafe] = ACTIONS(80),
    [anon_sym_abstract] = ACTIONS(80),
    [anon_sym_sealed] = ACTIONS(80),
    [anon_sym_static] = ACTIONS(80),
    [anon_sym_new] = ACTIONS(80),
    [anon_sym_public] = ACTIONS(80),
    [anon_sym_protected] = ACTIONS(80),
    [anon_sym_internal] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(80),
    [anon_sym_struct] = ACTIONS(80),
    [anon_sym_enum] = ACTIONS(80),
    [anon_sym_delegate] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [sym_comment] = ACTIONS(34),
  },
  [18] = {
    [anon_sym_class] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [19] = {
    [anon_sym_class] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [20] = {
    [anon_sym_struct] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [21] = {
    [anon_sym_struct] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
  },
  [22] = {
    [anon_sym_enum] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
  },
  [23] = {
    [anon_sym_delegate] = ACTIONS(92),
    [sym_comment] = ACTIONS(34),
  },
  [24] = {
    [sym_class_modifiers] = STATE(59),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_modifiers] = STATE(60),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_modifier] = STATE(61),
    [sym_delegate_modifier] = STATE(62),
    [anon_sym_class] = ACTIONS(82),
    [anon_sym_unsafe] = ACTIONS(20),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(24),
    [anon_sym_public] = ACTIONS(24),
    [anon_sym_protected] = ACTIONS(24),
    [anon_sym_internal] = ACTIONS(24),
    [anon_sym_private] = ACTIONS(24),
    [anon_sym_struct] = ACTIONS(86),
    [anon_sym_enum] = ACTIONS(90),
    [anon_sym_delegate] = ACTIONS(92),
    [sym_comment] = ACTIONS(34),
  },
  [25] = {
    [anon_sym_class] = ACTIONS(94),
    [anon_sym_unsafe] = ACTIONS(94),
    [anon_sym_abstract] = ACTIONS(94),
    [anon_sym_sealed] = ACTIONS(94),
    [anon_sym_static] = ACTIONS(94),
    [anon_sym_new] = ACTIONS(94),
    [anon_sym_public] = ACTIONS(94),
    [anon_sym_protected] = ACTIONS(94),
    [anon_sym_internal] = ACTIONS(94),
    [anon_sym_private] = ACTIONS(94),
    [anon_sym_struct] = ACTIONS(94),
    [anon_sym_enum] = ACTIONS(94),
    [anon_sym_sbyte] = ACTIONS(94),
    [anon_sym_byte] = ACTIONS(94),
    [anon_sym_short] = ACTIONS(94),
    [anon_sym_ushort] = ACTIONS(94),
    [anon_sym_int] = ACTIONS(94),
    [anon_sym_uint] = ACTIONS(94),
    [anon_sym_long] = ACTIONS(94),
    [anon_sym_ulong] = ACTIONS(94),
    [anon_sym_char] = ACTIONS(94),
    [anon_sym_delegate] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(96),
    [sym_const_keyword] = ACTIONS(94),
    [anon_sym_readonly] = ACTIONS(94),
    [anon_sym_volatile] = ACTIONS(94),
    [anon_sym_bool] = ACTIONS(94),
    [anon_sym_decimal] = ACTIONS(94),
    [anon_sym_double] = ACTIONS(94),
    [anon_sym_float] = ACTIONS(94),
    [anon_sym_object] = ACTIONS(94),
    [anon_sym_string] = ACTIONS(94),
    [sym_identifier_name] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_namespace] = ACTIONS(100),
    [anon_sym_class] = ACTIONS(100),
    [anon_sym_unsafe] = ACTIONS(100),
    [anon_sym_abstract] = ACTIONS(100),
    [anon_sym_sealed] = ACTIONS(100),
    [anon_sym_static] = ACTIONS(100),
    [anon_sym_new] = ACTIONS(100),
    [anon_sym_public] = ACTIONS(100),
    [anon_sym_protected] = ACTIONS(100),
    [anon_sym_internal] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_struct] = ACTIONS(100),
    [anon_sym_enum] = ACTIONS(100),
    [anon_sym_delegate] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [sym__type_declaration] = STATE(14),
    [sym_extern_alias_directive] = STATE(63),
    [sym_using_directive] = STATE(16),
    [sym_namespace_declaration] = STATE(14),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [sym__global_attributes] = STATE(26),
    [aux_sym_compilation_unit_repeat2] = STATE(64),
    [aux_sym_compilation_unit_repeat3] = STATE(65),
    [aux_sym_compilation_unit_repeat4] = STATE(66),
    [aux_sym__attributes_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(102),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [28] = {
    [sym__type_declaration] = STATE(14),
    [sym_using_directive] = STATE(67),
    [sym_namespace_declaration] = STATE(14),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [sym__global_attributes] = STATE(26),
    [aux_sym_compilation_unit_repeat3] = STATE(65),
    [aux_sym_compilation_unit_repeat4] = STATE(66),
    [aux_sym__attributes_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(102),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [29] = {
    [sym__type_declaration] = STATE(14),
    [sym_namespace_declaration] = STATE(14),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [sym__global_attributes] = STATE(68),
    [aux_sym_compilation_unit_repeat4] = STATE(66),
    [aux_sym__attributes_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(102),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [30] = {
    [sym__type_declaration] = STATE(70),
    [sym_namespace_declaration] = STATE(70),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [aux_sym__attributes_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(102),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
  },
  [31] = {
    [sym__attribute_section] = STATE(71),
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
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(106),
    [anon_sym_readonly] = ACTIONS(106),
    [anon_sym_volatile] = ACTIONS(106),
    [anon_sym_bool] = ACTIONS(106),
    [anon_sym_decimal] = ACTIONS(106),
    [anon_sym_double] = ACTIONS(106),
    [anon_sym_float] = ACTIONS(106),
    [anon_sym_object] = ACTIONS(106),
    [anon_sym_string] = ACTIONS(106),
    [sym_identifier_name] = ACTIONS(108),
    [sym_comment] = ACTIONS(34),
  },
  [32] = {
    [sym_identifier_name] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [33] = {
    [sym_global] = ACTIONS(112),
    [sym_identifier_name] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [34] = {
    [anon_sym_COLON_COLON] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [35] = {
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
  },
  [36] = {
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
  },
  [37] = {
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
  },
  [38] = {
    [sym_qualified_name] = STATE(77),
    [sym_alias_qualified_name] = STATE(37),
    [sym_global] = ACTIONS(40),
    [sym_identifier_name] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [39] = {
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
  },
  [40] = {
    [sym_type_parameter_list] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [41] = {
    [sym__class_modifiers] = STATE(42),
    [sym__struct_modifiers] = STATE(43),
    [anon_sym_class] = ACTIONS(48),
    [anon_sym_unsafe] = ACTIONS(50),
    [anon_sym_abstract] = ACTIONS(22),
    [anon_sym_sealed] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_new] = ACTIONS(50),
    [anon_sym_public] = ACTIONS(50),
    [anon_sym_protected] = ACTIONS(50),
    [anon_sym_internal] = ACTIONS(50),
    [anon_sym_private] = ACTIONS(50),
    [anon_sym_struct] = ACTIONS(52),
    [sym_comment] = ACTIONS(34),
  },
  [42] = {
    [anon_sym_class] = ACTIONS(132),
    [sym_comment] = ACTIONS(34),
  },
  [43] = {
    [anon_sym_struct] = ACTIONS(134),
    [sym_comment] = ACTIONS(34),
  },
  [44] = {
    [sym_type_parameter_list] = STATE(83),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [45] = {
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [46] = {
    [anon_sym_COMMA] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(142),
    [sym_identifier_name] = ACTIONS(144),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [sym_identifier_name] = ACTIONS(146),
    [sym_comment] = ACTIONS(34),
  },
  [48] = {
    [sym_type_parameter_list] = STATE(86),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(148),
    [sym_identifier_name] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [49] = {
    [sym_identifier_name] = ACTIONS(152),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(148),
    [sym_identifier_name] = ACTIONS(150),
    [sym_comment] = ACTIONS(34),
  },
  [51] = {
    [anon_sym_COLON] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [52] = {
    [sym_attribute_argument_list] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [53] = {
    [anon_sym_RBRACK] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [54] = {
    [aux_sym_attribute_list_repeat1] = STATE(93),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [55] = {
    [sym_identifier_name] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
  },
  [56] = {
    [sym_identifier_name] = ACTIONS(168),
    [sym_comment] = ACTIONS(34),
  },
  [57] = {
    [sym_identifier_name] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
  },
  [58] = {
    [sym__return_type] = STATE(97),
    [sym__type] = STATE(47),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [sym_void_keyword] = ACTIONS(64),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [59] = {
    [anon_sym_class] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [60] = {
    [anon_sym_struct] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [61] = {
    [anon_sym_enum] = ACTIONS(176),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [anon_sym_delegate] = ACTIONS(178),
    [sym_comment] = ACTIONS(34),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_extern] = ACTIONS(180),
    [anon_sym_using] = ACTIONS(180),
    [anon_sym_namespace] = ACTIONS(180),
    [anon_sym_class] = ACTIONS(180),
    [anon_sym_unsafe] = ACTIONS(180),
    [anon_sym_abstract] = ACTIONS(180),
    [anon_sym_sealed] = ACTIONS(180),
    [anon_sym_static] = ACTIONS(180),
    [anon_sym_new] = ACTIONS(180),
    [anon_sym_public] = ACTIONS(180),
    [anon_sym_protected] = ACTIONS(180),
    [anon_sym_internal] = ACTIONS(180),
    [anon_sym_private] = ACTIONS(180),
    [anon_sym_struct] = ACTIONS(180),
    [anon_sym_enum] = ACTIONS(180),
    [anon_sym_delegate] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(180),
    [sym_comment] = ACTIONS(34),
  },
  [64] = {
    [sym__type_declaration] = STATE(14),
    [sym_using_directive] = STATE(67),
    [sym_namespace_declaration] = STATE(14),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [sym__global_attributes] = STATE(26),
    [aux_sym_compilation_unit_repeat3] = STATE(102),
    [aux_sym_compilation_unit_repeat4] = STATE(103),
    [aux_sym__attributes_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(182),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [65] = {
    [sym__type_declaration] = STATE(14),
    [sym_namespace_declaration] = STATE(14),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [sym__global_attributes] = STATE(68),
    [aux_sym_compilation_unit_repeat4] = STATE(103),
    [aux_sym__attributes_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(182),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [66] = {
    [sym__type_declaration] = STATE(70),
    [sym_namespace_declaration] = STATE(70),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [aux_sym__attributes_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(182),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_using] = ACTIONS(184),
    [anon_sym_namespace] = ACTIONS(184),
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
    [anon_sym_struct] = ACTIONS(184),
    [anon_sym_enum] = ACTIONS(184),
    [anon_sym_delegate] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_namespace] = ACTIONS(186),
    [anon_sym_class] = ACTIONS(186),
    [anon_sym_unsafe] = ACTIONS(186),
    [anon_sym_abstract] = ACTIONS(186),
    [anon_sym_sealed] = ACTIONS(186),
    [anon_sym_static] = ACTIONS(186),
    [anon_sym_new] = ACTIONS(186),
    [anon_sym_public] = ACTIONS(186),
    [anon_sym_protected] = ACTIONS(186),
    [anon_sym_internal] = ACTIONS(186),
    [anon_sym_private] = ACTIONS(186),
    [anon_sym_struct] = ACTIONS(186),
    [anon_sym_enum] = ACTIONS(186),
    [anon_sym_delegate] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
  },
  [69] = {
    [sym_attribute_list] = STATE(53),
    [sym_attribute] = STATE(54),
    [sym_identifier_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_namespace] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_class] = ACTIONS(190),
    [anon_sym_unsafe] = ACTIONS(190),
    [anon_sym_abstract] = ACTIONS(190),
    [anon_sym_sealed] = ACTIONS(190),
    [anon_sym_static] = ACTIONS(190),
    [anon_sym_new] = ACTIONS(190),
    [anon_sym_public] = ACTIONS(190),
    [anon_sym_protected] = ACTIONS(190),
    [anon_sym_internal] = ACTIONS(190),
    [anon_sym_private] = ACTIONS(190),
    [anon_sym_struct] = ACTIONS(190),
    [anon_sym_enum] = ACTIONS(190),
    [anon_sym_delegate] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [sym_comment] = ACTIONS(34),
  },
  [71] = {
    [anon_sym_class] = ACTIONS(192),
    [anon_sym_unsafe] = ACTIONS(192),
    [anon_sym_abstract] = ACTIONS(192),
    [anon_sym_sealed] = ACTIONS(192),
    [anon_sym_static] = ACTIONS(192),
    [anon_sym_new] = ACTIONS(192),
    [anon_sym_public] = ACTIONS(192),
    [anon_sym_protected] = ACTIONS(192),
    [anon_sym_internal] = ACTIONS(192),
    [anon_sym_private] = ACTIONS(192),
    [anon_sym_struct] = ACTIONS(192),
    [anon_sym_enum] = ACTIONS(192),
    [anon_sym_sbyte] = ACTIONS(192),
    [anon_sym_byte] = ACTIONS(192),
    [anon_sym_short] = ACTIONS(192),
    [anon_sym_ushort] = ACTIONS(192),
    [anon_sym_int] = ACTIONS(192),
    [anon_sym_uint] = ACTIONS(192),
    [anon_sym_long] = ACTIONS(192),
    [anon_sym_ulong] = ACTIONS(192),
    [anon_sym_char] = ACTIONS(192),
    [anon_sym_delegate] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [sym_const_keyword] = ACTIONS(192),
    [anon_sym_readonly] = ACTIONS(192),
    [anon_sym_volatile] = ACTIONS(192),
    [anon_sym_bool] = ACTIONS(192),
    [anon_sym_decimal] = ACTIONS(192),
    [anon_sym_double] = ACTIONS(192),
    [anon_sym_float] = ACTIONS(192),
    [anon_sym_object] = ACTIONS(192),
    [anon_sym_string] = ACTIONS(192),
    [sym_identifier_name] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(198),
    [sym_comment] = ACTIONS(34),
  },
  [73] = {
    [sym_identifier_name] = ACTIONS(200),
    [sym_comment] = ACTIONS(34),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [anon_sym_using] = ACTIONS(202),
    [anon_sym_namespace] = ACTIONS(202),
    [anon_sym_class] = ACTIONS(202),
    [anon_sym_unsafe] = ACTIONS(202),
    [anon_sym_abstract] = ACTIONS(202),
    [anon_sym_sealed] = ACTIONS(202),
    [anon_sym_static] = ACTIONS(202),
    [anon_sym_new] = ACTIONS(202),
    [anon_sym_public] = ACTIONS(202),
    [anon_sym_protected] = ACTIONS(202),
    [anon_sym_internal] = ACTIONS(202),
    [anon_sym_private] = ACTIONS(202),
    [anon_sym_struct] = ACTIONS(202),
    [anon_sym_enum] = ACTIONS(202),
    [anon_sym_delegate] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
  },
  [75] = {
    [sym_global] = ACTIONS(204),
    [sym_identifier_name] = ACTIONS(206),
    [sym_comment] = ACTIONS(34),
  },
  [76] = {
    [sym_identifier_name] = ACTIONS(208),
    [sym_comment] = ACTIONS(34),
  },
  [77] = {
    [anon_sym_SEMI] = ACTIONS(210),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [sym__type_declaration] = STATE(14),
    [sym_namespace_declaration] = STATE(14),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [aux_sym_compilation_unit_repeat4] = STATE(109),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(212),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
  },
  [79] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(131),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [sym__type] = STATE(132),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [sym_type_parameter] = STATE(133),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [81] = {
    [anon_sym_LBRACE] = ACTIONS(236),
    [sym_comment] = ACTIONS(34),
  },
  [82] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(136),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [83] = {
    [anon_sym_LBRACE] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [84] = {
    [sym_enum_member_declaration] = STATE(140),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [85] = {
    [sym__integral_type] = STATE(145),
    [anon_sym_sbyte] = ACTIONS(246),
    [anon_sym_byte] = ACTIONS(246),
    [anon_sym_short] = ACTIONS(246),
    [anon_sym_ushort] = ACTIONS(246),
    [anon_sym_int] = ACTIONS(246),
    [anon_sym_uint] = ACTIONS(246),
    [anon_sym_long] = ACTIONS(246),
    [anon_sym_ulong] = ACTIONS(246),
    [anon_sym_char] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [sym_identifier_name] = ACTIONS(250),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
    [sym_parameter_list] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [sym_attribute_list] = STATE(148),
    [sym_attribute] = STATE(54),
    [sym_identifier_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_RBRACK] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [91] = {
    [anon_sym_class] = ACTIONS(258),
    [anon_sym_unsafe] = ACTIONS(258),
    [anon_sym_abstract] = ACTIONS(258),
    [anon_sym_sealed] = ACTIONS(258),
    [anon_sym_static] = ACTIONS(258),
    [anon_sym_new] = ACTIONS(258),
    [anon_sym_public] = ACTIONS(258),
    [anon_sym_protected] = ACTIONS(258),
    [anon_sym_internal] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(258),
    [anon_sym_struct] = ACTIONS(258),
    [anon_sym_enum] = ACTIONS(258),
    [anon_sym_sbyte] = ACTIONS(258),
    [anon_sym_byte] = ACTIONS(258),
    [anon_sym_short] = ACTIONS(258),
    [anon_sym_ushort] = ACTIONS(258),
    [anon_sym_int] = ACTIONS(258),
    [anon_sym_uint] = ACTIONS(258),
    [anon_sym_long] = ACTIONS(258),
    [anon_sym_ulong] = ACTIONS(258),
    [anon_sym_char] = ACTIONS(258),
    [anon_sym_delegate] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(260),
    [sym_const_keyword] = ACTIONS(258),
    [anon_sym_readonly] = ACTIONS(258),
    [anon_sym_volatile] = ACTIONS(258),
    [anon_sym_bool] = ACTIONS(258),
    [anon_sym_decimal] = ACTIONS(258),
    [anon_sym_double] = ACTIONS(258),
    [anon_sym_float] = ACTIONS(258),
    [anon_sym_object] = ACTIONS(258),
    [anon_sym_string] = ACTIONS(258),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
  },
  [92] = {
    [sym_attribute] = STATE(150),
    [sym_identifier_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(266),
    [sym_comment] = ACTIONS(34),
  },
  [94] = {
    [sym_type_parameter_list] = STATE(152),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
    [sym_type_parameter_list] = STATE(153),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_COLON] = ACTIONS(270),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [sym_identifier_name] = ACTIONS(272),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [sym_identifier_name] = ACTIONS(274),
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [sym_identifier_name] = ACTIONS(276),
    [sym_comment] = ACTIONS(34),
  },
  [100] = {
    [sym_identifier_name] = ACTIONS(278),
    [sym_comment] = ACTIONS(34),
  },
  [101] = {
    [sym__return_type] = STATE(160),
    [sym__type] = STATE(47),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [sym_void_keyword] = ACTIONS(64),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [102] = {
    [sym__type_declaration] = STATE(14),
    [sym_namespace_declaration] = STATE(14),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [sym__global_attributes] = STATE(68),
    [aux_sym_compilation_unit_repeat4] = STATE(161),
    [aux_sym__attributes_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(280),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [103] = {
    [sym__type_declaration] = STATE(70),
    [sym_namespace_declaration] = STATE(70),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [aux_sym__attributes_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(280),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_extern] = ACTIONS(282),
    [anon_sym_using] = ACTIONS(282),
    [anon_sym_namespace] = ACTIONS(282),
    [anon_sym_class] = ACTIONS(282),
    [anon_sym_unsafe] = ACTIONS(282),
    [anon_sym_abstract] = ACTIONS(282),
    [anon_sym_sealed] = ACTIONS(282),
    [anon_sym_static] = ACTIONS(282),
    [anon_sym_new] = ACTIONS(282),
    [anon_sym_public] = ACTIONS(282),
    [anon_sym_protected] = ACTIONS(282),
    [anon_sym_internal] = ACTIONS(282),
    [anon_sym_private] = ACTIONS(282),
    [anon_sym_struct] = ACTIONS(282),
    [anon_sym_enum] = ACTIONS(282),
    [anon_sym_delegate] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(282),
    [sym_comment] = ACTIONS(34),
  },
  [105] = {
    [anon_sym_DOT] = ACTIONS(284),
    [sym_comment] = ACTIONS(34),
  },
  [106] = {
    [anon_sym_SEMI] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_DOT] = ACTIONS(286),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_using] = ACTIONS(288),
    [anon_sym_namespace] = ACTIONS(288),
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
    [anon_sym_struct] = ACTIONS(288),
    [anon_sym_enum] = ACTIONS(288),
    [anon_sym_delegate] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_namespace] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_class] = ACTIONS(290),
    [anon_sym_unsafe] = ACTIONS(290),
    [anon_sym_abstract] = ACTIONS(290),
    [anon_sym_sealed] = ACTIONS(290),
    [anon_sym_static] = ACTIONS(290),
    [anon_sym_new] = ACTIONS(290),
    [anon_sym_public] = ACTIONS(290),
    [anon_sym_protected] = ACTIONS(290),
    [anon_sym_internal] = ACTIONS(290),
    [anon_sym_private] = ACTIONS(290),
    [anon_sym_struct] = ACTIONS(290),
    [anon_sym_enum] = ACTIONS(290),
    [anon_sym_delegate] = ACTIONS(290),
    [anon_sym_LBRACK] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [109] = {
    [sym__type_declaration] = STATE(70),
    [sym_namespace_declaration] = STATE(70),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_namespace] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(292),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [anon_sym_namespace] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_class] = ACTIONS(294),
    [anon_sym_unsafe] = ACTIONS(294),
    [anon_sym_abstract] = ACTIONS(294),
    [anon_sym_sealed] = ACTIONS(294),
    [anon_sym_static] = ACTIONS(294),
    [anon_sym_new] = ACTIONS(294),
    [anon_sym_public] = ACTIONS(294),
    [anon_sym_protected] = ACTIONS(294),
    [anon_sym_internal] = ACTIONS(294),
    [anon_sym_private] = ACTIONS(294),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(294),
    [anon_sym_delegate] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(294),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [sym_identifier_name] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [sym__class_modifiers] = STATE(42),
    [sym__struct_modifiers] = STATE(43),
    [sym__field_modifiers] = STATE(165),
    [anon_sym_class] = ACTIONS(298),
    [anon_sym_unsafe] = ACTIONS(300),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(300),
    [anon_sym_public] = ACTIONS(300),
    [anon_sym_protected] = ACTIONS(300),
    [anon_sym_internal] = ACTIONS(300),
    [anon_sym_private] = ACTIONS(300),
    [anon_sym_struct] = ACTIONS(302),
    [anon_sym_sbyte] = ACTIONS(304),
    [anon_sym_byte] = ACTIONS(304),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_ushort] = ACTIONS(304),
    [anon_sym_int] = ACTIONS(304),
    [anon_sym_uint] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(304),
    [anon_sym_ulong] = ACTIONS(304),
    [anon_sym_char] = ACTIONS(304),
    [anon_sym_delegate] = ACTIONS(306),
    [sym_const_keyword] = ACTIONS(304),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(304),
    [anon_sym_decimal] = ACTIONS(304),
    [anon_sym_double] = ACTIONS(304),
    [anon_sym_float] = ACTIONS(304),
    [anon_sym_object] = ACTIONS(304),
    [anon_sym_string] = ACTIONS(304),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [sym__class_modifiers] = STATE(42),
    [sym__field_modifiers] = STATE(165),
    [anon_sym_class] = ACTIONS(298),
    [anon_sym_unsafe] = ACTIONS(222),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(222),
    [anon_sym_public] = ACTIONS(222),
    [anon_sym_protected] = ACTIONS(222),
    [anon_sym_internal] = ACTIONS(222),
    [anon_sym_private] = ACTIONS(222),
    [anon_sym_sbyte] = ACTIONS(304),
    [anon_sym_byte] = ACTIONS(304),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_ushort] = ACTIONS(304),
    [anon_sym_int] = ACTIONS(304),
    [anon_sym_uint] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(304),
    [anon_sym_ulong] = ACTIONS(304),
    [anon_sym_char] = ACTIONS(304),
    [sym_const_keyword] = ACTIONS(304),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(304),
    [anon_sym_decimal] = ACTIONS(304),
    [anon_sym_double] = ACTIONS(304),
    [anon_sym_float] = ACTIONS(304),
    [anon_sym_object] = ACTIONS(304),
    [anon_sym_string] = ACTIONS(304),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [sym__class_modifiers] = STATE(42),
    [sym__struct_modifiers] = STATE(43),
    [sym__field_modifiers] = STATE(165),
    [anon_sym_class] = ACTIONS(298),
    [anon_sym_unsafe] = ACTIONS(300),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(300),
    [anon_sym_public] = ACTIONS(300),
    [anon_sym_protected] = ACTIONS(300),
    [anon_sym_internal] = ACTIONS(300),
    [anon_sym_private] = ACTIONS(300),
    [anon_sym_struct] = ACTIONS(302),
    [anon_sym_enum] = ACTIONS(310),
    [anon_sym_sbyte] = ACTIONS(304),
    [anon_sym_byte] = ACTIONS(304),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_ushort] = ACTIONS(304),
    [anon_sym_int] = ACTIONS(304),
    [anon_sym_uint] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(304),
    [anon_sym_ulong] = ACTIONS(304),
    [anon_sym_char] = ACTIONS(304),
    [anon_sym_delegate] = ACTIONS(306),
    [sym_const_keyword] = ACTIONS(304),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(304),
    [anon_sym_decimal] = ACTIONS(304),
    [anon_sym_double] = ACTIONS(304),
    [anon_sym_float] = ACTIONS(304),
    [anon_sym_object] = ACTIONS(304),
    [anon_sym_string] = ACTIONS(304),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [sym_identifier_name] = ACTIONS(312),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [sym_identifier_name] = ACTIONS(314),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [sym__return_type] = STATE(168),
    [sym__type] = STATE(47),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [sym_void_keyword] = ACTIONS(64),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [sym_variable_declaration] = STATE(169),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [sym__field_modifiers] = STATE(165),
    [anon_sym_unsafe] = ACTIONS(234),
    [anon_sym_static] = ACTIONS(234),
    [anon_sym_new] = ACTIONS(234),
    [anon_sym_public] = ACTIONS(234),
    [anon_sym_protected] = ACTIONS(234),
    [anon_sym_internal] = ACTIONS(234),
    [anon_sym_private] = ACTIONS(234),
    [anon_sym_sbyte] = ACTIONS(304),
    [anon_sym_byte] = ACTIONS(304),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_ushort] = ACTIONS(304),
    [anon_sym_int] = ACTIONS(304),
    [anon_sym_uint] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(304),
    [anon_sym_ulong] = ACTIONS(304),
    [anon_sym_char] = ACTIONS(304),
    [sym_const_keyword] = ACTIONS(304),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(304),
    [anon_sym_decimal] = ACTIONS(304),
    [anon_sym_double] = ACTIONS(304),
    [anon_sym_float] = ACTIONS(304),
    [anon_sym_object] = ACTIONS(304),
    [anon_sym_string] = ACTIONS(304),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
    [anon_sym_RBRACE] = ACTIONS(316),
    [anon_sym_class] = ACTIONS(318),
    [anon_sym_unsafe] = ACTIONS(318),
    [anon_sym_abstract] = ACTIONS(318),
    [anon_sym_sealed] = ACTIONS(318),
    [anon_sym_static] = ACTIONS(318),
    [anon_sym_new] = ACTIONS(318),
    [anon_sym_public] = ACTIONS(318),
    [anon_sym_protected] = ACTIONS(318),
    [anon_sym_internal] = ACTIONS(318),
    [anon_sym_private] = ACTIONS(318),
    [anon_sym_struct] = ACTIONS(318),
    [anon_sym_enum] = ACTIONS(318),
    [anon_sym_sbyte] = ACTIONS(318),
    [anon_sym_byte] = ACTIONS(318),
    [anon_sym_short] = ACTIONS(318),
    [anon_sym_ushort] = ACTIONS(318),
    [anon_sym_int] = ACTIONS(318),
    [anon_sym_uint] = ACTIONS(318),
    [anon_sym_long] = ACTIONS(318),
    [anon_sym_ulong] = ACTIONS(318),
    [anon_sym_char] = ACTIONS(318),
    [anon_sym_delegate] = ACTIONS(318),
    [anon_sym_LBRACK] = ACTIONS(316),
    [sym_const_keyword] = ACTIONS(318),
    [anon_sym_readonly] = ACTIONS(318),
    [anon_sym_volatile] = ACTIONS(318),
    [anon_sym_bool] = ACTIONS(318),
    [anon_sym_decimal] = ACTIONS(318),
    [anon_sym_double] = ACTIONS(318),
    [anon_sym_float] = ACTIONS(318),
    [anon_sym_object] = ACTIONS(318),
    [anon_sym_string] = ACTIONS(318),
    [sym_identifier_name] = ACTIONS(320),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [anon_sym_RBRACE] = ACTIONS(80),
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
    [anon_sym_struct] = ACTIONS(322),
    [anon_sym_enum] = ACTIONS(322),
    [anon_sym_sbyte] = ACTIONS(322),
    [anon_sym_byte] = ACTIONS(322),
    [anon_sym_short] = ACTIONS(322),
    [anon_sym_ushort] = ACTIONS(322),
    [anon_sym_int] = ACTIONS(322),
    [anon_sym_uint] = ACTIONS(322),
    [anon_sym_long] = ACTIONS(322),
    [anon_sym_ulong] = ACTIONS(322),
    [anon_sym_char] = ACTIONS(322),
    [anon_sym_delegate] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(80),
    [sym_const_keyword] = ACTIONS(322),
    [anon_sym_readonly] = ACTIONS(322),
    [anon_sym_volatile] = ACTIONS(322),
    [anon_sym_bool] = ACTIONS(322),
    [anon_sym_decimal] = ACTIONS(322),
    [anon_sym_double] = ACTIONS(322),
    [anon_sym_float] = ACTIONS(322),
    [anon_sym_object] = ACTIONS(322),
    [anon_sym_string] = ACTIONS(322),
    [sym_identifier_name] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
  },
  [122] = {
    [anon_sym_class] = ACTIONS(326),
    [sym_comment] = ACTIONS(34),
  },
  [123] = {
    [anon_sym_struct] = ACTIONS(328),
    [sym_comment] = ACTIONS(34),
  },
  [124] = {
    [anon_sym_enum] = ACTIONS(330),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [anon_sym_delegate] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [sym_class_modifiers] = STATE(175),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_modifiers] = STATE(176),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_modifier] = STATE(177),
    [sym_delegate_modifier] = STATE(178),
    [sym_field_modifiers] = STATE(179),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(169),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_class] = ACTIONS(334),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(336),
    [anon_sym_enum] = ACTIONS(338),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(340),
    [sym_const_keyword] = ACTIONS(342),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [127] = {
    [sym_variable_declaration] = STATE(169),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [sym_const_keyword] = ACTIONS(342),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [anon_sym_sbyte] = ACTIONS(344),
    [anon_sym_byte] = ACTIONS(344),
    [anon_sym_short] = ACTIONS(344),
    [anon_sym_ushort] = ACTIONS(344),
    [anon_sym_int] = ACTIONS(344),
    [anon_sym_uint] = ACTIONS(344),
    [anon_sym_long] = ACTIONS(344),
    [anon_sym_ulong] = ACTIONS(344),
    [anon_sym_char] = ACTIONS(344),
    [sym_const_keyword] = ACTIONS(344),
    [anon_sym_bool] = ACTIONS(344),
    [anon_sym_decimal] = ACTIONS(344),
    [anon_sym_double] = ACTIONS(344),
    [anon_sym_float] = ACTIONS(344),
    [anon_sym_object] = ACTIONS(344),
    [anon_sym_string] = ACTIONS(344),
    [sym_identifier_name] = ACTIONS(346),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [anon_sym_SEMI] = ACTIONS(348),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
    [sym_variable_declarator] = STATE(182),
    [sym_identifier_name] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(354),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(187),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(358),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(188),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_namespace] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(360),
    [anon_sym_class] = ACTIONS(360),
    [anon_sym_unsafe] = ACTIONS(360),
    [anon_sym_abstract] = ACTIONS(360),
    [anon_sym_sealed] = ACTIONS(360),
    [anon_sym_static] = ACTIONS(360),
    [anon_sym_new] = ACTIONS(360),
    [anon_sym_public] = ACTIONS(360),
    [anon_sym_protected] = ACTIONS(360),
    [anon_sym_internal] = ACTIONS(360),
    [anon_sym_private] = ACTIONS(360),
    [anon_sym_struct] = ACTIONS(360),
    [anon_sym_enum] = ACTIONS(360),
    [anon_sym_delegate] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(190),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [138] = {
    [sym_attribute_list] = STATE(191),
    [sym_attribute] = STATE(54),
    [sym_identifier_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [139] = {
    [sym_equals_value_clause] = STATE(193),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_EQ] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
  },
  [140] = {
    [aux_sym_enum_declaration_repeat1] = STATE(196),
    [anon_sym_RBRACE] = ACTIONS(368),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [sym_identifier_name] = ACTIONS(372),
    [sym_comment] = ACTIONS(34),
  },
  [142] = {
    [anon_sym_LBRACK] = ACTIONS(96),
    [sym_identifier_name] = ACTIONS(94),
    [sym_comment] = ACTIONS(34),
  },
  [143] = {
    [sym__attribute_section] = STATE(198),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(106),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [anon_sym_LBRACE] = ACTIONS(376),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [sym__formal_parameter_list] = STATE(204),
    [sym_parameter] = STATE(205),
    [sym_parameter_modifier] = STATE(206),
    [sym_parameter_array] = STATE(207),
    [sym__attributes] = STATE(208),
    [sym__attribute_section] = STATE(209),
    [sym__type] = STATE(210),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(211),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_ref] = ACTIONS(380),
    [anon_sym_out] = ACTIONS(380),
    [anon_sym_this] = ACTIONS(380),
    [sym_params_keyword] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [anon_sym_SEMI] = ACTIONS(386),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [anon_sym_RBRACK] = ACTIONS(388),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_RBRACK] = ACTIONS(390),
    [sym_comment] = ACTIONS(34),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RBRACK] = ACTIONS(392),
    [sym_comment] = ACTIONS(34),
  },
  [151] = {
    [sym_attribute] = STATE(214),
    [sym_identifier_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [anon_sym_LBRACE] = ACTIONS(394),
    [sym_comment] = ACTIONS(34),
  },
  [153] = {
    [anon_sym_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(34),
  },
  [154] = {
    [sym_enum_member_declaration] = STATE(217),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [155] = {
    [sym__integral_type] = STATE(218),
    [anon_sym_sbyte] = ACTIONS(246),
    [anon_sym_byte] = ACTIONS(246),
    [anon_sym_short] = ACTIONS(246),
    [anon_sym_ushort] = ACTIONS(246),
    [anon_sym_int] = ACTIONS(246),
    [anon_sym_uint] = ACTIONS(246),
    [anon_sym_long] = ACTIONS(246),
    [anon_sym_ulong] = ACTIONS(246),
    [anon_sym_char] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [156] = {
    [sym_parameter_list] = STATE(219),
    [anon_sym_LPAREN] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [157] = {
    [sym_type_parameter_list] = STATE(220),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [158] = {
    [sym_type_parameter_list] = STATE(221),
    [anon_sym_LBRACE] = ACTIONS(396),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [159] = {
    [anon_sym_LBRACE] = ACTIONS(376),
    [anon_sym_COLON] = ACTIONS(398),
    [sym_comment] = ACTIONS(34),
  },
  [160] = {
    [sym_identifier_name] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [sym__type_declaration] = STATE(70),
    [sym_namespace_declaration] = STATE(70),
    [sym_class_declaration] = STATE(17),
    [sym_class_modifiers] = STATE(18),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(17),
    [sym_struct_modifiers] = STATE(20),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(17),
    [sym_enum_modifier] = STATE(22),
    [sym_delegate_declaration] = STATE(17),
    [sym_delegate_modifier] = STATE(23),
    [sym__attributes] = STATE(24),
    [sym__attribute_section] = STATE(25),
    [aux_sym__attributes_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(402),
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
    [anon_sym_struct] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_delegate] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(404),
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
    [anon_sym_struct] = ACTIONS(404),
    [anon_sym_enum] = ACTIONS(404),
    [anon_sym_delegate] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [sym_type_parameter_list] = STATE(225),
    [anon_sym_LBRACE] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [sym__class_modifiers] = STATE(42),
    [sym__struct_modifiers] = STATE(43),
    [sym__field_modifiers] = STATE(165),
    [anon_sym_class] = ACTIONS(298),
    [anon_sym_unsafe] = ACTIONS(300),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(300),
    [anon_sym_public] = ACTIONS(300),
    [anon_sym_protected] = ACTIONS(300),
    [anon_sym_internal] = ACTIONS(300),
    [anon_sym_private] = ACTIONS(300),
    [anon_sym_struct] = ACTIONS(302),
    [anon_sym_sbyte] = ACTIONS(304),
    [anon_sym_byte] = ACTIONS(304),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_ushort] = ACTIONS(304),
    [anon_sym_int] = ACTIONS(304),
    [anon_sym_uint] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(304),
    [anon_sym_ulong] = ACTIONS(304),
    [anon_sym_char] = ACTIONS(304),
    [sym_const_keyword] = ACTIONS(304),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(304),
    [anon_sym_decimal] = ACTIONS(304),
    [anon_sym_double] = ACTIONS(304),
    [anon_sym_float] = ACTIONS(304),
    [anon_sym_object] = ACTIONS(304),
    [anon_sym_string] = ACTIONS(304),
    [sym_identifier_name] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [165] = {
    [anon_sym_sbyte] = ACTIONS(408),
    [anon_sym_byte] = ACTIONS(408),
    [anon_sym_short] = ACTIONS(408),
    [anon_sym_ushort] = ACTIONS(408),
    [anon_sym_int] = ACTIONS(408),
    [anon_sym_uint] = ACTIONS(408),
    [anon_sym_long] = ACTIONS(408),
    [anon_sym_ulong] = ACTIONS(408),
    [anon_sym_char] = ACTIONS(408),
    [sym_const_keyword] = ACTIONS(408),
    [anon_sym_bool] = ACTIONS(408),
    [anon_sym_decimal] = ACTIONS(408),
    [anon_sym_double] = ACTIONS(408),
    [anon_sym_float] = ACTIONS(408),
    [anon_sym_object] = ACTIONS(408),
    [anon_sym_string] = ACTIONS(408),
    [sym_identifier_name] = ACTIONS(410),
    [sym_comment] = ACTIONS(34),
  },
  [166] = {
    [sym_type_parameter_list] = STATE(227),
    [anon_sym_LBRACE] = ACTIONS(412),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [167] = {
    [anon_sym_LBRACE] = ACTIONS(414),
    [anon_sym_COLON] = ACTIONS(416),
    [sym_comment] = ACTIONS(34),
  },
  [168] = {
    [sym_identifier_name] = ACTIONS(418),
    [sym_comment] = ACTIONS(34),
  },
  [169] = {
    [anon_sym_SEMI] = ACTIONS(420),
    [sym_comment] = ACTIONS(34),
  },
  [170] = {
    [sym_identifier_name] = ACTIONS(422),
    [sym_comment] = ACTIONS(34),
  },
  [171] = {
    [sym_identifier_name] = ACTIONS(424),
    [sym_comment] = ACTIONS(34),
  },
  [172] = {
    [sym_identifier_name] = ACTIONS(426),
    [sym_comment] = ACTIONS(34),
  },
  [173] = {
    [sym__return_type] = STATE(235),
    [sym__type] = STATE(47),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [sym_void_keyword] = ACTIONS(64),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [sym_variable_declaration] = STATE(236),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [175] = {
    [anon_sym_class] = ACTIONS(428),
    [sym_comment] = ACTIONS(34),
  },
  [176] = {
    [anon_sym_struct] = ACTIONS(430),
    [sym_comment] = ACTIONS(34),
  },
  [177] = {
    [anon_sym_enum] = ACTIONS(432),
    [sym_comment] = ACTIONS(34),
  },
  [178] = {
    [anon_sym_delegate] = ACTIONS(434),
    [sym_comment] = ACTIONS(34),
  },
  [179] = {
    [sym_variable_declaration] = STATE(236),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [sym_const_keyword] = ACTIONS(436),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [180] = {
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_class] = ACTIONS(440),
    [anon_sym_unsafe] = ACTIONS(440),
    [anon_sym_abstract] = ACTIONS(440),
    [anon_sym_sealed] = ACTIONS(440),
    [anon_sym_static] = ACTIONS(440),
    [anon_sym_new] = ACTIONS(440),
    [anon_sym_public] = ACTIONS(440),
    [anon_sym_protected] = ACTIONS(440),
    [anon_sym_internal] = ACTIONS(440),
    [anon_sym_private] = ACTIONS(440),
    [anon_sym_struct] = ACTIONS(440),
    [anon_sym_enum] = ACTIONS(440),
    [anon_sym_sbyte] = ACTIONS(440),
    [anon_sym_byte] = ACTIONS(440),
    [anon_sym_short] = ACTIONS(440),
    [anon_sym_ushort] = ACTIONS(440),
    [anon_sym_int] = ACTIONS(440),
    [anon_sym_uint] = ACTIONS(440),
    [anon_sym_long] = ACTIONS(440),
    [anon_sym_ulong] = ACTIONS(440),
    [anon_sym_char] = ACTIONS(440),
    [anon_sym_delegate] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(438),
    [sym_const_keyword] = ACTIONS(440),
    [anon_sym_readonly] = ACTIONS(440),
    [anon_sym_volatile] = ACTIONS(440),
    [anon_sym_bool] = ACTIONS(440),
    [anon_sym_decimal] = ACTIONS(440),
    [anon_sym_double] = ACTIONS(440),
    [anon_sym_float] = ACTIONS(440),
    [anon_sym_object] = ACTIONS(440),
    [anon_sym_string] = ACTIONS(440),
    [sym_identifier_name] = ACTIONS(442),
    [sym_comment] = ACTIONS(34),
  },
  [181] = {
    [sym_equals_value_clause] = STATE(242),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
  },
  [182] = {
    [aux_sym_variable_declaration_repeat1] = STATE(244),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(448),
    [sym_comment] = ACTIONS(34),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [anon_sym_namespace] = ACTIONS(450),
    [anon_sym_RBRACE] = ACTIONS(450),
    [anon_sym_class] = ACTIONS(450),
    [anon_sym_unsafe] = ACTIONS(450),
    [anon_sym_abstract] = ACTIONS(450),
    [anon_sym_sealed] = ACTIONS(450),
    [anon_sym_static] = ACTIONS(450),
    [anon_sym_new] = ACTIONS(450),
    [anon_sym_public] = ACTIONS(450),
    [anon_sym_protected] = ACTIONS(450),
    [anon_sym_internal] = ACTIONS(450),
    [anon_sym_private] = ACTIONS(450),
    [anon_sym_struct] = ACTIONS(450),
    [anon_sym_enum] = ACTIONS(450),
    [anon_sym_delegate] = ACTIONS(450),
    [anon_sym_LBRACK] = ACTIONS(450),
    [sym_comment] = ACTIONS(34),
  },
  [184] = {
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym_class] = ACTIONS(454),
    [anon_sym_unsafe] = ACTIONS(454),
    [anon_sym_abstract] = ACTIONS(454),
    [anon_sym_sealed] = ACTIONS(454),
    [anon_sym_static] = ACTIONS(454),
    [anon_sym_new] = ACTIONS(454),
    [anon_sym_public] = ACTIONS(454),
    [anon_sym_protected] = ACTIONS(454),
    [anon_sym_internal] = ACTIONS(454),
    [anon_sym_private] = ACTIONS(454),
    [anon_sym_struct] = ACTIONS(454),
    [anon_sym_enum] = ACTIONS(454),
    [anon_sym_sbyte] = ACTIONS(454),
    [anon_sym_byte] = ACTIONS(454),
    [anon_sym_short] = ACTIONS(454),
    [anon_sym_ushort] = ACTIONS(454),
    [anon_sym_int] = ACTIONS(454),
    [anon_sym_uint] = ACTIONS(454),
    [anon_sym_long] = ACTIONS(454),
    [anon_sym_ulong] = ACTIONS(454),
    [anon_sym_char] = ACTIONS(454),
    [anon_sym_delegate] = ACTIONS(454),
    [anon_sym_LBRACK] = ACTIONS(452),
    [sym_const_keyword] = ACTIONS(454),
    [anon_sym_readonly] = ACTIONS(454),
    [anon_sym_volatile] = ACTIONS(454),
    [anon_sym_bool] = ACTIONS(454),
    [anon_sym_decimal] = ACTIONS(454),
    [anon_sym_double] = ACTIONS(454),
    [anon_sym_float] = ACTIONS(454),
    [anon_sym_object] = ACTIONS(454),
    [anon_sym_string] = ACTIONS(454),
    [sym_identifier_name] = ACTIONS(456),
    [sym_comment] = ACTIONS(34),
  },
  [185] = {
    [sym__type] = STATE(132),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [sym_type_parameter] = STATE(245),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [186] = {
    [anon_sym_LBRACE] = ACTIONS(458),
    [anon_sym_COMMA] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_GT] = ACTIONS(458),
    [sym_identifier_name] = ACTIONS(460),
    [sym_comment] = ACTIONS(34),
  },
  [187] = {
    [anon_sym_COMMA] = ACTIONS(462),
    [anon_sym_GT] = ACTIONS(464),
    [sym_comment] = ACTIONS(34),
  },
  [188] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [anon_sym_namespace] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(468),
    [anon_sym_class] = ACTIONS(468),
    [anon_sym_unsafe] = ACTIONS(468),
    [anon_sym_abstract] = ACTIONS(468),
    [anon_sym_sealed] = ACTIONS(468),
    [anon_sym_static] = ACTIONS(468),
    [anon_sym_new] = ACTIONS(468),
    [anon_sym_public] = ACTIONS(468),
    [anon_sym_protected] = ACTIONS(468),
    [anon_sym_internal] = ACTIONS(468),
    [anon_sym_private] = ACTIONS(468),
    [anon_sym_struct] = ACTIONS(468),
    [anon_sym_enum] = ACTIONS(468),
    [anon_sym_delegate] = ACTIONS(468),
    [anon_sym_LBRACK] = ACTIONS(468),
    [sym_comment] = ACTIONS(34),
  },
  [190] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [191] = {
    [anon_sym_RBRACK] = ACTIONS(472),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [sym__expression] = STATE(259),
    [sym__literal] = STATE(260),
    [sym_boolean_literal] = STATE(255),
    [sym_character_literal] = STATE(255),
    [sym_integer_literal] = STATE(255),
    [sym_real_literal] = STATE(255),
    [sym_string_literal] = STATE(255),
    [sym__regular_string_literal] = STATE(261),
    [sym__verbatim_string_literal] = STATE(261),
    [anon_sym_true] = ACTIONS(474),
    [anon_sym_false] = ACTIONS(474),
    [anon_sym_SQUOTE] = ACTIONS(476),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(478),
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(480),
    [sym_null_literal] = ACTIONS(482),
    [anon_sym_DOT] = ACTIONS(484),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_AT_DQUOTE] = ACTIONS(488),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_COMMA] = ACTIONS(490),
    [sym_comment] = ACTIONS(34),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(494),
    [anon_sym_namespace] = ACTIONS(492),
    [anon_sym_RBRACE] = ACTIONS(492),
    [anon_sym_class] = ACTIONS(492),
    [anon_sym_unsafe] = ACTIONS(492),
    [anon_sym_abstract] = ACTIONS(492),
    [anon_sym_sealed] = ACTIONS(492),
    [anon_sym_static] = ACTIONS(492),
    [anon_sym_new] = ACTIONS(492),
    [anon_sym_public] = ACTIONS(492),
    [anon_sym_protected] = ACTIONS(492),
    [anon_sym_internal] = ACTIONS(492),
    [anon_sym_private] = ACTIONS(492),
    [anon_sym_struct] = ACTIONS(492),
    [anon_sym_enum] = ACTIONS(492),
    [anon_sym_delegate] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(492),
    [sym_comment] = ACTIONS(34),
  },
  [195] = {
    [sym_enum_member_declaration] = STATE(263),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [196] = {
    [anon_sym_RBRACE] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [197] = {
    [sym_equals_value_clause] = STATE(266),
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
  },
  [198] = {
    [anon_sym_LBRACK] = ACTIONS(194),
    [sym_identifier_name] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [sym_enum_member_declaration] = STATE(267),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [200] = {
    [anon_sym_SEMI] = ACTIONS(500),
    [sym_comment] = ACTIONS(34),
  },
  [201] = {
    [anon_sym_sbyte] = ACTIONS(502),
    [anon_sym_byte] = ACTIONS(502),
    [anon_sym_short] = ACTIONS(502),
    [anon_sym_ushort] = ACTIONS(502),
    [anon_sym_int] = ACTIONS(502),
    [anon_sym_uint] = ACTIONS(502),
    [anon_sym_long] = ACTIONS(502),
    [anon_sym_ulong] = ACTIONS(502),
    [anon_sym_char] = ACTIONS(502),
    [anon_sym_bool] = ACTIONS(502),
    [anon_sym_decimal] = ACTIONS(502),
    [anon_sym_double] = ACTIONS(502),
    [anon_sym_float] = ACTIONS(502),
    [anon_sym_object] = ACTIONS(502),
    [anon_sym_string] = ACTIONS(502),
    [sym_identifier_name] = ACTIONS(504),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [sym_array_type] = STATE(268),
    [sym__type] = STATE(269),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [sym_attribute_list] = STATE(270),
    [sym_attribute] = STATE(54),
    [sym_identifier_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(506),
    [sym_comment] = ACTIONS(34),
  },
  [205] = {
    [sym_parameter_array] = STATE(273),
    [sym__attributes] = STATE(274),
    [sym__attribute_section] = STATE(209),
    [aux_sym__formal_parameter_list_repeat1] = STATE(275),
    [aux_sym__attributes_repeat1] = STATE(211),
    [anon_sym_COMMA] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(510),
    [sym_params_keyword] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(384),
    [sym_comment] = ACTIONS(34),
  },
  [206] = {
    [sym__type] = STATE(276),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [207] = {
    [anon_sym_RPAREN] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [sym_parameter_modifier] = STATE(278),
    [sym__type] = STATE(276),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_ref] = ACTIONS(380),
    [anon_sym_out] = ACTIONS(380),
    [anon_sym_this] = ACTIONS(380),
    [sym_params_keyword] = ACTIONS(514),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [anon_sym_sbyte] = ACTIONS(94),
    [anon_sym_byte] = ACTIONS(94),
    [anon_sym_short] = ACTIONS(94),
    [anon_sym_ushort] = ACTIONS(94),
    [anon_sym_int] = ACTIONS(94),
    [anon_sym_uint] = ACTIONS(94),
    [anon_sym_long] = ACTIONS(94),
    [anon_sym_ulong] = ACTIONS(94),
    [anon_sym_char] = ACTIONS(94),
    [anon_sym_ref] = ACTIONS(94),
    [anon_sym_out] = ACTIONS(94),
    [anon_sym_this] = ACTIONS(94),
    [sym_params_keyword] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_bool] = ACTIONS(94),
    [anon_sym_decimal] = ACTIONS(94),
    [anon_sym_double] = ACTIONS(94),
    [anon_sym_float] = ACTIONS(94),
    [anon_sym_object] = ACTIONS(94),
    [anon_sym_string] = ACTIONS(94),
    [sym_identifier_name] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
  },
  [210] = {
    [sym_identifier_name] = ACTIONS(516),
    [sym_comment] = ACTIONS(34),
  },
  [211] = {
    [sym__attribute_section] = STATE(280),
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
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_bool] = ACTIONS(106),
    [anon_sym_decimal] = ACTIONS(106),
    [anon_sym_double] = ACTIONS(106),
    [anon_sym_float] = ACTIONS(106),
    [anon_sym_object] = ACTIONS(106),
    [anon_sym_string] = ACTIONS(106),
    [sym_identifier_name] = ACTIONS(108),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(518),
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
    [anon_sym_struct] = ACTIONS(518),
    [anon_sym_enum] = ACTIONS(518),
    [anon_sym_delegate] = ACTIONS(518),
    [anon_sym_LBRACK] = ACTIONS(518),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(520),
    [anon_sym_namespace] = ACTIONS(520),
    [anon_sym_class] = ACTIONS(520),
    [anon_sym_unsafe] = ACTIONS(520),
    [anon_sym_abstract] = ACTIONS(520),
    [anon_sym_sealed] = ACTIONS(520),
    [anon_sym_static] = ACTIONS(520),
    [anon_sym_new] = ACTIONS(520),
    [anon_sym_public] = ACTIONS(520),
    [anon_sym_protected] = ACTIONS(520),
    [anon_sym_internal] = ACTIONS(520),
    [anon_sym_private] = ACTIONS(520),
    [anon_sym_struct] = ACTIONS(520),
    [anon_sym_enum] = ACTIONS(520),
    [anon_sym_delegate] = ACTIONS(520),
    [anon_sym_LBRACK] = ACTIONS(520),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [anon_sym_COMMA] = ACTIONS(522),
    [anon_sym_RBRACK] = ACTIONS(522),
    [sym_comment] = ACTIONS(34),
  },
  [215] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(281),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [216] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(282),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [217] = {
    [aux_sym_enum_declaration_repeat1] = STATE(283),
    [anon_sym_RBRACE] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
  },
  [218] = {
    [anon_sym_LBRACE] = ACTIONS(524),
    [sym_comment] = ACTIONS(34),
  },
  [219] = {
    [anon_sym_SEMI] = ACTIONS(526),
    [sym_comment] = ACTIONS(34),
  },
  [220] = {
    [anon_sym_LBRACE] = ACTIONS(528),
    [sym_comment] = ACTIONS(34),
  },
  [221] = {
    [anon_sym_LBRACE] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [222] = {
    [sym__integral_type] = STATE(288),
    [anon_sym_sbyte] = ACTIONS(246),
    [anon_sym_byte] = ACTIONS(246),
    [anon_sym_short] = ACTIONS(246),
    [anon_sym_ushort] = ACTIONS(246),
    [anon_sym_int] = ACTIONS(246),
    [anon_sym_uint] = ACTIONS(246),
    [anon_sym_long] = ACTIONS(246),
    [anon_sym_ulong] = ACTIONS(246),
    [anon_sym_char] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [223] = {
    [sym_parameter_list] = STATE(289),
    [anon_sym_LPAREN] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [224] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(291),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(532),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [225] = {
    [anon_sym_LBRACE] = ACTIONS(534),
    [sym_comment] = ACTIONS(34),
  },
  [226] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(294),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [227] = {
    [anon_sym_LBRACE] = ACTIONS(538),
    [sym_comment] = ACTIONS(34),
  },
  [228] = {
    [sym_enum_member_declaration] = STATE(296),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [229] = {
    [sym__integral_type] = STATE(297),
    [anon_sym_sbyte] = ACTIONS(246),
    [anon_sym_byte] = ACTIONS(246),
    [anon_sym_short] = ACTIONS(246),
    [anon_sym_ushort] = ACTIONS(246),
    [anon_sym_int] = ACTIONS(246),
    [anon_sym_uint] = ACTIONS(246),
    [anon_sym_long] = ACTIONS(246),
    [anon_sym_ulong] = ACTIONS(246),
    [anon_sym_char] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [230] = {
    [sym_parameter_list] = STATE(298),
    [anon_sym_LPAREN] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [231] = {
    [anon_sym_RBRACE] = ACTIONS(540),
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
    [anon_sym_struct] = ACTIONS(542),
    [anon_sym_enum] = ACTIONS(542),
    [anon_sym_sbyte] = ACTIONS(542),
    [anon_sym_byte] = ACTIONS(542),
    [anon_sym_short] = ACTIONS(542),
    [anon_sym_ushort] = ACTIONS(542),
    [anon_sym_int] = ACTIONS(542),
    [anon_sym_uint] = ACTIONS(542),
    [anon_sym_long] = ACTIONS(542),
    [anon_sym_ulong] = ACTIONS(542),
    [anon_sym_char] = ACTIONS(542),
    [anon_sym_delegate] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(540),
    [sym_const_keyword] = ACTIONS(542),
    [anon_sym_readonly] = ACTIONS(542),
    [anon_sym_volatile] = ACTIONS(542),
    [anon_sym_bool] = ACTIONS(542),
    [anon_sym_decimal] = ACTIONS(542),
    [anon_sym_double] = ACTIONS(542),
    [anon_sym_float] = ACTIONS(542),
    [anon_sym_object] = ACTIONS(542),
    [anon_sym_string] = ACTIONS(542),
    [sym_identifier_name] = ACTIONS(544),
    [sym_comment] = ACTIONS(34),
  },
  [232] = {
    [sym_type_parameter_list] = STATE(299),
    [anon_sym_LBRACE] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [233] = {
    [sym_type_parameter_list] = STATE(300),
    [anon_sym_LBRACE] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [234] = {
    [anon_sym_LBRACE] = ACTIONS(546),
    [anon_sym_COLON] = ACTIONS(548),
    [sym_comment] = ACTIONS(34),
  },
  [235] = {
    [sym_identifier_name] = ACTIONS(550),
    [sym_comment] = ACTIONS(34),
  },
  [236] = {
    [anon_sym_SEMI] = ACTIONS(552),
    [sym_comment] = ACTIONS(34),
  },
  [237] = {
    [sym_identifier_name] = ACTIONS(554),
    [sym_comment] = ACTIONS(34),
  },
  [238] = {
    [sym_identifier_name] = ACTIONS(556),
    [sym_comment] = ACTIONS(34),
  },
  [239] = {
    [sym_identifier_name] = ACTIONS(558),
    [sym_comment] = ACTIONS(34),
  },
  [240] = {
    [sym__return_type] = STATE(308),
    [sym__type] = STATE(47),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [sym_void_keyword] = ACTIONS(64),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [241] = {
    [sym_variable_declaration] = STATE(309),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [242] = {
    [anon_sym_SEMI] = ACTIONS(560),
    [anon_sym_COMMA] = ACTIONS(560),
    [sym_comment] = ACTIONS(34),
  },
  [243] = {
    [sym_variable_declarator] = STATE(310),
    [sym_identifier_name] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [244] = {
    [anon_sym_SEMI] = ACTIONS(562),
    [anon_sym_COMMA] = ACTIONS(564),
    [sym_comment] = ACTIONS(34),
  },
  [245] = {
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_GT] = ACTIONS(566),
    [sym_comment] = ACTIONS(34),
  },
  [246] = {
    [sym__type] = STATE(132),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [sym_type_parameter] = STATE(312),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [247] = {
    [anon_sym_LBRACE] = ACTIONS(568),
    [anon_sym_COMMA] = ACTIONS(568),
    [anon_sym_LBRACK] = ACTIONS(568),
    [anon_sym_GT] = ACTIONS(568),
    [sym_identifier_name] = ACTIONS(570),
    [sym_comment] = ACTIONS(34),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [anon_sym_namespace] = ACTIONS(572),
    [anon_sym_RBRACE] = ACTIONS(572),
    [anon_sym_class] = ACTIONS(572),
    [anon_sym_unsafe] = ACTIONS(572),
    [anon_sym_abstract] = ACTIONS(572),
    [anon_sym_sealed] = ACTIONS(572),
    [anon_sym_static] = ACTIONS(572),
    [anon_sym_new] = ACTIONS(572),
    [anon_sym_public] = ACTIONS(572),
    [anon_sym_protected] = ACTIONS(572),
    [anon_sym_internal] = ACTIONS(572),
    [anon_sym_private] = ACTIONS(572),
    [anon_sym_struct] = ACTIONS(572),
    [anon_sym_enum] = ACTIONS(572),
    [anon_sym_delegate] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_namespace] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_class] = ACTIONS(574),
    [anon_sym_unsafe] = ACTIONS(574),
    [anon_sym_abstract] = ACTIONS(574),
    [anon_sym_sealed] = ACTIONS(574),
    [anon_sym_static] = ACTIONS(574),
    [anon_sym_new] = ACTIONS(574),
    [anon_sym_public] = ACTIONS(574),
    [anon_sym_protected] = ACTIONS(574),
    [anon_sym_internal] = ACTIONS(574),
    [anon_sym_private] = ACTIONS(574),
    [anon_sym_struct] = ACTIONS(574),
    [anon_sym_enum] = ACTIONS(574),
    [anon_sym_delegate] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [sym_comment] = ACTIONS(34),
  },
  [250] = {
    [anon_sym_LBRACK] = ACTIONS(260),
    [sym_identifier_name] = ACTIONS(258),
    [sym_comment] = ACTIONS(34),
  },
  [251] = {
    [anon_sym_SEMI] = ACTIONS(576),
    [anon_sym_RBRACE] = ACTIONS(576),
    [anon_sym_COMMA] = ACTIONS(576),
    [anon_sym_RPAREN] = ACTIONS(576),
    [sym_params_keyword] = ACTIONS(576),
    [anon_sym_LBRACK] = ACTIONS(576),
    [sym_comment] = ACTIONS(34),
  },
  [252] = {
    [sym__unicode_escape_sequence] = STATE(313),
    [sym__simple_escape_sequence] = STATE(313),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(578),
    [sym__hexadecimal_escape_sequence] = ACTIONS(578),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(580),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(580),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(582),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(582),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(582),
    [anon_sym_BSLASH0] = ACTIONS(582),
    [anon_sym_BSLASHa] = ACTIONS(582),
    [anon_sym_BSLASHb] = ACTIONS(582),
    [anon_sym_BSLASHf] = ACTIONS(582),
    [anon_sym_BSLASHn] = ACTIONS(582),
    [anon_sym_BSLASHr] = ACTIONS(582),
    [anon_sym_BSLASHt] = ACTIONS(582),
    [anon_sym_BSLASHv] = ACTIONS(582),
    [sym_comment] = ACTIONS(584),
  },
  [253] = {
    [anon_sym_SEMI] = ACTIONS(586),
    [anon_sym_RBRACE] = ACTIONS(586),
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(586),
    [sym_params_keyword] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(586),
    [sym__integer_type_suffix] = ACTIONS(588),
    [anon_sym_DOT] = ACTIONS(590),
    [sym__real_type_suffix] = ACTIONS(592),
    [sym__exponent_part] = ACTIONS(594),
    [sym_comment] = ACTIONS(34),
  },
  [254] = {
    [anon_sym_SEMI] = ACTIONS(586),
    [anon_sym_RBRACE] = ACTIONS(586),
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(586),
    [sym_params_keyword] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(586),
    [sym__integer_type_suffix] = ACTIONS(588),
    [sym_comment] = ACTIONS(34),
  },
  [255] = {
    [anon_sym_SEMI] = ACTIONS(596),
    [anon_sym_RBRACE] = ACTIONS(596),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_RPAREN] = ACTIONS(596),
    [sym_params_keyword] = ACTIONS(596),
    [anon_sym_LBRACK] = ACTIONS(596),
    [sym_comment] = ACTIONS(34),
  },
  [256] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(598),
    [sym_comment] = ACTIONS(34),
  },
  [257] = {
    [sym__unicode_escape_sequence] = STATE(321),
    [sym__simple_escape_sequence] = STATE(321),
    [sym__regular_string_literal_character] = STATE(325),
    [aux_sym__regular_string_literal_repeat1] = STATE(326),
    [sym__hexadecimal_escape_sequence] = ACTIONS(600),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(602),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(604),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(604),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(604),
    [anon_sym_BSLASH0] = ACTIONS(604),
    [anon_sym_BSLASHa] = ACTIONS(604),
    [anon_sym_BSLASHb] = ACTIONS(604),
    [anon_sym_BSLASHf] = ACTIONS(604),
    [anon_sym_BSLASHn] = ACTIONS(604),
    [anon_sym_BSLASHr] = ACTIONS(604),
    [anon_sym_BSLASHt] = ACTIONS(604),
    [anon_sym_BSLASHv] = ACTIONS(604),
    [anon_sym_DQUOTE] = ACTIONS(606),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(600),
    [sym_comment] = ACTIONS(584),
  },
  [258] = {
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(608),
    [sym_comment] = ACTIONS(584),
  },
  [259] = {
    [anon_sym_SEMI] = ACTIONS(610),
    [anon_sym_RBRACE] = ACTIONS(610),
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_RPAREN] = ACTIONS(610),
    [sym_params_keyword] = ACTIONS(610),
    [anon_sym_LBRACK] = ACTIONS(610),
    [sym_comment] = ACTIONS(34),
  },
  [260] = {
    [anon_sym_SEMI] = ACTIONS(612),
    [anon_sym_RBRACE] = ACTIONS(612),
    [anon_sym_COMMA] = ACTIONS(612),
    [anon_sym_RPAREN] = ACTIONS(612),
    [sym_params_keyword] = ACTIONS(612),
    [anon_sym_LBRACK] = ACTIONS(612),
    [sym_comment] = ACTIONS(34),
  },
  [261] = {
    [anon_sym_SEMI] = ACTIONS(614),
    [anon_sym_RBRACE] = ACTIONS(614),
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [sym_params_keyword] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(614),
    [sym_comment] = ACTIONS(34),
  },
  [262] = {
    [ts_builtin_sym_end] = ACTIONS(616),
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
    [anon_sym_struct] = ACTIONS(616),
    [anon_sym_enum] = ACTIONS(616),
    [anon_sym_delegate] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(616),
    [sym_comment] = ACTIONS(34),
  },
  [263] = {
    [anon_sym_RBRACE] = ACTIONS(618),
    [anon_sym_COMMA] = ACTIONS(618),
    [sym_comment] = ACTIONS(34),
  },
  [264] = {
    [ts_builtin_sym_end] = ACTIONS(616),
    [anon_sym_SEMI] = ACTIONS(620),
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
    [anon_sym_struct] = ACTIONS(616),
    [anon_sym_enum] = ACTIONS(616),
    [anon_sym_delegate] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(616),
    [sym_comment] = ACTIONS(34),
  },
  [265] = {
    [sym_enum_member_declaration] = STATE(329),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [266] = {
    [anon_sym_RBRACE] = ACTIONS(622),
    [anon_sym_COMMA] = ACTIONS(622),
    [sym_comment] = ACTIONS(34),
  },
  [267] = {
    [aux_sym_enum_declaration_repeat1] = STATE(331),
    [anon_sym_RBRACE] = ACTIONS(624),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
  },
  [268] = {
    [sym_identifier_name] = ACTIONS(626),
    [sym_comment] = ACTIONS(34),
  },
  [269] = {
    [sym_array_rank_specifier] = STATE(334),
    [anon_sym_LBRACK] = ACTIONS(628),
    [sym_comment] = ACTIONS(34),
  },
  [270] = {
    [anon_sym_RBRACK] = ACTIONS(630),
    [sym_comment] = ACTIONS(34),
  },
  [271] = {
    [anon_sym_SEMI] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [272] = {
    [sym_parameter] = STATE(337),
    [sym_parameter_modifier] = STATE(206),
    [sym__attributes] = STATE(338),
    [sym__attribute_section] = STATE(339),
    [sym__type] = STATE(210),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(340),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_ref] = ACTIONS(380),
    [anon_sym_out] = ACTIONS(380),
    [anon_sym_this] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [273] = {
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_comment] = ACTIONS(34),
  },
  [274] = {
    [sym_params_keyword] = ACTIONS(638),
    [sym_comment] = ACTIONS(34),
  },
  [275] = {
    [sym_parameter_array] = STATE(342),
    [sym__attributes] = STATE(274),
    [sym__attribute_section] = STATE(209),
    [aux_sym__attributes_repeat1] = STATE(211),
    [anon_sym_COMMA] = ACTIONS(640),
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_params_keyword] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(384),
    [sym_comment] = ACTIONS(34),
  },
  [276] = {
    [sym_identifier_name] = ACTIONS(642),
    [sym_comment] = ACTIONS(34),
  },
  [277] = {
    [sym_array_type] = STATE(344),
    [sym__type] = STATE(269),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [278] = {
    [sym__type] = STATE(345),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [279] = {
    [sym_equals_value_clause] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(644),
    [sym_params_keyword] = ACTIONS(644),
    [anon_sym_LBRACK] = ACTIONS(644),
    [anon_sym_EQ] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
  },
  [280] = {
    [anon_sym_sbyte] = ACTIONS(192),
    [anon_sym_byte] = ACTIONS(192),
    [anon_sym_short] = ACTIONS(192),
    [anon_sym_ushort] = ACTIONS(192),
    [anon_sym_int] = ACTIONS(192),
    [anon_sym_uint] = ACTIONS(192),
    [anon_sym_long] = ACTIONS(192),
    [anon_sym_ulong] = ACTIONS(192),
    [anon_sym_char] = ACTIONS(192),
    [anon_sym_ref] = ACTIONS(192),
    [anon_sym_out] = ACTIONS(192),
    [anon_sym_this] = ACTIONS(192),
    [sym_params_keyword] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_bool] = ACTIONS(192),
    [anon_sym_decimal] = ACTIONS(192),
    [anon_sym_double] = ACTIONS(192),
    [anon_sym_float] = ACTIONS(192),
    [anon_sym_object] = ACTIONS(192),
    [anon_sym_string] = ACTIONS(192),
    [sym_identifier_name] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [281] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(646),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [282] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(648),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [283] = {
    [anon_sym_RBRACE] = ACTIONS(624),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [284] = {
    [sym_enum_member_declaration] = STATE(349),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [285] = {
    [ts_builtin_sym_end] = ACTIONS(650),
    [anon_sym_namespace] = ACTIONS(650),
    [anon_sym_RBRACE] = ACTIONS(650),
    [anon_sym_class] = ACTIONS(650),
    [anon_sym_unsafe] = ACTIONS(650),
    [anon_sym_abstract] = ACTIONS(650),
    [anon_sym_sealed] = ACTIONS(650),
    [anon_sym_static] = ACTIONS(650),
    [anon_sym_new] = ACTIONS(650),
    [anon_sym_public] = ACTIONS(650),
    [anon_sym_protected] = ACTIONS(650),
    [anon_sym_internal] = ACTIONS(650),
    [anon_sym_private] = ACTIONS(650),
    [anon_sym_struct] = ACTIONS(650),
    [anon_sym_enum] = ACTIONS(650),
    [anon_sym_delegate] = ACTIONS(650),
    [anon_sym_LBRACK] = ACTIONS(650),
    [sym_comment] = ACTIONS(34),
  },
  [286] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(350),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(646),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [287] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(351),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(648),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [288] = {
    [anon_sym_LBRACE] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
  },
  [289] = {
    [anon_sym_SEMI] = ACTIONS(654),
    [sym_comment] = ACTIONS(34),
  },
  [290] = {
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_class] = ACTIONS(656),
    [anon_sym_unsafe] = ACTIONS(656),
    [anon_sym_abstract] = ACTIONS(656),
    [anon_sym_sealed] = ACTIONS(656),
    [anon_sym_static] = ACTIONS(656),
    [anon_sym_new] = ACTIONS(656),
    [anon_sym_public] = ACTIONS(656),
    [anon_sym_protected] = ACTIONS(656),
    [anon_sym_internal] = ACTIONS(656),
    [anon_sym_private] = ACTIONS(656),
    [anon_sym_struct] = ACTIONS(656),
    [anon_sym_enum] = ACTIONS(656),
    [anon_sym_sbyte] = ACTIONS(656),
    [anon_sym_byte] = ACTIONS(656),
    [anon_sym_short] = ACTIONS(656),
    [anon_sym_ushort] = ACTIONS(656),
    [anon_sym_int] = ACTIONS(656),
    [anon_sym_uint] = ACTIONS(656),
    [anon_sym_long] = ACTIONS(656),
    [anon_sym_ulong] = ACTIONS(656),
    [anon_sym_char] = ACTIONS(656),
    [anon_sym_delegate] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(294),
    [sym_const_keyword] = ACTIONS(656),
    [anon_sym_readonly] = ACTIONS(656),
    [anon_sym_volatile] = ACTIONS(656),
    [anon_sym_bool] = ACTIONS(656),
    [anon_sym_decimal] = ACTIONS(656),
    [anon_sym_double] = ACTIONS(656),
    [anon_sym_float] = ACTIONS(656),
    [anon_sym_object] = ACTIONS(656),
    [anon_sym_string] = ACTIONS(656),
    [sym_identifier_name] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [291] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(660),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [292] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(355),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(660),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [293] = {
    [anon_sym_RBRACE] = ACTIONS(360),
    [anon_sym_class] = ACTIONS(662),
    [anon_sym_unsafe] = ACTIONS(662),
    [anon_sym_abstract] = ACTIONS(662),
    [anon_sym_sealed] = ACTIONS(662),
    [anon_sym_static] = ACTIONS(662),
    [anon_sym_new] = ACTIONS(662),
    [anon_sym_public] = ACTIONS(662),
    [anon_sym_protected] = ACTIONS(662),
    [anon_sym_internal] = ACTIONS(662),
    [anon_sym_private] = ACTIONS(662),
    [anon_sym_struct] = ACTIONS(662),
    [anon_sym_enum] = ACTIONS(662),
    [anon_sym_sbyte] = ACTIONS(662),
    [anon_sym_byte] = ACTIONS(662),
    [anon_sym_short] = ACTIONS(662),
    [anon_sym_ushort] = ACTIONS(662),
    [anon_sym_int] = ACTIONS(662),
    [anon_sym_uint] = ACTIONS(662),
    [anon_sym_long] = ACTIONS(662),
    [anon_sym_ulong] = ACTIONS(662),
    [anon_sym_char] = ACTIONS(662),
    [anon_sym_delegate] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(360),
    [sym_const_keyword] = ACTIONS(662),
    [anon_sym_readonly] = ACTIONS(662),
    [anon_sym_volatile] = ACTIONS(662),
    [anon_sym_bool] = ACTIONS(662),
    [anon_sym_decimal] = ACTIONS(662),
    [anon_sym_double] = ACTIONS(662),
    [anon_sym_float] = ACTIONS(662),
    [anon_sym_object] = ACTIONS(662),
    [anon_sym_string] = ACTIONS(662),
    [sym_identifier_name] = ACTIONS(664),
    [sym_comment] = ACTIONS(34),
  },
  [294] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(666),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [295] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(357),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(666),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [296] = {
    [aux_sym_enum_declaration_repeat1] = STATE(359),
    [anon_sym_RBRACE] = ACTIONS(668),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
  },
  [297] = {
    [anon_sym_LBRACE] = ACTIONS(670),
    [sym_comment] = ACTIONS(34),
  },
  [298] = {
    [anon_sym_SEMI] = ACTIONS(672),
    [sym_comment] = ACTIONS(34),
  },
  [299] = {
    [anon_sym_LBRACE] = ACTIONS(674),
    [sym_comment] = ACTIONS(34),
  },
  [300] = {
    [anon_sym_LBRACE] = ACTIONS(676),
    [sym_comment] = ACTIONS(34),
  },
  [301] = {
    [sym_enum_member_declaration] = STATE(364),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [302] = {
    [sym__integral_type] = STATE(365),
    [anon_sym_sbyte] = ACTIONS(246),
    [anon_sym_byte] = ACTIONS(246),
    [anon_sym_short] = ACTIONS(246),
    [anon_sym_ushort] = ACTIONS(246),
    [anon_sym_int] = ACTIONS(246),
    [anon_sym_uint] = ACTIONS(246),
    [anon_sym_long] = ACTIONS(246),
    [anon_sym_ulong] = ACTIONS(246),
    [anon_sym_char] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [303] = {
    [sym_parameter_list] = STATE(366),
    [anon_sym_LPAREN] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [304] = {
    [anon_sym_RBRACE] = ACTIONS(678),
    [anon_sym_class] = ACTIONS(680),
    [anon_sym_unsafe] = ACTIONS(680),
    [anon_sym_abstract] = ACTIONS(680),
    [anon_sym_sealed] = ACTIONS(680),
    [anon_sym_static] = ACTIONS(680),
    [anon_sym_new] = ACTIONS(680),
    [anon_sym_public] = ACTIONS(680),
    [anon_sym_protected] = ACTIONS(680),
    [anon_sym_internal] = ACTIONS(680),
    [anon_sym_private] = ACTIONS(680),
    [anon_sym_struct] = ACTIONS(680),
    [anon_sym_enum] = ACTIONS(680),
    [anon_sym_sbyte] = ACTIONS(680),
    [anon_sym_byte] = ACTIONS(680),
    [anon_sym_short] = ACTIONS(680),
    [anon_sym_ushort] = ACTIONS(680),
    [anon_sym_int] = ACTIONS(680),
    [anon_sym_uint] = ACTIONS(680),
    [anon_sym_long] = ACTIONS(680),
    [anon_sym_ulong] = ACTIONS(680),
    [anon_sym_char] = ACTIONS(680),
    [anon_sym_delegate] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(678),
    [sym_const_keyword] = ACTIONS(680),
    [anon_sym_readonly] = ACTIONS(680),
    [anon_sym_volatile] = ACTIONS(680),
    [anon_sym_bool] = ACTIONS(680),
    [anon_sym_decimal] = ACTIONS(680),
    [anon_sym_double] = ACTIONS(680),
    [anon_sym_float] = ACTIONS(680),
    [anon_sym_object] = ACTIONS(680),
    [anon_sym_string] = ACTIONS(680),
    [sym_identifier_name] = ACTIONS(682),
    [sym_comment] = ACTIONS(34),
  },
  [305] = {
    [sym_type_parameter_list] = STATE(367),
    [anon_sym_LBRACE] = ACTIONS(674),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [306] = {
    [sym_type_parameter_list] = STATE(368),
    [anon_sym_LBRACE] = ACTIONS(676),
    [anon_sym_LT] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [307] = {
    [anon_sym_LBRACE] = ACTIONS(670),
    [anon_sym_COLON] = ACTIONS(684),
    [sym_comment] = ACTIONS(34),
  },
  [308] = {
    [sym_identifier_name] = ACTIONS(686),
    [sym_comment] = ACTIONS(34),
  },
  [309] = {
    [anon_sym_SEMI] = ACTIONS(688),
    [sym_comment] = ACTIONS(34),
  },
  [310] = {
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [sym_comment] = ACTIONS(34),
  },
  [311] = {
    [sym_variable_declarator] = STATE(372),
    [sym_identifier_name] = ACTIONS(350),
    [sym_comment] = ACTIONS(34),
  },
  [312] = {
    [anon_sym_COMMA] = ACTIONS(692),
    [anon_sym_GT] = ACTIONS(692),
    [sym_comment] = ACTIONS(34),
  },
  [313] = {
    [anon_sym_SQUOTE] = ACTIONS(694),
    [sym_comment] = ACTIONS(34),
  },
  [314] = {
    [anon_sym_SQUOTE] = ACTIONS(696),
    [sym_comment] = ACTIONS(34),
  },
  [315] = {
    [anon_sym_SQUOTE] = ACTIONS(698),
    [sym_comment] = ACTIONS(34),
  },
  [316] = {
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_RBRACE] = ACTIONS(700),
    [anon_sym_COMMA] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(700),
    [sym_params_keyword] = ACTIONS(700),
    [anon_sym_LBRACK] = ACTIONS(700),
    [sym_comment] = ACTIONS(34),
  },
  [317] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(702),
    [sym_comment] = ACTIONS(34),
  },
  [318] = {
    [anon_sym_SEMI] = ACTIONS(704),
    [anon_sym_RBRACE] = ACTIONS(704),
    [anon_sym_COMMA] = ACTIONS(704),
    [anon_sym_RPAREN] = ACTIONS(704),
    [sym_params_keyword] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(704),
    [sym_comment] = ACTIONS(34),
  },
  [319] = {
    [anon_sym_SEMI] = ACTIONS(704),
    [anon_sym_RBRACE] = ACTIONS(704),
    [anon_sym_COMMA] = ACTIONS(704),
    [anon_sym_RPAREN] = ACTIONS(704),
    [sym_params_keyword] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(704),
    [sym__real_type_suffix] = ACTIONS(706),
    [sym_comment] = ACTIONS(34),
  },
  [320] = {
    [anon_sym_SEMI] = ACTIONS(704),
    [anon_sym_RBRACE] = ACTIONS(704),
    [anon_sym_COMMA] = ACTIONS(704),
    [anon_sym_RPAREN] = ACTIONS(704),
    [sym_params_keyword] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(704),
    [sym__real_type_suffix] = ACTIONS(706),
    [sym__exponent_part] = ACTIONS(708),
    [sym_comment] = ACTIONS(34),
  },
  [321] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(710),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(710),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(710),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(710),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(710),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(710),
    [anon_sym_BSLASH0] = ACTIONS(710),
    [anon_sym_BSLASHa] = ACTIONS(710),
    [anon_sym_BSLASHb] = ACTIONS(710),
    [anon_sym_BSLASHf] = ACTIONS(710),
    [anon_sym_BSLASHn] = ACTIONS(710),
    [anon_sym_BSLASHr] = ACTIONS(710),
    [anon_sym_BSLASHt] = ACTIONS(710),
    [anon_sym_BSLASHv] = ACTIONS(710),
    [anon_sym_DQUOTE] = ACTIONS(710),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(710),
    [sym_comment] = ACTIONS(584),
  },
  [322] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(712),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(712),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(712),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(712),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(712),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(712),
    [anon_sym_BSLASH0] = ACTIONS(712),
    [anon_sym_BSLASHa] = ACTIONS(712),
    [anon_sym_BSLASHb] = ACTIONS(712),
    [anon_sym_BSLASHf] = ACTIONS(712),
    [anon_sym_BSLASHn] = ACTIONS(712),
    [anon_sym_BSLASHr] = ACTIONS(712),
    [anon_sym_BSLASHt] = ACTIONS(712),
    [anon_sym_BSLASHv] = ACTIONS(712),
    [anon_sym_DQUOTE] = ACTIONS(712),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(712),
    [sym_comment] = ACTIONS(584),
  },
  [323] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(714),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(714),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(714),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(714),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(714),
    [anon_sym_BSLASH0] = ACTIONS(714),
    [anon_sym_BSLASHa] = ACTIONS(714),
    [anon_sym_BSLASHb] = ACTIONS(714),
    [anon_sym_BSLASHf] = ACTIONS(714),
    [anon_sym_BSLASHn] = ACTIONS(714),
    [anon_sym_BSLASHr] = ACTIONS(714),
    [anon_sym_BSLASHt] = ACTIONS(714),
    [anon_sym_BSLASHv] = ACTIONS(714),
    [anon_sym_DQUOTE] = ACTIONS(714),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(714),
    [sym_comment] = ACTIONS(584),
  },
  [324] = {
    [anon_sym_SEMI] = ACTIONS(716),
    [anon_sym_RBRACE] = ACTIONS(716),
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(716),
    [sym_params_keyword] = ACTIONS(716),
    [anon_sym_LBRACK] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [325] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(718),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(718),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(718),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(718),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(718),
    [anon_sym_BSLASH0] = ACTIONS(718),
    [anon_sym_BSLASHa] = ACTIONS(718),
    [anon_sym_BSLASHb] = ACTIONS(718),
    [anon_sym_BSLASHf] = ACTIONS(718),
    [anon_sym_BSLASHn] = ACTIONS(718),
    [anon_sym_BSLASHr] = ACTIONS(718),
    [anon_sym_BSLASHt] = ACTIONS(718),
    [anon_sym_BSLASHv] = ACTIONS(718),
    [anon_sym_DQUOTE] = ACTIONS(718),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(718),
    [sym_comment] = ACTIONS(584),
  },
  [326] = {
    [sym__unicode_escape_sequence] = STATE(321),
    [sym__simple_escape_sequence] = STATE(321),
    [sym__regular_string_literal_character] = STATE(378),
    [sym__hexadecimal_escape_sequence] = ACTIONS(600),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(602),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(604),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(604),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(604),
    [anon_sym_BSLASH0] = ACTIONS(604),
    [anon_sym_BSLASHa] = ACTIONS(604),
    [anon_sym_BSLASHb] = ACTIONS(604),
    [anon_sym_BSLASHf] = ACTIONS(604),
    [anon_sym_BSLASHn] = ACTIONS(604),
    [anon_sym_BSLASHr] = ACTIONS(604),
    [anon_sym_BSLASHt] = ACTIONS(604),
    [anon_sym_BSLASHv] = ACTIONS(604),
    [anon_sym_DQUOTE] = ACTIONS(720),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(600),
    [sym_comment] = ACTIONS(584),
  },
  [327] = {
    [anon_sym_DQUOTE] = ACTIONS(722),
    [sym_comment] = ACTIONS(34),
  },
  [328] = {
    [ts_builtin_sym_end] = ACTIONS(724),
    [anon_sym_namespace] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_class] = ACTIONS(724),
    [anon_sym_unsafe] = ACTIONS(724),
    [anon_sym_abstract] = ACTIONS(724),
    [anon_sym_sealed] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(724),
    [anon_sym_new] = ACTIONS(724),
    [anon_sym_public] = ACTIONS(724),
    [anon_sym_protected] = ACTIONS(724),
    [anon_sym_internal] = ACTIONS(724),
    [anon_sym_private] = ACTIONS(724),
    [anon_sym_struct] = ACTIONS(724),
    [anon_sym_enum] = ACTIONS(724),
    [anon_sym_delegate] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [sym_comment] = ACTIONS(34),
  },
  [329] = {
    [anon_sym_RBRACE] = ACTIONS(726),
    [anon_sym_COMMA] = ACTIONS(726),
    [sym_comment] = ACTIONS(34),
  },
  [330] = {
    [ts_builtin_sym_end] = ACTIONS(724),
    [anon_sym_SEMI] = ACTIONS(728),
    [anon_sym_namespace] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_class] = ACTIONS(724),
    [anon_sym_unsafe] = ACTIONS(724),
    [anon_sym_abstract] = ACTIONS(724),
    [anon_sym_sealed] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(724),
    [anon_sym_new] = ACTIONS(724),
    [anon_sym_public] = ACTIONS(724),
    [anon_sym_protected] = ACTIONS(724),
    [anon_sym_internal] = ACTIONS(724),
    [anon_sym_private] = ACTIONS(724),
    [anon_sym_struct] = ACTIONS(724),
    [anon_sym_enum] = ACTIONS(724),
    [anon_sym_delegate] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [sym_comment] = ACTIONS(34),
  },
  [331] = {
    [anon_sym_RBRACE] = ACTIONS(730),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [332] = {
    [anon_sym_RPAREN] = ACTIONS(732),
    [sym_comment] = ACTIONS(34),
  },
  [333] = {
    [aux_sym_array_rank_specifier_repeat1] = STATE(384),
    [anon_sym_COMMA] = ACTIONS(734),
    [anon_sym_RBRACK] = ACTIONS(736),
    [sym_comment] = ACTIONS(34),
  },
  [334] = {
    [sym_identifier_name] = ACTIONS(738),
    [sym_comment] = ACTIONS(34),
  },
  [335] = {
    [anon_sym_sbyte] = ACTIONS(258),
    [anon_sym_byte] = ACTIONS(258),
    [anon_sym_short] = ACTIONS(258),
    [anon_sym_ushort] = ACTIONS(258),
    [anon_sym_int] = ACTIONS(258),
    [anon_sym_uint] = ACTIONS(258),
    [anon_sym_long] = ACTIONS(258),
    [anon_sym_ulong] = ACTIONS(258),
    [anon_sym_char] = ACTIONS(258),
    [anon_sym_ref] = ACTIONS(258),
    [anon_sym_out] = ACTIONS(258),
    [anon_sym_this] = ACTIONS(258),
    [sym_params_keyword] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(258),
    [anon_sym_decimal] = ACTIONS(258),
    [anon_sym_double] = ACTIONS(258),
    [anon_sym_float] = ACTIONS(258),
    [anon_sym_object] = ACTIONS(258),
    [anon_sym_string] = ACTIONS(258),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
  },
  [336] = {
    [sym_attribute_list] = STATE(385),
    [sym_attribute] = STATE(54),
    [sym_identifier_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(34),
  },
  [337] = {
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(740),
    [sym_params_keyword] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(740),
    [sym_comment] = ACTIONS(34),
  },
  [338] = {
    [sym_parameter_modifier] = STATE(278),
    [sym__type] = STATE(276),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_ref] = ACTIONS(380),
    [anon_sym_out] = ACTIONS(380),
    [anon_sym_this] = ACTIONS(380),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [339] = {
    [anon_sym_sbyte] = ACTIONS(94),
    [anon_sym_byte] = ACTIONS(94),
    [anon_sym_short] = ACTIONS(94),
    [anon_sym_ushort] = ACTIONS(94),
    [anon_sym_int] = ACTIONS(94),
    [anon_sym_uint] = ACTIONS(94),
    [anon_sym_long] = ACTIONS(94),
    [anon_sym_ulong] = ACTIONS(94),
    [anon_sym_char] = ACTIONS(94),
    [anon_sym_ref] = ACTIONS(94),
    [anon_sym_out] = ACTIONS(94),
    [anon_sym_this] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_bool] = ACTIONS(94),
    [anon_sym_decimal] = ACTIONS(94),
    [anon_sym_double] = ACTIONS(94),
    [anon_sym_float] = ACTIONS(94),
    [anon_sym_object] = ACTIONS(94),
    [anon_sym_string] = ACTIONS(94),
    [sym_identifier_name] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
  },
  [340] = {
    [sym__attribute_section] = STATE(386),
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
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_bool] = ACTIONS(106),
    [anon_sym_decimal] = ACTIONS(106),
    [anon_sym_double] = ACTIONS(106),
    [anon_sym_float] = ACTIONS(106),
    [anon_sym_object] = ACTIONS(106),
    [anon_sym_string] = ACTIONS(106),
    [sym_identifier_name] = ACTIONS(108),
    [sym_comment] = ACTIONS(34),
  },
  [341] = {
    [sym_parameter] = STATE(387),
    [sym_parameter_modifier] = STATE(206),
    [sym__attributes] = STATE(338),
    [sym__attribute_section] = STATE(339),
    [sym__type] = STATE(210),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(340),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_ref] = ACTIONS(380),
    [anon_sym_out] = ACTIONS(380),
    [anon_sym_this] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [342] = {
    [anon_sym_RPAREN] = ACTIONS(742),
    [sym_comment] = ACTIONS(34),
  },
  [343] = {
    [sym_equals_value_clause] = STATE(388),
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(744),
    [sym_params_keyword] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(744),
    [anon_sym_EQ] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
  },
  [344] = {
    [sym_identifier_name] = ACTIONS(746),
    [sym_comment] = ACTIONS(34),
  },
  [345] = {
    [sym_identifier_name] = ACTIONS(748),
    [sym_comment] = ACTIONS(34),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(744),
    [sym_params_keyword] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(744),
    [sym_comment] = ACTIONS(34),
  },
  [347] = {
    [ts_builtin_sym_end] = ACTIONS(750),
    [anon_sym_namespace] = ACTIONS(750),
    [anon_sym_RBRACE] = ACTIONS(750),
    [anon_sym_class] = ACTIONS(750),
    [anon_sym_unsafe] = ACTIONS(750),
    [anon_sym_abstract] = ACTIONS(750),
    [anon_sym_sealed] = ACTIONS(750),
    [anon_sym_static] = ACTIONS(750),
    [anon_sym_new] = ACTIONS(750),
    [anon_sym_public] = ACTIONS(750),
    [anon_sym_protected] = ACTIONS(750),
    [anon_sym_internal] = ACTIONS(750),
    [anon_sym_private] = ACTIONS(750),
    [anon_sym_struct] = ACTIONS(750),
    [anon_sym_enum] = ACTIONS(750),
    [anon_sym_delegate] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [sym_comment] = ACTIONS(34),
  },
  [348] = {
    [ts_builtin_sym_end] = ACTIONS(752),
    [anon_sym_namespace] = ACTIONS(752),
    [anon_sym_RBRACE] = ACTIONS(752),
    [anon_sym_class] = ACTIONS(752),
    [anon_sym_unsafe] = ACTIONS(752),
    [anon_sym_abstract] = ACTIONS(752),
    [anon_sym_sealed] = ACTIONS(752),
    [anon_sym_static] = ACTIONS(752),
    [anon_sym_new] = ACTIONS(752),
    [anon_sym_public] = ACTIONS(752),
    [anon_sym_protected] = ACTIONS(752),
    [anon_sym_internal] = ACTIONS(752),
    [anon_sym_private] = ACTIONS(752),
    [anon_sym_struct] = ACTIONS(752),
    [anon_sym_enum] = ACTIONS(752),
    [anon_sym_delegate] = ACTIONS(752),
    [anon_sym_LBRACK] = ACTIONS(752),
    [sym_comment] = ACTIONS(34),
  },
  [349] = {
    [aux_sym_enum_declaration_repeat1] = STATE(391),
    [anon_sym_RBRACE] = ACTIONS(730),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
  },
  [350] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(754),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [351] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(756),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [352] = {
    [sym_enum_member_declaration] = STATE(394),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [353] = {
    [ts_builtin_sym_end] = ACTIONS(758),
    [anon_sym_namespace] = ACTIONS(758),
    [anon_sym_RBRACE] = ACTIONS(758),
    [anon_sym_class] = ACTIONS(758),
    [anon_sym_unsafe] = ACTIONS(758),
    [anon_sym_abstract] = ACTIONS(758),
    [anon_sym_sealed] = ACTIONS(758),
    [anon_sym_static] = ACTIONS(758),
    [anon_sym_new] = ACTIONS(758),
    [anon_sym_public] = ACTIONS(758),
    [anon_sym_protected] = ACTIONS(758),
    [anon_sym_internal] = ACTIONS(758),
    [anon_sym_private] = ACTIONS(758),
    [anon_sym_struct] = ACTIONS(758),
    [anon_sym_enum] = ACTIONS(758),
    [anon_sym_delegate] = ACTIONS(758),
    [anon_sym_LBRACK] = ACTIONS(758),
    [sym_comment] = ACTIONS(34),
  },
  [354] = {
    [anon_sym_RBRACE] = ACTIONS(450),
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
    [anon_sym_LBRACK] = ACTIONS(450),
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
    [sym_comment] = ACTIONS(34),
  },
  [355] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(764),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [356] = {
    [anon_sym_RBRACE] = ACTIONS(468),
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
    [anon_sym_LBRACK] = ACTIONS(468),
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
    [sym_comment] = ACTIONS(34),
  },
  [357] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(770),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [358] = {
    [anon_sym_SEMI] = ACTIONS(772),
    [anon_sym_RBRACE] = ACTIONS(492),
    [anon_sym_class] = ACTIONS(774),
    [anon_sym_unsafe] = ACTIONS(774),
    [anon_sym_abstract] = ACTIONS(774),
    [anon_sym_sealed] = ACTIONS(774),
    [anon_sym_static] = ACTIONS(774),
    [anon_sym_new] = ACTIONS(774),
    [anon_sym_public] = ACTIONS(774),
    [anon_sym_protected] = ACTIONS(774),
    [anon_sym_internal] = ACTIONS(774),
    [anon_sym_private] = ACTIONS(774),
    [anon_sym_struct] = ACTIONS(774),
    [anon_sym_enum] = ACTIONS(774),
    [anon_sym_sbyte] = ACTIONS(774),
    [anon_sym_byte] = ACTIONS(774),
    [anon_sym_short] = ACTIONS(774),
    [anon_sym_ushort] = ACTIONS(774),
    [anon_sym_int] = ACTIONS(774),
    [anon_sym_uint] = ACTIONS(774),
    [anon_sym_long] = ACTIONS(774),
    [anon_sym_ulong] = ACTIONS(774),
    [anon_sym_char] = ACTIONS(774),
    [anon_sym_delegate] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(492),
    [sym_const_keyword] = ACTIONS(774),
    [anon_sym_readonly] = ACTIONS(774),
    [anon_sym_volatile] = ACTIONS(774),
    [anon_sym_bool] = ACTIONS(774),
    [anon_sym_decimal] = ACTIONS(774),
    [anon_sym_double] = ACTIONS(774),
    [anon_sym_float] = ACTIONS(774),
    [anon_sym_object] = ACTIONS(774),
    [anon_sym_string] = ACTIONS(774),
    [sym_identifier_name] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
  },
  [359] = {
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [360] = {
    [sym_enum_member_declaration] = STATE(399),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [361] = {
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_class] = ACTIONS(780),
    [anon_sym_unsafe] = ACTIONS(780),
    [anon_sym_abstract] = ACTIONS(780),
    [anon_sym_sealed] = ACTIONS(780),
    [anon_sym_static] = ACTIONS(780),
    [anon_sym_new] = ACTIONS(780),
    [anon_sym_public] = ACTIONS(780),
    [anon_sym_protected] = ACTIONS(780),
    [anon_sym_internal] = ACTIONS(780),
    [anon_sym_private] = ACTIONS(780),
    [anon_sym_struct] = ACTIONS(780),
    [anon_sym_enum] = ACTIONS(780),
    [anon_sym_sbyte] = ACTIONS(780),
    [anon_sym_byte] = ACTIONS(780),
    [anon_sym_short] = ACTIONS(780),
    [anon_sym_ushort] = ACTIONS(780),
    [anon_sym_int] = ACTIONS(780),
    [anon_sym_uint] = ACTIONS(780),
    [anon_sym_long] = ACTIONS(780),
    [anon_sym_ulong] = ACTIONS(780),
    [anon_sym_char] = ACTIONS(780),
    [anon_sym_delegate] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(518),
    [sym_const_keyword] = ACTIONS(780),
    [anon_sym_readonly] = ACTIONS(780),
    [anon_sym_volatile] = ACTIONS(780),
    [anon_sym_bool] = ACTIONS(780),
    [anon_sym_decimal] = ACTIONS(780),
    [anon_sym_double] = ACTIONS(780),
    [anon_sym_float] = ACTIONS(780),
    [anon_sym_object] = ACTIONS(780),
    [anon_sym_string] = ACTIONS(780),
    [sym_identifier_name] = ACTIONS(782),
    [sym_comment] = ACTIONS(34),
  },
  [362] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(400),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(764),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [363] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(401),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(770),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [364] = {
    [aux_sym_enum_declaration_repeat1] = STATE(402),
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
  },
  [365] = {
    [anon_sym_LBRACE] = ACTIONS(784),
    [sym_comment] = ACTIONS(34),
  },
  [366] = {
    [anon_sym_SEMI] = ACTIONS(786),
    [sym_comment] = ACTIONS(34),
  },
  [367] = {
    [anon_sym_LBRACE] = ACTIONS(788),
    [sym_comment] = ACTIONS(34),
  },
  [368] = {
    [anon_sym_LBRACE] = ACTIONS(790),
    [sym_comment] = ACTIONS(34),
  },
  [369] = {
    [sym__integral_type] = STATE(407),
    [anon_sym_sbyte] = ACTIONS(246),
    [anon_sym_byte] = ACTIONS(246),
    [anon_sym_short] = ACTIONS(246),
    [anon_sym_ushort] = ACTIONS(246),
    [anon_sym_int] = ACTIONS(246),
    [anon_sym_uint] = ACTIONS(246),
    [anon_sym_long] = ACTIONS(246),
    [anon_sym_ulong] = ACTIONS(246),
    [anon_sym_char] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [370] = {
    [sym_parameter_list] = STATE(408),
    [anon_sym_LPAREN] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [371] = {
    [anon_sym_RBRACE] = ACTIONS(792),
    [anon_sym_class] = ACTIONS(794),
    [anon_sym_unsafe] = ACTIONS(794),
    [anon_sym_abstract] = ACTIONS(794),
    [anon_sym_sealed] = ACTIONS(794),
    [anon_sym_static] = ACTIONS(794),
    [anon_sym_new] = ACTIONS(794),
    [anon_sym_public] = ACTIONS(794),
    [anon_sym_protected] = ACTIONS(794),
    [anon_sym_internal] = ACTIONS(794),
    [anon_sym_private] = ACTIONS(794),
    [anon_sym_struct] = ACTIONS(794),
    [anon_sym_enum] = ACTIONS(794),
    [anon_sym_sbyte] = ACTIONS(794),
    [anon_sym_byte] = ACTIONS(794),
    [anon_sym_short] = ACTIONS(794),
    [anon_sym_ushort] = ACTIONS(794),
    [anon_sym_int] = ACTIONS(794),
    [anon_sym_uint] = ACTIONS(794),
    [anon_sym_long] = ACTIONS(794),
    [anon_sym_ulong] = ACTIONS(794),
    [anon_sym_char] = ACTIONS(794),
    [anon_sym_delegate] = ACTIONS(794),
    [anon_sym_LBRACK] = ACTIONS(792),
    [sym_const_keyword] = ACTIONS(794),
    [anon_sym_readonly] = ACTIONS(794),
    [anon_sym_volatile] = ACTIONS(794),
    [anon_sym_bool] = ACTIONS(794),
    [anon_sym_decimal] = ACTIONS(794),
    [anon_sym_double] = ACTIONS(794),
    [anon_sym_float] = ACTIONS(794),
    [anon_sym_object] = ACTIONS(794),
    [anon_sym_string] = ACTIONS(794),
    [sym_identifier_name] = ACTIONS(796),
    [sym_comment] = ACTIONS(34),
  },
  [372] = {
    [anon_sym_SEMI] = ACTIONS(798),
    [anon_sym_COMMA] = ACTIONS(798),
    [sym_comment] = ACTIONS(34),
  },
  [373] = {
    [anon_sym_SEMI] = ACTIONS(800),
    [anon_sym_RBRACE] = ACTIONS(800),
    [anon_sym_COMMA] = ACTIONS(800),
    [anon_sym_RPAREN] = ACTIONS(800),
    [sym_params_keyword] = ACTIONS(800),
    [anon_sym_LBRACK] = ACTIONS(800),
    [sym_comment] = ACTIONS(34),
  },
  [374] = {
    [anon_sym_SEMI] = ACTIONS(802),
    [anon_sym_RBRACE] = ACTIONS(802),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(802),
    [sym_params_keyword] = ACTIONS(802),
    [anon_sym_LBRACK] = ACTIONS(802),
    [sym__real_type_suffix] = ACTIONS(804),
    [sym__exponent_part] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [375] = {
    [anon_sym_SEMI] = ACTIONS(802),
    [anon_sym_RBRACE] = ACTIONS(802),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(802),
    [sym_params_keyword] = ACTIONS(802),
    [anon_sym_LBRACK] = ACTIONS(802),
    [sym_comment] = ACTIONS(34),
  },
  [376] = {
    [anon_sym_SEMI] = ACTIONS(802),
    [anon_sym_RBRACE] = ACTIONS(802),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(802),
    [sym_params_keyword] = ACTIONS(802),
    [anon_sym_LBRACK] = ACTIONS(802),
    [sym__real_type_suffix] = ACTIONS(804),
    [sym_comment] = ACTIONS(34),
  },
  [377] = {
    [anon_sym_SEMI] = ACTIONS(808),
    [anon_sym_RBRACE] = ACTIONS(808),
    [anon_sym_COMMA] = ACTIONS(808),
    [anon_sym_RPAREN] = ACTIONS(808),
    [sym_params_keyword] = ACTIONS(808),
    [anon_sym_LBRACK] = ACTIONS(808),
    [sym_comment] = ACTIONS(34),
  },
  [378] = {
    [sym__hexadecimal_escape_sequence] = ACTIONS(810),
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(810),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(810),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(810),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(810),
    [anon_sym_BSLASH0] = ACTIONS(810),
    [anon_sym_BSLASHa] = ACTIONS(810),
    [anon_sym_BSLASHb] = ACTIONS(810),
    [anon_sym_BSLASHf] = ACTIONS(810),
    [anon_sym_BSLASHn] = ACTIONS(810),
    [anon_sym_BSLASHr] = ACTIONS(810),
    [anon_sym_BSLASHt] = ACTIONS(810),
    [anon_sym_BSLASHv] = ACTIONS(810),
    [anon_sym_DQUOTE] = ACTIONS(810),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(810),
    [sym_comment] = ACTIONS(584),
  },
  [379] = {
    [anon_sym_SEMI] = ACTIONS(812),
    [anon_sym_RBRACE] = ACTIONS(812),
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_RPAREN] = ACTIONS(812),
    [sym_params_keyword] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(812),
    [sym_comment] = ACTIONS(34),
  },
  [380] = {
    [ts_builtin_sym_end] = ACTIONS(814),
    [anon_sym_namespace] = ACTIONS(814),
    [anon_sym_RBRACE] = ACTIONS(814),
    [anon_sym_class] = ACTIONS(814),
    [anon_sym_unsafe] = ACTIONS(814),
    [anon_sym_abstract] = ACTIONS(814),
    [anon_sym_sealed] = ACTIONS(814),
    [anon_sym_static] = ACTIONS(814),
    [anon_sym_new] = ACTIONS(814),
    [anon_sym_public] = ACTIONS(814),
    [anon_sym_protected] = ACTIONS(814),
    [anon_sym_internal] = ACTIONS(814),
    [anon_sym_private] = ACTIONS(814),
    [anon_sym_struct] = ACTIONS(814),
    [anon_sym_enum] = ACTIONS(814),
    [anon_sym_delegate] = ACTIONS(814),
    [anon_sym_LBRACK] = ACTIONS(814),
    [sym_comment] = ACTIONS(34),
  },
  [381] = {
    [ts_builtin_sym_end] = ACTIONS(814),
    [anon_sym_SEMI] = ACTIONS(816),
    [anon_sym_namespace] = ACTIONS(814),
    [anon_sym_RBRACE] = ACTIONS(814),
    [anon_sym_class] = ACTIONS(814),
    [anon_sym_unsafe] = ACTIONS(814),
    [anon_sym_abstract] = ACTIONS(814),
    [anon_sym_sealed] = ACTIONS(814),
    [anon_sym_static] = ACTIONS(814),
    [anon_sym_new] = ACTIONS(814),
    [anon_sym_public] = ACTIONS(814),
    [anon_sym_protected] = ACTIONS(814),
    [anon_sym_internal] = ACTIONS(814),
    [anon_sym_private] = ACTIONS(814),
    [anon_sym_struct] = ACTIONS(814),
    [anon_sym_enum] = ACTIONS(814),
    [anon_sym_delegate] = ACTIONS(814),
    [anon_sym_LBRACK] = ACTIONS(814),
    [sym_comment] = ACTIONS(34),
  },
  [382] = {
    [anon_sym_COMMA] = ACTIONS(818),
    [anon_sym_RBRACK] = ACTIONS(818),
    [sym_comment] = ACTIONS(34),
  },
  [383] = {
    [sym_identifier_name] = ACTIONS(820),
    [sym_comment] = ACTIONS(34),
  },
  [384] = {
    [anon_sym_COMMA] = ACTIONS(822),
    [anon_sym_RBRACK] = ACTIONS(824),
    [sym_comment] = ACTIONS(34),
  },
  [385] = {
    [anon_sym_RBRACK] = ACTIONS(826),
    [sym_comment] = ACTIONS(34),
  },
  [386] = {
    [anon_sym_sbyte] = ACTIONS(192),
    [anon_sym_byte] = ACTIONS(192),
    [anon_sym_short] = ACTIONS(192),
    [anon_sym_ushort] = ACTIONS(192),
    [anon_sym_int] = ACTIONS(192),
    [anon_sym_uint] = ACTIONS(192),
    [anon_sym_long] = ACTIONS(192),
    [anon_sym_ulong] = ACTIONS(192),
    [anon_sym_char] = ACTIONS(192),
    [anon_sym_ref] = ACTIONS(192),
    [anon_sym_out] = ACTIONS(192),
    [anon_sym_this] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_bool] = ACTIONS(192),
    [anon_sym_decimal] = ACTIONS(192),
    [anon_sym_double] = ACTIONS(192),
    [anon_sym_float] = ACTIONS(192),
    [anon_sym_object] = ACTIONS(192),
    [anon_sym_string] = ACTIONS(192),
    [sym_identifier_name] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [387] = {
    [anon_sym_COMMA] = ACTIONS(828),
    [anon_sym_RPAREN] = ACTIONS(828),
    [sym_params_keyword] = ACTIONS(828),
    [anon_sym_LBRACK] = ACTIONS(828),
    [sym_comment] = ACTIONS(34),
  },
  [388] = {
    [anon_sym_COMMA] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(830),
    [sym_params_keyword] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(830),
    [sym_comment] = ACTIONS(34),
  },
  [389] = {
    [anon_sym_RPAREN] = ACTIONS(832),
    [sym_comment] = ACTIONS(34),
  },
  [390] = {
    [sym_equals_value_clause] = STATE(415),
    [anon_sym_COMMA] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(830),
    [sym_params_keyword] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(830),
    [anon_sym_EQ] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
  },
  [391] = {
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [392] = {
    [ts_builtin_sym_end] = ACTIONS(836),
    [anon_sym_namespace] = ACTIONS(836),
    [anon_sym_RBRACE] = ACTIONS(836),
    [anon_sym_class] = ACTIONS(836),
    [anon_sym_unsafe] = ACTIONS(836),
    [anon_sym_abstract] = ACTIONS(836),
    [anon_sym_sealed] = ACTIONS(836),
    [anon_sym_static] = ACTIONS(836),
    [anon_sym_new] = ACTIONS(836),
    [anon_sym_public] = ACTIONS(836),
    [anon_sym_protected] = ACTIONS(836),
    [anon_sym_internal] = ACTIONS(836),
    [anon_sym_private] = ACTIONS(836),
    [anon_sym_struct] = ACTIONS(836),
    [anon_sym_enum] = ACTIONS(836),
    [anon_sym_delegate] = ACTIONS(836),
    [anon_sym_LBRACK] = ACTIONS(836),
    [sym_comment] = ACTIONS(34),
  },
  [393] = {
    [ts_builtin_sym_end] = ACTIONS(838),
    [anon_sym_namespace] = ACTIONS(838),
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_class] = ACTIONS(838),
    [anon_sym_unsafe] = ACTIONS(838),
    [anon_sym_abstract] = ACTIONS(838),
    [anon_sym_sealed] = ACTIONS(838),
    [anon_sym_static] = ACTIONS(838),
    [anon_sym_new] = ACTIONS(838),
    [anon_sym_public] = ACTIONS(838),
    [anon_sym_protected] = ACTIONS(838),
    [anon_sym_internal] = ACTIONS(838),
    [anon_sym_private] = ACTIONS(838),
    [anon_sym_struct] = ACTIONS(838),
    [anon_sym_enum] = ACTIONS(838),
    [anon_sym_delegate] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(838),
    [sym_comment] = ACTIONS(34),
  },
  [394] = {
    [aux_sym_enum_declaration_repeat1] = STATE(417),
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
  },
  [395] = {
    [anon_sym_RBRACE] = ACTIONS(572),
    [anon_sym_class] = ACTIONS(840),
    [anon_sym_unsafe] = ACTIONS(840),
    [anon_sym_abstract] = ACTIONS(840),
    [anon_sym_sealed] = ACTIONS(840),
    [anon_sym_static] = ACTIONS(840),
    [anon_sym_new] = ACTIONS(840),
    [anon_sym_public] = ACTIONS(840),
    [anon_sym_protected] = ACTIONS(840),
    [anon_sym_internal] = ACTIONS(840),
    [anon_sym_private] = ACTIONS(840),
    [anon_sym_struct] = ACTIONS(840),
    [anon_sym_enum] = ACTIONS(840),
    [anon_sym_sbyte] = ACTIONS(840),
    [anon_sym_byte] = ACTIONS(840),
    [anon_sym_short] = ACTIONS(840),
    [anon_sym_ushort] = ACTIONS(840),
    [anon_sym_int] = ACTIONS(840),
    [anon_sym_uint] = ACTIONS(840),
    [anon_sym_long] = ACTIONS(840),
    [anon_sym_ulong] = ACTIONS(840),
    [anon_sym_char] = ACTIONS(840),
    [anon_sym_delegate] = ACTIONS(840),
    [anon_sym_LBRACK] = ACTIONS(572),
    [sym_const_keyword] = ACTIONS(840),
    [anon_sym_readonly] = ACTIONS(840),
    [anon_sym_volatile] = ACTIONS(840),
    [anon_sym_bool] = ACTIONS(840),
    [anon_sym_decimal] = ACTIONS(840),
    [anon_sym_double] = ACTIONS(840),
    [anon_sym_float] = ACTIONS(840),
    [anon_sym_object] = ACTIONS(840),
    [anon_sym_string] = ACTIONS(840),
    [sym_identifier_name] = ACTIONS(842),
    [sym_comment] = ACTIONS(34),
  },
  [396] = {
    [anon_sym_RBRACE] = ACTIONS(574),
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
    [anon_sym_struct] = ACTIONS(844),
    [anon_sym_enum] = ACTIONS(844),
    [anon_sym_sbyte] = ACTIONS(844),
    [anon_sym_byte] = ACTIONS(844),
    [anon_sym_short] = ACTIONS(844),
    [anon_sym_ushort] = ACTIONS(844),
    [anon_sym_int] = ACTIONS(844),
    [anon_sym_uint] = ACTIONS(844),
    [anon_sym_long] = ACTIONS(844),
    [anon_sym_ulong] = ACTIONS(844),
    [anon_sym_char] = ACTIONS(844),
    [anon_sym_delegate] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(574),
    [sym_const_keyword] = ACTIONS(844),
    [anon_sym_readonly] = ACTIONS(844),
    [anon_sym_volatile] = ACTIONS(844),
    [anon_sym_bool] = ACTIONS(844),
    [anon_sym_decimal] = ACTIONS(844),
    [anon_sym_double] = ACTIONS(844),
    [anon_sym_float] = ACTIONS(844),
    [anon_sym_object] = ACTIONS(844),
    [anon_sym_string] = ACTIONS(844),
    [sym_identifier_name] = ACTIONS(846),
    [sym_comment] = ACTIONS(34),
  },
  [397] = {
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(848),
    [anon_sym_unsafe] = ACTIONS(848),
    [anon_sym_abstract] = ACTIONS(848),
    [anon_sym_sealed] = ACTIONS(848),
    [anon_sym_static] = ACTIONS(848),
    [anon_sym_new] = ACTIONS(848),
    [anon_sym_public] = ACTIONS(848),
    [anon_sym_protected] = ACTIONS(848),
    [anon_sym_internal] = ACTIONS(848),
    [anon_sym_private] = ACTIONS(848),
    [anon_sym_struct] = ACTIONS(848),
    [anon_sym_enum] = ACTIONS(848),
    [anon_sym_sbyte] = ACTIONS(848),
    [anon_sym_byte] = ACTIONS(848),
    [anon_sym_short] = ACTIONS(848),
    [anon_sym_ushort] = ACTIONS(848),
    [anon_sym_int] = ACTIONS(848),
    [anon_sym_uint] = ACTIONS(848),
    [anon_sym_long] = ACTIONS(848),
    [anon_sym_ulong] = ACTIONS(848),
    [anon_sym_char] = ACTIONS(848),
    [anon_sym_delegate] = ACTIONS(848),
    [anon_sym_LBRACK] = ACTIONS(616),
    [sym_const_keyword] = ACTIONS(848),
    [anon_sym_readonly] = ACTIONS(848),
    [anon_sym_volatile] = ACTIONS(848),
    [anon_sym_bool] = ACTIONS(848),
    [anon_sym_decimal] = ACTIONS(848),
    [anon_sym_double] = ACTIONS(848),
    [anon_sym_float] = ACTIONS(848),
    [anon_sym_object] = ACTIONS(848),
    [anon_sym_string] = ACTIONS(848),
    [sym_identifier_name] = ACTIONS(850),
    [sym_comment] = ACTIONS(34),
  },
  [398] = {
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(848),
    [anon_sym_unsafe] = ACTIONS(848),
    [anon_sym_abstract] = ACTIONS(848),
    [anon_sym_sealed] = ACTIONS(848),
    [anon_sym_static] = ACTIONS(848),
    [anon_sym_new] = ACTIONS(848),
    [anon_sym_public] = ACTIONS(848),
    [anon_sym_protected] = ACTIONS(848),
    [anon_sym_internal] = ACTIONS(848),
    [anon_sym_private] = ACTIONS(848),
    [anon_sym_struct] = ACTIONS(848),
    [anon_sym_enum] = ACTIONS(848),
    [anon_sym_sbyte] = ACTIONS(848),
    [anon_sym_byte] = ACTIONS(848),
    [anon_sym_short] = ACTIONS(848),
    [anon_sym_ushort] = ACTIONS(848),
    [anon_sym_int] = ACTIONS(848),
    [anon_sym_uint] = ACTIONS(848),
    [anon_sym_long] = ACTIONS(848),
    [anon_sym_ulong] = ACTIONS(848),
    [anon_sym_char] = ACTIONS(848),
    [anon_sym_delegate] = ACTIONS(848),
    [anon_sym_LBRACK] = ACTIONS(616),
    [sym_const_keyword] = ACTIONS(848),
    [anon_sym_readonly] = ACTIONS(848),
    [anon_sym_volatile] = ACTIONS(848),
    [anon_sym_bool] = ACTIONS(848),
    [anon_sym_decimal] = ACTIONS(848),
    [anon_sym_double] = ACTIONS(848),
    [anon_sym_float] = ACTIONS(848),
    [anon_sym_object] = ACTIONS(848),
    [anon_sym_string] = ACTIONS(848),
    [sym_identifier_name] = ACTIONS(850),
    [sym_comment] = ACTIONS(34),
  },
  [399] = {
    [aux_sym_enum_declaration_repeat1] = STATE(420),
    [anon_sym_RBRACE] = ACTIONS(854),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
  },
  [400] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [401] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(858),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [402] = {
    [anon_sym_RBRACE] = ACTIONS(854),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [403] = {
    [sym_enum_member_declaration] = STATE(423),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [404] = {
    [anon_sym_RBRACE] = ACTIONS(650),
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
    [anon_sym_struct] = ACTIONS(860),
    [anon_sym_enum] = ACTIONS(860),
    [anon_sym_sbyte] = ACTIONS(860),
    [anon_sym_byte] = ACTIONS(860),
    [anon_sym_short] = ACTIONS(860),
    [anon_sym_ushort] = ACTIONS(860),
    [anon_sym_int] = ACTIONS(860),
    [anon_sym_uint] = ACTIONS(860),
    [anon_sym_long] = ACTIONS(860),
    [anon_sym_ulong] = ACTIONS(860),
    [anon_sym_char] = ACTIONS(860),
    [anon_sym_delegate] = ACTIONS(860),
    [anon_sym_LBRACK] = ACTIONS(650),
    [sym_const_keyword] = ACTIONS(860),
    [anon_sym_readonly] = ACTIONS(860),
    [anon_sym_volatile] = ACTIONS(860),
    [anon_sym_bool] = ACTIONS(860),
    [anon_sym_decimal] = ACTIONS(860),
    [anon_sym_double] = ACTIONS(860),
    [anon_sym_float] = ACTIONS(860),
    [anon_sym_object] = ACTIONS(860),
    [anon_sym_string] = ACTIONS(860),
    [sym_identifier_name] = ACTIONS(862),
    [sym_comment] = ACTIONS(34),
  },
  [405] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(424),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [406] = {
    [sym__type_declaration] = STATE(120),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(120),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym_class_declaration_repeat1] = STATE(425),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(858),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [407] = {
    [anon_sym_LBRACE] = ACTIONS(864),
    [sym_comment] = ACTIONS(34),
  },
  [408] = {
    [anon_sym_SEMI] = ACTIONS(866),
    [sym_comment] = ACTIONS(34),
  },
  [409] = {
    [anon_sym_SEMI] = ACTIONS(868),
    [anon_sym_RBRACE] = ACTIONS(868),
    [anon_sym_COMMA] = ACTIONS(868),
    [anon_sym_RPAREN] = ACTIONS(868),
    [sym_params_keyword] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
    [sym_comment] = ACTIONS(34),
  },
  [410] = {
    [anon_sym_SEMI] = ACTIONS(868),
    [anon_sym_RBRACE] = ACTIONS(868),
    [anon_sym_COMMA] = ACTIONS(868),
    [anon_sym_RPAREN] = ACTIONS(868),
    [sym_params_keyword] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
    [sym__real_type_suffix] = ACTIONS(870),
    [sym_comment] = ACTIONS(34),
  },
  [411] = {
    [ts_builtin_sym_end] = ACTIONS(872),
    [anon_sym_namespace] = ACTIONS(872),
    [anon_sym_RBRACE] = ACTIONS(872),
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
    [anon_sym_struct] = ACTIONS(872),
    [anon_sym_enum] = ACTIONS(872),
    [anon_sym_delegate] = ACTIONS(872),
    [anon_sym_LBRACK] = ACTIONS(872),
    [sym_comment] = ACTIONS(34),
  },
  [412] = {
    [anon_sym_COMMA] = ACTIONS(874),
    [anon_sym_RBRACK] = ACTIONS(874),
    [sym_comment] = ACTIONS(34),
  },
  [413] = {
    [sym_identifier_name] = ACTIONS(876),
    [sym_comment] = ACTIONS(34),
  },
  [414] = {
    [anon_sym_sbyte] = ACTIONS(258),
    [anon_sym_byte] = ACTIONS(258),
    [anon_sym_short] = ACTIONS(258),
    [anon_sym_ushort] = ACTIONS(258),
    [anon_sym_int] = ACTIONS(258),
    [anon_sym_uint] = ACTIONS(258),
    [anon_sym_long] = ACTIONS(258),
    [anon_sym_ulong] = ACTIONS(258),
    [anon_sym_char] = ACTIONS(258),
    [anon_sym_ref] = ACTIONS(258),
    [anon_sym_out] = ACTIONS(258),
    [anon_sym_this] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_bool] = ACTIONS(258),
    [anon_sym_decimal] = ACTIONS(258),
    [anon_sym_double] = ACTIONS(258),
    [anon_sym_float] = ACTIONS(258),
    [anon_sym_object] = ACTIONS(258),
    [anon_sym_string] = ACTIONS(258),
    [sym_identifier_name] = ACTIONS(262),
    [sym_comment] = ACTIONS(34),
  },
  [415] = {
    [anon_sym_COMMA] = ACTIONS(878),
    [anon_sym_RPAREN] = ACTIONS(878),
    [sym_params_keyword] = ACTIONS(878),
    [anon_sym_LBRACK] = ACTIONS(878),
    [sym_comment] = ACTIONS(34),
  },
  [416] = {
    [ts_builtin_sym_end] = ACTIONS(872),
    [anon_sym_SEMI] = ACTIONS(880),
    [anon_sym_namespace] = ACTIONS(872),
    [anon_sym_RBRACE] = ACTIONS(872),
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
    [anon_sym_struct] = ACTIONS(872),
    [anon_sym_enum] = ACTIONS(872),
    [anon_sym_delegate] = ACTIONS(872),
    [anon_sym_LBRACK] = ACTIONS(872),
    [sym_comment] = ACTIONS(34),
  },
  [417] = {
    [anon_sym_RBRACE] = ACTIONS(882),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [418] = {
    [anon_sym_RBRACE] = ACTIONS(724),
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
    [anon_sym_LBRACK] = ACTIONS(724),
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
    [sym_comment] = ACTIONS(34),
  },
  [419] = {
    [anon_sym_SEMI] = ACTIONS(888),
    [anon_sym_RBRACE] = ACTIONS(724),
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
    [anon_sym_LBRACK] = ACTIONS(724),
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
    [sym_comment] = ACTIONS(34),
  },
  [420] = {
    [anon_sym_RBRACE] = ACTIONS(890),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [421] = {
    [anon_sym_RBRACE] = ACTIONS(750),
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
    [anon_sym_LBRACK] = ACTIONS(750),
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
    [sym_comment] = ACTIONS(34),
  },
  [422] = {
    [anon_sym_RBRACE] = ACTIONS(752),
    [anon_sym_class] = ACTIONS(896),
    [anon_sym_unsafe] = ACTIONS(896),
    [anon_sym_abstract] = ACTIONS(896),
    [anon_sym_sealed] = ACTIONS(896),
    [anon_sym_static] = ACTIONS(896),
    [anon_sym_new] = ACTIONS(896),
    [anon_sym_public] = ACTIONS(896),
    [anon_sym_protected] = ACTIONS(896),
    [anon_sym_internal] = ACTIONS(896),
    [anon_sym_private] = ACTIONS(896),
    [anon_sym_struct] = ACTIONS(896),
    [anon_sym_enum] = ACTIONS(896),
    [anon_sym_sbyte] = ACTIONS(896),
    [anon_sym_byte] = ACTIONS(896),
    [anon_sym_short] = ACTIONS(896),
    [anon_sym_ushort] = ACTIONS(896),
    [anon_sym_int] = ACTIONS(896),
    [anon_sym_uint] = ACTIONS(896),
    [anon_sym_long] = ACTIONS(896),
    [anon_sym_ulong] = ACTIONS(896),
    [anon_sym_char] = ACTIONS(896),
    [anon_sym_delegate] = ACTIONS(896),
    [anon_sym_LBRACK] = ACTIONS(752),
    [sym_const_keyword] = ACTIONS(896),
    [anon_sym_readonly] = ACTIONS(896),
    [anon_sym_volatile] = ACTIONS(896),
    [anon_sym_bool] = ACTIONS(896),
    [anon_sym_decimal] = ACTIONS(896),
    [anon_sym_double] = ACTIONS(896),
    [anon_sym_float] = ACTIONS(896),
    [anon_sym_object] = ACTIONS(896),
    [anon_sym_string] = ACTIONS(896),
    [sym_identifier_name] = ACTIONS(898),
    [sym_comment] = ACTIONS(34),
  },
  [423] = {
    [aux_sym_enum_declaration_repeat1] = STATE(433),
    [anon_sym_RBRACE] = ACTIONS(890),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
  },
  [424] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(900),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [425] = {
    [sym__type_declaration] = STATE(184),
    [sym_class_declaration] = STATE(121),
    [sym_class_modifiers] = STATE(122),
    [sym__class_modifiers] = STATE(19),
    [sym_struct_declaration] = STATE(121),
    [sym_struct_modifiers] = STATE(123),
    [sym__struct_modifiers] = STATE(21),
    [sym_enum_declaration] = STATE(121),
    [sym_enum_modifier] = STATE(124),
    [sym_delegate_declaration] = STATE(121),
    [sym_delegate_modifier] = STATE(125),
    [sym__attributes] = STATE(126),
    [sym__attribute_section] = STATE(25),
    [sym_field_declaration] = STATE(184),
    [sym_field_modifiers] = STATE(127),
    [sym__field_modifiers] = STATE(128),
    [sym_variable_declaration] = STATE(129),
    [sym__type] = STATE(130),
    [sym_generic_name] = STATE(50),
    [sym_predefined_type] = STATE(50),
    [aux_sym__attributes_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(902),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_unsafe] = ACTIONS(218),
    [anon_sym_abstract] = ACTIONS(220),
    [anon_sym_sealed] = ACTIONS(220),
    [anon_sym_static] = ACTIONS(222),
    [anon_sym_new] = ACTIONS(224),
    [anon_sym_public] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(224),
    [anon_sym_internal] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_struct] = ACTIONS(226),
    [anon_sym_enum] = ACTIONS(228),
    [anon_sym_sbyte] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_short] = ACTIONS(62),
    [anon_sym_ushort] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_uint] = ACTIONS(62),
    [anon_sym_long] = ACTIONS(62),
    [anon_sym_ulong] = ACTIONS(62),
    [anon_sym_char] = ACTIONS(62),
    [anon_sym_delegate] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(104),
    [sym_const_keyword] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(234),
    [anon_sym_volatile] = ACTIONS(234),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_decimal] = ACTIONS(62),
    [anon_sym_double] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_object] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [sym_identifier_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(34),
  },
  [426] = {
    [sym_enum_member_declaration] = STATE(436),
    [sym__attributes] = STATE(141),
    [sym__attribute_section] = STATE(142),
    [aux_sym__attributes_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_identifier_name] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [427] = {
    [anon_sym_RBRACE] = ACTIONS(758),
    [anon_sym_class] = ACTIONS(904),
    [anon_sym_unsafe] = ACTIONS(904),
    [anon_sym_abstract] = ACTIONS(904),
    [anon_sym_sealed] = ACTIONS(904),
    [anon_sym_static] = ACTIONS(904),
    [anon_sym_new] = ACTIONS(904),
    [anon_sym_public] = ACTIONS(904),
    [anon_sym_protected] = ACTIONS(904),
    [anon_sym_internal] = ACTIONS(904),
    [anon_sym_private] = ACTIONS(904),
    [anon_sym_struct] = ACTIONS(904),
    [anon_sym_enum] = ACTIONS(904),
    [anon_sym_sbyte] = ACTIONS(904),
    [anon_sym_byte] = ACTIONS(904),
    [anon_sym_short] = ACTIONS(904),
    [anon_sym_ushort] = ACTIONS(904),
    [anon_sym_int] = ACTIONS(904),
    [anon_sym_uint] = ACTIONS(904),
    [anon_sym_long] = ACTIONS(904),
    [anon_sym_ulong] = ACTIONS(904),
    [anon_sym_char] = ACTIONS(904),
    [anon_sym_delegate] = ACTIONS(904),
    [anon_sym_LBRACK] = ACTIONS(758),
    [sym_const_keyword] = ACTIONS(904),
    [anon_sym_readonly] = ACTIONS(904),
    [anon_sym_volatile] = ACTIONS(904),
    [anon_sym_bool] = ACTIONS(904),
    [anon_sym_decimal] = ACTIONS(904),
    [anon_sym_double] = ACTIONS(904),
    [anon_sym_float] = ACTIONS(904),
    [anon_sym_object] = ACTIONS(904),
    [anon_sym_string] = ACTIONS(904),
    [sym_identifier_name] = ACTIONS(906),
    [sym_comment] = ACTIONS(34),
  },
  [428] = {
    [anon_sym_SEMI] = ACTIONS(908),
    [anon_sym_RBRACE] = ACTIONS(908),
    [anon_sym_COMMA] = ACTIONS(908),
    [anon_sym_RPAREN] = ACTIONS(908),
    [sym_params_keyword] = ACTIONS(908),
    [anon_sym_LBRACK] = ACTIONS(908),
    [sym_comment] = ACTIONS(34),
  },
  [429] = {
    [ts_builtin_sym_end] = ACTIONS(910),
    [anon_sym_namespace] = ACTIONS(910),
    [anon_sym_RBRACE] = ACTIONS(910),
    [anon_sym_class] = ACTIONS(910),
    [anon_sym_unsafe] = ACTIONS(910),
    [anon_sym_abstract] = ACTIONS(910),
    [anon_sym_sealed] = ACTIONS(910),
    [anon_sym_static] = ACTIONS(910),
    [anon_sym_new] = ACTIONS(910),
    [anon_sym_public] = ACTIONS(910),
    [anon_sym_protected] = ACTIONS(910),
    [anon_sym_internal] = ACTIONS(910),
    [anon_sym_private] = ACTIONS(910),
    [anon_sym_struct] = ACTIONS(910),
    [anon_sym_enum] = ACTIONS(910),
    [anon_sym_delegate] = ACTIONS(910),
    [anon_sym_LBRACK] = ACTIONS(910),
    [sym_comment] = ACTIONS(34),
  },
  [430] = {
    [ts_builtin_sym_end] = ACTIONS(910),
    [anon_sym_SEMI] = ACTIONS(912),
    [anon_sym_namespace] = ACTIONS(910),
    [anon_sym_RBRACE] = ACTIONS(910),
    [anon_sym_class] = ACTIONS(910),
    [anon_sym_unsafe] = ACTIONS(910),
    [anon_sym_abstract] = ACTIONS(910),
    [anon_sym_sealed] = ACTIONS(910),
    [anon_sym_static] = ACTIONS(910),
    [anon_sym_new] = ACTIONS(910),
    [anon_sym_public] = ACTIONS(910),
    [anon_sym_protected] = ACTIONS(910),
    [anon_sym_internal] = ACTIONS(910),
    [anon_sym_private] = ACTIONS(910),
    [anon_sym_struct] = ACTIONS(910),
    [anon_sym_enum] = ACTIONS(910),
    [anon_sym_delegate] = ACTIONS(910),
    [anon_sym_LBRACK] = ACTIONS(910),
    [sym_comment] = ACTIONS(34),
  },
  [431] = {
    [anon_sym_RBRACE] = ACTIONS(814),
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
    [anon_sym_LBRACK] = ACTIONS(814),
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
    [sym_comment] = ACTIONS(34),
  },
  [432] = {
    [anon_sym_SEMI] = ACTIONS(918),
    [anon_sym_RBRACE] = ACTIONS(814),
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
    [anon_sym_LBRACK] = ACTIONS(814),
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
    [sym_comment] = ACTIONS(34),
  },
  [433] = {
    [anon_sym_RBRACE] = ACTIONS(920),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [434] = {
    [anon_sym_RBRACE] = ACTIONS(836),
    [anon_sym_class] = ACTIONS(922),
    [anon_sym_unsafe] = ACTIONS(922),
    [anon_sym_abstract] = ACTIONS(922),
    [anon_sym_sealed] = ACTIONS(922),
    [anon_sym_static] = ACTIONS(922),
    [anon_sym_new] = ACTIONS(922),
    [anon_sym_public] = ACTIONS(922),
    [anon_sym_protected] = ACTIONS(922),
    [anon_sym_internal] = ACTIONS(922),
    [anon_sym_private] = ACTIONS(922),
    [anon_sym_struct] = ACTIONS(922),
    [anon_sym_enum] = ACTIONS(922),
    [anon_sym_sbyte] = ACTIONS(922),
    [anon_sym_byte] = ACTIONS(922),
    [anon_sym_short] = ACTIONS(922),
    [anon_sym_ushort] = ACTIONS(922),
    [anon_sym_int] = ACTIONS(922),
    [anon_sym_uint] = ACTIONS(922),
    [anon_sym_long] = ACTIONS(922),
    [anon_sym_ulong] = ACTIONS(922),
    [anon_sym_char] = ACTIONS(922),
    [anon_sym_delegate] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(836),
    [sym_const_keyword] = ACTIONS(922),
    [anon_sym_readonly] = ACTIONS(922),
    [anon_sym_volatile] = ACTIONS(922),
    [anon_sym_bool] = ACTIONS(922),
    [anon_sym_decimal] = ACTIONS(922),
    [anon_sym_double] = ACTIONS(922),
    [anon_sym_float] = ACTIONS(922),
    [anon_sym_object] = ACTIONS(922),
    [anon_sym_string] = ACTIONS(922),
    [sym_identifier_name] = ACTIONS(924),
    [sym_comment] = ACTIONS(34),
  },
  [435] = {
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_class] = ACTIONS(926),
    [anon_sym_unsafe] = ACTIONS(926),
    [anon_sym_abstract] = ACTIONS(926),
    [anon_sym_sealed] = ACTIONS(926),
    [anon_sym_static] = ACTIONS(926),
    [anon_sym_new] = ACTIONS(926),
    [anon_sym_public] = ACTIONS(926),
    [anon_sym_protected] = ACTIONS(926),
    [anon_sym_internal] = ACTIONS(926),
    [anon_sym_private] = ACTIONS(926),
    [anon_sym_struct] = ACTIONS(926),
    [anon_sym_enum] = ACTIONS(926),
    [anon_sym_sbyte] = ACTIONS(926),
    [anon_sym_byte] = ACTIONS(926),
    [anon_sym_short] = ACTIONS(926),
    [anon_sym_ushort] = ACTIONS(926),
    [anon_sym_int] = ACTIONS(926),
    [anon_sym_uint] = ACTIONS(926),
    [anon_sym_long] = ACTIONS(926),
    [anon_sym_ulong] = ACTIONS(926),
    [anon_sym_char] = ACTIONS(926),
    [anon_sym_delegate] = ACTIONS(926),
    [anon_sym_LBRACK] = ACTIONS(838),
    [sym_const_keyword] = ACTIONS(926),
    [anon_sym_readonly] = ACTIONS(926),
    [anon_sym_volatile] = ACTIONS(926),
    [anon_sym_bool] = ACTIONS(926),
    [anon_sym_decimal] = ACTIONS(926),
    [anon_sym_double] = ACTIONS(926),
    [anon_sym_float] = ACTIONS(926),
    [anon_sym_object] = ACTIONS(926),
    [anon_sym_string] = ACTIONS(926),
    [sym_identifier_name] = ACTIONS(928),
    [sym_comment] = ACTIONS(34),
  },
  [436] = {
    [aux_sym_enum_declaration_repeat1] = STATE(440),
    [anon_sym_RBRACE] = ACTIONS(920),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(34),
  },
  [437] = {
    [ts_builtin_sym_end] = ACTIONS(930),
    [anon_sym_namespace] = ACTIONS(930),
    [anon_sym_RBRACE] = ACTIONS(930),
    [anon_sym_class] = ACTIONS(930),
    [anon_sym_unsafe] = ACTIONS(930),
    [anon_sym_abstract] = ACTIONS(930),
    [anon_sym_sealed] = ACTIONS(930),
    [anon_sym_static] = ACTIONS(930),
    [anon_sym_new] = ACTIONS(930),
    [anon_sym_public] = ACTIONS(930),
    [anon_sym_protected] = ACTIONS(930),
    [anon_sym_internal] = ACTIONS(930),
    [anon_sym_private] = ACTIONS(930),
    [anon_sym_struct] = ACTIONS(930),
    [anon_sym_enum] = ACTIONS(930),
    [anon_sym_delegate] = ACTIONS(930),
    [anon_sym_LBRACK] = ACTIONS(930),
    [sym_comment] = ACTIONS(34),
  },
  [438] = {
    [anon_sym_RBRACE] = ACTIONS(872),
    [anon_sym_class] = ACTIONS(932),
    [anon_sym_unsafe] = ACTIONS(932),
    [anon_sym_abstract] = ACTIONS(932),
    [anon_sym_sealed] = ACTIONS(932),
    [anon_sym_static] = ACTIONS(932),
    [anon_sym_new] = ACTIONS(932),
    [anon_sym_public] = ACTIONS(932),
    [anon_sym_protected] = ACTIONS(932),
    [anon_sym_internal] = ACTIONS(932),
    [anon_sym_private] = ACTIONS(932),
    [anon_sym_struct] = ACTIONS(932),
    [anon_sym_enum] = ACTIONS(932),
    [anon_sym_sbyte] = ACTIONS(932),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_ushort] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_uint] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_ulong] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_delegate] = ACTIONS(932),
    [anon_sym_LBRACK] = ACTIONS(872),
    [sym_const_keyword] = ACTIONS(932),
    [anon_sym_readonly] = ACTIONS(932),
    [anon_sym_volatile] = ACTIONS(932),
    [anon_sym_bool] = ACTIONS(932),
    [anon_sym_decimal] = ACTIONS(932),
    [anon_sym_double] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(932),
    [anon_sym_object] = ACTIONS(932),
    [anon_sym_string] = ACTIONS(932),
    [sym_identifier_name] = ACTIONS(934),
    [sym_comment] = ACTIONS(34),
  },
  [439] = {
    [anon_sym_SEMI] = ACTIONS(936),
    [anon_sym_RBRACE] = ACTIONS(872),
    [anon_sym_class] = ACTIONS(932),
    [anon_sym_unsafe] = ACTIONS(932),
    [anon_sym_abstract] = ACTIONS(932),
    [anon_sym_sealed] = ACTIONS(932),
    [anon_sym_static] = ACTIONS(932),
    [anon_sym_new] = ACTIONS(932),
    [anon_sym_public] = ACTIONS(932),
    [anon_sym_protected] = ACTIONS(932),
    [anon_sym_internal] = ACTIONS(932),
    [anon_sym_private] = ACTIONS(932),
    [anon_sym_struct] = ACTIONS(932),
    [anon_sym_enum] = ACTIONS(932),
    [anon_sym_sbyte] = ACTIONS(932),
    [anon_sym_byte] = ACTIONS(932),
    [anon_sym_short] = ACTIONS(932),
    [anon_sym_ushort] = ACTIONS(932),
    [anon_sym_int] = ACTIONS(932),
    [anon_sym_uint] = ACTIONS(932),
    [anon_sym_long] = ACTIONS(932),
    [anon_sym_ulong] = ACTIONS(932),
    [anon_sym_char] = ACTIONS(932),
    [anon_sym_delegate] = ACTIONS(932),
    [anon_sym_LBRACK] = ACTIONS(872),
    [sym_const_keyword] = ACTIONS(932),
    [anon_sym_readonly] = ACTIONS(932),
    [anon_sym_volatile] = ACTIONS(932),
    [anon_sym_bool] = ACTIONS(932),
    [anon_sym_decimal] = ACTIONS(932),
    [anon_sym_double] = ACTIONS(932),
    [anon_sym_float] = ACTIONS(932),
    [anon_sym_object] = ACTIONS(932),
    [anon_sym_string] = ACTIONS(932),
    [sym_identifier_name] = ACTIONS(934),
    [sym_comment] = ACTIONS(34),
  },
  [440] = {
    [anon_sym_RBRACE] = ACTIONS(938),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(34),
  },
  [441] = {
    [anon_sym_RBRACE] = ACTIONS(910),
    [anon_sym_class] = ACTIONS(940),
    [anon_sym_unsafe] = ACTIONS(940),
    [anon_sym_abstract] = ACTIONS(940),
    [anon_sym_sealed] = ACTIONS(940),
    [anon_sym_static] = ACTIONS(940),
    [anon_sym_new] = ACTIONS(940),
    [anon_sym_public] = ACTIONS(940),
    [anon_sym_protected] = ACTIONS(940),
    [anon_sym_internal] = ACTIONS(940),
    [anon_sym_private] = ACTIONS(940),
    [anon_sym_struct] = ACTIONS(940),
    [anon_sym_enum] = ACTIONS(940),
    [anon_sym_sbyte] = ACTIONS(940),
    [anon_sym_byte] = ACTIONS(940),
    [anon_sym_short] = ACTIONS(940),
    [anon_sym_ushort] = ACTIONS(940),
    [anon_sym_int] = ACTIONS(940),
    [anon_sym_uint] = ACTIONS(940),
    [anon_sym_long] = ACTIONS(940),
    [anon_sym_ulong] = ACTIONS(940),
    [anon_sym_char] = ACTIONS(940),
    [anon_sym_delegate] = ACTIONS(940),
    [anon_sym_LBRACK] = ACTIONS(910),
    [sym_const_keyword] = ACTIONS(940),
    [anon_sym_readonly] = ACTIONS(940),
    [anon_sym_volatile] = ACTIONS(940),
    [anon_sym_bool] = ACTIONS(940),
    [anon_sym_decimal] = ACTIONS(940),
    [anon_sym_double] = ACTIONS(940),
    [anon_sym_float] = ACTIONS(940),
    [anon_sym_object] = ACTIONS(940),
    [anon_sym_string] = ACTIONS(940),
    [sym_identifier_name] = ACTIONS(942),
    [sym_comment] = ACTIONS(34),
  },
  [442] = {
    [anon_sym_SEMI] = ACTIONS(944),
    [anon_sym_RBRACE] = ACTIONS(910),
    [anon_sym_class] = ACTIONS(940),
    [anon_sym_unsafe] = ACTIONS(940),
    [anon_sym_abstract] = ACTIONS(940),
    [anon_sym_sealed] = ACTIONS(940),
    [anon_sym_static] = ACTIONS(940),
    [anon_sym_new] = ACTIONS(940),
    [anon_sym_public] = ACTIONS(940),
    [anon_sym_protected] = ACTIONS(940),
    [anon_sym_internal] = ACTIONS(940),
    [anon_sym_private] = ACTIONS(940),
    [anon_sym_struct] = ACTIONS(940),
    [anon_sym_enum] = ACTIONS(940),
    [anon_sym_sbyte] = ACTIONS(940),
    [anon_sym_byte] = ACTIONS(940),
    [anon_sym_short] = ACTIONS(940),
    [anon_sym_ushort] = ACTIONS(940),
    [anon_sym_int] = ACTIONS(940),
    [anon_sym_uint] = ACTIONS(940),
    [anon_sym_long] = ACTIONS(940),
    [anon_sym_ulong] = ACTIONS(940),
    [anon_sym_char] = ACTIONS(940),
    [anon_sym_delegate] = ACTIONS(940),
    [anon_sym_LBRACK] = ACTIONS(910),
    [sym_const_keyword] = ACTIONS(940),
    [anon_sym_readonly] = ACTIONS(940),
    [anon_sym_volatile] = ACTIONS(940),
    [anon_sym_bool] = ACTIONS(940),
    [anon_sym_decimal] = ACTIONS(940),
    [anon_sym_double] = ACTIONS(940),
    [anon_sym_float] = ACTIONS(940),
    [anon_sym_object] = ACTIONS(940),
    [anon_sym_string] = ACTIONS(940),
    [sym_identifier_name] = ACTIONS(942),
    [sym_comment] = ACTIONS(34),
  },
  [443] = {
    [anon_sym_RBRACE] = ACTIONS(930),
    [anon_sym_class] = ACTIONS(946),
    [anon_sym_unsafe] = ACTIONS(946),
    [anon_sym_abstract] = ACTIONS(946),
    [anon_sym_sealed] = ACTIONS(946),
    [anon_sym_static] = ACTIONS(946),
    [anon_sym_new] = ACTIONS(946),
    [anon_sym_public] = ACTIONS(946),
    [anon_sym_protected] = ACTIONS(946),
    [anon_sym_internal] = ACTIONS(946),
    [anon_sym_private] = ACTIONS(946),
    [anon_sym_struct] = ACTIONS(946),
    [anon_sym_enum] = ACTIONS(946),
    [anon_sym_sbyte] = ACTIONS(946),
    [anon_sym_byte] = ACTIONS(946),
    [anon_sym_short] = ACTIONS(946),
    [anon_sym_ushort] = ACTIONS(946),
    [anon_sym_int] = ACTIONS(946),
    [anon_sym_uint] = ACTIONS(946),
    [anon_sym_long] = ACTIONS(946),
    [anon_sym_ulong] = ACTIONS(946),
    [anon_sym_char] = ACTIONS(946),
    [anon_sym_delegate] = ACTIONS(946),
    [anon_sym_LBRACK] = ACTIONS(930),
    [sym_const_keyword] = ACTIONS(946),
    [anon_sym_readonly] = ACTIONS(946),
    [anon_sym_volatile] = ACTIONS(946),
    [anon_sym_bool] = ACTIONS(946),
    [anon_sym_decimal] = ACTIONS(946),
    [anon_sym_double] = ACTIONS(946),
    [anon_sym_float] = ACTIONS(946),
    [anon_sym_object] = ACTIONS(946),
    [anon_sym_string] = ACTIONS(946),
    [sym_identifier_name] = ACTIONS(948),
    [sym_comment] = ACTIONS(34),
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
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_modifier, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 2),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_modifier, 1),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_declaration, 1),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 4),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
  [442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_modifier, 1),
  [504] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_modifier, 1),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 5),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
  [544] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(313),
  [580] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(314),
  [582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(315),
  [584] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(321),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(322),
  [604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(323),
  [606] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(324),
  [608] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 2),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
  [658] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
  [664] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
  [682] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [710] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
  [712] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
  [714] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
  [718] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
  [720] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(377),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 3),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 3),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_type, 2),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 2),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
  [762] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
  [768] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
  [776] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5),
  [782] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 5),
  [796] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 5),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
  [810] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 2),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__formal_parameter_list_repeat1, 3),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 4),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_array, 4),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
  [842] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
  [846] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
  [850] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6),
  [862] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_rank_specifier, 3),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 5),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
  [886] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
  [894] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
  [898] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 7),
  [906] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8),
  [916] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
  [924] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
  [928] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9),
  [934] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10),
  [942] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 11),
  [948] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
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
