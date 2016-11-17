#include "tree_sitter/parser.h"

#define STATE_COUNT 352
#define SYMBOL_COUNT 137
#define TOKEN_COUNT 79

enum {
    anon_sym_using = 1,
    anon_sym_SEMI = 2,
    anon_sym_namespace = 3,
    anon_sym_LBRACE = 4,
    anon_sym_RBRACE = 5,
    anon_sym_class = 6,
    anon_sym_struct = 7,
    anon_sym_LBRACK = 8,
    anon_sym_RBRACK = 9,
    anon_sym_assembly = 10,
    anon_sym_module = 11,
    anon_sym_COLON = 12,
    anon_sym_enum = 13,
    anon_sym_COMMA = 14,
    anon_sym_new = 15,
    anon_sym_public = 16,
    anon_sym_protected = 17,
    anon_sym_internal = 18,
    anon_sym_private = 19,
    anon_sym_sbyte = 20,
    anon_sym_byte = 21,
    anon_sym_short = 22,
    anon_sym_ushort = 23,
    anon_sym_int = 24,
    anon_sym_uint = 25,
    anon_sym_long = 26,
    anon_sym_ulong = 27,
    anon_sym_char = 28,
    anon_sym_LPAREN = 29,
    anon_sym_RPAREN = 30,
    anon_sym_EQ = 31,
    anon_sym_true = 32,
    anon_sym_false = 33,
    anon_sym_SQUOTE = 34,
    aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 35,
    sym__hexadecimal_escape_sequence = 36,
    aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 37,
    aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 38,
    anon_sym_BSLASH_SQUOTE = 39,
    anon_sym_BSLASH_DQUOTE = 40,
    anon_sym_BSLASH_BSLASH = 41,
    anon_sym_BSLASH0 = 42,
    anon_sym_BSLASHa = 43,
    anon_sym_BSLASHb = 44,
    anon_sym_BSLASHf = 45,
    anon_sym_BSLASHn = 46,
    anon_sym_BSLASHr = 47,
    anon_sym_BSLASHt = 48,
    anon_sym_BSLASHv = 49,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 50,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 51,
    sym__integer_type_suffix = 52,
    sym_null_literal = 53,
    anon_sym_DOT = 54,
    sym__real_type_suffix = 55,
    sym__exponent_part = 56,
    anon_sym_DQUOTE = 57,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 58,
    anon_sym_AT_DQUOTE = 59,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 60,
    anon_sym_unsafe = 61,
    anon_sym_abstract = 62,
    anon_sym_sealed = 63,
    anon_sym_static = 64,
    anon_sym_readonly = 65,
    anon_sym_volatile = 66,
    anon_sym_bool = 67,
    anon_sym_decimal = 68,
    anon_sym_double = 69,
    anon_sym_float = 70,
    anon_sym_object = 71,
    anon_sym_string = 72,
    anon_sym_LT = 73,
    anon_sym_GT = 74,
    anon_sym_COLON_COLON = 75,
    sym_global = 76,
    sym_identifier_name = 77,
    sym_comment = 78,
    sym_compilation_unit = 79,
    sym_using_directive = 80,
    sym_namespace_declaration = 81,
    sym_class_declaration = 82,
    sym_struct_declaration = 83,
    sym__global_attributes = 84,
    sym__global_attribute_target_specifier = 85,
    sym__attributes = 86,
    sym_enum_declaration = 87,
    sym__enum_base = 88,
    sym__enum_body = 89,
    sym_enum_member_declaration = 90,
    sym_enum_modifier = 91,
    sym__integral_type = 92,
    sym__attribute_section = 93,
    sym_attribute_list = 94,
    sym_attribute = 95,
    sym_attribute_argument_list = 96,
    sym_field_declaration = 97,
    sym_variable_declaration = 98,
    sym__type = 99,
    sym_generic_name = 100,
    sym_variable_declarator = 101,
    sym_equals_value_clause = 102,
    sym__literal = 103,
    sym_boolean_literal = 104,
    sym_character_literal = 105,
    sym__unicode_escape_sequence = 106,
    sym__simple_escape_sequence = 107,
    sym_integer_literal = 108,
    sym_real_literal = 109,
    sym_string_literal = 110,
    sym__regular_string_literal = 111,
    sym__regular_string_literal_character = 112,
    sym__verbatim_string_literal = 113,
    sym_class_modifiers = 114,
    sym__class_modifiers = 115,
    sym_struct_modifiers = 116,
    sym__struct_modifiers = 117,
    sym_field_modifiers = 118,
    sym__field_modifiers = 119,
    sym_predefined_type = 120,
    sym_type_parameter_list = 121,
    sym_type_parameter = 122,
    sym_qualified_name = 123,
    sym_alias_qualified_name = 124,
    sym_name_equals = 125,
    sym_static = 126,
    aux_sym_compilation_unit_repeat1 = 127,
    aux_sym_compilation_unit_repeat2 = 128,
    aux_sym_namespace_declaration_repeat1 = 129,
    aux_sym_class_declaration_repeat1 = 130,
    aux_sym__attributes_repeat1 = 131,
    aux_sym__enum_body_repeat1 = 132,
    aux_sym_attribute_list_repeat1 = 133,
    aux_sym_variable_declaration_repeat1 = 134,
    aux_sym__regular_string_literal_repeat1 = 135,
    aux_sym_type_parameter_list_repeat1 = 136,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_using] = "using",
    [anon_sym_SEMI] = ";",
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
    [sym_using_directive] = "using_directive",
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
    [anon_sym_using] = {
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
    [sym_using_directive] = {
        .visible = true,
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
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(96);
            if (lookahead == 'e')
                ADVANCE(108);
            if (lookahead == 'f')
                ADVANCE(112);
            if (lookahead == 'g')
                ADVANCE(121);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(135);
            if (lookahead == 'm')
                ADVANCE(139);
            if (lookahead == 'n')
                ADVANCE(145);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 't')
                ADVANCE(218);
            if (lookahead == 'u')
                ADVANCE(222);
            if (lookahead == 'v')
                ADVANCE(243);
            if (lookahead == '{')
                ADVANCE(251);
            if (lookahead == '}')
                ADVANCE(252);
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
                ('c' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 's')
                ADVANCE(74);
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
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier_name);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier_name);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier_name);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier_name);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier_name);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_assembly);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(82);
            if (lookahead == 'y')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier_name);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier_name);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_bool);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier_name);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier_name);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_byte);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(89);
            if (lookahead == 'l')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier_name);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier_name);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier_name);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_char);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier_name);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier_name);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_class);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(97);
            if (lookahead == 'o')
                ADVANCE(103);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier_name);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier_name);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier_name);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier_name);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier_name);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_decimal);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier_name);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier_name);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_double);
        case 108:
            if (('+' <= lookahead && lookahead <= '/') ||
                (':' <= lookahead && lookahead <= '@') ||
                ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(28);
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(29);
            if ((lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier_name);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_enum);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(113);
            if (lookahead == 'l')
                ADVANCE(117);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier_name);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier_name);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_false);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier_name);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_float);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier_name);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_global);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(130);
            ACCEPT_TOKEN(anon_sym_int);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier_name);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_internal);
        case 135:
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
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(31);
            ACCEPT_TOKEN(sym__integer_type_suffix);
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
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_long);
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(140);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 140:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier_name);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier_name);
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_module);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(146);
            if (lookahead == 'e')
                ADVANCE(154);
            if (lookahead == 'u')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier_name);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'p')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
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
            ACCEPT_TOKEN(anon_sym_namespace);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'w')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_new);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier_name);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_null_literal);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier_name);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'j')
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_object);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(166);
            if (lookahead == 'u')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(167);
            if (lookahead == 'o')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'v')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_private);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier_name);
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier_name);
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier_name);
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(178);
            ACCEPT_TOKEN(sym_identifier_name);
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_protected);
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(180);
            ACCEPT_TOKEN(sym_identifier_name);
        case 180:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(181);
            ACCEPT_TOKEN(sym_identifier_name);
        case 181:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(182);
            ACCEPT_TOKEN(sym_identifier_name);
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(183);
            ACCEPT_TOKEN(sym_identifier_name);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_public);
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(185);
            ACCEPT_TOKEN(sym_identifier_name);
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
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
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(188);
            ACCEPT_TOKEN(sym_identifier_name);
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
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
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(191);
            ACCEPT_TOKEN(sym_identifier_name);
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 192:
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
                ADVANCE(193);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'h')
                ADVANCE(202);
            if (lookahead == 't')
                ADVANCE(206);
            ACCEPT_TOKEN(sym_identifier_name);
        case 193:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(194);
            ACCEPT_TOKEN(sym_identifier_name);
        case 194:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(195);
            ACCEPT_TOKEN(sym_identifier_name);
        case 195:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(196);
            ACCEPT_TOKEN(sym_identifier_name);
        case 196:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(200);
            ACCEPT_TOKEN(sym_identifier_name);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier_name);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(203);
            ACCEPT_TOKEN(sym_identifier_name);
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(204);
            ACCEPT_TOKEN(sym_identifier_name);
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier_name);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_short);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(207);
            if (lookahead == 'r')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier_name);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier_name);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier_name);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(210);
            ACCEPT_TOKEN(sym_identifier_name);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_static);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(212);
            if (lookahead == 'u')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier_name);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier_name);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_string);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(216);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_struct);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(219);
            ACCEPT_TOKEN(sym_identifier_name);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier_name);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier_name);
        case 221:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_true);
        case 222:
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
                ADVANCE(223);
            if (lookahead == 'l')
                ADVANCE(226);
            if (lookahead == 'n')
                ADVANCE(230);
            if (lookahead == 's')
                ADVANCE(235);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 223:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(224);
            ACCEPT_TOKEN(sym_identifier_name);
        case 224:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier_name);
        case 225:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_uint);
        case 226:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(227);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 227:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(228);
            ACCEPT_TOKEN(sym_identifier_name);
        case 228:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(229);
            ACCEPT_TOKEN(sym_identifier_name);
        case 229:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 230:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(231);
            ACCEPT_TOKEN(sym_identifier_name);
        case 231:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(232);
            ACCEPT_TOKEN(sym_identifier_name);
        case 232:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(233);
            ACCEPT_TOKEN(sym_identifier_name);
        case 233:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(234);
            ACCEPT_TOKEN(sym_identifier_name);
        case 234:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 235:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(236);
            if (lookahead == 'i')
                ADVANCE(240);
            ACCEPT_TOKEN(sym_identifier_name);
        case 236:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(237);
            ACCEPT_TOKEN(sym_identifier_name);
        case 237:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(238);
            ACCEPT_TOKEN(sym_identifier_name);
        case 238:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(239);
            ACCEPT_TOKEN(sym_identifier_name);
        case 239:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 240:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(241);
            ACCEPT_TOKEN(sym_identifier_name);
        case 241:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(242);
            ACCEPT_TOKEN(sym_identifier_name);
        case 242:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_using);
        case 243:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(244);
            ACCEPT_TOKEN(sym_identifier_name);
        case 244:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(245);
            ACCEPT_TOKEN(sym_identifier_name);
        case 245:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(246);
            ACCEPT_TOKEN(sym_identifier_name);
        case 246:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(247);
            ACCEPT_TOKEN(sym_identifier_name);
        case 247:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(248);
            ACCEPT_TOKEN(sym_identifier_name);
        case 248:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(249);
            ACCEPT_TOKEN(sym_identifier_name);
        case 249:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(250);
            ACCEPT_TOKEN(sym_identifier_name);
        case 250:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 251:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 252:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 253:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(253);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(254);
            if (lookahead == 'c')
                ADVANCE(262);
            if (lookahead == 'e')
                ADVANCE(267);
            if (lookahead == 'i')
                ADVANCE(271);
            if (lookahead == 'n')
                ADVANCE(279);
            if (lookahead == 'p')
                ADVANCE(290);
            if (lookahead == 's')
                ADVANCE(309);
            if (lookahead == 'u')
                ADVANCE(324);
            LEX_ERROR();
        case 254:
            if (lookahead == 'b')
                ADVANCE(255);
            LEX_ERROR();
        case 255:
            if (lookahead == 's')
                ADVANCE(256);
            LEX_ERROR();
        case 256:
            if (lookahead == 't')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            if (lookahead == 'r')
                ADVANCE(258);
            LEX_ERROR();
        case 258:
            if (lookahead == 'a')
                ADVANCE(259);
            LEX_ERROR();
        case 259:
            if (lookahead == 'c')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if (lookahead == 't')
                ADVANCE(261);
            LEX_ERROR();
        case 261:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 262:
            if (lookahead == 'l')
                ADVANCE(263);
            LEX_ERROR();
        case 263:
            if (lookahead == 'a')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            if (lookahead == 's')
                ADVANCE(265);
            LEX_ERROR();
        case 265:
            if (lookahead == 's')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            ACCEPT_TOKEN(anon_sym_class);
        case 267:
            if (lookahead == 'n')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            if (lookahead == 'u')
                ADVANCE(269);
            LEX_ERROR();
        case 269:
            if (lookahead == 'm')
                ADVANCE(270);
            LEX_ERROR();
        case 270:
            ACCEPT_TOKEN(anon_sym_enum);
        case 271:
            if (lookahead == 'n')
                ADVANCE(272);
            LEX_ERROR();
        case 272:
            if (lookahead == 't')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            if (lookahead == 'e')
                ADVANCE(274);
            LEX_ERROR();
        case 274:
            if (lookahead == 'r')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            if (lookahead == 'n')
                ADVANCE(276);
            LEX_ERROR();
        case 276:
            if (lookahead == 'a')
                ADVANCE(277);
            LEX_ERROR();
        case 277:
            if (lookahead == 'l')
                ADVANCE(278);
            LEX_ERROR();
        case 278:
            ACCEPT_TOKEN(anon_sym_internal);
        case 279:
            if (lookahead == 'a')
                ADVANCE(280);
            if (lookahead == 'e')
                ADVANCE(288);
            LEX_ERROR();
        case 280:
            if (lookahead == 'm')
                ADVANCE(281);
            LEX_ERROR();
        case 281:
            if (lookahead == 'e')
                ADVANCE(282);
            LEX_ERROR();
        case 282:
            if (lookahead == 's')
                ADVANCE(283);
            LEX_ERROR();
        case 283:
            if (lookahead == 'p')
                ADVANCE(284);
            LEX_ERROR();
        case 284:
            if (lookahead == 'a')
                ADVANCE(285);
            LEX_ERROR();
        case 285:
            if (lookahead == 'c')
                ADVANCE(286);
            LEX_ERROR();
        case 286:
            if (lookahead == 'e')
                ADVANCE(287);
            LEX_ERROR();
        case 287:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 288:
            if (lookahead == 'w')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            ACCEPT_TOKEN(anon_sym_new);
        case 290:
            if (lookahead == 'r')
                ADVANCE(291);
            if (lookahead == 'u')
                ADVANCE(304);
            LEX_ERROR();
        case 291:
            if (lookahead == 'i')
                ADVANCE(292);
            if (lookahead == 'o')
                ADVANCE(297);
            LEX_ERROR();
        case 292:
            if (lookahead == 'v')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            if (lookahead == 'a')
                ADVANCE(294);
            LEX_ERROR();
        case 294:
            if (lookahead == 't')
                ADVANCE(295);
            LEX_ERROR();
        case 295:
            if (lookahead == 'e')
                ADVANCE(296);
            LEX_ERROR();
        case 296:
            ACCEPT_TOKEN(anon_sym_private);
        case 297:
            if (lookahead == 't')
                ADVANCE(298);
            LEX_ERROR();
        case 298:
            if (lookahead == 'e')
                ADVANCE(299);
            LEX_ERROR();
        case 299:
            if (lookahead == 'c')
                ADVANCE(300);
            LEX_ERROR();
        case 300:
            if (lookahead == 't')
                ADVANCE(301);
            LEX_ERROR();
        case 301:
            if (lookahead == 'e')
                ADVANCE(302);
            LEX_ERROR();
        case 302:
            if (lookahead == 'd')
                ADVANCE(303);
            LEX_ERROR();
        case 303:
            ACCEPT_TOKEN(anon_sym_protected);
        case 304:
            if (lookahead == 'b')
                ADVANCE(305);
            LEX_ERROR();
        case 305:
            if (lookahead == 'l')
                ADVANCE(306);
            LEX_ERROR();
        case 306:
            if (lookahead == 'i')
                ADVANCE(307);
            LEX_ERROR();
        case 307:
            if (lookahead == 'c')
                ADVANCE(308);
            LEX_ERROR();
        case 308:
            ACCEPT_TOKEN(anon_sym_public);
        case 309:
            if (lookahead == 'e')
                ADVANCE(310);
            if (lookahead == 't')
                ADVANCE(315);
            LEX_ERROR();
        case 310:
            if (lookahead == 'a')
                ADVANCE(311);
            LEX_ERROR();
        case 311:
            if (lookahead == 'l')
                ADVANCE(312);
            LEX_ERROR();
        case 312:
            if (lookahead == 'e')
                ADVANCE(313);
            LEX_ERROR();
        case 313:
            if (lookahead == 'd')
                ADVANCE(314);
            LEX_ERROR();
        case 314:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 315:
            if (lookahead == 'a')
                ADVANCE(316);
            if (lookahead == 'r')
                ADVANCE(320);
            LEX_ERROR();
        case 316:
            if (lookahead == 't')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            if (lookahead == 'i')
                ADVANCE(318);
            LEX_ERROR();
        case 318:
            if (lookahead == 'c')
                ADVANCE(319);
            LEX_ERROR();
        case 319:
            ACCEPT_TOKEN(anon_sym_static);
        case 320:
            if (lookahead == 'u')
                ADVANCE(321);
            LEX_ERROR();
        case 321:
            if (lookahead == 'c')
                ADVANCE(322);
            LEX_ERROR();
        case 322:
            if (lookahead == 't')
                ADVANCE(323);
            LEX_ERROR();
        case 323:
            ACCEPT_TOKEN(anon_sym_struct);
        case 324:
            if (lookahead == 'n')
                ADVANCE(325);
            if (lookahead == 's')
                ADVANCE(330);
            LEX_ERROR();
        case 325:
            if (lookahead == 's')
                ADVANCE(326);
            LEX_ERROR();
        case 326:
            if (lookahead == 'a')
                ADVANCE(327);
            LEX_ERROR();
        case 327:
            if (lookahead == 'f')
                ADVANCE(328);
            LEX_ERROR();
        case 328:
            if (lookahead == 'e')
                ADVANCE(329);
            LEX_ERROR();
        case 329:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 330:
            if (lookahead == 'i')
                ADVANCE(331);
            LEX_ERROR();
        case 331:
            if (lookahead == 'n')
                ADVANCE(332);
            LEX_ERROR();
        case 332:
            if (lookahead == 'g')
                ADVANCE(333);
            LEX_ERROR();
        case 333:
            ACCEPT_TOKEN(anon_sym_using);
        case 334:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(334);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(121);
            if (lookahead == 's')
                ADVANCE(335);
            LEX_ERROR();
        case 335:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(336);
            ACCEPT_TOKEN(sym_identifier_name);
        case 336:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier_name);
        case 337:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(337);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(121);
            LEX_ERROR();
        case 338:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(338);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 339:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(339);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(340);
            if (lookahead == 'm')
                ADVANCE(341);
            LEX_ERROR();
        case 340:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier_name);
        case 341:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier_name);
        case 342:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(342);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(254);
            if (lookahead == 'c')
                ADVANCE(262);
            if (lookahead == 'e')
                ADVANCE(267);
            if (lookahead == 'i')
                ADVANCE(271);
            if (lookahead == 'n')
                ADVANCE(343);
            if (lookahead == 'p')
                ADVANCE(290);
            if (lookahead == 's')
                ADVANCE(309);
            if (lookahead == 'u')
                ADVANCE(344);
            LEX_ERROR();
        case 343:
            if (lookahead == 'e')
                ADVANCE(288);
            LEX_ERROR();
        case 344:
            if (lookahead == 'n')
                ADVANCE(325);
            LEX_ERROR();
        case 345:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(345);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(254);
            if (lookahead == 'c')
                ADVANCE(262);
            if (lookahead == 'i')
                ADVANCE(271);
            if (lookahead == 'n')
                ADVANCE(343);
            if (lookahead == 'p')
                ADVANCE(290);
            if (lookahead == 's')
                ADVANCE(309);
            if (lookahead == 'u')
                ADVANCE(344);
            LEX_ERROR();
        case 346:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(346);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(254);
            if (lookahead == 'c')
                ADVANCE(262);
            if (lookahead == 'i')
                ADVANCE(271);
            if (lookahead == 'n')
                ADVANCE(343);
            if (lookahead == 'p')
                ADVANCE(290);
            if (lookahead == 's')
                ADVANCE(347);
            if (lookahead == 'u')
                ADVANCE(344);
            LEX_ERROR();
        case 347:
            if (lookahead == 'e')
                ADVANCE(310);
            if (lookahead == 't')
                ADVANCE(348);
            LEX_ERROR();
        case 348:
            if (lookahead == 'a')
                ADVANCE(316);
            LEX_ERROR();
        case 349:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(349);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 350:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(350);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(254);
            if (lookahead == 'c')
                ADVANCE(262);
            if (lookahead == 'e')
                ADVANCE(267);
            if (lookahead == 'i')
                ADVANCE(271);
            if (lookahead == 'n')
                ADVANCE(279);
            if (lookahead == 'p')
                ADVANCE(290);
            if (lookahead == 's')
                ADVANCE(309);
            if (lookahead == 'u')
                ADVANCE(344);
            LEX_ERROR();
        case 351:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(351);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(267);
            LEX_ERROR();
        case 352:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(352);
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
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'e')
                ADVANCE(355);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(358);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            LEX_ERROR();
        case 353:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 354:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(97);
            if (lookahead == 'o')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier_name);
        case 355:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 356:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 357:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 358:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier_name);
        case 359:
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
                ADVANCE(223);
            if (lookahead == 'l')
                ADVANCE(360);
            if (lookahead == 'n')
                ADVANCE(230);
            if (lookahead == 's')
                ADVANCE(361);
            ACCEPT_TOKEN(sym_identifier_name);
        case 360:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(227);
            ACCEPT_TOKEN(sym_identifier_name);
        case 361:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier_name);
        case 362:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(362);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'c')
                ADVANCE(262);
            LEX_ERROR();
        case 363:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(363);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(364);
            LEX_ERROR();
        case 364:
            if (lookahead == 't')
                ADVANCE(365);
            LEX_ERROR();
        case 365:
            if (lookahead == 'r')
                ADVANCE(320);
            LEX_ERROR();
        case 366:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(366);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 367:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(367);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 368:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(368);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 369:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(369);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 370:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(370);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(251);
            LEX_ERROR();
        case 371:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(371);
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
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'e')
                ADVANCE(355);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(358);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 372:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(372);
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
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(373);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(374);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 's')
                ADVANCE(377);
            if (lookahead == 'u')
                ADVANCE(380);
            LEX_ERROR();
        case 373:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 374:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(375);
            ACCEPT_TOKEN(sym_identifier_name);
        case 375:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(376);
            ACCEPT_TOKEN(sym_identifier_name);
        case 376:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_int);
        case 377:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(193);
            if (lookahead == 'h')
                ADVANCE(202);
            if (lookahead == 't')
                ADVANCE(378);
            ACCEPT_TOKEN(sym_identifier_name);
        case 378:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(379);
            ACCEPT_TOKEN(sym_identifier_name);
        case 379:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier_name);
        case 380:
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
                ADVANCE(223);
            if (lookahead == 'l')
                ADVANCE(360);
            if (lookahead == 's')
                ADVANCE(361);
            ACCEPT_TOKEN(sym_identifier_name);
        case 381:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(381);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(251);
            LEX_ERROR();
        case 382:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(382);
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
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'e')
                ADVANCE(355);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(383);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 383:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(146);
            if (lookahead == 'e')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier_name);
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
            if (lookahead == 'a')
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'e')
                ADVANCE(355);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(358);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            LEX_ERROR();
        case 385:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(385);
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
        case 386:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(386);
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
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(358);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            LEX_ERROR();
        case 387:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(387);
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
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(358);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(388);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            LEX_ERROR();
        case 388:
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
                ADVANCE(193);
            if (lookahead == 'e')
                ADVANCE(197);
            if (lookahead == 'h')
                ADVANCE(202);
            if (lookahead == 't')
                ADVANCE(389);
            ACCEPT_TOKEN(sym_identifier_name);
        case 389:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(207);
            if (lookahead == 'r')
                ADVANCE(379);
            ACCEPT_TOKEN(sym_identifier_name);
        case 390:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(390);
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
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(373);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(358);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(391);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            LEX_ERROR();
        case 391:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(193);
            if (lookahead == 'h')
                ADVANCE(202);
            if (lookahead == 't')
                ADVANCE(389);
            ACCEPT_TOKEN(sym_identifier_name);
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
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 393:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(393);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 394:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(394);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 395:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(395);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 396:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(396);
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
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(402);
            if (lookahead == 't')
                ADVANCE(406);
            LEX_ERROR();
        case 397:
            if (lookahead == 'a')
                ADVANCE(398);
            LEX_ERROR();
        case 398:
            if (lookahead == 'l')
                ADVANCE(399);
            LEX_ERROR();
        case 399:
            if (lookahead == 's')
                ADVANCE(400);
            LEX_ERROR();
        case 400:
            if (lookahead == 'e')
                ADVANCE(401);
            LEX_ERROR();
        case 401:
            ACCEPT_TOKEN(anon_sym_false);
        case 402:
            if (lookahead == 'u')
                ADVANCE(403);
            LEX_ERROR();
        case 403:
            if (lookahead == 'l')
                ADVANCE(404);
            LEX_ERROR();
        case 404:
            if (lookahead == 'l')
                ADVANCE(405);
            LEX_ERROR();
        case 405:
            ACCEPT_TOKEN(sym_null_literal);
        case 406:
            if (lookahead == 'r')
                ADVANCE(407);
            LEX_ERROR();
        case 407:
            if (lookahead == 'u')
                ADVANCE(408);
            LEX_ERROR();
        case 408:
            if (lookahead == 'e')
                ADVANCE(409);
            LEX_ERROR();
        case 409:
            ACCEPT_TOKEN(anon_sym_true);
        case 410:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(410);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 411:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(412);
            if (lookahead == '/')
                ADVANCE(413);
            if (lookahead == '\\')
                ADVANCE(414);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(412);
            LEX_ERROR();
        case 412:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 413:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 414:
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
        case 415:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(415);
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
                ADVANCE(416);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(417);
            if (lookahead == 'L')
                ADVANCE(418);
            if (lookahead == 'U')
                ADVANCE(420);
            if (lookahead == 'l')
                ADVANCE(418);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 416:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 417:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(28);
            LEX_ERROR();
        case 418:
            if (lookahead == 'U')
                ADVANCE(419);
            if (lookahead == 'u')
                ADVANCE(419);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 419:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 420:
            if (lookahead == 'L')
                ADVANCE(419);
            if (lookahead == 'l')
                ADVANCE(419);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 421:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(421);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == 'L')
                ADVANCE(418);
            if (lookahead == 'U')
                ADVANCE(420);
            if (lookahead == 'l')
                ADVANCE(418);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 422:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(422);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            LEX_ERROR();
        case 423:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(424);
            if (lookahead == '\n')
                SKIP(423);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(425);
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
                ADVANCE(424);
            LEX_ERROR();
        case 424:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 425:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 426:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(427);
            if (lookahead == '/')
                ADVANCE(428);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(432);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 427:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(427);
            if (lookahead == '/')
                ADVANCE(428);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(432);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 428:
            if (lookahead == '*')
                ADVANCE(429);
            if (lookahead == '/')
                ADVANCE(433);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(432);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 429:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(430);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*')))
                ADVANCE(429);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 430:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(431);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(429);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 431:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(432);
            ACCEPT_TOKEN(sym_comment);
        case 432:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(432);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 433:
            if (lookahead == '\n')
                ADVANCE(432);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(434);
            ACCEPT_TOKEN(sym_comment);
        case 434:
            if (lookahead == '\n')
                ADVANCE(432);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(434);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 435:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(435);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 436:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(424);
            if (lookahead == '\n')
                SKIP(436);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(425);
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
                ADVANCE(424);
            LEX_ERROR();
        case 437:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(437);
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
                ADVANCE(416);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(417);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 438:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(438);
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
                ADVANCE(416);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 439:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(439);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 440:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(440);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(441);
            if (lookahead == '{')
                ADVANCE(251);
            LEX_ERROR();
        case 441:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 442:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(442);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 443:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(443);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'b')
                ADVANCE(444);
            if (lookahead == 'c')
                ADVANCE(448);
            if (lookahead == 'i')
                ADVANCE(452);
            if (lookahead == 'l')
                ADVANCE(455);
            if (lookahead == 's')
                ADVANCE(459);
            if (lookahead == 'u')
                ADVANCE(468);
            LEX_ERROR();
        case 444:
            if (lookahead == 'y')
                ADVANCE(445);
            LEX_ERROR();
        case 445:
            if (lookahead == 't')
                ADVANCE(446);
            LEX_ERROR();
        case 446:
            if (lookahead == 'e')
                ADVANCE(447);
            LEX_ERROR();
        case 447:
            ACCEPT_TOKEN(anon_sym_byte);
        case 448:
            if (lookahead == 'h')
                ADVANCE(449);
            LEX_ERROR();
        case 449:
            if (lookahead == 'a')
                ADVANCE(450);
            LEX_ERROR();
        case 450:
            if (lookahead == 'r')
                ADVANCE(451);
            LEX_ERROR();
        case 451:
            ACCEPT_TOKEN(anon_sym_char);
        case 452:
            if (lookahead == 'n')
                ADVANCE(453);
            LEX_ERROR();
        case 453:
            if (lookahead == 't')
                ADVANCE(454);
            LEX_ERROR();
        case 454:
            ACCEPT_TOKEN(anon_sym_int);
        case 455:
            if (lookahead == 'o')
                ADVANCE(456);
            LEX_ERROR();
        case 456:
            if (lookahead == 'n')
                ADVANCE(457);
            LEX_ERROR();
        case 457:
            if (lookahead == 'g')
                ADVANCE(458);
            LEX_ERROR();
        case 458:
            ACCEPT_TOKEN(anon_sym_long);
        case 459:
            if (lookahead == 'b')
                ADVANCE(460);
            if (lookahead == 'h')
                ADVANCE(464);
            LEX_ERROR();
        case 460:
            if (lookahead == 'y')
                ADVANCE(461);
            LEX_ERROR();
        case 461:
            if (lookahead == 't')
                ADVANCE(462);
            LEX_ERROR();
        case 462:
            if (lookahead == 'e')
                ADVANCE(463);
            LEX_ERROR();
        case 463:
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 464:
            if (lookahead == 'o')
                ADVANCE(465);
            LEX_ERROR();
        case 465:
            if (lookahead == 'r')
                ADVANCE(466);
            LEX_ERROR();
        case 466:
            if (lookahead == 't')
                ADVANCE(467);
            LEX_ERROR();
        case 467:
            ACCEPT_TOKEN(anon_sym_short);
        case 468:
            if (lookahead == 'i')
                ADVANCE(469);
            if (lookahead == 'l')
                ADVANCE(472);
            if (lookahead == 's')
                ADVANCE(476);
            LEX_ERROR();
        case 469:
            if (lookahead == 'n')
                ADVANCE(470);
            LEX_ERROR();
        case 470:
            if (lookahead == 't')
                ADVANCE(471);
            LEX_ERROR();
        case 471:
            ACCEPT_TOKEN(anon_sym_uint);
        case 472:
            if (lookahead == 'o')
                ADVANCE(473);
            LEX_ERROR();
        case 473:
            if (lookahead == 'n')
                ADVANCE(474);
            LEX_ERROR();
        case 474:
            if (lookahead == 'g')
                ADVANCE(475);
            LEX_ERROR();
        case 475:
            ACCEPT_TOKEN(anon_sym_ulong);
        case 476:
            if (lookahead == 'h')
                ADVANCE(477);
            LEX_ERROR();
        case 477:
            if (lookahead == 'o')
                ADVANCE(478);
            LEX_ERROR();
        case 478:
            if (lookahead == 'r')
                ADVANCE(479);
            LEX_ERROR();
        case 479:
            if (lookahead == 't')
                ADVANCE(480);
            LEX_ERROR();
        case 480:
            ACCEPT_TOKEN(anon_sym_ushort);
        case 481:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(481);
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
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'e')
                ADVANCE(355);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(383);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 482:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(482);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 483:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(483);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 484:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(484);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(22);
            LEX_ERROR();
        case 485:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(485);
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
                ADVANCE(251);
            LEX_ERROR();
        case 486:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(486);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(441);
            LEX_ERROR();
        case 487:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(487);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(488);
            LEX_ERROR();
        case 488:
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 489:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(489);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(251);
            LEX_ERROR();
        case 490:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(490);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 491:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(491);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '{')
                ADVANCE(251);
            LEX_ERROR();
        case 492:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(492);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(254);
            if (lookahead == 'c')
                ADVANCE(262);
            if (lookahead == 'e')
                ADVANCE(267);
            if (lookahead == 'i')
                ADVANCE(271);
            if (lookahead == 'n')
                ADVANCE(279);
            if (lookahead == 'p')
                ADVANCE(290);
            if (lookahead == 's')
                ADVANCE(309);
            if (lookahead == 'u')
                ADVANCE(344);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 493:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(493);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(254);
            if (lookahead == 'c')
                ADVANCE(262);
            if (lookahead == 'e')
                ADVANCE(267);
            if (lookahead == 'i')
                ADVANCE(271);
            if (lookahead == 'n')
                ADVANCE(279);
            if (lookahead == 'p')
                ADVANCE(290);
            if (lookahead == 's')
                ADVANCE(309);
            if (lookahead == 'u')
                ADVANCE(344);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 494:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(494);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 495:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(495);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 496:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(496);
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
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'e')
                ADVANCE(355);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(383);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(497);
            if (lookahead == 'v')
                ADVANCE(243);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 497:
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
                ADVANCE(223);
            if (lookahead == 'l')
                ADVANCE(360);
            if (lookahead == 'n')
                ADVANCE(230);
            if (lookahead == 's')
                ADVANCE(235);
            ACCEPT_TOKEN(sym_identifier_name);
        case 498:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(498);
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
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'e')
                ADVANCE(355);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(383);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 499:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(499);
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
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'e')
                ADVANCE(355);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(383);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            LEX_ERROR();
        case 500:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(500);
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
                ADVANCE(501);
            if (lookahead == 'c')
                ADVANCE(373);
            if (lookahead == 'i')
                ADVANCE(374);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 's')
                ADVANCE(502);
            if (lookahead == 'u')
                ADVANCE(380);
            LEX_ERROR();
        case 501:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier_name);
        case 502:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(193);
            if (lookahead == 'h')
                ADVANCE(202);
            ACCEPT_TOKEN(sym_identifier_name);
        case 503:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(503);
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
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(373);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'i')
                ADVANCE(374);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 's')
                ADVANCE(377);
            if (lookahead == 'u')
                ADVANCE(380);
            LEX_ERROR();
        case 504:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(504);
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
                ADVANCE(505);
            if (lookahead == 'g')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(506);
            if (lookahead == 't')
                ADVANCE(218);
            LEX_ERROR();
        case 505:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 506:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 507:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(412);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(413);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(414);
            if (lookahead == '}')
                ADVANCE(252);
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
                ADVANCE(412);
            LEX_ERROR();
        case 508:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(508);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 509:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(424);
            if (lookahead == '\n')
                SKIP(509);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(425);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(252);
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
                ADVANCE(424);
            LEX_ERROR();
        case 510:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(510);
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
                ADVANCE(353);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(356);
            if (lookahead == 'g')
                ADVANCE(121);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(357);
            if (lookahead == 'n')
                ADVANCE(358);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(388);
            if (lookahead == 'u')
                ADVANCE(359);
            if (lookahead == 'v')
                ADVANCE(243);
            LEX_ERROR();
        case 511:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(511);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(441);
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
                ADVANCE(251);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 512:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(512);
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
                ADVANCE(252);
            LEX_ERROR();
        case 513:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(513);
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
                ADVANCE(252);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 253,
    [2] = 334,
    [3] = 337,
    [4] = 338,
    [5] = 338,
    [6] = 339,
    [7] = 338,
    [8] = 342,
    [9] = 345,
    [10] = 346,
    [11] = 349,
    [12] = 253,
    [13] = 350,
    [14] = 342,
    [15] = 351,
    [16] = 352,
    [17] = 362,
    [18] = 362,
    [19] = 363,
    [20] = 363,
    [21] = 253,
    [22] = 350,
    [23] = 352,
    [24] = 338,
    [25] = 352,
    [26] = 366,
    [27] = 367,
    [28] = 368,
    [29] = 338,
    [30] = 368,
    [31] = 338,
    [32] = 368,
    [33] = 368,
    [34] = 352,
    [35] = 369,
    [36] = 368,
    [37] = 368,
    [38] = 350,
    [39] = 253,
    [40] = 350,
    [41] = 338,
    [42] = 370,
    [43] = 371,
    [44] = 372,
    [45] = 381,
    [46] = 371,
    [47] = 382,
    [48] = 384,
    [49] = 385,
    [50] = 386,
    [51] = 387,
    [52] = 390,
    [53] = 392,
    [54] = 371,
    [55] = 384,
    [56] = 393,
    [57] = 338,
    [58] = 385,
    [59] = 372,
    [60] = 372,
    [61] = 371,
    [62] = 382,
    [63] = 371,
    [64] = 393,
    [65] = 371,
    [66] = 382,
    [67] = 371,
    [68] = 338,
    [69] = 370,
    [70] = 371,
    [71] = 381,
    [72] = 371,
    [73] = 382,
    [74] = 371,
    [75] = 382,
    [76] = 382,
    [77] = 371,
    [78] = 394,
    [79] = 395,
    [80] = 338,
    [81] = 395,
    [82] = 338,
    [83] = 395,
    [84] = 395,
    [85] = 396,
    [86] = 395,
    [87] = 410,
    [88] = 411,
    [89] = 415,
    [90] = 421,
    [91] = 410,
    [92] = 422,
    [93] = 423,
    [94] = 426,
    [95] = 410,
    [96] = 410,
    [97] = 435,
    [98] = 410,
    [99] = 423,
    [100] = 436,
    [101] = 436,
    [102] = 410,
    [103] = 423,
    [104] = 423,
    [105] = 410,
    [106] = 423,
    [107] = 437,
    [108] = 410,
    [109] = 438,
    [110] = 410,
    [111] = 410,
    [112] = 422,
    [113] = 410,
    [114] = 438,
    [115] = 437,
    [116] = 438,
    [117] = 410,
    [118] = 439,
    [119] = 439,
    [120] = 439,
    [121] = 410,
    [122] = 371,
    [123] = 338,
    [124] = 440,
    [125] = 442,
    [126] = 443,
    [127] = 381,
    [128] = 481,
    [129] = 382,
    [130] = 481,
    [131] = 382,
    [132] = 381,
    [133] = 381,
    [134] = 482,
    [135] = 338,
    [136] = 483,
    [137] = 481,
    [138] = 442,
    [139] = 483,
    [140] = 481,
    [141] = 442,
    [142] = 483,
    [143] = 483,
    [144] = 482,
    [145] = 483,
    [146] = 483,
    [147] = 351,
    [148] = 362,
    [149] = 363,
    [150] = 372,
    [151] = 393,
    [152] = 371,
    [153] = 338,
    [154] = 370,
    [155] = 381,
    [156] = 371,
    [157] = 371,
    [158] = 382,
    [159] = 338,
    [160] = 370,
    [161] = 381,
    [162] = 371,
    [163] = 371,
    [164] = 382,
    [165] = 338,
    [166] = 440,
    [167] = 381,
    [168] = 481,
    [169] = 382,
    [170] = 385,
    [171] = 484,
    [172] = 484,
    [173] = 372,
    [174] = 485,
    [175] = 484,
    [176] = 372,
    [177] = 485,
    [178] = 484,
    [179] = 484,
    [180] = 372,
    [181] = 362,
    [182] = 363,
    [183] = 440,
    [184] = 381,
    [185] = 481,
    [186] = 382,
    [187] = 370,
    [188] = 371,
    [189] = 381,
    [190] = 382,
    [191] = 371,
    [192] = 370,
    [193] = 371,
    [194] = 381,
    [195] = 382,
    [196] = 371,
    [197] = 486,
    [198] = 338,
    [199] = 367,
    [200] = 350,
    [201] = 338,
    [202] = 487,
    [203] = 489,
    [204] = 490,
    [205] = 338,
    [206] = 491,
    [207] = 492,
    [208] = 493,
    [209] = 492,
    [210] = 492,
    [211] = 493,
    [212] = 492,
    [213] = 338,
    [214] = 490,
    [215] = 337,
    [216] = 494,
    [217] = 495,
    [218] = 337,
    [219] = 495,
    [220] = 253,
    [221] = 253,
    [222] = 337,
    [223] = 496,
    [224] = 498,
    [225] = 481,
    [226] = 338,
    [227] = 338,
    [228] = 499,
    [229] = 500,
    [230] = 338,
    [231] = 503,
    [232] = 485,
    [233] = 504,
    [234] = 507,
    [235] = 436,
    [236] = 415,
    [237] = 508,
    [238] = 410,
    [239] = 438,
    [240] = 509,
    [241] = 510,
    [242] = 485,
    [243] = 511,
    [244] = 253,
    [245] = 493,
    [246] = 382,
    [247] = 350,
    [248] = 384,
    [249] = 381,
    [250] = 481,
    [251] = 483,
    [252] = 351,
    [253] = 352,
    [254] = 367,
    [255] = 368,
    [256] = 371,
    [257] = 393,
    [258] = 385,
    [259] = 395,
    [260] = 410,
    [261] = 423,
    [262] = 362,
    [263] = 362,
    [264] = 363,
    [265] = 363,
    [266] = 372,
    [267] = 372,
    [268] = 485,
    [269] = 484,
    [270] = 491,
    [271] = 350,
    [272] = 371,
    [273] = 382,
    [274] = 253,
    [275] = 371,
    [276] = 382,
    [277] = 371,
    [278] = 382,
    [279] = 393,
    [280] = 371,
    [281] = 338,
    [282] = 370,
    [283] = 371,
    [284] = 381,
    [285] = 371,
    [286] = 382,
    [287] = 371,
    [288] = 382,
    [289] = 382,
    [290] = 371,
    [291] = 338,
    [292] = 370,
    [293] = 371,
    [294] = 381,
    [295] = 371,
    [296] = 382,
    [297] = 371,
    [298] = 382,
    [299] = 382,
    [300] = 371,
    [301] = 371,
    [302] = 338,
    [303] = 440,
    [304] = 381,
    [305] = 481,
    [306] = 382,
    [307] = 481,
    [308] = 382,
    [309] = 382,
    [310] = 481,
    [311] = 382,
    [312] = 512,
    [313] = 498,
    [314] = 481,
    [315] = 382,
    [316] = 382,
    [317] = 512,
    [318] = 498,
    [319] = 371,
    [320] = 410,
    [321] = 437,
    [322] = 410,
    [323] = 438,
    [324] = 410,
    [325] = 410,
    [326] = 513,
    [327] = 483,
    [328] = 368,
    [329] = 395,
    [330] = 484,
    [331] = 410,
    [332] = 440,
    [333] = 370,
    [334] = 371,
    [335] = 381,
    [336] = 371,
    [337] = 382,
    [338] = 371,
    [339] = 382,
    [340] = 382,
    [341] = 371,
    [342] = 370,
    [343] = 371,
    [344] = 381,
    [345] = 371,
    [346] = 382,
    [347] = 371,
    [348] = 382,
    [349] = 382,
    [350] = 371,
    [351] = 382,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(11),
        [sym_using_directive] = STATE(244),
        [sym_namespace_declaration] = STATE(245),
        [sym_class_declaration] = STATE(246),
        [sym_struct_declaration] = STATE(246),
        [sym__global_attributes] = STATE(247),
        [sym__global_attribute_target_specifier] = STATE(198),
        [sym__attributes] = STATE(248),
        [sym_enum_declaration] = STATE(246),
        [sym__enum_base] = STATE(249),
        [sym__enum_body] = STATE(250),
        [sym_enum_member_declaration] = STATE(251),
        [sym_enum_modifier] = STATE(252),
        [sym__integral_type] = STATE(133),
        [sym__attribute_section] = STATE(253),
        [sym_attribute_list] = STATE(254),
        [sym_attribute] = STATE(255),
        [sym_attribute_argument_list] = STATE(36),
        [sym_field_declaration] = STATE(256),
        [sym_variable_declaration] = STATE(257),
        [sym__type] = STATE(258),
        [sym_generic_name] = STATE(58),
        [sym_variable_declarator] = STATE(259),
        [sym_equals_value_clause] = STATE(260),
        [sym__literal] = STATE(95),
        [sym_boolean_literal] = STATE(91),
        [sym_character_literal] = STATE(91),
        [sym__unicode_escape_sequence] = STATE(235),
        [sym__simple_escape_sequence] = STATE(235),
        [sym_integer_literal] = STATE(91),
        [sym_real_literal] = STATE(91),
        [sym_string_literal] = STATE(91),
        [sym__regular_string_literal] = STATE(96),
        [sym__regular_string_literal_character] = STATE(261),
        [sym__verbatim_string_literal] = STATE(96),
        [sym_class_modifiers] = STATE(262),
        [sym__class_modifiers] = STATE(263),
        [sym_struct_modifiers] = STATE(264),
        [sym__struct_modifiers] = STATE(265),
        [sym_field_modifiers] = STATE(266),
        [sym__field_modifiers] = STATE(267),
        [sym_predefined_type] = STATE(58),
        [sym_type_parameter_list] = STATE(268),
        [sym_type_parameter] = STATE(269),
        [sym_qualified_name] = STATE(270),
        [sym_alias_qualified_name] = STATE(204),
        [sym_name_equals] = STATE(218),
        [sym_static] = STATE(218),
        [aux_sym_compilation_unit_repeat1] = STATE(21),
        [aux_sym_compilation_unit_repeat2] = STATE(271),
        [aux_sym_namespace_declaration_repeat1] = STATE(210),
        [aux_sym_class_declaration_repeat1] = STATE(272),
        [aux_sym__attributes_repeat1] = STATE(23),
        [aux_sym__enum_body_repeat1] = STATE(139),
        [aux_sym_attribute_list_repeat1] = STATE(30),
        [aux_sym_variable_declaration_repeat1] = STATE(81),
        [aux_sym__regular_string_literal_repeat1] = STATE(104),
        [aux_sym_type_parameter_list_repeat1] = STATE(175),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_using] = ACTIONS(3),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_namespace] = ACTIONS(7),
        [anon_sym_LBRACE] = ACTIONS(9),
        [anon_sym_RBRACE] = ACTIONS(11),
        [anon_sym_class] = ACTIONS(13),
        [anon_sym_struct] = ACTIONS(15),
        [anon_sym_LBRACK] = ACTIONS(17),
        [anon_sym_RBRACK] = ACTIONS(19),
        [anon_sym_assembly] = ACTIONS(21),
        [anon_sym_module] = ACTIONS(21),
        [anon_sym_COLON] = ACTIONS(23),
        [anon_sym_enum] = ACTIONS(25),
        [anon_sym_COMMA] = ACTIONS(27),
        [anon_sym_new] = ACTIONS(29),
        [anon_sym_public] = ACTIONS(29),
        [anon_sym_protected] = ACTIONS(29),
        [anon_sym_internal] = ACTIONS(29),
        [anon_sym_private] = ACTIONS(29),
        [anon_sym_sbyte] = ACTIONS(31),
        [anon_sym_byte] = ACTIONS(31),
        [anon_sym_short] = ACTIONS(31),
        [anon_sym_ushort] = ACTIONS(31),
        [anon_sym_int] = ACTIONS(31),
        [anon_sym_uint] = ACTIONS(31),
        [anon_sym_long] = ACTIONS(31),
        [anon_sym_ulong] = ACTIONS(31),
        [anon_sym_char] = ACTIONS(31),
        [anon_sym_LPAREN] = ACTIONS(33),
        [anon_sym_RPAREN] = ACTIONS(35),
        [anon_sym_EQ] = ACTIONS(37),
        [anon_sym_true] = ACTIONS(39),
        [anon_sym_false] = ACTIONS(39),
        [anon_sym_SQUOTE] = ACTIONS(41),
        [sym__hexadecimal_escape_sequence] = ACTIONS(43),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(45),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(45),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(47),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(47),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(47),
        [anon_sym_BSLASH0] = ACTIONS(47),
        [anon_sym_BSLASHa] = ACTIONS(47),
        [anon_sym_BSLASHb] = ACTIONS(47),
        [anon_sym_BSLASHf] = ACTIONS(47),
        [anon_sym_BSLASHn] = ACTIONS(47),
        [anon_sym_BSLASHr] = ACTIONS(47),
        [anon_sym_BSLASHt] = ACTIONS(47),
        [anon_sym_BSLASHv] = ACTIONS(47),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(49),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(51),
        [sym__integer_type_suffix] = ACTIONS(53),
        [sym_null_literal] = ACTIONS(55),
        [anon_sym_DOT] = ACTIONS(57),
        [sym__real_type_suffix] = ACTIONS(59),
        [sym__exponent_part] = ACTIONS(61),
        [anon_sym_DQUOTE] = ACTIONS(63),
        [anon_sym_AT_DQUOTE] = ACTIONS(65),
        [anon_sym_unsafe] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_readonly] = ACTIONS(73),
        [anon_sym_volatile] = ACTIONS(73),
        [anon_sym_bool] = ACTIONS(75),
        [anon_sym_decimal] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_object] = ACTIONS(75),
        [anon_sym_string] = ACTIONS(75),
        [anon_sym_LT] = ACTIONS(77),
        [anon_sym_GT] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [sym_global] = ACTIONS(83),
        [sym_identifier_name] = ACTIONS(85),
        [sym_comment] = ACTIONS(87),
    },
    [1] = {
        [sym_compilation_unit] = STATE(11),
        [sym_using_directive] = STATE(12),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(13),
        [sym_struct_declaration] = STATE(13),
        [sym__global_attributes] = STATE(13),
        [sym__attributes] = STATE(14),
        [sym_enum_declaration] = STATE(13),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [aux_sym_compilation_unit_repeat1] = STATE(21),
        [aux_sym_compilation_unit_repeat2] = STATE(22),
        [aux_sym__attributes_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_using] = ACTIONS(91),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(97),
        [anon_sym_LBRACK] = ACTIONS(99),
        [anon_sym_enum] = ACTIONS(101),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [2] = {
        [sym_qualified_name] = STATE(217),
        [sym_alias_qualified_name] = STATE(204),
        [sym_name_equals] = STATE(218),
        [sym_static] = STATE(218),
        [anon_sym_static] = ACTIONS(109),
        [sym_global] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(87),
    },
    [3] = {
        [sym_qualified_name] = STATE(203),
        [sym_alias_qualified_name] = STATE(204),
        [sym_global] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(115),
        [sym_comment] = ACTIONS(87),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(117),
        [sym_comment] = ACTIONS(87),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(119),
        [sym_comment] = ACTIONS(87),
    },
    [6] = {
        [sym__global_attribute_target_specifier] = STATE(198),
        [sym_attribute_list] = STATE(27),
        [sym_attribute] = STATE(28),
        [anon_sym_assembly] = ACTIONS(121),
        [anon_sym_module] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(87),
    },
    [7] = {
        [sym_identifier_name] = ACTIONS(125),
        [sym_comment] = ACTIONS(87),
    },
    [8] = {
        [sym__class_modifiers] = STATE(181),
        [sym__struct_modifiers] = STATE(182),
        [anon_sym_class] = ACTIONS(127),
        [anon_sym_struct] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_new] = ACTIONS(105),
        [anon_sym_public] = ACTIONS(105),
        [anon_sym_protected] = ACTIONS(105),
        [anon_sym_internal] = ACTIONS(105),
        [anon_sym_private] = ACTIONS(105),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [9] = {
        [sym__class_modifiers] = STATE(181),
        [sym__struct_modifiers] = STATE(182),
        [anon_sym_class] = ACTIONS(127),
        [anon_sym_struct] = ACTIONS(129),
        [anon_sym_new] = ACTIONS(105),
        [anon_sym_public] = ACTIONS(105),
        [anon_sym_protected] = ACTIONS(105),
        [anon_sym_internal] = ACTIONS(105),
        [anon_sym_private] = ACTIONS(105),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [10] = {
        [sym__class_modifiers] = STATE(181),
        [anon_sym_class] = ACTIONS(127),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(107),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [sym_comment] = ACTIONS(87),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_using] = ACTIONS(135),
        [anon_sym_namespace] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_struct] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_enum] = ACTIONS(135),
        [anon_sym_new] = ACTIONS(135),
        [anon_sym_public] = ACTIONS(135),
        [anon_sym_protected] = ACTIONS(135),
        [anon_sym_internal] = ACTIONS(135),
        [anon_sym_private] = ACTIONS(135),
        [anon_sym_unsafe] = ACTIONS(135),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(135),
        [sym_comment] = ACTIONS(87),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_namespace] = ACTIONS(137),
        [anon_sym_class] = ACTIONS(137),
        [anon_sym_struct] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [anon_sym_enum] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(137),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_protected] = ACTIONS(137),
        [anon_sym_internal] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_unsafe] = ACTIONS(137),
        [anon_sym_abstract] = ACTIONS(137),
        [anon_sym_sealed] = ACTIONS(137),
        [anon_sym_static] = ACTIONS(137),
        [sym_comment] = ACTIONS(87),
    },
    [14] = {
        [sym_enum_modifier] = STATE(147),
        [sym_class_modifiers] = STATE(148),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(149),
        [sym__struct_modifiers] = STATE(20),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_struct] = ACTIONS(141),
        [anon_sym_enum] = ACTIONS(143),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [15] = {
        [anon_sym_enum] = ACTIONS(143),
        [sym_comment] = ACTIONS(87),
    },
    [16] = {
        [anon_sym_class] = ACTIONS(145),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_enum] = ACTIONS(145),
        [anon_sym_new] = ACTIONS(145),
        [anon_sym_public] = ACTIONS(145),
        [anon_sym_protected] = ACTIONS(145),
        [anon_sym_internal] = ACTIONS(145),
        [anon_sym_private] = ACTIONS(145),
        [anon_sym_sbyte] = ACTIONS(145),
        [anon_sym_byte] = ACTIONS(145),
        [anon_sym_short] = ACTIONS(145),
        [anon_sym_ushort] = ACTIONS(145),
        [anon_sym_int] = ACTIONS(145),
        [anon_sym_uint] = ACTIONS(145),
        [anon_sym_long] = ACTIONS(145),
        [anon_sym_ulong] = ACTIONS(145),
        [anon_sym_char] = ACTIONS(145),
        [anon_sym_unsafe] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(145),
        [anon_sym_readonly] = ACTIONS(145),
        [anon_sym_volatile] = ACTIONS(145),
        [anon_sym_bool] = ACTIONS(145),
        [anon_sym_decimal] = ACTIONS(145),
        [anon_sym_double] = ACTIONS(145),
        [anon_sym_float] = ACTIONS(145),
        [anon_sym_object] = ACTIONS(145),
        [anon_sym_string] = ACTIONS(145),
        [sym_identifier_name] = ACTIONS(149),
        [sym_comment] = ACTIONS(87),
    },
    [17] = {
        [anon_sym_class] = ACTIONS(139),
        [sym_comment] = ACTIONS(87),
    },
    [18] = {
        [anon_sym_class] = ACTIONS(151),
        [sym_comment] = ACTIONS(87),
    },
    [19] = {
        [anon_sym_struct] = ACTIONS(141),
        [sym_comment] = ACTIONS(87),
    },
    [20] = {
        [anon_sym_struct] = ACTIONS(153),
        [sym_comment] = ACTIONS(87),
    },
    [21] = {
        [sym_using_directive] = STATE(39),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(13),
        [sym_struct_declaration] = STATE(13),
        [sym__global_attributes] = STATE(13),
        [sym__attributes] = STATE(14),
        [sym_enum_declaration] = STATE(13),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [aux_sym_compilation_unit_repeat2] = STATE(40),
        [aux_sym__attributes_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_using] = ACTIONS(91),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(97),
        [anon_sym_LBRACK] = ACTIONS(99),
        [anon_sym_enum] = ACTIONS(101),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [22] = {
        [sym_namespace_declaration] = STATE(38),
        [sym_class_declaration] = STATE(38),
        [sym_struct_declaration] = STATE(38),
        [sym__global_attributes] = STATE(38),
        [sym__attributes] = STATE(14),
        [sym_enum_declaration] = STATE(38),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [aux_sym__attributes_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(97),
        [anon_sym_LBRACK] = ACTIONS(99),
        [anon_sym_enum] = ACTIONS(101),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [23] = {
        [sym__attribute_section] = STATE(25),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(157),
        [anon_sym_new] = ACTIONS(157),
        [anon_sym_public] = ACTIONS(157),
        [anon_sym_protected] = ACTIONS(157),
        [anon_sym_internal] = ACTIONS(157),
        [anon_sym_private] = ACTIONS(157),
        [anon_sym_sbyte] = ACTIONS(157),
        [anon_sym_byte] = ACTIONS(157),
        [anon_sym_short] = ACTIONS(157),
        [anon_sym_ushort] = ACTIONS(157),
        [anon_sym_int] = ACTIONS(157),
        [anon_sym_uint] = ACTIONS(157),
        [anon_sym_long] = ACTIONS(157),
        [anon_sym_ulong] = ACTIONS(157),
        [anon_sym_char] = ACTIONS(157),
        [anon_sym_unsafe] = ACTIONS(157),
        [anon_sym_abstract] = ACTIONS(157),
        [anon_sym_sealed] = ACTIONS(157),
        [anon_sym_static] = ACTIONS(157),
        [anon_sym_readonly] = ACTIONS(157),
        [anon_sym_volatile] = ACTIONS(157),
        [anon_sym_bool] = ACTIONS(157),
        [anon_sym_decimal] = ACTIONS(157),
        [anon_sym_double] = ACTIONS(157),
        [anon_sym_float] = ACTIONS(157),
        [anon_sym_object] = ACTIONS(157),
        [anon_sym_string] = ACTIONS(157),
        [sym_identifier_name] = ACTIONS(161),
        [sym_comment] = ACTIONS(87),
    },
    [24] = {
        [sym_attribute_list] = STATE(27),
        [sym_attribute] = STATE(28),
        [sym_identifier_name] = ACTIONS(163),
        [sym_comment] = ACTIONS(87),
    },
    [25] = {
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(167),
        [anon_sym_enum] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_sbyte] = ACTIONS(165),
        [anon_sym_byte] = ACTIONS(165),
        [anon_sym_short] = ACTIONS(165),
        [anon_sym_ushort] = ACTIONS(165),
        [anon_sym_int] = ACTIONS(165),
        [anon_sym_uint] = ACTIONS(165),
        [anon_sym_long] = ACTIONS(165),
        [anon_sym_ulong] = ACTIONS(165),
        [anon_sym_char] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_abstract] = ACTIONS(165),
        [anon_sym_sealed] = ACTIONS(165),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(165),
        [anon_sym_volatile] = ACTIONS(165),
        [anon_sym_bool] = ACTIONS(165),
        [anon_sym_decimal] = ACTIONS(165),
        [anon_sym_double] = ACTIONS(165),
        [anon_sym_float] = ACTIONS(165),
        [anon_sym_object] = ACTIONS(165),
        [anon_sym_string] = ACTIONS(165),
        [sym_identifier_name] = ACTIONS(169),
        [sym_comment] = ACTIONS(87),
    },
    [26] = {
        [sym_attribute_argument_list] = STATE(36),
        [anon_sym_RBRACK] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(171),
        [anon_sym_LPAREN] = ACTIONS(173),
        [sym_comment] = ACTIONS(87),
    },
    [27] = {
        [anon_sym_RBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(87),
    },
    [28] = {
        [aux_sym_attribute_list_repeat1] = STATE(30),
        [anon_sym_RBRACK] = ACTIONS(177),
        [anon_sym_COMMA] = ACTIONS(179),
        [sym_comment] = ACTIONS(87),
    },
    [29] = {
        [sym_attribute] = STATE(33),
        [sym_identifier_name] = ACTIONS(163),
        [sym_comment] = ACTIONS(87),
    },
    [30] = {
        [anon_sym_RBRACK] = ACTIONS(181),
        [anon_sym_COMMA] = ACTIONS(183),
        [sym_comment] = ACTIONS(87),
    },
    [31] = {
        [sym_attribute] = STATE(32),
        [sym_identifier_name] = ACTIONS(163),
        [sym_comment] = ACTIONS(87),
    },
    [32] = {
        [anon_sym_RBRACK] = ACTIONS(185),
        [anon_sym_COMMA] = ACTIONS(185),
        [sym_comment] = ACTIONS(87),
    },
    [33] = {
        [anon_sym_RBRACK] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(187),
        [sym_comment] = ACTIONS(87),
    },
    [34] = {
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_struct] = ACTIONS(189),
        [anon_sym_LBRACK] = ACTIONS(191),
        [anon_sym_enum] = ACTIONS(189),
        [anon_sym_new] = ACTIONS(189),
        [anon_sym_public] = ACTIONS(189),
        [anon_sym_protected] = ACTIONS(189),
        [anon_sym_internal] = ACTIONS(189),
        [anon_sym_private] = ACTIONS(189),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_unsafe] = ACTIONS(189),
        [anon_sym_abstract] = ACTIONS(189),
        [anon_sym_sealed] = ACTIONS(189),
        [anon_sym_static] = ACTIONS(189),
        [anon_sym_readonly] = ACTIONS(189),
        [anon_sym_volatile] = ACTIONS(189),
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(87),
    },
    [35] = {
        [anon_sym_RPAREN] = ACTIONS(195),
        [sym_comment] = ACTIONS(87),
    },
    [36] = {
        [anon_sym_RBRACK] = ACTIONS(197),
        [anon_sym_COMMA] = ACTIONS(197),
        [sym_comment] = ACTIONS(87),
    },
    [37] = {
        [anon_sym_RBRACK] = ACTIONS(199),
        [anon_sym_COMMA] = ACTIONS(199),
        [sym_comment] = ACTIONS(87),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_namespace] = ACTIONS(201),
        [anon_sym_class] = ACTIONS(201),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_enum] = ACTIONS(201),
        [anon_sym_new] = ACTIONS(201),
        [anon_sym_public] = ACTIONS(201),
        [anon_sym_protected] = ACTIONS(201),
        [anon_sym_internal] = ACTIONS(201),
        [anon_sym_private] = ACTIONS(201),
        [anon_sym_unsafe] = ACTIONS(201),
        [anon_sym_abstract] = ACTIONS(201),
        [anon_sym_sealed] = ACTIONS(201),
        [anon_sym_static] = ACTIONS(201),
        [sym_comment] = ACTIONS(87),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(203),
        [anon_sym_using] = ACTIONS(203),
        [anon_sym_namespace] = ACTIONS(203),
        [anon_sym_class] = ACTIONS(203),
        [anon_sym_struct] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_enum] = ACTIONS(203),
        [anon_sym_new] = ACTIONS(203),
        [anon_sym_public] = ACTIONS(203),
        [anon_sym_protected] = ACTIONS(203),
        [anon_sym_internal] = ACTIONS(203),
        [anon_sym_private] = ACTIONS(203),
        [anon_sym_unsafe] = ACTIONS(203),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(203),
        [sym_comment] = ACTIONS(87),
    },
    [40] = {
        [sym_namespace_declaration] = STATE(38),
        [sym_class_declaration] = STATE(38),
        [sym_struct_declaration] = STATE(38),
        [sym__global_attributes] = STATE(38),
        [sym__attributes] = STATE(14),
        [sym_enum_declaration] = STATE(38),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [aux_sym__attributes_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(205),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(97),
        [anon_sym_LBRACK] = ACTIONS(99),
        [anon_sym_enum] = ACTIONS(101),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [41] = {
        [sym_identifier_name] = ACTIONS(207),
        [sym_comment] = ACTIONS(87),
    },
    [42] = {
        [sym_type_parameter_list] = STATE(45),
        [anon_sym_LBRACE] = ACTIONS(209),
        [anon_sym_LT] = ACTIONS(211),
        [sym_comment] = ACTIONS(87),
    },
    [43] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(67),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(213),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [44] = {
        [sym__type] = STATE(171),
        [sym_generic_name] = STATE(58),
        [sym_predefined_type] = STATE(58),
        [sym_type_parameter] = STATE(172),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [45] = {
        [anon_sym_LBRACE] = ACTIONS(235),
        [sym_comment] = ACTIONS(87),
    },
    [46] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(61),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [47] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_namespace] = ACTIONS(241),
        [anon_sym_RBRACE] = ACTIONS(239),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_struct] = ACTIONS(241),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_enum] = ACTIONS(241),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(241),
        [anon_sym_byte] = ACTIONS(241),
        [anon_sym_short] = ACTIONS(241),
        [anon_sym_ushort] = ACTIONS(241),
        [anon_sym_int] = ACTIONS(241),
        [anon_sym_uint] = ACTIONS(241),
        [anon_sym_long] = ACTIONS(241),
        [anon_sym_ulong] = ACTIONS(241),
        [anon_sym_char] = ACTIONS(241),
        [anon_sym_unsafe] = ACTIONS(241),
        [anon_sym_abstract] = ACTIONS(241),
        [anon_sym_sealed] = ACTIONS(241),
        [anon_sym_static] = ACTIONS(241),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_volatile] = ACTIONS(241),
        [anon_sym_bool] = ACTIONS(241),
        [anon_sym_decimal] = ACTIONS(241),
        [anon_sym_double] = ACTIONS(241),
        [anon_sym_float] = ACTIONS(241),
        [anon_sym_object] = ACTIONS(241),
        [anon_sym_string] = ACTIONS(241),
        [sym_identifier_name] = ACTIONS(243),
        [sym_comment] = ACTIONS(87),
    },
    [48] = {
        [sym__class_modifiers] = STATE(181),
        [sym__struct_modifiers] = STATE(182),
        [sym__field_modifiers] = STATE(180),
        [anon_sym_class] = ACTIONS(245),
        [anon_sym_struct] = ACTIONS(247),
        [anon_sym_enum] = ACTIONS(249),
        [anon_sym_new] = ACTIONS(225),
        [anon_sym_public] = ACTIONS(225),
        [anon_sym_protected] = ACTIONS(225),
        [anon_sym_internal] = ACTIONS(225),
        [anon_sym_private] = ACTIONS(225),
        [anon_sym_sbyte] = ACTIONS(251),
        [anon_sym_byte] = ACTIONS(251),
        [anon_sym_short] = ACTIONS(251),
        [anon_sym_ushort] = ACTIONS(251),
        [anon_sym_int] = ACTIONS(251),
        [anon_sym_uint] = ACTIONS(251),
        [anon_sym_long] = ACTIONS(251),
        [anon_sym_ulong] = ACTIONS(251),
        [anon_sym_char] = ACTIONS(251),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(251),
        [anon_sym_decimal] = ACTIONS(251),
        [anon_sym_double] = ACTIONS(251),
        [anon_sym_float] = ACTIONS(251),
        [anon_sym_object] = ACTIONS(251),
        [anon_sym_string] = ACTIONS(251),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(87),
    },
    [49] = {
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_GT] = ACTIONS(255),
        [sym_identifier_name] = ACTIONS(257),
        [sym_comment] = ACTIONS(87),
    },
    [50] = {
        [sym__class_modifiers] = STATE(181),
        [sym__struct_modifiers] = STATE(182),
        [sym__field_modifiers] = STATE(180),
        [anon_sym_class] = ACTIONS(245),
        [anon_sym_struct] = ACTIONS(247),
        [anon_sym_new] = ACTIONS(225),
        [anon_sym_public] = ACTIONS(225),
        [anon_sym_protected] = ACTIONS(225),
        [anon_sym_internal] = ACTIONS(225),
        [anon_sym_private] = ACTIONS(225),
        [anon_sym_sbyte] = ACTIONS(251),
        [anon_sym_byte] = ACTIONS(251),
        [anon_sym_short] = ACTIONS(251),
        [anon_sym_ushort] = ACTIONS(251),
        [anon_sym_int] = ACTIONS(251),
        [anon_sym_uint] = ACTIONS(251),
        [anon_sym_long] = ACTIONS(251),
        [anon_sym_ulong] = ACTIONS(251),
        [anon_sym_char] = ACTIONS(251),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(251),
        [anon_sym_decimal] = ACTIONS(251),
        [anon_sym_double] = ACTIONS(251),
        [anon_sym_float] = ACTIONS(251),
        [anon_sym_object] = ACTIONS(251),
        [anon_sym_string] = ACTIONS(251),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(87),
    },
    [51] = {
        [sym__class_modifiers] = STATE(181),
        [sym__field_modifiers] = STATE(180),
        [anon_sym_class] = ACTIONS(245),
        [anon_sym_new] = ACTIONS(229),
        [anon_sym_public] = ACTIONS(229),
        [anon_sym_protected] = ACTIONS(229),
        [anon_sym_internal] = ACTIONS(229),
        [anon_sym_private] = ACTIONS(229),
        [anon_sym_sbyte] = ACTIONS(251),
        [anon_sym_byte] = ACTIONS(251),
        [anon_sym_short] = ACTIONS(251),
        [anon_sym_ushort] = ACTIONS(251),
        [anon_sym_int] = ACTIONS(251),
        [anon_sym_uint] = ACTIONS(251),
        [anon_sym_long] = ACTIONS(251),
        [anon_sym_ulong] = ACTIONS(251),
        [anon_sym_char] = ACTIONS(251),
        [anon_sym_unsafe] = ACTIONS(229),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(251),
        [anon_sym_decimal] = ACTIONS(251),
        [anon_sym_double] = ACTIONS(251),
        [anon_sym_float] = ACTIONS(251),
        [anon_sym_object] = ACTIONS(251),
        [anon_sym_string] = ACTIONS(251),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(87),
    },
    [52] = {
        [sym__field_modifiers] = STATE(180),
        [anon_sym_new] = ACTIONS(231),
        [anon_sym_public] = ACTIONS(231),
        [anon_sym_protected] = ACTIONS(231),
        [anon_sym_internal] = ACTIONS(231),
        [anon_sym_private] = ACTIONS(231),
        [anon_sym_sbyte] = ACTIONS(251),
        [anon_sym_byte] = ACTIONS(251),
        [anon_sym_short] = ACTIONS(251),
        [anon_sym_ushort] = ACTIONS(251),
        [anon_sym_int] = ACTIONS(251),
        [anon_sym_uint] = ACTIONS(251),
        [anon_sym_long] = ACTIONS(251),
        [anon_sym_ulong] = ACTIONS(251),
        [anon_sym_char] = ACTIONS(251),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_static] = ACTIONS(231),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(251),
        [anon_sym_decimal] = ACTIONS(251),
        [anon_sym_double] = ACTIONS(251),
        [anon_sym_float] = ACTIONS(251),
        [anon_sym_object] = ACTIONS(251),
        [anon_sym_string] = ACTIONS(251),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(87),
    },
    [53] = {
        [sym_type_parameter_list] = STATE(170),
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_LT] = ACTIONS(211),
        [anon_sym_GT] = ACTIONS(259),
        [sym_identifier_name] = ACTIONS(261),
        [sym_comment] = ACTIONS(87),
    },
    [54] = {
        [anon_sym_RBRACE] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(265),
        [anon_sym_struct] = ACTIONS(265),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_enum] = ACTIONS(265),
        [anon_sym_new] = ACTIONS(265),
        [anon_sym_public] = ACTIONS(265),
        [anon_sym_protected] = ACTIONS(265),
        [anon_sym_internal] = ACTIONS(265),
        [anon_sym_private] = ACTIONS(265),
        [anon_sym_sbyte] = ACTIONS(265),
        [anon_sym_byte] = ACTIONS(265),
        [anon_sym_short] = ACTIONS(265),
        [anon_sym_ushort] = ACTIONS(265),
        [anon_sym_int] = ACTIONS(265),
        [anon_sym_uint] = ACTIONS(265),
        [anon_sym_long] = ACTIONS(265),
        [anon_sym_ulong] = ACTIONS(265),
        [anon_sym_char] = ACTIONS(265),
        [anon_sym_unsafe] = ACTIONS(265),
        [anon_sym_abstract] = ACTIONS(265),
        [anon_sym_sealed] = ACTIONS(265),
        [anon_sym_static] = ACTIONS(265),
        [anon_sym_readonly] = ACTIONS(265),
        [anon_sym_volatile] = ACTIONS(265),
        [anon_sym_bool] = ACTIONS(265),
        [anon_sym_decimal] = ACTIONS(265),
        [anon_sym_double] = ACTIONS(265),
        [anon_sym_float] = ACTIONS(265),
        [anon_sym_object] = ACTIONS(265),
        [anon_sym_string] = ACTIONS(265),
        [sym_identifier_name] = ACTIONS(267),
        [sym_comment] = ACTIONS(87),
    },
    [55] = {
        [sym_enum_modifier] = STATE(147),
        [sym_variable_declaration] = STATE(64),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(148),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(149),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(150),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [anon_sym_class] = ACTIONS(269),
        [anon_sym_struct] = ACTIONS(271),
        [anon_sym_enum] = ACTIONS(273),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [56] = {
        [anon_sym_SEMI] = ACTIONS(275),
        [sym_comment] = ACTIONS(87),
    },
    [57] = {
        [sym_variable_declarator] = STATE(79),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(87),
    },
    [58] = {
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_GT] = ACTIONS(259),
        [sym_identifier_name] = ACTIONS(261),
        [sym_comment] = ACTIONS(87),
    },
    [59] = {
        [sym_variable_declaration] = STATE(64),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_predefined_type] = STATE(58),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [60] = {
        [anon_sym_sbyte] = ACTIONS(279),
        [anon_sym_byte] = ACTIONS(279),
        [anon_sym_short] = ACTIONS(279),
        [anon_sym_ushort] = ACTIONS(279),
        [anon_sym_int] = ACTIONS(279),
        [anon_sym_uint] = ACTIONS(279),
        [anon_sym_long] = ACTIONS(279),
        [anon_sym_ulong] = ACTIONS(279),
        [anon_sym_char] = ACTIONS(279),
        [anon_sym_bool] = ACTIONS(279),
        [anon_sym_decimal] = ACTIONS(279),
        [anon_sym_double] = ACTIONS(279),
        [anon_sym_float] = ACTIONS(279),
        [anon_sym_object] = ACTIONS(279),
        [anon_sym_string] = ACTIONS(279),
        [sym_identifier_name] = ACTIONS(281),
        [sym_comment] = ACTIONS(87),
    },
    [61] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [62] = {
        [ts_builtin_sym_end] = ACTIONS(285),
        [anon_sym_namespace] = ACTIONS(287),
        [anon_sym_RBRACE] = ACTIONS(285),
        [anon_sym_class] = ACTIONS(287),
        [anon_sym_struct] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_enum] = ACTIONS(287),
        [anon_sym_new] = ACTIONS(287),
        [anon_sym_public] = ACTIONS(287),
        [anon_sym_protected] = ACTIONS(287),
        [anon_sym_internal] = ACTIONS(287),
        [anon_sym_private] = ACTIONS(287),
        [anon_sym_sbyte] = ACTIONS(287),
        [anon_sym_byte] = ACTIONS(287),
        [anon_sym_short] = ACTIONS(287),
        [anon_sym_ushort] = ACTIONS(287),
        [anon_sym_int] = ACTIONS(287),
        [anon_sym_uint] = ACTIONS(287),
        [anon_sym_long] = ACTIONS(287),
        [anon_sym_ulong] = ACTIONS(287),
        [anon_sym_char] = ACTIONS(287),
        [anon_sym_unsafe] = ACTIONS(287),
        [anon_sym_abstract] = ACTIONS(287),
        [anon_sym_sealed] = ACTIONS(287),
        [anon_sym_static] = ACTIONS(287),
        [anon_sym_readonly] = ACTIONS(287),
        [anon_sym_volatile] = ACTIONS(287),
        [anon_sym_bool] = ACTIONS(287),
        [anon_sym_decimal] = ACTIONS(287),
        [anon_sym_double] = ACTIONS(287),
        [anon_sym_float] = ACTIONS(287),
        [anon_sym_object] = ACTIONS(287),
        [anon_sym_string] = ACTIONS(287),
        [sym_identifier_name] = ACTIONS(289),
        [sym_comment] = ACTIONS(87),
    },
    [63] = {
        [anon_sym_RBRACE] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(293),
        [anon_sym_struct] = ACTIONS(293),
        [anon_sym_LBRACK] = ACTIONS(291),
        [anon_sym_enum] = ACTIONS(293),
        [anon_sym_new] = ACTIONS(293),
        [anon_sym_public] = ACTIONS(293),
        [anon_sym_protected] = ACTIONS(293),
        [anon_sym_internal] = ACTIONS(293),
        [anon_sym_private] = ACTIONS(293),
        [anon_sym_sbyte] = ACTIONS(293),
        [anon_sym_byte] = ACTIONS(293),
        [anon_sym_short] = ACTIONS(293),
        [anon_sym_ushort] = ACTIONS(293),
        [anon_sym_int] = ACTIONS(293),
        [anon_sym_uint] = ACTIONS(293),
        [anon_sym_long] = ACTIONS(293),
        [anon_sym_ulong] = ACTIONS(293),
        [anon_sym_char] = ACTIONS(293),
        [anon_sym_unsafe] = ACTIONS(293),
        [anon_sym_abstract] = ACTIONS(293),
        [anon_sym_sealed] = ACTIONS(293),
        [anon_sym_static] = ACTIONS(293),
        [anon_sym_readonly] = ACTIONS(293),
        [anon_sym_volatile] = ACTIONS(293),
        [anon_sym_bool] = ACTIONS(293),
        [anon_sym_decimal] = ACTIONS(293),
        [anon_sym_double] = ACTIONS(293),
        [anon_sym_float] = ACTIONS(293),
        [anon_sym_object] = ACTIONS(293),
        [anon_sym_string] = ACTIONS(293),
        [sym_identifier_name] = ACTIONS(295),
        [sym_comment] = ACTIONS(87),
    },
    [64] = {
        [anon_sym_SEMI] = ACTIONS(297),
        [sym_comment] = ACTIONS(87),
    },
    [65] = {
        [anon_sym_RBRACE] = ACTIONS(299),
        [anon_sym_class] = ACTIONS(301),
        [anon_sym_struct] = ACTIONS(301),
        [anon_sym_LBRACK] = ACTIONS(299),
        [anon_sym_enum] = ACTIONS(301),
        [anon_sym_new] = ACTIONS(301),
        [anon_sym_public] = ACTIONS(301),
        [anon_sym_protected] = ACTIONS(301),
        [anon_sym_internal] = ACTIONS(301),
        [anon_sym_private] = ACTIONS(301),
        [anon_sym_sbyte] = ACTIONS(301),
        [anon_sym_byte] = ACTIONS(301),
        [anon_sym_short] = ACTIONS(301),
        [anon_sym_ushort] = ACTIONS(301),
        [anon_sym_int] = ACTIONS(301),
        [anon_sym_uint] = ACTIONS(301),
        [anon_sym_long] = ACTIONS(301),
        [anon_sym_ulong] = ACTIONS(301),
        [anon_sym_char] = ACTIONS(301),
        [anon_sym_unsafe] = ACTIONS(301),
        [anon_sym_abstract] = ACTIONS(301),
        [anon_sym_sealed] = ACTIONS(301),
        [anon_sym_static] = ACTIONS(301),
        [anon_sym_readonly] = ACTIONS(301),
        [anon_sym_volatile] = ACTIONS(301),
        [anon_sym_bool] = ACTIONS(301),
        [anon_sym_decimal] = ACTIONS(301),
        [anon_sym_double] = ACTIONS(301),
        [anon_sym_float] = ACTIONS(301),
        [anon_sym_object] = ACTIONS(301),
        [anon_sym_string] = ACTIONS(301),
        [sym_identifier_name] = ACTIONS(303),
        [sym_comment] = ACTIONS(87),
    },
    [66] = {
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
        [sym_comment] = ACTIONS(87),
    },
    [67] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [68] = {
        [sym_identifier_name] = ACTIONS(311),
        [sym_comment] = ACTIONS(87),
    },
    [69] = {
        [sym_type_parameter_list] = STATE(71),
        [anon_sym_LBRACE] = ACTIONS(313),
        [anon_sym_LT] = ACTIONS(211),
        [sym_comment] = ACTIONS(87),
    },
    [70] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(77),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(315),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [71] = {
        [anon_sym_LBRACE] = ACTIONS(317),
        [sym_comment] = ACTIONS(87),
    },
    [72] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(74),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(319),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [73] = {
        [ts_builtin_sym_end] = ACTIONS(321),
        [anon_sym_namespace] = ACTIONS(323),
        [anon_sym_RBRACE] = ACTIONS(321),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_struct] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_enum] = ACTIONS(323),
        [anon_sym_new] = ACTIONS(323),
        [anon_sym_public] = ACTIONS(323),
        [anon_sym_protected] = ACTIONS(323),
        [anon_sym_internal] = ACTIONS(323),
        [anon_sym_private] = ACTIONS(323),
        [anon_sym_sbyte] = ACTIONS(323),
        [anon_sym_byte] = ACTIONS(323),
        [anon_sym_short] = ACTIONS(323),
        [anon_sym_ushort] = ACTIONS(323),
        [anon_sym_int] = ACTIONS(323),
        [anon_sym_uint] = ACTIONS(323),
        [anon_sym_long] = ACTIONS(323),
        [anon_sym_ulong] = ACTIONS(323),
        [anon_sym_char] = ACTIONS(323),
        [anon_sym_unsafe] = ACTIONS(323),
        [anon_sym_abstract] = ACTIONS(323),
        [anon_sym_sealed] = ACTIONS(323),
        [anon_sym_static] = ACTIONS(323),
        [anon_sym_readonly] = ACTIONS(323),
        [anon_sym_volatile] = ACTIONS(323),
        [anon_sym_bool] = ACTIONS(323),
        [anon_sym_decimal] = ACTIONS(323),
        [anon_sym_double] = ACTIONS(323),
        [anon_sym_float] = ACTIONS(323),
        [anon_sym_object] = ACTIONS(323),
        [anon_sym_string] = ACTIONS(323),
        [sym_identifier_name] = ACTIONS(325),
        [sym_comment] = ACTIONS(87),
    },
    [74] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(327),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [75] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_namespace] = ACTIONS(331),
        [anon_sym_RBRACE] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(331),
        [anon_sym_struct] = ACTIONS(331),
        [anon_sym_LBRACK] = ACTIONS(329),
        [anon_sym_enum] = ACTIONS(331),
        [anon_sym_new] = ACTIONS(331),
        [anon_sym_public] = ACTIONS(331),
        [anon_sym_protected] = ACTIONS(331),
        [anon_sym_internal] = ACTIONS(331),
        [anon_sym_private] = ACTIONS(331),
        [anon_sym_sbyte] = ACTIONS(331),
        [anon_sym_byte] = ACTIONS(331),
        [anon_sym_short] = ACTIONS(331),
        [anon_sym_ushort] = ACTIONS(331),
        [anon_sym_int] = ACTIONS(331),
        [anon_sym_uint] = ACTIONS(331),
        [anon_sym_long] = ACTIONS(331),
        [anon_sym_ulong] = ACTIONS(331),
        [anon_sym_char] = ACTIONS(331),
        [anon_sym_unsafe] = ACTIONS(331),
        [anon_sym_abstract] = ACTIONS(331),
        [anon_sym_sealed] = ACTIONS(331),
        [anon_sym_static] = ACTIONS(331),
        [anon_sym_readonly] = ACTIONS(331),
        [anon_sym_volatile] = ACTIONS(331),
        [anon_sym_bool] = ACTIONS(331),
        [anon_sym_decimal] = ACTIONS(331),
        [anon_sym_double] = ACTIONS(331),
        [anon_sym_float] = ACTIONS(331),
        [anon_sym_object] = ACTIONS(331),
        [anon_sym_string] = ACTIONS(331),
        [sym_identifier_name] = ACTIONS(333),
        [sym_comment] = ACTIONS(87),
    },
    [76] = {
        [ts_builtin_sym_end] = ACTIONS(335),
        [anon_sym_namespace] = ACTIONS(337),
        [anon_sym_RBRACE] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(337),
        [anon_sym_struct] = ACTIONS(337),
        [anon_sym_LBRACK] = ACTIONS(335),
        [anon_sym_enum] = ACTIONS(337),
        [anon_sym_new] = ACTIONS(337),
        [anon_sym_public] = ACTIONS(337),
        [anon_sym_protected] = ACTIONS(337),
        [anon_sym_internal] = ACTIONS(337),
        [anon_sym_private] = ACTIONS(337),
        [anon_sym_sbyte] = ACTIONS(337),
        [anon_sym_byte] = ACTIONS(337),
        [anon_sym_short] = ACTIONS(337),
        [anon_sym_ushort] = ACTIONS(337),
        [anon_sym_int] = ACTIONS(337),
        [anon_sym_uint] = ACTIONS(337),
        [anon_sym_long] = ACTIONS(337),
        [anon_sym_ulong] = ACTIONS(337),
        [anon_sym_char] = ACTIONS(337),
        [anon_sym_unsafe] = ACTIONS(337),
        [anon_sym_abstract] = ACTIONS(337),
        [anon_sym_sealed] = ACTIONS(337),
        [anon_sym_static] = ACTIONS(337),
        [anon_sym_readonly] = ACTIONS(337),
        [anon_sym_volatile] = ACTIONS(337),
        [anon_sym_bool] = ACTIONS(337),
        [anon_sym_decimal] = ACTIONS(337),
        [anon_sym_double] = ACTIONS(337),
        [anon_sym_float] = ACTIONS(337),
        [anon_sym_object] = ACTIONS(337),
        [anon_sym_string] = ACTIONS(337),
        [sym_identifier_name] = ACTIONS(339),
        [sym_comment] = ACTIONS(87),
    },
    [77] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(319),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [78] = {
        [sym_equals_value_clause] = STATE(86),
        [anon_sym_SEMI] = ACTIONS(341),
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_EQ] = ACTIONS(343),
        [sym_comment] = ACTIONS(87),
    },
    [79] = {
        [aux_sym_variable_declaration_repeat1] = STATE(81),
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_COMMA] = ACTIONS(347),
        [sym_comment] = ACTIONS(87),
    },
    [80] = {
        [sym_variable_declarator] = STATE(84),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(87),
    },
    [81] = {
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(351),
        [sym_comment] = ACTIONS(87),
    },
    [82] = {
        [sym_variable_declarator] = STATE(83),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(87),
    },
    [83] = {
        [anon_sym_SEMI] = ACTIONS(353),
        [anon_sym_COMMA] = ACTIONS(353),
        [sym_comment] = ACTIONS(87),
    },
    [84] = {
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_COMMA] = ACTIONS(355),
        [sym_comment] = ACTIONS(87),
    },
    [85] = {
        [sym__literal] = STATE(95),
        [sym_boolean_literal] = STATE(91),
        [sym_character_literal] = STATE(91),
        [sym_integer_literal] = STATE(91),
        [sym_real_literal] = STATE(91),
        [sym_string_literal] = STATE(91),
        [sym__regular_string_literal] = STATE(96),
        [sym__verbatim_string_literal] = STATE(96),
        [anon_sym_true] = ACTIONS(357),
        [anon_sym_false] = ACTIONS(357),
        [anon_sym_SQUOTE] = ACTIONS(359),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(361),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(363),
        [sym_null_literal] = ACTIONS(365),
        [anon_sym_DOT] = ACTIONS(367),
        [anon_sym_DQUOTE] = ACTIONS(369),
        [anon_sym_AT_DQUOTE] = ACTIONS(371),
        [sym_comment] = ACTIONS(87),
    },
    [86] = {
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_COMMA] = ACTIONS(373),
        [sym_comment] = ACTIONS(87),
    },
    [87] = {
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_RBRACE] = ACTIONS(375),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(87),
    },
    [88] = {
        [sym__unicode_escape_sequence] = STATE(118),
        [sym__simple_escape_sequence] = STATE(118),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(377),
        [sym__hexadecimal_escape_sequence] = ACTIONS(377),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(379),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(379),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(381),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(381),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(381),
        [anon_sym_BSLASH0] = ACTIONS(381),
        [anon_sym_BSLASHa] = ACTIONS(381),
        [anon_sym_BSLASHb] = ACTIONS(381),
        [anon_sym_BSLASHf] = ACTIONS(381),
        [anon_sym_BSLASHn] = ACTIONS(381),
        [anon_sym_BSLASHr] = ACTIONS(381),
        [anon_sym_BSLASHt] = ACTIONS(381),
        [anon_sym_BSLASHv] = ACTIONS(381),
        [sym_comment] = ACTIONS(87),
    },
    [89] = {
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_RBRACE] = ACTIONS(383),
        [anon_sym_COMMA] = ACTIONS(383),
        [sym__integer_type_suffix] = ACTIONS(385),
        [anon_sym_DOT] = ACTIONS(387),
        [sym__real_type_suffix] = ACTIONS(389),
        [sym__exponent_part] = ACTIONS(391),
        [sym_comment] = ACTIONS(87),
    },
    [90] = {
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_RBRACE] = ACTIONS(383),
        [anon_sym_COMMA] = ACTIONS(383),
        [sym__integer_type_suffix] = ACTIONS(385),
        [sym_comment] = ACTIONS(87),
    },
    [91] = {
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_RBRACE] = ACTIONS(393),
        [anon_sym_COMMA] = ACTIONS(393),
        [sym_comment] = ACTIONS(87),
    },
    [92] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(395),
        [sym_comment] = ACTIONS(87),
    },
    [93] = {
        [sym__unicode_escape_sequence] = STATE(99),
        [sym__simple_escape_sequence] = STATE(99),
        [sym__regular_string_literal_character] = STATE(103),
        [aux_sym__regular_string_literal_repeat1] = STATE(104),
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
        [anon_sym_DQUOTE] = ACTIONS(403),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(397),
        [sym_comment] = ACTIONS(87),
    },
    [94] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(405),
        [sym_comment] = ACTIONS(407),
    },
    [95] = {
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_RBRACE] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(409),
        [sym_comment] = ACTIONS(87),
    },
    [96] = {
        [anon_sym_SEMI] = ACTIONS(411),
        [anon_sym_RBRACE] = ACTIONS(411),
        [anon_sym_COMMA] = ACTIONS(411),
        [sym_comment] = ACTIONS(87),
    },
    [97] = {
        [anon_sym_DQUOTE] = ACTIONS(413),
        [sym_comment] = ACTIONS(87),
    },
    [98] = {
        [anon_sym_SEMI] = ACTIONS(415),
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(87),
    },
    [99] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(417),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(419),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(419),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(419),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(419),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(419),
        [anon_sym_BSLASH0] = ACTIONS(419),
        [anon_sym_BSLASHa] = ACTIONS(419),
        [anon_sym_BSLASHb] = ACTIONS(419),
        [anon_sym_BSLASHf] = ACTIONS(419),
        [anon_sym_BSLASHn] = ACTIONS(419),
        [anon_sym_BSLASHr] = ACTIONS(419),
        [anon_sym_BSLASHt] = ACTIONS(419),
        [anon_sym_BSLASHv] = ACTIONS(419),
        [anon_sym_DQUOTE] = ACTIONS(419),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(417),
        [sym_comment] = ACTIONS(87),
    },
    [100] = {
        [anon_sym_SQUOTE] = ACTIONS(421),
        [sym__hexadecimal_escape_sequence] = ACTIONS(423),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(421),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(421),
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
        [anon_sym_DQUOTE] = ACTIONS(421),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(425),
        [sym_comment] = ACTIONS(87),
    },
    [101] = {
        [anon_sym_SQUOTE] = ACTIONS(427),
        [sym__hexadecimal_escape_sequence] = ACTIONS(429),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(427),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(427),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(427),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(427),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(427),
        [anon_sym_BSLASH0] = ACTIONS(427),
        [anon_sym_BSLASHa] = ACTIONS(427),
        [anon_sym_BSLASHb] = ACTIONS(427),
        [anon_sym_BSLASHf] = ACTIONS(427),
        [anon_sym_BSLASHn] = ACTIONS(427),
        [anon_sym_BSLASHr] = ACTIONS(427),
        [anon_sym_BSLASHt] = ACTIONS(427),
        [anon_sym_BSLASHv] = ACTIONS(427),
        [anon_sym_DQUOTE] = ACTIONS(427),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(431),
        [sym_comment] = ACTIONS(87),
    },
    [102] = {
        [anon_sym_SEMI] = ACTIONS(433),
        [anon_sym_RBRACE] = ACTIONS(433),
        [anon_sym_COMMA] = ACTIONS(433),
        [sym_comment] = ACTIONS(87),
    },
    [103] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(435),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(437),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(437),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(437),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(437),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(437),
        [anon_sym_BSLASH0] = ACTIONS(437),
        [anon_sym_BSLASHa] = ACTIONS(437),
        [anon_sym_BSLASHb] = ACTIONS(437),
        [anon_sym_BSLASHf] = ACTIONS(437),
        [anon_sym_BSLASHn] = ACTIONS(437),
        [anon_sym_BSLASHr] = ACTIONS(437),
        [anon_sym_BSLASHt] = ACTIONS(437),
        [anon_sym_BSLASHv] = ACTIONS(437),
        [anon_sym_DQUOTE] = ACTIONS(437),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(435),
        [sym_comment] = ACTIONS(87),
    },
    [104] = {
        [sym__unicode_escape_sequence] = STATE(99),
        [sym__simple_escape_sequence] = STATE(99),
        [sym__regular_string_literal_character] = STATE(106),
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
        [anon_sym_DQUOTE] = ACTIONS(439),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(397),
        [sym_comment] = ACTIONS(87),
    },
    [105] = {
        [anon_sym_SEMI] = ACTIONS(441),
        [anon_sym_RBRACE] = ACTIONS(441),
        [anon_sym_COMMA] = ACTIONS(441),
        [sym_comment] = ACTIONS(87),
    },
    [106] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(443),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(445),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(445),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(445),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(445),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(445),
        [anon_sym_BSLASH0] = ACTIONS(445),
        [anon_sym_BSLASHa] = ACTIONS(445),
        [anon_sym_BSLASHb] = ACTIONS(445),
        [anon_sym_BSLASHf] = ACTIONS(445),
        [anon_sym_BSLASHn] = ACTIONS(445),
        [anon_sym_BSLASHr] = ACTIONS(445),
        [anon_sym_BSLASHt] = ACTIONS(445),
        [anon_sym_BSLASHv] = ACTIONS(445),
        [anon_sym_DQUOTE] = ACTIONS(445),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(443),
        [sym_comment] = ACTIONS(87),
    },
    [107] = {
        [anon_sym_SEMI] = ACTIONS(447),
        [anon_sym_RBRACE] = ACTIONS(447),
        [anon_sym_COMMA] = ACTIONS(447),
        [sym__real_type_suffix] = ACTIONS(449),
        [sym__exponent_part] = ACTIONS(451),
        [sym_comment] = ACTIONS(87),
    },
    [108] = {
        [anon_sym_SEMI] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(453),
        [anon_sym_COMMA] = ACTIONS(453),
        [sym_comment] = ACTIONS(87),
    },
    [109] = {
        [anon_sym_SEMI] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(453),
        [anon_sym_COMMA] = ACTIONS(453),
        [sym__real_type_suffix] = ACTIONS(455),
        [sym_comment] = ACTIONS(87),
    },
    [110] = {
        [anon_sym_SEMI] = ACTIONS(457),
        [anon_sym_RBRACE] = ACTIONS(457),
        [anon_sym_COMMA] = ACTIONS(457),
        [sym_comment] = ACTIONS(87),
    },
    [111] = {
        [anon_sym_SEMI] = ACTIONS(459),
        [anon_sym_RBRACE] = ACTIONS(459),
        [anon_sym_COMMA] = ACTIONS(459),
        [sym_comment] = ACTIONS(87),
    },
    [112] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(461),
        [sym_comment] = ACTIONS(87),
    },
    [113] = {
        [anon_sym_SEMI] = ACTIONS(447),
        [anon_sym_RBRACE] = ACTIONS(447),
        [anon_sym_COMMA] = ACTIONS(447),
        [sym_comment] = ACTIONS(87),
    },
    [114] = {
        [anon_sym_SEMI] = ACTIONS(447),
        [anon_sym_RBRACE] = ACTIONS(447),
        [anon_sym_COMMA] = ACTIONS(447),
        [sym__real_type_suffix] = ACTIONS(449),
        [sym_comment] = ACTIONS(87),
    },
    [115] = {
        [anon_sym_SEMI] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(453),
        [anon_sym_COMMA] = ACTIONS(453),
        [sym__real_type_suffix] = ACTIONS(455),
        [sym__exponent_part] = ACTIONS(463),
        [sym_comment] = ACTIONS(87),
    },
    [116] = {
        [anon_sym_SEMI] = ACTIONS(457),
        [anon_sym_RBRACE] = ACTIONS(457),
        [anon_sym_COMMA] = ACTIONS(457),
        [sym__real_type_suffix] = ACTIONS(465),
        [sym_comment] = ACTIONS(87),
    },
    [117] = {
        [anon_sym_SEMI] = ACTIONS(467),
        [anon_sym_RBRACE] = ACTIONS(467),
        [anon_sym_COMMA] = ACTIONS(467),
        [sym_comment] = ACTIONS(87),
    },
    [118] = {
        [anon_sym_SQUOTE] = ACTIONS(469),
        [sym_comment] = ACTIONS(87),
    },
    [119] = {
        [anon_sym_SQUOTE] = ACTIONS(421),
        [sym_comment] = ACTIONS(87),
    },
    [120] = {
        [anon_sym_SQUOTE] = ACTIONS(427),
        [sym_comment] = ACTIONS(87),
    },
    [121] = {
        [anon_sym_SEMI] = ACTIONS(471),
        [anon_sym_RBRACE] = ACTIONS(471),
        [anon_sym_COMMA] = ACTIONS(471),
        [sym_comment] = ACTIONS(87),
    },
    [122] = {
        [anon_sym_RBRACE] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_struct] = ACTIONS(475),
        [anon_sym_LBRACK] = ACTIONS(473),
        [anon_sym_enum] = ACTIONS(475),
        [anon_sym_new] = ACTIONS(475),
        [anon_sym_public] = ACTIONS(475),
        [anon_sym_protected] = ACTIONS(475),
        [anon_sym_internal] = ACTIONS(475),
        [anon_sym_private] = ACTIONS(475),
        [anon_sym_sbyte] = ACTIONS(475),
        [anon_sym_byte] = ACTIONS(475),
        [anon_sym_short] = ACTIONS(475),
        [anon_sym_ushort] = ACTIONS(475),
        [anon_sym_int] = ACTIONS(475),
        [anon_sym_uint] = ACTIONS(475),
        [anon_sym_long] = ACTIONS(475),
        [anon_sym_ulong] = ACTIONS(475),
        [anon_sym_char] = ACTIONS(475),
        [anon_sym_unsafe] = ACTIONS(475),
        [anon_sym_abstract] = ACTIONS(475),
        [anon_sym_sealed] = ACTIONS(475),
        [anon_sym_static] = ACTIONS(475),
        [anon_sym_readonly] = ACTIONS(475),
        [anon_sym_volatile] = ACTIONS(475),
        [anon_sym_bool] = ACTIONS(475),
        [anon_sym_decimal] = ACTIONS(475),
        [anon_sym_double] = ACTIONS(475),
        [anon_sym_float] = ACTIONS(475),
        [anon_sym_object] = ACTIONS(475),
        [anon_sym_string] = ACTIONS(475),
        [sym_identifier_name] = ACTIONS(477),
        [sym_comment] = ACTIONS(87),
    },
    [123] = {
        [sym_identifier_name] = ACTIONS(479),
        [sym_comment] = ACTIONS(87),
    },
    [124] = {
        [sym__enum_base] = STATE(127),
        [sym__enum_body] = STATE(128),
        [anon_sym_LBRACE] = ACTIONS(481),
        [anon_sym_COLON] = ACTIONS(483),
        [sym_comment] = ACTIONS(87),
    },
    [125] = {
        [sym__attributes] = STATE(135),
        [sym_enum_member_declaration] = STATE(136),
        [sym__attribute_section] = STATE(16),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_identifier_name] = ACTIONS(485),
        [sym_comment] = ACTIONS(87),
    },
    [126] = {
        [sym__integral_type] = STATE(133),
        [anon_sym_sbyte] = ACTIONS(487),
        [anon_sym_byte] = ACTIONS(487),
        [anon_sym_short] = ACTIONS(487),
        [anon_sym_ushort] = ACTIONS(487),
        [anon_sym_int] = ACTIONS(487),
        [anon_sym_uint] = ACTIONS(487),
        [anon_sym_long] = ACTIONS(487),
        [anon_sym_ulong] = ACTIONS(487),
        [anon_sym_char] = ACTIONS(487),
        [sym_comment] = ACTIONS(87),
    },
    [127] = {
        [sym__enum_body] = STATE(130),
        [anon_sym_LBRACE] = ACTIONS(481),
        [sym_comment] = ACTIONS(87),
    },
    [128] = {
        [ts_builtin_sym_end] = ACTIONS(489),
        [anon_sym_SEMI] = ACTIONS(491),
        [anon_sym_namespace] = ACTIONS(493),
        [anon_sym_RBRACE] = ACTIONS(489),
        [anon_sym_class] = ACTIONS(493),
        [anon_sym_struct] = ACTIONS(493),
        [anon_sym_LBRACK] = ACTIONS(489),
        [anon_sym_enum] = ACTIONS(493),
        [anon_sym_new] = ACTIONS(493),
        [anon_sym_public] = ACTIONS(493),
        [anon_sym_protected] = ACTIONS(493),
        [anon_sym_internal] = ACTIONS(493),
        [anon_sym_private] = ACTIONS(493),
        [anon_sym_sbyte] = ACTIONS(493),
        [anon_sym_byte] = ACTIONS(493),
        [anon_sym_short] = ACTIONS(493),
        [anon_sym_ushort] = ACTIONS(493),
        [anon_sym_int] = ACTIONS(493),
        [anon_sym_uint] = ACTIONS(493),
        [anon_sym_long] = ACTIONS(493),
        [anon_sym_ulong] = ACTIONS(493),
        [anon_sym_char] = ACTIONS(493),
        [anon_sym_unsafe] = ACTIONS(493),
        [anon_sym_abstract] = ACTIONS(493),
        [anon_sym_sealed] = ACTIONS(493),
        [anon_sym_static] = ACTIONS(493),
        [anon_sym_readonly] = ACTIONS(493),
        [anon_sym_volatile] = ACTIONS(493),
        [anon_sym_bool] = ACTIONS(493),
        [anon_sym_decimal] = ACTIONS(493),
        [anon_sym_double] = ACTIONS(493),
        [anon_sym_float] = ACTIONS(493),
        [anon_sym_object] = ACTIONS(493),
        [anon_sym_string] = ACTIONS(493),
        [sym_identifier_name] = ACTIONS(495),
        [sym_comment] = ACTIONS(87),
    },
    [129] = {
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_namespace] = ACTIONS(499),
        [anon_sym_RBRACE] = ACTIONS(497),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_struct] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(497),
        [anon_sym_enum] = ACTIONS(499),
        [anon_sym_new] = ACTIONS(499),
        [anon_sym_public] = ACTIONS(499),
        [anon_sym_protected] = ACTIONS(499),
        [anon_sym_internal] = ACTIONS(499),
        [anon_sym_private] = ACTIONS(499),
        [anon_sym_sbyte] = ACTIONS(499),
        [anon_sym_byte] = ACTIONS(499),
        [anon_sym_short] = ACTIONS(499),
        [anon_sym_ushort] = ACTIONS(499),
        [anon_sym_int] = ACTIONS(499),
        [anon_sym_uint] = ACTIONS(499),
        [anon_sym_long] = ACTIONS(499),
        [anon_sym_ulong] = ACTIONS(499),
        [anon_sym_char] = ACTIONS(499),
        [anon_sym_unsafe] = ACTIONS(499),
        [anon_sym_abstract] = ACTIONS(499),
        [anon_sym_sealed] = ACTIONS(499),
        [anon_sym_static] = ACTIONS(499),
        [anon_sym_readonly] = ACTIONS(499),
        [anon_sym_volatile] = ACTIONS(499),
        [anon_sym_bool] = ACTIONS(499),
        [anon_sym_decimal] = ACTIONS(499),
        [anon_sym_double] = ACTIONS(499),
        [anon_sym_float] = ACTIONS(499),
        [anon_sym_object] = ACTIONS(499),
        [anon_sym_string] = ACTIONS(499),
        [sym_identifier_name] = ACTIONS(501),
        [sym_comment] = ACTIONS(87),
    },
    [130] = {
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_SEMI] = ACTIONS(503),
        [anon_sym_namespace] = ACTIONS(499),
        [anon_sym_RBRACE] = ACTIONS(497),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_struct] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(497),
        [anon_sym_enum] = ACTIONS(499),
        [anon_sym_new] = ACTIONS(499),
        [anon_sym_public] = ACTIONS(499),
        [anon_sym_protected] = ACTIONS(499),
        [anon_sym_internal] = ACTIONS(499),
        [anon_sym_private] = ACTIONS(499),
        [anon_sym_sbyte] = ACTIONS(499),
        [anon_sym_byte] = ACTIONS(499),
        [anon_sym_short] = ACTIONS(499),
        [anon_sym_ushort] = ACTIONS(499),
        [anon_sym_int] = ACTIONS(499),
        [anon_sym_uint] = ACTIONS(499),
        [anon_sym_long] = ACTIONS(499),
        [anon_sym_ulong] = ACTIONS(499),
        [anon_sym_char] = ACTIONS(499),
        [anon_sym_unsafe] = ACTIONS(499),
        [anon_sym_abstract] = ACTIONS(499),
        [anon_sym_sealed] = ACTIONS(499),
        [anon_sym_static] = ACTIONS(499),
        [anon_sym_readonly] = ACTIONS(499),
        [anon_sym_volatile] = ACTIONS(499),
        [anon_sym_bool] = ACTIONS(499),
        [anon_sym_decimal] = ACTIONS(499),
        [anon_sym_double] = ACTIONS(499),
        [anon_sym_float] = ACTIONS(499),
        [anon_sym_object] = ACTIONS(499),
        [anon_sym_string] = ACTIONS(499),
        [sym_identifier_name] = ACTIONS(501),
        [sym_comment] = ACTIONS(87),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(505),
        [anon_sym_namespace] = ACTIONS(507),
        [anon_sym_RBRACE] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(507),
        [anon_sym_struct] = ACTIONS(507),
        [anon_sym_LBRACK] = ACTIONS(505),
        [anon_sym_enum] = ACTIONS(507),
        [anon_sym_new] = ACTIONS(507),
        [anon_sym_public] = ACTIONS(507),
        [anon_sym_protected] = ACTIONS(507),
        [anon_sym_internal] = ACTIONS(507),
        [anon_sym_private] = ACTIONS(507),
        [anon_sym_sbyte] = ACTIONS(507),
        [anon_sym_byte] = ACTIONS(507),
        [anon_sym_short] = ACTIONS(507),
        [anon_sym_ushort] = ACTIONS(507),
        [anon_sym_int] = ACTIONS(507),
        [anon_sym_uint] = ACTIONS(507),
        [anon_sym_long] = ACTIONS(507),
        [anon_sym_ulong] = ACTIONS(507),
        [anon_sym_char] = ACTIONS(507),
        [anon_sym_unsafe] = ACTIONS(507),
        [anon_sym_abstract] = ACTIONS(507),
        [anon_sym_sealed] = ACTIONS(507),
        [anon_sym_static] = ACTIONS(507),
        [anon_sym_readonly] = ACTIONS(507),
        [anon_sym_volatile] = ACTIONS(507),
        [anon_sym_bool] = ACTIONS(507),
        [anon_sym_decimal] = ACTIONS(507),
        [anon_sym_double] = ACTIONS(507),
        [anon_sym_float] = ACTIONS(507),
        [anon_sym_object] = ACTIONS(507),
        [anon_sym_string] = ACTIONS(507),
        [sym_identifier_name] = ACTIONS(509),
        [sym_comment] = ACTIONS(87),
    },
    [132] = {
        [anon_sym_LBRACE] = ACTIONS(511),
        [sym_comment] = ACTIONS(87),
    },
    [133] = {
        [anon_sym_LBRACE] = ACTIONS(513),
        [sym_comment] = ACTIONS(87),
    },
    [134] = {
        [sym_equals_value_clause] = STATE(146),
        [anon_sym_RBRACE] = ACTIONS(515),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_EQ] = ACTIONS(343),
        [sym_comment] = ACTIONS(87),
    },
    [135] = {
        [sym_identifier_name] = ACTIONS(517),
        [sym_comment] = ACTIONS(87),
    },
    [136] = {
        [aux_sym__enum_body_repeat1] = STATE(139),
        [anon_sym_RBRACE] = ACTIONS(519),
        [anon_sym_COMMA] = ACTIONS(521),
        [sym_comment] = ACTIONS(87),
    },
    [137] = {
        [ts_builtin_sym_end] = ACTIONS(523),
        [anon_sym_SEMI] = ACTIONS(523),
        [anon_sym_namespace] = ACTIONS(525),
        [anon_sym_RBRACE] = ACTIONS(523),
        [anon_sym_class] = ACTIONS(525),
        [anon_sym_struct] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(523),
        [anon_sym_enum] = ACTIONS(525),
        [anon_sym_new] = ACTIONS(525),
        [anon_sym_public] = ACTIONS(525),
        [anon_sym_protected] = ACTIONS(525),
        [anon_sym_internal] = ACTIONS(525),
        [anon_sym_private] = ACTIONS(525),
        [anon_sym_sbyte] = ACTIONS(525),
        [anon_sym_byte] = ACTIONS(525),
        [anon_sym_short] = ACTIONS(525),
        [anon_sym_ushort] = ACTIONS(525),
        [anon_sym_int] = ACTIONS(525),
        [anon_sym_uint] = ACTIONS(525),
        [anon_sym_long] = ACTIONS(525),
        [anon_sym_ulong] = ACTIONS(525),
        [anon_sym_char] = ACTIONS(525),
        [anon_sym_unsafe] = ACTIONS(525),
        [anon_sym_abstract] = ACTIONS(525),
        [anon_sym_sealed] = ACTIONS(525),
        [anon_sym_static] = ACTIONS(525),
        [anon_sym_readonly] = ACTIONS(525),
        [anon_sym_volatile] = ACTIONS(525),
        [anon_sym_bool] = ACTIONS(525),
        [anon_sym_decimal] = ACTIONS(525),
        [anon_sym_double] = ACTIONS(525),
        [anon_sym_float] = ACTIONS(525),
        [anon_sym_object] = ACTIONS(525),
        [anon_sym_string] = ACTIONS(525),
        [sym_identifier_name] = ACTIONS(527),
        [sym_comment] = ACTIONS(87),
    },
    [138] = {
        [sym__attributes] = STATE(135),
        [sym_enum_member_declaration] = STATE(143),
        [sym__attribute_section] = STATE(16),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_identifier_name] = ACTIONS(485),
        [sym_comment] = ACTIONS(87),
    },
    [139] = {
        [anon_sym_RBRACE] = ACTIONS(529),
        [anon_sym_COMMA] = ACTIONS(531),
        [sym_comment] = ACTIONS(87),
    },
    [140] = {
        [ts_builtin_sym_end] = ACTIONS(533),
        [anon_sym_SEMI] = ACTIONS(533),
        [anon_sym_namespace] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(533),
        [anon_sym_class] = ACTIONS(535),
        [anon_sym_struct] = ACTIONS(535),
        [anon_sym_LBRACK] = ACTIONS(533),
        [anon_sym_enum] = ACTIONS(535),
        [anon_sym_new] = ACTIONS(535),
        [anon_sym_public] = ACTIONS(535),
        [anon_sym_protected] = ACTIONS(535),
        [anon_sym_internal] = ACTIONS(535),
        [anon_sym_private] = ACTIONS(535),
        [anon_sym_sbyte] = ACTIONS(535),
        [anon_sym_byte] = ACTIONS(535),
        [anon_sym_short] = ACTIONS(535),
        [anon_sym_ushort] = ACTIONS(535),
        [anon_sym_int] = ACTIONS(535),
        [anon_sym_uint] = ACTIONS(535),
        [anon_sym_long] = ACTIONS(535),
        [anon_sym_ulong] = ACTIONS(535),
        [anon_sym_char] = ACTIONS(535),
        [anon_sym_unsafe] = ACTIONS(535),
        [anon_sym_abstract] = ACTIONS(535),
        [anon_sym_sealed] = ACTIONS(535),
        [anon_sym_static] = ACTIONS(535),
        [anon_sym_readonly] = ACTIONS(535),
        [anon_sym_volatile] = ACTIONS(535),
        [anon_sym_bool] = ACTIONS(535),
        [anon_sym_decimal] = ACTIONS(535),
        [anon_sym_double] = ACTIONS(535),
        [anon_sym_float] = ACTIONS(535),
        [anon_sym_object] = ACTIONS(535),
        [anon_sym_string] = ACTIONS(535),
        [sym_identifier_name] = ACTIONS(537),
        [sym_comment] = ACTIONS(87),
    },
    [141] = {
        [sym__attributes] = STATE(135),
        [sym_enum_member_declaration] = STATE(142),
        [sym__attribute_section] = STATE(16),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_identifier_name] = ACTIONS(485),
        [sym_comment] = ACTIONS(87),
    },
    [142] = {
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(539),
        [sym_comment] = ACTIONS(87),
    },
    [143] = {
        [anon_sym_RBRACE] = ACTIONS(541),
        [anon_sym_COMMA] = ACTIONS(541),
        [sym_comment] = ACTIONS(87),
    },
    [144] = {
        [sym_equals_value_clause] = STATE(145),
        [anon_sym_RBRACE] = ACTIONS(543),
        [anon_sym_COMMA] = ACTIONS(543),
        [anon_sym_EQ] = ACTIONS(343),
        [sym_comment] = ACTIONS(87),
    },
    [145] = {
        [anon_sym_RBRACE] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(545),
        [sym_comment] = ACTIONS(87),
    },
    [146] = {
        [anon_sym_RBRACE] = ACTIONS(543),
        [anon_sym_COMMA] = ACTIONS(543),
        [sym_comment] = ACTIONS(87),
    },
    [147] = {
        [anon_sym_enum] = ACTIONS(547),
        [sym_comment] = ACTIONS(87),
    },
    [148] = {
        [anon_sym_class] = ACTIONS(549),
        [sym_comment] = ACTIONS(87),
    },
    [149] = {
        [anon_sym_struct] = ACTIONS(551),
        [sym_comment] = ACTIONS(87),
    },
    [150] = {
        [sym_variable_declaration] = STATE(151),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_predefined_type] = STATE(58),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [151] = {
        [anon_sym_SEMI] = ACTIONS(553),
        [sym_comment] = ACTIONS(87),
    },
    [152] = {
        [anon_sym_RBRACE] = ACTIONS(555),
        [anon_sym_class] = ACTIONS(557),
        [anon_sym_struct] = ACTIONS(557),
        [anon_sym_LBRACK] = ACTIONS(555),
        [anon_sym_enum] = ACTIONS(557),
        [anon_sym_new] = ACTIONS(557),
        [anon_sym_public] = ACTIONS(557),
        [anon_sym_protected] = ACTIONS(557),
        [anon_sym_internal] = ACTIONS(557),
        [anon_sym_private] = ACTIONS(557),
        [anon_sym_sbyte] = ACTIONS(557),
        [anon_sym_byte] = ACTIONS(557),
        [anon_sym_short] = ACTIONS(557),
        [anon_sym_ushort] = ACTIONS(557),
        [anon_sym_int] = ACTIONS(557),
        [anon_sym_uint] = ACTIONS(557),
        [anon_sym_long] = ACTIONS(557),
        [anon_sym_ulong] = ACTIONS(557),
        [anon_sym_char] = ACTIONS(557),
        [anon_sym_unsafe] = ACTIONS(557),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(557),
        [anon_sym_readonly] = ACTIONS(557),
        [anon_sym_volatile] = ACTIONS(557),
        [anon_sym_bool] = ACTIONS(557),
        [anon_sym_decimal] = ACTIONS(557),
        [anon_sym_double] = ACTIONS(557),
        [anon_sym_float] = ACTIONS(557),
        [anon_sym_object] = ACTIONS(557),
        [anon_sym_string] = ACTIONS(557),
        [sym_identifier_name] = ACTIONS(559),
        [sym_comment] = ACTIONS(87),
    },
    [153] = {
        [sym_identifier_name] = ACTIONS(561),
        [sym_comment] = ACTIONS(87),
    },
    [154] = {
        [sym_type_parameter_list] = STATE(155),
        [anon_sym_LBRACE] = ACTIONS(235),
        [anon_sym_LT] = ACTIONS(211),
        [sym_comment] = ACTIONS(87),
    },
    [155] = {
        [anon_sym_LBRACE] = ACTIONS(563),
        [sym_comment] = ACTIONS(87),
    },
    [156] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(157),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(283),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [157] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(565),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [158] = {
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_namespace] = ACTIONS(569),
        [anon_sym_RBRACE] = ACTIONS(567),
        [anon_sym_class] = ACTIONS(569),
        [anon_sym_struct] = ACTIONS(569),
        [anon_sym_LBRACK] = ACTIONS(567),
        [anon_sym_enum] = ACTIONS(569),
        [anon_sym_new] = ACTIONS(569),
        [anon_sym_public] = ACTIONS(569),
        [anon_sym_protected] = ACTIONS(569),
        [anon_sym_internal] = ACTIONS(569),
        [anon_sym_private] = ACTIONS(569),
        [anon_sym_sbyte] = ACTIONS(569),
        [anon_sym_byte] = ACTIONS(569),
        [anon_sym_short] = ACTIONS(569),
        [anon_sym_ushort] = ACTIONS(569),
        [anon_sym_int] = ACTIONS(569),
        [anon_sym_uint] = ACTIONS(569),
        [anon_sym_long] = ACTIONS(569),
        [anon_sym_ulong] = ACTIONS(569),
        [anon_sym_char] = ACTIONS(569),
        [anon_sym_unsafe] = ACTIONS(569),
        [anon_sym_abstract] = ACTIONS(569),
        [anon_sym_sealed] = ACTIONS(569),
        [anon_sym_static] = ACTIONS(569),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(569),
        [anon_sym_decimal] = ACTIONS(569),
        [anon_sym_double] = ACTIONS(569),
        [anon_sym_float] = ACTIONS(569),
        [anon_sym_object] = ACTIONS(569),
        [anon_sym_string] = ACTIONS(569),
        [sym_identifier_name] = ACTIONS(571),
        [sym_comment] = ACTIONS(87),
    },
    [159] = {
        [sym_identifier_name] = ACTIONS(573),
        [sym_comment] = ACTIONS(87),
    },
    [160] = {
        [sym_type_parameter_list] = STATE(161),
        [anon_sym_LBRACE] = ACTIONS(317),
        [anon_sym_LT] = ACTIONS(211),
        [sym_comment] = ACTIONS(87),
    },
    [161] = {
        [anon_sym_LBRACE] = ACTIONS(575),
        [sym_comment] = ACTIONS(87),
    },
    [162] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(163),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(327),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [163] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [164] = {
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_namespace] = ACTIONS(581),
        [anon_sym_RBRACE] = ACTIONS(579),
        [anon_sym_class] = ACTIONS(581),
        [anon_sym_struct] = ACTIONS(581),
        [anon_sym_LBRACK] = ACTIONS(579),
        [anon_sym_enum] = ACTIONS(581),
        [anon_sym_new] = ACTIONS(581),
        [anon_sym_public] = ACTIONS(581),
        [anon_sym_protected] = ACTIONS(581),
        [anon_sym_internal] = ACTIONS(581),
        [anon_sym_private] = ACTIONS(581),
        [anon_sym_sbyte] = ACTIONS(581),
        [anon_sym_byte] = ACTIONS(581),
        [anon_sym_short] = ACTIONS(581),
        [anon_sym_ushort] = ACTIONS(581),
        [anon_sym_int] = ACTIONS(581),
        [anon_sym_uint] = ACTIONS(581),
        [anon_sym_long] = ACTIONS(581),
        [anon_sym_ulong] = ACTIONS(581),
        [anon_sym_char] = ACTIONS(581),
        [anon_sym_unsafe] = ACTIONS(581),
        [anon_sym_abstract] = ACTIONS(581),
        [anon_sym_sealed] = ACTIONS(581),
        [anon_sym_static] = ACTIONS(581),
        [anon_sym_readonly] = ACTIONS(581),
        [anon_sym_volatile] = ACTIONS(581),
        [anon_sym_bool] = ACTIONS(581),
        [anon_sym_decimal] = ACTIONS(581),
        [anon_sym_double] = ACTIONS(581),
        [anon_sym_float] = ACTIONS(581),
        [anon_sym_object] = ACTIONS(581),
        [anon_sym_string] = ACTIONS(581),
        [sym_identifier_name] = ACTIONS(583),
        [sym_comment] = ACTIONS(87),
    },
    [165] = {
        [sym_identifier_name] = ACTIONS(585),
        [sym_comment] = ACTIONS(87),
    },
    [166] = {
        [sym__enum_base] = STATE(167),
        [sym__enum_body] = STATE(130),
        [anon_sym_LBRACE] = ACTIONS(481),
        [anon_sym_COLON] = ACTIONS(483),
        [sym_comment] = ACTIONS(87),
    },
    [167] = {
        [sym__enum_body] = STATE(168),
        [anon_sym_LBRACE] = ACTIONS(481),
        [sym_comment] = ACTIONS(87),
    },
    [168] = {
        [ts_builtin_sym_end] = ACTIONS(505),
        [anon_sym_SEMI] = ACTIONS(587),
        [anon_sym_namespace] = ACTIONS(507),
        [anon_sym_RBRACE] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(507),
        [anon_sym_struct] = ACTIONS(507),
        [anon_sym_LBRACK] = ACTIONS(505),
        [anon_sym_enum] = ACTIONS(507),
        [anon_sym_new] = ACTIONS(507),
        [anon_sym_public] = ACTIONS(507),
        [anon_sym_protected] = ACTIONS(507),
        [anon_sym_internal] = ACTIONS(507),
        [anon_sym_private] = ACTIONS(507),
        [anon_sym_sbyte] = ACTIONS(507),
        [anon_sym_byte] = ACTIONS(507),
        [anon_sym_short] = ACTIONS(507),
        [anon_sym_ushort] = ACTIONS(507),
        [anon_sym_int] = ACTIONS(507),
        [anon_sym_uint] = ACTIONS(507),
        [anon_sym_long] = ACTIONS(507),
        [anon_sym_ulong] = ACTIONS(507),
        [anon_sym_char] = ACTIONS(507),
        [anon_sym_unsafe] = ACTIONS(507),
        [anon_sym_abstract] = ACTIONS(507),
        [anon_sym_sealed] = ACTIONS(507),
        [anon_sym_static] = ACTIONS(507),
        [anon_sym_readonly] = ACTIONS(507),
        [anon_sym_volatile] = ACTIONS(507),
        [anon_sym_bool] = ACTIONS(507),
        [anon_sym_decimal] = ACTIONS(507),
        [anon_sym_double] = ACTIONS(507),
        [anon_sym_float] = ACTIONS(507),
        [anon_sym_object] = ACTIONS(507),
        [anon_sym_string] = ACTIONS(507),
        [sym_identifier_name] = ACTIONS(509),
        [sym_comment] = ACTIONS(87),
    },
    [169] = {
        [ts_builtin_sym_end] = ACTIONS(589),
        [anon_sym_namespace] = ACTIONS(591),
        [anon_sym_RBRACE] = ACTIONS(589),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_struct] = ACTIONS(591),
        [anon_sym_LBRACK] = ACTIONS(589),
        [anon_sym_enum] = ACTIONS(591),
        [anon_sym_new] = ACTIONS(591),
        [anon_sym_public] = ACTIONS(591),
        [anon_sym_protected] = ACTIONS(591),
        [anon_sym_internal] = ACTIONS(591),
        [anon_sym_private] = ACTIONS(591),
        [anon_sym_sbyte] = ACTIONS(591),
        [anon_sym_byte] = ACTIONS(591),
        [anon_sym_short] = ACTIONS(591),
        [anon_sym_ushort] = ACTIONS(591),
        [anon_sym_int] = ACTIONS(591),
        [anon_sym_uint] = ACTIONS(591),
        [anon_sym_long] = ACTIONS(591),
        [anon_sym_ulong] = ACTIONS(591),
        [anon_sym_char] = ACTIONS(591),
        [anon_sym_unsafe] = ACTIONS(591),
        [anon_sym_abstract] = ACTIONS(591),
        [anon_sym_sealed] = ACTIONS(591),
        [anon_sym_static] = ACTIONS(591),
        [anon_sym_readonly] = ACTIONS(591),
        [anon_sym_volatile] = ACTIONS(591),
        [anon_sym_bool] = ACTIONS(591),
        [anon_sym_decimal] = ACTIONS(591),
        [anon_sym_double] = ACTIONS(591),
        [anon_sym_float] = ACTIONS(591),
        [anon_sym_object] = ACTIONS(591),
        [anon_sym_string] = ACTIONS(591),
        [sym_identifier_name] = ACTIONS(593),
        [sym_comment] = ACTIONS(87),
    },
    [170] = {
        [anon_sym_COMMA] = ACTIONS(595),
        [anon_sym_GT] = ACTIONS(595),
        [sym_identifier_name] = ACTIONS(597),
        [sym_comment] = ACTIONS(87),
    },
    [171] = {
        [anon_sym_COMMA] = ACTIONS(599),
        [anon_sym_GT] = ACTIONS(599),
        [sym_comment] = ACTIONS(87),
    },
    [172] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(175),
        [anon_sym_COMMA] = ACTIONS(601),
        [anon_sym_GT] = ACTIONS(603),
        [sym_comment] = ACTIONS(87),
    },
    [173] = {
        [sym__type] = STATE(171),
        [sym_generic_name] = STATE(58),
        [sym_predefined_type] = STATE(58),
        [sym_type_parameter] = STATE(179),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [174] = {
        [anon_sym_LBRACE] = ACTIONS(605),
        [anon_sym_COMMA] = ACTIONS(605),
        [anon_sym_GT] = ACTIONS(605),
        [sym_identifier_name] = ACTIONS(607),
        [sym_comment] = ACTIONS(87),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(609),
        [anon_sym_GT] = ACTIONS(611),
        [sym_comment] = ACTIONS(87),
    },
    [176] = {
        [sym__type] = STATE(171),
        [sym_generic_name] = STATE(58),
        [sym_predefined_type] = STATE(58),
        [sym_type_parameter] = STATE(178),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [177] = {
        [anon_sym_LBRACE] = ACTIONS(613),
        [anon_sym_COMMA] = ACTIONS(613),
        [anon_sym_GT] = ACTIONS(613),
        [sym_identifier_name] = ACTIONS(615),
        [sym_comment] = ACTIONS(87),
    },
    [178] = {
        [anon_sym_COMMA] = ACTIONS(617),
        [anon_sym_GT] = ACTIONS(617),
        [sym_comment] = ACTIONS(87),
    },
    [179] = {
        [anon_sym_COMMA] = ACTIONS(619),
        [anon_sym_GT] = ACTIONS(619),
        [sym_comment] = ACTIONS(87),
    },
    [180] = {
        [anon_sym_sbyte] = ACTIONS(621),
        [anon_sym_byte] = ACTIONS(621),
        [anon_sym_short] = ACTIONS(621),
        [anon_sym_ushort] = ACTIONS(621),
        [anon_sym_int] = ACTIONS(621),
        [anon_sym_uint] = ACTIONS(621),
        [anon_sym_long] = ACTIONS(621),
        [anon_sym_ulong] = ACTIONS(621),
        [anon_sym_char] = ACTIONS(621),
        [anon_sym_bool] = ACTIONS(621),
        [anon_sym_decimal] = ACTIONS(621),
        [anon_sym_double] = ACTIONS(621),
        [anon_sym_float] = ACTIONS(621),
        [anon_sym_object] = ACTIONS(621),
        [anon_sym_string] = ACTIONS(621),
        [sym_identifier_name] = ACTIONS(623),
        [sym_comment] = ACTIONS(87),
    },
    [181] = {
        [anon_sym_class] = ACTIONS(625),
        [sym_comment] = ACTIONS(87),
    },
    [182] = {
        [anon_sym_struct] = ACTIONS(627),
        [sym_comment] = ACTIONS(87),
    },
    [183] = {
        [sym__enum_base] = STATE(184),
        [sym__enum_body] = STATE(185),
        [anon_sym_LBRACE] = ACTIONS(481),
        [anon_sym_COLON] = ACTIONS(483),
        [sym_comment] = ACTIONS(87),
    },
    [184] = {
        [sym__enum_body] = STATE(128),
        [anon_sym_LBRACE] = ACTIONS(481),
        [sym_comment] = ACTIONS(87),
    },
    [185] = {
        [ts_builtin_sym_end] = ACTIONS(629),
        [anon_sym_SEMI] = ACTIONS(631),
        [anon_sym_namespace] = ACTIONS(633),
        [anon_sym_RBRACE] = ACTIONS(629),
        [anon_sym_class] = ACTIONS(633),
        [anon_sym_struct] = ACTIONS(633),
        [anon_sym_LBRACK] = ACTIONS(629),
        [anon_sym_enum] = ACTIONS(633),
        [anon_sym_new] = ACTIONS(633),
        [anon_sym_public] = ACTIONS(633),
        [anon_sym_protected] = ACTIONS(633),
        [anon_sym_internal] = ACTIONS(633),
        [anon_sym_private] = ACTIONS(633),
        [anon_sym_sbyte] = ACTIONS(633),
        [anon_sym_byte] = ACTIONS(633),
        [anon_sym_short] = ACTIONS(633),
        [anon_sym_ushort] = ACTIONS(633),
        [anon_sym_int] = ACTIONS(633),
        [anon_sym_uint] = ACTIONS(633),
        [anon_sym_long] = ACTIONS(633),
        [anon_sym_ulong] = ACTIONS(633),
        [anon_sym_char] = ACTIONS(633),
        [anon_sym_unsafe] = ACTIONS(633),
        [anon_sym_abstract] = ACTIONS(633),
        [anon_sym_sealed] = ACTIONS(633),
        [anon_sym_static] = ACTIONS(633),
        [anon_sym_readonly] = ACTIONS(633),
        [anon_sym_volatile] = ACTIONS(633),
        [anon_sym_bool] = ACTIONS(633),
        [anon_sym_decimal] = ACTIONS(633),
        [anon_sym_double] = ACTIONS(633),
        [anon_sym_float] = ACTIONS(633),
        [anon_sym_object] = ACTIONS(633),
        [anon_sym_string] = ACTIONS(633),
        [sym_identifier_name] = ACTIONS(635),
        [sym_comment] = ACTIONS(87),
    },
    [186] = {
        [ts_builtin_sym_end] = ACTIONS(489),
        [anon_sym_namespace] = ACTIONS(493),
        [anon_sym_RBRACE] = ACTIONS(489),
        [anon_sym_class] = ACTIONS(493),
        [anon_sym_struct] = ACTIONS(493),
        [anon_sym_LBRACK] = ACTIONS(489),
        [anon_sym_enum] = ACTIONS(493),
        [anon_sym_new] = ACTIONS(493),
        [anon_sym_public] = ACTIONS(493),
        [anon_sym_protected] = ACTIONS(493),
        [anon_sym_internal] = ACTIONS(493),
        [anon_sym_private] = ACTIONS(493),
        [anon_sym_sbyte] = ACTIONS(493),
        [anon_sym_byte] = ACTIONS(493),
        [anon_sym_short] = ACTIONS(493),
        [anon_sym_ushort] = ACTIONS(493),
        [anon_sym_int] = ACTIONS(493),
        [anon_sym_uint] = ACTIONS(493),
        [anon_sym_long] = ACTIONS(493),
        [anon_sym_ulong] = ACTIONS(493),
        [anon_sym_char] = ACTIONS(493),
        [anon_sym_unsafe] = ACTIONS(493),
        [anon_sym_abstract] = ACTIONS(493),
        [anon_sym_sealed] = ACTIONS(493),
        [anon_sym_static] = ACTIONS(493),
        [anon_sym_readonly] = ACTIONS(493),
        [anon_sym_volatile] = ACTIONS(493),
        [anon_sym_bool] = ACTIONS(493),
        [anon_sym_decimal] = ACTIONS(493),
        [anon_sym_double] = ACTIONS(493),
        [anon_sym_float] = ACTIONS(493),
        [anon_sym_object] = ACTIONS(493),
        [anon_sym_string] = ACTIONS(493),
        [sym_identifier_name] = ACTIONS(495),
        [sym_comment] = ACTIONS(87),
    },
    [187] = {
        [sym_type_parameter_list] = STATE(189),
        [anon_sym_LBRACE] = ACTIONS(637),
        [anon_sym_LT] = ACTIONS(211),
        [sym_comment] = ACTIONS(87),
    },
    [188] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(191),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(639),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [189] = {
        [anon_sym_LBRACE] = ACTIONS(209),
        [sym_comment] = ACTIONS(87),
    },
    [190] = {
        [ts_builtin_sym_end] = ACTIONS(641),
        [anon_sym_namespace] = ACTIONS(643),
        [anon_sym_RBRACE] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(643),
        [anon_sym_struct] = ACTIONS(643),
        [anon_sym_LBRACK] = ACTIONS(641),
        [anon_sym_enum] = ACTIONS(643),
        [anon_sym_new] = ACTIONS(643),
        [anon_sym_public] = ACTIONS(643),
        [anon_sym_protected] = ACTIONS(643),
        [anon_sym_internal] = ACTIONS(643),
        [anon_sym_private] = ACTIONS(643),
        [anon_sym_sbyte] = ACTIONS(643),
        [anon_sym_byte] = ACTIONS(643),
        [anon_sym_short] = ACTIONS(643),
        [anon_sym_ushort] = ACTIONS(643),
        [anon_sym_int] = ACTIONS(643),
        [anon_sym_uint] = ACTIONS(643),
        [anon_sym_long] = ACTIONS(643),
        [anon_sym_ulong] = ACTIONS(643),
        [anon_sym_char] = ACTIONS(643),
        [anon_sym_unsafe] = ACTIONS(643),
        [anon_sym_abstract] = ACTIONS(643),
        [anon_sym_sealed] = ACTIONS(643),
        [anon_sym_static] = ACTIONS(643),
        [anon_sym_readonly] = ACTIONS(643),
        [anon_sym_volatile] = ACTIONS(643),
        [anon_sym_bool] = ACTIONS(643),
        [anon_sym_decimal] = ACTIONS(643),
        [anon_sym_double] = ACTIONS(643),
        [anon_sym_float] = ACTIONS(643),
        [anon_sym_object] = ACTIONS(643),
        [anon_sym_string] = ACTIONS(643),
        [sym_identifier_name] = ACTIONS(645),
        [sym_comment] = ACTIONS(87),
    },
    [191] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(213),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [192] = {
        [sym_type_parameter_list] = STATE(194),
        [anon_sym_LBRACE] = ACTIONS(647),
        [anon_sym_LT] = ACTIONS(211),
        [sym_comment] = ACTIONS(87),
    },
    [193] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(196),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(649),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [194] = {
        [anon_sym_LBRACE] = ACTIONS(313),
        [sym_comment] = ACTIONS(87),
    },
    [195] = {
        [ts_builtin_sym_end] = ACTIONS(651),
        [anon_sym_namespace] = ACTIONS(653),
        [anon_sym_RBRACE] = ACTIONS(651),
        [anon_sym_class] = ACTIONS(653),
        [anon_sym_struct] = ACTIONS(653),
        [anon_sym_LBRACK] = ACTIONS(651),
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
        [sym_comment] = ACTIONS(87),
    },
    [196] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(315),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [197] = {
        [anon_sym_COLON] = ACTIONS(657),
        [sym_comment] = ACTIONS(87),
    },
    [198] = {
        [sym_attribute_list] = STATE(199),
        [sym_attribute] = STATE(28),
        [sym_identifier_name] = ACTIONS(163),
        [sym_comment] = ACTIONS(87),
    },
    [199] = {
        [anon_sym_RBRACK] = ACTIONS(659),
        [sym_comment] = ACTIONS(87),
    },
    [200] = {
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_namespace] = ACTIONS(661),
        [anon_sym_class] = ACTIONS(661),
        [anon_sym_struct] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_enum] = ACTIONS(661),
        [anon_sym_new] = ACTIONS(661),
        [anon_sym_public] = ACTIONS(661),
        [anon_sym_protected] = ACTIONS(661),
        [anon_sym_internal] = ACTIONS(661),
        [anon_sym_private] = ACTIONS(661),
        [anon_sym_unsafe] = ACTIONS(661),
        [anon_sym_abstract] = ACTIONS(661),
        [anon_sym_sealed] = ACTIONS(661),
        [anon_sym_static] = ACTIONS(661),
        [sym_comment] = ACTIONS(87),
    },
    [201] = {
        [sym_identifier_name] = ACTIONS(663),
        [sym_comment] = ACTIONS(87),
    },
    [202] = {
        [anon_sym_COLON_COLON] = ACTIONS(665),
        [sym_comment] = ACTIONS(87),
    },
    [203] = {
        [anon_sym_LBRACE] = ACTIONS(667),
        [anon_sym_DOT] = ACTIONS(669),
        [sym_comment] = ACTIONS(87),
    },
    [204] = {
        [anon_sym_DOT] = ACTIONS(669),
        [sym_comment] = ACTIONS(87),
    },
    [205] = {
        [sym_identifier_name] = ACTIONS(671),
        [sym_comment] = ACTIONS(87),
    },
    [206] = {
        [anon_sym_SEMI] = ACTIONS(673),
        [anon_sym_LBRACE] = ACTIONS(673),
        [anon_sym_DOT] = ACTIONS(673),
        [sym_comment] = ACTIONS(87),
    },
    [207] = {
        [sym_namespace_declaration] = STATE(209),
        [sym_class_declaration] = STATE(209),
        [sym_struct_declaration] = STATE(209),
        [sym__attributes] = STATE(14),
        [sym_enum_declaration] = STATE(209),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [aux_sym_namespace_declaration_repeat1] = STATE(210),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(675),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(97),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(101),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [208] = {
        [ts_builtin_sym_end] = ACTIONS(677),
        [anon_sym_namespace] = ACTIONS(677),
        [anon_sym_RBRACE] = ACTIONS(677),
        [anon_sym_class] = ACTIONS(677),
        [anon_sym_struct] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(677),
        [anon_sym_enum] = ACTIONS(677),
        [anon_sym_new] = ACTIONS(677),
        [anon_sym_public] = ACTIONS(677),
        [anon_sym_protected] = ACTIONS(677),
        [anon_sym_internal] = ACTIONS(677),
        [anon_sym_private] = ACTIONS(677),
        [anon_sym_unsafe] = ACTIONS(677),
        [anon_sym_abstract] = ACTIONS(677),
        [anon_sym_sealed] = ACTIONS(677),
        [anon_sym_static] = ACTIONS(677),
        [sym_comment] = ACTIONS(87),
    },
    [209] = {
        [anon_sym_namespace] = ACTIONS(679),
        [anon_sym_RBRACE] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_struct] = ACTIONS(679),
        [anon_sym_LBRACK] = ACTIONS(679),
        [anon_sym_enum] = ACTIONS(679),
        [anon_sym_new] = ACTIONS(679),
        [anon_sym_public] = ACTIONS(679),
        [anon_sym_protected] = ACTIONS(679),
        [anon_sym_internal] = ACTIONS(679),
        [anon_sym_private] = ACTIONS(679),
        [anon_sym_unsafe] = ACTIONS(679),
        [anon_sym_abstract] = ACTIONS(679),
        [anon_sym_sealed] = ACTIONS(679),
        [anon_sym_static] = ACTIONS(679),
        [sym_comment] = ACTIONS(87),
    },
    [210] = {
        [sym_namespace_declaration] = STATE(212),
        [sym_class_declaration] = STATE(212),
        [sym_struct_declaration] = STATE(212),
        [sym__attributes] = STATE(14),
        [sym_enum_declaration] = STATE(212),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(681),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(97),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(101),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [211] = {
        [ts_builtin_sym_end] = ACTIONS(683),
        [anon_sym_namespace] = ACTIONS(683),
        [anon_sym_RBRACE] = ACTIONS(683),
        [anon_sym_class] = ACTIONS(683),
        [anon_sym_struct] = ACTIONS(683),
        [anon_sym_LBRACK] = ACTIONS(683),
        [anon_sym_enum] = ACTIONS(683),
        [anon_sym_new] = ACTIONS(683),
        [anon_sym_public] = ACTIONS(683),
        [anon_sym_protected] = ACTIONS(683),
        [anon_sym_internal] = ACTIONS(683),
        [anon_sym_private] = ACTIONS(683),
        [anon_sym_unsafe] = ACTIONS(683),
        [anon_sym_abstract] = ACTIONS(683),
        [anon_sym_sealed] = ACTIONS(683),
        [anon_sym_static] = ACTIONS(683),
        [sym_comment] = ACTIONS(87),
    },
    [212] = {
        [anon_sym_namespace] = ACTIONS(685),
        [anon_sym_RBRACE] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(685),
        [anon_sym_struct] = ACTIONS(685),
        [anon_sym_LBRACK] = ACTIONS(685),
        [anon_sym_enum] = ACTIONS(685),
        [anon_sym_new] = ACTIONS(685),
        [anon_sym_public] = ACTIONS(685),
        [anon_sym_protected] = ACTIONS(685),
        [anon_sym_internal] = ACTIONS(685),
        [anon_sym_private] = ACTIONS(685),
        [anon_sym_unsafe] = ACTIONS(685),
        [anon_sym_abstract] = ACTIONS(685),
        [anon_sym_sealed] = ACTIONS(685),
        [anon_sym_static] = ACTIONS(685),
        [sym_comment] = ACTIONS(87),
    },
    [213] = {
        [sym_identifier_name] = ACTIONS(687),
        [sym_comment] = ACTIONS(87),
    },
    [214] = {
        [anon_sym_DOT] = ACTIONS(689),
        [sym_comment] = ACTIONS(87),
    },
    [215] = {
        [sym_global] = ACTIONS(691),
        [sym_identifier_name] = ACTIONS(693),
        [sym_comment] = ACTIONS(87),
    },
    [216] = {
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_EQ] = ACTIONS(697),
        [anon_sym_DOT] = ACTIONS(669),
        [sym_comment] = ACTIONS(87),
    },
    [217] = {
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_DOT] = ACTIONS(669),
        [sym_comment] = ACTIONS(87),
    },
    [218] = {
        [sym_qualified_name] = STATE(219),
        [sym_alias_qualified_name] = STATE(204),
        [sym_global] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(699),
        [sym_comment] = ACTIONS(87),
    },
    [219] = {
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_DOT] = ACTIONS(669),
        [sym_comment] = ACTIONS(87),
    },
    [220] = {
        [ts_builtin_sym_end] = ACTIONS(703),
        [anon_sym_using] = ACTIONS(703),
        [anon_sym_namespace] = ACTIONS(703),
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
        [sym_comment] = ACTIONS(87),
    },
    [221] = {
        [ts_builtin_sym_end] = ACTIONS(705),
        [anon_sym_using] = ACTIONS(705),
        [anon_sym_namespace] = ACTIONS(705),
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
        [sym_comment] = ACTIONS(87),
    },
    [222] = {
        [sym_global] = ACTIONS(707),
        [sym_identifier_name] = ACTIONS(709),
        [sym_comment] = ACTIONS(87),
    },
    [223] = {
        [ts_builtin_sym_end] = ACTIONS(711),
        [anon_sym_using] = ACTIONS(718),
        [anon_sym_namespace] = ACTIONS(721),
        [anon_sym_RBRACE] = ACTIONS(728),
        [anon_sym_class] = ACTIONS(736),
        [anon_sym_struct] = ACTIONS(736),
        [anon_sym_LBRACK] = ACTIONS(746),
        [anon_sym_enum] = ACTIONS(736),
        [anon_sym_new] = ACTIONS(736),
        [anon_sym_public] = ACTIONS(736),
        [anon_sym_protected] = ACTIONS(736),
        [anon_sym_internal] = ACTIONS(736),
        [anon_sym_private] = ACTIONS(736),
        [anon_sym_sbyte] = ACTIONS(756),
        [anon_sym_byte] = ACTIONS(756),
        [anon_sym_short] = ACTIONS(756),
        [anon_sym_ushort] = ACTIONS(756),
        [anon_sym_int] = ACTIONS(756),
        [anon_sym_uint] = ACTIONS(756),
        [anon_sym_long] = ACTIONS(756),
        [anon_sym_ulong] = ACTIONS(756),
        [anon_sym_char] = ACTIONS(756),
        [anon_sym_unsafe] = ACTIONS(736),
        [anon_sym_abstract] = ACTIONS(736),
        [anon_sym_sealed] = ACTIONS(736),
        [anon_sym_static] = ACTIONS(736),
        [anon_sym_readonly] = ACTIONS(756),
        [anon_sym_volatile] = ACTIONS(756),
        [anon_sym_bool] = ACTIONS(756),
        [anon_sym_decimal] = ACTIONS(756),
        [anon_sym_double] = ACTIONS(756),
        [anon_sym_float] = ACTIONS(756),
        [anon_sym_object] = ACTIONS(756),
        [anon_sym_string] = ACTIONS(756),
        [sym_identifier_name] = ACTIONS(764),
        [sym_comment] = ACTIONS(87),
    },
    [224] = {
        [sym_namespace_declaration] = STATE(209),
        [sym_class_declaration] = STATE(318),
        [sym_struct_declaration] = STATE(318),
        [sym__attributes] = STATE(248),
        [sym_enum_declaration] = STATE(318),
        [sym_enum_member_declaration] = STATE(136),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_namespace_declaration_repeat1] = STATE(210),
        [aux_sym_class_declaration_repeat1] = STATE(272),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_namespace] = ACTIONS(772),
        [anon_sym_RBRACE] = ACTIONS(774),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(776),
        [sym_comment] = ACTIONS(87),
    },
    [225] = {
        [ts_builtin_sym_end] = ACTIONS(778),
        [anon_sym_SEMI] = ACTIONS(793),
        [anon_sym_namespace] = ACTIONS(796),
        [anon_sym_RBRACE] = ACTIONS(778),
        [anon_sym_class] = ACTIONS(796),
        [anon_sym_struct] = ACTIONS(796),
        [anon_sym_LBRACK] = ACTIONS(778),
        [anon_sym_enum] = ACTIONS(796),
        [anon_sym_new] = ACTIONS(796),
        [anon_sym_public] = ACTIONS(796),
        [anon_sym_protected] = ACTIONS(796),
        [anon_sym_internal] = ACTIONS(796),
        [anon_sym_private] = ACTIONS(796),
        [anon_sym_sbyte] = ACTIONS(811),
        [anon_sym_byte] = ACTIONS(811),
        [anon_sym_short] = ACTIONS(811),
        [anon_sym_ushort] = ACTIONS(811),
        [anon_sym_int] = ACTIONS(811),
        [anon_sym_uint] = ACTIONS(811),
        [anon_sym_long] = ACTIONS(811),
        [anon_sym_ulong] = ACTIONS(811),
        [anon_sym_char] = ACTIONS(811),
        [anon_sym_unsafe] = ACTIONS(796),
        [anon_sym_abstract] = ACTIONS(796),
        [anon_sym_sealed] = ACTIONS(796),
        [anon_sym_static] = ACTIONS(796),
        [anon_sym_readonly] = ACTIONS(811),
        [anon_sym_volatile] = ACTIONS(811),
        [anon_sym_bool] = ACTIONS(811),
        [anon_sym_decimal] = ACTIONS(811),
        [anon_sym_double] = ACTIONS(811),
        [anon_sym_float] = ACTIONS(811),
        [anon_sym_object] = ACTIONS(811),
        [anon_sym_string] = ACTIONS(811),
        [sym_identifier_name] = ACTIONS(824),
        [sym_comment] = ACTIONS(87),
    },
    [226] = {
        [sym_identifier_name] = ACTIONS(837),
        [sym_comment] = ACTIONS(87),
    },
    [227] = {
        [sym_identifier_name] = ACTIONS(839),
        [sym_comment] = ACTIONS(87),
    },
    [228] = {
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_namespace] = ACTIONS(841),
        [anon_sym_class] = ACTIONS(843),
        [anon_sym_struct] = ACTIONS(843),
        [anon_sym_LBRACK] = ACTIONS(846),
        [anon_sym_enum] = ACTIONS(843),
        [anon_sym_new] = ACTIONS(843),
        [anon_sym_public] = ACTIONS(843),
        [anon_sym_protected] = ACTIONS(843),
        [anon_sym_internal] = ACTIONS(843),
        [anon_sym_private] = ACTIONS(843),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_unsafe] = ACTIONS(843),
        [anon_sym_abstract] = ACTIONS(843),
        [anon_sym_sealed] = ACTIONS(843),
        [anon_sym_static] = ACTIONS(843),
        [anon_sym_readonly] = ACTIONS(189),
        [anon_sym_volatile] = ACTIONS(189),
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(87),
    },
    [229] = {
        [sym__integral_type] = STATE(133),
        [anon_sym_sbyte] = ACTIONS(849),
        [anon_sym_byte] = ACTIONS(849),
        [anon_sym_short] = ACTIONS(849),
        [anon_sym_ushort] = ACTIONS(849),
        [anon_sym_int] = ACTIONS(849),
        [anon_sym_uint] = ACTIONS(849),
        [anon_sym_long] = ACTIONS(849),
        [anon_sym_ulong] = ACTIONS(849),
        [anon_sym_char] = ACTIONS(849),
        [sym_identifier_name] = ACTIONS(851),
        [sym_comment] = ACTIONS(87),
    },
    [230] = {
        [sym_identifier_name] = ACTIONS(853),
        [sym_comment] = ACTIONS(87),
    },
    [231] = {
        [sym__attributes] = STATE(135),
        [sym_enum_member_declaration] = STATE(327),
        [sym__attribute_section] = STATE(16),
        [sym_attribute] = STATE(328),
        [sym__type] = STATE(171),
        [sym_generic_name] = STATE(58),
        [sym_variable_declarator] = STATE(329),
        [sym_predefined_type] = STATE(58),
        [sym_type_parameter] = STATE(330),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(855),
        [sym_comment] = ACTIONS(87),
    },
    [232] = {
        [anon_sym_LBRACE] = ACTIONS(511),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_GT] = ACTIONS(255),
        [sym_identifier_name] = ACTIONS(257),
        [sym_comment] = ACTIONS(87),
    },
    [233] = {
        [sym__literal] = STATE(95),
        [sym_boolean_literal] = STATE(91),
        [sym_character_literal] = STATE(91),
        [sym_integer_literal] = STATE(91),
        [sym_real_literal] = STATE(91),
        [sym_string_literal] = STATE(91),
        [sym__regular_string_literal] = STATE(96),
        [sym__verbatim_string_literal] = STATE(96),
        [anon_sym_true] = ACTIONS(857),
        [anon_sym_false] = ACTIONS(857),
        [anon_sym_SQUOTE] = ACTIONS(359),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(361),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(363),
        [sym_null_literal] = ACTIONS(859),
        [anon_sym_DOT] = ACTIONS(367),
        [anon_sym_DQUOTE] = ACTIONS(369),
        [anon_sym_AT_DQUOTE] = ACTIONS(371),
        [sym_global] = ACTIONS(707),
        [sym_identifier_name] = ACTIONS(709),
        [sym_comment] = ACTIONS(87),
    },
    [234] = {
        [sym__unicode_escape_sequence] = STATE(118),
        [sym__simple_escape_sequence] = STATE(118),
        [anon_sym_SEMI] = ACTIONS(471),
        [anon_sym_RBRACE] = ACTIONS(471),
        [anon_sym_COMMA] = ACTIONS(471),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(861),
        [sym__hexadecimal_escape_sequence] = ACTIONS(377),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(379),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(379),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(381),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(381),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(381),
        [anon_sym_BSLASH0] = ACTIONS(381),
        [anon_sym_BSLASHa] = ACTIONS(381),
        [anon_sym_BSLASHb] = ACTIONS(381),
        [anon_sym_BSLASHf] = ACTIONS(381),
        [anon_sym_BSLASHn] = ACTIONS(381),
        [anon_sym_BSLASHr] = ACTIONS(381),
        [anon_sym_BSLASHt] = ACTIONS(381),
        [anon_sym_BSLASHv] = ACTIONS(381),
        [sym_comment] = ACTIONS(87),
    },
    [235] = {
        [anon_sym_SQUOTE] = ACTIONS(469),
        [sym__hexadecimal_escape_sequence] = ACTIONS(417),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(419),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(419),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(419),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(419),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(419),
        [anon_sym_BSLASH0] = ACTIONS(419),
        [anon_sym_BSLASHa] = ACTIONS(419),
        [anon_sym_BSLASHb] = ACTIONS(419),
        [anon_sym_BSLASHf] = ACTIONS(419),
        [anon_sym_BSLASHn] = ACTIONS(419),
        [anon_sym_BSLASHr] = ACTIONS(419),
        [anon_sym_BSLASHt] = ACTIONS(419),
        [anon_sym_BSLASHv] = ACTIONS(419),
        [anon_sym_DQUOTE] = ACTIONS(419),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(863),
        [sym_comment] = ACTIONS(87),
    },
    [236] = {
        [anon_sym_SEMI] = ACTIONS(865),
        [anon_sym_RBRACE] = ACTIONS(865),
        [anon_sym_COMMA] = ACTIONS(865),
        [sym__integer_type_suffix] = ACTIONS(385),
        [anon_sym_DOT] = ACTIONS(387),
        [sym__real_type_suffix] = ACTIONS(869),
        [sym__exponent_part] = ACTIONS(871),
        [sym_comment] = ACTIONS(87),
    },
    [237] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(873),
        [sym_identifier_name] = ACTIONS(671),
        [sym_comment] = ACTIONS(87),
    },
    [238] = {
        [anon_sym_SEMI] = ACTIONS(875),
        [anon_sym_RBRACE] = ACTIONS(875),
        [anon_sym_COMMA] = ACTIONS(875),
        [sym_comment] = ACTIONS(87),
    },
    [239] = {
        [anon_sym_SEMI] = ACTIONS(880),
        [anon_sym_RBRACE] = ACTIONS(880),
        [anon_sym_COMMA] = ACTIONS(880),
        [sym__real_type_suffix] = ACTIONS(884),
        [sym_comment] = ACTIONS(87),
    },
    [240] = {
        [sym__unicode_escape_sequence] = STATE(99),
        [sym__simple_escape_sequence] = STATE(99),
        [sym__regular_string_literal_character] = STATE(103),
        [aux_sym__regular_string_literal_repeat1] = STATE(104),
        [anon_sym_SEMI] = ACTIONS(886),
        [anon_sym_RBRACE] = ACTIONS(886),
        [anon_sym_COMMA] = ACTIONS(886),
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
        [anon_sym_DQUOTE] = ACTIONS(403),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(890),
        [sym_comment] = ACTIONS(87),
    },
    [241] = {
        [sym__class_modifiers] = STATE(181),
        [sym__field_modifiers] = STATE(180),
        [anon_sym_class] = ACTIONS(245),
        [anon_sym_new] = ACTIONS(229),
        [anon_sym_public] = ACTIONS(229),
        [anon_sym_protected] = ACTIONS(229),
        [anon_sym_internal] = ACTIONS(229),
        [anon_sym_private] = ACTIONS(229),
        [anon_sym_sbyte] = ACTIONS(251),
        [anon_sym_byte] = ACTIONS(251),
        [anon_sym_short] = ACTIONS(251),
        [anon_sym_ushort] = ACTIONS(251),
        [anon_sym_int] = ACTIONS(251),
        [anon_sym_uint] = ACTIONS(251),
        [anon_sym_long] = ACTIONS(251),
        [anon_sym_ulong] = ACTIONS(251),
        [anon_sym_char] = ACTIONS(251),
        [anon_sym_unsafe] = ACTIONS(229),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(251),
        [anon_sym_decimal] = ACTIONS(251),
        [anon_sym_double] = ACTIONS(251),
        [anon_sym_float] = ACTIONS(251),
        [anon_sym_object] = ACTIONS(251),
        [anon_sym_string] = ACTIONS(251),
        [sym_global] = ACTIONS(691),
        [sym_identifier_name] = ACTIONS(892),
        [sym_comment] = ACTIONS(87),
    },
    [242] = {
        [anon_sym_LBRACE] = ACTIONS(895),
        [anon_sym_COMMA] = ACTIONS(895),
        [anon_sym_GT] = ACTIONS(895),
        [sym_identifier_name] = ACTIONS(898),
        [sym_comment] = ACTIONS(87),
    },
    [243] = {
        [sym__enum_base] = STATE(249),
        [sym__enum_body] = STATE(314),
        [sym_attribute_argument_list] = STATE(36),
        [sym_equals_value_clause] = STATE(260),
        [sym_type_parameter_list] = STATE(268),
        [anon_sym_SEMI] = ACTIONS(901),
        [anon_sym_LBRACE] = ACTIONS(905),
        [anon_sym_RBRACE] = ACTIONS(908),
        [anon_sym_RBRACK] = ACTIONS(171),
        [anon_sym_COLON] = ACTIONS(483),
        [anon_sym_COMMA] = ACTIONS(911),
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_EQ] = ACTIONS(917),
        [anon_sym_DOT] = ACTIONS(919),
        [anon_sym_LT] = ACTIONS(211),
        [anon_sym_GT] = ACTIONS(259),
        [sym_identifier_name] = ACTIONS(261),
        [sym_comment] = ACTIONS(87),
    },
    [244] = {
        [ts_builtin_sym_end] = ACTIONS(923),
        [anon_sym_using] = ACTIONS(923),
        [anon_sym_namespace] = ACTIONS(923),
        [anon_sym_class] = ACTIONS(923),
        [anon_sym_struct] = ACTIONS(923),
        [anon_sym_LBRACK] = ACTIONS(923),
        [anon_sym_enum] = ACTIONS(923),
        [anon_sym_new] = ACTIONS(923),
        [anon_sym_public] = ACTIONS(923),
        [anon_sym_protected] = ACTIONS(923),
        [anon_sym_internal] = ACTIONS(923),
        [anon_sym_private] = ACTIONS(923),
        [anon_sym_unsafe] = ACTIONS(923),
        [anon_sym_abstract] = ACTIONS(923),
        [anon_sym_sealed] = ACTIONS(923),
        [anon_sym_static] = ACTIONS(923),
        [sym_comment] = ACTIONS(87),
    },
    [245] = {
        [ts_builtin_sym_end] = ACTIONS(926),
        [anon_sym_namespace] = ACTIONS(929),
        [anon_sym_RBRACE] = ACTIONS(934),
        [anon_sym_class] = ACTIONS(929),
        [anon_sym_struct] = ACTIONS(929),
        [anon_sym_LBRACK] = ACTIONS(929),
        [anon_sym_enum] = ACTIONS(929),
        [anon_sym_new] = ACTIONS(929),
        [anon_sym_public] = ACTIONS(929),
        [anon_sym_protected] = ACTIONS(929),
        [anon_sym_internal] = ACTIONS(929),
        [anon_sym_private] = ACTIONS(929),
        [anon_sym_unsafe] = ACTIONS(929),
        [anon_sym_abstract] = ACTIONS(929),
        [anon_sym_sealed] = ACTIONS(929),
        [anon_sym_static] = ACTIONS(929),
        [sym_comment] = ACTIONS(87),
    },
    [246] = {
        [ts_builtin_sym_end] = ACTIONS(926),
        [anon_sym_namespace] = ACTIONS(937),
        [anon_sym_RBRACE] = ACTIONS(942),
        [anon_sym_class] = ACTIONS(947),
        [anon_sym_struct] = ACTIONS(947),
        [anon_sym_LBRACK] = ACTIONS(954),
        [anon_sym_enum] = ACTIONS(947),
        [anon_sym_new] = ACTIONS(947),
        [anon_sym_public] = ACTIONS(947),
        [anon_sym_protected] = ACTIONS(947),
        [anon_sym_internal] = ACTIONS(947),
        [anon_sym_private] = ACTIONS(947),
        [anon_sym_sbyte] = ACTIONS(961),
        [anon_sym_byte] = ACTIONS(961),
        [anon_sym_short] = ACTIONS(961),
        [anon_sym_ushort] = ACTIONS(961),
        [anon_sym_int] = ACTIONS(961),
        [anon_sym_uint] = ACTIONS(961),
        [anon_sym_long] = ACTIONS(961),
        [anon_sym_ulong] = ACTIONS(961),
        [anon_sym_char] = ACTIONS(961),
        [anon_sym_unsafe] = ACTIONS(947),
        [anon_sym_abstract] = ACTIONS(947),
        [anon_sym_sealed] = ACTIONS(947),
        [anon_sym_static] = ACTIONS(947),
        [anon_sym_readonly] = ACTIONS(961),
        [anon_sym_volatile] = ACTIONS(961),
        [anon_sym_bool] = ACTIONS(961),
        [anon_sym_decimal] = ACTIONS(961),
        [anon_sym_double] = ACTIONS(961),
        [anon_sym_float] = ACTIONS(961),
        [anon_sym_object] = ACTIONS(961),
        [anon_sym_string] = ACTIONS(961),
        [sym_identifier_name] = ACTIONS(964),
        [sym_comment] = ACTIONS(87),
    },
    [247] = {
        [ts_builtin_sym_end] = ACTIONS(926),
        [anon_sym_namespace] = ACTIONS(926),
        [anon_sym_class] = ACTIONS(926),
        [anon_sym_struct] = ACTIONS(926),
        [anon_sym_LBRACK] = ACTIONS(926),
        [anon_sym_enum] = ACTIONS(926),
        [anon_sym_new] = ACTIONS(926),
        [anon_sym_public] = ACTIONS(926),
        [anon_sym_protected] = ACTIONS(926),
        [anon_sym_internal] = ACTIONS(926),
        [anon_sym_private] = ACTIONS(926),
        [anon_sym_unsafe] = ACTIONS(926),
        [anon_sym_abstract] = ACTIONS(926),
        [anon_sym_sealed] = ACTIONS(926),
        [anon_sym_static] = ACTIONS(926),
        [sym_comment] = ACTIONS(87),
    },
    [248] = {
        [sym_enum_modifier] = STATE(147),
        [sym_variable_declaration] = STATE(64),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(148),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(149),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(150),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [anon_sym_class] = ACTIONS(269),
        [anon_sym_struct] = ACTIONS(271),
        [anon_sym_enum] = ACTIONS(273),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(967),
        [sym_comment] = ACTIONS(87),
    },
    [249] = {
        [sym__enum_body] = STATE(310),
        [anon_sym_LBRACE] = ACTIONS(481),
        [sym_comment] = ACTIONS(87),
    },
    [250] = {
        [ts_builtin_sym_end] = ACTIONS(969),
        [anon_sym_SEMI] = ACTIONS(974),
        [anon_sym_namespace] = ACTIONS(976),
        [anon_sym_RBRACE] = ACTIONS(969),
        [anon_sym_class] = ACTIONS(976),
        [anon_sym_struct] = ACTIONS(976),
        [anon_sym_LBRACK] = ACTIONS(969),
        [anon_sym_enum] = ACTIONS(976),
        [anon_sym_new] = ACTIONS(976),
        [anon_sym_public] = ACTIONS(976),
        [anon_sym_protected] = ACTIONS(976),
        [anon_sym_internal] = ACTIONS(976),
        [anon_sym_private] = ACTIONS(976),
        [anon_sym_sbyte] = ACTIONS(976),
        [anon_sym_byte] = ACTIONS(976),
        [anon_sym_short] = ACTIONS(976),
        [anon_sym_ushort] = ACTIONS(976),
        [anon_sym_int] = ACTIONS(976),
        [anon_sym_uint] = ACTIONS(976),
        [anon_sym_long] = ACTIONS(976),
        [anon_sym_ulong] = ACTIONS(976),
        [anon_sym_char] = ACTIONS(976),
        [anon_sym_unsafe] = ACTIONS(976),
        [anon_sym_abstract] = ACTIONS(976),
        [anon_sym_sealed] = ACTIONS(976),
        [anon_sym_static] = ACTIONS(976),
        [anon_sym_readonly] = ACTIONS(976),
        [anon_sym_volatile] = ACTIONS(976),
        [anon_sym_bool] = ACTIONS(976),
        [anon_sym_decimal] = ACTIONS(976),
        [anon_sym_double] = ACTIONS(976),
        [anon_sym_float] = ACTIONS(976),
        [anon_sym_object] = ACTIONS(976),
        [anon_sym_string] = ACTIONS(976),
        [sym_identifier_name] = ACTIONS(981),
        [sym_comment] = ACTIONS(87),
    },
    [251] = {
        [aux_sym__enum_body_repeat1] = STATE(139),
        [anon_sym_RBRACE] = ACTIONS(986),
        [anon_sym_COMMA] = ACTIONS(990),
        [sym_comment] = ACTIONS(87),
    },
    [252] = {
        [anon_sym_enum] = ACTIONS(994),
        [sym_comment] = ACTIONS(87),
    },
    [253] = {
        [anon_sym_class] = ACTIONS(996),
        [anon_sym_struct] = ACTIONS(996),
        [anon_sym_LBRACK] = ACTIONS(999),
        [anon_sym_enum] = ACTIONS(996),
        [anon_sym_new] = ACTIONS(996),
        [anon_sym_public] = ACTIONS(996),
        [anon_sym_protected] = ACTIONS(996),
        [anon_sym_internal] = ACTIONS(996),
        [anon_sym_private] = ACTIONS(996),
        [anon_sym_sbyte] = ACTIONS(996),
        [anon_sym_byte] = ACTIONS(996),
        [anon_sym_short] = ACTIONS(996),
        [anon_sym_ushort] = ACTIONS(996),
        [anon_sym_int] = ACTIONS(996),
        [anon_sym_uint] = ACTIONS(996),
        [anon_sym_long] = ACTIONS(996),
        [anon_sym_ulong] = ACTIONS(996),
        [anon_sym_char] = ACTIONS(996),
        [anon_sym_unsafe] = ACTIONS(996),
        [anon_sym_abstract] = ACTIONS(996),
        [anon_sym_sealed] = ACTIONS(996),
        [anon_sym_static] = ACTIONS(996),
        [anon_sym_readonly] = ACTIONS(996),
        [anon_sym_volatile] = ACTIONS(996),
        [anon_sym_bool] = ACTIONS(996),
        [anon_sym_decimal] = ACTIONS(996),
        [anon_sym_double] = ACTIONS(996),
        [anon_sym_float] = ACTIONS(996),
        [anon_sym_object] = ACTIONS(996),
        [anon_sym_string] = ACTIONS(996),
        [sym_identifier_name] = ACTIONS(1002),
        [sym_comment] = ACTIONS(87),
    },
    [254] = {
        [anon_sym_RBRACK] = ACTIONS(1005),
        [sym_comment] = ACTIONS(87),
    },
    [255] = {
        [aux_sym_attribute_list_repeat1] = STATE(30),
        [anon_sym_RBRACK] = ACTIONS(1007),
        [anon_sym_COMMA] = ACTIONS(1011),
        [sym_comment] = ACTIONS(87),
    },
    [256] = {
        [anon_sym_RBRACE] = ACTIONS(1015),
        [anon_sym_class] = ACTIONS(961),
        [anon_sym_struct] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(1015),
        [anon_sym_enum] = ACTIONS(961),
        [anon_sym_new] = ACTIONS(961),
        [anon_sym_public] = ACTIONS(961),
        [anon_sym_protected] = ACTIONS(961),
        [anon_sym_internal] = ACTIONS(961),
        [anon_sym_private] = ACTIONS(961),
        [anon_sym_sbyte] = ACTIONS(961),
        [anon_sym_byte] = ACTIONS(961),
        [anon_sym_short] = ACTIONS(961),
        [anon_sym_ushort] = ACTIONS(961),
        [anon_sym_int] = ACTIONS(961),
        [anon_sym_uint] = ACTIONS(961),
        [anon_sym_long] = ACTIONS(961),
        [anon_sym_ulong] = ACTIONS(961),
        [anon_sym_char] = ACTIONS(961),
        [anon_sym_unsafe] = ACTIONS(961),
        [anon_sym_abstract] = ACTIONS(961),
        [anon_sym_sealed] = ACTIONS(961),
        [anon_sym_static] = ACTIONS(961),
        [anon_sym_readonly] = ACTIONS(961),
        [anon_sym_volatile] = ACTIONS(961),
        [anon_sym_bool] = ACTIONS(961),
        [anon_sym_decimal] = ACTIONS(961),
        [anon_sym_double] = ACTIONS(961),
        [anon_sym_float] = ACTIONS(961),
        [anon_sym_object] = ACTIONS(961),
        [anon_sym_string] = ACTIONS(961),
        [sym_identifier_name] = ACTIONS(964),
        [sym_comment] = ACTIONS(87),
    },
    [257] = {
        [anon_sym_SEMI] = ACTIONS(1018),
        [sym_comment] = ACTIONS(87),
    },
    [258] = {
        [sym_variable_declarator] = STATE(79),
        [anon_sym_COMMA] = ACTIONS(599),
        [anon_sym_GT] = ACTIONS(599),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(87),
    },
    [259] = {
        [aux_sym_variable_declaration_repeat1] = STATE(81),
        [anon_sym_SEMI] = ACTIONS(1020),
        [anon_sym_COMMA] = ACTIONS(1024),
        [sym_comment] = ACTIONS(87),
    },
    [260] = {
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_RBRACE] = ACTIONS(1028),
        [anon_sym_COMMA] = ACTIONS(1031),
        [sym_comment] = ACTIONS(87),
    },
    [261] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(1035),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1038),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1038),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(1038),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(1038),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(1038),
        [anon_sym_BSLASH0] = ACTIONS(1038),
        [anon_sym_BSLASHa] = ACTIONS(1038),
        [anon_sym_BSLASHb] = ACTIONS(1038),
        [anon_sym_BSLASHf] = ACTIONS(1038),
        [anon_sym_BSLASHn] = ACTIONS(1038),
        [anon_sym_BSLASHr] = ACTIONS(1038),
        [anon_sym_BSLASHt] = ACTIONS(1038),
        [anon_sym_BSLASHv] = ACTIONS(1038),
        [anon_sym_DQUOTE] = ACTIONS(1038),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1035),
        [sym_comment] = ACTIONS(87),
    },
    [262] = {
        [anon_sym_class] = ACTIONS(1041),
        [sym_comment] = ACTIONS(87),
    },
    [263] = {
        [anon_sym_class] = ACTIONS(1043),
        [sym_comment] = ACTIONS(87),
    },
    [264] = {
        [anon_sym_struct] = ACTIONS(1046),
        [sym_comment] = ACTIONS(87),
    },
    [265] = {
        [anon_sym_struct] = ACTIONS(1048),
        [sym_comment] = ACTIONS(87),
    },
    [266] = {
        [sym_variable_declaration] = STATE(279),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_predefined_type] = STATE(58),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [267] = {
        [anon_sym_sbyte] = ACTIONS(1051),
        [anon_sym_byte] = ACTIONS(1051),
        [anon_sym_short] = ACTIONS(1051),
        [anon_sym_ushort] = ACTIONS(1051),
        [anon_sym_int] = ACTIONS(1051),
        [anon_sym_uint] = ACTIONS(1051),
        [anon_sym_long] = ACTIONS(1051),
        [anon_sym_ulong] = ACTIONS(1051),
        [anon_sym_char] = ACTIONS(1051),
        [anon_sym_bool] = ACTIONS(1051),
        [anon_sym_decimal] = ACTIONS(1051),
        [anon_sym_double] = ACTIONS(1051),
        [anon_sym_float] = ACTIONS(1051),
        [anon_sym_object] = ACTIONS(1051),
        [anon_sym_string] = ACTIONS(1051),
        [sym_identifier_name] = ACTIONS(1054),
        [sym_comment] = ACTIONS(87),
    },
    [268] = {
        [anon_sym_LBRACE] = ACTIONS(1057),
        [anon_sym_COMMA] = ACTIONS(595),
        [anon_sym_GT] = ACTIONS(595),
        [sym_identifier_name] = ACTIONS(597),
        [sym_comment] = ACTIONS(87),
    },
    [269] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(175),
        [anon_sym_COMMA] = ACTIONS(1059),
        [anon_sym_GT] = ACTIONS(1063),
        [sym_comment] = ACTIONS(87),
    },
    [270] = {
        [anon_sym_SEMI] = ACTIONS(1067),
        [anon_sym_LBRACE] = ACTIONS(667),
        [anon_sym_DOT] = ACTIONS(669),
        [sym_comment] = ACTIONS(87),
    },
    [271] = {
        [sym_namespace_declaration] = STATE(38),
        [sym_class_declaration] = STATE(38),
        [sym_struct_declaration] = STATE(38),
        [sym__global_attributes] = STATE(38),
        [sym__attributes] = STATE(14),
        [sym_enum_declaration] = STATE(38),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [aux_sym__attributes_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(1069),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(97),
        [anon_sym_LBRACK] = ACTIONS(99),
        [anon_sym_enum] = ACTIONS(101),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [sym_comment] = ACTIONS(87),
    },
    [272] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1072),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [273] = {
        [ts_builtin_sym_end] = ACTIONS(1074),
        [anon_sym_namespace] = ACTIONS(1083),
        [anon_sym_RBRACE] = ACTIONS(1074),
        [anon_sym_class] = ACTIONS(1083),
        [anon_sym_struct] = ACTIONS(1083),
        [anon_sym_LBRACK] = ACTIONS(1074),
        [anon_sym_enum] = ACTIONS(1083),
        [anon_sym_new] = ACTIONS(1083),
        [anon_sym_public] = ACTIONS(1083),
        [anon_sym_protected] = ACTIONS(1083),
        [anon_sym_internal] = ACTIONS(1083),
        [anon_sym_private] = ACTIONS(1083),
        [anon_sym_sbyte] = ACTIONS(1083),
        [anon_sym_byte] = ACTIONS(1083),
        [anon_sym_short] = ACTIONS(1083),
        [anon_sym_ushort] = ACTIONS(1083),
        [anon_sym_int] = ACTIONS(1083),
        [anon_sym_uint] = ACTIONS(1083),
        [anon_sym_long] = ACTIONS(1083),
        [anon_sym_ulong] = ACTIONS(1083),
        [anon_sym_char] = ACTIONS(1083),
        [anon_sym_unsafe] = ACTIONS(1083),
        [anon_sym_abstract] = ACTIONS(1083),
        [anon_sym_sealed] = ACTIONS(1083),
        [anon_sym_static] = ACTIONS(1083),
        [anon_sym_readonly] = ACTIONS(1083),
        [anon_sym_volatile] = ACTIONS(1083),
        [anon_sym_bool] = ACTIONS(1083),
        [anon_sym_decimal] = ACTIONS(1083),
        [anon_sym_double] = ACTIONS(1083),
        [anon_sym_float] = ACTIONS(1083),
        [anon_sym_object] = ACTIONS(1083),
        [anon_sym_string] = ACTIONS(1083),
        [sym_identifier_name] = ACTIONS(1092),
        [sym_comment] = ACTIONS(87),
    },
    [274] = {
        [ts_builtin_sym_end] = ACTIONS(1101),
        [anon_sym_using] = ACTIONS(1101),
        [anon_sym_namespace] = ACTIONS(1101),
        [anon_sym_class] = ACTIONS(1101),
        [anon_sym_struct] = ACTIONS(1101),
        [anon_sym_LBRACK] = ACTIONS(1101),
        [anon_sym_enum] = ACTIONS(1101),
        [anon_sym_new] = ACTIONS(1101),
        [anon_sym_public] = ACTIONS(1101),
        [anon_sym_protected] = ACTIONS(1101),
        [anon_sym_internal] = ACTIONS(1101),
        [anon_sym_private] = ACTIONS(1101),
        [anon_sym_unsafe] = ACTIONS(1101),
        [anon_sym_abstract] = ACTIONS(1101),
        [anon_sym_sealed] = ACTIONS(1101),
        [anon_sym_static] = ACTIONS(1101),
        [sym_comment] = ACTIONS(87),
    },
    [275] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(277),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1104),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [276] = {
        [ts_builtin_sym_end] = ACTIONS(1106),
        [anon_sym_namespace] = ACTIONS(1113),
        [anon_sym_RBRACE] = ACTIONS(1106),
        [anon_sym_class] = ACTIONS(1113),
        [anon_sym_struct] = ACTIONS(1113),
        [anon_sym_LBRACK] = ACTIONS(1106),
        [anon_sym_enum] = ACTIONS(1113),
        [anon_sym_new] = ACTIONS(1113),
        [anon_sym_public] = ACTIONS(1113),
        [anon_sym_protected] = ACTIONS(1113),
        [anon_sym_internal] = ACTIONS(1113),
        [anon_sym_private] = ACTIONS(1113),
        [anon_sym_sbyte] = ACTIONS(1113),
        [anon_sym_byte] = ACTIONS(1113),
        [anon_sym_short] = ACTIONS(1113),
        [anon_sym_ushort] = ACTIONS(1113),
        [anon_sym_int] = ACTIONS(1113),
        [anon_sym_uint] = ACTIONS(1113),
        [anon_sym_long] = ACTIONS(1113),
        [anon_sym_ulong] = ACTIONS(1113),
        [anon_sym_char] = ACTIONS(1113),
        [anon_sym_unsafe] = ACTIONS(1113),
        [anon_sym_abstract] = ACTIONS(1113),
        [anon_sym_sealed] = ACTIONS(1113),
        [anon_sym_static] = ACTIONS(1113),
        [anon_sym_readonly] = ACTIONS(1113),
        [anon_sym_volatile] = ACTIONS(1113),
        [anon_sym_bool] = ACTIONS(1113),
        [anon_sym_decimal] = ACTIONS(1113),
        [anon_sym_double] = ACTIONS(1113),
        [anon_sym_float] = ACTIONS(1113),
        [anon_sym_object] = ACTIONS(1113),
        [anon_sym_string] = ACTIONS(1113),
        [sym_identifier_name] = ACTIONS(1120),
        [sym_comment] = ACTIONS(87),
    },
    [277] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1127),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [278] = {
        [ts_builtin_sym_end] = ACTIONS(1129),
        [anon_sym_namespace] = ACTIONS(1136),
        [anon_sym_RBRACE] = ACTIONS(1129),
        [anon_sym_class] = ACTIONS(1136),
        [anon_sym_struct] = ACTIONS(1136),
        [anon_sym_LBRACK] = ACTIONS(1129),
        [anon_sym_enum] = ACTIONS(1136),
        [anon_sym_new] = ACTIONS(1136),
        [anon_sym_public] = ACTIONS(1136),
        [anon_sym_protected] = ACTIONS(1136),
        [anon_sym_internal] = ACTIONS(1136),
        [anon_sym_private] = ACTIONS(1136),
        [anon_sym_sbyte] = ACTIONS(1136),
        [anon_sym_byte] = ACTIONS(1136),
        [anon_sym_short] = ACTIONS(1136),
        [anon_sym_ushort] = ACTIONS(1136),
        [anon_sym_int] = ACTIONS(1136),
        [anon_sym_uint] = ACTIONS(1136),
        [anon_sym_long] = ACTIONS(1136),
        [anon_sym_ulong] = ACTIONS(1136),
        [anon_sym_char] = ACTIONS(1136),
        [anon_sym_unsafe] = ACTIONS(1136),
        [anon_sym_abstract] = ACTIONS(1136),
        [anon_sym_sealed] = ACTIONS(1136),
        [anon_sym_static] = ACTIONS(1136),
        [anon_sym_readonly] = ACTIONS(1136),
        [anon_sym_volatile] = ACTIONS(1136),
        [anon_sym_bool] = ACTIONS(1136),
        [anon_sym_decimal] = ACTIONS(1136),
        [anon_sym_double] = ACTIONS(1136),
        [anon_sym_float] = ACTIONS(1136),
        [anon_sym_object] = ACTIONS(1136),
        [anon_sym_string] = ACTIONS(1136),
        [sym_identifier_name] = ACTIONS(1143),
        [sym_comment] = ACTIONS(87),
    },
    [279] = {
        [anon_sym_SEMI] = ACTIONS(1150),
        [sym_comment] = ACTIONS(87),
    },
    [280] = {
        [anon_sym_RBRACE] = ACTIONS(1152),
        [anon_sym_class] = ACTIONS(1155),
        [anon_sym_struct] = ACTIONS(1155),
        [anon_sym_LBRACK] = ACTIONS(1152),
        [anon_sym_enum] = ACTIONS(1155),
        [anon_sym_new] = ACTIONS(1155),
        [anon_sym_public] = ACTIONS(1155),
        [anon_sym_protected] = ACTIONS(1155),
        [anon_sym_internal] = ACTIONS(1155),
        [anon_sym_private] = ACTIONS(1155),
        [anon_sym_sbyte] = ACTIONS(1155),
        [anon_sym_byte] = ACTIONS(1155),
        [anon_sym_short] = ACTIONS(1155),
        [anon_sym_ushort] = ACTIONS(1155),
        [anon_sym_int] = ACTIONS(1155),
        [anon_sym_uint] = ACTIONS(1155),
        [anon_sym_long] = ACTIONS(1155),
        [anon_sym_ulong] = ACTIONS(1155),
        [anon_sym_char] = ACTIONS(1155),
        [anon_sym_unsafe] = ACTIONS(1155),
        [anon_sym_abstract] = ACTIONS(1155),
        [anon_sym_sealed] = ACTIONS(1155),
        [anon_sym_static] = ACTIONS(1155),
        [anon_sym_readonly] = ACTIONS(1155),
        [anon_sym_volatile] = ACTIONS(1155),
        [anon_sym_bool] = ACTIONS(1155),
        [anon_sym_decimal] = ACTIONS(1155),
        [anon_sym_double] = ACTIONS(1155),
        [anon_sym_float] = ACTIONS(1155),
        [anon_sym_object] = ACTIONS(1155),
        [anon_sym_string] = ACTIONS(1155),
        [sym_identifier_name] = ACTIONS(1158),
        [sym_comment] = ACTIONS(87),
    },
    [281] = {
        [sym_identifier_name] = ACTIONS(1161),
        [sym_comment] = ACTIONS(87),
    },
    [282] = {
        [sym_type_parameter_list] = STATE(284),
        [anon_sym_LBRACE] = ACTIONS(1163),
        [anon_sym_LT] = ACTIONS(211),
        [sym_comment] = ACTIONS(87),
    },
    [283] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(290),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1165),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [284] = {
        [anon_sym_LBRACE] = ACTIONS(1167),
        [sym_comment] = ACTIONS(87),
    },
    [285] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(287),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1169),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [286] = {
        [ts_builtin_sym_end] = ACTIONS(1171),
        [anon_sym_namespace] = ACTIONS(1174),
        [anon_sym_RBRACE] = ACTIONS(1171),
        [anon_sym_class] = ACTIONS(1174),
        [anon_sym_struct] = ACTIONS(1174),
        [anon_sym_LBRACK] = ACTIONS(1171),
        [anon_sym_enum] = ACTIONS(1174),
        [anon_sym_new] = ACTIONS(1174),
        [anon_sym_public] = ACTIONS(1174),
        [anon_sym_protected] = ACTIONS(1174),
        [anon_sym_internal] = ACTIONS(1174),
        [anon_sym_private] = ACTIONS(1174),
        [anon_sym_sbyte] = ACTIONS(1174),
        [anon_sym_byte] = ACTIONS(1174),
        [anon_sym_short] = ACTIONS(1174),
        [anon_sym_ushort] = ACTIONS(1174),
        [anon_sym_int] = ACTIONS(1174),
        [anon_sym_uint] = ACTIONS(1174),
        [anon_sym_long] = ACTIONS(1174),
        [anon_sym_ulong] = ACTIONS(1174),
        [anon_sym_char] = ACTIONS(1174),
        [anon_sym_unsafe] = ACTIONS(1174),
        [anon_sym_abstract] = ACTIONS(1174),
        [anon_sym_sealed] = ACTIONS(1174),
        [anon_sym_static] = ACTIONS(1174),
        [anon_sym_readonly] = ACTIONS(1174),
        [anon_sym_volatile] = ACTIONS(1174),
        [anon_sym_bool] = ACTIONS(1174),
        [anon_sym_decimal] = ACTIONS(1174),
        [anon_sym_double] = ACTIONS(1174),
        [anon_sym_float] = ACTIONS(1174),
        [anon_sym_object] = ACTIONS(1174),
        [anon_sym_string] = ACTIONS(1174),
        [sym_identifier_name] = ACTIONS(1177),
        [sym_comment] = ACTIONS(87),
    },
    [287] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1180),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [288] = {
        [ts_builtin_sym_end] = ACTIONS(1182),
        [anon_sym_namespace] = ACTIONS(1185),
        [anon_sym_RBRACE] = ACTIONS(1182),
        [anon_sym_class] = ACTIONS(1185),
        [anon_sym_struct] = ACTIONS(1185),
        [anon_sym_LBRACK] = ACTIONS(1182),
        [anon_sym_enum] = ACTIONS(1185),
        [anon_sym_new] = ACTIONS(1185),
        [anon_sym_public] = ACTIONS(1185),
        [anon_sym_protected] = ACTIONS(1185),
        [anon_sym_internal] = ACTIONS(1185),
        [anon_sym_private] = ACTIONS(1185),
        [anon_sym_sbyte] = ACTIONS(1185),
        [anon_sym_byte] = ACTIONS(1185),
        [anon_sym_short] = ACTIONS(1185),
        [anon_sym_ushort] = ACTIONS(1185),
        [anon_sym_int] = ACTIONS(1185),
        [anon_sym_uint] = ACTIONS(1185),
        [anon_sym_long] = ACTIONS(1185),
        [anon_sym_ulong] = ACTIONS(1185),
        [anon_sym_char] = ACTIONS(1185),
        [anon_sym_unsafe] = ACTIONS(1185),
        [anon_sym_abstract] = ACTIONS(1185),
        [anon_sym_sealed] = ACTIONS(1185),
        [anon_sym_static] = ACTIONS(1185),
        [anon_sym_readonly] = ACTIONS(1185),
        [anon_sym_volatile] = ACTIONS(1185),
        [anon_sym_bool] = ACTIONS(1185),
        [anon_sym_decimal] = ACTIONS(1185),
        [anon_sym_double] = ACTIONS(1185),
        [anon_sym_float] = ACTIONS(1185),
        [anon_sym_object] = ACTIONS(1185),
        [anon_sym_string] = ACTIONS(1185),
        [sym_identifier_name] = ACTIONS(1188),
        [sym_comment] = ACTIONS(87),
    },
    [289] = {
        [ts_builtin_sym_end] = ACTIONS(1191),
        [anon_sym_namespace] = ACTIONS(1194),
        [anon_sym_RBRACE] = ACTIONS(1191),
        [anon_sym_class] = ACTIONS(1194),
        [anon_sym_struct] = ACTIONS(1194),
        [anon_sym_LBRACK] = ACTIONS(1191),
        [anon_sym_enum] = ACTIONS(1194),
        [anon_sym_new] = ACTIONS(1194),
        [anon_sym_public] = ACTIONS(1194),
        [anon_sym_protected] = ACTIONS(1194),
        [anon_sym_internal] = ACTIONS(1194),
        [anon_sym_private] = ACTIONS(1194),
        [anon_sym_sbyte] = ACTIONS(1194),
        [anon_sym_byte] = ACTIONS(1194),
        [anon_sym_short] = ACTIONS(1194),
        [anon_sym_ushort] = ACTIONS(1194),
        [anon_sym_int] = ACTIONS(1194),
        [anon_sym_uint] = ACTIONS(1194),
        [anon_sym_long] = ACTIONS(1194),
        [anon_sym_ulong] = ACTIONS(1194),
        [anon_sym_char] = ACTIONS(1194),
        [anon_sym_unsafe] = ACTIONS(1194),
        [anon_sym_abstract] = ACTIONS(1194),
        [anon_sym_sealed] = ACTIONS(1194),
        [anon_sym_static] = ACTIONS(1194),
        [anon_sym_readonly] = ACTIONS(1194),
        [anon_sym_volatile] = ACTIONS(1194),
        [anon_sym_bool] = ACTIONS(1194),
        [anon_sym_decimal] = ACTIONS(1194),
        [anon_sym_double] = ACTIONS(1194),
        [anon_sym_float] = ACTIONS(1194),
        [anon_sym_object] = ACTIONS(1194),
        [anon_sym_string] = ACTIONS(1194),
        [sym_identifier_name] = ACTIONS(1197),
        [sym_comment] = ACTIONS(87),
    },
    [290] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1169),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [291] = {
        [sym_identifier_name] = ACTIONS(1200),
        [sym_comment] = ACTIONS(87),
    },
    [292] = {
        [sym_type_parameter_list] = STATE(294),
        [anon_sym_LBRACE] = ACTIONS(1202),
        [anon_sym_LT] = ACTIONS(211),
        [sym_comment] = ACTIONS(87),
    },
    [293] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(300),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1204),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [294] = {
        [anon_sym_LBRACE] = ACTIONS(1206),
        [sym_comment] = ACTIONS(87),
    },
    [295] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(297),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1208),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [296] = {
        [ts_builtin_sym_end] = ACTIONS(1210),
        [anon_sym_namespace] = ACTIONS(1213),
        [anon_sym_RBRACE] = ACTIONS(1210),
        [anon_sym_class] = ACTIONS(1213),
        [anon_sym_struct] = ACTIONS(1213),
        [anon_sym_LBRACK] = ACTIONS(1210),
        [anon_sym_enum] = ACTIONS(1213),
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
        [anon_sym_unsafe] = ACTIONS(1213),
        [anon_sym_abstract] = ACTIONS(1213),
        [anon_sym_sealed] = ACTIONS(1213),
        [anon_sym_static] = ACTIONS(1213),
        [anon_sym_readonly] = ACTIONS(1213),
        [anon_sym_volatile] = ACTIONS(1213),
        [anon_sym_bool] = ACTIONS(1213),
        [anon_sym_decimal] = ACTIONS(1213),
        [anon_sym_double] = ACTIONS(1213),
        [anon_sym_float] = ACTIONS(1213),
        [anon_sym_object] = ACTIONS(1213),
        [anon_sym_string] = ACTIONS(1213),
        [sym_identifier_name] = ACTIONS(1216),
        [sym_comment] = ACTIONS(87),
    },
    [297] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1219),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [298] = {
        [ts_builtin_sym_end] = ACTIONS(1221),
        [anon_sym_namespace] = ACTIONS(1224),
        [anon_sym_RBRACE] = ACTIONS(1221),
        [anon_sym_class] = ACTIONS(1224),
        [anon_sym_struct] = ACTIONS(1224),
        [anon_sym_LBRACK] = ACTIONS(1221),
        [anon_sym_enum] = ACTIONS(1224),
        [anon_sym_new] = ACTIONS(1224),
        [anon_sym_public] = ACTIONS(1224),
        [anon_sym_protected] = ACTIONS(1224),
        [anon_sym_internal] = ACTIONS(1224),
        [anon_sym_private] = ACTIONS(1224),
        [anon_sym_sbyte] = ACTIONS(1224),
        [anon_sym_byte] = ACTIONS(1224),
        [anon_sym_short] = ACTIONS(1224),
        [anon_sym_ushort] = ACTIONS(1224),
        [anon_sym_int] = ACTIONS(1224),
        [anon_sym_uint] = ACTIONS(1224),
        [anon_sym_long] = ACTIONS(1224),
        [anon_sym_ulong] = ACTIONS(1224),
        [anon_sym_char] = ACTIONS(1224),
        [anon_sym_unsafe] = ACTIONS(1224),
        [anon_sym_abstract] = ACTIONS(1224),
        [anon_sym_sealed] = ACTIONS(1224),
        [anon_sym_static] = ACTIONS(1224),
        [anon_sym_readonly] = ACTIONS(1224),
        [anon_sym_volatile] = ACTIONS(1224),
        [anon_sym_bool] = ACTIONS(1224),
        [anon_sym_decimal] = ACTIONS(1224),
        [anon_sym_double] = ACTIONS(1224),
        [anon_sym_float] = ACTIONS(1224),
        [anon_sym_object] = ACTIONS(1224),
        [anon_sym_string] = ACTIONS(1224),
        [sym_identifier_name] = ACTIONS(1227),
        [sym_comment] = ACTIONS(87),
    },
    [299] = {
        [ts_builtin_sym_end] = ACTIONS(1230),
        [anon_sym_namespace] = ACTIONS(1233),
        [anon_sym_RBRACE] = ACTIONS(1230),
        [anon_sym_class] = ACTIONS(1233),
        [anon_sym_struct] = ACTIONS(1233),
        [anon_sym_LBRACK] = ACTIONS(1230),
        [anon_sym_enum] = ACTIONS(1233),
        [anon_sym_new] = ACTIONS(1233),
        [anon_sym_public] = ACTIONS(1233),
        [anon_sym_protected] = ACTIONS(1233),
        [anon_sym_internal] = ACTIONS(1233),
        [anon_sym_private] = ACTIONS(1233),
        [anon_sym_sbyte] = ACTIONS(1233),
        [anon_sym_byte] = ACTIONS(1233),
        [anon_sym_short] = ACTIONS(1233),
        [anon_sym_ushort] = ACTIONS(1233),
        [anon_sym_int] = ACTIONS(1233),
        [anon_sym_uint] = ACTIONS(1233),
        [anon_sym_long] = ACTIONS(1233),
        [anon_sym_ulong] = ACTIONS(1233),
        [anon_sym_char] = ACTIONS(1233),
        [anon_sym_unsafe] = ACTIONS(1233),
        [anon_sym_abstract] = ACTIONS(1233),
        [anon_sym_sealed] = ACTIONS(1233),
        [anon_sym_static] = ACTIONS(1233),
        [anon_sym_readonly] = ACTIONS(1233),
        [anon_sym_volatile] = ACTIONS(1233),
        [anon_sym_bool] = ACTIONS(1233),
        [anon_sym_decimal] = ACTIONS(1233),
        [anon_sym_double] = ACTIONS(1233),
        [anon_sym_float] = ACTIONS(1233),
        [anon_sym_object] = ACTIONS(1233),
        [anon_sym_string] = ACTIONS(1233),
        [sym_identifier_name] = ACTIONS(1236),
        [sym_comment] = ACTIONS(87),
    },
    [300] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1208),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [301] = {
        [anon_sym_RBRACE] = ACTIONS(1239),
        [anon_sym_class] = ACTIONS(1243),
        [anon_sym_struct] = ACTIONS(1243),
        [anon_sym_LBRACK] = ACTIONS(1239),
        [anon_sym_enum] = ACTIONS(1243),
        [anon_sym_new] = ACTIONS(1243),
        [anon_sym_public] = ACTIONS(1243),
        [anon_sym_protected] = ACTIONS(1243),
        [anon_sym_internal] = ACTIONS(1243),
        [anon_sym_private] = ACTIONS(1243),
        [anon_sym_sbyte] = ACTIONS(1243),
        [anon_sym_byte] = ACTIONS(1243),
        [anon_sym_short] = ACTIONS(1243),
        [anon_sym_ushort] = ACTIONS(1243),
        [anon_sym_int] = ACTIONS(1243),
        [anon_sym_uint] = ACTIONS(1243),
        [anon_sym_long] = ACTIONS(1243),
        [anon_sym_ulong] = ACTIONS(1243),
        [anon_sym_char] = ACTIONS(1243),
        [anon_sym_unsafe] = ACTIONS(1243),
        [anon_sym_abstract] = ACTIONS(1243),
        [anon_sym_sealed] = ACTIONS(1243),
        [anon_sym_static] = ACTIONS(1243),
        [anon_sym_readonly] = ACTIONS(1243),
        [anon_sym_volatile] = ACTIONS(1243),
        [anon_sym_bool] = ACTIONS(1243),
        [anon_sym_decimal] = ACTIONS(1243),
        [anon_sym_double] = ACTIONS(1243),
        [anon_sym_float] = ACTIONS(1243),
        [anon_sym_object] = ACTIONS(1243),
        [anon_sym_string] = ACTIONS(1243),
        [sym_identifier_name] = ACTIONS(1247),
        [sym_comment] = ACTIONS(87),
    },
    [302] = {
        [sym_identifier_name] = ACTIONS(1251),
        [sym_comment] = ACTIONS(87),
    },
    [303] = {
        [sym__enum_base] = STATE(304),
        [sym__enum_body] = STATE(305),
        [anon_sym_LBRACE] = ACTIONS(481),
        [anon_sym_COLON] = ACTIONS(483),
        [sym_comment] = ACTIONS(87),
    },
    [304] = {
        [sym__enum_body] = STATE(307),
        [anon_sym_LBRACE] = ACTIONS(481),
        [sym_comment] = ACTIONS(87),
    },
    [305] = {
        [ts_builtin_sym_end] = ACTIONS(1253),
        [anon_sym_SEMI] = ACTIONS(1256),
        [anon_sym_namespace] = ACTIONS(1258),
        [anon_sym_RBRACE] = ACTIONS(1253),
        [anon_sym_class] = ACTIONS(1258),
        [anon_sym_struct] = ACTIONS(1258),
        [anon_sym_LBRACK] = ACTIONS(1253),
        [anon_sym_enum] = ACTIONS(1258),
        [anon_sym_new] = ACTIONS(1258),
        [anon_sym_public] = ACTIONS(1258),
        [anon_sym_protected] = ACTIONS(1258),
        [anon_sym_internal] = ACTIONS(1258),
        [anon_sym_private] = ACTIONS(1258),
        [anon_sym_sbyte] = ACTIONS(1258),
        [anon_sym_byte] = ACTIONS(1258),
        [anon_sym_short] = ACTIONS(1258),
        [anon_sym_ushort] = ACTIONS(1258),
        [anon_sym_int] = ACTIONS(1258),
        [anon_sym_uint] = ACTIONS(1258),
        [anon_sym_long] = ACTIONS(1258),
        [anon_sym_ulong] = ACTIONS(1258),
        [anon_sym_char] = ACTIONS(1258),
        [anon_sym_unsafe] = ACTIONS(1258),
        [anon_sym_abstract] = ACTIONS(1258),
        [anon_sym_sealed] = ACTIONS(1258),
        [anon_sym_static] = ACTIONS(1258),
        [anon_sym_readonly] = ACTIONS(1258),
        [anon_sym_volatile] = ACTIONS(1258),
        [anon_sym_bool] = ACTIONS(1258),
        [anon_sym_decimal] = ACTIONS(1258),
        [anon_sym_double] = ACTIONS(1258),
        [anon_sym_float] = ACTIONS(1258),
        [anon_sym_object] = ACTIONS(1258),
        [anon_sym_string] = ACTIONS(1258),
        [sym_identifier_name] = ACTIONS(1261),
        [sym_comment] = ACTIONS(87),
    },
    [306] = {
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
        [sym_comment] = ACTIONS(87),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(1264),
        [anon_sym_SEMI] = ACTIONS(1273),
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
        [sym_comment] = ACTIONS(87),
    },
    [308] = {
        [ts_builtin_sym_end] = ACTIONS(1275),
        [anon_sym_namespace] = ACTIONS(1278),
        [anon_sym_RBRACE] = ACTIONS(1275),
        [anon_sym_class] = ACTIONS(1278),
        [anon_sym_struct] = ACTIONS(1278),
        [anon_sym_LBRACK] = ACTIONS(1275),
        [anon_sym_enum] = ACTIONS(1278),
        [anon_sym_new] = ACTIONS(1278),
        [anon_sym_public] = ACTIONS(1278),
        [anon_sym_protected] = ACTIONS(1278),
        [anon_sym_internal] = ACTIONS(1278),
        [anon_sym_private] = ACTIONS(1278),
        [anon_sym_sbyte] = ACTIONS(1278),
        [anon_sym_byte] = ACTIONS(1278),
        [anon_sym_short] = ACTIONS(1278),
        [anon_sym_ushort] = ACTIONS(1278),
        [anon_sym_int] = ACTIONS(1278),
        [anon_sym_uint] = ACTIONS(1278),
        [anon_sym_long] = ACTIONS(1278),
        [anon_sym_ulong] = ACTIONS(1278),
        [anon_sym_char] = ACTIONS(1278),
        [anon_sym_unsafe] = ACTIONS(1278),
        [anon_sym_abstract] = ACTIONS(1278),
        [anon_sym_sealed] = ACTIONS(1278),
        [anon_sym_static] = ACTIONS(1278),
        [anon_sym_readonly] = ACTIONS(1278),
        [anon_sym_volatile] = ACTIONS(1278),
        [anon_sym_bool] = ACTIONS(1278),
        [anon_sym_decimal] = ACTIONS(1278),
        [anon_sym_double] = ACTIONS(1278),
        [anon_sym_float] = ACTIONS(1278),
        [anon_sym_object] = ACTIONS(1278),
        [anon_sym_string] = ACTIONS(1278),
        [sym_identifier_name] = ACTIONS(1281),
        [sym_comment] = ACTIONS(87),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(1284),
        [anon_sym_namespace] = ACTIONS(1289),
        [anon_sym_RBRACE] = ACTIONS(1284),
        [anon_sym_class] = ACTIONS(1289),
        [anon_sym_struct] = ACTIONS(1289),
        [anon_sym_LBRACK] = ACTIONS(1284),
        [anon_sym_enum] = ACTIONS(1289),
        [anon_sym_new] = ACTIONS(1289),
        [anon_sym_public] = ACTIONS(1289),
        [anon_sym_protected] = ACTIONS(1289),
        [anon_sym_internal] = ACTIONS(1289),
        [anon_sym_private] = ACTIONS(1289),
        [anon_sym_sbyte] = ACTIONS(1289),
        [anon_sym_byte] = ACTIONS(1289),
        [anon_sym_short] = ACTIONS(1289),
        [anon_sym_ushort] = ACTIONS(1289),
        [anon_sym_int] = ACTIONS(1289),
        [anon_sym_uint] = ACTIONS(1289),
        [anon_sym_long] = ACTIONS(1289),
        [anon_sym_ulong] = ACTIONS(1289),
        [anon_sym_char] = ACTIONS(1289),
        [anon_sym_unsafe] = ACTIONS(1289),
        [anon_sym_abstract] = ACTIONS(1289),
        [anon_sym_sealed] = ACTIONS(1289),
        [anon_sym_static] = ACTIONS(1289),
        [anon_sym_readonly] = ACTIONS(1289),
        [anon_sym_volatile] = ACTIONS(1289),
        [anon_sym_bool] = ACTIONS(1289),
        [anon_sym_decimal] = ACTIONS(1289),
        [anon_sym_double] = ACTIONS(1289),
        [anon_sym_float] = ACTIONS(1289),
        [anon_sym_object] = ACTIONS(1289),
        [anon_sym_string] = ACTIONS(1289),
        [sym_identifier_name] = ACTIONS(1294),
        [sym_comment] = ACTIONS(87),
    },
    [310] = {
        [ts_builtin_sym_end] = ACTIONS(1299),
        [anon_sym_SEMI] = ACTIONS(1303),
        [anon_sym_namespace] = ACTIONS(1305),
        [anon_sym_RBRACE] = ACTIONS(1299),
        [anon_sym_class] = ACTIONS(1305),
        [anon_sym_struct] = ACTIONS(1305),
        [anon_sym_LBRACK] = ACTIONS(1299),
        [anon_sym_enum] = ACTIONS(1305),
        [anon_sym_new] = ACTIONS(1305),
        [anon_sym_public] = ACTIONS(1305),
        [anon_sym_protected] = ACTIONS(1305),
        [anon_sym_internal] = ACTIONS(1305),
        [anon_sym_private] = ACTIONS(1305),
        [anon_sym_sbyte] = ACTIONS(1305),
        [anon_sym_byte] = ACTIONS(1305),
        [anon_sym_short] = ACTIONS(1305),
        [anon_sym_ushort] = ACTIONS(1305),
        [anon_sym_int] = ACTIONS(1305),
        [anon_sym_uint] = ACTIONS(1305),
        [anon_sym_long] = ACTIONS(1305),
        [anon_sym_ulong] = ACTIONS(1305),
        [anon_sym_char] = ACTIONS(1305),
        [anon_sym_unsafe] = ACTIONS(1305),
        [anon_sym_abstract] = ACTIONS(1305),
        [anon_sym_sealed] = ACTIONS(1305),
        [anon_sym_static] = ACTIONS(1305),
        [anon_sym_readonly] = ACTIONS(1305),
        [anon_sym_volatile] = ACTIONS(1305),
        [anon_sym_bool] = ACTIONS(1305),
        [anon_sym_decimal] = ACTIONS(1305),
        [anon_sym_double] = ACTIONS(1305),
        [anon_sym_float] = ACTIONS(1305),
        [anon_sym_object] = ACTIONS(1305),
        [anon_sym_string] = ACTIONS(1305),
        [sym_identifier_name] = ACTIONS(1309),
        [sym_comment] = ACTIONS(87),
    },
    [311] = {
        [ts_builtin_sym_end] = ACTIONS(1313),
        [anon_sym_namespace] = ACTIONS(1317),
        [anon_sym_RBRACE] = ACTIONS(1313),
        [anon_sym_class] = ACTIONS(1317),
        [anon_sym_struct] = ACTIONS(1317),
        [anon_sym_LBRACK] = ACTIONS(1313),
        [anon_sym_enum] = ACTIONS(1317),
        [anon_sym_new] = ACTIONS(1317),
        [anon_sym_public] = ACTIONS(1317),
        [anon_sym_protected] = ACTIONS(1317),
        [anon_sym_internal] = ACTIONS(1317),
        [anon_sym_private] = ACTIONS(1317),
        [anon_sym_sbyte] = ACTIONS(1317),
        [anon_sym_byte] = ACTIONS(1317),
        [anon_sym_short] = ACTIONS(1317),
        [anon_sym_ushort] = ACTIONS(1317),
        [anon_sym_int] = ACTIONS(1317),
        [anon_sym_uint] = ACTIONS(1317),
        [anon_sym_long] = ACTIONS(1317),
        [anon_sym_ulong] = ACTIONS(1317),
        [anon_sym_char] = ACTIONS(1317),
        [anon_sym_unsafe] = ACTIONS(1317),
        [anon_sym_abstract] = ACTIONS(1317),
        [anon_sym_sealed] = ACTIONS(1317),
        [anon_sym_static] = ACTIONS(1317),
        [anon_sym_readonly] = ACTIONS(1317),
        [anon_sym_volatile] = ACTIONS(1317),
        [anon_sym_bool] = ACTIONS(1317),
        [anon_sym_decimal] = ACTIONS(1317),
        [anon_sym_double] = ACTIONS(1317),
        [anon_sym_float] = ACTIONS(1317),
        [anon_sym_object] = ACTIONS(1317),
        [anon_sym_string] = ACTIONS(1317),
        [sym_identifier_name] = ACTIONS(1321),
        [sym_comment] = ACTIONS(87),
    },
    [312] = {
        [sym_equals_value_clause] = STATE(145),
        [sym_type_parameter_list] = STATE(170),
        [anon_sym_RBRACE] = ACTIONS(543),
        [anon_sym_COMMA] = ACTIONS(543),
        [anon_sym_EQ] = ACTIONS(343),
        [anon_sym_LT] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(261),
        [sym_comment] = ACTIONS(87),
    },
    [313] = {
        [sym_namespace_declaration] = STATE(209),
        [sym_class_declaration] = STATE(318),
        [sym_struct_declaration] = STATE(318),
        [sym__attributes] = STATE(248),
        [sym_enum_declaration] = STATE(318),
        [sym_enum_member_declaration] = STATE(136),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_namespace_declaration_repeat1] = STATE(210),
        [aux_sym_class_declaration_repeat1] = STATE(319),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_namespace] = ACTIONS(772),
        [anon_sym_RBRACE] = ACTIONS(1325),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(776),
        [sym_comment] = ACTIONS(87),
    },
    [314] = {
        [ts_builtin_sym_end] = ACTIONS(1327),
        [anon_sym_SEMI] = ACTIONS(1331),
        [anon_sym_namespace] = ACTIONS(1333),
        [anon_sym_RBRACE] = ACTIONS(1327),
        [anon_sym_class] = ACTIONS(1333),
        [anon_sym_struct] = ACTIONS(1333),
        [anon_sym_LBRACK] = ACTIONS(1327),
        [anon_sym_enum] = ACTIONS(1333),
        [anon_sym_new] = ACTIONS(1333),
        [anon_sym_public] = ACTIONS(1333),
        [anon_sym_protected] = ACTIONS(1333),
        [anon_sym_internal] = ACTIONS(1333),
        [anon_sym_private] = ACTIONS(1333),
        [anon_sym_sbyte] = ACTIONS(1333),
        [anon_sym_byte] = ACTIONS(1333),
        [anon_sym_short] = ACTIONS(1333),
        [anon_sym_ushort] = ACTIONS(1333),
        [anon_sym_int] = ACTIONS(1333),
        [anon_sym_uint] = ACTIONS(1333),
        [anon_sym_long] = ACTIONS(1333),
        [anon_sym_ulong] = ACTIONS(1333),
        [anon_sym_char] = ACTIONS(1333),
        [anon_sym_unsafe] = ACTIONS(1333),
        [anon_sym_abstract] = ACTIONS(1333),
        [anon_sym_sealed] = ACTIONS(1333),
        [anon_sym_static] = ACTIONS(1333),
        [anon_sym_readonly] = ACTIONS(1333),
        [anon_sym_volatile] = ACTIONS(1333),
        [anon_sym_bool] = ACTIONS(1333),
        [anon_sym_decimal] = ACTIONS(1333),
        [anon_sym_double] = ACTIONS(1333),
        [anon_sym_float] = ACTIONS(1333),
        [anon_sym_object] = ACTIONS(1333),
        [anon_sym_string] = ACTIONS(1333),
        [sym_identifier_name] = ACTIONS(1337),
        [sym_comment] = ACTIONS(87),
    },
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(1299),
        [anon_sym_namespace] = ACTIONS(1305),
        [anon_sym_RBRACE] = ACTIONS(1299),
        [anon_sym_class] = ACTIONS(1305),
        [anon_sym_struct] = ACTIONS(1305),
        [anon_sym_LBRACK] = ACTIONS(1299),
        [anon_sym_enum] = ACTIONS(1305),
        [anon_sym_new] = ACTIONS(1305),
        [anon_sym_public] = ACTIONS(1305),
        [anon_sym_protected] = ACTIONS(1305),
        [anon_sym_internal] = ACTIONS(1305),
        [anon_sym_private] = ACTIONS(1305),
        [anon_sym_sbyte] = ACTIONS(1305),
        [anon_sym_byte] = ACTIONS(1305),
        [anon_sym_short] = ACTIONS(1305),
        [anon_sym_ushort] = ACTIONS(1305),
        [anon_sym_int] = ACTIONS(1305),
        [anon_sym_uint] = ACTIONS(1305),
        [anon_sym_long] = ACTIONS(1305),
        [anon_sym_ulong] = ACTIONS(1305),
        [anon_sym_char] = ACTIONS(1305),
        [anon_sym_unsafe] = ACTIONS(1305),
        [anon_sym_abstract] = ACTIONS(1305),
        [anon_sym_sealed] = ACTIONS(1305),
        [anon_sym_static] = ACTIONS(1305),
        [anon_sym_readonly] = ACTIONS(1305),
        [anon_sym_volatile] = ACTIONS(1305),
        [anon_sym_bool] = ACTIONS(1305),
        [anon_sym_decimal] = ACTIONS(1305),
        [anon_sym_double] = ACTIONS(1305),
        [anon_sym_float] = ACTIONS(1305),
        [anon_sym_object] = ACTIONS(1305),
        [anon_sym_string] = ACTIONS(1305),
        [sym_identifier_name] = ACTIONS(1309),
        [sym_comment] = ACTIONS(87),
    },
    [316] = {
        [ts_builtin_sym_end] = ACTIONS(1341),
        [anon_sym_namespace] = ACTIONS(1349),
        [anon_sym_RBRACE] = ACTIONS(1341),
        [anon_sym_class] = ACTIONS(1349),
        [anon_sym_struct] = ACTIONS(1349),
        [anon_sym_LBRACK] = ACTIONS(1341),
        [anon_sym_enum] = ACTIONS(1349),
        [anon_sym_new] = ACTIONS(1349),
        [anon_sym_public] = ACTIONS(1349),
        [anon_sym_protected] = ACTIONS(1349),
        [anon_sym_internal] = ACTIONS(1349),
        [anon_sym_private] = ACTIONS(1349),
        [anon_sym_sbyte] = ACTIONS(1357),
        [anon_sym_byte] = ACTIONS(1357),
        [anon_sym_short] = ACTIONS(1357),
        [anon_sym_ushort] = ACTIONS(1357),
        [anon_sym_int] = ACTIONS(1357),
        [anon_sym_uint] = ACTIONS(1357),
        [anon_sym_long] = ACTIONS(1357),
        [anon_sym_ulong] = ACTIONS(1357),
        [anon_sym_char] = ACTIONS(1357),
        [anon_sym_unsafe] = ACTIONS(1349),
        [anon_sym_abstract] = ACTIONS(1349),
        [anon_sym_sealed] = ACTIONS(1349),
        [anon_sym_static] = ACTIONS(1349),
        [anon_sym_readonly] = ACTIONS(1357),
        [anon_sym_volatile] = ACTIONS(1357),
        [anon_sym_bool] = ACTIONS(1357),
        [anon_sym_decimal] = ACTIONS(1357),
        [anon_sym_double] = ACTIONS(1357),
        [anon_sym_float] = ACTIONS(1357),
        [anon_sym_object] = ACTIONS(1357),
        [anon_sym_string] = ACTIONS(1357),
        [sym_identifier_name] = ACTIONS(1364),
        [sym_comment] = ACTIONS(87),
    },
    [317] = {
        [sym_equals_value_clause] = STATE(146),
        [sym_type_parameter_list] = STATE(170),
        [anon_sym_RBRACE] = ACTIONS(515),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_EQ] = ACTIONS(343),
        [anon_sym_LT] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(261),
        [sym_comment] = ACTIONS(87),
    },
    [318] = {
        [anon_sym_namespace] = ACTIONS(1371),
        [anon_sym_RBRACE] = ACTIONS(1373),
        [anon_sym_class] = ACTIONS(1376),
        [anon_sym_struct] = ACTIONS(1376),
        [anon_sym_LBRACK] = ACTIONS(1373),
        [anon_sym_enum] = ACTIONS(1376),
        [anon_sym_new] = ACTIONS(1376),
        [anon_sym_public] = ACTIONS(1376),
        [anon_sym_protected] = ACTIONS(1376),
        [anon_sym_internal] = ACTIONS(1376),
        [anon_sym_private] = ACTIONS(1376),
        [anon_sym_sbyte] = ACTIONS(265),
        [anon_sym_byte] = ACTIONS(265),
        [anon_sym_short] = ACTIONS(265),
        [anon_sym_ushort] = ACTIONS(265),
        [anon_sym_int] = ACTIONS(265),
        [anon_sym_uint] = ACTIONS(265),
        [anon_sym_long] = ACTIONS(265),
        [anon_sym_ulong] = ACTIONS(265),
        [anon_sym_char] = ACTIONS(265),
        [anon_sym_unsafe] = ACTIONS(1376),
        [anon_sym_abstract] = ACTIONS(1376),
        [anon_sym_sealed] = ACTIONS(1376),
        [anon_sym_static] = ACTIONS(1376),
        [anon_sym_readonly] = ACTIONS(265),
        [anon_sym_volatile] = ACTIONS(265),
        [anon_sym_bool] = ACTIONS(265),
        [anon_sym_decimal] = ACTIONS(265),
        [anon_sym_double] = ACTIONS(265),
        [anon_sym_float] = ACTIONS(265),
        [anon_sym_object] = ACTIONS(265),
        [anon_sym_string] = ACTIONS(265),
        [sym_identifier_name] = ACTIONS(267),
        [sym_comment] = ACTIONS(87),
    },
    [319] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1104),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [320] = {
        [anon_sym_SEMI] = ACTIONS(1379),
        [anon_sym_RBRACE] = ACTIONS(1379),
        [anon_sym_COMMA] = ACTIONS(1379),
        [sym_comment] = ACTIONS(87),
    },
    [321] = {
        [anon_sym_SEMI] = ACTIONS(1383),
        [anon_sym_RBRACE] = ACTIONS(1383),
        [anon_sym_COMMA] = ACTIONS(1383),
        [sym__real_type_suffix] = ACTIONS(1386),
        [sym__exponent_part] = ACTIONS(1388),
        [sym_comment] = ACTIONS(87),
    },
    [322] = {
        [anon_sym_SEMI] = ACTIONS(1390),
        [anon_sym_RBRACE] = ACTIONS(1390),
        [anon_sym_COMMA] = ACTIONS(1390),
        [sym_comment] = ACTIONS(87),
    },
    [323] = {
        [anon_sym_SEMI] = ACTIONS(1390),
        [anon_sym_RBRACE] = ACTIONS(1390),
        [anon_sym_COMMA] = ACTIONS(1390),
        [sym__real_type_suffix] = ACTIONS(1393),
        [sym_comment] = ACTIONS(87),
    },
    [324] = {
        [anon_sym_SEMI] = ACTIONS(1395),
        [anon_sym_RBRACE] = ACTIONS(1395),
        [anon_sym_COMMA] = ACTIONS(1395),
        [sym_comment] = ACTIONS(87),
    },
    [325] = {
        [anon_sym_SEMI] = ACTIONS(880),
        [anon_sym_RBRACE] = ACTIONS(880),
        [anon_sym_COMMA] = ACTIONS(880),
        [sym_comment] = ACTIONS(87),
    },
    [326] = {
        [sym_attribute_argument_list] = STATE(36),
        [sym_equals_value_clause] = STATE(331),
        [sym_type_parameter_list] = STATE(170),
        [anon_sym_SEMI] = ACTIONS(341),
        [anon_sym_RBRACE] = ACTIONS(515),
        [anon_sym_RBRACK] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(1398),
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_EQ] = ACTIONS(343),
        [anon_sym_LT] = ACTIONS(211),
        [anon_sym_GT] = ACTIONS(259),
        [sym_comment] = ACTIONS(87),
    },
    [327] = {
        [anon_sym_RBRACE] = ACTIONS(1403),
        [anon_sym_COMMA] = ACTIONS(1403),
        [sym_comment] = ACTIONS(87),
    },
    [328] = {
        [anon_sym_RBRACK] = ACTIONS(1406),
        [anon_sym_COMMA] = ACTIONS(1406),
        [sym_comment] = ACTIONS(87),
    },
    [329] = {
        [anon_sym_SEMI] = ACTIONS(1409),
        [anon_sym_COMMA] = ACTIONS(1409),
        [sym_comment] = ACTIONS(87),
    },
    [330] = {
        [anon_sym_COMMA] = ACTIONS(1412),
        [anon_sym_GT] = ACTIONS(1412),
        [sym_comment] = ACTIONS(87),
    },
    [331] = {
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_RBRACE] = ACTIONS(543),
        [anon_sym_COMMA] = ACTIONS(1415),
        [sym_comment] = ACTIONS(87),
    },
    [332] = {
        [sym__enum_base] = STATE(249),
        [sym__enum_body] = STATE(314),
        [anon_sym_LBRACE] = ACTIONS(481),
        [anon_sym_COLON] = ACTIONS(483),
        [sym_comment] = ACTIONS(87),
    },
    [333] = {
        [sym_type_parameter_list] = STATE(335),
        [anon_sym_LBRACE] = ACTIONS(1418),
        [anon_sym_LT] = ACTIONS(211),
        [sym_comment] = ACTIONS(87),
    },
    [334] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(341),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1420),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [335] = {
        [anon_sym_LBRACE] = ACTIONS(1422),
        [sym_comment] = ACTIONS(87),
    },
    [336] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(338),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1424),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [337] = {
        [ts_builtin_sym_end] = ACTIONS(1426),
        [anon_sym_namespace] = ACTIONS(1430),
        [anon_sym_RBRACE] = ACTIONS(1426),
        [anon_sym_class] = ACTIONS(1430),
        [anon_sym_struct] = ACTIONS(1430),
        [anon_sym_LBRACK] = ACTIONS(1426),
        [anon_sym_enum] = ACTIONS(1430),
        [anon_sym_new] = ACTIONS(1430),
        [anon_sym_public] = ACTIONS(1430),
        [anon_sym_protected] = ACTIONS(1430),
        [anon_sym_internal] = ACTIONS(1430),
        [anon_sym_private] = ACTIONS(1430),
        [anon_sym_sbyte] = ACTIONS(1430),
        [anon_sym_byte] = ACTIONS(1430),
        [anon_sym_short] = ACTIONS(1430),
        [anon_sym_ushort] = ACTIONS(1430),
        [anon_sym_int] = ACTIONS(1430),
        [anon_sym_uint] = ACTIONS(1430),
        [anon_sym_long] = ACTIONS(1430),
        [anon_sym_ulong] = ACTIONS(1430),
        [anon_sym_char] = ACTIONS(1430),
        [anon_sym_unsafe] = ACTIONS(1430),
        [anon_sym_abstract] = ACTIONS(1430),
        [anon_sym_sealed] = ACTIONS(1430),
        [anon_sym_static] = ACTIONS(1430),
        [anon_sym_readonly] = ACTIONS(1430),
        [anon_sym_volatile] = ACTIONS(1430),
        [anon_sym_bool] = ACTIONS(1430),
        [anon_sym_decimal] = ACTIONS(1430),
        [anon_sym_double] = ACTIONS(1430),
        [anon_sym_float] = ACTIONS(1430),
        [anon_sym_object] = ACTIONS(1430),
        [anon_sym_string] = ACTIONS(1430),
        [sym_identifier_name] = ACTIONS(1434),
        [sym_comment] = ACTIONS(87),
    },
    [338] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1438),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [339] = {
        [ts_builtin_sym_end] = ACTIONS(1440),
        [anon_sym_namespace] = ACTIONS(1444),
        [anon_sym_RBRACE] = ACTIONS(1440),
        [anon_sym_class] = ACTIONS(1444),
        [anon_sym_struct] = ACTIONS(1444),
        [anon_sym_LBRACK] = ACTIONS(1440),
        [anon_sym_enum] = ACTIONS(1444),
        [anon_sym_new] = ACTIONS(1444),
        [anon_sym_public] = ACTIONS(1444),
        [anon_sym_protected] = ACTIONS(1444),
        [anon_sym_internal] = ACTIONS(1444),
        [anon_sym_private] = ACTIONS(1444),
        [anon_sym_sbyte] = ACTIONS(1444),
        [anon_sym_byte] = ACTIONS(1444),
        [anon_sym_short] = ACTIONS(1444),
        [anon_sym_ushort] = ACTIONS(1444),
        [anon_sym_int] = ACTIONS(1444),
        [anon_sym_uint] = ACTIONS(1444),
        [anon_sym_long] = ACTIONS(1444),
        [anon_sym_ulong] = ACTIONS(1444),
        [anon_sym_char] = ACTIONS(1444),
        [anon_sym_unsafe] = ACTIONS(1444),
        [anon_sym_abstract] = ACTIONS(1444),
        [anon_sym_sealed] = ACTIONS(1444),
        [anon_sym_static] = ACTIONS(1444),
        [anon_sym_readonly] = ACTIONS(1444),
        [anon_sym_volatile] = ACTIONS(1444),
        [anon_sym_bool] = ACTIONS(1444),
        [anon_sym_decimal] = ACTIONS(1444),
        [anon_sym_double] = ACTIONS(1444),
        [anon_sym_float] = ACTIONS(1444),
        [anon_sym_object] = ACTIONS(1444),
        [anon_sym_string] = ACTIONS(1444),
        [sym_identifier_name] = ACTIONS(1448),
        [sym_comment] = ACTIONS(87),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(1452),
        [anon_sym_namespace] = ACTIONS(1456),
        [anon_sym_RBRACE] = ACTIONS(1452),
        [anon_sym_class] = ACTIONS(1456),
        [anon_sym_struct] = ACTIONS(1456),
        [anon_sym_LBRACK] = ACTIONS(1452),
        [anon_sym_enum] = ACTIONS(1456),
        [anon_sym_new] = ACTIONS(1456),
        [anon_sym_public] = ACTIONS(1456),
        [anon_sym_protected] = ACTIONS(1456),
        [anon_sym_internal] = ACTIONS(1456),
        [anon_sym_private] = ACTIONS(1456),
        [anon_sym_sbyte] = ACTIONS(1456),
        [anon_sym_byte] = ACTIONS(1456),
        [anon_sym_short] = ACTIONS(1456),
        [anon_sym_ushort] = ACTIONS(1456),
        [anon_sym_int] = ACTIONS(1456),
        [anon_sym_uint] = ACTIONS(1456),
        [anon_sym_long] = ACTIONS(1456),
        [anon_sym_ulong] = ACTIONS(1456),
        [anon_sym_char] = ACTIONS(1456),
        [anon_sym_unsafe] = ACTIONS(1456),
        [anon_sym_abstract] = ACTIONS(1456),
        [anon_sym_sealed] = ACTIONS(1456),
        [anon_sym_static] = ACTIONS(1456),
        [anon_sym_readonly] = ACTIONS(1456),
        [anon_sym_volatile] = ACTIONS(1456),
        [anon_sym_bool] = ACTIONS(1456),
        [anon_sym_decimal] = ACTIONS(1456),
        [anon_sym_double] = ACTIONS(1456),
        [anon_sym_float] = ACTIONS(1456),
        [anon_sym_object] = ACTIONS(1456),
        [anon_sym_string] = ACTIONS(1456),
        [sym_identifier_name] = ACTIONS(1460),
        [sym_comment] = ACTIONS(87),
    },
    [341] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1424),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [342] = {
        [sym_type_parameter_list] = STATE(344),
        [anon_sym_LBRACE] = ACTIONS(1464),
        [anon_sym_LT] = ACTIONS(211),
        [sym_comment] = ACTIONS(87),
    },
    [343] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(350),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1466),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [344] = {
        [anon_sym_LBRACE] = ACTIONS(1468),
        [sym_comment] = ACTIONS(87),
    },
    [345] = {
        [sym_class_declaration] = STATE(54),
        [sym_struct_declaration] = STATE(54),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(54),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(54),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym_class_declaration_repeat1] = STATE(347),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1470),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(1472),
        [anon_sym_namespace] = ACTIONS(1476),
        [anon_sym_RBRACE] = ACTIONS(1472),
        [anon_sym_class] = ACTIONS(1476),
        [anon_sym_struct] = ACTIONS(1476),
        [anon_sym_LBRACK] = ACTIONS(1472),
        [anon_sym_enum] = ACTIONS(1476),
        [anon_sym_new] = ACTIONS(1476),
        [anon_sym_public] = ACTIONS(1476),
        [anon_sym_protected] = ACTIONS(1476),
        [anon_sym_internal] = ACTIONS(1476),
        [anon_sym_private] = ACTIONS(1476),
        [anon_sym_sbyte] = ACTIONS(1476),
        [anon_sym_byte] = ACTIONS(1476),
        [anon_sym_short] = ACTIONS(1476),
        [anon_sym_ushort] = ACTIONS(1476),
        [anon_sym_int] = ACTIONS(1476),
        [anon_sym_uint] = ACTIONS(1476),
        [anon_sym_long] = ACTIONS(1476),
        [anon_sym_ulong] = ACTIONS(1476),
        [anon_sym_char] = ACTIONS(1476),
        [anon_sym_unsafe] = ACTIONS(1476),
        [anon_sym_abstract] = ACTIONS(1476),
        [anon_sym_sealed] = ACTIONS(1476),
        [anon_sym_static] = ACTIONS(1476),
        [anon_sym_readonly] = ACTIONS(1476),
        [anon_sym_volatile] = ACTIONS(1476),
        [anon_sym_bool] = ACTIONS(1476),
        [anon_sym_decimal] = ACTIONS(1476),
        [anon_sym_double] = ACTIONS(1476),
        [anon_sym_float] = ACTIONS(1476),
        [anon_sym_object] = ACTIONS(1476),
        [anon_sym_string] = ACTIONS(1476),
        [sym_identifier_name] = ACTIONS(1480),
        [sym_comment] = ACTIONS(87),
    },
    [347] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1484),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [348] = {
        [ts_builtin_sym_end] = ACTIONS(1486),
        [anon_sym_namespace] = ACTIONS(1490),
        [anon_sym_RBRACE] = ACTIONS(1486),
        [anon_sym_class] = ACTIONS(1490),
        [anon_sym_struct] = ACTIONS(1490),
        [anon_sym_LBRACK] = ACTIONS(1486),
        [anon_sym_enum] = ACTIONS(1490),
        [anon_sym_new] = ACTIONS(1490),
        [anon_sym_public] = ACTIONS(1490),
        [anon_sym_protected] = ACTIONS(1490),
        [anon_sym_internal] = ACTIONS(1490),
        [anon_sym_private] = ACTIONS(1490),
        [anon_sym_sbyte] = ACTIONS(1490),
        [anon_sym_byte] = ACTIONS(1490),
        [anon_sym_short] = ACTIONS(1490),
        [anon_sym_ushort] = ACTIONS(1490),
        [anon_sym_int] = ACTIONS(1490),
        [anon_sym_uint] = ACTIONS(1490),
        [anon_sym_long] = ACTIONS(1490),
        [anon_sym_ulong] = ACTIONS(1490),
        [anon_sym_char] = ACTIONS(1490),
        [anon_sym_unsafe] = ACTIONS(1490),
        [anon_sym_abstract] = ACTIONS(1490),
        [anon_sym_sealed] = ACTIONS(1490),
        [anon_sym_static] = ACTIONS(1490),
        [anon_sym_readonly] = ACTIONS(1490),
        [anon_sym_volatile] = ACTIONS(1490),
        [anon_sym_bool] = ACTIONS(1490),
        [anon_sym_decimal] = ACTIONS(1490),
        [anon_sym_double] = ACTIONS(1490),
        [anon_sym_float] = ACTIONS(1490),
        [anon_sym_object] = ACTIONS(1490),
        [anon_sym_string] = ACTIONS(1490),
        [sym_identifier_name] = ACTIONS(1494),
        [sym_comment] = ACTIONS(87),
    },
    [349] = {
        [ts_builtin_sym_end] = ACTIONS(1498),
        [anon_sym_namespace] = ACTIONS(1502),
        [anon_sym_RBRACE] = ACTIONS(1498),
        [anon_sym_class] = ACTIONS(1502),
        [anon_sym_struct] = ACTIONS(1502),
        [anon_sym_LBRACK] = ACTIONS(1498),
        [anon_sym_enum] = ACTIONS(1502),
        [anon_sym_new] = ACTIONS(1502),
        [anon_sym_public] = ACTIONS(1502),
        [anon_sym_protected] = ACTIONS(1502),
        [anon_sym_internal] = ACTIONS(1502),
        [anon_sym_private] = ACTIONS(1502),
        [anon_sym_sbyte] = ACTIONS(1502),
        [anon_sym_byte] = ACTIONS(1502),
        [anon_sym_short] = ACTIONS(1502),
        [anon_sym_ushort] = ACTIONS(1502),
        [anon_sym_int] = ACTIONS(1502),
        [anon_sym_uint] = ACTIONS(1502),
        [anon_sym_long] = ACTIONS(1502),
        [anon_sym_ulong] = ACTIONS(1502),
        [anon_sym_char] = ACTIONS(1502),
        [anon_sym_unsafe] = ACTIONS(1502),
        [anon_sym_abstract] = ACTIONS(1502),
        [anon_sym_sealed] = ACTIONS(1502),
        [anon_sym_static] = ACTIONS(1502),
        [anon_sym_readonly] = ACTIONS(1502),
        [anon_sym_volatile] = ACTIONS(1502),
        [anon_sym_bool] = ACTIONS(1502),
        [anon_sym_decimal] = ACTIONS(1502),
        [anon_sym_double] = ACTIONS(1502),
        [anon_sym_float] = ACTIONS(1502),
        [anon_sym_object] = ACTIONS(1502),
        [anon_sym_string] = ACTIONS(1502),
        [sym_identifier_name] = ACTIONS(1506),
        [sym_comment] = ACTIONS(87),
    },
    [350] = {
        [sym_class_declaration] = STATE(63),
        [sym_struct_declaration] = STATE(63),
        [sym__attributes] = STATE(55),
        [sym_enum_declaration] = STATE(63),
        [sym_enum_modifier] = STATE(15),
        [sym__attribute_section] = STATE(16),
        [sym_field_declaration] = STATE(63),
        [sym_variable_declaration] = STATE(56),
        [sym__type] = STATE(57),
        [sym_generic_name] = STATE(58),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_field_modifiers] = STATE(59),
        [sym__field_modifiers] = STATE(60),
        [sym_predefined_type] = STATE(58),
        [aux_sym__attributes_repeat1] = STATE(23),
        [anon_sym_RBRACE] = ACTIONS(1470),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(223),
        [anon_sym_byte] = ACTIONS(223),
        [anon_sym_short] = ACTIONS(223),
        [anon_sym_ushort] = ACTIONS(223),
        [anon_sym_int] = ACTIONS(223),
        [anon_sym_uint] = ACTIONS(223),
        [anon_sym_long] = ACTIONS(223),
        [anon_sym_ulong] = ACTIONS(223),
        [anon_sym_char] = ACTIONS(223),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(223),
        [anon_sym_decimal] = ACTIONS(223),
        [anon_sym_double] = ACTIONS(223),
        [anon_sym_float] = ACTIONS(223),
        [anon_sym_object] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(223),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(87),
    },
    [351] = {
        [ts_builtin_sym_end] = ACTIONS(1510),
        [anon_sym_namespace] = ACTIONS(1520),
        [anon_sym_RBRACE] = ACTIONS(1510),
        [anon_sym_class] = ACTIONS(1520),
        [anon_sym_struct] = ACTIONS(1520),
        [anon_sym_LBRACK] = ACTIONS(1510),
        [anon_sym_enum] = ACTIONS(1520),
        [anon_sym_new] = ACTIONS(1520),
        [anon_sym_public] = ACTIONS(1520),
        [anon_sym_protected] = ACTIONS(1520),
        [anon_sym_internal] = ACTIONS(1520),
        [anon_sym_private] = ACTIONS(1520),
        [anon_sym_sbyte] = ACTIONS(1530),
        [anon_sym_byte] = ACTIONS(1530),
        [anon_sym_short] = ACTIONS(1530),
        [anon_sym_ushort] = ACTIONS(1530),
        [anon_sym_int] = ACTIONS(1530),
        [anon_sym_uint] = ACTIONS(1530),
        [anon_sym_long] = ACTIONS(1530),
        [anon_sym_ulong] = ACTIONS(1530),
        [anon_sym_char] = ACTIONS(1530),
        [anon_sym_unsafe] = ACTIONS(1520),
        [anon_sym_abstract] = ACTIONS(1520),
        [anon_sym_sealed] = ACTIONS(1520),
        [anon_sym_static] = ACTIONS(1520),
        [anon_sym_readonly] = ACTIONS(1530),
        [anon_sym_volatile] = ACTIONS(1530),
        [anon_sym_bool] = ACTIONS(1530),
        [anon_sym_decimal] = ACTIONS(1530),
        [anon_sym_double] = ACTIONS(1530),
        [anon_sym_float] = ACTIONS(1530),
        [anon_sym_object] = ACTIONS(1530),
        [anon_sym_string] = ACTIONS(1530),
        [sym_identifier_name] = ACTIONS(1539),
        [sym_comment] = ACTIONS(87),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(223),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(224),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(225),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(226),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(227),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(6),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(228),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(197),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(229),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(230),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(231),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(48),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(232),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(35),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(37),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(233),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(87),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(234),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(235),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(100),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(101),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(236),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(90),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(111),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(91),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(237),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(238),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(239),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(240),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(94),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(50),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(10),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(241),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(52),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(49),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(44),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(242),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(213),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(202),
    [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(243),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
    [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(216),
    [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
    [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
    [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [405] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
    [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [425] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4),
    [495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
    [501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
    [509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_base, 2),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 3),
    [527] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 4),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 4),
    [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 4),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 3),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
    [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
    [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
    [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
    [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 3),
    [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [645] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 4),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attribute_target_specifier, 2),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [693] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(219),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [711] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [718] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [721] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [728] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [736] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [746] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [756] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [764] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [776] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(317),
    [778] = {.count = 14, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3), REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [793] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3), REDUCE(sym__enum_body, 4),
    [796] = {.count = 14, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 3), REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [811] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 3), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [824] = {.count = 12, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attributes, 4),
    [843] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 4),
    [846] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 4),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
    [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__global_attribute_target_specifier, 2),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
    [855] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(326),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
    [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
    [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [865] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
    [875] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [880] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
    [886] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [890] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
    [892] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [895] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [898] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [901] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(274),
    [905] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(313),
    [908] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_enum_member_declaration, 2),
    [911] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1), REDUCE(sym_enum_member_declaration, 2),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [919] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(205),
    [923] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [926] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [929] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [934] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [937] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [942] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [947] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [954] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [961] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [964] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [967] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(312),
    [969] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [976] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [981] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [986] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2), REDUCE(aux_sym__enum_body_repeat1, 3), SHIFT(137),
    [990] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2), REDUCE(aux_sym__enum_body_repeat1, 3), SHIFT(138),
    [994] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [996] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [999] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1002] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [1007] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1), REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1011] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3), SHIFT(29),
    [1015] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [1020] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1024] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(80),
    [1028] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_enum_member_declaration, 3),
    [1031] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2), REDUCE(sym_enum_member_declaration, 3),
    [1035] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1038] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [1043] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [1048] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [1051] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1054] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
    [1059] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(173),
    [1063] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(174),
    [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
    [1069] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [1074] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1083] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1092] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1101] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [1106] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1113] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1120] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [1129] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1136] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1143] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [1152] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1155] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1158] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
    [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
    [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [1171] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1174] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1177] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [1182] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1185] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1188] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1191] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1194] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1197] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
    [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
    [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [1210] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1213] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1216] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [1221] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1224] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1227] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1230] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1233] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1236] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1239] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1243] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1247] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
    [1253] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [1258] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1261] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1264] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1267] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1270] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [1275] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1278] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1281] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1284] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1289] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1294] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1299] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [1305] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1309] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1313] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1317] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1321] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [1327] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [1333] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1337] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1341] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1349] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1357] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1364] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
    [1373] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1376] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1379] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1383] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
    [1390] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [1395] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1398] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [1403] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2), REDUCE(aux_sym__enum_body_repeat1, 3),
    [1406] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1409] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1412] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [1415] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2),
    [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [1420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [1422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [1426] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1430] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1434] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [1440] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1444] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1448] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1452] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1456] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1460] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
    [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [1470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
    [1472] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1476] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1480] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
    [1486] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1490] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1494] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1498] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1502] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1506] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1510] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1520] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1530] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1539] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
