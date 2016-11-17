#include "tree_sitter/parser.h"

#define STATE_COUNT 353
#define SYMBOL_COUNT 138
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
    sym__type_declaration = 81,
    sym_namespace_declaration = 82,
    sym_class_declaration = 83,
    sym_struct_declaration = 84,
    sym__global_attributes = 85,
    sym__global_attribute_target_specifier = 86,
    sym__attributes = 87,
    sym_enum_declaration = 88,
    sym__enum_base = 89,
    sym__enum_body = 90,
    sym_enum_member_declaration = 91,
    sym_enum_modifier = 92,
    sym__integral_type = 93,
    sym__attribute_section = 94,
    sym_attribute_list = 95,
    sym_attribute = 96,
    sym_attribute_argument_list = 97,
    sym_field_declaration = 98,
    sym_variable_declaration = 99,
    sym__type = 100,
    sym_generic_name = 101,
    sym_variable_declarator = 102,
    sym_equals_value_clause = 103,
    sym__literal = 104,
    sym_boolean_literal = 105,
    sym_character_literal = 106,
    sym__unicode_escape_sequence = 107,
    sym__simple_escape_sequence = 108,
    sym_integer_literal = 109,
    sym_real_literal = 110,
    sym_string_literal = 111,
    sym__regular_string_literal = 112,
    sym__regular_string_literal_character = 113,
    sym__verbatim_string_literal = 114,
    sym_class_modifiers = 115,
    sym__class_modifiers = 116,
    sym_struct_modifiers = 117,
    sym__struct_modifiers = 118,
    sym_field_modifiers = 119,
    sym__field_modifiers = 120,
    sym_predefined_type = 121,
    sym_type_parameter_list = 122,
    sym_type_parameter = 123,
    sym_qualified_name = 124,
    sym_alias_qualified_name = 125,
    sym_name_equals = 126,
    sym_static = 127,
    aux_sym_compilation_unit_repeat1 = 128,
    aux_sym_compilation_unit_repeat2 = 129,
    aux_sym_namespace_declaration_repeat1 = 130,
    aux_sym_class_declaration_repeat1 = 131,
    aux_sym__attributes_repeat1 = 132,
    aux_sym__enum_body_repeat1 = 133,
    aux_sym_attribute_list_repeat1 = 134,
    aux_sym_variable_declaration_repeat1 = 135,
    aux_sym__regular_string_literal_repeat1 = 136,
    aux_sym_type_parameter_list_repeat1 = 137,
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
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(351);
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
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'e')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(357);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(358);
            if (lookahead == 'v')
                ADVANCE(243);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 352:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 353:
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
        case 354:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 355:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 356:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 357:
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
        case 358:
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
                ADVANCE(359);
            if (lookahead == 'n')
                ADVANCE(230);
            if (lookahead == 's')
                ADVANCE(360);
            ACCEPT_TOKEN(sym_identifier_name);
        case 359:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(227);
            ACCEPT_TOKEN(sym_identifier_name);
        case 360:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier_name);
        case 361:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(361);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(267);
            LEX_ERROR();
        case 362:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(362);
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
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'e')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(363);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(358);
            if (lookahead == 'v')
                ADVANCE(243);
            LEX_ERROR();
        case 363:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier_name);
        case 364:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(364);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'c')
                ADVANCE(262);
            LEX_ERROR();
        case 365:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(365);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(366);
            LEX_ERROR();
        case 366:
            if (lookahead == 't')
                ADVANCE(367);
            LEX_ERROR();
        case 367:
            if (lookahead == 'r')
                ADVANCE(320);
            LEX_ERROR();
        case 368:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(368);
            if (lookahead == '(')
                ADVANCE(4);
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
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 370:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(370);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 371:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(371);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 372:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(372);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(251);
            LEX_ERROR();
        case 373:
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
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'e')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(363);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(358);
            if (lookahead == 'v')
                ADVANCE(243);
            if (lookahead == '}')
                ADVANCE(252);
            LEX_ERROR();
        case 374:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(374);
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
                ADVANCE(375);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(376);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 's')
                ADVANCE(379);
            if (lookahead == 'u')
                ADVANCE(382);
            LEX_ERROR();
        case 375:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 376:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(377);
            ACCEPT_TOKEN(sym_identifier_name);
        case 377:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(378);
            ACCEPT_TOKEN(sym_identifier_name);
        case 378:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_int);
        case 379:
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
                ADVANCE(380);
            ACCEPT_TOKEN(sym_identifier_name);
        case 380:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(381);
            ACCEPT_TOKEN(sym_identifier_name);
        case 381:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier_name);
        case 382:
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
                ADVANCE(359);
            if (lookahead == 's')
                ADVANCE(360);
            ACCEPT_TOKEN(sym_identifier_name);
        case 383:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(383);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(251);
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
            if (lookahead == 'a')
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'e')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(363);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(358);
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
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(363);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(358);
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
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(363);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(388);
            if (lookahead == 'u')
                ADVANCE(358);
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
                ADVANCE(381);
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
                ADVANCE(375);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(363);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(391);
            if (lookahead == 'u')
                ADVANCE(358);
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
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'e')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(357);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(358);
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
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'e')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(357);
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
                ADVANCE(359);
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
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'e')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(357);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(358);
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
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'e')
                ADVANCE(354);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(357);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(192);
            if (lookahead == 'u')
                ADVANCE(358);
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
                ADVANCE(375);
            if (lookahead == 'i')
                ADVANCE(376);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 's')
                ADVANCE(502);
            if (lookahead == 'u')
                ADVANCE(382);
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
                ADVANCE(375);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'i')
                ADVANCE(376);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 's')
                ADVANCE(379);
            if (lookahead == 'u')
                ADVANCE(382);
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
                ADVANCE(352);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(353);
            if (lookahead == 'f')
                ADVANCE(355);
            if (lookahead == 'g')
                ADVANCE(121);
            if (lookahead == 'i')
                ADVANCE(127);
            if (lookahead == 'l')
                ADVANCE(356);
            if (lookahead == 'n')
                ADVANCE(363);
            if (lookahead == 'o')
                ADVANCE(159);
            if (lookahead == 'p')
                ADVANCE(165);
            if (lookahead == 'r')
                ADVANCE(184);
            if (lookahead == 's')
                ADVANCE(388);
            if (lookahead == 'u')
                ADVANCE(358);
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
    [14] = 351,
    [15] = 342,
    [16] = 361,
    [17] = 362,
    [18] = 364,
    [19] = 364,
    [20] = 365,
    [21] = 365,
    [22] = 253,
    [23] = 350,
    [24] = 362,
    [25] = 338,
    [26] = 362,
    [27] = 368,
    [28] = 369,
    [29] = 370,
    [30] = 338,
    [31] = 370,
    [32] = 338,
    [33] = 370,
    [34] = 370,
    [35] = 362,
    [36] = 371,
    [37] = 370,
    [38] = 370,
    [39] = 350,
    [40] = 253,
    [41] = 350,
    [42] = 338,
    [43] = 372,
    [44] = 373,
    [45] = 374,
    [46] = 383,
    [47] = 373,
    [48] = 351,
    [49] = 384,
    [50] = 385,
    [51] = 386,
    [52] = 387,
    [53] = 390,
    [54] = 392,
    [55] = 373,
    [56] = 384,
    [57] = 393,
    [58] = 338,
    [59] = 385,
    [60] = 374,
    [61] = 374,
    [62] = 373,
    [63] = 351,
    [64] = 373,
    [65] = 393,
    [66] = 373,
    [67] = 351,
    [68] = 373,
    [69] = 338,
    [70] = 372,
    [71] = 373,
    [72] = 383,
    [73] = 373,
    [74] = 351,
    [75] = 373,
    [76] = 351,
    [77] = 351,
    [78] = 373,
    [79] = 394,
    [80] = 395,
    [81] = 338,
    [82] = 395,
    [83] = 338,
    [84] = 395,
    [85] = 395,
    [86] = 396,
    [87] = 395,
    [88] = 410,
    [89] = 411,
    [90] = 415,
    [91] = 421,
    [92] = 410,
    [93] = 422,
    [94] = 423,
    [95] = 426,
    [96] = 410,
    [97] = 410,
    [98] = 435,
    [99] = 410,
    [100] = 423,
    [101] = 436,
    [102] = 436,
    [103] = 410,
    [104] = 423,
    [105] = 423,
    [106] = 410,
    [107] = 423,
    [108] = 437,
    [109] = 410,
    [110] = 438,
    [111] = 410,
    [112] = 410,
    [113] = 422,
    [114] = 410,
    [115] = 438,
    [116] = 437,
    [117] = 438,
    [118] = 410,
    [119] = 439,
    [120] = 439,
    [121] = 439,
    [122] = 410,
    [123] = 373,
    [124] = 338,
    [125] = 440,
    [126] = 442,
    [127] = 443,
    [128] = 383,
    [129] = 481,
    [130] = 351,
    [131] = 481,
    [132] = 351,
    [133] = 383,
    [134] = 383,
    [135] = 482,
    [136] = 338,
    [137] = 483,
    [138] = 481,
    [139] = 442,
    [140] = 483,
    [141] = 481,
    [142] = 442,
    [143] = 483,
    [144] = 483,
    [145] = 482,
    [146] = 483,
    [147] = 483,
    [148] = 361,
    [149] = 364,
    [150] = 365,
    [151] = 374,
    [152] = 393,
    [153] = 373,
    [154] = 338,
    [155] = 372,
    [156] = 383,
    [157] = 373,
    [158] = 373,
    [159] = 351,
    [160] = 338,
    [161] = 372,
    [162] = 383,
    [163] = 373,
    [164] = 373,
    [165] = 351,
    [166] = 338,
    [167] = 440,
    [168] = 383,
    [169] = 481,
    [170] = 351,
    [171] = 385,
    [172] = 484,
    [173] = 484,
    [174] = 374,
    [175] = 485,
    [176] = 484,
    [177] = 374,
    [178] = 485,
    [179] = 484,
    [180] = 484,
    [181] = 374,
    [182] = 364,
    [183] = 365,
    [184] = 440,
    [185] = 383,
    [186] = 481,
    [187] = 351,
    [188] = 372,
    [189] = 373,
    [190] = 383,
    [191] = 351,
    [192] = 373,
    [193] = 372,
    [194] = 373,
    [195] = 383,
    [196] = 351,
    [197] = 373,
    [198] = 486,
    [199] = 338,
    [200] = 369,
    [201] = 350,
    [202] = 338,
    [203] = 487,
    [204] = 489,
    [205] = 490,
    [206] = 338,
    [207] = 491,
    [208] = 492,
    [209] = 493,
    [210] = 492,
    [211] = 492,
    [212] = 493,
    [213] = 492,
    [214] = 338,
    [215] = 490,
    [216] = 337,
    [217] = 494,
    [218] = 495,
    [219] = 337,
    [220] = 495,
    [221] = 253,
    [222] = 253,
    [223] = 337,
    [224] = 496,
    [225] = 498,
    [226] = 481,
    [227] = 338,
    [228] = 338,
    [229] = 499,
    [230] = 500,
    [231] = 338,
    [232] = 503,
    [233] = 485,
    [234] = 504,
    [235] = 507,
    [236] = 436,
    [237] = 415,
    [238] = 508,
    [239] = 410,
    [240] = 438,
    [241] = 509,
    [242] = 510,
    [243] = 485,
    [244] = 511,
    [245] = 253,
    [246] = 351,
    [247] = 493,
    [248] = 350,
    [249] = 384,
    [250] = 383,
    [251] = 481,
    [252] = 483,
    [253] = 361,
    [254] = 362,
    [255] = 369,
    [256] = 370,
    [257] = 373,
    [258] = 393,
    [259] = 385,
    [260] = 395,
    [261] = 410,
    [262] = 423,
    [263] = 364,
    [264] = 364,
    [265] = 365,
    [266] = 365,
    [267] = 374,
    [268] = 374,
    [269] = 485,
    [270] = 484,
    [271] = 491,
    [272] = 350,
    [273] = 373,
    [274] = 351,
    [275] = 253,
    [276] = 373,
    [277] = 351,
    [278] = 373,
    [279] = 351,
    [280] = 393,
    [281] = 373,
    [282] = 338,
    [283] = 372,
    [284] = 373,
    [285] = 383,
    [286] = 373,
    [287] = 351,
    [288] = 373,
    [289] = 351,
    [290] = 351,
    [291] = 373,
    [292] = 338,
    [293] = 372,
    [294] = 373,
    [295] = 383,
    [296] = 373,
    [297] = 351,
    [298] = 373,
    [299] = 351,
    [300] = 351,
    [301] = 373,
    [302] = 373,
    [303] = 338,
    [304] = 440,
    [305] = 383,
    [306] = 481,
    [307] = 351,
    [308] = 481,
    [309] = 351,
    [310] = 351,
    [311] = 481,
    [312] = 351,
    [313] = 512,
    [314] = 498,
    [315] = 481,
    [316] = 351,
    [317] = 351,
    [318] = 512,
    [319] = 498,
    [320] = 373,
    [321] = 410,
    [322] = 437,
    [323] = 410,
    [324] = 438,
    [325] = 410,
    [326] = 410,
    [327] = 513,
    [328] = 483,
    [329] = 370,
    [330] = 395,
    [331] = 484,
    [332] = 410,
    [333] = 440,
    [334] = 372,
    [335] = 373,
    [336] = 383,
    [337] = 373,
    [338] = 351,
    [339] = 373,
    [340] = 351,
    [341] = 351,
    [342] = 373,
    [343] = 372,
    [344] = 373,
    [345] = 383,
    [346] = 373,
    [347] = 351,
    [348] = 373,
    [349] = 351,
    [350] = 351,
    [351] = 373,
    [352] = 351,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(11),
        [sym_using_directive] = STATE(245),
        [sym__type_declaration] = STATE(246),
        [sym_namespace_declaration] = STATE(247),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__global_attributes] = STATE(248),
        [sym__global_attribute_target_specifier] = STATE(199),
        [sym__attributes] = STATE(249),
        [sym_enum_declaration] = STATE(14),
        [sym__enum_base] = STATE(250),
        [sym__enum_body] = STATE(251),
        [sym_enum_member_declaration] = STATE(252),
        [sym_enum_modifier] = STATE(253),
        [sym__integral_type] = STATE(134),
        [sym__attribute_section] = STATE(254),
        [sym_attribute_list] = STATE(255),
        [sym_attribute] = STATE(256),
        [sym_attribute_argument_list] = STATE(37),
        [sym_field_declaration] = STATE(257),
        [sym_variable_declaration] = STATE(258),
        [sym__type] = STATE(259),
        [sym_generic_name] = STATE(59),
        [sym_variable_declarator] = STATE(260),
        [sym_equals_value_clause] = STATE(261),
        [sym__literal] = STATE(96),
        [sym_boolean_literal] = STATE(92),
        [sym_character_literal] = STATE(92),
        [sym__unicode_escape_sequence] = STATE(236),
        [sym__simple_escape_sequence] = STATE(236),
        [sym_integer_literal] = STATE(92),
        [sym_real_literal] = STATE(92),
        [sym_string_literal] = STATE(92),
        [sym__regular_string_literal] = STATE(97),
        [sym__regular_string_literal_character] = STATE(262),
        [sym__verbatim_string_literal] = STATE(97),
        [sym_class_modifiers] = STATE(263),
        [sym__class_modifiers] = STATE(264),
        [sym_struct_modifiers] = STATE(265),
        [sym__struct_modifiers] = STATE(266),
        [sym_field_modifiers] = STATE(267),
        [sym__field_modifiers] = STATE(268),
        [sym_predefined_type] = STATE(59),
        [sym_type_parameter_list] = STATE(269),
        [sym_type_parameter] = STATE(270),
        [sym_qualified_name] = STATE(271),
        [sym_alias_qualified_name] = STATE(205),
        [sym_name_equals] = STATE(219),
        [sym_static] = STATE(219),
        [aux_sym_compilation_unit_repeat1] = STATE(22),
        [aux_sym_compilation_unit_repeat2] = STATE(272),
        [aux_sym_namespace_declaration_repeat1] = STATE(211),
        [aux_sym_class_declaration_repeat1] = STATE(273),
        [aux_sym__attributes_repeat1] = STATE(24),
        [aux_sym__enum_body_repeat1] = STATE(140),
        [aux_sym_attribute_list_repeat1] = STATE(31),
        [aux_sym_variable_declaration_repeat1] = STATE(82),
        [aux_sym__regular_string_literal_repeat1] = STATE(105),
        [aux_sym_type_parameter_list_repeat1] = STATE(176),
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
        [sym__type_declaration] = STATE(13),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__global_attributes] = STATE(13),
        [sym__attributes] = STATE(15),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [aux_sym_compilation_unit_repeat1] = STATE(22),
        [aux_sym_compilation_unit_repeat2] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(24),
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
        [sym_qualified_name] = STATE(218),
        [sym_alias_qualified_name] = STATE(205),
        [sym_name_equals] = STATE(219),
        [sym_static] = STATE(219),
        [anon_sym_static] = ACTIONS(109),
        [sym_global] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(87),
    },
    [3] = {
        [sym_qualified_name] = STATE(204),
        [sym_alias_qualified_name] = STATE(205),
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
        [sym__global_attribute_target_specifier] = STATE(199),
        [sym_attribute_list] = STATE(28),
        [sym_attribute] = STATE(29),
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
        [sym__class_modifiers] = STATE(182),
        [sym__struct_modifiers] = STATE(183),
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
        [sym__class_modifiers] = STATE(182),
        [sym__struct_modifiers] = STATE(183),
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
        [sym__class_modifiers] = STATE(182),
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
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_namespace] = ACTIONS(141),
        [anon_sym_RBRACE] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(139),
        [anon_sym_enum] = ACTIONS(141),
        [anon_sym_new] = ACTIONS(141),
        [anon_sym_public] = ACTIONS(141),
        [anon_sym_protected] = ACTIONS(141),
        [anon_sym_internal] = ACTIONS(141),
        [anon_sym_private] = ACTIONS(141),
        [anon_sym_sbyte] = ACTIONS(141),
        [anon_sym_byte] = ACTIONS(141),
        [anon_sym_short] = ACTIONS(141),
        [anon_sym_ushort] = ACTIONS(141),
        [anon_sym_int] = ACTIONS(141),
        [anon_sym_uint] = ACTIONS(141),
        [anon_sym_long] = ACTIONS(141),
        [anon_sym_ulong] = ACTIONS(141),
        [anon_sym_char] = ACTIONS(141),
        [anon_sym_unsafe] = ACTIONS(141),
        [anon_sym_abstract] = ACTIONS(141),
        [anon_sym_sealed] = ACTIONS(141),
        [anon_sym_static] = ACTIONS(141),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(141),
        [anon_sym_decimal] = ACTIONS(141),
        [anon_sym_double] = ACTIONS(141),
        [anon_sym_float] = ACTIONS(141),
        [anon_sym_object] = ACTIONS(141),
        [anon_sym_string] = ACTIONS(141),
        [sym_identifier_name] = ACTIONS(143),
        [sym_comment] = ACTIONS(87),
    },
    [15] = {
        [sym_enum_modifier] = STATE(148),
        [sym_class_modifiers] = STATE(149),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(150),
        [sym__struct_modifiers] = STATE(21),
        [anon_sym_class] = ACTIONS(145),
        [anon_sym_struct] = ACTIONS(147),
        [anon_sym_enum] = ACTIONS(149),
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
    [16] = {
        [anon_sym_enum] = ACTIONS(149),
        [sym_comment] = ACTIONS(87),
    },
    [17] = {
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(153),
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
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(87),
    },
    [18] = {
        [anon_sym_class] = ACTIONS(145),
        [sym_comment] = ACTIONS(87),
    },
    [19] = {
        [anon_sym_class] = ACTIONS(157),
        [sym_comment] = ACTIONS(87),
    },
    [20] = {
        [anon_sym_struct] = ACTIONS(147),
        [sym_comment] = ACTIONS(87),
    },
    [21] = {
        [anon_sym_struct] = ACTIONS(159),
        [sym_comment] = ACTIONS(87),
    },
    [22] = {
        [sym_using_directive] = STATE(40),
        [sym__type_declaration] = STATE(13),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__global_attributes] = STATE(13),
        [sym__attributes] = STATE(15),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [aux_sym_compilation_unit_repeat2] = STATE(41),
        [aux_sym__attributes_repeat1] = STATE(24),
        [ts_builtin_sym_end] = ACTIONS(161),
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
    [23] = {
        [sym__type_declaration] = STATE(39),
        [sym_namespace_declaration] = STATE(39),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__global_attributes] = STATE(39),
        [sym__attributes] = STATE(15),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [aux_sym__attributes_repeat1] = STATE(24),
        [ts_builtin_sym_end] = ACTIONS(161),
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
    [24] = {
        [sym__attribute_section] = STATE(26),
        [anon_sym_class] = ACTIONS(163),
        [anon_sym_struct] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(163),
        [anon_sym_public] = ACTIONS(163),
        [anon_sym_protected] = ACTIONS(163),
        [anon_sym_internal] = ACTIONS(163),
        [anon_sym_private] = ACTIONS(163),
        [anon_sym_sbyte] = ACTIONS(163),
        [anon_sym_byte] = ACTIONS(163),
        [anon_sym_short] = ACTIONS(163),
        [anon_sym_ushort] = ACTIONS(163),
        [anon_sym_int] = ACTIONS(163),
        [anon_sym_uint] = ACTIONS(163),
        [anon_sym_long] = ACTIONS(163),
        [anon_sym_ulong] = ACTIONS(163),
        [anon_sym_char] = ACTIONS(163),
        [anon_sym_unsafe] = ACTIONS(163),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_readonly] = ACTIONS(163),
        [anon_sym_volatile] = ACTIONS(163),
        [anon_sym_bool] = ACTIONS(163),
        [anon_sym_decimal] = ACTIONS(163),
        [anon_sym_double] = ACTIONS(163),
        [anon_sym_float] = ACTIONS(163),
        [anon_sym_object] = ACTIONS(163),
        [anon_sym_string] = ACTIONS(163),
        [sym_identifier_name] = ACTIONS(167),
        [sym_comment] = ACTIONS(87),
    },
    [25] = {
        [sym_attribute_list] = STATE(28),
        [sym_attribute] = STATE(29),
        [sym_identifier_name] = ACTIONS(169),
        [sym_comment] = ACTIONS(87),
    },
    [26] = {
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_enum] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(171),
        [anon_sym_public] = ACTIONS(171),
        [anon_sym_protected] = ACTIONS(171),
        [anon_sym_internal] = ACTIONS(171),
        [anon_sym_private] = ACTIONS(171),
        [anon_sym_sbyte] = ACTIONS(171),
        [anon_sym_byte] = ACTIONS(171),
        [anon_sym_short] = ACTIONS(171),
        [anon_sym_ushort] = ACTIONS(171),
        [anon_sym_int] = ACTIONS(171),
        [anon_sym_uint] = ACTIONS(171),
        [anon_sym_long] = ACTIONS(171),
        [anon_sym_ulong] = ACTIONS(171),
        [anon_sym_char] = ACTIONS(171),
        [anon_sym_unsafe] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(171),
        [anon_sym_sealed] = ACTIONS(171),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_readonly] = ACTIONS(171),
        [anon_sym_volatile] = ACTIONS(171),
        [anon_sym_bool] = ACTIONS(171),
        [anon_sym_decimal] = ACTIONS(171),
        [anon_sym_double] = ACTIONS(171),
        [anon_sym_float] = ACTIONS(171),
        [anon_sym_object] = ACTIONS(171),
        [anon_sym_string] = ACTIONS(171),
        [sym_identifier_name] = ACTIONS(175),
        [sym_comment] = ACTIONS(87),
    },
    [27] = {
        [sym_attribute_argument_list] = STATE(37),
        [anon_sym_RBRACK] = ACTIONS(177),
        [anon_sym_COMMA] = ACTIONS(177),
        [anon_sym_LPAREN] = ACTIONS(179),
        [sym_comment] = ACTIONS(87),
    },
    [28] = {
        [anon_sym_RBRACK] = ACTIONS(181),
        [sym_comment] = ACTIONS(87),
    },
    [29] = {
        [aux_sym_attribute_list_repeat1] = STATE(31),
        [anon_sym_RBRACK] = ACTIONS(183),
        [anon_sym_COMMA] = ACTIONS(185),
        [sym_comment] = ACTIONS(87),
    },
    [30] = {
        [sym_attribute] = STATE(34),
        [sym_identifier_name] = ACTIONS(169),
        [sym_comment] = ACTIONS(87),
    },
    [31] = {
        [anon_sym_RBRACK] = ACTIONS(187),
        [anon_sym_COMMA] = ACTIONS(189),
        [sym_comment] = ACTIONS(87),
    },
    [32] = {
        [sym_attribute] = STATE(33),
        [sym_identifier_name] = ACTIONS(169),
        [sym_comment] = ACTIONS(87),
    },
    [33] = {
        [anon_sym_RBRACK] = ACTIONS(191),
        [anon_sym_COMMA] = ACTIONS(191),
        [sym_comment] = ACTIONS(87),
    },
    [34] = {
        [anon_sym_RBRACK] = ACTIONS(193),
        [anon_sym_COMMA] = ACTIONS(193),
        [sym_comment] = ACTIONS(87),
    },
    [35] = {
        [anon_sym_class] = ACTIONS(195),
        [anon_sym_struct] = ACTIONS(195),
        [anon_sym_LBRACK] = ACTIONS(197),
        [anon_sym_enum] = ACTIONS(195),
        [anon_sym_new] = ACTIONS(195),
        [anon_sym_public] = ACTIONS(195),
        [anon_sym_protected] = ACTIONS(195),
        [anon_sym_internal] = ACTIONS(195),
        [anon_sym_private] = ACTIONS(195),
        [anon_sym_sbyte] = ACTIONS(195),
        [anon_sym_byte] = ACTIONS(195),
        [anon_sym_short] = ACTIONS(195),
        [anon_sym_ushort] = ACTIONS(195),
        [anon_sym_int] = ACTIONS(195),
        [anon_sym_uint] = ACTIONS(195),
        [anon_sym_long] = ACTIONS(195),
        [anon_sym_ulong] = ACTIONS(195),
        [anon_sym_char] = ACTIONS(195),
        [anon_sym_unsafe] = ACTIONS(195),
        [anon_sym_abstract] = ACTIONS(195),
        [anon_sym_sealed] = ACTIONS(195),
        [anon_sym_static] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(195),
        [anon_sym_volatile] = ACTIONS(195),
        [anon_sym_bool] = ACTIONS(195),
        [anon_sym_decimal] = ACTIONS(195),
        [anon_sym_double] = ACTIONS(195),
        [anon_sym_float] = ACTIONS(195),
        [anon_sym_object] = ACTIONS(195),
        [anon_sym_string] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(199),
        [sym_comment] = ACTIONS(87),
    },
    [36] = {
        [anon_sym_RPAREN] = ACTIONS(201),
        [sym_comment] = ACTIONS(87),
    },
    [37] = {
        [anon_sym_RBRACK] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(203),
        [sym_comment] = ACTIONS(87),
    },
    [38] = {
        [anon_sym_RBRACK] = ACTIONS(205),
        [anon_sym_COMMA] = ACTIONS(205),
        [sym_comment] = ACTIONS(87),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(207),
        [anon_sym_namespace] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(207),
        [anon_sym_struct] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(207),
        [anon_sym_enum] = ACTIONS(207),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_abstract] = ACTIONS(207),
        [anon_sym_sealed] = ACTIONS(207),
        [anon_sym_static] = ACTIONS(207),
        [sym_comment] = ACTIONS(87),
    },
    [40] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_using] = ACTIONS(209),
        [anon_sym_namespace] = ACTIONS(209),
        [anon_sym_class] = ACTIONS(209),
        [anon_sym_struct] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(209),
        [anon_sym_enum] = ACTIONS(209),
        [anon_sym_new] = ACTIONS(209),
        [anon_sym_public] = ACTIONS(209),
        [anon_sym_protected] = ACTIONS(209),
        [anon_sym_internal] = ACTIONS(209),
        [anon_sym_private] = ACTIONS(209),
        [anon_sym_unsafe] = ACTIONS(209),
        [anon_sym_abstract] = ACTIONS(209),
        [anon_sym_sealed] = ACTIONS(209),
        [anon_sym_static] = ACTIONS(209),
        [sym_comment] = ACTIONS(87),
    },
    [41] = {
        [sym__type_declaration] = STATE(39),
        [sym_namespace_declaration] = STATE(39),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__global_attributes] = STATE(39),
        [sym__attributes] = STATE(15),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [aux_sym__attributes_repeat1] = STATE(24),
        [ts_builtin_sym_end] = ACTIONS(211),
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
    [42] = {
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(87),
    },
    [43] = {
        [sym_type_parameter_list] = STATE(46),
        [anon_sym_LBRACE] = ACTIONS(215),
        [anon_sym_LT] = ACTIONS(217),
        [sym_comment] = ACTIONS(87),
    },
    [44] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(68),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [45] = {
        [sym__type] = STATE(172),
        [sym_generic_name] = STATE(59),
        [sym_predefined_type] = STATE(59),
        [sym_type_parameter] = STATE(173),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [46] = {
        [anon_sym_LBRACE] = ACTIONS(241),
        [sym_comment] = ACTIONS(87),
    },
    [47] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(62),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(243),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [48] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_namespace] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(245),
        [anon_sym_class] = ACTIONS(247),
        [anon_sym_struct] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(245),
        [anon_sym_enum] = ACTIONS(247),
        [anon_sym_new] = ACTIONS(247),
        [anon_sym_public] = ACTIONS(247),
        [anon_sym_protected] = ACTIONS(247),
        [anon_sym_internal] = ACTIONS(247),
        [anon_sym_private] = ACTIONS(247),
        [anon_sym_sbyte] = ACTIONS(247),
        [anon_sym_byte] = ACTIONS(247),
        [anon_sym_short] = ACTIONS(247),
        [anon_sym_ushort] = ACTIONS(247),
        [anon_sym_int] = ACTIONS(247),
        [anon_sym_uint] = ACTIONS(247),
        [anon_sym_long] = ACTIONS(247),
        [anon_sym_ulong] = ACTIONS(247),
        [anon_sym_char] = ACTIONS(247),
        [anon_sym_unsafe] = ACTIONS(247),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(247),
        [anon_sym_readonly] = ACTIONS(247),
        [anon_sym_volatile] = ACTIONS(247),
        [anon_sym_bool] = ACTIONS(247),
        [anon_sym_decimal] = ACTIONS(247),
        [anon_sym_double] = ACTIONS(247),
        [anon_sym_float] = ACTIONS(247),
        [anon_sym_object] = ACTIONS(247),
        [anon_sym_string] = ACTIONS(247),
        [sym_identifier_name] = ACTIONS(249),
        [sym_comment] = ACTIONS(87),
    },
    [49] = {
        [sym__class_modifiers] = STATE(182),
        [sym__struct_modifiers] = STATE(183),
        [sym__field_modifiers] = STATE(181),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_new] = ACTIONS(231),
        [anon_sym_public] = ACTIONS(231),
        [anon_sym_protected] = ACTIONS(231),
        [anon_sym_internal] = ACTIONS(231),
        [anon_sym_private] = ACTIONS(231),
        [anon_sym_sbyte] = ACTIONS(257),
        [anon_sym_byte] = ACTIONS(257),
        [anon_sym_short] = ACTIONS(257),
        [anon_sym_ushort] = ACTIONS(257),
        [anon_sym_int] = ACTIONS(257),
        [anon_sym_uint] = ACTIONS(257),
        [anon_sym_long] = ACTIONS(257),
        [anon_sym_ulong] = ACTIONS(257),
        [anon_sym_char] = ACTIONS(257),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(257),
        [anon_sym_decimal] = ACTIONS(257),
        [anon_sym_double] = ACTIONS(257),
        [anon_sym_float] = ACTIONS(257),
        [anon_sym_object] = ACTIONS(257),
        [anon_sym_string] = ACTIONS(257),
        [sym_identifier_name] = ACTIONS(259),
        [sym_comment] = ACTIONS(87),
    },
    [50] = {
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_GT] = ACTIONS(261),
        [sym_identifier_name] = ACTIONS(263),
        [sym_comment] = ACTIONS(87),
    },
    [51] = {
        [sym__class_modifiers] = STATE(182),
        [sym__struct_modifiers] = STATE(183),
        [sym__field_modifiers] = STATE(181),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_new] = ACTIONS(231),
        [anon_sym_public] = ACTIONS(231),
        [anon_sym_protected] = ACTIONS(231),
        [anon_sym_internal] = ACTIONS(231),
        [anon_sym_private] = ACTIONS(231),
        [anon_sym_sbyte] = ACTIONS(257),
        [anon_sym_byte] = ACTIONS(257),
        [anon_sym_short] = ACTIONS(257),
        [anon_sym_ushort] = ACTIONS(257),
        [anon_sym_int] = ACTIONS(257),
        [anon_sym_uint] = ACTIONS(257),
        [anon_sym_long] = ACTIONS(257),
        [anon_sym_ulong] = ACTIONS(257),
        [anon_sym_char] = ACTIONS(257),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(257),
        [anon_sym_decimal] = ACTIONS(257),
        [anon_sym_double] = ACTIONS(257),
        [anon_sym_float] = ACTIONS(257),
        [anon_sym_object] = ACTIONS(257),
        [anon_sym_string] = ACTIONS(257),
        [sym_identifier_name] = ACTIONS(259),
        [sym_comment] = ACTIONS(87),
    },
    [52] = {
        [sym__class_modifiers] = STATE(182),
        [sym__field_modifiers] = STATE(181),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_new] = ACTIONS(235),
        [anon_sym_public] = ACTIONS(235),
        [anon_sym_protected] = ACTIONS(235),
        [anon_sym_internal] = ACTIONS(235),
        [anon_sym_private] = ACTIONS(235),
        [anon_sym_sbyte] = ACTIONS(257),
        [anon_sym_byte] = ACTIONS(257),
        [anon_sym_short] = ACTIONS(257),
        [anon_sym_ushort] = ACTIONS(257),
        [anon_sym_int] = ACTIONS(257),
        [anon_sym_uint] = ACTIONS(257),
        [anon_sym_long] = ACTIONS(257),
        [anon_sym_ulong] = ACTIONS(257),
        [anon_sym_char] = ACTIONS(257),
        [anon_sym_unsafe] = ACTIONS(235),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(257),
        [anon_sym_decimal] = ACTIONS(257),
        [anon_sym_double] = ACTIONS(257),
        [anon_sym_float] = ACTIONS(257),
        [anon_sym_object] = ACTIONS(257),
        [anon_sym_string] = ACTIONS(257),
        [sym_identifier_name] = ACTIONS(259),
        [sym_comment] = ACTIONS(87),
    },
    [53] = {
        [sym__field_modifiers] = STATE(181),
        [anon_sym_new] = ACTIONS(237),
        [anon_sym_public] = ACTIONS(237),
        [anon_sym_protected] = ACTIONS(237),
        [anon_sym_internal] = ACTIONS(237),
        [anon_sym_private] = ACTIONS(237),
        [anon_sym_sbyte] = ACTIONS(257),
        [anon_sym_byte] = ACTIONS(257),
        [anon_sym_short] = ACTIONS(257),
        [anon_sym_ushort] = ACTIONS(257),
        [anon_sym_int] = ACTIONS(257),
        [anon_sym_uint] = ACTIONS(257),
        [anon_sym_long] = ACTIONS(257),
        [anon_sym_ulong] = ACTIONS(257),
        [anon_sym_char] = ACTIONS(257),
        [anon_sym_unsafe] = ACTIONS(237),
        [anon_sym_static] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(257),
        [anon_sym_decimal] = ACTIONS(257),
        [anon_sym_double] = ACTIONS(257),
        [anon_sym_float] = ACTIONS(257),
        [anon_sym_object] = ACTIONS(257),
        [anon_sym_string] = ACTIONS(257),
        [sym_identifier_name] = ACTIONS(259),
        [sym_comment] = ACTIONS(87),
    },
    [54] = {
        [sym_type_parameter_list] = STATE(171),
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_LT] = ACTIONS(217),
        [anon_sym_GT] = ACTIONS(265),
        [sym_identifier_name] = ACTIONS(267),
        [sym_comment] = ACTIONS(87),
    },
    [55] = {
        [anon_sym_RBRACE] = ACTIONS(269),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_struct] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(269),
        [anon_sym_enum] = ACTIONS(271),
        [anon_sym_new] = ACTIONS(271),
        [anon_sym_public] = ACTIONS(271),
        [anon_sym_protected] = ACTIONS(271),
        [anon_sym_internal] = ACTIONS(271),
        [anon_sym_private] = ACTIONS(271),
        [anon_sym_sbyte] = ACTIONS(271),
        [anon_sym_byte] = ACTIONS(271),
        [anon_sym_short] = ACTIONS(271),
        [anon_sym_ushort] = ACTIONS(271),
        [anon_sym_int] = ACTIONS(271),
        [anon_sym_uint] = ACTIONS(271),
        [anon_sym_long] = ACTIONS(271),
        [anon_sym_ulong] = ACTIONS(271),
        [anon_sym_char] = ACTIONS(271),
        [anon_sym_unsafe] = ACTIONS(271),
        [anon_sym_abstract] = ACTIONS(271),
        [anon_sym_sealed] = ACTIONS(271),
        [anon_sym_static] = ACTIONS(271),
        [anon_sym_readonly] = ACTIONS(271),
        [anon_sym_volatile] = ACTIONS(271),
        [anon_sym_bool] = ACTIONS(271),
        [anon_sym_decimal] = ACTIONS(271),
        [anon_sym_double] = ACTIONS(271),
        [anon_sym_float] = ACTIONS(271),
        [anon_sym_object] = ACTIONS(271),
        [anon_sym_string] = ACTIONS(271),
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(87),
    },
    [56] = {
        [sym_enum_modifier] = STATE(148),
        [sym_variable_declaration] = STATE(65),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(149),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(150),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(151),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_struct] = ACTIONS(277),
        [anon_sym_enum] = ACTIONS(279),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [57] = {
        [anon_sym_SEMI] = ACTIONS(281),
        [sym_comment] = ACTIONS(87),
    },
    [58] = {
        [sym_variable_declarator] = STATE(80),
        [sym_identifier_name] = ACTIONS(283),
        [sym_comment] = ACTIONS(87),
    },
    [59] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_GT] = ACTIONS(265),
        [sym_identifier_name] = ACTIONS(267),
        [sym_comment] = ACTIONS(87),
    },
    [60] = {
        [sym_variable_declaration] = STATE(65),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_predefined_type] = STATE(59),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [61] = {
        [anon_sym_sbyte] = ACTIONS(285),
        [anon_sym_byte] = ACTIONS(285),
        [anon_sym_short] = ACTIONS(285),
        [anon_sym_ushort] = ACTIONS(285),
        [anon_sym_int] = ACTIONS(285),
        [anon_sym_uint] = ACTIONS(285),
        [anon_sym_long] = ACTIONS(285),
        [anon_sym_ulong] = ACTIONS(285),
        [anon_sym_char] = ACTIONS(285),
        [anon_sym_bool] = ACTIONS(285),
        [anon_sym_decimal] = ACTIONS(285),
        [anon_sym_double] = ACTIONS(285),
        [anon_sym_float] = ACTIONS(285),
        [anon_sym_object] = ACTIONS(285),
        [anon_sym_string] = ACTIONS(285),
        [sym_identifier_name] = ACTIONS(287),
        [sym_comment] = ACTIONS(87),
    },
    [62] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [63] = {
        [ts_builtin_sym_end] = ACTIONS(291),
        [anon_sym_namespace] = ACTIONS(293),
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
        [anon_sym_RBRACE] = ACTIONS(297),
        [anon_sym_class] = ACTIONS(299),
        [anon_sym_struct] = ACTIONS(299),
        [anon_sym_LBRACK] = ACTIONS(297),
        [anon_sym_enum] = ACTIONS(299),
        [anon_sym_new] = ACTIONS(299),
        [anon_sym_public] = ACTIONS(299),
        [anon_sym_protected] = ACTIONS(299),
        [anon_sym_internal] = ACTIONS(299),
        [anon_sym_private] = ACTIONS(299),
        [anon_sym_sbyte] = ACTIONS(299),
        [anon_sym_byte] = ACTIONS(299),
        [anon_sym_short] = ACTIONS(299),
        [anon_sym_ushort] = ACTIONS(299),
        [anon_sym_int] = ACTIONS(299),
        [anon_sym_uint] = ACTIONS(299),
        [anon_sym_long] = ACTIONS(299),
        [anon_sym_ulong] = ACTIONS(299),
        [anon_sym_char] = ACTIONS(299),
        [anon_sym_unsafe] = ACTIONS(299),
        [anon_sym_abstract] = ACTIONS(299),
        [anon_sym_sealed] = ACTIONS(299),
        [anon_sym_static] = ACTIONS(299),
        [anon_sym_readonly] = ACTIONS(299),
        [anon_sym_volatile] = ACTIONS(299),
        [anon_sym_bool] = ACTIONS(299),
        [anon_sym_decimal] = ACTIONS(299),
        [anon_sym_double] = ACTIONS(299),
        [anon_sym_float] = ACTIONS(299),
        [anon_sym_object] = ACTIONS(299),
        [anon_sym_string] = ACTIONS(299),
        [sym_identifier_name] = ACTIONS(301),
        [sym_comment] = ACTIONS(87),
    },
    [65] = {
        [anon_sym_SEMI] = ACTIONS(303),
        [sym_comment] = ACTIONS(87),
    },
    [66] = {
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
        [ts_builtin_sym_end] = ACTIONS(311),
        [anon_sym_namespace] = ACTIONS(313),
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
        [sym_comment] = ACTIONS(87),
    },
    [68] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(243),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [69] = {
        [sym_identifier_name] = ACTIONS(317),
        [sym_comment] = ACTIONS(87),
    },
    [70] = {
        [sym_type_parameter_list] = STATE(72),
        [anon_sym_LBRACE] = ACTIONS(319),
        [anon_sym_LT] = ACTIONS(217),
        [sym_comment] = ACTIONS(87),
    },
    [71] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(78),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(321),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [72] = {
        [anon_sym_LBRACE] = ACTIONS(323),
        [sym_comment] = ACTIONS(87),
    },
    [73] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(75),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(325),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [74] = {
        [ts_builtin_sym_end] = ACTIONS(327),
        [anon_sym_namespace] = ACTIONS(329),
        [anon_sym_RBRACE] = ACTIONS(327),
        [anon_sym_class] = ACTIONS(329),
        [anon_sym_struct] = ACTIONS(329),
        [anon_sym_LBRACK] = ACTIONS(327),
        [anon_sym_enum] = ACTIONS(329),
        [anon_sym_new] = ACTIONS(329),
        [anon_sym_public] = ACTIONS(329),
        [anon_sym_protected] = ACTIONS(329),
        [anon_sym_internal] = ACTIONS(329),
        [anon_sym_private] = ACTIONS(329),
        [anon_sym_sbyte] = ACTIONS(329),
        [anon_sym_byte] = ACTIONS(329),
        [anon_sym_short] = ACTIONS(329),
        [anon_sym_ushort] = ACTIONS(329),
        [anon_sym_int] = ACTIONS(329),
        [anon_sym_uint] = ACTIONS(329),
        [anon_sym_long] = ACTIONS(329),
        [anon_sym_ulong] = ACTIONS(329),
        [anon_sym_char] = ACTIONS(329),
        [anon_sym_unsafe] = ACTIONS(329),
        [anon_sym_abstract] = ACTIONS(329),
        [anon_sym_sealed] = ACTIONS(329),
        [anon_sym_static] = ACTIONS(329),
        [anon_sym_readonly] = ACTIONS(329),
        [anon_sym_volatile] = ACTIONS(329),
        [anon_sym_bool] = ACTIONS(329),
        [anon_sym_decimal] = ACTIONS(329),
        [anon_sym_double] = ACTIONS(329),
        [anon_sym_float] = ACTIONS(329),
        [anon_sym_object] = ACTIONS(329),
        [anon_sym_string] = ACTIONS(329),
        [sym_identifier_name] = ACTIONS(331),
        [sym_comment] = ACTIONS(87),
    },
    [75] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(333),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
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
        [sym_comment] = ACTIONS(87),
    },
    [78] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(325),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [79] = {
        [sym_equals_value_clause] = STATE(87),
        [anon_sym_SEMI] = ACTIONS(347),
        [anon_sym_COMMA] = ACTIONS(347),
        [anon_sym_EQ] = ACTIONS(349),
        [sym_comment] = ACTIONS(87),
    },
    [80] = {
        [aux_sym_variable_declaration_repeat1] = STATE(82),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_COMMA] = ACTIONS(353),
        [sym_comment] = ACTIONS(87),
    },
    [81] = {
        [sym_variable_declarator] = STATE(85),
        [sym_identifier_name] = ACTIONS(283),
        [sym_comment] = ACTIONS(87),
    },
    [82] = {
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_COMMA] = ACTIONS(357),
        [sym_comment] = ACTIONS(87),
    },
    [83] = {
        [sym_variable_declarator] = STATE(84),
        [sym_identifier_name] = ACTIONS(283),
        [sym_comment] = ACTIONS(87),
    },
    [84] = {
        [anon_sym_SEMI] = ACTIONS(359),
        [anon_sym_COMMA] = ACTIONS(359),
        [sym_comment] = ACTIONS(87),
    },
    [85] = {
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym_comment] = ACTIONS(87),
    },
    [86] = {
        [sym__literal] = STATE(96),
        [sym_boolean_literal] = STATE(92),
        [sym_character_literal] = STATE(92),
        [sym_integer_literal] = STATE(92),
        [sym_real_literal] = STATE(92),
        [sym_string_literal] = STATE(92),
        [sym__regular_string_literal] = STATE(97),
        [sym__verbatim_string_literal] = STATE(97),
        [anon_sym_true] = ACTIONS(363),
        [anon_sym_false] = ACTIONS(363),
        [anon_sym_SQUOTE] = ACTIONS(365),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(367),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(369),
        [sym_null_literal] = ACTIONS(371),
        [anon_sym_DOT] = ACTIONS(373),
        [anon_sym_DQUOTE] = ACTIONS(375),
        [anon_sym_AT_DQUOTE] = ACTIONS(377),
        [sym_comment] = ACTIONS(87),
    },
    [87] = {
        [anon_sym_SEMI] = ACTIONS(379),
        [anon_sym_COMMA] = ACTIONS(379),
        [sym_comment] = ACTIONS(87),
    },
    [88] = {
        [anon_sym_SEMI] = ACTIONS(381),
        [anon_sym_RBRACE] = ACTIONS(381),
        [anon_sym_COMMA] = ACTIONS(381),
        [sym_comment] = ACTIONS(87),
    },
    [89] = {
        [sym__unicode_escape_sequence] = STATE(119),
        [sym__simple_escape_sequence] = STATE(119),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(383),
        [sym__hexadecimal_escape_sequence] = ACTIONS(383),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(385),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(385),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(387),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(387),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(387),
        [anon_sym_BSLASH0] = ACTIONS(387),
        [anon_sym_BSLASHa] = ACTIONS(387),
        [anon_sym_BSLASHb] = ACTIONS(387),
        [anon_sym_BSLASHf] = ACTIONS(387),
        [anon_sym_BSLASHn] = ACTIONS(387),
        [anon_sym_BSLASHr] = ACTIONS(387),
        [anon_sym_BSLASHt] = ACTIONS(387),
        [anon_sym_BSLASHv] = ACTIONS(387),
        [sym_comment] = ACTIONS(87),
    },
    [90] = {
        [anon_sym_SEMI] = ACTIONS(389),
        [anon_sym_RBRACE] = ACTIONS(389),
        [anon_sym_COMMA] = ACTIONS(389),
        [sym__integer_type_suffix] = ACTIONS(391),
        [anon_sym_DOT] = ACTIONS(393),
        [sym__real_type_suffix] = ACTIONS(395),
        [sym__exponent_part] = ACTIONS(397),
        [sym_comment] = ACTIONS(87),
    },
    [91] = {
        [anon_sym_SEMI] = ACTIONS(389),
        [anon_sym_RBRACE] = ACTIONS(389),
        [anon_sym_COMMA] = ACTIONS(389),
        [sym__integer_type_suffix] = ACTIONS(391),
        [sym_comment] = ACTIONS(87),
    },
    [92] = {
        [anon_sym_SEMI] = ACTIONS(399),
        [anon_sym_RBRACE] = ACTIONS(399),
        [anon_sym_COMMA] = ACTIONS(399),
        [sym_comment] = ACTIONS(87),
    },
    [93] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(401),
        [sym_comment] = ACTIONS(87),
    },
    [94] = {
        [sym__unicode_escape_sequence] = STATE(100),
        [sym__simple_escape_sequence] = STATE(100),
        [sym__regular_string_literal_character] = STATE(104),
        [aux_sym__regular_string_literal_repeat1] = STATE(105),
        [sym__hexadecimal_escape_sequence] = ACTIONS(403),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(405),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(405),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(407),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(407),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(407),
        [anon_sym_BSLASH0] = ACTIONS(407),
        [anon_sym_BSLASHa] = ACTIONS(407),
        [anon_sym_BSLASHb] = ACTIONS(407),
        [anon_sym_BSLASHf] = ACTIONS(407),
        [anon_sym_BSLASHn] = ACTIONS(407),
        [anon_sym_BSLASHr] = ACTIONS(407),
        [anon_sym_BSLASHt] = ACTIONS(407),
        [anon_sym_BSLASHv] = ACTIONS(407),
        [anon_sym_DQUOTE] = ACTIONS(409),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(403),
        [sym_comment] = ACTIONS(87),
    },
    [95] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(411),
        [sym_comment] = ACTIONS(413),
    },
    [96] = {
        [anon_sym_SEMI] = ACTIONS(415),
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(87),
    },
    [97] = {
        [anon_sym_SEMI] = ACTIONS(417),
        [anon_sym_RBRACE] = ACTIONS(417),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(87),
    },
    [98] = {
        [anon_sym_DQUOTE] = ACTIONS(419),
        [sym_comment] = ACTIONS(87),
    },
    [99] = {
        [anon_sym_SEMI] = ACTIONS(421),
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(421),
        [sym_comment] = ACTIONS(87),
    },
    [100] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(423),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(425),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(425),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(425),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(425),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(425),
        [anon_sym_BSLASH0] = ACTIONS(425),
        [anon_sym_BSLASHa] = ACTIONS(425),
        [anon_sym_BSLASHb] = ACTIONS(425),
        [anon_sym_BSLASHf] = ACTIONS(425),
        [anon_sym_BSLASHn] = ACTIONS(425),
        [anon_sym_BSLASHr] = ACTIONS(425),
        [anon_sym_BSLASHt] = ACTIONS(425),
        [anon_sym_BSLASHv] = ACTIONS(425),
        [anon_sym_DQUOTE] = ACTIONS(425),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(423),
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
        [anon_sym_SQUOTE] = ACTIONS(433),
        [sym__hexadecimal_escape_sequence] = ACTIONS(435),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(433),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(433),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(433),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(433),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(433),
        [anon_sym_BSLASH0] = ACTIONS(433),
        [anon_sym_BSLASHa] = ACTIONS(433),
        [anon_sym_BSLASHb] = ACTIONS(433),
        [anon_sym_BSLASHf] = ACTIONS(433),
        [anon_sym_BSLASHn] = ACTIONS(433),
        [anon_sym_BSLASHr] = ACTIONS(433),
        [anon_sym_BSLASHt] = ACTIONS(433),
        [anon_sym_BSLASHv] = ACTIONS(433),
        [anon_sym_DQUOTE] = ACTIONS(433),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(437),
        [sym_comment] = ACTIONS(87),
    },
    [103] = {
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_RBRACE] = ACTIONS(439),
        [anon_sym_COMMA] = ACTIONS(439),
        [sym_comment] = ACTIONS(87),
    },
    [104] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(441),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(443),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(443),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(443),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(443),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(443),
        [anon_sym_BSLASH0] = ACTIONS(443),
        [anon_sym_BSLASHa] = ACTIONS(443),
        [anon_sym_BSLASHb] = ACTIONS(443),
        [anon_sym_BSLASHf] = ACTIONS(443),
        [anon_sym_BSLASHn] = ACTIONS(443),
        [anon_sym_BSLASHr] = ACTIONS(443),
        [anon_sym_BSLASHt] = ACTIONS(443),
        [anon_sym_BSLASHv] = ACTIONS(443),
        [anon_sym_DQUOTE] = ACTIONS(443),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(441),
        [sym_comment] = ACTIONS(87),
    },
    [105] = {
        [sym__unicode_escape_sequence] = STATE(100),
        [sym__simple_escape_sequence] = STATE(100),
        [sym__regular_string_literal_character] = STATE(107),
        [sym__hexadecimal_escape_sequence] = ACTIONS(403),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(405),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(405),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(407),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(407),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(407),
        [anon_sym_BSLASH0] = ACTIONS(407),
        [anon_sym_BSLASHa] = ACTIONS(407),
        [anon_sym_BSLASHb] = ACTIONS(407),
        [anon_sym_BSLASHf] = ACTIONS(407),
        [anon_sym_BSLASHn] = ACTIONS(407),
        [anon_sym_BSLASHr] = ACTIONS(407),
        [anon_sym_BSLASHt] = ACTIONS(407),
        [anon_sym_BSLASHv] = ACTIONS(407),
        [anon_sym_DQUOTE] = ACTIONS(445),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(403),
        [sym_comment] = ACTIONS(87),
    },
    [106] = {
        [anon_sym_SEMI] = ACTIONS(447),
        [anon_sym_RBRACE] = ACTIONS(447),
        [anon_sym_COMMA] = ACTIONS(447),
        [sym_comment] = ACTIONS(87),
    },
    [107] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(449),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(451),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(451),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(451),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(451),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(451),
        [anon_sym_BSLASH0] = ACTIONS(451),
        [anon_sym_BSLASHa] = ACTIONS(451),
        [anon_sym_BSLASHb] = ACTIONS(451),
        [anon_sym_BSLASHf] = ACTIONS(451),
        [anon_sym_BSLASHn] = ACTIONS(451),
        [anon_sym_BSLASHr] = ACTIONS(451),
        [anon_sym_BSLASHt] = ACTIONS(451),
        [anon_sym_BSLASHv] = ACTIONS(451),
        [anon_sym_DQUOTE] = ACTIONS(451),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(449),
        [sym_comment] = ACTIONS(87),
    },
    [108] = {
        [anon_sym_SEMI] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(453),
        [anon_sym_COMMA] = ACTIONS(453),
        [sym__real_type_suffix] = ACTIONS(455),
        [sym__exponent_part] = ACTIONS(457),
        [sym_comment] = ACTIONS(87),
    },
    [109] = {
        [anon_sym_SEMI] = ACTIONS(459),
        [anon_sym_RBRACE] = ACTIONS(459),
        [anon_sym_COMMA] = ACTIONS(459),
        [sym_comment] = ACTIONS(87),
    },
    [110] = {
        [anon_sym_SEMI] = ACTIONS(459),
        [anon_sym_RBRACE] = ACTIONS(459),
        [anon_sym_COMMA] = ACTIONS(459),
        [sym__real_type_suffix] = ACTIONS(461),
        [sym_comment] = ACTIONS(87),
    },
    [111] = {
        [anon_sym_SEMI] = ACTIONS(463),
        [anon_sym_RBRACE] = ACTIONS(463),
        [anon_sym_COMMA] = ACTIONS(463),
        [sym_comment] = ACTIONS(87),
    },
    [112] = {
        [anon_sym_SEMI] = ACTIONS(465),
        [anon_sym_RBRACE] = ACTIONS(465),
        [anon_sym_COMMA] = ACTIONS(465),
        [sym_comment] = ACTIONS(87),
    },
    [113] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(467),
        [sym_comment] = ACTIONS(87),
    },
    [114] = {
        [anon_sym_SEMI] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(453),
        [anon_sym_COMMA] = ACTIONS(453),
        [sym_comment] = ACTIONS(87),
    },
    [115] = {
        [anon_sym_SEMI] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(453),
        [anon_sym_COMMA] = ACTIONS(453),
        [sym__real_type_suffix] = ACTIONS(455),
        [sym_comment] = ACTIONS(87),
    },
    [116] = {
        [anon_sym_SEMI] = ACTIONS(459),
        [anon_sym_RBRACE] = ACTIONS(459),
        [anon_sym_COMMA] = ACTIONS(459),
        [sym__real_type_suffix] = ACTIONS(461),
        [sym__exponent_part] = ACTIONS(469),
        [sym_comment] = ACTIONS(87),
    },
    [117] = {
        [anon_sym_SEMI] = ACTIONS(463),
        [anon_sym_RBRACE] = ACTIONS(463),
        [anon_sym_COMMA] = ACTIONS(463),
        [sym__real_type_suffix] = ACTIONS(471),
        [sym_comment] = ACTIONS(87),
    },
    [118] = {
        [anon_sym_SEMI] = ACTIONS(473),
        [anon_sym_RBRACE] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(473),
        [sym_comment] = ACTIONS(87),
    },
    [119] = {
        [anon_sym_SQUOTE] = ACTIONS(475),
        [sym_comment] = ACTIONS(87),
    },
    [120] = {
        [anon_sym_SQUOTE] = ACTIONS(427),
        [sym_comment] = ACTIONS(87),
    },
    [121] = {
        [anon_sym_SQUOTE] = ACTIONS(433),
        [sym_comment] = ACTIONS(87),
    },
    [122] = {
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_RBRACE] = ACTIONS(477),
        [anon_sym_COMMA] = ACTIONS(477),
        [sym_comment] = ACTIONS(87),
    },
    [123] = {
        [anon_sym_RBRACE] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_struct] = ACTIONS(481),
        [anon_sym_LBRACK] = ACTIONS(479),
        [anon_sym_enum] = ACTIONS(481),
        [anon_sym_new] = ACTIONS(481),
        [anon_sym_public] = ACTIONS(481),
        [anon_sym_protected] = ACTIONS(481),
        [anon_sym_internal] = ACTIONS(481),
        [anon_sym_private] = ACTIONS(481),
        [anon_sym_sbyte] = ACTIONS(481),
        [anon_sym_byte] = ACTIONS(481),
        [anon_sym_short] = ACTIONS(481),
        [anon_sym_ushort] = ACTIONS(481),
        [anon_sym_int] = ACTIONS(481),
        [anon_sym_uint] = ACTIONS(481),
        [anon_sym_long] = ACTIONS(481),
        [anon_sym_ulong] = ACTIONS(481),
        [anon_sym_char] = ACTIONS(481),
        [anon_sym_unsafe] = ACTIONS(481),
        [anon_sym_abstract] = ACTIONS(481),
        [anon_sym_sealed] = ACTIONS(481),
        [anon_sym_static] = ACTIONS(481),
        [anon_sym_readonly] = ACTIONS(481),
        [anon_sym_volatile] = ACTIONS(481),
        [anon_sym_bool] = ACTIONS(481),
        [anon_sym_decimal] = ACTIONS(481),
        [anon_sym_double] = ACTIONS(481),
        [anon_sym_float] = ACTIONS(481),
        [anon_sym_object] = ACTIONS(481),
        [anon_sym_string] = ACTIONS(481),
        [sym_identifier_name] = ACTIONS(483),
        [sym_comment] = ACTIONS(87),
    },
    [124] = {
        [sym_identifier_name] = ACTIONS(485),
        [sym_comment] = ACTIONS(87),
    },
    [125] = {
        [sym__enum_base] = STATE(128),
        [sym__enum_body] = STATE(129),
        [anon_sym_LBRACE] = ACTIONS(487),
        [anon_sym_COLON] = ACTIONS(489),
        [sym_comment] = ACTIONS(87),
    },
    [126] = {
        [sym__attributes] = STATE(136),
        [sym_enum_member_declaration] = STATE(137),
        [sym__attribute_section] = STATE(17),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_identifier_name] = ACTIONS(491),
        [sym_comment] = ACTIONS(87),
    },
    [127] = {
        [sym__integral_type] = STATE(134),
        [anon_sym_sbyte] = ACTIONS(493),
        [anon_sym_byte] = ACTIONS(493),
        [anon_sym_short] = ACTIONS(493),
        [anon_sym_ushort] = ACTIONS(493),
        [anon_sym_int] = ACTIONS(493),
        [anon_sym_uint] = ACTIONS(493),
        [anon_sym_long] = ACTIONS(493),
        [anon_sym_ulong] = ACTIONS(493),
        [anon_sym_char] = ACTIONS(493),
        [sym_comment] = ACTIONS(87),
    },
    [128] = {
        [sym__enum_body] = STATE(131),
        [anon_sym_LBRACE] = ACTIONS(487),
        [sym_comment] = ACTIONS(87),
    },
    [129] = {
        [ts_builtin_sym_end] = ACTIONS(495),
        [anon_sym_SEMI] = ACTIONS(497),
        [anon_sym_namespace] = ACTIONS(499),
        [anon_sym_RBRACE] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_struct] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(495),
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
        [ts_builtin_sym_end] = ACTIONS(503),
        [anon_sym_namespace] = ACTIONS(505),
        [anon_sym_RBRACE] = ACTIONS(503),
        [anon_sym_class] = ACTIONS(505),
        [anon_sym_struct] = ACTIONS(505),
        [anon_sym_LBRACK] = ACTIONS(503),
        [anon_sym_enum] = ACTIONS(505),
        [anon_sym_new] = ACTIONS(505),
        [anon_sym_public] = ACTIONS(505),
        [anon_sym_protected] = ACTIONS(505),
        [anon_sym_internal] = ACTIONS(505),
        [anon_sym_private] = ACTIONS(505),
        [anon_sym_sbyte] = ACTIONS(505),
        [anon_sym_byte] = ACTIONS(505),
        [anon_sym_short] = ACTIONS(505),
        [anon_sym_ushort] = ACTIONS(505),
        [anon_sym_int] = ACTIONS(505),
        [anon_sym_uint] = ACTIONS(505),
        [anon_sym_long] = ACTIONS(505),
        [anon_sym_ulong] = ACTIONS(505),
        [anon_sym_char] = ACTIONS(505),
        [anon_sym_unsafe] = ACTIONS(505),
        [anon_sym_abstract] = ACTIONS(505),
        [anon_sym_sealed] = ACTIONS(505),
        [anon_sym_static] = ACTIONS(505),
        [anon_sym_readonly] = ACTIONS(505),
        [anon_sym_volatile] = ACTIONS(505),
        [anon_sym_bool] = ACTIONS(505),
        [anon_sym_decimal] = ACTIONS(505),
        [anon_sym_double] = ACTIONS(505),
        [anon_sym_float] = ACTIONS(505),
        [anon_sym_object] = ACTIONS(505),
        [anon_sym_string] = ACTIONS(505),
        [sym_identifier_name] = ACTIONS(507),
        [sym_comment] = ACTIONS(87),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(503),
        [anon_sym_SEMI] = ACTIONS(509),
        [anon_sym_namespace] = ACTIONS(505),
        [anon_sym_RBRACE] = ACTIONS(503),
        [anon_sym_class] = ACTIONS(505),
        [anon_sym_struct] = ACTIONS(505),
        [anon_sym_LBRACK] = ACTIONS(503),
        [anon_sym_enum] = ACTIONS(505),
        [anon_sym_new] = ACTIONS(505),
        [anon_sym_public] = ACTIONS(505),
        [anon_sym_protected] = ACTIONS(505),
        [anon_sym_internal] = ACTIONS(505),
        [anon_sym_private] = ACTIONS(505),
        [anon_sym_sbyte] = ACTIONS(505),
        [anon_sym_byte] = ACTIONS(505),
        [anon_sym_short] = ACTIONS(505),
        [anon_sym_ushort] = ACTIONS(505),
        [anon_sym_int] = ACTIONS(505),
        [anon_sym_uint] = ACTIONS(505),
        [anon_sym_long] = ACTIONS(505),
        [anon_sym_ulong] = ACTIONS(505),
        [anon_sym_char] = ACTIONS(505),
        [anon_sym_unsafe] = ACTIONS(505),
        [anon_sym_abstract] = ACTIONS(505),
        [anon_sym_sealed] = ACTIONS(505),
        [anon_sym_static] = ACTIONS(505),
        [anon_sym_readonly] = ACTIONS(505),
        [anon_sym_volatile] = ACTIONS(505),
        [anon_sym_bool] = ACTIONS(505),
        [anon_sym_decimal] = ACTIONS(505),
        [anon_sym_double] = ACTIONS(505),
        [anon_sym_float] = ACTIONS(505),
        [anon_sym_object] = ACTIONS(505),
        [anon_sym_string] = ACTIONS(505),
        [sym_identifier_name] = ACTIONS(507),
        [sym_comment] = ACTIONS(87),
    },
    [132] = {
        [ts_builtin_sym_end] = ACTIONS(511),
        [anon_sym_namespace] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(511),
        [anon_sym_class] = ACTIONS(513),
        [anon_sym_struct] = ACTIONS(513),
        [anon_sym_LBRACK] = ACTIONS(511),
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
        [sym_comment] = ACTIONS(87),
    },
    [133] = {
        [anon_sym_LBRACE] = ACTIONS(517),
        [sym_comment] = ACTIONS(87),
    },
    [134] = {
        [anon_sym_LBRACE] = ACTIONS(519),
        [sym_comment] = ACTIONS(87),
    },
    [135] = {
        [sym_equals_value_clause] = STATE(147),
        [anon_sym_RBRACE] = ACTIONS(521),
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_EQ] = ACTIONS(349),
        [sym_comment] = ACTIONS(87),
    },
    [136] = {
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(87),
    },
    [137] = {
        [aux_sym__enum_body_repeat1] = STATE(140),
        [anon_sym_RBRACE] = ACTIONS(525),
        [anon_sym_COMMA] = ACTIONS(527),
        [sym_comment] = ACTIONS(87),
    },
    [138] = {
        [ts_builtin_sym_end] = ACTIONS(529),
        [anon_sym_SEMI] = ACTIONS(529),
        [anon_sym_namespace] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(529),
        [anon_sym_class] = ACTIONS(531),
        [anon_sym_struct] = ACTIONS(531),
        [anon_sym_LBRACK] = ACTIONS(529),
        [anon_sym_enum] = ACTIONS(531),
        [anon_sym_new] = ACTIONS(531),
        [anon_sym_public] = ACTIONS(531),
        [anon_sym_protected] = ACTIONS(531),
        [anon_sym_internal] = ACTIONS(531),
        [anon_sym_private] = ACTIONS(531),
        [anon_sym_sbyte] = ACTIONS(531),
        [anon_sym_byte] = ACTIONS(531),
        [anon_sym_short] = ACTIONS(531),
        [anon_sym_ushort] = ACTIONS(531),
        [anon_sym_int] = ACTIONS(531),
        [anon_sym_uint] = ACTIONS(531),
        [anon_sym_long] = ACTIONS(531),
        [anon_sym_ulong] = ACTIONS(531),
        [anon_sym_char] = ACTIONS(531),
        [anon_sym_unsafe] = ACTIONS(531),
        [anon_sym_abstract] = ACTIONS(531),
        [anon_sym_sealed] = ACTIONS(531),
        [anon_sym_static] = ACTIONS(531),
        [anon_sym_readonly] = ACTIONS(531),
        [anon_sym_volatile] = ACTIONS(531),
        [anon_sym_bool] = ACTIONS(531),
        [anon_sym_decimal] = ACTIONS(531),
        [anon_sym_double] = ACTIONS(531),
        [anon_sym_float] = ACTIONS(531),
        [anon_sym_object] = ACTIONS(531),
        [anon_sym_string] = ACTIONS(531),
        [sym_identifier_name] = ACTIONS(533),
        [sym_comment] = ACTIONS(87),
    },
    [139] = {
        [sym__attributes] = STATE(136),
        [sym_enum_member_declaration] = STATE(144),
        [sym__attribute_section] = STATE(17),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_identifier_name] = ACTIONS(491),
        [sym_comment] = ACTIONS(87),
    },
    [140] = {
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_COMMA] = ACTIONS(537),
        [sym_comment] = ACTIONS(87),
    },
    [141] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_namespace] = ACTIONS(541),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_struct] = ACTIONS(541),
        [anon_sym_LBRACK] = ACTIONS(539),
        [anon_sym_enum] = ACTIONS(541),
        [anon_sym_new] = ACTIONS(541),
        [anon_sym_public] = ACTIONS(541),
        [anon_sym_protected] = ACTIONS(541),
        [anon_sym_internal] = ACTIONS(541),
        [anon_sym_private] = ACTIONS(541),
        [anon_sym_sbyte] = ACTIONS(541),
        [anon_sym_byte] = ACTIONS(541),
        [anon_sym_short] = ACTIONS(541),
        [anon_sym_ushort] = ACTIONS(541),
        [anon_sym_int] = ACTIONS(541),
        [anon_sym_uint] = ACTIONS(541),
        [anon_sym_long] = ACTIONS(541),
        [anon_sym_ulong] = ACTIONS(541),
        [anon_sym_char] = ACTIONS(541),
        [anon_sym_unsafe] = ACTIONS(541),
        [anon_sym_abstract] = ACTIONS(541),
        [anon_sym_sealed] = ACTIONS(541),
        [anon_sym_static] = ACTIONS(541),
        [anon_sym_readonly] = ACTIONS(541),
        [anon_sym_volatile] = ACTIONS(541),
        [anon_sym_bool] = ACTIONS(541),
        [anon_sym_decimal] = ACTIONS(541),
        [anon_sym_double] = ACTIONS(541),
        [anon_sym_float] = ACTIONS(541),
        [anon_sym_object] = ACTIONS(541),
        [anon_sym_string] = ACTIONS(541),
        [sym_identifier_name] = ACTIONS(543),
        [sym_comment] = ACTIONS(87),
    },
    [142] = {
        [sym__attributes] = STATE(136),
        [sym_enum_member_declaration] = STATE(143),
        [sym__attribute_section] = STATE(17),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_identifier_name] = ACTIONS(491),
        [sym_comment] = ACTIONS(87),
    },
    [143] = {
        [anon_sym_RBRACE] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(545),
        [sym_comment] = ACTIONS(87),
    },
    [144] = {
        [anon_sym_RBRACE] = ACTIONS(547),
        [anon_sym_COMMA] = ACTIONS(547),
        [sym_comment] = ACTIONS(87),
    },
    [145] = {
        [sym_equals_value_clause] = STATE(146),
        [anon_sym_RBRACE] = ACTIONS(549),
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_EQ] = ACTIONS(349),
        [sym_comment] = ACTIONS(87),
    },
    [146] = {
        [anon_sym_RBRACE] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(551),
        [sym_comment] = ACTIONS(87),
    },
    [147] = {
        [anon_sym_RBRACE] = ACTIONS(549),
        [anon_sym_COMMA] = ACTIONS(549),
        [sym_comment] = ACTIONS(87),
    },
    [148] = {
        [anon_sym_enum] = ACTIONS(553),
        [sym_comment] = ACTIONS(87),
    },
    [149] = {
        [anon_sym_class] = ACTIONS(555),
        [sym_comment] = ACTIONS(87),
    },
    [150] = {
        [anon_sym_struct] = ACTIONS(557),
        [sym_comment] = ACTIONS(87),
    },
    [151] = {
        [sym_variable_declaration] = STATE(152),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_predefined_type] = STATE(59),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [152] = {
        [anon_sym_SEMI] = ACTIONS(559),
        [sym_comment] = ACTIONS(87),
    },
    [153] = {
        [anon_sym_RBRACE] = ACTIONS(561),
        [anon_sym_class] = ACTIONS(563),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_LBRACK] = ACTIONS(561),
        [anon_sym_enum] = ACTIONS(563),
        [anon_sym_new] = ACTIONS(563),
        [anon_sym_public] = ACTIONS(563),
        [anon_sym_protected] = ACTIONS(563),
        [anon_sym_internal] = ACTIONS(563),
        [anon_sym_private] = ACTIONS(563),
        [anon_sym_sbyte] = ACTIONS(563),
        [anon_sym_byte] = ACTIONS(563),
        [anon_sym_short] = ACTIONS(563),
        [anon_sym_ushort] = ACTIONS(563),
        [anon_sym_int] = ACTIONS(563),
        [anon_sym_uint] = ACTIONS(563),
        [anon_sym_long] = ACTIONS(563),
        [anon_sym_ulong] = ACTIONS(563),
        [anon_sym_char] = ACTIONS(563),
        [anon_sym_unsafe] = ACTIONS(563),
        [anon_sym_abstract] = ACTIONS(563),
        [anon_sym_sealed] = ACTIONS(563),
        [anon_sym_static] = ACTIONS(563),
        [anon_sym_readonly] = ACTIONS(563),
        [anon_sym_volatile] = ACTIONS(563),
        [anon_sym_bool] = ACTIONS(563),
        [anon_sym_decimal] = ACTIONS(563),
        [anon_sym_double] = ACTIONS(563),
        [anon_sym_float] = ACTIONS(563),
        [anon_sym_object] = ACTIONS(563),
        [anon_sym_string] = ACTIONS(563),
        [sym_identifier_name] = ACTIONS(565),
        [sym_comment] = ACTIONS(87),
    },
    [154] = {
        [sym_identifier_name] = ACTIONS(567),
        [sym_comment] = ACTIONS(87),
    },
    [155] = {
        [sym_type_parameter_list] = STATE(156),
        [anon_sym_LBRACE] = ACTIONS(241),
        [anon_sym_LT] = ACTIONS(217),
        [sym_comment] = ACTIONS(87),
    },
    [156] = {
        [anon_sym_LBRACE] = ACTIONS(569),
        [sym_comment] = ACTIONS(87),
    },
    [157] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(158),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [158] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [159] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_namespace] = ACTIONS(575),
        [anon_sym_RBRACE] = ACTIONS(573),
        [anon_sym_class] = ACTIONS(575),
        [anon_sym_struct] = ACTIONS(575),
        [anon_sym_LBRACK] = ACTIONS(573),
        [anon_sym_enum] = ACTIONS(575),
        [anon_sym_new] = ACTIONS(575),
        [anon_sym_public] = ACTIONS(575),
        [anon_sym_protected] = ACTIONS(575),
        [anon_sym_internal] = ACTIONS(575),
        [anon_sym_private] = ACTIONS(575),
        [anon_sym_sbyte] = ACTIONS(575),
        [anon_sym_byte] = ACTIONS(575),
        [anon_sym_short] = ACTIONS(575),
        [anon_sym_ushort] = ACTIONS(575),
        [anon_sym_int] = ACTIONS(575),
        [anon_sym_uint] = ACTIONS(575),
        [anon_sym_long] = ACTIONS(575),
        [anon_sym_ulong] = ACTIONS(575),
        [anon_sym_char] = ACTIONS(575),
        [anon_sym_unsafe] = ACTIONS(575),
        [anon_sym_abstract] = ACTIONS(575),
        [anon_sym_sealed] = ACTIONS(575),
        [anon_sym_static] = ACTIONS(575),
        [anon_sym_readonly] = ACTIONS(575),
        [anon_sym_volatile] = ACTIONS(575),
        [anon_sym_bool] = ACTIONS(575),
        [anon_sym_decimal] = ACTIONS(575),
        [anon_sym_double] = ACTIONS(575),
        [anon_sym_float] = ACTIONS(575),
        [anon_sym_object] = ACTIONS(575),
        [anon_sym_string] = ACTIONS(575),
        [sym_identifier_name] = ACTIONS(577),
        [sym_comment] = ACTIONS(87),
    },
    [160] = {
        [sym_identifier_name] = ACTIONS(579),
        [sym_comment] = ACTIONS(87),
    },
    [161] = {
        [sym_type_parameter_list] = STATE(162),
        [anon_sym_LBRACE] = ACTIONS(323),
        [anon_sym_LT] = ACTIONS(217),
        [sym_comment] = ACTIONS(87),
    },
    [162] = {
        [anon_sym_LBRACE] = ACTIONS(581),
        [sym_comment] = ACTIONS(87),
    },
    [163] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(164),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(333),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [164] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [165] = {
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_namespace] = ACTIONS(587),
        [anon_sym_RBRACE] = ACTIONS(585),
        [anon_sym_class] = ACTIONS(587),
        [anon_sym_struct] = ACTIONS(587),
        [anon_sym_LBRACK] = ACTIONS(585),
        [anon_sym_enum] = ACTIONS(587),
        [anon_sym_new] = ACTIONS(587),
        [anon_sym_public] = ACTIONS(587),
        [anon_sym_protected] = ACTIONS(587),
        [anon_sym_internal] = ACTIONS(587),
        [anon_sym_private] = ACTIONS(587),
        [anon_sym_sbyte] = ACTIONS(587),
        [anon_sym_byte] = ACTIONS(587),
        [anon_sym_short] = ACTIONS(587),
        [anon_sym_ushort] = ACTIONS(587),
        [anon_sym_int] = ACTIONS(587),
        [anon_sym_uint] = ACTIONS(587),
        [anon_sym_long] = ACTIONS(587),
        [anon_sym_ulong] = ACTIONS(587),
        [anon_sym_char] = ACTIONS(587),
        [anon_sym_unsafe] = ACTIONS(587),
        [anon_sym_abstract] = ACTIONS(587),
        [anon_sym_sealed] = ACTIONS(587),
        [anon_sym_static] = ACTIONS(587),
        [anon_sym_readonly] = ACTIONS(587),
        [anon_sym_volatile] = ACTIONS(587),
        [anon_sym_bool] = ACTIONS(587),
        [anon_sym_decimal] = ACTIONS(587),
        [anon_sym_double] = ACTIONS(587),
        [anon_sym_float] = ACTIONS(587),
        [anon_sym_object] = ACTIONS(587),
        [anon_sym_string] = ACTIONS(587),
        [sym_identifier_name] = ACTIONS(589),
        [sym_comment] = ACTIONS(87),
    },
    [166] = {
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(87),
    },
    [167] = {
        [sym__enum_base] = STATE(168),
        [sym__enum_body] = STATE(131),
        [anon_sym_LBRACE] = ACTIONS(487),
        [anon_sym_COLON] = ACTIONS(489),
        [sym_comment] = ACTIONS(87),
    },
    [168] = {
        [sym__enum_body] = STATE(169),
        [anon_sym_LBRACE] = ACTIONS(487),
        [sym_comment] = ACTIONS(87),
    },
    [169] = {
        [ts_builtin_sym_end] = ACTIONS(511),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_namespace] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(511),
        [anon_sym_class] = ACTIONS(513),
        [anon_sym_struct] = ACTIONS(513),
        [anon_sym_LBRACK] = ACTIONS(511),
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
        [sym_comment] = ACTIONS(87),
    },
    [170] = {
        [ts_builtin_sym_end] = ACTIONS(595),
        [anon_sym_namespace] = ACTIONS(597),
        [anon_sym_RBRACE] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_struct] = ACTIONS(597),
        [anon_sym_LBRACK] = ACTIONS(595),
        [anon_sym_enum] = ACTIONS(597),
        [anon_sym_new] = ACTIONS(597),
        [anon_sym_public] = ACTIONS(597),
        [anon_sym_protected] = ACTIONS(597),
        [anon_sym_internal] = ACTIONS(597),
        [anon_sym_private] = ACTIONS(597),
        [anon_sym_sbyte] = ACTIONS(597),
        [anon_sym_byte] = ACTIONS(597),
        [anon_sym_short] = ACTIONS(597),
        [anon_sym_ushort] = ACTIONS(597),
        [anon_sym_int] = ACTIONS(597),
        [anon_sym_uint] = ACTIONS(597),
        [anon_sym_long] = ACTIONS(597),
        [anon_sym_ulong] = ACTIONS(597),
        [anon_sym_char] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(597),
        [anon_sym_readonly] = ACTIONS(597),
        [anon_sym_volatile] = ACTIONS(597),
        [anon_sym_bool] = ACTIONS(597),
        [anon_sym_decimal] = ACTIONS(597),
        [anon_sym_double] = ACTIONS(597),
        [anon_sym_float] = ACTIONS(597),
        [anon_sym_object] = ACTIONS(597),
        [anon_sym_string] = ACTIONS(597),
        [sym_identifier_name] = ACTIONS(599),
        [sym_comment] = ACTIONS(87),
    },
    [171] = {
        [anon_sym_COMMA] = ACTIONS(601),
        [anon_sym_GT] = ACTIONS(601),
        [sym_identifier_name] = ACTIONS(603),
        [sym_comment] = ACTIONS(87),
    },
    [172] = {
        [anon_sym_COMMA] = ACTIONS(605),
        [anon_sym_GT] = ACTIONS(605),
        [sym_comment] = ACTIONS(87),
    },
    [173] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(176),
        [anon_sym_COMMA] = ACTIONS(607),
        [anon_sym_GT] = ACTIONS(609),
        [sym_comment] = ACTIONS(87),
    },
    [174] = {
        [sym__type] = STATE(172),
        [sym_generic_name] = STATE(59),
        [sym_predefined_type] = STATE(59),
        [sym_type_parameter] = STATE(180),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [175] = {
        [anon_sym_LBRACE] = ACTIONS(611),
        [anon_sym_COMMA] = ACTIONS(611),
        [anon_sym_GT] = ACTIONS(611),
        [sym_identifier_name] = ACTIONS(613),
        [sym_comment] = ACTIONS(87),
    },
    [176] = {
        [anon_sym_COMMA] = ACTIONS(615),
        [anon_sym_GT] = ACTIONS(617),
        [sym_comment] = ACTIONS(87),
    },
    [177] = {
        [sym__type] = STATE(172),
        [sym_generic_name] = STATE(59),
        [sym_predefined_type] = STATE(59),
        [sym_type_parameter] = STATE(179),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [178] = {
        [anon_sym_LBRACE] = ACTIONS(619),
        [anon_sym_COMMA] = ACTIONS(619),
        [anon_sym_GT] = ACTIONS(619),
        [sym_identifier_name] = ACTIONS(621),
        [sym_comment] = ACTIONS(87),
    },
    [179] = {
        [anon_sym_COMMA] = ACTIONS(623),
        [anon_sym_GT] = ACTIONS(623),
        [sym_comment] = ACTIONS(87),
    },
    [180] = {
        [anon_sym_COMMA] = ACTIONS(625),
        [anon_sym_GT] = ACTIONS(625),
        [sym_comment] = ACTIONS(87),
    },
    [181] = {
        [anon_sym_sbyte] = ACTIONS(627),
        [anon_sym_byte] = ACTIONS(627),
        [anon_sym_short] = ACTIONS(627),
        [anon_sym_ushort] = ACTIONS(627),
        [anon_sym_int] = ACTIONS(627),
        [anon_sym_uint] = ACTIONS(627),
        [anon_sym_long] = ACTIONS(627),
        [anon_sym_ulong] = ACTIONS(627),
        [anon_sym_char] = ACTIONS(627),
        [anon_sym_bool] = ACTIONS(627),
        [anon_sym_decimal] = ACTIONS(627),
        [anon_sym_double] = ACTIONS(627),
        [anon_sym_float] = ACTIONS(627),
        [anon_sym_object] = ACTIONS(627),
        [anon_sym_string] = ACTIONS(627),
        [sym_identifier_name] = ACTIONS(629),
        [sym_comment] = ACTIONS(87),
    },
    [182] = {
        [anon_sym_class] = ACTIONS(631),
        [sym_comment] = ACTIONS(87),
    },
    [183] = {
        [anon_sym_struct] = ACTIONS(633),
        [sym_comment] = ACTIONS(87),
    },
    [184] = {
        [sym__enum_base] = STATE(185),
        [sym__enum_body] = STATE(186),
        [anon_sym_LBRACE] = ACTIONS(487),
        [anon_sym_COLON] = ACTIONS(489),
        [sym_comment] = ACTIONS(87),
    },
    [185] = {
        [sym__enum_body] = STATE(129),
        [anon_sym_LBRACE] = ACTIONS(487),
        [sym_comment] = ACTIONS(87),
    },
    [186] = {
        [ts_builtin_sym_end] = ACTIONS(635),
        [anon_sym_SEMI] = ACTIONS(637),
        [anon_sym_namespace] = ACTIONS(639),
        [anon_sym_RBRACE] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(639),
        [anon_sym_struct] = ACTIONS(639),
        [anon_sym_LBRACK] = ACTIONS(635),
        [anon_sym_enum] = ACTIONS(639),
        [anon_sym_new] = ACTIONS(639),
        [anon_sym_public] = ACTIONS(639),
        [anon_sym_protected] = ACTIONS(639),
        [anon_sym_internal] = ACTIONS(639),
        [anon_sym_private] = ACTIONS(639),
        [anon_sym_sbyte] = ACTIONS(639),
        [anon_sym_byte] = ACTIONS(639),
        [anon_sym_short] = ACTIONS(639),
        [anon_sym_ushort] = ACTIONS(639),
        [anon_sym_int] = ACTIONS(639),
        [anon_sym_uint] = ACTIONS(639),
        [anon_sym_long] = ACTIONS(639),
        [anon_sym_ulong] = ACTIONS(639),
        [anon_sym_char] = ACTIONS(639),
        [anon_sym_unsafe] = ACTIONS(639),
        [anon_sym_abstract] = ACTIONS(639),
        [anon_sym_sealed] = ACTIONS(639),
        [anon_sym_static] = ACTIONS(639),
        [anon_sym_readonly] = ACTIONS(639),
        [anon_sym_volatile] = ACTIONS(639),
        [anon_sym_bool] = ACTIONS(639),
        [anon_sym_decimal] = ACTIONS(639),
        [anon_sym_double] = ACTIONS(639),
        [anon_sym_float] = ACTIONS(639),
        [anon_sym_object] = ACTIONS(639),
        [anon_sym_string] = ACTIONS(639),
        [sym_identifier_name] = ACTIONS(641),
        [sym_comment] = ACTIONS(87),
    },
    [187] = {
        [ts_builtin_sym_end] = ACTIONS(495),
        [anon_sym_namespace] = ACTIONS(499),
        [anon_sym_RBRACE] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_struct] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(495),
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
    [188] = {
        [sym_type_parameter_list] = STATE(190),
        [anon_sym_LBRACE] = ACTIONS(643),
        [anon_sym_LT] = ACTIONS(217),
        [sym_comment] = ACTIONS(87),
    },
    [189] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(192),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(645),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [190] = {
        [anon_sym_LBRACE] = ACTIONS(215),
        [sym_comment] = ACTIONS(87),
    },
    [191] = {
        [ts_builtin_sym_end] = ACTIONS(647),
        [anon_sym_namespace] = ACTIONS(649),
        [anon_sym_RBRACE] = ACTIONS(647),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_struct] = ACTIONS(649),
        [anon_sym_LBRACK] = ACTIONS(647),
        [anon_sym_enum] = ACTIONS(649),
        [anon_sym_new] = ACTIONS(649),
        [anon_sym_public] = ACTIONS(649),
        [anon_sym_protected] = ACTIONS(649),
        [anon_sym_internal] = ACTIONS(649),
        [anon_sym_private] = ACTIONS(649),
        [anon_sym_sbyte] = ACTIONS(649),
        [anon_sym_byte] = ACTIONS(649),
        [anon_sym_short] = ACTIONS(649),
        [anon_sym_ushort] = ACTIONS(649),
        [anon_sym_int] = ACTIONS(649),
        [anon_sym_uint] = ACTIONS(649),
        [anon_sym_long] = ACTIONS(649),
        [anon_sym_ulong] = ACTIONS(649),
        [anon_sym_char] = ACTIONS(649),
        [anon_sym_unsafe] = ACTIONS(649),
        [anon_sym_abstract] = ACTIONS(649),
        [anon_sym_sealed] = ACTIONS(649),
        [anon_sym_static] = ACTIONS(649),
        [anon_sym_readonly] = ACTIONS(649),
        [anon_sym_volatile] = ACTIONS(649),
        [anon_sym_bool] = ACTIONS(649),
        [anon_sym_decimal] = ACTIONS(649),
        [anon_sym_double] = ACTIONS(649),
        [anon_sym_float] = ACTIONS(649),
        [anon_sym_object] = ACTIONS(649),
        [anon_sym_string] = ACTIONS(649),
        [sym_identifier_name] = ACTIONS(651),
        [sym_comment] = ACTIONS(87),
    },
    [192] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [193] = {
        [sym_type_parameter_list] = STATE(195),
        [anon_sym_LBRACE] = ACTIONS(653),
        [anon_sym_LT] = ACTIONS(217),
        [sym_comment] = ACTIONS(87),
    },
    [194] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(197),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [195] = {
        [anon_sym_LBRACE] = ACTIONS(319),
        [sym_comment] = ACTIONS(87),
    },
    [196] = {
        [ts_builtin_sym_end] = ACTIONS(657),
        [anon_sym_namespace] = ACTIONS(659),
        [anon_sym_RBRACE] = ACTIONS(657),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_struct] = ACTIONS(659),
        [anon_sym_LBRACK] = ACTIONS(657),
        [anon_sym_enum] = ACTIONS(659),
        [anon_sym_new] = ACTIONS(659),
        [anon_sym_public] = ACTIONS(659),
        [anon_sym_protected] = ACTIONS(659),
        [anon_sym_internal] = ACTIONS(659),
        [anon_sym_private] = ACTIONS(659),
        [anon_sym_sbyte] = ACTIONS(659),
        [anon_sym_byte] = ACTIONS(659),
        [anon_sym_short] = ACTIONS(659),
        [anon_sym_ushort] = ACTIONS(659),
        [anon_sym_int] = ACTIONS(659),
        [anon_sym_uint] = ACTIONS(659),
        [anon_sym_long] = ACTIONS(659),
        [anon_sym_ulong] = ACTIONS(659),
        [anon_sym_char] = ACTIONS(659),
        [anon_sym_unsafe] = ACTIONS(659),
        [anon_sym_abstract] = ACTIONS(659),
        [anon_sym_sealed] = ACTIONS(659),
        [anon_sym_static] = ACTIONS(659),
        [anon_sym_readonly] = ACTIONS(659),
        [anon_sym_volatile] = ACTIONS(659),
        [anon_sym_bool] = ACTIONS(659),
        [anon_sym_decimal] = ACTIONS(659),
        [anon_sym_double] = ACTIONS(659),
        [anon_sym_float] = ACTIONS(659),
        [anon_sym_object] = ACTIONS(659),
        [anon_sym_string] = ACTIONS(659),
        [sym_identifier_name] = ACTIONS(661),
        [sym_comment] = ACTIONS(87),
    },
    [197] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(321),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [198] = {
        [anon_sym_COLON] = ACTIONS(663),
        [sym_comment] = ACTIONS(87),
    },
    [199] = {
        [sym_attribute_list] = STATE(200),
        [sym_attribute] = STATE(29),
        [sym_identifier_name] = ACTIONS(169),
        [sym_comment] = ACTIONS(87),
    },
    [200] = {
        [anon_sym_RBRACK] = ACTIONS(665),
        [sym_comment] = ACTIONS(87),
    },
    [201] = {
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_namespace] = ACTIONS(667),
        [anon_sym_class] = ACTIONS(667),
        [anon_sym_struct] = ACTIONS(667),
        [anon_sym_LBRACK] = ACTIONS(667),
        [anon_sym_enum] = ACTIONS(667),
        [anon_sym_new] = ACTIONS(667),
        [anon_sym_public] = ACTIONS(667),
        [anon_sym_protected] = ACTIONS(667),
        [anon_sym_internal] = ACTIONS(667),
        [anon_sym_private] = ACTIONS(667),
        [anon_sym_unsafe] = ACTIONS(667),
        [anon_sym_abstract] = ACTIONS(667),
        [anon_sym_sealed] = ACTIONS(667),
        [anon_sym_static] = ACTIONS(667),
        [sym_comment] = ACTIONS(87),
    },
    [202] = {
        [sym_identifier_name] = ACTIONS(669),
        [sym_comment] = ACTIONS(87),
    },
    [203] = {
        [anon_sym_COLON_COLON] = ACTIONS(671),
        [sym_comment] = ACTIONS(87),
    },
    [204] = {
        [anon_sym_LBRACE] = ACTIONS(673),
        [anon_sym_DOT] = ACTIONS(675),
        [sym_comment] = ACTIONS(87),
    },
    [205] = {
        [anon_sym_DOT] = ACTIONS(675),
        [sym_comment] = ACTIONS(87),
    },
    [206] = {
        [sym_identifier_name] = ACTIONS(677),
        [sym_comment] = ACTIONS(87),
    },
    [207] = {
        [anon_sym_SEMI] = ACTIONS(679),
        [anon_sym_LBRACE] = ACTIONS(679),
        [anon_sym_DOT] = ACTIONS(679),
        [sym_comment] = ACTIONS(87),
    },
    [208] = {
        [sym__type_declaration] = STATE(210),
        [sym_namespace_declaration] = STATE(210),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(15),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [aux_sym_namespace_declaration_repeat1] = STATE(211),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(681),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(97),
        [anon_sym_LBRACK] = ACTIONS(165),
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
    [209] = {
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
    [210] = {
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
    [211] = {
        [sym__type_declaration] = STATE(213),
        [sym_namespace_declaration] = STATE(213),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(15),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(97),
        [anon_sym_LBRACK] = ACTIONS(165),
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
    [212] = {
        [ts_builtin_sym_end] = ACTIONS(689),
        [anon_sym_namespace] = ACTIONS(689),
        [anon_sym_RBRACE] = ACTIONS(689),
        [anon_sym_class] = ACTIONS(689),
        [anon_sym_struct] = ACTIONS(689),
        [anon_sym_LBRACK] = ACTIONS(689),
        [anon_sym_enum] = ACTIONS(689),
        [anon_sym_new] = ACTIONS(689),
        [anon_sym_public] = ACTIONS(689),
        [anon_sym_protected] = ACTIONS(689),
        [anon_sym_internal] = ACTIONS(689),
        [anon_sym_private] = ACTIONS(689),
        [anon_sym_unsafe] = ACTIONS(689),
        [anon_sym_abstract] = ACTIONS(689),
        [anon_sym_sealed] = ACTIONS(689),
        [anon_sym_static] = ACTIONS(689),
        [sym_comment] = ACTIONS(87),
    },
    [213] = {
        [anon_sym_namespace] = ACTIONS(691),
        [anon_sym_RBRACE] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(691),
        [anon_sym_struct] = ACTIONS(691),
        [anon_sym_LBRACK] = ACTIONS(691),
        [anon_sym_enum] = ACTIONS(691),
        [anon_sym_new] = ACTIONS(691),
        [anon_sym_public] = ACTIONS(691),
        [anon_sym_protected] = ACTIONS(691),
        [anon_sym_internal] = ACTIONS(691),
        [anon_sym_private] = ACTIONS(691),
        [anon_sym_unsafe] = ACTIONS(691),
        [anon_sym_abstract] = ACTIONS(691),
        [anon_sym_sealed] = ACTIONS(691),
        [anon_sym_static] = ACTIONS(691),
        [sym_comment] = ACTIONS(87),
    },
    [214] = {
        [sym_identifier_name] = ACTIONS(693),
        [sym_comment] = ACTIONS(87),
    },
    [215] = {
        [anon_sym_DOT] = ACTIONS(695),
        [sym_comment] = ACTIONS(87),
    },
    [216] = {
        [sym_global] = ACTIONS(697),
        [sym_identifier_name] = ACTIONS(699),
        [sym_comment] = ACTIONS(87),
    },
    [217] = {
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_EQ] = ACTIONS(703),
        [anon_sym_DOT] = ACTIONS(675),
        [sym_comment] = ACTIONS(87),
    },
    [218] = {
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_DOT] = ACTIONS(675),
        [sym_comment] = ACTIONS(87),
    },
    [219] = {
        [sym_qualified_name] = STATE(220),
        [sym_alias_qualified_name] = STATE(205),
        [sym_global] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(705),
        [sym_comment] = ACTIONS(87),
    },
    [220] = {
        [anon_sym_SEMI] = ACTIONS(707),
        [anon_sym_DOT] = ACTIONS(675),
        [sym_comment] = ACTIONS(87),
    },
    [221] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_using] = ACTIONS(709),
        [anon_sym_namespace] = ACTIONS(709),
        [anon_sym_class] = ACTIONS(709),
        [anon_sym_struct] = ACTIONS(709),
        [anon_sym_LBRACK] = ACTIONS(709),
        [anon_sym_enum] = ACTIONS(709),
        [anon_sym_new] = ACTIONS(709),
        [anon_sym_public] = ACTIONS(709),
        [anon_sym_protected] = ACTIONS(709),
        [anon_sym_internal] = ACTIONS(709),
        [anon_sym_private] = ACTIONS(709),
        [anon_sym_unsafe] = ACTIONS(709),
        [anon_sym_abstract] = ACTIONS(709),
        [anon_sym_sealed] = ACTIONS(709),
        [anon_sym_static] = ACTIONS(709),
        [sym_comment] = ACTIONS(87),
    },
    [222] = {
        [ts_builtin_sym_end] = ACTIONS(711),
        [anon_sym_using] = ACTIONS(711),
        [anon_sym_namespace] = ACTIONS(711),
        [anon_sym_class] = ACTIONS(711),
        [anon_sym_struct] = ACTIONS(711),
        [anon_sym_LBRACK] = ACTIONS(711),
        [anon_sym_enum] = ACTIONS(711),
        [anon_sym_new] = ACTIONS(711),
        [anon_sym_public] = ACTIONS(711),
        [anon_sym_protected] = ACTIONS(711),
        [anon_sym_internal] = ACTIONS(711),
        [anon_sym_private] = ACTIONS(711),
        [anon_sym_unsafe] = ACTIONS(711),
        [anon_sym_abstract] = ACTIONS(711),
        [anon_sym_sealed] = ACTIONS(711),
        [anon_sym_static] = ACTIONS(711),
        [sym_comment] = ACTIONS(87),
    },
    [223] = {
        [sym_global] = ACTIONS(713),
        [sym_identifier_name] = ACTIONS(715),
        [sym_comment] = ACTIONS(87),
    },
    [224] = {
        [ts_builtin_sym_end] = ACTIONS(717),
        [anon_sym_using] = ACTIONS(724),
        [anon_sym_namespace] = ACTIONS(727),
        [anon_sym_RBRACE] = ACTIONS(734),
        [anon_sym_class] = ACTIONS(742),
        [anon_sym_struct] = ACTIONS(742),
        [anon_sym_LBRACK] = ACTIONS(752),
        [anon_sym_enum] = ACTIONS(742),
        [anon_sym_new] = ACTIONS(742),
        [anon_sym_public] = ACTIONS(742),
        [anon_sym_protected] = ACTIONS(742),
        [anon_sym_internal] = ACTIONS(742),
        [anon_sym_private] = ACTIONS(742),
        [anon_sym_sbyte] = ACTIONS(762),
        [anon_sym_byte] = ACTIONS(762),
        [anon_sym_short] = ACTIONS(762),
        [anon_sym_ushort] = ACTIONS(762),
        [anon_sym_int] = ACTIONS(762),
        [anon_sym_uint] = ACTIONS(762),
        [anon_sym_long] = ACTIONS(762),
        [anon_sym_ulong] = ACTIONS(762),
        [anon_sym_char] = ACTIONS(762),
        [anon_sym_unsafe] = ACTIONS(742),
        [anon_sym_abstract] = ACTIONS(742),
        [anon_sym_sealed] = ACTIONS(742),
        [anon_sym_static] = ACTIONS(742),
        [anon_sym_readonly] = ACTIONS(762),
        [anon_sym_volatile] = ACTIONS(762),
        [anon_sym_bool] = ACTIONS(762),
        [anon_sym_decimal] = ACTIONS(762),
        [anon_sym_double] = ACTIONS(762),
        [anon_sym_float] = ACTIONS(762),
        [anon_sym_object] = ACTIONS(762),
        [anon_sym_string] = ACTIONS(762),
        [sym_identifier_name] = ACTIONS(770),
        [sym_comment] = ACTIONS(87),
    },
    [225] = {
        [sym__type_declaration] = STATE(319),
        [sym_namespace_declaration] = STATE(210),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(249),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_member_declaration] = STATE(137),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_namespace_declaration_repeat1] = STATE(211),
        [aux_sym_class_declaration_repeat1] = STATE(273),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_namespace] = ACTIONS(778),
        [anon_sym_RBRACE] = ACTIONS(780),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(782),
        [sym_comment] = ACTIONS(87),
    },
    [226] = {
        [ts_builtin_sym_end] = ACTIONS(784),
        [anon_sym_SEMI] = ACTIONS(799),
        [anon_sym_namespace] = ACTIONS(802),
        [anon_sym_RBRACE] = ACTIONS(784),
        [anon_sym_class] = ACTIONS(802),
        [anon_sym_struct] = ACTIONS(802),
        [anon_sym_LBRACK] = ACTIONS(784),
        [anon_sym_enum] = ACTIONS(802),
        [anon_sym_new] = ACTIONS(802),
        [anon_sym_public] = ACTIONS(802),
        [anon_sym_protected] = ACTIONS(802),
        [anon_sym_internal] = ACTIONS(802),
        [anon_sym_private] = ACTIONS(802),
        [anon_sym_sbyte] = ACTIONS(817),
        [anon_sym_byte] = ACTIONS(817),
        [anon_sym_short] = ACTIONS(817),
        [anon_sym_ushort] = ACTIONS(817),
        [anon_sym_int] = ACTIONS(817),
        [anon_sym_uint] = ACTIONS(817),
        [anon_sym_long] = ACTIONS(817),
        [anon_sym_ulong] = ACTIONS(817),
        [anon_sym_char] = ACTIONS(817),
        [anon_sym_unsafe] = ACTIONS(802),
        [anon_sym_abstract] = ACTIONS(802),
        [anon_sym_sealed] = ACTIONS(802),
        [anon_sym_static] = ACTIONS(802),
        [anon_sym_readonly] = ACTIONS(817),
        [anon_sym_volatile] = ACTIONS(817),
        [anon_sym_bool] = ACTIONS(817),
        [anon_sym_decimal] = ACTIONS(817),
        [anon_sym_double] = ACTIONS(817),
        [anon_sym_float] = ACTIONS(817),
        [anon_sym_object] = ACTIONS(817),
        [anon_sym_string] = ACTIONS(817),
        [sym_identifier_name] = ACTIONS(830),
        [sym_comment] = ACTIONS(87),
    },
    [227] = {
        [sym_identifier_name] = ACTIONS(843),
        [sym_comment] = ACTIONS(87),
    },
    [228] = {
        [sym_identifier_name] = ACTIONS(845),
        [sym_comment] = ACTIONS(87),
    },
    [229] = {
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_namespace] = ACTIONS(847),
        [anon_sym_class] = ACTIONS(849),
        [anon_sym_struct] = ACTIONS(849),
        [anon_sym_LBRACK] = ACTIONS(852),
        [anon_sym_enum] = ACTIONS(849),
        [anon_sym_new] = ACTIONS(849),
        [anon_sym_public] = ACTIONS(849),
        [anon_sym_protected] = ACTIONS(849),
        [anon_sym_internal] = ACTIONS(849),
        [anon_sym_private] = ACTIONS(849),
        [anon_sym_sbyte] = ACTIONS(195),
        [anon_sym_byte] = ACTIONS(195),
        [anon_sym_short] = ACTIONS(195),
        [anon_sym_ushort] = ACTIONS(195),
        [anon_sym_int] = ACTIONS(195),
        [anon_sym_uint] = ACTIONS(195),
        [anon_sym_long] = ACTIONS(195),
        [anon_sym_ulong] = ACTIONS(195),
        [anon_sym_char] = ACTIONS(195),
        [anon_sym_unsafe] = ACTIONS(849),
        [anon_sym_abstract] = ACTIONS(849),
        [anon_sym_sealed] = ACTIONS(849),
        [anon_sym_static] = ACTIONS(849),
        [anon_sym_readonly] = ACTIONS(195),
        [anon_sym_volatile] = ACTIONS(195),
        [anon_sym_bool] = ACTIONS(195),
        [anon_sym_decimal] = ACTIONS(195),
        [anon_sym_double] = ACTIONS(195),
        [anon_sym_float] = ACTIONS(195),
        [anon_sym_object] = ACTIONS(195),
        [anon_sym_string] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(199),
        [sym_comment] = ACTIONS(87),
    },
    [230] = {
        [sym__integral_type] = STATE(134),
        [anon_sym_sbyte] = ACTIONS(855),
        [anon_sym_byte] = ACTIONS(855),
        [anon_sym_short] = ACTIONS(855),
        [anon_sym_ushort] = ACTIONS(855),
        [anon_sym_int] = ACTIONS(855),
        [anon_sym_uint] = ACTIONS(855),
        [anon_sym_long] = ACTIONS(855),
        [anon_sym_ulong] = ACTIONS(855),
        [anon_sym_char] = ACTIONS(855),
        [sym_identifier_name] = ACTIONS(857),
        [sym_comment] = ACTIONS(87),
    },
    [231] = {
        [sym_identifier_name] = ACTIONS(859),
        [sym_comment] = ACTIONS(87),
    },
    [232] = {
        [sym__attributes] = STATE(136),
        [sym_enum_member_declaration] = STATE(328),
        [sym__attribute_section] = STATE(17),
        [sym_attribute] = STATE(329),
        [sym__type] = STATE(172),
        [sym_generic_name] = STATE(59),
        [sym_variable_declarator] = STATE(330),
        [sym_predefined_type] = STATE(59),
        [sym_type_parameter] = STATE(331),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(861),
        [sym_comment] = ACTIONS(87),
    },
    [233] = {
        [anon_sym_LBRACE] = ACTIONS(517),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_GT] = ACTIONS(261),
        [sym_identifier_name] = ACTIONS(263),
        [sym_comment] = ACTIONS(87),
    },
    [234] = {
        [sym__literal] = STATE(96),
        [sym_boolean_literal] = STATE(92),
        [sym_character_literal] = STATE(92),
        [sym_integer_literal] = STATE(92),
        [sym_real_literal] = STATE(92),
        [sym_string_literal] = STATE(92),
        [sym__regular_string_literal] = STATE(97),
        [sym__verbatim_string_literal] = STATE(97),
        [anon_sym_true] = ACTIONS(863),
        [anon_sym_false] = ACTIONS(863),
        [anon_sym_SQUOTE] = ACTIONS(365),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(367),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(369),
        [sym_null_literal] = ACTIONS(865),
        [anon_sym_DOT] = ACTIONS(373),
        [anon_sym_DQUOTE] = ACTIONS(375),
        [anon_sym_AT_DQUOTE] = ACTIONS(377),
        [sym_global] = ACTIONS(713),
        [sym_identifier_name] = ACTIONS(715),
        [sym_comment] = ACTIONS(87),
    },
    [235] = {
        [sym__unicode_escape_sequence] = STATE(119),
        [sym__simple_escape_sequence] = STATE(119),
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_RBRACE] = ACTIONS(477),
        [anon_sym_COMMA] = ACTIONS(477),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(867),
        [sym__hexadecimal_escape_sequence] = ACTIONS(383),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(385),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(385),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(387),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(387),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(387),
        [anon_sym_BSLASH0] = ACTIONS(387),
        [anon_sym_BSLASHa] = ACTIONS(387),
        [anon_sym_BSLASHb] = ACTIONS(387),
        [anon_sym_BSLASHf] = ACTIONS(387),
        [anon_sym_BSLASHn] = ACTIONS(387),
        [anon_sym_BSLASHr] = ACTIONS(387),
        [anon_sym_BSLASHt] = ACTIONS(387),
        [anon_sym_BSLASHv] = ACTIONS(387),
        [sym_comment] = ACTIONS(87),
    },
    [236] = {
        [anon_sym_SQUOTE] = ACTIONS(475),
        [sym__hexadecimal_escape_sequence] = ACTIONS(423),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(425),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(425),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(425),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(425),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(425),
        [anon_sym_BSLASH0] = ACTIONS(425),
        [anon_sym_BSLASHa] = ACTIONS(425),
        [anon_sym_BSLASHb] = ACTIONS(425),
        [anon_sym_BSLASHf] = ACTIONS(425),
        [anon_sym_BSLASHn] = ACTIONS(425),
        [anon_sym_BSLASHr] = ACTIONS(425),
        [anon_sym_BSLASHt] = ACTIONS(425),
        [anon_sym_BSLASHv] = ACTIONS(425),
        [anon_sym_DQUOTE] = ACTIONS(425),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(869),
        [sym_comment] = ACTIONS(87),
    },
    [237] = {
        [anon_sym_SEMI] = ACTIONS(871),
        [anon_sym_RBRACE] = ACTIONS(871),
        [anon_sym_COMMA] = ACTIONS(871),
        [sym__integer_type_suffix] = ACTIONS(391),
        [anon_sym_DOT] = ACTIONS(393),
        [sym__real_type_suffix] = ACTIONS(875),
        [sym__exponent_part] = ACTIONS(877),
        [sym_comment] = ACTIONS(87),
    },
    [238] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(879),
        [sym_identifier_name] = ACTIONS(677),
        [sym_comment] = ACTIONS(87),
    },
    [239] = {
        [anon_sym_SEMI] = ACTIONS(881),
        [anon_sym_RBRACE] = ACTIONS(881),
        [anon_sym_COMMA] = ACTIONS(881),
        [sym_comment] = ACTIONS(87),
    },
    [240] = {
        [anon_sym_SEMI] = ACTIONS(886),
        [anon_sym_RBRACE] = ACTIONS(886),
        [anon_sym_COMMA] = ACTIONS(886),
        [sym__real_type_suffix] = ACTIONS(890),
        [sym_comment] = ACTIONS(87),
    },
    [241] = {
        [sym__unicode_escape_sequence] = STATE(100),
        [sym__simple_escape_sequence] = STATE(100),
        [sym__regular_string_literal_character] = STATE(104),
        [aux_sym__regular_string_literal_repeat1] = STATE(105),
        [anon_sym_SEMI] = ACTIONS(892),
        [anon_sym_RBRACE] = ACTIONS(892),
        [anon_sym_COMMA] = ACTIONS(892),
        [sym__hexadecimal_escape_sequence] = ACTIONS(403),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(405),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(405),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(407),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(407),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(407),
        [anon_sym_BSLASH0] = ACTIONS(407),
        [anon_sym_BSLASHa] = ACTIONS(407),
        [anon_sym_BSLASHb] = ACTIONS(407),
        [anon_sym_BSLASHf] = ACTIONS(407),
        [anon_sym_BSLASHn] = ACTIONS(407),
        [anon_sym_BSLASHr] = ACTIONS(407),
        [anon_sym_BSLASHt] = ACTIONS(407),
        [anon_sym_BSLASHv] = ACTIONS(407),
        [anon_sym_DQUOTE] = ACTIONS(409),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(896),
        [sym_comment] = ACTIONS(87),
    },
    [242] = {
        [sym__class_modifiers] = STATE(182),
        [sym__field_modifiers] = STATE(181),
        [anon_sym_class] = ACTIONS(251),
        [anon_sym_new] = ACTIONS(235),
        [anon_sym_public] = ACTIONS(235),
        [anon_sym_protected] = ACTIONS(235),
        [anon_sym_internal] = ACTIONS(235),
        [anon_sym_private] = ACTIONS(235),
        [anon_sym_sbyte] = ACTIONS(257),
        [anon_sym_byte] = ACTIONS(257),
        [anon_sym_short] = ACTIONS(257),
        [anon_sym_ushort] = ACTIONS(257),
        [anon_sym_int] = ACTIONS(257),
        [anon_sym_uint] = ACTIONS(257),
        [anon_sym_long] = ACTIONS(257),
        [anon_sym_ulong] = ACTIONS(257),
        [anon_sym_char] = ACTIONS(257),
        [anon_sym_unsafe] = ACTIONS(235),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(257),
        [anon_sym_decimal] = ACTIONS(257),
        [anon_sym_double] = ACTIONS(257),
        [anon_sym_float] = ACTIONS(257),
        [anon_sym_object] = ACTIONS(257),
        [anon_sym_string] = ACTIONS(257),
        [sym_global] = ACTIONS(697),
        [sym_identifier_name] = ACTIONS(898),
        [sym_comment] = ACTIONS(87),
    },
    [243] = {
        [anon_sym_LBRACE] = ACTIONS(901),
        [anon_sym_COMMA] = ACTIONS(901),
        [anon_sym_GT] = ACTIONS(901),
        [sym_identifier_name] = ACTIONS(904),
        [sym_comment] = ACTIONS(87),
    },
    [244] = {
        [sym__enum_base] = STATE(250),
        [sym__enum_body] = STATE(315),
        [sym_attribute_argument_list] = STATE(37),
        [sym_equals_value_clause] = STATE(261),
        [sym_type_parameter_list] = STATE(269),
        [anon_sym_SEMI] = ACTIONS(907),
        [anon_sym_LBRACE] = ACTIONS(911),
        [anon_sym_RBRACE] = ACTIONS(914),
        [anon_sym_RBRACK] = ACTIONS(177),
        [anon_sym_COLON] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(917),
        [anon_sym_LPAREN] = ACTIONS(179),
        [anon_sym_EQ] = ACTIONS(923),
        [anon_sym_DOT] = ACTIONS(925),
        [anon_sym_LT] = ACTIONS(217),
        [anon_sym_GT] = ACTIONS(265),
        [sym_identifier_name] = ACTIONS(267),
        [sym_comment] = ACTIONS(87),
    },
    [245] = {
        [ts_builtin_sym_end] = ACTIONS(929),
        [anon_sym_using] = ACTIONS(929),
        [anon_sym_namespace] = ACTIONS(929),
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
        [ts_builtin_sym_end] = ACTIONS(932),
        [anon_sym_namespace] = ACTIONS(935),
        [anon_sym_RBRACE] = ACTIONS(940),
        [anon_sym_class] = ACTIONS(945),
        [anon_sym_struct] = ACTIONS(945),
        [anon_sym_LBRACK] = ACTIONS(952),
        [anon_sym_enum] = ACTIONS(945),
        [anon_sym_new] = ACTIONS(945),
        [anon_sym_public] = ACTIONS(945),
        [anon_sym_protected] = ACTIONS(945),
        [anon_sym_internal] = ACTIONS(945),
        [anon_sym_private] = ACTIONS(945),
        [anon_sym_sbyte] = ACTIONS(959),
        [anon_sym_byte] = ACTIONS(959),
        [anon_sym_short] = ACTIONS(959),
        [anon_sym_ushort] = ACTIONS(959),
        [anon_sym_int] = ACTIONS(959),
        [anon_sym_uint] = ACTIONS(959),
        [anon_sym_long] = ACTIONS(959),
        [anon_sym_ulong] = ACTIONS(959),
        [anon_sym_char] = ACTIONS(959),
        [anon_sym_unsafe] = ACTIONS(945),
        [anon_sym_abstract] = ACTIONS(945),
        [anon_sym_sealed] = ACTIONS(945),
        [anon_sym_static] = ACTIONS(945),
        [anon_sym_readonly] = ACTIONS(959),
        [anon_sym_volatile] = ACTIONS(959),
        [anon_sym_bool] = ACTIONS(959),
        [anon_sym_decimal] = ACTIONS(959),
        [anon_sym_double] = ACTIONS(959),
        [anon_sym_float] = ACTIONS(959),
        [anon_sym_object] = ACTIONS(959),
        [anon_sym_string] = ACTIONS(959),
        [sym_identifier_name] = ACTIONS(962),
        [sym_comment] = ACTIONS(87),
    },
    [247] = {
        [ts_builtin_sym_end] = ACTIONS(932),
        [anon_sym_namespace] = ACTIONS(965),
        [anon_sym_RBRACE] = ACTIONS(970),
        [anon_sym_class] = ACTIONS(965),
        [anon_sym_struct] = ACTIONS(965),
        [anon_sym_LBRACK] = ACTIONS(965),
        [anon_sym_enum] = ACTIONS(965),
        [anon_sym_new] = ACTIONS(965),
        [anon_sym_public] = ACTIONS(965),
        [anon_sym_protected] = ACTIONS(965),
        [anon_sym_internal] = ACTIONS(965),
        [anon_sym_private] = ACTIONS(965),
        [anon_sym_unsafe] = ACTIONS(965),
        [anon_sym_abstract] = ACTIONS(965),
        [anon_sym_sealed] = ACTIONS(965),
        [anon_sym_static] = ACTIONS(965),
        [sym_comment] = ACTIONS(87),
    },
    [248] = {
        [ts_builtin_sym_end] = ACTIONS(932),
        [anon_sym_namespace] = ACTIONS(932),
        [anon_sym_class] = ACTIONS(932),
        [anon_sym_struct] = ACTIONS(932),
        [anon_sym_LBRACK] = ACTIONS(932),
        [anon_sym_enum] = ACTIONS(932),
        [anon_sym_new] = ACTIONS(932),
        [anon_sym_public] = ACTIONS(932),
        [anon_sym_protected] = ACTIONS(932),
        [anon_sym_internal] = ACTIONS(932),
        [anon_sym_private] = ACTIONS(932),
        [anon_sym_unsafe] = ACTIONS(932),
        [anon_sym_abstract] = ACTIONS(932),
        [anon_sym_sealed] = ACTIONS(932),
        [anon_sym_static] = ACTIONS(932),
        [sym_comment] = ACTIONS(87),
    },
    [249] = {
        [sym_enum_modifier] = STATE(148),
        [sym_variable_declaration] = STATE(65),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(149),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(150),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(151),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [anon_sym_class] = ACTIONS(275),
        [anon_sym_struct] = ACTIONS(277),
        [anon_sym_enum] = ACTIONS(279),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(973),
        [sym_comment] = ACTIONS(87),
    },
    [250] = {
        [sym__enum_body] = STATE(311),
        [anon_sym_LBRACE] = ACTIONS(487),
        [sym_comment] = ACTIONS(87),
    },
    [251] = {
        [ts_builtin_sym_end] = ACTIONS(975),
        [anon_sym_SEMI] = ACTIONS(980),
        [anon_sym_namespace] = ACTIONS(982),
        [anon_sym_RBRACE] = ACTIONS(975),
        [anon_sym_class] = ACTIONS(982),
        [anon_sym_struct] = ACTIONS(982),
        [anon_sym_LBRACK] = ACTIONS(975),
        [anon_sym_enum] = ACTIONS(982),
        [anon_sym_new] = ACTIONS(982),
        [anon_sym_public] = ACTIONS(982),
        [anon_sym_protected] = ACTIONS(982),
        [anon_sym_internal] = ACTIONS(982),
        [anon_sym_private] = ACTIONS(982),
        [anon_sym_sbyte] = ACTIONS(982),
        [anon_sym_byte] = ACTIONS(982),
        [anon_sym_short] = ACTIONS(982),
        [anon_sym_ushort] = ACTIONS(982),
        [anon_sym_int] = ACTIONS(982),
        [anon_sym_uint] = ACTIONS(982),
        [anon_sym_long] = ACTIONS(982),
        [anon_sym_ulong] = ACTIONS(982),
        [anon_sym_char] = ACTIONS(982),
        [anon_sym_unsafe] = ACTIONS(982),
        [anon_sym_abstract] = ACTIONS(982),
        [anon_sym_sealed] = ACTIONS(982),
        [anon_sym_static] = ACTIONS(982),
        [anon_sym_readonly] = ACTIONS(982),
        [anon_sym_volatile] = ACTIONS(982),
        [anon_sym_bool] = ACTIONS(982),
        [anon_sym_decimal] = ACTIONS(982),
        [anon_sym_double] = ACTIONS(982),
        [anon_sym_float] = ACTIONS(982),
        [anon_sym_object] = ACTIONS(982),
        [anon_sym_string] = ACTIONS(982),
        [sym_identifier_name] = ACTIONS(987),
        [sym_comment] = ACTIONS(87),
    },
    [252] = {
        [aux_sym__enum_body_repeat1] = STATE(140),
        [anon_sym_RBRACE] = ACTIONS(992),
        [anon_sym_COMMA] = ACTIONS(996),
        [sym_comment] = ACTIONS(87),
    },
    [253] = {
        [anon_sym_enum] = ACTIONS(1000),
        [sym_comment] = ACTIONS(87),
    },
    [254] = {
        [anon_sym_class] = ACTIONS(1002),
        [anon_sym_struct] = ACTIONS(1002),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_enum] = ACTIONS(1002),
        [anon_sym_new] = ACTIONS(1002),
        [anon_sym_public] = ACTIONS(1002),
        [anon_sym_protected] = ACTIONS(1002),
        [anon_sym_internal] = ACTIONS(1002),
        [anon_sym_private] = ACTIONS(1002),
        [anon_sym_sbyte] = ACTIONS(1002),
        [anon_sym_byte] = ACTIONS(1002),
        [anon_sym_short] = ACTIONS(1002),
        [anon_sym_ushort] = ACTIONS(1002),
        [anon_sym_int] = ACTIONS(1002),
        [anon_sym_uint] = ACTIONS(1002),
        [anon_sym_long] = ACTIONS(1002),
        [anon_sym_ulong] = ACTIONS(1002),
        [anon_sym_char] = ACTIONS(1002),
        [anon_sym_unsafe] = ACTIONS(1002),
        [anon_sym_abstract] = ACTIONS(1002),
        [anon_sym_sealed] = ACTIONS(1002),
        [anon_sym_static] = ACTIONS(1002),
        [anon_sym_readonly] = ACTIONS(1002),
        [anon_sym_volatile] = ACTIONS(1002),
        [anon_sym_bool] = ACTIONS(1002),
        [anon_sym_decimal] = ACTIONS(1002),
        [anon_sym_double] = ACTIONS(1002),
        [anon_sym_float] = ACTIONS(1002),
        [anon_sym_object] = ACTIONS(1002),
        [anon_sym_string] = ACTIONS(1002),
        [sym_identifier_name] = ACTIONS(1008),
        [sym_comment] = ACTIONS(87),
    },
    [255] = {
        [anon_sym_RBRACK] = ACTIONS(1011),
        [sym_comment] = ACTIONS(87),
    },
    [256] = {
        [aux_sym_attribute_list_repeat1] = STATE(31),
        [anon_sym_RBRACK] = ACTIONS(1013),
        [anon_sym_COMMA] = ACTIONS(1017),
        [sym_comment] = ACTIONS(87),
    },
    [257] = {
        [anon_sym_RBRACE] = ACTIONS(1021),
        [anon_sym_class] = ACTIONS(959),
        [anon_sym_struct] = ACTIONS(959),
        [anon_sym_LBRACK] = ACTIONS(1021),
        [anon_sym_enum] = ACTIONS(959),
        [anon_sym_new] = ACTIONS(959),
        [anon_sym_public] = ACTIONS(959),
        [anon_sym_protected] = ACTIONS(959),
        [anon_sym_internal] = ACTIONS(959),
        [anon_sym_private] = ACTIONS(959),
        [anon_sym_sbyte] = ACTIONS(959),
        [anon_sym_byte] = ACTIONS(959),
        [anon_sym_short] = ACTIONS(959),
        [anon_sym_ushort] = ACTIONS(959),
        [anon_sym_int] = ACTIONS(959),
        [anon_sym_uint] = ACTIONS(959),
        [anon_sym_long] = ACTIONS(959),
        [anon_sym_ulong] = ACTIONS(959),
        [anon_sym_char] = ACTIONS(959),
        [anon_sym_unsafe] = ACTIONS(959),
        [anon_sym_abstract] = ACTIONS(959),
        [anon_sym_sealed] = ACTIONS(959),
        [anon_sym_static] = ACTIONS(959),
        [anon_sym_readonly] = ACTIONS(959),
        [anon_sym_volatile] = ACTIONS(959),
        [anon_sym_bool] = ACTIONS(959),
        [anon_sym_decimal] = ACTIONS(959),
        [anon_sym_double] = ACTIONS(959),
        [anon_sym_float] = ACTIONS(959),
        [anon_sym_object] = ACTIONS(959),
        [anon_sym_string] = ACTIONS(959),
        [sym_identifier_name] = ACTIONS(962),
        [sym_comment] = ACTIONS(87),
    },
    [258] = {
        [anon_sym_SEMI] = ACTIONS(1024),
        [sym_comment] = ACTIONS(87),
    },
    [259] = {
        [sym_variable_declarator] = STATE(80),
        [anon_sym_COMMA] = ACTIONS(605),
        [anon_sym_GT] = ACTIONS(605),
        [sym_identifier_name] = ACTIONS(283),
        [sym_comment] = ACTIONS(87),
    },
    [260] = {
        [aux_sym_variable_declaration_repeat1] = STATE(82),
        [anon_sym_SEMI] = ACTIONS(1026),
        [anon_sym_COMMA] = ACTIONS(1030),
        [sym_comment] = ACTIONS(87),
    },
    [261] = {
        [anon_sym_SEMI] = ACTIONS(379),
        [anon_sym_RBRACE] = ACTIONS(1034),
        [anon_sym_COMMA] = ACTIONS(1037),
        [sym_comment] = ACTIONS(87),
    },
    [262] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(1041),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1044),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1044),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(1044),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(1044),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(1044),
        [anon_sym_BSLASH0] = ACTIONS(1044),
        [anon_sym_BSLASHa] = ACTIONS(1044),
        [anon_sym_BSLASHb] = ACTIONS(1044),
        [anon_sym_BSLASHf] = ACTIONS(1044),
        [anon_sym_BSLASHn] = ACTIONS(1044),
        [anon_sym_BSLASHr] = ACTIONS(1044),
        [anon_sym_BSLASHt] = ACTIONS(1044),
        [anon_sym_BSLASHv] = ACTIONS(1044),
        [anon_sym_DQUOTE] = ACTIONS(1044),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1041),
        [sym_comment] = ACTIONS(87),
    },
    [263] = {
        [anon_sym_class] = ACTIONS(1047),
        [sym_comment] = ACTIONS(87),
    },
    [264] = {
        [anon_sym_class] = ACTIONS(1049),
        [sym_comment] = ACTIONS(87),
    },
    [265] = {
        [anon_sym_struct] = ACTIONS(1052),
        [sym_comment] = ACTIONS(87),
    },
    [266] = {
        [anon_sym_struct] = ACTIONS(1054),
        [sym_comment] = ACTIONS(87),
    },
    [267] = {
        [sym_variable_declaration] = STATE(280),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_predefined_type] = STATE(59),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [268] = {
        [anon_sym_sbyte] = ACTIONS(1057),
        [anon_sym_byte] = ACTIONS(1057),
        [anon_sym_short] = ACTIONS(1057),
        [anon_sym_ushort] = ACTIONS(1057),
        [anon_sym_int] = ACTIONS(1057),
        [anon_sym_uint] = ACTIONS(1057),
        [anon_sym_long] = ACTIONS(1057),
        [anon_sym_ulong] = ACTIONS(1057),
        [anon_sym_char] = ACTIONS(1057),
        [anon_sym_bool] = ACTIONS(1057),
        [anon_sym_decimal] = ACTIONS(1057),
        [anon_sym_double] = ACTIONS(1057),
        [anon_sym_float] = ACTIONS(1057),
        [anon_sym_object] = ACTIONS(1057),
        [anon_sym_string] = ACTIONS(1057),
        [sym_identifier_name] = ACTIONS(1060),
        [sym_comment] = ACTIONS(87),
    },
    [269] = {
        [anon_sym_LBRACE] = ACTIONS(1063),
        [anon_sym_COMMA] = ACTIONS(601),
        [anon_sym_GT] = ACTIONS(601),
        [sym_identifier_name] = ACTIONS(603),
        [sym_comment] = ACTIONS(87),
    },
    [270] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(176),
        [anon_sym_COMMA] = ACTIONS(1065),
        [anon_sym_GT] = ACTIONS(1069),
        [sym_comment] = ACTIONS(87),
    },
    [271] = {
        [anon_sym_SEMI] = ACTIONS(1073),
        [anon_sym_LBRACE] = ACTIONS(673),
        [anon_sym_DOT] = ACTIONS(675),
        [sym_comment] = ACTIONS(87),
    },
    [272] = {
        [sym__type_declaration] = STATE(39),
        [sym_namespace_declaration] = STATE(39),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__global_attributes] = STATE(39),
        [sym__attributes] = STATE(15),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [aux_sym__attributes_repeat1] = STATE(24),
        [ts_builtin_sym_end] = ACTIONS(1075),
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
    [273] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1078),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [274] = {
        [ts_builtin_sym_end] = ACTIONS(1080),
        [anon_sym_namespace] = ACTIONS(1089),
        [anon_sym_RBRACE] = ACTIONS(1080),
        [anon_sym_class] = ACTIONS(1089),
        [anon_sym_struct] = ACTIONS(1089),
        [anon_sym_LBRACK] = ACTIONS(1080),
        [anon_sym_enum] = ACTIONS(1089),
        [anon_sym_new] = ACTIONS(1089),
        [anon_sym_public] = ACTIONS(1089),
        [anon_sym_protected] = ACTIONS(1089),
        [anon_sym_internal] = ACTIONS(1089),
        [anon_sym_private] = ACTIONS(1089),
        [anon_sym_sbyte] = ACTIONS(1089),
        [anon_sym_byte] = ACTIONS(1089),
        [anon_sym_short] = ACTIONS(1089),
        [anon_sym_ushort] = ACTIONS(1089),
        [anon_sym_int] = ACTIONS(1089),
        [anon_sym_uint] = ACTIONS(1089),
        [anon_sym_long] = ACTIONS(1089),
        [anon_sym_ulong] = ACTIONS(1089),
        [anon_sym_char] = ACTIONS(1089),
        [anon_sym_unsafe] = ACTIONS(1089),
        [anon_sym_abstract] = ACTIONS(1089),
        [anon_sym_sealed] = ACTIONS(1089),
        [anon_sym_static] = ACTIONS(1089),
        [anon_sym_readonly] = ACTIONS(1089),
        [anon_sym_volatile] = ACTIONS(1089),
        [anon_sym_bool] = ACTIONS(1089),
        [anon_sym_decimal] = ACTIONS(1089),
        [anon_sym_double] = ACTIONS(1089),
        [anon_sym_float] = ACTIONS(1089),
        [anon_sym_object] = ACTIONS(1089),
        [anon_sym_string] = ACTIONS(1089),
        [sym_identifier_name] = ACTIONS(1098),
        [sym_comment] = ACTIONS(87),
    },
    [275] = {
        [ts_builtin_sym_end] = ACTIONS(1107),
        [anon_sym_using] = ACTIONS(1107),
        [anon_sym_namespace] = ACTIONS(1107),
        [anon_sym_class] = ACTIONS(1107),
        [anon_sym_struct] = ACTIONS(1107),
        [anon_sym_LBRACK] = ACTIONS(1107),
        [anon_sym_enum] = ACTIONS(1107),
        [anon_sym_new] = ACTIONS(1107),
        [anon_sym_public] = ACTIONS(1107),
        [anon_sym_protected] = ACTIONS(1107),
        [anon_sym_internal] = ACTIONS(1107),
        [anon_sym_private] = ACTIONS(1107),
        [anon_sym_unsafe] = ACTIONS(1107),
        [anon_sym_abstract] = ACTIONS(1107),
        [anon_sym_sealed] = ACTIONS(1107),
        [anon_sym_static] = ACTIONS(1107),
        [sym_comment] = ACTIONS(87),
    },
    [276] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(278),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1110),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [277] = {
        [ts_builtin_sym_end] = ACTIONS(1112),
        [anon_sym_namespace] = ACTIONS(1119),
        [anon_sym_RBRACE] = ACTIONS(1112),
        [anon_sym_class] = ACTIONS(1119),
        [anon_sym_struct] = ACTIONS(1119),
        [anon_sym_LBRACK] = ACTIONS(1112),
        [anon_sym_enum] = ACTIONS(1119),
        [anon_sym_new] = ACTIONS(1119),
        [anon_sym_public] = ACTIONS(1119),
        [anon_sym_protected] = ACTIONS(1119),
        [anon_sym_internal] = ACTIONS(1119),
        [anon_sym_private] = ACTIONS(1119),
        [anon_sym_sbyte] = ACTIONS(1119),
        [anon_sym_byte] = ACTIONS(1119),
        [anon_sym_short] = ACTIONS(1119),
        [anon_sym_ushort] = ACTIONS(1119),
        [anon_sym_int] = ACTIONS(1119),
        [anon_sym_uint] = ACTIONS(1119),
        [anon_sym_long] = ACTIONS(1119),
        [anon_sym_ulong] = ACTIONS(1119),
        [anon_sym_char] = ACTIONS(1119),
        [anon_sym_unsafe] = ACTIONS(1119),
        [anon_sym_abstract] = ACTIONS(1119),
        [anon_sym_sealed] = ACTIONS(1119),
        [anon_sym_static] = ACTIONS(1119),
        [anon_sym_readonly] = ACTIONS(1119),
        [anon_sym_volatile] = ACTIONS(1119),
        [anon_sym_bool] = ACTIONS(1119),
        [anon_sym_decimal] = ACTIONS(1119),
        [anon_sym_double] = ACTIONS(1119),
        [anon_sym_float] = ACTIONS(1119),
        [anon_sym_object] = ACTIONS(1119),
        [anon_sym_string] = ACTIONS(1119),
        [sym_identifier_name] = ACTIONS(1126),
        [sym_comment] = ACTIONS(87),
    },
    [278] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1133),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [279] = {
        [ts_builtin_sym_end] = ACTIONS(1135),
        [anon_sym_namespace] = ACTIONS(1142),
        [anon_sym_RBRACE] = ACTIONS(1135),
        [anon_sym_class] = ACTIONS(1142),
        [anon_sym_struct] = ACTIONS(1142),
        [anon_sym_LBRACK] = ACTIONS(1135),
        [anon_sym_enum] = ACTIONS(1142),
        [anon_sym_new] = ACTIONS(1142),
        [anon_sym_public] = ACTIONS(1142),
        [anon_sym_protected] = ACTIONS(1142),
        [anon_sym_internal] = ACTIONS(1142),
        [anon_sym_private] = ACTIONS(1142),
        [anon_sym_sbyte] = ACTIONS(1142),
        [anon_sym_byte] = ACTIONS(1142),
        [anon_sym_short] = ACTIONS(1142),
        [anon_sym_ushort] = ACTIONS(1142),
        [anon_sym_int] = ACTIONS(1142),
        [anon_sym_uint] = ACTIONS(1142),
        [anon_sym_long] = ACTIONS(1142),
        [anon_sym_ulong] = ACTIONS(1142),
        [anon_sym_char] = ACTIONS(1142),
        [anon_sym_unsafe] = ACTIONS(1142),
        [anon_sym_abstract] = ACTIONS(1142),
        [anon_sym_sealed] = ACTIONS(1142),
        [anon_sym_static] = ACTIONS(1142),
        [anon_sym_readonly] = ACTIONS(1142),
        [anon_sym_volatile] = ACTIONS(1142),
        [anon_sym_bool] = ACTIONS(1142),
        [anon_sym_decimal] = ACTIONS(1142),
        [anon_sym_double] = ACTIONS(1142),
        [anon_sym_float] = ACTIONS(1142),
        [anon_sym_object] = ACTIONS(1142),
        [anon_sym_string] = ACTIONS(1142),
        [sym_identifier_name] = ACTIONS(1149),
        [sym_comment] = ACTIONS(87),
    },
    [280] = {
        [anon_sym_SEMI] = ACTIONS(1156),
        [sym_comment] = ACTIONS(87),
    },
    [281] = {
        [anon_sym_RBRACE] = ACTIONS(1158),
        [anon_sym_class] = ACTIONS(1161),
        [anon_sym_struct] = ACTIONS(1161),
        [anon_sym_LBRACK] = ACTIONS(1158),
        [anon_sym_enum] = ACTIONS(1161),
        [anon_sym_new] = ACTIONS(1161),
        [anon_sym_public] = ACTIONS(1161),
        [anon_sym_protected] = ACTIONS(1161),
        [anon_sym_internal] = ACTIONS(1161),
        [anon_sym_private] = ACTIONS(1161),
        [anon_sym_sbyte] = ACTIONS(1161),
        [anon_sym_byte] = ACTIONS(1161),
        [anon_sym_short] = ACTIONS(1161),
        [anon_sym_ushort] = ACTIONS(1161),
        [anon_sym_int] = ACTIONS(1161),
        [anon_sym_uint] = ACTIONS(1161),
        [anon_sym_long] = ACTIONS(1161),
        [anon_sym_ulong] = ACTIONS(1161),
        [anon_sym_char] = ACTIONS(1161),
        [anon_sym_unsafe] = ACTIONS(1161),
        [anon_sym_abstract] = ACTIONS(1161),
        [anon_sym_sealed] = ACTIONS(1161),
        [anon_sym_static] = ACTIONS(1161),
        [anon_sym_readonly] = ACTIONS(1161),
        [anon_sym_volatile] = ACTIONS(1161),
        [anon_sym_bool] = ACTIONS(1161),
        [anon_sym_decimal] = ACTIONS(1161),
        [anon_sym_double] = ACTIONS(1161),
        [anon_sym_float] = ACTIONS(1161),
        [anon_sym_object] = ACTIONS(1161),
        [anon_sym_string] = ACTIONS(1161),
        [sym_identifier_name] = ACTIONS(1164),
        [sym_comment] = ACTIONS(87),
    },
    [282] = {
        [sym_identifier_name] = ACTIONS(1167),
        [sym_comment] = ACTIONS(87),
    },
    [283] = {
        [sym_type_parameter_list] = STATE(285),
        [anon_sym_LBRACE] = ACTIONS(1169),
        [anon_sym_LT] = ACTIONS(217),
        [sym_comment] = ACTIONS(87),
    },
    [284] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(291),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1171),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [285] = {
        [anon_sym_LBRACE] = ACTIONS(1173),
        [sym_comment] = ACTIONS(87),
    },
    [286] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(288),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1175),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [287] = {
        [ts_builtin_sym_end] = ACTIONS(1177),
        [anon_sym_namespace] = ACTIONS(1180),
        [anon_sym_RBRACE] = ACTIONS(1177),
        [anon_sym_class] = ACTIONS(1180),
        [anon_sym_struct] = ACTIONS(1180),
        [anon_sym_LBRACK] = ACTIONS(1177),
        [anon_sym_enum] = ACTIONS(1180),
        [anon_sym_new] = ACTIONS(1180),
        [anon_sym_public] = ACTIONS(1180),
        [anon_sym_protected] = ACTIONS(1180),
        [anon_sym_internal] = ACTIONS(1180),
        [anon_sym_private] = ACTIONS(1180),
        [anon_sym_sbyte] = ACTIONS(1180),
        [anon_sym_byte] = ACTIONS(1180),
        [anon_sym_short] = ACTIONS(1180),
        [anon_sym_ushort] = ACTIONS(1180),
        [anon_sym_int] = ACTIONS(1180),
        [anon_sym_uint] = ACTIONS(1180),
        [anon_sym_long] = ACTIONS(1180),
        [anon_sym_ulong] = ACTIONS(1180),
        [anon_sym_char] = ACTIONS(1180),
        [anon_sym_unsafe] = ACTIONS(1180),
        [anon_sym_abstract] = ACTIONS(1180),
        [anon_sym_sealed] = ACTIONS(1180),
        [anon_sym_static] = ACTIONS(1180),
        [anon_sym_readonly] = ACTIONS(1180),
        [anon_sym_volatile] = ACTIONS(1180),
        [anon_sym_bool] = ACTIONS(1180),
        [anon_sym_decimal] = ACTIONS(1180),
        [anon_sym_double] = ACTIONS(1180),
        [anon_sym_float] = ACTIONS(1180),
        [anon_sym_object] = ACTIONS(1180),
        [anon_sym_string] = ACTIONS(1180),
        [sym_identifier_name] = ACTIONS(1183),
        [sym_comment] = ACTIONS(87),
    },
    [288] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1186),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [289] = {
        [ts_builtin_sym_end] = ACTIONS(1188),
        [anon_sym_namespace] = ACTIONS(1191),
        [anon_sym_RBRACE] = ACTIONS(1188),
        [anon_sym_class] = ACTIONS(1191),
        [anon_sym_struct] = ACTIONS(1191),
        [anon_sym_LBRACK] = ACTIONS(1188),
        [anon_sym_enum] = ACTIONS(1191),
        [anon_sym_new] = ACTIONS(1191),
        [anon_sym_public] = ACTIONS(1191),
        [anon_sym_protected] = ACTIONS(1191),
        [anon_sym_internal] = ACTIONS(1191),
        [anon_sym_private] = ACTIONS(1191),
        [anon_sym_sbyte] = ACTIONS(1191),
        [anon_sym_byte] = ACTIONS(1191),
        [anon_sym_short] = ACTIONS(1191),
        [anon_sym_ushort] = ACTIONS(1191),
        [anon_sym_int] = ACTIONS(1191),
        [anon_sym_uint] = ACTIONS(1191),
        [anon_sym_long] = ACTIONS(1191),
        [anon_sym_ulong] = ACTIONS(1191),
        [anon_sym_char] = ACTIONS(1191),
        [anon_sym_unsafe] = ACTIONS(1191),
        [anon_sym_abstract] = ACTIONS(1191),
        [anon_sym_sealed] = ACTIONS(1191),
        [anon_sym_static] = ACTIONS(1191),
        [anon_sym_readonly] = ACTIONS(1191),
        [anon_sym_volatile] = ACTIONS(1191),
        [anon_sym_bool] = ACTIONS(1191),
        [anon_sym_decimal] = ACTIONS(1191),
        [anon_sym_double] = ACTIONS(1191),
        [anon_sym_float] = ACTIONS(1191),
        [anon_sym_object] = ACTIONS(1191),
        [anon_sym_string] = ACTIONS(1191),
        [sym_identifier_name] = ACTIONS(1194),
        [sym_comment] = ACTIONS(87),
    },
    [290] = {
        [ts_builtin_sym_end] = ACTIONS(1197),
        [anon_sym_namespace] = ACTIONS(1200),
        [anon_sym_RBRACE] = ACTIONS(1197),
        [anon_sym_class] = ACTIONS(1200),
        [anon_sym_struct] = ACTIONS(1200),
        [anon_sym_LBRACK] = ACTIONS(1197),
        [anon_sym_enum] = ACTIONS(1200),
        [anon_sym_new] = ACTIONS(1200),
        [anon_sym_public] = ACTIONS(1200),
        [anon_sym_protected] = ACTIONS(1200),
        [anon_sym_internal] = ACTIONS(1200),
        [anon_sym_private] = ACTIONS(1200),
        [anon_sym_sbyte] = ACTIONS(1200),
        [anon_sym_byte] = ACTIONS(1200),
        [anon_sym_short] = ACTIONS(1200),
        [anon_sym_ushort] = ACTIONS(1200),
        [anon_sym_int] = ACTIONS(1200),
        [anon_sym_uint] = ACTIONS(1200),
        [anon_sym_long] = ACTIONS(1200),
        [anon_sym_ulong] = ACTIONS(1200),
        [anon_sym_char] = ACTIONS(1200),
        [anon_sym_unsafe] = ACTIONS(1200),
        [anon_sym_abstract] = ACTIONS(1200),
        [anon_sym_sealed] = ACTIONS(1200),
        [anon_sym_static] = ACTIONS(1200),
        [anon_sym_readonly] = ACTIONS(1200),
        [anon_sym_volatile] = ACTIONS(1200),
        [anon_sym_bool] = ACTIONS(1200),
        [anon_sym_decimal] = ACTIONS(1200),
        [anon_sym_double] = ACTIONS(1200),
        [anon_sym_float] = ACTIONS(1200),
        [anon_sym_object] = ACTIONS(1200),
        [anon_sym_string] = ACTIONS(1200),
        [sym_identifier_name] = ACTIONS(1203),
        [sym_comment] = ACTIONS(87),
    },
    [291] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1175),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [292] = {
        [sym_identifier_name] = ACTIONS(1206),
        [sym_comment] = ACTIONS(87),
    },
    [293] = {
        [sym_type_parameter_list] = STATE(295),
        [anon_sym_LBRACE] = ACTIONS(1208),
        [anon_sym_LT] = ACTIONS(217),
        [sym_comment] = ACTIONS(87),
    },
    [294] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(301),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1210),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [295] = {
        [anon_sym_LBRACE] = ACTIONS(1212),
        [sym_comment] = ACTIONS(87),
    },
    [296] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(298),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1214),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [297] = {
        [ts_builtin_sym_end] = ACTIONS(1216),
        [anon_sym_namespace] = ACTIONS(1219),
        [anon_sym_RBRACE] = ACTIONS(1216),
        [anon_sym_class] = ACTIONS(1219),
        [anon_sym_struct] = ACTIONS(1219),
        [anon_sym_LBRACK] = ACTIONS(1216),
        [anon_sym_enum] = ACTIONS(1219),
        [anon_sym_new] = ACTIONS(1219),
        [anon_sym_public] = ACTIONS(1219),
        [anon_sym_protected] = ACTIONS(1219),
        [anon_sym_internal] = ACTIONS(1219),
        [anon_sym_private] = ACTIONS(1219),
        [anon_sym_sbyte] = ACTIONS(1219),
        [anon_sym_byte] = ACTIONS(1219),
        [anon_sym_short] = ACTIONS(1219),
        [anon_sym_ushort] = ACTIONS(1219),
        [anon_sym_int] = ACTIONS(1219),
        [anon_sym_uint] = ACTIONS(1219),
        [anon_sym_long] = ACTIONS(1219),
        [anon_sym_ulong] = ACTIONS(1219),
        [anon_sym_char] = ACTIONS(1219),
        [anon_sym_unsafe] = ACTIONS(1219),
        [anon_sym_abstract] = ACTIONS(1219),
        [anon_sym_sealed] = ACTIONS(1219),
        [anon_sym_static] = ACTIONS(1219),
        [anon_sym_readonly] = ACTIONS(1219),
        [anon_sym_volatile] = ACTIONS(1219),
        [anon_sym_bool] = ACTIONS(1219),
        [anon_sym_decimal] = ACTIONS(1219),
        [anon_sym_double] = ACTIONS(1219),
        [anon_sym_float] = ACTIONS(1219),
        [anon_sym_object] = ACTIONS(1219),
        [anon_sym_string] = ACTIONS(1219),
        [sym_identifier_name] = ACTIONS(1222),
        [sym_comment] = ACTIONS(87),
    },
    [298] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1225),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [299] = {
        [ts_builtin_sym_end] = ACTIONS(1227),
        [anon_sym_namespace] = ACTIONS(1230),
        [anon_sym_RBRACE] = ACTIONS(1227),
        [anon_sym_class] = ACTIONS(1230),
        [anon_sym_struct] = ACTIONS(1230),
        [anon_sym_LBRACK] = ACTIONS(1227),
        [anon_sym_enum] = ACTIONS(1230),
        [anon_sym_new] = ACTIONS(1230),
        [anon_sym_public] = ACTIONS(1230),
        [anon_sym_protected] = ACTIONS(1230),
        [anon_sym_internal] = ACTIONS(1230),
        [anon_sym_private] = ACTIONS(1230),
        [anon_sym_sbyte] = ACTIONS(1230),
        [anon_sym_byte] = ACTIONS(1230),
        [anon_sym_short] = ACTIONS(1230),
        [anon_sym_ushort] = ACTIONS(1230),
        [anon_sym_int] = ACTIONS(1230),
        [anon_sym_uint] = ACTIONS(1230),
        [anon_sym_long] = ACTIONS(1230),
        [anon_sym_ulong] = ACTIONS(1230),
        [anon_sym_char] = ACTIONS(1230),
        [anon_sym_unsafe] = ACTIONS(1230),
        [anon_sym_abstract] = ACTIONS(1230),
        [anon_sym_sealed] = ACTIONS(1230),
        [anon_sym_static] = ACTIONS(1230),
        [anon_sym_readonly] = ACTIONS(1230),
        [anon_sym_volatile] = ACTIONS(1230),
        [anon_sym_bool] = ACTIONS(1230),
        [anon_sym_decimal] = ACTIONS(1230),
        [anon_sym_double] = ACTIONS(1230),
        [anon_sym_float] = ACTIONS(1230),
        [anon_sym_object] = ACTIONS(1230),
        [anon_sym_string] = ACTIONS(1230),
        [sym_identifier_name] = ACTIONS(1233),
        [sym_comment] = ACTIONS(87),
    },
    [300] = {
        [ts_builtin_sym_end] = ACTIONS(1236),
        [anon_sym_namespace] = ACTIONS(1239),
        [anon_sym_RBRACE] = ACTIONS(1236),
        [anon_sym_class] = ACTIONS(1239),
        [anon_sym_struct] = ACTIONS(1239),
        [anon_sym_LBRACK] = ACTIONS(1236),
        [anon_sym_enum] = ACTIONS(1239),
        [anon_sym_new] = ACTIONS(1239),
        [anon_sym_public] = ACTIONS(1239),
        [anon_sym_protected] = ACTIONS(1239),
        [anon_sym_internal] = ACTIONS(1239),
        [anon_sym_private] = ACTIONS(1239),
        [anon_sym_sbyte] = ACTIONS(1239),
        [anon_sym_byte] = ACTIONS(1239),
        [anon_sym_short] = ACTIONS(1239),
        [anon_sym_ushort] = ACTIONS(1239),
        [anon_sym_int] = ACTIONS(1239),
        [anon_sym_uint] = ACTIONS(1239),
        [anon_sym_long] = ACTIONS(1239),
        [anon_sym_ulong] = ACTIONS(1239),
        [anon_sym_char] = ACTIONS(1239),
        [anon_sym_unsafe] = ACTIONS(1239),
        [anon_sym_abstract] = ACTIONS(1239),
        [anon_sym_sealed] = ACTIONS(1239),
        [anon_sym_static] = ACTIONS(1239),
        [anon_sym_readonly] = ACTIONS(1239),
        [anon_sym_volatile] = ACTIONS(1239),
        [anon_sym_bool] = ACTIONS(1239),
        [anon_sym_decimal] = ACTIONS(1239),
        [anon_sym_double] = ACTIONS(1239),
        [anon_sym_float] = ACTIONS(1239),
        [anon_sym_object] = ACTIONS(1239),
        [anon_sym_string] = ACTIONS(1239),
        [sym_identifier_name] = ACTIONS(1242),
        [sym_comment] = ACTIONS(87),
    },
    [301] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1214),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [302] = {
        [anon_sym_RBRACE] = ACTIONS(1245),
        [anon_sym_class] = ACTIONS(1249),
        [anon_sym_struct] = ACTIONS(1249),
        [anon_sym_LBRACK] = ACTIONS(1245),
        [anon_sym_enum] = ACTIONS(1249),
        [anon_sym_new] = ACTIONS(1249),
        [anon_sym_public] = ACTIONS(1249),
        [anon_sym_protected] = ACTIONS(1249),
        [anon_sym_internal] = ACTIONS(1249),
        [anon_sym_private] = ACTIONS(1249),
        [anon_sym_sbyte] = ACTIONS(1249),
        [anon_sym_byte] = ACTIONS(1249),
        [anon_sym_short] = ACTIONS(1249),
        [anon_sym_ushort] = ACTIONS(1249),
        [anon_sym_int] = ACTIONS(1249),
        [anon_sym_uint] = ACTIONS(1249),
        [anon_sym_long] = ACTIONS(1249),
        [anon_sym_ulong] = ACTIONS(1249),
        [anon_sym_char] = ACTIONS(1249),
        [anon_sym_unsafe] = ACTIONS(1249),
        [anon_sym_abstract] = ACTIONS(1249),
        [anon_sym_sealed] = ACTIONS(1249),
        [anon_sym_static] = ACTIONS(1249),
        [anon_sym_readonly] = ACTIONS(1249),
        [anon_sym_volatile] = ACTIONS(1249),
        [anon_sym_bool] = ACTIONS(1249),
        [anon_sym_decimal] = ACTIONS(1249),
        [anon_sym_double] = ACTIONS(1249),
        [anon_sym_float] = ACTIONS(1249),
        [anon_sym_object] = ACTIONS(1249),
        [anon_sym_string] = ACTIONS(1249),
        [sym_identifier_name] = ACTIONS(1253),
        [sym_comment] = ACTIONS(87),
    },
    [303] = {
        [sym_identifier_name] = ACTIONS(1257),
        [sym_comment] = ACTIONS(87),
    },
    [304] = {
        [sym__enum_base] = STATE(305),
        [sym__enum_body] = STATE(306),
        [anon_sym_LBRACE] = ACTIONS(487),
        [anon_sym_COLON] = ACTIONS(489),
        [sym_comment] = ACTIONS(87),
    },
    [305] = {
        [sym__enum_body] = STATE(308),
        [anon_sym_LBRACE] = ACTIONS(487),
        [sym_comment] = ACTIONS(87),
    },
    [306] = {
        [ts_builtin_sym_end] = ACTIONS(1259),
        [anon_sym_SEMI] = ACTIONS(1262),
        [anon_sym_namespace] = ACTIONS(1264),
        [anon_sym_RBRACE] = ACTIONS(1259),
        [anon_sym_class] = ACTIONS(1264),
        [anon_sym_struct] = ACTIONS(1264),
        [anon_sym_LBRACK] = ACTIONS(1259),
        [anon_sym_enum] = ACTIONS(1264),
        [anon_sym_new] = ACTIONS(1264),
        [anon_sym_public] = ACTIONS(1264),
        [anon_sym_protected] = ACTIONS(1264),
        [anon_sym_internal] = ACTIONS(1264),
        [anon_sym_private] = ACTIONS(1264),
        [anon_sym_sbyte] = ACTIONS(1264),
        [anon_sym_byte] = ACTIONS(1264),
        [anon_sym_short] = ACTIONS(1264),
        [anon_sym_ushort] = ACTIONS(1264),
        [anon_sym_int] = ACTIONS(1264),
        [anon_sym_uint] = ACTIONS(1264),
        [anon_sym_long] = ACTIONS(1264),
        [anon_sym_ulong] = ACTIONS(1264),
        [anon_sym_char] = ACTIONS(1264),
        [anon_sym_unsafe] = ACTIONS(1264),
        [anon_sym_abstract] = ACTIONS(1264),
        [anon_sym_sealed] = ACTIONS(1264),
        [anon_sym_static] = ACTIONS(1264),
        [anon_sym_readonly] = ACTIONS(1264),
        [anon_sym_volatile] = ACTIONS(1264),
        [anon_sym_bool] = ACTIONS(1264),
        [anon_sym_decimal] = ACTIONS(1264),
        [anon_sym_double] = ACTIONS(1264),
        [anon_sym_float] = ACTIONS(1264),
        [anon_sym_object] = ACTIONS(1264),
        [anon_sym_string] = ACTIONS(1264),
        [sym_identifier_name] = ACTIONS(1267),
        [sym_comment] = ACTIONS(87),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(1270),
        [anon_sym_namespace] = ACTIONS(1273),
        [anon_sym_RBRACE] = ACTIONS(1270),
        [anon_sym_class] = ACTIONS(1273),
        [anon_sym_struct] = ACTIONS(1273),
        [anon_sym_LBRACK] = ACTIONS(1270),
        [anon_sym_enum] = ACTIONS(1273),
        [anon_sym_new] = ACTIONS(1273),
        [anon_sym_public] = ACTIONS(1273),
        [anon_sym_protected] = ACTIONS(1273),
        [anon_sym_internal] = ACTIONS(1273),
        [anon_sym_private] = ACTIONS(1273),
        [anon_sym_sbyte] = ACTIONS(1273),
        [anon_sym_byte] = ACTIONS(1273),
        [anon_sym_short] = ACTIONS(1273),
        [anon_sym_ushort] = ACTIONS(1273),
        [anon_sym_int] = ACTIONS(1273),
        [anon_sym_uint] = ACTIONS(1273),
        [anon_sym_long] = ACTIONS(1273),
        [anon_sym_ulong] = ACTIONS(1273),
        [anon_sym_char] = ACTIONS(1273),
        [anon_sym_unsafe] = ACTIONS(1273),
        [anon_sym_abstract] = ACTIONS(1273),
        [anon_sym_sealed] = ACTIONS(1273),
        [anon_sym_static] = ACTIONS(1273),
        [anon_sym_readonly] = ACTIONS(1273),
        [anon_sym_volatile] = ACTIONS(1273),
        [anon_sym_bool] = ACTIONS(1273),
        [anon_sym_decimal] = ACTIONS(1273),
        [anon_sym_double] = ACTIONS(1273),
        [anon_sym_float] = ACTIONS(1273),
        [anon_sym_object] = ACTIONS(1273),
        [anon_sym_string] = ACTIONS(1273),
        [sym_identifier_name] = ACTIONS(1276),
        [sym_comment] = ACTIONS(87),
    },
    [308] = {
        [ts_builtin_sym_end] = ACTIONS(1270),
        [anon_sym_SEMI] = ACTIONS(1279),
        [anon_sym_namespace] = ACTIONS(1273),
        [anon_sym_RBRACE] = ACTIONS(1270),
        [anon_sym_class] = ACTIONS(1273),
        [anon_sym_struct] = ACTIONS(1273),
        [anon_sym_LBRACK] = ACTIONS(1270),
        [anon_sym_enum] = ACTIONS(1273),
        [anon_sym_new] = ACTIONS(1273),
        [anon_sym_public] = ACTIONS(1273),
        [anon_sym_protected] = ACTIONS(1273),
        [anon_sym_internal] = ACTIONS(1273),
        [anon_sym_private] = ACTIONS(1273),
        [anon_sym_sbyte] = ACTIONS(1273),
        [anon_sym_byte] = ACTIONS(1273),
        [anon_sym_short] = ACTIONS(1273),
        [anon_sym_ushort] = ACTIONS(1273),
        [anon_sym_int] = ACTIONS(1273),
        [anon_sym_uint] = ACTIONS(1273),
        [anon_sym_long] = ACTIONS(1273),
        [anon_sym_ulong] = ACTIONS(1273),
        [anon_sym_char] = ACTIONS(1273),
        [anon_sym_unsafe] = ACTIONS(1273),
        [anon_sym_abstract] = ACTIONS(1273),
        [anon_sym_sealed] = ACTIONS(1273),
        [anon_sym_static] = ACTIONS(1273),
        [anon_sym_readonly] = ACTIONS(1273),
        [anon_sym_volatile] = ACTIONS(1273),
        [anon_sym_bool] = ACTIONS(1273),
        [anon_sym_decimal] = ACTIONS(1273),
        [anon_sym_double] = ACTIONS(1273),
        [anon_sym_float] = ACTIONS(1273),
        [anon_sym_object] = ACTIONS(1273),
        [anon_sym_string] = ACTIONS(1273),
        [sym_identifier_name] = ACTIONS(1276),
        [sym_comment] = ACTIONS(87),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(1281),
        [anon_sym_namespace] = ACTIONS(1284),
        [anon_sym_RBRACE] = ACTIONS(1281),
        [anon_sym_class] = ACTIONS(1284),
        [anon_sym_struct] = ACTIONS(1284),
        [anon_sym_LBRACK] = ACTIONS(1281),
        [anon_sym_enum] = ACTIONS(1284),
        [anon_sym_new] = ACTIONS(1284),
        [anon_sym_public] = ACTIONS(1284),
        [anon_sym_protected] = ACTIONS(1284),
        [anon_sym_internal] = ACTIONS(1284),
        [anon_sym_private] = ACTIONS(1284),
        [anon_sym_sbyte] = ACTIONS(1284),
        [anon_sym_byte] = ACTIONS(1284),
        [anon_sym_short] = ACTIONS(1284),
        [anon_sym_ushort] = ACTIONS(1284),
        [anon_sym_int] = ACTIONS(1284),
        [anon_sym_uint] = ACTIONS(1284),
        [anon_sym_long] = ACTIONS(1284),
        [anon_sym_ulong] = ACTIONS(1284),
        [anon_sym_char] = ACTIONS(1284),
        [anon_sym_unsafe] = ACTIONS(1284),
        [anon_sym_abstract] = ACTIONS(1284),
        [anon_sym_sealed] = ACTIONS(1284),
        [anon_sym_static] = ACTIONS(1284),
        [anon_sym_readonly] = ACTIONS(1284),
        [anon_sym_volatile] = ACTIONS(1284),
        [anon_sym_bool] = ACTIONS(1284),
        [anon_sym_decimal] = ACTIONS(1284),
        [anon_sym_double] = ACTIONS(1284),
        [anon_sym_float] = ACTIONS(1284),
        [anon_sym_object] = ACTIONS(1284),
        [anon_sym_string] = ACTIONS(1284),
        [sym_identifier_name] = ACTIONS(1287),
        [sym_comment] = ACTIONS(87),
    },
    [310] = {
        [ts_builtin_sym_end] = ACTIONS(1290),
        [anon_sym_namespace] = ACTIONS(1295),
        [anon_sym_RBRACE] = ACTIONS(1290),
        [anon_sym_class] = ACTIONS(1295),
        [anon_sym_struct] = ACTIONS(1295),
        [anon_sym_LBRACK] = ACTIONS(1290),
        [anon_sym_enum] = ACTIONS(1295),
        [anon_sym_new] = ACTIONS(1295),
        [anon_sym_public] = ACTIONS(1295),
        [anon_sym_protected] = ACTIONS(1295),
        [anon_sym_internal] = ACTIONS(1295),
        [anon_sym_private] = ACTIONS(1295),
        [anon_sym_sbyte] = ACTIONS(1295),
        [anon_sym_byte] = ACTIONS(1295),
        [anon_sym_short] = ACTIONS(1295),
        [anon_sym_ushort] = ACTIONS(1295),
        [anon_sym_int] = ACTIONS(1295),
        [anon_sym_uint] = ACTIONS(1295),
        [anon_sym_long] = ACTIONS(1295),
        [anon_sym_ulong] = ACTIONS(1295),
        [anon_sym_char] = ACTIONS(1295),
        [anon_sym_unsafe] = ACTIONS(1295),
        [anon_sym_abstract] = ACTIONS(1295),
        [anon_sym_sealed] = ACTIONS(1295),
        [anon_sym_static] = ACTIONS(1295),
        [anon_sym_readonly] = ACTIONS(1295),
        [anon_sym_volatile] = ACTIONS(1295),
        [anon_sym_bool] = ACTIONS(1295),
        [anon_sym_decimal] = ACTIONS(1295),
        [anon_sym_double] = ACTIONS(1295),
        [anon_sym_float] = ACTIONS(1295),
        [anon_sym_object] = ACTIONS(1295),
        [anon_sym_string] = ACTIONS(1295),
        [sym_identifier_name] = ACTIONS(1300),
        [sym_comment] = ACTIONS(87),
    },
    [311] = {
        [ts_builtin_sym_end] = ACTIONS(1305),
        [anon_sym_SEMI] = ACTIONS(1309),
        [anon_sym_namespace] = ACTIONS(1311),
        [anon_sym_RBRACE] = ACTIONS(1305),
        [anon_sym_class] = ACTIONS(1311),
        [anon_sym_struct] = ACTIONS(1311),
        [anon_sym_LBRACK] = ACTIONS(1305),
        [anon_sym_enum] = ACTIONS(1311),
        [anon_sym_new] = ACTIONS(1311),
        [anon_sym_public] = ACTIONS(1311),
        [anon_sym_protected] = ACTIONS(1311),
        [anon_sym_internal] = ACTIONS(1311),
        [anon_sym_private] = ACTIONS(1311),
        [anon_sym_sbyte] = ACTIONS(1311),
        [anon_sym_byte] = ACTIONS(1311),
        [anon_sym_short] = ACTIONS(1311),
        [anon_sym_ushort] = ACTIONS(1311),
        [anon_sym_int] = ACTIONS(1311),
        [anon_sym_uint] = ACTIONS(1311),
        [anon_sym_long] = ACTIONS(1311),
        [anon_sym_ulong] = ACTIONS(1311),
        [anon_sym_char] = ACTIONS(1311),
        [anon_sym_unsafe] = ACTIONS(1311),
        [anon_sym_abstract] = ACTIONS(1311),
        [anon_sym_sealed] = ACTIONS(1311),
        [anon_sym_static] = ACTIONS(1311),
        [anon_sym_readonly] = ACTIONS(1311),
        [anon_sym_volatile] = ACTIONS(1311),
        [anon_sym_bool] = ACTIONS(1311),
        [anon_sym_decimal] = ACTIONS(1311),
        [anon_sym_double] = ACTIONS(1311),
        [anon_sym_float] = ACTIONS(1311),
        [anon_sym_object] = ACTIONS(1311),
        [anon_sym_string] = ACTIONS(1311),
        [sym_identifier_name] = ACTIONS(1315),
        [sym_comment] = ACTIONS(87),
    },
    [312] = {
        [ts_builtin_sym_end] = ACTIONS(1319),
        [anon_sym_namespace] = ACTIONS(1323),
        [anon_sym_RBRACE] = ACTIONS(1319),
        [anon_sym_class] = ACTIONS(1323),
        [anon_sym_struct] = ACTIONS(1323),
        [anon_sym_LBRACK] = ACTIONS(1319),
        [anon_sym_enum] = ACTIONS(1323),
        [anon_sym_new] = ACTIONS(1323),
        [anon_sym_public] = ACTIONS(1323),
        [anon_sym_protected] = ACTIONS(1323),
        [anon_sym_internal] = ACTIONS(1323),
        [anon_sym_private] = ACTIONS(1323),
        [anon_sym_sbyte] = ACTIONS(1323),
        [anon_sym_byte] = ACTIONS(1323),
        [anon_sym_short] = ACTIONS(1323),
        [anon_sym_ushort] = ACTIONS(1323),
        [anon_sym_int] = ACTIONS(1323),
        [anon_sym_uint] = ACTIONS(1323),
        [anon_sym_long] = ACTIONS(1323),
        [anon_sym_ulong] = ACTIONS(1323),
        [anon_sym_char] = ACTIONS(1323),
        [anon_sym_unsafe] = ACTIONS(1323),
        [anon_sym_abstract] = ACTIONS(1323),
        [anon_sym_sealed] = ACTIONS(1323),
        [anon_sym_static] = ACTIONS(1323),
        [anon_sym_readonly] = ACTIONS(1323),
        [anon_sym_volatile] = ACTIONS(1323),
        [anon_sym_bool] = ACTIONS(1323),
        [anon_sym_decimal] = ACTIONS(1323),
        [anon_sym_double] = ACTIONS(1323),
        [anon_sym_float] = ACTIONS(1323),
        [anon_sym_object] = ACTIONS(1323),
        [anon_sym_string] = ACTIONS(1323),
        [sym_identifier_name] = ACTIONS(1327),
        [sym_comment] = ACTIONS(87),
    },
    [313] = {
        [sym_equals_value_clause] = STATE(146),
        [sym_type_parameter_list] = STATE(171),
        [anon_sym_RBRACE] = ACTIONS(549),
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_EQ] = ACTIONS(349),
        [anon_sym_LT] = ACTIONS(217),
        [sym_identifier_name] = ACTIONS(267),
        [sym_comment] = ACTIONS(87),
    },
    [314] = {
        [sym__type_declaration] = STATE(319),
        [sym_namespace_declaration] = STATE(210),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(249),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_member_declaration] = STATE(137),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_namespace_declaration_repeat1] = STATE(211),
        [aux_sym_class_declaration_repeat1] = STATE(320),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_namespace] = ACTIONS(778),
        [anon_sym_RBRACE] = ACTIONS(1331),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(782),
        [sym_comment] = ACTIONS(87),
    },
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(1333),
        [anon_sym_SEMI] = ACTIONS(1337),
        [anon_sym_namespace] = ACTIONS(1339),
        [anon_sym_RBRACE] = ACTIONS(1333),
        [anon_sym_class] = ACTIONS(1339),
        [anon_sym_struct] = ACTIONS(1339),
        [anon_sym_LBRACK] = ACTIONS(1333),
        [anon_sym_enum] = ACTIONS(1339),
        [anon_sym_new] = ACTIONS(1339),
        [anon_sym_public] = ACTIONS(1339),
        [anon_sym_protected] = ACTIONS(1339),
        [anon_sym_internal] = ACTIONS(1339),
        [anon_sym_private] = ACTIONS(1339),
        [anon_sym_sbyte] = ACTIONS(1339),
        [anon_sym_byte] = ACTIONS(1339),
        [anon_sym_short] = ACTIONS(1339),
        [anon_sym_ushort] = ACTIONS(1339),
        [anon_sym_int] = ACTIONS(1339),
        [anon_sym_uint] = ACTIONS(1339),
        [anon_sym_long] = ACTIONS(1339),
        [anon_sym_ulong] = ACTIONS(1339),
        [anon_sym_char] = ACTIONS(1339),
        [anon_sym_unsafe] = ACTIONS(1339),
        [anon_sym_abstract] = ACTIONS(1339),
        [anon_sym_sealed] = ACTIONS(1339),
        [anon_sym_static] = ACTIONS(1339),
        [anon_sym_readonly] = ACTIONS(1339),
        [anon_sym_volatile] = ACTIONS(1339),
        [anon_sym_bool] = ACTIONS(1339),
        [anon_sym_decimal] = ACTIONS(1339),
        [anon_sym_double] = ACTIONS(1339),
        [anon_sym_float] = ACTIONS(1339),
        [anon_sym_object] = ACTIONS(1339),
        [anon_sym_string] = ACTIONS(1339),
        [sym_identifier_name] = ACTIONS(1343),
        [sym_comment] = ACTIONS(87),
    },
    [316] = {
        [ts_builtin_sym_end] = ACTIONS(1305),
        [anon_sym_namespace] = ACTIONS(1311),
        [anon_sym_RBRACE] = ACTIONS(1305),
        [anon_sym_class] = ACTIONS(1311),
        [anon_sym_struct] = ACTIONS(1311),
        [anon_sym_LBRACK] = ACTIONS(1305),
        [anon_sym_enum] = ACTIONS(1311),
        [anon_sym_new] = ACTIONS(1311),
        [anon_sym_public] = ACTIONS(1311),
        [anon_sym_protected] = ACTIONS(1311),
        [anon_sym_internal] = ACTIONS(1311),
        [anon_sym_private] = ACTIONS(1311),
        [anon_sym_sbyte] = ACTIONS(1311),
        [anon_sym_byte] = ACTIONS(1311),
        [anon_sym_short] = ACTIONS(1311),
        [anon_sym_ushort] = ACTIONS(1311),
        [anon_sym_int] = ACTIONS(1311),
        [anon_sym_uint] = ACTIONS(1311),
        [anon_sym_long] = ACTIONS(1311),
        [anon_sym_ulong] = ACTIONS(1311),
        [anon_sym_char] = ACTIONS(1311),
        [anon_sym_unsafe] = ACTIONS(1311),
        [anon_sym_abstract] = ACTIONS(1311),
        [anon_sym_sealed] = ACTIONS(1311),
        [anon_sym_static] = ACTIONS(1311),
        [anon_sym_readonly] = ACTIONS(1311),
        [anon_sym_volatile] = ACTIONS(1311),
        [anon_sym_bool] = ACTIONS(1311),
        [anon_sym_decimal] = ACTIONS(1311),
        [anon_sym_double] = ACTIONS(1311),
        [anon_sym_float] = ACTIONS(1311),
        [anon_sym_object] = ACTIONS(1311),
        [anon_sym_string] = ACTIONS(1311),
        [sym_identifier_name] = ACTIONS(1315),
        [sym_comment] = ACTIONS(87),
    },
    [317] = {
        [ts_builtin_sym_end] = ACTIONS(1347),
        [anon_sym_namespace] = ACTIONS(1355),
        [anon_sym_RBRACE] = ACTIONS(1347),
        [anon_sym_class] = ACTIONS(1355),
        [anon_sym_struct] = ACTIONS(1355),
        [anon_sym_LBRACK] = ACTIONS(1347),
        [anon_sym_enum] = ACTIONS(1355),
        [anon_sym_new] = ACTIONS(1355),
        [anon_sym_public] = ACTIONS(1355),
        [anon_sym_protected] = ACTIONS(1355),
        [anon_sym_internal] = ACTIONS(1355),
        [anon_sym_private] = ACTIONS(1355),
        [anon_sym_sbyte] = ACTIONS(1363),
        [anon_sym_byte] = ACTIONS(1363),
        [anon_sym_short] = ACTIONS(1363),
        [anon_sym_ushort] = ACTIONS(1363),
        [anon_sym_int] = ACTIONS(1363),
        [anon_sym_uint] = ACTIONS(1363),
        [anon_sym_long] = ACTIONS(1363),
        [anon_sym_ulong] = ACTIONS(1363),
        [anon_sym_char] = ACTIONS(1363),
        [anon_sym_unsafe] = ACTIONS(1355),
        [anon_sym_abstract] = ACTIONS(1355),
        [anon_sym_sealed] = ACTIONS(1355),
        [anon_sym_static] = ACTIONS(1355),
        [anon_sym_readonly] = ACTIONS(1363),
        [anon_sym_volatile] = ACTIONS(1363),
        [anon_sym_bool] = ACTIONS(1363),
        [anon_sym_decimal] = ACTIONS(1363),
        [anon_sym_double] = ACTIONS(1363),
        [anon_sym_float] = ACTIONS(1363),
        [anon_sym_object] = ACTIONS(1363),
        [anon_sym_string] = ACTIONS(1363),
        [sym_identifier_name] = ACTIONS(1370),
        [sym_comment] = ACTIONS(87),
    },
    [318] = {
        [sym_equals_value_clause] = STATE(147),
        [sym_type_parameter_list] = STATE(171),
        [anon_sym_RBRACE] = ACTIONS(521),
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_EQ] = ACTIONS(349),
        [anon_sym_LT] = ACTIONS(217),
        [sym_identifier_name] = ACTIONS(267),
        [sym_comment] = ACTIONS(87),
    },
    [319] = {
        [anon_sym_namespace] = ACTIONS(1377),
        [anon_sym_RBRACE] = ACTIONS(1379),
        [anon_sym_class] = ACTIONS(1382),
        [anon_sym_struct] = ACTIONS(1382),
        [anon_sym_LBRACK] = ACTIONS(1379),
        [anon_sym_enum] = ACTIONS(1382),
        [anon_sym_new] = ACTIONS(1382),
        [anon_sym_public] = ACTIONS(1382),
        [anon_sym_protected] = ACTIONS(1382),
        [anon_sym_internal] = ACTIONS(1382),
        [anon_sym_private] = ACTIONS(1382),
        [anon_sym_sbyte] = ACTIONS(271),
        [anon_sym_byte] = ACTIONS(271),
        [anon_sym_short] = ACTIONS(271),
        [anon_sym_ushort] = ACTIONS(271),
        [anon_sym_int] = ACTIONS(271),
        [anon_sym_uint] = ACTIONS(271),
        [anon_sym_long] = ACTIONS(271),
        [anon_sym_ulong] = ACTIONS(271),
        [anon_sym_char] = ACTIONS(271),
        [anon_sym_unsafe] = ACTIONS(1382),
        [anon_sym_abstract] = ACTIONS(1382),
        [anon_sym_sealed] = ACTIONS(1382),
        [anon_sym_static] = ACTIONS(1382),
        [anon_sym_readonly] = ACTIONS(271),
        [anon_sym_volatile] = ACTIONS(271),
        [anon_sym_bool] = ACTIONS(271),
        [anon_sym_decimal] = ACTIONS(271),
        [anon_sym_double] = ACTIONS(271),
        [anon_sym_float] = ACTIONS(271),
        [anon_sym_object] = ACTIONS(271),
        [anon_sym_string] = ACTIONS(271),
        [sym_identifier_name] = ACTIONS(273),
        [sym_comment] = ACTIONS(87),
    },
    [320] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1110),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [321] = {
        [anon_sym_SEMI] = ACTIONS(1385),
        [anon_sym_RBRACE] = ACTIONS(1385),
        [anon_sym_COMMA] = ACTIONS(1385),
        [sym_comment] = ACTIONS(87),
    },
    [322] = {
        [anon_sym_SEMI] = ACTIONS(1389),
        [anon_sym_RBRACE] = ACTIONS(1389),
        [anon_sym_COMMA] = ACTIONS(1389),
        [sym__real_type_suffix] = ACTIONS(1392),
        [sym__exponent_part] = ACTIONS(1394),
        [sym_comment] = ACTIONS(87),
    },
    [323] = {
        [anon_sym_SEMI] = ACTIONS(1396),
        [anon_sym_RBRACE] = ACTIONS(1396),
        [anon_sym_COMMA] = ACTIONS(1396),
        [sym_comment] = ACTIONS(87),
    },
    [324] = {
        [anon_sym_SEMI] = ACTIONS(1396),
        [anon_sym_RBRACE] = ACTIONS(1396),
        [anon_sym_COMMA] = ACTIONS(1396),
        [sym__real_type_suffix] = ACTIONS(1399),
        [sym_comment] = ACTIONS(87),
    },
    [325] = {
        [anon_sym_SEMI] = ACTIONS(1401),
        [anon_sym_RBRACE] = ACTIONS(1401),
        [anon_sym_COMMA] = ACTIONS(1401),
        [sym_comment] = ACTIONS(87),
    },
    [326] = {
        [anon_sym_SEMI] = ACTIONS(886),
        [anon_sym_RBRACE] = ACTIONS(886),
        [anon_sym_COMMA] = ACTIONS(886),
        [sym_comment] = ACTIONS(87),
    },
    [327] = {
        [sym_attribute_argument_list] = STATE(37),
        [sym_equals_value_clause] = STATE(332),
        [sym_type_parameter_list] = STATE(171),
        [anon_sym_SEMI] = ACTIONS(347),
        [anon_sym_RBRACE] = ACTIONS(521),
        [anon_sym_RBRACK] = ACTIONS(177),
        [anon_sym_COMMA] = ACTIONS(1404),
        [anon_sym_LPAREN] = ACTIONS(179),
        [anon_sym_EQ] = ACTIONS(349),
        [anon_sym_LT] = ACTIONS(217),
        [anon_sym_GT] = ACTIONS(265),
        [sym_comment] = ACTIONS(87),
    },
    [328] = {
        [anon_sym_RBRACE] = ACTIONS(1409),
        [anon_sym_COMMA] = ACTIONS(1409),
        [sym_comment] = ACTIONS(87),
    },
    [329] = {
        [anon_sym_RBRACK] = ACTIONS(1412),
        [anon_sym_COMMA] = ACTIONS(1412),
        [sym_comment] = ACTIONS(87),
    },
    [330] = {
        [anon_sym_SEMI] = ACTIONS(1415),
        [anon_sym_COMMA] = ACTIONS(1415),
        [sym_comment] = ACTIONS(87),
    },
    [331] = {
        [anon_sym_COMMA] = ACTIONS(1418),
        [anon_sym_GT] = ACTIONS(1418),
        [sym_comment] = ACTIONS(87),
    },
    [332] = {
        [anon_sym_SEMI] = ACTIONS(379),
        [anon_sym_RBRACE] = ACTIONS(549),
        [anon_sym_COMMA] = ACTIONS(1421),
        [sym_comment] = ACTIONS(87),
    },
    [333] = {
        [sym__enum_base] = STATE(250),
        [sym__enum_body] = STATE(315),
        [anon_sym_LBRACE] = ACTIONS(487),
        [anon_sym_COLON] = ACTIONS(489),
        [sym_comment] = ACTIONS(87),
    },
    [334] = {
        [sym_type_parameter_list] = STATE(336),
        [anon_sym_LBRACE] = ACTIONS(1424),
        [anon_sym_LT] = ACTIONS(217),
        [sym_comment] = ACTIONS(87),
    },
    [335] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(342),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1426),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [336] = {
        [anon_sym_LBRACE] = ACTIONS(1428),
        [sym_comment] = ACTIONS(87),
    },
    [337] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(339),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1430),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [338] = {
        [ts_builtin_sym_end] = ACTIONS(1432),
        [anon_sym_namespace] = ACTIONS(1436),
        [anon_sym_RBRACE] = ACTIONS(1432),
        [anon_sym_class] = ACTIONS(1436),
        [anon_sym_struct] = ACTIONS(1436),
        [anon_sym_LBRACK] = ACTIONS(1432),
        [anon_sym_enum] = ACTIONS(1436),
        [anon_sym_new] = ACTIONS(1436),
        [anon_sym_public] = ACTIONS(1436),
        [anon_sym_protected] = ACTIONS(1436),
        [anon_sym_internal] = ACTIONS(1436),
        [anon_sym_private] = ACTIONS(1436),
        [anon_sym_sbyte] = ACTIONS(1436),
        [anon_sym_byte] = ACTIONS(1436),
        [anon_sym_short] = ACTIONS(1436),
        [anon_sym_ushort] = ACTIONS(1436),
        [anon_sym_int] = ACTIONS(1436),
        [anon_sym_uint] = ACTIONS(1436),
        [anon_sym_long] = ACTIONS(1436),
        [anon_sym_ulong] = ACTIONS(1436),
        [anon_sym_char] = ACTIONS(1436),
        [anon_sym_unsafe] = ACTIONS(1436),
        [anon_sym_abstract] = ACTIONS(1436),
        [anon_sym_sealed] = ACTIONS(1436),
        [anon_sym_static] = ACTIONS(1436),
        [anon_sym_readonly] = ACTIONS(1436),
        [anon_sym_volatile] = ACTIONS(1436),
        [anon_sym_bool] = ACTIONS(1436),
        [anon_sym_decimal] = ACTIONS(1436),
        [anon_sym_double] = ACTIONS(1436),
        [anon_sym_float] = ACTIONS(1436),
        [anon_sym_object] = ACTIONS(1436),
        [anon_sym_string] = ACTIONS(1436),
        [sym_identifier_name] = ACTIONS(1440),
        [sym_comment] = ACTIONS(87),
    },
    [339] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1444),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(1446),
        [anon_sym_namespace] = ACTIONS(1450),
        [anon_sym_RBRACE] = ACTIONS(1446),
        [anon_sym_class] = ACTIONS(1450),
        [anon_sym_struct] = ACTIONS(1450),
        [anon_sym_LBRACK] = ACTIONS(1446),
        [anon_sym_enum] = ACTIONS(1450),
        [anon_sym_new] = ACTIONS(1450),
        [anon_sym_public] = ACTIONS(1450),
        [anon_sym_protected] = ACTIONS(1450),
        [anon_sym_internal] = ACTIONS(1450),
        [anon_sym_private] = ACTIONS(1450),
        [anon_sym_sbyte] = ACTIONS(1450),
        [anon_sym_byte] = ACTIONS(1450),
        [anon_sym_short] = ACTIONS(1450),
        [anon_sym_ushort] = ACTIONS(1450),
        [anon_sym_int] = ACTIONS(1450),
        [anon_sym_uint] = ACTIONS(1450),
        [anon_sym_long] = ACTIONS(1450),
        [anon_sym_ulong] = ACTIONS(1450),
        [anon_sym_char] = ACTIONS(1450),
        [anon_sym_unsafe] = ACTIONS(1450),
        [anon_sym_abstract] = ACTIONS(1450),
        [anon_sym_sealed] = ACTIONS(1450),
        [anon_sym_static] = ACTIONS(1450),
        [anon_sym_readonly] = ACTIONS(1450),
        [anon_sym_volatile] = ACTIONS(1450),
        [anon_sym_bool] = ACTIONS(1450),
        [anon_sym_decimal] = ACTIONS(1450),
        [anon_sym_double] = ACTIONS(1450),
        [anon_sym_float] = ACTIONS(1450),
        [anon_sym_object] = ACTIONS(1450),
        [anon_sym_string] = ACTIONS(1450),
        [sym_identifier_name] = ACTIONS(1454),
        [sym_comment] = ACTIONS(87),
    },
    [341] = {
        [ts_builtin_sym_end] = ACTIONS(1458),
        [anon_sym_namespace] = ACTIONS(1462),
        [anon_sym_RBRACE] = ACTIONS(1458),
        [anon_sym_class] = ACTIONS(1462),
        [anon_sym_struct] = ACTIONS(1462),
        [anon_sym_LBRACK] = ACTIONS(1458),
        [anon_sym_enum] = ACTIONS(1462),
        [anon_sym_new] = ACTIONS(1462),
        [anon_sym_public] = ACTIONS(1462),
        [anon_sym_protected] = ACTIONS(1462),
        [anon_sym_internal] = ACTIONS(1462),
        [anon_sym_private] = ACTIONS(1462),
        [anon_sym_sbyte] = ACTIONS(1462),
        [anon_sym_byte] = ACTIONS(1462),
        [anon_sym_short] = ACTIONS(1462),
        [anon_sym_ushort] = ACTIONS(1462),
        [anon_sym_int] = ACTIONS(1462),
        [anon_sym_uint] = ACTIONS(1462),
        [anon_sym_long] = ACTIONS(1462),
        [anon_sym_ulong] = ACTIONS(1462),
        [anon_sym_char] = ACTIONS(1462),
        [anon_sym_unsafe] = ACTIONS(1462),
        [anon_sym_abstract] = ACTIONS(1462),
        [anon_sym_sealed] = ACTIONS(1462),
        [anon_sym_static] = ACTIONS(1462),
        [anon_sym_readonly] = ACTIONS(1462),
        [anon_sym_volatile] = ACTIONS(1462),
        [anon_sym_bool] = ACTIONS(1462),
        [anon_sym_decimal] = ACTIONS(1462),
        [anon_sym_double] = ACTIONS(1462),
        [anon_sym_float] = ACTIONS(1462),
        [anon_sym_object] = ACTIONS(1462),
        [anon_sym_string] = ACTIONS(1462),
        [sym_identifier_name] = ACTIONS(1466),
        [sym_comment] = ACTIONS(87),
    },
    [342] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1430),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [343] = {
        [sym_type_parameter_list] = STATE(345),
        [anon_sym_LBRACE] = ACTIONS(1470),
        [anon_sym_LT] = ACTIONS(217),
        [sym_comment] = ACTIONS(87),
    },
    [344] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(351),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1472),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [345] = {
        [anon_sym_LBRACE] = ACTIONS(1474),
        [sym_comment] = ACTIONS(87),
    },
    [346] = {
        [sym__type_declaration] = STATE(55),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(55),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym_class_declaration_repeat1] = STATE(348),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1476),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(1478),
        [anon_sym_namespace] = ACTIONS(1482),
        [anon_sym_RBRACE] = ACTIONS(1478),
        [anon_sym_class] = ACTIONS(1482),
        [anon_sym_struct] = ACTIONS(1482),
        [anon_sym_LBRACK] = ACTIONS(1478),
        [anon_sym_enum] = ACTIONS(1482),
        [anon_sym_new] = ACTIONS(1482),
        [anon_sym_public] = ACTIONS(1482),
        [anon_sym_protected] = ACTIONS(1482),
        [anon_sym_internal] = ACTIONS(1482),
        [anon_sym_private] = ACTIONS(1482),
        [anon_sym_sbyte] = ACTIONS(1482),
        [anon_sym_byte] = ACTIONS(1482),
        [anon_sym_short] = ACTIONS(1482),
        [anon_sym_ushort] = ACTIONS(1482),
        [anon_sym_int] = ACTIONS(1482),
        [anon_sym_uint] = ACTIONS(1482),
        [anon_sym_long] = ACTIONS(1482),
        [anon_sym_ulong] = ACTIONS(1482),
        [anon_sym_char] = ACTIONS(1482),
        [anon_sym_unsafe] = ACTIONS(1482),
        [anon_sym_abstract] = ACTIONS(1482),
        [anon_sym_sealed] = ACTIONS(1482),
        [anon_sym_static] = ACTIONS(1482),
        [anon_sym_readonly] = ACTIONS(1482),
        [anon_sym_volatile] = ACTIONS(1482),
        [anon_sym_bool] = ACTIONS(1482),
        [anon_sym_decimal] = ACTIONS(1482),
        [anon_sym_double] = ACTIONS(1482),
        [anon_sym_float] = ACTIONS(1482),
        [anon_sym_object] = ACTIONS(1482),
        [anon_sym_string] = ACTIONS(1482),
        [sym_identifier_name] = ACTIONS(1486),
        [sym_comment] = ACTIONS(87),
    },
    [348] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1490),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [349] = {
        [ts_builtin_sym_end] = ACTIONS(1492),
        [anon_sym_namespace] = ACTIONS(1496),
        [anon_sym_RBRACE] = ACTIONS(1492),
        [anon_sym_class] = ACTIONS(1496),
        [anon_sym_struct] = ACTIONS(1496),
        [anon_sym_LBRACK] = ACTIONS(1492),
        [anon_sym_enum] = ACTIONS(1496),
        [anon_sym_new] = ACTIONS(1496),
        [anon_sym_public] = ACTIONS(1496),
        [anon_sym_protected] = ACTIONS(1496),
        [anon_sym_internal] = ACTIONS(1496),
        [anon_sym_private] = ACTIONS(1496),
        [anon_sym_sbyte] = ACTIONS(1496),
        [anon_sym_byte] = ACTIONS(1496),
        [anon_sym_short] = ACTIONS(1496),
        [anon_sym_ushort] = ACTIONS(1496),
        [anon_sym_int] = ACTIONS(1496),
        [anon_sym_uint] = ACTIONS(1496),
        [anon_sym_long] = ACTIONS(1496),
        [anon_sym_ulong] = ACTIONS(1496),
        [anon_sym_char] = ACTIONS(1496),
        [anon_sym_unsafe] = ACTIONS(1496),
        [anon_sym_abstract] = ACTIONS(1496),
        [anon_sym_sealed] = ACTIONS(1496),
        [anon_sym_static] = ACTIONS(1496),
        [anon_sym_readonly] = ACTIONS(1496),
        [anon_sym_volatile] = ACTIONS(1496),
        [anon_sym_bool] = ACTIONS(1496),
        [anon_sym_decimal] = ACTIONS(1496),
        [anon_sym_double] = ACTIONS(1496),
        [anon_sym_float] = ACTIONS(1496),
        [anon_sym_object] = ACTIONS(1496),
        [anon_sym_string] = ACTIONS(1496),
        [sym_identifier_name] = ACTIONS(1500),
        [sym_comment] = ACTIONS(87),
    },
    [350] = {
        [ts_builtin_sym_end] = ACTIONS(1504),
        [anon_sym_namespace] = ACTIONS(1508),
        [anon_sym_RBRACE] = ACTIONS(1504),
        [anon_sym_class] = ACTIONS(1508),
        [anon_sym_struct] = ACTIONS(1508),
        [anon_sym_LBRACK] = ACTIONS(1504),
        [anon_sym_enum] = ACTIONS(1508),
        [anon_sym_new] = ACTIONS(1508),
        [anon_sym_public] = ACTIONS(1508),
        [anon_sym_protected] = ACTIONS(1508),
        [anon_sym_internal] = ACTIONS(1508),
        [anon_sym_private] = ACTIONS(1508),
        [anon_sym_sbyte] = ACTIONS(1508),
        [anon_sym_byte] = ACTIONS(1508),
        [anon_sym_short] = ACTIONS(1508),
        [anon_sym_ushort] = ACTIONS(1508),
        [anon_sym_int] = ACTIONS(1508),
        [anon_sym_uint] = ACTIONS(1508),
        [anon_sym_long] = ACTIONS(1508),
        [anon_sym_ulong] = ACTIONS(1508),
        [anon_sym_char] = ACTIONS(1508),
        [anon_sym_unsafe] = ACTIONS(1508),
        [anon_sym_abstract] = ACTIONS(1508),
        [anon_sym_sealed] = ACTIONS(1508),
        [anon_sym_static] = ACTIONS(1508),
        [anon_sym_readonly] = ACTIONS(1508),
        [anon_sym_volatile] = ACTIONS(1508),
        [anon_sym_bool] = ACTIONS(1508),
        [anon_sym_decimal] = ACTIONS(1508),
        [anon_sym_double] = ACTIONS(1508),
        [anon_sym_float] = ACTIONS(1508),
        [anon_sym_object] = ACTIONS(1508),
        [anon_sym_string] = ACTIONS(1508),
        [sym_identifier_name] = ACTIONS(1512),
        [sym_comment] = ACTIONS(87),
    },
    [351] = {
        [sym__type_declaration] = STATE(64),
        [sym_class_declaration] = STATE(14),
        [sym_struct_declaration] = STATE(14),
        [sym__attributes] = STATE(56),
        [sym_enum_declaration] = STATE(14),
        [sym_enum_modifier] = STATE(16),
        [sym__attribute_section] = STATE(17),
        [sym_field_declaration] = STATE(64),
        [sym_variable_declaration] = STATE(57),
        [sym__type] = STATE(58),
        [sym_generic_name] = STATE(59),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_field_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(61),
        [sym_predefined_type] = STATE(59),
        [aux_sym__attributes_repeat1] = STATE(24),
        [anon_sym_RBRACE] = ACTIONS(1476),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(237),
        [anon_sym_volatile] = ACTIONS(237),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(87),
    },
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(1516),
        [anon_sym_namespace] = ACTIONS(1526),
        [anon_sym_RBRACE] = ACTIONS(1516),
        [anon_sym_class] = ACTIONS(1526),
        [anon_sym_struct] = ACTIONS(1526),
        [anon_sym_LBRACK] = ACTIONS(1516),
        [anon_sym_enum] = ACTIONS(1526),
        [anon_sym_new] = ACTIONS(1526),
        [anon_sym_public] = ACTIONS(1526),
        [anon_sym_protected] = ACTIONS(1526),
        [anon_sym_internal] = ACTIONS(1526),
        [anon_sym_private] = ACTIONS(1526),
        [anon_sym_sbyte] = ACTIONS(1536),
        [anon_sym_byte] = ACTIONS(1536),
        [anon_sym_short] = ACTIONS(1536),
        [anon_sym_ushort] = ACTIONS(1536),
        [anon_sym_int] = ACTIONS(1536),
        [anon_sym_uint] = ACTIONS(1536),
        [anon_sym_long] = ACTIONS(1536),
        [anon_sym_ulong] = ACTIONS(1536),
        [anon_sym_char] = ACTIONS(1536),
        [anon_sym_unsafe] = ACTIONS(1526),
        [anon_sym_abstract] = ACTIONS(1526),
        [anon_sym_sealed] = ACTIONS(1526),
        [anon_sym_static] = ACTIONS(1526),
        [anon_sym_readonly] = ACTIONS(1536),
        [anon_sym_volatile] = ACTIONS(1536),
        [anon_sym_bool] = ACTIONS(1536),
        [anon_sym_decimal] = ACTIONS(1536),
        [anon_sym_double] = ACTIONS(1536),
        [anon_sym_float] = ACTIONS(1536),
        [anon_sym_object] = ACTIONS(1536),
        [anon_sym_string] = ACTIONS(1536),
        [sym_identifier_name] = ACTIONS(1545),
        [sym_comment] = ACTIONS(87),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(224),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(225),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(226),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(227),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(228),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(6),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(229),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(198),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(230),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(231),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(232),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(49),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(233),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(36),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(38),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(234),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(88),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(235),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(236),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(101),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(102),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(237),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(91),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(112),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(92),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(238),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(239),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(240),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(241),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(95),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(51),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(10),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(242),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(53),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(50),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(45),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(243),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(214),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(203),
    [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(244),
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
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
    [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(217),
    [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(204),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
    [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_declaration, 1),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
    [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
    [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4),
    [501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
    [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
    [515] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_base, 2),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 3),
    [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 4),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 4),
    [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 4),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 3),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
    [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
    [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
    [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
    [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 3),
    [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [661] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 4),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attribute_target_specifier, 2),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(220),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [717] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [724] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [727] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [734] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [742] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [752] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [762] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [770] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
    [782] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(318),
    [784] = {.count = 14, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3), REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [799] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3), REDUCE(sym__enum_body, 4),
    [802] = {.count = 14, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 3), REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [817] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__enum_body, 3), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [830] = {.count = 12, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__enum_body, 3), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym__enum_body, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attributes, 4),
    [849] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 4),
    [852] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 4),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
    [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__global_attribute_target_specifier, 2),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
    [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
    [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
    [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [871] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
    [881] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [886] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [892] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [896] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
    [898] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [901] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [904] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [907] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(275),
    [911] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(314),
    [914] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_enum_member_declaration, 2),
    [917] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1), REDUCE(sym_enum_member_declaration, 2),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [925] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(206),
    [929] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [932] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [935] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [940] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [945] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [952] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [959] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [962] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [965] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [970] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [973] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(313),
    [975] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [982] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [987] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [992] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2), REDUCE(aux_sym__enum_body_repeat1, 3), SHIFT(138),
    [996] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2), REDUCE(aux_sym__enum_body_repeat1, 3), SHIFT(139),
    [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [1002] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1005] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1008] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [1013] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1), REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1017] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3), SHIFT(30),
    [1021] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [1026] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1030] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(81),
    [1034] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_enum_member_declaration, 3),
    [1037] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2), REDUCE(sym_enum_member_declaration, 3),
    [1041] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1044] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
    [1049] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [1054] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [1057] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1060] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [1065] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(174),
    [1069] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(175),
    [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
    [1075] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
    [1080] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1089] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1098] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1107] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
    [1112] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1119] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1126] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [1135] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1142] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1149] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [1158] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1161] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1164] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
    [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [1177] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1180] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1183] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [1188] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1191] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1194] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1197] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1200] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1203] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
    [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
    [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
    [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
    [1216] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1219] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1222] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [1227] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1230] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1233] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1236] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1239] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1242] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1245] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1249] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1253] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
    [1259] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
    [1264] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1267] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1270] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1273] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1276] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [1281] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1284] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1287] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1290] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1295] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1300] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1305] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [1311] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1315] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6),
    [1319] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1323] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1327] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
    [1333] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [1339] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1343] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 3), REDUCE(sym_enum_declaration, 4), REDUCE(sym_enum_declaration, 5),
    [1347] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1355] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1363] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1370] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
    [1379] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1382] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1385] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1389] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
    [1394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
    [1396] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [1401] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1404] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [1409] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__enum_body_repeat1, 2), REDUCE(aux_sym__enum_body_repeat1, 3),
    [1412] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1415] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1418] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [1421] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2),
    [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
    [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [1432] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1436] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1440] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [1446] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1450] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1454] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1458] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1462] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1466] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [1472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [1474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
    [1476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
    [1478] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1482] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1486] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [1492] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1496] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1500] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1504] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1508] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1512] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1516] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1526] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1536] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1545] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
