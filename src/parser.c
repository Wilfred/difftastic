#include "tree_sitter/parser.h"

#define STATE_COUNT 288
#define SYMBOL_COUNT 129
#define TOKEN_COUNT 78

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
    anon_sym_COMMA = 13,
    anon_sym_LPAREN = 14,
    anon_sym_RPAREN = 15,
    anon_sym_EQ = 16,
    anon_sym_true = 17,
    anon_sym_false = 18,
    anon_sym_SQUOTE = 19,
    aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 20,
    sym__hexadecimal_escape_sequence = 21,
    aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 22,
    aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 23,
    anon_sym_BSLASH_SQUOTE = 24,
    anon_sym_BSLASH_DQUOTE = 25,
    anon_sym_BSLASH_BSLASH = 26,
    anon_sym_BSLASH0 = 27,
    anon_sym_BSLASHa = 28,
    anon_sym_BSLASHb = 29,
    anon_sym_BSLASHf = 30,
    anon_sym_BSLASHn = 31,
    anon_sym_BSLASHr = 32,
    anon_sym_BSLASHt = 33,
    anon_sym_BSLASHv = 34,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 35,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 36,
    sym__integer_type_suffix = 37,
    sym_null_literal = 38,
    anon_sym_DOT = 39,
    sym__real_type_suffix = 40,
    sym__exponent_part = 41,
    anon_sym_DQUOTE = 42,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 43,
    anon_sym_AT_DQUOTE = 44,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 45,
    anon_sym_abstract = 46,
    anon_sym_sealed = 47,
    anon_sym_static = 48,
    anon_sym_new = 49,
    anon_sym_public = 50,
    anon_sym_protected = 51,
    anon_sym_internal = 52,
    anon_sym_private = 53,
    anon_sym_unsafe = 54,
    anon_sym_readonly = 55,
    anon_sym_volatile = 56,
    anon_sym_bool = 57,
    anon_sym_byte = 58,
    anon_sym_char = 59,
    anon_sym_decimal = 60,
    anon_sym_double = 61,
    anon_sym_float = 62,
    anon_sym_int = 63,
    anon_sym_long = 64,
    anon_sym_object = 65,
    anon_sym_sbyte = 66,
    anon_sym_short = 67,
    anon_sym_string = 68,
    anon_sym_uint = 69,
    anon_sym_ulong = 70,
    anon_sym_ushort = 71,
    anon_sym_LT = 72,
    anon_sym_GT = 73,
    anon_sym_COLON_COLON = 74,
    sym_global = 75,
    sym_identifier_name = 76,
    sym_comment = 77,
    sym_compilation_unit = 78,
    sym_using_directive = 79,
    sym_namespace_declaration = 80,
    sym_class_declaration = 81,
    sym_struct_declaration = 82,
    sym__global_attributes = 83,
    sym__global_attribute_target_specifier = 84,
    sym__attributes = 85,
    sym__attribute_section = 86,
    sym_attribute_list = 87,
    sym_attribute = 88,
    sym_attribute_argument_list = 89,
    sym_field_declaration = 90,
    sym_variable_declaration = 91,
    sym__type = 92,
    sym_generic_name = 93,
    sym_variable_declarator = 94,
    sym_equals_value_clause = 95,
    sym__literal = 96,
    sym_boolean_literal = 97,
    sym_character_literal = 98,
    sym__unicode_escape_sequence = 99,
    sym__simple_escape_sequence = 100,
    sym_integer_literal = 101,
    sym_real_literal = 102,
    sym_string_literal = 103,
    sym__regular_string_literal = 104,
    sym__regular_string_literal_character = 105,
    sym__verbatim_string_literal = 106,
    sym_class_modifiers = 107,
    sym__class_modifiers = 108,
    sym_struct_modifiers = 109,
    sym__struct_modifiers = 110,
    sym_field_modifiers = 111,
    sym__field_modifiers = 112,
    sym_predefined_type = 113,
    sym_type_parameter_list = 114,
    sym_type_parameter = 115,
    sym_qualified_name = 116,
    sym_alias_qualified_name = 117,
    sym_name_equals = 118,
    sym_static = 119,
    aux_sym_compilation_unit_repeat1 = 120,
    aux_sym_compilation_unit_repeat2 = 121,
    aux_sym_namespace_declaration_repeat1 = 122,
    aux_sym_class_declaration_repeat1 = 123,
    aux_sym__attributes_repeat1 = 124,
    aux_sym_attribute_list_repeat1 = 125,
    aux_sym_variable_declaration_repeat1 = 126,
    aux_sym__regular_string_literal_repeat1 = 127,
    aux_sym_type_parameter_list_repeat1 = 128,
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
    [anon_sym_COMMA] = ",",
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
    [anon_sym_abstract] = "abstract",
    [anon_sym_sealed] = "sealed",
    [anon_sym_static] = "static",
    [anon_sym_new] = "new",
    [anon_sym_public] = "public",
    [anon_sym_protected] = "protected",
    [anon_sym_internal] = "internal",
    [anon_sym_private] = "private",
    [anon_sym_unsafe] = "unsafe",
    [anon_sym_readonly] = "readonly",
    [anon_sym_volatile] = "volatile",
    [anon_sym_bool] = "bool",
    [anon_sym_byte] = "byte",
    [anon_sym_char] = "char",
    [anon_sym_decimal] = "decimal",
    [anon_sym_double] = "double",
    [anon_sym_float] = "float",
    [anon_sym_int] = "int",
    [anon_sym_long] = "long",
    [anon_sym_object] = "object",
    [anon_sym_sbyte] = "sbyte",
    [anon_sym_short] = "short",
    [anon_sym_string] = "string",
    [anon_sym_uint] = "uint",
    [anon_sym_ulong] = "ulong",
    [anon_sym_ushort] = "ushort",
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
    [anon_sym_COMMA] = {
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
    [anon_sym_unsafe] = {
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
    [anon_sym_byte] = {
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
    [anon_sym_int] = {
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
    [anon_sym_object] = {
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
    [anon_sym_short] = {
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
    [anon_sym_uint] = {
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
    [anon_sym_ushort] = {
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
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
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
            if (lookahead == 'f')
                ADVANCE(108);
            if (lookahead == 'g')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(131);
            if (lookahead == 'm')
                ADVANCE(135);
            if (lookahead == 'n')
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(188);
            if (lookahead == 't')
                ADVANCE(214);
            if (lookahead == 'u')
                ADVANCE(218);
            if (lookahead == 'v')
                ADVANCE(239);
            if (lookahead == '{')
                ADVANCE(247);
            if (lookahead == '}')
                ADVANCE(248);
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
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(113);
            ACCEPT_TOKEN(sym__real_type_suffix);
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
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(112);
            ACCEPT_TOKEN(sym_identifier_name);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_false);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier_name);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier_name);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_float);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier_name);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(121);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_global);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(126);
            ACCEPT_TOKEN(anon_sym_int);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier_name);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_internal);
        case 131:
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
                ADVANCE(132);
            if (lookahead == 'u')
                ADVANCE(31);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_long);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(136);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier_name);
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier_name);
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier_name);
        case 140:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_module);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(142);
            if (lookahead == 'e')
                ADVANCE(150);
            if (lookahead == 'u')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier_name);
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
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
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier_name);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'p')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier_name);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier_name);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'w')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_new);
        case 152:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier_name);
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier_name);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_null_literal);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'j')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier_name);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier_name);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_object);
        case 161:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(162);
            if (lookahead == 'u')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 162:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(163);
            if (lookahead == 'o')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'v')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier_name);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier_name);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_private);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier_name);
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier_name);
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier_name);
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_protected);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier_name);
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier_name);
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(178);
            ACCEPT_TOKEN(sym_identifier_name);
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier_name);
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_public);
        case 180:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(181);
            ACCEPT_TOKEN(sym_identifier_name);
        case 181:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(182);
            ACCEPT_TOKEN(sym_identifier_name);
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(183);
            ACCEPT_TOKEN(sym_identifier_name);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(184);
            ACCEPT_TOKEN(sym_identifier_name);
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(185);
            ACCEPT_TOKEN(sym_identifier_name);
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(186);
            ACCEPT_TOKEN(sym_identifier_name);
        case 186:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(187);
            ACCEPT_TOKEN(sym_identifier_name);
        case 187:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 188:
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
                ADVANCE(189);
            if (lookahead == 'e')
                ADVANCE(193);
            if (lookahead == 'h')
                ADVANCE(198);
            if (lookahead == 't')
                ADVANCE(202);
            ACCEPT_TOKEN(sym_identifier_name);
        case 189:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(190);
            ACCEPT_TOKEN(sym_identifier_name);
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(191);
            ACCEPT_TOKEN(sym_identifier_name);
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(192);
            ACCEPT_TOKEN(sym_identifier_name);
        case 192:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 193:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(194);
            ACCEPT_TOKEN(sym_identifier_name);
        case 194:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
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
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(197);
            ACCEPT_TOKEN(sym_identifier_name);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(199);
            ACCEPT_TOKEN(sym_identifier_name);
        case 199:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(200);
            ACCEPT_TOKEN(sym_identifier_name);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier_name);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_short);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(203);
            if (lookahead == 'r')
                ADVANCE(207);
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier_name);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(206);
            ACCEPT_TOKEN(sym_identifier_name);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_static);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(208);
            if (lookahead == 'u')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier_name);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier_name);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(210);
            ACCEPT_TOKEN(sym_identifier_name);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_string);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier_name);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier_name);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_struct);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier_name);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier_name);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier_name);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_true);
        case 218:
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
                ADVANCE(219);
            if (lookahead == 'l')
                ADVANCE(222);
            if (lookahead == 'n')
                ADVANCE(226);
            if (lookahead == 's')
                ADVANCE(231);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier_name);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier_name);
        case 221:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_uint);
        case 222:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(223);
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
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier_name);
        case 225:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 226:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(227);
            ACCEPT_TOKEN(sym_identifier_name);
        case 227:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(228);
            ACCEPT_TOKEN(sym_identifier_name);
        case 228:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
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
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 231:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier_name);
        case 232:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(233);
            ACCEPT_TOKEN(sym_identifier_name);
        case 233:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(234);
            ACCEPT_TOKEN(sym_identifier_name);
        case 234:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(235);
            ACCEPT_TOKEN(sym_identifier_name);
        case 235:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ushort);
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
            ACCEPT_TOKEN(anon_sym_using);
        case 239:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(240);
            ACCEPT_TOKEN(sym_identifier_name);
        case 240:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(241);
            ACCEPT_TOKEN(sym_identifier_name);
        case 241:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(242);
            ACCEPT_TOKEN(sym_identifier_name);
        case 242:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(243);
            ACCEPT_TOKEN(sym_identifier_name);
        case 243:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(246);
            ACCEPT_TOKEN(sym_identifier_name);
        case 246:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 247:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 248:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 249:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(249);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(250);
            if (lookahead == 'c')
                ADVANCE(258);
            if (lookahead == 'i')
                ADVANCE(263);
            if (lookahead == 'n')
                ADVANCE(271);
            if (lookahead == 'p')
                ADVANCE(282);
            if (lookahead == 's')
                ADVANCE(301);
            if (lookahead == 'u')
                ADVANCE(316);
            LEX_ERROR();
        case 250:
            if (lookahead == 'b')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            if (lookahead == 's')
                ADVANCE(252);
            LEX_ERROR();
        case 252:
            if (lookahead == 't')
                ADVANCE(253);
            LEX_ERROR();
        case 253:
            if (lookahead == 'r')
                ADVANCE(254);
            LEX_ERROR();
        case 254:
            if (lookahead == 'a')
                ADVANCE(255);
            LEX_ERROR();
        case 255:
            if (lookahead == 'c')
                ADVANCE(256);
            LEX_ERROR();
        case 256:
            if (lookahead == 't')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 258:
            if (lookahead == 'l')
                ADVANCE(259);
            LEX_ERROR();
        case 259:
            if (lookahead == 'a')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if (lookahead == 's')
                ADVANCE(261);
            LEX_ERROR();
        case 261:
            if (lookahead == 's')
                ADVANCE(262);
            LEX_ERROR();
        case 262:
            ACCEPT_TOKEN(anon_sym_class);
        case 263:
            if (lookahead == 'n')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            if (lookahead == 't')
                ADVANCE(265);
            LEX_ERROR();
        case 265:
            if (lookahead == 'e')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            if (lookahead == 'r')
                ADVANCE(267);
            LEX_ERROR();
        case 267:
            if (lookahead == 'n')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            if (lookahead == 'a')
                ADVANCE(269);
            LEX_ERROR();
        case 269:
            if (lookahead == 'l')
                ADVANCE(270);
            LEX_ERROR();
        case 270:
            ACCEPT_TOKEN(anon_sym_internal);
        case 271:
            if (lookahead == 'a')
                ADVANCE(272);
            if (lookahead == 'e')
                ADVANCE(280);
            LEX_ERROR();
        case 272:
            if (lookahead == 'm')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            if (lookahead == 'e')
                ADVANCE(274);
            LEX_ERROR();
        case 274:
            if (lookahead == 's')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            if (lookahead == 'p')
                ADVANCE(276);
            LEX_ERROR();
        case 276:
            if (lookahead == 'a')
                ADVANCE(277);
            LEX_ERROR();
        case 277:
            if (lookahead == 'c')
                ADVANCE(278);
            LEX_ERROR();
        case 278:
            if (lookahead == 'e')
                ADVANCE(279);
            LEX_ERROR();
        case 279:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 280:
            if (lookahead == 'w')
                ADVANCE(281);
            LEX_ERROR();
        case 281:
            ACCEPT_TOKEN(anon_sym_new);
        case 282:
            if (lookahead == 'r')
                ADVANCE(283);
            if (lookahead == 'u')
                ADVANCE(296);
            LEX_ERROR();
        case 283:
            if (lookahead == 'i')
                ADVANCE(284);
            if (lookahead == 'o')
                ADVANCE(289);
            LEX_ERROR();
        case 284:
            if (lookahead == 'v')
                ADVANCE(285);
            LEX_ERROR();
        case 285:
            if (lookahead == 'a')
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
            ACCEPT_TOKEN(anon_sym_private);
        case 289:
            if (lookahead == 't')
                ADVANCE(290);
            LEX_ERROR();
        case 290:
            if (lookahead == 'e')
                ADVANCE(291);
            LEX_ERROR();
        case 291:
            if (lookahead == 'c')
                ADVANCE(292);
            LEX_ERROR();
        case 292:
            if (lookahead == 't')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            if (lookahead == 'e')
                ADVANCE(294);
            LEX_ERROR();
        case 294:
            if (lookahead == 'd')
                ADVANCE(295);
            LEX_ERROR();
        case 295:
            ACCEPT_TOKEN(anon_sym_protected);
        case 296:
            if (lookahead == 'b')
                ADVANCE(297);
            LEX_ERROR();
        case 297:
            if (lookahead == 'l')
                ADVANCE(298);
            LEX_ERROR();
        case 298:
            if (lookahead == 'i')
                ADVANCE(299);
            LEX_ERROR();
        case 299:
            if (lookahead == 'c')
                ADVANCE(300);
            LEX_ERROR();
        case 300:
            ACCEPT_TOKEN(anon_sym_public);
        case 301:
            if (lookahead == 'e')
                ADVANCE(302);
            if (lookahead == 't')
                ADVANCE(307);
            LEX_ERROR();
        case 302:
            if (lookahead == 'a')
                ADVANCE(303);
            LEX_ERROR();
        case 303:
            if (lookahead == 'l')
                ADVANCE(304);
            LEX_ERROR();
        case 304:
            if (lookahead == 'e')
                ADVANCE(305);
            LEX_ERROR();
        case 305:
            if (lookahead == 'd')
                ADVANCE(306);
            LEX_ERROR();
        case 306:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 307:
            if (lookahead == 'a')
                ADVANCE(308);
            if (lookahead == 'r')
                ADVANCE(312);
            LEX_ERROR();
        case 308:
            if (lookahead == 't')
                ADVANCE(309);
            LEX_ERROR();
        case 309:
            if (lookahead == 'i')
                ADVANCE(310);
            LEX_ERROR();
        case 310:
            if (lookahead == 'c')
                ADVANCE(311);
            LEX_ERROR();
        case 311:
            ACCEPT_TOKEN(anon_sym_static);
        case 312:
            if (lookahead == 'u')
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
            ACCEPT_TOKEN(anon_sym_struct);
        case 316:
            if (lookahead == 'n')
                ADVANCE(317);
            if (lookahead == 's')
                ADVANCE(322);
            LEX_ERROR();
        case 317:
            if (lookahead == 's')
                ADVANCE(318);
            LEX_ERROR();
        case 318:
            if (lookahead == 'a')
                ADVANCE(319);
            LEX_ERROR();
        case 319:
            if (lookahead == 'f')
                ADVANCE(320);
            LEX_ERROR();
        case 320:
            if (lookahead == 'e')
                ADVANCE(321);
            LEX_ERROR();
        case 321:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 322:
            if (lookahead == 'i')
                ADVANCE(323);
            LEX_ERROR();
        case 323:
            if (lookahead == 'n')
                ADVANCE(324);
            LEX_ERROR();
        case 324:
            if (lookahead == 'g')
                ADVANCE(325);
            LEX_ERROR();
        case 325:
            ACCEPT_TOKEN(anon_sym_using);
        case 326:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(326);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(117);
            if (lookahead == 's')
                ADVANCE(327);
            LEX_ERROR();
        case 327:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(328);
            ACCEPT_TOKEN(sym_identifier_name);
        case 328:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(203);
            ACCEPT_TOKEN(sym_identifier_name);
        case 329:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(329);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(117);
            LEX_ERROR();
        case 330:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(330);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 331:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(331);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(332);
            if (lookahead == 'm')
                ADVANCE(333);
            LEX_ERROR();
        case 332:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier_name);
        case 333:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 334:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(334);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(250);
            if (lookahead == 'c')
                ADVANCE(258);
            if (lookahead == 'i')
                ADVANCE(263);
            if (lookahead == 'n')
                ADVANCE(335);
            if (lookahead == 'p')
                ADVANCE(282);
            if (lookahead == 's')
                ADVANCE(336);
            if (lookahead == 'u')
                ADVANCE(338);
            LEX_ERROR();
        case 335:
            if (lookahead == 'e')
                ADVANCE(280);
            LEX_ERROR();
        case 336:
            if (lookahead == 'e')
                ADVANCE(302);
            if (lookahead == 't')
                ADVANCE(337);
            LEX_ERROR();
        case 337:
            if (lookahead == 'a')
                ADVANCE(308);
            LEX_ERROR();
        case 338:
            if (lookahead == 'n')
                ADVANCE(317);
            LEX_ERROR();
        case 339:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(339);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(250);
            if (lookahead == 'c')
                ADVANCE(258);
            if (lookahead == 'i')
                ADVANCE(263);
            if (lookahead == 'n')
                ADVANCE(335);
            if (lookahead == 'p')
                ADVANCE(282);
            if (lookahead == 's')
                ADVANCE(301);
            if (lookahead == 'u')
                ADVANCE(338);
            LEX_ERROR();
        case 340:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(340);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 341:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(341);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(250);
            if (lookahead == 'c')
                ADVANCE(258);
            if (lookahead == 'i')
                ADVANCE(263);
            if (lookahead == 'n')
                ADVANCE(271);
            if (lookahead == 'p')
                ADVANCE(282);
            if (lookahead == 's')
                ADVANCE(301);
            if (lookahead == 'u')
                ADVANCE(338);
            LEX_ERROR();
        case 342:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(342);
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
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(343);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'n')
                ADVANCE(347);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(348);
            if (lookahead == 'v')
                ADVANCE(239);
            LEX_ERROR();
        case 343:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 344:
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
        case 345:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 346:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 347:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 348:
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
                ADVANCE(219);
            if (lookahead == 'l')
                ADVANCE(349);
            if (lookahead == 'n')
                ADVANCE(226);
            if (lookahead == 's')
                ADVANCE(350);
            ACCEPT_TOKEN(sym_identifier_name);
        case 349:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(223);
            ACCEPT_TOKEN(sym_identifier_name);
        case 350:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(232);
            ACCEPT_TOKEN(sym_identifier_name);
        case 351:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(351);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'c')
                ADVANCE(258);
            LEX_ERROR();
        case 352:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(352);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(353);
            LEX_ERROR();
        case 353:
            if (lookahead == 't')
                ADVANCE(354);
            LEX_ERROR();
        case 354:
            if (lookahead == 'r')
                ADVANCE(312);
            LEX_ERROR();
        case 355:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(355);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 356:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(356);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 357:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(357);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 358:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(358);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 359:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(359);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(247);
            LEX_ERROR();
        case 360:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(360);
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
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(343);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'n')
                ADVANCE(347);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(348);
            if (lookahead == 'v')
                ADVANCE(239);
            if (lookahead == '}')
                ADVANCE(248);
            LEX_ERROR();
        case 361:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(361);
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
                ADVANCE(362);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(363);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 's')
                ADVANCE(366);
            if (lookahead == 'u')
                ADVANCE(369);
            LEX_ERROR();
        case 362:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 363:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(364);
            ACCEPT_TOKEN(sym_identifier_name);
        case 364:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(365);
            ACCEPT_TOKEN(sym_identifier_name);
        case 365:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_int);
        case 366:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(189);
            if (lookahead == 'h')
                ADVANCE(198);
            if (lookahead == 't')
                ADVANCE(367);
            ACCEPT_TOKEN(sym_identifier_name);
        case 367:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(368);
            ACCEPT_TOKEN(sym_identifier_name);
        case 368:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier_name);
        case 369:
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
                ADVANCE(219);
            if (lookahead == 'l')
                ADVANCE(349);
            if (lookahead == 's')
                ADVANCE(350);
            ACCEPT_TOKEN(sym_identifier_name);
        case 370:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(370);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(247);
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
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(343);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'n')
                ADVANCE(372);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(348);
            if (lookahead == 'v')
                ADVANCE(239);
            if (lookahead == '}')
                ADVANCE(248);
            LEX_ERROR();
        case 372:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(142);
            if (lookahead == 'e')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ADVANCE(343);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'n')
                ADVANCE(347);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(374);
            if (lookahead == 'u')
                ADVANCE(348);
            if (lookahead == 'v')
                ADVANCE(239);
            LEX_ERROR();
        case 374:
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
                ADVANCE(189);
            if (lookahead == 'e')
                ADVANCE(193);
            if (lookahead == 'h')
                ADVANCE(198);
            if (lookahead == 't')
                ADVANCE(375);
            ACCEPT_TOKEN(sym_identifier_name);
        case 375:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(203);
            if (lookahead == 'r')
                ADVANCE(368);
            ACCEPT_TOKEN(sym_identifier_name);
        case 376:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(376);
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
                ADVANCE(343);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'n')
                ADVANCE(347);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(348);
            if (lookahead == 'v')
                ADVANCE(239);
            LEX_ERROR();
        case 377:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(377);
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
                ADVANCE(362);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'n')
                ADVANCE(347);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(378);
            if (lookahead == 'u')
                ADVANCE(348);
            if (lookahead == 'v')
                ADVANCE(239);
            LEX_ERROR();
        case 378:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(189);
            if (lookahead == 'h')
                ADVANCE(198);
            if (lookahead == 't')
                ADVANCE(375);
            ACCEPT_TOKEN(sym_identifier_name);
        case 379:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(379);
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
        case 380:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(380);
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
        case 381:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(381);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 382:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(382);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 383:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(383);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 384:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(384);
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
                ADVANCE(385);
            if (lookahead == 'n')
                ADVANCE(390);
            if (lookahead == 't')
                ADVANCE(394);
            LEX_ERROR();
        case 385:
            if (lookahead == 'a')
                ADVANCE(386);
            LEX_ERROR();
        case 386:
            if (lookahead == 'l')
                ADVANCE(387);
            LEX_ERROR();
        case 387:
            if (lookahead == 's')
                ADVANCE(388);
            LEX_ERROR();
        case 388:
            if (lookahead == 'e')
                ADVANCE(389);
            LEX_ERROR();
        case 389:
            ACCEPT_TOKEN(anon_sym_false);
        case 390:
            if (lookahead == 'u')
                ADVANCE(391);
            LEX_ERROR();
        case 391:
            if (lookahead == 'l')
                ADVANCE(392);
            LEX_ERROR();
        case 392:
            if (lookahead == 'l')
                ADVANCE(393);
            LEX_ERROR();
        case 393:
            ACCEPT_TOKEN(sym_null_literal);
        case 394:
            if (lookahead == 'r')
                ADVANCE(395);
            LEX_ERROR();
        case 395:
            if (lookahead == 'u')
                ADVANCE(396);
            LEX_ERROR();
        case 396:
            if (lookahead == 'e')
                ADVANCE(397);
            LEX_ERROR();
        case 397:
            ACCEPT_TOKEN(anon_sym_true);
        case 398:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(399);
            if (lookahead == '/')
                ADVANCE(400);
            if (lookahead == '\\')
                ADVANCE(401);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(399);
            LEX_ERROR();
        case 399:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 400:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 401:
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
        case 402:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(402);
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
                ADVANCE(403);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(404);
            if (lookahead == 'L')
                ADVANCE(405);
            if (lookahead == 'U')
                ADVANCE(407);
            if (lookahead == 'l')
                ADVANCE(405);
            if (lookahead == 'u')
                ADVANCE(407);
            LEX_ERROR();
        case 403:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 404:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(28);
            LEX_ERROR();
        case 405:
            if (lookahead == 'U')
                ADVANCE(406);
            if (lookahead == 'u')
                ADVANCE(406);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 406:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 407:
            if (lookahead == 'L')
                ADVANCE(406);
            if (lookahead == 'l')
                ADVANCE(406);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 408:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(408);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == 'L')
                ADVANCE(405);
            if (lookahead == 'U')
                ADVANCE(407);
            if (lookahead == 'l')
                ADVANCE(405);
            if (lookahead == 'u')
                ADVANCE(407);
            LEX_ERROR();
        case 409:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(409);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            LEX_ERROR();
        case 410:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(411);
            if (lookahead == '\n')
                SKIP(410);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(412);
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
                ADVANCE(411);
            LEX_ERROR();
        case 411:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 412:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 413:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(414);
            if (lookahead == '/')
                ADVANCE(415);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(419);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 414:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(414);
            if (lookahead == '/')
                ADVANCE(415);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(419);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 415:
            if (lookahead == '*')
                ADVANCE(416);
            if (lookahead == '/')
                ADVANCE(420);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(419);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 416:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(417);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*')))
                ADVANCE(416);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 417:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(418);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(416);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 418:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(419);
            ACCEPT_TOKEN(sym_comment);
        case 419:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(419);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 420:
            if (lookahead == '\n')
                ADVANCE(419);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(421);
            ACCEPT_TOKEN(sym_comment);
        case 421:
            if (lookahead == '\n')
                ADVANCE(419);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(421);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 422:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(422);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 423:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(411);
            if (lookahead == '\n')
                SKIP(423);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(412);
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
                ADVANCE(411);
            LEX_ERROR();
        case 424:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(424);
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
                ADVANCE(403);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(404);
            LEX_ERROR();
        case 425:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(425);
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
                ADVANCE(403);
            LEX_ERROR();
        case 426:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(426);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 427:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(427);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(22);
            LEX_ERROR();
        case 428:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(428);
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
                ADVANCE(247);
            LEX_ERROR();
        case 429:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(429);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(430);
            LEX_ERROR();
        case 430:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 431:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(431);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(432);
            LEX_ERROR();
        case 432:
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 433:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(433);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(247);
            LEX_ERROR();
        case 434:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(434);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 435:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(435);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '{')
                ADVANCE(247);
            LEX_ERROR();
        case 436:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(436);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(250);
            if (lookahead == 'c')
                ADVANCE(258);
            if (lookahead == 'i')
                ADVANCE(263);
            if (lookahead == 'n')
                ADVANCE(271);
            if (lookahead == 'p')
                ADVANCE(282);
            if (lookahead == 's')
                ADVANCE(301);
            if (lookahead == 'u')
                ADVANCE(338);
            if (lookahead == '}')
                ADVANCE(248);
            LEX_ERROR();
        case 437:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(437);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(250);
            if (lookahead == 'c')
                ADVANCE(258);
            if (lookahead == 'i')
                ADVANCE(263);
            if (lookahead == 'n')
                ADVANCE(271);
            if (lookahead == 'p')
                ADVANCE(282);
            if (lookahead == 's')
                ADVANCE(301);
            if (lookahead == 'u')
                ADVANCE(338);
            if (lookahead == '}')
                ADVANCE(248);
            LEX_ERROR();
        case 438:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(438);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 439:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(439);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 440:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(440);
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
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(343);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'n')
                ADVANCE(372);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(441);
            if (lookahead == 'v')
                ADVANCE(239);
            if (lookahead == '}')
                ADVANCE(248);
            LEX_ERROR();
        case 441:
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
                ADVANCE(219);
            if (lookahead == 'l')
                ADVANCE(349);
            if (lookahead == 'n')
                ADVANCE(226);
            if (lookahead == 's')
                ADVANCE(231);
            ACCEPT_TOKEN(sym_identifier_name);
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
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(343);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'n')
                ADVANCE(372);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(348);
            if (lookahead == 'v')
                ADVANCE(239);
            if (lookahead == '}')
                ADVANCE(248);
            LEX_ERROR();
        case 443:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(443);
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
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(343);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'n')
                ADVANCE(372);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(348);
            if (lookahead == 'v')
                ADVANCE(239);
            LEX_ERROR();
        case 444:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(444);
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
                ADVANCE(445);
            if (lookahead == 'g')
                ADVANCE(117);
            if (lookahead == 'n')
                ADVANCE(446);
            if (lookahead == 't')
                ADVANCE(214);
            LEX_ERROR();
        case 445:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 446:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier_name);
        case 447:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(399);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(400);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(401);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == ',') ||
                (lookahead == '/') ||
                (lookahead == ';') ||
                (lookahead == '\\')))
                ADVANCE(399);
            LEX_ERROR();
        case 448:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(448);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 449:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(411);
            if (lookahead == '\n')
                SKIP(449);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(412);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(34);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == ',') ||
                (lookahead == '/') ||
                (lookahead == ';') ||
                (lookahead == '\\')))
                ADVANCE(411);
            LEX_ERROR();
        case 450:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(450);
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
                ADVANCE(343);
            if (lookahead == 'b')
                ADVANCE(81);
            if (lookahead == 'c')
                ADVANCE(88);
            if (lookahead == 'd')
                ADVANCE(344);
            if (lookahead == 'f')
                ADVANCE(345);
            if (lookahead == 'g')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(123);
            if (lookahead == 'l')
                ADVANCE(346);
            if (lookahead == 'n')
                ADVANCE(347);
            if (lookahead == 'o')
                ADVANCE(155);
            if (lookahead == 'p')
                ADVANCE(161);
            if (lookahead == 'r')
                ADVANCE(180);
            if (lookahead == 's')
                ADVANCE(374);
            if (lookahead == 'u')
                ADVANCE(348);
            if (lookahead == 'v')
                ADVANCE(239);
            LEX_ERROR();
        case 451:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(451);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
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
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == ']')
                ADVANCE(65);
            if (lookahead == '{')
                ADVANCE(247);
            LEX_ERROR();
        case 452:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(452);
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
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 249,
    [2] = 326,
    [3] = 329,
    [4] = 330,
    [5] = 330,
    [6] = 331,
    [7] = 334,
    [8] = 339,
    [9] = 340,
    [10] = 249,
    [11] = 341,
    [12] = 339,
    [13] = 342,
    [14] = 351,
    [15] = 351,
    [16] = 352,
    [17] = 352,
    [18] = 249,
    [19] = 341,
    [20] = 342,
    [21] = 330,
    [22] = 342,
    [23] = 355,
    [24] = 356,
    [25] = 357,
    [26] = 330,
    [27] = 357,
    [28] = 330,
    [29] = 357,
    [30] = 357,
    [31] = 342,
    [32] = 358,
    [33] = 357,
    [34] = 357,
    [35] = 341,
    [36] = 249,
    [37] = 341,
    [38] = 330,
    [39] = 359,
    [40] = 360,
    [41] = 361,
    [42] = 370,
    [43] = 360,
    [44] = 371,
    [45] = 373,
    [46] = 376,
    [47] = 377,
    [48] = 379,
    [49] = 380,
    [50] = 360,
    [51] = 376,
    [52] = 381,
    [53] = 330,
    [54] = 379,
    [55] = 361,
    [56] = 361,
    [57] = 360,
    [58] = 371,
    [59] = 360,
    [60] = 381,
    [61] = 360,
    [62] = 371,
    [63] = 360,
    [64] = 330,
    [65] = 359,
    [66] = 360,
    [67] = 370,
    [68] = 360,
    [69] = 371,
    [70] = 360,
    [71] = 371,
    [72] = 371,
    [73] = 360,
    [74] = 382,
    [75] = 383,
    [76] = 330,
    [77] = 383,
    [78] = 330,
    [79] = 383,
    [80] = 383,
    [81] = 384,
    [82] = 383,
    [83] = 383,
    [84] = 398,
    [85] = 402,
    [86] = 408,
    [87] = 383,
    [88] = 409,
    [89] = 410,
    [90] = 413,
    [91] = 383,
    [92] = 383,
    [93] = 422,
    [94] = 383,
    [95] = 410,
    [96] = 423,
    [97] = 423,
    [98] = 383,
    [99] = 410,
    [100] = 410,
    [101] = 383,
    [102] = 410,
    [103] = 424,
    [104] = 383,
    [105] = 425,
    [106] = 383,
    [107] = 383,
    [108] = 409,
    [109] = 383,
    [110] = 425,
    [111] = 424,
    [112] = 425,
    [113] = 383,
    [114] = 426,
    [115] = 426,
    [116] = 426,
    [117] = 383,
    [118] = 360,
    [119] = 351,
    [120] = 352,
    [121] = 361,
    [122] = 381,
    [123] = 360,
    [124] = 330,
    [125] = 359,
    [126] = 370,
    [127] = 360,
    [128] = 360,
    [129] = 371,
    [130] = 330,
    [131] = 359,
    [132] = 370,
    [133] = 360,
    [134] = 360,
    [135] = 371,
    [136] = 379,
    [137] = 427,
    [138] = 427,
    [139] = 361,
    [140] = 428,
    [141] = 427,
    [142] = 361,
    [143] = 428,
    [144] = 427,
    [145] = 427,
    [146] = 361,
    [147] = 351,
    [148] = 352,
    [149] = 359,
    [150] = 360,
    [151] = 370,
    [152] = 371,
    [153] = 360,
    [154] = 359,
    [155] = 360,
    [156] = 370,
    [157] = 371,
    [158] = 360,
    [159] = 429,
    [160] = 330,
    [161] = 356,
    [162] = 341,
    [163] = 330,
    [164] = 431,
    [165] = 433,
    [166] = 434,
    [167] = 330,
    [168] = 435,
    [169] = 436,
    [170] = 437,
    [171] = 436,
    [172] = 436,
    [173] = 437,
    [174] = 436,
    [175] = 330,
    [176] = 434,
    [177] = 329,
    [178] = 438,
    [179] = 439,
    [180] = 329,
    [181] = 439,
    [182] = 249,
    [183] = 249,
    [184] = 329,
    [185] = 440,
    [186] = 442,
    [187] = 371,
    [188] = 330,
    [189] = 330,
    [190] = 443,
    [191] = 361,
    [192] = 444,
    [193] = 447,
    [194] = 423,
    [195] = 402,
    [196] = 448,
    [197] = 383,
    [198] = 425,
    [199] = 449,
    [200] = 450,
    [201] = 428,
    [202] = 451,
    [203] = 249,
    [204] = 437,
    [205] = 371,
    [206] = 341,
    [207] = 342,
    [208] = 356,
    [209] = 357,
    [210] = 360,
    [211] = 381,
    [212] = 379,
    [213] = 383,
    [214] = 410,
    [215] = 351,
    [216] = 351,
    [217] = 352,
    [218] = 352,
    [219] = 361,
    [220] = 361,
    [221] = 428,
    [222] = 427,
    [223] = 435,
    [224] = 341,
    [225] = 360,
    [226] = 371,
    [227] = 249,
    [228] = 360,
    [229] = 371,
    [230] = 360,
    [231] = 371,
    [232] = 381,
    [233] = 360,
    [234] = 330,
    [235] = 359,
    [236] = 360,
    [237] = 370,
    [238] = 360,
    [239] = 371,
    [240] = 360,
    [241] = 371,
    [242] = 371,
    [243] = 360,
    [244] = 330,
    [245] = 359,
    [246] = 360,
    [247] = 370,
    [248] = 360,
    [249] = 371,
    [250] = 360,
    [251] = 371,
    [252] = 371,
    [253] = 360,
    [254] = 360,
    [255] = 442,
    [256] = 371,
    [257] = 442,
    [258] = 360,
    [259] = 383,
    [260] = 424,
    [261] = 383,
    [262] = 425,
    [263] = 383,
    [264] = 383,
    [265] = 452,
    [266] = 357,
    [267] = 383,
    [268] = 427,
    [269] = 359,
    [270] = 360,
    [271] = 370,
    [272] = 360,
    [273] = 371,
    [274] = 360,
    [275] = 371,
    [276] = 371,
    [277] = 360,
    [278] = 359,
    [279] = 360,
    [280] = 370,
    [281] = 360,
    [282] = 371,
    [283] = 360,
    [284] = 371,
    [285] = 371,
    [286] = 360,
    [287] = 371,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(9),
        [sym_using_directive] = STATE(203),
        [sym_namespace_declaration] = STATE(204),
        [sym_class_declaration] = STATE(205),
        [sym_struct_declaration] = STATE(205),
        [sym__global_attributes] = STATE(206),
        [sym__global_attribute_target_specifier] = STATE(160),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(207),
        [sym_attribute_list] = STATE(208),
        [sym_attribute] = STATE(209),
        [sym_attribute_argument_list] = STATE(33),
        [sym_field_declaration] = STATE(210),
        [sym_variable_declaration] = STATE(211),
        [sym__type] = STATE(212),
        [sym_generic_name] = STATE(54),
        [sym_variable_declarator] = STATE(213),
        [sym_equals_value_clause] = STATE(82),
        [sym__literal] = STATE(91),
        [sym_boolean_literal] = STATE(87),
        [sym_character_literal] = STATE(87),
        [sym__unicode_escape_sequence] = STATE(194),
        [sym__simple_escape_sequence] = STATE(194),
        [sym_integer_literal] = STATE(87),
        [sym_real_literal] = STATE(87),
        [sym_string_literal] = STATE(87),
        [sym__regular_string_literal] = STATE(92),
        [sym__regular_string_literal_character] = STATE(214),
        [sym__verbatim_string_literal] = STATE(92),
        [sym_class_modifiers] = STATE(215),
        [sym__class_modifiers] = STATE(216),
        [sym_struct_modifiers] = STATE(217),
        [sym__struct_modifiers] = STATE(218),
        [sym_field_modifiers] = STATE(219),
        [sym__field_modifiers] = STATE(220),
        [sym_predefined_type] = STATE(54),
        [sym_type_parameter_list] = STATE(221),
        [sym_type_parameter] = STATE(222),
        [sym_qualified_name] = STATE(223),
        [sym_alias_qualified_name] = STATE(166),
        [sym_name_equals] = STATE(180),
        [sym_static] = STATE(180),
        [aux_sym_compilation_unit_repeat1] = STATE(18),
        [aux_sym_compilation_unit_repeat2] = STATE(224),
        [aux_sym_namespace_declaration_repeat1] = STATE(172),
        [aux_sym_class_declaration_repeat1] = STATE(225),
        [aux_sym__attributes_repeat1] = STATE(20),
        [aux_sym_attribute_list_repeat1] = STATE(27),
        [aux_sym_variable_declaration_repeat1] = STATE(77),
        [aux_sym__regular_string_literal_repeat1] = STATE(100),
        [aux_sym_type_parameter_list_repeat1] = STATE(141),
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
        [anon_sym_COMMA] = ACTIONS(25),
        [anon_sym_LPAREN] = ACTIONS(27),
        [anon_sym_RPAREN] = ACTIONS(29),
        [anon_sym_EQ] = ACTIONS(31),
        [anon_sym_true] = ACTIONS(33),
        [anon_sym_false] = ACTIONS(33),
        [anon_sym_SQUOTE] = ACTIONS(35),
        [sym__hexadecimal_escape_sequence] = ACTIONS(37),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(39),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(39),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(41),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(41),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(41),
        [anon_sym_BSLASH0] = ACTIONS(41),
        [anon_sym_BSLASHa] = ACTIONS(41),
        [anon_sym_BSLASHb] = ACTIONS(41),
        [anon_sym_BSLASHf] = ACTIONS(41),
        [anon_sym_BSLASHn] = ACTIONS(41),
        [anon_sym_BSLASHr] = ACTIONS(41),
        [anon_sym_BSLASHt] = ACTIONS(41),
        [anon_sym_BSLASHv] = ACTIONS(41),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(43),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(45),
        [sym__integer_type_suffix] = ACTIONS(47),
        [sym_null_literal] = ACTIONS(49),
        [anon_sym_DOT] = ACTIONS(51),
        [sym__real_type_suffix] = ACTIONS(53),
        [sym__exponent_part] = ACTIONS(55),
        [anon_sym_DQUOTE] = ACTIONS(57),
        [anon_sym_AT_DQUOTE] = ACTIONS(59),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(63),
        [anon_sym_new] = ACTIONS(65),
        [anon_sym_public] = ACTIONS(65),
        [anon_sym_protected] = ACTIONS(65),
        [anon_sym_internal] = ACTIONS(65),
        [anon_sym_private] = ACTIONS(65),
        [anon_sym_unsafe] = ACTIONS(65),
        [anon_sym_readonly] = ACTIONS(67),
        [anon_sym_volatile] = ACTIONS(67),
        [anon_sym_bool] = ACTIONS(69),
        [anon_sym_byte] = ACTIONS(69),
        [anon_sym_char] = ACTIONS(69),
        [anon_sym_decimal] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_int] = ACTIONS(69),
        [anon_sym_long] = ACTIONS(69),
        [anon_sym_object] = ACTIONS(69),
        [anon_sym_sbyte] = ACTIONS(69),
        [anon_sym_short] = ACTIONS(69),
        [anon_sym_string] = ACTIONS(69),
        [anon_sym_uint] = ACTIONS(69),
        [anon_sym_ulong] = ACTIONS(69),
        [anon_sym_ushort] = ACTIONS(69),
        [anon_sym_LT] = ACTIONS(71),
        [anon_sym_GT] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(75),
        [sym_global] = ACTIONS(77),
        [sym_identifier_name] = ACTIONS(79),
        [sym_comment] = ACTIONS(81),
    },
    [1] = {
        [sym_compilation_unit] = STATE(9),
        [sym_using_directive] = STATE(10),
        [sym_namespace_declaration] = STATE(11),
        [sym_class_declaration] = STATE(11),
        [sym_struct_declaration] = STATE(11),
        [sym__global_attributes] = STATE(11),
        [sym__attributes] = STATE(12),
        [sym__attribute_section] = STATE(13),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [aux_sym_compilation_unit_repeat1] = STATE(18),
        [aux_sym_compilation_unit_repeat2] = STATE(19),
        [aux_sym__attributes_repeat1] = STATE(20),
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_using] = ACTIONS(85),
        [anon_sym_namespace] = ACTIONS(87),
        [anon_sym_class] = ACTIONS(89),
        [anon_sym_struct] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(93),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_unsafe] = ACTIONS(97),
        [sym_comment] = ACTIONS(81),
    },
    [2] = {
        [sym_qualified_name] = STATE(179),
        [sym_alias_qualified_name] = STATE(166),
        [sym_name_equals] = STATE(180),
        [sym_static] = STATE(180),
        [anon_sym_static] = ACTIONS(99),
        [sym_global] = ACTIONS(101),
        [sym_identifier_name] = ACTIONS(103),
        [sym_comment] = ACTIONS(81),
    },
    [3] = {
        [sym_qualified_name] = STATE(165),
        [sym_alias_qualified_name] = STATE(166),
        [sym_global] = ACTIONS(101),
        [sym_identifier_name] = ACTIONS(105),
        [sym_comment] = ACTIONS(81),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(107),
        [sym_comment] = ACTIONS(81),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(109),
        [sym_comment] = ACTIONS(81),
    },
    [6] = {
        [sym__global_attribute_target_specifier] = STATE(160),
        [sym_attribute_list] = STATE(24),
        [sym_attribute] = STATE(25),
        [anon_sym_assembly] = ACTIONS(111),
        [anon_sym_module] = ACTIONS(111),
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(81),
    },
    [7] = {
        [sym__class_modifiers] = STATE(147),
        [anon_sym_class] = ACTIONS(115),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(95),
        [anon_sym_protected] = ACTIONS(95),
        [anon_sym_internal] = ACTIONS(95),
        [anon_sym_private] = ACTIONS(95),
        [anon_sym_unsafe] = ACTIONS(95),
        [sym_comment] = ACTIONS(81),
    },
    [8] = {
        [sym__class_modifiers] = STATE(147),
        [sym__struct_modifiers] = STATE(148),
        [anon_sym_class] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_unsafe] = ACTIONS(97),
        [sym_comment] = ACTIONS(81),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(119),
        [sym_comment] = ACTIONS(81),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_using] = ACTIONS(121),
        [anon_sym_namespace] = ACTIONS(121),
        [anon_sym_class] = ACTIONS(121),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_abstract] = ACTIONS(121),
        [anon_sym_sealed] = ACTIONS(121),
        [anon_sym_static] = ACTIONS(121),
        [anon_sym_new] = ACTIONS(121),
        [anon_sym_public] = ACTIONS(121),
        [anon_sym_protected] = ACTIONS(121),
        [anon_sym_internal] = ACTIONS(121),
        [anon_sym_private] = ACTIONS(121),
        [anon_sym_unsafe] = ACTIONS(121),
        [sym_comment] = ACTIONS(81),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_namespace] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(123),
        [anon_sym_struct] = ACTIONS(123),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_abstract] = ACTIONS(123),
        [anon_sym_sealed] = ACTIONS(123),
        [anon_sym_static] = ACTIONS(123),
        [anon_sym_new] = ACTIONS(123),
        [anon_sym_public] = ACTIONS(123),
        [anon_sym_protected] = ACTIONS(123),
        [anon_sym_internal] = ACTIONS(123),
        [anon_sym_private] = ACTIONS(123),
        [anon_sym_unsafe] = ACTIONS(123),
        [sym_comment] = ACTIONS(81),
    },
    [12] = {
        [sym_class_modifiers] = STATE(119),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(120),
        [sym__struct_modifiers] = STATE(17),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_unsafe] = ACTIONS(97),
        [sym_comment] = ACTIONS(81),
    },
    [13] = {
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_struct] = ACTIONS(129),
        [anon_sym_LBRACK] = ACTIONS(131),
        [anon_sym_abstract] = ACTIONS(129),
        [anon_sym_sealed] = ACTIONS(129),
        [anon_sym_static] = ACTIONS(129),
        [anon_sym_new] = ACTIONS(129),
        [anon_sym_public] = ACTIONS(129),
        [anon_sym_protected] = ACTIONS(129),
        [anon_sym_internal] = ACTIONS(129),
        [anon_sym_private] = ACTIONS(129),
        [anon_sym_unsafe] = ACTIONS(129),
        [anon_sym_readonly] = ACTIONS(129),
        [anon_sym_volatile] = ACTIONS(129),
        [anon_sym_bool] = ACTIONS(129),
        [anon_sym_byte] = ACTIONS(129),
        [anon_sym_char] = ACTIONS(129),
        [anon_sym_decimal] = ACTIONS(129),
        [anon_sym_double] = ACTIONS(129),
        [anon_sym_float] = ACTIONS(129),
        [anon_sym_int] = ACTIONS(129),
        [anon_sym_long] = ACTIONS(129),
        [anon_sym_object] = ACTIONS(129),
        [anon_sym_sbyte] = ACTIONS(129),
        [anon_sym_short] = ACTIONS(129),
        [anon_sym_string] = ACTIONS(129),
        [anon_sym_uint] = ACTIONS(129),
        [anon_sym_ulong] = ACTIONS(129),
        [anon_sym_ushort] = ACTIONS(129),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(81),
    },
    [14] = {
        [anon_sym_class] = ACTIONS(125),
        [sym_comment] = ACTIONS(81),
    },
    [15] = {
        [anon_sym_class] = ACTIONS(135),
        [sym_comment] = ACTIONS(81),
    },
    [16] = {
        [anon_sym_struct] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [17] = {
        [anon_sym_struct] = ACTIONS(137),
        [sym_comment] = ACTIONS(81),
    },
    [18] = {
        [sym_using_directive] = STATE(36),
        [sym_namespace_declaration] = STATE(11),
        [sym_class_declaration] = STATE(11),
        [sym_struct_declaration] = STATE(11),
        [sym__global_attributes] = STATE(11),
        [sym__attributes] = STATE(12),
        [sym__attribute_section] = STATE(13),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [aux_sym_compilation_unit_repeat2] = STATE(37),
        [aux_sym__attributes_repeat1] = STATE(20),
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_using] = ACTIONS(85),
        [anon_sym_namespace] = ACTIONS(87),
        [anon_sym_class] = ACTIONS(89),
        [anon_sym_struct] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(93),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_unsafe] = ACTIONS(97),
        [sym_comment] = ACTIONS(81),
    },
    [19] = {
        [sym_namespace_declaration] = STATE(35),
        [sym_class_declaration] = STATE(35),
        [sym_struct_declaration] = STATE(35),
        [sym__global_attributes] = STATE(35),
        [sym__attributes] = STATE(12),
        [sym__attribute_section] = STATE(13),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [aux_sym__attributes_repeat1] = STATE(20),
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_namespace] = ACTIONS(87),
        [anon_sym_class] = ACTIONS(89),
        [anon_sym_struct] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(93),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_unsafe] = ACTIONS(97),
        [sym_comment] = ACTIONS(81),
    },
    [20] = {
        [sym__attribute_section] = STATE(22),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(141),
        [anon_sym_sealed] = ACTIONS(141),
        [anon_sym_static] = ACTIONS(141),
        [anon_sym_new] = ACTIONS(141),
        [anon_sym_public] = ACTIONS(141),
        [anon_sym_protected] = ACTIONS(141),
        [anon_sym_internal] = ACTIONS(141),
        [anon_sym_private] = ACTIONS(141),
        [anon_sym_unsafe] = ACTIONS(141),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(141),
        [anon_sym_byte] = ACTIONS(141),
        [anon_sym_char] = ACTIONS(141),
        [anon_sym_decimal] = ACTIONS(141),
        [anon_sym_double] = ACTIONS(141),
        [anon_sym_float] = ACTIONS(141),
        [anon_sym_int] = ACTIONS(141),
        [anon_sym_long] = ACTIONS(141),
        [anon_sym_object] = ACTIONS(141),
        [anon_sym_sbyte] = ACTIONS(141),
        [anon_sym_short] = ACTIONS(141),
        [anon_sym_string] = ACTIONS(141),
        [anon_sym_uint] = ACTIONS(141),
        [anon_sym_ulong] = ACTIONS(141),
        [anon_sym_ushort] = ACTIONS(141),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(81),
    },
    [21] = {
        [sym_attribute_list] = STATE(24),
        [sym_attribute] = STATE(25),
        [sym_identifier_name] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [22] = {
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(149),
        [anon_sym_sealed] = ACTIONS(149),
        [anon_sym_static] = ACTIONS(149),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(149),
        [anon_sym_volatile] = ACTIONS(149),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(81),
    },
    [23] = {
        [sym_attribute_argument_list] = STATE(33),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_COMMA] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(157),
        [sym_comment] = ACTIONS(81),
    },
    [24] = {
        [anon_sym_RBRACK] = ACTIONS(159),
        [sym_comment] = ACTIONS(81),
    },
    [25] = {
        [aux_sym_attribute_list_repeat1] = STATE(27),
        [anon_sym_RBRACK] = ACTIONS(161),
        [anon_sym_COMMA] = ACTIONS(163),
        [sym_comment] = ACTIONS(81),
    },
    [26] = {
        [sym_attribute] = STATE(30),
        [sym_identifier_name] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [27] = {
        [anon_sym_RBRACK] = ACTIONS(165),
        [anon_sym_COMMA] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
    },
    [28] = {
        [sym_attribute] = STATE(29),
        [sym_identifier_name] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [29] = {
        [anon_sym_RBRACK] = ACTIONS(169),
        [anon_sym_COMMA] = ACTIONS(169),
        [sym_comment] = ACTIONS(81),
    },
    [30] = {
        [anon_sym_RBRACK] = ACTIONS(171),
        [anon_sym_COMMA] = ACTIONS(171),
        [sym_comment] = ACTIONS(81),
    },
    [31] = {
        [anon_sym_class] = ACTIONS(173),
        [anon_sym_struct] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(173),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(173),
        [anon_sym_volatile] = ACTIONS(173),
        [anon_sym_bool] = ACTIONS(173),
        [anon_sym_byte] = ACTIONS(173),
        [anon_sym_char] = ACTIONS(173),
        [anon_sym_decimal] = ACTIONS(173),
        [anon_sym_double] = ACTIONS(173),
        [anon_sym_float] = ACTIONS(173),
        [anon_sym_int] = ACTIONS(173),
        [anon_sym_long] = ACTIONS(173),
        [anon_sym_object] = ACTIONS(173),
        [anon_sym_sbyte] = ACTIONS(173),
        [anon_sym_short] = ACTIONS(173),
        [anon_sym_string] = ACTIONS(173),
        [anon_sym_uint] = ACTIONS(173),
        [anon_sym_ulong] = ACTIONS(173),
        [anon_sym_ushort] = ACTIONS(173),
        [sym_identifier_name] = ACTIONS(177),
        [sym_comment] = ACTIONS(81),
    },
    [32] = {
        [anon_sym_RPAREN] = ACTIONS(179),
        [sym_comment] = ACTIONS(81),
    },
    [33] = {
        [anon_sym_RBRACK] = ACTIONS(181),
        [anon_sym_COMMA] = ACTIONS(181),
        [sym_comment] = ACTIONS(81),
    },
    [34] = {
        [anon_sym_RBRACK] = ACTIONS(183),
        [anon_sym_COMMA] = ACTIONS(183),
        [sym_comment] = ACTIONS(81),
    },
    [35] = {
        [ts_builtin_sym_end] = ACTIONS(185),
        [anon_sym_namespace] = ACTIONS(185),
        [anon_sym_class] = ACTIONS(185),
        [anon_sym_struct] = ACTIONS(185),
        [anon_sym_LBRACK] = ACTIONS(185),
        [anon_sym_abstract] = ACTIONS(185),
        [anon_sym_sealed] = ACTIONS(185),
        [anon_sym_static] = ACTIONS(185),
        [anon_sym_new] = ACTIONS(185),
        [anon_sym_public] = ACTIONS(185),
        [anon_sym_protected] = ACTIONS(185),
        [anon_sym_internal] = ACTIONS(185),
        [anon_sym_private] = ACTIONS(185),
        [anon_sym_unsafe] = ACTIONS(185),
        [sym_comment] = ACTIONS(81),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_using] = ACTIONS(187),
        [anon_sym_namespace] = ACTIONS(187),
        [anon_sym_class] = ACTIONS(187),
        [anon_sym_struct] = ACTIONS(187),
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_abstract] = ACTIONS(187),
        [anon_sym_sealed] = ACTIONS(187),
        [anon_sym_static] = ACTIONS(187),
        [anon_sym_new] = ACTIONS(187),
        [anon_sym_public] = ACTIONS(187),
        [anon_sym_protected] = ACTIONS(187),
        [anon_sym_internal] = ACTIONS(187),
        [anon_sym_private] = ACTIONS(187),
        [anon_sym_unsafe] = ACTIONS(187),
        [sym_comment] = ACTIONS(81),
    },
    [37] = {
        [sym_namespace_declaration] = STATE(35),
        [sym_class_declaration] = STATE(35),
        [sym_struct_declaration] = STATE(35),
        [sym__global_attributes] = STATE(35),
        [sym__attributes] = STATE(12),
        [sym__attribute_section] = STATE(13),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [aux_sym__attributes_repeat1] = STATE(20),
        [ts_builtin_sym_end] = ACTIONS(189),
        [anon_sym_namespace] = ACTIONS(87),
        [anon_sym_class] = ACTIONS(89),
        [anon_sym_struct] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(93),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_unsafe] = ACTIONS(97),
        [sym_comment] = ACTIONS(81),
    },
    [38] = {
        [sym_identifier_name] = ACTIONS(191),
        [sym_comment] = ACTIONS(81),
    },
    [39] = {
        [sym_type_parameter_list] = STATE(42),
        [anon_sym_LBRACE] = ACTIONS(193),
        [anon_sym_LT] = ACTIONS(195),
        [sym_comment] = ACTIONS(81),
    },
    [40] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(63),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(197),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [41] = {
        [sym__type] = STATE(137),
        [sym_generic_name] = STATE(54),
        [sym_predefined_type] = STATE(54),
        [sym_type_parameter] = STATE(138),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [42] = {
        [anon_sym_LBRACE] = ACTIONS(215),
        [sym_comment] = ACTIONS(81),
    },
    [43] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(57),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [44] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_namespace] = ACTIONS(221),
        [anon_sym_RBRACE] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(219),
        [anon_sym_abstract] = ACTIONS(221),
        [anon_sym_sealed] = ACTIONS(221),
        [anon_sym_static] = ACTIONS(221),
        [anon_sym_new] = ACTIONS(221),
        [anon_sym_public] = ACTIONS(221),
        [anon_sym_protected] = ACTIONS(221),
        [anon_sym_internal] = ACTIONS(221),
        [anon_sym_private] = ACTIONS(221),
        [anon_sym_unsafe] = ACTIONS(221),
        [anon_sym_readonly] = ACTIONS(221),
        [anon_sym_volatile] = ACTIONS(221),
        [anon_sym_bool] = ACTIONS(221),
        [anon_sym_byte] = ACTIONS(221),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_decimal] = ACTIONS(221),
        [anon_sym_double] = ACTIONS(221),
        [anon_sym_float] = ACTIONS(221),
        [anon_sym_int] = ACTIONS(221),
        [anon_sym_long] = ACTIONS(221),
        [anon_sym_object] = ACTIONS(221),
        [anon_sym_sbyte] = ACTIONS(221),
        [anon_sym_short] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(221),
        [anon_sym_uint] = ACTIONS(221),
        [anon_sym_ulong] = ACTIONS(221),
        [anon_sym_ushort] = ACTIONS(221),
        [sym_identifier_name] = ACTIONS(223),
        [sym_comment] = ACTIONS(81),
    },
    [45] = {
        [sym__class_modifiers] = STATE(147),
        [sym__field_modifiers] = STATE(146),
        [anon_sym_class] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(205),
        [anon_sym_public] = ACTIONS(205),
        [anon_sym_protected] = ACTIONS(205),
        [anon_sym_internal] = ACTIONS(205),
        [anon_sym_private] = ACTIONS(205),
        [anon_sym_unsafe] = ACTIONS(205),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(227),
        [anon_sym_byte] = ACTIONS(227),
        [anon_sym_char] = ACTIONS(227),
        [anon_sym_decimal] = ACTIONS(227),
        [anon_sym_double] = ACTIONS(227),
        [anon_sym_float] = ACTIONS(227),
        [anon_sym_int] = ACTIONS(227),
        [anon_sym_long] = ACTIONS(227),
        [anon_sym_object] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(227),
        [anon_sym_short] = ACTIONS(227),
        [anon_sym_string] = ACTIONS(227),
        [anon_sym_uint] = ACTIONS(227),
        [anon_sym_ulong] = ACTIONS(227),
        [anon_sym_ushort] = ACTIONS(227),
        [sym_identifier_name] = ACTIONS(229),
        [sym_comment] = ACTIONS(81),
    },
    [46] = {
        [sym__class_modifiers] = STATE(147),
        [sym__struct_modifiers] = STATE(148),
        [sym__field_modifiers] = STATE(146),
        [anon_sym_class] = ACTIONS(225),
        [anon_sym_struct] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(227),
        [anon_sym_byte] = ACTIONS(227),
        [anon_sym_char] = ACTIONS(227),
        [anon_sym_decimal] = ACTIONS(227),
        [anon_sym_double] = ACTIONS(227),
        [anon_sym_float] = ACTIONS(227),
        [anon_sym_int] = ACTIONS(227),
        [anon_sym_long] = ACTIONS(227),
        [anon_sym_object] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(227),
        [anon_sym_short] = ACTIONS(227),
        [anon_sym_string] = ACTIONS(227),
        [anon_sym_uint] = ACTIONS(227),
        [anon_sym_ulong] = ACTIONS(227),
        [anon_sym_ushort] = ACTIONS(227),
        [sym_identifier_name] = ACTIONS(229),
        [sym_comment] = ACTIONS(81),
    },
    [47] = {
        [sym__field_modifiers] = STATE(146),
        [anon_sym_static] = ACTIONS(209),
        [anon_sym_new] = ACTIONS(209),
        [anon_sym_public] = ACTIONS(209),
        [anon_sym_protected] = ACTIONS(209),
        [anon_sym_internal] = ACTIONS(209),
        [anon_sym_private] = ACTIONS(209),
        [anon_sym_unsafe] = ACTIONS(209),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(227),
        [anon_sym_byte] = ACTIONS(227),
        [anon_sym_char] = ACTIONS(227),
        [anon_sym_decimal] = ACTIONS(227),
        [anon_sym_double] = ACTIONS(227),
        [anon_sym_float] = ACTIONS(227),
        [anon_sym_int] = ACTIONS(227),
        [anon_sym_long] = ACTIONS(227),
        [anon_sym_object] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(227),
        [anon_sym_short] = ACTIONS(227),
        [anon_sym_string] = ACTIONS(227),
        [anon_sym_uint] = ACTIONS(227),
        [anon_sym_ulong] = ACTIONS(227),
        [anon_sym_ushort] = ACTIONS(227),
        [sym_identifier_name] = ACTIONS(229),
        [sym_comment] = ACTIONS(81),
    },
    [48] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_GT] = ACTIONS(233),
        [sym_identifier_name] = ACTIONS(235),
        [sym_comment] = ACTIONS(81),
    },
    [49] = {
        [sym_type_parameter_list] = STATE(136),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_LT] = ACTIONS(195),
        [anon_sym_GT] = ACTIONS(237),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(81),
    },
    [50] = {
        [anon_sym_RBRACE] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(243),
        [anon_sym_struct] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_abstract] = ACTIONS(243),
        [anon_sym_sealed] = ACTIONS(243),
        [anon_sym_static] = ACTIONS(243),
        [anon_sym_new] = ACTIONS(243),
        [anon_sym_public] = ACTIONS(243),
        [anon_sym_protected] = ACTIONS(243),
        [anon_sym_internal] = ACTIONS(243),
        [anon_sym_private] = ACTIONS(243),
        [anon_sym_unsafe] = ACTIONS(243),
        [anon_sym_readonly] = ACTIONS(243),
        [anon_sym_volatile] = ACTIONS(243),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [51] = {
        [sym_variable_declaration] = STATE(60),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(119),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(120),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(121),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [anon_sym_class] = ACTIONS(247),
        [anon_sym_struct] = ACTIONS(249),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [52] = {
        [anon_sym_SEMI] = ACTIONS(251),
        [sym_comment] = ACTIONS(81),
    },
    [53] = {
        [sym_variable_declarator] = STATE(75),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(81),
    },
    [54] = {
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_GT] = ACTIONS(237),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(81),
    },
    [55] = {
        [sym_variable_declaration] = STATE(60),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_predefined_type] = STATE(54),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [56] = {
        [anon_sym_bool] = ACTIONS(255),
        [anon_sym_byte] = ACTIONS(255),
        [anon_sym_char] = ACTIONS(255),
        [anon_sym_decimal] = ACTIONS(255),
        [anon_sym_double] = ACTIONS(255),
        [anon_sym_float] = ACTIONS(255),
        [anon_sym_int] = ACTIONS(255),
        [anon_sym_long] = ACTIONS(255),
        [anon_sym_object] = ACTIONS(255),
        [anon_sym_sbyte] = ACTIONS(255),
        [anon_sym_short] = ACTIONS(255),
        [anon_sym_string] = ACTIONS(255),
        [anon_sym_uint] = ACTIONS(255),
        [anon_sym_ulong] = ACTIONS(255),
        [anon_sym_ushort] = ACTIONS(255),
        [sym_identifier_name] = ACTIONS(257),
        [sym_comment] = ACTIONS(81),
    },
    [57] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(259),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [58] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_namespace] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(261),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_struct] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(261),
        [anon_sym_abstract] = ACTIONS(263),
        [anon_sym_sealed] = ACTIONS(263),
        [anon_sym_static] = ACTIONS(263),
        [anon_sym_new] = ACTIONS(263),
        [anon_sym_public] = ACTIONS(263),
        [anon_sym_protected] = ACTIONS(263),
        [anon_sym_internal] = ACTIONS(263),
        [anon_sym_private] = ACTIONS(263),
        [anon_sym_unsafe] = ACTIONS(263),
        [anon_sym_readonly] = ACTIONS(263),
        [anon_sym_volatile] = ACTIONS(263),
        [anon_sym_bool] = ACTIONS(263),
        [anon_sym_byte] = ACTIONS(263),
        [anon_sym_char] = ACTIONS(263),
        [anon_sym_decimal] = ACTIONS(263),
        [anon_sym_double] = ACTIONS(263),
        [anon_sym_float] = ACTIONS(263),
        [anon_sym_int] = ACTIONS(263),
        [anon_sym_long] = ACTIONS(263),
        [anon_sym_object] = ACTIONS(263),
        [anon_sym_sbyte] = ACTIONS(263),
        [anon_sym_short] = ACTIONS(263),
        [anon_sym_string] = ACTIONS(263),
        [anon_sym_uint] = ACTIONS(263),
        [anon_sym_ulong] = ACTIONS(263),
        [anon_sym_ushort] = ACTIONS(263),
        [sym_identifier_name] = ACTIONS(265),
        [sym_comment] = ACTIONS(81),
    },
    [59] = {
        [anon_sym_RBRACE] = ACTIONS(267),
        [anon_sym_class] = ACTIONS(269),
        [anon_sym_struct] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_abstract] = ACTIONS(269),
        [anon_sym_sealed] = ACTIONS(269),
        [anon_sym_static] = ACTIONS(269),
        [anon_sym_new] = ACTIONS(269),
        [anon_sym_public] = ACTIONS(269),
        [anon_sym_protected] = ACTIONS(269),
        [anon_sym_internal] = ACTIONS(269),
        [anon_sym_private] = ACTIONS(269),
        [anon_sym_unsafe] = ACTIONS(269),
        [anon_sym_readonly] = ACTIONS(269),
        [anon_sym_volatile] = ACTIONS(269),
        [anon_sym_bool] = ACTIONS(269),
        [anon_sym_byte] = ACTIONS(269),
        [anon_sym_char] = ACTIONS(269),
        [anon_sym_decimal] = ACTIONS(269),
        [anon_sym_double] = ACTIONS(269),
        [anon_sym_float] = ACTIONS(269),
        [anon_sym_int] = ACTIONS(269),
        [anon_sym_long] = ACTIONS(269),
        [anon_sym_object] = ACTIONS(269),
        [anon_sym_sbyte] = ACTIONS(269),
        [anon_sym_short] = ACTIONS(269),
        [anon_sym_string] = ACTIONS(269),
        [anon_sym_uint] = ACTIONS(269),
        [anon_sym_ulong] = ACTIONS(269),
        [anon_sym_ushort] = ACTIONS(269),
        [sym_identifier_name] = ACTIONS(271),
        [sym_comment] = ACTIONS(81),
    },
    [60] = {
        [anon_sym_SEMI] = ACTIONS(273),
        [sym_comment] = ACTIONS(81),
    },
    [61] = {
        [anon_sym_RBRACE] = ACTIONS(275),
        [anon_sym_class] = ACTIONS(277),
        [anon_sym_struct] = ACTIONS(277),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_abstract] = ACTIONS(277),
        [anon_sym_sealed] = ACTIONS(277),
        [anon_sym_static] = ACTIONS(277),
        [anon_sym_new] = ACTIONS(277),
        [anon_sym_public] = ACTIONS(277),
        [anon_sym_protected] = ACTIONS(277),
        [anon_sym_internal] = ACTIONS(277),
        [anon_sym_private] = ACTIONS(277),
        [anon_sym_unsafe] = ACTIONS(277),
        [anon_sym_readonly] = ACTIONS(277),
        [anon_sym_volatile] = ACTIONS(277),
        [anon_sym_bool] = ACTIONS(277),
        [anon_sym_byte] = ACTIONS(277),
        [anon_sym_char] = ACTIONS(277),
        [anon_sym_decimal] = ACTIONS(277),
        [anon_sym_double] = ACTIONS(277),
        [anon_sym_float] = ACTIONS(277),
        [anon_sym_int] = ACTIONS(277),
        [anon_sym_long] = ACTIONS(277),
        [anon_sym_object] = ACTIONS(277),
        [anon_sym_sbyte] = ACTIONS(277),
        [anon_sym_short] = ACTIONS(277),
        [anon_sym_string] = ACTIONS(277),
        [anon_sym_uint] = ACTIONS(277),
        [anon_sym_ulong] = ACTIONS(277),
        [anon_sym_ushort] = ACTIONS(277),
        [sym_identifier_name] = ACTIONS(279),
        [sym_comment] = ACTIONS(81),
    },
    [62] = {
        [ts_builtin_sym_end] = ACTIONS(281),
        [anon_sym_namespace] = ACTIONS(283),
        [anon_sym_RBRACE] = ACTIONS(281),
        [anon_sym_class] = ACTIONS(283),
        [anon_sym_struct] = ACTIONS(283),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_abstract] = ACTIONS(283),
        [anon_sym_sealed] = ACTIONS(283),
        [anon_sym_static] = ACTIONS(283),
        [anon_sym_new] = ACTIONS(283),
        [anon_sym_public] = ACTIONS(283),
        [anon_sym_protected] = ACTIONS(283),
        [anon_sym_internal] = ACTIONS(283),
        [anon_sym_private] = ACTIONS(283),
        [anon_sym_unsafe] = ACTIONS(283),
        [anon_sym_readonly] = ACTIONS(283),
        [anon_sym_volatile] = ACTIONS(283),
        [anon_sym_bool] = ACTIONS(283),
        [anon_sym_byte] = ACTIONS(283),
        [anon_sym_char] = ACTIONS(283),
        [anon_sym_decimal] = ACTIONS(283),
        [anon_sym_double] = ACTIONS(283),
        [anon_sym_float] = ACTIONS(283),
        [anon_sym_int] = ACTIONS(283),
        [anon_sym_long] = ACTIONS(283),
        [anon_sym_object] = ACTIONS(283),
        [anon_sym_sbyte] = ACTIONS(283),
        [anon_sym_short] = ACTIONS(283),
        [anon_sym_string] = ACTIONS(283),
        [anon_sym_uint] = ACTIONS(283),
        [anon_sym_ulong] = ACTIONS(283),
        [anon_sym_ushort] = ACTIONS(283),
        [sym_identifier_name] = ACTIONS(285),
        [sym_comment] = ACTIONS(81),
    },
    [63] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [64] = {
        [sym_identifier_name] = ACTIONS(287),
        [sym_comment] = ACTIONS(81),
    },
    [65] = {
        [sym_type_parameter_list] = STATE(67),
        [anon_sym_LBRACE] = ACTIONS(289),
        [anon_sym_LT] = ACTIONS(195),
        [sym_comment] = ACTIONS(81),
    },
    [66] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(73),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [67] = {
        [anon_sym_LBRACE] = ACTIONS(293),
        [sym_comment] = ACTIONS(81),
    },
    [68] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(70),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(295),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [69] = {
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_namespace] = ACTIONS(299),
        [anon_sym_RBRACE] = ACTIONS(297),
        [anon_sym_class] = ACTIONS(299),
        [anon_sym_struct] = ACTIONS(299),
        [anon_sym_LBRACK] = ACTIONS(297),
        [anon_sym_abstract] = ACTIONS(299),
        [anon_sym_sealed] = ACTIONS(299),
        [anon_sym_static] = ACTIONS(299),
        [anon_sym_new] = ACTIONS(299),
        [anon_sym_public] = ACTIONS(299),
        [anon_sym_protected] = ACTIONS(299),
        [anon_sym_internal] = ACTIONS(299),
        [anon_sym_private] = ACTIONS(299),
        [anon_sym_unsafe] = ACTIONS(299),
        [anon_sym_readonly] = ACTIONS(299),
        [anon_sym_volatile] = ACTIONS(299),
        [anon_sym_bool] = ACTIONS(299),
        [anon_sym_byte] = ACTIONS(299),
        [anon_sym_char] = ACTIONS(299),
        [anon_sym_decimal] = ACTIONS(299),
        [anon_sym_double] = ACTIONS(299),
        [anon_sym_float] = ACTIONS(299),
        [anon_sym_int] = ACTIONS(299),
        [anon_sym_long] = ACTIONS(299),
        [anon_sym_object] = ACTIONS(299),
        [anon_sym_sbyte] = ACTIONS(299),
        [anon_sym_short] = ACTIONS(299),
        [anon_sym_string] = ACTIONS(299),
        [anon_sym_uint] = ACTIONS(299),
        [anon_sym_ulong] = ACTIONS(299),
        [anon_sym_ushort] = ACTIONS(299),
        [sym_identifier_name] = ACTIONS(301),
        [sym_comment] = ACTIONS(81),
    },
    [70] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(303),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [71] = {
        [ts_builtin_sym_end] = ACTIONS(305),
        [anon_sym_namespace] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(305),
        [anon_sym_class] = ACTIONS(307),
        [anon_sym_struct] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(305),
        [anon_sym_abstract] = ACTIONS(307),
        [anon_sym_sealed] = ACTIONS(307),
        [anon_sym_static] = ACTIONS(307),
        [anon_sym_new] = ACTIONS(307),
        [anon_sym_public] = ACTIONS(307),
        [anon_sym_protected] = ACTIONS(307),
        [anon_sym_internal] = ACTIONS(307),
        [anon_sym_private] = ACTIONS(307),
        [anon_sym_unsafe] = ACTIONS(307),
        [anon_sym_readonly] = ACTIONS(307),
        [anon_sym_volatile] = ACTIONS(307),
        [anon_sym_bool] = ACTIONS(307),
        [anon_sym_byte] = ACTIONS(307),
        [anon_sym_char] = ACTIONS(307),
        [anon_sym_decimal] = ACTIONS(307),
        [anon_sym_double] = ACTIONS(307),
        [anon_sym_float] = ACTIONS(307),
        [anon_sym_int] = ACTIONS(307),
        [anon_sym_long] = ACTIONS(307),
        [anon_sym_object] = ACTIONS(307),
        [anon_sym_sbyte] = ACTIONS(307),
        [anon_sym_short] = ACTIONS(307),
        [anon_sym_string] = ACTIONS(307),
        [anon_sym_uint] = ACTIONS(307),
        [anon_sym_ulong] = ACTIONS(307),
        [anon_sym_ushort] = ACTIONS(307),
        [sym_identifier_name] = ACTIONS(309),
        [sym_comment] = ACTIONS(81),
    },
    [72] = {
        [ts_builtin_sym_end] = ACTIONS(311),
        [anon_sym_namespace] = ACTIONS(313),
        [anon_sym_RBRACE] = ACTIONS(311),
        [anon_sym_class] = ACTIONS(313),
        [anon_sym_struct] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(311),
        [anon_sym_abstract] = ACTIONS(313),
        [anon_sym_sealed] = ACTIONS(313),
        [anon_sym_static] = ACTIONS(313),
        [anon_sym_new] = ACTIONS(313),
        [anon_sym_public] = ACTIONS(313),
        [anon_sym_protected] = ACTIONS(313),
        [anon_sym_internal] = ACTIONS(313),
        [anon_sym_private] = ACTIONS(313),
        [anon_sym_unsafe] = ACTIONS(313),
        [anon_sym_readonly] = ACTIONS(313),
        [anon_sym_volatile] = ACTIONS(313),
        [anon_sym_bool] = ACTIONS(313),
        [anon_sym_byte] = ACTIONS(313),
        [anon_sym_char] = ACTIONS(313),
        [anon_sym_decimal] = ACTIONS(313),
        [anon_sym_double] = ACTIONS(313),
        [anon_sym_float] = ACTIONS(313),
        [anon_sym_int] = ACTIONS(313),
        [anon_sym_long] = ACTIONS(313),
        [anon_sym_object] = ACTIONS(313),
        [anon_sym_sbyte] = ACTIONS(313),
        [anon_sym_short] = ACTIONS(313),
        [anon_sym_string] = ACTIONS(313),
        [anon_sym_uint] = ACTIONS(313),
        [anon_sym_ulong] = ACTIONS(313),
        [anon_sym_ushort] = ACTIONS(313),
        [sym_identifier_name] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [73] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(295),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [74] = {
        [sym_equals_value_clause] = STATE(82),
        [anon_sym_SEMI] = ACTIONS(317),
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_EQ] = ACTIONS(319),
        [sym_comment] = ACTIONS(81),
    },
    [75] = {
        [aux_sym_variable_declaration_repeat1] = STATE(77),
        [anon_sym_SEMI] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(323),
        [sym_comment] = ACTIONS(81),
    },
    [76] = {
        [sym_variable_declarator] = STATE(80),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(81),
    },
    [77] = {
        [anon_sym_SEMI] = ACTIONS(325),
        [anon_sym_COMMA] = ACTIONS(327),
        [sym_comment] = ACTIONS(81),
    },
    [78] = {
        [sym_variable_declarator] = STATE(79),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(81),
    },
    [79] = {
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(329),
        [sym_comment] = ACTIONS(81),
    },
    [80] = {
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_COMMA] = ACTIONS(331),
        [sym_comment] = ACTIONS(81),
    },
    [81] = {
        [sym__literal] = STATE(91),
        [sym_boolean_literal] = STATE(87),
        [sym_character_literal] = STATE(87),
        [sym_integer_literal] = STATE(87),
        [sym_real_literal] = STATE(87),
        [sym_string_literal] = STATE(87),
        [sym__regular_string_literal] = STATE(92),
        [sym__verbatim_string_literal] = STATE(92),
        [anon_sym_true] = ACTIONS(333),
        [anon_sym_false] = ACTIONS(333),
        [anon_sym_SQUOTE] = ACTIONS(335),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(337),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(339),
        [sym_null_literal] = ACTIONS(341),
        [anon_sym_DOT] = ACTIONS(343),
        [anon_sym_DQUOTE] = ACTIONS(345),
        [anon_sym_AT_DQUOTE] = ACTIONS(347),
        [sym_comment] = ACTIONS(81),
    },
    [82] = {
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(349),
        [sym_comment] = ACTIONS(81),
    },
    [83] = {
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_COMMA] = ACTIONS(351),
        [sym_comment] = ACTIONS(81),
    },
    [84] = {
        [sym__unicode_escape_sequence] = STATE(114),
        [sym__simple_escape_sequence] = STATE(114),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(353),
        [sym__hexadecimal_escape_sequence] = ACTIONS(353),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(355),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(355),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(357),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(357),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(357),
        [anon_sym_BSLASH0] = ACTIONS(357),
        [anon_sym_BSLASHa] = ACTIONS(357),
        [anon_sym_BSLASHb] = ACTIONS(357),
        [anon_sym_BSLASHf] = ACTIONS(357),
        [anon_sym_BSLASHn] = ACTIONS(357),
        [anon_sym_BSLASHr] = ACTIONS(357),
        [anon_sym_BSLASHt] = ACTIONS(357),
        [anon_sym_BSLASHv] = ACTIONS(357),
        [sym_comment] = ACTIONS(81),
    },
    [85] = {
        [anon_sym_SEMI] = ACTIONS(359),
        [anon_sym_COMMA] = ACTIONS(359),
        [sym__integer_type_suffix] = ACTIONS(361),
        [anon_sym_DOT] = ACTIONS(363),
        [sym__real_type_suffix] = ACTIONS(365),
        [sym__exponent_part] = ACTIONS(367),
        [sym_comment] = ACTIONS(81),
    },
    [86] = {
        [anon_sym_SEMI] = ACTIONS(359),
        [anon_sym_COMMA] = ACTIONS(359),
        [sym__integer_type_suffix] = ACTIONS(361),
        [sym_comment] = ACTIONS(81),
    },
    [87] = {
        [anon_sym_SEMI] = ACTIONS(369),
        [anon_sym_COMMA] = ACTIONS(369),
        [sym_comment] = ACTIONS(81),
    },
    [88] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(371),
        [sym_comment] = ACTIONS(81),
    },
    [89] = {
        [sym__unicode_escape_sequence] = STATE(95),
        [sym__simple_escape_sequence] = STATE(95),
        [sym__regular_string_literal_character] = STATE(99),
        [aux_sym__regular_string_literal_repeat1] = STATE(100),
        [sym__hexadecimal_escape_sequence] = ACTIONS(373),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(375),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(375),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(377),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(377),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(377),
        [anon_sym_BSLASH0] = ACTIONS(377),
        [anon_sym_BSLASHa] = ACTIONS(377),
        [anon_sym_BSLASHb] = ACTIONS(377),
        [anon_sym_BSLASHf] = ACTIONS(377),
        [anon_sym_BSLASHn] = ACTIONS(377),
        [anon_sym_BSLASHr] = ACTIONS(377),
        [anon_sym_BSLASHt] = ACTIONS(377),
        [anon_sym_BSLASHv] = ACTIONS(377),
        [anon_sym_DQUOTE] = ACTIONS(379),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(373),
        [sym_comment] = ACTIONS(81),
    },
    [90] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(381),
        [sym_comment] = ACTIONS(383),
    },
    [91] = {
        [anon_sym_SEMI] = ACTIONS(385),
        [anon_sym_COMMA] = ACTIONS(385),
        [sym_comment] = ACTIONS(81),
    },
    [92] = {
        [anon_sym_SEMI] = ACTIONS(387),
        [anon_sym_COMMA] = ACTIONS(387),
        [sym_comment] = ACTIONS(81),
    },
    [93] = {
        [anon_sym_DQUOTE] = ACTIONS(389),
        [sym_comment] = ACTIONS(81),
    },
    [94] = {
        [anon_sym_SEMI] = ACTIONS(391),
        [anon_sym_COMMA] = ACTIONS(391),
        [sym_comment] = ACTIONS(81),
    },
    [95] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(393),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(395),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(395),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(395),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(395),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(395),
        [anon_sym_BSLASH0] = ACTIONS(395),
        [anon_sym_BSLASHa] = ACTIONS(395),
        [anon_sym_BSLASHb] = ACTIONS(395),
        [anon_sym_BSLASHf] = ACTIONS(395),
        [anon_sym_BSLASHn] = ACTIONS(395),
        [anon_sym_BSLASHr] = ACTIONS(395),
        [anon_sym_BSLASHt] = ACTIONS(395),
        [anon_sym_BSLASHv] = ACTIONS(395),
        [anon_sym_DQUOTE] = ACTIONS(395),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(393),
        [sym_comment] = ACTIONS(81),
    },
    [96] = {
        [anon_sym_SQUOTE] = ACTIONS(397),
        [sym__hexadecimal_escape_sequence] = ACTIONS(399),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(397),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(397),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(397),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(397),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(397),
        [anon_sym_BSLASH0] = ACTIONS(397),
        [anon_sym_BSLASHa] = ACTIONS(397),
        [anon_sym_BSLASHb] = ACTIONS(397),
        [anon_sym_BSLASHf] = ACTIONS(397),
        [anon_sym_BSLASHn] = ACTIONS(397),
        [anon_sym_BSLASHr] = ACTIONS(397),
        [anon_sym_BSLASHt] = ACTIONS(397),
        [anon_sym_BSLASHv] = ACTIONS(397),
        [anon_sym_DQUOTE] = ACTIONS(397),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(401),
        [sym_comment] = ACTIONS(81),
    },
    [97] = {
        [anon_sym_SQUOTE] = ACTIONS(403),
        [sym__hexadecimal_escape_sequence] = ACTIONS(405),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(403),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(403),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(403),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(403),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(403),
        [anon_sym_BSLASH0] = ACTIONS(403),
        [anon_sym_BSLASHa] = ACTIONS(403),
        [anon_sym_BSLASHb] = ACTIONS(403),
        [anon_sym_BSLASHf] = ACTIONS(403),
        [anon_sym_BSLASHn] = ACTIONS(403),
        [anon_sym_BSLASHr] = ACTIONS(403),
        [anon_sym_BSLASHt] = ACTIONS(403),
        [anon_sym_BSLASHv] = ACTIONS(403),
        [anon_sym_DQUOTE] = ACTIONS(403),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(407),
        [sym_comment] = ACTIONS(81),
    },
    [98] = {
        [anon_sym_SEMI] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(409),
        [sym_comment] = ACTIONS(81),
    },
    [99] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(411),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(413),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(413),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(413),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(413),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(413),
        [anon_sym_BSLASH0] = ACTIONS(413),
        [anon_sym_BSLASHa] = ACTIONS(413),
        [anon_sym_BSLASHb] = ACTIONS(413),
        [anon_sym_BSLASHf] = ACTIONS(413),
        [anon_sym_BSLASHn] = ACTIONS(413),
        [anon_sym_BSLASHr] = ACTIONS(413),
        [anon_sym_BSLASHt] = ACTIONS(413),
        [anon_sym_BSLASHv] = ACTIONS(413),
        [anon_sym_DQUOTE] = ACTIONS(413),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(411),
        [sym_comment] = ACTIONS(81),
    },
    [100] = {
        [sym__unicode_escape_sequence] = STATE(95),
        [sym__simple_escape_sequence] = STATE(95),
        [sym__regular_string_literal_character] = STATE(102),
        [sym__hexadecimal_escape_sequence] = ACTIONS(373),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(375),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(375),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(377),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(377),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(377),
        [anon_sym_BSLASH0] = ACTIONS(377),
        [anon_sym_BSLASHa] = ACTIONS(377),
        [anon_sym_BSLASHb] = ACTIONS(377),
        [anon_sym_BSLASHf] = ACTIONS(377),
        [anon_sym_BSLASHn] = ACTIONS(377),
        [anon_sym_BSLASHr] = ACTIONS(377),
        [anon_sym_BSLASHt] = ACTIONS(377),
        [anon_sym_BSLASHv] = ACTIONS(377),
        [anon_sym_DQUOTE] = ACTIONS(415),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(373),
        [sym_comment] = ACTIONS(81),
    },
    [101] = {
        [anon_sym_SEMI] = ACTIONS(417),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(81),
    },
    [102] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(419),
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
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(419),
        [sym_comment] = ACTIONS(81),
    },
    [103] = {
        [anon_sym_SEMI] = ACTIONS(423),
        [anon_sym_COMMA] = ACTIONS(423),
        [sym__real_type_suffix] = ACTIONS(425),
        [sym__exponent_part] = ACTIONS(427),
        [sym_comment] = ACTIONS(81),
    },
    [104] = {
        [anon_sym_SEMI] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(429),
        [sym_comment] = ACTIONS(81),
    },
    [105] = {
        [anon_sym_SEMI] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(429),
        [sym__real_type_suffix] = ACTIONS(431),
        [sym_comment] = ACTIONS(81),
    },
    [106] = {
        [anon_sym_SEMI] = ACTIONS(433),
        [anon_sym_COMMA] = ACTIONS(433),
        [sym_comment] = ACTIONS(81),
    },
    [107] = {
        [anon_sym_SEMI] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(435),
        [sym_comment] = ACTIONS(81),
    },
    [108] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(437),
        [sym_comment] = ACTIONS(81),
    },
    [109] = {
        [anon_sym_SEMI] = ACTIONS(423),
        [anon_sym_COMMA] = ACTIONS(423),
        [sym_comment] = ACTIONS(81),
    },
    [110] = {
        [anon_sym_SEMI] = ACTIONS(423),
        [anon_sym_COMMA] = ACTIONS(423),
        [sym__real_type_suffix] = ACTIONS(425),
        [sym_comment] = ACTIONS(81),
    },
    [111] = {
        [anon_sym_SEMI] = ACTIONS(429),
        [anon_sym_COMMA] = ACTIONS(429),
        [sym__real_type_suffix] = ACTIONS(431),
        [sym__exponent_part] = ACTIONS(439),
        [sym_comment] = ACTIONS(81),
    },
    [112] = {
        [anon_sym_SEMI] = ACTIONS(433),
        [anon_sym_COMMA] = ACTIONS(433),
        [sym__real_type_suffix] = ACTIONS(441),
        [sym_comment] = ACTIONS(81),
    },
    [113] = {
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_COMMA] = ACTIONS(443),
        [sym_comment] = ACTIONS(81),
    },
    [114] = {
        [anon_sym_SQUOTE] = ACTIONS(445),
        [sym_comment] = ACTIONS(81),
    },
    [115] = {
        [anon_sym_SQUOTE] = ACTIONS(397),
        [sym_comment] = ACTIONS(81),
    },
    [116] = {
        [anon_sym_SQUOTE] = ACTIONS(403),
        [sym_comment] = ACTIONS(81),
    },
    [117] = {
        [anon_sym_SEMI] = ACTIONS(447),
        [anon_sym_COMMA] = ACTIONS(447),
        [sym_comment] = ACTIONS(81),
    },
    [118] = {
        [anon_sym_RBRACE] = ACTIONS(449),
        [anon_sym_class] = ACTIONS(451),
        [anon_sym_struct] = ACTIONS(451),
        [anon_sym_LBRACK] = ACTIONS(449),
        [anon_sym_abstract] = ACTIONS(451),
        [anon_sym_sealed] = ACTIONS(451),
        [anon_sym_static] = ACTIONS(451),
        [anon_sym_new] = ACTIONS(451),
        [anon_sym_public] = ACTIONS(451),
        [anon_sym_protected] = ACTIONS(451),
        [anon_sym_internal] = ACTIONS(451),
        [anon_sym_private] = ACTIONS(451),
        [anon_sym_unsafe] = ACTIONS(451),
        [anon_sym_readonly] = ACTIONS(451),
        [anon_sym_volatile] = ACTIONS(451),
        [anon_sym_bool] = ACTIONS(451),
        [anon_sym_byte] = ACTIONS(451),
        [anon_sym_char] = ACTIONS(451),
        [anon_sym_decimal] = ACTIONS(451),
        [anon_sym_double] = ACTIONS(451),
        [anon_sym_float] = ACTIONS(451),
        [anon_sym_int] = ACTIONS(451),
        [anon_sym_long] = ACTIONS(451),
        [anon_sym_object] = ACTIONS(451),
        [anon_sym_sbyte] = ACTIONS(451),
        [anon_sym_short] = ACTIONS(451),
        [anon_sym_string] = ACTIONS(451),
        [anon_sym_uint] = ACTIONS(451),
        [anon_sym_ulong] = ACTIONS(451),
        [anon_sym_ushort] = ACTIONS(451),
        [sym_identifier_name] = ACTIONS(453),
        [sym_comment] = ACTIONS(81),
    },
    [119] = {
        [anon_sym_class] = ACTIONS(455),
        [sym_comment] = ACTIONS(81),
    },
    [120] = {
        [anon_sym_struct] = ACTIONS(457),
        [sym_comment] = ACTIONS(81),
    },
    [121] = {
        [sym_variable_declaration] = STATE(122),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_predefined_type] = STATE(54),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [122] = {
        [anon_sym_SEMI] = ACTIONS(459),
        [sym_comment] = ACTIONS(81),
    },
    [123] = {
        [anon_sym_RBRACE] = ACTIONS(461),
        [anon_sym_class] = ACTIONS(463),
        [anon_sym_struct] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(461),
        [anon_sym_abstract] = ACTIONS(463),
        [anon_sym_sealed] = ACTIONS(463),
        [anon_sym_static] = ACTIONS(463),
        [anon_sym_new] = ACTIONS(463),
        [anon_sym_public] = ACTIONS(463),
        [anon_sym_protected] = ACTIONS(463),
        [anon_sym_internal] = ACTIONS(463),
        [anon_sym_private] = ACTIONS(463),
        [anon_sym_unsafe] = ACTIONS(463),
        [anon_sym_readonly] = ACTIONS(463),
        [anon_sym_volatile] = ACTIONS(463),
        [anon_sym_bool] = ACTIONS(463),
        [anon_sym_byte] = ACTIONS(463),
        [anon_sym_char] = ACTIONS(463),
        [anon_sym_decimal] = ACTIONS(463),
        [anon_sym_double] = ACTIONS(463),
        [anon_sym_float] = ACTIONS(463),
        [anon_sym_int] = ACTIONS(463),
        [anon_sym_long] = ACTIONS(463),
        [anon_sym_object] = ACTIONS(463),
        [anon_sym_sbyte] = ACTIONS(463),
        [anon_sym_short] = ACTIONS(463),
        [anon_sym_string] = ACTIONS(463),
        [anon_sym_uint] = ACTIONS(463),
        [anon_sym_ulong] = ACTIONS(463),
        [anon_sym_ushort] = ACTIONS(463),
        [sym_identifier_name] = ACTIONS(465),
        [sym_comment] = ACTIONS(81),
    },
    [124] = {
        [sym_identifier_name] = ACTIONS(467),
        [sym_comment] = ACTIONS(81),
    },
    [125] = {
        [sym_type_parameter_list] = STATE(126),
        [anon_sym_LBRACE] = ACTIONS(215),
        [anon_sym_LT] = ACTIONS(195),
        [sym_comment] = ACTIONS(81),
    },
    [126] = {
        [anon_sym_LBRACE] = ACTIONS(469),
        [sym_comment] = ACTIONS(81),
    },
    [127] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(128),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(259),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [128] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(471),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [129] = {
        [ts_builtin_sym_end] = ACTIONS(473),
        [anon_sym_namespace] = ACTIONS(475),
        [anon_sym_RBRACE] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_struct] = ACTIONS(475),
        [anon_sym_LBRACK] = ACTIONS(473),
        [anon_sym_abstract] = ACTIONS(475),
        [anon_sym_sealed] = ACTIONS(475),
        [anon_sym_static] = ACTIONS(475),
        [anon_sym_new] = ACTIONS(475),
        [anon_sym_public] = ACTIONS(475),
        [anon_sym_protected] = ACTIONS(475),
        [anon_sym_internal] = ACTIONS(475),
        [anon_sym_private] = ACTIONS(475),
        [anon_sym_unsafe] = ACTIONS(475),
        [anon_sym_readonly] = ACTIONS(475),
        [anon_sym_volatile] = ACTIONS(475),
        [anon_sym_bool] = ACTIONS(475),
        [anon_sym_byte] = ACTIONS(475),
        [anon_sym_char] = ACTIONS(475),
        [anon_sym_decimal] = ACTIONS(475),
        [anon_sym_double] = ACTIONS(475),
        [anon_sym_float] = ACTIONS(475),
        [anon_sym_int] = ACTIONS(475),
        [anon_sym_long] = ACTIONS(475),
        [anon_sym_object] = ACTIONS(475),
        [anon_sym_sbyte] = ACTIONS(475),
        [anon_sym_short] = ACTIONS(475),
        [anon_sym_string] = ACTIONS(475),
        [anon_sym_uint] = ACTIONS(475),
        [anon_sym_ulong] = ACTIONS(475),
        [anon_sym_ushort] = ACTIONS(475),
        [sym_identifier_name] = ACTIONS(477),
        [sym_comment] = ACTIONS(81),
    },
    [130] = {
        [sym_identifier_name] = ACTIONS(479),
        [sym_comment] = ACTIONS(81),
    },
    [131] = {
        [sym_type_parameter_list] = STATE(132),
        [anon_sym_LBRACE] = ACTIONS(293),
        [anon_sym_LT] = ACTIONS(195),
        [sym_comment] = ACTIONS(81),
    },
    [132] = {
        [anon_sym_LBRACE] = ACTIONS(481),
        [sym_comment] = ACTIONS(81),
    },
    [133] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(134),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(303),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [134] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(483),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [135] = {
        [ts_builtin_sym_end] = ACTIONS(485),
        [anon_sym_namespace] = ACTIONS(487),
        [anon_sym_RBRACE] = ACTIONS(485),
        [anon_sym_class] = ACTIONS(487),
        [anon_sym_struct] = ACTIONS(487),
        [anon_sym_LBRACK] = ACTIONS(485),
        [anon_sym_abstract] = ACTIONS(487),
        [anon_sym_sealed] = ACTIONS(487),
        [anon_sym_static] = ACTIONS(487),
        [anon_sym_new] = ACTIONS(487),
        [anon_sym_public] = ACTIONS(487),
        [anon_sym_protected] = ACTIONS(487),
        [anon_sym_internal] = ACTIONS(487),
        [anon_sym_private] = ACTIONS(487),
        [anon_sym_unsafe] = ACTIONS(487),
        [anon_sym_readonly] = ACTIONS(487),
        [anon_sym_volatile] = ACTIONS(487),
        [anon_sym_bool] = ACTIONS(487),
        [anon_sym_byte] = ACTIONS(487),
        [anon_sym_char] = ACTIONS(487),
        [anon_sym_decimal] = ACTIONS(487),
        [anon_sym_double] = ACTIONS(487),
        [anon_sym_float] = ACTIONS(487),
        [anon_sym_int] = ACTIONS(487),
        [anon_sym_long] = ACTIONS(487),
        [anon_sym_object] = ACTIONS(487),
        [anon_sym_sbyte] = ACTIONS(487),
        [anon_sym_short] = ACTIONS(487),
        [anon_sym_string] = ACTIONS(487),
        [anon_sym_uint] = ACTIONS(487),
        [anon_sym_ulong] = ACTIONS(487),
        [anon_sym_ushort] = ACTIONS(487),
        [sym_identifier_name] = ACTIONS(489),
        [sym_comment] = ACTIONS(81),
    },
    [136] = {
        [anon_sym_COMMA] = ACTIONS(491),
        [anon_sym_GT] = ACTIONS(491),
        [sym_identifier_name] = ACTIONS(493),
        [sym_comment] = ACTIONS(81),
    },
    [137] = {
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_GT] = ACTIONS(495),
        [sym_comment] = ACTIONS(81),
    },
    [138] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(141),
        [anon_sym_COMMA] = ACTIONS(497),
        [anon_sym_GT] = ACTIONS(499),
        [sym_comment] = ACTIONS(81),
    },
    [139] = {
        [sym__type] = STATE(137),
        [sym_generic_name] = STATE(54),
        [sym_predefined_type] = STATE(54),
        [sym_type_parameter] = STATE(145),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [140] = {
        [anon_sym_LBRACE] = ACTIONS(501),
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_GT] = ACTIONS(501),
        [sym_identifier_name] = ACTIONS(503),
        [sym_comment] = ACTIONS(81),
    },
    [141] = {
        [anon_sym_COMMA] = ACTIONS(505),
        [anon_sym_GT] = ACTIONS(507),
        [sym_comment] = ACTIONS(81),
    },
    [142] = {
        [sym__type] = STATE(137),
        [sym_generic_name] = STATE(54),
        [sym_predefined_type] = STATE(54),
        [sym_type_parameter] = STATE(144),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [143] = {
        [anon_sym_LBRACE] = ACTIONS(509),
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_GT] = ACTIONS(509),
        [sym_identifier_name] = ACTIONS(511),
        [sym_comment] = ACTIONS(81),
    },
    [144] = {
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_GT] = ACTIONS(513),
        [sym_comment] = ACTIONS(81),
    },
    [145] = {
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_GT] = ACTIONS(515),
        [sym_comment] = ACTIONS(81),
    },
    [146] = {
        [anon_sym_bool] = ACTIONS(517),
        [anon_sym_byte] = ACTIONS(517),
        [anon_sym_char] = ACTIONS(517),
        [anon_sym_decimal] = ACTIONS(517),
        [anon_sym_double] = ACTIONS(517),
        [anon_sym_float] = ACTIONS(517),
        [anon_sym_int] = ACTIONS(517),
        [anon_sym_long] = ACTIONS(517),
        [anon_sym_object] = ACTIONS(517),
        [anon_sym_sbyte] = ACTIONS(517),
        [anon_sym_short] = ACTIONS(517),
        [anon_sym_string] = ACTIONS(517),
        [anon_sym_uint] = ACTIONS(517),
        [anon_sym_ulong] = ACTIONS(517),
        [anon_sym_ushort] = ACTIONS(517),
        [sym_identifier_name] = ACTIONS(519),
        [sym_comment] = ACTIONS(81),
    },
    [147] = {
        [anon_sym_class] = ACTIONS(521),
        [sym_comment] = ACTIONS(81),
    },
    [148] = {
        [anon_sym_struct] = ACTIONS(523),
        [sym_comment] = ACTIONS(81),
    },
    [149] = {
        [sym_type_parameter_list] = STATE(151),
        [anon_sym_LBRACE] = ACTIONS(525),
        [anon_sym_LT] = ACTIONS(195),
        [sym_comment] = ACTIONS(81),
    },
    [150] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(153),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [151] = {
        [anon_sym_LBRACE] = ACTIONS(193),
        [sym_comment] = ACTIONS(81),
    },
    [152] = {
        [ts_builtin_sym_end] = ACTIONS(529),
        [anon_sym_namespace] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(529),
        [anon_sym_class] = ACTIONS(531),
        [anon_sym_struct] = ACTIONS(531),
        [anon_sym_LBRACK] = ACTIONS(529),
        [anon_sym_abstract] = ACTIONS(531),
        [anon_sym_sealed] = ACTIONS(531),
        [anon_sym_static] = ACTIONS(531),
        [anon_sym_new] = ACTIONS(531),
        [anon_sym_public] = ACTIONS(531),
        [anon_sym_protected] = ACTIONS(531),
        [anon_sym_internal] = ACTIONS(531),
        [anon_sym_private] = ACTIONS(531),
        [anon_sym_unsafe] = ACTIONS(531),
        [anon_sym_readonly] = ACTIONS(531),
        [anon_sym_volatile] = ACTIONS(531),
        [anon_sym_bool] = ACTIONS(531),
        [anon_sym_byte] = ACTIONS(531),
        [anon_sym_char] = ACTIONS(531),
        [anon_sym_decimal] = ACTIONS(531),
        [anon_sym_double] = ACTIONS(531),
        [anon_sym_float] = ACTIONS(531),
        [anon_sym_int] = ACTIONS(531),
        [anon_sym_long] = ACTIONS(531),
        [anon_sym_object] = ACTIONS(531),
        [anon_sym_sbyte] = ACTIONS(531),
        [anon_sym_short] = ACTIONS(531),
        [anon_sym_string] = ACTIONS(531),
        [anon_sym_uint] = ACTIONS(531),
        [anon_sym_ulong] = ACTIONS(531),
        [anon_sym_ushort] = ACTIONS(531),
        [sym_identifier_name] = ACTIONS(533),
        [sym_comment] = ACTIONS(81),
    },
    [153] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(197),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [154] = {
        [sym_type_parameter_list] = STATE(156),
        [anon_sym_LBRACE] = ACTIONS(535),
        [anon_sym_LT] = ACTIONS(195),
        [sym_comment] = ACTIONS(81),
    },
    [155] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(158),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(537),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [156] = {
        [anon_sym_LBRACE] = ACTIONS(289),
        [sym_comment] = ACTIONS(81),
    },
    [157] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_namespace] = ACTIONS(541),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_struct] = ACTIONS(541),
        [anon_sym_LBRACK] = ACTIONS(539),
        [anon_sym_abstract] = ACTIONS(541),
        [anon_sym_sealed] = ACTIONS(541),
        [anon_sym_static] = ACTIONS(541),
        [anon_sym_new] = ACTIONS(541),
        [anon_sym_public] = ACTIONS(541),
        [anon_sym_protected] = ACTIONS(541),
        [anon_sym_internal] = ACTIONS(541),
        [anon_sym_private] = ACTIONS(541),
        [anon_sym_unsafe] = ACTIONS(541),
        [anon_sym_readonly] = ACTIONS(541),
        [anon_sym_volatile] = ACTIONS(541),
        [anon_sym_bool] = ACTIONS(541),
        [anon_sym_byte] = ACTIONS(541),
        [anon_sym_char] = ACTIONS(541),
        [anon_sym_decimal] = ACTIONS(541),
        [anon_sym_double] = ACTIONS(541),
        [anon_sym_float] = ACTIONS(541),
        [anon_sym_int] = ACTIONS(541),
        [anon_sym_long] = ACTIONS(541),
        [anon_sym_object] = ACTIONS(541),
        [anon_sym_sbyte] = ACTIONS(541),
        [anon_sym_short] = ACTIONS(541),
        [anon_sym_string] = ACTIONS(541),
        [anon_sym_uint] = ACTIONS(541),
        [anon_sym_ulong] = ACTIONS(541),
        [anon_sym_ushort] = ACTIONS(541),
        [sym_identifier_name] = ACTIONS(543),
        [sym_comment] = ACTIONS(81),
    },
    [158] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [159] = {
        [anon_sym_COLON] = ACTIONS(545),
        [sym_comment] = ACTIONS(81),
    },
    [160] = {
        [sym_attribute_list] = STATE(161),
        [sym_attribute] = STATE(25),
        [sym_identifier_name] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [161] = {
        [anon_sym_RBRACK] = ACTIONS(547),
        [sym_comment] = ACTIONS(81),
    },
    [162] = {
        [ts_builtin_sym_end] = ACTIONS(549),
        [anon_sym_namespace] = ACTIONS(549),
        [anon_sym_class] = ACTIONS(549),
        [anon_sym_struct] = ACTIONS(549),
        [anon_sym_LBRACK] = ACTIONS(549),
        [anon_sym_abstract] = ACTIONS(549),
        [anon_sym_sealed] = ACTIONS(549),
        [anon_sym_static] = ACTIONS(549),
        [anon_sym_new] = ACTIONS(549),
        [anon_sym_public] = ACTIONS(549),
        [anon_sym_protected] = ACTIONS(549),
        [anon_sym_internal] = ACTIONS(549),
        [anon_sym_private] = ACTIONS(549),
        [anon_sym_unsafe] = ACTIONS(549),
        [sym_comment] = ACTIONS(81),
    },
    [163] = {
        [sym_identifier_name] = ACTIONS(551),
        [sym_comment] = ACTIONS(81),
    },
    [164] = {
        [anon_sym_COLON_COLON] = ACTIONS(553),
        [sym_comment] = ACTIONS(81),
    },
    [165] = {
        [anon_sym_LBRACE] = ACTIONS(555),
        [anon_sym_DOT] = ACTIONS(557),
        [sym_comment] = ACTIONS(81),
    },
    [166] = {
        [anon_sym_DOT] = ACTIONS(557),
        [sym_comment] = ACTIONS(81),
    },
    [167] = {
        [sym_identifier_name] = ACTIONS(559),
        [sym_comment] = ACTIONS(81),
    },
    [168] = {
        [anon_sym_SEMI] = ACTIONS(561),
        [anon_sym_LBRACE] = ACTIONS(561),
        [anon_sym_DOT] = ACTIONS(561),
        [sym_comment] = ACTIONS(81),
    },
    [169] = {
        [sym_namespace_declaration] = STATE(171),
        [sym_class_declaration] = STATE(171),
        [sym_struct_declaration] = STATE(171),
        [sym__attributes] = STATE(12),
        [sym__attribute_section] = STATE(13),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [aux_sym_namespace_declaration_repeat1] = STATE(172),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_namespace] = ACTIONS(87),
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_class] = ACTIONS(89),
        [anon_sym_struct] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_unsafe] = ACTIONS(97),
        [sym_comment] = ACTIONS(81),
    },
    [170] = {
        [ts_builtin_sym_end] = ACTIONS(565),
        [anon_sym_namespace] = ACTIONS(565),
        [anon_sym_RBRACE] = ACTIONS(565),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_struct] = ACTIONS(565),
        [anon_sym_LBRACK] = ACTIONS(565),
        [anon_sym_abstract] = ACTIONS(565),
        [anon_sym_sealed] = ACTIONS(565),
        [anon_sym_static] = ACTIONS(565),
        [anon_sym_new] = ACTIONS(565),
        [anon_sym_public] = ACTIONS(565),
        [anon_sym_protected] = ACTIONS(565),
        [anon_sym_internal] = ACTIONS(565),
        [anon_sym_private] = ACTIONS(565),
        [anon_sym_unsafe] = ACTIONS(565),
        [sym_comment] = ACTIONS(81),
    },
    [171] = {
        [anon_sym_namespace] = ACTIONS(567),
        [anon_sym_RBRACE] = ACTIONS(567),
        [anon_sym_class] = ACTIONS(567),
        [anon_sym_struct] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(567),
        [anon_sym_abstract] = ACTIONS(567),
        [anon_sym_sealed] = ACTIONS(567),
        [anon_sym_static] = ACTIONS(567),
        [anon_sym_new] = ACTIONS(567),
        [anon_sym_public] = ACTIONS(567),
        [anon_sym_protected] = ACTIONS(567),
        [anon_sym_internal] = ACTIONS(567),
        [anon_sym_private] = ACTIONS(567),
        [anon_sym_unsafe] = ACTIONS(567),
        [sym_comment] = ACTIONS(81),
    },
    [172] = {
        [sym_namespace_declaration] = STATE(174),
        [sym_class_declaration] = STATE(174),
        [sym_struct_declaration] = STATE(174),
        [sym__attributes] = STATE(12),
        [sym__attribute_section] = STATE(13),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_namespace] = ACTIONS(87),
        [anon_sym_RBRACE] = ACTIONS(569),
        [anon_sym_class] = ACTIONS(89),
        [anon_sym_struct] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_unsafe] = ACTIONS(97),
        [sym_comment] = ACTIONS(81),
    },
    [173] = {
        [ts_builtin_sym_end] = ACTIONS(571),
        [anon_sym_namespace] = ACTIONS(571),
        [anon_sym_RBRACE] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_struct] = ACTIONS(571),
        [anon_sym_LBRACK] = ACTIONS(571),
        [anon_sym_abstract] = ACTIONS(571),
        [anon_sym_sealed] = ACTIONS(571),
        [anon_sym_static] = ACTIONS(571),
        [anon_sym_new] = ACTIONS(571),
        [anon_sym_public] = ACTIONS(571),
        [anon_sym_protected] = ACTIONS(571),
        [anon_sym_internal] = ACTIONS(571),
        [anon_sym_private] = ACTIONS(571),
        [anon_sym_unsafe] = ACTIONS(571),
        [sym_comment] = ACTIONS(81),
    },
    [174] = {
        [anon_sym_namespace] = ACTIONS(573),
        [anon_sym_RBRACE] = ACTIONS(573),
        [anon_sym_class] = ACTIONS(573),
        [anon_sym_struct] = ACTIONS(573),
        [anon_sym_LBRACK] = ACTIONS(573),
        [anon_sym_abstract] = ACTIONS(573),
        [anon_sym_sealed] = ACTIONS(573),
        [anon_sym_static] = ACTIONS(573),
        [anon_sym_new] = ACTIONS(573),
        [anon_sym_public] = ACTIONS(573),
        [anon_sym_protected] = ACTIONS(573),
        [anon_sym_internal] = ACTIONS(573),
        [anon_sym_private] = ACTIONS(573),
        [anon_sym_unsafe] = ACTIONS(573),
        [sym_comment] = ACTIONS(81),
    },
    [175] = {
        [sym_identifier_name] = ACTIONS(575),
        [sym_comment] = ACTIONS(81),
    },
    [176] = {
        [anon_sym_DOT] = ACTIONS(577),
        [sym_comment] = ACTIONS(81),
    },
    [177] = {
        [sym_global] = ACTIONS(579),
        [sym_identifier_name] = ACTIONS(581),
        [sym_comment] = ACTIONS(81),
    },
    [178] = {
        [anon_sym_SEMI] = ACTIONS(583),
        [anon_sym_EQ] = ACTIONS(585),
        [anon_sym_DOT] = ACTIONS(557),
        [sym_comment] = ACTIONS(81),
    },
    [179] = {
        [anon_sym_SEMI] = ACTIONS(583),
        [anon_sym_DOT] = ACTIONS(557),
        [sym_comment] = ACTIONS(81),
    },
    [180] = {
        [sym_qualified_name] = STATE(181),
        [sym_alias_qualified_name] = STATE(166),
        [sym_global] = ACTIONS(101),
        [sym_identifier_name] = ACTIONS(587),
        [sym_comment] = ACTIONS(81),
    },
    [181] = {
        [anon_sym_SEMI] = ACTIONS(589),
        [anon_sym_DOT] = ACTIONS(557),
        [sym_comment] = ACTIONS(81),
    },
    [182] = {
        [ts_builtin_sym_end] = ACTIONS(591),
        [anon_sym_using] = ACTIONS(591),
        [anon_sym_namespace] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_struct] = ACTIONS(591),
        [anon_sym_LBRACK] = ACTIONS(591),
        [anon_sym_abstract] = ACTIONS(591),
        [anon_sym_sealed] = ACTIONS(591),
        [anon_sym_static] = ACTIONS(591),
        [anon_sym_new] = ACTIONS(591),
        [anon_sym_public] = ACTIONS(591),
        [anon_sym_protected] = ACTIONS(591),
        [anon_sym_internal] = ACTIONS(591),
        [anon_sym_private] = ACTIONS(591),
        [anon_sym_unsafe] = ACTIONS(591),
        [sym_comment] = ACTIONS(81),
    },
    [183] = {
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_using] = ACTIONS(593),
        [anon_sym_namespace] = ACTIONS(593),
        [anon_sym_class] = ACTIONS(593),
        [anon_sym_struct] = ACTIONS(593),
        [anon_sym_LBRACK] = ACTIONS(593),
        [anon_sym_abstract] = ACTIONS(593),
        [anon_sym_sealed] = ACTIONS(593),
        [anon_sym_static] = ACTIONS(593),
        [anon_sym_new] = ACTIONS(593),
        [anon_sym_public] = ACTIONS(593),
        [anon_sym_protected] = ACTIONS(593),
        [anon_sym_internal] = ACTIONS(593),
        [anon_sym_private] = ACTIONS(593),
        [anon_sym_unsafe] = ACTIONS(593),
        [sym_comment] = ACTIONS(81),
    },
    [184] = {
        [sym_global] = ACTIONS(595),
        [sym_identifier_name] = ACTIONS(597),
        [sym_comment] = ACTIONS(81),
    },
    [185] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_using] = ACTIONS(602),
        [anon_sym_namespace] = ACTIONS(602),
        [anon_sym_RBRACE] = ACTIONS(605),
        [anon_sym_class] = ACTIONS(609),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(615),
        [anon_sym_abstract] = ACTIONS(609),
        [anon_sym_sealed] = ACTIONS(609),
        [anon_sym_static] = ACTIONS(609),
        [anon_sym_new] = ACTIONS(609),
        [anon_sym_public] = ACTIONS(609),
        [anon_sym_protected] = ACTIONS(609),
        [anon_sym_internal] = ACTIONS(609),
        [anon_sym_private] = ACTIONS(609),
        [anon_sym_unsafe] = ACTIONS(609),
        [anon_sym_readonly] = ACTIONS(621),
        [anon_sym_volatile] = ACTIONS(621),
        [anon_sym_bool] = ACTIONS(621),
        [anon_sym_byte] = ACTIONS(621),
        [anon_sym_char] = ACTIONS(621),
        [anon_sym_decimal] = ACTIONS(621),
        [anon_sym_double] = ACTIONS(621),
        [anon_sym_float] = ACTIONS(621),
        [anon_sym_int] = ACTIONS(621),
        [anon_sym_long] = ACTIONS(621),
        [anon_sym_object] = ACTIONS(621),
        [anon_sym_sbyte] = ACTIONS(621),
        [anon_sym_short] = ACTIONS(621),
        [anon_sym_string] = ACTIONS(621),
        [anon_sym_uint] = ACTIONS(621),
        [anon_sym_ulong] = ACTIONS(621),
        [anon_sym_ushort] = ACTIONS(621),
        [sym_identifier_name] = ACTIONS(625),
        [sym_comment] = ACTIONS(81),
    },
    [186] = {
        [sym_namespace_declaration] = STATE(171),
        [sym_class_declaration] = STATE(257),
        [sym_struct_declaration] = STATE(257),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_namespace_declaration_repeat1] = STATE(172),
        [aux_sym_class_declaration_repeat1] = STATE(225),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_namespace] = ACTIONS(629),
        [anon_sym_RBRACE] = ACTIONS(631),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [187] = {
        [ts_builtin_sym_end] = ACTIONS(633),
        [anon_sym_namespace] = ACTIONS(646),
        [anon_sym_RBRACE] = ACTIONS(633),
        [anon_sym_class] = ACTIONS(646),
        [anon_sym_struct] = ACTIONS(646),
        [anon_sym_LBRACK] = ACTIONS(633),
        [anon_sym_abstract] = ACTIONS(646),
        [anon_sym_sealed] = ACTIONS(646),
        [anon_sym_static] = ACTIONS(646),
        [anon_sym_new] = ACTIONS(646),
        [anon_sym_public] = ACTIONS(646),
        [anon_sym_protected] = ACTIONS(646),
        [anon_sym_internal] = ACTIONS(646),
        [anon_sym_private] = ACTIONS(646),
        [anon_sym_unsafe] = ACTIONS(646),
        [anon_sym_readonly] = ACTIONS(659),
        [anon_sym_volatile] = ACTIONS(659),
        [anon_sym_bool] = ACTIONS(659),
        [anon_sym_byte] = ACTIONS(659),
        [anon_sym_char] = ACTIONS(659),
        [anon_sym_decimal] = ACTIONS(659),
        [anon_sym_double] = ACTIONS(659),
        [anon_sym_float] = ACTIONS(659),
        [anon_sym_int] = ACTIONS(659),
        [anon_sym_long] = ACTIONS(659),
        [anon_sym_object] = ACTIONS(659),
        [anon_sym_sbyte] = ACTIONS(659),
        [anon_sym_short] = ACTIONS(659),
        [anon_sym_string] = ACTIONS(659),
        [anon_sym_uint] = ACTIONS(659),
        [anon_sym_ulong] = ACTIONS(659),
        [anon_sym_ushort] = ACTIONS(659),
        [sym_identifier_name] = ACTIONS(670),
        [sym_comment] = ACTIONS(81),
    },
    [188] = {
        [sym_identifier_name] = ACTIONS(681),
        [sym_comment] = ACTIONS(81),
    },
    [189] = {
        [sym_identifier_name] = ACTIONS(683),
        [sym_comment] = ACTIONS(81),
    },
    [190] = {
        [ts_builtin_sym_end] = ACTIONS(549),
        [anon_sym_namespace] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(687),
        [anon_sym_struct] = ACTIONS(687),
        [anon_sym_LBRACK] = ACTIONS(690),
        [anon_sym_abstract] = ACTIONS(687),
        [anon_sym_sealed] = ACTIONS(687),
        [anon_sym_static] = ACTIONS(687),
        [anon_sym_new] = ACTIONS(687),
        [anon_sym_public] = ACTIONS(687),
        [anon_sym_protected] = ACTIONS(687),
        [anon_sym_internal] = ACTIONS(687),
        [anon_sym_private] = ACTIONS(687),
        [anon_sym_unsafe] = ACTIONS(687),
        [anon_sym_readonly] = ACTIONS(173),
        [anon_sym_volatile] = ACTIONS(173),
        [anon_sym_bool] = ACTIONS(173),
        [anon_sym_byte] = ACTIONS(173),
        [anon_sym_char] = ACTIONS(173),
        [anon_sym_decimal] = ACTIONS(173),
        [anon_sym_double] = ACTIONS(173),
        [anon_sym_float] = ACTIONS(173),
        [anon_sym_int] = ACTIONS(173),
        [anon_sym_long] = ACTIONS(173),
        [anon_sym_object] = ACTIONS(173),
        [anon_sym_sbyte] = ACTIONS(173),
        [anon_sym_short] = ACTIONS(173),
        [anon_sym_string] = ACTIONS(173),
        [anon_sym_uint] = ACTIONS(173),
        [anon_sym_ulong] = ACTIONS(173),
        [anon_sym_ushort] = ACTIONS(173),
        [sym_identifier_name] = ACTIONS(177),
        [sym_comment] = ACTIONS(81),
    },
    [191] = {
        [sym_attribute] = STATE(266),
        [sym__type] = STATE(137),
        [sym_generic_name] = STATE(54),
        [sym_variable_declarator] = STATE(267),
        [sym_predefined_type] = STATE(54),
        [sym_type_parameter] = STATE(268),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(693),
        [sym_comment] = ACTIONS(81),
    },
    [192] = {
        [sym__literal] = STATE(91),
        [sym_boolean_literal] = STATE(87),
        [sym_character_literal] = STATE(87),
        [sym_integer_literal] = STATE(87),
        [sym_real_literal] = STATE(87),
        [sym_string_literal] = STATE(87),
        [sym__regular_string_literal] = STATE(92),
        [sym__verbatim_string_literal] = STATE(92),
        [anon_sym_true] = ACTIONS(695),
        [anon_sym_false] = ACTIONS(695),
        [anon_sym_SQUOTE] = ACTIONS(335),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(337),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(339),
        [sym_null_literal] = ACTIONS(697),
        [anon_sym_DOT] = ACTIONS(343),
        [anon_sym_DQUOTE] = ACTIONS(345),
        [anon_sym_AT_DQUOTE] = ACTIONS(347),
        [sym_global] = ACTIONS(595),
        [sym_identifier_name] = ACTIONS(597),
        [sym_comment] = ACTIONS(81),
    },
    [193] = {
        [sym__unicode_escape_sequence] = STATE(114),
        [sym__simple_escape_sequence] = STATE(114),
        [anon_sym_SEMI] = ACTIONS(447),
        [anon_sym_COMMA] = ACTIONS(447),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(699),
        [sym__hexadecimal_escape_sequence] = ACTIONS(353),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(355),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(355),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(357),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(357),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(357),
        [anon_sym_BSLASH0] = ACTIONS(357),
        [anon_sym_BSLASHa] = ACTIONS(357),
        [anon_sym_BSLASHb] = ACTIONS(357),
        [anon_sym_BSLASHf] = ACTIONS(357),
        [anon_sym_BSLASHn] = ACTIONS(357),
        [anon_sym_BSLASHr] = ACTIONS(357),
        [anon_sym_BSLASHt] = ACTIONS(357),
        [anon_sym_BSLASHv] = ACTIONS(357),
        [sym_comment] = ACTIONS(81),
    },
    [194] = {
        [anon_sym_SQUOTE] = ACTIONS(445),
        [sym__hexadecimal_escape_sequence] = ACTIONS(393),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(395),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(395),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(395),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(395),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(395),
        [anon_sym_BSLASH0] = ACTIONS(395),
        [anon_sym_BSLASHa] = ACTIONS(395),
        [anon_sym_BSLASHb] = ACTIONS(395),
        [anon_sym_BSLASHf] = ACTIONS(395),
        [anon_sym_BSLASHn] = ACTIONS(395),
        [anon_sym_BSLASHr] = ACTIONS(395),
        [anon_sym_BSLASHt] = ACTIONS(395),
        [anon_sym_BSLASHv] = ACTIONS(395),
        [anon_sym_DQUOTE] = ACTIONS(395),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(701),
        [sym_comment] = ACTIONS(81),
    },
    [195] = {
        [anon_sym_SEMI] = ACTIONS(703),
        [anon_sym_COMMA] = ACTIONS(703),
        [sym__integer_type_suffix] = ACTIONS(361),
        [anon_sym_DOT] = ACTIONS(363),
        [sym__real_type_suffix] = ACTIONS(707),
        [sym__exponent_part] = ACTIONS(709),
        [sym_comment] = ACTIONS(81),
    },
    [196] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(711),
        [sym_identifier_name] = ACTIONS(559),
        [sym_comment] = ACTIONS(81),
    },
    [197] = {
        [anon_sym_SEMI] = ACTIONS(713),
        [anon_sym_COMMA] = ACTIONS(713),
        [sym_comment] = ACTIONS(81),
    },
    [198] = {
        [anon_sym_SEMI] = ACTIONS(718),
        [anon_sym_COMMA] = ACTIONS(718),
        [sym__real_type_suffix] = ACTIONS(722),
        [sym_comment] = ACTIONS(81),
    },
    [199] = {
        [sym__unicode_escape_sequence] = STATE(95),
        [sym__simple_escape_sequence] = STATE(95),
        [sym__regular_string_literal_character] = STATE(99),
        [aux_sym__regular_string_literal_repeat1] = STATE(100),
        [anon_sym_SEMI] = ACTIONS(724),
        [anon_sym_COMMA] = ACTIONS(724),
        [sym__hexadecimal_escape_sequence] = ACTIONS(373),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(375),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(375),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(377),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(377),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(377),
        [anon_sym_BSLASH0] = ACTIONS(377),
        [anon_sym_BSLASHa] = ACTIONS(377),
        [anon_sym_BSLASHb] = ACTIONS(377),
        [anon_sym_BSLASHf] = ACTIONS(377),
        [anon_sym_BSLASHn] = ACTIONS(377),
        [anon_sym_BSLASHr] = ACTIONS(377),
        [anon_sym_BSLASHt] = ACTIONS(377),
        [anon_sym_BSLASHv] = ACTIONS(377),
        [anon_sym_DQUOTE] = ACTIONS(379),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(728),
        [sym_comment] = ACTIONS(81),
    },
    [200] = {
        [sym__class_modifiers] = STATE(147),
        [sym__field_modifiers] = STATE(146),
        [anon_sym_class] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(205),
        [anon_sym_public] = ACTIONS(205),
        [anon_sym_protected] = ACTIONS(205),
        [anon_sym_internal] = ACTIONS(205),
        [anon_sym_private] = ACTIONS(205),
        [anon_sym_unsafe] = ACTIONS(205),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(227),
        [anon_sym_byte] = ACTIONS(227),
        [anon_sym_char] = ACTIONS(227),
        [anon_sym_decimal] = ACTIONS(227),
        [anon_sym_double] = ACTIONS(227),
        [anon_sym_float] = ACTIONS(227),
        [anon_sym_int] = ACTIONS(227),
        [anon_sym_long] = ACTIONS(227),
        [anon_sym_object] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(227),
        [anon_sym_short] = ACTIONS(227),
        [anon_sym_string] = ACTIONS(227),
        [anon_sym_uint] = ACTIONS(227),
        [anon_sym_ulong] = ACTIONS(227),
        [anon_sym_ushort] = ACTIONS(227),
        [sym_global] = ACTIONS(579),
        [sym_identifier_name] = ACTIONS(730),
        [sym_comment] = ACTIONS(81),
    },
    [201] = {
        [anon_sym_LBRACE] = ACTIONS(733),
        [anon_sym_COMMA] = ACTIONS(733),
        [anon_sym_GT] = ACTIONS(733),
        [sym_identifier_name] = ACTIONS(736),
        [sym_comment] = ACTIONS(81),
    },
    [202] = {
        [sym_attribute_argument_list] = STATE(33),
        [sym_equals_value_clause] = STATE(82),
        [sym_type_parameter_list] = STATE(221),
        [anon_sym_SEMI] = ACTIONS(739),
        [anon_sym_LBRACE] = ACTIONS(743),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_COMMA] = ACTIONS(746),
        [anon_sym_LPAREN] = ACTIONS(157),
        [anon_sym_EQ] = ACTIONS(750),
        [anon_sym_DOT] = ACTIONS(752),
        [anon_sym_LT] = ACTIONS(195),
        [anon_sym_GT] = ACTIONS(237),
        [sym_identifier_name] = ACTIONS(239),
        [sym_comment] = ACTIONS(81),
    },
    [203] = {
        [ts_builtin_sym_end] = ACTIONS(756),
        [anon_sym_using] = ACTIONS(756),
        [anon_sym_namespace] = ACTIONS(756),
        [anon_sym_class] = ACTIONS(756),
        [anon_sym_struct] = ACTIONS(756),
        [anon_sym_LBRACK] = ACTIONS(756),
        [anon_sym_abstract] = ACTIONS(756),
        [anon_sym_sealed] = ACTIONS(756),
        [anon_sym_static] = ACTIONS(756),
        [anon_sym_new] = ACTIONS(756),
        [anon_sym_public] = ACTIONS(756),
        [anon_sym_protected] = ACTIONS(756),
        [anon_sym_internal] = ACTIONS(756),
        [anon_sym_private] = ACTIONS(756),
        [anon_sym_unsafe] = ACTIONS(756),
        [sym_comment] = ACTIONS(81),
    },
    [204] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_namespace] = ACTIONS(762),
        [anon_sym_RBRACE] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(762),
        [anon_sym_struct] = ACTIONS(762),
        [anon_sym_LBRACK] = ACTIONS(762),
        [anon_sym_abstract] = ACTIONS(762),
        [anon_sym_sealed] = ACTIONS(762),
        [anon_sym_static] = ACTIONS(762),
        [anon_sym_new] = ACTIONS(762),
        [anon_sym_public] = ACTIONS(762),
        [anon_sym_protected] = ACTIONS(762),
        [anon_sym_internal] = ACTIONS(762),
        [anon_sym_private] = ACTIONS(762),
        [anon_sym_unsafe] = ACTIONS(762),
        [sym_comment] = ACTIONS(81),
    },
    [205] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_namespace] = ACTIONS(770),
        [anon_sym_RBRACE] = ACTIONS(775),
        [anon_sym_class] = ACTIONS(780),
        [anon_sym_struct] = ACTIONS(780),
        [anon_sym_LBRACK] = ACTIONS(787),
        [anon_sym_abstract] = ACTIONS(780),
        [anon_sym_sealed] = ACTIONS(780),
        [anon_sym_static] = ACTIONS(780),
        [anon_sym_new] = ACTIONS(780),
        [anon_sym_public] = ACTIONS(780),
        [anon_sym_protected] = ACTIONS(780),
        [anon_sym_internal] = ACTIONS(780),
        [anon_sym_private] = ACTIONS(780),
        [anon_sym_unsafe] = ACTIONS(780),
        [anon_sym_readonly] = ACTIONS(794),
        [anon_sym_volatile] = ACTIONS(794),
        [anon_sym_bool] = ACTIONS(794),
        [anon_sym_byte] = ACTIONS(794),
        [anon_sym_char] = ACTIONS(794),
        [anon_sym_decimal] = ACTIONS(794),
        [anon_sym_double] = ACTIONS(794),
        [anon_sym_float] = ACTIONS(794),
        [anon_sym_int] = ACTIONS(794),
        [anon_sym_long] = ACTIONS(794),
        [anon_sym_object] = ACTIONS(794),
        [anon_sym_sbyte] = ACTIONS(794),
        [anon_sym_short] = ACTIONS(794),
        [anon_sym_string] = ACTIONS(794),
        [anon_sym_uint] = ACTIONS(794),
        [anon_sym_ulong] = ACTIONS(794),
        [anon_sym_ushort] = ACTIONS(794),
        [sym_identifier_name] = ACTIONS(797),
        [sym_comment] = ACTIONS(81),
    },
    [206] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_namespace] = ACTIONS(759),
        [anon_sym_class] = ACTIONS(759),
        [anon_sym_struct] = ACTIONS(759),
        [anon_sym_LBRACK] = ACTIONS(759),
        [anon_sym_abstract] = ACTIONS(759),
        [anon_sym_sealed] = ACTIONS(759),
        [anon_sym_static] = ACTIONS(759),
        [anon_sym_new] = ACTIONS(759),
        [anon_sym_public] = ACTIONS(759),
        [anon_sym_protected] = ACTIONS(759),
        [anon_sym_internal] = ACTIONS(759),
        [anon_sym_private] = ACTIONS(759),
        [anon_sym_unsafe] = ACTIONS(759),
        [sym_comment] = ACTIONS(81),
    },
    [207] = {
        [anon_sym_class] = ACTIONS(800),
        [anon_sym_struct] = ACTIONS(800),
        [anon_sym_LBRACK] = ACTIONS(803),
        [anon_sym_abstract] = ACTIONS(800),
        [anon_sym_sealed] = ACTIONS(800),
        [anon_sym_static] = ACTIONS(800),
        [anon_sym_new] = ACTIONS(800),
        [anon_sym_public] = ACTIONS(800),
        [anon_sym_protected] = ACTIONS(800),
        [anon_sym_internal] = ACTIONS(800),
        [anon_sym_private] = ACTIONS(800),
        [anon_sym_unsafe] = ACTIONS(800),
        [anon_sym_readonly] = ACTIONS(800),
        [anon_sym_volatile] = ACTIONS(800),
        [anon_sym_bool] = ACTIONS(800),
        [anon_sym_byte] = ACTIONS(800),
        [anon_sym_char] = ACTIONS(800),
        [anon_sym_decimal] = ACTIONS(800),
        [anon_sym_double] = ACTIONS(800),
        [anon_sym_float] = ACTIONS(800),
        [anon_sym_int] = ACTIONS(800),
        [anon_sym_long] = ACTIONS(800),
        [anon_sym_object] = ACTIONS(800),
        [anon_sym_sbyte] = ACTIONS(800),
        [anon_sym_short] = ACTIONS(800),
        [anon_sym_string] = ACTIONS(800),
        [anon_sym_uint] = ACTIONS(800),
        [anon_sym_ulong] = ACTIONS(800),
        [anon_sym_ushort] = ACTIONS(800),
        [sym_identifier_name] = ACTIONS(806),
        [sym_comment] = ACTIONS(81),
    },
    [208] = {
        [anon_sym_RBRACK] = ACTIONS(809),
        [sym_comment] = ACTIONS(81),
    },
    [209] = {
        [aux_sym_attribute_list_repeat1] = STATE(27),
        [anon_sym_RBRACK] = ACTIONS(811),
        [anon_sym_COMMA] = ACTIONS(815),
        [sym_comment] = ACTIONS(81),
    },
    [210] = {
        [anon_sym_RBRACE] = ACTIONS(819),
        [anon_sym_class] = ACTIONS(794),
        [anon_sym_struct] = ACTIONS(794),
        [anon_sym_LBRACK] = ACTIONS(819),
        [anon_sym_abstract] = ACTIONS(794),
        [anon_sym_sealed] = ACTIONS(794),
        [anon_sym_static] = ACTIONS(794),
        [anon_sym_new] = ACTIONS(794),
        [anon_sym_public] = ACTIONS(794),
        [anon_sym_protected] = ACTIONS(794),
        [anon_sym_internal] = ACTIONS(794),
        [anon_sym_private] = ACTIONS(794),
        [anon_sym_unsafe] = ACTIONS(794),
        [anon_sym_readonly] = ACTIONS(794),
        [anon_sym_volatile] = ACTIONS(794),
        [anon_sym_bool] = ACTIONS(794),
        [anon_sym_byte] = ACTIONS(794),
        [anon_sym_char] = ACTIONS(794),
        [anon_sym_decimal] = ACTIONS(794),
        [anon_sym_double] = ACTIONS(794),
        [anon_sym_float] = ACTIONS(794),
        [anon_sym_int] = ACTIONS(794),
        [anon_sym_long] = ACTIONS(794),
        [anon_sym_object] = ACTIONS(794),
        [anon_sym_sbyte] = ACTIONS(794),
        [anon_sym_short] = ACTIONS(794),
        [anon_sym_string] = ACTIONS(794),
        [anon_sym_uint] = ACTIONS(794),
        [anon_sym_ulong] = ACTIONS(794),
        [anon_sym_ushort] = ACTIONS(794),
        [sym_identifier_name] = ACTIONS(797),
        [sym_comment] = ACTIONS(81),
    },
    [211] = {
        [anon_sym_SEMI] = ACTIONS(822),
        [sym_comment] = ACTIONS(81),
    },
    [212] = {
        [sym_variable_declarator] = STATE(75),
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_GT] = ACTIONS(495),
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(81),
    },
    [213] = {
        [aux_sym_variable_declaration_repeat1] = STATE(77),
        [anon_sym_SEMI] = ACTIONS(824),
        [anon_sym_COMMA] = ACTIONS(828),
        [sym_comment] = ACTIONS(81),
    },
    [214] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(832),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(835),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(835),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(835),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(835),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(835),
        [anon_sym_BSLASH0] = ACTIONS(835),
        [anon_sym_BSLASHa] = ACTIONS(835),
        [anon_sym_BSLASHb] = ACTIONS(835),
        [anon_sym_BSLASHf] = ACTIONS(835),
        [anon_sym_BSLASHn] = ACTIONS(835),
        [anon_sym_BSLASHr] = ACTIONS(835),
        [anon_sym_BSLASHt] = ACTIONS(835),
        [anon_sym_BSLASHv] = ACTIONS(835),
        [anon_sym_DQUOTE] = ACTIONS(835),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(832),
        [sym_comment] = ACTIONS(81),
    },
    [215] = {
        [anon_sym_class] = ACTIONS(838),
        [sym_comment] = ACTIONS(81),
    },
    [216] = {
        [anon_sym_class] = ACTIONS(840),
        [sym_comment] = ACTIONS(81),
    },
    [217] = {
        [anon_sym_struct] = ACTIONS(843),
        [sym_comment] = ACTIONS(81),
    },
    [218] = {
        [anon_sym_struct] = ACTIONS(845),
        [sym_comment] = ACTIONS(81),
    },
    [219] = {
        [sym_variable_declaration] = STATE(232),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_predefined_type] = STATE(54),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [220] = {
        [anon_sym_bool] = ACTIONS(848),
        [anon_sym_byte] = ACTIONS(848),
        [anon_sym_char] = ACTIONS(848),
        [anon_sym_decimal] = ACTIONS(848),
        [anon_sym_double] = ACTIONS(848),
        [anon_sym_float] = ACTIONS(848),
        [anon_sym_int] = ACTIONS(848),
        [anon_sym_long] = ACTIONS(848),
        [anon_sym_object] = ACTIONS(848),
        [anon_sym_sbyte] = ACTIONS(848),
        [anon_sym_short] = ACTIONS(848),
        [anon_sym_string] = ACTIONS(848),
        [anon_sym_uint] = ACTIONS(848),
        [anon_sym_ulong] = ACTIONS(848),
        [anon_sym_ushort] = ACTIONS(848),
        [sym_identifier_name] = ACTIONS(851),
        [sym_comment] = ACTIONS(81),
    },
    [221] = {
        [anon_sym_LBRACE] = ACTIONS(854),
        [anon_sym_COMMA] = ACTIONS(491),
        [anon_sym_GT] = ACTIONS(491),
        [sym_identifier_name] = ACTIONS(493),
        [sym_comment] = ACTIONS(81),
    },
    [222] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(141),
        [anon_sym_COMMA] = ACTIONS(856),
        [anon_sym_GT] = ACTIONS(860),
        [sym_comment] = ACTIONS(81),
    },
    [223] = {
        [anon_sym_SEMI] = ACTIONS(864),
        [anon_sym_LBRACE] = ACTIONS(555),
        [anon_sym_DOT] = ACTIONS(557),
        [sym_comment] = ACTIONS(81),
    },
    [224] = {
        [sym_namespace_declaration] = STATE(35),
        [sym_class_declaration] = STATE(35),
        [sym_struct_declaration] = STATE(35),
        [sym__global_attributes] = STATE(35),
        [sym__attributes] = STATE(12),
        [sym__attribute_section] = STATE(13),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [aux_sym__attributes_repeat1] = STATE(20),
        [ts_builtin_sym_end] = ACTIONS(866),
        [anon_sym_namespace] = ACTIONS(87),
        [anon_sym_class] = ACTIONS(89),
        [anon_sym_struct] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(93),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_unsafe] = ACTIONS(97),
        [sym_comment] = ACTIONS(81),
    },
    [225] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [226] = {
        [ts_builtin_sym_end] = ACTIONS(871),
        [anon_sym_namespace] = ACTIONS(880),
        [anon_sym_RBRACE] = ACTIONS(871),
        [anon_sym_class] = ACTIONS(880),
        [anon_sym_struct] = ACTIONS(880),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_abstract] = ACTIONS(880),
        [anon_sym_sealed] = ACTIONS(880),
        [anon_sym_static] = ACTIONS(880),
        [anon_sym_new] = ACTIONS(880),
        [anon_sym_public] = ACTIONS(880),
        [anon_sym_protected] = ACTIONS(880),
        [anon_sym_internal] = ACTIONS(880),
        [anon_sym_private] = ACTIONS(880),
        [anon_sym_unsafe] = ACTIONS(880),
        [anon_sym_readonly] = ACTIONS(880),
        [anon_sym_volatile] = ACTIONS(880),
        [anon_sym_bool] = ACTIONS(880),
        [anon_sym_byte] = ACTIONS(880),
        [anon_sym_char] = ACTIONS(880),
        [anon_sym_decimal] = ACTIONS(880),
        [anon_sym_double] = ACTIONS(880),
        [anon_sym_float] = ACTIONS(880),
        [anon_sym_int] = ACTIONS(880),
        [anon_sym_long] = ACTIONS(880),
        [anon_sym_object] = ACTIONS(880),
        [anon_sym_sbyte] = ACTIONS(880),
        [anon_sym_short] = ACTIONS(880),
        [anon_sym_string] = ACTIONS(880),
        [anon_sym_uint] = ACTIONS(880),
        [anon_sym_ulong] = ACTIONS(880),
        [anon_sym_ushort] = ACTIONS(880),
        [sym_identifier_name] = ACTIONS(889),
        [sym_comment] = ACTIONS(81),
    },
    [227] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_using] = ACTIONS(599),
        [anon_sym_namespace] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_struct] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [anon_sym_abstract] = ACTIONS(599),
        [anon_sym_sealed] = ACTIONS(599),
        [anon_sym_static] = ACTIONS(599),
        [anon_sym_new] = ACTIONS(599),
        [anon_sym_public] = ACTIONS(599),
        [anon_sym_protected] = ACTIONS(599),
        [anon_sym_internal] = ACTIONS(599),
        [anon_sym_private] = ACTIONS(599),
        [anon_sym_unsafe] = ACTIONS(599),
        [sym_comment] = ACTIONS(81),
    },
    [228] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(230),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(898),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [229] = {
        [ts_builtin_sym_end] = ACTIONS(900),
        [anon_sym_namespace] = ACTIONS(907),
        [anon_sym_RBRACE] = ACTIONS(900),
        [anon_sym_class] = ACTIONS(907),
        [anon_sym_struct] = ACTIONS(907),
        [anon_sym_LBRACK] = ACTIONS(900),
        [anon_sym_abstract] = ACTIONS(907),
        [anon_sym_sealed] = ACTIONS(907),
        [anon_sym_static] = ACTIONS(907),
        [anon_sym_new] = ACTIONS(907),
        [anon_sym_public] = ACTIONS(907),
        [anon_sym_protected] = ACTIONS(907),
        [anon_sym_internal] = ACTIONS(907),
        [anon_sym_private] = ACTIONS(907),
        [anon_sym_unsafe] = ACTIONS(907),
        [anon_sym_readonly] = ACTIONS(907),
        [anon_sym_volatile] = ACTIONS(907),
        [anon_sym_bool] = ACTIONS(907),
        [anon_sym_byte] = ACTIONS(907),
        [anon_sym_char] = ACTIONS(907),
        [anon_sym_decimal] = ACTIONS(907),
        [anon_sym_double] = ACTIONS(907),
        [anon_sym_float] = ACTIONS(907),
        [anon_sym_int] = ACTIONS(907),
        [anon_sym_long] = ACTIONS(907),
        [anon_sym_object] = ACTIONS(907),
        [anon_sym_sbyte] = ACTIONS(907),
        [anon_sym_short] = ACTIONS(907),
        [anon_sym_string] = ACTIONS(907),
        [anon_sym_uint] = ACTIONS(907),
        [anon_sym_ulong] = ACTIONS(907),
        [anon_sym_ushort] = ACTIONS(907),
        [sym_identifier_name] = ACTIONS(914),
        [sym_comment] = ACTIONS(81),
    },
    [230] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(921),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [231] = {
        [ts_builtin_sym_end] = ACTIONS(923),
        [anon_sym_namespace] = ACTIONS(930),
        [anon_sym_RBRACE] = ACTIONS(923),
        [anon_sym_class] = ACTIONS(930),
        [anon_sym_struct] = ACTIONS(930),
        [anon_sym_LBRACK] = ACTIONS(923),
        [anon_sym_abstract] = ACTIONS(930),
        [anon_sym_sealed] = ACTIONS(930),
        [anon_sym_static] = ACTIONS(930),
        [anon_sym_new] = ACTIONS(930),
        [anon_sym_public] = ACTIONS(930),
        [anon_sym_protected] = ACTIONS(930),
        [anon_sym_internal] = ACTIONS(930),
        [anon_sym_private] = ACTIONS(930),
        [anon_sym_unsafe] = ACTIONS(930),
        [anon_sym_readonly] = ACTIONS(930),
        [anon_sym_volatile] = ACTIONS(930),
        [anon_sym_bool] = ACTIONS(930),
        [anon_sym_byte] = ACTIONS(930),
        [anon_sym_char] = ACTIONS(930),
        [anon_sym_decimal] = ACTIONS(930),
        [anon_sym_double] = ACTIONS(930),
        [anon_sym_float] = ACTIONS(930),
        [anon_sym_int] = ACTIONS(930),
        [anon_sym_long] = ACTIONS(930),
        [anon_sym_object] = ACTIONS(930),
        [anon_sym_sbyte] = ACTIONS(930),
        [anon_sym_short] = ACTIONS(930),
        [anon_sym_string] = ACTIONS(930),
        [anon_sym_uint] = ACTIONS(930),
        [anon_sym_ulong] = ACTIONS(930),
        [anon_sym_ushort] = ACTIONS(930),
        [sym_identifier_name] = ACTIONS(937),
        [sym_comment] = ACTIONS(81),
    },
    [232] = {
        [anon_sym_SEMI] = ACTIONS(944),
        [sym_comment] = ACTIONS(81),
    },
    [233] = {
        [anon_sym_RBRACE] = ACTIONS(946),
        [anon_sym_class] = ACTIONS(949),
        [anon_sym_struct] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(946),
        [anon_sym_abstract] = ACTIONS(949),
        [anon_sym_sealed] = ACTIONS(949),
        [anon_sym_static] = ACTIONS(949),
        [anon_sym_new] = ACTIONS(949),
        [anon_sym_public] = ACTIONS(949),
        [anon_sym_protected] = ACTIONS(949),
        [anon_sym_internal] = ACTIONS(949),
        [anon_sym_private] = ACTIONS(949),
        [anon_sym_unsafe] = ACTIONS(949),
        [anon_sym_readonly] = ACTIONS(949),
        [anon_sym_volatile] = ACTIONS(949),
        [anon_sym_bool] = ACTIONS(949),
        [anon_sym_byte] = ACTIONS(949),
        [anon_sym_char] = ACTIONS(949),
        [anon_sym_decimal] = ACTIONS(949),
        [anon_sym_double] = ACTIONS(949),
        [anon_sym_float] = ACTIONS(949),
        [anon_sym_int] = ACTIONS(949),
        [anon_sym_long] = ACTIONS(949),
        [anon_sym_object] = ACTIONS(949),
        [anon_sym_sbyte] = ACTIONS(949),
        [anon_sym_short] = ACTIONS(949),
        [anon_sym_string] = ACTIONS(949),
        [anon_sym_uint] = ACTIONS(949),
        [anon_sym_ulong] = ACTIONS(949),
        [anon_sym_ushort] = ACTIONS(949),
        [sym_identifier_name] = ACTIONS(952),
        [sym_comment] = ACTIONS(81),
    },
    [234] = {
        [sym_identifier_name] = ACTIONS(955),
        [sym_comment] = ACTIONS(81),
    },
    [235] = {
        [sym_type_parameter_list] = STATE(237),
        [anon_sym_LBRACE] = ACTIONS(957),
        [anon_sym_LT] = ACTIONS(195),
        [sym_comment] = ACTIONS(81),
    },
    [236] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(243),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(959),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [237] = {
        [anon_sym_LBRACE] = ACTIONS(961),
        [sym_comment] = ACTIONS(81),
    },
    [238] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(240),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(963),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [239] = {
        [ts_builtin_sym_end] = ACTIONS(965),
        [anon_sym_namespace] = ACTIONS(968),
        [anon_sym_RBRACE] = ACTIONS(965),
        [anon_sym_class] = ACTIONS(968),
        [anon_sym_struct] = ACTIONS(968),
        [anon_sym_LBRACK] = ACTIONS(965),
        [anon_sym_abstract] = ACTIONS(968),
        [anon_sym_sealed] = ACTIONS(968),
        [anon_sym_static] = ACTIONS(968),
        [anon_sym_new] = ACTIONS(968),
        [anon_sym_public] = ACTIONS(968),
        [anon_sym_protected] = ACTIONS(968),
        [anon_sym_internal] = ACTIONS(968),
        [anon_sym_private] = ACTIONS(968),
        [anon_sym_unsafe] = ACTIONS(968),
        [anon_sym_readonly] = ACTIONS(968),
        [anon_sym_volatile] = ACTIONS(968),
        [anon_sym_bool] = ACTIONS(968),
        [anon_sym_byte] = ACTIONS(968),
        [anon_sym_char] = ACTIONS(968),
        [anon_sym_decimal] = ACTIONS(968),
        [anon_sym_double] = ACTIONS(968),
        [anon_sym_float] = ACTIONS(968),
        [anon_sym_int] = ACTIONS(968),
        [anon_sym_long] = ACTIONS(968),
        [anon_sym_object] = ACTIONS(968),
        [anon_sym_sbyte] = ACTIONS(968),
        [anon_sym_short] = ACTIONS(968),
        [anon_sym_string] = ACTIONS(968),
        [anon_sym_uint] = ACTIONS(968),
        [anon_sym_ulong] = ACTIONS(968),
        [anon_sym_ushort] = ACTIONS(968),
        [sym_identifier_name] = ACTIONS(971),
        [sym_comment] = ACTIONS(81),
    },
    [240] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(974),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [241] = {
        [ts_builtin_sym_end] = ACTIONS(976),
        [anon_sym_namespace] = ACTIONS(979),
        [anon_sym_RBRACE] = ACTIONS(976),
        [anon_sym_class] = ACTIONS(979),
        [anon_sym_struct] = ACTIONS(979),
        [anon_sym_LBRACK] = ACTIONS(976),
        [anon_sym_abstract] = ACTIONS(979),
        [anon_sym_sealed] = ACTIONS(979),
        [anon_sym_static] = ACTIONS(979),
        [anon_sym_new] = ACTIONS(979),
        [anon_sym_public] = ACTIONS(979),
        [anon_sym_protected] = ACTIONS(979),
        [anon_sym_internal] = ACTIONS(979),
        [anon_sym_private] = ACTIONS(979),
        [anon_sym_unsafe] = ACTIONS(979),
        [anon_sym_readonly] = ACTIONS(979),
        [anon_sym_volatile] = ACTIONS(979),
        [anon_sym_bool] = ACTIONS(979),
        [anon_sym_byte] = ACTIONS(979),
        [anon_sym_char] = ACTIONS(979),
        [anon_sym_decimal] = ACTIONS(979),
        [anon_sym_double] = ACTIONS(979),
        [anon_sym_float] = ACTIONS(979),
        [anon_sym_int] = ACTIONS(979),
        [anon_sym_long] = ACTIONS(979),
        [anon_sym_object] = ACTIONS(979),
        [anon_sym_sbyte] = ACTIONS(979),
        [anon_sym_short] = ACTIONS(979),
        [anon_sym_string] = ACTIONS(979),
        [anon_sym_uint] = ACTIONS(979),
        [anon_sym_ulong] = ACTIONS(979),
        [anon_sym_ushort] = ACTIONS(979),
        [sym_identifier_name] = ACTIONS(982),
        [sym_comment] = ACTIONS(81),
    },
    [242] = {
        [ts_builtin_sym_end] = ACTIONS(985),
        [anon_sym_namespace] = ACTIONS(988),
        [anon_sym_RBRACE] = ACTIONS(985),
        [anon_sym_class] = ACTIONS(988),
        [anon_sym_struct] = ACTIONS(988),
        [anon_sym_LBRACK] = ACTIONS(985),
        [anon_sym_abstract] = ACTIONS(988),
        [anon_sym_sealed] = ACTIONS(988),
        [anon_sym_static] = ACTIONS(988),
        [anon_sym_new] = ACTIONS(988),
        [anon_sym_public] = ACTIONS(988),
        [anon_sym_protected] = ACTIONS(988),
        [anon_sym_internal] = ACTIONS(988),
        [anon_sym_private] = ACTIONS(988),
        [anon_sym_unsafe] = ACTIONS(988),
        [anon_sym_readonly] = ACTIONS(988),
        [anon_sym_volatile] = ACTIONS(988),
        [anon_sym_bool] = ACTIONS(988),
        [anon_sym_byte] = ACTIONS(988),
        [anon_sym_char] = ACTIONS(988),
        [anon_sym_decimal] = ACTIONS(988),
        [anon_sym_double] = ACTIONS(988),
        [anon_sym_float] = ACTIONS(988),
        [anon_sym_int] = ACTIONS(988),
        [anon_sym_long] = ACTIONS(988),
        [anon_sym_object] = ACTIONS(988),
        [anon_sym_sbyte] = ACTIONS(988),
        [anon_sym_short] = ACTIONS(988),
        [anon_sym_string] = ACTIONS(988),
        [anon_sym_uint] = ACTIONS(988),
        [anon_sym_ulong] = ACTIONS(988),
        [anon_sym_ushort] = ACTIONS(988),
        [sym_identifier_name] = ACTIONS(991),
        [sym_comment] = ACTIONS(81),
    },
    [243] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(963),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [244] = {
        [sym_identifier_name] = ACTIONS(994),
        [sym_comment] = ACTIONS(81),
    },
    [245] = {
        [sym_type_parameter_list] = STATE(247),
        [anon_sym_LBRACE] = ACTIONS(996),
        [anon_sym_LT] = ACTIONS(195),
        [sym_comment] = ACTIONS(81),
    },
    [246] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(253),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(998),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [247] = {
        [anon_sym_LBRACE] = ACTIONS(1000),
        [sym_comment] = ACTIONS(81),
    },
    [248] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(250),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1002),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [249] = {
        [ts_builtin_sym_end] = ACTIONS(1004),
        [anon_sym_namespace] = ACTIONS(1007),
        [anon_sym_RBRACE] = ACTIONS(1004),
        [anon_sym_class] = ACTIONS(1007),
        [anon_sym_struct] = ACTIONS(1007),
        [anon_sym_LBRACK] = ACTIONS(1004),
        [anon_sym_abstract] = ACTIONS(1007),
        [anon_sym_sealed] = ACTIONS(1007),
        [anon_sym_static] = ACTIONS(1007),
        [anon_sym_new] = ACTIONS(1007),
        [anon_sym_public] = ACTIONS(1007),
        [anon_sym_protected] = ACTIONS(1007),
        [anon_sym_internal] = ACTIONS(1007),
        [anon_sym_private] = ACTIONS(1007),
        [anon_sym_unsafe] = ACTIONS(1007),
        [anon_sym_readonly] = ACTIONS(1007),
        [anon_sym_volatile] = ACTIONS(1007),
        [anon_sym_bool] = ACTIONS(1007),
        [anon_sym_byte] = ACTIONS(1007),
        [anon_sym_char] = ACTIONS(1007),
        [anon_sym_decimal] = ACTIONS(1007),
        [anon_sym_double] = ACTIONS(1007),
        [anon_sym_float] = ACTIONS(1007),
        [anon_sym_int] = ACTIONS(1007),
        [anon_sym_long] = ACTIONS(1007),
        [anon_sym_object] = ACTIONS(1007),
        [anon_sym_sbyte] = ACTIONS(1007),
        [anon_sym_short] = ACTIONS(1007),
        [anon_sym_string] = ACTIONS(1007),
        [anon_sym_uint] = ACTIONS(1007),
        [anon_sym_ulong] = ACTIONS(1007),
        [anon_sym_ushort] = ACTIONS(1007),
        [sym_identifier_name] = ACTIONS(1010),
        [sym_comment] = ACTIONS(81),
    },
    [250] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1013),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [251] = {
        [ts_builtin_sym_end] = ACTIONS(1015),
        [anon_sym_namespace] = ACTIONS(1018),
        [anon_sym_RBRACE] = ACTIONS(1015),
        [anon_sym_class] = ACTIONS(1018),
        [anon_sym_struct] = ACTIONS(1018),
        [anon_sym_LBRACK] = ACTIONS(1015),
        [anon_sym_abstract] = ACTIONS(1018),
        [anon_sym_sealed] = ACTIONS(1018),
        [anon_sym_static] = ACTIONS(1018),
        [anon_sym_new] = ACTIONS(1018),
        [anon_sym_public] = ACTIONS(1018),
        [anon_sym_protected] = ACTIONS(1018),
        [anon_sym_internal] = ACTIONS(1018),
        [anon_sym_private] = ACTIONS(1018),
        [anon_sym_unsafe] = ACTIONS(1018),
        [anon_sym_readonly] = ACTIONS(1018),
        [anon_sym_volatile] = ACTIONS(1018),
        [anon_sym_bool] = ACTIONS(1018),
        [anon_sym_byte] = ACTIONS(1018),
        [anon_sym_char] = ACTIONS(1018),
        [anon_sym_decimal] = ACTIONS(1018),
        [anon_sym_double] = ACTIONS(1018),
        [anon_sym_float] = ACTIONS(1018),
        [anon_sym_int] = ACTIONS(1018),
        [anon_sym_long] = ACTIONS(1018),
        [anon_sym_object] = ACTIONS(1018),
        [anon_sym_sbyte] = ACTIONS(1018),
        [anon_sym_short] = ACTIONS(1018),
        [anon_sym_string] = ACTIONS(1018),
        [anon_sym_uint] = ACTIONS(1018),
        [anon_sym_ulong] = ACTIONS(1018),
        [anon_sym_ushort] = ACTIONS(1018),
        [sym_identifier_name] = ACTIONS(1021),
        [sym_comment] = ACTIONS(81),
    },
    [252] = {
        [ts_builtin_sym_end] = ACTIONS(1024),
        [anon_sym_namespace] = ACTIONS(1027),
        [anon_sym_RBRACE] = ACTIONS(1024),
        [anon_sym_class] = ACTIONS(1027),
        [anon_sym_struct] = ACTIONS(1027),
        [anon_sym_LBRACK] = ACTIONS(1024),
        [anon_sym_abstract] = ACTIONS(1027),
        [anon_sym_sealed] = ACTIONS(1027),
        [anon_sym_static] = ACTIONS(1027),
        [anon_sym_new] = ACTIONS(1027),
        [anon_sym_public] = ACTIONS(1027),
        [anon_sym_protected] = ACTIONS(1027),
        [anon_sym_internal] = ACTIONS(1027),
        [anon_sym_private] = ACTIONS(1027),
        [anon_sym_unsafe] = ACTIONS(1027),
        [anon_sym_readonly] = ACTIONS(1027),
        [anon_sym_volatile] = ACTIONS(1027),
        [anon_sym_bool] = ACTIONS(1027),
        [anon_sym_byte] = ACTIONS(1027),
        [anon_sym_char] = ACTIONS(1027),
        [anon_sym_decimal] = ACTIONS(1027),
        [anon_sym_double] = ACTIONS(1027),
        [anon_sym_float] = ACTIONS(1027),
        [anon_sym_int] = ACTIONS(1027),
        [anon_sym_long] = ACTIONS(1027),
        [anon_sym_object] = ACTIONS(1027),
        [anon_sym_sbyte] = ACTIONS(1027),
        [anon_sym_short] = ACTIONS(1027),
        [anon_sym_string] = ACTIONS(1027),
        [anon_sym_uint] = ACTIONS(1027),
        [anon_sym_ulong] = ACTIONS(1027),
        [anon_sym_ushort] = ACTIONS(1027),
        [sym_identifier_name] = ACTIONS(1030),
        [sym_comment] = ACTIONS(81),
    },
    [253] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1002),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [254] = {
        [anon_sym_RBRACE] = ACTIONS(605),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_struct] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(605),
        [anon_sym_abstract] = ACTIONS(621),
        [anon_sym_sealed] = ACTIONS(621),
        [anon_sym_static] = ACTIONS(621),
        [anon_sym_new] = ACTIONS(621),
        [anon_sym_public] = ACTIONS(621),
        [anon_sym_protected] = ACTIONS(621),
        [anon_sym_internal] = ACTIONS(621),
        [anon_sym_private] = ACTIONS(621),
        [anon_sym_unsafe] = ACTIONS(621),
        [anon_sym_readonly] = ACTIONS(621),
        [anon_sym_volatile] = ACTIONS(621),
        [anon_sym_bool] = ACTIONS(621),
        [anon_sym_byte] = ACTIONS(621),
        [anon_sym_char] = ACTIONS(621),
        [anon_sym_decimal] = ACTIONS(621),
        [anon_sym_double] = ACTIONS(621),
        [anon_sym_float] = ACTIONS(621),
        [anon_sym_int] = ACTIONS(621),
        [anon_sym_long] = ACTIONS(621),
        [anon_sym_object] = ACTIONS(621),
        [anon_sym_sbyte] = ACTIONS(621),
        [anon_sym_short] = ACTIONS(621),
        [anon_sym_string] = ACTIONS(621),
        [anon_sym_uint] = ACTIONS(621),
        [anon_sym_ulong] = ACTIONS(621),
        [anon_sym_ushort] = ACTIONS(621),
        [sym_identifier_name] = ACTIONS(625),
        [sym_comment] = ACTIONS(81),
    },
    [255] = {
        [sym_namespace_declaration] = STATE(171),
        [sym_class_declaration] = STATE(257),
        [sym_struct_declaration] = STATE(257),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_namespace_declaration_repeat1] = STATE(172),
        [aux_sym_class_declaration_repeat1] = STATE(258),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_namespace] = ACTIONS(629),
        [anon_sym_RBRACE] = ACTIONS(1033),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [256] = {
        [ts_builtin_sym_end] = ACTIONS(1035),
        [anon_sym_namespace] = ACTIONS(1043),
        [anon_sym_RBRACE] = ACTIONS(1035),
        [anon_sym_class] = ACTIONS(1043),
        [anon_sym_struct] = ACTIONS(1043),
        [anon_sym_LBRACK] = ACTIONS(1035),
        [anon_sym_abstract] = ACTIONS(1043),
        [anon_sym_sealed] = ACTIONS(1043),
        [anon_sym_static] = ACTIONS(1043),
        [anon_sym_new] = ACTIONS(1043),
        [anon_sym_public] = ACTIONS(1043),
        [anon_sym_protected] = ACTIONS(1043),
        [anon_sym_internal] = ACTIONS(1043),
        [anon_sym_private] = ACTIONS(1043),
        [anon_sym_unsafe] = ACTIONS(1043),
        [anon_sym_readonly] = ACTIONS(1051),
        [anon_sym_volatile] = ACTIONS(1051),
        [anon_sym_bool] = ACTIONS(1051),
        [anon_sym_byte] = ACTIONS(1051),
        [anon_sym_char] = ACTIONS(1051),
        [anon_sym_decimal] = ACTIONS(1051),
        [anon_sym_double] = ACTIONS(1051),
        [anon_sym_float] = ACTIONS(1051),
        [anon_sym_int] = ACTIONS(1051),
        [anon_sym_long] = ACTIONS(1051),
        [anon_sym_object] = ACTIONS(1051),
        [anon_sym_sbyte] = ACTIONS(1051),
        [anon_sym_short] = ACTIONS(1051),
        [anon_sym_string] = ACTIONS(1051),
        [anon_sym_uint] = ACTIONS(1051),
        [anon_sym_ulong] = ACTIONS(1051),
        [anon_sym_ushort] = ACTIONS(1051),
        [sym_identifier_name] = ACTIONS(1058),
        [sym_comment] = ACTIONS(81),
    },
    [257] = {
        [anon_sym_namespace] = ACTIONS(1065),
        [anon_sym_RBRACE] = ACTIONS(1067),
        [anon_sym_class] = ACTIONS(1070),
        [anon_sym_struct] = ACTIONS(1070),
        [anon_sym_LBRACK] = ACTIONS(1067),
        [anon_sym_abstract] = ACTIONS(1070),
        [anon_sym_sealed] = ACTIONS(1070),
        [anon_sym_static] = ACTIONS(1070),
        [anon_sym_new] = ACTIONS(1070),
        [anon_sym_public] = ACTIONS(1070),
        [anon_sym_protected] = ACTIONS(1070),
        [anon_sym_internal] = ACTIONS(1070),
        [anon_sym_private] = ACTIONS(1070),
        [anon_sym_unsafe] = ACTIONS(1070),
        [anon_sym_readonly] = ACTIONS(243),
        [anon_sym_volatile] = ACTIONS(243),
        [anon_sym_bool] = ACTIONS(243),
        [anon_sym_byte] = ACTIONS(243),
        [anon_sym_char] = ACTIONS(243),
        [anon_sym_decimal] = ACTIONS(243),
        [anon_sym_double] = ACTIONS(243),
        [anon_sym_float] = ACTIONS(243),
        [anon_sym_int] = ACTIONS(243),
        [anon_sym_long] = ACTIONS(243),
        [anon_sym_object] = ACTIONS(243),
        [anon_sym_sbyte] = ACTIONS(243),
        [anon_sym_short] = ACTIONS(243),
        [anon_sym_string] = ACTIONS(243),
        [anon_sym_uint] = ACTIONS(243),
        [anon_sym_ulong] = ACTIONS(243),
        [anon_sym_ushort] = ACTIONS(243),
        [sym_identifier_name] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [258] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(898),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [259] = {
        [anon_sym_SEMI] = ACTIONS(1073),
        [anon_sym_COMMA] = ACTIONS(1073),
        [sym_comment] = ACTIONS(81),
    },
    [260] = {
        [anon_sym_SEMI] = ACTIONS(1077),
        [anon_sym_COMMA] = ACTIONS(1077),
        [sym__real_type_suffix] = ACTIONS(1080),
        [sym__exponent_part] = ACTIONS(1082),
        [sym_comment] = ACTIONS(81),
    },
    [261] = {
        [anon_sym_SEMI] = ACTIONS(1084),
        [anon_sym_COMMA] = ACTIONS(1084),
        [sym_comment] = ACTIONS(81),
    },
    [262] = {
        [anon_sym_SEMI] = ACTIONS(1084),
        [anon_sym_COMMA] = ACTIONS(1084),
        [sym__real_type_suffix] = ACTIONS(1087),
        [sym_comment] = ACTIONS(81),
    },
    [263] = {
        [anon_sym_SEMI] = ACTIONS(1089),
        [anon_sym_COMMA] = ACTIONS(1089),
        [sym_comment] = ACTIONS(81),
    },
    [264] = {
        [anon_sym_SEMI] = ACTIONS(718),
        [anon_sym_COMMA] = ACTIONS(718),
        [sym_comment] = ACTIONS(81),
    },
    [265] = {
        [sym_attribute_argument_list] = STATE(33),
        [sym_equals_value_clause] = STATE(82),
        [sym_type_parameter_list] = STATE(136),
        [anon_sym_SEMI] = ACTIONS(317),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_COMMA] = ACTIONS(746),
        [anon_sym_LPAREN] = ACTIONS(157),
        [anon_sym_EQ] = ACTIONS(319),
        [anon_sym_LT] = ACTIONS(195),
        [anon_sym_GT] = ACTIONS(237),
        [sym_comment] = ACTIONS(81),
    },
    [266] = {
        [anon_sym_RBRACK] = ACTIONS(1092),
        [anon_sym_COMMA] = ACTIONS(1092),
        [sym_comment] = ACTIONS(81),
    },
    [267] = {
        [anon_sym_SEMI] = ACTIONS(1095),
        [anon_sym_COMMA] = ACTIONS(1095),
        [sym_comment] = ACTIONS(81),
    },
    [268] = {
        [anon_sym_COMMA] = ACTIONS(1098),
        [anon_sym_GT] = ACTIONS(1098),
        [sym_comment] = ACTIONS(81),
    },
    [269] = {
        [sym_type_parameter_list] = STATE(271),
        [anon_sym_LBRACE] = ACTIONS(1101),
        [anon_sym_LT] = ACTIONS(195),
        [sym_comment] = ACTIONS(81),
    },
    [270] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(277),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [271] = {
        [anon_sym_LBRACE] = ACTIONS(1105),
        [sym_comment] = ACTIONS(81),
    },
    [272] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(274),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1107),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [273] = {
        [ts_builtin_sym_end] = ACTIONS(1109),
        [anon_sym_namespace] = ACTIONS(1113),
        [anon_sym_RBRACE] = ACTIONS(1109),
        [anon_sym_class] = ACTIONS(1113),
        [anon_sym_struct] = ACTIONS(1113),
        [anon_sym_LBRACK] = ACTIONS(1109),
        [anon_sym_abstract] = ACTIONS(1113),
        [anon_sym_sealed] = ACTIONS(1113),
        [anon_sym_static] = ACTIONS(1113),
        [anon_sym_new] = ACTIONS(1113),
        [anon_sym_public] = ACTIONS(1113),
        [anon_sym_protected] = ACTIONS(1113),
        [anon_sym_internal] = ACTIONS(1113),
        [anon_sym_private] = ACTIONS(1113),
        [anon_sym_unsafe] = ACTIONS(1113),
        [anon_sym_readonly] = ACTIONS(1113),
        [anon_sym_volatile] = ACTIONS(1113),
        [anon_sym_bool] = ACTIONS(1113),
        [anon_sym_byte] = ACTIONS(1113),
        [anon_sym_char] = ACTIONS(1113),
        [anon_sym_decimal] = ACTIONS(1113),
        [anon_sym_double] = ACTIONS(1113),
        [anon_sym_float] = ACTIONS(1113),
        [anon_sym_int] = ACTIONS(1113),
        [anon_sym_long] = ACTIONS(1113),
        [anon_sym_object] = ACTIONS(1113),
        [anon_sym_sbyte] = ACTIONS(1113),
        [anon_sym_short] = ACTIONS(1113),
        [anon_sym_string] = ACTIONS(1113),
        [anon_sym_uint] = ACTIONS(1113),
        [anon_sym_ulong] = ACTIONS(1113),
        [anon_sym_ushort] = ACTIONS(1113),
        [sym_identifier_name] = ACTIONS(1117),
        [sym_comment] = ACTIONS(81),
    },
    [274] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1121),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [275] = {
        [ts_builtin_sym_end] = ACTIONS(1123),
        [anon_sym_namespace] = ACTIONS(1127),
        [anon_sym_RBRACE] = ACTIONS(1123),
        [anon_sym_class] = ACTIONS(1127),
        [anon_sym_struct] = ACTIONS(1127),
        [anon_sym_LBRACK] = ACTIONS(1123),
        [anon_sym_abstract] = ACTIONS(1127),
        [anon_sym_sealed] = ACTIONS(1127),
        [anon_sym_static] = ACTIONS(1127),
        [anon_sym_new] = ACTIONS(1127),
        [anon_sym_public] = ACTIONS(1127),
        [anon_sym_protected] = ACTIONS(1127),
        [anon_sym_internal] = ACTIONS(1127),
        [anon_sym_private] = ACTIONS(1127),
        [anon_sym_unsafe] = ACTIONS(1127),
        [anon_sym_readonly] = ACTIONS(1127),
        [anon_sym_volatile] = ACTIONS(1127),
        [anon_sym_bool] = ACTIONS(1127),
        [anon_sym_byte] = ACTIONS(1127),
        [anon_sym_char] = ACTIONS(1127),
        [anon_sym_decimal] = ACTIONS(1127),
        [anon_sym_double] = ACTIONS(1127),
        [anon_sym_float] = ACTIONS(1127),
        [anon_sym_int] = ACTIONS(1127),
        [anon_sym_long] = ACTIONS(1127),
        [anon_sym_object] = ACTIONS(1127),
        [anon_sym_sbyte] = ACTIONS(1127),
        [anon_sym_short] = ACTIONS(1127),
        [anon_sym_string] = ACTIONS(1127),
        [anon_sym_uint] = ACTIONS(1127),
        [anon_sym_ulong] = ACTIONS(1127),
        [anon_sym_ushort] = ACTIONS(1127),
        [sym_identifier_name] = ACTIONS(1131),
        [sym_comment] = ACTIONS(81),
    },
    [276] = {
        [ts_builtin_sym_end] = ACTIONS(1135),
        [anon_sym_namespace] = ACTIONS(1139),
        [anon_sym_RBRACE] = ACTIONS(1135),
        [anon_sym_class] = ACTIONS(1139),
        [anon_sym_struct] = ACTIONS(1139),
        [anon_sym_LBRACK] = ACTIONS(1135),
        [anon_sym_abstract] = ACTIONS(1139),
        [anon_sym_sealed] = ACTIONS(1139),
        [anon_sym_static] = ACTIONS(1139),
        [anon_sym_new] = ACTIONS(1139),
        [anon_sym_public] = ACTIONS(1139),
        [anon_sym_protected] = ACTIONS(1139),
        [anon_sym_internal] = ACTIONS(1139),
        [anon_sym_private] = ACTIONS(1139),
        [anon_sym_unsafe] = ACTIONS(1139),
        [anon_sym_readonly] = ACTIONS(1139),
        [anon_sym_volatile] = ACTIONS(1139),
        [anon_sym_bool] = ACTIONS(1139),
        [anon_sym_byte] = ACTIONS(1139),
        [anon_sym_char] = ACTIONS(1139),
        [anon_sym_decimal] = ACTIONS(1139),
        [anon_sym_double] = ACTIONS(1139),
        [anon_sym_float] = ACTIONS(1139),
        [anon_sym_int] = ACTIONS(1139),
        [anon_sym_long] = ACTIONS(1139),
        [anon_sym_object] = ACTIONS(1139),
        [anon_sym_sbyte] = ACTIONS(1139),
        [anon_sym_short] = ACTIONS(1139),
        [anon_sym_string] = ACTIONS(1139),
        [anon_sym_uint] = ACTIONS(1139),
        [anon_sym_ulong] = ACTIONS(1139),
        [anon_sym_ushort] = ACTIONS(1139),
        [sym_identifier_name] = ACTIONS(1143),
        [sym_comment] = ACTIONS(81),
    },
    [277] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1107),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [278] = {
        [sym_type_parameter_list] = STATE(280),
        [anon_sym_LBRACE] = ACTIONS(1147),
        [anon_sym_LT] = ACTIONS(195),
        [sym_comment] = ACTIONS(81),
    },
    [279] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(286),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1149),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [280] = {
        [anon_sym_LBRACE] = ACTIONS(1151),
        [sym_comment] = ACTIONS(81),
    },
    [281] = {
        [sym_class_declaration] = STATE(50),
        [sym_struct_declaration] = STATE(50),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(50),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym_class_declaration_repeat1] = STATE(283),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1153),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [282] = {
        [ts_builtin_sym_end] = ACTIONS(1155),
        [anon_sym_namespace] = ACTIONS(1159),
        [anon_sym_RBRACE] = ACTIONS(1155),
        [anon_sym_class] = ACTIONS(1159),
        [anon_sym_struct] = ACTIONS(1159),
        [anon_sym_LBRACK] = ACTIONS(1155),
        [anon_sym_abstract] = ACTIONS(1159),
        [anon_sym_sealed] = ACTIONS(1159),
        [anon_sym_static] = ACTIONS(1159),
        [anon_sym_new] = ACTIONS(1159),
        [anon_sym_public] = ACTIONS(1159),
        [anon_sym_protected] = ACTIONS(1159),
        [anon_sym_internal] = ACTIONS(1159),
        [anon_sym_private] = ACTIONS(1159),
        [anon_sym_unsafe] = ACTIONS(1159),
        [anon_sym_readonly] = ACTIONS(1159),
        [anon_sym_volatile] = ACTIONS(1159),
        [anon_sym_bool] = ACTIONS(1159),
        [anon_sym_byte] = ACTIONS(1159),
        [anon_sym_char] = ACTIONS(1159),
        [anon_sym_decimal] = ACTIONS(1159),
        [anon_sym_double] = ACTIONS(1159),
        [anon_sym_float] = ACTIONS(1159),
        [anon_sym_int] = ACTIONS(1159),
        [anon_sym_long] = ACTIONS(1159),
        [anon_sym_object] = ACTIONS(1159),
        [anon_sym_sbyte] = ACTIONS(1159),
        [anon_sym_short] = ACTIONS(1159),
        [anon_sym_string] = ACTIONS(1159),
        [anon_sym_uint] = ACTIONS(1159),
        [anon_sym_ulong] = ACTIONS(1159),
        [anon_sym_ushort] = ACTIONS(1159),
        [sym_identifier_name] = ACTIONS(1163),
        [sym_comment] = ACTIONS(81),
    },
    [283] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1167),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [284] = {
        [ts_builtin_sym_end] = ACTIONS(1169),
        [anon_sym_namespace] = ACTIONS(1173),
        [anon_sym_RBRACE] = ACTIONS(1169),
        [anon_sym_class] = ACTIONS(1173),
        [anon_sym_struct] = ACTIONS(1173),
        [anon_sym_LBRACK] = ACTIONS(1169),
        [anon_sym_abstract] = ACTIONS(1173),
        [anon_sym_sealed] = ACTIONS(1173),
        [anon_sym_static] = ACTIONS(1173),
        [anon_sym_new] = ACTIONS(1173),
        [anon_sym_public] = ACTIONS(1173),
        [anon_sym_protected] = ACTIONS(1173),
        [anon_sym_internal] = ACTIONS(1173),
        [anon_sym_private] = ACTIONS(1173),
        [anon_sym_unsafe] = ACTIONS(1173),
        [anon_sym_readonly] = ACTIONS(1173),
        [anon_sym_volatile] = ACTIONS(1173),
        [anon_sym_bool] = ACTIONS(1173),
        [anon_sym_byte] = ACTIONS(1173),
        [anon_sym_char] = ACTIONS(1173),
        [anon_sym_decimal] = ACTIONS(1173),
        [anon_sym_double] = ACTIONS(1173),
        [anon_sym_float] = ACTIONS(1173),
        [anon_sym_int] = ACTIONS(1173),
        [anon_sym_long] = ACTIONS(1173),
        [anon_sym_object] = ACTIONS(1173),
        [anon_sym_sbyte] = ACTIONS(1173),
        [anon_sym_short] = ACTIONS(1173),
        [anon_sym_string] = ACTIONS(1173),
        [anon_sym_uint] = ACTIONS(1173),
        [anon_sym_ulong] = ACTIONS(1173),
        [anon_sym_ushort] = ACTIONS(1173),
        [sym_identifier_name] = ACTIONS(1177),
        [sym_comment] = ACTIONS(81),
    },
    [285] = {
        [ts_builtin_sym_end] = ACTIONS(1181),
        [anon_sym_namespace] = ACTIONS(1185),
        [anon_sym_RBRACE] = ACTIONS(1181),
        [anon_sym_class] = ACTIONS(1185),
        [anon_sym_struct] = ACTIONS(1185),
        [anon_sym_LBRACK] = ACTIONS(1181),
        [anon_sym_abstract] = ACTIONS(1185),
        [anon_sym_sealed] = ACTIONS(1185),
        [anon_sym_static] = ACTIONS(1185),
        [anon_sym_new] = ACTIONS(1185),
        [anon_sym_public] = ACTIONS(1185),
        [anon_sym_protected] = ACTIONS(1185),
        [anon_sym_internal] = ACTIONS(1185),
        [anon_sym_private] = ACTIONS(1185),
        [anon_sym_unsafe] = ACTIONS(1185),
        [anon_sym_readonly] = ACTIONS(1185),
        [anon_sym_volatile] = ACTIONS(1185),
        [anon_sym_bool] = ACTIONS(1185),
        [anon_sym_byte] = ACTIONS(1185),
        [anon_sym_char] = ACTIONS(1185),
        [anon_sym_decimal] = ACTIONS(1185),
        [anon_sym_double] = ACTIONS(1185),
        [anon_sym_float] = ACTIONS(1185),
        [anon_sym_int] = ACTIONS(1185),
        [anon_sym_long] = ACTIONS(1185),
        [anon_sym_object] = ACTIONS(1185),
        [anon_sym_sbyte] = ACTIONS(1185),
        [anon_sym_short] = ACTIONS(1185),
        [anon_sym_string] = ACTIONS(1185),
        [anon_sym_uint] = ACTIONS(1185),
        [anon_sym_ulong] = ACTIONS(1185),
        [anon_sym_ushort] = ACTIONS(1185),
        [sym_identifier_name] = ACTIONS(1189),
        [sym_comment] = ACTIONS(81),
    },
    [286] = {
        [sym_class_declaration] = STATE(59),
        [sym_struct_declaration] = STATE(59),
        [sym__attributes] = STATE(51),
        [sym__attribute_section] = STATE(13),
        [sym_field_declaration] = STATE(59),
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(53),
        [sym_generic_name] = STATE(54),
        [sym_class_modifiers] = STATE(14),
        [sym__class_modifiers] = STATE(15),
        [sym_struct_modifiers] = STATE(16),
        [sym__struct_modifiers] = STATE(17),
        [sym_field_modifiers] = STATE(55),
        [sym__field_modifiers] = STATE(56),
        [sym_predefined_type] = STATE(54),
        [aux_sym__attributes_repeat1] = STATE(20),
        [anon_sym_RBRACE] = ACTIONS(1153),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_unsafe] = ACTIONS(207),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(81),
    },
    [287] = {
        [ts_builtin_sym_end] = ACTIONS(1193),
        [anon_sym_namespace] = ACTIONS(1203),
        [anon_sym_RBRACE] = ACTIONS(1193),
        [anon_sym_class] = ACTIONS(1203),
        [anon_sym_struct] = ACTIONS(1203),
        [anon_sym_LBRACK] = ACTIONS(1193),
        [anon_sym_abstract] = ACTIONS(1203),
        [anon_sym_sealed] = ACTIONS(1203),
        [anon_sym_static] = ACTIONS(1203),
        [anon_sym_new] = ACTIONS(1203),
        [anon_sym_public] = ACTIONS(1203),
        [anon_sym_protected] = ACTIONS(1203),
        [anon_sym_internal] = ACTIONS(1203),
        [anon_sym_private] = ACTIONS(1203),
        [anon_sym_unsafe] = ACTIONS(1203),
        [anon_sym_readonly] = ACTIONS(1213),
        [anon_sym_volatile] = ACTIONS(1213),
        [anon_sym_bool] = ACTIONS(1213),
        [anon_sym_byte] = ACTIONS(1213),
        [anon_sym_char] = ACTIONS(1213),
        [anon_sym_decimal] = ACTIONS(1213),
        [anon_sym_double] = ACTIONS(1213),
        [anon_sym_float] = ACTIONS(1213),
        [anon_sym_int] = ACTIONS(1213),
        [anon_sym_long] = ACTIONS(1213),
        [anon_sym_object] = ACTIONS(1213),
        [anon_sym_sbyte] = ACTIONS(1213),
        [anon_sym_short] = ACTIONS(1213),
        [anon_sym_string] = ACTIONS(1213),
        [anon_sym_uint] = ACTIONS(1213),
        [anon_sym_ulong] = ACTIONS(1213),
        [anon_sym_ushort] = ACTIONS(1213),
        [sym_identifier_name] = ACTIONS(1222),
        [sym_comment] = ACTIONS(81),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(185),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(186),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(187),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(188),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(189),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(6),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(190),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(159),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(163),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(191),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(32),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(34),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(192),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(83),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(193),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(194),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(96),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(97),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(195),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(86),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(107),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(87),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(196),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(197),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(198),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(199),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(90),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(7),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(200),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(46),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(47),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(48),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(41),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(201),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(175),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(164),
    [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(202),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
    [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
    [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
    [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
    [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
    [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
    [383] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
    [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
    [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
    [489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 4),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attribute_target_specifier, 2),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [599] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [602] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [605] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [609] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4),
    [615] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4),
    [621] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [625] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [633] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [646] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [659] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [670] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attributes, 4),
    [687] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 4),
    [690] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 4),
    [693] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(265),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
    [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
    [701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [703] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
    [713] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [718] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
    [724] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [728] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
    [730] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [733] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [736] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [739] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(227),
    [743] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(255),
    [746] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [752] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(167),
    [756] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [759] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [762] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [767] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [770] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2),
    [775] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [780] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [787] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_namespace_declaration_repeat1, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [794] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [797] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [800] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [803] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [806] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [811] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1), REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [815] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3), SHIFT(26),
    [819] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
    [824] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [828] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(76),
    [832] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [835] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [840] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [845] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [848] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [851] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [856] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(139),
    [860] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(140),
    [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [866] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [871] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [880] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [889] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [900] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [907] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [914] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [923] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [930] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [937] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [946] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [949] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [952] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [955] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
    [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
    [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [965] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [968] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [971] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
    [976] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [979] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [982] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [985] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [988] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [991] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
    [996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
    [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [1004] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1007] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1010] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [1015] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1018] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1021] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1024] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1027] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1030] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
    [1035] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1043] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1051] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1058] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 1),
    [1067] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1070] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_namespace_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1073] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1077] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
    [1084] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
    [1089] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1092] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1095] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1098] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
    [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [1109] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1113] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1117] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
    [1123] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1127] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1131] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1135] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1139] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1143] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
    [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [1155] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1159] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1163] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [1169] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1173] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1177] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1181] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1185] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1189] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1193] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1203] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1213] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1222] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
