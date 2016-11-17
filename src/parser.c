#include "tree_sitter/parser.h"

#define STATE_COUNT 366
#define SYMBOL_COUNT 142
#define TOKEN_COUNT 81

enum {
    anon_sym_extern = 1,
    anon_sym_alias = 2,
    anon_sym_SEMI = 3,
    anon_sym_using = 4,
    anon_sym_namespace = 5,
    anon_sym_LBRACE = 6,
    anon_sym_RBRACE = 7,
    anon_sym_class = 8,
    anon_sym_struct = 9,
    anon_sym_LBRACK = 10,
    anon_sym_RBRACK = 11,
    anon_sym_assembly = 12,
    anon_sym_module = 13,
    anon_sym_COLON = 14,
    anon_sym_enum = 15,
    anon_sym_COMMA = 16,
    anon_sym_new = 17,
    anon_sym_public = 18,
    anon_sym_protected = 19,
    anon_sym_internal = 20,
    anon_sym_private = 21,
    anon_sym_sbyte = 22,
    anon_sym_byte = 23,
    anon_sym_short = 24,
    anon_sym_ushort = 25,
    anon_sym_int = 26,
    anon_sym_uint = 27,
    anon_sym_long = 28,
    anon_sym_ulong = 29,
    anon_sym_char = 30,
    anon_sym_LPAREN = 31,
    anon_sym_RPAREN = 32,
    anon_sym_EQ = 33,
    anon_sym_true = 34,
    anon_sym_false = 35,
    anon_sym_SQUOTE = 36,
    aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 37,
    sym__hexadecimal_escape_sequence = 38,
    aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 39,
    aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 40,
    anon_sym_BSLASH_SQUOTE = 41,
    anon_sym_BSLASH_DQUOTE = 42,
    anon_sym_BSLASH_BSLASH = 43,
    anon_sym_BSLASH0 = 44,
    anon_sym_BSLASHa = 45,
    anon_sym_BSLASHb = 46,
    anon_sym_BSLASHf = 47,
    anon_sym_BSLASHn = 48,
    anon_sym_BSLASHr = 49,
    anon_sym_BSLASHt = 50,
    anon_sym_BSLASHv = 51,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 52,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 53,
    sym__integer_type_suffix = 54,
    sym_null_literal = 55,
    anon_sym_DOT = 56,
    sym__real_type_suffix = 57,
    sym__exponent_part = 58,
    anon_sym_DQUOTE = 59,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 60,
    anon_sym_AT_DQUOTE = 61,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 62,
    anon_sym_unsafe = 63,
    anon_sym_abstract = 64,
    anon_sym_sealed = 65,
    anon_sym_static = 66,
    anon_sym_readonly = 67,
    anon_sym_volatile = 68,
    anon_sym_bool = 69,
    anon_sym_decimal = 70,
    anon_sym_double = 71,
    anon_sym_float = 72,
    anon_sym_object = 73,
    anon_sym_string = 74,
    anon_sym_LT = 75,
    anon_sym_GT = 76,
    anon_sym_COLON_COLON = 77,
    sym_global = 78,
    sym_identifier_name = 79,
    sym_comment = 80,
    sym_compilation_unit = 81,
    sym_extern_alias_directive = 82,
    sym_using_directive = 83,
    sym__type_declaration = 84,
    sym_namespace_declaration = 85,
    sym_class_declaration = 86,
    sym_struct_declaration = 87,
    sym__global_attributes = 88,
    sym__global_attribute_target_specifier = 89,
    sym__attributes = 90,
    sym_enum_declaration = 91,
    sym__enum_base = 92,
    sym__enum_body = 93,
    sym_enum_member_declaration = 94,
    sym_enum_modifier = 95,
    sym__integral_type = 96,
    sym__attribute_section = 97,
    sym_attribute_list = 98,
    sym_attribute = 99,
    sym_attribute_argument_list = 100,
    sym_field_declaration = 101,
    sym_variable_declaration = 102,
    sym__type = 103,
    sym_generic_name = 104,
    sym_variable_declarator = 105,
    sym_equals_value_clause = 106,
    sym__literal = 107,
    sym_boolean_literal = 108,
    sym_character_literal = 109,
    sym__unicode_escape_sequence = 110,
    sym__simple_escape_sequence = 111,
    sym_integer_literal = 112,
    sym_real_literal = 113,
    sym_string_literal = 114,
    sym__regular_string_literal = 115,
    sym__regular_string_literal_character = 116,
    sym__verbatim_string_literal = 117,
    sym_class_modifiers = 118,
    sym__class_modifiers = 119,
    sym_struct_modifiers = 120,
    sym__struct_modifiers = 121,
    sym_field_modifiers = 122,
    sym__field_modifiers = 123,
    sym_predefined_type = 124,
    sym_type_parameter_list = 125,
    sym_type_parameter = 126,
    sym_qualified_name = 127,
    sym_alias_qualified_name = 128,
    sym_name_equals = 129,
    sym_static = 130,
    aux_sym_compilation_unit_repeat1 = 131,
    aux_sym_compilation_unit_repeat2 = 132,
    aux_sym_compilation_unit_repeat3 = 133,
    aux_sym_namespace_declaration_repeat1 = 134,
    aux_sym_class_declaration_repeat1 = 135,
    aux_sym__attributes_repeat1 = 136,
    aux_sym__enum_body_repeat1 = 137,
    aux_sym_attribute_list_repeat1 = 138,
    aux_sym_variable_declaration_repeat1 = 139,
    aux_sym__regular_string_literal_repeat1 = 140,
    aux_sym_type_parameter_list_repeat1 = 141,
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
    [anon_sym_struct] = "struct",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_assembly] = "assembly",
    [anon_sym_module] = "module",
    [anon_sym_COLON] = ":",
    [anon_sym_enum] = "enum",
    [anon_sym_COMMA] = ",",
    [anon_sym_new] = "new",
    [anon_sym_public] = "public",
    [anon_sym_protected] = "protected",
    [anon_sym_internal] = "internal",
    [anon_sym_private] = "private",
    [anon_sym_sbyte] = "sbyte",
    [anon_sym_byte] = "byte",
    [anon_sym_short] = "short",
    [anon_sym_ushort] = "ushort",
    [anon_sym_int] = "int",
    [anon_sym_uint] = "uint",
    [anon_sym_long] = "long",
    [anon_sym_ulong] = "ulong",
    [anon_sym_char] = "char",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
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
    [anon_sym_unsafe] = "unsafe",
    [anon_sym_abstract] = "abstract",
    [anon_sym_sealed] = "sealed",
    [anon_sym_static] = "static",
    [anon_sym_readonly] = "readonly",
    [anon_sym_volatile] = "volatile",
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
    [sym_extern_alias_directive] = "extern_alias_directive",
    [sym_using_directive] = "using_directive",
    [sym__type_declaration] = "_type_declaration",
    [sym_namespace_declaration] = "namespace_declaration",
    [sym_class_declaration] = "class_declaration",
    [sym_struct_declaration] = "struct_declaration",
    [sym__global_attributes] = "_global_attributes",
    [sym__global_attribute_target_specifier] = "_global_attribute_target_specifier",
    [sym__attributes] = "_attributes",
    [sym_enum_declaration] = "enum_declaration",
    [sym__enum_base] = "_enum_base",
    [sym__enum_body] = "_enum_body",
    [sym_enum_member_declaration] = "enum_member_declaration",
    [sym_enum_modifier] = "enum_modifier",
    [sym__integral_type] = "_integral_type",
    [sym__attribute_section] = "_attribute_section",
    [sym_attribute_list] = "attribute_list",
    [sym_attribute] = "attribute",
    [sym_attribute_argument_list] = "attribute_argument_list",
    [sym_field_declaration] = "field_declaration",
    [sym_variable_declaration] = "variable_declaration",
    [sym__type] = "_type",
    [sym_generic_name] = "generic_name",
    [sym_variable_declarator] = "variable_declarator",
    [sym_equals_value_clause] = "equals_value_clause",
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
    [sym_class_modifiers] = "class_modifiers",
    [sym__class_modifiers] = "_class_modifiers",
    [sym_struct_modifiers] = "struct_modifiers",
    [sym__struct_modifiers] = "_struct_modifiers",
    [sym_field_modifiers] = "field_modifiers",
    [sym__field_modifiers] = "_field_modifiers",
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
    [aux_sym_namespace_declaration_repeat1] = "namespace_declaration_repeat1",
    [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
    [aux_sym__attributes_repeat1] = "_attributes_repeat1",
    [aux_sym__enum_body_repeat1] = "_enum_body_repeat1",
    [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
    [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
    [aux_sym__regular_string_literal_repeat1] = "_regular_string_literal_repeat1",
    [aux_sym_type_parameter_list_repeat1] = "type_parameter_list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [anon_sym_extern] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_alias] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_using] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_namespace] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_class] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_struct] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_assembly] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_module] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_enum] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_new] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_public] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_protected] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_internal] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_private] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_sbyte] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_byte] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_short] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_ushort] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_int] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_uint] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_long] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_ulong] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_char] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LPAREN] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RPAREN] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_true] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_false] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_SQUOTE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym__hexadecimal_escape_sequence] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASH_SQUOTE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASH_DQUOTE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASH_BSLASH] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASH0] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASHa] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASHb] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASHf] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASHn] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASHr] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASHt] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_BSLASHv] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym__integer_type_suffix] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_null_literal] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DOT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym__real_type_suffix] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__exponent_part] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DQUOTE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_AT_DQUOTE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_unsafe] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_abstract] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_sealed] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_static] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_readonly] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_volatile] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_bool] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_decimal] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_double] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_float] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_object] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_string] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_GT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COLON_COLON] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_global] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_identifier_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_comment] = {
        .visible = true,
        .named = true,
        .structural = false,
        .extra = true,
    },
    [sym_compilation_unit] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_extern_alias_directive] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_using_directive] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__type_declaration] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_namespace_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_class_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_struct_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__global_attributes] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__global_attribute_target_specifier] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__attributes] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_enum_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__enum_base] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__enum_body] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_enum_member_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_enum_modifier] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__integral_type] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__attribute_section] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_attribute_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_attribute] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_attribute_argument_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_field_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_variable_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__type] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_generic_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_variable_declarator] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_equals_value_clause] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__literal] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_boolean_literal] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_character_literal] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__unicode_escape_sequence] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__simple_escape_sequence] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_integer_literal] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_real_literal] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_string_literal] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__regular_string_literal] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__regular_string_literal_character] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__verbatim_string_literal] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_class_modifiers] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__class_modifiers] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_struct_modifiers] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__struct_modifiers] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_field_modifiers] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__field_modifiers] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_predefined_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_parameter_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_qualified_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_alias_qualified_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_name_equals] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_static] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [aux_sym_compilation_unit_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_compilation_unit_repeat2] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_compilation_unit_repeat3] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_namespace_declaration_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_class_declaration_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym__attributes_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym__enum_body_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_attribute_list_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_variable_declaration_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym__regular_string_literal_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_type_parameter_list_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    switch (state) {
        case 0:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(0);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '0')
                ADVANCE(13);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (lookahead == ':')
                ADVANCE(17);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '>')
                ADVANCE(22);
            if (lookahead == '@')
                ADVANCE(23);
            if (('A' <= lookahead && lookahead <= 'C') ||
                ('G' <= lookahead && lookahead <= 'K') ||
                ('M' <= lookahead && lookahead <= 'T') ||
                ('V' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'q') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if ((lookahead == 'D') ||
                (lookahead == 'F'))
                ADVANCE(26);
            if (lookahead == 'E')
                ADVANCE(27);
            if (lookahead == 'L')
                ADVANCE(30);
            if (lookahead == 'U')
                ADVANCE(32);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == '\\')
                ADVANCE(34);
            if (lookahead == ']')
                ADVANCE(65);
            if (lookahead == 'a')
                ADVANCE(66);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(100);
            if (lookahead == 'e')
                ADVANCE(112);
            if (lookahead == 'f')
                ADVANCE(121);
            if (lookahead == 'g')
                ADVANCE(130);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(144);
            if (lookahead == 'm')
                ADVANCE(148);
            if (lookahead == 'n')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(201);
            if (lookahead == 't')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(231);
            if (lookahead == 'v')
                ADVANCE(252);
            if (lookahead == '{')
                ADVANCE(260);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
        case 3:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
        case 4:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 5:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 6:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 7:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 8:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 9:
            if (lookahead == '*')
                ADVANCE(10);
            if (!((lookahead == 0) ||
                (lookahead == '*')))
                ADVANCE(9);
            LEX_ERROR();
        case 10:
            if (lookahead == '/')
                ADVANCE(11);
            if (!((lookahead == 0) ||
                (lookahead == '/')))
                ADVANCE(9);
            LEX_ERROR();
        case 11:
            ACCEPT_TOKEN(sym_comment);
        case 12:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(12);
            ACCEPT_TOKEN(sym_comment);
        case 13:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (lookahead == 'x')
                ADVANCE(15);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 14:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 15:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(16);
            LEX_ERROR();
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(16);
            ACCEPT_TOKEN(aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH);
        case 17:
            if (lookahead == ':')
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_COLON);
        case 18:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
        case 19:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 20:
            ACCEPT_TOKEN(anon_sym_LT);
        case 21:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 22:
            ACCEPT_TOKEN(anon_sym_GT);
        case 23:
            if (lookahead == '\"')
                ADVANCE(24);
            LEX_ERROR();
        case 24:
            ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier_name);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 27:
            if (('+' <= lookahead && lookahead <= '/') ||
                (':' <= lookahead && lookahead <= '@') ||
                ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(28);
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(29);
            if ((lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier_name);
        case 28:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(28);
            ACCEPT_TOKEN(sym__exponent_part);
        case 29:
            if (('+' <= lookahead && lookahead <= '/') ||
                (':' <= lookahead && lookahead <= '@') ||
                ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(28);
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(29);
            if ((lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym__exponent_part);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'T') ||
                ('V' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'U')
                ADVANCE(31);
            if (lookahead == 'u')
                ADVANCE(31);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'K') ||
                ('M' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'L')
                ADVANCE(31);
            if (lookahead == 'l')
                ADVANCE(31);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 33:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 34:
            if (lookahead == '\"')
                ADVANCE(35);
            if (lookahead == '\'')
                ADVANCE(36);
            if (lookahead == '0')
                ADVANCE(37);
            if (lookahead == 'U')
                ADVANCE(38);
            if (lookahead == '\\')
                ADVANCE(47);
            if (lookahead == 'a')
                ADVANCE(48);
            if (lookahead == 'b')
                ADVANCE(49);
            if (lookahead == 'f')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(51);
            if (lookahead == 'r')
                ADVANCE(52);
            if (lookahead == 't')
                ADVANCE(53);
            if (lookahead == 'u')
                ADVANCE(54);
            if (lookahead == 'v')
                ADVANCE(59);
            if (lookahead == 'x')
                ADVANCE(60);
            LEX_ERROR();
        case 35:
            ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
        case 36:
            ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
        case 37:
            ACCEPT_TOKEN(anon_sym_BSLASH0);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(39);
            LEX_ERROR();
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(40);
            LEX_ERROR();
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(41);
            LEX_ERROR();
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(42);
            LEX_ERROR();
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(43);
            LEX_ERROR();
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(44);
            LEX_ERROR();
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(45);
            LEX_ERROR();
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(46);
            LEX_ERROR();
        case 46:
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
        case 47:
            ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
        case 48:
            ACCEPT_TOKEN(anon_sym_BSLASHa);
        case 49:
            ACCEPT_TOKEN(anon_sym_BSLASHb);
        case 50:
            ACCEPT_TOKEN(anon_sym_BSLASHf);
        case 51:
            ACCEPT_TOKEN(anon_sym_BSLASHn);
        case 52:
            ACCEPT_TOKEN(anon_sym_BSLASHr);
        case 53:
            ACCEPT_TOKEN(anon_sym_BSLASHt);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(55);
            LEX_ERROR();
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(56);
            LEX_ERROR();
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(57);
            LEX_ERROR();
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(58);
            LEX_ERROR();
        case 58:
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
        case 59:
            ACCEPT_TOKEN(anon_sym_BSLASHv);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(61);
            LEX_ERROR();
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(62);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(63);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(64);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 64:
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 65:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'l')
                ADVANCE(74);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier_name);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier_name);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier_name);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier_name);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier_name);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier_name);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_abstract);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier_name);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier_name);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier_name);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_alias);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier_name);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier_name);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier_name);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier_name);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier_name);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_assembly);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(86);
            if (lookahead == 'y')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier_name);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_bool);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier_name);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier_name);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_byte);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(93);
            if (lookahead == 'l')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier_name);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier_name);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier_name);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_char);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier_name);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier_name);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier_name);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_class);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(101);
            if (lookahead == 'o')
                ADVANCE(107);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier_name);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier_name);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier_name);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(105);
            ACCEPT_TOKEN(sym_identifier_name);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier_name);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_decimal);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier_name);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier_name);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_double);
        case 112:
            if (('+' <= lookahead && lookahead <= '/') ||
                (':' <= lookahead && lookahead <= '@') ||
                ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(28);
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(29);
            if ((lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(113);
            if (lookahead == 'x')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier_name);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier_name);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_enum);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier_name);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_extern);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(122);
            if (lookahead == 'l')
                ADVANCE(126);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier_name);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_false);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier_name);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier_name);
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier_name);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_float);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier_name);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_global);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier_name);
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(139);
            ACCEPT_TOKEN(anon_sym_int);
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier_name);
        case 140:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier_name);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier_name);
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier_name);
        case 143:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_internal);
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'T') ||
                ('V' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'U')
                ADVANCE(31);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == 'u')
                ADVANCE(31);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier_name);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_long);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(149);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier_name);
        case 152:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier_name);
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_module);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(155);
            if (lookahead == 'e')
                ADVANCE(163);
            if (lookahead == 'u')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier_name);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier_name);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'p')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier_name);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier_name);
        case 161:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier_name);
        case 162:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'w')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_new);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier_name);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_null_literal);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'j')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier_name);
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier_name);
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_object);
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(175);
            if (lookahead == 'u')
                ADVANCE(188);
            ACCEPT_TOKEN(sym_identifier_name);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(176);
            if (lookahead == 'o')
                ADVANCE(181);
            ACCEPT_TOKEN(sym_identifier_name);
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'v')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier_name);
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(178);
            ACCEPT_TOKEN(sym_identifier_name);
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier_name);
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(180);
            ACCEPT_TOKEN(sym_identifier_name);
        case 180:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_private);
        case 181:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(182);
            ACCEPT_TOKEN(sym_identifier_name);
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(183);
            ACCEPT_TOKEN(sym_identifier_name);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(184);
            ACCEPT_TOKEN(sym_identifier_name);
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(185);
            ACCEPT_TOKEN(sym_identifier_name);
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(186);
            ACCEPT_TOKEN(sym_identifier_name);
        case 186:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(187);
            ACCEPT_TOKEN(sym_identifier_name);
        case 187:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_protected);
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(189);
            ACCEPT_TOKEN(sym_identifier_name);
        case 189:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(190);
            ACCEPT_TOKEN(sym_identifier_name);
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(191);
            ACCEPT_TOKEN(sym_identifier_name);
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(192);
            ACCEPT_TOKEN(sym_identifier_name);
        case 192:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_public);
        case 193:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(194);
            ACCEPT_TOKEN(sym_identifier_name);
        case 194:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(195);
            ACCEPT_TOKEN(sym_identifier_name);
        case 195:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(196);
            ACCEPT_TOKEN(sym_identifier_name);
        case 196:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(197);
            ACCEPT_TOKEN(sym_identifier_name);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(198);
            ACCEPT_TOKEN(sym_identifier_name);
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(199);
            ACCEPT_TOKEN(sym_identifier_name);
        case 199:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(200);
            ACCEPT_TOKEN(sym_identifier_name);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'c') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(202);
            if (lookahead == 'e')
                ADVANCE(206);
            if (lookahead == 'h')
                ADVANCE(211);
            if (lookahead == 't')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier_name);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(203);
            ACCEPT_TOKEN(sym_identifier_name);
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(204);
            ACCEPT_TOKEN(sym_identifier_name);
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier_name);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier_name);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier_name);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier_name);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(210);
            ACCEPT_TOKEN(sym_identifier_name);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier_name);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier_name);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_short);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(216);
            if (lookahead == 'r')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier_name);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier_name);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier_name);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(219);
            ACCEPT_TOKEN(sym_identifier_name);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_static);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(221);
            if (lookahead == 'u')
                ADVANCE(224);
            ACCEPT_TOKEN(sym_identifier_name);
        case 221:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(222);
            ACCEPT_TOKEN(sym_identifier_name);
        case 222:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(223);
            ACCEPT_TOKEN(sym_identifier_name);
        case 223:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_string);
        case 224:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier_name);
        case 225:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(226);
            ACCEPT_TOKEN(sym_identifier_name);
        case 226:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_struct);
        case 227:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(228);
            ACCEPT_TOKEN(sym_identifier_name);
        case 228:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(229);
            ACCEPT_TOKEN(sym_identifier_name);
        case 229:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(230);
            ACCEPT_TOKEN(sym_identifier_name);
        case 230:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_true);
        case 231:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'K') ||
                ('M' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'L')
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(232);
            if (lookahead == 'l')
                ADVANCE(235);
            if (lookahead == 'n')
                ADVANCE(239);
            if (lookahead == 's')
                ADVANCE(244);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 232:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(233);
            ACCEPT_TOKEN(sym_identifier_name);
        case 233:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(234);
            ACCEPT_TOKEN(sym_identifier_name);
        case 234:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_uint);
        case 235:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(236);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 236:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(237);
            ACCEPT_TOKEN(sym_identifier_name);
        case 237:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(238);
            ACCEPT_TOKEN(sym_identifier_name);
        case 238:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 239:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(240);
            ACCEPT_TOKEN(sym_identifier_name);
        case 240:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(241);
            ACCEPT_TOKEN(sym_identifier_name);
        case 241:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(242);
            ACCEPT_TOKEN(sym_identifier_name);
        case 242:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(243);
            ACCEPT_TOKEN(sym_identifier_name);
        case 243:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 244:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(245);
            if (lookahead == 'i')
                ADVANCE(249);
            ACCEPT_TOKEN(sym_identifier_name);
        case 245:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(246);
            ACCEPT_TOKEN(sym_identifier_name);
        case 246:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(247);
            ACCEPT_TOKEN(sym_identifier_name);
        case 247:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(248);
            ACCEPT_TOKEN(sym_identifier_name);
        case 248:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 249:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(250);
            ACCEPT_TOKEN(sym_identifier_name);
        case 250:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(251);
            ACCEPT_TOKEN(sym_identifier_name);
        case 251:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_using);
        case 252:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(253);
            ACCEPT_TOKEN(sym_identifier_name);
        case 253:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(254);
            ACCEPT_TOKEN(sym_identifier_name);
        case 254:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(255);
            ACCEPT_TOKEN(sym_identifier_name);
        case 255:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(256);
            ACCEPT_TOKEN(sym_identifier_name);
        case 256:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(257);
            ACCEPT_TOKEN(sym_identifier_name);
        case 257:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(258);
            ACCEPT_TOKEN(sym_identifier_name);
        case 258:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(259);
            ACCEPT_TOKEN(sym_identifier_name);
        case 259:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 260:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 261:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 262:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(262);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'e')
                ADVANCE(276);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(338);
            LEX_ERROR();
        case 263:
            if (lookahead == 'b')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            if (lookahead == 's')
                ADVANCE(265);
            LEX_ERROR();
        case 265:
            if (lookahead == 't')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            if (lookahead == 'r')
                ADVANCE(267);
            LEX_ERROR();
        case 267:
            if (lookahead == 'a')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            if (lookahead == 'c')
                ADVANCE(269);
            LEX_ERROR();
        case 269:
            if (lookahead == 't')
                ADVANCE(270);
            LEX_ERROR();
        case 270:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 271:
            if (lookahead == 'l')
                ADVANCE(272);
            LEX_ERROR();
        case 272:
            if (lookahead == 'a')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            if (lookahead == 's')
                ADVANCE(274);
            LEX_ERROR();
        case 274:
            if (lookahead == 's')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            ACCEPT_TOKEN(anon_sym_class);
        case 276:
            if (lookahead == 'n')
                ADVANCE(277);
            if (lookahead == 'x')
                ADVANCE(280);
            LEX_ERROR();
        case 277:
            if (lookahead == 'u')
                ADVANCE(278);
            LEX_ERROR();
        case 278:
            if (lookahead == 'm')
                ADVANCE(279);
            LEX_ERROR();
        case 279:
            ACCEPT_TOKEN(anon_sym_enum);
        case 280:
            if (lookahead == 't')
                ADVANCE(281);
            LEX_ERROR();
        case 281:
            if (lookahead == 'e')
                ADVANCE(282);
            LEX_ERROR();
        case 282:
            if (lookahead == 'r')
                ADVANCE(283);
            LEX_ERROR();
        case 283:
            if (lookahead == 'n')
                ADVANCE(284);
            LEX_ERROR();
        case 284:
            ACCEPT_TOKEN(anon_sym_extern);
        case 285:
            if (lookahead == 'n')
                ADVANCE(286);
            LEX_ERROR();
        case 286:
            if (lookahead == 't')
                ADVANCE(287);
            LEX_ERROR();
        case 287:
            if (lookahead == 'e')
                ADVANCE(288);
            LEX_ERROR();
        case 288:
            if (lookahead == 'r')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            if (lookahead == 'n')
                ADVANCE(290);
            LEX_ERROR();
        case 290:
            if (lookahead == 'a')
                ADVANCE(291);
            LEX_ERROR();
        case 291:
            if (lookahead == 'l')
                ADVANCE(292);
            LEX_ERROR();
        case 292:
            ACCEPT_TOKEN(anon_sym_internal);
        case 293:
            if (lookahead == 'a')
                ADVANCE(294);
            if (lookahead == 'e')
                ADVANCE(302);
            LEX_ERROR();
        case 294:
            if (lookahead == 'm')
                ADVANCE(295);
            LEX_ERROR();
        case 295:
            if (lookahead == 'e')
                ADVANCE(296);
            LEX_ERROR();
        case 296:
            if (lookahead == 's')
                ADVANCE(297);
            LEX_ERROR();
        case 297:
            if (lookahead == 'p')
                ADVANCE(298);
            LEX_ERROR();
        case 298:
            if (lookahead == 'a')
                ADVANCE(299);
            LEX_ERROR();
        case 299:
            if (lookahead == 'c')
                ADVANCE(300);
            LEX_ERROR();
        case 300:
            if (lookahead == 'e')
                ADVANCE(301);
            LEX_ERROR();
        case 301:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 302:
            if (lookahead == 'w')
                ADVANCE(303);
            LEX_ERROR();
        case 303:
            ACCEPT_TOKEN(anon_sym_new);
        case 304:
            if (lookahead == 'r')
                ADVANCE(305);
            if (lookahead == 'u')
                ADVANCE(318);
            LEX_ERROR();
        case 305:
            if (lookahead == 'i')
                ADVANCE(306);
            if (lookahead == 'o')
                ADVANCE(311);
            LEX_ERROR();
        case 306:
            if (lookahead == 'v')
                ADVANCE(307);
            LEX_ERROR();
        case 307:
            if (lookahead == 'a')
                ADVANCE(308);
            LEX_ERROR();
        case 308:
            if (lookahead == 't')
                ADVANCE(309);
            LEX_ERROR();
        case 309:
            if (lookahead == 'e')
                ADVANCE(310);
            LEX_ERROR();
        case 310:
            ACCEPT_TOKEN(anon_sym_private);
        case 311:
            if (lookahead == 't')
                ADVANCE(312);
            LEX_ERROR();
        case 312:
            if (lookahead == 'e')
                ADVANCE(313);
            LEX_ERROR();
        case 313:
            if (lookahead == 'c')
                ADVANCE(314);
            LEX_ERROR();
        case 314:
            if (lookahead == 't')
                ADVANCE(315);
            LEX_ERROR();
        case 315:
            if (lookahead == 'e')
                ADVANCE(316);
            LEX_ERROR();
        case 316:
            if (lookahead == 'd')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            ACCEPT_TOKEN(anon_sym_protected);
        case 318:
            if (lookahead == 'b')
                ADVANCE(319);
            LEX_ERROR();
        case 319:
            if (lookahead == 'l')
                ADVANCE(320);
            LEX_ERROR();
        case 320:
            if (lookahead == 'i')
                ADVANCE(321);
            LEX_ERROR();
        case 321:
            if (lookahead == 'c')
                ADVANCE(322);
            LEX_ERROR();
        case 322:
            ACCEPT_TOKEN(anon_sym_public);
        case 323:
            if (lookahead == 'e')
                ADVANCE(324);
            if (lookahead == 't')
                ADVANCE(329);
            LEX_ERROR();
        case 324:
            if (lookahead == 'a')
                ADVANCE(325);
            LEX_ERROR();
        case 325:
            if (lookahead == 'l')
                ADVANCE(326);
            LEX_ERROR();
        case 326:
            if (lookahead == 'e')
                ADVANCE(327);
            LEX_ERROR();
        case 327:
            if (lookahead == 'd')
                ADVANCE(328);
            LEX_ERROR();
        case 328:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 329:
            if (lookahead == 'a')
                ADVANCE(330);
            if (lookahead == 'r')
                ADVANCE(334);
            LEX_ERROR();
        case 330:
            if (lookahead == 't')
                ADVANCE(331);
            LEX_ERROR();
        case 331:
            if (lookahead == 'i')
                ADVANCE(332);
            LEX_ERROR();
        case 332:
            if (lookahead == 'c')
                ADVANCE(333);
            LEX_ERROR();
        case 333:
            ACCEPT_TOKEN(anon_sym_static);
        case 334:
            if (lookahead == 'u')
                ADVANCE(335);
            LEX_ERROR();
        case 335:
            if (lookahead == 'c')
                ADVANCE(336);
            LEX_ERROR();
        case 336:
            if (lookahead == 't')
                ADVANCE(337);
            LEX_ERROR();
        case 337:
            ACCEPT_TOKEN(anon_sym_struct);
        case 338:
            if (lookahead == 'n')
                ADVANCE(339);
            if (lookahead == 's')
                ADVANCE(344);
            LEX_ERROR();
        case 339:
            if (lookahead == 's')
                ADVANCE(340);
            LEX_ERROR();
        case 340:
            if (lookahead == 'a')
                ADVANCE(341);
            LEX_ERROR();
        case 341:
            if (lookahead == 'f')
                ADVANCE(342);
            LEX_ERROR();
        case 342:
            if (lookahead == 'e')
                ADVANCE(343);
            LEX_ERROR();
        case 343:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 344:
            if (lookahead == 'i')
                ADVANCE(345);
            LEX_ERROR();
        case 345:
            if (lookahead == 'n')
                ADVANCE(346);
            LEX_ERROR();
        case 346:
            if (lookahead == 'g')
                ADVANCE(347);
            LEX_ERROR();
        case 347:
            ACCEPT_TOKEN(anon_sym_using);
        case 348:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(348);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(349);
            LEX_ERROR();
        case 349:
            if (lookahead == 'l')
                ADVANCE(350);
            LEX_ERROR();
        case 350:
            if (lookahead == 'i')
                ADVANCE(351);
            LEX_ERROR();
        case 351:
            if (lookahead == 'a')
                ADVANCE(352);
            LEX_ERROR();
        case 352:
            if (lookahead == 's')
                ADVANCE(353);
            LEX_ERROR();
        case 353:
            ACCEPT_TOKEN(anon_sym_alias);
        case 354:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(354);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(130);
            if (lookahead == 's')
                ADVANCE(355);
            LEX_ERROR();
        case 355:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(356);
            ACCEPT_TOKEN(sym_identifier_name);
        case 356:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier_name);
        case 357:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(357);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(130);
            LEX_ERROR();
        case 358:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(358);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 359:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(359);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(360);
            if (lookahead == 'm')
                ADVANCE(361);
            LEX_ERROR();
        case 360:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 361:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 362:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(362);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'e')
                ADVANCE(363);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(364);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(365);
            LEX_ERROR();
        case 363:
            if (lookahead == 'n')
                ADVANCE(277);
            LEX_ERROR();
        case 364:
            if (lookahead == 'e')
                ADVANCE(302);
            LEX_ERROR();
        case 365:
            if (lookahead == 'n')
                ADVANCE(339);
            LEX_ERROR();
        case 366:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(366);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(364);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(365);
            LEX_ERROR();
        case 367:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(367);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(364);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(368);
            if (lookahead == 'u')
                ADVANCE(365);
            LEX_ERROR();
        case 368:
            if (lookahead == 'e')
                ADVANCE(324);
            if (lookahead == 't')
                ADVANCE(369);
            LEX_ERROR();
        case 369:
            if (lookahead == 'a')
                ADVANCE(330);
            LEX_ERROR();
        case 370:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(370);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 371:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(371);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'e')
                ADVANCE(363);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(338);
            LEX_ERROR();
        case 372:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(372);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'e')
                ADVANCE(363);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(365);
            LEX_ERROR();
        case 373:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(373);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'e')
                ADVANCE(376);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(379);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(201);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 374:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 375:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(101);
            if (lookahead == 'o')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier_name);
        case 376:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 377:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 378:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier_name);
        case 379:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(155);
            if (lookahead == 'e')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 380:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(232);
            if (lookahead == 'l')
                ADVANCE(381);
            if (lookahead == 'n')
                ADVANCE(239);
            if (lookahead == 's')
                ADVANCE(382);
            ACCEPT_TOKEN(sym_identifier_name);
        case 381:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier_name);
        case 382:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(245);
            ACCEPT_TOKEN(sym_identifier_name);
        case 383:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(383);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(363);
            LEX_ERROR();
        case 384:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(384);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'e')
                ADVANCE(376);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(385);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(201);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            LEX_ERROR();
        case 385:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 386:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(386);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'c')
                ADVANCE(271);
            LEX_ERROR();
        case 387:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(387);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(388);
            LEX_ERROR();
        case 388:
            if (lookahead == 't')
                ADVANCE(389);
            LEX_ERROR();
        case 389:
            if (lookahead == 'r')
                ADVANCE(334);
            LEX_ERROR();
        case 390:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(390);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 391:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(391);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 392:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(392);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 393:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(393);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 394:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(394);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(260);
            LEX_ERROR();
        case 395:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(395);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'e')
                ADVANCE(376);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(385);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(201);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 396:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(396);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(397);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(398);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 's')
                ADVANCE(401);
            if (lookahead == 'u')
                ADVANCE(404);
            LEX_ERROR();
        case 397:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 398:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(399);
            ACCEPT_TOKEN(sym_identifier_name);
        case 399:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(400);
            ACCEPT_TOKEN(sym_identifier_name);
        case 400:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_int);
        case 401:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(202);
            if (lookahead == 'h')
                ADVANCE(211);
            if (lookahead == 't')
                ADVANCE(402);
            ACCEPT_TOKEN(sym_identifier_name);
        case 402:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(403);
            ACCEPT_TOKEN(sym_identifier_name);
        case 403:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier_name);
        case 404:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(232);
            if (lookahead == 'l')
                ADVANCE(381);
            if (lookahead == 's')
                ADVANCE(382);
            ACCEPT_TOKEN(sym_identifier_name);
        case 405:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(405);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(260);
            LEX_ERROR();
        case 406:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(406);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'e')
                ADVANCE(376);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(385);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(201);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            LEX_ERROR();
        case 407:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(407);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 408:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(408);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(385);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(201);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            LEX_ERROR();
        case 409:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(409);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(385);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(410);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            LEX_ERROR();
        case 410:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'c') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(202);
            if (lookahead == 'e')
                ADVANCE(206);
            if (lookahead == 'h')
                ADVANCE(211);
            if (lookahead == 't')
                ADVANCE(411);
            ACCEPT_TOKEN(sym_identifier_name);
        case 411:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(216);
            if (lookahead == 'r')
                ADVANCE(403);
            ACCEPT_TOKEN(sym_identifier_name);
        case 412:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(412);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(397);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(385);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(413);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            LEX_ERROR();
        case 413:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(202);
            if (lookahead == 'h')
                ADVANCE(211);
            if (lookahead == 't')
                ADVANCE(411);
            ACCEPT_TOKEN(sym_identifier_name);
        case 414:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(414);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 415:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(415);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 416:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(416);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 417:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(417);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 418:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(418);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '0')
                ADVANCE(13);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (lookahead == '@')
                ADVANCE(23);
            if (lookahead == 'f')
                ADVANCE(419);
            if (lookahead == 'n')
                ADVANCE(424);
            if (lookahead == 't')
                ADVANCE(428);
            LEX_ERROR();
        case 419:
            if (lookahead == 'a')
                ADVANCE(420);
            LEX_ERROR();
        case 420:
            if (lookahead == 'l')
                ADVANCE(421);
            LEX_ERROR();
        case 421:
            if (lookahead == 's')
                ADVANCE(422);
            LEX_ERROR();
        case 422:
            if (lookahead == 'e')
                ADVANCE(423);
            LEX_ERROR();
        case 423:
            ACCEPT_TOKEN(anon_sym_false);
        case 424:
            if (lookahead == 'u')
                ADVANCE(425);
            LEX_ERROR();
        case 425:
            if (lookahead == 'l')
                ADVANCE(426);
            LEX_ERROR();
        case 426:
            if (lookahead == 'l')
                ADVANCE(427);
            LEX_ERROR();
        case 427:
            ACCEPT_TOKEN(sym_null_literal);
        case 428:
            if (lookahead == 'r')
                ADVANCE(429);
            LEX_ERROR();
        case 429:
            if (lookahead == 'u')
                ADVANCE(430);
            LEX_ERROR();
        case 430:
            if (lookahead == 'e')
                ADVANCE(431);
            LEX_ERROR();
        case 431:
            ACCEPT_TOKEN(anon_sym_true);
        case 432:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(432);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 433:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(434);
            if (lookahead == '/')
                ADVANCE(435);
            if (lookahead == '\\')
                ADVANCE(436);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(434);
            LEX_ERROR();
        case 434:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 435:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 436:
            if (lookahead == '\"')
                ADVANCE(35);
            if (lookahead == '\'')
                ADVANCE(36);
            if (lookahead == '0')
                ADVANCE(37);
            if (lookahead == 'U')
                ADVANCE(38);
            if (lookahead == '\\')
                ADVANCE(47);
            if (lookahead == 'a')
                ADVANCE(48);
            if (lookahead == 'b')
                ADVANCE(49);
            if (lookahead == 'f')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(51);
            if (lookahead == 'r')
                ADVANCE(52);
            if (lookahead == 't')
                ADVANCE(53);
            if (lookahead == 'u')
                ADVANCE(54);
            if (lookahead == 'v')
                ADVANCE(59);
            if (lookahead == 'x')
                ADVANCE(60);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 437:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(437);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'm'))
                ADVANCE(438);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(439);
            if (lookahead == 'L')
                ADVANCE(440);
            if (lookahead == 'U')
                ADVANCE(442);
            if (lookahead == 'l')
                ADVANCE(440);
            if (lookahead == 'u')
                ADVANCE(442);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 438:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 439:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(28);
            LEX_ERROR();
        case 440:
            if (lookahead == 'U')
                ADVANCE(441);
            if (lookahead == 'u')
                ADVANCE(441);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 441:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 442:
            if (lookahead == 'L')
                ADVANCE(441);
            if (lookahead == 'l')
                ADVANCE(441);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 443:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(443);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == 'L')
                ADVANCE(440);
            if (lookahead == 'U')
                ADVANCE(442);
            if (lookahead == 'l')
                ADVANCE(440);
            if (lookahead == 'u')
                ADVANCE(442);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 444:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(444);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            LEX_ERROR();
        case 445:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(446);
            if (lookahead == '\n')
                SKIP(445);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(447);
            if (lookahead == '\\')
                ADVANCE(34);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(446);
            LEX_ERROR();
        case 446:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 447:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 448:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(449);
            if (lookahead == '/')
                ADVANCE(450);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(454);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 449:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(449);
            if (lookahead == '/')
                ADVANCE(450);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(454);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 450:
            if (lookahead == '*')
                ADVANCE(451);
            if (lookahead == '/')
                ADVANCE(455);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(454);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 451:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(452);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*')))
                ADVANCE(451);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 452:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(453);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(451);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 453:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(454);
            ACCEPT_TOKEN(sym_comment);
        case 454:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(454);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 455:
            if (lookahead == '\n')
                ADVANCE(454);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(456);
            ACCEPT_TOKEN(sym_comment);
        case 456:
            if (lookahead == '\n')
                ADVANCE(454);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(456);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 457:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(457);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 458:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(446);
            if (lookahead == '\n')
                SKIP(458);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(447);
            if (lookahead == '\\')
                ADVANCE(34);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(446);
            LEX_ERROR();
        case 459:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(459);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'm'))
                ADVANCE(438);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(439);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 460:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(460);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'm'))
                ADVANCE(438);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 461:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(461);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 462:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(462);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(463);
            if (lookahead == '{')
                ADVANCE(260);
            LEX_ERROR();
        case 463:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 464:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(464);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 465:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(465);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'b')
                ADVANCE(466);
            if (lookahead == 'c')
                ADVANCE(470);
            if (lookahead == 'i')
                ADVANCE(474);
            if (lookahead == 'l')
                ADVANCE(477);
            if (lookahead == 's')
                ADVANCE(481);
            if (lookahead == 'u')
                ADVANCE(490);
            LEX_ERROR();
        case 466:
            if (lookahead == 'y')
                ADVANCE(467);
            LEX_ERROR();
        case 467:
            if (lookahead == 't')
                ADVANCE(468);
            LEX_ERROR();
        case 468:
            if (lookahead == 'e')
                ADVANCE(469);
            LEX_ERROR();
        case 469:
            ACCEPT_TOKEN(anon_sym_byte);
        case 470:
            if (lookahead == 'h')
                ADVANCE(471);
            LEX_ERROR();
        case 471:
            if (lookahead == 'a')
                ADVANCE(472);
            LEX_ERROR();
        case 472:
            if (lookahead == 'r')
                ADVANCE(473);
            LEX_ERROR();
        case 473:
            ACCEPT_TOKEN(anon_sym_char);
        case 474:
            if (lookahead == 'n')
                ADVANCE(475);
            LEX_ERROR();
        case 475:
            if (lookahead == 't')
                ADVANCE(476);
            LEX_ERROR();
        case 476:
            ACCEPT_TOKEN(anon_sym_int);
        case 477:
            if (lookahead == 'o')
                ADVANCE(478);
            LEX_ERROR();
        case 478:
            if (lookahead == 'n')
                ADVANCE(479);
            LEX_ERROR();
        case 479:
            if (lookahead == 'g')
                ADVANCE(480);
            LEX_ERROR();
        case 480:
            ACCEPT_TOKEN(anon_sym_long);
        case 481:
            if (lookahead == 'b')
                ADVANCE(482);
            if (lookahead == 'h')
                ADVANCE(486);
            LEX_ERROR();
        case 482:
            if (lookahead == 'y')
                ADVANCE(483);
            LEX_ERROR();
        case 483:
            if (lookahead == 't')
                ADVANCE(484);
            LEX_ERROR();
        case 484:
            if (lookahead == 'e')
                ADVANCE(485);
            LEX_ERROR();
        case 485:
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 486:
            if (lookahead == 'o')
                ADVANCE(487);
            LEX_ERROR();
        case 487:
            if (lookahead == 'r')
                ADVANCE(488);
            LEX_ERROR();
        case 488:
            if (lookahead == 't')
                ADVANCE(489);
            LEX_ERROR();
        case 489:
            ACCEPT_TOKEN(anon_sym_short);
        case 490:
            if (lookahead == 'i')
                ADVANCE(491);
            if (lookahead == 'l')
                ADVANCE(494);
            if (lookahead == 's')
                ADVANCE(498);
            LEX_ERROR();
        case 491:
            if (lookahead == 'n')
                ADVANCE(492);
            LEX_ERROR();
        case 492:
            if (lookahead == 't')
                ADVANCE(493);
            LEX_ERROR();
        case 493:
            ACCEPT_TOKEN(anon_sym_uint);
        case 494:
            if (lookahead == 'o')
                ADVANCE(495);
            LEX_ERROR();
        case 495:
            if (lookahead == 'n')
                ADVANCE(496);
            LEX_ERROR();
        case 496:
            if (lookahead == 'g')
                ADVANCE(497);
            LEX_ERROR();
        case 497:
            ACCEPT_TOKEN(anon_sym_ulong);
        case 498:
            if (lookahead == 'h')
                ADVANCE(499);
            LEX_ERROR();
        case 499:
            if (lookahead == 'o')
                ADVANCE(500);
            LEX_ERROR();
        case 500:
            if (lookahead == 'r')
                ADVANCE(501);
            LEX_ERROR();
        case 501:
            if (lookahead == 't')
                ADVANCE(502);
            LEX_ERROR();
        case 502:
            ACCEPT_TOKEN(anon_sym_ushort);
        case 503:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(503);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'e')
                ADVANCE(376);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(379);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(201);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 504:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(504);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 505:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(505);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 506:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(506);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(22);
            LEX_ERROR();
        case 507:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(507);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '{')
                ADVANCE(260);
            LEX_ERROR();
        case 508:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(508);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(463);
            LEX_ERROR();
        case 509:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(509);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(510);
            LEX_ERROR();
        case 510:
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 511:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(511);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(260);
            LEX_ERROR();
        case 512:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(512);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 513:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(513);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '{')
                ADVANCE(260);
            LEX_ERROR();
        case 514:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(514);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'e')
                ADVANCE(363);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(365);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 515:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(515);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'e')
                ADVANCE(363);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(365);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 516:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(516);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 517:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(517);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 518:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(518);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'e')
                ADVANCE(519);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(379);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(201);
            if (lookahead == 'u')
                ADVANCE(520);
            if (lookahead == 'v')
                ADVANCE(252);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 519:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(113);
            if (lookahead == 'x')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 520:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(232);
            if (lookahead == 'l')
                ADVANCE(381);
            if (lookahead == 'n')
                ADVANCE(239);
            if (lookahead == 's')
                ADVANCE(244);
            ACCEPT_TOKEN(sym_identifier_name);
        case 521:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(521);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'e')
                ADVANCE(376);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(379);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(201);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 522:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(522);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'e')
                ADVANCE(376);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(379);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(201);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            LEX_ERROR();
        case 523:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(523);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('d' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(524);
            if (lookahead == 'c')
                ADVANCE(397);
            if (lookahead == 'i')
                ADVANCE(398);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 's')
                ADVANCE(525);
            if (lookahead == 'u')
                ADVANCE(404);
            LEX_ERROR();
        case 524:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 525:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(202);
            if (lookahead == 'h')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier_name);
        case 526:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(526);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(397);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(398);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 's')
                ADVANCE(401);
            if (lookahead == 'u')
                ADVANCE(404);
            LEX_ERROR();
        case 527:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(527);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '0')
                ADVANCE(13);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (lookahead == '@')
                ADVANCE(23);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('h' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(528);
            if (lookahead == 'g')
                ADVANCE(130);
            if (lookahead == 'n')
                ADVANCE(529);
            if (lookahead == 't')
                ADVANCE(227);
            LEX_ERROR();
        case 528:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 529:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier_name);
        case 530:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(434);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(435);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(436);
            if (lookahead == '}')
                ADVANCE(261);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == ',') ||
                (lookahead == '/') ||
                (lookahead == ';') ||
                (lookahead == '\\') ||
                (lookahead == '}')))
                ADVANCE(434);
            LEX_ERROR();
        case 531:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(531);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 532:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(446);
            if (lookahead == '\n')
                SKIP(532);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(447);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(261);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == ',') ||
                (lookahead == '/') ||
                (lookahead == ';') ||
                (lookahead == '\\') ||
                (lookahead == '}')))
                ADVANCE(446);
            LEX_ERROR();
        case 533:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(533);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(374);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'g')
                ADVANCE(130);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(385);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(410);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            LEX_ERROR();
        case 534:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(534);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(463);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '>')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == ']')
                ADVANCE(65);
            if (lookahead == '{')
                ADVANCE(260);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 535:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(535);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 536:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(536);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '>')
                ADVANCE(22);
            if (lookahead == ']')
                ADVANCE(65);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 262,
    [2] = 348,
    [3] = 354,
    [4] = 357,
    [5] = 358,
    [6] = 358,
    [7] = 359,
    [8] = 358,
    [9] = 362,
    [10] = 366,
    [11] = 367,
    [12] = 370,
    [13] = 262,
    [14] = 371,
    [15] = 372,
    [16] = 373,
    [17] = 362,
    [18] = 383,
    [19] = 384,
    [20] = 386,
    [21] = 386,
    [22] = 387,
    [23] = 387,
    [24] = 262,
    [25] = 371,
    [26] = 372,
    [27] = 384,
    [28] = 358,
    [29] = 384,
    [30] = 390,
    [31] = 391,
    [32] = 392,
    [33] = 358,
    [34] = 392,
    [35] = 358,
    [36] = 392,
    [37] = 392,
    [38] = 384,
    [39] = 393,
    [40] = 392,
    [41] = 392,
    [42] = 372,
    [43] = 371,
    [44] = 372,
    [45] = 262,
    [46] = 371,
    [47] = 372,
    [48] = 358,
    [49] = 394,
    [50] = 395,
    [51] = 396,
    [52] = 405,
    [53] = 395,
    [54] = 373,
    [55] = 406,
    [56] = 407,
    [57] = 408,
    [58] = 409,
    [59] = 412,
    [60] = 414,
    [61] = 395,
    [62] = 406,
    [63] = 415,
    [64] = 358,
    [65] = 407,
    [66] = 396,
    [67] = 396,
    [68] = 395,
    [69] = 373,
    [70] = 395,
    [71] = 415,
    [72] = 395,
    [73] = 373,
    [74] = 395,
    [75] = 358,
    [76] = 394,
    [77] = 395,
    [78] = 405,
    [79] = 395,
    [80] = 373,
    [81] = 395,
    [82] = 373,
    [83] = 373,
    [84] = 395,
    [85] = 416,
    [86] = 417,
    [87] = 358,
    [88] = 417,
    [89] = 358,
    [90] = 417,
    [91] = 417,
    [92] = 418,
    [93] = 417,
    [94] = 432,
    [95] = 433,
    [96] = 437,
    [97] = 443,
    [98] = 432,
    [99] = 444,
    [100] = 445,
    [101] = 448,
    [102] = 432,
    [103] = 432,
    [104] = 457,
    [105] = 432,
    [106] = 445,
    [107] = 458,
    [108] = 458,
    [109] = 432,
    [110] = 445,
    [111] = 445,
    [112] = 432,
    [113] = 445,
    [114] = 459,
    [115] = 432,
    [116] = 460,
    [117] = 432,
    [118] = 432,
    [119] = 444,
    [120] = 432,
    [121] = 460,
    [122] = 459,
    [123] = 460,
    [124] = 432,
    [125] = 461,
    [126] = 461,
    [127] = 461,
    [128] = 432,
    [129] = 395,
    [130] = 358,
    [131] = 462,
    [132] = 464,
    [133] = 465,
    [134] = 405,
    [135] = 503,
    [136] = 373,
    [137] = 503,
    [138] = 373,
    [139] = 405,
    [140] = 405,
    [141] = 504,
    [142] = 358,
    [143] = 505,
    [144] = 503,
    [145] = 464,
    [146] = 505,
    [147] = 503,
    [148] = 464,
    [149] = 505,
    [150] = 505,
    [151] = 504,
    [152] = 505,
    [153] = 505,
    [154] = 383,
    [155] = 386,
    [156] = 387,
    [157] = 396,
    [158] = 415,
    [159] = 395,
    [160] = 358,
    [161] = 394,
    [162] = 405,
    [163] = 395,
    [164] = 395,
    [165] = 373,
    [166] = 358,
    [167] = 394,
    [168] = 405,
    [169] = 395,
    [170] = 395,
    [171] = 373,
    [172] = 358,
    [173] = 462,
    [174] = 405,
    [175] = 503,
    [176] = 373,
    [177] = 407,
    [178] = 506,
    [179] = 506,
    [180] = 396,
    [181] = 507,
    [182] = 506,
    [183] = 396,
    [184] = 507,
    [185] = 506,
    [186] = 506,
    [187] = 396,
    [188] = 386,
    [189] = 387,
    [190] = 462,
    [191] = 405,
    [192] = 503,
    [193] = 373,
    [194] = 394,
    [195] = 395,
    [196] = 405,
    [197] = 373,
    [198] = 395,
    [199] = 394,
    [200] = 395,
    [201] = 405,
    [202] = 373,
    [203] = 395,
    [204] = 508,
    [205] = 358,
    [206] = 391,
    [207] = 372,
    [208] = 358,
    [209] = 509,
    [210] = 511,
    [211] = 512,
    [212] = 358,
    [213] = 513,
    [214] = 514,
    [215] = 515,
    [216] = 514,
    [217] = 514,
    [218] = 515,
    [219] = 514,
    [220] = 358,
    [221] = 512,
    [222] = 357,
    [223] = 516,
    [224] = 517,
    [225] = 357,
    [226] = 517,
    [227] = 371,
    [228] = 371,
    [229] = 357,
    [230] = 358,
    [231] = 415,
    [232] = 262,
    [233] = 518,
    [234] = 521,
    [235] = 503,
    [236] = 358,
    [237] = 358,
    [238] = 522,
    [239] = 523,
    [240] = 358,
    [241] = 526,
    [242] = 507,
    [243] = 527,
    [244] = 530,
    [245] = 458,
    [246] = 437,
    [247] = 531,
    [248] = 432,
    [249] = 460,
    [250] = 532,
    [251] = 533,
    [252] = 507,
    [253] = 534,
    [254] = 262,
    [255] = 371,
    [256] = 373,
    [257] = 515,
    [258] = 372,
    [259] = 406,
    [260] = 405,
    [261] = 503,
    [262] = 505,
    [263] = 383,
    [264] = 384,
    [265] = 391,
    [266] = 392,
    [267] = 395,
    [268] = 415,
    [269] = 407,
    [270] = 417,
    [271] = 432,
    [272] = 445,
    [273] = 386,
    [274] = 386,
    [275] = 387,
    [276] = 387,
    [277] = 396,
    [278] = 396,
    [279] = 507,
    [280] = 506,
    [281] = 513,
    [282] = 371,
    [283] = 372,
    [284] = 395,
    [285] = 373,
    [286] = 372,
    [287] = 371,
    [288] = 395,
    [289] = 373,
    [290] = 395,
    [291] = 373,
    [292] = 415,
    [293] = 395,
    [294] = 358,
    [295] = 394,
    [296] = 395,
    [297] = 405,
    [298] = 395,
    [299] = 373,
    [300] = 395,
    [301] = 373,
    [302] = 373,
    [303] = 395,
    [304] = 358,
    [305] = 394,
    [306] = 395,
    [307] = 405,
    [308] = 395,
    [309] = 373,
    [310] = 395,
    [311] = 373,
    [312] = 373,
    [313] = 395,
    [314] = 395,
    [315] = 358,
    [316] = 462,
    [317] = 405,
    [318] = 503,
    [319] = 373,
    [320] = 503,
    [321] = 373,
    [322] = 373,
    [323] = 503,
    [324] = 373,
    [325] = 535,
    [326] = 262,
    [327] = 521,
    [328] = 503,
    [329] = 373,
    [330] = 373,
    [331] = 535,
    [332] = 521,
    [333] = 395,
    [334] = 432,
    [335] = 459,
    [336] = 432,
    [337] = 460,
    [338] = 432,
    [339] = 432,
    [340] = 536,
    [341] = 505,
    [342] = 392,
    [343] = 417,
    [344] = 506,
    [345] = 432,
    [346] = 462,
    [347] = 394,
    [348] = 395,
    [349] = 405,
    [350] = 395,
    [351] = 373,
    [352] = 395,
    [353] = 373,
    [354] = 373,
    [355] = 395,
    [356] = 394,
    [357] = 395,
    [358] = 405,
    [359] = 395,
    [360] = 373,
    [361] = 395,
    [362] = 373,
    [363] = 373,
    [364] = 395,
    [365] = 373,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(12),
        [sym_extern_alias_directive] = STATE(254),
        [sym_using_directive] = STATE(255),
        [sym__type_declaration] = STATE(256),
        [sym_namespace_declaration] = STATE(257),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(258),
        [sym__global_attribute_target_specifier] = STATE(205),
        [sym__attributes] = STATE(259),
        [sym_enum_declaration] = STATE(16),
        [sym__enum_base] = STATE(260),
        [sym__enum_body] = STATE(261),
        [sym_enum_member_declaration] = STATE(262),
        [sym_enum_modifier] = STATE(263),
        [sym__integral_type] = STATE(140),
        [sym__attribute_section] = STATE(264),
        [sym_attribute_list] = STATE(265),
        [sym_attribute] = STATE(266),
        [sym_attribute_argument_list] = STATE(40),
        [sym_field_declaration] = STATE(267),
        [sym_variable_declaration] = STATE(268),
        [sym__type] = STATE(269),
        [sym_generic_name] = STATE(65),
        [sym_variable_declarator] = STATE(270),
        [sym_equals_value_clause] = STATE(271),
        [sym__literal] = STATE(102),
        [sym_boolean_literal] = STATE(98),
        [sym_character_literal] = STATE(98),
        [sym__unicode_escape_sequence] = STATE(245),
        [sym__simple_escape_sequence] = STATE(245),
        [sym_integer_literal] = STATE(98),
        [sym_real_literal] = STATE(98),
        [sym_string_literal] = STATE(98),
        [sym__regular_string_literal] = STATE(103),
        [sym__regular_string_literal_character] = STATE(272),
        [sym__verbatim_string_literal] = STATE(103),
        [sym_class_modifiers] = STATE(273),
        [sym__class_modifiers] = STATE(274),
        [sym_struct_modifiers] = STATE(275),
        [sym__struct_modifiers] = STATE(276),
        [sym_field_modifiers] = STATE(277),
        [sym__field_modifiers] = STATE(278),
        [sym_predefined_type] = STATE(65),
        [sym_type_parameter_list] = STATE(279),
        [sym_type_parameter] = STATE(280),
        [sym_qualified_name] = STATE(281),
        [sym_alias_qualified_name] = STATE(211),
        [sym_name_equals] = STATE(225),
        [sym_static] = STATE(225),
        [aux_sym_compilation_unit_repeat1] = STATE(24),
        [aux_sym_compilation_unit_repeat2] = STATE(282),
        [aux_sym_compilation_unit_repeat3] = STATE(283),
        [aux_sym_namespace_declaration_repeat1] = STATE(217),
        [aux_sym_class_declaration_repeat1] = STATE(284),
        [aux_sym__attributes_repeat1] = STATE(27),
        [aux_sym__enum_body_repeat1] = STATE(146),
        [aux_sym_attribute_list_repeat1] = STATE(34),
        [aux_sym_variable_declaration_repeat1] = STATE(88),
        [aux_sym__regular_string_literal_repeat1] = STATE(111),
        [aux_sym_type_parameter_list_repeat1] = STATE(182),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_extern] = ACTIONS(3),
        [anon_sym_alias] = ACTIONS(5),
        [anon_sym_SEMI] = ACTIONS(7),
        [anon_sym_using] = ACTIONS(9),
        [anon_sym_namespace] = ACTIONS(11),
        [anon_sym_LBRACE] = ACTIONS(13),
        [anon_sym_RBRACE] = ACTIONS(15),
        [anon_sym_class] = ACTIONS(17),
        [anon_sym_struct] = ACTIONS(19),
        [anon_sym_LBRACK] = ACTIONS(21),
        [anon_sym_RBRACK] = ACTIONS(23),
        [anon_sym_assembly] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(25),
        [anon_sym_COLON] = ACTIONS(27),
        [anon_sym_enum] = ACTIONS(29),
        [anon_sym_COMMA] = ACTIONS(31),
        [anon_sym_new] = ACTIONS(33),
        [anon_sym_public] = ACTIONS(33),
        [anon_sym_protected] = ACTIONS(33),
        [anon_sym_internal] = ACTIONS(33),
        [anon_sym_private] = ACTIONS(33),
        [anon_sym_sbyte] = ACTIONS(35),
        [anon_sym_byte] = ACTIONS(35),
        [anon_sym_short] = ACTIONS(35),
        [anon_sym_ushort] = ACTIONS(35),
        [anon_sym_int] = ACTIONS(35),
        [anon_sym_uint] = ACTIONS(35),
        [anon_sym_long] = ACTIONS(35),
        [anon_sym_ulong] = ACTIONS(35),
        [anon_sym_char] = ACTIONS(35),
        [anon_sym_LPAREN] = ACTIONS(37),
        [anon_sym_RPAREN] = ACTIONS(39),
        [anon_sym_EQ] = ACTIONS(41),
        [anon_sym_true] = ACTIONS(43),
        [anon_sym_false] = ACTIONS(43),
        [anon_sym_SQUOTE] = ACTIONS(45),
        [sym__hexadecimal_escape_sequence] = ACTIONS(47),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(49),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(49),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(51),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(51),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(51),
        [anon_sym_BSLASH0] = ACTIONS(51),
        [anon_sym_BSLASHa] = ACTIONS(51),
        [anon_sym_BSLASHb] = ACTIONS(51),
        [anon_sym_BSLASHf] = ACTIONS(51),
        [anon_sym_BSLASHn] = ACTIONS(51),
        [anon_sym_BSLASHr] = ACTIONS(51),
        [anon_sym_BSLASHt] = ACTIONS(51),
        [anon_sym_BSLASHv] = ACTIONS(51),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(53),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(55),
        [sym__integer_type_suffix] = ACTIONS(57),
        [sym_null_literal] = ACTIONS(59),
        [anon_sym_DOT] = ACTIONS(61),
        [sym__real_type_suffix] = ACTIONS(63),
        [sym__exponent_part] = ACTIONS(65),
        [anon_sym_DQUOTE] = ACTIONS(67),
        [anon_sym_AT_DQUOTE] = ACTIONS(69),
        [anon_sym_unsafe] = ACTIONS(71),
        [anon_sym_abstract] = ACTIONS(73),
        [anon_sym_sealed] = ACTIONS(73),
        [anon_sym_static] = ACTIONS(75),
        [anon_sym_readonly] = ACTIONS(77),
        [anon_sym_volatile] = ACTIONS(77),
        [anon_sym_bool] = ACTIONS(79),
        [anon_sym_decimal] = ACTIONS(79),
        [anon_sym_double] = ACTIONS(79),
        [anon_sym_float] = ACTIONS(79),
        [anon_sym_object] = ACTIONS(79),
        [anon_sym_string] = ACTIONS(79),
        [anon_sym_LT] = ACTIONS(81),
        [anon_sym_GT] = ACTIONS(83),
        [anon_sym_COLON_COLON] = ACTIONS(85),
        [sym_global] = ACTIONS(87),
        [sym_identifier_name] = ACTIONS(89),
        [sym_comment] = ACTIONS(91),
    },
    [1] = {
        [sym_compilation_unit] = STATE(12),
        [sym_extern_alias_directive] = STATE(13),
        [sym_using_directive] = STATE(14),
        [sym__type_declaration] = STATE(15),
        [sym_namespace_declaration] = STATE(15),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(15),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym_compilation_unit_repeat1] = STATE(24),
        [aux_sym_compilation_unit_repeat2] = STATE(25),
        [aux_sym_compilation_unit_repeat3] = STATE(26),
        [aux_sym__attributes_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_extern] = ACTIONS(95),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [2] = {
        [anon_sym_alias] = ACTIONS(115),
        [sym_comment] = ACTIONS(91),
    },
    [3] = {
        [sym_qualified_name] = STATE(224),
        [sym_alias_qualified_name] = STATE(211),
        [sym_name_equals] = STATE(225),
        [sym_static] = STATE(225),
        [anon_sym_static] = ACTIONS(117),
        [sym_global] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(91),
    },
    [4] = {
        [sym_qualified_name] = STATE(210),
        [sym_alias_qualified_name] = STATE(211),
        [sym_global] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(91),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(125),
        [sym_comment] = ACTIONS(91),
    },
    [6] = {
        [sym_identifier_name] = ACTIONS(127),
        [sym_comment] = ACTIONS(91),
    },
    [7] = {
        [sym__global_attribute_target_specifier] = STATE(205),
        [sym_attribute_list] = STATE(31),
        [sym_attribute] = STATE(32),
        [anon_sym_assembly] = ACTIONS(129),
        [anon_sym_module] = ACTIONS(129),
        [sym_identifier_name] = ACTIONS(131),
        [sym_comment] = ACTIONS(91),
    },
    [8] = {
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(91),
    },
    [9] = {
        [sym__class_modifiers] = STATE(188),
        [sym__struct_modifiers] = STATE(189),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_struct] = ACTIONS(137),
        [anon_sym_enum] = ACTIONS(139),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_public] = ACTIONS(111),
        [anon_sym_protected] = ACTIONS(111),
        [anon_sym_internal] = ACTIONS(111),
        [anon_sym_private] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [10] = {
        [sym__class_modifiers] = STATE(188),
        [sym__struct_modifiers] = STATE(189),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_struct] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_public] = ACTIONS(111),
        [anon_sym_protected] = ACTIONS(111),
        [anon_sym_internal] = ACTIONS(111),
        [anon_sym_private] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [11] = {
        [sym__class_modifiers] = STATE(188),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [sym_comment] = ACTIONS(91),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(143),
        [anon_sym_extern] = ACTIONS(143),
        [anon_sym_using] = ACTIONS(143),
        [anon_sym_namespace] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_enum] = ACTIONS(143),
        [anon_sym_new] = ACTIONS(143),
        [anon_sym_public] = ACTIONS(143),
        [anon_sym_protected] = ACTIONS(143),
        [anon_sym_internal] = ACTIONS(143),
        [anon_sym_private] = ACTIONS(143),
        [anon_sym_unsafe] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(143),
        [anon_sym_sealed] = ACTIONS(143),
        [anon_sym_static] = ACTIONS(143),
        [sym_comment] = ACTIONS(91),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_using] = ACTIONS(145),
        [anon_sym_namespace] = ACTIONS(145),
        [anon_sym_class] = ACTIONS(145),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_enum] = ACTIONS(145),
        [anon_sym_new] = ACTIONS(145),
        [anon_sym_public] = ACTIONS(145),
        [anon_sym_protected] = ACTIONS(145),
        [anon_sym_internal] = ACTIONS(145),
        [anon_sym_private] = ACTIONS(145),
        [anon_sym_unsafe] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(145),
        [sym_comment] = ACTIONS(91),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_namespace] = ACTIONS(147),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_enum] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(147),
        [anon_sym_public] = ACTIONS(147),
        [anon_sym_protected] = ACTIONS(147),
        [anon_sym_internal] = ACTIONS(147),
        [anon_sym_private] = ACTIONS(147),
        [anon_sym_unsafe] = ACTIONS(147),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(147),
        [sym_comment] = ACTIONS(91),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(149),
        [anon_sym_namespace] = ACTIONS(151),
        [anon_sym_RBRACE] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(149),
        [anon_sym_enum] = ACTIONS(151),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(91),
    },
    [17] = {
        [sym_enum_modifier] = STATE(154),
        [sym_class_modifiers] = STATE(155),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(156),
        [sym__struct_modifiers] = STATE(23),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_struct] = ACTIONS(157),
        [anon_sym_enum] = ACTIONS(159),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [18] = {
        [anon_sym_enum] = ACTIONS(159),
        [sym_comment] = ACTIONS(91),
    },
    [19] = {
        [anon_sym_class] = ACTIONS(161),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_LBRACK] = ACTIONS(163),
        [anon_sym_enum] = ACTIONS(161),
        [anon_sym_new] = ACTIONS(161),
        [anon_sym_public] = ACTIONS(161),
        [anon_sym_protected] = ACTIONS(161),
        [anon_sym_internal] = ACTIONS(161),
        [anon_sym_private] = ACTIONS(161),
        [anon_sym_sbyte] = ACTIONS(161),
        [anon_sym_byte] = ACTIONS(161),
        [anon_sym_short] = ACTIONS(161),
        [anon_sym_ushort] = ACTIONS(161),
        [anon_sym_int] = ACTIONS(161),
        [anon_sym_uint] = ACTIONS(161),
        [anon_sym_long] = ACTIONS(161),
        [anon_sym_ulong] = ACTIONS(161),
        [anon_sym_char] = ACTIONS(161),
        [anon_sym_unsafe] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(161),
        [anon_sym_readonly] = ACTIONS(161),
        [anon_sym_volatile] = ACTIONS(161),
        [anon_sym_bool] = ACTIONS(161),
        [anon_sym_decimal] = ACTIONS(161),
        [anon_sym_double] = ACTIONS(161),
        [anon_sym_float] = ACTIONS(161),
        [anon_sym_object] = ACTIONS(161),
        [anon_sym_string] = ACTIONS(161),
        [sym_identifier_name] = ACTIONS(165),
        [sym_comment] = ACTIONS(91),
    },
    [20] = {
        [anon_sym_class] = ACTIONS(155),
        [sym_comment] = ACTIONS(91),
    },
    [21] = {
        [anon_sym_class] = ACTIONS(167),
        [sym_comment] = ACTIONS(91),
    },
    [22] = {
        [anon_sym_struct] = ACTIONS(157),
        [sym_comment] = ACTIONS(91),
    },
    [23] = {
        [anon_sym_struct] = ACTIONS(169),
        [sym_comment] = ACTIONS(91),
    },
    [24] = {
        [sym_extern_alias_directive] = STATE(45),
        [sym_using_directive] = STATE(14),
        [sym__type_declaration] = STATE(15),
        [sym_namespace_declaration] = STATE(15),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(15),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym_compilation_unit_repeat2] = STATE(46),
        [aux_sym_compilation_unit_repeat3] = STATE(44),
        [aux_sym__attributes_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_extern] = ACTIONS(95),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [25] = {
        [sym_using_directive] = STATE(43),
        [sym__type_declaration] = STATE(15),
        [sym_namespace_declaration] = STATE(15),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(15),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym_compilation_unit_repeat3] = STATE(44),
        [aux_sym__attributes_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [26] = {
        [sym__type_declaration] = STATE(42),
        [sym_namespace_declaration] = STATE(42),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(42),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [27] = {
        [sym__attribute_section] = STATE(29),
        [anon_sym_class] = ACTIONS(173),
        [anon_sym_struct] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(173),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_sbyte] = ACTIONS(173),
        [anon_sym_byte] = ACTIONS(173),
        [anon_sym_short] = ACTIONS(173),
        [anon_sym_ushort] = ACTIONS(173),
        [anon_sym_int] = ACTIONS(173),
        [anon_sym_uint] = ACTIONS(173),
        [anon_sym_long] = ACTIONS(173),
        [anon_sym_ulong] = ACTIONS(173),
        [anon_sym_char] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(173),
        [anon_sym_volatile] = ACTIONS(173),
        [anon_sym_bool] = ACTIONS(173),
        [anon_sym_decimal] = ACTIONS(173),
        [anon_sym_double] = ACTIONS(173),
        [anon_sym_float] = ACTIONS(173),
        [anon_sym_object] = ACTIONS(173),
        [anon_sym_string] = ACTIONS(173),
        [sym_identifier_name] = ACTIONS(177),
        [sym_comment] = ACTIONS(91),
    },
    [28] = {
        [sym_attribute_list] = STATE(31),
        [sym_attribute] = STATE(32),
        [sym_identifier_name] = ACTIONS(179),
        [sym_comment] = ACTIONS(91),
    },
    [29] = {
        [anon_sym_class] = ACTIONS(181),
        [anon_sym_struct] = ACTIONS(181),
        [anon_sym_LBRACK] = ACTIONS(183),
        [anon_sym_enum] = ACTIONS(181),
        [anon_sym_new] = ACTIONS(181),
        [anon_sym_public] = ACTIONS(181),
        [anon_sym_protected] = ACTIONS(181),
        [anon_sym_internal] = ACTIONS(181),
        [anon_sym_private] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_unsafe] = ACTIONS(181),
        [anon_sym_abstract] = ACTIONS(181),
        [anon_sym_sealed] = ACTIONS(181),
        [anon_sym_static] = ACTIONS(181),
        [anon_sym_readonly] = ACTIONS(181),
        [anon_sym_volatile] = ACTIONS(181),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(185),
        [sym_comment] = ACTIONS(91),
    },
    [30] = {
        [sym_attribute_argument_list] = STATE(40),
        [anon_sym_RBRACK] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(187),
        [anon_sym_LPAREN] = ACTIONS(189),
        [sym_comment] = ACTIONS(91),
    },
    [31] = {
        [anon_sym_RBRACK] = ACTIONS(191),
        [sym_comment] = ACTIONS(91),
    },
    [32] = {
        [aux_sym_attribute_list_repeat1] = STATE(34),
        [anon_sym_RBRACK] = ACTIONS(193),
        [anon_sym_COMMA] = ACTIONS(195),
        [sym_comment] = ACTIONS(91),
    },
    [33] = {
        [sym_attribute] = STATE(37),
        [sym_identifier_name] = ACTIONS(179),
        [sym_comment] = ACTIONS(91),
    },
    [34] = {
        [anon_sym_RBRACK] = ACTIONS(197),
        [anon_sym_COMMA] = ACTIONS(199),
        [sym_comment] = ACTIONS(91),
    },
    [35] = {
        [sym_attribute] = STATE(36),
        [sym_identifier_name] = ACTIONS(179),
        [sym_comment] = ACTIONS(91),
    },
    [36] = {
        [anon_sym_RBRACK] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(201),
        [sym_comment] = ACTIONS(91),
    },
    [37] = {
        [anon_sym_RBRACK] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(203),
        [sym_comment] = ACTIONS(91),
    },
    [38] = {
        [anon_sym_class] = ACTIONS(205),
        [anon_sym_struct] = ACTIONS(205),
        [anon_sym_LBRACK] = ACTIONS(207),
        [anon_sym_enum] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(205),
        [anon_sym_public] = ACTIONS(205),
        [anon_sym_protected] = ACTIONS(205),
        [anon_sym_internal] = ACTIONS(205),
        [anon_sym_private] = ACTIONS(205),
        [anon_sym_sbyte] = ACTIONS(205),
        [anon_sym_byte] = ACTIONS(205),
        [anon_sym_short] = ACTIONS(205),
        [anon_sym_ushort] = ACTIONS(205),
        [anon_sym_int] = ACTIONS(205),
        [anon_sym_uint] = ACTIONS(205),
        [anon_sym_long] = ACTIONS(205),
        [anon_sym_ulong] = ACTIONS(205),
        [anon_sym_char] = ACTIONS(205),
        [anon_sym_unsafe] = ACTIONS(205),
        [anon_sym_abstract] = ACTIONS(205),
        [anon_sym_sealed] = ACTIONS(205),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_readonly] = ACTIONS(205),
        [anon_sym_volatile] = ACTIONS(205),
        [anon_sym_bool] = ACTIONS(205),
        [anon_sym_decimal] = ACTIONS(205),
        [anon_sym_double] = ACTIONS(205),
        [anon_sym_float] = ACTIONS(205),
        [anon_sym_object] = ACTIONS(205),
        [anon_sym_string] = ACTIONS(205),
        [sym_identifier_name] = ACTIONS(209),
        [sym_comment] = ACTIONS(91),
    },
    [39] = {
        [anon_sym_RPAREN] = ACTIONS(211),
        [sym_comment] = ACTIONS(91),
    },
    [40] = {
        [anon_sym_RBRACK] = ACTIONS(213),
        [anon_sym_COMMA] = ACTIONS(213),
        [sym_comment] = ACTIONS(91),
    },
    [41] = {
        [anon_sym_RBRACK] = ACTIONS(215),
        [anon_sym_COMMA] = ACTIONS(215),
        [sym_comment] = ACTIONS(91),
    },
    [42] = {
        [ts_builtin_sym_end] = ACTIONS(217),
        [anon_sym_namespace] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(217),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_enum] = ACTIONS(217),
        [anon_sym_new] = ACTIONS(217),
        [anon_sym_public] = ACTIONS(217),
        [anon_sym_protected] = ACTIONS(217),
        [anon_sym_internal] = ACTIONS(217),
        [anon_sym_private] = ACTIONS(217),
        [anon_sym_unsafe] = ACTIONS(217),
        [anon_sym_abstract] = ACTIONS(217),
        [anon_sym_sealed] = ACTIONS(217),
        [anon_sym_static] = ACTIONS(217),
        [sym_comment] = ACTIONS(91),
    },
    [43] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_using] = ACTIONS(219),
        [anon_sym_namespace] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(219),
        [anon_sym_struct] = ACTIONS(219),
        [anon_sym_LBRACK] = ACTIONS(219),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(219),
        [anon_sym_public] = ACTIONS(219),
        [anon_sym_protected] = ACTIONS(219),
        [anon_sym_internal] = ACTIONS(219),
        [anon_sym_private] = ACTIONS(219),
        [anon_sym_unsafe] = ACTIONS(219),
        [anon_sym_abstract] = ACTIONS(219),
        [anon_sym_sealed] = ACTIONS(219),
        [anon_sym_static] = ACTIONS(219),
        [sym_comment] = ACTIONS(91),
    },
    [44] = {
        [sym__type_declaration] = STATE(42),
        [sym_namespace_declaration] = STATE(42),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(42),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [45] = {
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_extern] = ACTIONS(223),
        [anon_sym_using] = ACTIONS(223),
        [anon_sym_namespace] = ACTIONS(223),
        [anon_sym_class] = ACTIONS(223),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(223),
        [anon_sym_enum] = ACTIONS(223),
        [anon_sym_new] = ACTIONS(223),
        [anon_sym_public] = ACTIONS(223),
        [anon_sym_protected] = ACTIONS(223),
        [anon_sym_internal] = ACTIONS(223),
        [anon_sym_private] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(223),
        [anon_sym_abstract] = ACTIONS(223),
        [anon_sym_sealed] = ACTIONS(223),
        [anon_sym_static] = ACTIONS(223),
        [sym_comment] = ACTIONS(91),
    },
    [46] = {
        [sym_using_directive] = STATE(43),
        [sym__type_declaration] = STATE(15),
        [sym_namespace_declaration] = STATE(15),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(15),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym_compilation_unit_repeat3] = STATE(47),
        [aux_sym__attributes_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [47] = {
        [sym__type_declaration] = STATE(42),
        [sym_namespace_declaration] = STATE(42),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(42),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [48] = {
        [sym_identifier_name] = ACTIONS(227),
        [sym_comment] = ACTIONS(91),
    },
    [49] = {
        [sym_type_parameter_list] = STATE(52),
        [anon_sym_LBRACE] = ACTIONS(229),
        [anon_sym_LT] = ACTIONS(231),
        [sym_comment] = ACTIONS(91),
    },
    [50] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(74),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(233),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [51] = {
        [sym__type] = STATE(178),
        [sym_generic_name] = STATE(65),
        [sym_predefined_type] = STATE(65),
        [sym_type_parameter] = STATE(179),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [52] = {
        [anon_sym_LBRACE] = ACTIONS(255),
        [sym_comment] = ACTIONS(91),
    },
    [53] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(68),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(257),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [54] = {
        [ts_builtin_sym_end] = ACTIONS(259),
        [anon_sym_namespace] = ACTIONS(261),
        [anon_sym_RBRACE] = ACTIONS(259),
        [anon_sym_class] = ACTIONS(261),
        [anon_sym_struct] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(259),
        [anon_sym_enum] = ACTIONS(261),
        [anon_sym_new] = ACTIONS(261),
        [anon_sym_public] = ACTIONS(261),
        [anon_sym_protected] = ACTIONS(261),
        [anon_sym_internal] = ACTIONS(261),
        [anon_sym_private] = ACTIONS(261),
        [anon_sym_sbyte] = ACTIONS(261),
        [anon_sym_byte] = ACTIONS(261),
        [anon_sym_short] = ACTIONS(261),
        [anon_sym_ushort] = ACTIONS(261),
        [anon_sym_int] = ACTIONS(261),
        [anon_sym_uint] = ACTIONS(261),
        [anon_sym_long] = ACTIONS(261),
        [anon_sym_ulong] = ACTIONS(261),
        [anon_sym_char] = ACTIONS(261),
        [anon_sym_unsafe] = ACTIONS(261),
        [anon_sym_abstract] = ACTIONS(261),
        [anon_sym_sealed] = ACTIONS(261),
        [anon_sym_static] = ACTIONS(261),
        [anon_sym_readonly] = ACTIONS(261),
        [anon_sym_volatile] = ACTIONS(261),
        [anon_sym_bool] = ACTIONS(261),
        [anon_sym_decimal] = ACTIONS(261),
        [anon_sym_double] = ACTIONS(261),
        [anon_sym_float] = ACTIONS(261),
        [anon_sym_object] = ACTIONS(261),
        [anon_sym_string] = ACTIONS(261),
        [sym_identifier_name] = ACTIONS(263),
        [sym_comment] = ACTIONS(91),
    },
    [55] = {
        [sym__class_modifiers] = STATE(188),
        [sym__struct_modifiers] = STATE(189),
        [sym__field_modifiers] = STATE(187),
        [anon_sym_class] = ACTIONS(265),
        [anon_sym_struct] = ACTIONS(267),
        [anon_sym_enum] = ACTIONS(269),
        [anon_sym_new] = ACTIONS(245),
        [anon_sym_public] = ACTIONS(245),
        [anon_sym_protected] = ACTIONS(245),
        [anon_sym_internal] = ACTIONS(245),
        [anon_sym_private] = ACTIONS(245),
        [anon_sym_sbyte] = ACTIONS(271),
        [anon_sym_byte] = ACTIONS(271),
        [anon_sym_short] = ACTIONS(271),
        [anon_sym_ushort] = ACTIONS(271),
        [anon_sym_int] = ACTIONS(271),
        [anon_sym_uint] = ACTIONS(271),
        [anon_sym_long] = ACTIONS(271),
        [anon_sym_ulong] = ACTIONS(271),
        [anon_sym_char] = ACTIONS(271),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(271),
        [anon_sym_decimal] = ACTIONS(271),
        [anon_sym_double] = ACTIONS(271),
        [anon_sym_float] = ACTIONS(271),
        [anon_sym_object] = ACTIONS(271),
        [anon_sym_string] = ACTIONS(271),
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(91),
    },
    [56] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_GT] = ACTIONS(275),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(91),
    },
    [57] = {
        [sym__class_modifiers] = STATE(188),
        [sym__struct_modifiers] = STATE(189),
        [sym__field_modifiers] = STATE(187),
        [anon_sym_class] = ACTIONS(265),
        [anon_sym_struct] = ACTIONS(267),
        [anon_sym_new] = ACTIONS(245),
        [anon_sym_public] = ACTIONS(245),
        [anon_sym_protected] = ACTIONS(245),
        [anon_sym_internal] = ACTIONS(245),
        [anon_sym_private] = ACTIONS(245),
        [anon_sym_sbyte] = ACTIONS(271),
        [anon_sym_byte] = ACTIONS(271),
        [anon_sym_short] = ACTIONS(271),
        [anon_sym_ushort] = ACTIONS(271),
        [anon_sym_int] = ACTIONS(271),
        [anon_sym_uint] = ACTIONS(271),
        [anon_sym_long] = ACTIONS(271),
        [anon_sym_ulong] = ACTIONS(271),
        [anon_sym_char] = ACTIONS(271),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(271),
        [anon_sym_decimal] = ACTIONS(271),
        [anon_sym_double] = ACTIONS(271),
        [anon_sym_float] = ACTIONS(271),
        [anon_sym_object] = ACTIONS(271),
        [anon_sym_string] = ACTIONS(271),
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(91),
    },
    [58] = {
        [sym__class_modifiers] = STATE(188),
        [sym__field_modifiers] = STATE(187),
        [anon_sym_class] = ACTIONS(265),
        [anon_sym_new] = ACTIONS(249),
        [anon_sym_public] = ACTIONS(249),
        [anon_sym_protected] = ACTIONS(249),
        [anon_sym_internal] = ACTIONS(249),
        [anon_sym_private] = ACTIONS(249),
        [anon_sym_sbyte] = ACTIONS(271),
        [anon_sym_byte] = ACTIONS(271),
        [anon_sym_short] = ACTIONS(271),
        [anon_sym_ushort] = ACTIONS(271),
        [anon_sym_int] = ACTIONS(271),
        [anon_sym_uint] = ACTIONS(271),
        [anon_sym_long] = ACTIONS(271),
        [anon_sym_ulong] = ACTIONS(271),
        [anon_sym_char] = ACTIONS(271),
        [anon_sym_unsafe] = ACTIONS(249),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(271),
        [anon_sym_decimal] = ACTIONS(271),
        [anon_sym_double] = ACTIONS(271),
        [anon_sym_float] = ACTIONS(271),
        [anon_sym_object] = ACTIONS(271),
        [anon_sym_string] = ACTIONS(271),
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(91),
    },
    [59] = {
        [sym__field_modifiers] = STATE(187),
        [anon_sym_new] = ACTIONS(251),
        [anon_sym_public] = ACTIONS(251),
        [anon_sym_protected] = ACTIONS(251),
        [anon_sym_internal] = ACTIONS(251),
        [anon_sym_private] = ACTIONS(251),
        [anon_sym_sbyte] = ACTIONS(271),
        [anon_sym_byte] = ACTIONS(271),
        [anon_sym_short] = ACTIONS(271),
        [anon_sym_ushort] = ACTIONS(271),
        [anon_sym_int] = ACTIONS(271),
        [anon_sym_uint] = ACTIONS(271),
        [anon_sym_long] = ACTIONS(271),
        [anon_sym_ulong] = ACTIONS(271),
        [anon_sym_char] = ACTIONS(271),
        [anon_sym_unsafe] = ACTIONS(251),
        [anon_sym_static] = ACTIONS(251),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(271),
        [anon_sym_decimal] = ACTIONS(271),
        [anon_sym_double] = ACTIONS(271),
        [anon_sym_float] = ACTIONS(271),
        [anon_sym_object] = ACTIONS(271),
        [anon_sym_string] = ACTIONS(271),
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(91),
    },
    [60] = {
        [sym_type_parameter_list] = STATE(177),
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_LT] = ACTIONS(231),
        [anon_sym_GT] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(91),
    },
    [61] = {
        [anon_sym_RBRACE] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(285),
        [anon_sym_struct] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(283),
        [anon_sym_enum] = ACTIONS(285),
        [anon_sym_new] = ACTIONS(285),
        [anon_sym_public] = ACTIONS(285),
        [anon_sym_protected] = ACTIONS(285),
        [anon_sym_internal] = ACTIONS(285),
        [anon_sym_private] = ACTIONS(285),
        [anon_sym_sbyte] = ACTIONS(285),
        [anon_sym_byte] = ACTIONS(285),
        [anon_sym_short] = ACTIONS(285),
        [anon_sym_ushort] = ACTIONS(285),
        [anon_sym_int] = ACTIONS(285),
        [anon_sym_uint] = ACTIONS(285),
        [anon_sym_long] = ACTIONS(285),
        [anon_sym_ulong] = ACTIONS(285),
        [anon_sym_char] = ACTIONS(285),
        [anon_sym_unsafe] = ACTIONS(285),
        [anon_sym_abstract] = ACTIONS(285),
        [anon_sym_sealed] = ACTIONS(285),
        [anon_sym_static] = ACTIONS(285),
        [anon_sym_readonly] = ACTIONS(285),
        [anon_sym_volatile] = ACTIONS(285),
        [anon_sym_bool] = ACTIONS(285),
        [anon_sym_decimal] = ACTIONS(285),
        [anon_sym_double] = ACTIONS(285),
        [anon_sym_float] = ACTIONS(285),
        [anon_sym_object] = ACTIONS(285),
        [anon_sym_string] = ACTIONS(285),
        [sym_identifier_name] = ACTIONS(287),
        [sym_comment] = ACTIONS(91),
    },
    [62] = {
        [sym_enum_modifier] = STATE(154),
        [sym_variable_declaration] = STATE(71),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(155),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(156),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(157),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [anon_sym_class] = ACTIONS(289),
        [anon_sym_struct] = ACTIONS(291),
        [anon_sym_enum] = ACTIONS(293),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [63] = {
        [anon_sym_SEMI] = ACTIONS(295),
        [sym_comment] = ACTIONS(91),
    },
    [64] = {
        [sym_variable_declarator] = STATE(86),
        [sym_identifier_name] = ACTIONS(297),
        [sym_comment] = ACTIONS(91),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_GT] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(91),
    },
    [66] = {
        [sym_variable_declaration] = STATE(71),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_predefined_type] = STATE(65),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [67] = {
        [anon_sym_sbyte] = ACTIONS(299),
        [anon_sym_byte] = ACTIONS(299),
        [anon_sym_short] = ACTIONS(299),
        [anon_sym_ushort] = ACTIONS(299),
        [anon_sym_int] = ACTIONS(299),
        [anon_sym_uint] = ACTIONS(299),
        [anon_sym_long] = ACTIONS(299),
        [anon_sym_ulong] = ACTIONS(299),
        [anon_sym_char] = ACTIONS(299),
        [anon_sym_bool] = ACTIONS(299),
        [anon_sym_decimal] = ACTIONS(299),
        [anon_sym_double] = ACTIONS(299),
        [anon_sym_float] = ACTIONS(299),
        [anon_sym_object] = ACTIONS(299),
        [anon_sym_string] = ACTIONS(299),
        [sym_identifier_name] = ACTIONS(301),
        [sym_comment] = ACTIONS(91),
    },
    [68] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(303),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [69] = {
        [ts_builtin_sym_end] = ACTIONS(305),
        [anon_sym_namespace] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(305),
        [anon_sym_class] = ACTIONS(307),
        [anon_sym_struct] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(305),
        [anon_sym_enum] = ACTIONS(307),
        [anon_sym_new] = ACTIONS(307),
        [anon_sym_public] = ACTIONS(307),
        [anon_sym_protected] = ACTIONS(307),
        [anon_sym_internal] = ACTIONS(307),
        [anon_sym_private] = ACTIONS(307),
        [anon_sym_sbyte] = ACTIONS(307),
        [anon_sym_byte] = ACTIONS(307),
        [anon_sym_short] = ACTIONS(307),
        [anon_sym_ushort] = ACTIONS(307),
        [anon_sym_int] = ACTIONS(307),
        [anon_sym_uint] = ACTIONS(307),
        [anon_sym_long] = ACTIONS(307),
        [anon_sym_ulong] = ACTIONS(307),
        [anon_sym_char] = ACTIONS(307),
        [anon_sym_unsafe] = ACTIONS(307),
        [anon_sym_abstract] = ACTIONS(307),
        [anon_sym_sealed] = ACTIONS(307),
        [anon_sym_static] = ACTIONS(307),
        [anon_sym_readonly] = ACTIONS(307),
        [anon_sym_volatile] = ACTIONS(307),
        [anon_sym_bool] = ACTIONS(307),
        [anon_sym_decimal] = ACTIONS(307),
        [anon_sym_double] = ACTIONS(307),
        [anon_sym_float] = ACTIONS(307),
        [anon_sym_object] = ACTIONS(307),
        [anon_sym_string] = ACTIONS(307),
        [sym_identifier_name] = ACTIONS(309),
        [sym_comment] = ACTIONS(91),
    },
    [70] = {
        [anon_sym_RBRACE] = ACTIONS(311),
        [anon_sym_class] = ACTIONS(313),
        [anon_sym_struct] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(311),
        [anon_sym_enum] = ACTIONS(313),
        [anon_sym_new] = ACTIONS(313),
        [anon_sym_public] = ACTIONS(313),
        [anon_sym_protected] = ACTIONS(313),
        [anon_sym_internal] = ACTIONS(313),
        [anon_sym_private] = ACTIONS(313),
        [anon_sym_sbyte] = ACTIONS(313),
        [anon_sym_byte] = ACTIONS(313),
        [anon_sym_short] = ACTIONS(313),
        [anon_sym_ushort] = ACTIONS(313),
        [anon_sym_int] = ACTIONS(313),
        [anon_sym_uint] = ACTIONS(313),
        [anon_sym_long] = ACTIONS(313),
        [anon_sym_ulong] = ACTIONS(313),
        [anon_sym_char] = ACTIONS(313),
        [anon_sym_unsafe] = ACTIONS(313),
        [anon_sym_abstract] = ACTIONS(313),
        [anon_sym_sealed] = ACTIONS(313),
        [anon_sym_static] = ACTIONS(313),
        [anon_sym_readonly] = ACTIONS(313),
        [anon_sym_volatile] = ACTIONS(313),
        [anon_sym_bool] = ACTIONS(313),
        [anon_sym_decimal] = ACTIONS(313),
        [anon_sym_double] = ACTIONS(313),
        [anon_sym_float] = ACTIONS(313),
        [anon_sym_object] = ACTIONS(313),
        [anon_sym_string] = ACTIONS(313),
        [sym_identifier_name] = ACTIONS(315),
        [sym_comment] = ACTIONS(91),
    },
    [71] = {
        [anon_sym_SEMI] = ACTIONS(317),
        [sym_comment] = ACTIONS(91),
    },
    [72] = {
        [anon_sym_RBRACE] = ACTIONS(319),
        [anon_sym_class] = ACTIONS(321),
        [anon_sym_struct] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(319),
        [anon_sym_enum] = ACTIONS(321),
        [anon_sym_new] = ACTIONS(321),
        [anon_sym_public] = ACTIONS(321),
        [anon_sym_protected] = ACTIONS(321),
        [anon_sym_internal] = ACTIONS(321),
        [anon_sym_private] = ACTIONS(321),
        [anon_sym_sbyte] = ACTIONS(321),
        [anon_sym_byte] = ACTIONS(321),
        [anon_sym_short] = ACTIONS(321),
        [anon_sym_ushort] = ACTIONS(321),
        [anon_sym_int] = ACTIONS(321),
        [anon_sym_uint] = ACTIONS(321),
        [anon_sym_long] = ACTIONS(321),
        [anon_sym_ulong] = ACTIONS(321),
        [anon_sym_char] = ACTIONS(321),
        [anon_sym_unsafe] = ACTIONS(321),
        [anon_sym_abstract] = ACTIONS(321),
        [anon_sym_sealed] = ACTIONS(321),
        [anon_sym_static] = ACTIONS(321),
        [anon_sym_readonly] = ACTIONS(321),
        [anon_sym_volatile] = ACTIONS(321),
        [anon_sym_bool] = ACTIONS(321),
        [anon_sym_decimal] = ACTIONS(321),
        [anon_sym_double] = ACTIONS(321),
        [anon_sym_float] = ACTIONS(321),
        [anon_sym_object] = ACTIONS(321),
        [anon_sym_string] = ACTIONS(321),
        [sym_identifier_name] = ACTIONS(323),
        [sym_comment] = ACTIONS(91),
    },
    [73] = {
        [ts_builtin_sym_end] = ACTIONS(325),
        [anon_sym_namespace] = ACTIONS(327),
        [anon_sym_RBRACE] = ACTIONS(325),
        [anon_sym_class] = ACTIONS(327),
        [anon_sym_struct] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(325),
        [anon_sym_enum] = ACTIONS(327),
        [anon_sym_new] = ACTIONS(327),
        [anon_sym_public] = ACTIONS(327),
        [anon_sym_protected] = ACTIONS(327),
        [anon_sym_internal] = ACTIONS(327),
        [anon_sym_private] = ACTIONS(327),
        [anon_sym_sbyte] = ACTIONS(327),
        [anon_sym_byte] = ACTIONS(327),
        [anon_sym_short] = ACTIONS(327),
        [anon_sym_ushort] = ACTIONS(327),
        [anon_sym_int] = ACTIONS(327),
        [anon_sym_uint] = ACTIONS(327),
        [anon_sym_long] = ACTIONS(327),
        [anon_sym_ulong] = ACTIONS(327),
        [anon_sym_char] = ACTIONS(327),
        [anon_sym_unsafe] = ACTIONS(327),
        [anon_sym_abstract] = ACTIONS(327),
        [anon_sym_sealed] = ACTIONS(327),
        [anon_sym_static] = ACTIONS(327),
        [anon_sym_readonly] = ACTIONS(327),
        [anon_sym_volatile] = ACTIONS(327),
        [anon_sym_bool] = ACTIONS(327),
        [anon_sym_decimal] = ACTIONS(327),
        [anon_sym_double] = ACTIONS(327),
        [anon_sym_float] = ACTIONS(327),
        [anon_sym_object] = ACTIONS(327),
        [anon_sym_string] = ACTIONS(327),
        [sym_identifier_name] = ACTIONS(329),
        [sym_comment] = ACTIONS(91),
    },
    [74] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(257),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [75] = {
        [sym_identifier_name] = ACTIONS(331),
        [sym_comment] = ACTIONS(91),
    },
    [76] = {
        [sym_type_parameter_list] = STATE(78),
        [anon_sym_LBRACE] = ACTIONS(333),
        [anon_sym_LT] = ACTIONS(231),
        [sym_comment] = ACTIONS(91),
    },
    [77] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(84),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [78] = {
        [anon_sym_LBRACE] = ACTIONS(337),
        [sym_comment] = ACTIONS(91),
    },
    [79] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(81),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [80] = {
        [ts_builtin_sym_end] = ACTIONS(341),
        [anon_sym_namespace] = ACTIONS(343),
        [anon_sym_RBRACE] = ACTIONS(341),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_struct] = ACTIONS(343),
        [anon_sym_LBRACK] = ACTIONS(341),
        [anon_sym_enum] = ACTIONS(343),
        [anon_sym_new] = ACTIONS(343),
        [anon_sym_public] = ACTIONS(343),
        [anon_sym_protected] = ACTIONS(343),
        [anon_sym_internal] = ACTIONS(343),
        [anon_sym_private] = ACTIONS(343),
        [anon_sym_sbyte] = ACTIONS(343),
        [anon_sym_byte] = ACTIONS(343),
        [anon_sym_short] = ACTIONS(343),
        [anon_sym_ushort] = ACTIONS(343),
        [anon_sym_int] = ACTIONS(343),
        [anon_sym_uint] = ACTIONS(343),
        [anon_sym_long] = ACTIONS(343),
        [anon_sym_ulong] = ACTIONS(343),
        [anon_sym_char] = ACTIONS(343),
        [anon_sym_unsafe] = ACTIONS(343),
        [anon_sym_abstract] = ACTIONS(343),
        [anon_sym_sealed] = ACTIONS(343),
        [anon_sym_static] = ACTIONS(343),
        [anon_sym_readonly] = ACTIONS(343),
        [anon_sym_volatile] = ACTIONS(343),
        [anon_sym_bool] = ACTIONS(343),
        [anon_sym_decimal] = ACTIONS(343),
        [anon_sym_double] = ACTIONS(343),
        [anon_sym_float] = ACTIONS(343),
        [anon_sym_object] = ACTIONS(343),
        [anon_sym_string] = ACTIONS(343),
        [sym_identifier_name] = ACTIONS(345),
        [sym_comment] = ACTIONS(91),
    },
    [81] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(347),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [82] = {
        [ts_builtin_sym_end] = ACTIONS(349),
        [anon_sym_namespace] = ACTIONS(351),
        [anon_sym_RBRACE] = ACTIONS(349),
        [anon_sym_class] = ACTIONS(351),
        [anon_sym_struct] = ACTIONS(351),
        [anon_sym_LBRACK] = ACTIONS(349),
        [anon_sym_enum] = ACTIONS(351),
        [anon_sym_new] = ACTIONS(351),
        [anon_sym_public] = ACTIONS(351),
        [anon_sym_protected] = ACTIONS(351),
        [anon_sym_internal] = ACTIONS(351),
        [anon_sym_private] = ACTIONS(351),
        [anon_sym_sbyte] = ACTIONS(351),
        [anon_sym_byte] = ACTIONS(351),
        [anon_sym_short] = ACTIONS(351),
        [anon_sym_ushort] = ACTIONS(351),
        [anon_sym_int] = ACTIONS(351),
        [anon_sym_uint] = ACTIONS(351),
        [anon_sym_long] = ACTIONS(351),
        [anon_sym_ulong] = ACTIONS(351),
        [anon_sym_char] = ACTIONS(351),
        [anon_sym_unsafe] = ACTIONS(351),
        [anon_sym_abstract] = ACTIONS(351),
        [anon_sym_sealed] = ACTIONS(351),
        [anon_sym_static] = ACTIONS(351),
        [anon_sym_readonly] = ACTIONS(351),
        [anon_sym_volatile] = ACTIONS(351),
        [anon_sym_bool] = ACTIONS(351),
        [anon_sym_decimal] = ACTIONS(351),
        [anon_sym_double] = ACTIONS(351),
        [anon_sym_float] = ACTIONS(351),
        [anon_sym_object] = ACTIONS(351),
        [anon_sym_string] = ACTIONS(351),
        [sym_identifier_name] = ACTIONS(353),
        [sym_comment] = ACTIONS(91),
    },
    [83] = {
        [ts_builtin_sym_end] = ACTIONS(355),
        [anon_sym_namespace] = ACTIONS(357),
        [anon_sym_RBRACE] = ACTIONS(355),
        [anon_sym_class] = ACTIONS(357),
        [anon_sym_struct] = ACTIONS(357),
        [anon_sym_LBRACK] = ACTIONS(355),
        [anon_sym_enum] = ACTIONS(357),
        [anon_sym_new] = ACTIONS(357),
        [anon_sym_public] = ACTIONS(357),
        [anon_sym_protected] = ACTIONS(357),
        [anon_sym_internal] = ACTIONS(357),
        [anon_sym_private] = ACTIONS(357),
        [anon_sym_sbyte] = ACTIONS(357),
        [anon_sym_byte] = ACTIONS(357),
        [anon_sym_short] = ACTIONS(357),
        [anon_sym_ushort] = ACTIONS(357),
        [anon_sym_int] = ACTIONS(357),
        [anon_sym_uint] = ACTIONS(357),
        [anon_sym_long] = ACTIONS(357),
        [anon_sym_ulong] = ACTIONS(357),
        [anon_sym_char] = ACTIONS(357),
        [anon_sym_unsafe] = ACTIONS(357),
        [anon_sym_abstract] = ACTIONS(357),
        [anon_sym_sealed] = ACTIONS(357),
        [anon_sym_static] = ACTIONS(357),
        [anon_sym_readonly] = ACTIONS(357),
        [anon_sym_volatile] = ACTIONS(357),
        [anon_sym_bool] = ACTIONS(357),
        [anon_sym_decimal] = ACTIONS(357),
        [anon_sym_double] = ACTIONS(357),
        [anon_sym_float] = ACTIONS(357),
        [anon_sym_object] = ACTIONS(357),
        [anon_sym_string] = ACTIONS(357),
        [sym_identifier_name] = ACTIONS(359),
        [sym_comment] = ACTIONS(91),
    },
    [84] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [85] = {
        [sym_equals_value_clause] = STATE(93),
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_EQ] = ACTIONS(363),
        [sym_comment] = ACTIONS(91),
    },
    [86] = {
        [aux_sym_variable_declaration_repeat1] = STATE(88),
        [anon_sym_SEMI] = ACTIONS(365),
        [anon_sym_COMMA] = ACTIONS(367),
        [sym_comment] = ACTIONS(91),
    },
    [87] = {
        [sym_variable_declarator] = STATE(91),
        [sym_identifier_name] = ACTIONS(297),
        [sym_comment] = ACTIONS(91),
    },
    [88] = {
        [anon_sym_SEMI] = ACTIONS(369),
        [anon_sym_COMMA] = ACTIONS(371),
        [sym_comment] = ACTIONS(91),
    },
    [89] = {
        [sym_variable_declarator] = STATE(90),
        [sym_identifier_name] = ACTIONS(297),
        [sym_comment] = ACTIONS(91),
    },
    [90] = {
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_COMMA] = ACTIONS(373),
        [sym_comment] = ACTIONS(91),
    },
    [91] = {
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(91),
    },
    [92] = {
        [sym__literal] = STATE(102),
        [sym_boolean_literal] = STATE(98),
        [sym_character_literal] = STATE(98),
        [sym_integer_literal] = STATE(98),
        [sym_real_literal] = STATE(98),
        [sym_string_literal] = STATE(98),
        [sym__regular_string_literal] = STATE(103),
        [sym__verbatim_string_literal] = STATE(103),
        [anon_sym_true] = ACTIONS(377),
        [anon_sym_false] = ACTIONS(377),
        [anon_sym_SQUOTE] = ACTIONS(379),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(381),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(383),
        [sym_null_literal] = ACTIONS(385),
        [anon_sym_DOT] = ACTIONS(387),
        [anon_sym_DQUOTE] = ACTIONS(389),
        [anon_sym_AT_DQUOTE] = ACTIONS(391),
        [sym_comment] = ACTIONS(91),
    },
    [93] = {
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_COMMA] = ACTIONS(393),
        [sym_comment] = ACTIONS(91),
    },
    [94] = {
        [anon_sym_SEMI] = ACTIONS(395),
        [anon_sym_RBRACE] = ACTIONS(395),
        [anon_sym_COMMA] = ACTIONS(395),
        [sym_comment] = ACTIONS(91),
    },
    [95] = {
        [sym__unicode_escape_sequence] = STATE(125),
        [sym__simple_escape_sequence] = STATE(125),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(397),
        [sym__hexadecimal_escape_sequence] = ACTIONS(397),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(399),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(399),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(401),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(401),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(401),
        [anon_sym_BSLASH0] = ACTIONS(401),
        [anon_sym_BSLASHa] = ACTIONS(401),
        [anon_sym_BSLASHb] = ACTIONS(401),
        [anon_sym_BSLASHf] = ACTIONS(401),
        [anon_sym_BSLASHn] = ACTIONS(401),
        [anon_sym_BSLASHr] = ACTIONS(401),
        [anon_sym_BSLASHt] = ACTIONS(401),
        [anon_sym_BSLASHv] = ACTIONS(401),
        [sym_comment] = ACTIONS(91),
    },
    [96] = {
        [anon_sym_SEMI] = ACTIONS(403),
        [anon_sym_RBRACE] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(403),
        [sym__integer_type_suffix] = ACTIONS(405),
        [anon_sym_DOT] = ACTIONS(407),
        [sym__real_type_suffix] = ACTIONS(409),
        [sym__exponent_part] = ACTIONS(411),
        [sym_comment] = ACTIONS(91),
    },
    [97] = {
        [anon_sym_SEMI] = ACTIONS(403),
        [anon_sym_RBRACE] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(403),
        [sym__integer_type_suffix] = ACTIONS(405),
        [sym_comment] = ACTIONS(91),
    },
    [98] = {
        [anon_sym_SEMI] = ACTIONS(413),
        [anon_sym_RBRACE] = ACTIONS(413),
        [anon_sym_COMMA] = ACTIONS(413),
        [sym_comment] = ACTIONS(91),
    },
    [99] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(415),
        [sym_comment] = ACTIONS(91),
    },
    [100] = {
        [sym__unicode_escape_sequence] = STATE(106),
        [sym__simple_escape_sequence] = STATE(106),
        [sym__regular_string_literal_character] = STATE(110),
        [aux_sym__regular_string_literal_repeat1] = STATE(111),
        [sym__hexadecimal_escape_sequence] = ACTIONS(417),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(419),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(419),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(421),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(421),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(421),
        [anon_sym_BSLASH0] = ACTIONS(421),
        [anon_sym_BSLASHa] = ACTIONS(421),
        [anon_sym_BSLASHb] = ACTIONS(421),
        [anon_sym_BSLASHf] = ACTIONS(421),
        [anon_sym_BSLASHn] = ACTIONS(421),
        [anon_sym_BSLASHr] = ACTIONS(421),
        [anon_sym_BSLASHt] = ACTIONS(421),
        [anon_sym_BSLASHv] = ACTIONS(421),
        [anon_sym_DQUOTE] = ACTIONS(423),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(417),
        [sym_comment] = ACTIONS(91),
    },
    [101] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(425),
        [sym_comment] = ACTIONS(427),
    },
    [102] = {
        [anon_sym_SEMI] = ACTIONS(429),
        [anon_sym_RBRACE] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(429),
        [sym_comment] = ACTIONS(91),
    },
    [103] = {
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_RBRACE] = ACTIONS(431),
        [anon_sym_COMMA] = ACTIONS(431),
        [sym_comment] = ACTIONS(91),
    },
    [104] = {
        [anon_sym_DQUOTE] = ACTIONS(433),
        [sym_comment] = ACTIONS(91),
    },
    [105] = {
        [anon_sym_SEMI] = ACTIONS(435),
        [anon_sym_RBRACE] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(435),
        [sym_comment] = ACTIONS(91),
    },
    [106] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(437),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(439),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(439),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(439),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(439),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(439),
        [anon_sym_BSLASH0] = ACTIONS(439),
        [anon_sym_BSLASHa] = ACTIONS(439),
        [anon_sym_BSLASHb] = ACTIONS(439),
        [anon_sym_BSLASHf] = ACTIONS(439),
        [anon_sym_BSLASHn] = ACTIONS(439),
        [anon_sym_BSLASHr] = ACTIONS(439),
        [anon_sym_BSLASHt] = ACTIONS(439),
        [anon_sym_BSLASHv] = ACTIONS(439),
        [anon_sym_DQUOTE] = ACTIONS(439),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(437),
        [sym_comment] = ACTIONS(91),
    },
    [107] = {
        [anon_sym_SQUOTE] = ACTIONS(441),
        [sym__hexadecimal_escape_sequence] = ACTIONS(443),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(441),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(441),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(441),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(441),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(441),
        [anon_sym_BSLASH0] = ACTIONS(441),
        [anon_sym_BSLASHa] = ACTIONS(441),
        [anon_sym_BSLASHb] = ACTIONS(441),
        [anon_sym_BSLASHf] = ACTIONS(441),
        [anon_sym_BSLASHn] = ACTIONS(441),
        [anon_sym_BSLASHr] = ACTIONS(441),
        [anon_sym_BSLASHt] = ACTIONS(441),
        [anon_sym_BSLASHv] = ACTIONS(441),
        [anon_sym_DQUOTE] = ACTIONS(441),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(445),
        [sym_comment] = ACTIONS(91),
    },
    [108] = {
        [anon_sym_SQUOTE] = ACTIONS(447),
        [sym__hexadecimal_escape_sequence] = ACTIONS(449),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(447),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(447),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(447),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(447),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(447),
        [anon_sym_BSLASH0] = ACTIONS(447),
        [anon_sym_BSLASHa] = ACTIONS(447),
        [anon_sym_BSLASHb] = ACTIONS(447),
        [anon_sym_BSLASHf] = ACTIONS(447),
        [anon_sym_BSLASHn] = ACTIONS(447),
        [anon_sym_BSLASHr] = ACTIONS(447),
        [anon_sym_BSLASHt] = ACTIONS(447),
        [anon_sym_BSLASHv] = ACTIONS(447),
        [anon_sym_DQUOTE] = ACTIONS(447),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(451),
        [sym_comment] = ACTIONS(91),
    },
    [109] = {
        [anon_sym_SEMI] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(453),
        [anon_sym_COMMA] = ACTIONS(453),
        [sym_comment] = ACTIONS(91),
    },
    [110] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(455),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(457),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(457),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(457),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(457),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(457),
        [anon_sym_BSLASH0] = ACTIONS(457),
        [anon_sym_BSLASHa] = ACTIONS(457),
        [anon_sym_BSLASHb] = ACTIONS(457),
        [anon_sym_BSLASHf] = ACTIONS(457),
        [anon_sym_BSLASHn] = ACTIONS(457),
        [anon_sym_BSLASHr] = ACTIONS(457),
        [anon_sym_BSLASHt] = ACTIONS(457),
        [anon_sym_BSLASHv] = ACTIONS(457),
        [anon_sym_DQUOTE] = ACTIONS(457),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(455),
        [sym_comment] = ACTIONS(91),
    },
    [111] = {
        [sym__unicode_escape_sequence] = STATE(106),
        [sym__simple_escape_sequence] = STATE(106),
        [sym__regular_string_literal_character] = STATE(113),
        [sym__hexadecimal_escape_sequence] = ACTIONS(417),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(419),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(419),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(421),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(421),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(421),
        [anon_sym_BSLASH0] = ACTIONS(421),
        [anon_sym_BSLASHa] = ACTIONS(421),
        [anon_sym_BSLASHb] = ACTIONS(421),
        [anon_sym_BSLASHf] = ACTIONS(421),
        [anon_sym_BSLASHn] = ACTIONS(421),
        [anon_sym_BSLASHr] = ACTIONS(421),
        [anon_sym_BSLASHt] = ACTIONS(421),
        [anon_sym_BSLASHv] = ACTIONS(421),
        [anon_sym_DQUOTE] = ACTIONS(459),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(417),
        [sym_comment] = ACTIONS(91),
    },
    [112] = {
        [anon_sym_SEMI] = ACTIONS(461),
        [anon_sym_RBRACE] = ACTIONS(461),
        [anon_sym_COMMA] = ACTIONS(461),
        [sym_comment] = ACTIONS(91),
    },
    [113] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(463),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(465),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(465),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(465),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(465),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(465),
        [anon_sym_BSLASH0] = ACTIONS(465),
        [anon_sym_BSLASHa] = ACTIONS(465),
        [anon_sym_BSLASHb] = ACTIONS(465),
        [anon_sym_BSLASHf] = ACTIONS(465),
        [anon_sym_BSLASHn] = ACTIONS(465),
        [anon_sym_BSLASHr] = ACTIONS(465),
        [anon_sym_BSLASHt] = ACTIONS(465),
        [anon_sym_BSLASHv] = ACTIONS(465),
        [anon_sym_DQUOTE] = ACTIONS(465),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [114] = {
        [anon_sym_SEMI] = ACTIONS(467),
        [anon_sym_RBRACE] = ACTIONS(467),
        [anon_sym_COMMA] = ACTIONS(467),
        [sym__real_type_suffix] = ACTIONS(469),
        [sym__exponent_part] = ACTIONS(471),
        [sym_comment] = ACTIONS(91),
    },
    [115] = {
        [anon_sym_SEMI] = ACTIONS(473),
        [anon_sym_RBRACE] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(473),
        [sym_comment] = ACTIONS(91),
    },
    [116] = {
        [anon_sym_SEMI] = ACTIONS(473),
        [anon_sym_RBRACE] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(473),
        [sym__real_type_suffix] = ACTIONS(475),
        [sym_comment] = ACTIONS(91),
    },
    [117] = {
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_RBRACE] = ACTIONS(477),
        [anon_sym_COMMA] = ACTIONS(477),
        [sym_comment] = ACTIONS(91),
    },
    [118] = {
        [anon_sym_SEMI] = ACTIONS(479),
        [anon_sym_RBRACE] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(479),
        [sym_comment] = ACTIONS(91),
    },
    [119] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(481),
        [sym_comment] = ACTIONS(91),
    },
    [120] = {
        [anon_sym_SEMI] = ACTIONS(467),
        [anon_sym_RBRACE] = ACTIONS(467),
        [anon_sym_COMMA] = ACTIONS(467),
        [sym_comment] = ACTIONS(91),
    },
    [121] = {
        [anon_sym_SEMI] = ACTIONS(467),
        [anon_sym_RBRACE] = ACTIONS(467),
        [anon_sym_COMMA] = ACTIONS(467),
        [sym__real_type_suffix] = ACTIONS(469),
        [sym_comment] = ACTIONS(91),
    },
    [122] = {
        [anon_sym_SEMI] = ACTIONS(473),
        [anon_sym_RBRACE] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(473),
        [sym__real_type_suffix] = ACTIONS(475),
        [sym__exponent_part] = ACTIONS(483),
        [sym_comment] = ACTIONS(91),
    },
    [123] = {
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_RBRACE] = ACTIONS(477),
        [anon_sym_COMMA] = ACTIONS(477),
        [sym__real_type_suffix] = ACTIONS(485),
        [sym_comment] = ACTIONS(91),
    },
    [124] = {
        [anon_sym_SEMI] = ACTIONS(487),
        [anon_sym_RBRACE] = ACTIONS(487),
        [anon_sym_COMMA] = ACTIONS(487),
        [sym_comment] = ACTIONS(91),
    },
    [125] = {
        [anon_sym_SQUOTE] = ACTIONS(489),
        [sym_comment] = ACTIONS(91),
    },
    [126] = {
        [anon_sym_SQUOTE] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [127] = {
        [anon_sym_SQUOTE] = ACTIONS(447),
        [sym_comment] = ACTIONS(91),
    },
    [128] = {
        [anon_sym_SEMI] = ACTIONS(491),
        [anon_sym_RBRACE] = ACTIONS(491),
        [anon_sym_COMMA] = ACTIONS(491),
        [sym_comment] = ACTIONS(91),
    },
    [129] = {
        [anon_sym_RBRACE] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_struct] = ACTIONS(495),
        [anon_sym_LBRACK] = ACTIONS(493),
        [anon_sym_enum] = ACTIONS(495),
        [anon_sym_new] = ACTIONS(495),
        [anon_sym_public] = ACTIONS(495),
        [anon_sym_protected] = ACTIONS(495),
        [anon_sym_internal] = ACTIONS(495),
        [anon_sym_private] = ACTIONS(495),
        [anon_sym_sbyte] = ACTIONS(495),
        [anon_sym_byte] = ACTIONS(495),
        [anon_sym_short] = ACTIONS(495),
        [anon_sym_ushort] = ACTIONS(495),
        [anon_sym_int] = ACTIONS(495),
        [anon_sym_uint] = ACTIONS(495),
        [anon_sym_long] = ACTIONS(495),
        [anon_sym_ulong] = ACTIONS(495),
        [anon_sym_char] = ACTIONS(495),
        [anon_sym_unsafe] = ACTIONS(495),
        [anon_sym_abstract] = ACTIONS(495),
        [anon_sym_sealed] = ACTIONS(495),
        [anon_sym_static] = ACTIONS(495),
        [anon_sym_readonly] = ACTIONS(495),
        [anon_sym_volatile] = ACTIONS(495),
        [anon_sym_bool] = ACTIONS(495),
        [anon_sym_decimal] = ACTIONS(495),
        [anon_sym_double] = ACTIONS(495),
        [anon_sym_float] = ACTIONS(495),
        [anon_sym_object] = ACTIONS(495),
        [anon_sym_string] = ACTIONS(495),
        [sym_identifier_name] = ACTIONS(497),
        [sym_comment] = ACTIONS(91),
    },
    [130] = {
        [sym_identifier_name] = ACTIONS(499),
        [sym_comment] = ACTIONS(91),
    },
    [131] = {
        [sym__enum_base] = STATE(134),
        [sym__enum_body] = STATE(135),
        [anon_sym_LBRACE] = ACTIONS(501),
        [anon_sym_COLON] = ACTIONS(503),
        [sym_comment] = ACTIONS(91),
    },
    [132] = {
        [sym__attributes] = STATE(142),
        [sym_enum_member_declaration] = STATE(143),
        [sym__attribute_section] = STATE(19),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(505),
        [sym_comment] = ACTIONS(91),
    },
    [133] = {
        [sym__integral_type] = STATE(140),
        [anon_sym_sbyte] = ACTIONS(507),
        [anon_sym_byte] = ACTIONS(507),
        [anon_sym_short] = ACTIONS(507),
        [anon_sym_ushort] = ACTIONS(507),
        [anon_sym_int] = ACTIONS(507),
        [anon_sym_uint] = ACTIONS(507),
        [anon_sym_long] = ACTIONS(507),
        [anon_sym_ulong] = ACTIONS(507),
        [anon_sym_char] = ACTIONS(507),
        [sym_comment] = ACTIONS(91),
    },
    [134] = {
        [sym__enum_body] = STATE(137),
        [anon_sym_LBRACE] = ACTIONS(501),
        [sym_comment] = ACTIONS(91),
    },
    [135] = {
        [ts_builtin_sym_end] = ACTIONS(509),
        [anon_sym_SEMI] = ACTIONS(511),
        [anon_sym_namespace] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(509),
        [anon_sym_class] = ACTIONS(513),
        [anon_sym_struct] = ACTIONS(513),
        [anon_sym_LBRACK] = ACTIONS(509),
        [anon_sym_enum] = ACTIONS(513),
        [anon_sym_new] = ACTIONS(513),
        [anon_sym_public] = ACTIONS(513),
        [anon_sym_protected] = ACTIONS(513),
        [anon_sym_internal] = ACTIONS(513),
        [anon_sym_private] = ACTIONS(513),
        [anon_sym_sbyte] = ACTIONS(513),
        [anon_sym_byte] = ACTIONS(513),
        [anon_sym_short] = ACTIONS(513),
        [anon_sym_ushort] = ACTIONS(513),
        [anon_sym_int] = ACTIONS(513),
        [anon_sym_uint] = ACTIONS(513),
        [anon_sym_long] = ACTIONS(513),
        [anon_sym_ulong] = ACTIONS(513),
        [anon_sym_char] = ACTIONS(513),
        [anon_sym_unsafe] = ACTIONS(513),
        [anon_sym_abstract] = ACTIONS(513),
        [anon_sym_sealed] = ACTIONS(513),
        [anon_sym_static] = ACTIONS(513),
        [anon_sym_readonly] = ACTIONS(513),
        [anon_sym_volatile] = ACTIONS(513),
        [anon_sym_bool] = ACTIONS(513),
        [anon_sym_decimal] = ACTIONS(513),
        [anon_sym_double] = ACTIONS(513),
        [anon_sym_float] = ACTIONS(513),
        [anon_sym_object] = ACTIONS(513),
        [anon_sym_string] = ACTIONS(513),
        [sym_identifier_name] = ACTIONS(515),
        [sym_comment] = ACTIONS(91),
    },
    [136] = {
        [ts_builtin_sym_end] = ACTIONS(517),
        [anon_sym_namespace] = ACTIONS(519),
        [anon_sym_RBRACE] = ACTIONS(517),
        [anon_sym_class] = ACTIONS(519),
        [anon_sym_struct] = ACTIONS(519),
        [anon_sym_LBRACK] = ACTIONS(517),
        [anon_sym_enum] = ACTIONS(519),
        [anon_sym_new] = ACTIONS(519),
        [anon_sym_public] = ACTIONS(519),
        [anon_sym_protected] = ACTIONS(519),
        [anon_sym_internal] = ACTIONS(519),
        [anon_sym_private] = ACTIONS(519),
        [anon_sym_sbyte] = ACTIONS(519),
        [anon_sym_byte] = ACTIONS(519),
        [anon_sym_short] = ACTIONS(519),
        [anon_sym_ushort] = ACTIONS(519),
        [anon_sym_int] = ACTIONS(519),
        [anon_sym_uint] = ACTIONS(519),
        [anon_sym_long] = ACTIONS(519),
        [anon_sym_ulong] = ACTIONS(519),
        [anon_sym_char] = ACTIONS(519),
        [anon_sym_unsafe] = ACTIONS(519),
        [anon_sym_abstract] = ACTIONS(519),
        [anon_sym_sealed] = ACTIONS(519),
        [anon_sym_static] = ACTIONS(519),
        [anon_sym_readonly] = ACTIONS(519),
        [anon_sym_volatile] = ACTIONS(519),
        [anon_sym_bool] = ACTIONS(519),
        [anon_sym_decimal] = ACTIONS(519),
        [anon_sym_double] = ACTIONS(519),
        [anon_sym_float] = ACTIONS(519),
        [anon_sym_object] = ACTIONS(519),
        [anon_sym_string] = ACTIONS(519),
        [sym_identifier_name] = ACTIONS(521),
        [sym_comment] = ACTIONS(91),
    },
    [137] = {
        [ts_builtin_sym_end] = ACTIONS(517),
        [anon_sym_SEMI] = ACTIONS(523),
        [anon_sym_namespace] = ACTIONS(519),
        [anon_sym_RBRACE] = ACTIONS(517),
        [anon_sym_class] = ACTIONS(519),
        [anon_sym_struct] = ACTIONS(519),
        [anon_sym_LBRACK] = ACTIONS(517),
        [anon_sym_enum] = ACTIONS(519),
        [anon_sym_new] = ACTIONS(519),
        [anon_sym_public] = ACTIONS(519),
        [anon_sym_protected] = ACTIONS(519),
        [anon_sym_internal] = ACTIONS(519),
        [anon_sym_private] = ACTIONS(519),
        [anon_sym_sbyte] = ACTIONS(519),
        [anon_sym_byte] = ACTIONS(519),
        [anon_sym_short] = ACTIONS(519),
        [anon_sym_ushort] = ACTIONS(519),
        [anon_sym_int] = ACTIONS(519),
        [anon_sym_uint] = ACTIONS(519),
        [anon_sym_long] = ACTIONS(519),
        [anon_sym_ulong] = ACTIONS(519),
        [anon_sym_char] = ACTIONS(519),
        [anon_sym_unsafe] = ACTIONS(519),
        [anon_sym_abstract] = ACTIONS(519),
        [anon_sym_sealed] = ACTIONS(519),
        [anon_sym_static] = ACTIONS(519),
        [anon_sym_readonly] = ACTIONS(519),
        [anon_sym_volatile] = ACTIONS(519),
        [anon_sym_bool] = ACTIONS(519),
        [anon_sym_decimal] = ACTIONS(519),
        [anon_sym_double] = ACTIONS(519),
        [anon_sym_float] = ACTIONS(519),
        [anon_sym_object] = ACTIONS(519),
        [anon_sym_string] = ACTIONS(519),
        [sym_identifier_name] = ACTIONS(521),
        [sym_comment] = ACTIONS(91),
    },
    [138] = {
        [ts_builtin_sym_end] = ACTIONS(525),
        [anon_sym_namespace] = ACTIONS(527),
        [anon_sym_RBRACE] = ACTIONS(525),
        [anon_sym_class] = ACTIONS(527),
        [anon_sym_struct] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(525),
        [anon_sym_enum] = ACTIONS(527),
        [anon_sym_new] = ACTIONS(527),
        [anon_sym_public] = ACTIONS(527),
        [anon_sym_protected] = ACTIONS(527),
        [anon_sym_internal] = ACTIONS(527),
        [anon_sym_private] = ACTIONS(527),
        [anon_sym_sbyte] = ACTIONS(527),
        [anon_sym_byte] = ACTIONS(527),
        [anon_sym_short] = ACTIONS(527),
        [anon_sym_ushort] = ACTIONS(527),
        [anon_sym_int] = ACTIONS(527),
        [anon_sym_uint] = ACTIONS(527),
        [anon_sym_long] = ACTIONS(527),
        [anon_sym_ulong] = ACTIONS(527),
        [anon_sym_char] = ACTIONS(527),
        [anon_sym_unsafe] = ACTIONS(527),
        [anon_sym_abstract] = ACTIONS(527),
        [anon_sym_sealed] = ACTIONS(527),
        [anon_sym_static] = ACTIONS(527),
        [anon_sym_readonly] = ACTIONS(527),
        [anon_sym_volatile] = ACTIONS(527),
        [anon_sym_bool] = ACTIONS(527),
        [anon_sym_decimal] = ACTIONS(527),
        [anon_sym_double] = ACTIONS(527),
        [anon_sym_float] = ACTIONS(527),
        [anon_sym_object] = ACTIONS(527),
        [anon_sym_string] = ACTIONS(527),
        [sym_identifier_name] = ACTIONS(529),
        [sym_comment] = ACTIONS(91),
    },
    [139] = {
        [anon_sym_LBRACE] = ACTIONS(531),
        [sym_comment] = ACTIONS(91),
    },
    [140] = {
        [anon_sym_LBRACE] = ACTIONS(533),
        [sym_comment] = ACTIONS(91),
    },
    [141] = {
        [sym_equals_value_clause] = STATE(153),
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_EQ] = ACTIONS(363),
        [sym_comment] = ACTIONS(91),
    },
    [142] = {
        [sym_identifier_name] = ACTIONS(537),
        [sym_comment] = ACTIONS(91),
    },
    [143] = {
        [aux_sym__enum_body_repeat1] = STATE(146),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(541),
        [sym_comment] = ACTIONS(91),
    },
    [144] = {
        [ts_builtin_sym_end] = ACTIONS(543),
        [anon_sym_SEMI] = ACTIONS(543),
        [anon_sym_namespace] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_struct] = ACTIONS(545),
        [anon_sym_LBRACK] = ACTIONS(543),
        [anon_sym_enum] = ACTIONS(545),
        [anon_sym_new] = ACTIONS(545),
        [anon_sym_public] = ACTIONS(545),
        [anon_sym_protected] = ACTIONS(545),
        [anon_sym_internal] = ACTIONS(545),
        [anon_sym_private] = ACTIONS(545),
        [anon_sym_sbyte] = ACTIONS(545),
        [anon_sym_byte] = ACTIONS(545),
        [anon_sym_short] = ACTIONS(545),
        [anon_sym_ushort] = ACTIONS(545),
        [anon_sym_int] = ACTIONS(545),
        [anon_sym_uint] = ACTIONS(545),
        [anon_sym_long] = ACTIONS(545),
        [anon_sym_ulong] = ACTIONS(545),
        [anon_sym_char] = ACTIONS(545),
        [anon_sym_unsafe] = ACTIONS(545),
        [anon_sym_abstract] = ACTIONS(545),
        [anon_sym_sealed] = ACTIONS(545),
        [anon_sym_static] = ACTIONS(545),
        [anon_sym_readonly] = ACTIONS(545),
        [anon_sym_volatile] = ACTIONS(545),
        [anon_sym_bool] = ACTIONS(545),
        [anon_sym_decimal] = ACTIONS(545),
        [anon_sym_double] = ACTIONS(545),
        [anon_sym_float] = ACTIONS(545),
        [anon_sym_object] = ACTIONS(545),
        [anon_sym_string] = ACTIONS(545),
        [sym_identifier_name] = ACTIONS(547),
        [sym_comment] = ACTIONS(91),
    },
    [145] = {
        [sym__attributes] = STATE(142),
        [sym_enum_member_declaration] = STATE(150),
        [sym__attribute_section] = STATE(19),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(505),
        [sym_comment] = ACTIONS(91),
    },
    [146] = {
        [anon_sym_RBRACE] = ACTIONS(549),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(91),
    },
    [147] = {
        [ts_builtin_sym_end] = ACTIONS(553),
        [anon_sym_SEMI] = ACTIONS(553),
        [anon_sym_namespace] = ACTIONS(555),
        [anon_sym_RBRACE] = ACTIONS(553),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_struct] = ACTIONS(555),
        [anon_sym_LBRACK] = ACTIONS(553),
        [anon_sym_enum] = ACTIONS(555),
        [anon_sym_new] = ACTIONS(555),
        [anon_sym_public] = ACTIONS(555),
        [anon_sym_protected] = ACTIONS(555),
        [anon_sym_internal] = ACTIONS(555),
        [anon_sym_private] = ACTIONS(555),
        [anon_sym_sbyte] = ACTIONS(555),
        [anon_sym_byte] = ACTIONS(555),
        [anon_sym_short] = ACTIONS(555),
        [anon_sym_ushort] = ACTIONS(555),
        [anon_sym_int] = ACTIONS(555),
        [anon_sym_uint] = ACTIONS(555),
        [anon_sym_long] = ACTIONS(555),
        [anon_sym_ulong] = ACTIONS(555),
        [anon_sym_char] = ACTIONS(555),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(555),
        [anon_sym_sealed] = ACTIONS(555),
        [anon_sym_static] = ACTIONS(555),
        [anon_sym_readonly] = ACTIONS(555),
        [anon_sym_volatile] = ACTIONS(555),
        [anon_sym_bool] = ACTIONS(555),
        [anon_sym_decimal] = ACTIONS(555),
        [anon_sym_double] = ACTIONS(555),
        [anon_sym_float] = ACTIONS(555),
        [anon_sym_object] = ACTIONS(555),
        [anon_sym_string] = ACTIONS(555),
        [sym_identifier_name] = ACTIONS(557),
        [sym_comment] = ACTIONS(91),
    },
    [148] = {
        [sym__attributes] = STATE(142),
        [sym_enum_member_declaration] = STATE(149),
        [sym__attribute_section] = STATE(19),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(505),
        [sym_comment] = ACTIONS(91),
    },
    [149] = {
        [anon_sym_RBRACE] = ACTIONS(559),
        [anon_sym_COMMA] = ACTIONS(559),
        [sym_comment] = ACTIONS(91),
    },
    [150] = {
        [anon_sym_RBRACE] = ACTIONS(561),
        [anon_sym_COMMA] = ACTIONS(561),
        [sym_comment] = ACTIONS(91),
    },
    [151] = {
        [sym_equals_value_clause] = STATE(152),
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_COMMA] = ACTIONS(563),
        [anon_sym_EQ] = ACTIONS(363),
        [sym_comment] = ACTIONS(91),
    },
    [152] = {
        [anon_sym_RBRACE] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(565),
        [sym_comment] = ACTIONS(91),
    },
    [153] = {
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_COMMA] = ACTIONS(563),
        [sym_comment] = ACTIONS(91),
    },
    [154] = {
        [anon_sym_enum] = ACTIONS(567),
        [sym_comment] = ACTIONS(91),
    },
    [155] = {
        [anon_sym_class] = ACTIONS(569),
        [sym_comment] = ACTIONS(91),
    },
    [156] = {
        [anon_sym_struct] = ACTIONS(571),
        [sym_comment] = ACTIONS(91),
    },
    [157] = {
        [sym_variable_declaration] = STATE(158),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_predefined_type] = STATE(65),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [158] = {
        [anon_sym_SEMI] = ACTIONS(573),
        [sym_comment] = ACTIONS(91),
    },
    [159] = {
        [anon_sym_RBRACE] = ACTIONS(575),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_struct] = ACTIONS(577),
        [anon_sym_LBRACK] = ACTIONS(575),
        [anon_sym_enum] = ACTIONS(577),
        [anon_sym_new] = ACTIONS(577),
        [anon_sym_public] = ACTIONS(577),
        [anon_sym_protected] = ACTIONS(577),
        [anon_sym_internal] = ACTIONS(577),
        [anon_sym_private] = ACTIONS(577),
        [anon_sym_sbyte] = ACTIONS(577),
        [anon_sym_byte] = ACTIONS(577),
        [anon_sym_short] = ACTIONS(577),
        [anon_sym_ushort] = ACTIONS(577),
        [anon_sym_int] = ACTIONS(577),
        [anon_sym_uint] = ACTIONS(577),
        [anon_sym_long] = ACTIONS(577),
        [anon_sym_ulong] = ACTIONS(577),
        [anon_sym_char] = ACTIONS(577),
        [anon_sym_unsafe] = ACTIONS(577),
        [anon_sym_abstract] = ACTIONS(577),
        [anon_sym_sealed] = ACTIONS(577),
        [anon_sym_static] = ACTIONS(577),
        [anon_sym_readonly] = ACTIONS(577),
        [anon_sym_volatile] = ACTIONS(577),
        [anon_sym_bool] = ACTIONS(577),
        [anon_sym_decimal] = ACTIONS(577),
        [anon_sym_double] = ACTIONS(577),
        [anon_sym_float] = ACTIONS(577),
        [anon_sym_object] = ACTIONS(577),
        [anon_sym_string] = ACTIONS(577),
        [sym_identifier_name] = ACTIONS(579),
        [sym_comment] = ACTIONS(91),
    },
    [160] = {
        [sym_identifier_name] = ACTIONS(581),
        [sym_comment] = ACTIONS(91),
    },
    [161] = {
        [sym_type_parameter_list] = STATE(162),
        [anon_sym_LBRACE] = ACTIONS(255),
        [anon_sym_LT] = ACTIONS(231),
        [sym_comment] = ACTIONS(91),
    },
    [162] = {
        [anon_sym_LBRACE] = ACTIONS(583),
        [sym_comment] = ACTIONS(91),
    },
    [163] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(164),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(303),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [164] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(585),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [165] = {
        [ts_builtin_sym_end] = ACTIONS(587),
        [anon_sym_namespace] = ACTIONS(589),
        [anon_sym_RBRACE] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(589),
        [anon_sym_struct] = ACTIONS(589),
        [anon_sym_LBRACK] = ACTIONS(587),
        [anon_sym_enum] = ACTIONS(589),
        [anon_sym_new] = ACTIONS(589),
        [anon_sym_public] = ACTIONS(589),
        [anon_sym_protected] = ACTIONS(589),
        [anon_sym_internal] = ACTIONS(589),
        [anon_sym_private] = ACTIONS(589),
        [anon_sym_sbyte] = ACTIONS(589),
        [anon_sym_byte] = ACTIONS(589),
        [anon_sym_short] = ACTIONS(589),
        [anon_sym_ushort] = ACTIONS(589),
        [anon_sym_int] = ACTIONS(589),
        [anon_sym_uint] = ACTIONS(589),
        [anon_sym_long] = ACTIONS(589),
        [anon_sym_ulong] = ACTIONS(589),
        [anon_sym_char] = ACTIONS(589),
        [anon_sym_unsafe] = ACTIONS(589),
        [anon_sym_abstract] = ACTIONS(589),
        [anon_sym_sealed] = ACTIONS(589),
        [anon_sym_static] = ACTIONS(589),
        [anon_sym_readonly] = ACTIONS(589),
        [anon_sym_volatile] = ACTIONS(589),
        [anon_sym_bool] = ACTIONS(589),
        [anon_sym_decimal] = ACTIONS(589),
        [anon_sym_double] = ACTIONS(589),
        [anon_sym_float] = ACTIONS(589),
        [anon_sym_object] = ACTIONS(589),
        [anon_sym_string] = ACTIONS(589),
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(91),
    },
    [166] = {
        [sym_identifier_name] = ACTIONS(593),
        [sym_comment] = ACTIONS(91),
    },
    [167] = {
        [sym_type_parameter_list] = STATE(168),
        [anon_sym_LBRACE] = ACTIONS(337),
        [anon_sym_LT] = ACTIONS(231),
        [sym_comment] = ACTIONS(91),
    },
    [168] = {
        [anon_sym_LBRACE] = ACTIONS(595),
        [sym_comment] = ACTIONS(91),
    },
    [169] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(170),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(347),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [170] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [171] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_namespace] = ACTIONS(601),
        [anon_sym_RBRACE] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_struct] = ACTIONS(601),
        [anon_sym_LBRACK] = ACTIONS(599),
        [anon_sym_enum] = ACTIONS(601),
        [anon_sym_new] = ACTIONS(601),
        [anon_sym_public] = ACTIONS(601),
        [anon_sym_protected] = ACTIONS(601),
        [anon_sym_internal] = ACTIONS(601),
        [anon_sym_private] = ACTIONS(601),
        [anon_sym_sbyte] = ACTIONS(601),
        [anon_sym_byte] = ACTIONS(601),
        [anon_sym_short] = ACTIONS(601),
        [anon_sym_ushort] = ACTIONS(601),
        [anon_sym_int] = ACTIONS(601),
        [anon_sym_uint] = ACTIONS(601),
        [anon_sym_long] = ACTIONS(601),
        [anon_sym_ulong] = ACTIONS(601),
        [anon_sym_char] = ACTIONS(601),
        [anon_sym_unsafe] = ACTIONS(601),
        [anon_sym_abstract] = ACTIONS(601),
        [anon_sym_sealed] = ACTIONS(601),
        [anon_sym_static] = ACTIONS(601),
        [anon_sym_readonly] = ACTIONS(601),
        [anon_sym_volatile] = ACTIONS(601),
        [anon_sym_bool] = ACTIONS(601),
        [anon_sym_decimal] = ACTIONS(601),
        [anon_sym_double] = ACTIONS(601),
        [anon_sym_float] = ACTIONS(601),
        [anon_sym_object] = ACTIONS(601),
        [anon_sym_string] = ACTIONS(601),
        [sym_identifier_name] = ACTIONS(603),
        [sym_comment] = ACTIONS(91),
    },
    [172] = {
        [sym_identifier_name] = ACTIONS(605),
        [sym_comment] = ACTIONS(91),
    },
    [173] = {
        [sym__enum_base] = STATE(174),
        [sym__enum_body] = STATE(137),
        [anon_sym_LBRACE] = ACTIONS(501),
        [anon_sym_COLON] = ACTIONS(503),
        [sym_comment] = ACTIONS(91),
    },
    [174] = {
        [sym__enum_body] = STATE(175),
        [anon_sym_LBRACE] = ACTIONS(501),
        [sym_comment] = ACTIONS(91),
    },
    [175] = {
        [ts_builtin_sym_end] = ACTIONS(525),
        [anon_sym_SEMI] = ACTIONS(607),
        [anon_sym_namespace] = ACTIONS(527),
        [anon_sym_RBRACE] = ACTIONS(525),
        [anon_sym_class] = ACTIONS(527),
        [anon_sym_struct] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(525),
        [anon_sym_enum] = ACTIONS(527),
        [anon_sym_new] = ACTIONS(527),
        [anon_sym_public] = ACTIONS(527),
        [anon_sym_protected] = ACTIONS(527),
        [anon_sym_internal] = ACTIONS(527),
        [anon_sym_private] = ACTIONS(527),
        [anon_sym_sbyte] = ACTIONS(527),
        [anon_sym_byte] = ACTIONS(527),
        [anon_sym_short] = ACTIONS(527),
        [anon_sym_ushort] = ACTIONS(527),
        [anon_sym_int] = ACTIONS(527),
        [anon_sym_uint] = ACTIONS(527),
        [anon_sym_long] = ACTIONS(527),
        [anon_sym_ulong] = ACTIONS(527),
        [anon_sym_char] = ACTIONS(527),
        [anon_sym_unsafe] = ACTIONS(527),
        [anon_sym_abstract] = ACTIONS(527),
        [anon_sym_sealed] = ACTIONS(527),
        [anon_sym_static] = ACTIONS(527),
        [anon_sym_readonly] = ACTIONS(527),
        [anon_sym_volatile] = ACTIONS(527),
        [anon_sym_bool] = ACTIONS(527),
        [anon_sym_decimal] = ACTIONS(527),
        [anon_sym_double] = ACTIONS(527),
        [anon_sym_float] = ACTIONS(527),
        [anon_sym_object] = ACTIONS(527),
        [anon_sym_string] = ACTIONS(527),
        [sym_identifier_name] = ACTIONS(529),
        [sym_comment] = ACTIONS(91),
    },
    [176] = {
        [ts_builtin_sym_end] = ACTIONS(609),
        [anon_sym_namespace] = ACTIONS(611),
        [anon_sym_RBRACE] = ACTIONS(609),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_struct] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(609),
        [anon_sym_enum] = ACTIONS(611),
        [anon_sym_new] = ACTIONS(611),
        [anon_sym_public] = ACTIONS(611),
        [anon_sym_protected] = ACTIONS(611),
        [anon_sym_internal] = ACTIONS(611),
        [anon_sym_private] = ACTIONS(611),
        [anon_sym_sbyte] = ACTIONS(611),
        [anon_sym_byte] = ACTIONS(611),
        [anon_sym_short] = ACTIONS(611),
        [anon_sym_ushort] = ACTIONS(611),
        [anon_sym_int] = ACTIONS(611),
        [anon_sym_uint] = ACTIONS(611),
        [anon_sym_long] = ACTIONS(611),
        [anon_sym_ulong] = ACTIONS(611),
        [anon_sym_char] = ACTIONS(611),
        [anon_sym_unsafe] = ACTIONS(611),
        [anon_sym_abstract] = ACTIONS(611),
        [anon_sym_sealed] = ACTIONS(611),
        [anon_sym_static] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(611),
        [anon_sym_volatile] = ACTIONS(611),
        [anon_sym_bool] = ACTIONS(611),
        [anon_sym_decimal] = ACTIONS(611),
        [anon_sym_double] = ACTIONS(611),
        [anon_sym_float] = ACTIONS(611),
        [anon_sym_object] = ACTIONS(611),
        [anon_sym_string] = ACTIONS(611),
        [sym_identifier_name] = ACTIONS(613),
        [sym_comment] = ACTIONS(91),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(615),
        [anon_sym_GT] = ACTIONS(615),
        [sym_identifier_name] = ACTIONS(617),
        [sym_comment] = ACTIONS(91),
    },
    [178] = {
        [anon_sym_COMMA] = ACTIONS(619),
        [anon_sym_GT] = ACTIONS(619),
        [sym_comment] = ACTIONS(91),
    },
    [179] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(182),
        [anon_sym_COMMA] = ACTIONS(621),
        [anon_sym_GT] = ACTIONS(623),
        [sym_comment] = ACTIONS(91),
    },
    [180] = {
        [sym__type] = STATE(178),
        [sym_generic_name] = STATE(65),
        [sym_predefined_type] = STATE(65),
        [sym_type_parameter] = STATE(186),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [181] = {
        [anon_sym_LBRACE] = ACTIONS(625),
        [anon_sym_COMMA] = ACTIONS(625),
        [anon_sym_GT] = ACTIONS(625),
        [sym_identifier_name] = ACTIONS(627),
        [sym_comment] = ACTIONS(91),
    },
    [182] = {
        [anon_sym_COMMA] = ACTIONS(629),
        [anon_sym_GT] = ACTIONS(631),
        [sym_comment] = ACTIONS(91),
    },
    [183] = {
        [sym__type] = STATE(178),
        [sym_generic_name] = STATE(65),
        [sym_predefined_type] = STATE(65),
        [sym_type_parameter] = STATE(185),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [184] = {
        [anon_sym_LBRACE] = ACTIONS(633),
        [anon_sym_COMMA] = ACTIONS(633),
        [anon_sym_GT] = ACTIONS(633),
        [sym_identifier_name] = ACTIONS(635),
        [sym_comment] = ACTIONS(91),
    },
    [185] = {
        [anon_sym_COMMA] = ACTIONS(637),
        [anon_sym_GT] = ACTIONS(637),
        [sym_comment] = ACTIONS(91),
    },
    [186] = {
        [anon_sym_COMMA] = ACTIONS(639),
        [anon_sym_GT] = ACTIONS(639),
        [sym_comment] = ACTIONS(91),
    },
    [187] = {
        [anon_sym_sbyte] = ACTIONS(641),
        [anon_sym_byte] = ACTIONS(641),
        [anon_sym_short] = ACTIONS(641),
        [anon_sym_ushort] = ACTIONS(641),
        [anon_sym_int] = ACTIONS(641),
        [anon_sym_uint] = ACTIONS(641),
        [anon_sym_long] = ACTIONS(641),
        [anon_sym_ulong] = ACTIONS(641),
        [anon_sym_char] = ACTIONS(641),
        [anon_sym_bool] = ACTIONS(641),
        [anon_sym_decimal] = ACTIONS(641),
        [anon_sym_double] = ACTIONS(641),
        [anon_sym_float] = ACTIONS(641),
        [anon_sym_object] = ACTIONS(641),
        [anon_sym_string] = ACTIONS(641),
        [sym_identifier_name] = ACTIONS(643),
        [sym_comment] = ACTIONS(91),
    },
    [188] = {
        [anon_sym_class] = ACTIONS(645),
        [sym_comment] = ACTIONS(91),
    },
    [189] = {
        [anon_sym_struct] = ACTIONS(647),
        [sym_comment] = ACTIONS(91),
    },
    [190] = {
        [sym__enum_base] = STATE(191),
        [sym__enum_body] = STATE(192),
        [anon_sym_LBRACE] = ACTIONS(501),
        [anon_sym_COLON] = ACTIONS(503),
        [sym_comment] = ACTIONS(91),
    },
    [191] = {
        [sym__enum_body] = STATE(135),
        [anon_sym_LBRACE] = ACTIONS(501),
        [sym_comment] = ACTIONS(91),
    },
    [192] = {
        [ts_builtin_sym_end] = ACTIONS(649),
        [anon_sym_SEMI] = ACTIONS(651),
        [anon_sym_namespace] = ACTIONS(653),
        [anon_sym_RBRACE] = ACTIONS(649),
        [anon_sym_class] = ACTIONS(653),
        [anon_sym_struct] = ACTIONS(653),
        [anon_sym_LBRACK] = ACTIONS(649),
        [anon_sym_enum] = ACTIONS(653),
        [anon_sym_new] = ACTIONS(653),
        [anon_sym_public] = ACTIONS(653),
        [anon_sym_protected] = ACTIONS(653),
        [anon_sym_internal] = ACTIONS(653),
        [anon_sym_private] = ACTIONS(653),
        [anon_sym_sbyte] = ACTIONS(653),
        [anon_sym_byte] = ACTIONS(653),
        [anon_sym_short] = ACTIONS(653),
        [anon_sym_ushort] = ACTIONS(653),
        [anon_sym_int] = ACTIONS(653),
        [anon_sym_uint] = ACTIONS(653),
        [anon_sym_long] = ACTIONS(653),
        [anon_sym_ulong] = ACTIONS(653),
        [anon_sym_char] = ACTIONS(653),
        [anon_sym_unsafe] = ACTIONS(653),
        [anon_sym_abstract] = ACTIONS(653),
        [anon_sym_sealed] = ACTIONS(653),
        [anon_sym_static] = ACTIONS(653),
        [anon_sym_readonly] = ACTIONS(653),
        [anon_sym_volatile] = ACTIONS(653),
        [anon_sym_bool] = ACTIONS(653),
        [anon_sym_decimal] = ACTIONS(653),
        [anon_sym_double] = ACTIONS(653),
        [anon_sym_float] = ACTIONS(653),
        [anon_sym_object] = ACTIONS(653),
        [anon_sym_string] = ACTIONS(653),
        [sym_identifier_name] = ACTIONS(655),
        [sym_comment] = ACTIONS(91),
    },
    [193] = {
        [ts_builtin_sym_end] = ACTIONS(509),
        [anon_sym_namespace] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(509),
        [anon_sym_class] = ACTIONS(513),
        [anon_sym_struct] = ACTIONS(513),
        [anon_sym_LBRACK] = ACTIONS(509),
        [anon_sym_enum] = ACTIONS(513),
        [anon_sym_new] = ACTIONS(513),
        [anon_sym_public] = ACTIONS(513),
        [anon_sym_protected] = ACTIONS(513),
        [anon_sym_internal] = ACTIONS(513),
        [anon_sym_private] = ACTIONS(513),
        [anon_sym_sbyte] = ACTIONS(513),
        [anon_sym_byte] = ACTIONS(513),
        [anon_sym_short] = ACTIONS(513),
        [anon_sym_ushort] = ACTIONS(513),
        [anon_sym_int] = ACTIONS(513),
        [anon_sym_uint] = ACTIONS(513),
        [anon_sym_long] = ACTIONS(513),
        [anon_sym_ulong] = ACTIONS(513),
        [anon_sym_char] = ACTIONS(513),
        [anon_sym_unsafe] = ACTIONS(513),
        [anon_sym_abstract] = ACTIONS(513),
        [anon_sym_sealed] = ACTIONS(513),
        [anon_sym_static] = ACTIONS(513),
        [anon_sym_readonly] = ACTIONS(513),
        [anon_sym_volatile] = ACTIONS(513),
        [anon_sym_bool] = ACTIONS(513),
        [anon_sym_decimal] = ACTIONS(513),
        [anon_sym_double] = ACTIONS(513),
        [anon_sym_float] = ACTIONS(513),
        [anon_sym_object] = ACTIONS(513),
        [anon_sym_string] = ACTIONS(513),
        [sym_identifier_name] = ACTIONS(515),
        [sym_comment] = ACTIONS(91),
    },
    [194] = {
        [sym_type_parameter_list] = STATE(196),
        [anon_sym_LBRACE] = ACTIONS(657),
        [anon_sym_LT] = ACTIONS(231),
        [sym_comment] = ACTIONS(91),
    },
    [195] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(198),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [196] = {
        [anon_sym_LBRACE] = ACTIONS(229),
        [sym_comment] = ACTIONS(91),
    },
    [197] = {
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_namespace] = ACTIONS(663),
        [anon_sym_RBRACE] = ACTIONS(661),
        [anon_sym_class] = ACTIONS(663),
        [anon_sym_struct] = ACTIONS(663),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_enum] = ACTIONS(663),
        [anon_sym_new] = ACTIONS(663),
        [anon_sym_public] = ACTIONS(663),
        [anon_sym_protected] = ACTIONS(663),
        [anon_sym_internal] = ACTIONS(663),
        [anon_sym_private] = ACTIONS(663),
        [anon_sym_sbyte] = ACTIONS(663),
        [anon_sym_byte] = ACTIONS(663),
        [anon_sym_short] = ACTIONS(663),
        [anon_sym_ushort] = ACTIONS(663),
        [anon_sym_int] = ACTIONS(663),
        [anon_sym_uint] = ACTIONS(663),
        [anon_sym_long] = ACTIONS(663),
        [anon_sym_ulong] = ACTIONS(663),
        [anon_sym_char] = ACTIONS(663),
        [anon_sym_unsafe] = ACTIONS(663),
        [anon_sym_abstract] = ACTIONS(663),
        [anon_sym_sealed] = ACTIONS(663),
        [anon_sym_static] = ACTIONS(663),
        [anon_sym_readonly] = ACTIONS(663),
        [anon_sym_volatile] = ACTIONS(663),
        [anon_sym_bool] = ACTIONS(663),
        [anon_sym_decimal] = ACTIONS(663),
        [anon_sym_double] = ACTIONS(663),
        [anon_sym_float] = ACTIONS(663),
        [anon_sym_object] = ACTIONS(663),
        [anon_sym_string] = ACTIONS(663),
        [sym_identifier_name] = ACTIONS(665),
        [sym_comment] = ACTIONS(91),
    },
    [198] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(233),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [199] = {
        [sym_type_parameter_list] = STATE(201),
        [anon_sym_LBRACE] = ACTIONS(667),
        [anon_sym_LT] = ACTIONS(231),
        [sym_comment] = ACTIONS(91),
    },
    [200] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(203),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(669),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [201] = {
        [anon_sym_LBRACE] = ACTIONS(333),
        [sym_comment] = ACTIONS(91),
    },
    [202] = {
        [ts_builtin_sym_end] = ACTIONS(671),
        [anon_sym_namespace] = ACTIONS(673),
        [anon_sym_RBRACE] = ACTIONS(671),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_struct] = ACTIONS(673),
        [anon_sym_LBRACK] = ACTIONS(671),
        [anon_sym_enum] = ACTIONS(673),
        [anon_sym_new] = ACTIONS(673),
        [anon_sym_public] = ACTIONS(673),
        [anon_sym_protected] = ACTIONS(673),
        [anon_sym_internal] = ACTIONS(673),
        [anon_sym_private] = ACTIONS(673),
        [anon_sym_sbyte] = ACTIONS(673),
        [anon_sym_byte] = ACTIONS(673),
        [anon_sym_short] = ACTIONS(673),
        [anon_sym_ushort] = ACTIONS(673),
        [anon_sym_int] = ACTIONS(673),
        [anon_sym_uint] = ACTIONS(673),
        [anon_sym_long] = ACTIONS(673),
        [anon_sym_ulong] = ACTIONS(673),
        [anon_sym_char] = ACTIONS(673),
        [anon_sym_unsafe] = ACTIONS(673),
        [anon_sym_abstract] = ACTIONS(673),
        [anon_sym_sealed] = ACTIONS(673),
        [anon_sym_static] = ACTIONS(673),
        [anon_sym_readonly] = ACTIONS(673),
        [anon_sym_volatile] = ACTIONS(673),
        [anon_sym_bool] = ACTIONS(673),
        [anon_sym_decimal] = ACTIONS(673),
        [anon_sym_double] = ACTIONS(673),
        [anon_sym_float] = ACTIONS(673),
        [anon_sym_object] = ACTIONS(673),
        [anon_sym_string] = ACTIONS(673),
        [sym_identifier_name] = ACTIONS(675),
        [sym_comment] = ACTIONS(91),
    },
    [203] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [204] = {
        [anon_sym_COLON] = ACTIONS(677),
        [sym_comment] = ACTIONS(91),
    },
    [205] = {
        [sym_attribute_list] = STATE(206),
        [sym_attribute] = STATE(32),
        [sym_identifier_name] = ACTIONS(179),
        [sym_comment] = ACTIONS(91),
    },
    [206] = {
        [anon_sym_RBRACK] = ACTIONS(679),
        [sym_comment] = ACTIONS(91),
    },
    [207] = {
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_namespace] = ACTIONS(681),
        [anon_sym_class] = ACTIONS(681),
        [anon_sym_struct] = ACTIONS(681),
        [anon_sym_LBRACK] = ACTIONS(681),
        [anon_sym_enum] = ACTIONS(681),
        [anon_sym_new] = ACTIONS(681),
        [anon_sym_public] = ACTIONS(681),
        [anon_sym_protected] = ACTIONS(681),
        [anon_sym_internal] = ACTIONS(681),
        [anon_sym_private] = ACTIONS(681),
        [anon_sym_unsafe] = ACTIONS(681),
        [anon_sym_abstract] = ACTIONS(681),
        [anon_sym_sealed] = ACTIONS(681),
        [anon_sym_static] = ACTIONS(681),
        [sym_comment] = ACTIONS(91),
    },
    [208] = {
        [sym_identifier_name] = ACTIONS(683),
        [sym_comment] = ACTIONS(91),
    },
    [209] = {
        [anon_sym_COLON_COLON] = ACTIONS(685),
        [sym_comment] = ACTIONS(91),
    },
    [210] = {
        [anon_sym_LBRACE] = ACTIONS(687),
        [anon_sym_DOT] = ACTIONS(689),
        [sym_comment] = ACTIONS(91),
    },
    [211] = {
        [anon_sym_DOT] = ACTIONS(689),
        [sym_comment] = ACTIONS(91),
    },
    [212] = {
        [sym_identifier_name] = ACTIONS(691),
        [sym_comment] = ACTIONS(91),
    },
    [213] = {
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_LBRACE] = ACTIONS(693),
        [anon_sym_DOT] = ACTIONS(693),
        [sym_comment] = ACTIONS(91),
    },
    [214] = {
        [sym__type_declaration] = STATE(216),
        [sym_namespace_declaration] = STATE(216),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym_namespace_declaration_repeat1] = STATE(217),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_RBRACE] = ACTIONS(695),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [215] = {
        [ts_builtin_sym_end] = ACTIONS(697),
        [anon_sym_namespace] = ACTIONS(697),
        [anon_sym_RBRACE] = ACTIONS(697),
        [anon_sym_class] = ACTIONS(697),
        [anon_sym_struct] = ACTIONS(697),
        [anon_sym_LBRACK] = ACTIONS(697),
        [anon_sym_enum] = ACTIONS(697),
        [anon_sym_new] = ACTIONS(697),
        [anon_sym_public] = ACTIONS(697),
        [anon_sym_protected] = ACTIONS(697),
        [anon_sym_internal] = ACTIONS(697),
        [anon_sym_private] = ACTIONS(697),
        [anon_sym_unsafe] = ACTIONS(697),
        [anon_sym_abstract] = ACTIONS(697),
        [anon_sym_sealed] = ACTIONS(697),
        [anon_sym_static] = ACTIONS(697),
        [sym_comment] = ACTIONS(91),
    },
    [216] = {
        [anon_sym_namespace] = ACTIONS(699),
        [anon_sym_RBRACE] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_struct] = ACTIONS(699),
        [anon_sym_LBRACK] = ACTIONS(699),
        [anon_sym_enum] = ACTIONS(699),
        [anon_sym_new] = ACTIONS(699),
        [anon_sym_public] = ACTIONS(699),
        [anon_sym_protected] = ACTIONS(699),
        [anon_sym_internal] = ACTIONS(699),
        [anon_sym_private] = ACTIONS(699),
        [anon_sym_unsafe] = ACTIONS(699),
        [anon_sym_abstract] = ACTIONS(699),
        [anon_sym_sealed] = ACTIONS(699),
        [anon_sym_static] = ACTIONS(699),
        [sym_comment] = ACTIONS(91),
    },
    [217] = {
        [sym__type_declaration] = STATE(219),
        [sym_namespace_declaration] = STATE(219),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_RBRACE] = ACTIONS(701),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [218] = {
        [ts_builtin_sym_end] = ACTIONS(703),
        [anon_sym_namespace] = ACTIONS(703),
        [anon_sym_RBRACE] = ACTIONS(703),
        [anon_sym_class] = ACTIONS(703),
        [anon_sym_struct] = ACTIONS(703),
        [anon_sym_LBRACK] = ACTIONS(703),
        [anon_sym_enum] = ACTIONS(703),
        [anon_sym_new] = ACTIONS(703),
        [anon_sym_public] = ACTIONS(703),
        [anon_sym_protected] = ACTIONS(703),
        [anon_sym_internal] = ACTIONS(703),
        [anon_sym_private] = ACTIONS(703),
        [anon_sym_unsafe] = ACTIONS(703),
        [anon_sym_abstract] = ACTIONS(703),
        [anon_sym_sealed] = ACTIONS(703),
        [anon_sym_static] = ACTIONS(703),
        [sym_comment] = ACTIONS(91),
    },
    [219] = {
        [anon_sym_namespace] = ACTIONS(705),
        [anon_sym_RBRACE] = ACTIONS(705),
        [anon_sym_class] = ACTIONS(705),
        [anon_sym_struct] = ACTIONS(705),
        [anon_sym_LBRACK] = ACTIONS(705),
        [anon_sym_enum] = ACTIONS(705),
        [anon_sym_new] = ACTIONS(705),
        [anon_sym_public] = ACTIONS(705),
        [anon_sym_protected] = ACTIONS(705),
        [anon_sym_internal] = ACTIONS(705),
        [anon_sym_private] = ACTIONS(705),
        [anon_sym_unsafe] = ACTIONS(705),
        [anon_sym_abstract] = ACTIONS(705),
        [anon_sym_sealed] = ACTIONS(705),
        [anon_sym_static] = ACTIONS(705),
        [sym_comment] = ACTIONS(91),
    },
    [220] = {
        [sym_identifier_name] = ACTIONS(707),
        [sym_comment] = ACTIONS(91),
    },
    [221] = {
        [anon_sym_DOT] = ACTIONS(709),
        [sym_comment] = ACTIONS(91),
    },
    [222] = {
        [sym_global] = ACTIONS(711),
        [sym_identifier_name] = ACTIONS(713),
        [sym_comment] = ACTIONS(91),
    },
    [223] = {
        [anon_sym_SEMI] = ACTIONS(715),
        [anon_sym_EQ] = ACTIONS(717),
        [anon_sym_DOT] = ACTIONS(689),
        [sym_comment] = ACTIONS(91),
    },
    [224] = {
        [anon_sym_SEMI] = ACTIONS(715),
        [anon_sym_DOT] = ACTIONS(689),
        [sym_comment] = ACTIONS(91),
    },
    [225] = {
        [sym_qualified_name] = STATE(226),
        [sym_alias_qualified_name] = STATE(211),
        [sym_global] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(719),
        [sym_comment] = ACTIONS(91),
    },
    [226] = {
        [anon_sym_SEMI] = ACTIONS(721),
        [anon_sym_DOT] = ACTIONS(689),
        [sym_comment] = ACTIONS(91),
    },
    [227] = {
        [ts_builtin_sym_end] = ACTIONS(723),
        [anon_sym_using] = ACTIONS(723),
        [anon_sym_namespace] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(723),
        [anon_sym_struct] = ACTIONS(723),
        [anon_sym_LBRACK] = ACTIONS(723),
        [anon_sym_enum] = ACTIONS(723),
        [anon_sym_new] = ACTIONS(723),
        [anon_sym_public] = ACTIONS(723),
        [anon_sym_protected] = ACTIONS(723),
        [anon_sym_internal] = ACTIONS(723),
        [anon_sym_private] = ACTIONS(723),
        [anon_sym_unsafe] = ACTIONS(723),
        [anon_sym_abstract] = ACTIONS(723),
        [anon_sym_sealed] = ACTIONS(723),
        [anon_sym_static] = ACTIONS(723),
        [sym_comment] = ACTIONS(91),
    },
    [228] = {
        [ts_builtin_sym_end] = ACTIONS(725),
        [anon_sym_using] = ACTIONS(725),
        [anon_sym_namespace] = ACTIONS(725),
        [anon_sym_class] = ACTIONS(725),
        [anon_sym_struct] = ACTIONS(725),
        [anon_sym_LBRACK] = ACTIONS(725),
        [anon_sym_enum] = ACTIONS(725),
        [anon_sym_new] = ACTIONS(725),
        [anon_sym_public] = ACTIONS(725),
        [anon_sym_protected] = ACTIONS(725),
        [anon_sym_internal] = ACTIONS(725),
        [anon_sym_private] = ACTIONS(725),
        [anon_sym_unsafe] = ACTIONS(725),
        [anon_sym_abstract] = ACTIONS(725),
        [anon_sym_sealed] = ACTIONS(725),
        [anon_sym_static] = ACTIONS(725),
        [sym_comment] = ACTIONS(91),
    },
    [229] = {
        [sym_global] = ACTIONS(727),
        [sym_identifier_name] = ACTIONS(729),
        [sym_comment] = ACTIONS(91),
    },
    [230] = {
        [sym_identifier_name] = ACTIONS(731),
        [sym_comment] = ACTIONS(91),
    },
    [231] = {
        [anon_sym_SEMI] = ACTIONS(733),
        [sym_comment] = ACTIONS(91),
    },
    [232] = {
        [ts_builtin_sym_end] = ACTIONS(735),
        [anon_sym_extern] = ACTIONS(735),
        [anon_sym_using] = ACTIONS(735),
        [anon_sym_namespace] = ACTIONS(735),
        [anon_sym_class] = ACTIONS(735),
        [anon_sym_struct] = ACTIONS(735),
        [anon_sym_LBRACK] = ACTIONS(735),
        [anon_sym_enum] = ACTIONS(735),
        [anon_sym_new] = ACTIONS(735),
        [anon_sym_public] = ACTIONS(735),
        [anon_sym_protected] = ACTIONS(735),
        [anon_sym_internal] = ACTIONS(735),
        [anon_sym_private] = ACTIONS(735),
        [anon_sym_unsafe] = ACTIONS(735),
        [anon_sym_abstract] = ACTIONS(735),
        [anon_sym_sealed] = ACTIONS(735),
        [anon_sym_static] = ACTIONS(735),
        [sym_comment] = ACTIONS(91),
    },
    [233] = {
        [ts_builtin_sym_end] = ACTIONS(737),
        [anon_sym_extern] = ACTIONS(745),
        [anon_sym_using] = ACTIONS(747),
        [anon_sym_namespace] = ACTIONS(751),
        [anon_sym_RBRACE] = ACTIONS(759),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_struct] = ACTIONS(767),
        [anon_sym_LBRACK] = ACTIONS(778),
        [anon_sym_enum] = ACTIONS(767),
        [anon_sym_new] = ACTIONS(767),
        [anon_sym_public] = ACTIONS(767),
        [anon_sym_protected] = ACTIONS(767),
        [anon_sym_internal] = ACTIONS(767),
        [anon_sym_private] = ACTIONS(767),
        [anon_sym_sbyte] = ACTIONS(789),
        [anon_sym_byte] = ACTIONS(789),
        [anon_sym_short] = ACTIONS(789),
        [anon_sym_ushort] = ACTIONS(789),
        [anon_sym_int] = ACTIONS(789),
        [anon_sym_uint] = ACTIONS(789),
        [anon_sym_long] = ACTIONS(789),
        [anon_sym_ulong] = ACTIONS(789),
        [anon_sym_char] = ACTIONS(789),
        [anon_sym_unsafe] = ACTIONS(767),
        [anon_sym_abstract] = ACTIONS(767),
        [anon_sym_sealed] = ACTIONS(767),
        [anon_sym_static] = ACTIONS(767),
        [anon_sym_readonly] = ACTIONS(789),
        [anon_sym_volatile] = ACTIONS(789),
        [anon_sym_bool] = ACTIONS(789),
        [anon_sym_decimal] = ACTIONS(789),
        [anon_sym_double] = ACTIONS(789),
        [anon_sym_float] = ACTIONS(789),
        [anon_sym_object] = ACTIONS(789),
        [anon_sym_string] = ACTIONS(789),
        [sym_identifier_name] = ACTIONS(797),
        [sym_comment] = ACTIONS(91),
    },
    [234] = {
        [sym__type_declaration] = STATE(332),
        [sym_namespace_declaration] = STATE(216),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(259),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_member_declaration] = STATE(143),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_namespace_declaration_repeat1] = STATE(217),
        [aux_sym_class_declaration_repeat1] = STATE(284),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_namespace] = ACTIONS(805),
        [anon_sym_RBRACE] = ACTIONS(807),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(809),
        [sym_comment] = ACTIONS(91),
    },
    [235] = {
        [ts_builtin_sym_end] = ACTIONS(811),
        [anon_sym_SEMI] = ACTIONS(826),
        [anon_sym_namespace] = ACTIONS(829),
        [anon_sym_RBRACE] = ACTIONS(811),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_struct] = ACTIONS(829),
        [anon_sym_LBRACK] = ACTIONS(811),
        [anon_sym_enum] = ACTIONS(829),
        [anon_sym_new] = ACTIONS(829),
        [anon_sym_public] = ACTIONS(829),
        [anon_sym_protected] = ACTIONS(829),
        [anon_sym_internal] = ACTIONS(829),
        [anon_sym_private] = ACTIONS(829),
        [anon_sym_sbyte] = ACTIONS(844),
        [anon_sym_byte] = ACTIONS(844),
        [anon_sym_short] = ACTIONS(844),
        [anon_sym_ushort] = ACTIONS(844),
        [anon_sym_int] = ACTIONS(844),
        [anon_sym_uint] = ACTIONS(844),
        [anon_sym_long] = ACTIONS(844),
        [anon_sym_ulong] = ACTIONS(844),
        [anon_sym_char] = ACTIONS(844),
        [anon_sym_unsafe] = ACTIONS(829),
        [anon_sym_abstract] = ACTIONS(829),
        [anon_sym_sealed] = ACTIONS(829),
        [anon_sym_static] = ACTIONS(829),
        [anon_sym_readonly] = ACTIONS(844),
        [anon_sym_volatile] = ACTIONS(844),
        [anon_sym_bool] = ACTIONS(844),
        [anon_sym_decimal] = ACTIONS(844),
        [anon_sym_double] = ACTIONS(844),
        [anon_sym_float] = ACTIONS(844),
        [anon_sym_object] = ACTIONS(844),
        [anon_sym_string] = ACTIONS(844),
        [sym_identifier_name] = ACTIONS(857),
        [sym_comment] = ACTIONS(91),
    },
    [236] = {
        [sym_identifier_name] = ACTIONS(870),
        [sym_comment] = ACTIONS(91),
    },
    [237] = {
        [sym_identifier_name] = ACTIONS(872),
        [sym_comment] = ACTIONS(91),
    },
    [238] = {
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_namespace] = ACTIONS(874),
        [anon_sym_class] = ACTIONS(876),
        [anon_sym_struct] = ACTIONS(876),
        [anon_sym_LBRACK] = ACTIONS(879),
        [anon_sym_enum] = ACTIONS(876),
        [anon_sym_new] = ACTIONS(876),
        [anon_sym_public] = ACTIONS(876),
        [anon_sym_protected] = ACTIONS(876),
        [anon_sym_internal] = ACTIONS(876),
        [anon_sym_private] = ACTIONS(876),
        [anon_sym_sbyte] = ACTIONS(205),
        [anon_sym_byte] = ACTIONS(205),
        [anon_sym_short] = ACTIONS(205),
        [anon_sym_ushort] = ACTIONS(205),
        [anon_sym_int] = ACTIONS(205),
        [anon_sym_uint] = ACTIONS(205),
        [anon_sym_long] = ACTIONS(205),
        [anon_sym_ulong] = ACTIONS(205),
        [anon_sym_char] = ACTIONS(205),
        [anon_sym_unsafe] = ACTIONS(876),
        [anon_sym_abstract] = ACTIONS(876),
        [anon_sym_sealed] = ACTIONS(876),
        [anon_sym_static] = ACTIONS(876),
        [anon_sym_readonly] = ACTIONS(205),
        [anon_sym_volatile] = ACTIONS(205),
        [anon_sym_bool] = ACTIONS(205),
        [anon_sym_decimal] = ACTIONS(205),
        [anon_sym_double] = ACTIONS(205),
        [anon_sym_float] = ACTIONS(205),
        [anon_sym_object] = ACTIONS(205),
        [anon_sym_string] = ACTIONS(205),
        [sym_identifier_name] = ACTIONS(209),
        [sym_comment] = ACTIONS(91),
    },
    [239] = {
        [sym__integral_type] = STATE(140),
        [anon_sym_sbyte] = ACTIONS(882),
        [anon_sym_byte] = ACTIONS(882),
        [anon_sym_short] = ACTIONS(882),
        [anon_sym_ushort] = ACTIONS(882),
        [anon_sym_int] = ACTIONS(882),
        [anon_sym_uint] = ACTIONS(882),
        [anon_sym_long] = ACTIONS(882),
        [anon_sym_ulong] = ACTIONS(882),
        [anon_sym_char] = ACTIONS(882),
        [sym_identifier_name] = ACTIONS(884),
        [sym_comment] = ACTIONS(91),
    },
    [240] = {
        [sym_identifier_name] = ACTIONS(886),
        [sym_comment] = ACTIONS(91),
    },
    [241] = {
        [sym__attributes] = STATE(142),
        [sym_enum_member_declaration] = STATE(341),
        [sym__attribute_section] = STATE(19),
        [sym_attribute] = STATE(342),
        [sym__type] = STATE(178),
        [sym_generic_name] = STATE(65),
        [sym_variable_declarator] = STATE(343),
        [sym_predefined_type] = STATE(65),
        [sym_type_parameter] = STATE(344),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(888),
        [sym_comment] = ACTIONS(91),
    },
    [242] = {
        [anon_sym_LBRACE] = ACTIONS(531),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_GT] = ACTIONS(275),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(91),
    },
    [243] = {
        [sym__literal] = STATE(102),
        [sym_boolean_literal] = STATE(98),
        [sym_character_literal] = STATE(98),
        [sym_integer_literal] = STATE(98),
        [sym_real_literal] = STATE(98),
        [sym_string_literal] = STATE(98),
        [sym__regular_string_literal] = STATE(103),
        [sym__verbatim_string_literal] = STATE(103),
        [anon_sym_true] = ACTIONS(890),
        [anon_sym_false] = ACTIONS(890),
        [anon_sym_SQUOTE] = ACTIONS(379),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(381),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(383),
        [sym_null_literal] = ACTIONS(892),
        [anon_sym_DOT] = ACTIONS(387),
        [anon_sym_DQUOTE] = ACTIONS(389),
        [anon_sym_AT_DQUOTE] = ACTIONS(391),
        [sym_global] = ACTIONS(727),
        [sym_identifier_name] = ACTIONS(729),
        [sym_comment] = ACTIONS(91),
    },
    [244] = {
        [sym__unicode_escape_sequence] = STATE(125),
        [sym__simple_escape_sequence] = STATE(125),
        [anon_sym_SEMI] = ACTIONS(491),
        [anon_sym_RBRACE] = ACTIONS(491),
        [anon_sym_COMMA] = ACTIONS(491),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(894),
        [sym__hexadecimal_escape_sequence] = ACTIONS(397),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(399),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(399),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(401),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(401),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(401),
        [anon_sym_BSLASH0] = ACTIONS(401),
        [anon_sym_BSLASHa] = ACTIONS(401),
        [anon_sym_BSLASHb] = ACTIONS(401),
        [anon_sym_BSLASHf] = ACTIONS(401),
        [anon_sym_BSLASHn] = ACTIONS(401),
        [anon_sym_BSLASHr] = ACTIONS(401),
        [anon_sym_BSLASHt] = ACTIONS(401),
        [anon_sym_BSLASHv] = ACTIONS(401),
        [sym_comment] = ACTIONS(91),
    },
    [245] = {
        [anon_sym_SQUOTE] = ACTIONS(489),
        [sym__hexadecimal_escape_sequence] = ACTIONS(437),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(439),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(439),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(439),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(439),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(439),
        [anon_sym_BSLASH0] = ACTIONS(439),
        [anon_sym_BSLASHa] = ACTIONS(439),
        [anon_sym_BSLASHb] = ACTIONS(439),
        [anon_sym_BSLASHf] = ACTIONS(439),
        [anon_sym_BSLASHn] = ACTIONS(439),
        [anon_sym_BSLASHr] = ACTIONS(439),
        [anon_sym_BSLASHt] = ACTIONS(439),
        [anon_sym_BSLASHv] = ACTIONS(439),
        [anon_sym_DQUOTE] = ACTIONS(439),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(896),
        [sym_comment] = ACTIONS(91),
    },
    [246] = {
        [anon_sym_SEMI] = ACTIONS(898),
        [anon_sym_RBRACE] = ACTIONS(898),
        [anon_sym_COMMA] = ACTIONS(898),
        [sym__integer_type_suffix] = ACTIONS(405),
        [anon_sym_DOT] = ACTIONS(407),
        [sym__real_type_suffix] = ACTIONS(902),
        [sym__exponent_part] = ACTIONS(904),
        [sym_comment] = ACTIONS(91),
    },
    [247] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(906),
        [sym_identifier_name] = ACTIONS(691),
        [sym_comment] = ACTIONS(91),
    },
    [248] = {
        [anon_sym_SEMI] = ACTIONS(908),
        [anon_sym_RBRACE] = ACTIONS(908),
        [anon_sym_COMMA] = ACTIONS(908),
        [sym_comment] = ACTIONS(91),
    },
    [249] = {
        [anon_sym_SEMI] = ACTIONS(913),
        [anon_sym_RBRACE] = ACTIONS(913),
        [anon_sym_COMMA] = ACTIONS(913),
        [sym__real_type_suffix] = ACTIONS(917),
        [sym_comment] = ACTIONS(91),
    },
    [250] = {
        [sym__unicode_escape_sequence] = STATE(106),
        [sym__simple_escape_sequence] = STATE(106),
        [sym__regular_string_literal_character] = STATE(110),
        [aux_sym__regular_string_literal_repeat1] = STATE(111),
        [anon_sym_SEMI] = ACTIONS(919),
        [anon_sym_RBRACE] = ACTIONS(919),
        [anon_sym_COMMA] = ACTIONS(919),
        [sym__hexadecimal_escape_sequence] = ACTIONS(417),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(419),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(419),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(421),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(421),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(421),
        [anon_sym_BSLASH0] = ACTIONS(421),
        [anon_sym_BSLASHa] = ACTIONS(421),
        [anon_sym_BSLASHb] = ACTIONS(421),
        [anon_sym_BSLASHf] = ACTIONS(421),
        [anon_sym_BSLASHn] = ACTIONS(421),
        [anon_sym_BSLASHr] = ACTIONS(421),
        [anon_sym_BSLASHt] = ACTIONS(421),
        [anon_sym_BSLASHv] = ACTIONS(421),
        [anon_sym_DQUOTE] = ACTIONS(423),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(923),
        [sym_comment] = ACTIONS(91),
    },
    [251] = {
        [sym__class_modifiers] = STATE(188),
        [sym__field_modifiers] = STATE(187),
        [anon_sym_class] = ACTIONS(265),
        [anon_sym_new] = ACTIONS(249),
        [anon_sym_public] = ACTIONS(249),
        [anon_sym_protected] = ACTIONS(249),
        [anon_sym_internal] = ACTIONS(249),
        [anon_sym_private] = ACTIONS(249),
        [anon_sym_sbyte] = ACTIONS(271),
        [anon_sym_byte] = ACTIONS(271),
        [anon_sym_short] = ACTIONS(271),
        [anon_sym_ushort] = ACTIONS(271),
        [anon_sym_int] = ACTIONS(271),
        [anon_sym_uint] = ACTIONS(271),
        [anon_sym_long] = ACTIONS(271),
        [anon_sym_ulong] = ACTIONS(271),
        [anon_sym_char] = ACTIONS(271),
        [anon_sym_unsafe] = ACTIONS(249),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(271),
        [anon_sym_decimal] = ACTIONS(271),
        [anon_sym_double] = ACTIONS(271),
        [anon_sym_float] = ACTIONS(271),
        [anon_sym_object] = ACTIONS(271),
        [anon_sym_string] = ACTIONS(271),
        [sym_global] = ACTIONS(711),
        [sym_identifier_name] = ACTIONS(925),
        [sym_comment] = ACTIONS(91),
    },
    [252] = {
        [anon_sym_LBRACE] = ACTIONS(928),
        [anon_sym_COMMA] = ACTIONS(928),
        [anon_sym_GT] = ACTIONS(928),
        [sym_identifier_name] = ACTIONS(931),
        [sym_comment] = ACTIONS(91),
    },
    [253] = {
        [sym__enum_base] = STATE(260),
        [sym__enum_body] = STATE(328),
        [sym_attribute_argument_list] = STATE(40),
        [sym_equals_value_clause] = STATE(271),
        [sym_type_parameter_list] = STATE(279),
        [anon_sym_SEMI] = ACTIONS(934),
        [anon_sym_LBRACE] = ACTIONS(938),
        [anon_sym_RBRACE] = ACTIONS(941),
        [anon_sym_RBRACK] = ACTIONS(187),
        [anon_sym_COLON] = ACTIONS(503),
        [anon_sym_COMMA] = ACTIONS(944),
        [anon_sym_LPAREN] = ACTIONS(189),
        [anon_sym_EQ] = ACTIONS(950),
        [anon_sym_DOT] = ACTIONS(952),
        [anon_sym_LT] = ACTIONS(231),
        [anon_sym_GT] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(91),
    },
    [254] = {
        [ts_builtin_sym_end] = ACTIONS(956),
        [anon_sym_extern] = ACTIONS(956),
        [anon_sym_using] = ACTIONS(956),
        [anon_sym_namespace] = ACTIONS(956),
        [anon_sym_class] = ACTIONS(956),
        [anon_sym_struct] = ACTIONS(956),
        [anon_sym_LBRACK] = ACTIONS(956),
        [anon_sym_enum] = ACTIONS(956),
        [anon_sym_new] = ACTIONS(956),
        [anon_sym_public] = ACTIONS(956),
        [anon_sym_protected] = ACTIONS(956),
        [anon_sym_internal] = ACTIONS(956),
        [anon_sym_private] = ACTIONS(956),
        [anon_sym_unsafe] = ACTIONS(956),
        [anon_sym_abstract] = ACTIONS(956),
        [anon_sym_sealed] = ACTIONS(956),
        [anon_sym_static] = ACTIONS(956),
        [sym_comment] = ACTIONS(91),
    },
    [255] = {
        [ts_builtin_sym_end] = ACTIONS(959),
        [anon_sym_using] = ACTIONS(959),
        [anon_sym_namespace] = ACTIONS(959),
        [anon_sym_class] = ACTIONS(959),
        [anon_sym_struct] = ACTIONS(959),
        [anon_sym_LBRACK] = ACTIONS(959),
        [anon_sym_enum] = ACTIONS(959),
        [anon_sym_new] = ACTIONS(959),
        [anon_sym_public] = ACTIONS(959),
        [anon_sym_protected] = ACTIONS(959),
        [anon_sym_internal] = ACTIONS(959),
        [anon_sym_private] = ACTIONS(959),
        [anon_sym_unsafe] = ACTIONS(959),
        [anon_sym_abstract] = ACTIONS(959),
        [anon_sym_sealed] = ACTIONS(959),
        [anon_sym_static] = ACTIONS(959),
        [sym_comment] = ACTIONS(91),
    },
    [256] = {
        [ts_builtin_sym_end] = ACTIONS(962),
        [anon_sym_namespace] = ACTIONS(965),
        [anon_sym_RBRACE] = ACTIONS(970),
        [anon_sym_class] = ACTIONS(975),
        [anon_sym_struct] = ACTIONS(975),
        [anon_sym_LBRACK] = ACTIONS(982),
        [anon_sym_enum] = ACTIONS(975),
        [anon_sym_new] = ACTIONS(975),
        [anon_sym_public] = ACTIONS(975),
        [anon_sym_protected] = ACTIONS(975),
        [anon_sym_internal] = ACTIONS(975),
        [anon_sym_private] = ACTIONS(975),
        [anon_sym_sbyte] = ACTIONS(989),
        [anon_sym_byte] = ACTIONS(989),
        [anon_sym_short] = ACTIONS(989),
        [anon_sym_ushort] = ACTIONS(989),
        [anon_sym_int] = ACTIONS(989),
        [anon_sym_uint] = ACTIONS(989),
        [anon_sym_long] = ACTIONS(989),
        [anon_sym_ulong] = ACTIONS(989),
        [anon_sym_char] = ACTIONS(989),
        [anon_sym_unsafe] = ACTIONS(975),
        [anon_sym_abstract] = ACTIONS(975),
        [anon_sym_sealed] = ACTIONS(975),
        [anon_sym_static] = ACTIONS(975),
        [anon_sym_readonly] = ACTIONS(989),
        [anon_sym_volatile] = ACTIONS(989),
        [anon_sym_bool] = ACTIONS(989),
        [anon_sym_decimal] = ACTIONS(989),
        [anon_sym_double] = ACTIONS(989),
        [anon_sym_float] = ACTIONS(989),
        [anon_sym_object] = ACTIONS(989),
        [anon_sym_string] = ACTIONS(989),
        [sym_identifier_name] = ACTIONS(992),
        [sym_comment] = ACTIONS(91),
    },
    [257] = {
        [ts_builtin_sym_end] = ACTIONS(962),
        [anon_sym_namespace] = ACTIONS(995),
        [anon_sym_RBRACE] = ACTIONS(1000),
        [anon_sym_class] = ACTIONS(995),
        [anon_sym_struct] = ACTIONS(995),
        [anon_sym_LBRACK] = ACTIONS(995),
        [anon_sym_enum] = ACTIONS(995),
        [anon_sym_new] = ACTIONS(995),
        [anon_sym_public] = ACTIONS(995),
        [anon_sym_protected] = ACTIONS(995),
        [anon_sym_internal] = ACTIONS(995),
        [anon_sym_private] = ACTIONS(995),
        [anon_sym_unsafe] = ACTIONS(995),
        [anon_sym_abstract] = ACTIONS(995),
        [anon_sym_sealed] = ACTIONS(995),
        [anon_sym_static] = ACTIONS(995),
        [sym_comment] = ACTIONS(91),
    },
    [258] = {
        [ts_builtin_sym_end] = ACTIONS(962),
        [anon_sym_namespace] = ACTIONS(962),
        [anon_sym_class] = ACTIONS(962),
        [anon_sym_struct] = ACTIONS(962),
        [anon_sym_LBRACK] = ACTIONS(962),
        [anon_sym_enum] = ACTIONS(962),
        [anon_sym_new] = ACTIONS(962),
        [anon_sym_public] = ACTIONS(962),
        [anon_sym_protected] = ACTIONS(962),
        [anon_sym_internal] = ACTIONS(962),
        [anon_sym_private] = ACTIONS(962),
        [anon_sym_unsafe] = ACTIONS(962),
        [anon_sym_abstract] = ACTIONS(962),
        [anon_sym_sealed] = ACTIONS(962),
        [anon_sym_static] = ACTIONS(962),
        [sym_comment] = ACTIONS(91),
    },
    [259] = {
        [sym_enum_modifier] = STATE(154),
        [sym_variable_declaration] = STATE(71),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(155),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(156),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(157),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [anon_sym_class] = ACTIONS(289),
        [anon_sym_struct] = ACTIONS(291),
        [anon_sym_enum] = ACTIONS(293),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(1003),
        [sym_comment] = ACTIONS(91),
    },
    [260] = {
        [sym__enum_body] = STATE(323),
        [anon_sym_LBRACE] = ACTIONS(501),
        [sym_comment] = ACTIONS(91),
    },
    [261] = {
        [ts_builtin_sym_end] = ACTIONS(1005),
        [anon_sym_SEMI] = ACTIONS(1010),
        [anon_sym_namespace] = ACTIONS(1012),
        [anon_sym_RBRACE] = ACTIONS(1005),
        [anon_sym_class] = ACTIONS(1012),
        [anon_sym_struct] = ACTIONS(1012),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_enum] = ACTIONS(1012),
        [anon_sym_new] = ACTIONS(1012),
        [anon_sym_public] = ACTIONS(1012),
        [anon_sym_protected] = ACTIONS(1012),
        [anon_sym_internal] = ACTIONS(1012),
        [anon_sym_private] = ACTIONS(1012),
        [anon_sym_sbyte] = ACTIONS(1012),
        [anon_sym_byte] = ACTIONS(1012),
        [anon_sym_short] = ACTIONS(1012),
        [anon_sym_ushort] = ACTIONS(1012),
        [anon_sym_int] = ACTIONS(1012),
        [anon_sym_uint] = ACTIONS(1012),
        [anon_sym_long] = ACTIONS(1012),
        [anon_sym_ulong] = ACTIONS(1012),
        [anon_sym_char] = ACTIONS(1012),
        [anon_sym_unsafe] = ACTIONS(1012),
        [anon_sym_abstract] = ACTIONS(1012),
        [anon_sym_sealed] = ACTIONS(1012),
        [anon_sym_static] = ACTIONS(1012),
        [anon_sym_readonly] = ACTIONS(1012),
        [anon_sym_volatile] = ACTIONS(1012),
        [anon_sym_bool] = ACTIONS(1012),
        [anon_sym_decimal] = ACTIONS(1012),
        [anon_sym_double] = ACTIONS(1012),
        [anon_sym_float] = ACTIONS(1012),
        [anon_sym_object] = ACTIONS(1012),
        [anon_sym_string] = ACTIONS(1012),
        [sym_identifier_name] = ACTIONS(1017),
        [sym_comment] = ACTIONS(91),
    },
    [262] = {
        [aux_sym__enum_body_repeat1] = STATE(146),
        [anon_sym_RBRACE] = ACTIONS(1022),
        [anon_sym_COMMA] = ACTIONS(1026),
        [sym_comment] = ACTIONS(91),
    },
    [263] = {
        [anon_sym_enum] = ACTIONS(1030),
        [sym_comment] = ACTIONS(91),
    },
    [264] = {
        [anon_sym_class] = ACTIONS(1032),
        [anon_sym_struct] = ACTIONS(1032),
        [anon_sym_LBRACK] = ACTIONS(1035),
        [anon_sym_enum] = ACTIONS(1032),
        [anon_sym_new] = ACTIONS(1032),
        [anon_sym_public] = ACTIONS(1032),
        [anon_sym_protected] = ACTIONS(1032),
        [anon_sym_internal] = ACTIONS(1032),
        [anon_sym_private] = ACTIONS(1032),
        [anon_sym_sbyte] = ACTIONS(1032),
        [anon_sym_byte] = ACTIONS(1032),
        [anon_sym_short] = ACTIONS(1032),
        [anon_sym_ushort] = ACTIONS(1032),
        [anon_sym_int] = ACTIONS(1032),
        [anon_sym_uint] = ACTIONS(1032),
        [anon_sym_long] = ACTIONS(1032),
        [anon_sym_ulong] = ACTIONS(1032),
        [anon_sym_char] = ACTIONS(1032),
        [anon_sym_unsafe] = ACTIONS(1032),
        [anon_sym_abstract] = ACTIONS(1032),
        [anon_sym_sealed] = ACTIONS(1032),
        [anon_sym_static] = ACTIONS(1032),
        [anon_sym_readonly] = ACTIONS(1032),
        [anon_sym_volatile] = ACTIONS(1032),
        [anon_sym_bool] = ACTIONS(1032),
        [anon_sym_decimal] = ACTIONS(1032),
        [anon_sym_double] = ACTIONS(1032),
        [anon_sym_float] = ACTIONS(1032),
        [anon_sym_object] = ACTIONS(1032),
        [anon_sym_string] = ACTIONS(1032),
        [sym_identifier_name] = ACTIONS(1038),
        [sym_comment] = ACTIONS(91),
    },
    [265] = {
        [anon_sym_RBRACK] = ACTIONS(1041),
        [sym_comment] = ACTIONS(91),
    },
    [266] = {
        [aux_sym_attribute_list_repeat1] = STATE(34),
        [anon_sym_RBRACK] = ACTIONS(1043),
        [anon_sym_COMMA] = ACTIONS(1047),
        [sym_comment] = ACTIONS(91),
    },
    [267] = {
        [anon_sym_RBRACE] = ACTIONS(1051),
        [anon_sym_class] = ACTIONS(989),
        [anon_sym_struct] = ACTIONS(989),
        [anon_sym_LBRACK] = ACTIONS(1051),
        [anon_sym_enum] = ACTIONS(989),
        [anon_sym_new] = ACTIONS(989),
        [anon_sym_public] = ACTIONS(989),
        [anon_sym_protected] = ACTIONS(989),
        [anon_sym_internal] = ACTIONS(989),
        [anon_sym_private] = ACTIONS(989),
        [anon_sym_sbyte] = ACTIONS(989),
        [anon_sym_byte] = ACTIONS(989),
        [anon_sym_short] = ACTIONS(989),
        [anon_sym_ushort] = ACTIONS(989),
        [anon_sym_int] = ACTIONS(989),
        [anon_sym_uint] = ACTIONS(989),
        [anon_sym_long] = ACTIONS(989),
        [anon_sym_ulong] = ACTIONS(989),
        [anon_sym_char] = ACTIONS(989),
        [anon_sym_unsafe] = ACTIONS(989),
        [anon_sym_abstract] = ACTIONS(989),
        [anon_sym_sealed] = ACTIONS(989),
        [anon_sym_static] = ACTIONS(989),
        [anon_sym_readonly] = ACTIONS(989),
        [anon_sym_volatile] = ACTIONS(989),
        [anon_sym_bool] = ACTIONS(989),
        [anon_sym_decimal] = ACTIONS(989),
        [anon_sym_double] = ACTIONS(989),
        [anon_sym_float] = ACTIONS(989),
        [anon_sym_object] = ACTIONS(989),
        [anon_sym_string] = ACTIONS(989),
        [sym_identifier_name] = ACTIONS(992),
        [sym_comment] = ACTIONS(91),
    },
    [268] = {
        [anon_sym_SEMI] = ACTIONS(1054),
        [sym_comment] = ACTIONS(91),
    },
    [269] = {
        [sym_variable_declarator] = STATE(86),
        [anon_sym_COMMA] = ACTIONS(619),
        [anon_sym_GT] = ACTIONS(619),
        [sym_identifier_name] = ACTIONS(297),
        [sym_comment] = ACTIONS(91),
    },
    [270] = {
        [aux_sym_variable_declaration_repeat1] = STATE(88),
        [anon_sym_SEMI] = ACTIONS(1056),
        [anon_sym_COMMA] = ACTIONS(1060),
        [sym_comment] = ACTIONS(91),
    },
    [271] = {
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_RBRACE] = ACTIONS(1064),
        [anon_sym_COMMA] = ACTIONS(1067),
        [sym_comment] = ACTIONS(91),
    },
    [272] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(1071),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1074),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1074),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(1074),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(1074),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(1074),
        [anon_sym_BSLASH0] = ACTIONS(1074),
        [anon_sym_BSLASHa] = ACTIONS(1074),
        [anon_sym_BSLASHb] = ACTIONS(1074),
        [anon_sym_BSLASHf] = ACTIONS(1074),
        [anon_sym_BSLASHn] = ACTIONS(1074),
        [anon_sym_BSLASHr] = ACTIONS(1074),
        [anon_sym_BSLASHt] = ACTIONS(1074),
        [anon_sym_BSLASHv] = ACTIONS(1074),
        [anon_sym_DQUOTE] = ACTIONS(1074),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1071),
        [sym_comment] = ACTIONS(91),
    },
    [273] = {
        [anon_sym_class] = ACTIONS(1077),
        [sym_comment] = ACTIONS(91),
    },
    [274] = {
        [anon_sym_class] = ACTIONS(1079),
        [sym_comment] = ACTIONS(91),
    },
    [275] = {
        [anon_sym_struct] = ACTIONS(1082),
        [sym_comment] = ACTIONS(91),
    },
    [276] = {
        [anon_sym_struct] = ACTIONS(1084),
        [sym_comment] = ACTIONS(91),
    },
    [277] = {
        [sym_variable_declaration] = STATE(292),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_predefined_type] = STATE(65),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [278] = {
        [anon_sym_sbyte] = ACTIONS(1087),
        [anon_sym_byte] = ACTIONS(1087),
        [anon_sym_short] = ACTIONS(1087),
        [anon_sym_ushort] = ACTIONS(1087),
        [anon_sym_int] = ACTIONS(1087),
        [anon_sym_uint] = ACTIONS(1087),
        [anon_sym_long] = ACTIONS(1087),
        [anon_sym_ulong] = ACTIONS(1087),
        [anon_sym_char] = ACTIONS(1087),
        [anon_sym_bool] = ACTIONS(1087),
        [anon_sym_decimal] = ACTIONS(1087),
        [anon_sym_double] = ACTIONS(1087),
        [anon_sym_float] = ACTIONS(1087),
        [anon_sym_object] = ACTIONS(1087),
        [anon_sym_string] = ACTIONS(1087),
        [sym_identifier_name] = ACTIONS(1090),
        [sym_comment] = ACTIONS(91),
    },
    [279] = {
        [anon_sym_LBRACE] = ACTIONS(1093),
        [anon_sym_COMMA] = ACTIONS(615),
        [anon_sym_GT] = ACTIONS(615),
        [sym_identifier_name] = ACTIONS(617),
        [sym_comment] = ACTIONS(91),
    },
    [280] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(182),
        [anon_sym_COMMA] = ACTIONS(1095),
        [anon_sym_GT] = ACTIONS(1099),
        [sym_comment] = ACTIONS(91),
    },
    [281] = {
        [anon_sym_SEMI] = ACTIONS(1103),
        [anon_sym_LBRACE] = ACTIONS(687),
        [anon_sym_DOT] = ACTIONS(689),
        [sym_comment] = ACTIONS(91),
    },
    [282] = {
        [sym_using_directive] = STATE(43),
        [sym__type_declaration] = STATE(15),
        [sym_namespace_declaration] = STATE(15),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(15),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym_compilation_unit_repeat3] = STATE(286),
        [aux_sym__attributes_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(1105),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [283] = {
        [sym__type_declaration] = STATE(42),
        [sym_namespace_declaration] = STATE(42),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(42),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(1108),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [284] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1112),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [285] = {
        [ts_builtin_sym_end] = ACTIONS(1114),
        [anon_sym_namespace] = ACTIONS(1123),
        [anon_sym_RBRACE] = ACTIONS(1114),
        [anon_sym_class] = ACTIONS(1123),
        [anon_sym_struct] = ACTIONS(1123),
        [anon_sym_LBRACK] = ACTIONS(1114),
        [anon_sym_enum] = ACTIONS(1123),
        [anon_sym_new] = ACTIONS(1123),
        [anon_sym_public] = ACTIONS(1123),
        [anon_sym_protected] = ACTIONS(1123),
        [anon_sym_internal] = ACTIONS(1123),
        [anon_sym_private] = ACTIONS(1123),
        [anon_sym_sbyte] = ACTIONS(1123),
        [anon_sym_byte] = ACTIONS(1123),
        [anon_sym_short] = ACTIONS(1123),
        [anon_sym_ushort] = ACTIONS(1123),
        [anon_sym_int] = ACTIONS(1123),
        [anon_sym_uint] = ACTIONS(1123),
        [anon_sym_long] = ACTIONS(1123),
        [anon_sym_ulong] = ACTIONS(1123),
        [anon_sym_char] = ACTIONS(1123),
        [anon_sym_unsafe] = ACTIONS(1123),
        [anon_sym_abstract] = ACTIONS(1123),
        [anon_sym_sealed] = ACTIONS(1123),
        [anon_sym_static] = ACTIONS(1123),
        [anon_sym_readonly] = ACTIONS(1123),
        [anon_sym_volatile] = ACTIONS(1123),
        [anon_sym_bool] = ACTIONS(1123),
        [anon_sym_decimal] = ACTIONS(1123),
        [anon_sym_double] = ACTIONS(1123),
        [anon_sym_float] = ACTIONS(1123),
        [anon_sym_object] = ACTIONS(1123),
        [anon_sym_string] = ACTIONS(1123),
        [sym_identifier_name] = ACTIONS(1132),
        [sym_comment] = ACTIONS(91),
    },
    [286] = {
        [sym__type_declaration] = STATE(42),
        [sym_namespace_declaration] = STATE(42),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__global_attributes] = STATE(42),
        [sym__attributes] = STATE(17),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(1141),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_LBRACK] = ACTIONS(105),
        [anon_sym_enum] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [287] = {
        [ts_builtin_sym_end] = ACTIONS(1144),
        [anon_sym_using] = ACTIONS(1144),
        [anon_sym_namespace] = ACTIONS(1144),
        [anon_sym_class] = ACTIONS(1144),
        [anon_sym_struct] = ACTIONS(1144),
        [anon_sym_LBRACK] = ACTIONS(1144),
        [anon_sym_enum] = ACTIONS(1144),
        [anon_sym_new] = ACTIONS(1144),
        [anon_sym_public] = ACTIONS(1144),
        [anon_sym_protected] = ACTIONS(1144),
        [anon_sym_internal] = ACTIONS(1144),
        [anon_sym_private] = ACTIONS(1144),
        [anon_sym_unsafe] = ACTIONS(1144),
        [anon_sym_abstract] = ACTIONS(1144),
        [anon_sym_sealed] = ACTIONS(1144),
        [anon_sym_static] = ACTIONS(1144),
        [sym_comment] = ACTIONS(91),
    },
    [288] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(290),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1147),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [289] = {
        [ts_builtin_sym_end] = ACTIONS(1149),
        [anon_sym_namespace] = ACTIONS(1156),
        [anon_sym_RBRACE] = ACTIONS(1149),
        [anon_sym_class] = ACTIONS(1156),
        [anon_sym_struct] = ACTIONS(1156),
        [anon_sym_LBRACK] = ACTIONS(1149),
        [anon_sym_enum] = ACTIONS(1156),
        [anon_sym_new] = ACTIONS(1156),
        [anon_sym_public] = ACTIONS(1156),
        [anon_sym_protected] = ACTIONS(1156),
        [anon_sym_internal] = ACTIONS(1156),
        [anon_sym_private] = ACTIONS(1156),
        [anon_sym_sbyte] = ACTIONS(1156),
        [anon_sym_byte] = ACTIONS(1156),
        [anon_sym_short] = ACTIONS(1156),
        [anon_sym_ushort] = ACTIONS(1156),
        [anon_sym_int] = ACTIONS(1156),
        [anon_sym_uint] = ACTIONS(1156),
        [anon_sym_long] = ACTIONS(1156),
        [anon_sym_ulong] = ACTIONS(1156),
        [anon_sym_char] = ACTIONS(1156),
        [anon_sym_unsafe] = ACTIONS(1156),
        [anon_sym_abstract] = ACTIONS(1156),
        [anon_sym_sealed] = ACTIONS(1156),
        [anon_sym_static] = ACTIONS(1156),
        [anon_sym_readonly] = ACTIONS(1156),
        [anon_sym_volatile] = ACTIONS(1156),
        [anon_sym_bool] = ACTIONS(1156),
        [anon_sym_decimal] = ACTIONS(1156),
        [anon_sym_double] = ACTIONS(1156),
        [anon_sym_float] = ACTIONS(1156),
        [anon_sym_object] = ACTIONS(1156),
        [anon_sym_string] = ACTIONS(1156),
        [sym_identifier_name] = ACTIONS(1163),
        [sym_comment] = ACTIONS(91),
    },
    [290] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1170),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [291] = {
        [ts_builtin_sym_end] = ACTIONS(1172),
        [anon_sym_namespace] = ACTIONS(1179),
        [anon_sym_RBRACE] = ACTIONS(1172),
        [anon_sym_class] = ACTIONS(1179),
        [anon_sym_struct] = ACTIONS(1179),
        [anon_sym_LBRACK] = ACTIONS(1172),
        [anon_sym_enum] = ACTIONS(1179),
        [anon_sym_new] = ACTIONS(1179),
        [anon_sym_public] = ACTIONS(1179),
        [anon_sym_protected] = ACTIONS(1179),
        [anon_sym_internal] = ACTIONS(1179),
        [anon_sym_private] = ACTIONS(1179),
        [anon_sym_sbyte] = ACTIONS(1179),
        [anon_sym_byte] = ACTIONS(1179),
        [anon_sym_short] = ACTIONS(1179),
        [anon_sym_ushort] = ACTIONS(1179),
        [anon_sym_int] = ACTIONS(1179),
        [anon_sym_uint] = ACTIONS(1179),
        [anon_sym_long] = ACTIONS(1179),
        [anon_sym_ulong] = ACTIONS(1179),
        [anon_sym_char] = ACTIONS(1179),
        [anon_sym_unsafe] = ACTIONS(1179),
        [anon_sym_abstract] = ACTIONS(1179),
        [anon_sym_sealed] = ACTIONS(1179),
        [anon_sym_static] = ACTIONS(1179),
        [anon_sym_readonly] = ACTIONS(1179),
        [anon_sym_volatile] = ACTIONS(1179),
        [anon_sym_bool] = ACTIONS(1179),
        [anon_sym_decimal] = ACTIONS(1179),
        [anon_sym_double] = ACTIONS(1179),
        [anon_sym_float] = ACTIONS(1179),
        [anon_sym_object] = ACTIONS(1179),
        [anon_sym_string] = ACTIONS(1179),
        [sym_identifier_name] = ACTIONS(1186),
        [sym_comment] = ACTIONS(91),
    },
    [292] = {
        [anon_sym_SEMI] = ACTIONS(1193),
        [sym_comment] = ACTIONS(91),
    },
    [293] = {
        [anon_sym_RBRACE] = ACTIONS(1195),
        [anon_sym_class] = ACTIONS(1198),
        [anon_sym_struct] = ACTIONS(1198),
        [anon_sym_LBRACK] = ACTIONS(1195),
        [anon_sym_enum] = ACTIONS(1198),
        [anon_sym_new] = ACTIONS(1198),
        [anon_sym_public] = ACTIONS(1198),
        [anon_sym_protected] = ACTIONS(1198),
        [anon_sym_internal] = ACTIONS(1198),
        [anon_sym_private] = ACTIONS(1198),
        [anon_sym_sbyte] = ACTIONS(1198),
        [anon_sym_byte] = ACTIONS(1198),
        [anon_sym_short] = ACTIONS(1198),
        [anon_sym_ushort] = ACTIONS(1198),
        [anon_sym_int] = ACTIONS(1198),
        [anon_sym_uint] = ACTIONS(1198),
        [anon_sym_long] = ACTIONS(1198),
        [anon_sym_ulong] = ACTIONS(1198),
        [anon_sym_char] = ACTIONS(1198),
        [anon_sym_unsafe] = ACTIONS(1198),
        [anon_sym_abstract] = ACTIONS(1198),
        [anon_sym_sealed] = ACTIONS(1198),
        [anon_sym_static] = ACTIONS(1198),
        [anon_sym_readonly] = ACTIONS(1198),
        [anon_sym_volatile] = ACTIONS(1198),
        [anon_sym_bool] = ACTIONS(1198),
        [anon_sym_decimal] = ACTIONS(1198),
        [anon_sym_double] = ACTIONS(1198),
        [anon_sym_float] = ACTIONS(1198),
        [anon_sym_object] = ACTIONS(1198),
        [anon_sym_string] = ACTIONS(1198),
        [sym_identifier_name] = ACTIONS(1201),
        [sym_comment] = ACTIONS(91),
    },
    [294] = {
        [sym_identifier_name] = ACTIONS(1204),
        [sym_comment] = ACTIONS(91),
    },
    [295] = {
        [sym_type_parameter_list] = STATE(297),
        [anon_sym_LBRACE] = ACTIONS(1206),
        [anon_sym_LT] = ACTIONS(231),
        [sym_comment] = ACTIONS(91),
    },
    [296] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(303),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1208),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [297] = {
        [anon_sym_LBRACE] = ACTIONS(1210),
        [sym_comment] = ACTIONS(91),
    },
    [298] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(300),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1212),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [299] = {
        [ts_builtin_sym_end] = ACTIONS(1214),
        [anon_sym_namespace] = ACTIONS(1217),
        [anon_sym_RBRACE] = ACTIONS(1214),
        [anon_sym_class] = ACTIONS(1217),
        [anon_sym_struct] = ACTIONS(1217),
        [anon_sym_LBRACK] = ACTIONS(1214),
        [anon_sym_enum] = ACTIONS(1217),
        [anon_sym_new] = ACTIONS(1217),
        [anon_sym_public] = ACTIONS(1217),
        [anon_sym_protected] = ACTIONS(1217),
        [anon_sym_internal] = ACTIONS(1217),
        [anon_sym_private] = ACTIONS(1217),
        [anon_sym_sbyte] = ACTIONS(1217),
        [anon_sym_byte] = ACTIONS(1217),
        [anon_sym_short] = ACTIONS(1217),
        [anon_sym_ushort] = ACTIONS(1217),
        [anon_sym_int] = ACTIONS(1217),
        [anon_sym_uint] = ACTIONS(1217),
        [anon_sym_long] = ACTIONS(1217),
        [anon_sym_ulong] = ACTIONS(1217),
        [anon_sym_char] = ACTIONS(1217),
        [anon_sym_unsafe] = ACTIONS(1217),
        [anon_sym_abstract] = ACTIONS(1217),
        [anon_sym_sealed] = ACTIONS(1217),
        [anon_sym_static] = ACTIONS(1217),
        [anon_sym_readonly] = ACTIONS(1217),
        [anon_sym_volatile] = ACTIONS(1217),
        [anon_sym_bool] = ACTIONS(1217),
        [anon_sym_decimal] = ACTIONS(1217),
        [anon_sym_double] = ACTIONS(1217),
        [anon_sym_float] = ACTIONS(1217),
        [anon_sym_object] = ACTIONS(1217),
        [anon_sym_string] = ACTIONS(1217),
        [sym_identifier_name] = ACTIONS(1220),
        [sym_comment] = ACTIONS(91),
    },
    [300] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1223),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [301] = {
        [ts_builtin_sym_end] = ACTIONS(1225),
        [anon_sym_namespace] = ACTIONS(1228),
        [anon_sym_RBRACE] = ACTIONS(1225),
        [anon_sym_class] = ACTIONS(1228),
        [anon_sym_struct] = ACTIONS(1228),
        [anon_sym_LBRACK] = ACTIONS(1225),
        [anon_sym_enum] = ACTIONS(1228),
        [anon_sym_new] = ACTIONS(1228),
        [anon_sym_public] = ACTIONS(1228),
        [anon_sym_protected] = ACTIONS(1228),
        [anon_sym_internal] = ACTIONS(1228),
        [anon_sym_private] = ACTIONS(1228),
        [anon_sym_sbyte] = ACTIONS(1228),
        [anon_sym_byte] = ACTIONS(1228),
        [anon_sym_short] = ACTIONS(1228),
        [anon_sym_ushort] = ACTIONS(1228),
        [anon_sym_int] = ACTIONS(1228),
        [anon_sym_uint] = ACTIONS(1228),
        [anon_sym_long] = ACTIONS(1228),
        [anon_sym_ulong] = ACTIONS(1228),
        [anon_sym_char] = ACTIONS(1228),
        [anon_sym_unsafe] = ACTIONS(1228),
        [anon_sym_abstract] = ACTIONS(1228),
        [anon_sym_sealed] = ACTIONS(1228),
        [anon_sym_static] = ACTIONS(1228),
        [anon_sym_readonly] = ACTIONS(1228),
        [anon_sym_volatile] = ACTIONS(1228),
        [anon_sym_bool] = ACTIONS(1228),
        [anon_sym_decimal] = ACTIONS(1228),
        [anon_sym_double] = ACTIONS(1228),
        [anon_sym_float] = ACTIONS(1228),
        [anon_sym_object] = ACTIONS(1228),
        [anon_sym_string] = ACTIONS(1228),
        [sym_identifier_name] = ACTIONS(1231),
        [sym_comment] = ACTIONS(91),
    },
    [302] = {
        [ts_builtin_sym_end] = ACTIONS(1234),
        [anon_sym_namespace] = ACTIONS(1237),
        [anon_sym_RBRACE] = ACTIONS(1234),
        [anon_sym_class] = ACTIONS(1237),
        [anon_sym_struct] = ACTIONS(1237),
        [anon_sym_LBRACK] = ACTIONS(1234),
        [anon_sym_enum] = ACTIONS(1237),
        [anon_sym_new] = ACTIONS(1237),
        [anon_sym_public] = ACTIONS(1237),
        [anon_sym_protected] = ACTIONS(1237),
        [anon_sym_internal] = ACTIONS(1237),
        [anon_sym_private] = ACTIONS(1237),
        [anon_sym_sbyte] = ACTIONS(1237),
        [anon_sym_byte] = ACTIONS(1237),
        [anon_sym_short] = ACTIONS(1237),
        [anon_sym_ushort] = ACTIONS(1237),
        [anon_sym_int] = ACTIONS(1237),
        [anon_sym_uint] = ACTIONS(1237),
        [anon_sym_long] = ACTIONS(1237),
        [anon_sym_ulong] = ACTIONS(1237),
        [anon_sym_char] = ACTIONS(1237),
        [anon_sym_unsafe] = ACTIONS(1237),
        [anon_sym_abstract] = ACTIONS(1237),
        [anon_sym_sealed] = ACTIONS(1237),
        [anon_sym_static] = ACTIONS(1237),
        [anon_sym_readonly] = ACTIONS(1237),
        [anon_sym_volatile] = ACTIONS(1237),
        [anon_sym_bool] = ACTIONS(1237),
        [anon_sym_decimal] = ACTIONS(1237),
        [anon_sym_double] = ACTIONS(1237),
        [anon_sym_float] = ACTIONS(1237),
        [anon_sym_object] = ACTIONS(1237),
        [anon_sym_string] = ACTIONS(1237),
        [sym_identifier_name] = ACTIONS(1240),
        [sym_comment] = ACTIONS(91),
    },
    [303] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1212),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [304] = {
        [sym_identifier_name] = ACTIONS(1243),
        [sym_comment] = ACTIONS(91),
    },
    [305] = {
        [sym_type_parameter_list] = STATE(307),
        [anon_sym_LBRACE] = ACTIONS(1245),
        [anon_sym_LT] = ACTIONS(231),
        [sym_comment] = ACTIONS(91),
    },
    [306] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(313),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1247),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [307] = {
        [anon_sym_LBRACE] = ACTIONS(1249),
        [sym_comment] = ACTIONS(91),
    },
    [308] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(310),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1251),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(1253),
        [anon_sym_namespace] = ACTIONS(1256),
        [anon_sym_RBRACE] = ACTIONS(1253),
        [anon_sym_class] = ACTIONS(1256),
        [anon_sym_struct] = ACTIONS(1256),
        [anon_sym_LBRACK] = ACTIONS(1253),
        [anon_sym_enum] = ACTIONS(1256),
        [anon_sym_new] = ACTIONS(1256),
        [anon_sym_public] = ACTIONS(1256),
        [anon_sym_protected] = ACTIONS(1256),
        [anon_sym_internal] = ACTIONS(1256),
        [anon_sym_private] = ACTIONS(1256),
        [anon_sym_sbyte] = ACTIONS(1256),
        [anon_sym_byte] = ACTIONS(1256),
        [anon_sym_short] = ACTIONS(1256),
        [anon_sym_ushort] = ACTIONS(1256),
        [anon_sym_int] = ACTIONS(1256),
        [anon_sym_uint] = ACTIONS(1256),
        [anon_sym_long] = ACTIONS(1256),
        [anon_sym_ulong] = ACTIONS(1256),
        [anon_sym_char] = ACTIONS(1256),
        [anon_sym_unsafe] = ACTIONS(1256),
        [anon_sym_abstract] = ACTIONS(1256),
        [anon_sym_sealed] = ACTIONS(1256),
        [anon_sym_static] = ACTIONS(1256),
        [anon_sym_readonly] = ACTIONS(1256),
        [anon_sym_volatile] = ACTIONS(1256),
        [anon_sym_bool] = ACTIONS(1256),
        [anon_sym_decimal] = ACTIONS(1256),
        [anon_sym_double] = ACTIONS(1256),
        [anon_sym_float] = ACTIONS(1256),
        [anon_sym_object] = ACTIONS(1256),
        [anon_sym_string] = ACTIONS(1256),
        [sym_identifier_name] = ACTIONS(1259),
        [sym_comment] = ACTIONS(91),
    },
    [310] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1262),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [311] = {
        [ts_builtin_sym_end] = ACTIONS(1264),
        [anon_sym_namespace] = ACTIONS(1267),
        [anon_sym_RBRACE] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(1267),
        [anon_sym_struct] = ACTIONS(1267),
        [anon_sym_LBRACK] = ACTIONS(1264),
        [anon_sym_enum] = ACTIONS(1267),
        [anon_sym_new] = ACTIONS(1267),
        [anon_sym_public] = ACTIONS(1267),
        [anon_sym_protected] = ACTIONS(1267),
        [anon_sym_internal] = ACTIONS(1267),
        [anon_sym_private] = ACTIONS(1267),
        [anon_sym_sbyte] = ACTIONS(1267),
        [anon_sym_byte] = ACTIONS(1267),
        [anon_sym_short] = ACTIONS(1267),
        [anon_sym_ushort] = ACTIONS(1267),
        [anon_sym_int] = ACTIONS(1267),
        [anon_sym_uint] = ACTIONS(1267),
        [anon_sym_long] = ACTIONS(1267),
        [anon_sym_ulong] = ACTIONS(1267),
        [anon_sym_char] = ACTIONS(1267),
        [anon_sym_unsafe] = ACTIONS(1267),
        [anon_sym_abstract] = ACTIONS(1267),
        [anon_sym_sealed] = ACTIONS(1267),
        [anon_sym_static] = ACTIONS(1267),
        [anon_sym_readonly] = ACTIONS(1267),
        [anon_sym_volatile] = ACTIONS(1267),
        [anon_sym_bool] = ACTIONS(1267),
        [anon_sym_decimal] = ACTIONS(1267),
        [anon_sym_double] = ACTIONS(1267),
        [anon_sym_float] = ACTIONS(1267),
        [anon_sym_object] = ACTIONS(1267),
        [anon_sym_string] = ACTIONS(1267),
        [sym_identifier_name] = ACTIONS(1270),
        [sym_comment] = ACTIONS(91),
    },
    [312] = {
        [ts_builtin_sym_end] = ACTIONS(1273),
        [anon_sym_namespace] = ACTIONS(1276),
        [anon_sym_RBRACE] = ACTIONS(1273),
        [anon_sym_class] = ACTIONS(1276),
        [anon_sym_struct] = ACTIONS(1276),
        [anon_sym_LBRACK] = ACTIONS(1273),
        [anon_sym_enum] = ACTIONS(1276),
        [anon_sym_new] = ACTIONS(1276),
        [anon_sym_public] = ACTIONS(1276),
        [anon_sym_protected] = ACTIONS(1276),
        [anon_sym_internal] = ACTIONS(1276),
        [anon_sym_private] = ACTIONS(1276),
        [anon_sym_sbyte] = ACTIONS(1276),
        [anon_sym_byte] = ACTIONS(1276),
        [anon_sym_short] = ACTIONS(1276),
        [anon_sym_ushort] = ACTIONS(1276),
        [anon_sym_int] = ACTIONS(1276),
        [anon_sym_uint] = ACTIONS(1276),
        [anon_sym_long] = ACTIONS(1276),
        [anon_sym_ulong] = ACTIONS(1276),
        [anon_sym_char] = ACTIONS(1276),
        [anon_sym_unsafe] = ACTIONS(1276),
        [anon_sym_abstract] = ACTIONS(1276),
        [anon_sym_sealed] = ACTIONS(1276),
        [anon_sym_static] = ACTIONS(1276),
        [anon_sym_readonly] = ACTIONS(1276),
        [anon_sym_volatile] = ACTIONS(1276),
        [anon_sym_bool] = ACTIONS(1276),
        [anon_sym_decimal] = ACTIONS(1276),
        [anon_sym_double] = ACTIONS(1276),
        [anon_sym_float] = ACTIONS(1276),
        [anon_sym_object] = ACTIONS(1276),
        [anon_sym_string] = ACTIONS(1276),
        [sym_identifier_name] = ACTIONS(1279),
        [sym_comment] = ACTIONS(91),
    },
    [313] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1251),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [314] = {
        [anon_sym_RBRACE] = ACTIONS(1282),
        [anon_sym_class] = ACTIONS(1286),
        [anon_sym_struct] = ACTIONS(1286),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [anon_sym_enum] = ACTIONS(1286),
        [anon_sym_new] = ACTIONS(1286),
        [anon_sym_public] = ACTIONS(1286),
        [anon_sym_protected] = ACTIONS(1286),
        [anon_sym_internal] = ACTIONS(1286),
        [anon_sym_private] = ACTIONS(1286),
        [anon_sym_sbyte] = ACTIONS(1286),
        [anon_sym_byte] = ACTIONS(1286),
        [anon_sym_short] = ACTIONS(1286),
        [anon_sym_ushort] = ACTIONS(1286),
        [anon_sym_int] = ACTIONS(1286),
        [anon_sym_uint] = ACTIONS(1286),
        [anon_sym_long] = ACTIONS(1286),
        [anon_sym_ulong] = ACTIONS(1286),
        [anon_sym_char] = ACTIONS(1286),
        [anon_sym_unsafe] = ACTIONS(1286),
        [anon_sym_abstract] = ACTIONS(1286),
        [anon_sym_sealed] = ACTIONS(1286),
        [anon_sym_static] = ACTIONS(1286),
        [anon_sym_readonly] = ACTIONS(1286),
        [anon_sym_volatile] = ACTIONS(1286),
        [anon_sym_bool] = ACTIONS(1286),
        [anon_sym_decimal] = ACTIONS(1286),
        [anon_sym_double] = ACTIONS(1286),
        [anon_sym_float] = ACTIONS(1286),
        [anon_sym_object] = ACTIONS(1286),
        [anon_sym_string] = ACTIONS(1286),
        [sym_identifier_name] = ACTIONS(1290),
        [sym_comment] = ACTIONS(91),
    },
    [315] = {
        [sym_identifier_name] = ACTIONS(1294),
        [sym_comment] = ACTIONS(91),
    },
    [316] = {
        [sym__enum_base] = STATE(317),
        [sym__enum_body] = STATE(318),
        [anon_sym_LBRACE] = ACTIONS(501),
        [anon_sym_COLON] = ACTIONS(503),
        [sym_comment] = ACTIONS(91),
    },
    [317] = {
        [sym__enum_body] = STATE(320),
        [anon_sym_LBRACE] = ACTIONS(501),
        [sym_comment] = ACTIONS(91),
    },
    [318] = {
        [ts_builtin_sym_end] = ACTIONS(1296),
        [anon_sym_SEMI] = ACTIONS(1299),
        [anon_sym_namespace] = ACTIONS(1301),
        [anon_sym_RBRACE] = ACTIONS(1296),
        [anon_sym_class] = ACTIONS(1301),
        [anon_sym_struct] = ACTIONS(1301),
        [anon_sym_LBRACK] = ACTIONS(1296),
        [anon_sym_enum] = ACTIONS(1301),
        [anon_sym_new] = ACTIONS(1301),
        [anon_sym_public] = ACTIONS(1301),
        [anon_sym_protected] = ACTIONS(1301),
        [anon_sym_internal] = ACTIONS(1301),
        [anon_sym_private] = ACTIONS(1301),
        [anon_sym_sbyte] = ACTIONS(1301),
        [anon_sym_byte] = ACTIONS(1301),
        [anon_sym_short] = ACTIONS(1301),
        [anon_sym_ushort] = ACTIONS(1301),
        [anon_sym_int] = ACTIONS(1301),
        [anon_sym_uint] = ACTIONS(1301),
        [anon_sym_long] = ACTIONS(1301),
        [anon_sym_ulong] = ACTIONS(1301),
        [anon_sym_char] = ACTIONS(1301),
        [anon_sym_unsafe] = ACTIONS(1301),
        [anon_sym_abstract] = ACTIONS(1301),
        [anon_sym_sealed] = ACTIONS(1301),
        [anon_sym_static] = ACTIONS(1301),
        [anon_sym_readonly] = ACTIONS(1301),
        [anon_sym_volatile] = ACTIONS(1301),
        [anon_sym_bool] = ACTIONS(1301),
        [anon_sym_decimal] = ACTIONS(1301),
        [anon_sym_double] = ACTIONS(1301),
        [anon_sym_float] = ACTIONS(1301),
        [anon_sym_object] = ACTIONS(1301),
        [anon_sym_string] = ACTIONS(1301),
        [sym_identifier_name] = ACTIONS(1304),
        [sym_comment] = ACTIONS(91),
    },
    [319] = {
        [ts_builtin_sym_end] = ACTIONS(1307),
        [anon_sym_namespace] = ACTIONS(1310),
        [anon_sym_RBRACE] = ACTIONS(1307),
        [anon_sym_class] = ACTIONS(1310),
        [anon_sym_struct] = ACTIONS(1310),
        [anon_sym_LBRACK] = ACTIONS(1307),
        [anon_sym_enum] = ACTIONS(1310),
        [anon_sym_new] = ACTIONS(1310),
        [anon_sym_public] = ACTIONS(1310),
        [anon_sym_protected] = ACTIONS(1310),
        [anon_sym_internal] = ACTIONS(1310),
        [anon_sym_private] = ACTIONS(1310),
        [anon_sym_sbyte] = ACTIONS(1310),
        [anon_sym_byte] = ACTIONS(1310),
        [anon_sym_short] = ACTIONS(1310),
        [anon_sym_ushort] = ACTIONS(1310),
        [anon_sym_int] = ACTIONS(1310),
        [anon_sym_uint] = ACTIONS(1310),
        [anon_sym_long] = ACTIONS(1310),
        [anon_sym_ulong] = ACTIONS(1310),
        [anon_sym_char] = ACTIONS(1310),
        [anon_sym_unsafe] = ACTIONS(1310),
        [anon_sym_abstract] = ACTIONS(1310),
        [anon_sym_sealed] = ACTIONS(1310),
        [anon_sym_static] = ACTIONS(1310),
        [anon_sym_readonly] = ACTIONS(1310),
        [anon_sym_volatile] = ACTIONS(1310),
        [anon_sym_bool] = ACTIONS(1310),
        [anon_sym_decimal] = ACTIONS(1310),
        [anon_sym_double] = ACTIONS(1310),
        [anon_sym_float] = ACTIONS(1310),
        [anon_sym_object] = ACTIONS(1310),
        [anon_sym_string] = ACTIONS(1310),
        [sym_identifier_name] = ACTIONS(1313),
        [sym_comment] = ACTIONS(91),
    },
    [320] = {
        [ts_builtin_sym_end] = ACTIONS(1307),
        [anon_sym_SEMI] = ACTIONS(1316),
        [anon_sym_namespace] = ACTIONS(1310),
        [anon_sym_RBRACE] = ACTIONS(1307),
        [anon_sym_class] = ACTIONS(1310),
        [anon_sym_struct] = ACTIONS(1310),
        [anon_sym_LBRACK] = ACTIONS(1307),
        [anon_sym_enum] = ACTIONS(1310),
        [anon_sym_new] = ACTIONS(1310),
        [anon_sym_public] = ACTIONS(1310),
        [anon_sym_protected] = ACTIONS(1310),
        [anon_sym_internal] = ACTIONS(1310),
        [anon_sym_private] = ACTIONS(1310),
        [anon_sym_sbyte] = ACTIONS(1310),
        [anon_sym_byte] = ACTIONS(1310),
        [anon_sym_short] = ACTIONS(1310),
        [anon_sym_ushort] = ACTIONS(1310),
        [anon_sym_int] = ACTIONS(1310),
        [anon_sym_uint] = ACTIONS(1310),
        [anon_sym_long] = ACTIONS(1310),
        [anon_sym_ulong] = ACTIONS(1310),
        [anon_sym_char] = ACTIONS(1310),
        [anon_sym_unsafe] = ACTIONS(1310),
        [anon_sym_abstract] = ACTIONS(1310),
        [anon_sym_sealed] = ACTIONS(1310),
        [anon_sym_static] = ACTIONS(1310),
        [anon_sym_readonly] = ACTIONS(1310),
        [anon_sym_volatile] = ACTIONS(1310),
        [anon_sym_bool] = ACTIONS(1310),
        [anon_sym_decimal] = ACTIONS(1310),
        [anon_sym_double] = ACTIONS(1310),
        [anon_sym_float] = ACTIONS(1310),
        [anon_sym_object] = ACTIONS(1310),
        [anon_sym_string] = ACTIONS(1310),
        [sym_identifier_name] = ACTIONS(1313),
        [sym_comment] = ACTIONS(91),
    },
    [321] = {
        [ts_builtin_sym_end] = ACTIONS(1318),
        [anon_sym_namespace] = ACTIONS(1321),
        [anon_sym_RBRACE] = ACTIONS(1318),
        [anon_sym_class] = ACTIONS(1321),
        [anon_sym_struct] = ACTIONS(1321),
        [anon_sym_LBRACK] = ACTIONS(1318),
        [anon_sym_enum] = ACTIONS(1321),
        [anon_sym_new] = ACTIONS(1321),
        [anon_sym_public] = ACTIONS(1321),
        [anon_sym_protected] = ACTIONS(1321),
        [anon_sym_internal] = ACTIONS(1321),
        [anon_sym_private] = ACTIONS(1321),
        [anon_sym_sbyte] = ACTIONS(1321),
        [anon_sym_byte] = ACTIONS(1321),
        [anon_sym_short] = ACTIONS(1321),
        [anon_sym_ushort] = ACTIONS(1321),
        [anon_sym_int] = ACTIONS(1321),
        [anon_sym_uint] = ACTIONS(1321),
        [anon_sym_long] = ACTIONS(1321),
        [anon_sym_ulong] = ACTIONS(1321),
        [anon_sym_char] = ACTIONS(1321),
        [anon_sym_unsafe] = ACTIONS(1321),
        [anon_sym_abstract] = ACTIONS(1321),
        [anon_sym_sealed] = ACTIONS(1321),
        [anon_sym_static] = ACTIONS(1321),
        [anon_sym_readonly] = ACTIONS(1321),
        [anon_sym_volatile] = ACTIONS(1321),
        [anon_sym_bool] = ACTIONS(1321),
        [anon_sym_decimal] = ACTIONS(1321),
        [anon_sym_double] = ACTIONS(1321),
        [anon_sym_float] = ACTIONS(1321),
        [anon_sym_object] = ACTIONS(1321),
        [anon_sym_string] = ACTIONS(1321),
        [sym_identifier_name] = ACTIONS(1324),
        [sym_comment] = ACTIONS(91),
    },
    [322] = {
        [ts_builtin_sym_end] = ACTIONS(1327),
        [anon_sym_namespace] = ACTIONS(1332),
        [anon_sym_RBRACE] = ACTIONS(1327),
        [anon_sym_class] = ACTIONS(1332),
        [anon_sym_struct] = ACTIONS(1332),
        [anon_sym_LBRACK] = ACTIONS(1327),
        [anon_sym_enum] = ACTIONS(1332),
        [anon_sym_new] = ACTIONS(1332),
        [anon_sym_public] = ACTIONS(1332),
        [anon_sym_protected] = ACTIONS(1332),
        [anon_sym_internal] = ACTIONS(1332),
        [anon_sym_private] = ACTIONS(1332),
        [anon_sym_sbyte] = ACTIONS(1332),
        [anon_sym_byte] = ACTIONS(1332),
        [anon_sym_short] = ACTIONS(1332),
        [anon_sym_ushort] = ACTIONS(1332),
        [anon_sym_int] = ACTIONS(1332),
        [anon_sym_uint] = ACTIONS(1332),
        [anon_sym_long] = ACTIONS(1332),
        [anon_sym_ulong] = ACTIONS(1332),
        [anon_sym_char] = ACTIONS(1332),
        [anon_sym_unsafe] = ACTIONS(1332),
        [anon_sym_abstract] = ACTIONS(1332),
        [anon_sym_sealed] = ACTIONS(1332),
        [anon_sym_static] = ACTIONS(1332),
        [anon_sym_readonly] = ACTIONS(1332),
        [anon_sym_volatile] = ACTIONS(1332),
        [anon_sym_bool] = ACTIONS(1332),
        [anon_sym_decimal] = ACTIONS(1332),
        [anon_sym_double] = ACTIONS(1332),
        [anon_sym_float] = ACTIONS(1332),
        [anon_sym_object] = ACTIONS(1332),
        [anon_sym_string] = ACTIONS(1332),
        [sym_identifier_name] = ACTIONS(1337),
        [sym_comment] = ACTIONS(91),
    },
    [323] = {
        [ts_builtin_sym_end] = ACTIONS(1342),
        [anon_sym_SEMI] = ACTIONS(1346),
        [anon_sym_namespace] = ACTIONS(1348),
        [anon_sym_RBRACE] = ACTIONS(1342),
        [anon_sym_class] = ACTIONS(1348),
        [anon_sym_struct] = ACTIONS(1348),
        [anon_sym_LBRACK] = ACTIONS(1342),
        [anon_sym_enum] = ACTIONS(1348),
        [anon_sym_new] = ACTIONS(1348),
        [anon_sym_public] = ACTIONS(1348),
        [anon_sym_protected] = ACTIONS(1348),
        [anon_sym_internal] = ACTIONS(1348),
        [anon_sym_private] = ACTIONS(1348),
        [anon_sym_sbyte] = ACTIONS(1348),
        [anon_sym_byte] = ACTIONS(1348),
        [anon_sym_short] = ACTIONS(1348),
        [anon_sym_ushort] = ACTIONS(1348),
        [anon_sym_int] = ACTIONS(1348),
        [anon_sym_uint] = ACTIONS(1348),
        [anon_sym_long] = ACTIONS(1348),
        [anon_sym_ulong] = ACTIONS(1348),
        [anon_sym_char] = ACTIONS(1348),
        [anon_sym_unsafe] = ACTIONS(1348),
        [anon_sym_abstract] = ACTIONS(1348),
        [anon_sym_sealed] = ACTIONS(1348),
        [anon_sym_static] = ACTIONS(1348),
        [anon_sym_readonly] = ACTIONS(1348),
        [anon_sym_volatile] = ACTIONS(1348),
        [anon_sym_bool] = ACTIONS(1348),
        [anon_sym_decimal] = ACTIONS(1348),
        [anon_sym_double] = ACTIONS(1348),
        [anon_sym_float] = ACTIONS(1348),
        [anon_sym_object] = ACTIONS(1348),
        [anon_sym_string] = ACTIONS(1348),
        [sym_identifier_name] = ACTIONS(1352),
        [sym_comment] = ACTIONS(91),
    },
    [324] = {
        [ts_builtin_sym_end] = ACTIONS(1356),
        [anon_sym_namespace] = ACTIONS(1360),
        [anon_sym_RBRACE] = ACTIONS(1356),
        [anon_sym_class] = ACTIONS(1360),
        [anon_sym_struct] = ACTIONS(1360),
        [anon_sym_LBRACK] = ACTIONS(1356),
        [anon_sym_enum] = ACTIONS(1360),
        [anon_sym_new] = ACTIONS(1360),
        [anon_sym_public] = ACTIONS(1360),
        [anon_sym_protected] = ACTIONS(1360),
        [anon_sym_internal] = ACTIONS(1360),
        [anon_sym_private] = ACTIONS(1360),
        [anon_sym_sbyte] = ACTIONS(1360),
        [anon_sym_byte] = ACTIONS(1360),
        [anon_sym_short] = ACTIONS(1360),
        [anon_sym_ushort] = ACTIONS(1360),
        [anon_sym_int] = ACTIONS(1360),
        [anon_sym_uint] = ACTIONS(1360),
        [anon_sym_long] = ACTIONS(1360),
        [anon_sym_ulong] = ACTIONS(1360),
        [anon_sym_char] = ACTIONS(1360),
        [anon_sym_unsafe] = ACTIONS(1360),
        [anon_sym_abstract] = ACTIONS(1360),
        [anon_sym_sealed] = ACTIONS(1360),
        [anon_sym_static] = ACTIONS(1360),
        [anon_sym_readonly] = ACTIONS(1360),
        [anon_sym_volatile] = ACTIONS(1360),
        [anon_sym_bool] = ACTIONS(1360),
        [anon_sym_decimal] = ACTIONS(1360),
        [anon_sym_double] = ACTIONS(1360),
        [anon_sym_float] = ACTIONS(1360),
        [anon_sym_object] = ACTIONS(1360),
        [anon_sym_string] = ACTIONS(1360),
        [sym_identifier_name] = ACTIONS(1364),
        [sym_comment] = ACTIONS(91),
    },
    [325] = {
        [sym_equals_value_clause] = STATE(152),
        [sym_type_parameter_list] = STATE(177),
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_COMMA] = ACTIONS(563),
        [anon_sym_EQ] = ACTIONS(363),
        [anon_sym_LT] = ACTIONS(231),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(91),
    },
    [326] = {
        [ts_builtin_sym_end] = ACTIONS(1368),
        [anon_sym_extern] = ACTIONS(735),
        [anon_sym_using] = ACTIONS(1368),
        [anon_sym_namespace] = ACTIONS(1368),
        [anon_sym_class] = ACTIONS(1368),
        [anon_sym_struct] = ACTIONS(1368),
        [anon_sym_LBRACK] = ACTIONS(1368),
        [anon_sym_enum] = ACTIONS(1368),
        [anon_sym_new] = ACTIONS(1368),
        [anon_sym_public] = ACTIONS(1368),
        [anon_sym_protected] = ACTIONS(1368),
        [anon_sym_internal] = ACTIONS(1368),
        [anon_sym_private] = ACTIONS(1368),
        [anon_sym_unsafe] = ACTIONS(1368),
        [anon_sym_abstract] = ACTIONS(1368),
        [anon_sym_sealed] = ACTIONS(1368),
        [anon_sym_static] = ACTIONS(1368),
        [sym_comment] = ACTIONS(91),
    },
    [327] = {
        [sym__type_declaration] = STATE(332),
        [sym_namespace_declaration] = STATE(216),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(259),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_member_declaration] = STATE(143),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_namespace_declaration_repeat1] = STATE(217),
        [aux_sym_class_declaration_repeat1] = STATE(333),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_namespace] = ACTIONS(805),
        [anon_sym_RBRACE] = ACTIONS(1372),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(809),
        [sym_comment] = ACTIONS(91),
    },
    [328] = {
        [ts_builtin_sym_end] = ACTIONS(1374),
        [anon_sym_SEMI] = ACTIONS(1378),
        [anon_sym_namespace] = ACTIONS(1380),
        [anon_sym_RBRACE] = ACTIONS(1374),
        [anon_sym_class] = ACTIONS(1380),
        [anon_sym_struct] = ACTIONS(1380),
        [anon_sym_LBRACK] = ACTIONS(1374),
        [anon_sym_enum] = ACTIONS(1380),
        [anon_sym_new] = ACTIONS(1380),
        [anon_sym_public] = ACTIONS(1380),
        [anon_sym_protected] = ACTIONS(1380),
        [anon_sym_internal] = ACTIONS(1380),
        [anon_sym_private] = ACTIONS(1380),
        [anon_sym_sbyte] = ACTIONS(1380),
        [anon_sym_byte] = ACTIONS(1380),
        [anon_sym_short] = ACTIONS(1380),
        [anon_sym_ushort] = ACTIONS(1380),
        [anon_sym_int] = ACTIONS(1380),
        [anon_sym_uint] = ACTIONS(1380),
        [anon_sym_long] = ACTIONS(1380),
        [anon_sym_ulong] = ACTIONS(1380),
        [anon_sym_char] = ACTIONS(1380),
        [anon_sym_unsafe] = ACTIONS(1380),
        [anon_sym_abstract] = ACTIONS(1380),
        [anon_sym_sealed] = ACTIONS(1380),
        [anon_sym_static] = ACTIONS(1380),
        [anon_sym_readonly] = ACTIONS(1380),
        [anon_sym_volatile] = ACTIONS(1380),
        [anon_sym_bool] = ACTIONS(1380),
        [anon_sym_decimal] = ACTIONS(1380),
        [anon_sym_double] = ACTIONS(1380),
        [anon_sym_float] = ACTIONS(1380),
        [anon_sym_object] = ACTIONS(1380),
        [anon_sym_string] = ACTIONS(1380),
        [sym_identifier_name] = ACTIONS(1384),
        [sym_comment] = ACTIONS(91),
    },
    [329] = {
        [ts_builtin_sym_end] = ACTIONS(1342),
        [anon_sym_namespace] = ACTIONS(1348),
        [anon_sym_RBRACE] = ACTIONS(1342),
        [anon_sym_class] = ACTIONS(1348),
        [anon_sym_struct] = ACTIONS(1348),
        [anon_sym_LBRACK] = ACTIONS(1342),
        [anon_sym_enum] = ACTIONS(1348),
        [anon_sym_new] = ACTIONS(1348),
        [anon_sym_public] = ACTIONS(1348),
        [anon_sym_protected] = ACTIONS(1348),
        [anon_sym_internal] = ACTIONS(1348),
        [anon_sym_private] = ACTIONS(1348),
        [anon_sym_sbyte] = ACTIONS(1348),
        [anon_sym_byte] = ACTIONS(1348),
        [anon_sym_short] = ACTIONS(1348),
        [anon_sym_ushort] = ACTIONS(1348),
        [anon_sym_int] = ACTIONS(1348),
        [anon_sym_uint] = ACTIONS(1348),
        [anon_sym_long] = ACTIONS(1348),
        [anon_sym_ulong] = ACTIONS(1348),
        [anon_sym_char] = ACTIONS(1348),
        [anon_sym_unsafe] = ACTIONS(1348),
        [anon_sym_abstract] = ACTIONS(1348),
        [anon_sym_sealed] = ACTIONS(1348),
        [anon_sym_static] = ACTIONS(1348),
        [anon_sym_readonly] = ACTIONS(1348),
        [anon_sym_volatile] = ACTIONS(1348),
        [anon_sym_bool] = ACTIONS(1348),
        [anon_sym_decimal] = ACTIONS(1348),
        [anon_sym_double] = ACTIONS(1348),
        [anon_sym_float] = ACTIONS(1348),
        [anon_sym_object] = ACTIONS(1348),
        [anon_sym_string] = ACTIONS(1348),
        [sym_identifier_name] = ACTIONS(1352),
        [sym_comment] = ACTIONS(91),
    },
    [330] = {
        [ts_builtin_sym_end] = ACTIONS(1388),
        [anon_sym_namespace] = ACTIONS(1396),
        [anon_sym_RBRACE] = ACTIONS(1388),
        [anon_sym_class] = ACTIONS(1396),
        [anon_sym_struct] = ACTIONS(1396),
        [anon_sym_LBRACK] = ACTIONS(1388),
        [anon_sym_enum] = ACTIONS(1396),
        [anon_sym_new] = ACTIONS(1396),
        [anon_sym_public] = ACTIONS(1396),
        [anon_sym_protected] = ACTIONS(1396),
        [anon_sym_internal] = ACTIONS(1396),
        [anon_sym_private] = ACTIONS(1396),
        [anon_sym_sbyte] = ACTIONS(1404),
        [anon_sym_byte] = ACTIONS(1404),
        [anon_sym_short] = ACTIONS(1404),
        [anon_sym_ushort] = ACTIONS(1404),
        [anon_sym_int] = ACTIONS(1404),
        [anon_sym_uint] = ACTIONS(1404),
        [anon_sym_long] = ACTIONS(1404),
        [anon_sym_ulong] = ACTIONS(1404),
        [anon_sym_char] = ACTIONS(1404),
        [anon_sym_unsafe] = ACTIONS(1396),
        [anon_sym_abstract] = ACTIONS(1396),
        [anon_sym_sealed] = ACTIONS(1396),
        [anon_sym_static] = ACTIONS(1396),
        [anon_sym_readonly] = ACTIONS(1404),
        [anon_sym_volatile] = ACTIONS(1404),
        [anon_sym_bool] = ACTIONS(1404),
        [anon_sym_decimal] = ACTIONS(1404),
        [anon_sym_double] = ACTIONS(1404),
        [anon_sym_float] = ACTIONS(1404),
        [anon_sym_object] = ACTIONS(1404),
        [anon_sym_string] = ACTIONS(1404),
        [sym_identifier_name] = ACTIONS(1411),
        [sym_comment] = ACTIONS(91),
    },
    [331] = {
        [sym_equals_value_clause] = STATE(153),
        [sym_type_parameter_list] = STATE(177),
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_EQ] = ACTIONS(363),
        [anon_sym_LT] = ACTIONS(231),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(91),
    },
    [332] = {
        [anon_sym_namespace] = ACTIONS(1418),
        [anon_sym_RBRACE] = ACTIONS(1420),
        [anon_sym_class] = ACTIONS(1423),
        [anon_sym_struct] = ACTIONS(1423),
        [anon_sym_LBRACK] = ACTIONS(1420),
        [anon_sym_enum] = ACTIONS(1423),
        [anon_sym_new] = ACTIONS(1423),
        [anon_sym_public] = ACTIONS(1423),
        [anon_sym_protected] = ACTIONS(1423),
        [anon_sym_internal] = ACTIONS(1423),
        [anon_sym_private] = ACTIONS(1423),
        [anon_sym_sbyte] = ACTIONS(285),
        [anon_sym_byte] = ACTIONS(285),
        [anon_sym_short] = ACTIONS(285),
        [anon_sym_ushort] = ACTIONS(285),
        [anon_sym_int] = ACTIONS(285),
        [anon_sym_uint] = ACTIONS(285),
        [anon_sym_long] = ACTIONS(285),
        [anon_sym_ulong] = ACTIONS(285),
        [anon_sym_char] = ACTIONS(285),
        [anon_sym_unsafe] = ACTIONS(1423),
        [anon_sym_abstract] = ACTIONS(1423),
        [anon_sym_sealed] = ACTIONS(1423),
        [anon_sym_static] = ACTIONS(1423),
        [anon_sym_readonly] = ACTIONS(285),
        [anon_sym_volatile] = ACTIONS(285),
        [anon_sym_bool] = ACTIONS(285),
        [anon_sym_decimal] = ACTIONS(285),
        [anon_sym_double] = ACTIONS(285),
        [anon_sym_float] = ACTIONS(285),
        [anon_sym_object] = ACTIONS(285),
        [anon_sym_string] = ACTIONS(285),
        [sym_identifier_name] = ACTIONS(287),
        [sym_comment] = ACTIONS(91),
    },
    [333] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1147),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [334] = {
        [anon_sym_SEMI] = ACTIONS(1426),
        [anon_sym_RBRACE] = ACTIONS(1426),
        [anon_sym_COMMA] = ACTIONS(1426),
        [sym_comment] = ACTIONS(91),
    },
    [335] = {
        [anon_sym_SEMI] = ACTIONS(1430),
        [anon_sym_RBRACE] = ACTIONS(1430),
        [anon_sym_COMMA] = ACTIONS(1430),
        [sym__real_type_suffix] = ACTIONS(1433),
        [sym__exponent_part] = ACTIONS(1435),
        [sym_comment] = ACTIONS(91),
    },
    [336] = {
        [anon_sym_SEMI] = ACTIONS(1437),
        [anon_sym_RBRACE] = ACTIONS(1437),
        [anon_sym_COMMA] = ACTIONS(1437),
        [sym_comment] = ACTIONS(91),
    },
    [337] = {
        [anon_sym_SEMI] = ACTIONS(1437),
        [anon_sym_RBRACE] = ACTIONS(1437),
        [anon_sym_COMMA] = ACTIONS(1437),
        [sym__real_type_suffix] = ACTIONS(1440),
        [sym_comment] = ACTIONS(91),
    },
    [338] = {
        [anon_sym_SEMI] = ACTIONS(1442),
        [anon_sym_RBRACE] = ACTIONS(1442),
        [anon_sym_COMMA] = ACTIONS(1442),
        [sym_comment] = ACTIONS(91),
    },
    [339] = {
        [anon_sym_SEMI] = ACTIONS(913),
        [anon_sym_RBRACE] = ACTIONS(913),
        [anon_sym_COMMA] = ACTIONS(913),
        [sym_comment] = ACTIONS(91),
    },
    [340] = {
        [sym_attribute_argument_list] = STATE(40),
        [sym_equals_value_clause] = STATE(345),
        [sym_type_parameter_list] = STATE(177),
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_RBRACK] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(1445),
        [anon_sym_LPAREN] = ACTIONS(189),
        [anon_sym_EQ] = ACTIONS(363),
        [anon_sym_LT] = ACTIONS(231),
        [anon_sym_GT] = ACTIONS(279),
        [sym_comment] = ACTIONS(91),
    },
    [341] = {
        [anon_sym_RBRACE] = ACTIONS(1450),
        [anon_sym_COMMA] = ACTIONS(1450),
        [sym_comment] = ACTIONS(91),
    },
    [342] = {
        [anon_sym_RBRACK] = ACTIONS(1453),
        [anon_sym_COMMA] = ACTIONS(1453),
        [sym_comment] = ACTIONS(91),
    },
    [343] = {
        [anon_sym_SEMI] = ACTIONS(1456),
        [anon_sym_COMMA] = ACTIONS(1456),
        [sym_comment] = ACTIONS(91),
    },
    [344] = {
        [anon_sym_COMMA] = ACTIONS(1459),
        [anon_sym_GT] = ACTIONS(1459),
        [sym_comment] = ACTIONS(91),
    },
    [345] = {
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_COMMA] = ACTIONS(1462),
        [sym_comment] = ACTIONS(91),
    },
    [346] = {
        [sym__enum_base] = STATE(260),
        [sym__enum_body] = STATE(328),
        [anon_sym_LBRACE] = ACTIONS(501),
        [anon_sym_COLON] = ACTIONS(503),
        [sym_comment] = ACTIONS(91),
    },
    [347] = {
        [sym_type_parameter_list] = STATE(349),
        [anon_sym_LBRACE] = ACTIONS(1465),
        [anon_sym_LT] = ACTIONS(231),
        [sym_comment] = ACTIONS(91),
    },
    [348] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(355),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1467),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [349] = {
        [anon_sym_LBRACE] = ACTIONS(1469),
        [sym_comment] = ACTIONS(91),
    },
    [350] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(352),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1471),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [351] = {
        [ts_builtin_sym_end] = ACTIONS(1473),
        [anon_sym_namespace] = ACTIONS(1477),
        [anon_sym_RBRACE] = ACTIONS(1473),
        [anon_sym_class] = ACTIONS(1477),
        [anon_sym_struct] = ACTIONS(1477),
        [anon_sym_LBRACK] = ACTIONS(1473),
        [anon_sym_enum] = ACTIONS(1477),
        [anon_sym_new] = ACTIONS(1477),
        [anon_sym_public] = ACTIONS(1477),
        [anon_sym_protected] = ACTIONS(1477),
        [anon_sym_internal] = ACTIONS(1477),
        [anon_sym_private] = ACTIONS(1477),
        [anon_sym_sbyte] = ACTIONS(1477),
        [anon_sym_byte] = ACTIONS(1477),
        [anon_sym_short] = ACTIONS(1477),
        [anon_sym_ushort] = ACTIONS(1477),
        [anon_sym_int] = ACTIONS(1477),
        [anon_sym_uint] = ACTIONS(1477),
        [anon_sym_long] = ACTIONS(1477),
        [anon_sym_ulong] = ACTIONS(1477),
        [anon_sym_char] = ACTIONS(1477),
        [anon_sym_unsafe] = ACTIONS(1477),
        [anon_sym_abstract] = ACTIONS(1477),
        [anon_sym_sealed] = ACTIONS(1477),
        [anon_sym_static] = ACTIONS(1477),
        [anon_sym_readonly] = ACTIONS(1477),
        [anon_sym_volatile] = ACTIONS(1477),
        [anon_sym_bool] = ACTIONS(1477),
        [anon_sym_decimal] = ACTIONS(1477),
        [anon_sym_double] = ACTIONS(1477),
        [anon_sym_float] = ACTIONS(1477),
        [anon_sym_object] = ACTIONS(1477),
        [anon_sym_string] = ACTIONS(1477),
        [sym_identifier_name] = ACTIONS(1481),
        [sym_comment] = ACTIONS(91),
    },
    [352] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1485),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [353] = {
        [ts_builtin_sym_end] = ACTIONS(1487),
        [anon_sym_namespace] = ACTIONS(1491),
        [anon_sym_RBRACE] = ACTIONS(1487),
        [anon_sym_class] = ACTIONS(1491),
        [anon_sym_struct] = ACTIONS(1491),
        [anon_sym_LBRACK] = ACTIONS(1487),
        [anon_sym_enum] = ACTIONS(1491),
        [anon_sym_new] = ACTIONS(1491),
        [anon_sym_public] = ACTIONS(1491),
        [anon_sym_protected] = ACTIONS(1491),
        [anon_sym_internal] = ACTIONS(1491),
        [anon_sym_private] = ACTIONS(1491),
        [anon_sym_sbyte] = ACTIONS(1491),
        [anon_sym_byte] = ACTIONS(1491),
        [anon_sym_short] = ACTIONS(1491),
        [anon_sym_ushort] = ACTIONS(1491),
        [anon_sym_int] = ACTIONS(1491),
        [anon_sym_uint] = ACTIONS(1491),
        [anon_sym_long] = ACTIONS(1491),
        [anon_sym_ulong] = ACTIONS(1491),
        [anon_sym_char] = ACTIONS(1491),
        [anon_sym_unsafe] = ACTIONS(1491),
        [anon_sym_abstract] = ACTIONS(1491),
        [anon_sym_sealed] = ACTIONS(1491),
        [anon_sym_static] = ACTIONS(1491),
        [anon_sym_readonly] = ACTIONS(1491),
        [anon_sym_volatile] = ACTIONS(1491),
        [anon_sym_bool] = ACTIONS(1491),
        [anon_sym_decimal] = ACTIONS(1491),
        [anon_sym_double] = ACTIONS(1491),
        [anon_sym_float] = ACTIONS(1491),
        [anon_sym_object] = ACTIONS(1491),
        [anon_sym_string] = ACTIONS(1491),
        [sym_identifier_name] = ACTIONS(1495),
        [sym_comment] = ACTIONS(91),
    },
    [354] = {
        [ts_builtin_sym_end] = ACTIONS(1499),
        [anon_sym_namespace] = ACTIONS(1503),
        [anon_sym_RBRACE] = ACTIONS(1499),
        [anon_sym_class] = ACTIONS(1503),
        [anon_sym_struct] = ACTIONS(1503),
        [anon_sym_LBRACK] = ACTIONS(1499),
        [anon_sym_enum] = ACTIONS(1503),
        [anon_sym_new] = ACTIONS(1503),
        [anon_sym_public] = ACTIONS(1503),
        [anon_sym_protected] = ACTIONS(1503),
        [anon_sym_internal] = ACTIONS(1503),
        [anon_sym_private] = ACTIONS(1503),
        [anon_sym_sbyte] = ACTIONS(1503),
        [anon_sym_byte] = ACTIONS(1503),
        [anon_sym_short] = ACTIONS(1503),
        [anon_sym_ushort] = ACTIONS(1503),
        [anon_sym_int] = ACTIONS(1503),
        [anon_sym_uint] = ACTIONS(1503),
        [anon_sym_long] = ACTIONS(1503),
        [anon_sym_ulong] = ACTIONS(1503),
        [anon_sym_char] = ACTIONS(1503),
        [anon_sym_unsafe] = ACTIONS(1503),
        [anon_sym_abstract] = ACTIONS(1503),
        [anon_sym_sealed] = ACTIONS(1503),
        [anon_sym_static] = ACTIONS(1503),
        [anon_sym_readonly] = ACTIONS(1503),
        [anon_sym_volatile] = ACTIONS(1503),
        [anon_sym_bool] = ACTIONS(1503),
        [anon_sym_decimal] = ACTIONS(1503),
        [anon_sym_double] = ACTIONS(1503),
        [anon_sym_float] = ACTIONS(1503),
        [anon_sym_object] = ACTIONS(1503),
        [anon_sym_string] = ACTIONS(1503),
        [sym_identifier_name] = ACTIONS(1507),
        [sym_comment] = ACTIONS(91),
    },
    [355] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1471),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [356] = {
        [sym_type_parameter_list] = STATE(358),
        [anon_sym_LBRACE] = ACTIONS(1511),
        [anon_sym_LT] = ACTIONS(231),
        [sym_comment] = ACTIONS(91),
    },
    [357] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(364),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1513),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [358] = {
        [anon_sym_LBRACE] = ACTIONS(1515),
        [sym_comment] = ACTIONS(91),
    },
    [359] = {
        [sym__type_declaration] = STATE(61),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(61),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym_class_declaration_repeat1] = STATE(361),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1517),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [360] = {
        [ts_builtin_sym_end] = ACTIONS(1519),
        [anon_sym_namespace] = ACTIONS(1523),
        [anon_sym_RBRACE] = ACTIONS(1519),
        [anon_sym_class] = ACTIONS(1523),
        [anon_sym_struct] = ACTIONS(1523),
        [anon_sym_LBRACK] = ACTIONS(1519),
        [anon_sym_enum] = ACTIONS(1523),
        [anon_sym_new] = ACTIONS(1523),
        [anon_sym_public] = ACTIONS(1523),
        [anon_sym_protected] = ACTIONS(1523),
        [anon_sym_internal] = ACTIONS(1523),
        [anon_sym_private] = ACTIONS(1523),
        [anon_sym_sbyte] = ACTIONS(1523),
        [anon_sym_byte] = ACTIONS(1523),
        [anon_sym_short] = ACTIONS(1523),
        [anon_sym_ushort] = ACTIONS(1523),
        [anon_sym_int] = ACTIONS(1523),
        [anon_sym_uint] = ACTIONS(1523),
        [anon_sym_long] = ACTIONS(1523),
        [anon_sym_ulong] = ACTIONS(1523),
        [anon_sym_char] = ACTIONS(1523),
        [anon_sym_unsafe] = ACTIONS(1523),
        [anon_sym_abstract] = ACTIONS(1523),
        [anon_sym_sealed] = ACTIONS(1523),
        [anon_sym_static] = ACTIONS(1523),
        [anon_sym_readonly] = ACTIONS(1523),
        [anon_sym_volatile] = ACTIONS(1523),
        [anon_sym_bool] = ACTIONS(1523),
        [anon_sym_decimal] = ACTIONS(1523),
        [anon_sym_double] = ACTIONS(1523),
        [anon_sym_float] = ACTIONS(1523),
        [anon_sym_object] = ACTIONS(1523),
        [anon_sym_string] = ACTIONS(1523),
        [sym_identifier_name] = ACTIONS(1527),
        [sym_comment] = ACTIONS(91),
    },
    [361] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1531),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [362] = {
        [ts_builtin_sym_end] = ACTIONS(1533),
        [anon_sym_namespace] = ACTIONS(1537),
        [anon_sym_RBRACE] = ACTIONS(1533),
        [anon_sym_class] = ACTIONS(1537),
        [anon_sym_struct] = ACTIONS(1537),
        [anon_sym_LBRACK] = ACTIONS(1533),
        [anon_sym_enum] = ACTIONS(1537),
        [anon_sym_new] = ACTIONS(1537),
        [anon_sym_public] = ACTIONS(1537),
        [anon_sym_protected] = ACTIONS(1537),
        [anon_sym_internal] = ACTIONS(1537),
        [anon_sym_private] = ACTIONS(1537),
        [anon_sym_sbyte] = ACTIONS(1537),
        [anon_sym_byte] = ACTIONS(1537),
        [anon_sym_short] = ACTIONS(1537),
        [anon_sym_ushort] = ACTIONS(1537),
        [anon_sym_int] = ACTIONS(1537),
        [anon_sym_uint] = ACTIONS(1537),
        [anon_sym_long] = ACTIONS(1537),
        [anon_sym_ulong] = ACTIONS(1537),
        [anon_sym_char] = ACTIONS(1537),
        [anon_sym_unsafe] = ACTIONS(1537),
        [anon_sym_abstract] = ACTIONS(1537),
        [anon_sym_sealed] = ACTIONS(1537),
        [anon_sym_static] = ACTIONS(1537),
        [anon_sym_readonly] = ACTIONS(1537),
        [anon_sym_volatile] = ACTIONS(1537),
        [anon_sym_bool] = ACTIONS(1537),
        [anon_sym_decimal] = ACTIONS(1537),
        [anon_sym_double] = ACTIONS(1537),
        [anon_sym_float] = ACTIONS(1537),
        [anon_sym_object] = ACTIONS(1537),
        [anon_sym_string] = ACTIONS(1537),
        [sym_identifier_name] = ACTIONS(1541),
        [sym_comment] = ACTIONS(91),
    },
    [363] = {
        [ts_builtin_sym_end] = ACTIONS(1545),
        [anon_sym_namespace] = ACTIONS(1549),
        [anon_sym_RBRACE] = ACTIONS(1545),
        [anon_sym_class] = ACTIONS(1549),
        [anon_sym_struct] = ACTIONS(1549),
        [anon_sym_LBRACK] = ACTIONS(1545),
        [anon_sym_enum] = ACTIONS(1549),
        [anon_sym_new] = ACTIONS(1549),
        [anon_sym_public] = ACTIONS(1549),
        [anon_sym_protected] = ACTIONS(1549),
        [anon_sym_internal] = ACTIONS(1549),
        [anon_sym_private] = ACTIONS(1549),
        [anon_sym_sbyte] = ACTIONS(1549),
        [anon_sym_byte] = ACTIONS(1549),
        [anon_sym_short] = ACTIONS(1549),
        [anon_sym_ushort] = ACTIONS(1549),
        [anon_sym_int] = ACTIONS(1549),
        [anon_sym_uint] = ACTIONS(1549),
        [anon_sym_long] = ACTIONS(1549),
        [anon_sym_ulong] = ACTIONS(1549),
        [anon_sym_char] = ACTIONS(1549),
        [anon_sym_unsafe] = ACTIONS(1549),
        [anon_sym_abstract] = ACTIONS(1549),
        [anon_sym_sealed] = ACTIONS(1549),
        [anon_sym_static] = ACTIONS(1549),
        [anon_sym_readonly] = ACTIONS(1549),
        [anon_sym_volatile] = ACTIONS(1549),
        [anon_sym_bool] = ACTIONS(1549),
        [anon_sym_decimal] = ACTIONS(1549),
        [anon_sym_double] = ACTIONS(1549),
        [anon_sym_float] = ACTIONS(1549),
        [anon_sym_object] = ACTIONS(1549),
        [anon_sym_string] = ACTIONS(1549),
        [sym_identifier_name] = ACTIONS(1553),
        [sym_comment] = ACTIONS(91),
    },
    [364] = {
        [sym__type_declaration] = STATE(70),
        [sym_class_declaration] = STATE(16),
        [sym_struct_declaration] = STATE(16),
        [sym__attributes] = STATE(62),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(18),
        [sym__attribute_section] = STATE(19),
        [sym_field_declaration] = STATE(70),
        [sym_variable_declaration] = STATE(63),
        [sym__type] = STATE(64),
        [sym_generic_name] = STATE(65),
        [sym_class_modifiers] = STATE(20),
        [sym__class_modifiers] = STATE(21),
        [sym_struct_modifiers] = STATE(22),
        [sym__struct_modifiers] = STATE(23),
        [sym_field_modifiers] = STATE(66),
        [sym__field_modifiers] = STATE(67),
        [sym_predefined_type] = STATE(65),
        [aux_sym__attributes_repeat1] = STATE(27),
        [anon_sym_RBRACE] = ACTIONS(1517),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(237),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_readonly] = ACTIONS(251),
        [anon_sym_volatile] = ACTIONS(251),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [365] = {
        [ts_builtin_sym_end] = ACTIONS(1557),
        [anon_sym_namespace] = ACTIONS(1567),
        [anon_sym_RBRACE] = ACTIONS(1557),
        [anon_sym_class] = ACTIONS(1567),
        [anon_sym_struct] = ACTIONS(1567),
        [anon_sym_LBRACK] = ACTIONS(1557),
        [anon_sym_enum] = ACTIONS(1567),
        [anon_sym_new] = ACTIONS(1567),
        [anon_sym_public] = ACTIONS(1567),
        [anon_sym_protected] = ACTIONS(1567),
        [anon_sym_internal] = ACTIONS(1567),
        [anon_sym_private] = ACTIONS(1567),
        [anon_sym_sbyte] = ACTIONS(1577),
        [anon_sym_byte] = ACTIONS(1577),
        [anon_sym_short] = ACTIONS(1577),
        [anon_sym_ushort] = ACTIONS(1577),
        [anon_sym_int] = ACTIONS(1577),
        [anon_sym_uint] = ACTIONS(1577),
        [anon_sym_long] = ACTIONS(1577),
        [anon_sym_ulong] = ACTIONS(1577),
        [anon_sym_char] = ACTIONS(1577),
        [anon_sym_unsafe] = ACTIONS(1567),
        [anon_sym_abstract] = ACTIONS(1567),
        [anon_sym_sealed] = ACTIONS(1567),
        [anon_sym_static] = ACTIONS(1567),
        [anon_sym_readonly] = ACTIONS(1577),
        [anon_sym_volatile] = ACTIONS(1577),
        [anon_sym_bool] = ACTIONS(1577),
        [anon_sym_decimal] = ACTIONS(1577),
        [anon_sym_double] = ACTIONS(1577),
        [anon_sym_float] = ACTIONS(1577),
        [anon_sym_object] = ACTIONS(1577),
        [anon_sym_string] = ACTIONS(1577),
        [sym_identifier_name] = ACTIONS(1586),
        [sym_comment] = ACTIONS(91),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(230),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(233),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(234),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(235),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(236),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(237),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(7),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(238),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(204),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(239),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(240),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(241),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(55),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(242),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(39),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(41),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(243),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(94),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(244),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(245),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(107),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(108),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(246),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(97),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(118),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(98),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(247),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(248),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(249),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(250),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(101),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(57),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(11),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(251),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(59),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(56),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(51),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(252),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(220),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(209),
    [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(253),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
    [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(223),
    [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(210),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_declaration, 1),
    [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
    [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [425] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
    [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4),
    [515] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
    [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
    [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_base, 2),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 3),
    [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 4),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 4),
    [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 4),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 3),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
    [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
    [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
    [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
    [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 3),
    [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 4),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attribute_target_specifier, 2),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [719] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(226),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
    [737] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_extern_alias_directive, 4),
    [747] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [751] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [759] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [767] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [778] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [789] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [797] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(331),
    [811] = {.count = 14, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3), REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [826] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3), REDUCE(sym__enum_body, 4),
    [829] = {.count = 14, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 3), REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [844] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 3), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [857] = {.count = 12, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
    [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
    [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attributes, 4),
    [876] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 4),
    [879] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 4),
    [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
    [884] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__global_attribute_target_specifier, 2),
    [886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
    [888] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(340),
    [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
    [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
    [894] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
    [896] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [898] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
    [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
    [908] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [913] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [919] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [923] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
    [925] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [928] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [931] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [934] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(326),
    [938] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(327),
    [941] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_enum_member_declaration, 2),
    [944] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1), REDUCE(sym_enum_member_declaration, 2),
    [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
    [952] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(212),
    [956] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [959] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [962] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [965] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [970] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [975] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [982] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [989] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [992] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [995] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [1000] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [1003] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(325),
    [1005] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [1012] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1017] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1022] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2), REDUCE(aux_sym__enum_body_repeat1, 3), SHIFT(144),
    [1026] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2), REDUCE(aux_sym__enum_body_repeat1, 3), SHIFT(145),
    [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [1032] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1035] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1038] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [1043] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1), REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1047] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3), SHIFT(33),
    [1051] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [1056] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1060] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(87),
    [1064] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_enum_member_declaration, 3),
    [1067] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2), REDUCE(sym_enum_member_declaration, 3),
    [1071] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1074] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
    [1079] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
    [1084] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [1087] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1090] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [1095] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(180),
    [1099] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(181),
    [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [1105] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [1108] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
    [1114] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1123] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1132] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1141] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1144] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [1149] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1156] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1163] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [1172] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1179] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1186] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [1195] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1198] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1201] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
    [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [1214] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1217] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1220] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [1225] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1228] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1231] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1234] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1237] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1240] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
    [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [1253] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1256] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1259] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [1264] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1267] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1270] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1273] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1276] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1279] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1282] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1286] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1290] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
    [1296] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [1301] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1304] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1307] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1310] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1313] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [1318] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1321] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1324] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1327] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1332] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1337] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1342] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [1348] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1352] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1356] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1360] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1364] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1368] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [1372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [1374] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
    [1380] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1384] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1388] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1396] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1404] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1411] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
    [1420] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1423] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1426] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1430] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
    [1437] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [1442] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1445] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [1450] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2), REDUCE(aux_sym__enum_body_repeat1, 3),
    [1453] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1456] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1459] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [1462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2),
    [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
    [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
    [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [1473] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1477] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1481] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
    [1487] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1491] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1495] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1499] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1503] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1507] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
    [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [1517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
    [1519] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1523] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1527] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
    [1533] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1537] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1541] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1545] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1549] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1553] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1557] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1567] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1577] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1586] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
