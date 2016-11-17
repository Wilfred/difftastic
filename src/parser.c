#include "tree_sitter/parser.h"

#define STATE_COUNT 415
#define SYMBOL_COUNT 139
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
    anon_sym_LBRACK = 31,
    anon_sym_RBRACK = 32,
    anon_sym_LPAREN = 33,
    anon_sym_RPAREN = 34,
    anon_sym_assembly = 35,
    anon_sym_module = 36,
    anon_sym_readonly = 37,
    anon_sym_volatile = 38,
    anon_sym_EQ = 39,
    anon_sym_true = 40,
    anon_sym_false = 41,
    anon_sym_SQUOTE = 42,
    aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 43,
    sym__hexadecimal_escape_sequence = 44,
    aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 45,
    aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 46,
    anon_sym_BSLASH_SQUOTE = 47,
    anon_sym_BSLASH_DQUOTE = 48,
    anon_sym_BSLASH_BSLASH = 49,
    anon_sym_BSLASH0 = 50,
    anon_sym_BSLASHa = 51,
    anon_sym_BSLASHb = 52,
    anon_sym_BSLASHf = 53,
    anon_sym_BSLASHn = 54,
    anon_sym_BSLASHr = 55,
    anon_sym_BSLASHt = 56,
    anon_sym_BSLASHv = 57,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 58,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 59,
    sym__integer_type_suffix = 60,
    sym_null_literal = 61,
    anon_sym_DOT = 62,
    sym__real_type_suffix = 63,
    sym__exponent_part = 64,
    anon_sym_DQUOTE = 65,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 66,
    anon_sym_AT_DQUOTE = 67,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 68,
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
    sym__type_declaration = 82,
    sym_extern_alias_directive = 83,
    sym_using_directive = 84,
    sym_namespace_declaration = 85,
    sym_class_declaration = 86,
    sym_class_modifiers = 87,
    sym__class_modifiers = 88,
    sym_struct_declaration = 89,
    sym_struct_modifiers = 90,
    sym__struct_modifiers = 91,
    sym_enum_declaration = 92,
    sym_enum_member_declaration = 93,
    sym_enum_modifier = 94,
    sym__integral_type = 95,
    sym__attributes = 96,
    sym__attribute_section = 97,
    sym_attribute_list = 98,
    sym_attribute = 99,
    sym_attribute_argument_list = 100,
    sym__global_attributes = 101,
    sym_field_declaration = 102,
    sym_field_modifiers = 103,
    sym__field_modifiers = 104,
    sym_variable_declaration = 105,
    sym__type = 106,
    sym_generic_name = 107,
    sym_variable_declarator = 108,
    sym_equals_value_clause = 109,
    sym__literal = 110,
    sym_boolean_literal = 111,
    sym_character_literal = 112,
    sym__unicode_escape_sequence = 113,
    sym__simple_escape_sequence = 114,
    sym_integer_literal = 115,
    sym_real_literal = 116,
    sym_string_literal = 117,
    sym__regular_string_literal = 118,
    sym__regular_string_literal_character = 119,
    sym__verbatim_string_literal = 120,
    sym_predefined_type = 121,
    sym_type_parameter_list = 122,
    sym_type_parameter = 123,
    sym_qualified_name = 124,
    sym_alias_qualified_name = 125,
    sym_name_equals = 126,
    sym_static = 127,
    aux_sym_compilation_unit_repeat1 = 128,
    aux_sym_compilation_unit_repeat2 = 129,
    aux_sym_compilation_unit_repeat3 = 130,
    aux_sym_compilation_unit_repeat4 = 131,
    aux_sym_class_declaration_repeat1 = 132,
    aux_sym_enum_declaration_repeat1 = 133,
    aux_sym__attributes_repeat1 = 134,
    aux_sym_attribute_list_repeat1 = 135,
    aux_sym_variable_declaration_repeat1 = 136,
    aux_sym__regular_string_literal_repeat1 = 137,
    aux_sym_type_parameter_list_repeat1 = 138,
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
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_assembly] = "assembly",
    [anon_sym_module] = "module",
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
    [aux_sym__attributes_repeat1] = "_attributes_repeat1",
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
    [anon_sym_struct] = {
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
    [anon_sym_COLON] = {
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
    [sym__type_declaration] = {
        .visible = false,
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
    [sym_struct_declaration] = {
        .visible = true,
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
    [sym_enum_declaration] = {
        .visible = true,
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
    [sym__attributes] = {
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
    [sym__global_attributes] = {
        .visible = false,
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
    [aux_sym_compilation_unit_repeat4] = {
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
    [aux_sym_enum_declaration_repeat1] = {
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
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(360);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(361);
            LEX_ERROR();
        case 360:
            if (lookahead == 'e')
                ADVANCE(302);
            LEX_ERROR();
        case 361:
            if (lookahead == 'n')
                ADVANCE(339);
            LEX_ERROR();
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
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(360);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(363);
            if (lookahead == 'u')
                ADVANCE(361);
            LEX_ERROR();
        case 363:
            if (lookahead == 'e')
                ADVANCE(324);
            if (lookahead == 't')
                ADVANCE(364);
            LEX_ERROR();
        case 364:
            if (lookahead == 'a')
                ADVANCE(330);
            LEX_ERROR();
        case 365:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(365);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'e')
                ADVANCE(366);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(360);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(361);
            LEX_ERROR();
        case 366:
            if (lookahead == 'n')
                ADVANCE(277);
            LEX_ERROR();
        case 367:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(367);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(368);
            if (lookahead == 'm')
                ADVANCE(369);
            LEX_ERROR();
        case 368:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 369:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ADVANCE(366);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(361);
            if (lookahead == '}')
                ADVANCE(261);
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
                ADVANCE(366);
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
            if (lookahead == 'c')
                ADVANCE(271);
            LEX_ERROR();
        case 384:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(384);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(385);
            LEX_ERROR();
        case 385:
            if (lookahead == 't')
                ADVANCE(386);
            LEX_ERROR();
        case 386:
            if (lookahead == 'r')
                ADVANCE(334);
            LEX_ERROR();
        case 387:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(387);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(366);
            LEX_ERROR();
        case 388:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(388);
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
                ADVANCE(389);
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
        case 389:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 390:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(390);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(263);
            if (lookahead == 'c')
                ADVANCE(271);
            if (lookahead == 'e')
                ADVANCE(366);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(361);
            LEX_ERROR();
        case 391:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(391);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
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
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 394:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(394);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 395:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(395);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(396);
            if (lookahead == '{')
                ADVANCE(260);
            LEX_ERROR();
        case 396:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 397:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(397);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 398:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(398);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'b')
                ADVANCE(399);
            if (lookahead == 'c')
                ADVANCE(403);
            if (lookahead == 'i')
                ADVANCE(407);
            if (lookahead == 'l')
                ADVANCE(410);
            if (lookahead == 's')
                ADVANCE(414);
            if (lookahead == 'u')
                ADVANCE(423);
            LEX_ERROR();
        case 399:
            if (lookahead == 'y')
                ADVANCE(400);
            LEX_ERROR();
        case 400:
            if (lookahead == 't')
                ADVANCE(401);
            LEX_ERROR();
        case 401:
            if (lookahead == 'e')
                ADVANCE(402);
            LEX_ERROR();
        case 402:
            ACCEPT_TOKEN(anon_sym_byte);
        case 403:
            if (lookahead == 'h')
                ADVANCE(404);
            LEX_ERROR();
        case 404:
            if (lookahead == 'a')
                ADVANCE(405);
            LEX_ERROR();
        case 405:
            if (lookahead == 'r')
                ADVANCE(406);
            LEX_ERROR();
        case 406:
            ACCEPT_TOKEN(anon_sym_char);
        case 407:
            if (lookahead == 'n')
                ADVANCE(408);
            LEX_ERROR();
        case 408:
            if (lookahead == 't')
                ADVANCE(409);
            LEX_ERROR();
        case 409:
            ACCEPT_TOKEN(anon_sym_int);
        case 410:
            if (lookahead == 'o')
                ADVANCE(411);
            LEX_ERROR();
        case 411:
            if (lookahead == 'n')
                ADVANCE(412);
            LEX_ERROR();
        case 412:
            if (lookahead == 'g')
                ADVANCE(413);
            LEX_ERROR();
        case 413:
            ACCEPT_TOKEN(anon_sym_long);
        case 414:
            if (lookahead == 'b')
                ADVANCE(415);
            if (lookahead == 'h')
                ADVANCE(419);
            LEX_ERROR();
        case 415:
            if (lookahead == 'y')
                ADVANCE(416);
            LEX_ERROR();
        case 416:
            if (lookahead == 't')
                ADVANCE(417);
            LEX_ERROR();
        case 417:
            if (lookahead == 'e')
                ADVANCE(418);
            LEX_ERROR();
        case 418:
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 419:
            if (lookahead == 'o')
                ADVANCE(420);
            LEX_ERROR();
        case 420:
            if (lookahead == 'r')
                ADVANCE(421);
            LEX_ERROR();
        case 421:
            if (lookahead == 't')
                ADVANCE(422);
            LEX_ERROR();
        case 422:
            ACCEPT_TOKEN(anon_sym_short);
        case 423:
            if (lookahead == 'i')
                ADVANCE(424);
            if (lookahead == 'l')
                ADVANCE(427);
            if (lookahead == 's')
                ADVANCE(431);
            LEX_ERROR();
        case 424:
            if (lookahead == 'n')
                ADVANCE(425);
            LEX_ERROR();
        case 425:
            if (lookahead == 't')
                ADVANCE(426);
            LEX_ERROR();
        case 426:
            ACCEPT_TOKEN(anon_sym_uint);
        case 427:
            if (lookahead == 'o')
                ADVANCE(428);
            LEX_ERROR();
        case 428:
            if (lookahead == 'n')
                ADVANCE(429);
            LEX_ERROR();
        case 429:
            if (lookahead == 'g')
                ADVANCE(430);
            LEX_ERROR();
        case 430:
            ACCEPT_TOKEN(anon_sym_ulong);
        case 431:
            if (lookahead == 'h')
                ADVANCE(432);
            LEX_ERROR();
        case 432:
            if (lookahead == 'o')
                ADVANCE(433);
            LEX_ERROR();
        case 433:
            if (lookahead == 'r')
                ADVANCE(434);
            LEX_ERROR();
        case 434:
            if (lookahead == 't')
                ADVANCE(435);
            LEX_ERROR();
        case 435:
            ACCEPT_TOKEN(anon_sym_ushort);
        case 436:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(436);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(260);
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
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '}')
                ADVANCE(261);
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
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 439:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(439);
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
                ADVANCE(440);
            if (lookahead == 'n')
                ADVANCE(445);
            if (lookahead == 't')
                ADVANCE(449);
            LEX_ERROR();
        case 440:
            if (lookahead == 'a')
                ADVANCE(441);
            LEX_ERROR();
        case 441:
            if (lookahead == 'l')
                ADVANCE(442);
            LEX_ERROR();
        case 442:
            if (lookahead == 's')
                ADVANCE(443);
            LEX_ERROR();
        case 443:
            if (lookahead == 'e')
                ADVANCE(444);
            LEX_ERROR();
        case 444:
            ACCEPT_TOKEN(anon_sym_false);
        case 445:
            if (lookahead == 'u')
                ADVANCE(446);
            LEX_ERROR();
        case 446:
            if (lookahead == 'l')
                ADVANCE(447);
            LEX_ERROR();
        case 447:
            if (lookahead == 'l')
                ADVANCE(448);
            LEX_ERROR();
        case 448:
            ACCEPT_TOKEN(sym_null_literal);
        case 449:
            if (lookahead == 'r')
                ADVANCE(450);
            LEX_ERROR();
        case 450:
            if (lookahead == 'u')
                ADVANCE(451);
            LEX_ERROR();
        case 451:
            if (lookahead == 'e')
                ADVANCE(452);
            LEX_ERROR();
        case 452:
            ACCEPT_TOKEN(anon_sym_true);
        case 453:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(453);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 454:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(455);
            if (lookahead == '/')
                ADVANCE(456);
            if (lookahead == '\\')
                ADVANCE(457);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(455);
            LEX_ERROR();
        case 455:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 456:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 457:
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
        case 458:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(458);
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
                ADVANCE(459);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(460);
            if (lookahead == 'L')
                ADVANCE(461);
            if (lookahead == 'U')
                ADVANCE(463);
            if (lookahead == 'l')
                ADVANCE(461);
            if (lookahead == 'u')
                ADVANCE(463);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 459:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 460:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(28);
            LEX_ERROR();
        case 461:
            if (lookahead == 'U')
                ADVANCE(462);
            if (lookahead == 'u')
                ADVANCE(462);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 462:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 463:
            if (lookahead == 'L')
                ADVANCE(462);
            if (lookahead == 'l')
                ADVANCE(462);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 464:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(464);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == 'L')
                ADVANCE(461);
            if (lookahead == 'U')
                ADVANCE(463);
            if (lookahead == 'l')
                ADVANCE(461);
            if (lookahead == 'u')
                ADVANCE(463);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 465:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(465);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            LEX_ERROR();
        case 466:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(467);
            if (lookahead == '\n')
                SKIP(466);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(468);
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
                ADVANCE(467);
            LEX_ERROR();
        case 467:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 468:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 469:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(470);
            if (lookahead == '/')
                ADVANCE(471);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(475);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 470:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(470);
            if (lookahead == '/')
                ADVANCE(471);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(475);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 471:
            if (lookahead == '*')
                ADVANCE(472);
            if (lookahead == '/')
                ADVANCE(476);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(475);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 472:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(473);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*')))
                ADVANCE(472);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 473:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(474);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(472);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 474:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(475);
            ACCEPT_TOKEN(sym_comment);
        case 475:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(475);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 476:
            if (lookahead == '\n')
                ADVANCE(475);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(477);
            ACCEPT_TOKEN(sym_comment);
        case 477:
            if (lookahead == '\n')
                ADVANCE(475);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(477);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 478:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(478);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 479:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(467);
            if (lookahead == '\n')
                SKIP(479);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(468);
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
                ADVANCE(467);
            LEX_ERROR();
        case 480:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(480);
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
                ADVANCE(459);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(460);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 481:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(481);
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
                ADVANCE(459);
            if (lookahead == '}')
                ADVANCE(261);
            LEX_ERROR();
        case 482:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(482);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 483:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(483);
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
        case 484:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(484);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(260);
            LEX_ERROR();
        case 485:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(485);
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
                ADVANCE(389);
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
        case 486:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(486);
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
                ADVANCE(487);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(488);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 's')
                ADVANCE(491);
            if (lookahead == 'u')
                ADVANCE(494);
            LEX_ERROR();
        case 487:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 488:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(489);
            ACCEPT_TOKEN(sym_identifier_name);
        case 489:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(490);
            ACCEPT_TOKEN(sym_identifier_name);
        case 490:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_int);
        case 491:
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
                ADVANCE(492);
            ACCEPT_TOKEN(sym_identifier_name);
        case 492:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(493);
            ACCEPT_TOKEN(sym_identifier_name);
        case 493:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier_name);
        case 494:
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
        case 495:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(495);
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
                ADVANCE(389);
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
        case 496:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(496);
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
                ADVANCE(389);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(497);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            LEX_ERROR();
        case 497:
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
                ADVANCE(498);
            ACCEPT_TOKEN(sym_identifier_name);
        case 498:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(216);
            if (lookahead == 'r')
                ADVANCE(493);
            ACCEPT_TOKEN(sym_identifier_name);
        case 499:
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
                ADVANCE(389);
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
        case 500:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(500);
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
        case 501:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(501);
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
                ADVANCE(487);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(136);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'n')
                ADVANCE(389);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(502);
            if (lookahead == 'u')
                ADVANCE(380);
            if (lookahead == 'v')
                ADVANCE(252);
            LEX_ERROR();
        case 502:
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
                ADVANCE(498);
            ACCEPT_TOKEN(sym_identifier_name);
        case 503:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(503);
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
        case 504:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(504);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
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
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
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
            if (lookahead == ';')
                ADVANCE(19);
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
            LEX_ERROR();
        case 508:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(508);
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
        case 509:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(509);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(396);
            LEX_ERROR();
        case 510:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(510);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(511);
            LEX_ERROR();
        case 511:
            if (lookahead == ':')
                ADVANCE(18);
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
            if (lookahead == '{')
                ADVANCE(260);
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
            LEX_ERROR();
        case 514:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(514);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '{')
                ADVANCE(260);
            LEX_ERROR();
        case 515:
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
                ADVANCE(366);
            if (lookahead == 'i')
                ADVANCE(285);
            if (lookahead == 'n')
                ADVANCE(293);
            if (lookahead == 'p')
                ADVANCE(304);
            if (lookahead == 's')
                ADVANCE(323);
            if (lookahead == 'u')
                ADVANCE(361);
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
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(522);
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
                ADVANCE(389);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 'p')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(193);
            if (lookahead == 's')
                ADVANCE(497);
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
                ADVANCE(487);
            if (lookahead == 'i')
                ADVANCE(488);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 's')
                ADVANCE(525);
            if (lookahead == 'u')
                ADVANCE(494);
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
                ADVANCE(487);
            if (lookahead == 'd')
                ADVANCE(375);
            if (lookahead == 'f')
                ADVANCE(377);
            if (lookahead == 'i')
                ADVANCE(488);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'o')
                ADVANCE(168);
            if (lookahead == 's')
                ADVANCE(491);
            if (lookahead == 'u')
                ADVANCE(494);
            LEX_ERROR();
        case 527:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(527);
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
        case 528:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(528);
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
                ADVANCE(529);
            if (lookahead == 'g')
                ADVANCE(130);
            if (lookahead == 'n')
                ADVANCE(530);
            if (lookahead == 't')
                ADVANCE(227);
            LEX_ERROR();
        case 529:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 530:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier_name);
        case 531:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(455);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(456);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(457);
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
                ADVANCE(455);
            LEX_ERROR();
        case 532:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(532);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 533:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(467);
            if (lookahead == '\n')
                SKIP(533);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(468);
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
                ADVANCE(467);
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
                ADVANCE(396);
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
    [6] = 359,
    [7] = 362,
    [8] = 365,
    [9] = 358,
    [10] = 358,
    [11] = 367,
    [12] = 370,
    [13] = 371,
    [14] = 262,
    [15] = 372,
    [16] = 373,
    [17] = 383,
    [18] = 383,
    [19] = 384,
    [20] = 384,
    [21] = 387,
    [22] = 365,
    [23] = 388,
    [24] = 390,
    [25] = 262,
    [26] = 372,
    [27] = 390,
    [28] = 390,
    [29] = 388,
    [30] = 358,
    [31] = 388,
    [32] = 391,
    [33] = 392,
    [34] = 393,
    [35] = 358,
    [36] = 393,
    [37] = 358,
    [38] = 393,
    [39] = 393,
    [40] = 388,
    [41] = 394,
    [42] = 393,
    [43] = 393,
    [44] = 371,
    [45] = 390,
    [46] = 390,
    [47] = 372,
    [48] = 390,
    [49] = 390,
    [50] = 262,
    [51] = 372,
    [52] = 390,
    [53] = 390,
    [54] = 358,
    [55] = 358,
    [56] = 358,
    [57] = 383,
    [58] = 384,
    [59] = 387,
    [60] = 358,
    [61] = 395,
    [62] = 397,
    [63] = 398,
    [64] = 436,
    [65] = 436,
    [66] = 397,
    [67] = 437,
    [68] = 438,
    [69] = 358,
    [70] = 437,
    [71] = 439,
    [72] = 438,
    [73] = 453,
    [74] = 454,
    [75] = 458,
    [76] = 464,
    [77] = 453,
    [78] = 465,
    [79] = 466,
    [80] = 469,
    [81] = 453,
    [82] = 453,
    [83] = 478,
    [84] = 453,
    [85] = 466,
    [86] = 479,
    [87] = 479,
    [88] = 453,
    [89] = 466,
    [90] = 466,
    [91] = 453,
    [92] = 466,
    [93] = 480,
    [94] = 453,
    [95] = 481,
    [96] = 453,
    [97] = 453,
    [98] = 465,
    [99] = 453,
    [100] = 481,
    [101] = 480,
    [102] = 481,
    [103] = 453,
    [104] = 482,
    [105] = 482,
    [106] = 482,
    [107] = 453,
    [108] = 483,
    [109] = 397,
    [110] = 438,
    [111] = 483,
    [112] = 397,
    [113] = 438,
    [114] = 373,
    [115] = 438,
    [116] = 373,
    [117] = 438,
    [118] = 438,
    [119] = 483,
    [120] = 438,
    [121] = 483,
    [122] = 373,
    [123] = 373,
    [124] = 358,
    [125] = 484,
    [126] = 485,
    [127] = 486,
    [128] = 436,
    [129] = 485,
    [130] = 373,
    [131] = 495,
    [132] = 496,
    [133] = 499,
    [134] = 500,
    [135] = 501,
    [136] = 503,
    [137] = 485,
    [138] = 499,
    [139] = 486,
    [140] = 486,
    [141] = 504,
    [142] = 358,
    [143] = 500,
    [144] = 485,
    [145] = 373,
    [146] = 485,
    [147] = 505,
    [148] = 506,
    [149] = 358,
    [150] = 506,
    [151] = 358,
    [152] = 506,
    [153] = 506,
    [154] = 506,
    [155] = 485,
    [156] = 504,
    [157] = 485,
    [158] = 486,
    [159] = 504,
    [160] = 485,
    [161] = 373,
    [162] = 485,
    [163] = 358,
    [164] = 484,
    [165] = 485,
    [166] = 436,
    [167] = 485,
    [168] = 373,
    [169] = 485,
    [170] = 373,
    [171] = 373,
    [172] = 485,
    [173] = 395,
    [174] = 397,
    [175] = 398,
    [176] = 436,
    [177] = 397,
    [178] = 438,
    [179] = 438,
    [180] = 438,
    [181] = 483,
    [182] = 438,
    [183] = 373,
    [184] = 484,
    [185] = 485,
    [186] = 436,
    [187] = 373,
    [188] = 485,
    [189] = 484,
    [190] = 485,
    [191] = 436,
    [192] = 373,
    [193] = 485,
    [194] = 500,
    [195] = 507,
    [196] = 507,
    [197] = 486,
    [198] = 508,
    [199] = 507,
    [200] = 486,
    [201] = 508,
    [202] = 507,
    [203] = 507,
    [204] = 486,
    [205] = 395,
    [206] = 397,
    [207] = 398,
    [208] = 436,
    [209] = 438,
    [210] = 483,
    [211] = 438,
    [212] = 373,
    [213] = 484,
    [214] = 485,
    [215] = 436,
    [216] = 373,
    [217] = 485,
    [218] = 383,
    [219] = 384,
    [220] = 484,
    [221] = 485,
    [222] = 436,
    [223] = 373,
    [224] = 485,
    [225] = 509,
    [226] = 358,
    [227] = 392,
    [228] = 390,
    [229] = 510,
    [230] = 512,
    [231] = 513,
    [232] = 358,
    [233] = 514,
    [234] = 515,
    [235] = 371,
    [236] = 515,
    [237] = 371,
    [238] = 358,
    [239] = 513,
    [240] = 357,
    [241] = 516,
    [242] = 517,
    [243] = 357,
    [244] = 517,
    [245] = 372,
    [246] = 372,
    [247] = 357,
    [248] = 358,
    [249] = 504,
    [250] = 262,
    [251] = 518,
    [252] = 521,
    [253] = 483,
    [254] = 358,
    [255] = 522,
    [256] = 358,
    [257] = 358,
    [258] = 523,
    [259] = 526,
    [260] = 508,
    [261] = 527,
    [262] = 528,
    [263] = 531,
    [264] = 479,
    [265] = 458,
    [266] = 532,
    [267] = 453,
    [268] = 481,
    [269] = 533,
    [270] = 508,
    [271] = 534,
    [272] = 373,
    [273] = 262,
    [274] = 372,
    [275] = 371,
    [276] = 383,
    [277] = 383,
    [278] = 384,
    [279] = 384,
    [280] = 438,
    [281] = 387,
    [282] = 436,
    [283] = 499,
    [284] = 388,
    [285] = 392,
    [286] = 393,
    [287] = 390,
    [288] = 485,
    [289] = 486,
    [290] = 486,
    [291] = 504,
    [292] = 500,
    [293] = 506,
    [294] = 453,
    [295] = 466,
    [296] = 508,
    [297] = 507,
    [298] = 514,
    [299] = 372,
    [300] = 390,
    [301] = 371,
    [302] = 485,
    [303] = 438,
    [304] = 483,
    [305] = 373,
    [306] = 373,
    [307] = 390,
    [308] = 390,
    [309] = 390,
    [310] = 390,
    [311] = 372,
    [312] = 485,
    [313] = 373,
    [314] = 485,
    [315] = 373,
    [316] = 485,
    [317] = 504,
    [318] = 485,
    [319] = 535,
    [320] = 397,
    [321] = 438,
    [322] = 483,
    [323] = 438,
    [324] = 483,
    [325] = 373,
    [326] = 373,
    [327] = 358,
    [328] = 395,
    [329] = 397,
    [330] = 398,
    [331] = 436,
    [332] = 397,
    [333] = 438,
    [334] = 483,
    [335] = 438,
    [336] = 483,
    [337] = 373,
    [338] = 373,
    [339] = 438,
    [340] = 483,
    [341] = 438,
    [342] = 483,
    [343] = 373,
    [344] = 373,
    [345] = 483,
    [346] = 373,
    [347] = 358,
    [348] = 484,
    [349] = 485,
    [350] = 436,
    [351] = 485,
    [352] = 373,
    [353] = 485,
    [354] = 373,
    [355] = 373,
    [356] = 485,
    [357] = 358,
    [358] = 484,
    [359] = 485,
    [360] = 436,
    [361] = 485,
    [362] = 373,
    [363] = 485,
    [364] = 373,
    [365] = 373,
    [366] = 485,
    [367] = 262,
    [368] = 521,
    [369] = 398,
    [370] = 373,
    [371] = 535,
    [372] = 521,
    [373] = 438,
    [374] = 485,
    [375] = 483,
    [376] = 438,
    [377] = 483,
    [378] = 373,
    [379] = 373,
    [380] = 453,
    [381] = 480,
    [382] = 453,
    [383] = 481,
    [384] = 453,
    [385] = 453,
    [386] = 536,
    [387] = 438,
    [388] = 393,
    [389] = 506,
    [390] = 507,
    [391] = 453,
    [392] = 395,
    [393] = 397,
    [394] = 484,
    [395] = 485,
    [396] = 436,
    [397] = 485,
    [398] = 373,
    [399] = 485,
    [400] = 373,
    [401] = 373,
    [402] = 485,
    [403] = 484,
    [404] = 485,
    [405] = 436,
    [406] = 485,
    [407] = 373,
    [408] = 485,
    [409] = 373,
    [410] = 373,
    [411] = 485,
    [412] = 373,
    [413] = 373,
    [414] = 438,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(12),
        [sym__type_declaration] = STATE(272),
        [sym_extern_alias_directive] = STATE(273),
        [sym_using_directive] = STATE(274),
        [sym_namespace_declaration] = STATE(275),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(276),
        [sym__class_modifiers] = STATE(277),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(278),
        [sym__struct_modifiers] = STATE(279),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_member_declaration] = STATE(280),
        [sym_enum_modifier] = STATE(281),
        [sym__integral_type] = STATE(282),
        [sym__attributes] = STATE(283),
        [sym__attribute_section] = STATE(284),
        [sym_attribute_list] = STATE(285),
        [sym_attribute] = STATE(286),
        [sym_attribute_argument_list] = STATE(42),
        [sym__global_attributes] = STATE(287),
        [sym_field_declaration] = STATE(288),
        [sym_field_modifiers] = STATE(289),
        [sym__field_modifiers] = STATE(290),
        [sym_variable_declaration] = STATE(291),
        [sym__type] = STATE(292),
        [sym_generic_name] = STATE(143),
        [sym_variable_declarator] = STATE(293),
        [sym_equals_value_clause] = STATE(294),
        [sym__literal] = STATE(81),
        [sym_boolean_literal] = STATE(77),
        [sym_character_literal] = STATE(77),
        [sym__unicode_escape_sequence] = STATE(264),
        [sym__simple_escape_sequence] = STATE(264),
        [sym_integer_literal] = STATE(77),
        [sym_real_literal] = STATE(77),
        [sym_string_literal] = STATE(77),
        [sym__regular_string_literal] = STATE(82),
        [sym__regular_string_literal_character] = STATE(295),
        [sym__verbatim_string_literal] = STATE(82),
        [sym_predefined_type] = STATE(143),
        [sym_type_parameter_list] = STATE(296),
        [sym_type_parameter] = STATE(297),
        [sym_qualified_name] = STATE(298),
        [sym_alias_qualified_name] = STATE(231),
        [sym_name_equals] = STATE(243),
        [sym_static] = STATE(243),
        [aux_sym_compilation_unit_repeat1] = STATE(25),
        [aux_sym_compilation_unit_repeat2] = STATE(299),
        [aux_sym_compilation_unit_repeat3] = STATE(300),
        [aux_sym_compilation_unit_repeat4] = STATE(301),
        [aux_sym_class_declaration_repeat1] = STATE(302),
        [aux_sym_enum_declaration_repeat1] = STATE(303),
        [aux_sym__attributes_repeat1] = STATE(29),
        [aux_sym_attribute_list_repeat1] = STATE(36),
        [aux_sym_variable_declaration_repeat1] = STATE(150),
        [aux_sym__regular_string_literal_repeat1] = STATE(90),
        [aux_sym_type_parameter_list_repeat1] = STATE(199),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_extern] = ACTIONS(3),
        [anon_sym_alias] = ACTIONS(5),
        [anon_sym_SEMI] = ACTIONS(7),
        [anon_sym_using] = ACTIONS(9),
        [anon_sym_namespace] = ACTIONS(11),
        [anon_sym_LBRACE] = ACTIONS(13),
        [anon_sym_RBRACE] = ACTIONS(15),
        [anon_sym_class] = ACTIONS(17),
        [anon_sym_unsafe] = ACTIONS(19),
        [anon_sym_abstract] = ACTIONS(21),
        [anon_sym_sealed] = ACTIONS(21),
        [anon_sym_static] = ACTIONS(23),
        [anon_sym_new] = ACTIONS(25),
        [anon_sym_public] = ACTIONS(25),
        [anon_sym_protected] = ACTIONS(25),
        [anon_sym_internal] = ACTIONS(25),
        [anon_sym_private] = ACTIONS(25),
        [anon_sym_struct] = ACTIONS(27),
        [anon_sym_enum] = ACTIONS(29),
        [anon_sym_COLON] = ACTIONS(31),
        [anon_sym_COMMA] = ACTIONS(33),
        [anon_sym_sbyte] = ACTIONS(35),
        [anon_sym_byte] = ACTIONS(35),
        [anon_sym_short] = ACTIONS(35),
        [anon_sym_ushort] = ACTIONS(35),
        [anon_sym_int] = ACTIONS(35),
        [anon_sym_uint] = ACTIONS(35),
        [anon_sym_long] = ACTIONS(35),
        [anon_sym_ulong] = ACTIONS(35),
        [anon_sym_char] = ACTIONS(35),
        [anon_sym_LBRACK] = ACTIONS(37),
        [anon_sym_RBRACK] = ACTIONS(39),
        [anon_sym_LPAREN] = ACTIONS(41),
        [anon_sym_RPAREN] = ACTIONS(43),
        [anon_sym_assembly] = ACTIONS(45),
        [anon_sym_module] = ACTIONS(45),
        [anon_sym_readonly] = ACTIONS(47),
        [anon_sym_volatile] = ACTIONS(47),
        [anon_sym_EQ] = ACTIONS(49),
        [anon_sym_true] = ACTIONS(51),
        [anon_sym_false] = ACTIONS(51),
        [anon_sym_SQUOTE] = ACTIONS(53),
        [sym__hexadecimal_escape_sequence] = ACTIONS(55),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(57),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(57),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(59),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(59),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(59),
        [anon_sym_BSLASH0] = ACTIONS(59),
        [anon_sym_BSLASHa] = ACTIONS(59),
        [anon_sym_BSLASHb] = ACTIONS(59),
        [anon_sym_BSLASHf] = ACTIONS(59),
        [anon_sym_BSLASHn] = ACTIONS(59),
        [anon_sym_BSLASHr] = ACTIONS(59),
        [anon_sym_BSLASHt] = ACTIONS(59),
        [anon_sym_BSLASHv] = ACTIONS(59),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(61),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(63),
        [sym__integer_type_suffix] = ACTIONS(65),
        [sym_null_literal] = ACTIONS(67),
        [anon_sym_DOT] = ACTIONS(69),
        [sym__real_type_suffix] = ACTIONS(71),
        [sym__exponent_part] = ACTIONS(73),
        [anon_sym_DQUOTE] = ACTIONS(75),
        [anon_sym_AT_DQUOTE] = ACTIONS(77),
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
        [sym__type_declaration] = STATE(13),
        [sym_extern_alias_directive] = STATE(14),
        [sym_using_directive] = STATE(15),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [sym__global_attributes] = STATE(24),
        [aux_sym_compilation_unit_repeat1] = STATE(25),
        [aux_sym_compilation_unit_repeat2] = STATE(26),
        [aux_sym_compilation_unit_repeat3] = STATE(27),
        [aux_sym_compilation_unit_repeat4] = STATE(28),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_extern] = ACTIONS(95),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [2] = {
        [anon_sym_alias] = ACTIONS(115),
        [sym_comment] = ACTIONS(91),
    },
    [3] = {
        [sym_qualified_name] = STATE(242),
        [sym_alias_qualified_name] = STATE(231),
        [sym_name_equals] = STATE(243),
        [sym_static] = STATE(243),
        [anon_sym_static] = ACTIONS(117),
        [sym_global] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(91),
    },
    [4] = {
        [sym_qualified_name] = STATE(230),
        [sym_alias_qualified_name] = STATE(231),
        [sym_global] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(91),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(125),
        [sym_comment] = ACTIONS(91),
    },
    [6] = {
        [sym__class_modifiers] = STATE(218),
        [sym__struct_modifiers] = STATE(219),
        [anon_sym_class] = ACTIONS(127),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_struct] = ACTIONS(129),
        [sym_comment] = ACTIONS(91),
    },
    [7] = {
        [sym__class_modifiers] = STATE(218),
        [anon_sym_class] = ACTIONS(127),
        [anon_sym_unsafe] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(105),
        [anon_sym_public] = ACTIONS(105),
        [anon_sym_protected] = ACTIONS(105),
        [anon_sym_internal] = ACTIONS(105),
        [anon_sym_private] = ACTIONS(105),
        [sym_comment] = ACTIONS(91),
    },
    [8] = {
        [sym__class_modifiers] = STATE(218),
        [sym__struct_modifiers] = STATE(219),
        [anon_sym_class] = ACTIONS(127),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_struct] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [sym_comment] = ACTIONS(91),
    },
    [9] = {
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(91),
    },
    [10] = {
        [sym_identifier_name] = ACTIONS(135),
        [sym_comment] = ACTIONS(91),
    },
    [11] = {
        [sym_attribute_list] = STATE(33),
        [sym_attribute] = STATE(34),
        [anon_sym_assembly] = ACTIONS(137),
        [anon_sym_module] = ACTIONS(137),
        [sym_identifier_name] = ACTIONS(139),
        [sym_comment] = ACTIONS(91),
    },
    [12] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [sym_comment] = ACTIONS(91),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(143),
        [anon_sym_namespace] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_unsafe] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(143),
        [anon_sym_sealed] = ACTIONS(143),
        [anon_sym_static] = ACTIONS(143),
        [anon_sym_new] = ACTIONS(143),
        [anon_sym_public] = ACTIONS(143),
        [anon_sym_protected] = ACTIONS(143),
        [anon_sym_internal] = ACTIONS(143),
        [anon_sym_private] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_enum] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(143),
        [sym_comment] = ACTIONS(91),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_extern] = ACTIONS(145),
        [anon_sym_using] = ACTIONS(145),
        [anon_sym_namespace] = ACTIONS(145),
        [anon_sym_class] = ACTIONS(145),
        [anon_sym_unsafe] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(145),
        [anon_sym_new] = ACTIONS(145),
        [anon_sym_public] = ACTIONS(145),
        [anon_sym_protected] = ACTIONS(145),
        [anon_sym_internal] = ACTIONS(145),
        [anon_sym_private] = ACTIONS(145),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_enum] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(145),
        [sym_comment] = ACTIONS(91),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_using] = ACTIONS(147),
        [anon_sym_namespace] = ACTIONS(147),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_unsafe] = ACTIONS(147),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(147),
        [anon_sym_public] = ACTIONS(147),
        [anon_sym_protected] = ACTIONS(147),
        [anon_sym_internal] = ACTIONS(147),
        [anon_sym_private] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(147),
        [anon_sym_enum] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [sym_comment] = ACTIONS(91),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(149),
        [anon_sym_namespace] = ACTIONS(151),
        [anon_sym_RBRACE] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(151),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_enum] = ACTIONS(151),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(149),
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
        [anon_sym_class] = ACTIONS(155),
        [sym_comment] = ACTIONS(91),
    },
    [18] = {
        [anon_sym_class] = ACTIONS(157),
        [sym_comment] = ACTIONS(91),
    },
    [19] = {
        [anon_sym_struct] = ACTIONS(159),
        [sym_comment] = ACTIONS(91),
    },
    [20] = {
        [anon_sym_struct] = ACTIONS(161),
        [sym_comment] = ACTIONS(91),
    },
    [21] = {
        [anon_sym_enum] = ACTIONS(163),
        [sym_comment] = ACTIONS(91),
    },
    [22] = {
        [sym_class_modifiers] = STATE(57),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(58),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_modifier] = STATE(59),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_enum] = ACTIONS(163),
        [sym_comment] = ACTIONS(91),
    },
    [23] = {
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_abstract] = ACTIONS(165),
        [anon_sym_sealed] = ACTIONS(165),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(165),
        [anon_sym_enum] = ACTIONS(165),
        [anon_sym_sbyte] = ACTIONS(165),
        [anon_sym_byte] = ACTIONS(165),
        [anon_sym_short] = ACTIONS(165),
        [anon_sym_ushort] = ACTIONS(165),
        [anon_sym_int] = ACTIONS(165),
        [anon_sym_uint] = ACTIONS(165),
        [anon_sym_long] = ACTIONS(165),
        [anon_sym_ulong] = ACTIONS(165),
        [anon_sym_char] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(165),
        [anon_sym_volatile] = ACTIONS(165),
        [anon_sym_bool] = ACTIONS(165),
        [anon_sym_decimal] = ACTIONS(165),
        [anon_sym_double] = ACTIONS(165),
        [anon_sym_float] = ACTIONS(165),
        [anon_sym_object] = ACTIONS(165),
        [anon_sym_string] = ACTIONS(165),
        [sym_identifier_name] = ACTIONS(169),
        [sym_comment] = ACTIONS(91),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_namespace] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_unsafe] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(171),
        [anon_sym_sealed] = ACTIONS(171),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(171),
        [anon_sym_public] = ACTIONS(171),
        [anon_sym_protected] = ACTIONS(171),
        [anon_sym_internal] = ACTIONS(171),
        [anon_sym_private] = ACTIONS(171),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_enum] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(171),
        [sym_comment] = ACTIONS(91),
    },
    [25] = {
        [sym__type_declaration] = STATE(13),
        [sym_extern_alias_directive] = STATE(50),
        [sym_using_directive] = STATE(15),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [sym__global_attributes] = STATE(24),
        [aux_sym_compilation_unit_repeat2] = STATE(51),
        [aux_sym_compilation_unit_repeat3] = STATE(48),
        [aux_sym_compilation_unit_repeat4] = STATE(46),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_extern] = ACTIONS(95),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [26] = {
        [sym__type_declaration] = STATE(13),
        [sym_using_directive] = STATE(47),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [sym__global_attributes] = STATE(24),
        [aux_sym_compilation_unit_repeat3] = STATE(48),
        [aux_sym_compilation_unit_repeat4] = STATE(46),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [27] = {
        [sym__type_declaration] = STATE(13),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [sym__global_attributes] = STATE(45),
        [aux_sym_compilation_unit_repeat4] = STATE(46),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [28] = {
        [sym__type_declaration] = STATE(44),
        [sym_namespace_declaration] = STATE(44),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(91),
    },
    [29] = {
        [sym__attribute_section] = STATE(31),
        [anon_sym_class] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_abstract] = ACTIONS(177),
        [anon_sym_sealed] = ACTIONS(177),
        [anon_sym_static] = ACTIONS(177),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_struct] = ACTIONS(177),
        [anon_sym_enum] = ACTIONS(177),
        [anon_sym_sbyte] = ACTIONS(177),
        [anon_sym_byte] = ACTIONS(177),
        [anon_sym_short] = ACTIONS(177),
        [anon_sym_ushort] = ACTIONS(177),
        [anon_sym_int] = ACTIONS(177),
        [anon_sym_uint] = ACTIONS(177),
        [anon_sym_long] = ACTIONS(177),
        [anon_sym_ulong] = ACTIONS(177),
        [anon_sym_char] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(177),
        [anon_sym_volatile] = ACTIONS(177),
        [anon_sym_bool] = ACTIONS(177),
        [anon_sym_decimal] = ACTIONS(177),
        [anon_sym_double] = ACTIONS(177),
        [anon_sym_float] = ACTIONS(177),
        [anon_sym_object] = ACTIONS(177),
        [anon_sym_string] = ACTIONS(177),
        [sym_identifier_name] = ACTIONS(179),
        [sym_comment] = ACTIONS(91),
    },
    [30] = {
        [sym_attribute_list] = STATE(33),
        [sym_attribute] = STATE(34),
        [sym_identifier_name] = ACTIONS(181),
        [sym_comment] = ACTIONS(91),
    },
    [31] = {
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
        [anon_sym_struct] = ACTIONS(183),
        [anon_sym_enum] = ACTIONS(183),
        [anon_sym_sbyte] = ACTIONS(183),
        [anon_sym_byte] = ACTIONS(183),
        [anon_sym_short] = ACTIONS(183),
        [anon_sym_ushort] = ACTIONS(183),
        [anon_sym_int] = ACTIONS(183),
        [anon_sym_uint] = ACTIONS(183),
        [anon_sym_long] = ACTIONS(183),
        [anon_sym_ulong] = ACTIONS(183),
        [anon_sym_char] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(185),
        [anon_sym_readonly] = ACTIONS(183),
        [anon_sym_volatile] = ACTIONS(183),
        [anon_sym_bool] = ACTIONS(183),
        [anon_sym_decimal] = ACTIONS(183),
        [anon_sym_double] = ACTIONS(183),
        [anon_sym_float] = ACTIONS(183),
        [anon_sym_object] = ACTIONS(183),
        [anon_sym_string] = ACTIONS(183),
        [sym_identifier_name] = ACTIONS(187),
        [sym_comment] = ACTIONS(91),
    },
    [32] = {
        [sym_attribute_argument_list] = STATE(42),
        [anon_sym_COMMA] = ACTIONS(189),
        [anon_sym_RBRACK] = ACTIONS(189),
        [anon_sym_LPAREN] = ACTIONS(191),
        [sym_comment] = ACTIONS(91),
    },
    [33] = {
        [anon_sym_RBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(91),
    },
    [34] = {
        [aux_sym_attribute_list_repeat1] = STATE(36),
        [anon_sym_COMMA] = ACTIONS(195),
        [anon_sym_RBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(91),
    },
    [35] = {
        [sym_attribute] = STATE(39),
        [sym_identifier_name] = ACTIONS(181),
        [sym_comment] = ACTIONS(91),
    },
    [36] = {
        [anon_sym_COMMA] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(91),
    },
    [37] = {
        [sym_attribute] = STATE(38),
        [sym_identifier_name] = ACTIONS(181),
        [sym_comment] = ACTIONS(91),
    },
    [38] = {
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(203),
        [sym_comment] = ACTIONS(91),
    },
    [39] = {
        [anon_sym_COMMA] = ACTIONS(205),
        [anon_sym_RBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(91),
    },
    [40] = {
        [anon_sym_class] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_abstract] = ACTIONS(207),
        [anon_sym_sealed] = ACTIONS(207),
        [anon_sym_static] = ACTIONS(207),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_struct] = ACTIONS(207),
        [anon_sym_enum] = ACTIONS(207),
        [anon_sym_sbyte] = ACTIONS(207),
        [anon_sym_byte] = ACTIONS(207),
        [anon_sym_short] = ACTIONS(207),
        [anon_sym_ushort] = ACTIONS(207),
        [anon_sym_int] = ACTIONS(207),
        [anon_sym_uint] = ACTIONS(207),
        [anon_sym_long] = ACTIONS(207),
        [anon_sym_ulong] = ACTIONS(207),
        [anon_sym_char] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(209),
        [anon_sym_readonly] = ACTIONS(207),
        [anon_sym_volatile] = ACTIONS(207),
        [anon_sym_bool] = ACTIONS(207),
        [anon_sym_decimal] = ACTIONS(207),
        [anon_sym_double] = ACTIONS(207),
        [anon_sym_float] = ACTIONS(207),
        [anon_sym_object] = ACTIONS(207),
        [anon_sym_string] = ACTIONS(207),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(91),
    },
    [41] = {
        [anon_sym_RPAREN] = ACTIONS(213),
        [sym_comment] = ACTIONS(91),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(215),
        [sym_comment] = ACTIONS(91),
    },
    [43] = {
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(91),
    },
    [44] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_namespace] = ACTIONS(219),
        [anon_sym_RBRACE] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(219),
        [anon_sym_unsafe] = ACTIONS(219),
        [anon_sym_abstract] = ACTIONS(219),
        [anon_sym_sealed] = ACTIONS(219),
        [anon_sym_static] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(219),
        [anon_sym_public] = ACTIONS(219),
        [anon_sym_protected] = ACTIONS(219),
        [anon_sym_internal] = ACTIONS(219),
        [anon_sym_private] = ACTIONS(219),
        [anon_sym_struct] = ACTIONS(219),
        [anon_sym_enum] = ACTIONS(219),
        [anon_sym_LBRACK] = ACTIONS(219),
        [sym_comment] = ACTIONS(91),
    },
    [45] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_namespace] = ACTIONS(221),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_unsafe] = ACTIONS(221),
        [anon_sym_abstract] = ACTIONS(221),
        [anon_sym_sealed] = ACTIONS(221),
        [anon_sym_static] = ACTIONS(221),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(221),
        [anon_sym_enum] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(221),
        [sym_comment] = ACTIONS(91),
    },
    [46] = {
        [sym__type_declaration] = STATE(44),
        [sym_namespace_declaration] = STATE(44),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(91),
    },
    [47] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_using] = ACTIONS(225),
        [anon_sym_namespace] = ACTIONS(225),
        [anon_sym_class] = ACTIONS(225),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(225),
        [anon_sym_sealed] = ACTIONS(225),
        [anon_sym_static] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(225),
        [anon_sym_public] = ACTIONS(225),
        [anon_sym_protected] = ACTIONS(225),
        [anon_sym_internal] = ACTIONS(225),
        [anon_sym_private] = ACTIONS(225),
        [anon_sym_struct] = ACTIONS(225),
        [anon_sym_enum] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(91),
    },
    [48] = {
        [sym__type_declaration] = STATE(13),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [sym__global_attributes] = STATE(45),
        [aux_sym_compilation_unit_repeat4] = STATE(49),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [49] = {
        [sym__type_declaration] = STATE(44),
        [sym_namespace_declaration] = STATE(44),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(91),
    },
    [50] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_extern] = ACTIONS(229),
        [anon_sym_using] = ACTIONS(229),
        [anon_sym_namespace] = ACTIONS(229),
        [anon_sym_class] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(229),
        [anon_sym_abstract] = ACTIONS(229),
        [anon_sym_sealed] = ACTIONS(229),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_new] = ACTIONS(229),
        [anon_sym_public] = ACTIONS(229),
        [anon_sym_protected] = ACTIONS(229),
        [anon_sym_internal] = ACTIONS(229),
        [anon_sym_private] = ACTIONS(229),
        [anon_sym_struct] = ACTIONS(229),
        [anon_sym_enum] = ACTIONS(229),
        [anon_sym_LBRACK] = ACTIONS(229),
        [sym_comment] = ACTIONS(91),
    },
    [51] = {
        [sym__type_declaration] = STATE(13),
        [sym_using_directive] = STATE(47),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [sym__global_attributes] = STATE(24),
        [aux_sym_compilation_unit_repeat3] = STATE(52),
        [aux_sym_compilation_unit_repeat4] = STATE(49),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [52] = {
        [sym__type_declaration] = STATE(13),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [sym__global_attributes] = STATE(45),
        [aux_sym_compilation_unit_repeat4] = STATE(53),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [53] = {
        [sym__type_declaration] = STATE(44),
        [sym_namespace_declaration] = STATE(44),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(91),
    },
    [54] = {
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(91),
    },
    [55] = {
        [sym_identifier_name] = ACTIONS(235),
        [sym_comment] = ACTIONS(91),
    },
    [56] = {
        [sym_identifier_name] = ACTIONS(237),
        [sym_comment] = ACTIONS(91),
    },
    [57] = {
        [anon_sym_class] = ACTIONS(239),
        [sym_comment] = ACTIONS(91),
    },
    [58] = {
        [anon_sym_struct] = ACTIONS(241),
        [sym_comment] = ACTIONS(91),
    },
    [59] = {
        [anon_sym_enum] = ACTIONS(243),
        [sym_comment] = ACTIONS(91),
    },
    [60] = {
        [sym_identifier_name] = ACTIONS(245),
        [sym_comment] = ACTIONS(91),
    },
    [61] = {
        [anon_sym_LBRACE] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(249),
        [sym_comment] = ACTIONS(91),
    },
    [62] = {
        [sym_enum_member_declaration] = STATE(118),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [63] = {
        [sym__integral_type] = STATE(65),
        [anon_sym_sbyte] = ACTIONS(253),
        [anon_sym_byte] = ACTIONS(253),
        [anon_sym_short] = ACTIONS(253),
        [anon_sym_ushort] = ACTIONS(253),
        [anon_sym_int] = ACTIONS(253),
        [anon_sym_uint] = ACTIONS(253),
        [anon_sym_long] = ACTIONS(253),
        [anon_sym_ulong] = ACTIONS(253),
        [anon_sym_char] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [64] = {
        [anon_sym_LBRACE] = ACTIONS(255),
        [sym_comment] = ACTIONS(91),
    },
    [65] = {
        [anon_sym_LBRACE] = ACTIONS(257),
        [sym_comment] = ACTIONS(91),
    },
    [66] = {
        [sym_enum_member_declaration] = STATE(68),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [67] = {
        [sym_equals_value_clause] = STATE(117),
        [anon_sym_RBRACE] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_EQ] = ACTIONS(261),
        [sym_comment] = ACTIONS(91),
    },
    [68] = {
        [aux_sym_enum_declaration_repeat1] = STATE(110),
        [anon_sym_RBRACE] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(91),
    },
    [69] = {
        [sym_identifier_name] = ACTIONS(267),
        [sym_comment] = ACTIONS(91),
    },
    [70] = {
        [sym_equals_value_clause] = STATE(72),
        [anon_sym_RBRACE] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_EQ] = ACTIONS(261),
        [sym_comment] = ACTIONS(91),
    },
    [71] = {
        [sym__literal] = STATE(81),
        [sym_boolean_literal] = STATE(77),
        [sym_character_literal] = STATE(77),
        [sym_integer_literal] = STATE(77),
        [sym_real_literal] = STATE(77),
        [sym_string_literal] = STATE(77),
        [sym__regular_string_literal] = STATE(82),
        [sym__verbatim_string_literal] = STATE(82),
        [anon_sym_true] = ACTIONS(271),
        [anon_sym_false] = ACTIONS(271),
        [anon_sym_SQUOTE] = ACTIONS(273),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(275),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(277),
        [sym_null_literal] = ACTIONS(279),
        [anon_sym_DOT] = ACTIONS(281),
        [anon_sym_DQUOTE] = ACTIONS(283),
        [anon_sym_AT_DQUOTE] = ACTIONS(285),
        [sym_comment] = ACTIONS(91),
    },
    [72] = {
        [anon_sym_RBRACE] = ACTIONS(287),
        [anon_sym_COMMA] = ACTIONS(287),
        [sym_comment] = ACTIONS(91),
    },
    [73] = {
        [anon_sym_SEMI] = ACTIONS(289),
        [anon_sym_RBRACE] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(289),
        [sym_comment] = ACTIONS(91),
    },
    [74] = {
        [sym__unicode_escape_sequence] = STATE(104),
        [sym__simple_escape_sequence] = STATE(104),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(291),
        [sym__hexadecimal_escape_sequence] = ACTIONS(291),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(293),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(293),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(295),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(295),
        [anon_sym_BSLASH0] = ACTIONS(295),
        [anon_sym_BSLASHa] = ACTIONS(295),
        [anon_sym_BSLASHb] = ACTIONS(295),
        [anon_sym_BSLASHf] = ACTIONS(295),
        [anon_sym_BSLASHn] = ACTIONS(295),
        [anon_sym_BSLASHr] = ACTIONS(295),
        [anon_sym_BSLASHt] = ACTIONS(295),
        [anon_sym_BSLASHv] = ACTIONS(295),
        [sym_comment] = ACTIONS(91),
    },
    [75] = {
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_RBRACE] = ACTIONS(297),
        [anon_sym_COMMA] = ACTIONS(297),
        [sym__integer_type_suffix] = ACTIONS(299),
        [anon_sym_DOT] = ACTIONS(301),
        [sym__real_type_suffix] = ACTIONS(303),
        [sym__exponent_part] = ACTIONS(305),
        [sym_comment] = ACTIONS(91),
    },
    [76] = {
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_RBRACE] = ACTIONS(297),
        [anon_sym_COMMA] = ACTIONS(297),
        [sym__integer_type_suffix] = ACTIONS(299),
        [sym_comment] = ACTIONS(91),
    },
    [77] = {
        [anon_sym_SEMI] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [anon_sym_COMMA] = ACTIONS(307),
        [sym_comment] = ACTIONS(91),
    },
    [78] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(309),
        [sym_comment] = ACTIONS(91),
    },
    [79] = {
        [sym__unicode_escape_sequence] = STATE(85),
        [sym__simple_escape_sequence] = STATE(85),
        [sym__regular_string_literal_character] = STATE(89),
        [aux_sym__regular_string_literal_repeat1] = STATE(90),
        [sym__hexadecimal_escape_sequence] = ACTIONS(311),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(313),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(313),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(315),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(315),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(315),
        [anon_sym_BSLASH0] = ACTIONS(315),
        [anon_sym_BSLASHa] = ACTIONS(315),
        [anon_sym_BSLASHb] = ACTIONS(315),
        [anon_sym_BSLASHf] = ACTIONS(315),
        [anon_sym_BSLASHn] = ACTIONS(315),
        [anon_sym_BSLASHr] = ACTIONS(315),
        [anon_sym_BSLASHt] = ACTIONS(315),
        [anon_sym_BSLASHv] = ACTIONS(315),
        [anon_sym_DQUOTE] = ACTIONS(317),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(311),
        [sym_comment] = ACTIONS(91),
    },
    [80] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(319),
        [sym_comment] = ACTIONS(321),
    },
    [81] = {
        [anon_sym_SEMI] = ACTIONS(323),
        [anon_sym_RBRACE] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(323),
        [sym_comment] = ACTIONS(91),
    },
    [82] = {
        [anon_sym_SEMI] = ACTIONS(325),
        [anon_sym_RBRACE] = ACTIONS(325),
        [anon_sym_COMMA] = ACTIONS(325),
        [sym_comment] = ACTIONS(91),
    },
    [83] = {
        [anon_sym_DQUOTE] = ACTIONS(327),
        [sym_comment] = ACTIONS(91),
    },
    [84] = {
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_RBRACE] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(329),
        [sym_comment] = ACTIONS(91),
    },
    [85] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(331),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(333),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(333),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(333),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(333),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(333),
        [anon_sym_BSLASH0] = ACTIONS(333),
        [anon_sym_BSLASHa] = ACTIONS(333),
        [anon_sym_BSLASHb] = ACTIONS(333),
        [anon_sym_BSLASHf] = ACTIONS(333),
        [anon_sym_BSLASHn] = ACTIONS(333),
        [anon_sym_BSLASHr] = ACTIONS(333),
        [anon_sym_BSLASHt] = ACTIONS(333),
        [anon_sym_BSLASHv] = ACTIONS(333),
        [anon_sym_DQUOTE] = ACTIONS(333),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(331),
        [sym_comment] = ACTIONS(91),
    },
    [86] = {
        [anon_sym_SQUOTE] = ACTIONS(335),
        [sym__hexadecimal_escape_sequence] = ACTIONS(337),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(335),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(335),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(335),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(335),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(335),
        [anon_sym_BSLASH0] = ACTIONS(335),
        [anon_sym_BSLASHa] = ACTIONS(335),
        [anon_sym_BSLASHb] = ACTIONS(335),
        [anon_sym_BSLASHf] = ACTIONS(335),
        [anon_sym_BSLASHn] = ACTIONS(335),
        [anon_sym_BSLASHr] = ACTIONS(335),
        [anon_sym_BSLASHt] = ACTIONS(335),
        [anon_sym_BSLASHv] = ACTIONS(335),
        [anon_sym_DQUOTE] = ACTIONS(335),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(339),
        [sym_comment] = ACTIONS(91),
    },
    [87] = {
        [anon_sym_SQUOTE] = ACTIONS(341),
        [sym__hexadecimal_escape_sequence] = ACTIONS(343),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(341),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(341),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(341),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(341),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(341),
        [anon_sym_BSLASH0] = ACTIONS(341),
        [anon_sym_BSLASHa] = ACTIONS(341),
        [anon_sym_BSLASHb] = ACTIONS(341),
        [anon_sym_BSLASHf] = ACTIONS(341),
        [anon_sym_BSLASHn] = ACTIONS(341),
        [anon_sym_BSLASHr] = ACTIONS(341),
        [anon_sym_BSLASHt] = ACTIONS(341),
        [anon_sym_BSLASHv] = ACTIONS(341),
        [anon_sym_DQUOTE] = ACTIONS(341),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(345),
        [sym_comment] = ACTIONS(91),
    },
    [88] = {
        [anon_sym_SEMI] = ACTIONS(347),
        [anon_sym_RBRACE] = ACTIONS(347),
        [anon_sym_COMMA] = ACTIONS(347),
        [sym_comment] = ACTIONS(91),
    },
    [89] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(349),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(351),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(351),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(351),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(351),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(351),
        [anon_sym_BSLASH0] = ACTIONS(351),
        [anon_sym_BSLASHa] = ACTIONS(351),
        [anon_sym_BSLASHb] = ACTIONS(351),
        [anon_sym_BSLASHf] = ACTIONS(351),
        [anon_sym_BSLASHn] = ACTIONS(351),
        [anon_sym_BSLASHr] = ACTIONS(351),
        [anon_sym_BSLASHt] = ACTIONS(351),
        [anon_sym_BSLASHv] = ACTIONS(351),
        [anon_sym_DQUOTE] = ACTIONS(351),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(349),
        [sym_comment] = ACTIONS(91),
    },
    [90] = {
        [sym__unicode_escape_sequence] = STATE(85),
        [sym__simple_escape_sequence] = STATE(85),
        [sym__regular_string_literal_character] = STATE(92),
        [sym__hexadecimal_escape_sequence] = ACTIONS(311),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(313),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(313),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(315),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(315),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(315),
        [anon_sym_BSLASH0] = ACTIONS(315),
        [anon_sym_BSLASHa] = ACTIONS(315),
        [anon_sym_BSLASHb] = ACTIONS(315),
        [anon_sym_BSLASHf] = ACTIONS(315),
        [anon_sym_BSLASHn] = ACTIONS(315),
        [anon_sym_BSLASHr] = ACTIONS(315),
        [anon_sym_BSLASHt] = ACTIONS(315),
        [anon_sym_BSLASHv] = ACTIONS(315),
        [anon_sym_DQUOTE] = ACTIONS(353),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(311),
        [sym_comment] = ACTIONS(91),
    },
    [91] = {
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_RBRACE] = ACTIONS(355),
        [anon_sym_COMMA] = ACTIONS(355),
        [sym_comment] = ACTIONS(91),
    },
    [92] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(357),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(359),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(359),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(359),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(359),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(359),
        [anon_sym_BSLASH0] = ACTIONS(359),
        [anon_sym_BSLASHa] = ACTIONS(359),
        [anon_sym_BSLASHb] = ACTIONS(359),
        [anon_sym_BSLASHf] = ACTIONS(359),
        [anon_sym_BSLASHn] = ACTIONS(359),
        [anon_sym_BSLASHr] = ACTIONS(359),
        [anon_sym_BSLASHt] = ACTIONS(359),
        [anon_sym_BSLASHv] = ACTIONS(359),
        [anon_sym_DQUOTE] = ACTIONS(359),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(357),
        [sym_comment] = ACTIONS(91),
    },
    [93] = {
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym__real_type_suffix] = ACTIONS(363),
        [sym__exponent_part] = ACTIONS(365),
        [sym_comment] = ACTIONS(91),
    },
    [94] = {
        [anon_sym_SEMI] = ACTIONS(367),
        [anon_sym_RBRACE] = ACTIONS(367),
        [anon_sym_COMMA] = ACTIONS(367),
        [sym_comment] = ACTIONS(91),
    },
    [95] = {
        [anon_sym_SEMI] = ACTIONS(367),
        [anon_sym_RBRACE] = ACTIONS(367),
        [anon_sym_COMMA] = ACTIONS(367),
        [sym__real_type_suffix] = ACTIONS(369),
        [sym_comment] = ACTIONS(91),
    },
    [96] = {
        [anon_sym_SEMI] = ACTIONS(371),
        [anon_sym_RBRACE] = ACTIONS(371),
        [anon_sym_COMMA] = ACTIONS(371),
        [sym_comment] = ACTIONS(91),
    },
    [97] = {
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_RBRACE] = ACTIONS(373),
        [anon_sym_COMMA] = ACTIONS(373),
        [sym_comment] = ACTIONS(91),
    },
    [98] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(375),
        [sym_comment] = ACTIONS(91),
    },
    [99] = {
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym_comment] = ACTIONS(91),
    },
    [100] = {
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym__real_type_suffix] = ACTIONS(363),
        [sym_comment] = ACTIONS(91),
    },
    [101] = {
        [anon_sym_SEMI] = ACTIONS(367),
        [anon_sym_RBRACE] = ACTIONS(367),
        [anon_sym_COMMA] = ACTIONS(367),
        [sym__real_type_suffix] = ACTIONS(369),
        [sym__exponent_part] = ACTIONS(377),
        [sym_comment] = ACTIONS(91),
    },
    [102] = {
        [anon_sym_SEMI] = ACTIONS(371),
        [anon_sym_RBRACE] = ACTIONS(371),
        [anon_sym_COMMA] = ACTIONS(371),
        [sym__real_type_suffix] = ACTIONS(379),
        [sym_comment] = ACTIONS(91),
    },
    [103] = {
        [anon_sym_SEMI] = ACTIONS(381),
        [anon_sym_RBRACE] = ACTIONS(381),
        [anon_sym_COMMA] = ACTIONS(381),
        [sym_comment] = ACTIONS(91),
    },
    [104] = {
        [anon_sym_SQUOTE] = ACTIONS(383),
        [sym_comment] = ACTIONS(91),
    },
    [105] = {
        [anon_sym_SQUOTE] = ACTIONS(335),
        [sym_comment] = ACTIONS(91),
    },
    [106] = {
        [anon_sym_SQUOTE] = ACTIONS(341),
        [sym_comment] = ACTIONS(91),
    },
    [107] = {
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(385),
        [anon_sym_COMMA] = ACTIONS(385),
        [sym_comment] = ACTIONS(91),
    },
    [108] = {
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_SEMI] = ACTIONS(389),
        [anon_sym_namespace] = ACTIONS(391),
        [anon_sym_RBRACE] = ACTIONS(387),
        [anon_sym_class] = ACTIONS(391),
        [anon_sym_unsafe] = ACTIONS(391),
        [anon_sym_abstract] = ACTIONS(391),
        [anon_sym_sealed] = ACTIONS(391),
        [anon_sym_static] = ACTIONS(391),
        [anon_sym_new] = ACTIONS(391),
        [anon_sym_public] = ACTIONS(391),
        [anon_sym_protected] = ACTIONS(391),
        [anon_sym_internal] = ACTIONS(391),
        [anon_sym_private] = ACTIONS(391),
        [anon_sym_struct] = ACTIONS(391),
        [anon_sym_enum] = ACTIONS(391),
        [anon_sym_sbyte] = ACTIONS(391),
        [anon_sym_byte] = ACTIONS(391),
        [anon_sym_short] = ACTIONS(391),
        [anon_sym_ushort] = ACTIONS(391),
        [anon_sym_int] = ACTIONS(391),
        [anon_sym_uint] = ACTIONS(391),
        [anon_sym_long] = ACTIONS(391),
        [anon_sym_ulong] = ACTIONS(391),
        [anon_sym_char] = ACTIONS(391),
        [anon_sym_LBRACK] = ACTIONS(387),
        [anon_sym_readonly] = ACTIONS(391),
        [anon_sym_volatile] = ACTIONS(391),
        [anon_sym_bool] = ACTIONS(391),
        [anon_sym_decimal] = ACTIONS(391),
        [anon_sym_double] = ACTIONS(391),
        [anon_sym_float] = ACTIONS(391),
        [anon_sym_object] = ACTIONS(391),
        [anon_sym_string] = ACTIONS(391),
        [sym_identifier_name] = ACTIONS(393),
        [sym_comment] = ACTIONS(91),
    },
    [109] = {
        [sym_enum_member_declaration] = STATE(115),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [110] = {
        [anon_sym_RBRACE] = ACTIONS(395),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(91),
    },
    [111] = {
        [ts_builtin_sym_end] = ACTIONS(399),
        [anon_sym_SEMI] = ACTIONS(401),
        [anon_sym_namespace] = ACTIONS(403),
        [anon_sym_RBRACE] = ACTIONS(399),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_unsafe] = ACTIONS(403),
        [anon_sym_abstract] = ACTIONS(403),
        [anon_sym_sealed] = ACTIONS(403),
        [anon_sym_static] = ACTIONS(403),
        [anon_sym_new] = ACTIONS(403),
        [anon_sym_public] = ACTIONS(403),
        [anon_sym_protected] = ACTIONS(403),
        [anon_sym_internal] = ACTIONS(403),
        [anon_sym_private] = ACTIONS(403),
        [anon_sym_struct] = ACTIONS(403),
        [anon_sym_enum] = ACTIONS(403),
        [anon_sym_sbyte] = ACTIONS(403),
        [anon_sym_byte] = ACTIONS(403),
        [anon_sym_short] = ACTIONS(403),
        [anon_sym_ushort] = ACTIONS(403),
        [anon_sym_int] = ACTIONS(403),
        [anon_sym_uint] = ACTIONS(403),
        [anon_sym_long] = ACTIONS(403),
        [anon_sym_ulong] = ACTIONS(403),
        [anon_sym_char] = ACTIONS(403),
        [anon_sym_LBRACK] = ACTIONS(399),
        [anon_sym_readonly] = ACTIONS(403),
        [anon_sym_volatile] = ACTIONS(403),
        [anon_sym_bool] = ACTIONS(403),
        [anon_sym_decimal] = ACTIONS(403),
        [anon_sym_double] = ACTIONS(403),
        [anon_sym_float] = ACTIONS(403),
        [anon_sym_object] = ACTIONS(403),
        [anon_sym_string] = ACTIONS(403),
        [sym_identifier_name] = ACTIONS(405),
        [sym_comment] = ACTIONS(91),
    },
    [112] = {
        [sym_enum_member_declaration] = STATE(113),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [113] = {
        [anon_sym_RBRACE] = ACTIONS(407),
        [anon_sym_COMMA] = ACTIONS(407),
        [sym_comment] = ACTIONS(91),
    },
    [114] = {
        [ts_builtin_sym_end] = ACTIONS(409),
        [anon_sym_namespace] = ACTIONS(411),
        [anon_sym_RBRACE] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(411),
        [anon_sym_unsafe] = ACTIONS(411),
        [anon_sym_abstract] = ACTIONS(411),
        [anon_sym_sealed] = ACTIONS(411),
        [anon_sym_static] = ACTIONS(411),
        [anon_sym_new] = ACTIONS(411),
        [anon_sym_public] = ACTIONS(411),
        [anon_sym_protected] = ACTIONS(411),
        [anon_sym_internal] = ACTIONS(411),
        [anon_sym_private] = ACTIONS(411),
        [anon_sym_struct] = ACTIONS(411),
        [anon_sym_enum] = ACTIONS(411),
        [anon_sym_sbyte] = ACTIONS(411),
        [anon_sym_byte] = ACTIONS(411),
        [anon_sym_short] = ACTIONS(411),
        [anon_sym_ushort] = ACTIONS(411),
        [anon_sym_int] = ACTIONS(411),
        [anon_sym_uint] = ACTIONS(411),
        [anon_sym_long] = ACTIONS(411),
        [anon_sym_ulong] = ACTIONS(411),
        [anon_sym_char] = ACTIONS(411),
        [anon_sym_LBRACK] = ACTIONS(409),
        [anon_sym_readonly] = ACTIONS(411),
        [anon_sym_volatile] = ACTIONS(411),
        [anon_sym_bool] = ACTIONS(411),
        [anon_sym_decimal] = ACTIONS(411),
        [anon_sym_double] = ACTIONS(411),
        [anon_sym_float] = ACTIONS(411),
        [anon_sym_object] = ACTIONS(411),
        [anon_sym_string] = ACTIONS(411),
        [sym_identifier_name] = ACTIONS(413),
        [sym_comment] = ACTIONS(91),
    },
    [115] = {
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(415),
        [sym_comment] = ACTIONS(91),
    },
    [116] = {
        [ts_builtin_sym_end] = ACTIONS(399),
        [anon_sym_namespace] = ACTIONS(403),
        [anon_sym_RBRACE] = ACTIONS(399),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_unsafe] = ACTIONS(403),
        [anon_sym_abstract] = ACTIONS(403),
        [anon_sym_sealed] = ACTIONS(403),
        [anon_sym_static] = ACTIONS(403),
        [anon_sym_new] = ACTIONS(403),
        [anon_sym_public] = ACTIONS(403),
        [anon_sym_protected] = ACTIONS(403),
        [anon_sym_internal] = ACTIONS(403),
        [anon_sym_private] = ACTIONS(403),
        [anon_sym_struct] = ACTIONS(403),
        [anon_sym_enum] = ACTIONS(403),
        [anon_sym_sbyte] = ACTIONS(403),
        [anon_sym_byte] = ACTIONS(403),
        [anon_sym_short] = ACTIONS(403),
        [anon_sym_ushort] = ACTIONS(403),
        [anon_sym_int] = ACTIONS(403),
        [anon_sym_uint] = ACTIONS(403),
        [anon_sym_long] = ACTIONS(403),
        [anon_sym_ulong] = ACTIONS(403),
        [anon_sym_char] = ACTIONS(403),
        [anon_sym_LBRACK] = ACTIONS(399),
        [anon_sym_readonly] = ACTIONS(403),
        [anon_sym_volatile] = ACTIONS(403),
        [anon_sym_bool] = ACTIONS(403),
        [anon_sym_decimal] = ACTIONS(403),
        [anon_sym_double] = ACTIONS(403),
        [anon_sym_float] = ACTIONS(403),
        [anon_sym_object] = ACTIONS(403),
        [anon_sym_string] = ACTIONS(403),
        [sym_identifier_name] = ACTIONS(405),
        [sym_comment] = ACTIONS(91),
    },
    [117] = {
        [anon_sym_RBRACE] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(269),
        [sym_comment] = ACTIONS(91),
    },
    [118] = {
        [aux_sym_enum_declaration_repeat1] = STATE(120),
        [anon_sym_RBRACE] = ACTIONS(417),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(91),
    },
    [119] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(421),
        [anon_sym_namespace] = ACTIONS(423),
        [anon_sym_RBRACE] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(423),
        [anon_sym_unsafe] = ACTIONS(423),
        [anon_sym_abstract] = ACTIONS(423),
        [anon_sym_sealed] = ACTIONS(423),
        [anon_sym_static] = ACTIONS(423),
        [anon_sym_new] = ACTIONS(423),
        [anon_sym_public] = ACTIONS(423),
        [anon_sym_protected] = ACTIONS(423),
        [anon_sym_internal] = ACTIONS(423),
        [anon_sym_private] = ACTIONS(423),
        [anon_sym_struct] = ACTIONS(423),
        [anon_sym_enum] = ACTIONS(423),
        [anon_sym_sbyte] = ACTIONS(423),
        [anon_sym_byte] = ACTIONS(423),
        [anon_sym_short] = ACTIONS(423),
        [anon_sym_ushort] = ACTIONS(423),
        [anon_sym_int] = ACTIONS(423),
        [anon_sym_uint] = ACTIONS(423),
        [anon_sym_long] = ACTIONS(423),
        [anon_sym_ulong] = ACTIONS(423),
        [anon_sym_char] = ACTIONS(423),
        [anon_sym_LBRACK] = ACTIONS(419),
        [anon_sym_readonly] = ACTIONS(423),
        [anon_sym_volatile] = ACTIONS(423),
        [anon_sym_bool] = ACTIONS(423),
        [anon_sym_decimal] = ACTIONS(423),
        [anon_sym_double] = ACTIONS(423),
        [anon_sym_float] = ACTIONS(423),
        [anon_sym_object] = ACTIONS(423),
        [anon_sym_string] = ACTIONS(423),
        [sym_identifier_name] = ACTIONS(425),
        [sym_comment] = ACTIONS(91),
    },
    [120] = {
        [anon_sym_RBRACE] = ACTIONS(427),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(91),
    },
    [121] = {
        [ts_builtin_sym_end] = ACTIONS(429),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_namespace] = ACTIONS(433),
        [anon_sym_RBRACE] = ACTIONS(429),
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
        [anon_sym_struct] = ACTIONS(433),
        [anon_sym_enum] = ACTIONS(433),
        [anon_sym_sbyte] = ACTIONS(433),
        [anon_sym_byte] = ACTIONS(433),
        [anon_sym_short] = ACTIONS(433),
        [anon_sym_ushort] = ACTIONS(433),
        [anon_sym_int] = ACTIONS(433),
        [anon_sym_uint] = ACTIONS(433),
        [anon_sym_long] = ACTIONS(433),
        [anon_sym_ulong] = ACTIONS(433),
        [anon_sym_char] = ACTIONS(433),
        [anon_sym_LBRACK] = ACTIONS(429),
        [anon_sym_readonly] = ACTIONS(433),
        [anon_sym_volatile] = ACTIONS(433),
        [anon_sym_bool] = ACTIONS(433),
        [anon_sym_decimal] = ACTIONS(433),
        [anon_sym_double] = ACTIONS(433),
        [anon_sym_float] = ACTIONS(433),
        [anon_sym_object] = ACTIONS(433),
        [anon_sym_string] = ACTIONS(433),
        [sym_identifier_name] = ACTIONS(435),
        [sym_comment] = ACTIONS(91),
    },
    [122] = {
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_namespace] = ACTIONS(391),
        [anon_sym_RBRACE] = ACTIONS(387),
        [anon_sym_class] = ACTIONS(391),
        [anon_sym_unsafe] = ACTIONS(391),
        [anon_sym_abstract] = ACTIONS(391),
        [anon_sym_sealed] = ACTIONS(391),
        [anon_sym_static] = ACTIONS(391),
        [anon_sym_new] = ACTIONS(391),
        [anon_sym_public] = ACTIONS(391),
        [anon_sym_protected] = ACTIONS(391),
        [anon_sym_internal] = ACTIONS(391),
        [anon_sym_private] = ACTIONS(391),
        [anon_sym_struct] = ACTIONS(391),
        [anon_sym_enum] = ACTIONS(391),
        [anon_sym_sbyte] = ACTIONS(391),
        [anon_sym_byte] = ACTIONS(391),
        [anon_sym_short] = ACTIONS(391),
        [anon_sym_ushort] = ACTIONS(391),
        [anon_sym_int] = ACTIONS(391),
        [anon_sym_uint] = ACTIONS(391),
        [anon_sym_long] = ACTIONS(391),
        [anon_sym_ulong] = ACTIONS(391),
        [anon_sym_char] = ACTIONS(391),
        [anon_sym_LBRACK] = ACTIONS(387),
        [anon_sym_readonly] = ACTIONS(391),
        [anon_sym_volatile] = ACTIONS(391),
        [anon_sym_bool] = ACTIONS(391),
        [anon_sym_decimal] = ACTIONS(391),
        [anon_sym_double] = ACTIONS(391),
        [anon_sym_float] = ACTIONS(391),
        [anon_sym_object] = ACTIONS(391),
        [anon_sym_string] = ACTIONS(391),
        [sym_identifier_name] = ACTIONS(393),
        [sym_comment] = ACTIONS(91),
    },
    [123] = {
        [ts_builtin_sym_end] = ACTIONS(429),
        [anon_sym_namespace] = ACTIONS(433),
        [anon_sym_RBRACE] = ACTIONS(429),
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
        [anon_sym_struct] = ACTIONS(433),
        [anon_sym_enum] = ACTIONS(433),
        [anon_sym_sbyte] = ACTIONS(433),
        [anon_sym_byte] = ACTIONS(433),
        [anon_sym_short] = ACTIONS(433),
        [anon_sym_ushort] = ACTIONS(433),
        [anon_sym_int] = ACTIONS(433),
        [anon_sym_uint] = ACTIONS(433),
        [anon_sym_long] = ACTIONS(433),
        [anon_sym_ulong] = ACTIONS(433),
        [anon_sym_char] = ACTIONS(433),
        [anon_sym_LBRACK] = ACTIONS(429),
        [anon_sym_readonly] = ACTIONS(433),
        [anon_sym_volatile] = ACTIONS(433),
        [anon_sym_bool] = ACTIONS(433),
        [anon_sym_decimal] = ACTIONS(433),
        [anon_sym_double] = ACTIONS(433),
        [anon_sym_float] = ACTIONS(433),
        [anon_sym_object] = ACTIONS(433),
        [anon_sym_string] = ACTIONS(433),
        [sym_identifier_name] = ACTIONS(435),
        [sym_comment] = ACTIONS(91),
    },
    [124] = {
        [sym_identifier_name] = ACTIONS(437),
        [sym_comment] = ACTIONS(91),
    },
    [125] = {
        [sym_type_parameter_list] = STATE(128),
        [anon_sym_LBRACE] = ACTIONS(439),
        [anon_sym_LT] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [126] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(162),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(443),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [127] = {
        [sym__type] = STATE(195),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [sym_type_parameter] = STATE(196),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [128] = {
        [anon_sym_LBRACE] = ACTIONS(465),
        [sym_comment] = ACTIONS(91),
    },
    [129] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(144),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(467),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [130] = {
        [ts_builtin_sym_end] = ACTIONS(469),
        [anon_sym_namespace] = ACTIONS(471),
        [anon_sym_RBRACE] = ACTIONS(469),
        [anon_sym_class] = ACTIONS(471),
        [anon_sym_unsafe] = ACTIONS(471),
        [anon_sym_abstract] = ACTIONS(471),
        [anon_sym_sealed] = ACTIONS(471),
        [anon_sym_static] = ACTIONS(471),
        [anon_sym_new] = ACTIONS(471),
        [anon_sym_public] = ACTIONS(471),
        [anon_sym_protected] = ACTIONS(471),
        [anon_sym_internal] = ACTIONS(471),
        [anon_sym_private] = ACTIONS(471),
        [anon_sym_struct] = ACTIONS(471),
        [anon_sym_enum] = ACTIONS(471),
        [anon_sym_sbyte] = ACTIONS(471),
        [anon_sym_byte] = ACTIONS(471),
        [anon_sym_short] = ACTIONS(471),
        [anon_sym_ushort] = ACTIONS(471),
        [anon_sym_int] = ACTIONS(471),
        [anon_sym_uint] = ACTIONS(471),
        [anon_sym_long] = ACTIONS(471),
        [anon_sym_ulong] = ACTIONS(471),
        [anon_sym_char] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(469),
        [anon_sym_readonly] = ACTIONS(471),
        [anon_sym_volatile] = ACTIONS(471),
        [anon_sym_bool] = ACTIONS(471),
        [anon_sym_decimal] = ACTIONS(471),
        [anon_sym_double] = ACTIONS(471),
        [anon_sym_float] = ACTIONS(471),
        [anon_sym_object] = ACTIONS(471),
        [anon_sym_string] = ACTIONS(471),
        [sym_identifier_name] = ACTIONS(473),
        [sym_comment] = ACTIONS(91),
    },
    [131] = {
        [sym__class_modifiers] = STATE(218),
        [sym__struct_modifiers] = STATE(219),
        [sym__field_modifiers] = STATE(204),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(447),
        [anon_sym_public] = ACTIONS(447),
        [anon_sym_protected] = ACTIONS(447),
        [anon_sym_internal] = ACTIONS(447),
        [anon_sym_private] = ACTIONS(447),
        [anon_sym_struct] = ACTIONS(477),
        [anon_sym_sbyte] = ACTIONS(479),
        [anon_sym_byte] = ACTIONS(479),
        [anon_sym_short] = ACTIONS(479),
        [anon_sym_ushort] = ACTIONS(479),
        [anon_sym_int] = ACTIONS(479),
        [anon_sym_uint] = ACTIONS(479),
        [anon_sym_long] = ACTIONS(479),
        [anon_sym_ulong] = ACTIONS(479),
        [anon_sym_char] = ACTIONS(479),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(479),
        [anon_sym_decimal] = ACTIONS(479),
        [anon_sym_double] = ACTIONS(479),
        [anon_sym_float] = ACTIONS(479),
        [anon_sym_object] = ACTIONS(479),
        [anon_sym_string] = ACTIONS(479),
        [sym_identifier_name] = ACTIONS(481),
        [sym_comment] = ACTIONS(91),
    },
    [132] = {
        [sym__class_modifiers] = STATE(218),
        [sym__field_modifiers] = STATE(204),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_unsafe] = ACTIONS(451),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(451),
        [anon_sym_public] = ACTIONS(451),
        [anon_sym_protected] = ACTIONS(451),
        [anon_sym_internal] = ACTIONS(451),
        [anon_sym_private] = ACTIONS(451),
        [anon_sym_sbyte] = ACTIONS(479),
        [anon_sym_byte] = ACTIONS(479),
        [anon_sym_short] = ACTIONS(479),
        [anon_sym_ushort] = ACTIONS(479),
        [anon_sym_int] = ACTIONS(479),
        [anon_sym_uint] = ACTIONS(479),
        [anon_sym_long] = ACTIONS(479),
        [anon_sym_ulong] = ACTIONS(479),
        [anon_sym_char] = ACTIONS(479),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(479),
        [anon_sym_decimal] = ACTIONS(479),
        [anon_sym_double] = ACTIONS(479),
        [anon_sym_float] = ACTIONS(479),
        [anon_sym_object] = ACTIONS(479),
        [anon_sym_string] = ACTIONS(479),
        [sym_identifier_name] = ACTIONS(481),
        [sym_comment] = ACTIONS(91),
    },
    [133] = {
        [sym__class_modifiers] = STATE(218),
        [sym__struct_modifiers] = STATE(219),
        [sym__field_modifiers] = STATE(204),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(447),
        [anon_sym_public] = ACTIONS(447),
        [anon_sym_protected] = ACTIONS(447),
        [anon_sym_internal] = ACTIONS(447),
        [anon_sym_private] = ACTIONS(447),
        [anon_sym_struct] = ACTIONS(477),
        [anon_sym_enum] = ACTIONS(483),
        [anon_sym_sbyte] = ACTIONS(479),
        [anon_sym_byte] = ACTIONS(479),
        [anon_sym_short] = ACTIONS(479),
        [anon_sym_ushort] = ACTIONS(479),
        [anon_sym_int] = ACTIONS(479),
        [anon_sym_uint] = ACTIONS(479),
        [anon_sym_long] = ACTIONS(479),
        [anon_sym_ulong] = ACTIONS(479),
        [anon_sym_char] = ACTIONS(479),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(479),
        [anon_sym_decimal] = ACTIONS(479),
        [anon_sym_double] = ACTIONS(479),
        [anon_sym_float] = ACTIONS(479),
        [anon_sym_object] = ACTIONS(479),
        [anon_sym_string] = ACTIONS(479),
        [sym_identifier_name] = ACTIONS(481),
        [sym_comment] = ACTIONS(91),
    },
    [134] = {
        [anon_sym_COMMA] = ACTIONS(485),
        [anon_sym_GT] = ACTIONS(485),
        [sym_identifier_name] = ACTIONS(487),
        [sym_comment] = ACTIONS(91),
    },
    [135] = {
        [sym__field_modifiers] = STATE(204),
        [anon_sym_unsafe] = ACTIONS(461),
        [anon_sym_static] = ACTIONS(461),
        [anon_sym_new] = ACTIONS(461),
        [anon_sym_public] = ACTIONS(461),
        [anon_sym_protected] = ACTIONS(461),
        [anon_sym_internal] = ACTIONS(461),
        [anon_sym_private] = ACTIONS(461),
        [anon_sym_sbyte] = ACTIONS(479),
        [anon_sym_byte] = ACTIONS(479),
        [anon_sym_short] = ACTIONS(479),
        [anon_sym_ushort] = ACTIONS(479),
        [anon_sym_int] = ACTIONS(479),
        [anon_sym_uint] = ACTIONS(479),
        [anon_sym_long] = ACTIONS(479),
        [anon_sym_ulong] = ACTIONS(479),
        [anon_sym_char] = ACTIONS(479),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(479),
        [anon_sym_decimal] = ACTIONS(479),
        [anon_sym_double] = ACTIONS(479),
        [anon_sym_float] = ACTIONS(479),
        [anon_sym_object] = ACTIONS(479),
        [anon_sym_string] = ACTIONS(479),
        [sym_identifier_name] = ACTIONS(481),
        [sym_comment] = ACTIONS(91),
    },
    [136] = {
        [sym_type_parameter_list] = STATE(194),
        [anon_sym_COMMA] = ACTIONS(489),
        [anon_sym_LT] = ACTIONS(441),
        [anon_sym_GT] = ACTIONS(489),
        [sym_identifier_name] = ACTIONS(491),
        [sym_comment] = ACTIONS(91),
    },
    [137] = {
        [anon_sym_RBRACE] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_unsafe] = ACTIONS(495),
        [anon_sym_abstract] = ACTIONS(495),
        [anon_sym_sealed] = ACTIONS(495),
        [anon_sym_static] = ACTIONS(495),
        [anon_sym_new] = ACTIONS(495),
        [anon_sym_public] = ACTIONS(495),
        [anon_sym_protected] = ACTIONS(495),
        [anon_sym_internal] = ACTIONS(495),
        [anon_sym_private] = ACTIONS(495),
        [anon_sym_struct] = ACTIONS(495),
        [anon_sym_enum] = ACTIONS(495),
        [anon_sym_sbyte] = ACTIONS(495),
        [anon_sym_byte] = ACTIONS(495),
        [anon_sym_short] = ACTIONS(495),
        [anon_sym_ushort] = ACTIONS(495),
        [anon_sym_int] = ACTIONS(495),
        [anon_sym_uint] = ACTIONS(495),
        [anon_sym_long] = ACTIONS(495),
        [anon_sym_ulong] = ACTIONS(495),
        [anon_sym_char] = ACTIONS(495),
        [anon_sym_LBRACK] = ACTIONS(493),
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
    [138] = {
        [sym_class_modifiers] = STATE(57),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(58),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_modifier] = STATE(59),
        [sym_field_modifiers] = STATE(158),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(156),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(501),
        [anon_sym_enum] = ACTIONS(503),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [139] = {
        [sym_variable_declaration] = STATE(156),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [140] = {
        [anon_sym_sbyte] = ACTIONS(505),
        [anon_sym_byte] = ACTIONS(505),
        [anon_sym_short] = ACTIONS(505),
        [anon_sym_ushort] = ACTIONS(505),
        [anon_sym_int] = ACTIONS(505),
        [anon_sym_uint] = ACTIONS(505),
        [anon_sym_long] = ACTIONS(505),
        [anon_sym_ulong] = ACTIONS(505),
        [anon_sym_char] = ACTIONS(505),
        [anon_sym_bool] = ACTIONS(505),
        [anon_sym_decimal] = ACTIONS(505),
        [anon_sym_double] = ACTIONS(505),
        [anon_sym_float] = ACTIONS(505),
        [anon_sym_object] = ACTIONS(505),
        [anon_sym_string] = ACTIONS(505),
        [sym_identifier_name] = ACTIONS(507),
        [sym_comment] = ACTIONS(91),
    },
    [141] = {
        [anon_sym_SEMI] = ACTIONS(509),
        [sym_comment] = ACTIONS(91),
    },
    [142] = {
        [sym_variable_declarator] = STATE(148),
        [sym_identifier_name] = ACTIONS(511),
        [sym_comment] = ACTIONS(91),
    },
    [143] = {
        [anon_sym_COMMA] = ACTIONS(489),
        [anon_sym_GT] = ACTIONS(489),
        [sym_identifier_name] = ACTIONS(491),
        [sym_comment] = ACTIONS(91),
    },
    [144] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [145] = {
        [ts_builtin_sym_end] = ACTIONS(515),
        [anon_sym_namespace] = ACTIONS(517),
        [anon_sym_RBRACE] = ACTIONS(515),
        [anon_sym_class] = ACTIONS(517),
        [anon_sym_unsafe] = ACTIONS(517),
        [anon_sym_abstract] = ACTIONS(517),
        [anon_sym_sealed] = ACTIONS(517),
        [anon_sym_static] = ACTIONS(517),
        [anon_sym_new] = ACTIONS(517),
        [anon_sym_public] = ACTIONS(517),
        [anon_sym_protected] = ACTIONS(517),
        [anon_sym_internal] = ACTIONS(517),
        [anon_sym_private] = ACTIONS(517),
        [anon_sym_struct] = ACTIONS(517),
        [anon_sym_enum] = ACTIONS(517),
        [anon_sym_sbyte] = ACTIONS(517),
        [anon_sym_byte] = ACTIONS(517),
        [anon_sym_short] = ACTIONS(517),
        [anon_sym_ushort] = ACTIONS(517),
        [anon_sym_int] = ACTIONS(517),
        [anon_sym_uint] = ACTIONS(517),
        [anon_sym_long] = ACTIONS(517),
        [anon_sym_ulong] = ACTIONS(517),
        [anon_sym_char] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(515),
        [anon_sym_readonly] = ACTIONS(517),
        [anon_sym_volatile] = ACTIONS(517),
        [anon_sym_bool] = ACTIONS(517),
        [anon_sym_decimal] = ACTIONS(517),
        [anon_sym_double] = ACTIONS(517),
        [anon_sym_float] = ACTIONS(517),
        [anon_sym_object] = ACTIONS(517),
        [anon_sym_string] = ACTIONS(517),
        [sym_identifier_name] = ACTIONS(519),
        [sym_comment] = ACTIONS(91),
    },
    [146] = {
        [anon_sym_RBRACE] = ACTIONS(521),
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
        [anon_sym_struct] = ACTIONS(523),
        [anon_sym_enum] = ACTIONS(523),
        [anon_sym_sbyte] = ACTIONS(523),
        [anon_sym_byte] = ACTIONS(523),
        [anon_sym_short] = ACTIONS(523),
        [anon_sym_ushort] = ACTIONS(523),
        [anon_sym_int] = ACTIONS(523),
        [anon_sym_uint] = ACTIONS(523),
        [anon_sym_long] = ACTIONS(523),
        [anon_sym_ulong] = ACTIONS(523),
        [anon_sym_char] = ACTIONS(523),
        [anon_sym_LBRACK] = ACTIONS(521),
        [anon_sym_readonly] = ACTIONS(523),
        [anon_sym_volatile] = ACTIONS(523),
        [anon_sym_bool] = ACTIONS(523),
        [anon_sym_decimal] = ACTIONS(523),
        [anon_sym_double] = ACTIONS(523),
        [anon_sym_float] = ACTIONS(523),
        [anon_sym_object] = ACTIONS(523),
        [anon_sym_string] = ACTIONS(523),
        [sym_identifier_name] = ACTIONS(525),
        [sym_comment] = ACTIONS(91),
    },
    [147] = {
        [sym_equals_value_clause] = STATE(154),
        [anon_sym_SEMI] = ACTIONS(527),
        [anon_sym_COMMA] = ACTIONS(527),
        [anon_sym_EQ] = ACTIONS(261),
        [sym_comment] = ACTIONS(91),
    },
    [148] = {
        [aux_sym_variable_declaration_repeat1] = STATE(150),
        [anon_sym_SEMI] = ACTIONS(529),
        [anon_sym_COMMA] = ACTIONS(531),
        [sym_comment] = ACTIONS(91),
    },
    [149] = {
        [sym_variable_declarator] = STATE(153),
        [sym_identifier_name] = ACTIONS(511),
        [sym_comment] = ACTIONS(91),
    },
    [150] = {
        [anon_sym_SEMI] = ACTIONS(533),
        [anon_sym_COMMA] = ACTIONS(535),
        [sym_comment] = ACTIONS(91),
    },
    [151] = {
        [sym_variable_declarator] = STATE(152),
        [sym_identifier_name] = ACTIONS(511),
        [sym_comment] = ACTIONS(91),
    },
    [152] = {
        [anon_sym_SEMI] = ACTIONS(537),
        [anon_sym_COMMA] = ACTIONS(537),
        [sym_comment] = ACTIONS(91),
    },
    [153] = {
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(539),
        [sym_comment] = ACTIONS(91),
    },
    [154] = {
        [anon_sym_SEMI] = ACTIONS(541),
        [anon_sym_COMMA] = ACTIONS(541),
        [sym_comment] = ACTIONS(91),
    },
    [155] = {
        [anon_sym_RBRACE] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(545),
        [anon_sym_unsafe] = ACTIONS(545),
        [anon_sym_abstract] = ACTIONS(545),
        [anon_sym_sealed] = ACTIONS(545),
        [anon_sym_static] = ACTIONS(545),
        [anon_sym_new] = ACTIONS(545),
        [anon_sym_public] = ACTIONS(545),
        [anon_sym_protected] = ACTIONS(545),
        [anon_sym_internal] = ACTIONS(545),
        [anon_sym_private] = ACTIONS(545),
        [anon_sym_struct] = ACTIONS(545),
        [anon_sym_enum] = ACTIONS(545),
        [anon_sym_sbyte] = ACTIONS(545),
        [anon_sym_byte] = ACTIONS(545),
        [anon_sym_short] = ACTIONS(545),
        [anon_sym_ushort] = ACTIONS(545),
        [anon_sym_int] = ACTIONS(545),
        [anon_sym_uint] = ACTIONS(545),
        [anon_sym_long] = ACTIONS(545),
        [anon_sym_ulong] = ACTIONS(545),
        [anon_sym_char] = ACTIONS(545),
        [anon_sym_LBRACK] = ACTIONS(543),
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
    [156] = {
        [anon_sym_SEMI] = ACTIONS(549),
        [sym_comment] = ACTIONS(91),
    },
    [157] = {
        [anon_sym_RBRACE] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(553),
        [anon_sym_abstract] = ACTIONS(553),
        [anon_sym_sealed] = ACTIONS(553),
        [anon_sym_static] = ACTIONS(553),
        [anon_sym_new] = ACTIONS(553),
        [anon_sym_public] = ACTIONS(553),
        [anon_sym_protected] = ACTIONS(553),
        [anon_sym_internal] = ACTIONS(553),
        [anon_sym_private] = ACTIONS(553),
        [anon_sym_struct] = ACTIONS(553),
        [anon_sym_enum] = ACTIONS(553),
        [anon_sym_sbyte] = ACTIONS(553),
        [anon_sym_byte] = ACTIONS(553),
        [anon_sym_short] = ACTIONS(553),
        [anon_sym_ushort] = ACTIONS(553),
        [anon_sym_int] = ACTIONS(553),
        [anon_sym_uint] = ACTIONS(553),
        [anon_sym_long] = ACTIONS(553),
        [anon_sym_ulong] = ACTIONS(553),
        [anon_sym_char] = ACTIONS(553),
        [anon_sym_LBRACK] = ACTIONS(551),
        [anon_sym_readonly] = ACTIONS(553),
        [anon_sym_volatile] = ACTIONS(553),
        [anon_sym_bool] = ACTIONS(553),
        [anon_sym_decimal] = ACTIONS(553),
        [anon_sym_double] = ACTIONS(553),
        [anon_sym_float] = ACTIONS(553),
        [anon_sym_object] = ACTIONS(553),
        [anon_sym_string] = ACTIONS(553),
        [sym_identifier_name] = ACTIONS(555),
        [sym_comment] = ACTIONS(91),
    },
    [158] = {
        [sym_variable_declaration] = STATE(159),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [159] = {
        [anon_sym_SEMI] = ACTIONS(557),
        [sym_comment] = ACTIONS(91),
    },
    [160] = {
        [anon_sym_RBRACE] = ACTIONS(559),
        [anon_sym_class] = ACTIONS(561),
        [anon_sym_unsafe] = ACTIONS(561),
        [anon_sym_abstract] = ACTIONS(561),
        [anon_sym_sealed] = ACTIONS(561),
        [anon_sym_static] = ACTIONS(561),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(561),
        [anon_sym_enum] = ACTIONS(561),
        [anon_sym_sbyte] = ACTIONS(561),
        [anon_sym_byte] = ACTIONS(561),
        [anon_sym_short] = ACTIONS(561),
        [anon_sym_ushort] = ACTIONS(561),
        [anon_sym_int] = ACTIONS(561),
        [anon_sym_uint] = ACTIONS(561),
        [anon_sym_long] = ACTIONS(561),
        [anon_sym_ulong] = ACTIONS(561),
        [anon_sym_char] = ACTIONS(561),
        [anon_sym_LBRACK] = ACTIONS(559),
        [anon_sym_readonly] = ACTIONS(561),
        [anon_sym_volatile] = ACTIONS(561),
        [anon_sym_bool] = ACTIONS(561),
        [anon_sym_decimal] = ACTIONS(561),
        [anon_sym_double] = ACTIONS(561),
        [anon_sym_float] = ACTIONS(561),
        [anon_sym_object] = ACTIONS(561),
        [anon_sym_string] = ACTIONS(561),
        [sym_identifier_name] = ACTIONS(563),
        [sym_comment] = ACTIONS(91),
    },
    [161] = {
        [ts_builtin_sym_end] = ACTIONS(565),
        [anon_sym_namespace] = ACTIONS(567),
        [anon_sym_RBRACE] = ACTIONS(565),
        [anon_sym_class] = ACTIONS(567),
        [anon_sym_unsafe] = ACTIONS(567),
        [anon_sym_abstract] = ACTIONS(567),
        [anon_sym_sealed] = ACTIONS(567),
        [anon_sym_static] = ACTIONS(567),
        [anon_sym_new] = ACTIONS(567),
        [anon_sym_public] = ACTIONS(567),
        [anon_sym_protected] = ACTIONS(567),
        [anon_sym_internal] = ACTIONS(567),
        [anon_sym_private] = ACTIONS(567),
        [anon_sym_struct] = ACTIONS(567),
        [anon_sym_enum] = ACTIONS(567),
        [anon_sym_sbyte] = ACTIONS(567),
        [anon_sym_byte] = ACTIONS(567),
        [anon_sym_short] = ACTIONS(567),
        [anon_sym_ushort] = ACTIONS(567),
        [anon_sym_int] = ACTIONS(567),
        [anon_sym_uint] = ACTIONS(567),
        [anon_sym_long] = ACTIONS(567),
        [anon_sym_ulong] = ACTIONS(567),
        [anon_sym_char] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(565),
        [anon_sym_readonly] = ACTIONS(567),
        [anon_sym_volatile] = ACTIONS(567),
        [anon_sym_bool] = ACTIONS(567),
        [anon_sym_decimal] = ACTIONS(567),
        [anon_sym_double] = ACTIONS(567),
        [anon_sym_float] = ACTIONS(567),
        [anon_sym_object] = ACTIONS(567),
        [anon_sym_string] = ACTIONS(567),
        [sym_identifier_name] = ACTIONS(569),
        [sym_comment] = ACTIONS(91),
    },
    [162] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(467),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [163] = {
        [sym_identifier_name] = ACTIONS(571),
        [sym_comment] = ACTIONS(91),
    },
    [164] = {
        [sym_type_parameter_list] = STATE(166),
        [anon_sym_LBRACE] = ACTIONS(573),
        [anon_sym_LT] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [165] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(172),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(575),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [166] = {
        [anon_sym_LBRACE] = ACTIONS(577),
        [sym_comment] = ACTIONS(91),
    },
    [167] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(169),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(579),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [168] = {
        [ts_builtin_sym_end] = ACTIONS(581),
        [anon_sym_namespace] = ACTIONS(583),
        [anon_sym_RBRACE] = ACTIONS(581),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_unsafe] = ACTIONS(583),
        [anon_sym_abstract] = ACTIONS(583),
        [anon_sym_sealed] = ACTIONS(583),
        [anon_sym_static] = ACTIONS(583),
        [anon_sym_new] = ACTIONS(583),
        [anon_sym_public] = ACTIONS(583),
        [anon_sym_protected] = ACTIONS(583),
        [anon_sym_internal] = ACTIONS(583),
        [anon_sym_private] = ACTIONS(583),
        [anon_sym_struct] = ACTIONS(583),
        [anon_sym_enum] = ACTIONS(583),
        [anon_sym_sbyte] = ACTIONS(583),
        [anon_sym_byte] = ACTIONS(583),
        [anon_sym_short] = ACTIONS(583),
        [anon_sym_ushort] = ACTIONS(583),
        [anon_sym_int] = ACTIONS(583),
        [anon_sym_uint] = ACTIONS(583),
        [anon_sym_long] = ACTIONS(583),
        [anon_sym_ulong] = ACTIONS(583),
        [anon_sym_char] = ACTIONS(583),
        [anon_sym_LBRACK] = ACTIONS(581),
        [anon_sym_readonly] = ACTIONS(583),
        [anon_sym_volatile] = ACTIONS(583),
        [anon_sym_bool] = ACTIONS(583),
        [anon_sym_decimal] = ACTIONS(583),
        [anon_sym_double] = ACTIONS(583),
        [anon_sym_float] = ACTIONS(583),
        [anon_sym_object] = ACTIONS(583),
        [anon_sym_string] = ACTIONS(583),
        [sym_identifier_name] = ACTIONS(585),
        [sym_comment] = ACTIONS(91),
    },
    [169] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [170] = {
        [ts_builtin_sym_end] = ACTIONS(589),
        [anon_sym_namespace] = ACTIONS(591),
        [anon_sym_RBRACE] = ACTIONS(589),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_unsafe] = ACTIONS(591),
        [anon_sym_abstract] = ACTIONS(591),
        [anon_sym_sealed] = ACTIONS(591),
        [anon_sym_static] = ACTIONS(591),
        [anon_sym_new] = ACTIONS(591),
        [anon_sym_public] = ACTIONS(591),
        [anon_sym_protected] = ACTIONS(591),
        [anon_sym_internal] = ACTIONS(591),
        [anon_sym_private] = ACTIONS(591),
        [anon_sym_struct] = ACTIONS(591),
        [anon_sym_enum] = ACTIONS(591),
        [anon_sym_sbyte] = ACTIONS(591),
        [anon_sym_byte] = ACTIONS(591),
        [anon_sym_short] = ACTIONS(591),
        [anon_sym_ushort] = ACTIONS(591),
        [anon_sym_int] = ACTIONS(591),
        [anon_sym_uint] = ACTIONS(591),
        [anon_sym_long] = ACTIONS(591),
        [anon_sym_ulong] = ACTIONS(591),
        [anon_sym_char] = ACTIONS(591),
        [anon_sym_LBRACK] = ACTIONS(589),
        [anon_sym_readonly] = ACTIONS(591),
        [anon_sym_volatile] = ACTIONS(591),
        [anon_sym_bool] = ACTIONS(591),
        [anon_sym_decimal] = ACTIONS(591),
        [anon_sym_double] = ACTIONS(591),
        [anon_sym_float] = ACTIONS(591),
        [anon_sym_object] = ACTIONS(591),
        [anon_sym_string] = ACTIONS(591),
        [sym_identifier_name] = ACTIONS(593),
        [sym_comment] = ACTIONS(91),
    },
    [171] = {
        [ts_builtin_sym_end] = ACTIONS(595),
        [anon_sym_namespace] = ACTIONS(597),
        [anon_sym_RBRACE] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_unsafe] = ACTIONS(597),
        [anon_sym_abstract] = ACTIONS(597),
        [anon_sym_sealed] = ACTIONS(597),
        [anon_sym_static] = ACTIONS(597),
        [anon_sym_new] = ACTIONS(597),
        [anon_sym_public] = ACTIONS(597),
        [anon_sym_protected] = ACTIONS(597),
        [anon_sym_internal] = ACTIONS(597),
        [anon_sym_private] = ACTIONS(597),
        [anon_sym_struct] = ACTIONS(597),
        [anon_sym_enum] = ACTIONS(597),
        [anon_sym_sbyte] = ACTIONS(597),
        [anon_sym_byte] = ACTIONS(597),
        [anon_sym_short] = ACTIONS(597),
        [anon_sym_ushort] = ACTIONS(597),
        [anon_sym_int] = ACTIONS(597),
        [anon_sym_uint] = ACTIONS(597),
        [anon_sym_long] = ACTIONS(597),
        [anon_sym_ulong] = ACTIONS(597),
        [anon_sym_char] = ACTIONS(597),
        [anon_sym_LBRACK] = ACTIONS(595),
        [anon_sym_readonly] = ACTIONS(597),
        [anon_sym_volatile] = ACTIONS(597),
        [anon_sym_bool] = ACTIONS(597),
        [anon_sym_decimal] = ACTIONS(597),
        [anon_sym_double] = ACTIONS(597),
        [anon_sym_float] = ACTIONS(597),
        [anon_sym_object] = ACTIONS(597),
        [anon_sym_string] = ACTIONS(597),
        [sym_identifier_name] = ACTIONS(599),
        [sym_comment] = ACTIONS(91),
    },
    [172] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(579),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [173] = {
        [anon_sym_LBRACE] = ACTIONS(601),
        [anon_sym_COLON] = ACTIONS(603),
        [sym_comment] = ACTIONS(91),
    },
    [174] = {
        [sym_enum_member_declaration] = STATE(180),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [175] = {
        [sym__integral_type] = STATE(176),
        [anon_sym_sbyte] = ACTIONS(253),
        [anon_sym_byte] = ACTIONS(253),
        [anon_sym_short] = ACTIONS(253),
        [anon_sym_ushort] = ACTIONS(253),
        [anon_sym_int] = ACTIONS(253),
        [anon_sym_uint] = ACTIONS(253),
        [anon_sym_long] = ACTIONS(253),
        [anon_sym_ulong] = ACTIONS(253),
        [anon_sym_char] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [176] = {
        [anon_sym_LBRACE] = ACTIONS(605),
        [sym_comment] = ACTIONS(91),
    },
    [177] = {
        [sym_enum_member_declaration] = STATE(178),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [178] = {
        [aux_sym_enum_declaration_repeat1] = STATE(179),
        [anon_sym_RBRACE] = ACTIONS(427),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(91),
    },
    [179] = {
        [anon_sym_RBRACE] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(91),
    },
    [180] = {
        [aux_sym_enum_declaration_repeat1] = STATE(182),
        [anon_sym_RBRACE] = ACTIONS(607),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(91),
    },
    [181] = {
        [ts_builtin_sym_end] = ACTIONS(609),
        [anon_sym_SEMI] = ACTIONS(611),
        [anon_sym_namespace] = ACTIONS(613),
        [anon_sym_RBRACE] = ACTIONS(609),
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
        [anon_sym_struct] = ACTIONS(613),
        [anon_sym_enum] = ACTIONS(613),
        [anon_sym_sbyte] = ACTIONS(613),
        [anon_sym_byte] = ACTIONS(613),
        [anon_sym_short] = ACTIONS(613),
        [anon_sym_ushort] = ACTIONS(613),
        [anon_sym_int] = ACTIONS(613),
        [anon_sym_uint] = ACTIONS(613),
        [anon_sym_long] = ACTIONS(613),
        [anon_sym_ulong] = ACTIONS(613),
        [anon_sym_char] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(609),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(613),
        [anon_sym_decimal] = ACTIONS(613),
        [anon_sym_double] = ACTIONS(613),
        [anon_sym_float] = ACTIONS(613),
        [anon_sym_object] = ACTIONS(613),
        [anon_sym_string] = ACTIONS(613),
        [sym_identifier_name] = ACTIONS(615),
        [sym_comment] = ACTIONS(91),
    },
    [182] = {
        [anon_sym_RBRACE] = ACTIONS(417),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(91),
    },
    [183] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_namespace] = ACTIONS(423),
        [anon_sym_RBRACE] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(423),
        [anon_sym_unsafe] = ACTIONS(423),
        [anon_sym_abstract] = ACTIONS(423),
        [anon_sym_sealed] = ACTIONS(423),
        [anon_sym_static] = ACTIONS(423),
        [anon_sym_new] = ACTIONS(423),
        [anon_sym_public] = ACTIONS(423),
        [anon_sym_protected] = ACTIONS(423),
        [anon_sym_internal] = ACTIONS(423),
        [anon_sym_private] = ACTIONS(423),
        [anon_sym_struct] = ACTIONS(423),
        [anon_sym_enum] = ACTIONS(423),
        [anon_sym_sbyte] = ACTIONS(423),
        [anon_sym_byte] = ACTIONS(423),
        [anon_sym_short] = ACTIONS(423),
        [anon_sym_ushort] = ACTIONS(423),
        [anon_sym_int] = ACTIONS(423),
        [anon_sym_uint] = ACTIONS(423),
        [anon_sym_long] = ACTIONS(423),
        [anon_sym_ulong] = ACTIONS(423),
        [anon_sym_char] = ACTIONS(423),
        [anon_sym_LBRACK] = ACTIONS(419),
        [anon_sym_readonly] = ACTIONS(423),
        [anon_sym_volatile] = ACTIONS(423),
        [anon_sym_bool] = ACTIONS(423),
        [anon_sym_decimal] = ACTIONS(423),
        [anon_sym_double] = ACTIONS(423),
        [anon_sym_float] = ACTIONS(423),
        [anon_sym_object] = ACTIONS(423),
        [anon_sym_string] = ACTIONS(423),
        [sym_identifier_name] = ACTIONS(425),
        [sym_comment] = ACTIONS(91),
    },
    [184] = {
        [sym_type_parameter_list] = STATE(186),
        [anon_sym_LBRACE] = ACTIONS(617),
        [anon_sym_LT] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [185] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(188),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(619),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [186] = {
        [anon_sym_LBRACE] = ACTIONS(439),
        [sym_comment] = ACTIONS(91),
    },
    [187] = {
        [ts_builtin_sym_end] = ACTIONS(621),
        [anon_sym_namespace] = ACTIONS(623),
        [anon_sym_RBRACE] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(623),
        [anon_sym_unsafe] = ACTIONS(623),
        [anon_sym_abstract] = ACTIONS(623),
        [anon_sym_sealed] = ACTIONS(623),
        [anon_sym_static] = ACTIONS(623),
        [anon_sym_new] = ACTIONS(623),
        [anon_sym_public] = ACTIONS(623),
        [anon_sym_protected] = ACTIONS(623),
        [anon_sym_internal] = ACTIONS(623),
        [anon_sym_private] = ACTIONS(623),
        [anon_sym_struct] = ACTIONS(623),
        [anon_sym_enum] = ACTIONS(623),
        [anon_sym_sbyte] = ACTIONS(623),
        [anon_sym_byte] = ACTIONS(623),
        [anon_sym_short] = ACTIONS(623),
        [anon_sym_ushort] = ACTIONS(623),
        [anon_sym_int] = ACTIONS(623),
        [anon_sym_uint] = ACTIONS(623),
        [anon_sym_long] = ACTIONS(623),
        [anon_sym_ulong] = ACTIONS(623),
        [anon_sym_char] = ACTIONS(623),
        [anon_sym_LBRACK] = ACTIONS(621),
        [anon_sym_readonly] = ACTIONS(623),
        [anon_sym_volatile] = ACTIONS(623),
        [anon_sym_bool] = ACTIONS(623),
        [anon_sym_decimal] = ACTIONS(623),
        [anon_sym_double] = ACTIONS(623),
        [anon_sym_float] = ACTIONS(623),
        [anon_sym_object] = ACTIONS(623),
        [anon_sym_string] = ACTIONS(623),
        [sym_identifier_name] = ACTIONS(625),
        [sym_comment] = ACTIONS(91),
    },
    [188] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(443),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [189] = {
        [sym_type_parameter_list] = STATE(191),
        [anon_sym_LBRACE] = ACTIONS(627),
        [anon_sym_LT] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [190] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(193),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(629),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [191] = {
        [anon_sym_LBRACE] = ACTIONS(573),
        [sym_comment] = ACTIONS(91),
    },
    [192] = {
        [ts_builtin_sym_end] = ACTIONS(631),
        [anon_sym_namespace] = ACTIONS(633),
        [anon_sym_RBRACE] = ACTIONS(631),
        [anon_sym_class] = ACTIONS(633),
        [anon_sym_unsafe] = ACTIONS(633),
        [anon_sym_abstract] = ACTIONS(633),
        [anon_sym_sealed] = ACTIONS(633),
        [anon_sym_static] = ACTIONS(633),
        [anon_sym_new] = ACTIONS(633),
        [anon_sym_public] = ACTIONS(633),
        [anon_sym_protected] = ACTIONS(633),
        [anon_sym_internal] = ACTIONS(633),
        [anon_sym_private] = ACTIONS(633),
        [anon_sym_struct] = ACTIONS(633),
        [anon_sym_enum] = ACTIONS(633),
        [anon_sym_sbyte] = ACTIONS(633),
        [anon_sym_byte] = ACTIONS(633),
        [anon_sym_short] = ACTIONS(633),
        [anon_sym_ushort] = ACTIONS(633),
        [anon_sym_int] = ACTIONS(633),
        [anon_sym_uint] = ACTIONS(633),
        [anon_sym_long] = ACTIONS(633),
        [anon_sym_ulong] = ACTIONS(633),
        [anon_sym_char] = ACTIONS(633),
        [anon_sym_LBRACK] = ACTIONS(631),
        [anon_sym_readonly] = ACTIONS(633),
        [anon_sym_volatile] = ACTIONS(633),
        [anon_sym_bool] = ACTIONS(633),
        [anon_sym_decimal] = ACTIONS(633),
        [anon_sym_double] = ACTIONS(633),
        [anon_sym_float] = ACTIONS(633),
        [anon_sym_object] = ACTIONS(633),
        [anon_sym_string] = ACTIONS(633),
        [sym_identifier_name] = ACTIONS(635),
        [sym_comment] = ACTIONS(91),
    },
    [193] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(575),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [194] = {
        [anon_sym_COMMA] = ACTIONS(637),
        [anon_sym_GT] = ACTIONS(637),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(91),
    },
    [195] = {
        [anon_sym_COMMA] = ACTIONS(641),
        [anon_sym_GT] = ACTIONS(641),
        [sym_comment] = ACTIONS(91),
    },
    [196] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(199),
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_GT] = ACTIONS(645),
        [sym_comment] = ACTIONS(91),
    },
    [197] = {
        [sym__type] = STATE(195),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [sym_type_parameter] = STATE(203),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [198] = {
        [anon_sym_LBRACE] = ACTIONS(647),
        [anon_sym_COMMA] = ACTIONS(647),
        [anon_sym_GT] = ACTIONS(647),
        [sym_identifier_name] = ACTIONS(649),
        [sym_comment] = ACTIONS(91),
    },
    [199] = {
        [anon_sym_COMMA] = ACTIONS(651),
        [anon_sym_GT] = ACTIONS(653),
        [sym_comment] = ACTIONS(91),
    },
    [200] = {
        [sym__type] = STATE(195),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [sym_type_parameter] = STATE(202),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [201] = {
        [anon_sym_LBRACE] = ACTIONS(655),
        [anon_sym_COMMA] = ACTIONS(655),
        [anon_sym_GT] = ACTIONS(655),
        [sym_identifier_name] = ACTIONS(657),
        [sym_comment] = ACTIONS(91),
    },
    [202] = {
        [anon_sym_COMMA] = ACTIONS(659),
        [anon_sym_GT] = ACTIONS(659),
        [sym_comment] = ACTIONS(91),
    },
    [203] = {
        [anon_sym_COMMA] = ACTIONS(661),
        [anon_sym_GT] = ACTIONS(661),
        [sym_comment] = ACTIONS(91),
    },
    [204] = {
        [anon_sym_sbyte] = ACTIONS(663),
        [anon_sym_byte] = ACTIONS(663),
        [anon_sym_short] = ACTIONS(663),
        [anon_sym_ushort] = ACTIONS(663),
        [anon_sym_int] = ACTIONS(663),
        [anon_sym_uint] = ACTIONS(663),
        [anon_sym_long] = ACTIONS(663),
        [anon_sym_ulong] = ACTIONS(663),
        [anon_sym_char] = ACTIONS(663),
        [anon_sym_bool] = ACTIONS(663),
        [anon_sym_decimal] = ACTIONS(663),
        [anon_sym_double] = ACTIONS(663),
        [anon_sym_float] = ACTIONS(663),
        [anon_sym_object] = ACTIONS(663),
        [anon_sym_string] = ACTIONS(663),
        [sym_identifier_name] = ACTIONS(665),
        [sym_comment] = ACTIONS(91),
    },
    [205] = {
        [anon_sym_LBRACE] = ACTIONS(667),
        [anon_sym_COLON] = ACTIONS(669),
        [sym_comment] = ACTIONS(91),
    },
    [206] = {
        [sym_enum_member_declaration] = STATE(209),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [207] = {
        [sym__integral_type] = STATE(208),
        [anon_sym_sbyte] = ACTIONS(253),
        [anon_sym_byte] = ACTIONS(253),
        [anon_sym_short] = ACTIONS(253),
        [anon_sym_ushort] = ACTIONS(253),
        [anon_sym_int] = ACTIONS(253),
        [anon_sym_uint] = ACTIONS(253),
        [anon_sym_long] = ACTIONS(253),
        [anon_sym_ulong] = ACTIONS(253),
        [anon_sym_char] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [208] = {
        [anon_sym_LBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(91),
    },
    [209] = {
        [aux_sym_enum_declaration_repeat1] = STATE(211),
        [anon_sym_RBRACE] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(91),
    },
    [210] = {
        [ts_builtin_sym_end] = ACTIONS(673),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_namespace] = ACTIONS(677),
        [anon_sym_RBRACE] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(677),
        [anon_sym_unsafe] = ACTIONS(677),
        [anon_sym_abstract] = ACTIONS(677),
        [anon_sym_sealed] = ACTIONS(677),
        [anon_sym_static] = ACTIONS(677),
        [anon_sym_new] = ACTIONS(677),
        [anon_sym_public] = ACTIONS(677),
        [anon_sym_protected] = ACTIONS(677),
        [anon_sym_internal] = ACTIONS(677),
        [anon_sym_private] = ACTIONS(677),
        [anon_sym_struct] = ACTIONS(677),
        [anon_sym_enum] = ACTIONS(677),
        [anon_sym_sbyte] = ACTIONS(677),
        [anon_sym_byte] = ACTIONS(677),
        [anon_sym_short] = ACTIONS(677),
        [anon_sym_ushort] = ACTIONS(677),
        [anon_sym_int] = ACTIONS(677),
        [anon_sym_uint] = ACTIONS(677),
        [anon_sym_long] = ACTIONS(677),
        [anon_sym_ulong] = ACTIONS(677),
        [anon_sym_char] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(673),
        [anon_sym_readonly] = ACTIONS(677),
        [anon_sym_volatile] = ACTIONS(677),
        [anon_sym_bool] = ACTIONS(677),
        [anon_sym_decimal] = ACTIONS(677),
        [anon_sym_double] = ACTIONS(677),
        [anon_sym_float] = ACTIONS(677),
        [anon_sym_object] = ACTIONS(677),
        [anon_sym_string] = ACTIONS(677),
        [sym_identifier_name] = ACTIONS(679),
        [sym_comment] = ACTIONS(91),
    },
    [211] = {
        [anon_sym_RBRACE] = ACTIONS(607),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(91),
    },
    [212] = {
        [ts_builtin_sym_end] = ACTIONS(609),
        [anon_sym_namespace] = ACTIONS(613),
        [anon_sym_RBRACE] = ACTIONS(609),
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
        [anon_sym_struct] = ACTIONS(613),
        [anon_sym_enum] = ACTIONS(613),
        [anon_sym_sbyte] = ACTIONS(613),
        [anon_sym_byte] = ACTIONS(613),
        [anon_sym_short] = ACTIONS(613),
        [anon_sym_ushort] = ACTIONS(613),
        [anon_sym_int] = ACTIONS(613),
        [anon_sym_uint] = ACTIONS(613),
        [anon_sym_long] = ACTIONS(613),
        [anon_sym_ulong] = ACTIONS(613),
        [anon_sym_char] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(609),
        [anon_sym_readonly] = ACTIONS(613),
        [anon_sym_volatile] = ACTIONS(613),
        [anon_sym_bool] = ACTIONS(613),
        [anon_sym_decimal] = ACTIONS(613),
        [anon_sym_double] = ACTIONS(613),
        [anon_sym_float] = ACTIONS(613),
        [anon_sym_object] = ACTIONS(613),
        [anon_sym_string] = ACTIONS(613),
        [sym_identifier_name] = ACTIONS(615),
        [sym_comment] = ACTIONS(91),
    },
    [213] = {
        [sym_type_parameter_list] = STATE(215),
        [anon_sym_LBRACE] = ACTIONS(681),
        [anon_sym_LT] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [214] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(217),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(683),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [215] = {
        [anon_sym_LBRACE] = ACTIONS(617),
        [sym_comment] = ACTIONS(91),
    },
    [216] = {
        [ts_builtin_sym_end] = ACTIONS(685),
        [anon_sym_namespace] = ACTIONS(687),
        [anon_sym_RBRACE] = ACTIONS(685),
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
        [anon_sym_struct] = ACTIONS(687),
        [anon_sym_enum] = ACTIONS(687),
        [anon_sym_sbyte] = ACTIONS(687),
        [anon_sym_byte] = ACTIONS(687),
        [anon_sym_short] = ACTIONS(687),
        [anon_sym_ushort] = ACTIONS(687),
        [anon_sym_int] = ACTIONS(687),
        [anon_sym_uint] = ACTIONS(687),
        [anon_sym_long] = ACTIONS(687),
        [anon_sym_ulong] = ACTIONS(687),
        [anon_sym_char] = ACTIONS(687),
        [anon_sym_LBRACK] = ACTIONS(685),
        [anon_sym_readonly] = ACTIONS(687),
        [anon_sym_volatile] = ACTIONS(687),
        [anon_sym_bool] = ACTIONS(687),
        [anon_sym_decimal] = ACTIONS(687),
        [anon_sym_double] = ACTIONS(687),
        [anon_sym_float] = ACTIONS(687),
        [anon_sym_object] = ACTIONS(687),
        [anon_sym_string] = ACTIONS(687),
        [sym_identifier_name] = ACTIONS(689),
        [sym_comment] = ACTIONS(91),
    },
    [217] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(619),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [218] = {
        [anon_sym_class] = ACTIONS(691),
        [sym_comment] = ACTIONS(91),
    },
    [219] = {
        [anon_sym_struct] = ACTIONS(693),
        [sym_comment] = ACTIONS(91),
    },
    [220] = {
        [sym_type_parameter_list] = STATE(222),
        [anon_sym_LBRACE] = ACTIONS(695),
        [anon_sym_LT] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [221] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(224),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(697),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [222] = {
        [anon_sym_LBRACE] = ACTIONS(627),
        [sym_comment] = ACTIONS(91),
    },
    [223] = {
        [ts_builtin_sym_end] = ACTIONS(699),
        [anon_sym_namespace] = ACTIONS(701),
        [anon_sym_RBRACE] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(701),
        [anon_sym_unsafe] = ACTIONS(701),
        [anon_sym_abstract] = ACTIONS(701),
        [anon_sym_sealed] = ACTIONS(701),
        [anon_sym_static] = ACTIONS(701),
        [anon_sym_new] = ACTIONS(701),
        [anon_sym_public] = ACTIONS(701),
        [anon_sym_protected] = ACTIONS(701),
        [anon_sym_internal] = ACTIONS(701),
        [anon_sym_private] = ACTIONS(701),
        [anon_sym_struct] = ACTIONS(701),
        [anon_sym_enum] = ACTIONS(701),
        [anon_sym_sbyte] = ACTIONS(701),
        [anon_sym_byte] = ACTIONS(701),
        [anon_sym_short] = ACTIONS(701),
        [anon_sym_ushort] = ACTIONS(701),
        [anon_sym_int] = ACTIONS(701),
        [anon_sym_uint] = ACTIONS(701),
        [anon_sym_long] = ACTIONS(701),
        [anon_sym_ulong] = ACTIONS(701),
        [anon_sym_char] = ACTIONS(701),
        [anon_sym_LBRACK] = ACTIONS(699),
        [anon_sym_readonly] = ACTIONS(701),
        [anon_sym_volatile] = ACTIONS(701),
        [anon_sym_bool] = ACTIONS(701),
        [anon_sym_decimal] = ACTIONS(701),
        [anon_sym_double] = ACTIONS(701),
        [anon_sym_float] = ACTIONS(701),
        [anon_sym_object] = ACTIONS(701),
        [anon_sym_string] = ACTIONS(701),
        [sym_identifier_name] = ACTIONS(703),
        [sym_comment] = ACTIONS(91),
    },
    [224] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(629),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [225] = {
        [anon_sym_COLON] = ACTIONS(705),
        [sym_comment] = ACTIONS(91),
    },
    [226] = {
        [sym_attribute_list] = STATE(227),
        [sym_attribute] = STATE(34),
        [sym_identifier_name] = ACTIONS(181),
        [sym_comment] = ACTIONS(91),
    },
    [227] = {
        [anon_sym_RBRACK] = ACTIONS(707),
        [sym_comment] = ACTIONS(91),
    },
    [228] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_namespace] = ACTIONS(709),
        [anon_sym_class] = ACTIONS(709),
        [anon_sym_unsafe] = ACTIONS(709),
        [anon_sym_abstract] = ACTIONS(709),
        [anon_sym_sealed] = ACTIONS(709),
        [anon_sym_static] = ACTIONS(709),
        [anon_sym_new] = ACTIONS(709),
        [anon_sym_public] = ACTIONS(709),
        [anon_sym_protected] = ACTIONS(709),
        [anon_sym_internal] = ACTIONS(709),
        [anon_sym_private] = ACTIONS(709),
        [anon_sym_struct] = ACTIONS(709),
        [anon_sym_enum] = ACTIONS(709),
        [anon_sym_LBRACK] = ACTIONS(709),
        [sym_comment] = ACTIONS(91),
    },
    [229] = {
        [anon_sym_COLON_COLON] = ACTIONS(711),
        [sym_comment] = ACTIONS(91),
    },
    [230] = {
        [anon_sym_LBRACE] = ACTIONS(713),
        [anon_sym_DOT] = ACTIONS(715),
        [sym_comment] = ACTIONS(91),
    },
    [231] = {
        [anon_sym_DOT] = ACTIONS(715),
        [sym_comment] = ACTIONS(91),
    },
    [232] = {
        [sym_identifier_name] = ACTIONS(717),
        [sym_comment] = ACTIONS(91),
    },
    [233] = {
        [anon_sym_SEMI] = ACTIONS(719),
        [anon_sym_LBRACE] = ACTIONS(719),
        [anon_sym_DOT] = ACTIONS(719),
        [sym_comment] = ACTIONS(91),
    },
    [234] = {
        [sym__type_declaration] = STATE(13),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [aux_sym_compilation_unit_repeat4] = STATE(236),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_RBRACE] = ACTIONS(721),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(91),
    },
    [235] = {
        [ts_builtin_sym_end] = ACTIONS(723),
        [anon_sym_namespace] = ACTIONS(723),
        [anon_sym_RBRACE] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(723),
        [anon_sym_unsafe] = ACTIONS(723),
        [anon_sym_abstract] = ACTIONS(723),
        [anon_sym_sealed] = ACTIONS(723),
        [anon_sym_static] = ACTIONS(723),
        [anon_sym_new] = ACTIONS(723),
        [anon_sym_public] = ACTIONS(723),
        [anon_sym_protected] = ACTIONS(723),
        [anon_sym_internal] = ACTIONS(723),
        [anon_sym_private] = ACTIONS(723),
        [anon_sym_struct] = ACTIONS(723),
        [anon_sym_enum] = ACTIONS(723),
        [anon_sym_LBRACK] = ACTIONS(723),
        [sym_comment] = ACTIONS(91),
    },
    [236] = {
        [sym__type_declaration] = STATE(44),
        [sym_namespace_declaration] = STATE(44),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_RBRACE] = ACTIONS(725),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(91),
    },
    [237] = {
        [ts_builtin_sym_end] = ACTIONS(727),
        [anon_sym_namespace] = ACTIONS(727),
        [anon_sym_RBRACE] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_unsafe] = ACTIONS(727),
        [anon_sym_abstract] = ACTIONS(727),
        [anon_sym_sealed] = ACTIONS(727),
        [anon_sym_static] = ACTIONS(727),
        [anon_sym_new] = ACTIONS(727),
        [anon_sym_public] = ACTIONS(727),
        [anon_sym_protected] = ACTIONS(727),
        [anon_sym_internal] = ACTIONS(727),
        [anon_sym_private] = ACTIONS(727),
        [anon_sym_struct] = ACTIONS(727),
        [anon_sym_enum] = ACTIONS(727),
        [anon_sym_LBRACK] = ACTIONS(727),
        [sym_comment] = ACTIONS(91),
    },
    [238] = {
        [sym_identifier_name] = ACTIONS(729),
        [sym_comment] = ACTIONS(91),
    },
    [239] = {
        [anon_sym_DOT] = ACTIONS(731),
        [sym_comment] = ACTIONS(91),
    },
    [240] = {
        [sym_global] = ACTIONS(733),
        [sym_identifier_name] = ACTIONS(735),
        [sym_comment] = ACTIONS(91),
    },
    [241] = {
        [anon_sym_SEMI] = ACTIONS(737),
        [anon_sym_EQ] = ACTIONS(739),
        [anon_sym_DOT] = ACTIONS(715),
        [sym_comment] = ACTIONS(91),
    },
    [242] = {
        [anon_sym_SEMI] = ACTIONS(737),
        [anon_sym_DOT] = ACTIONS(715),
        [sym_comment] = ACTIONS(91),
    },
    [243] = {
        [sym_qualified_name] = STATE(244),
        [sym_alias_qualified_name] = STATE(231),
        [sym_global] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(741),
        [sym_comment] = ACTIONS(91),
    },
    [244] = {
        [anon_sym_SEMI] = ACTIONS(743),
        [anon_sym_DOT] = ACTIONS(715),
        [sym_comment] = ACTIONS(91),
    },
    [245] = {
        [ts_builtin_sym_end] = ACTIONS(745),
        [anon_sym_using] = ACTIONS(745),
        [anon_sym_namespace] = ACTIONS(745),
        [anon_sym_class] = ACTIONS(745),
        [anon_sym_unsafe] = ACTIONS(745),
        [anon_sym_abstract] = ACTIONS(745),
        [anon_sym_sealed] = ACTIONS(745),
        [anon_sym_static] = ACTIONS(745),
        [anon_sym_new] = ACTIONS(745),
        [anon_sym_public] = ACTIONS(745),
        [anon_sym_protected] = ACTIONS(745),
        [anon_sym_internal] = ACTIONS(745),
        [anon_sym_private] = ACTIONS(745),
        [anon_sym_struct] = ACTIONS(745),
        [anon_sym_enum] = ACTIONS(745),
        [anon_sym_LBRACK] = ACTIONS(745),
        [sym_comment] = ACTIONS(91),
    },
    [246] = {
        [ts_builtin_sym_end] = ACTIONS(747),
        [anon_sym_using] = ACTIONS(747),
        [anon_sym_namespace] = ACTIONS(747),
        [anon_sym_class] = ACTIONS(747),
        [anon_sym_unsafe] = ACTIONS(747),
        [anon_sym_abstract] = ACTIONS(747),
        [anon_sym_sealed] = ACTIONS(747),
        [anon_sym_static] = ACTIONS(747),
        [anon_sym_new] = ACTIONS(747),
        [anon_sym_public] = ACTIONS(747),
        [anon_sym_protected] = ACTIONS(747),
        [anon_sym_internal] = ACTIONS(747),
        [anon_sym_private] = ACTIONS(747),
        [anon_sym_struct] = ACTIONS(747),
        [anon_sym_enum] = ACTIONS(747),
        [anon_sym_LBRACK] = ACTIONS(747),
        [sym_comment] = ACTIONS(91),
    },
    [247] = {
        [sym_global] = ACTIONS(749),
        [sym_identifier_name] = ACTIONS(751),
        [sym_comment] = ACTIONS(91),
    },
    [248] = {
        [sym_identifier_name] = ACTIONS(753),
        [sym_comment] = ACTIONS(91),
    },
    [249] = {
        [anon_sym_SEMI] = ACTIONS(755),
        [sym_comment] = ACTIONS(91),
    },
    [250] = {
        [ts_builtin_sym_end] = ACTIONS(757),
        [anon_sym_extern] = ACTIONS(757),
        [anon_sym_using] = ACTIONS(757),
        [anon_sym_namespace] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_unsafe] = ACTIONS(757),
        [anon_sym_abstract] = ACTIONS(757),
        [anon_sym_sealed] = ACTIONS(757),
        [anon_sym_static] = ACTIONS(757),
        [anon_sym_new] = ACTIONS(757),
        [anon_sym_public] = ACTIONS(757),
        [anon_sym_protected] = ACTIONS(757),
        [anon_sym_internal] = ACTIONS(757),
        [anon_sym_private] = ACTIONS(757),
        [anon_sym_struct] = ACTIONS(757),
        [anon_sym_enum] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(757),
        [sym_comment] = ACTIONS(91),
    },
    [251] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_extern] = ACTIONS(769),
        [anon_sym_using] = ACTIONS(771),
        [anon_sym_namespace] = ACTIONS(775),
        [anon_sym_RBRACE] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_unsafe] = ACTIONS(795),
        [anon_sym_abstract] = ACTIONS(795),
        [anon_sym_sealed] = ACTIONS(795),
        [anon_sym_static] = ACTIONS(795),
        [anon_sym_new] = ACTIONS(795),
        [anon_sym_public] = ACTIONS(795),
        [anon_sym_protected] = ACTIONS(795),
        [anon_sym_internal] = ACTIONS(795),
        [anon_sym_private] = ACTIONS(795),
        [anon_sym_struct] = ACTIONS(795),
        [anon_sym_enum] = ACTIONS(795),
        [anon_sym_sbyte] = ACTIONS(808),
        [anon_sym_byte] = ACTIONS(808),
        [anon_sym_short] = ACTIONS(808),
        [anon_sym_ushort] = ACTIONS(808),
        [anon_sym_int] = ACTIONS(808),
        [anon_sym_uint] = ACTIONS(808),
        [anon_sym_long] = ACTIONS(808),
        [anon_sym_ulong] = ACTIONS(808),
        [anon_sym_char] = ACTIONS(808),
        [anon_sym_LBRACK] = ACTIONS(818),
        [anon_sym_readonly] = ACTIONS(808),
        [anon_sym_volatile] = ACTIONS(808),
        [anon_sym_bool] = ACTIONS(808),
        [anon_sym_decimal] = ACTIONS(808),
        [anon_sym_double] = ACTIONS(808),
        [anon_sym_float] = ACTIONS(808),
        [anon_sym_object] = ACTIONS(808),
        [anon_sym_string] = ACTIONS(808),
        [sym_identifier_name] = ACTIONS(831),
        [sym_comment] = ACTIONS(91),
    },
    [252] = {
        [sym__type_declaration] = STATE(372),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_member_declaration] = STATE(414),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(283),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_compilation_unit_repeat4] = STATE(236),
        [aux_sym_class_declaration_repeat1] = STATE(302),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_namespace] = ACTIONS(841),
        [anon_sym_RBRACE] = ACTIONS(843),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(845),
        [sym_comment] = ACTIONS(91),
    },
    [253] = {
        [ts_builtin_sym_end] = ACTIONS(847),
        [anon_sym_SEMI] = ACTIONS(866),
        [anon_sym_namespace] = ACTIONS(868),
        [anon_sym_RBRACE] = ACTIONS(847),
        [anon_sym_class] = ACTIONS(868),
        [anon_sym_unsafe] = ACTIONS(868),
        [anon_sym_abstract] = ACTIONS(868),
        [anon_sym_sealed] = ACTIONS(868),
        [anon_sym_static] = ACTIONS(868),
        [anon_sym_new] = ACTIONS(868),
        [anon_sym_public] = ACTIONS(868),
        [anon_sym_protected] = ACTIONS(868),
        [anon_sym_internal] = ACTIONS(868),
        [anon_sym_private] = ACTIONS(868),
        [anon_sym_struct] = ACTIONS(868),
        [anon_sym_enum] = ACTIONS(868),
        [anon_sym_sbyte] = ACTIONS(887),
        [anon_sym_byte] = ACTIONS(887),
        [anon_sym_short] = ACTIONS(887),
        [anon_sym_ushort] = ACTIONS(887),
        [anon_sym_int] = ACTIONS(887),
        [anon_sym_uint] = ACTIONS(887),
        [anon_sym_long] = ACTIONS(887),
        [anon_sym_ulong] = ACTIONS(887),
        [anon_sym_char] = ACTIONS(887),
        [anon_sym_LBRACK] = ACTIONS(847),
        [anon_sym_readonly] = ACTIONS(887),
        [anon_sym_volatile] = ACTIONS(887),
        [anon_sym_bool] = ACTIONS(887),
        [anon_sym_decimal] = ACTIONS(887),
        [anon_sym_double] = ACTIONS(887),
        [anon_sym_float] = ACTIONS(887),
        [anon_sym_object] = ACTIONS(887),
        [anon_sym_string] = ACTIONS(887),
        [sym_identifier_name] = ACTIONS(904),
        [sym_comment] = ACTIONS(91),
    },
    [254] = {
        [sym_identifier_name] = ACTIONS(921),
        [sym_comment] = ACTIONS(91),
    },
    [255] = {
        [sym__class_modifiers] = STATE(218),
        [sym__field_modifiers] = STATE(204),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_unsafe] = ACTIONS(451),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(451),
        [anon_sym_public] = ACTIONS(451),
        [anon_sym_protected] = ACTIONS(451),
        [anon_sym_internal] = ACTIONS(451),
        [anon_sym_private] = ACTIONS(451),
        [anon_sym_sbyte] = ACTIONS(479),
        [anon_sym_byte] = ACTIONS(479),
        [anon_sym_short] = ACTIONS(479),
        [anon_sym_ushort] = ACTIONS(479),
        [anon_sym_int] = ACTIONS(479),
        [anon_sym_uint] = ACTIONS(479),
        [anon_sym_long] = ACTIONS(479),
        [anon_sym_ulong] = ACTIONS(479),
        [anon_sym_char] = ACTIONS(479),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(479),
        [anon_sym_decimal] = ACTIONS(479),
        [anon_sym_double] = ACTIONS(479),
        [anon_sym_float] = ACTIONS(479),
        [anon_sym_object] = ACTIONS(479),
        [anon_sym_string] = ACTIONS(479),
        [sym_global] = ACTIONS(733),
        [sym_identifier_name] = ACTIONS(923),
        [sym_comment] = ACTIONS(91),
    },
    [256] = {
        [sym_identifier_name] = ACTIONS(926),
        [sym_comment] = ACTIONS(91),
    },
    [257] = {
        [sym_identifier_name] = ACTIONS(928),
        [sym_comment] = ACTIONS(91),
    },
    [258] = {
        [sym__integral_type] = STATE(282),
        [sym_attribute_list] = STATE(227),
        [sym_attribute] = STATE(34),
        [anon_sym_sbyte] = ACTIONS(930),
        [anon_sym_byte] = ACTIONS(930),
        [anon_sym_short] = ACTIONS(930),
        [anon_sym_ushort] = ACTIONS(930),
        [anon_sym_int] = ACTIONS(930),
        [anon_sym_uint] = ACTIONS(930),
        [anon_sym_long] = ACTIONS(930),
        [anon_sym_ulong] = ACTIONS(930),
        [anon_sym_char] = ACTIONS(930),
        [sym_identifier_name] = ACTIONS(139),
        [sym_comment] = ACTIONS(91),
    },
    [259] = {
        [sym_enum_member_declaration] = STATE(387),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [sym_attribute] = STATE(388),
        [sym__type] = STATE(195),
        [sym_generic_name] = STATE(143),
        [sym_variable_declarator] = STATE(389),
        [sym_predefined_type] = STATE(143),
        [sym_type_parameter] = STATE(390),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(932),
        [sym_comment] = ACTIONS(91),
    },
    [260] = {
        [anon_sym_LBRACE] = ACTIONS(255),
        [anon_sym_COMMA] = ACTIONS(485),
        [anon_sym_GT] = ACTIONS(485),
        [sym_identifier_name] = ACTIONS(487),
        [sym_comment] = ACTIONS(91),
    },
    [261] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_namespace] = ACTIONS(934),
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
        [anon_sym_struct] = ACTIONS(936),
        [anon_sym_enum] = ACTIONS(936),
        [anon_sym_sbyte] = ACTIONS(207),
        [anon_sym_byte] = ACTIONS(207),
        [anon_sym_short] = ACTIONS(207),
        [anon_sym_ushort] = ACTIONS(207),
        [anon_sym_int] = ACTIONS(207),
        [anon_sym_uint] = ACTIONS(207),
        [anon_sym_long] = ACTIONS(207),
        [anon_sym_ulong] = ACTIONS(207),
        [anon_sym_char] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(939),
        [anon_sym_readonly] = ACTIONS(207),
        [anon_sym_volatile] = ACTIONS(207),
        [anon_sym_bool] = ACTIONS(207),
        [anon_sym_decimal] = ACTIONS(207),
        [anon_sym_double] = ACTIONS(207),
        [anon_sym_float] = ACTIONS(207),
        [anon_sym_object] = ACTIONS(207),
        [anon_sym_string] = ACTIONS(207),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(91),
    },
    [262] = {
        [sym__literal] = STATE(81),
        [sym_boolean_literal] = STATE(77),
        [sym_character_literal] = STATE(77),
        [sym_integer_literal] = STATE(77),
        [sym_real_literal] = STATE(77),
        [sym_string_literal] = STATE(77),
        [sym__regular_string_literal] = STATE(82),
        [sym__verbatim_string_literal] = STATE(82),
        [anon_sym_true] = ACTIONS(942),
        [anon_sym_false] = ACTIONS(942),
        [anon_sym_SQUOTE] = ACTIONS(273),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(275),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(277),
        [sym_null_literal] = ACTIONS(944),
        [anon_sym_DOT] = ACTIONS(281),
        [anon_sym_DQUOTE] = ACTIONS(283),
        [anon_sym_AT_DQUOTE] = ACTIONS(285),
        [sym_global] = ACTIONS(749),
        [sym_identifier_name] = ACTIONS(751),
        [sym_comment] = ACTIONS(91),
    },
    [263] = {
        [sym__unicode_escape_sequence] = STATE(104),
        [sym__simple_escape_sequence] = STATE(104),
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(385),
        [anon_sym_COMMA] = ACTIONS(385),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(946),
        [sym__hexadecimal_escape_sequence] = ACTIONS(291),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(293),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(293),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(295),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(295),
        [anon_sym_BSLASH0] = ACTIONS(295),
        [anon_sym_BSLASHa] = ACTIONS(295),
        [anon_sym_BSLASHb] = ACTIONS(295),
        [anon_sym_BSLASHf] = ACTIONS(295),
        [anon_sym_BSLASHn] = ACTIONS(295),
        [anon_sym_BSLASHr] = ACTIONS(295),
        [anon_sym_BSLASHt] = ACTIONS(295),
        [anon_sym_BSLASHv] = ACTIONS(295),
        [sym_comment] = ACTIONS(91),
    },
    [264] = {
        [anon_sym_SQUOTE] = ACTIONS(383),
        [sym__hexadecimal_escape_sequence] = ACTIONS(331),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(333),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(333),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(333),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(333),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(333),
        [anon_sym_BSLASH0] = ACTIONS(333),
        [anon_sym_BSLASHa] = ACTIONS(333),
        [anon_sym_BSLASHb] = ACTIONS(333),
        [anon_sym_BSLASHf] = ACTIONS(333),
        [anon_sym_BSLASHn] = ACTIONS(333),
        [anon_sym_BSLASHr] = ACTIONS(333),
        [anon_sym_BSLASHt] = ACTIONS(333),
        [anon_sym_BSLASHv] = ACTIONS(333),
        [anon_sym_DQUOTE] = ACTIONS(333),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(948),
        [sym_comment] = ACTIONS(91),
    },
    [265] = {
        [anon_sym_SEMI] = ACTIONS(950),
        [anon_sym_RBRACE] = ACTIONS(950),
        [anon_sym_COMMA] = ACTIONS(950),
        [sym__integer_type_suffix] = ACTIONS(299),
        [anon_sym_DOT] = ACTIONS(301),
        [sym__real_type_suffix] = ACTIONS(954),
        [sym__exponent_part] = ACTIONS(956),
        [sym_comment] = ACTIONS(91),
    },
    [266] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(958),
        [sym_identifier_name] = ACTIONS(717),
        [sym_comment] = ACTIONS(91),
    },
    [267] = {
        [anon_sym_SEMI] = ACTIONS(960),
        [anon_sym_RBRACE] = ACTIONS(960),
        [anon_sym_COMMA] = ACTIONS(960),
        [sym_comment] = ACTIONS(91),
    },
    [268] = {
        [anon_sym_SEMI] = ACTIONS(965),
        [anon_sym_RBRACE] = ACTIONS(965),
        [anon_sym_COMMA] = ACTIONS(965),
        [sym__real_type_suffix] = ACTIONS(969),
        [sym_comment] = ACTIONS(91),
    },
    [269] = {
        [sym__unicode_escape_sequence] = STATE(85),
        [sym__simple_escape_sequence] = STATE(85),
        [sym__regular_string_literal_character] = STATE(89),
        [aux_sym__regular_string_literal_repeat1] = STATE(90),
        [anon_sym_SEMI] = ACTIONS(971),
        [anon_sym_RBRACE] = ACTIONS(971),
        [anon_sym_COMMA] = ACTIONS(971),
        [sym__hexadecimal_escape_sequence] = ACTIONS(311),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(313),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(313),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(315),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(315),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(315),
        [anon_sym_BSLASH0] = ACTIONS(315),
        [anon_sym_BSLASHa] = ACTIONS(315),
        [anon_sym_BSLASHb] = ACTIONS(315),
        [anon_sym_BSLASHf] = ACTIONS(315),
        [anon_sym_BSLASHn] = ACTIONS(315),
        [anon_sym_BSLASHr] = ACTIONS(315),
        [anon_sym_BSLASHt] = ACTIONS(315),
        [anon_sym_BSLASHv] = ACTIONS(315),
        [anon_sym_DQUOTE] = ACTIONS(317),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(975),
        [sym_comment] = ACTIONS(91),
    },
    [270] = {
        [anon_sym_LBRACE] = ACTIONS(977),
        [anon_sym_COMMA] = ACTIONS(977),
        [anon_sym_GT] = ACTIONS(977),
        [sym_identifier_name] = ACTIONS(980),
        [sym_comment] = ACTIONS(91),
    },
    [271] = {
        [sym_attribute_argument_list] = STATE(42),
        [sym_equals_value_clause] = STATE(294),
        [sym_type_parameter_list] = STATE(296),
        [anon_sym_SEMI] = ACTIONS(983),
        [anon_sym_LBRACE] = ACTIONS(987),
        [anon_sym_RBRACE] = ACTIONS(990),
        [anon_sym_COLON] = ACTIONS(993),
        [anon_sym_COMMA] = ACTIONS(995),
        [anon_sym_RBRACK] = ACTIONS(189),
        [anon_sym_LPAREN] = ACTIONS(191),
        [anon_sym_EQ] = ACTIONS(1001),
        [anon_sym_DOT] = ACTIONS(1003),
        [anon_sym_LT] = ACTIONS(441),
        [anon_sym_GT] = ACTIONS(489),
        [sym_identifier_name] = ACTIONS(491),
        [sym_comment] = ACTIONS(91),
    },
    [272] = {
        [ts_builtin_sym_end] = ACTIONS(1007),
        [anon_sym_namespace] = ACTIONS(1010),
        [anon_sym_RBRACE] = ACTIONS(1013),
        [anon_sym_class] = ACTIONS(1018),
        [anon_sym_unsafe] = ACTIONS(1018),
        [anon_sym_abstract] = ACTIONS(1018),
        [anon_sym_sealed] = ACTIONS(1018),
        [anon_sym_static] = ACTIONS(1018),
        [anon_sym_new] = ACTIONS(1018),
        [anon_sym_public] = ACTIONS(1018),
        [anon_sym_protected] = ACTIONS(1018),
        [anon_sym_internal] = ACTIONS(1018),
        [anon_sym_private] = ACTIONS(1018),
        [anon_sym_struct] = ACTIONS(1018),
        [anon_sym_enum] = ACTIONS(1018),
        [anon_sym_sbyte] = ACTIONS(1023),
        [anon_sym_byte] = ACTIONS(1023),
        [anon_sym_short] = ACTIONS(1023),
        [anon_sym_ushort] = ACTIONS(1023),
        [anon_sym_int] = ACTIONS(1023),
        [anon_sym_uint] = ACTIONS(1023),
        [anon_sym_long] = ACTIONS(1023),
        [anon_sym_ulong] = ACTIONS(1023),
        [anon_sym_char] = ACTIONS(1023),
        [anon_sym_LBRACK] = ACTIONS(1013),
        [anon_sym_readonly] = ACTIONS(1023),
        [anon_sym_volatile] = ACTIONS(1023),
        [anon_sym_bool] = ACTIONS(1023),
        [anon_sym_decimal] = ACTIONS(1023),
        [anon_sym_double] = ACTIONS(1023),
        [anon_sym_float] = ACTIONS(1023),
        [anon_sym_object] = ACTIONS(1023),
        [anon_sym_string] = ACTIONS(1023),
        [sym_identifier_name] = ACTIONS(1026),
        [sym_comment] = ACTIONS(91),
    },
    [273] = {
        [ts_builtin_sym_end] = ACTIONS(1029),
        [anon_sym_extern] = ACTIONS(1029),
        [anon_sym_using] = ACTIONS(1029),
        [anon_sym_namespace] = ACTIONS(1029),
        [anon_sym_class] = ACTIONS(1029),
        [anon_sym_unsafe] = ACTIONS(1029),
        [anon_sym_abstract] = ACTIONS(1029),
        [anon_sym_sealed] = ACTIONS(1029),
        [anon_sym_static] = ACTIONS(1029),
        [anon_sym_new] = ACTIONS(1029),
        [anon_sym_public] = ACTIONS(1029),
        [anon_sym_protected] = ACTIONS(1029),
        [anon_sym_internal] = ACTIONS(1029),
        [anon_sym_private] = ACTIONS(1029),
        [anon_sym_struct] = ACTIONS(1029),
        [anon_sym_enum] = ACTIONS(1029),
        [anon_sym_LBRACK] = ACTIONS(1029),
        [sym_comment] = ACTIONS(91),
    },
    [274] = {
        [ts_builtin_sym_end] = ACTIONS(1032),
        [anon_sym_using] = ACTIONS(1032),
        [anon_sym_namespace] = ACTIONS(1032),
        [anon_sym_class] = ACTIONS(1032),
        [anon_sym_unsafe] = ACTIONS(1032),
        [anon_sym_abstract] = ACTIONS(1032),
        [anon_sym_sealed] = ACTIONS(1032),
        [anon_sym_static] = ACTIONS(1032),
        [anon_sym_new] = ACTIONS(1032),
        [anon_sym_public] = ACTIONS(1032),
        [anon_sym_protected] = ACTIONS(1032),
        [anon_sym_internal] = ACTIONS(1032),
        [anon_sym_private] = ACTIONS(1032),
        [anon_sym_struct] = ACTIONS(1032),
        [anon_sym_enum] = ACTIONS(1032),
        [anon_sym_LBRACK] = ACTIONS(1032),
        [sym_comment] = ACTIONS(91),
    },
    [275] = {
        [ts_builtin_sym_end] = ACTIONS(1007),
        [anon_sym_namespace] = ACTIONS(1007),
        [anon_sym_RBRACE] = ACTIONS(1007),
        [anon_sym_class] = ACTIONS(1007),
        [anon_sym_unsafe] = ACTIONS(1007),
        [anon_sym_abstract] = ACTIONS(1007),
        [anon_sym_sealed] = ACTIONS(1007),
        [anon_sym_static] = ACTIONS(1007),
        [anon_sym_new] = ACTIONS(1007),
        [anon_sym_public] = ACTIONS(1007),
        [anon_sym_protected] = ACTIONS(1007),
        [anon_sym_internal] = ACTIONS(1007),
        [anon_sym_private] = ACTIONS(1007),
        [anon_sym_struct] = ACTIONS(1007),
        [anon_sym_enum] = ACTIONS(1007),
        [anon_sym_LBRACK] = ACTIONS(1007),
        [sym_comment] = ACTIONS(91),
    },
    [276] = {
        [anon_sym_class] = ACTIONS(1035),
        [sym_comment] = ACTIONS(91),
    },
    [277] = {
        [anon_sym_class] = ACTIONS(1037),
        [sym_comment] = ACTIONS(91),
    },
    [278] = {
        [anon_sym_struct] = ACTIONS(1040),
        [sym_comment] = ACTIONS(91),
    },
    [279] = {
        [anon_sym_struct] = ACTIONS(1042),
        [sym_comment] = ACTIONS(91),
    },
    [280] = {
        [aux_sym_enum_declaration_repeat1] = STATE(303),
        [anon_sym_RBRACE] = ACTIONS(1045),
        [anon_sym_COMMA] = ACTIONS(1049),
        [sym_comment] = ACTIONS(91),
    },
    [281] = {
        [anon_sym_enum] = ACTIONS(1053),
        [sym_comment] = ACTIONS(91),
    },
    [282] = {
        [anon_sym_LBRACE] = ACTIONS(1055),
        [sym_comment] = ACTIONS(91),
    },
    [283] = {
        [sym_class_modifiers] = STATE(57),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_modifiers] = STATE(58),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_modifier] = STATE(59),
        [sym_field_modifiers] = STATE(158),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(156),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(501),
        [anon_sym_enum] = ACTIONS(503),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(1057),
        [sym_comment] = ACTIONS(91),
    },
    [284] = {
        [anon_sym_class] = ACTIONS(1059),
        [anon_sym_unsafe] = ACTIONS(1059),
        [anon_sym_abstract] = ACTIONS(1059),
        [anon_sym_sealed] = ACTIONS(1059),
        [anon_sym_static] = ACTIONS(1059),
        [anon_sym_new] = ACTIONS(1059),
        [anon_sym_public] = ACTIONS(1059),
        [anon_sym_protected] = ACTIONS(1059),
        [anon_sym_internal] = ACTIONS(1059),
        [anon_sym_private] = ACTIONS(1059),
        [anon_sym_struct] = ACTIONS(1059),
        [anon_sym_enum] = ACTIONS(1059),
        [anon_sym_sbyte] = ACTIONS(1059),
        [anon_sym_byte] = ACTIONS(1059),
        [anon_sym_short] = ACTIONS(1059),
        [anon_sym_ushort] = ACTIONS(1059),
        [anon_sym_int] = ACTIONS(1059),
        [anon_sym_uint] = ACTIONS(1059),
        [anon_sym_long] = ACTIONS(1059),
        [anon_sym_ulong] = ACTIONS(1059),
        [anon_sym_char] = ACTIONS(1059),
        [anon_sym_LBRACK] = ACTIONS(1062),
        [anon_sym_readonly] = ACTIONS(1059),
        [anon_sym_volatile] = ACTIONS(1059),
        [anon_sym_bool] = ACTIONS(1059),
        [anon_sym_decimal] = ACTIONS(1059),
        [anon_sym_double] = ACTIONS(1059),
        [anon_sym_float] = ACTIONS(1059),
        [anon_sym_object] = ACTIONS(1059),
        [anon_sym_string] = ACTIONS(1059),
        [sym_identifier_name] = ACTIONS(1065),
        [sym_comment] = ACTIONS(91),
    },
    [285] = {
        [anon_sym_RBRACK] = ACTIONS(1068),
        [sym_comment] = ACTIONS(91),
    },
    [286] = {
        [aux_sym_attribute_list_repeat1] = STATE(36),
        [anon_sym_COMMA] = ACTIONS(1070),
        [anon_sym_RBRACK] = ACTIONS(1074),
        [sym_comment] = ACTIONS(91),
    },
    [287] = {
        [ts_builtin_sym_end] = ACTIONS(1078),
        [anon_sym_namespace] = ACTIONS(1078),
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
        [anon_sym_struct] = ACTIONS(1078),
        [anon_sym_enum] = ACTIONS(1078),
        [anon_sym_LBRACK] = ACTIONS(1078),
        [sym_comment] = ACTIONS(91),
    },
    [288] = {
        [anon_sym_RBRACE] = ACTIONS(1081),
        [anon_sym_class] = ACTIONS(1023),
        [anon_sym_unsafe] = ACTIONS(1023),
        [anon_sym_abstract] = ACTIONS(1023),
        [anon_sym_sealed] = ACTIONS(1023),
        [anon_sym_static] = ACTIONS(1023),
        [anon_sym_new] = ACTIONS(1023),
        [anon_sym_public] = ACTIONS(1023),
        [anon_sym_protected] = ACTIONS(1023),
        [anon_sym_internal] = ACTIONS(1023),
        [anon_sym_private] = ACTIONS(1023),
        [anon_sym_struct] = ACTIONS(1023),
        [anon_sym_enum] = ACTIONS(1023),
        [anon_sym_sbyte] = ACTIONS(1023),
        [anon_sym_byte] = ACTIONS(1023),
        [anon_sym_short] = ACTIONS(1023),
        [anon_sym_ushort] = ACTIONS(1023),
        [anon_sym_int] = ACTIONS(1023),
        [anon_sym_uint] = ACTIONS(1023),
        [anon_sym_long] = ACTIONS(1023),
        [anon_sym_ulong] = ACTIONS(1023),
        [anon_sym_char] = ACTIONS(1023),
        [anon_sym_LBRACK] = ACTIONS(1081),
        [anon_sym_readonly] = ACTIONS(1023),
        [anon_sym_volatile] = ACTIONS(1023),
        [anon_sym_bool] = ACTIONS(1023),
        [anon_sym_decimal] = ACTIONS(1023),
        [anon_sym_double] = ACTIONS(1023),
        [anon_sym_float] = ACTIONS(1023),
        [anon_sym_object] = ACTIONS(1023),
        [anon_sym_string] = ACTIONS(1023),
        [sym_identifier_name] = ACTIONS(1026),
        [sym_comment] = ACTIONS(91),
    },
    [289] = {
        [sym_variable_declaration] = STATE(317),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [290] = {
        [anon_sym_sbyte] = ACTIONS(1084),
        [anon_sym_byte] = ACTIONS(1084),
        [anon_sym_short] = ACTIONS(1084),
        [anon_sym_ushort] = ACTIONS(1084),
        [anon_sym_int] = ACTIONS(1084),
        [anon_sym_uint] = ACTIONS(1084),
        [anon_sym_long] = ACTIONS(1084),
        [anon_sym_ulong] = ACTIONS(1084),
        [anon_sym_char] = ACTIONS(1084),
        [anon_sym_bool] = ACTIONS(1084),
        [anon_sym_decimal] = ACTIONS(1084),
        [anon_sym_double] = ACTIONS(1084),
        [anon_sym_float] = ACTIONS(1084),
        [anon_sym_object] = ACTIONS(1084),
        [anon_sym_string] = ACTIONS(1084),
        [sym_identifier_name] = ACTIONS(1087),
        [sym_comment] = ACTIONS(91),
    },
    [291] = {
        [anon_sym_SEMI] = ACTIONS(1090),
        [sym_comment] = ACTIONS(91),
    },
    [292] = {
        [sym_variable_declarator] = STATE(148),
        [anon_sym_COMMA] = ACTIONS(641),
        [anon_sym_GT] = ACTIONS(641),
        [sym_identifier_name] = ACTIONS(511),
        [sym_comment] = ACTIONS(91),
    },
    [293] = {
        [aux_sym_variable_declaration_repeat1] = STATE(150),
        [anon_sym_SEMI] = ACTIONS(1092),
        [anon_sym_COMMA] = ACTIONS(1096),
        [sym_comment] = ACTIONS(91),
    },
    [294] = {
        [anon_sym_SEMI] = ACTIONS(541),
        [anon_sym_RBRACE] = ACTIONS(1100),
        [anon_sym_COMMA] = ACTIONS(1103),
        [sym_comment] = ACTIONS(91),
    },
    [295] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(1107),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1110),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1110),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(1110),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(1110),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(1110),
        [anon_sym_BSLASH0] = ACTIONS(1110),
        [anon_sym_BSLASHa] = ACTIONS(1110),
        [anon_sym_BSLASHb] = ACTIONS(1110),
        [anon_sym_BSLASHf] = ACTIONS(1110),
        [anon_sym_BSLASHn] = ACTIONS(1110),
        [anon_sym_BSLASHr] = ACTIONS(1110),
        [anon_sym_BSLASHt] = ACTIONS(1110),
        [anon_sym_BSLASHv] = ACTIONS(1110),
        [anon_sym_DQUOTE] = ACTIONS(1110),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1107),
        [sym_comment] = ACTIONS(91),
    },
    [296] = {
        [anon_sym_LBRACE] = ACTIONS(1113),
        [anon_sym_COMMA] = ACTIONS(637),
        [anon_sym_GT] = ACTIONS(637),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(91),
    },
    [297] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(199),
        [anon_sym_COMMA] = ACTIONS(1115),
        [anon_sym_GT] = ACTIONS(1119),
        [sym_comment] = ACTIONS(91),
    },
    [298] = {
        [anon_sym_SEMI] = ACTIONS(1123),
        [anon_sym_LBRACE] = ACTIONS(713),
        [anon_sym_DOT] = ACTIONS(715),
        [sym_comment] = ACTIONS(91),
    },
    [299] = {
        [sym__type_declaration] = STATE(13),
        [sym_using_directive] = STATE(47),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [sym__global_attributes] = STATE(24),
        [aux_sym_compilation_unit_repeat3] = STATE(308),
        [aux_sym_compilation_unit_repeat4] = STATE(309),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(1125),
        [anon_sym_using] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [300] = {
        [sym__type_declaration] = STATE(13),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [sym__global_attributes] = STATE(45),
        [aux_sym_compilation_unit_repeat4] = STATE(307),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(1128),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [301] = {
        [sym__type_declaration] = STATE(44),
        [sym_namespace_declaration] = STATE(44),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(1132),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_RBRACE] = ACTIONS(725),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(91),
    },
    [302] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1137),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [303] = {
        [anon_sym_RBRACE] = ACTIONS(1139),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(91),
    },
    [304] = {
        [ts_builtin_sym_end] = ACTIONS(1141),
        [anon_sym_SEMI] = ACTIONS(1147),
        [anon_sym_namespace] = ACTIONS(1149),
        [anon_sym_RBRACE] = ACTIONS(1141),
        [anon_sym_class] = ACTIONS(1149),
        [anon_sym_unsafe] = ACTIONS(1149),
        [anon_sym_abstract] = ACTIONS(1149),
        [anon_sym_sealed] = ACTIONS(1149),
        [anon_sym_static] = ACTIONS(1149),
        [anon_sym_new] = ACTIONS(1149),
        [anon_sym_public] = ACTIONS(1149),
        [anon_sym_protected] = ACTIONS(1149),
        [anon_sym_internal] = ACTIONS(1149),
        [anon_sym_private] = ACTIONS(1149),
        [anon_sym_struct] = ACTIONS(1149),
        [anon_sym_enum] = ACTIONS(1149),
        [anon_sym_sbyte] = ACTIONS(1149),
        [anon_sym_byte] = ACTIONS(1149),
        [anon_sym_short] = ACTIONS(1149),
        [anon_sym_ushort] = ACTIONS(1149),
        [anon_sym_int] = ACTIONS(1149),
        [anon_sym_uint] = ACTIONS(1149),
        [anon_sym_long] = ACTIONS(1149),
        [anon_sym_ulong] = ACTIONS(1149),
        [anon_sym_char] = ACTIONS(1149),
        [anon_sym_LBRACK] = ACTIONS(1141),
        [anon_sym_readonly] = ACTIONS(1149),
        [anon_sym_volatile] = ACTIONS(1149),
        [anon_sym_bool] = ACTIONS(1149),
        [anon_sym_decimal] = ACTIONS(1149),
        [anon_sym_double] = ACTIONS(1149),
        [anon_sym_float] = ACTIONS(1149),
        [anon_sym_object] = ACTIONS(1149),
        [anon_sym_string] = ACTIONS(1149),
        [sym_identifier_name] = ACTIONS(1155),
        [sym_comment] = ACTIONS(91),
    },
    [305] = {
        [ts_builtin_sym_end] = ACTIONS(1161),
        [anon_sym_namespace] = ACTIONS(1167),
        [anon_sym_RBRACE] = ACTIONS(1161),
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
        [anon_sym_LBRACK] = ACTIONS(1161),
        [anon_sym_readonly] = ACTIONS(1167),
        [anon_sym_volatile] = ACTIONS(1167),
        [anon_sym_bool] = ACTIONS(1167),
        [anon_sym_decimal] = ACTIONS(1167),
        [anon_sym_double] = ACTIONS(1167),
        [anon_sym_float] = ACTIONS(1167),
        [anon_sym_object] = ACTIONS(1167),
        [anon_sym_string] = ACTIONS(1167),
        [sym_identifier_name] = ACTIONS(1173),
        [sym_comment] = ACTIONS(91),
    },
    [306] = {
        [ts_builtin_sym_end] = ACTIONS(1179),
        [anon_sym_namespace] = ACTIONS(1188),
        [anon_sym_RBRACE] = ACTIONS(1179),
        [anon_sym_class] = ACTIONS(1188),
        [anon_sym_unsafe] = ACTIONS(1188),
        [anon_sym_abstract] = ACTIONS(1188),
        [anon_sym_sealed] = ACTIONS(1188),
        [anon_sym_static] = ACTIONS(1188),
        [anon_sym_new] = ACTIONS(1188),
        [anon_sym_public] = ACTIONS(1188),
        [anon_sym_protected] = ACTIONS(1188),
        [anon_sym_internal] = ACTIONS(1188),
        [anon_sym_private] = ACTIONS(1188),
        [anon_sym_struct] = ACTIONS(1188),
        [anon_sym_enum] = ACTIONS(1188),
        [anon_sym_sbyte] = ACTIONS(1188),
        [anon_sym_byte] = ACTIONS(1188),
        [anon_sym_short] = ACTIONS(1188),
        [anon_sym_ushort] = ACTIONS(1188),
        [anon_sym_int] = ACTIONS(1188),
        [anon_sym_uint] = ACTIONS(1188),
        [anon_sym_long] = ACTIONS(1188),
        [anon_sym_ulong] = ACTIONS(1188),
        [anon_sym_char] = ACTIONS(1188),
        [anon_sym_LBRACK] = ACTIONS(1179),
        [anon_sym_readonly] = ACTIONS(1188),
        [anon_sym_volatile] = ACTIONS(1188),
        [anon_sym_bool] = ACTIONS(1188),
        [anon_sym_decimal] = ACTIONS(1188),
        [anon_sym_double] = ACTIONS(1188),
        [anon_sym_float] = ACTIONS(1188),
        [anon_sym_object] = ACTIONS(1188),
        [anon_sym_string] = ACTIONS(1188),
        [sym_identifier_name] = ACTIONS(1197),
        [sym_comment] = ACTIONS(91),
    },
    [307] = {
        [sym__type_declaration] = STATE(44),
        [sym_namespace_declaration] = STATE(44),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(1206),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(91),
    },
    [308] = {
        [sym__type_declaration] = STATE(13),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [sym__global_attributes] = STATE(45),
        [aux_sym_compilation_unit_repeat4] = STATE(310),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(1210),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [sym_comment] = ACTIONS(91),
    },
    [309] = {
        [sym__type_declaration] = STATE(44),
        [sym_namespace_declaration] = STATE(44),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(1210),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(91),
    },
    [310] = {
        [sym__type_declaration] = STATE(44),
        [sym_namespace_declaration] = STATE(44),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(22),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [ts_builtin_sym_end] = ACTIONS(1213),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_comment] = ACTIONS(91),
    },
    [311] = {
        [ts_builtin_sym_end] = ACTIONS(1216),
        [anon_sym_using] = ACTIONS(1216),
        [anon_sym_namespace] = ACTIONS(1216),
        [anon_sym_class] = ACTIONS(1216),
        [anon_sym_unsafe] = ACTIONS(1216),
        [anon_sym_abstract] = ACTIONS(1216),
        [anon_sym_sealed] = ACTIONS(1216),
        [anon_sym_static] = ACTIONS(1216),
        [anon_sym_new] = ACTIONS(1216),
        [anon_sym_public] = ACTIONS(1216),
        [anon_sym_protected] = ACTIONS(1216),
        [anon_sym_internal] = ACTIONS(1216),
        [anon_sym_private] = ACTIONS(1216),
        [anon_sym_struct] = ACTIONS(1216),
        [anon_sym_enum] = ACTIONS(1216),
        [anon_sym_LBRACK] = ACTIONS(1216),
        [sym_comment] = ACTIONS(91),
    },
    [312] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(314),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1219),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [313] = {
        [ts_builtin_sym_end] = ACTIONS(1221),
        [anon_sym_namespace] = ACTIONS(1228),
        [anon_sym_RBRACE] = ACTIONS(1221),
        [anon_sym_class] = ACTIONS(1228),
        [anon_sym_unsafe] = ACTIONS(1228),
        [anon_sym_abstract] = ACTIONS(1228),
        [anon_sym_sealed] = ACTIONS(1228),
        [anon_sym_static] = ACTIONS(1228),
        [anon_sym_new] = ACTIONS(1228),
        [anon_sym_public] = ACTIONS(1228),
        [anon_sym_protected] = ACTIONS(1228),
        [anon_sym_internal] = ACTIONS(1228),
        [anon_sym_private] = ACTIONS(1228),
        [anon_sym_struct] = ACTIONS(1228),
        [anon_sym_enum] = ACTIONS(1228),
        [anon_sym_sbyte] = ACTIONS(1228),
        [anon_sym_byte] = ACTIONS(1228),
        [anon_sym_short] = ACTIONS(1228),
        [anon_sym_ushort] = ACTIONS(1228),
        [anon_sym_int] = ACTIONS(1228),
        [anon_sym_uint] = ACTIONS(1228),
        [anon_sym_long] = ACTIONS(1228),
        [anon_sym_ulong] = ACTIONS(1228),
        [anon_sym_char] = ACTIONS(1228),
        [anon_sym_LBRACK] = ACTIONS(1221),
        [anon_sym_readonly] = ACTIONS(1228),
        [anon_sym_volatile] = ACTIONS(1228),
        [anon_sym_bool] = ACTIONS(1228),
        [anon_sym_decimal] = ACTIONS(1228),
        [anon_sym_double] = ACTIONS(1228),
        [anon_sym_float] = ACTIONS(1228),
        [anon_sym_object] = ACTIONS(1228),
        [anon_sym_string] = ACTIONS(1228),
        [sym_identifier_name] = ACTIONS(1235),
        [sym_comment] = ACTIONS(91),
    },
    [314] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1242),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(1244),
        [anon_sym_namespace] = ACTIONS(1251),
        [anon_sym_RBRACE] = ACTIONS(1244),
        [anon_sym_class] = ACTIONS(1251),
        [anon_sym_unsafe] = ACTIONS(1251),
        [anon_sym_abstract] = ACTIONS(1251),
        [anon_sym_sealed] = ACTIONS(1251),
        [anon_sym_static] = ACTIONS(1251),
        [anon_sym_new] = ACTIONS(1251),
        [anon_sym_public] = ACTIONS(1251),
        [anon_sym_protected] = ACTIONS(1251),
        [anon_sym_internal] = ACTIONS(1251),
        [anon_sym_private] = ACTIONS(1251),
        [anon_sym_struct] = ACTIONS(1251),
        [anon_sym_enum] = ACTIONS(1251),
        [anon_sym_sbyte] = ACTIONS(1251),
        [anon_sym_byte] = ACTIONS(1251),
        [anon_sym_short] = ACTIONS(1251),
        [anon_sym_ushort] = ACTIONS(1251),
        [anon_sym_int] = ACTIONS(1251),
        [anon_sym_uint] = ACTIONS(1251),
        [anon_sym_long] = ACTIONS(1251),
        [anon_sym_ulong] = ACTIONS(1251),
        [anon_sym_char] = ACTIONS(1251),
        [anon_sym_LBRACK] = ACTIONS(1244),
        [anon_sym_readonly] = ACTIONS(1251),
        [anon_sym_volatile] = ACTIONS(1251),
        [anon_sym_bool] = ACTIONS(1251),
        [anon_sym_decimal] = ACTIONS(1251),
        [anon_sym_double] = ACTIONS(1251),
        [anon_sym_float] = ACTIONS(1251),
        [anon_sym_object] = ACTIONS(1251),
        [anon_sym_string] = ACTIONS(1251),
        [sym_identifier_name] = ACTIONS(1258),
        [sym_comment] = ACTIONS(91),
    },
    [316] = {
        [anon_sym_RBRACE] = ACTIONS(1265),
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
        [anon_sym_LBRACK] = ACTIONS(1265),
        [anon_sym_readonly] = ACTIONS(1269),
        [anon_sym_volatile] = ACTIONS(1269),
        [anon_sym_bool] = ACTIONS(1269),
        [anon_sym_decimal] = ACTIONS(1269),
        [anon_sym_double] = ACTIONS(1269),
        [anon_sym_float] = ACTIONS(1269),
        [anon_sym_object] = ACTIONS(1269),
        [anon_sym_string] = ACTIONS(1269),
        [sym_identifier_name] = ACTIONS(1273),
        [sym_comment] = ACTIONS(91),
    },
    [317] = {
        [anon_sym_SEMI] = ACTIONS(1277),
        [sym_comment] = ACTIONS(91),
    },
    [318] = {
        [anon_sym_RBRACE] = ACTIONS(1279),
        [anon_sym_class] = ACTIONS(1282),
        [anon_sym_unsafe] = ACTIONS(1282),
        [anon_sym_abstract] = ACTIONS(1282),
        [anon_sym_sealed] = ACTIONS(1282),
        [anon_sym_static] = ACTIONS(1282),
        [anon_sym_new] = ACTIONS(1282),
        [anon_sym_public] = ACTIONS(1282),
        [anon_sym_protected] = ACTIONS(1282),
        [anon_sym_internal] = ACTIONS(1282),
        [anon_sym_private] = ACTIONS(1282),
        [anon_sym_struct] = ACTIONS(1282),
        [anon_sym_enum] = ACTIONS(1282),
        [anon_sym_sbyte] = ACTIONS(1282),
        [anon_sym_byte] = ACTIONS(1282),
        [anon_sym_short] = ACTIONS(1282),
        [anon_sym_ushort] = ACTIONS(1282),
        [anon_sym_int] = ACTIONS(1282),
        [anon_sym_uint] = ACTIONS(1282),
        [anon_sym_long] = ACTIONS(1282),
        [anon_sym_ulong] = ACTIONS(1282),
        [anon_sym_char] = ACTIONS(1282),
        [anon_sym_LBRACK] = ACTIONS(1279),
        [anon_sym_readonly] = ACTIONS(1282),
        [anon_sym_volatile] = ACTIONS(1282),
        [anon_sym_bool] = ACTIONS(1282),
        [anon_sym_decimal] = ACTIONS(1282),
        [anon_sym_double] = ACTIONS(1282),
        [anon_sym_float] = ACTIONS(1282),
        [anon_sym_object] = ACTIONS(1282),
        [anon_sym_string] = ACTIONS(1282),
        [sym_identifier_name] = ACTIONS(1285),
        [sym_comment] = ACTIONS(91),
    },
    [319] = {
        [sym_equals_value_clause] = STATE(72),
        [sym_type_parameter_list] = STATE(194),
        [anon_sym_RBRACE] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_EQ] = ACTIONS(261),
        [anon_sym_LT] = ACTIONS(441),
        [sym_identifier_name] = ACTIONS(491),
        [sym_comment] = ACTIONS(91),
    },
    [320] = {
        [sym_enum_member_declaration] = STATE(321),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [321] = {
        [aux_sym_enum_declaration_repeat1] = STATE(323),
        [anon_sym_RBRACE] = ACTIONS(1288),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(91),
    },
    [322] = {
        [ts_builtin_sym_end] = ACTIONS(1290),
        [anon_sym_SEMI] = ACTIONS(1294),
        [anon_sym_namespace] = ACTIONS(1296),
        [anon_sym_RBRACE] = ACTIONS(1290),
        [anon_sym_class] = ACTIONS(1296),
        [anon_sym_unsafe] = ACTIONS(1296),
        [anon_sym_abstract] = ACTIONS(1296),
        [anon_sym_sealed] = ACTIONS(1296),
        [anon_sym_static] = ACTIONS(1296),
        [anon_sym_new] = ACTIONS(1296),
        [anon_sym_public] = ACTIONS(1296),
        [anon_sym_protected] = ACTIONS(1296),
        [anon_sym_internal] = ACTIONS(1296),
        [anon_sym_private] = ACTIONS(1296),
        [anon_sym_struct] = ACTIONS(1296),
        [anon_sym_enum] = ACTIONS(1296),
        [anon_sym_sbyte] = ACTIONS(1296),
        [anon_sym_byte] = ACTIONS(1296),
        [anon_sym_short] = ACTIONS(1296),
        [anon_sym_ushort] = ACTIONS(1296),
        [anon_sym_int] = ACTIONS(1296),
        [anon_sym_uint] = ACTIONS(1296),
        [anon_sym_long] = ACTIONS(1296),
        [anon_sym_ulong] = ACTIONS(1296),
        [anon_sym_char] = ACTIONS(1296),
        [anon_sym_LBRACK] = ACTIONS(1290),
        [anon_sym_readonly] = ACTIONS(1296),
        [anon_sym_volatile] = ACTIONS(1296),
        [anon_sym_bool] = ACTIONS(1296),
        [anon_sym_decimal] = ACTIONS(1296),
        [anon_sym_double] = ACTIONS(1296),
        [anon_sym_float] = ACTIONS(1296),
        [anon_sym_object] = ACTIONS(1296),
        [anon_sym_string] = ACTIONS(1296),
        [sym_identifier_name] = ACTIONS(1300),
        [sym_comment] = ACTIONS(91),
    },
    [323] = {
        [anon_sym_RBRACE] = ACTIONS(1304),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(91),
    },
    [324] = {
        [ts_builtin_sym_end] = ACTIONS(1306),
        [anon_sym_SEMI] = ACTIONS(1310),
        [anon_sym_namespace] = ACTIONS(1312),
        [anon_sym_RBRACE] = ACTIONS(1306),
        [anon_sym_class] = ACTIONS(1312),
        [anon_sym_unsafe] = ACTIONS(1312),
        [anon_sym_abstract] = ACTIONS(1312),
        [anon_sym_sealed] = ACTIONS(1312),
        [anon_sym_static] = ACTIONS(1312),
        [anon_sym_new] = ACTIONS(1312),
        [anon_sym_public] = ACTIONS(1312),
        [anon_sym_protected] = ACTIONS(1312),
        [anon_sym_internal] = ACTIONS(1312),
        [anon_sym_private] = ACTIONS(1312),
        [anon_sym_struct] = ACTIONS(1312),
        [anon_sym_enum] = ACTIONS(1312),
        [anon_sym_sbyte] = ACTIONS(1312),
        [anon_sym_byte] = ACTIONS(1312),
        [anon_sym_short] = ACTIONS(1312),
        [anon_sym_ushort] = ACTIONS(1312),
        [anon_sym_int] = ACTIONS(1312),
        [anon_sym_uint] = ACTIONS(1312),
        [anon_sym_long] = ACTIONS(1312),
        [anon_sym_ulong] = ACTIONS(1312),
        [anon_sym_char] = ACTIONS(1312),
        [anon_sym_LBRACK] = ACTIONS(1306),
        [anon_sym_readonly] = ACTIONS(1312),
        [anon_sym_volatile] = ACTIONS(1312),
        [anon_sym_bool] = ACTIONS(1312),
        [anon_sym_decimal] = ACTIONS(1312),
        [anon_sym_double] = ACTIONS(1312),
        [anon_sym_float] = ACTIONS(1312),
        [anon_sym_object] = ACTIONS(1312),
        [anon_sym_string] = ACTIONS(1312),
        [sym_identifier_name] = ACTIONS(1316),
        [sym_comment] = ACTIONS(91),
    },
    [325] = {
        [ts_builtin_sym_end] = ACTIONS(1320),
        [anon_sym_namespace] = ACTIONS(1324),
        [anon_sym_RBRACE] = ACTIONS(1320),
        [anon_sym_class] = ACTIONS(1324),
        [anon_sym_unsafe] = ACTIONS(1324),
        [anon_sym_abstract] = ACTIONS(1324),
        [anon_sym_sealed] = ACTIONS(1324),
        [anon_sym_static] = ACTIONS(1324),
        [anon_sym_new] = ACTIONS(1324),
        [anon_sym_public] = ACTIONS(1324),
        [anon_sym_protected] = ACTIONS(1324),
        [anon_sym_internal] = ACTIONS(1324),
        [anon_sym_private] = ACTIONS(1324),
        [anon_sym_struct] = ACTIONS(1324),
        [anon_sym_enum] = ACTIONS(1324),
        [anon_sym_sbyte] = ACTIONS(1324),
        [anon_sym_byte] = ACTIONS(1324),
        [anon_sym_short] = ACTIONS(1324),
        [anon_sym_ushort] = ACTIONS(1324),
        [anon_sym_int] = ACTIONS(1324),
        [anon_sym_uint] = ACTIONS(1324),
        [anon_sym_long] = ACTIONS(1324),
        [anon_sym_ulong] = ACTIONS(1324),
        [anon_sym_char] = ACTIONS(1324),
        [anon_sym_LBRACK] = ACTIONS(1320),
        [anon_sym_readonly] = ACTIONS(1324),
        [anon_sym_volatile] = ACTIONS(1324),
        [anon_sym_bool] = ACTIONS(1324),
        [anon_sym_decimal] = ACTIONS(1324),
        [anon_sym_double] = ACTIONS(1324),
        [anon_sym_float] = ACTIONS(1324),
        [anon_sym_object] = ACTIONS(1324),
        [anon_sym_string] = ACTIONS(1324),
        [sym_identifier_name] = ACTIONS(1328),
        [sym_comment] = ACTIONS(91),
    },
    [326] = {
        [ts_builtin_sym_end] = ACTIONS(1306),
        [anon_sym_namespace] = ACTIONS(1312),
        [anon_sym_RBRACE] = ACTIONS(1306),
        [anon_sym_class] = ACTIONS(1312),
        [anon_sym_unsafe] = ACTIONS(1312),
        [anon_sym_abstract] = ACTIONS(1312),
        [anon_sym_sealed] = ACTIONS(1312),
        [anon_sym_static] = ACTIONS(1312),
        [anon_sym_new] = ACTIONS(1312),
        [anon_sym_public] = ACTIONS(1312),
        [anon_sym_protected] = ACTIONS(1312),
        [anon_sym_internal] = ACTIONS(1312),
        [anon_sym_private] = ACTIONS(1312),
        [anon_sym_struct] = ACTIONS(1312),
        [anon_sym_enum] = ACTIONS(1312),
        [anon_sym_sbyte] = ACTIONS(1312),
        [anon_sym_byte] = ACTIONS(1312),
        [anon_sym_short] = ACTIONS(1312),
        [anon_sym_ushort] = ACTIONS(1312),
        [anon_sym_int] = ACTIONS(1312),
        [anon_sym_uint] = ACTIONS(1312),
        [anon_sym_long] = ACTIONS(1312),
        [anon_sym_ulong] = ACTIONS(1312),
        [anon_sym_char] = ACTIONS(1312),
        [anon_sym_LBRACK] = ACTIONS(1306),
        [anon_sym_readonly] = ACTIONS(1312),
        [anon_sym_volatile] = ACTIONS(1312),
        [anon_sym_bool] = ACTIONS(1312),
        [anon_sym_decimal] = ACTIONS(1312),
        [anon_sym_double] = ACTIONS(1312),
        [anon_sym_float] = ACTIONS(1312),
        [anon_sym_object] = ACTIONS(1312),
        [anon_sym_string] = ACTIONS(1312),
        [sym_identifier_name] = ACTIONS(1316),
        [sym_comment] = ACTIONS(91),
    },
    [327] = {
        [sym_identifier_name] = ACTIONS(1332),
        [sym_comment] = ACTIONS(91),
    },
    [328] = {
        [anon_sym_LBRACE] = ACTIONS(1334),
        [anon_sym_COLON] = ACTIONS(1336),
        [sym_comment] = ACTIONS(91),
    },
    [329] = {
        [sym_enum_member_declaration] = STATE(339),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [330] = {
        [sym__integral_type] = STATE(331),
        [anon_sym_sbyte] = ACTIONS(253),
        [anon_sym_byte] = ACTIONS(253),
        [anon_sym_short] = ACTIONS(253),
        [anon_sym_ushort] = ACTIONS(253),
        [anon_sym_int] = ACTIONS(253),
        [anon_sym_uint] = ACTIONS(253),
        [anon_sym_long] = ACTIONS(253),
        [anon_sym_ulong] = ACTIONS(253),
        [anon_sym_char] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [331] = {
        [anon_sym_LBRACE] = ACTIONS(1338),
        [sym_comment] = ACTIONS(91),
    },
    [332] = {
        [sym_enum_member_declaration] = STATE(333),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [333] = {
        [aux_sym_enum_declaration_repeat1] = STATE(335),
        [anon_sym_RBRACE] = ACTIONS(1340),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(91),
    },
    [334] = {
        [ts_builtin_sym_end] = ACTIONS(1342),
        [anon_sym_SEMI] = ACTIONS(1345),
        [anon_sym_namespace] = ACTIONS(1347),
        [anon_sym_RBRACE] = ACTIONS(1342),
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
        [anon_sym_LBRACK] = ACTIONS(1342),
        [anon_sym_readonly] = ACTIONS(1347),
        [anon_sym_volatile] = ACTIONS(1347),
        [anon_sym_bool] = ACTIONS(1347),
        [anon_sym_decimal] = ACTIONS(1347),
        [anon_sym_double] = ACTIONS(1347),
        [anon_sym_float] = ACTIONS(1347),
        [anon_sym_object] = ACTIONS(1347),
        [anon_sym_string] = ACTIONS(1347),
        [sym_identifier_name] = ACTIONS(1350),
        [sym_comment] = ACTIONS(91),
    },
    [335] = {
        [anon_sym_RBRACE] = ACTIONS(1353),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(91),
    },
    [336] = {
        [ts_builtin_sym_end] = ACTIONS(1355),
        [anon_sym_SEMI] = ACTIONS(1358),
        [anon_sym_namespace] = ACTIONS(1360),
        [anon_sym_RBRACE] = ACTIONS(1355),
        [anon_sym_class] = ACTIONS(1360),
        [anon_sym_unsafe] = ACTIONS(1360),
        [anon_sym_abstract] = ACTIONS(1360),
        [anon_sym_sealed] = ACTIONS(1360),
        [anon_sym_static] = ACTIONS(1360),
        [anon_sym_new] = ACTIONS(1360),
        [anon_sym_public] = ACTIONS(1360),
        [anon_sym_protected] = ACTIONS(1360),
        [anon_sym_internal] = ACTIONS(1360),
        [anon_sym_private] = ACTIONS(1360),
        [anon_sym_struct] = ACTIONS(1360),
        [anon_sym_enum] = ACTIONS(1360),
        [anon_sym_sbyte] = ACTIONS(1360),
        [anon_sym_byte] = ACTIONS(1360),
        [anon_sym_short] = ACTIONS(1360),
        [anon_sym_ushort] = ACTIONS(1360),
        [anon_sym_int] = ACTIONS(1360),
        [anon_sym_uint] = ACTIONS(1360),
        [anon_sym_long] = ACTIONS(1360),
        [anon_sym_ulong] = ACTIONS(1360),
        [anon_sym_char] = ACTIONS(1360),
        [anon_sym_LBRACK] = ACTIONS(1355),
        [anon_sym_readonly] = ACTIONS(1360),
        [anon_sym_volatile] = ACTIONS(1360),
        [anon_sym_bool] = ACTIONS(1360),
        [anon_sym_decimal] = ACTIONS(1360),
        [anon_sym_double] = ACTIONS(1360),
        [anon_sym_float] = ACTIONS(1360),
        [anon_sym_object] = ACTIONS(1360),
        [anon_sym_string] = ACTIONS(1360),
        [sym_identifier_name] = ACTIONS(1363),
        [sym_comment] = ACTIONS(91),
    },
    [337] = {
        [ts_builtin_sym_end] = ACTIONS(1366),
        [anon_sym_namespace] = ACTIONS(1369),
        [anon_sym_RBRACE] = ACTIONS(1366),
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
        [anon_sym_LBRACK] = ACTIONS(1366),
        [anon_sym_readonly] = ACTIONS(1369),
        [anon_sym_volatile] = ACTIONS(1369),
        [anon_sym_bool] = ACTIONS(1369),
        [anon_sym_decimal] = ACTIONS(1369),
        [anon_sym_double] = ACTIONS(1369),
        [anon_sym_float] = ACTIONS(1369),
        [anon_sym_object] = ACTIONS(1369),
        [anon_sym_string] = ACTIONS(1369),
        [sym_identifier_name] = ACTIONS(1372),
        [sym_comment] = ACTIONS(91),
    },
    [338] = {
        [ts_builtin_sym_end] = ACTIONS(1355),
        [anon_sym_namespace] = ACTIONS(1360),
        [anon_sym_RBRACE] = ACTIONS(1355),
        [anon_sym_class] = ACTIONS(1360),
        [anon_sym_unsafe] = ACTIONS(1360),
        [anon_sym_abstract] = ACTIONS(1360),
        [anon_sym_sealed] = ACTIONS(1360),
        [anon_sym_static] = ACTIONS(1360),
        [anon_sym_new] = ACTIONS(1360),
        [anon_sym_public] = ACTIONS(1360),
        [anon_sym_protected] = ACTIONS(1360),
        [anon_sym_internal] = ACTIONS(1360),
        [anon_sym_private] = ACTIONS(1360),
        [anon_sym_struct] = ACTIONS(1360),
        [anon_sym_enum] = ACTIONS(1360),
        [anon_sym_sbyte] = ACTIONS(1360),
        [anon_sym_byte] = ACTIONS(1360),
        [anon_sym_short] = ACTIONS(1360),
        [anon_sym_ushort] = ACTIONS(1360),
        [anon_sym_int] = ACTIONS(1360),
        [anon_sym_uint] = ACTIONS(1360),
        [anon_sym_long] = ACTIONS(1360),
        [anon_sym_ulong] = ACTIONS(1360),
        [anon_sym_char] = ACTIONS(1360),
        [anon_sym_LBRACK] = ACTIONS(1355),
        [anon_sym_readonly] = ACTIONS(1360),
        [anon_sym_volatile] = ACTIONS(1360),
        [anon_sym_bool] = ACTIONS(1360),
        [anon_sym_decimal] = ACTIONS(1360),
        [anon_sym_double] = ACTIONS(1360),
        [anon_sym_float] = ACTIONS(1360),
        [anon_sym_object] = ACTIONS(1360),
        [anon_sym_string] = ACTIONS(1360),
        [sym_identifier_name] = ACTIONS(1363),
        [sym_comment] = ACTIONS(91),
    },
    [339] = {
        [aux_sym_enum_declaration_repeat1] = STATE(341),
        [anon_sym_RBRACE] = ACTIONS(1375),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(91),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(1377),
        [anon_sym_SEMI] = ACTIONS(1380),
        [anon_sym_namespace] = ACTIONS(1382),
        [anon_sym_RBRACE] = ACTIONS(1377),
        [anon_sym_class] = ACTIONS(1382),
        [anon_sym_unsafe] = ACTIONS(1382),
        [anon_sym_abstract] = ACTIONS(1382),
        [anon_sym_sealed] = ACTIONS(1382),
        [anon_sym_static] = ACTIONS(1382),
        [anon_sym_new] = ACTIONS(1382),
        [anon_sym_public] = ACTIONS(1382),
        [anon_sym_protected] = ACTIONS(1382),
        [anon_sym_internal] = ACTIONS(1382),
        [anon_sym_private] = ACTIONS(1382),
        [anon_sym_struct] = ACTIONS(1382),
        [anon_sym_enum] = ACTIONS(1382),
        [anon_sym_sbyte] = ACTIONS(1382),
        [anon_sym_byte] = ACTIONS(1382),
        [anon_sym_short] = ACTIONS(1382),
        [anon_sym_ushort] = ACTIONS(1382),
        [anon_sym_int] = ACTIONS(1382),
        [anon_sym_uint] = ACTIONS(1382),
        [anon_sym_long] = ACTIONS(1382),
        [anon_sym_ulong] = ACTIONS(1382),
        [anon_sym_char] = ACTIONS(1382),
        [anon_sym_LBRACK] = ACTIONS(1377),
        [anon_sym_readonly] = ACTIONS(1382),
        [anon_sym_volatile] = ACTIONS(1382),
        [anon_sym_bool] = ACTIONS(1382),
        [anon_sym_decimal] = ACTIONS(1382),
        [anon_sym_double] = ACTIONS(1382),
        [anon_sym_float] = ACTIONS(1382),
        [anon_sym_object] = ACTIONS(1382),
        [anon_sym_string] = ACTIONS(1382),
        [sym_identifier_name] = ACTIONS(1385),
        [sym_comment] = ACTIONS(91),
    },
    [341] = {
        [anon_sym_RBRACE] = ACTIONS(1388),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(91),
    },
    [342] = {
        [ts_builtin_sym_end] = ACTIONS(1390),
        [anon_sym_SEMI] = ACTIONS(1393),
        [anon_sym_namespace] = ACTIONS(1395),
        [anon_sym_RBRACE] = ACTIONS(1390),
        [anon_sym_class] = ACTIONS(1395),
        [anon_sym_unsafe] = ACTIONS(1395),
        [anon_sym_abstract] = ACTIONS(1395),
        [anon_sym_sealed] = ACTIONS(1395),
        [anon_sym_static] = ACTIONS(1395),
        [anon_sym_new] = ACTIONS(1395),
        [anon_sym_public] = ACTIONS(1395),
        [anon_sym_protected] = ACTIONS(1395),
        [anon_sym_internal] = ACTIONS(1395),
        [anon_sym_private] = ACTIONS(1395),
        [anon_sym_struct] = ACTIONS(1395),
        [anon_sym_enum] = ACTIONS(1395),
        [anon_sym_sbyte] = ACTIONS(1395),
        [anon_sym_byte] = ACTIONS(1395),
        [anon_sym_short] = ACTIONS(1395),
        [anon_sym_ushort] = ACTIONS(1395),
        [anon_sym_int] = ACTIONS(1395),
        [anon_sym_uint] = ACTIONS(1395),
        [anon_sym_long] = ACTIONS(1395),
        [anon_sym_ulong] = ACTIONS(1395),
        [anon_sym_char] = ACTIONS(1395),
        [anon_sym_LBRACK] = ACTIONS(1390),
        [anon_sym_readonly] = ACTIONS(1395),
        [anon_sym_volatile] = ACTIONS(1395),
        [anon_sym_bool] = ACTIONS(1395),
        [anon_sym_decimal] = ACTIONS(1395),
        [anon_sym_double] = ACTIONS(1395),
        [anon_sym_float] = ACTIONS(1395),
        [anon_sym_object] = ACTIONS(1395),
        [anon_sym_string] = ACTIONS(1395),
        [sym_identifier_name] = ACTIONS(1398),
        [sym_comment] = ACTIONS(91),
    },
    [343] = {
        [ts_builtin_sym_end] = ACTIONS(1342),
        [anon_sym_namespace] = ACTIONS(1347),
        [anon_sym_RBRACE] = ACTIONS(1342),
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
        [anon_sym_LBRACK] = ACTIONS(1342),
        [anon_sym_readonly] = ACTIONS(1347),
        [anon_sym_volatile] = ACTIONS(1347),
        [anon_sym_bool] = ACTIONS(1347),
        [anon_sym_decimal] = ACTIONS(1347),
        [anon_sym_double] = ACTIONS(1347),
        [anon_sym_float] = ACTIONS(1347),
        [anon_sym_object] = ACTIONS(1347),
        [anon_sym_string] = ACTIONS(1347),
        [sym_identifier_name] = ACTIONS(1350),
        [sym_comment] = ACTIONS(91),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(1390),
        [anon_sym_namespace] = ACTIONS(1395),
        [anon_sym_RBRACE] = ACTIONS(1390),
        [anon_sym_class] = ACTIONS(1395),
        [anon_sym_unsafe] = ACTIONS(1395),
        [anon_sym_abstract] = ACTIONS(1395),
        [anon_sym_sealed] = ACTIONS(1395),
        [anon_sym_static] = ACTIONS(1395),
        [anon_sym_new] = ACTIONS(1395),
        [anon_sym_public] = ACTIONS(1395),
        [anon_sym_protected] = ACTIONS(1395),
        [anon_sym_internal] = ACTIONS(1395),
        [anon_sym_private] = ACTIONS(1395),
        [anon_sym_struct] = ACTIONS(1395),
        [anon_sym_enum] = ACTIONS(1395),
        [anon_sym_sbyte] = ACTIONS(1395),
        [anon_sym_byte] = ACTIONS(1395),
        [anon_sym_short] = ACTIONS(1395),
        [anon_sym_ushort] = ACTIONS(1395),
        [anon_sym_int] = ACTIONS(1395),
        [anon_sym_uint] = ACTIONS(1395),
        [anon_sym_long] = ACTIONS(1395),
        [anon_sym_ulong] = ACTIONS(1395),
        [anon_sym_char] = ACTIONS(1395),
        [anon_sym_LBRACK] = ACTIONS(1390),
        [anon_sym_readonly] = ACTIONS(1395),
        [anon_sym_volatile] = ACTIONS(1395),
        [anon_sym_bool] = ACTIONS(1395),
        [anon_sym_decimal] = ACTIONS(1395),
        [anon_sym_double] = ACTIONS(1395),
        [anon_sym_float] = ACTIONS(1395),
        [anon_sym_object] = ACTIONS(1395),
        [anon_sym_string] = ACTIONS(1395),
        [sym_identifier_name] = ACTIONS(1398),
        [sym_comment] = ACTIONS(91),
    },
    [345] = {
        [ts_builtin_sym_end] = ACTIONS(1401),
        [anon_sym_SEMI] = ACTIONS(1407),
        [anon_sym_namespace] = ACTIONS(1409),
        [anon_sym_RBRACE] = ACTIONS(1401),
        [anon_sym_class] = ACTIONS(1409),
        [anon_sym_unsafe] = ACTIONS(1409),
        [anon_sym_abstract] = ACTIONS(1409),
        [anon_sym_sealed] = ACTIONS(1409),
        [anon_sym_static] = ACTIONS(1409),
        [anon_sym_new] = ACTIONS(1409),
        [anon_sym_public] = ACTIONS(1409),
        [anon_sym_protected] = ACTIONS(1409),
        [anon_sym_internal] = ACTIONS(1409),
        [anon_sym_private] = ACTIONS(1409),
        [anon_sym_struct] = ACTIONS(1409),
        [anon_sym_enum] = ACTIONS(1409),
        [anon_sym_sbyte] = ACTIONS(1409),
        [anon_sym_byte] = ACTIONS(1409),
        [anon_sym_short] = ACTIONS(1409),
        [anon_sym_ushort] = ACTIONS(1409),
        [anon_sym_int] = ACTIONS(1409),
        [anon_sym_uint] = ACTIONS(1409),
        [anon_sym_long] = ACTIONS(1409),
        [anon_sym_ulong] = ACTIONS(1409),
        [anon_sym_char] = ACTIONS(1409),
        [anon_sym_LBRACK] = ACTIONS(1401),
        [anon_sym_readonly] = ACTIONS(1409),
        [anon_sym_volatile] = ACTIONS(1409),
        [anon_sym_bool] = ACTIONS(1409),
        [anon_sym_decimal] = ACTIONS(1409),
        [anon_sym_double] = ACTIONS(1409),
        [anon_sym_float] = ACTIONS(1409),
        [anon_sym_object] = ACTIONS(1409),
        [anon_sym_string] = ACTIONS(1409),
        [sym_identifier_name] = ACTIONS(1415),
        [sym_comment] = ACTIONS(91),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(1141),
        [anon_sym_namespace] = ACTIONS(1149),
        [anon_sym_RBRACE] = ACTIONS(1141),
        [anon_sym_class] = ACTIONS(1149),
        [anon_sym_unsafe] = ACTIONS(1149),
        [anon_sym_abstract] = ACTIONS(1149),
        [anon_sym_sealed] = ACTIONS(1149),
        [anon_sym_static] = ACTIONS(1149),
        [anon_sym_new] = ACTIONS(1149),
        [anon_sym_public] = ACTIONS(1149),
        [anon_sym_protected] = ACTIONS(1149),
        [anon_sym_internal] = ACTIONS(1149),
        [anon_sym_private] = ACTIONS(1149),
        [anon_sym_struct] = ACTIONS(1149),
        [anon_sym_enum] = ACTIONS(1149),
        [anon_sym_sbyte] = ACTIONS(1149),
        [anon_sym_byte] = ACTIONS(1149),
        [anon_sym_short] = ACTIONS(1149),
        [anon_sym_ushort] = ACTIONS(1149),
        [anon_sym_int] = ACTIONS(1149),
        [anon_sym_uint] = ACTIONS(1149),
        [anon_sym_long] = ACTIONS(1149),
        [anon_sym_ulong] = ACTIONS(1149),
        [anon_sym_char] = ACTIONS(1149),
        [anon_sym_LBRACK] = ACTIONS(1141),
        [anon_sym_readonly] = ACTIONS(1149),
        [anon_sym_volatile] = ACTIONS(1149),
        [anon_sym_bool] = ACTIONS(1149),
        [anon_sym_decimal] = ACTIONS(1149),
        [anon_sym_double] = ACTIONS(1149),
        [anon_sym_float] = ACTIONS(1149),
        [anon_sym_object] = ACTIONS(1149),
        [anon_sym_string] = ACTIONS(1149),
        [sym_identifier_name] = ACTIONS(1155),
        [sym_comment] = ACTIONS(91),
    },
    [347] = {
        [sym_identifier_name] = ACTIONS(1421),
        [sym_comment] = ACTIONS(91),
    },
    [348] = {
        [sym_type_parameter_list] = STATE(350),
        [anon_sym_LBRACE] = ACTIONS(1423),
        [anon_sym_LT] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [349] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(356),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1425),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [350] = {
        [anon_sym_LBRACE] = ACTIONS(1427),
        [sym_comment] = ACTIONS(91),
    },
    [351] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(353),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1429),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(1431),
        [anon_sym_namespace] = ACTIONS(1434),
        [anon_sym_RBRACE] = ACTIONS(1431),
        [anon_sym_class] = ACTIONS(1434),
        [anon_sym_unsafe] = ACTIONS(1434),
        [anon_sym_abstract] = ACTIONS(1434),
        [anon_sym_sealed] = ACTIONS(1434),
        [anon_sym_static] = ACTIONS(1434),
        [anon_sym_new] = ACTIONS(1434),
        [anon_sym_public] = ACTIONS(1434),
        [anon_sym_protected] = ACTIONS(1434),
        [anon_sym_internal] = ACTIONS(1434),
        [anon_sym_private] = ACTIONS(1434),
        [anon_sym_struct] = ACTIONS(1434),
        [anon_sym_enum] = ACTIONS(1434),
        [anon_sym_sbyte] = ACTIONS(1434),
        [anon_sym_byte] = ACTIONS(1434),
        [anon_sym_short] = ACTIONS(1434),
        [anon_sym_ushort] = ACTIONS(1434),
        [anon_sym_int] = ACTIONS(1434),
        [anon_sym_uint] = ACTIONS(1434),
        [anon_sym_long] = ACTIONS(1434),
        [anon_sym_ulong] = ACTIONS(1434),
        [anon_sym_char] = ACTIONS(1434),
        [anon_sym_LBRACK] = ACTIONS(1431),
        [anon_sym_readonly] = ACTIONS(1434),
        [anon_sym_volatile] = ACTIONS(1434),
        [anon_sym_bool] = ACTIONS(1434),
        [anon_sym_decimal] = ACTIONS(1434),
        [anon_sym_double] = ACTIONS(1434),
        [anon_sym_float] = ACTIONS(1434),
        [anon_sym_object] = ACTIONS(1434),
        [anon_sym_string] = ACTIONS(1434),
        [sym_identifier_name] = ACTIONS(1437),
        [sym_comment] = ACTIONS(91),
    },
    [353] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1440),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [354] = {
        [ts_builtin_sym_end] = ACTIONS(1442),
        [anon_sym_namespace] = ACTIONS(1445),
        [anon_sym_RBRACE] = ACTIONS(1442),
        [anon_sym_class] = ACTIONS(1445),
        [anon_sym_unsafe] = ACTIONS(1445),
        [anon_sym_abstract] = ACTIONS(1445),
        [anon_sym_sealed] = ACTIONS(1445),
        [anon_sym_static] = ACTIONS(1445),
        [anon_sym_new] = ACTIONS(1445),
        [anon_sym_public] = ACTIONS(1445),
        [anon_sym_protected] = ACTIONS(1445),
        [anon_sym_internal] = ACTIONS(1445),
        [anon_sym_private] = ACTIONS(1445),
        [anon_sym_struct] = ACTIONS(1445),
        [anon_sym_enum] = ACTIONS(1445),
        [anon_sym_sbyte] = ACTIONS(1445),
        [anon_sym_byte] = ACTIONS(1445),
        [anon_sym_short] = ACTIONS(1445),
        [anon_sym_ushort] = ACTIONS(1445),
        [anon_sym_int] = ACTIONS(1445),
        [anon_sym_uint] = ACTIONS(1445),
        [anon_sym_long] = ACTIONS(1445),
        [anon_sym_ulong] = ACTIONS(1445),
        [anon_sym_char] = ACTIONS(1445),
        [anon_sym_LBRACK] = ACTIONS(1442),
        [anon_sym_readonly] = ACTIONS(1445),
        [anon_sym_volatile] = ACTIONS(1445),
        [anon_sym_bool] = ACTIONS(1445),
        [anon_sym_decimal] = ACTIONS(1445),
        [anon_sym_double] = ACTIONS(1445),
        [anon_sym_float] = ACTIONS(1445),
        [anon_sym_object] = ACTIONS(1445),
        [anon_sym_string] = ACTIONS(1445),
        [sym_identifier_name] = ACTIONS(1448),
        [sym_comment] = ACTIONS(91),
    },
    [355] = {
        [ts_builtin_sym_end] = ACTIONS(1451),
        [anon_sym_namespace] = ACTIONS(1454),
        [anon_sym_RBRACE] = ACTIONS(1451),
        [anon_sym_class] = ACTIONS(1454),
        [anon_sym_unsafe] = ACTIONS(1454),
        [anon_sym_abstract] = ACTIONS(1454),
        [anon_sym_sealed] = ACTIONS(1454),
        [anon_sym_static] = ACTIONS(1454),
        [anon_sym_new] = ACTIONS(1454),
        [anon_sym_public] = ACTIONS(1454),
        [anon_sym_protected] = ACTIONS(1454),
        [anon_sym_internal] = ACTIONS(1454),
        [anon_sym_private] = ACTIONS(1454),
        [anon_sym_struct] = ACTIONS(1454),
        [anon_sym_enum] = ACTIONS(1454),
        [anon_sym_sbyte] = ACTIONS(1454),
        [anon_sym_byte] = ACTIONS(1454),
        [anon_sym_short] = ACTIONS(1454),
        [anon_sym_ushort] = ACTIONS(1454),
        [anon_sym_int] = ACTIONS(1454),
        [anon_sym_uint] = ACTIONS(1454),
        [anon_sym_long] = ACTIONS(1454),
        [anon_sym_ulong] = ACTIONS(1454),
        [anon_sym_char] = ACTIONS(1454),
        [anon_sym_LBRACK] = ACTIONS(1451),
        [anon_sym_readonly] = ACTIONS(1454),
        [anon_sym_volatile] = ACTIONS(1454),
        [anon_sym_bool] = ACTIONS(1454),
        [anon_sym_decimal] = ACTIONS(1454),
        [anon_sym_double] = ACTIONS(1454),
        [anon_sym_float] = ACTIONS(1454),
        [anon_sym_object] = ACTIONS(1454),
        [anon_sym_string] = ACTIONS(1454),
        [sym_identifier_name] = ACTIONS(1457),
        [sym_comment] = ACTIONS(91),
    },
    [356] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1429),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [357] = {
        [sym_identifier_name] = ACTIONS(1460),
        [sym_comment] = ACTIONS(91),
    },
    [358] = {
        [sym_type_parameter_list] = STATE(360),
        [anon_sym_LBRACE] = ACTIONS(1462),
        [anon_sym_LT] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [359] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(366),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1464),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [360] = {
        [anon_sym_LBRACE] = ACTIONS(1466),
        [sym_comment] = ACTIONS(91),
    },
    [361] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(363),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1468),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [362] = {
        [ts_builtin_sym_end] = ACTIONS(1470),
        [anon_sym_namespace] = ACTIONS(1473),
        [anon_sym_RBRACE] = ACTIONS(1470),
        [anon_sym_class] = ACTIONS(1473),
        [anon_sym_unsafe] = ACTIONS(1473),
        [anon_sym_abstract] = ACTIONS(1473),
        [anon_sym_sealed] = ACTIONS(1473),
        [anon_sym_static] = ACTIONS(1473),
        [anon_sym_new] = ACTIONS(1473),
        [anon_sym_public] = ACTIONS(1473),
        [anon_sym_protected] = ACTIONS(1473),
        [anon_sym_internal] = ACTIONS(1473),
        [anon_sym_private] = ACTIONS(1473),
        [anon_sym_struct] = ACTIONS(1473),
        [anon_sym_enum] = ACTIONS(1473),
        [anon_sym_sbyte] = ACTIONS(1473),
        [anon_sym_byte] = ACTIONS(1473),
        [anon_sym_short] = ACTIONS(1473),
        [anon_sym_ushort] = ACTIONS(1473),
        [anon_sym_int] = ACTIONS(1473),
        [anon_sym_uint] = ACTIONS(1473),
        [anon_sym_long] = ACTIONS(1473),
        [anon_sym_ulong] = ACTIONS(1473),
        [anon_sym_char] = ACTIONS(1473),
        [anon_sym_LBRACK] = ACTIONS(1470),
        [anon_sym_readonly] = ACTIONS(1473),
        [anon_sym_volatile] = ACTIONS(1473),
        [anon_sym_bool] = ACTIONS(1473),
        [anon_sym_decimal] = ACTIONS(1473),
        [anon_sym_double] = ACTIONS(1473),
        [anon_sym_float] = ACTIONS(1473),
        [anon_sym_object] = ACTIONS(1473),
        [anon_sym_string] = ACTIONS(1473),
        [sym_identifier_name] = ACTIONS(1476),
        [sym_comment] = ACTIONS(91),
    },
    [363] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1479),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [364] = {
        [ts_builtin_sym_end] = ACTIONS(1481),
        [anon_sym_namespace] = ACTIONS(1484),
        [anon_sym_RBRACE] = ACTIONS(1481),
        [anon_sym_class] = ACTIONS(1484),
        [anon_sym_unsafe] = ACTIONS(1484),
        [anon_sym_abstract] = ACTIONS(1484),
        [anon_sym_sealed] = ACTIONS(1484),
        [anon_sym_static] = ACTIONS(1484),
        [anon_sym_new] = ACTIONS(1484),
        [anon_sym_public] = ACTIONS(1484),
        [anon_sym_protected] = ACTIONS(1484),
        [anon_sym_internal] = ACTIONS(1484),
        [anon_sym_private] = ACTIONS(1484),
        [anon_sym_struct] = ACTIONS(1484),
        [anon_sym_enum] = ACTIONS(1484),
        [anon_sym_sbyte] = ACTIONS(1484),
        [anon_sym_byte] = ACTIONS(1484),
        [anon_sym_short] = ACTIONS(1484),
        [anon_sym_ushort] = ACTIONS(1484),
        [anon_sym_int] = ACTIONS(1484),
        [anon_sym_uint] = ACTIONS(1484),
        [anon_sym_long] = ACTIONS(1484),
        [anon_sym_ulong] = ACTIONS(1484),
        [anon_sym_char] = ACTIONS(1484),
        [anon_sym_LBRACK] = ACTIONS(1481),
        [anon_sym_readonly] = ACTIONS(1484),
        [anon_sym_volatile] = ACTIONS(1484),
        [anon_sym_bool] = ACTIONS(1484),
        [anon_sym_decimal] = ACTIONS(1484),
        [anon_sym_double] = ACTIONS(1484),
        [anon_sym_float] = ACTIONS(1484),
        [anon_sym_object] = ACTIONS(1484),
        [anon_sym_string] = ACTIONS(1484),
        [sym_identifier_name] = ACTIONS(1487),
        [sym_comment] = ACTIONS(91),
    },
    [365] = {
        [ts_builtin_sym_end] = ACTIONS(1490),
        [anon_sym_namespace] = ACTIONS(1493),
        [anon_sym_RBRACE] = ACTIONS(1490),
        [anon_sym_class] = ACTIONS(1493),
        [anon_sym_unsafe] = ACTIONS(1493),
        [anon_sym_abstract] = ACTIONS(1493),
        [anon_sym_sealed] = ACTIONS(1493),
        [anon_sym_static] = ACTIONS(1493),
        [anon_sym_new] = ACTIONS(1493),
        [anon_sym_public] = ACTIONS(1493),
        [anon_sym_protected] = ACTIONS(1493),
        [anon_sym_internal] = ACTIONS(1493),
        [anon_sym_private] = ACTIONS(1493),
        [anon_sym_struct] = ACTIONS(1493),
        [anon_sym_enum] = ACTIONS(1493),
        [anon_sym_sbyte] = ACTIONS(1493),
        [anon_sym_byte] = ACTIONS(1493),
        [anon_sym_short] = ACTIONS(1493),
        [anon_sym_ushort] = ACTIONS(1493),
        [anon_sym_int] = ACTIONS(1493),
        [anon_sym_uint] = ACTIONS(1493),
        [anon_sym_long] = ACTIONS(1493),
        [anon_sym_ulong] = ACTIONS(1493),
        [anon_sym_char] = ACTIONS(1493),
        [anon_sym_LBRACK] = ACTIONS(1490),
        [anon_sym_readonly] = ACTIONS(1493),
        [anon_sym_volatile] = ACTIONS(1493),
        [anon_sym_bool] = ACTIONS(1493),
        [anon_sym_decimal] = ACTIONS(1493),
        [anon_sym_double] = ACTIONS(1493),
        [anon_sym_float] = ACTIONS(1493),
        [anon_sym_object] = ACTIONS(1493),
        [anon_sym_string] = ACTIONS(1493),
        [sym_identifier_name] = ACTIONS(1496),
        [sym_comment] = ACTIONS(91),
    },
    [366] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1468),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [367] = {
        [ts_builtin_sym_end] = ACTIONS(1499),
        [anon_sym_extern] = ACTIONS(757),
        [anon_sym_using] = ACTIONS(1499),
        [anon_sym_namespace] = ACTIONS(1499),
        [anon_sym_class] = ACTIONS(1499),
        [anon_sym_unsafe] = ACTIONS(1499),
        [anon_sym_abstract] = ACTIONS(1499),
        [anon_sym_sealed] = ACTIONS(1499),
        [anon_sym_static] = ACTIONS(1499),
        [anon_sym_new] = ACTIONS(1499),
        [anon_sym_public] = ACTIONS(1499),
        [anon_sym_protected] = ACTIONS(1499),
        [anon_sym_internal] = ACTIONS(1499),
        [anon_sym_private] = ACTIONS(1499),
        [anon_sym_struct] = ACTIONS(1499),
        [anon_sym_enum] = ACTIONS(1499),
        [anon_sym_LBRACK] = ACTIONS(1499),
        [sym_comment] = ACTIONS(91),
    },
    [368] = {
        [sym__type_declaration] = STATE(372),
        [sym_namespace_declaration] = STATE(13),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_member_declaration] = STATE(373),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(283),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_compilation_unit_repeat4] = STATE(236),
        [aux_sym_class_declaration_repeat1] = STATE(374),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_namespace] = ACTIONS(841),
        [anon_sym_RBRACE] = ACTIONS(1503),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(845),
        [sym_comment] = ACTIONS(91),
    },
    [369] = {
        [sym__integral_type] = STATE(282),
        [anon_sym_sbyte] = ACTIONS(253),
        [anon_sym_byte] = ACTIONS(253),
        [anon_sym_short] = ACTIONS(253),
        [anon_sym_ushort] = ACTIONS(253),
        [anon_sym_int] = ACTIONS(253),
        [anon_sym_uint] = ACTIONS(253),
        [anon_sym_long] = ACTIONS(253),
        [anon_sym_ulong] = ACTIONS(253),
        [anon_sym_char] = ACTIONS(253),
        [sym_comment] = ACTIONS(91),
    },
    [370] = {
        [ts_builtin_sym_end] = ACTIONS(1505),
        [anon_sym_namespace] = ACTIONS(1513),
        [anon_sym_RBRACE] = ACTIONS(1505),
        [anon_sym_class] = ACTIONS(1513),
        [anon_sym_unsafe] = ACTIONS(1513),
        [anon_sym_abstract] = ACTIONS(1513),
        [anon_sym_sealed] = ACTIONS(1513),
        [anon_sym_static] = ACTIONS(1513),
        [anon_sym_new] = ACTIONS(1513),
        [anon_sym_public] = ACTIONS(1513),
        [anon_sym_protected] = ACTIONS(1513),
        [anon_sym_internal] = ACTIONS(1513),
        [anon_sym_private] = ACTIONS(1513),
        [anon_sym_struct] = ACTIONS(1513),
        [anon_sym_enum] = ACTIONS(1513),
        [anon_sym_sbyte] = ACTIONS(1521),
        [anon_sym_byte] = ACTIONS(1521),
        [anon_sym_short] = ACTIONS(1521),
        [anon_sym_ushort] = ACTIONS(1521),
        [anon_sym_int] = ACTIONS(1521),
        [anon_sym_uint] = ACTIONS(1521),
        [anon_sym_long] = ACTIONS(1521),
        [anon_sym_ulong] = ACTIONS(1521),
        [anon_sym_char] = ACTIONS(1521),
        [anon_sym_LBRACK] = ACTIONS(1505),
        [anon_sym_readonly] = ACTIONS(1521),
        [anon_sym_volatile] = ACTIONS(1521),
        [anon_sym_bool] = ACTIONS(1521),
        [anon_sym_decimal] = ACTIONS(1521),
        [anon_sym_double] = ACTIONS(1521),
        [anon_sym_float] = ACTIONS(1521),
        [anon_sym_object] = ACTIONS(1521),
        [anon_sym_string] = ACTIONS(1521),
        [sym_identifier_name] = ACTIONS(1528),
        [sym_comment] = ACTIONS(91),
    },
    [371] = {
        [sym_equals_value_clause] = STATE(117),
        [sym_type_parameter_list] = STATE(194),
        [anon_sym_RBRACE] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_EQ] = ACTIONS(261),
        [anon_sym_LT] = ACTIONS(441),
        [sym_identifier_name] = ACTIONS(491),
        [sym_comment] = ACTIONS(91),
    },
    [372] = {
        [anon_sym_namespace] = ACTIONS(1535),
        [anon_sym_RBRACE] = ACTIONS(1537),
        [anon_sym_class] = ACTIONS(1540),
        [anon_sym_unsafe] = ACTIONS(1540),
        [anon_sym_abstract] = ACTIONS(1540),
        [anon_sym_sealed] = ACTIONS(1540),
        [anon_sym_static] = ACTIONS(1540),
        [anon_sym_new] = ACTIONS(1540),
        [anon_sym_public] = ACTIONS(1540),
        [anon_sym_protected] = ACTIONS(1540),
        [anon_sym_internal] = ACTIONS(1540),
        [anon_sym_private] = ACTIONS(1540),
        [anon_sym_struct] = ACTIONS(1540),
        [anon_sym_enum] = ACTIONS(1540),
        [anon_sym_sbyte] = ACTIONS(495),
        [anon_sym_byte] = ACTIONS(495),
        [anon_sym_short] = ACTIONS(495),
        [anon_sym_ushort] = ACTIONS(495),
        [anon_sym_int] = ACTIONS(495),
        [anon_sym_uint] = ACTIONS(495),
        [anon_sym_long] = ACTIONS(495),
        [anon_sym_ulong] = ACTIONS(495),
        [anon_sym_char] = ACTIONS(495),
        [anon_sym_LBRACK] = ACTIONS(1537),
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
    [373] = {
        [aux_sym_enum_declaration_repeat1] = STATE(376),
        [anon_sym_RBRACE] = ACTIONS(1543),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(91),
    },
    [374] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1219),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [375] = {
        [ts_builtin_sym_end] = ACTIONS(1545),
        [anon_sym_SEMI] = ACTIONS(1549),
        [anon_sym_namespace] = ACTIONS(1551),
        [anon_sym_RBRACE] = ACTIONS(1545),
        [anon_sym_class] = ACTIONS(1551),
        [anon_sym_unsafe] = ACTIONS(1551),
        [anon_sym_abstract] = ACTIONS(1551),
        [anon_sym_sealed] = ACTIONS(1551),
        [anon_sym_static] = ACTIONS(1551),
        [anon_sym_new] = ACTIONS(1551),
        [anon_sym_public] = ACTIONS(1551),
        [anon_sym_protected] = ACTIONS(1551),
        [anon_sym_internal] = ACTIONS(1551),
        [anon_sym_private] = ACTIONS(1551),
        [anon_sym_struct] = ACTIONS(1551),
        [anon_sym_enum] = ACTIONS(1551),
        [anon_sym_sbyte] = ACTIONS(1551),
        [anon_sym_byte] = ACTIONS(1551),
        [anon_sym_short] = ACTIONS(1551),
        [anon_sym_ushort] = ACTIONS(1551),
        [anon_sym_int] = ACTIONS(1551),
        [anon_sym_uint] = ACTIONS(1551),
        [anon_sym_long] = ACTIONS(1551),
        [anon_sym_ulong] = ACTIONS(1551),
        [anon_sym_char] = ACTIONS(1551),
        [anon_sym_LBRACK] = ACTIONS(1545),
        [anon_sym_readonly] = ACTIONS(1551),
        [anon_sym_volatile] = ACTIONS(1551),
        [anon_sym_bool] = ACTIONS(1551),
        [anon_sym_decimal] = ACTIONS(1551),
        [anon_sym_double] = ACTIONS(1551),
        [anon_sym_float] = ACTIONS(1551),
        [anon_sym_object] = ACTIONS(1551),
        [anon_sym_string] = ACTIONS(1551),
        [sym_identifier_name] = ACTIONS(1555),
        [sym_comment] = ACTIONS(91),
    },
    [376] = {
        [anon_sym_RBRACE] = ACTIONS(1559),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(91),
    },
    [377] = {
        [ts_builtin_sym_end] = ACTIONS(1561),
        [anon_sym_SEMI] = ACTIONS(1565),
        [anon_sym_namespace] = ACTIONS(1567),
        [anon_sym_RBRACE] = ACTIONS(1561),
        [anon_sym_class] = ACTIONS(1567),
        [anon_sym_unsafe] = ACTIONS(1567),
        [anon_sym_abstract] = ACTIONS(1567),
        [anon_sym_sealed] = ACTIONS(1567),
        [anon_sym_static] = ACTIONS(1567),
        [anon_sym_new] = ACTIONS(1567),
        [anon_sym_public] = ACTIONS(1567),
        [anon_sym_protected] = ACTIONS(1567),
        [anon_sym_internal] = ACTIONS(1567),
        [anon_sym_private] = ACTIONS(1567),
        [anon_sym_struct] = ACTIONS(1567),
        [anon_sym_enum] = ACTIONS(1567),
        [anon_sym_sbyte] = ACTIONS(1567),
        [anon_sym_byte] = ACTIONS(1567),
        [anon_sym_short] = ACTIONS(1567),
        [anon_sym_ushort] = ACTIONS(1567),
        [anon_sym_int] = ACTIONS(1567),
        [anon_sym_uint] = ACTIONS(1567),
        [anon_sym_long] = ACTIONS(1567),
        [anon_sym_ulong] = ACTIONS(1567),
        [anon_sym_char] = ACTIONS(1567),
        [anon_sym_LBRACK] = ACTIONS(1561),
        [anon_sym_readonly] = ACTIONS(1567),
        [anon_sym_volatile] = ACTIONS(1567),
        [anon_sym_bool] = ACTIONS(1567),
        [anon_sym_decimal] = ACTIONS(1567),
        [anon_sym_double] = ACTIONS(1567),
        [anon_sym_float] = ACTIONS(1567),
        [anon_sym_object] = ACTIONS(1567),
        [anon_sym_string] = ACTIONS(1567),
        [sym_identifier_name] = ACTIONS(1571),
        [sym_comment] = ACTIONS(91),
    },
    [378] = {
        [ts_builtin_sym_end] = ACTIONS(1290),
        [anon_sym_namespace] = ACTIONS(1296),
        [anon_sym_RBRACE] = ACTIONS(1290),
        [anon_sym_class] = ACTIONS(1296),
        [anon_sym_unsafe] = ACTIONS(1296),
        [anon_sym_abstract] = ACTIONS(1296),
        [anon_sym_sealed] = ACTIONS(1296),
        [anon_sym_static] = ACTIONS(1296),
        [anon_sym_new] = ACTIONS(1296),
        [anon_sym_public] = ACTIONS(1296),
        [anon_sym_protected] = ACTIONS(1296),
        [anon_sym_internal] = ACTIONS(1296),
        [anon_sym_private] = ACTIONS(1296),
        [anon_sym_struct] = ACTIONS(1296),
        [anon_sym_enum] = ACTIONS(1296),
        [anon_sym_sbyte] = ACTIONS(1296),
        [anon_sym_byte] = ACTIONS(1296),
        [anon_sym_short] = ACTIONS(1296),
        [anon_sym_ushort] = ACTIONS(1296),
        [anon_sym_int] = ACTIONS(1296),
        [anon_sym_uint] = ACTIONS(1296),
        [anon_sym_long] = ACTIONS(1296),
        [anon_sym_ulong] = ACTIONS(1296),
        [anon_sym_char] = ACTIONS(1296),
        [anon_sym_LBRACK] = ACTIONS(1290),
        [anon_sym_readonly] = ACTIONS(1296),
        [anon_sym_volatile] = ACTIONS(1296),
        [anon_sym_bool] = ACTIONS(1296),
        [anon_sym_decimal] = ACTIONS(1296),
        [anon_sym_double] = ACTIONS(1296),
        [anon_sym_float] = ACTIONS(1296),
        [anon_sym_object] = ACTIONS(1296),
        [anon_sym_string] = ACTIONS(1296),
        [sym_identifier_name] = ACTIONS(1300),
        [sym_comment] = ACTIONS(91),
    },
    [379] = {
        [ts_builtin_sym_end] = ACTIONS(1561),
        [anon_sym_namespace] = ACTIONS(1567),
        [anon_sym_RBRACE] = ACTIONS(1561),
        [anon_sym_class] = ACTIONS(1567),
        [anon_sym_unsafe] = ACTIONS(1567),
        [anon_sym_abstract] = ACTIONS(1567),
        [anon_sym_sealed] = ACTIONS(1567),
        [anon_sym_static] = ACTIONS(1567),
        [anon_sym_new] = ACTIONS(1567),
        [anon_sym_public] = ACTIONS(1567),
        [anon_sym_protected] = ACTIONS(1567),
        [anon_sym_internal] = ACTIONS(1567),
        [anon_sym_private] = ACTIONS(1567),
        [anon_sym_struct] = ACTIONS(1567),
        [anon_sym_enum] = ACTIONS(1567),
        [anon_sym_sbyte] = ACTIONS(1567),
        [anon_sym_byte] = ACTIONS(1567),
        [anon_sym_short] = ACTIONS(1567),
        [anon_sym_ushort] = ACTIONS(1567),
        [anon_sym_int] = ACTIONS(1567),
        [anon_sym_uint] = ACTIONS(1567),
        [anon_sym_long] = ACTIONS(1567),
        [anon_sym_ulong] = ACTIONS(1567),
        [anon_sym_char] = ACTIONS(1567),
        [anon_sym_LBRACK] = ACTIONS(1561),
        [anon_sym_readonly] = ACTIONS(1567),
        [anon_sym_volatile] = ACTIONS(1567),
        [anon_sym_bool] = ACTIONS(1567),
        [anon_sym_decimal] = ACTIONS(1567),
        [anon_sym_double] = ACTIONS(1567),
        [anon_sym_float] = ACTIONS(1567),
        [anon_sym_object] = ACTIONS(1567),
        [anon_sym_string] = ACTIONS(1567),
        [sym_identifier_name] = ACTIONS(1571),
        [sym_comment] = ACTIONS(91),
    },
    [380] = {
        [anon_sym_SEMI] = ACTIONS(1575),
        [anon_sym_RBRACE] = ACTIONS(1575),
        [anon_sym_COMMA] = ACTIONS(1575),
        [sym_comment] = ACTIONS(91),
    },
    [381] = {
        [anon_sym_SEMI] = ACTIONS(1579),
        [anon_sym_RBRACE] = ACTIONS(1579),
        [anon_sym_COMMA] = ACTIONS(1579),
        [sym__real_type_suffix] = ACTIONS(1582),
        [sym__exponent_part] = ACTIONS(1584),
        [sym_comment] = ACTIONS(91),
    },
    [382] = {
        [anon_sym_SEMI] = ACTIONS(1586),
        [anon_sym_RBRACE] = ACTIONS(1586),
        [anon_sym_COMMA] = ACTIONS(1586),
        [sym_comment] = ACTIONS(91),
    },
    [383] = {
        [anon_sym_SEMI] = ACTIONS(1586),
        [anon_sym_RBRACE] = ACTIONS(1586),
        [anon_sym_COMMA] = ACTIONS(1586),
        [sym__real_type_suffix] = ACTIONS(1589),
        [sym_comment] = ACTIONS(91),
    },
    [384] = {
        [anon_sym_SEMI] = ACTIONS(1591),
        [anon_sym_RBRACE] = ACTIONS(1591),
        [anon_sym_COMMA] = ACTIONS(1591),
        [sym_comment] = ACTIONS(91),
    },
    [385] = {
        [anon_sym_SEMI] = ACTIONS(965),
        [anon_sym_RBRACE] = ACTIONS(965),
        [anon_sym_COMMA] = ACTIONS(965),
        [sym_comment] = ACTIONS(91),
    },
    [386] = {
        [sym_attribute_argument_list] = STATE(42),
        [sym_equals_value_clause] = STATE(391),
        [sym_type_parameter_list] = STATE(194),
        [anon_sym_SEMI] = ACTIONS(527),
        [anon_sym_RBRACE] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(1594),
        [anon_sym_RBRACK] = ACTIONS(189),
        [anon_sym_LPAREN] = ACTIONS(191),
        [anon_sym_EQ] = ACTIONS(261),
        [anon_sym_LT] = ACTIONS(441),
        [anon_sym_GT] = ACTIONS(489),
        [sym_comment] = ACTIONS(91),
    },
    [387] = {
        [anon_sym_RBRACE] = ACTIONS(1599),
        [anon_sym_COMMA] = ACTIONS(1599),
        [sym_comment] = ACTIONS(91),
    },
    [388] = {
        [anon_sym_COMMA] = ACTIONS(1602),
        [anon_sym_RBRACK] = ACTIONS(1602),
        [sym_comment] = ACTIONS(91),
    },
    [389] = {
        [anon_sym_SEMI] = ACTIONS(1605),
        [anon_sym_COMMA] = ACTIONS(1605),
        [sym_comment] = ACTIONS(91),
    },
    [390] = {
        [anon_sym_COMMA] = ACTIONS(1608),
        [anon_sym_GT] = ACTIONS(1608),
        [sym_comment] = ACTIONS(91),
    },
    [391] = {
        [anon_sym_SEMI] = ACTIONS(541),
        [anon_sym_RBRACE] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(1611),
        [sym_comment] = ACTIONS(91),
    },
    [392] = {
        [anon_sym_LBRACE] = ACTIONS(1614),
        [anon_sym_COLON] = ACTIONS(993),
        [sym_comment] = ACTIONS(91),
    },
    [393] = {
        [sym_enum_member_declaration] = STATE(373),
        [sym__attributes] = STATE(69),
        [sym__attribute_section] = STATE(23),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_LBRACK] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(251),
        [sym_comment] = ACTIONS(91),
    },
    [394] = {
        [sym_type_parameter_list] = STATE(396),
        [anon_sym_LBRACE] = ACTIONS(1616),
        [anon_sym_LT] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [395] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(402),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1618),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [396] = {
        [anon_sym_LBRACE] = ACTIONS(1620),
        [sym_comment] = ACTIONS(91),
    },
    [397] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(399),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1622),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [398] = {
        [ts_builtin_sym_end] = ACTIONS(1624),
        [anon_sym_namespace] = ACTIONS(1628),
        [anon_sym_RBRACE] = ACTIONS(1624),
        [anon_sym_class] = ACTIONS(1628),
        [anon_sym_unsafe] = ACTIONS(1628),
        [anon_sym_abstract] = ACTIONS(1628),
        [anon_sym_sealed] = ACTIONS(1628),
        [anon_sym_static] = ACTIONS(1628),
        [anon_sym_new] = ACTIONS(1628),
        [anon_sym_public] = ACTIONS(1628),
        [anon_sym_protected] = ACTIONS(1628),
        [anon_sym_internal] = ACTIONS(1628),
        [anon_sym_private] = ACTIONS(1628),
        [anon_sym_struct] = ACTIONS(1628),
        [anon_sym_enum] = ACTIONS(1628),
        [anon_sym_sbyte] = ACTIONS(1628),
        [anon_sym_byte] = ACTIONS(1628),
        [anon_sym_short] = ACTIONS(1628),
        [anon_sym_ushort] = ACTIONS(1628),
        [anon_sym_int] = ACTIONS(1628),
        [anon_sym_uint] = ACTIONS(1628),
        [anon_sym_long] = ACTIONS(1628),
        [anon_sym_ulong] = ACTIONS(1628),
        [anon_sym_char] = ACTIONS(1628),
        [anon_sym_LBRACK] = ACTIONS(1624),
        [anon_sym_readonly] = ACTIONS(1628),
        [anon_sym_volatile] = ACTIONS(1628),
        [anon_sym_bool] = ACTIONS(1628),
        [anon_sym_decimal] = ACTIONS(1628),
        [anon_sym_double] = ACTIONS(1628),
        [anon_sym_float] = ACTIONS(1628),
        [anon_sym_object] = ACTIONS(1628),
        [anon_sym_string] = ACTIONS(1628),
        [sym_identifier_name] = ACTIONS(1632),
        [sym_comment] = ACTIONS(91),
    },
    [399] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1636),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [400] = {
        [ts_builtin_sym_end] = ACTIONS(1638),
        [anon_sym_namespace] = ACTIONS(1642),
        [anon_sym_RBRACE] = ACTIONS(1638),
        [anon_sym_class] = ACTIONS(1642),
        [anon_sym_unsafe] = ACTIONS(1642),
        [anon_sym_abstract] = ACTIONS(1642),
        [anon_sym_sealed] = ACTIONS(1642),
        [anon_sym_static] = ACTIONS(1642),
        [anon_sym_new] = ACTIONS(1642),
        [anon_sym_public] = ACTIONS(1642),
        [anon_sym_protected] = ACTIONS(1642),
        [anon_sym_internal] = ACTIONS(1642),
        [anon_sym_private] = ACTIONS(1642),
        [anon_sym_struct] = ACTIONS(1642),
        [anon_sym_enum] = ACTIONS(1642),
        [anon_sym_sbyte] = ACTIONS(1642),
        [anon_sym_byte] = ACTIONS(1642),
        [anon_sym_short] = ACTIONS(1642),
        [anon_sym_ushort] = ACTIONS(1642),
        [anon_sym_int] = ACTIONS(1642),
        [anon_sym_uint] = ACTIONS(1642),
        [anon_sym_long] = ACTIONS(1642),
        [anon_sym_ulong] = ACTIONS(1642),
        [anon_sym_char] = ACTIONS(1642),
        [anon_sym_LBRACK] = ACTIONS(1638),
        [anon_sym_readonly] = ACTIONS(1642),
        [anon_sym_volatile] = ACTIONS(1642),
        [anon_sym_bool] = ACTIONS(1642),
        [anon_sym_decimal] = ACTIONS(1642),
        [anon_sym_double] = ACTIONS(1642),
        [anon_sym_float] = ACTIONS(1642),
        [anon_sym_object] = ACTIONS(1642),
        [anon_sym_string] = ACTIONS(1642),
        [sym_identifier_name] = ACTIONS(1646),
        [sym_comment] = ACTIONS(91),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(1650),
        [anon_sym_namespace] = ACTIONS(1654),
        [anon_sym_RBRACE] = ACTIONS(1650),
        [anon_sym_class] = ACTIONS(1654),
        [anon_sym_unsafe] = ACTIONS(1654),
        [anon_sym_abstract] = ACTIONS(1654),
        [anon_sym_sealed] = ACTIONS(1654),
        [anon_sym_static] = ACTIONS(1654),
        [anon_sym_new] = ACTIONS(1654),
        [anon_sym_public] = ACTIONS(1654),
        [anon_sym_protected] = ACTIONS(1654),
        [anon_sym_internal] = ACTIONS(1654),
        [anon_sym_private] = ACTIONS(1654),
        [anon_sym_struct] = ACTIONS(1654),
        [anon_sym_enum] = ACTIONS(1654),
        [anon_sym_sbyte] = ACTIONS(1654),
        [anon_sym_byte] = ACTIONS(1654),
        [anon_sym_short] = ACTIONS(1654),
        [anon_sym_ushort] = ACTIONS(1654),
        [anon_sym_int] = ACTIONS(1654),
        [anon_sym_uint] = ACTIONS(1654),
        [anon_sym_long] = ACTIONS(1654),
        [anon_sym_ulong] = ACTIONS(1654),
        [anon_sym_char] = ACTIONS(1654),
        [anon_sym_LBRACK] = ACTIONS(1650),
        [anon_sym_readonly] = ACTIONS(1654),
        [anon_sym_volatile] = ACTIONS(1654),
        [anon_sym_bool] = ACTIONS(1654),
        [anon_sym_decimal] = ACTIONS(1654),
        [anon_sym_double] = ACTIONS(1654),
        [anon_sym_float] = ACTIONS(1654),
        [anon_sym_object] = ACTIONS(1654),
        [anon_sym_string] = ACTIONS(1654),
        [sym_identifier_name] = ACTIONS(1658),
        [sym_comment] = ACTIONS(91),
    },
    [402] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1622),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [403] = {
        [sym_type_parameter_list] = STATE(405),
        [anon_sym_LBRACE] = ACTIONS(1662),
        [anon_sym_LT] = ACTIONS(441),
        [sym_comment] = ACTIONS(91),
    },
    [404] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(411),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1664),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [405] = {
        [anon_sym_LBRACE] = ACTIONS(1666),
        [sym_comment] = ACTIONS(91),
    },
    [406] = {
        [sym__type_declaration] = STATE(137),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(137),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(408),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1668),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [407] = {
        [ts_builtin_sym_end] = ACTIONS(1670),
        [anon_sym_namespace] = ACTIONS(1674),
        [anon_sym_RBRACE] = ACTIONS(1670),
        [anon_sym_class] = ACTIONS(1674),
        [anon_sym_unsafe] = ACTIONS(1674),
        [anon_sym_abstract] = ACTIONS(1674),
        [anon_sym_sealed] = ACTIONS(1674),
        [anon_sym_static] = ACTIONS(1674),
        [anon_sym_new] = ACTIONS(1674),
        [anon_sym_public] = ACTIONS(1674),
        [anon_sym_protected] = ACTIONS(1674),
        [anon_sym_internal] = ACTIONS(1674),
        [anon_sym_private] = ACTIONS(1674),
        [anon_sym_struct] = ACTIONS(1674),
        [anon_sym_enum] = ACTIONS(1674),
        [anon_sym_sbyte] = ACTIONS(1674),
        [anon_sym_byte] = ACTIONS(1674),
        [anon_sym_short] = ACTIONS(1674),
        [anon_sym_ushort] = ACTIONS(1674),
        [anon_sym_int] = ACTIONS(1674),
        [anon_sym_uint] = ACTIONS(1674),
        [anon_sym_long] = ACTIONS(1674),
        [anon_sym_ulong] = ACTIONS(1674),
        [anon_sym_char] = ACTIONS(1674),
        [anon_sym_LBRACK] = ACTIONS(1670),
        [anon_sym_readonly] = ACTIONS(1674),
        [anon_sym_volatile] = ACTIONS(1674),
        [anon_sym_bool] = ACTIONS(1674),
        [anon_sym_decimal] = ACTIONS(1674),
        [anon_sym_double] = ACTIONS(1674),
        [anon_sym_float] = ACTIONS(1674),
        [anon_sym_object] = ACTIONS(1674),
        [anon_sym_string] = ACTIONS(1674),
        [sym_identifier_name] = ACTIONS(1678),
        [sym_comment] = ACTIONS(91),
    },
    [408] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1682),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [409] = {
        [ts_builtin_sym_end] = ACTIONS(1684),
        [anon_sym_namespace] = ACTIONS(1688),
        [anon_sym_RBRACE] = ACTIONS(1684),
        [anon_sym_class] = ACTIONS(1688),
        [anon_sym_unsafe] = ACTIONS(1688),
        [anon_sym_abstract] = ACTIONS(1688),
        [anon_sym_sealed] = ACTIONS(1688),
        [anon_sym_static] = ACTIONS(1688),
        [anon_sym_new] = ACTIONS(1688),
        [anon_sym_public] = ACTIONS(1688),
        [anon_sym_protected] = ACTIONS(1688),
        [anon_sym_internal] = ACTIONS(1688),
        [anon_sym_private] = ACTIONS(1688),
        [anon_sym_struct] = ACTIONS(1688),
        [anon_sym_enum] = ACTIONS(1688),
        [anon_sym_sbyte] = ACTIONS(1688),
        [anon_sym_byte] = ACTIONS(1688),
        [anon_sym_short] = ACTIONS(1688),
        [anon_sym_ushort] = ACTIONS(1688),
        [anon_sym_int] = ACTIONS(1688),
        [anon_sym_uint] = ACTIONS(1688),
        [anon_sym_long] = ACTIONS(1688),
        [anon_sym_ulong] = ACTIONS(1688),
        [anon_sym_char] = ACTIONS(1688),
        [anon_sym_LBRACK] = ACTIONS(1684),
        [anon_sym_readonly] = ACTIONS(1688),
        [anon_sym_volatile] = ACTIONS(1688),
        [anon_sym_bool] = ACTIONS(1688),
        [anon_sym_decimal] = ACTIONS(1688),
        [anon_sym_double] = ACTIONS(1688),
        [anon_sym_float] = ACTIONS(1688),
        [anon_sym_object] = ACTIONS(1688),
        [anon_sym_string] = ACTIONS(1688),
        [sym_identifier_name] = ACTIONS(1692),
        [sym_comment] = ACTIONS(91),
    },
    [410] = {
        [ts_builtin_sym_end] = ACTIONS(1696),
        [anon_sym_namespace] = ACTIONS(1700),
        [anon_sym_RBRACE] = ACTIONS(1696),
        [anon_sym_class] = ACTIONS(1700),
        [anon_sym_unsafe] = ACTIONS(1700),
        [anon_sym_abstract] = ACTIONS(1700),
        [anon_sym_sealed] = ACTIONS(1700),
        [anon_sym_static] = ACTIONS(1700),
        [anon_sym_new] = ACTIONS(1700),
        [anon_sym_public] = ACTIONS(1700),
        [anon_sym_protected] = ACTIONS(1700),
        [anon_sym_internal] = ACTIONS(1700),
        [anon_sym_private] = ACTIONS(1700),
        [anon_sym_struct] = ACTIONS(1700),
        [anon_sym_enum] = ACTIONS(1700),
        [anon_sym_sbyte] = ACTIONS(1700),
        [anon_sym_byte] = ACTIONS(1700),
        [anon_sym_short] = ACTIONS(1700),
        [anon_sym_ushort] = ACTIONS(1700),
        [anon_sym_int] = ACTIONS(1700),
        [anon_sym_uint] = ACTIONS(1700),
        [anon_sym_long] = ACTIONS(1700),
        [anon_sym_ulong] = ACTIONS(1700),
        [anon_sym_char] = ACTIONS(1700),
        [anon_sym_LBRACK] = ACTIONS(1696),
        [anon_sym_readonly] = ACTIONS(1700),
        [anon_sym_volatile] = ACTIONS(1700),
        [anon_sym_bool] = ACTIONS(1700),
        [anon_sym_decimal] = ACTIONS(1700),
        [anon_sym_double] = ACTIONS(1700),
        [anon_sym_float] = ACTIONS(1700),
        [anon_sym_object] = ACTIONS(1700),
        [anon_sym_string] = ACTIONS(1700),
        [sym_identifier_name] = ACTIONS(1704),
        [sym_comment] = ACTIONS(91),
    },
    [411] = {
        [sym__type_declaration] = STATE(146),
        [sym_class_declaration] = STATE(16),
        [sym_class_modifiers] = STATE(17),
        [sym__class_modifiers] = STATE(18),
        [sym_struct_declaration] = STATE(16),
        [sym_struct_modifiers] = STATE(19),
        [sym__struct_modifiers] = STATE(20),
        [sym_enum_declaration] = STATE(16),
        [sym_enum_modifier] = STATE(21),
        [sym__attributes] = STATE(138),
        [sym__attribute_section] = STATE(23),
        [sym_field_declaration] = STATE(146),
        [sym_field_modifiers] = STATE(139),
        [sym__field_modifiers] = STATE(140),
        [sym_variable_declaration] = STATE(141),
        [sym__type] = STATE(142),
        [sym_generic_name] = STATE(143),
        [sym_predefined_type] = STATE(143),
        [aux_sym__attributes_repeat1] = STATE(29),
        [anon_sym_RBRACE] = ACTIONS(1668),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(447),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(455),
        [anon_sym_enum] = ACTIONS(457),
        [anon_sym_sbyte] = ACTIONS(459),
        [anon_sym_byte] = ACTIONS(459),
        [anon_sym_short] = ACTIONS(459),
        [anon_sym_ushort] = ACTIONS(459),
        [anon_sym_int] = ACTIONS(459),
        [anon_sym_uint] = ACTIONS(459),
        [anon_sym_long] = ACTIONS(459),
        [anon_sym_ulong] = ACTIONS(459),
        [anon_sym_char] = ACTIONS(459),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(461),
        [anon_sym_volatile] = ACTIONS(461),
        [anon_sym_bool] = ACTIONS(459),
        [anon_sym_decimal] = ACTIONS(459),
        [anon_sym_double] = ACTIONS(459),
        [anon_sym_float] = ACTIONS(459),
        [anon_sym_object] = ACTIONS(459),
        [anon_sym_string] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(91),
    },
    [412] = {
        [ts_builtin_sym_end] = ACTIONS(1708),
        [anon_sym_namespace] = ACTIONS(1715),
        [anon_sym_RBRACE] = ACTIONS(1708),
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
        [anon_sym_LBRACK] = ACTIONS(1708),
        [anon_sym_readonly] = ACTIONS(1715),
        [anon_sym_volatile] = ACTIONS(1715),
        [anon_sym_bool] = ACTIONS(1715),
        [anon_sym_decimal] = ACTIONS(1715),
        [anon_sym_double] = ACTIONS(1715),
        [anon_sym_float] = ACTIONS(1715),
        [anon_sym_object] = ACTIONS(1715),
        [anon_sym_string] = ACTIONS(1715),
        [sym_identifier_name] = ACTIONS(1722),
        [sym_comment] = ACTIONS(91),
    },
    [413] = {
        [ts_builtin_sym_end] = ACTIONS(1729),
        [anon_sym_namespace] = ACTIONS(1739),
        [anon_sym_RBRACE] = ACTIONS(1729),
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
        [anon_sym_struct] = ACTIONS(1739),
        [anon_sym_enum] = ACTIONS(1739),
        [anon_sym_sbyte] = ACTIONS(1749),
        [anon_sym_byte] = ACTIONS(1749),
        [anon_sym_short] = ACTIONS(1749),
        [anon_sym_ushort] = ACTIONS(1749),
        [anon_sym_int] = ACTIONS(1749),
        [anon_sym_uint] = ACTIONS(1749),
        [anon_sym_long] = ACTIONS(1749),
        [anon_sym_ulong] = ACTIONS(1749),
        [anon_sym_char] = ACTIONS(1749),
        [anon_sym_LBRACK] = ACTIONS(1729),
        [anon_sym_readonly] = ACTIONS(1749),
        [anon_sym_volatile] = ACTIONS(1749),
        [anon_sym_bool] = ACTIONS(1749),
        [anon_sym_decimal] = ACTIONS(1749),
        [anon_sym_double] = ACTIONS(1749),
        [anon_sym_float] = ACTIONS(1749),
        [anon_sym_object] = ACTIONS(1749),
        [anon_sym_string] = ACTIONS(1749),
        [sym_identifier_name] = ACTIONS(1758),
        [sym_comment] = ACTIONS(91),
    },
    [414] = {
        [aux_sym_enum_declaration_repeat1] = STATE(303),
        [anon_sym_RBRACE] = ACTIONS(1767),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(91),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(248),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(251),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(252),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(253),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(254),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(131),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(7),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(255),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(133),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(256),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(257),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(258),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(259),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(260),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(11),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(261),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(41),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(43),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(225),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(135),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(262),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(73),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(263),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(264),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(86),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(87),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(265),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(76),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(97),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(77),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(266),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(267),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(268),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(269),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(80),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(134),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(127),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(270),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(238),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(229),
    [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(271),
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
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
    [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
    [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(230),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
    [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_declaration, 1),
    [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
    [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 4),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
    [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
    [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9),
    [393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10),
    [405] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 11),
    [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
    [425] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8),
    [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
    [463] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
    [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
    [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
    [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
    [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
    [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 5),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [735] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(244),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
    [759] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_extern_alias_directive, 4),
    [771] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [775] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [785] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [795] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [808] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [818] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [831] = {.count = 9, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
    [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(371),
    [847] = {.count = 18, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
    [868] = {.count = 18, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [887] = {.count = 16, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [904] = {.count = 16, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
    [923] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
    [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
    [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
    [932] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(386),
    [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attributes, 5),
    [936] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [939] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
    [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
    [946] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
    [948] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [950] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
    [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
    [960] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [965] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
    [971] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [975] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
    [977] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [980] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [983] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(367),
    [987] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(368),
    [990] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_enum_member_declaration, 2),
    [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
    [995] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1), REDUCE(sym_enum_member_declaration, 2),
    [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [1003] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(232),
    [1007] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1010] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1013] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1018] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1023] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1026] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1029] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [1032] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
    [1037] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
    [1042] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [1045] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(345),
    [1049] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(109),
    [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
    [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
    [1057] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(319),
    [1059] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1062] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1065] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [1070] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3), SHIFT(35),
    [1074] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1), REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1078] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [1081] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1084] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1087] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [1092] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1096] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(149),
    [1100] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_enum_member_declaration, 3),
    [1103] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2), REDUCE(sym_enum_member_declaration, 3),
    [1107] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1110] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [1115] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(197),
    [1119] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(198),
    [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [1125] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [1128] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1132] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
    [1141] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [1149] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1155] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1161] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1167] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1173] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1179] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1188] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1197] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1206] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1210] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1213] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1216] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [1221] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1228] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1235] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [1244] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1251] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1258] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1265] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1269] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1273] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
    [1279] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1282] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1285] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [1290] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [1296] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1300] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [1306] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [1312] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1316] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1320] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1324] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1328] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
    [1334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
    [1336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [1342] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [1347] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1350] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [1355] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [1360] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1363] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1366] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1369] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1372] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [1377] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [1382] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1385] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
    [1390] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
    [1395] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1398] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1401] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
    [1409] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1415] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
    [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
    [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
    [1431] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1434] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1437] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
    [1442] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1445] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1448] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1451] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1454] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1457] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
    [1462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [1464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
    [1470] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1473] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1476] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
    [1481] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1484] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1487] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1490] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1493] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1496] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1499] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [1503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [1505] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1513] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1521] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1528] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
    [1537] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1540] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [1545] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
    [1551] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1555] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
    [1561] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [1567] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1571] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1575] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1579] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
    [1586] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
    [1591] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1594] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [1599] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [1602] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1605] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1608] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [1611] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2),
    [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
    [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(401),
    [1620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
    [1622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
    [1624] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1628] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1632] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
    [1638] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1642] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1646] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1650] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1654] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1658] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
    [1664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
    [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
    [1668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [1670] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1674] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1678] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
    [1684] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1688] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1692] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1696] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1700] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1704] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1708] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1715] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1722] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1729] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1739] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1749] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1758] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
