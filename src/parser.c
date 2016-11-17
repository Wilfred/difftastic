#include "tree_sitter/parser.h"

#define STATE_COUNT 214
#define SYMBOL_COUNT 112
#define TOKEN_COUNT 71

enum {
    anon_sym_using = 1,
    anon_sym_SEMI = 2,
    anon_sym_namespace = 3,
    anon_sym_LBRACE = 4,
    anon_sym_RBRACE = 5,
    anon_sym_class = 6,
    anon_sym_struct = 7,
    anon_sym_COMMA = 8,
    anon_sym_EQ = 9,
    anon_sym_true = 10,
    anon_sym_false = 11,
    anon_sym_SQUOTE = 12,
    aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 13,
    sym__hexadecimal_escape_sequence = 14,
    aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 15,
    aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 16,
    anon_sym_BSLASH_SQUOTE = 17,
    anon_sym_BSLASH_DQUOTE = 18,
    anon_sym_BSLASH_BSLASH = 19,
    anon_sym_BSLASH0 = 20,
    anon_sym_BSLASHa = 21,
    anon_sym_BSLASHb = 22,
    anon_sym_BSLASHf = 23,
    anon_sym_BSLASHn = 24,
    anon_sym_BSLASHr = 25,
    anon_sym_BSLASHt = 26,
    anon_sym_BSLASHv = 27,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 28,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 29,
    sym__integer_type_suffix = 30,
    sym_null_literal = 31,
    anon_sym_DOT = 32,
    sym__real_type_suffix = 33,
    sym__exponent_part = 34,
    anon_sym_DQUOTE = 35,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 36,
    anon_sym_AT_DQUOTE = 37,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 38,
    anon_sym_abstract = 39,
    anon_sym_sealed = 40,
    anon_sym_static = 41,
    anon_sym_new = 42,
    anon_sym_public = 43,
    anon_sym_protected = 44,
    anon_sym_internal = 45,
    anon_sym_private = 46,
    anon_sym_unsafe = 47,
    anon_sym_readonly = 48,
    anon_sym_volatile = 49,
    anon_sym_bool = 50,
    anon_sym_byte = 51,
    anon_sym_char = 52,
    anon_sym_decimal = 53,
    anon_sym_double = 54,
    anon_sym_float = 55,
    anon_sym_int = 56,
    anon_sym_long = 57,
    anon_sym_object = 58,
    anon_sym_sbyte = 59,
    anon_sym_short = 60,
    anon_sym_string = 61,
    anon_sym_uint = 62,
    anon_sym_ulong = 63,
    anon_sym_ushort = 64,
    anon_sym_LT = 65,
    anon_sym_GT = 66,
    anon_sym_COLON_COLON = 67,
    sym_global = 68,
    sym_identifier_name = 69,
    sym_comment = 70,
    sym_compilation_unit = 71,
    sym_using_directive = 72,
    sym_namespace_declaration = 73,
    sym_class_declaration = 74,
    sym_struct_declaration = 75,
    sym_field_declaration = 76,
    sym_variable_declaration = 77,
    sym__type = 78,
    sym_generic_name = 79,
    sym_variable_declarator = 80,
    sym_equals_value_clause = 81,
    sym__literal = 82,
    sym_boolean_literal = 83,
    sym_character_literal = 84,
    sym__unicode_escape_sequence = 85,
    sym__simple_escape_sequence = 86,
    sym_integer_literal = 87,
    sym_real_literal = 88,
    sym_string_literal = 89,
    sym__regular_string_literal = 90,
    sym__regular_string_literal_character = 91,
    sym__verbatim_string_literal = 92,
    sym_class_modifiers = 93,
    sym__class_modifiers = 94,
    sym_struct_modifiers = 95,
    sym__struct_modifiers = 96,
    sym_field_modifiers = 97,
    sym__field_modifiers = 98,
    sym_predefined_type = 99,
    sym_type_parameter_list = 100,
    sym_type_parameter = 101,
    sym_qualified_name = 102,
    sym_alias_qualified_name = 103,
    sym_name_equals = 104,
    sym_static = 105,
    aux_sym_compilation_unit_repeat1 = 106,
    aux_sym_compilation_unit_repeat2 = 107,
    aux_sym_class_declaration_repeat1 = 108,
    aux_sym_variable_declaration_repeat1 = 109,
    aux_sym__regular_string_literal_repeat1 = 110,
    aux_sym_type_parameter_list_repeat1 = 111,
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
    [anon_sym_COMMA] = ",",
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
    [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
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
    [anon_sym_COMMA] = {
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
    [aux_sym_class_declaration_repeat1] = {
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
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '0')
                ADVANCE(11);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '<')
                ADVANCE(18);
            if (lookahead == '=')
                ADVANCE(19);
            if (lookahead == '>')
                ADVANCE(20);
            if (lookahead == '@')
                ADVANCE(21);
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
                ADVANCE(23);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'm'))
                ADVANCE(24);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(25);
            if (lookahead == 'L')
                ADVANCE(28);
            if (lookahead == 'U')
                ADVANCE(30);
            if (lookahead == '\\')
                ADVANCE(31);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(77);
            if (lookahead == 'd')
                ADVANCE(85);
            if (lookahead == 'f')
                ADVANCE(97);
            if (lookahead == 'g')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(120);
            if (lookahead == 'n')
                ADVANCE(124);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 't')
                ADVANCE(197);
            if (lookahead == 'u')
                ADVANCE(201);
            if (lookahead == 'v')
                ADVANCE(222);
            if (lookahead == '{')
                ADVANCE(230);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
        case 3:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
        case 4:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 5:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 6:
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(10);
            LEX_ERROR();
        case 7:
            if (lookahead == '*')
                ADVANCE(8);
            if (!((lookahead == 0) ||
                (lookahead == '*')))
                ADVANCE(7);
            LEX_ERROR();
        case 8:
            if (lookahead == '/')
                ADVANCE(9);
            if (!((lookahead == 0) ||
                (lookahead == '/')))
                ADVANCE(7);
            LEX_ERROR();
        case 9:
            ACCEPT_TOKEN(sym_comment);
        case 10:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(10);
            ACCEPT_TOKEN(sym_comment);
        case 11:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == 'x')
                ADVANCE(13);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 12:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 13:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(14);
            LEX_ERROR();
        case 14:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(14);
            ACCEPT_TOKEN(aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH);
        case 15:
            if (lookahead == ':')
                ADVANCE(16);
            LEX_ERROR();
        case 16:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
        case 17:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 18:
            ACCEPT_TOKEN(anon_sym_LT);
        case 19:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 20:
            ACCEPT_TOKEN(anon_sym_GT);
        case 21:
            if (lookahead == '\"')
                ADVANCE(22);
            LEX_ERROR();
        case 22:
            ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier_name);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 25:
            if (('+' <= lookahead && lookahead <= '/') ||
                (':' <= lookahead && lookahead <= '@') ||
                ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(26);
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(27);
            if ((lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier_name);
        case 26:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(26);
            ACCEPT_TOKEN(sym__exponent_part);
        case 27:
            if (('+' <= lookahead && lookahead <= '/') ||
                (':' <= lookahead && lookahead <= '@') ||
                ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(26);
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(27);
            if ((lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(sym__exponent_part);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'T') ||
                ('V' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'U')
                ADVANCE(29);
            if (lookahead == 'u')
                ADVANCE(29);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'K') ||
                ('M' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'L')
                ADVANCE(29);
            if (lookahead == 'l')
                ADVANCE(29);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 31:
            if (lookahead == '\"')
                ADVANCE(32);
            if (lookahead == '\'')
                ADVANCE(33);
            if (lookahead == '0')
                ADVANCE(34);
            if (lookahead == 'U')
                ADVANCE(35);
            if (lookahead == '\\')
                ADVANCE(44);
            if (lookahead == 'a')
                ADVANCE(45);
            if (lookahead == 'b')
                ADVANCE(46);
            if (lookahead == 'f')
                ADVANCE(47);
            if (lookahead == 'n')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(49);
            if (lookahead == 't')
                ADVANCE(50);
            if (lookahead == 'u')
                ADVANCE(51);
            if (lookahead == 'v')
                ADVANCE(56);
            if (lookahead == 'x')
                ADVANCE(57);
            LEX_ERROR();
        case 32:
            ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
        case 33:
            ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
        case 34:
            ACCEPT_TOKEN(anon_sym_BSLASH0);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(36);
            LEX_ERROR();
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(37);
            LEX_ERROR();
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(38);
            LEX_ERROR();
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
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
        case 44:
            ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
        case 45:
            ACCEPT_TOKEN(anon_sym_BSLASHa);
        case 46:
            ACCEPT_TOKEN(anon_sym_BSLASHb);
        case 47:
            ACCEPT_TOKEN(anon_sym_BSLASHf);
        case 48:
            ACCEPT_TOKEN(anon_sym_BSLASHn);
        case 49:
            ACCEPT_TOKEN(anon_sym_BSLASHr);
        case 50:
            ACCEPT_TOKEN(anon_sym_BSLASHt);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(52);
            LEX_ERROR();
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(53);
            LEX_ERROR();
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(54);
            LEX_ERROR();
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(55);
            LEX_ERROR();
        case 55:
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
        case 56:
            ACCEPT_TOKEN(anon_sym_BSLASHv);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(58);
            LEX_ERROR();
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(59);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(60);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(61);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 61:
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier_name);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 's')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier_name);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier_name);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'r')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier_name);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier_name);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier_name);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_abstract);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(71);
            if (lookahead == 'y')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier_name);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier_name);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier_name);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_bool);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier_name);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier_name);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_byte);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'h')
                ADVANCE(78);
            if (lookahead == 'l')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier_name);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier_name);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'r')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier_name);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_char);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier_name);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 's')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 's')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier_name);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_class);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(86);
            if (lookahead == 'o')
                ADVANCE(92);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier_name);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'm')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier_name);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier_name);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_decimal);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'u')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier_name);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier_name);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier_name);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_double);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(98);
            if (lookahead == 'l')
                ADVANCE(102);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier_name);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 's')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier_name);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier_name);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_false);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier_name);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier_name);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(105);
            ACCEPT_TOKEN(sym_identifier_name);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_float);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier_name);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier_name);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier_name);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(sym_global);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier_name);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(115);
            ACCEPT_TOKEN(anon_sym_int);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'r')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier_name);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_internal);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'T') ||
                ('V' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'U')
                ADVANCE(29);
            if (lookahead == 'o')
                ADVANCE(121);
            if (lookahead == 'u')
                ADVANCE(29);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'g')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier_name);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_long);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(125);
            if (lookahead == 'e')
                ADVANCE(133);
            if (lookahead == 'u')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'm')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier_name);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 's')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier_name);
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'p')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier_name);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier_name);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'w')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_new);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier_name);
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(sym_null_literal);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier_name);
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'j')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier_name);
        case 140:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier_name);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier_name);
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier_name);
        case 143:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_object);
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'r')
                ADVANCE(145);
            if (lookahead == 'u')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(146);
            if (lookahead == 'o')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'v')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier_name);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_private);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier_name);
        case 152:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier_name);
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier_name);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier_name);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_protected);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier_name);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier_name);
        case 161:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier_name);
        case 162:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_public);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier_name);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier_name);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(23);
            if (lookahead == 'y')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier_name);
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 171:
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
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(172);
            if (lookahead == 'e')
                ADVANCE(176);
            if (lookahead == 'h')
                ADVANCE(181);
            if (lookahead == 't')
                ADVANCE(185);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(23);
            if (lookahead == 'y')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier_name);
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier_name);
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier_name);
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(178);
            ACCEPT_TOKEN(sym_identifier_name);
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier_name);
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'd')
                ADVANCE(180);
            ACCEPT_TOKEN(sym_identifier_name);
        case 180:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 181:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(182);
            ACCEPT_TOKEN(sym_identifier_name);
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'r')
                ADVANCE(183);
            ACCEPT_TOKEN(sym_identifier_name);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(184);
            ACCEPT_TOKEN(sym_identifier_name);
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_short);
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(186);
            if (lookahead == 'r')
                ADVANCE(190);
            ACCEPT_TOKEN(sym_identifier_name);
        case 186:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(187);
            ACCEPT_TOKEN(sym_identifier_name);
        case 187:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(188);
            ACCEPT_TOKEN(sym_identifier_name);
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(189);
            ACCEPT_TOKEN(sym_identifier_name);
        case 189:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_static);
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(191);
            if (lookahead == 'u')
                ADVANCE(194);
            ACCEPT_TOKEN(sym_identifier_name);
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(192);
            ACCEPT_TOKEN(sym_identifier_name);
        case 192:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'g')
                ADVANCE(193);
            ACCEPT_TOKEN(sym_identifier_name);
        case 193:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_string);
        case 194:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(195);
            ACCEPT_TOKEN(sym_identifier_name);
        case 195:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(196);
            ACCEPT_TOKEN(sym_identifier_name);
        case 196:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_struct);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'r')
                ADVANCE(198);
            ACCEPT_TOKEN(sym_identifier_name);
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'u')
                ADVANCE(199);
            ACCEPT_TOKEN(sym_identifier_name);
        case 199:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(200);
            ACCEPT_TOKEN(sym_identifier_name);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_true);
        case 201:
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
                ADVANCE(23);
            if (lookahead == 'L')
                ADVANCE(29);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'l')
                ADVANCE(205);
            if (lookahead == 'n')
                ADVANCE(209);
            if (lookahead == 's')
                ADVANCE(214);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(203);
            ACCEPT_TOKEN(sym_identifier_name);
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(204);
            ACCEPT_TOKEN(sym_identifier_name);
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_uint);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(206);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier_name);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'g')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier_name);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 's')
                ADVANCE(210);
            ACCEPT_TOKEN(sym_identifier_name);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier_name);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'f')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier_name);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier_name);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'h')
                ADVANCE(215);
            if (lookahead == 'i')
                ADVANCE(219);
            ACCEPT_TOKEN(sym_identifier_name);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier_name);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'r')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier_name);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier_name);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier_name);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'g')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier_name);
        case 221:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_using);
        case 222:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(223);
            ACCEPT_TOKEN(sym_identifier_name);
        case 223:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(224);
            ACCEPT_TOKEN(sym_identifier_name);
        case 224:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier_name);
        case 225:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(226);
            ACCEPT_TOKEN(sym_identifier_name);
        case 226:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(227);
            ACCEPT_TOKEN(sym_identifier_name);
        case 227:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(228);
            ACCEPT_TOKEN(sym_identifier_name);
        case 228:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(229);
            ACCEPT_TOKEN(sym_identifier_name);
        case 229:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 230:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 231:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 232:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(232);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(233);
            if (lookahead == 'c')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(246);
            if (lookahead == 'n')
                ADVANCE(254);
            if (lookahead == 'p')
                ADVANCE(265);
            if (lookahead == 's')
                ADVANCE(284);
            if (lookahead == 'u')
                ADVANCE(299);
            LEX_ERROR();
        case 233:
            if (lookahead == 'b')
                ADVANCE(234);
            LEX_ERROR();
        case 234:
            if (lookahead == 's')
                ADVANCE(235);
            LEX_ERROR();
        case 235:
            if (lookahead == 't')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 'r')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            if (lookahead == 'a')
                ADVANCE(238);
            LEX_ERROR();
        case 238:
            if (lookahead == 'c')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            if (lookahead == 't')
                ADVANCE(240);
            LEX_ERROR();
        case 240:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 241:
            if (lookahead == 'l')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            if (lookahead == 'a')
                ADVANCE(243);
            LEX_ERROR();
        case 243:
            if (lookahead == 's')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            if (lookahead == 's')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            ACCEPT_TOKEN(anon_sym_class);
        case 246:
            if (lookahead == 'n')
                ADVANCE(247);
            LEX_ERROR();
        case 247:
            if (lookahead == 't')
                ADVANCE(248);
            LEX_ERROR();
        case 248:
            if (lookahead == 'e')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            if (lookahead == 'r')
                ADVANCE(250);
            LEX_ERROR();
        case 250:
            if (lookahead == 'n')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            if (lookahead == 'a')
                ADVANCE(252);
            LEX_ERROR();
        case 252:
            if (lookahead == 'l')
                ADVANCE(253);
            LEX_ERROR();
        case 253:
            ACCEPT_TOKEN(anon_sym_internal);
        case 254:
            if (lookahead == 'a')
                ADVANCE(255);
            if (lookahead == 'e')
                ADVANCE(263);
            LEX_ERROR();
        case 255:
            if (lookahead == 'm')
                ADVANCE(256);
            LEX_ERROR();
        case 256:
            if (lookahead == 'e')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            if (lookahead == 's')
                ADVANCE(258);
            LEX_ERROR();
        case 258:
            if (lookahead == 'p')
                ADVANCE(259);
            LEX_ERROR();
        case 259:
            if (lookahead == 'a')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if (lookahead == 'c')
                ADVANCE(261);
            LEX_ERROR();
        case 261:
            if (lookahead == 'e')
                ADVANCE(262);
            LEX_ERROR();
        case 262:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 263:
            if (lookahead == 'w')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            ACCEPT_TOKEN(anon_sym_new);
        case 265:
            if (lookahead == 'r')
                ADVANCE(266);
            if (lookahead == 'u')
                ADVANCE(279);
            LEX_ERROR();
        case 266:
            if (lookahead == 'i')
                ADVANCE(267);
            if (lookahead == 'o')
                ADVANCE(272);
            LEX_ERROR();
        case 267:
            if (lookahead == 'v')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            if (lookahead == 'a')
                ADVANCE(269);
            LEX_ERROR();
        case 269:
            if (lookahead == 't')
                ADVANCE(270);
            LEX_ERROR();
        case 270:
            if (lookahead == 'e')
                ADVANCE(271);
            LEX_ERROR();
        case 271:
            ACCEPT_TOKEN(anon_sym_private);
        case 272:
            if (lookahead == 't')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            if (lookahead == 'e')
                ADVANCE(274);
            LEX_ERROR();
        case 274:
            if (lookahead == 'c')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            if (lookahead == 't')
                ADVANCE(276);
            LEX_ERROR();
        case 276:
            if (lookahead == 'e')
                ADVANCE(277);
            LEX_ERROR();
        case 277:
            if (lookahead == 'd')
                ADVANCE(278);
            LEX_ERROR();
        case 278:
            ACCEPT_TOKEN(anon_sym_protected);
        case 279:
            if (lookahead == 'b')
                ADVANCE(280);
            LEX_ERROR();
        case 280:
            if (lookahead == 'l')
                ADVANCE(281);
            LEX_ERROR();
        case 281:
            if (lookahead == 'i')
                ADVANCE(282);
            LEX_ERROR();
        case 282:
            if (lookahead == 'c')
                ADVANCE(283);
            LEX_ERROR();
        case 283:
            ACCEPT_TOKEN(anon_sym_public);
        case 284:
            if (lookahead == 'e')
                ADVANCE(285);
            if (lookahead == 't')
                ADVANCE(290);
            LEX_ERROR();
        case 285:
            if (lookahead == 'a')
                ADVANCE(286);
            LEX_ERROR();
        case 286:
            if (lookahead == 'l')
                ADVANCE(287);
            LEX_ERROR();
        case 287:
            if (lookahead == 'e')
                ADVANCE(288);
            LEX_ERROR();
        case 288:
            if (lookahead == 'd')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 290:
            if (lookahead == 'a')
                ADVANCE(291);
            if (lookahead == 'r')
                ADVANCE(295);
            LEX_ERROR();
        case 291:
            if (lookahead == 't')
                ADVANCE(292);
            LEX_ERROR();
        case 292:
            if (lookahead == 'i')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            if (lookahead == 'c')
                ADVANCE(294);
            LEX_ERROR();
        case 294:
            ACCEPT_TOKEN(anon_sym_static);
        case 295:
            if (lookahead == 'u')
                ADVANCE(296);
            LEX_ERROR();
        case 296:
            if (lookahead == 'c')
                ADVANCE(297);
            LEX_ERROR();
        case 297:
            if (lookahead == 't')
                ADVANCE(298);
            LEX_ERROR();
        case 298:
            ACCEPT_TOKEN(anon_sym_struct);
        case 299:
            if (lookahead == 'n')
                ADVANCE(300);
            if (lookahead == 's')
                ADVANCE(305);
            LEX_ERROR();
        case 300:
            if (lookahead == 's')
                ADVANCE(301);
            LEX_ERROR();
        case 301:
            if (lookahead == 'a')
                ADVANCE(302);
            LEX_ERROR();
        case 302:
            if (lookahead == 'f')
                ADVANCE(303);
            LEX_ERROR();
        case 303:
            if (lookahead == 'e')
                ADVANCE(304);
            LEX_ERROR();
        case 304:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 305:
            if (lookahead == 'i')
                ADVANCE(306);
            LEX_ERROR();
        case 306:
            if (lookahead == 'n')
                ADVANCE(307);
            LEX_ERROR();
        case 307:
            if (lookahead == 'g')
                ADVANCE(308);
            LEX_ERROR();
        case 308:
            ACCEPT_TOKEN(anon_sym_using);
        case 309:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(309);
            if (lookahead == '/')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'g')
                ADVANCE(106);
            if (lookahead == 's')
                ADVANCE(310);
            LEX_ERROR();
        case 310:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(311);
            ACCEPT_TOKEN(sym_identifier_name);
        case 311:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(186);
            ACCEPT_TOKEN(sym_identifier_name);
        case 312:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(312);
            if (lookahead == '/')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'g')
                ADVANCE(106);
            LEX_ERROR();
        case 313:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(313);
            if (lookahead == '/')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            LEX_ERROR();
        case 314:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(314);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(233);
            if (lookahead == 'c')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(246);
            if (lookahead == 'n')
                ADVANCE(315);
            if (lookahead == 'p')
                ADVANCE(265);
            if (lookahead == 's')
                ADVANCE(316);
            if (lookahead == 'u')
                ADVANCE(318);
            LEX_ERROR();
        case 315:
            if (lookahead == 'e')
                ADVANCE(263);
            LEX_ERROR();
        case 316:
            if (lookahead == 'e')
                ADVANCE(285);
            if (lookahead == 't')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            if (lookahead == 'a')
                ADVANCE(291);
            LEX_ERROR();
        case 318:
            if (lookahead == 'n')
                ADVANCE(300);
            LEX_ERROR();
        case 319:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(319);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(233);
            if (lookahead == 'c')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(246);
            if (lookahead == 'n')
                ADVANCE(315);
            if (lookahead == 'p')
                ADVANCE(265);
            if (lookahead == 's')
                ADVANCE(284);
            if (lookahead == 'u')
                ADVANCE(318);
            LEX_ERROR();
        case 320:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(320);
            if (lookahead == '/')
                ADVANCE(6);
            LEX_ERROR();
        case 321:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(321);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(233);
            if (lookahead == 'c')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(246);
            if (lookahead == 'n')
                ADVANCE(254);
            if (lookahead == 'p')
                ADVANCE(265);
            if (lookahead == 's')
                ADVANCE(284);
            if (lookahead == 'u')
                ADVANCE(318);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 322:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(322);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == 'c')
                ADVANCE(241);
            LEX_ERROR();
        case 323:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(323);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == 's')
                ADVANCE(324);
            LEX_ERROR();
        case 324:
            if (lookahead == 't')
                ADVANCE(325);
            LEX_ERROR();
        case 325:
            if (lookahead == 'r')
                ADVANCE(295);
            LEX_ERROR();
        case 326:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(326);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(233);
            if (lookahead == 'c')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(246);
            if (lookahead == 'n')
                ADVANCE(254);
            if (lookahead == 'p')
                ADVANCE(265);
            if (lookahead == 's')
                ADVANCE(284);
            if (lookahead == 'u')
                ADVANCE(318);
            LEX_ERROR();
        case 327:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(327);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '<')
                ADVANCE(18);
            if (lookahead == '{')
                ADVANCE(230);
            LEX_ERROR();
        case 328:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(328);
            if (lookahead == '/')
                ADVANCE(6);
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
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(77);
            if (lookahead == 'd')
                ADVANCE(329);
            if (lookahead == 'f')
                ADVANCE(330);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'n')
                ADVANCE(332);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 'u')
                ADVANCE(333);
            if (lookahead == 'v')
                ADVANCE(222);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 329:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(86);
            if (lookahead == 'o')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier_name);
        case 330:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier_name);
        case 331:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(121);
            ACCEPT_TOKEN(sym_identifier_name);
        case 332:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 333:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'l')
                ADVANCE(334);
            if (lookahead == 'n')
                ADVANCE(209);
            if (lookahead == 's')
                ADVANCE(335);
            ACCEPT_TOKEN(sym_identifier_name);
        case 334:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(206);
            ACCEPT_TOKEN(sym_identifier_name);
        case 335:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'h')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier_name);
        case 336:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(336);
            if (lookahead == '/')
                ADVANCE(6);
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
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(337);
            if (lookahead == 'd')
                ADVANCE(329);
            if (lookahead == 'f')
                ADVANCE(330);
            if (lookahead == 'i')
                ADVANCE(338);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 's')
                ADVANCE(341);
            if (lookahead == 'u')
                ADVANCE(344);
            LEX_ERROR();
        case 337:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'h')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 338:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(339);
            ACCEPT_TOKEN(sym_identifier_name);
        case 339:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(340);
            ACCEPT_TOKEN(sym_identifier_name);
        case 340:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_int);
        case 341:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(172);
            if (lookahead == 'h')
                ADVANCE(181);
            if (lookahead == 't')
                ADVANCE(342);
            ACCEPT_TOKEN(sym_identifier_name);
        case 342:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'r')
                ADVANCE(343);
            ACCEPT_TOKEN(sym_identifier_name);
        case 343:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(191);
            ACCEPT_TOKEN(sym_identifier_name);
        case 344:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'l')
                ADVANCE(334);
            if (lookahead == 's')
                ADVANCE(335);
            ACCEPT_TOKEN(sym_identifier_name);
        case 345:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(345);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '{')
                ADVANCE(230);
            LEX_ERROR();
        case 346:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(346);
            if (lookahead == '/')
                ADVANCE(6);
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
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(77);
            if (lookahead == 'd')
                ADVANCE(329);
            if (lookahead == 'f')
                ADVANCE(330);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'n')
                ADVANCE(347);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 'u')
                ADVANCE(333);
            if (lookahead == 'v')
                ADVANCE(222);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 347:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(125);
            if (lookahead == 'e')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 348:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(348);
            if (lookahead == '/')
                ADVANCE(6);
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
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(77);
            if (lookahead == 'd')
                ADVANCE(329);
            if (lookahead == 'f')
                ADVANCE(330);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'n')
                ADVANCE(332);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(349);
            if (lookahead == 'u')
                ADVANCE(333);
            if (lookahead == 'v')
                ADVANCE(222);
            LEX_ERROR();
        case 349:
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
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(172);
            if (lookahead == 'e')
                ADVANCE(176);
            if (lookahead == 'h')
                ADVANCE(181);
            if (lookahead == 't')
                ADVANCE(350);
            ACCEPT_TOKEN(sym_identifier_name);
        case 350:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(186);
            if (lookahead == 'r')
                ADVANCE(343);
            ACCEPT_TOKEN(sym_identifier_name);
        case 351:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(351);
            if (lookahead == '/')
                ADVANCE(6);
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
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(77);
            if (lookahead == 'd')
                ADVANCE(329);
            if (lookahead == 'f')
                ADVANCE(330);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'n')
                ADVANCE(332);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 'u')
                ADVANCE(333);
            if (lookahead == 'v')
                ADVANCE(222);
            LEX_ERROR();
        case 352:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(352);
            if (lookahead == '/')
                ADVANCE(6);
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
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(337);
            if (lookahead == 'd')
                ADVANCE(329);
            if (lookahead == 'f')
                ADVANCE(330);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'n')
                ADVANCE(332);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(353);
            if (lookahead == 'u')
                ADVANCE(333);
            if (lookahead == 'v')
                ADVANCE(222);
            LEX_ERROR();
        case 353:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'b')
                ADVANCE(172);
            if (lookahead == 'h')
                ADVANCE(181);
            if (lookahead == 't')
                ADVANCE(350);
            ACCEPT_TOKEN(sym_identifier_name);
        case 354:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(354);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '>')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            LEX_ERROR();
        case 355:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(355);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '<')
                ADVANCE(18);
            if (lookahead == '>')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            LEX_ERROR();
        case 356:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(356);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            LEX_ERROR();
        case 357:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(357);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '=')
                ADVANCE(19);
            LEX_ERROR();
        case 358:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(358);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            LEX_ERROR();
        case 359:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(359);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '0')
                ADVANCE(11);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(21);
            if (lookahead == 'f')
                ADVANCE(360);
            if (lookahead == 'n')
                ADVANCE(365);
            if (lookahead == 't')
                ADVANCE(369);
            LEX_ERROR();
        case 360:
            if (lookahead == 'a')
                ADVANCE(361);
            LEX_ERROR();
        case 361:
            if (lookahead == 'l')
                ADVANCE(362);
            LEX_ERROR();
        case 362:
            if (lookahead == 's')
                ADVANCE(363);
            LEX_ERROR();
        case 363:
            if (lookahead == 'e')
                ADVANCE(364);
            LEX_ERROR();
        case 364:
            ACCEPT_TOKEN(anon_sym_false);
        case 365:
            if (lookahead == 'u')
                ADVANCE(366);
            LEX_ERROR();
        case 366:
            if (lookahead == 'l')
                ADVANCE(367);
            LEX_ERROR();
        case 367:
            if (lookahead == 'l')
                ADVANCE(368);
            LEX_ERROR();
        case 368:
            ACCEPT_TOKEN(sym_null_literal);
        case 369:
            if (lookahead == 'r')
                ADVANCE(370);
            LEX_ERROR();
        case 370:
            if (lookahead == 'u')
                ADVANCE(371);
            LEX_ERROR();
        case 371:
            if (lookahead == 'e')
                ADVANCE(372);
            LEX_ERROR();
        case 372:
            ACCEPT_TOKEN(anon_sym_true);
        case 373:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(374);
            if (lookahead == '/')
                ADVANCE(375);
            if (lookahead == '\\')
                ADVANCE(376);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(374);
            LEX_ERROR();
        case 374:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 375:
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(10);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 376:
            if (lookahead == '\"')
                ADVANCE(32);
            if (lookahead == '\'')
                ADVANCE(33);
            if (lookahead == '0')
                ADVANCE(34);
            if (lookahead == 'U')
                ADVANCE(35);
            if (lookahead == '\\')
                ADVANCE(44);
            if (lookahead == 'a')
                ADVANCE(45);
            if (lookahead == 'b')
                ADVANCE(46);
            if (lookahead == 'f')
                ADVANCE(47);
            if (lookahead == 'n')
                ADVANCE(48);
            if (lookahead == 'r')
                ADVANCE(49);
            if (lookahead == 't')
                ADVANCE(50);
            if (lookahead == 'u')
                ADVANCE(51);
            if (lookahead == 'v')
                ADVANCE(56);
            if (lookahead == 'x')
                ADVANCE(57);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 377:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(377);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'm'))
                ADVANCE(378);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(379);
            if (lookahead == 'L')
                ADVANCE(380);
            if (lookahead == 'U')
                ADVANCE(382);
            if (lookahead == 'l')
                ADVANCE(380);
            if (lookahead == 'u')
                ADVANCE(382);
            LEX_ERROR();
        case 378:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 379:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(26);
            LEX_ERROR();
        case 380:
            if (lookahead == 'U')
                ADVANCE(381);
            if (lookahead == 'u')
                ADVANCE(381);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 381:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 382:
            if (lookahead == 'L')
                ADVANCE(381);
            if (lookahead == 'l')
                ADVANCE(381);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 383:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(383);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == 'L')
                ADVANCE(380);
            if (lookahead == 'U')
                ADVANCE(382);
            if (lookahead == 'l')
                ADVANCE(380);
            if (lookahead == 'u')
                ADVANCE(382);
            LEX_ERROR();
        case 384:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(384);
            if (lookahead == '/')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            LEX_ERROR();
        case 385:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(386);
            if (lookahead == '\n')
                SKIP(385);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(387);
            if (lookahead == '\\')
                ADVANCE(31);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(386);
            LEX_ERROR();
        case 386:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 387:
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(10);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 388:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(389);
            if (lookahead == '/')
                ADVANCE(390);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(394);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 389:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(389);
            if (lookahead == '/')
                ADVANCE(390);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(394);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 390:
            if (lookahead == '*')
                ADVANCE(391);
            if (lookahead == '/')
                ADVANCE(395);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(394);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 391:
            if (lookahead == '\"')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(392);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*')))
                ADVANCE(391);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 392:
            if (lookahead == '\"')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(393);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(391);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 393:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(394);
            ACCEPT_TOKEN(sym_comment);
        case 394:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(394);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 395:
            if (lookahead == '\n')
                ADVANCE(394);
            if (lookahead == '\"')
                ADVANCE(10);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(396);
            ACCEPT_TOKEN(sym_comment);
        case 396:
            if (lookahead == '\n')
                ADVANCE(394);
            if (lookahead == '\"')
                ADVANCE(10);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(396);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 397:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(397);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(6);
            LEX_ERROR();
        case 398:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(386);
            if (lookahead == '\n')
                SKIP(398);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(387);
            if (lookahead == '\\')
                ADVANCE(31);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(386);
            LEX_ERROR();
        case 399:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(399);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'm'))
                ADVANCE(378);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(379);
            LEX_ERROR();
        case 400:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(400);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'm'))
                ADVANCE(378);
            LEX_ERROR();
        case 401:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(401);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(6);
            LEX_ERROR();
        case 402:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(402);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '>')
                ADVANCE(20);
            LEX_ERROR();
        case 403:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(403);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '>')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == '{')
                ADVANCE(230);
            LEX_ERROR();
        case 404:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(404);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 405:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(405);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '{')
                ADVANCE(230);
            LEX_ERROR();
        case 406:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(406);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            LEX_ERROR();
        case 407:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(407);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '{')
                ADVANCE(230);
            LEX_ERROR();
        case 408:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(408);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(233);
            if (lookahead == 'c')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(246);
            if (lookahead == 'n')
                ADVANCE(254);
            if (lookahead == 'p')
                ADVANCE(265);
            if (lookahead == 's')
                ADVANCE(284);
            if (lookahead == 'u')
                ADVANCE(318);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 409:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(409);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '=')
                ADVANCE(19);
            LEX_ERROR();
        case 410:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(410);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            LEX_ERROR();
        case 411:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(411);
            if (lookahead == '/')
                ADVANCE(6);
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
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(77);
            if (lookahead == 'd')
                ADVANCE(329);
            if (lookahead == 'f')
                ADVANCE(330);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'n')
                ADVANCE(347);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 'u')
                ADVANCE(412);
            if (lookahead == 'v')
                ADVANCE(222);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 412:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(202);
            if (lookahead == 'l')
                ADVANCE(334);
            if (lookahead == 'n')
                ADVANCE(209);
            if (lookahead == 's')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 413:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(413);
            if (lookahead == '/')
                ADVANCE(6);
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
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(77);
            if (lookahead == 'd')
                ADVANCE(329);
            if (lookahead == 'f')
                ADVANCE(330);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'n')
                ADVANCE(347);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 'u')
                ADVANCE(333);
            if (lookahead == 'v')
                ADVANCE(222);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 414:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(414);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '0')
                ADVANCE(11);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('h' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'f')
                ADVANCE(415);
            if (lookahead == 'g')
                ADVANCE(106);
            if (lookahead == 'n')
                ADVANCE(416);
            if (lookahead == 't')
                ADVANCE(197);
            LEX_ERROR();
        case 415:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier_name);
        case 416:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'u')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 417:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(374);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(375);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '\\')
                ADVANCE(376);
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
                ADVANCE(374);
            LEX_ERROR();
        case 418:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(418);
            if (lookahead == '/')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            LEX_ERROR();
        case 419:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(386);
            if (lookahead == '\n')
                SKIP(419);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(387);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '\\')
                ADVANCE(31);
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
                ADVANCE(386);
            LEX_ERROR();
        case 420:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(420);
            if (lookahead == '/')
                ADVANCE(6);
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
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(62);
            if (lookahead == 'b')
                ADVANCE(70);
            if (lookahead == 'c')
                ADVANCE(77);
            if (lookahead == 'd')
                ADVANCE(329);
            if (lookahead == 'f')
                ADVANCE(330);
            if (lookahead == 'g')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'n')
                ADVANCE(332);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(349);
            if (lookahead == 'u')
                ADVANCE(333);
            if (lookahead == 'v')
                ADVANCE(222);
            LEX_ERROR();
        case 421:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(421);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '<')
                ADVANCE(18);
            if (lookahead == '=')
                ADVANCE(19);
            if (lookahead == '>')
                ADVANCE(20);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == '{')
                ADVANCE(230);
            LEX_ERROR();
        case 422:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(422);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '<')
                ADVANCE(18);
            if (lookahead == '=')
                ADVANCE(19);
            if (lookahead == '>')
                ADVANCE(20);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 232,
    [2] = 309,
    [3] = 312,
    [4] = 313,
    [5] = 313,
    [6] = 314,
    [7] = 319,
    [8] = 320,
    [9] = 232,
    [10] = 321,
    [11] = 322,
    [12] = 322,
    [13] = 323,
    [14] = 323,
    [15] = 232,
    [16] = 326,
    [17] = 321,
    [18] = 232,
    [19] = 326,
    [20] = 313,
    [21] = 327,
    [22] = 328,
    [23] = 336,
    [24] = 345,
    [25] = 328,
    [26] = 346,
    [27] = 348,
    [28] = 351,
    [29] = 352,
    [30] = 354,
    [31] = 355,
    [32] = 328,
    [33] = 356,
    [34] = 313,
    [35] = 354,
    [36] = 336,
    [37] = 336,
    [38] = 328,
    [39] = 346,
    [40] = 328,
    [41] = 356,
    [42] = 328,
    [43] = 346,
    [44] = 328,
    [45] = 313,
    [46] = 327,
    [47] = 328,
    [48] = 345,
    [49] = 328,
    [50] = 346,
    [51] = 328,
    [52] = 346,
    [53] = 346,
    [54] = 328,
    [55] = 357,
    [56] = 358,
    [57] = 313,
    [58] = 358,
    [59] = 313,
    [60] = 358,
    [61] = 358,
    [62] = 359,
    [63] = 358,
    [64] = 358,
    [65] = 373,
    [66] = 377,
    [67] = 383,
    [68] = 358,
    [69] = 384,
    [70] = 385,
    [71] = 388,
    [72] = 358,
    [73] = 358,
    [74] = 397,
    [75] = 358,
    [76] = 385,
    [77] = 398,
    [78] = 398,
    [79] = 358,
    [80] = 385,
    [81] = 385,
    [82] = 358,
    [83] = 385,
    [84] = 399,
    [85] = 358,
    [86] = 400,
    [87] = 358,
    [88] = 358,
    [89] = 384,
    [90] = 358,
    [91] = 400,
    [92] = 399,
    [93] = 400,
    [94] = 358,
    [95] = 401,
    [96] = 401,
    [97] = 401,
    [98] = 358,
    [99] = 328,
    [100] = 354,
    [101] = 402,
    [102] = 402,
    [103] = 336,
    [104] = 403,
    [105] = 402,
    [106] = 336,
    [107] = 403,
    [108] = 402,
    [109] = 402,
    [110] = 336,
    [111] = 322,
    [112] = 323,
    [113] = 327,
    [114] = 328,
    [115] = 345,
    [116] = 346,
    [117] = 328,
    [118] = 327,
    [119] = 328,
    [120] = 345,
    [121] = 346,
    [122] = 328,
    [123] = 404,
    [124] = 405,
    [125] = 406,
    [126] = 313,
    [127] = 407,
    [128] = 408,
    [129] = 321,
    [130] = 408,
    [131] = 321,
    [132] = 313,
    [133] = 406,
    [134] = 312,
    [135] = 409,
    [136] = 410,
    [137] = 312,
    [138] = 410,
    [139] = 232,
    [140] = 232,
    [141] = 312,
    [142] = 411,
    [143] = 413,
    [144] = 346,
    [145] = 313,
    [146] = 313,
    [147] = 336,
    [148] = 414,
    [149] = 417,
    [150] = 398,
    [151] = 377,
    [152] = 418,
    [153] = 358,
    [154] = 400,
    [155] = 419,
    [156] = 420,
    [157] = 403,
    [158] = 421,
    [159] = 232,
    [160] = 321,
    [161] = 346,
    [162] = 328,
    [163] = 356,
    [164] = 354,
    [165] = 358,
    [166] = 385,
    [167] = 322,
    [168] = 323,
    [169] = 336,
    [170] = 403,
    [171] = 402,
    [172] = 407,
    [173] = 321,
    [174] = 328,
    [175] = 346,
    [176] = 232,
    [177] = 328,
    [178] = 346,
    [179] = 328,
    [180] = 346,
    [181] = 328,
    [182] = 413,
    [183] = 346,
    [184] = 413,
    [185] = 328,
    [186] = 358,
    [187] = 399,
    [188] = 358,
    [189] = 400,
    [190] = 358,
    [191] = 358,
    [192] = 422,
    [193] = 358,
    [194] = 402,
    [195] = 327,
    [196] = 328,
    [197] = 345,
    [198] = 328,
    [199] = 346,
    [200] = 328,
    [201] = 346,
    [202] = 346,
    [203] = 328,
    [204] = 327,
    [205] = 328,
    [206] = 345,
    [207] = 328,
    [208] = 346,
    [209] = 328,
    [210] = 346,
    [211] = 346,
    [212] = 328,
    [213] = 346,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(159),
        [sym_namespace_declaration] = STATE(160),
        [sym_class_declaration] = STATE(161),
        [sym_struct_declaration] = STATE(161),
        [sym_field_declaration] = STATE(162),
        [sym_variable_declaration] = STATE(163),
        [sym__type] = STATE(164),
        [sym_generic_name] = STATE(35),
        [sym_variable_declarator] = STATE(165),
        [sym_equals_value_clause] = STATE(63),
        [sym__literal] = STATE(72),
        [sym_boolean_literal] = STATE(68),
        [sym_character_literal] = STATE(68),
        [sym__unicode_escape_sequence] = STATE(150),
        [sym__simple_escape_sequence] = STATE(150),
        [sym_integer_literal] = STATE(68),
        [sym_real_literal] = STATE(68),
        [sym_string_literal] = STATE(68),
        [sym__regular_string_literal] = STATE(73),
        [sym__regular_string_literal_character] = STATE(166),
        [sym__verbatim_string_literal] = STATE(73),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(167),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(168),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(169),
        [sym_predefined_type] = STATE(35),
        [sym_type_parameter_list] = STATE(170),
        [sym_type_parameter] = STATE(171),
        [sym_qualified_name] = STATE(172),
        [sym_alias_qualified_name] = STATE(125),
        [sym_name_equals] = STATE(137),
        [sym_static] = STATE(137),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(173),
        [aux_sym_class_declaration_repeat1] = STATE(174),
        [aux_sym_variable_declaration_repeat1] = STATE(58),
        [aux_sym__regular_string_literal_repeat1] = STATE(81),
        [aux_sym_type_parameter_list_repeat1] = STATE(105),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_using] = ACTIONS(3),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_namespace] = ACTIONS(7),
        [anon_sym_LBRACE] = ACTIONS(9),
        [anon_sym_RBRACE] = ACTIONS(11),
        [anon_sym_class] = ACTIONS(13),
        [anon_sym_struct] = ACTIONS(15),
        [anon_sym_COMMA] = ACTIONS(17),
        [anon_sym_EQ] = ACTIONS(19),
        [anon_sym_true] = ACTIONS(21),
        [anon_sym_false] = ACTIONS(21),
        [anon_sym_SQUOTE] = ACTIONS(23),
        [sym__hexadecimal_escape_sequence] = ACTIONS(25),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(27),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(27),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(29),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(29),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
        [anon_sym_BSLASH0] = ACTIONS(29),
        [anon_sym_BSLASHa] = ACTIONS(29),
        [anon_sym_BSLASHb] = ACTIONS(29),
        [anon_sym_BSLASHf] = ACTIONS(29),
        [anon_sym_BSLASHn] = ACTIONS(29),
        [anon_sym_BSLASHr] = ACTIONS(29),
        [anon_sym_BSLASHt] = ACTIONS(29),
        [anon_sym_BSLASHv] = ACTIONS(29),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(31),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(33),
        [sym__integer_type_suffix] = ACTIONS(35),
        [sym_null_literal] = ACTIONS(37),
        [anon_sym_DOT] = ACTIONS(39),
        [sym__real_type_suffix] = ACTIONS(41),
        [sym__exponent_part] = ACTIONS(43),
        [anon_sym_DQUOTE] = ACTIONS(45),
        [anon_sym_AT_DQUOTE] = ACTIONS(47),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(51),
        [anon_sym_new] = ACTIONS(53),
        [anon_sym_public] = ACTIONS(53),
        [anon_sym_protected] = ACTIONS(53),
        [anon_sym_internal] = ACTIONS(53),
        [anon_sym_private] = ACTIONS(53),
        [anon_sym_unsafe] = ACTIONS(53),
        [anon_sym_readonly] = ACTIONS(55),
        [anon_sym_volatile] = ACTIONS(55),
        [anon_sym_bool] = ACTIONS(57),
        [anon_sym_byte] = ACTIONS(57),
        [anon_sym_char] = ACTIONS(57),
        [anon_sym_decimal] = ACTIONS(57),
        [anon_sym_double] = ACTIONS(57),
        [anon_sym_float] = ACTIONS(57),
        [anon_sym_int] = ACTIONS(57),
        [anon_sym_long] = ACTIONS(57),
        [anon_sym_object] = ACTIONS(57),
        [anon_sym_sbyte] = ACTIONS(57),
        [anon_sym_short] = ACTIONS(57),
        [anon_sym_string] = ACTIONS(57),
        [anon_sym_uint] = ACTIONS(57),
        [anon_sym_ulong] = ACTIONS(57),
        [anon_sym_ushort] = ACTIONS(57),
        [anon_sym_LT] = ACTIONS(59),
        [anon_sym_GT] = ACTIONS(61),
        [anon_sym_COLON_COLON] = ACTIONS(63),
        [sym_global] = ACTIONS(65),
        [sym_identifier_name] = ACTIONS(67),
        [sym_comment] = ACTIONS(69),
    },
    [1] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(9),
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(16),
        [ts_builtin_sym_end] = ACTIONS(71),
        [anon_sym_using] = ACTIONS(73),
        [anon_sym_namespace] = ACTIONS(75),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(83),
        [anon_sym_public] = ACTIONS(83),
        [anon_sym_protected] = ACTIONS(83),
        [anon_sym_internal] = ACTIONS(83),
        [anon_sym_private] = ACTIONS(83),
        [anon_sym_unsafe] = ACTIONS(83),
        [sym_comment] = ACTIONS(69),
    },
    [2] = {
        [sym_qualified_name] = STATE(136),
        [sym_alias_qualified_name] = STATE(125),
        [sym_name_equals] = STATE(137),
        [sym_static] = STATE(137),
        [anon_sym_static] = ACTIONS(85),
        [sym_global] = ACTIONS(87),
        [sym_identifier_name] = ACTIONS(89),
        [sym_comment] = ACTIONS(69),
    },
    [3] = {
        [sym_qualified_name] = STATE(124),
        [sym_alias_qualified_name] = STATE(125),
        [sym_global] = ACTIONS(87),
        [sym_identifier_name] = ACTIONS(91),
        [sym_comment] = ACTIONS(69),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(93),
        [sym_comment] = ACTIONS(69),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(95),
        [sym_comment] = ACTIONS(69),
    },
    [6] = {
        [sym__class_modifiers] = STATE(111),
        [anon_sym_class] = ACTIONS(97),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(81),
        [anon_sym_public] = ACTIONS(81),
        [anon_sym_protected] = ACTIONS(81),
        [anon_sym_internal] = ACTIONS(81),
        [anon_sym_private] = ACTIONS(81),
        [anon_sym_unsafe] = ACTIONS(81),
        [sym_comment] = ACTIONS(69),
    },
    [7] = {
        [sym__class_modifiers] = STATE(111),
        [sym__struct_modifiers] = STATE(112),
        [anon_sym_class] = ACTIONS(97),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(83),
        [anon_sym_public] = ACTIONS(83),
        [anon_sym_protected] = ACTIONS(83),
        [anon_sym_internal] = ACTIONS(83),
        [anon_sym_private] = ACTIONS(83),
        [anon_sym_unsafe] = ACTIONS(83),
        [sym_comment] = ACTIONS(69),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [sym_comment] = ACTIONS(69),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(103),
        [anon_sym_using] = ACTIONS(103),
        [anon_sym_namespace] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(103),
        [anon_sym_struct] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(103),
        [anon_sym_sealed] = ACTIONS(103),
        [anon_sym_static] = ACTIONS(103),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_unsafe] = ACTIONS(103),
        [sym_comment] = ACTIONS(69),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_RBRACE] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(105),
        [anon_sym_public] = ACTIONS(105),
        [anon_sym_protected] = ACTIONS(105),
        [anon_sym_internal] = ACTIONS(105),
        [anon_sym_private] = ACTIONS(105),
        [anon_sym_unsafe] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [11] = {
        [anon_sym_class] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
    },
    [12] = {
        [anon_sym_class] = ACTIONS(109),
        [sym_comment] = ACTIONS(69),
    },
    [13] = {
        [anon_sym_struct] = ACTIONS(111),
        [sym_comment] = ACTIONS(69),
    },
    [14] = {
        [anon_sym_struct] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [15] = {
        [sym_using_directive] = STATE(18),
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(19),
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_using] = ACTIONS(73),
        [anon_sym_namespace] = ACTIONS(75),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(83),
        [anon_sym_public] = ACTIONS(83),
        [anon_sym_protected] = ACTIONS(83),
        [anon_sym_internal] = ACTIONS(83),
        [anon_sym_private] = ACTIONS(83),
        [anon_sym_unsafe] = ACTIONS(83),
        [sym_comment] = ACTIONS(69),
    },
    [16] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_namespace] = ACTIONS(75),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(83),
        [anon_sym_public] = ACTIONS(83),
        [anon_sym_protected] = ACTIONS(83),
        [anon_sym_internal] = ACTIONS(83),
        [anon_sym_private] = ACTIONS(83),
        [anon_sym_unsafe] = ACTIONS(83),
        [sym_comment] = ACTIONS(69),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_namespace] = ACTIONS(117),
        [anon_sym_RBRACE] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_abstract] = ACTIONS(117),
        [anon_sym_sealed] = ACTIONS(117),
        [anon_sym_static] = ACTIONS(117),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_unsafe] = ACTIONS(117),
        [sym_comment] = ACTIONS(69),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(119),
        [anon_sym_using] = ACTIONS(119),
        [anon_sym_namespace] = ACTIONS(119),
        [anon_sym_class] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(119),
        [anon_sym_abstract] = ACTIONS(119),
        [anon_sym_sealed] = ACTIONS(119),
        [anon_sym_static] = ACTIONS(119),
        [anon_sym_new] = ACTIONS(119),
        [anon_sym_public] = ACTIONS(119),
        [anon_sym_protected] = ACTIONS(119),
        [anon_sym_internal] = ACTIONS(119),
        [anon_sym_private] = ACTIONS(119),
        [anon_sym_unsafe] = ACTIONS(119),
        [sym_comment] = ACTIONS(69),
    },
    [19] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_namespace] = ACTIONS(75),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(83),
        [anon_sym_public] = ACTIONS(83),
        [anon_sym_protected] = ACTIONS(83),
        [anon_sym_internal] = ACTIONS(83),
        [anon_sym_private] = ACTIONS(83),
        [anon_sym_unsafe] = ACTIONS(83),
        [sym_comment] = ACTIONS(69),
    },
    [20] = {
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(69),
    },
    [21] = {
        [sym_type_parameter_list] = STATE(24),
        [anon_sym_LBRACE] = ACTIONS(125),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [22] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(44),
        [anon_sym_RBRACE] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [23] = {
        [sym__type] = STATE(101),
        [sym_generic_name] = STATE(35),
        [sym_predefined_type] = STATE(35),
        [sym_type_parameter] = STATE(102),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_comment] = ACTIONS(69),
    },
    [25] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(38),
        [anon_sym_RBRACE] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_namespace] = ACTIONS(153),
        [anon_sym_RBRACE] = ACTIONS(151),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_struct] = ACTIONS(153),
        [anon_sym_abstract] = ACTIONS(153),
        [anon_sym_sealed] = ACTIONS(153),
        [anon_sym_static] = ACTIONS(153),
        [anon_sym_new] = ACTIONS(153),
        [anon_sym_public] = ACTIONS(153),
        [anon_sym_protected] = ACTIONS(153),
        [anon_sym_internal] = ACTIONS(153),
        [anon_sym_private] = ACTIONS(153),
        [anon_sym_unsafe] = ACTIONS(153),
        [anon_sym_readonly] = ACTIONS(153),
        [anon_sym_volatile] = ACTIONS(153),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
    },
    [27] = {
        [sym__class_modifiers] = STATE(111),
        [sym__field_modifiers] = STATE(110),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(137),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_protected] = ACTIONS(137),
        [anon_sym_internal] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_unsafe] = ACTIONS(137),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(159),
        [anon_sym_byte] = ACTIONS(159),
        [anon_sym_char] = ACTIONS(159),
        [anon_sym_decimal] = ACTIONS(159),
        [anon_sym_double] = ACTIONS(159),
        [anon_sym_float] = ACTIONS(159),
        [anon_sym_int] = ACTIONS(159),
        [anon_sym_long] = ACTIONS(159),
        [anon_sym_object] = ACTIONS(159),
        [anon_sym_sbyte] = ACTIONS(159),
        [anon_sym_short] = ACTIONS(159),
        [anon_sym_string] = ACTIONS(159),
        [anon_sym_uint] = ACTIONS(159),
        [anon_sym_ulong] = ACTIONS(159),
        [anon_sym_ushort] = ACTIONS(159),
        [sym_identifier_name] = ACTIONS(161),
        [sym_comment] = ACTIONS(69),
    },
    [28] = {
        [sym__class_modifiers] = STATE(111),
        [sym__struct_modifiers] = STATE(112),
        [sym__field_modifiers] = STATE(110),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(163),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(159),
        [anon_sym_byte] = ACTIONS(159),
        [anon_sym_char] = ACTIONS(159),
        [anon_sym_decimal] = ACTIONS(159),
        [anon_sym_double] = ACTIONS(159),
        [anon_sym_float] = ACTIONS(159),
        [anon_sym_int] = ACTIONS(159),
        [anon_sym_long] = ACTIONS(159),
        [anon_sym_object] = ACTIONS(159),
        [anon_sym_sbyte] = ACTIONS(159),
        [anon_sym_short] = ACTIONS(159),
        [anon_sym_string] = ACTIONS(159),
        [anon_sym_uint] = ACTIONS(159),
        [anon_sym_ulong] = ACTIONS(159),
        [anon_sym_ushort] = ACTIONS(159),
        [sym_identifier_name] = ACTIONS(161),
        [sym_comment] = ACTIONS(69),
    },
    [29] = {
        [sym__field_modifiers] = STATE(110),
        [anon_sym_static] = ACTIONS(141),
        [anon_sym_new] = ACTIONS(141),
        [anon_sym_public] = ACTIONS(141),
        [anon_sym_protected] = ACTIONS(141),
        [anon_sym_internal] = ACTIONS(141),
        [anon_sym_private] = ACTIONS(141),
        [anon_sym_unsafe] = ACTIONS(141),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(159),
        [anon_sym_byte] = ACTIONS(159),
        [anon_sym_char] = ACTIONS(159),
        [anon_sym_decimal] = ACTIONS(159),
        [anon_sym_double] = ACTIONS(159),
        [anon_sym_float] = ACTIONS(159),
        [anon_sym_int] = ACTIONS(159),
        [anon_sym_long] = ACTIONS(159),
        [anon_sym_object] = ACTIONS(159),
        [anon_sym_sbyte] = ACTIONS(159),
        [anon_sym_short] = ACTIONS(159),
        [anon_sym_string] = ACTIONS(159),
        [anon_sym_uint] = ACTIONS(159),
        [anon_sym_ulong] = ACTIONS(159),
        [anon_sym_ushort] = ACTIONS(159),
        [sym_identifier_name] = ACTIONS(161),
        [sym_comment] = ACTIONS(69),
    },
    [30] = {
        [anon_sym_COMMA] = ACTIONS(165),
        [anon_sym_GT] = ACTIONS(165),
        [sym_identifier_name] = ACTIONS(167),
        [sym_comment] = ACTIONS(69),
    },
    [31] = {
        [sym_type_parameter_list] = STATE(100),
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_LT] = ACTIONS(127),
        [anon_sym_GT] = ACTIONS(169),
        [sym_identifier_name] = ACTIONS(171),
        [sym_comment] = ACTIONS(69),
    },
    [32] = {
        [anon_sym_RBRACE] = ACTIONS(173),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_struct] = ACTIONS(175),
        [anon_sym_abstract] = ACTIONS(175),
        [anon_sym_sealed] = ACTIONS(175),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(175),
        [anon_sym_public] = ACTIONS(175),
        [anon_sym_protected] = ACTIONS(175),
        [anon_sym_internal] = ACTIONS(175),
        [anon_sym_private] = ACTIONS(175),
        [anon_sym_unsafe] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(175),
        [anon_sym_byte] = ACTIONS(175),
        [anon_sym_char] = ACTIONS(175),
        [anon_sym_decimal] = ACTIONS(175),
        [anon_sym_double] = ACTIONS(175),
        [anon_sym_float] = ACTIONS(175),
        [anon_sym_int] = ACTIONS(175),
        [anon_sym_long] = ACTIONS(175),
        [anon_sym_object] = ACTIONS(175),
        [anon_sym_sbyte] = ACTIONS(175),
        [anon_sym_short] = ACTIONS(175),
        [anon_sym_string] = ACTIONS(175),
        [anon_sym_uint] = ACTIONS(175),
        [anon_sym_ulong] = ACTIONS(175),
        [anon_sym_ushort] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(177),
        [sym_comment] = ACTIONS(69),
    },
    [33] = {
        [anon_sym_SEMI] = ACTIONS(179),
        [sym_comment] = ACTIONS(69),
    },
    [34] = {
        [sym_variable_declarator] = STATE(56),
        [sym_identifier_name] = ACTIONS(181),
        [sym_comment] = ACTIONS(69),
    },
    [35] = {
        [anon_sym_COMMA] = ACTIONS(169),
        [anon_sym_GT] = ACTIONS(169),
        [sym_identifier_name] = ACTIONS(171),
        [sym_comment] = ACTIONS(69),
    },
    [36] = {
        [sym_variable_declaration] = STATE(41),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_predefined_type] = STATE(35),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [37] = {
        [anon_sym_bool] = ACTIONS(183),
        [anon_sym_byte] = ACTIONS(183),
        [anon_sym_char] = ACTIONS(183),
        [anon_sym_decimal] = ACTIONS(183),
        [anon_sym_double] = ACTIONS(183),
        [anon_sym_float] = ACTIONS(183),
        [anon_sym_int] = ACTIONS(183),
        [anon_sym_long] = ACTIONS(183),
        [anon_sym_object] = ACTIONS(183),
        [anon_sym_sbyte] = ACTIONS(183),
        [anon_sym_short] = ACTIONS(183),
        [anon_sym_string] = ACTIONS(183),
        [anon_sym_uint] = ACTIONS(183),
        [anon_sym_ulong] = ACTIONS(183),
        [anon_sym_ushort] = ACTIONS(183),
        [sym_identifier_name] = ACTIONS(185),
        [sym_comment] = ACTIONS(69),
    },
    [38] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(187),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(189),
        [anon_sym_namespace] = ACTIONS(191),
        [anon_sym_RBRACE] = ACTIONS(189),
        [anon_sym_class] = ACTIONS(191),
        [anon_sym_struct] = ACTIONS(191),
        [anon_sym_abstract] = ACTIONS(191),
        [anon_sym_sealed] = ACTIONS(191),
        [anon_sym_static] = ACTIONS(191),
        [anon_sym_new] = ACTIONS(191),
        [anon_sym_public] = ACTIONS(191),
        [anon_sym_protected] = ACTIONS(191),
        [anon_sym_internal] = ACTIONS(191),
        [anon_sym_private] = ACTIONS(191),
        [anon_sym_unsafe] = ACTIONS(191),
        [anon_sym_readonly] = ACTIONS(191),
        [anon_sym_volatile] = ACTIONS(191),
        [anon_sym_bool] = ACTIONS(191),
        [anon_sym_byte] = ACTIONS(191),
        [anon_sym_char] = ACTIONS(191),
        [anon_sym_decimal] = ACTIONS(191),
        [anon_sym_double] = ACTIONS(191),
        [anon_sym_float] = ACTIONS(191),
        [anon_sym_int] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_object] = ACTIONS(191),
        [anon_sym_sbyte] = ACTIONS(191),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_string] = ACTIONS(191),
        [anon_sym_uint] = ACTIONS(191),
        [anon_sym_ulong] = ACTIONS(191),
        [anon_sym_ushort] = ACTIONS(191),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(69),
    },
    [40] = {
        [anon_sym_RBRACE] = ACTIONS(195),
        [anon_sym_class] = ACTIONS(197),
        [anon_sym_struct] = ACTIONS(197),
        [anon_sym_abstract] = ACTIONS(197),
        [anon_sym_sealed] = ACTIONS(197),
        [anon_sym_static] = ACTIONS(197),
        [anon_sym_new] = ACTIONS(197),
        [anon_sym_public] = ACTIONS(197),
        [anon_sym_protected] = ACTIONS(197),
        [anon_sym_internal] = ACTIONS(197),
        [anon_sym_private] = ACTIONS(197),
        [anon_sym_unsafe] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(197),
        [anon_sym_volatile] = ACTIONS(197),
        [anon_sym_bool] = ACTIONS(197),
        [anon_sym_byte] = ACTIONS(197),
        [anon_sym_char] = ACTIONS(197),
        [anon_sym_decimal] = ACTIONS(197),
        [anon_sym_double] = ACTIONS(197),
        [anon_sym_float] = ACTIONS(197),
        [anon_sym_int] = ACTIONS(197),
        [anon_sym_long] = ACTIONS(197),
        [anon_sym_object] = ACTIONS(197),
        [anon_sym_sbyte] = ACTIONS(197),
        [anon_sym_short] = ACTIONS(197),
        [anon_sym_string] = ACTIONS(197),
        [anon_sym_uint] = ACTIONS(197),
        [anon_sym_ulong] = ACTIONS(197),
        [anon_sym_ushort] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(199),
        [sym_comment] = ACTIONS(69),
    },
    [41] = {
        [anon_sym_SEMI] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [42] = {
        [anon_sym_RBRACE] = ACTIONS(203),
        [anon_sym_class] = ACTIONS(205),
        [anon_sym_struct] = ACTIONS(205),
        [anon_sym_abstract] = ACTIONS(205),
        [anon_sym_sealed] = ACTIONS(205),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(205),
        [anon_sym_public] = ACTIONS(205),
        [anon_sym_protected] = ACTIONS(205),
        [anon_sym_internal] = ACTIONS(205),
        [anon_sym_private] = ACTIONS(205),
        [anon_sym_unsafe] = ACTIONS(205),
        [anon_sym_readonly] = ACTIONS(205),
        [anon_sym_volatile] = ACTIONS(205),
        [anon_sym_bool] = ACTIONS(205),
        [anon_sym_byte] = ACTIONS(205),
        [anon_sym_char] = ACTIONS(205),
        [anon_sym_decimal] = ACTIONS(205),
        [anon_sym_double] = ACTIONS(205),
        [anon_sym_float] = ACTIONS(205),
        [anon_sym_int] = ACTIONS(205),
        [anon_sym_long] = ACTIONS(205),
        [anon_sym_object] = ACTIONS(205),
        [anon_sym_sbyte] = ACTIONS(205),
        [anon_sym_short] = ACTIONS(205),
        [anon_sym_string] = ACTIONS(205),
        [anon_sym_uint] = ACTIONS(205),
        [anon_sym_ulong] = ACTIONS(205),
        [anon_sym_ushort] = ACTIONS(205),
        [sym_identifier_name] = ACTIONS(207),
        [sym_comment] = ACTIONS(69),
    },
    [43] = {
        [ts_builtin_sym_end] = ACTIONS(209),
        [anon_sym_namespace] = ACTIONS(211),
        [anon_sym_RBRACE] = ACTIONS(209),
        [anon_sym_class] = ACTIONS(211),
        [anon_sym_struct] = ACTIONS(211),
        [anon_sym_abstract] = ACTIONS(211),
        [anon_sym_sealed] = ACTIONS(211),
        [anon_sym_static] = ACTIONS(211),
        [anon_sym_new] = ACTIONS(211),
        [anon_sym_public] = ACTIONS(211),
        [anon_sym_protected] = ACTIONS(211),
        [anon_sym_internal] = ACTIONS(211),
        [anon_sym_private] = ACTIONS(211),
        [anon_sym_unsafe] = ACTIONS(211),
        [anon_sym_readonly] = ACTIONS(211),
        [anon_sym_volatile] = ACTIONS(211),
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
        [sym_comment] = ACTIONS(69),
    },
    [44] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [45] = {
        [sym_identifier_name] = ACTIONS(215),
        [sym_comment] = ACTIONS(69),
    },
    [46] = {
        [sym_type_parameter_list] = STATE(48),
        [anon_sym_LBRACE] = ACTIONS(217),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [47] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(54),
        [anon_sym_RBRACE] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [48] = {
        [anon_sym_LBRACE] = ACTIONS(221),
        [sym_comment] = ACTIONS(69),
    },
    [49] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(51),
        [anon_sym_RBRACE] = ACTIONS(223),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [50] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_namespace] = ACTIONS(227),
        [anon_sym_RBRACE] = ACTIONS(225),
        [anon_sym_class] = ACTIONS(227),
        [anon_sym_struct] = ACTIONS(227),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(227),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_unsafe] = ACTIONS(227),
        [anon_sym_readonly] = ACTIONS(227),
        [anon_sym_volatile] = ACTIONS(227),
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
        [sym_comment] = ACTIONS(69),
    },
    [51] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(231),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [52] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_namespace] = ACTIONS(235),
        [anon_sym_RBRACE] = ACTIONS(233),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_struct] = ACTIONS(235),
        [anon_sym_abstract] = ACTIONS(235),
        [anon_sym_sealed] = ACTIONS(235),
        [anon_sym_static] = ACTIONS(235),
        [anon_sym_new] = ACTIONS(235),
        [anon_sym_public] = ACTIONS(235),
        [anon_sym_protected] = ACTIONS(235),
        [anon_sym_internal] = ACTIONS(235),
        [anon_sym_private] = ACTIONS(235),
        [anon_sym_unsafe] = ACTIONS(235),
        [anon_sym_readonly] = ACTIONS(235),
        [anon_sym_volatile] = ACTIONS(235),
        [anon_sym_bool] = ACTIONS(235),
        [anon_sym_byte] = ACTIONS(235),
        [anon_sym_char] = ACTIONS(235),
        [anon_sym_decimal] = ACTIONS(235),
        [anon_sym_double] = ACTIONS(235),
        [anon_sym_float] = ACTIONS(235),
        [anon_sym_int] = ACTIONS(235),
        [anon_sym_long] = ACTIONS(235),
        [anon_sym_object] = ACTIONS(235),
        [anon_sym_sbyte] = ACTIONS(235),
        [anon_sym_short] = ACTIONS(235),
        [anon_sym_string] = ACTIONS(235),
        [anon_sym_uint] = ACTIONS(235),
        [anon_sym_ulong] = ACTIONS(235),
        [anon_sym_ushort] = ACTIONS(235),
        [sym_identifier_name] = ACTIONS(237),
        [sym_comment] = ACTIONS(69),
    },
    [53] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_namespace] = ACTIONS(241),
        [anon_sym_RBRACE] = ACTIONS(239),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_struct] = ACTIONS(241),
        [anon_sym_abstract] = ACTIONS(241),
        [anon_sym_sealed] = ACTIONS(241),
        [anon_sym_static] = ACTIONS(241),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_unsafe] = ACTIONS(241),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_volatile] = ACTIONS(241),
        [anon_sym_bool] = ACTIONS(241),
        [anon_sym_byte] = ACTIONS(241),
        [anon_sym_char] = ACTIONS(241),
        [anon_sym_decimal] = ACTIONS(241),
        [anon_sym_double] = ACTIONS(241),
        [anon_sym_float] = ACTIONS(241),
        [anon_sym_int] = ACTIONS(241),
        [anon_sym_long] = ACTIONS(241),
        [anon_sym_object] = ACTIONS(241),
        [anon_sym_sbyte] = ACTIONS(241),
        [anon_sym_short] = ACTIONS(241),
        [anon_sym_string] = ACTIONS(241),
        [anon_sym_uint] = ACTIONS(241),
        [anon_sym_ulong] = ACTIONS(241),
        [anon_sym_ushort] = ACTIONS(241),
        [sym_identifier_name] = ACTIONS(243),
        [sym_comment] = ACTIONS(69),
    },
    [54] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(223),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [55] = {
        [sym_equals_value_clause] = STATE(63),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_EQ] = ACTIONS(247),
        [sym_comment] = ACTIONS(69),
    },
    [56] = {
        [aux_sym_variable_declaration_repeat1] = STATE(58),
        [anon_sym_SEMI] = ACTIONS(249),
        [anon_sym_COMMA] = ACTIONS(251),
        [sym_comment] = ACTIONS(69),
    },
    [57] = {
        [sym_variable_declarator] = STATE(61),
        [sym_identifier_name] = ACTIONS(181),
        [sym_comment] = ACTIONS(69),
    },
    [58] = {
        [anon_sym_SEMI] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(255),
        [sym_comment] = ACTIONS(69),
    },
    [59] = {
        [sym_variable_declarator] = STATE(60),
        [sym_identifier_name] = ACTIONS(181),
        [sym_comment] = ACTIONS(69),
    },
    [60] = {
        [anon_sym_SEMI] = ACTIONS(257),
        [anon_sym_COMMA] = ACTIONS(257),
        [sym_comment] = ACTIONS(69),
    },
    [61] = {
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(259),
        [sym_comment] = ACTIONS(69),
    },
    [62] = {
        [sym__literal] = STATE(72),
        [sym_boolean_literal] = STATE(68),
        [sym_character_literal] = STATE(68),
        [sym_integer_literal] = STATE(68),
        [sym_real_literal] = STATE(68),
        [sym_string_literal] = STATE(68),
        [sym__regular_string_literal] = STATE(73),
        [sym__verbatim_string_literal] = STATE(73),
        [anon_sym_true] = ACTIONS(261),
        [anon_sym_false] = ACTIONS(261),
        [anon_sym_SQUOTE] = ACTIONS(263),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(265),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(267),
        [sym_null_literal] = ACTIONS(269),
        [anon_sym_DOT] = ACTIONS(271),
        [anon_sym_DQUOTE] = ACTIONS(273),
        [anon_sym_AT_DQUOTE] = ACTIONS(275),
        [sym_comment] = ACTIONS(69),
    },
    [63] = {
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_COMMA] = ACTIONS(277),
        [sym_comment] = ACTIONS(69),
    },
    [64] = {
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(279),
        [sym_comment] = ACTIONS(69),
    },
    [65] = {
        [sym__unicode_escape_sequence] = STATE(95),
        [sym__simple_escape_sequence] = STATE(95),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(281),
        [sym__hexadecimal_escape_sequence] = ACTIONS(281),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(283),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(283),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(285),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(285),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(285),
        [anon_sym_BSLASH0] = ACTIONS(285),
        [anon_sym_BSLASHa] = ACTIONS(285),
        [anon_sym_BSLASHb] = ACTIONS(285),
        [anon_sym_BSLASHf] = ACTIONS(285),
        [anon_sym_BSLASHn] = ACTIONS(285),
        [anon_sym_BSLASHr] = ACTIONS(285),
        [anon_sym_BSLASHt] = ACTIONS(285),
        [anon_sym_BSLASHv] = ACTIONS(285),
        [sym_comment] = ACTIONS(69),
    },
    [66] = {
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_COMMA] = ACTIONS(287),
        [sym__integer_type_suffix] = ACTIONS(289),
        [anon_sym_DOT] = ACTIONS(291),
        [sym__real_type_suffix] = ACTIONS(293),
        [sym__exponent_part] = ACTIONS(295),
        [sym_comment] = ACTIONS(69),
    },
    [67] = {
        [anon_sym_SEMI] = ACTIONS(287),
        [anon_sym_COMMA] = ACTIONS(287),
        [sym__integer_type_suffix] = ACTIONS(289),
        [sym_comment] = ACTIONS(69),
    },
    [68] = {
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_COMMA] = ACTIONS(297),
        [sym_comment] = ACTIONS(69),
    },
    [69] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(299),
        [sym_comment] = ACTIONS(69),
    },
    [70] = {
        [sym__unicode_escape_sequence] = STATE(76),
        [sym__simple_escape_sequence] = STATE(76),
        [sym__regular_string_literal_character] = STATE(80),
        [aux_sym__regular_string_literal_repeat1] = STATE(81),
        [sym__hexadecimal_escape_sequence] = ACTIONS(301),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(303),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(303),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(305),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(305),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(305),
        [anon_sym_BSLASH0] = ACTIONS(305),
        [anon_sym_BSLASHa] = ACTIONS(305),
        [anon_sym_BSLASHb] = ACTIONS(305),
        [anon_sym_BSLASHf] = ACTIONS(305),
        [anon_sym_BSLASHn] = ACTIONS(305),
        [anon_sym_BSLASHr] = ACTIONS(305),
        [anon_sym_BSLASHt] = ACTIONS(305),
        [anon_sym_BSLASHv] = ACTIONS(305),
        [anon_sym_DQUOTE] = ACTIONS(307),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(301),
        [sym_comment] = ACTIONS(69),
    },
    [71] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(309),
        [sym_comment] = ACTIONS(311),
    },
    [72] = {
        [anon_sym_SEMI] = ACTIONS(313),
        [anon_sym_COMMA] = ACTIONS(313),
        [sym_comment] = ACTIONS(69),
    },
    [73] = {
        [anon_sym_SEMI] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [sym_comment] = ACTIONS(69),
    },
    [74] = {
        [anon_sym_DQUOTE] = ACTIONS(317),
        [sym_comment] = ACTIONS(69),
    },
    [75] = {
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_COMMA] = ACTIONS(319),
        [sym_comment] = ACTIONS(69),
    },
    [76] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(321),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(323),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(323),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(323),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(323),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(323),
        [anon_sym_BSLASH0] = ACTIONS(323),
        [anon_sym_BSLASHa] = ACTIONS(323),
        [anon_sym_BSLASHb] = ACTIONS(323),
        [anon_sym_BSLASHf] = ACTIONS(323),
        [anon_sym_BSLASHn] = ACTIONS(323),
        [anon_sym_BSLASHr] = ACTIONS(323),
        [anon_sym_BSLASHt] = ACTIONS(323),
        [anon_sym_BSLASHv] = ACTIONS(323),
        [anon_sym_DQUOTE] = ACTIONS(323),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(321),
        [sym_comment] = ACTIONS(69),
    },
    [77] = {
        [anon_sym_SQUOTE] = ACTIONS(325),
        [sym__hexadecimal_escape_sequence] = ACTIONS(327),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(325),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(325),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(325),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(325),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(325),
        [anon_sym_BSLASH0] = ACTIONS(325),
        [anon_sym_BSLASHa] = ACTIONS(325),
        [anon_sym_BSLASHb] = ACTIONS(325),
        [anon_sym_BSLASHf] = ACTIONS(325),
        [anon_sym_BSLASHn] = ACTIONS(325),
        [anon_sym_BSLASHr] = ACTIONS(325),
        [anon_sym_BSLASHt] = ACTIONS(325),
        [anon_sym_BSLASHv] = ACTIONS(325),
        [anon_sym_DQUOTE] = ACTIONS(325),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(329),
        [sym_comment] = ACTIONS(69),
    },
    [78] = {
        [anon_sym_SQUOTE] = ACTIONS(331),
        [sym__hexadecimal_escape_sequence] = ACTIONS(333),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(331),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(331),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(331),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(331),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(331),
        [anon_sym_BSLASH0] = ACTIONS(331),
        [anon_sym_BSLASHa] = ACTIONS(331),
        [anon_sym_BSLASHb] = ACTIONS(331),
        [anon_sym_BSLASHf] = ACTIONS(331),
        [anon_sym_BSLASHn] = ACTIONS(331),
        [anon_sym_BSLASHr] = ACTIONS(331),
        [anon_sym_BSLASHt] = ACTIONS(331),
        [anon_sym_BSLASHv] = ACTIONS(331),
        [anon_sym_DQUOTE] = ACTIONS(331),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(335),
        [sym_comment] = ACTIONS(69),
    },
    [79] = {
        [anon_sym_SEMI] = ACTIONS(337),
        [anon_sym_COMMA] = ACTIONS(337),
        [sym_comment] = ACTIONS(69),
    },
    [80] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(339),
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
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(339),
        [sym_comment] = ACTIONS(69),
    },
    [81] = {
        [sym__unicode_escape_sequence] = STATE(76),
        [sym__simple_escape_sequence] = STATE(76),
        [sym__regular_string_literal_character] = STATE(83),
        [sym__hexadecimal_escape_sequence] = ACTIONS(301),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(303),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(303),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(305),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(305),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(305),
        [anon_sym_BSLASH0] = ACTIONS(305),
        [anon_sym_BSLASHa] = ACTIONS(305),
        [anon_sym_BSLASHb] = ACTIONS(305),
        [anon_sym_BSLASHf] = ACTIONS(305),
        [anon_sym_BSLASHn] = ACTIONS(305),
        [anon_sym_BSLASHr] = ACTIONS(305),
        [anon_sym_BSLASHt] = ACTIONS(305),
        [anon_sym_BSLASHv] = ACTIONS(305),
        [anon_sym_DQUOTE] = ACTIONS(343),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(301),
        [sym_comment] = ACTIONS(69),
    },
    [82] = {
        [anon_sym_SEMI] = ACTIONS(345),
        [anon_sym_COMMA] = ACTIONS(345),
        [sym_comment] = ACTIONS(69),
    },
    [83] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(347),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(349),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(349),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(349),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(349),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(349),
        [anon_sym_BSLASH0] = ACTIONS(349),
        [anon_sym_BSLASHa] = ACTIONS(349),
        [anon_sym_BSLASHb] = ACTIONS(349),
        [anon_sym_BSLASHf] = ACTIONS(349),
        [anon_sym_BSLASHn] = ACTIONS(349),
        [anon_sym_BSLASHr] = ACTIONS(349),
        [anon_sym_BSLASHt] = ACTIONS(349),
        [anon_sym_BSLASHv] = ACTIONS(349),
        [anon_sym_DQUOTE] = ACTIONS(349),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(347),
        [sym_comment] = ACTIONS(69),
    },
    [84] = {
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_COMMA] = ACTIONS(351),
        [sym__real_type_suffix] = ACTIONS(353),
        [sym__exponent_part] = ACTIONS(355),
        [sym_comment] = ACTIONS(69),
    },
    [85] = {
        [anon_sym_SEMI] = ACTIONS(357),
        [anon_sym_COMMA] = ACTIONS(357),
        [sym_comment] = ACTIONS(69),
    },
    [86] = {
        [anon_sym_SEMI] = ACTIONS(357),
        [anon_sym_COMMA] = ACTIONS(357),
        [sym__real_type_suffix] = ACTIONS(359),
        [sym_comment] = ACTIONS(69),
    },
    [87] = {
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym_comment] = ACTIONS(69),
    },
    [88] = {
        [anon_sym_SEMI] = ACTIONS(363),
        [anon_sym_COMMA] = ACTIONS(363),
        [sym_comment] = ACTIONS(69),
    },
    [89] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(365),
        [sym_comment] = ACTIONS(69),
    },
    [90] = {
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_COMMA] = ACTIONS(351),
        [sym_comment] = ACTIONS(69),
    },
    [91] = {
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_COMMA] = ACTIONS(351),
        [sym__real_type_suffix] = ACTIONS(353),
        [sym_comment] = ACTIONS(69),
    },
    [92] = {
        [anon_sym_SEMI] = ACTIONS(357),
        [anon_sym_COMMA] = ACTIONS(357),
        [sym__real_type_suffix] = ACTIONS(359),
        [sym__exponent_part] = ACTIONS(367),
        [sym_comment] = ACTIONS(69),
    },
    [93] = {
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym__real_type_suffix] = ACTIONS(369),
        [sym_comment] = ACTIONS(69),
    },
    [94] = {
        [anon_sym_SEMI] = ACTIONS(371),
        [anon_sym_COMMA] = ACTIONS(371),
        [sym_comment] = ACTIONS(69),
    },
    [95] = {
        [anon_sym_SQUOTE] = ACTIONS(373),
        [sym_comment] = ACTIONS(69),
    },
    [96] = {
        [anon_sym_SQUOTE] = ACTIONS(325),
        [sym_comment] = ACTIONS(69),
    },
    [97] = {
        [anon_sym_SQUOTE] = ACTIONS(331),
        [sym_comment] = ACTIONS(69),
    },
    [98] = {
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(69),
    },
    [99] = {
        [anon_sym_RBRACE] = ACTIONS(377),
        [anon_sym_class] = ACTIONS(379),
        [anon_sym_struct] = ACTIONS(379),
        [anon_sym_abstract] = ACTIONS(379),
        [anon_sym_sealed] = ACTIONS(379),
        [anon_sym_static] = ACTIONS(379),
        [anon_sym_new] = ACTIONS(379),
        [anon_sym_public] = ACTIONS(379),
        [anon_sym_protected] = ACTIONS(379),
        [anon_sym_internal] = ACTIONS(379),
        [anon_sym_private] = ACTIONS(379),
        [anon_sym_unsafe] = ACTIONS(379),
        [anon_sym_readonly] = ACTIONS(379),
        [anon_sym_volatile] = ACTIONS(379),
        [anon_sym_bool] = ACTIONS(379),
        [anon_sym_byte] = ACTIONS(379),
        [anon_sym_char] = ACTIONS(379),
        [anon_sym_decimal] = ACTIONS(379),
        [anon_sym_double] = ACTIONS(379),
        [anon_sym_float] = ACTIONS(379),
        [anon_sym_int] = ACTIONS(379),
        [anon_sym_long] = ACTIONS(379),
        [anon_sym_object] = ACTIONS(379),
        [anon_sym_sbyte] = ACTIONS(379),
        [anon_sym_short] = ACTIONS(379),
        [anon_sym_string] = ACTIONS(379),
        [anon_sym_uint] = ACTIONS(379),
        [anon_sym_ulong] = ACTIONS(379),
        [anon_sym_ushort] = ACTIONS(379),
        [sym_identifier_name] = ACTIONS(381),
        [sym_comment] = ACTIONS(69),
    },
    [100] = {
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_GT] = ACTIONS(383),
        [sym_identifier_name] = ACTIONS(385),
        [sym_comment] = ACTIONS(69),
    },
    [101] = {
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_GT] = ACTIONS(387),
        [sym_comment] = ACTIONS(69),
    },
    [102] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(105),
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_GT] = ACTIONS(391),
        [sym_comment] = ACTIONS(69),
    },
    [103] = {
        [sym__type] = STATE(101),
        [sym_generic_name] = STATE(35),
        [sym_predefined_type] = STATE(35),
        [sym_type_parameter] = STATE(109),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [104] = {
        [anon_sym_LBRACE] = ACTIONS(393),
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_GT] = ACTIONS(393),
        [sym_identifier_name] = ACTIONS(395),
        [sym_comment] = ACTIONS(69),
    },
    [105] = {
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_GT] = ACTIONS(399),
        [sym_comment] = ACTIONS(69),
    },
    [106] = {
        [sym__type] = STATE(101),
        [sym_generic_name] = STATE(35),
        [sym_predefined_type] = STATE(35),
        [sym_type_parameter] = STATE(108),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [107] = {
        [anon_sym_LBRACE] = ACTIONS(401),
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_GT] = ACTIONS(401),
        [sym_identifier_name] = ACTIONS(403),
        [sym_comment] = ACTIONS(69),
    },
    [108] = {
        [anon_sym_COMMA] = ACTIONS(405),
        [anon_sym_GT] = ACTIONS(405),
        [sym_comment] = ACTIONS(69),
    },
    [109] = {
        [anon_sym_COMMA] = ACTIONS(407),
        [anon_sym_GT] = ACTIONS(407),
        [sym_comment] = ACTIONS(69),
    },
    [110] = {
        [anon_sym_bool] = ACTIONS(409),
        [anon_sym_byte] = ACTIONS(409),
        [anon_sym_char] = ACTIONS(409),
        [anon_sym_decimal] = ACTIONS(409),
        [anon_sym_double] = ACTIONS(409),
        [anon_sym_float] = ACTIONS(409),
        [anon_sym_int] = ACTIONS(409),
        [anon_sym_long] = ACTIONS(409),
        [anon_sym_object] = ACTIONS(409),
        [anon_sym_sbyte] = ACTIONS(409),
        [anon_sym_short] = ACTIONS(409),
        [anon_sym_string] = ACTIONS(409),
        [anon_sym_uint] = ACTIONS(409),
        [anon_sym_ulong] = ACTIONS(409),
        [anon_sym_ushort] = ACTIONS(409),
        [sym_identifier_name] = ACTIONS(411),
        [sym_comment] = ACTIONS(69),
    },
    [111] = {
        [anon_sym_class] = ACTIONS(413),
        [sym_comment] = ACTIONS(69),
    },
    [112] = {
        [anon_sym_struct] = ACTIONS(415),
        [sym_comment] = ACTIONS(69),
    },
    [113] = {
        [sym_type_parameter_list] = STATE(115),
        [anon_sym_LBRACE] = ACTIONS(417),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [114] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(117),
        [anon_sym_RBRACE] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [115] = {
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [116] = {
        [ts_builtin_sym_end] = ACTIONS(421),
        [anon_sym_namespace] = ACTIONS(423),
        [anon_sym_RBRACE] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(423),
        [anon_sym_struct] = ACTIONS(423),
        [anon_sym_abstract] = ACTIONS(423),
        [anon_sym_sealed] = ACTIONS(423),
        [anon_sym_static] = ACTIONS(423),
        [anon_sym_new] = ACTIONS(423),
        [anon_sym_public] = ACTIONS(423),
        [anon_sym_protected] = ACTIONS(423),
        [anon_sym_internal] = ACTIONS(423),
        [anon_sym_private] = ACTIONS(423),
        [anon_sym_unsafe] = ACTIONS(423),
        [anon_sym_readonly] = ACTIONS(423),
        [anon_sym_volatile] = ACTIONS(423),
        [anon_sym_bool] = ACTIONS(423),
        [anon_sym_byte] = ACTIONS(423),
        [anon_sym_char] = ACTIONS(423),
        [anon_sym_decimal] = ACTIONS(423),
        [anon_sym_double] = ACTIONS(423),
        [anon_sym_float] = ACTIONS(423),
        [anon_sym_int] = ACTIONS(423),
        [anon_sym_long] = ACTIONS(423),
        [anon_sym_object] = ACTIONS(423),
        [anon_sym_sbyte] = ACTIONS(423),
        [anon_sym_short] = ACTIONS(423),
        [anon_sym_string] = ACTIONS(423),
        [anon_sym_uint] = ACTIONS(423),
        [anon_sym_ulong] = ACTIONS(423),
        [anon_sym_ushort] = ACTIONS(423),
        [sym_identifier_name] = ACTIONS(425),
        [sym_comment] = ACTIONS(69),
    },
    [117] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [118] = {
        [sym_type_parameter_list] = STATE(120),
        [anon_sym_LBRACE] = ACTIONS(427),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [119] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(122),
        [anon_sym_RBRACE] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [120] = {
        [anon_sym_LBRACE] = ACTIONS(217),
        [sym_comment] = ACTIONS(69),
    },
    [121] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_namespace] = ACTIONS(433),
        [anon_sym_RBRACE] = ACTIONS(431),
        [anon_sym_class] = ACTIONS(433),
        [anon_sym_struct] = ACTIONS(433),
        [anon_sym_abstract] = ACTIONS(433),
        [anon_sym_sealed] = ACTIONS(433),
        [anon_sym_static] = ACTIONS(433),
        [anon_sym_new] = ACTIONS(433),
        [anon_sym_public] = ACTIONS(433),
        [anon_sym_protected] = ACTIONS(433),
        [anon_sym_internal] = ACTIONS(433),
        [anon_sym_private] = ACTIONS(433),
        [anon_sym_unsafe] = ACTIONS(433),
        [anon_sym_readonly] = ACTIONS(433),
        [anon_sym_volatile] = ACTIONS(433),
        [anon_sym_bool] = ACTIONS(433),
        [anon_sym_byte] = ACTIONS(433),
        [anon_sym_char] = ACTIONS(433),
        [anon_sym_decimal] = ACTIONS(433),
        [anon_sym_double] = ACTIONS(433),
        [anon_sym_float] = ACTIONS(433),
        [anon_sym_int] = ACTIONS(433),
        [anon_sym_long] = ACTIONS(433),
        [anon_sym_object] = ACTIONS(433),
        [anon_sym_sbyte] = ACTIONS(433),
        [anon_sym_short] = ACTIONS(433),
        [anon_sym_string] = ACTIONS(433),
        [anon_sym_uint] = ACTIONS(433),
        [anon_sym_ulong] = ACTIONS(433),
        [anon_sym_ushort] = ACTIONS(433),
        [sym_identifier_name] = ACTIONS(435),
        [sym_comment] = ACTIONS(69),
    },
    [122] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [123] = {
        [anon_sym_COLON_COLON] = ACTIONS(437),
        [sym_comment] = ACTIONS(69),
    },
    [124] = {
        [anon_sym_LBRACE] = ACTIONS(439),
        [anon_sym_DOT] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
    },
    [125] = {
        [anon_sym_DOT] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
    },
    [126] = {
        [sym_identifier_name] = ACTIONS(443),
        [sym_comment] = ACTIONS(69),
    },
    [127] = {
        [anon_sym_SEMI] = ACTIONS(445),
        [anon_sym_LBRACE] = ACTIONS(445),
        [anon_sym_DOT] = ACTIONS(445),
        [sym_comment] = ACTIONS(69),
    },
    [128] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(130),
        [anon_sym_namespace] = ACTIONS(75),
        [anon_sym_RBRACE] = ACTIONS(447),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(83),
        [anon_sym_public] = ACTIONS(83),
        [anon_sym_protected] = ACTIONS(83),
        [anon_sym_internal] = ACTIONS(83),
        [anon_sym_private] = ACTIONS(83),
        [anon_sym_unsafe] = ACTIONS(83),
        [sym_comment] = ACTIONS(69),
    },
    [129] = {
        [ts_builtin_sym_end] = ACTIONS(449),
        [anon_sym_namespace] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(449),
        [anon_sym_class] = ACTIONS(449),
        [anon_sym_struct] = ACTIONS(449),
        [anon_sym_abstract] = ACTIONS(449),
        [anon_sym_sealed] = ACTIONS(449),
        [anon_sym_static] = ACTIONS(449),
        [anon_sym_new] = ACTIONS(449),
        [anon_sym_public] = ACTIONS(449),
        [anon_sym_protected] = ACTIONS(449),
        [anon_sym_internal] = ACTIONS(449),
        [anon_sym_private] = ACTIONS(449),
        [anon_sym_unsafe] = ACTIONS(449),
        [sym_comment] = ACTIONS(69),
    },
    [130] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_namespace] = ACTIONS(75),
        [anon_sym_RBRACE] = ACTIONS(451),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(83),
        [anon_sym_public] = ACTIONS(83),
        [anon_sym_protected] = ACTIONS(83),
        [anon_sym_internal] = ACTIONS(83),
        [anon_sym_private] = ACTIONS(83),
        [anon_sym_unsafe] = ACTIONS(83),
        [sym_comment] = ACTIONS(69),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(453),
        [anon_sym_namespace] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(453),
        [anon_sym_class] = ACTIONS(453),
        [anon_sym_struct] = ACTIONS(453),
        [anon_sym_abstract] = ACTIONS(453),
        [anon_sym_sealed] = ACTIONS(453),
        [anon_sym_static] = ACTIONS(453),
        [anon_sym_new] = ACTIONS(453),
        [anon_sym_public] = ACTIONS(453),
        [anon_sym_protected] = ACTIONS(453),
        [anon_sym_internal] = ACTIONS(453),
        [anon_sym_private] = ACTIONS(453),
        [anon_sym_unsafe] = ACTIONS(453),
        [sym_comment] = ACTIONS(69),
    },
    [132] = {
        [sym_identifier_name] = ACTIONS(455),
        [sym_comment] = ACTIONS(69),
    },
    [133] = {
        [anon_sym_DOT] = ACTIONS(457),
        [sym_comment] = ACTIONS(69),
    },
    [134] = {
        [sym_global] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(461),
        [sym_comment] = ACTIONS(69),
    },
    [135] = {
        [anon_sym_SEMI] = ACTIONS(463),
        [anon_sym_EQ] = ACTIONS(465),
        [anon_sym_DOT] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
    },
    [136] = {
        [anon_sym_SEMI] = ACTIONS(463),
        [anon_sym_DOT] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
    },
    [137] = {
        [sym_qualified_name] = STATE(138),
        [sym_alias_qualified_name] = STATE(125),
        [sym_global] = ACTIONS(87),
        [sym_identifier_name] = ACTIONS(467),
        [sym_comment] = ACTIONS(69),
    },
    [138] = {
        [anon_sym_SEMI] = ACTIONS(469),
        [anon_sym_DOT] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
    },
    [139] = {
        [ts_builtin_sym_end] = ACTIONS(471),
        [anon_sym_using] = ACTIONS(471),
        [anon_sym_namespace] = ACTIONS(471),
        [anon_sym_class] = ACTIONS(471),
        [anon_sym_struct] = ACTIONS(471),
        [anon_sym_abstract] = ACTIONS(471),
        [anon_sym_sealed] = ACTIONS(471),
        [anon_sym_static] = ACTIONS(471),
        [anon_sym_new] = ACTIONS(471),
        [anon_sym_public] = ACTIONS(471),
        [anon_sym_protected] = ACTIONS(471),
        [anon_sym_internal] = ACTIONS(471),
        [anon_sym_private] = ACTIONS(471),
        [anon_sym_unsafe] = ACTIONS(471),
        [sym_comment] = ACTIONS(69),
    },
    [140] = {
        [ts_builtin_sym_end] = ACTIONS(473),
        [anon_sym_using] = ACTIONS(473),
        [anon_sym_namespace] = ACTIONS(473),
        [anon_sym_class] = ACTIONS(473),
        [anon_sym_struct] = ACTIONS(473),
        [anon_sym_abstract] = ACTIONS(473),
        [anon_sym_sealed] = ACTIONS(473),
        [anon_sym_static] = ACTIONS(473),
        [anon_sym_new] = ACTIONS(473),
        [anon_sym_public] = ACTIONS(473),
        [anon_sym_protected] = ACTIONS(473),
        [anon_sym_internal] = ACTIONS(473),
        [anon_sym_private] = ACTIONS(473),
        [anon_sym_unsafe] = ACTIONS(473),
        [sym_comment] = ACTIONS(69),
    },
    [141] = {
        [sym_global] = ACTIONS(475),
        [sym_identifier_name] = ACTIONS(477),
        [sym_comment] = ACTIONS(69),
    },
    [142] = {
        [ts_builtin_sym_end] = ACTIONS(479),
        [anon_sym_using] = ACTIONS(482),
        [anon_sym_namespace] = ACTIONS(482),
        [anon_sym_RBRACE] = ACTIONS(485),
        [anon_sym_class] = ACTIONS(488),
        [anon_sym_struct] = ACTIONS(488),
        [anon_sym_abstract] = ACTIONS(488),
        [anon_sym_sealed] = ACTIONS(488),
        [anon_sym_static] = ACTIONS(488),
        [anon_sym_new] = ACTIONS(488),
        [anon_sym_public] = ACTIONS(488),
        [anon_sym_protected] = ACTIONS(488),
        [anon_sym_internal] = ACTIONS(488),
        [anon_sym_private] = ACTIONS(488),
        [anon_sym_unsafe] = ACTIONS(488),
        [anon_sym_readonly] = ACTIONS(493),
        [anon_sym_volatile] = ACTIONS(493),
        [anon_sym_bool] = ACTIONS(493),
        [anon_sym_byte] = ACTIONS(493),
        [anon_sym_char] = ACTIONS(493),
        [anon_sym_decimal] = ACTIONS(493),
        [anon_sym_double] = ACTIONS(493),
        [anon_sym_float] = ACTIONS(493),
        [anon_sym_int] = ACTIONS(493),
        [anon_sym_long] = ACTIONS(493),
        [anon_sym_object] = ACTIONS(493),
        [anon_sym_sbyte] = ACTIONS(493),
        [anon_sym_short] = ACTIONS(493),
        [anon_sym_string] = ACTIONS(493),
        [anon_sym_uint] = ACTIONS(493),
        [anon_sym_ulong] = ACTIONS(493),
        [anon_sym_ushort] = ACTIONS(493),
        [sym_identifier_name] = ACTIONS(496),
        [sym_comment] = ACTIONS(69),
    },
    [143] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(184),
        [sym_struct_declaration] = STATE(184),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_compilation_unit_repeat2] = STATE(130),
        [aux_sym_class_declaration_repeat1] = STATE(174),
        [anon_sym_namespace] = ACTIONS(499),
        [anon_sym_RBRACE] = ACTIONS(501),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [144] = {
        [ts_builtin_sym_end] = ACTIONS(503),
        [anon_sym_namespace] = ACTIONS(514),
        [anon_sym_RBRACE] = ACTIONS(503),
        [anon_sym_class] = ACTIONS(514),
        [anon_sym_struct] = ACTIONS(514),
        [anon_sym_abstract] = ACTIONS(514),
        [anon_sym_sealed] = ACTIONS(514),
        [anon_sym_static] = ACTIONS(514),
        [anon_sym_new] = ACTIONS(514),
        [anon_sym_public] = ACTIONS(514),
        [anon_sym_protected] = ACTIONS(514),
        [anon_sym_internal] = ACTIONS(514),
        [anon_sym_private] = ACTIONS(514),
        [anon_sym_unsafe] = ACTIONS(514),
        [anon_sym_readonly] = ACTIONS(525),
        [anon_sym_volatile] = ACTIONS(525),
        [anon_sym_bool] = ACTIONS(525),
        [anon_sym_byte] = ACTIONS(525),
        [anon_sym_char] = ACTIONS(525),
        [anon_sym_decimal] = ACTIONS(525),
        [anon_sym_double] = ACTIONS(525),
        [anon_sym_float] = ACTIONS(525),
        [anon_sym_int] = ACTIONS(525),
        [anon_sym_long] = ACTIONS(525),
        [anon_sym_object] = ACTIONS(525),
        [anon_sym_sbyte] = ACTIONS(525),
        [anon_sym_short] = ACTIONS(525),
        [anon_sym_string] = ACTIONS(525),
        [anon_sym_uint] = ACTIONS(525),
        [anon_sym_ulong] = ACTIONS(525),
        [anon_sym_ushort] = ACTIONS(525),
        [sym_identifier_name] = ACTIONS(534),
        [sym_comment] = ACTIONS(69),
    },
    [145] = {
        [sym_identifier_name] = ACTIONS(543),
        [sym_comment] = ACTIONS(69),
    },
    [146] = {
        [sym_identifier_name] = ACTIONS(545),
        [sym_comment] = ACTIONS(69),
    },
    [147] = {
        [sym__type] = STATE(101),
        [sym_generic_name] = STATE(35),
        [sym_variable_declarator] = STATE(193),
        [sym_predefined_type] = STATE(35),
        [sym_type_parameter] = STATE(194),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(547),
        [sym_comment] = ACTIONS(69),
    },
    [148] = {
        [sym__literal] = STATE(72),
        [sym_boolean_literal] = STATE(68),
        [sym_character_literal] = STATE(68),
        [sym_integer_literal] = STATE(68),
        [sym_real_literal] = STATE(68),
        [sym_string_literal] = STATE(68),
        [sym__regular_string_literal] = STATE(73),
        [sym__verbatim_string_literal] = STATE(73),
        [anon_sym_true] = ACTIONS(549),
        [anon_sym_false] = ACTIONS(549),
        [anon_sym_SQUOTE] = ACTIONS(263),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(265),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(267),
        [sym_null_literal] = ACTIONS(551),
        [anon_sym_DOT] = ACTIONS(271),
        [anon_sym_DQUOTE] = ACTIONS(273),
        [anon_sym_AT_DQUOTE] = ACTIONS(275),
        [sym_global] = ACTIONS(475),
        [sym_identifier_name] = ACTIONS(477),
        [sym_comment] = ACTIONS(69),
    },
    [149] = {
        [sym__unicode_escape_sequence] = STATE(95),
        [sym__simple_escape_sequence] = STATE(95),
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_COMMA] = ACTIONS(375),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(553),
        [sym__hexadecimal_escape_sequence] = ACTIONS(281),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(283),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(283),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(285),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(285),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(285),
        [anon_sym_BSLASH0] = ACTIONS(285),
        [anon_sym_BSLASHa] = ACTIONS(285),
        [anon_sym_BSLASHb] = ACTIONS(285),
        [anon_sym_BSLASHf] = ACTIONS(285),
        [anon_sym_BSLASHn] = ACTIONS(285),
        [anon_sym_BSLASHr] = ACTIONS(285),
        [anon_sym_BSLASHt] = ACTIONS(285),
        [anon_sym_BSLASHv] = ACTIONS(285),
        [sym_comment] = ACTIONS(69),
    },
    [150] = {
        [anon_sym_SQUOTE] = ACTIONS(373),
        [sym__hexadecimal_escape_sequence] = ACTIONS(321),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(323),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(323),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(323),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(323),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(323),
        [anon_sym_BSLASH0] = ACTIONS(323),
        [anon_sym_BSLASHa] = ACTIONS(323),
        [anon_sym_BSLASHb] = ACTIONS(323),
        [anon_sym_BSLASHf] = ACTIONS(323),
        [anon_sym_BSLASHn] = ACTIONS(323),
        [anon_sym_BSLASHr] = ACTIONS(323),
        [anon_sym_BSLASHt] = ACTIONS(323),
        [anon_sym_BSLASHv] = ACTIONS(323),
        [anon_sym_DQUOTE] = ACTIONS(323),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(555),
        [sym_comment] = ACTIONS(69),
    },
    [151] = {
        [anon_sym_SEMI] = ACTIONS(557),
        [anon_sym_COMMA] = ACTIONS(557),
        [sym__integer_type_suffix] = ACTIONS(289),
        [anon_sym_DOT] = ACTIONS(291),
        [sym__real_type_suffix] = ACTIONS(561),
        [sym__exponent_part] = ACTIONS(563),
        [sym_comment] = ACTIONS(69),
    },
    [152] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(565),
        [sym_identifier_name] = ACTIONS(443),
        [sym_comment] = ACTIONS(69),
    },
    [153] = {
        [anon_sym_SEMI] = ACTIONS(567),
        [anon_sym_COMMA] = ACTIONS(567),
        [sym_comment] = ACTIONS(69),
    },
    [154] = {
        [anon_sym_SEMI] = ACTIONS(572),
        [anon_sym_COMMA] = ACTIONS(572),
        [sym__real_type_suffix] = ACTIONS(576),
        [sym_comment] = ACTIONS(69),
    },
    [155] = {
        [sym__unicode_escape_sequence] = STATE(76),
        [sym__simple_escape_sequence] = STATE(76),
        [sym__regular_string_literal_character] = STATE(80),
        [aux_sym__regular_string_literal_repeat1] = STATE(81),
        [anon_sym_SEMI] = ACTIONS(578),
        [anon_sym_COMMA] = ACTIONS(578),
        [sym__hexadecimal_escape_sequence] = ACTIONS(301),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(303),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(303),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(305),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(305),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(305),
        [anon_sym_BSLASH0] = ACTIONS(305),
        [anon_sym_BSLASHa] = ACTIONS(305),
        [anon_sym_BSLASHb] = ACTIONS(305),
        [anon_sym_BSLASHf] = ACTIONS(305),
        [anon_sym_BSLASHn] = ACTIONS(305),
        [anon_sym_BSLASHr] = ACTIONS(305),
        [anon_sym_BSLASHt] = ACTIONS(305),
        [anon_sym_BSLASHv] = ACTIONS(305),
        [anon_sym_DQUOTE] = ACTIONS(307),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(582),
        [sym_comment] = ACTIONS(69),
    },
    [156] = {
        [sym__class_modifiers] = STATE(111),
        [sym__field_modifiers] = STATE(110),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(137),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_protected] = ACTIONS(137),
        [anon_sym_internal] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_unsafe] = ACTIONS(137),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(159),
        [anon_sym_byte] = ACTIONS(159),
        [anon_sym_char] = ACTIONS(159),
        [anon_sym_decimal] = ACTIONS(159),
        [anon_sym_double] = ACTIONS(159),
        [anon_sym_float] = ACTIONS(159),
        [anon_sym_int] = ACTIONS(159),
        [anon_sym_long] = ACTIONS(159),
        [anon_sym_object] = ACTIONS(159),
        [anon_sym_sbyte] = ACTIONS(159),
        [anon_sym_short] = ACTIONS(159),
        [anon_sym_string] = ACTIONS(159),
        [anon_sym_uint] = ACTIONS(159),
        [anon_sym_ulong] = ACTIONS(159),
        [anon_sym_ushort] = ACTIONS(159),
        [sym_global] = ACTIONS(459),
        [sym_identifier_name] = ACTIONS(584),
        [sym_comment] = ACTIONS(69),
    },
    [157] = {
        [anon_sym_LBRACE] = ACTIONS(587),
        [anon_sym_COMMA] = ACTIONS(587),
        [anon_sym_GT] = ACTIONS(587),
        [sym_identifier_name] = ACTIONS(590),
        [sym_comment] = ACTIONS(69),
    },
    [158] = {
        [sym_equals_value_clause] = STATE(63),
        [sym_type_parameter_list] = STATE(170),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_LBRACE] = ACTIONS(597),
        [anon_sym_COMMA] = ACTIONS(600),
        [anon_sym_EQ] = ACTIONS(603),
        [anon_sym_DOT] = ACTIONS(605),
        [anon_sym_LT] = ACTIONS(127),
        [anon_sym_GT] = ACTIONS(169),
        [sym_identifier_name] = ACTIONS(171),
        [sym_comment] = ACTIONS(69),
    },
    [159] = {
        [ts_builtin_sym_end] = ACTIONS(609),
        [anon_sym_using] = ACTIONS(609),
        [anon_sym_namespace] = ACTIONS(609),
        [anon_sym_class] = ACTIONS(609),
        [anon_sym_struct] = ACTIONS(609),
        [anon_sym_abstract] = ACTIONS(609),
        [anon_sym_sealed] = ACTIONS(609),
        [anon_sym_static] = ACTIONS(609),
        [anon_sym_new] = ACTIONS(609),
        [anon_sym_public] = ACTIONS(609),
        [anon_sym_protected] = ACTIONS(609),
        [anon_sym_internal] = ACTIONS(609),
        [anon_sym_private] = ACTIONS(609),
        [anon_sym_unsafe] = ACTIONS(609),
        [sym_comment] = ACTIONS(69),
    },
    [160] = {
        [ts_builtin_sym_end] = ACTIONS(612),
        [anon_sym_namespace] = ACTIONS(612),
        [anon_sym_RBRACE] = ACTIONS(612),
        [anon_sym_class] = ACTIONS(612),
        [anon_sym_struct] = ACTIONS(612),
        [anon_sym_abstract] = ACTIONS(612),
        [anon_sym_sealed] = ACTIONS(612),
        [anon_sym_static] = ACTIONS(612),
        [anon_sym_new] = ACTIONS(612),
        [anon_sym_public] = ACTIONS(612),
        [anon_sym_protected] = ACTIONS(612),
        [anon_sym_internal] = ACTIONS(612),
        [anon_sym_private] = ACTIONS(612),
        [anon_sym_unsafe] = ACTIONS(612),
        [sym_comment] = ACTIONS(69),
    },
    [161] = {
        [ts_builtin_sym_end] = ACTIONS(612),
        [anon_sym_namespace] = ACTIONS(615),
        [anon_sym_RBRACE] = ACTIONS(618),
        [anon_sym_class] = ACTIONS(623),
        [anon_sym_struct] = ACTIONS(623),
        [anon_sym_abstract] = ACTIONS(623),
        [anon_sym_sealed] = ACTIONS(623),
        [anon_sym_static] = ACTIONS(623),
        [anon_sym_new] = ACTIONS(623),
        [anon_sym_public] = ACTIONS(623),
        [anon_sym_protected] = ACTIONS(623),
        [anon_sym_internal] = ACTIONS(623),
        [anon_sym_private] = ACTIONS(623),
        [anon_sym_unsafe] = ACTIONS(623),
        [anon_sym_readonly] = ACTIONS(628),
        [anon_sym_volatile] = ACTIONS(628),
        [anon_sym_bool] = ACTIONS(628),
        [anon_sym_byte] = ACTIONS(628),
        [anon_sym_char] = ACTIONS(628),
        [anon_sym_decimal] = ACTIONS(628),
        [anon_sym_double] = ACTIONS(628),
        [anon_sym_float] = ACTIONS(628),
        [anon_sym_int] = ACTIONS(628),
        [anon_sym_long] = ACTIONS(628),
        [anon_sym_object] = ACTIONS(628),
        [anon_sym_sbyte] = ACTIONS(628),
        [anon_sym_short] = ACTIONS(628),
        [anon_sym_string] = ACTIONS(628),
        [anon_sym_uint] = ACTIONS(628),
        [anon_sym_ulong] = ACTIONS(628),
        [anon_sym_ushort] = ACTIONS(628),
        [sym_identifier_name] = ACTIONS(631),
        [sym_comment] = ACTIONS(69),
    },
    [162] = {
        [anon_sym_RBRACE] = ACTIONS(634),
        [anon_sym_class] = ACTIONS(628),
        [anon_sym_struct] = ACTIONS(628),
        [anon_sym_abstract] = ACTIONS(628),
        [anon_sym_sealed] = ACTIONS(628),
        [anon_sym_static] = ACTIONS(628),
        [anon_sym_new] = ACTIONS(628),
        [anon_sym_public] = ACTIONS(628),
        [anon_sym_protected] = ACTIONS(628),
        [anon_sym_internal] = ACTIONS(628),
        [anon_sym_private] = ACTIONS(628),
        [anon_sym_unsafe] = ACTIONS(628),
        [anon_sym_readonly] = ACTIONS(628),
        [anon_sym_volatile] = ACTIONS(628),
        [anon_sym_bool] = ACTIONS(628),
        [anon_sym_byte] = ACTIONS(628),
        [anon_sym_char] = ACTIONS(628),
        [anon_sym_decimal] = ACTIONS(628),
        [anon_sym_double] = ACTIONS(628),
        [anon_sym_float] = ACTIONS(628),
        [anon_sym_int] = ACTIONS(628),
        [anon_sym_long] = ACTIONS(628),
        [anon_sym_object] = ACTIONS(628),
        [anon_sym_sbyte] = ACTIONS(628),
        [anon_sym_short] = ACTIONS(628),
        [anon_sym_string] = ACTIONS(628),
        [anon_sym_uint] = ACTIONS(628),
        [anon_sym_ulong] = ACTIONS(628),
        [anon_sym_ushort] = ACTIONS(628),
        [sym_identifier_name] = ACTIONS(631),
        [sym_comment] = ACTIONS(69),
    },
    [163] = {
        [anon_sym_SEMI] = ACTIONS(637),
        [sym_comment] = ACTIONS(69),
    },
    [164] = {
        [sym_variable_declarator] = STATE(56),
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_GT] = ACTIONS(387),
        [sym_identifier_name] = ACTIONS(181),
        [sym_comment] = ACTIONS(69),
    },
    [165] = {
        [aux_sym_variable_declaration_repeat1] = STATE(58),
        [anon_sym_SEMI] = ACTIONS(639),
        [anon_sym_COMMA] = ACTIONS(643),
        [sym_comment] = ACTIONS(69),
    },
    [166] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(647),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(650),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(650),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(650),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(650),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(650),
        [anon_sym_BSLASH0] = ACTIONS(650),
        [anon_sym_BSLASHa] = ACTIONS(650),
        [anon_sym_BSLASHb] = ACTIONS(650),
        [anon_sym_BSLASHf] = ACTIONS(650),
        [anon_sym_BSLASHn] = ACTIONS(650),
        [anon_sym_BSLASHr] = ACTIONS(650),
        [anon_sym_BSLASHt] = ACTIONS(650),
        [anon_sym_BSLASHv] = ACTIONS(650),
        [anon_sym_DQUOTE] = ACTIONS(650),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(647),
        [sym_comment] = ACTIONS(69),
    },
    [167] = {
        [anon_sym_class] = ACTIONS(653),
        [sym_comment] = ACTIONS(69),
    },
    [168] = {
        [anon_sym_struct] = ACTIONS(656),
        [sym_comment] = ACTIONS(69),
    },
    [169] = {
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
        [sym_identifier_name] = ACTIONS(662),
        [sym_comment] = ACTIONS(69),
    },
    [170] = {
        [anon_sym_LBRACE] = ACTIONS(665),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_GT] = ACTIONS(383),
        [sym_identifier_name] = ACTIONS(385),
        [sym_comment] = ACTIONS(69),
    },
    [171] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(105),
        [anon_sym_COMMA] = ACTIONS(667),
        [anon_sym_GT] = ACTIONS(671),
        [sym_comment] = ACTIONS(69),
    },
    [172] = {
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_LBRACE] = ACTIONS(439),
        [anon_sym_DOT] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
    },
    [173] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(677),
        [anon_sym_namespace] = ACTIONS(75),
        [anon_sym_RBRACE] = ACTIONS(451),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(83),
        [anon_sym_public] = ACTIONS(83),
        [anon_sym_protected] = ACTIONS(83),
        [anon_sym_internal] = ACTIONS(83),
        [anon_sym_private] = ACTIONS(83),
        [anon_sym_unsafe] = ACTIONS(83),
        [sym_comment] = ACTIONS(69),
    },
    [174] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(680),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [175] = {
        [ts_builtin_sym_end] = ACTIONS(682),
        [anon_sym_namespace] = ACTIONS(689),
        [anon_sym_RBRACE] = ACTIONS(682),
        [anon_sym_class] = ACTIONS(689),
        [anon_sym_struct] = ACTIONS(689),
        [anon_sym_abstract] = ACTIONS(689),
        [anon_sym_sealed] = ACTIONS(689),
        [anon_sym_static] = ACTIONS(689),
        [anon_sym_new] = ACTIONS(689),
        [anon_sym_public] = ACTIONS(689),
        [anon_sym_protected] = ACTIONS(689),
        [anon_sym_internal] = ACTIONS(689),
        [anon_sym_private] = ACTIONS(689),
        [anon_sym_unsafe] = ACTIONS(689),
        [anon_sym_readonly] = ACTIONS(689),
        [anon_sym_volatile] = ACTIONS(689),
        [anon_sym_bool] = ACTIONS(689),
        [anon_sym_byte] = ACTIONS(689),
        [anon_sym_char] = ACTIONS(689),
        [anon_sym_decimal] = ACTIONS(689),
        [anon_sym_double] = ACTIONS(689),
        [anon_sym_float] = ACTIONS(689),
        [anon_sym_int] = ACTIONS(689),
        [anon_sym_long] = ACTIONS(689),
        [anon_sym_object] = ACTIONS(689),
        [anon_sym_sbyte] = ACTIONS(689),
        [anon_sym_short] = ACTIONS(689),
        [anon_sym_string] = ACTIONS(689),
        [anon_sym_uint] = ACTIONS(689),
        [anon_sym_ulong] = ACTIONS(689),
        [anon_sym_ushort] = ACTIONS(689),
        [sym_identifier_name] = ACTIONS(696),
        [sym_comment] = ACTIONS(69),
    },
    [176] = {
        [ts_builtin_sym_end] = ACTIONS(479),
        [anon_sym_using] = ACTIONS(479),
        [anon_sym_namespace] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_struct] = ACTIONS(479),
        [anon_sym_abstract] = ACTIONS(479),
        [anon_sym_sealed] = ACTIONS(479),
        [anon_sym_static] = ACTIONS(479),
        [anon_sym_new] = ACTIONS(479),
        [anon_sym_public] = ACTIONS(479),
        [anon_sym_protected] = ACTIONS(479),
        [anon_sym_internal] = ACTIONS(479),
        [anon_sym_private] = ACTIONS(479),
        [anon_sym_unsafe] = ACTIONS(479),
        [sym_comment] = ACTIONS(69),
    },
    [177] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(179),
        [anon_sym_RBRACE] = ACTIONS(703),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [178] = {
        [ts_builtin_sym_end] = ACTIONS(705),
        [anon_sym_namespace] = ACTIONS(710),
        [anon_sym_RBRACE] = ACTIONS(705),
        [anon_sym_class] = ACTIONS(710),
        [anon_sym_struct] = ACTIONS(710),
        [anon_sym_abstract] = ACTIONS(710),
        [anon_sym_sealed] = ACTIONS(710),
        [anon_sym_static] = ACTIONS(710),
        [anon_sym_new] = ACTIONS(710),
        [anon_sym_public] = ACTIONS(710),
        [anon_sym_protected] = ACTIONS(710),
        [anon_sym_internal] = ACTIONS(710),
        [anon_sym_private] = ACTIONS(710),
        [anon_sym_unsafe] = ACTIONS(710),
        [anon_sym_readonly] = ACTIONS(710),
        [anon_sym_volatile] = ACTIONS(710),
        [anon_sym_bool] = ACTIONS(710),
        [anon_sym_byte] = ACTIONS(710),
        [anon_sym_char] = ACTIONS(710),
        [anon_sym_decimal] = ACTIONS(710),
        [anon_sym_double] = ACTIONS(710),
        [anon_sym_float] = ACTIONS(710),
        [anon_sym_int] = ACTIONS(710),
        [anon_sym_long] = ACTIONS(710),
        [anon_sym_object] = ACTIONS(710),
        [anon_sym_sbyte] = ACTIONS(710),
        [anon_sym_short] = ACTIONS(710),
        [anon_sym_string] = ACTIONS(710),
        [anon_sym_uint] = ACTIONS(710),
        [anon_sym_ulong] = ACTIONS(710),
        [anon_sym_ushort] = ACTIONS(710),
        [sym_identifier_name] = ACTIONS(715),
        [sym_comment] = ACTIONS(69),
    },
    [179] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(720),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [180] = {
        [ts_builtin_sym_end] = ACTIONS(722),
        [anon_sym_namespace] = ACTIONS(727),
        [anon_sym_RBRACE] = ACTIONS(722),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_struct] = ACTIONS(727),
        [anon_sym_abstract] = ACTIONS(727),
        [anon_sym_sealed] = ACTIONS(727),
        [anon_sym_static] = ACTIONS(727),
        [anon_sym_new] = ACTIONS(727),
        [anon_sym_public] = ACTIONS(727),
        [anon_sym_protected] = ACTIONS(727),
        [anon_sym_internal] = ACTIONS(727),
        [anon_sym_private] = ACTIONS(727),
        [anon_sym_unsafe] = ACTIONS(727),
        [anon_sym_readonly] = ACTIONS(727),
        [anon_sym_volatile] = ACTIONS(727),
        [anon_sym_bool] = ACTIONS(727),
        [anon_sym_byte] = ACTIONS(727),
        [anon_sym_char] = ACTIONS(727),
        [anon_sym_decimal] = ACTIONS(727),
        [anon_sym_double] = ACTIONS(727),
        [anon_sym_float] = ACTIONS(727),
        [anon_sym_int] = ACTIONS(727),
        [anon_sym_long] = ACTIONS(727),
        [anon_sym_object] = ACTIONS(727),
        [anon_sym_sbyte] = ACTIONS(727),
        [anon_sym_short] = ACTIONS(727),
        [anon_sym_string] = ACTIONS(727),
        [anon_sym_uint] = ACTIONS(727),
        [anon_sym_ulong] = ACTIONS(727),
        [anon_sym_ushort] = ACTIONS(727),
        [sym_identifier_name] = ACTIONS(732),
        [sym_comment] = ACTIONS(69),
    },
    [181] = {
        [anon_sym_RBRACE] = ACTIONS(485),
        [anon_sym_class] = ACTIONS(493),
        [anon_sym_struct] = ACTIONS(493),
        [anon_sym_abstract] = ACTIONS(493),
        [anon_sym_sealed] = ACTIONS(493),
        [anon_sym_static] = ACTIONS(493),
        [anon_sym_new] = ACTIONS(493),
        [anon_sym_public] = ACTIONS(493),
        [anon_sym_protected] = ACTIONS(493),
        [anon_sym_internal] = ACTIONS(493),
        [anon_sym_private] = ACTIONS(493),
        [anon_sym_unsafe] = ACTIONS(493),
        [anon_sym_readonly] = ACTIONS(493),
        [anon_sym_volatile] = ACTIONS(493),
        [anon_sym_bool] = ACTIONS(493),
        [anon_sym_byte] = ACTIONS(493),
        [anon_sym_char] = ACTIONS(493),
        [anon_sym_decimal] = ACTIONS(493),
        [anon_sym_double] = ACTIONS(493),
        [anon_sym_float] = ACTIONS(493),
        [anon_sym_int] = ACTIONS(493),
        [anon_sym_long] = ACTIONS(493),
        [anon_sym_object] = ACTIONS(493),
        [anon_sym_sbyte] = ACTIONS(493),
        [anon_sym_short] = ACTIONS(493),
        [anon_sym_string] = ACTIONS(493),
        [anon_sym_uint] = ACTIONS(493),
        [anon_sym_ulong] = ACTIONS(493),
        [anon_sym_ushort] = ACTIONS(493),
        [sym_identifier_name] = ACTIONS(496),
        [sym_comment] = ACTIONS(69),
    },
    [182] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(184),
        [sym_struct_declaration] = STATE(184),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_compilation_unit_repeat2] = STATE(130),
        [aux_sym_class_declaration_repeat1] = STATE(185),
        [anon_sym_namespace] = ACTIONS(499),
        [anon_sym_RBRACE] = ACTIONS(737),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [183] = {
        [ts_builtin_sym_end] = ACTIONS(739),
        [anon_sym_namespace] = ACTIONS(745),
        [anon_sym_RBRACE] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(745),
        [anon_sym_struct] = ACTIONS(745),
        [anon_sym_abstract] = ACTIONS(745),
        [anon_sym_sealed] = ACTIONS(745),
        [anon_sym_static] = ACTIONS(745),
        [anon_sym_new] = ACTIONS(745),
        [anon_sym_public] = ACTIONS(745),
        [anon_sym_protected] = ACTIONS(745),
        [anon_sym_internal] = ACTIONS(745),
        [anon_sym_private] = ACTIONS(745),
        [anon_sym_unsafe] = ACTIONS(745),
        [anon_sym_readonly] = ACTIONS(751),
        [anon_sym_volatile] = ACTIONS(751),
        [anon_sym_bool] = ACTIONS(751),
        [anon_sym_byte] = ACTIONS(751),
        [anon_sym_char] = ACTIONS(751),
        [anon_sym_decimal] = ACTIONS(751),
        [anon_sym_double] = ACTIONS(751),
        [anon_sym_float] = ACTIONS(751),
        [anon_sym_int] = ACTIONS(751),
        [anon_sym_long] = ACTIONS(751),
        [anon_sym_object] = ACTIONS(751),
        [anon_sym_sbyte] = ACTIONS(751),
        [anon_sym_short] = ACTIONS(751),
        [anon_sym_string] = ACTIONS(751),
        [anon_sym_uint] = ACTIONS(751),
        [anon_sym_ulong] = ACTIONS(751),
        [anon_sym_ushort] = ACTIONS(751),
        [sym_identifier_name] = ACTIONS(756),
        [sym_comment] = ACTIONS(69),
    },
    [184] = {
        [anon_sym_namespace] = ACTIONS(761),
        [anon_sym_RBRACE] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(766),
        [anon_sym_struct] = ACTIONS(766),
        [anon_sym_abstract] = ACTIONS(766),
        [anon_sym_sealed] = ACTIONS(766),
        [anon_sym_static] = ACTIONS(766),
        [anon_sym_new] = ACTIONS(766),
        [anon_sym_public] = ACTIONS(766),
        [anon_sym_protected] = ACTIONS(766),
        [anon_sym_internal] = ACTIONS(766),
        [anon_sym_private] = ACTIONS(766),
        [anon_sym_unsafe] = ACTIONS(766),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(175),
        [anon_sym_byte] = ACTIONS(175),
        [anon_sym_char] = ACTIONS(175),
        [anon_sym_decimal] = ACTIONS(175),
        [anon_sym_double] = ACTIONS(175),
        [anon_sym_float] = ACTIONS(175),
        [anon_sym_int] = ACTIONS(175),
        [anon_sym_long] = ACTIONS(175),
        [anon_sym_object] = ACTIONS(175),
        [anon_sym_sbyte] = ACTIONS(175),
        [anon_sym_short] = ACTIONS(175),
        [anon_sym_string] = ACTIONS(175),
        [anon_sym_uint] = ACTIONS(175),
        [anon_sym_ulong] = ACTIONS(175),
        [anon_sym_ushort] = ACTIONS(175),
        [sym_identifier_name] = ACTIONS(177),
        [sym_comment] = ACTIONS(69),
    },
    [185] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(703),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [186] = {
        [anon_sym_SEMI] = ACTIONS(769),
        [anon_sym_COMMA] = ACTIONS(769),
        [sym_comment] = ACTIONS(69),
    },
    [187] = {
        [anon_sym_SEMI] = ACTIONS(773),
        [anon_sym_COMMA] = ACTIONS(773),
        [sym__real_type_suffix] = ACTIONS(776),
        [sym__exponent_part] = ACTIONS(778),
        [sym_comment] = ACTIONS(69),
    },
    [188] = {
        [anon_sym_SEMI] = ACTIONS(780),
        [anon_sym_COMMA] = ACTIONS(780),
        [sym_comment] = ACTIONS(69),
    },
    [189] = {
        [anon_sym_SEMI] = ACTIONS(780),
        [anon_sym_COMMA] = ACTIONS(780),
        [sym__real_type_suffix] = ACTIONS(783),
        [sym_comment] = ACTIONS(69),
    },
    [190] = {
        [anon_sym_SEMI] = ACTIONS(785),
        [anon_sym_COMMA] = ACTIONS(785),
        [sym_comment] = ACTIONS(69),
    },
    [191] = {
        [anon_sym_SEMI] = ACTIONS(572),
        [anon_sym_COMMA] = ACTIONS(572),
        [sym_comment] = ACTIONS(69),
    },
    [192] = {
        [sym_equals_value_clause] = STATE(63),
        [sym_type_parameter_list] = STATE(100),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(600),
        [anon_sym_EQ] = ACTIONS(247),
        [anon_sym_LT] = ACTIONS(127),
        [anon_sym_GT] = ACTIONS(169),
        [sym_comment] = ACTIONS(69),
    },
    [193] = {
        [anon_sym_SEMI] = ACTIONS(788),
        [anon_sym_COMMA] = ACTIONS(788),
        [sym_comment] = ACTIONS(69),
    },
    [194] = {
        [anon_sym_COMMA] = ACTIONS(791),
        [anon_sym_GT] = ACTIONS(791),
        [sym_comment] = ACTIONS(69),
    },
    [195] = {
        [sym_type_parameter_list] = STATE(197),
        [anon_sym_LBRACE] = ACTIONS(794),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [196] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(203),
        [anon_sym_RBRACE] = ACTIONS(796),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [197] = {
        [anon_sym_LBRACE] = ACTIONS(798),
        [sym_comment] = ACTIONS(69),
    },
    [198] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(200),
        [anon_sym_RBRACE] = ACTIONS(800),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [199] = {
        [ts_builtin_sym_end] = ACTIONS(802),
        [anon_sym_namespace] = ACTIONS(805),
        [anon_sym_RBRACE] = ACTIONS(802),
        [anon_sym_class] = ACTIONS(805),
        [anon_sym_struct] = ACTIONS(805),
        [anon_sym_abstract] = ACTIONS(805),
        [anon_sym_sealed] = ACTIONS(805),
        [anon_sym_static] = ACTIONS(805),
        [anon_sym_new] = ACTIONS(805),
        [anon_sym_public] = ACTIONS(805),
        [anon_sym_protected] = ACTIONS(805),
        [anon_sym_internal] = ACTIONS(805),
        [anon_sym_private] = ACTIONS(805),
        [anon_sym_unsafe] = ACTIONS(805),
        [anon_sym_readonly] = ACTIONS(805),
        [anon_sym_volatile] = ACTIONS(805),
        [anon_sym_bool] = ACTIONS(805),
        [anon_sym_byte] = ACTIONS(805),
        [anon_sym_char] = ACTIONS(805),
        [anon_sym_decimal] = ACTIONS(805),
        [anon_sym_double] = ACTIONS(805),
        [anon_sym_float] = ACTIONS(805),
        [anon_sym_int] = ACTIONS(805),
        [anon_sym_long] = ACTIONS(805),
        [anon_sym_object] = ACTIONS(805),
        [anon_sym_sbyte] = ACTIONS(805),
        [anon_sym_short] = ACTIONS(805),
        [anon_sym_string] = ACTIONS(805),
        [anon_sym_uint] = ACTIONS(805),
        [anon_sym_ulong] = ACTIONS(805),
        [anon_sym_ushort] = ACTIONS(805),
        [sym_identifier_name] = ACTIONS(808),
        [sym_comment] = ACTIONS(69),
    },
    [200] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(811),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [201] = {
        [ts_builtin_sym_end] = ACTIONS(813),
        [anon_sym_namespace] = ACTIONS(816),
        [anon_sym_RBRACE] = ACTIONS(813),
        [anon_sym_class] = ACTIONS(816),
        [anon_sym_struct] = ACTIONS(816),
        [anon_sym_abstract] = ACTIONS(816),
        [anon_sym_sealed] = ACTIONS(816),
        [anon_sym_static] = ACTIONS(816),
        [anon_sym_new] = ACTIONS(816),
        [anon_sym_public] = ACTIONS(816),
        [anon_sym_protected] = ACTIONS(816),
        [anon_sym_internal] = ACTIONS(816),
        [anon_sym_private] = ACTIONS(816),
        [anon_sym_unsafe] = ACTIONS(816),
        [anon_sym_readonly] = ACTIONS(816),
        [anon_sym_volatile] = ACTIONS(816),
        [anon_sym_bool] = ACTIONS(816),
        [anon_sym_byte] = ACTIONS(816),
        [anon_sym_char] = ACTIONS(816),
        [anon_sym_decimal] = ACTIONS(816),
        [anon_sym_double] = ACTIONS(816),
        [anon_sym_float] = ACTIONS(816),
        [anon_sym_int] = ACTIONS(816),
        [anon_sym_long] = ACTIONS(816),
        [anon_sym_object] = ACTIONS(816),
        [anon_sym_sbyte] = ACTIONS(816),
        [anon_sym_short] = ACTIONS(816),
        [anon_sym_string] = ACTIONS(816),
        [anon_sym_uint] = ACTIONS(816),
        [anon_sym_ulong] = ACTIONS(816),
        [anon_sym_ushort] = ACTIONS(816),
        [sym_identifier_name] = ACTIONS(819),
        [sym_comment] = ACTIONS(69),
    },
    [202] = {
        [ts_builtin_sym_end] = ACTIONS(822),
        [anon_sym_namespace] = ACTIONS(825),
        [anon_sym_RBRACE] = ACTIONS(822),
        [anon_sym_class] = ACTIONS(825),
        [anon_sym_struct] = ACTIONS(825),
        [anon_sym_abstract] = ACTIONS(825),
        [anon_sym_sealed] = ACTIONS(825),
        [anon_sym_static] = ACTIONS(825),
        [anon_sym_new] = ACTIONS(825),
        [anon_sym_public] = ACTIONS(825),
        [anon_sym_protected] = ACTIONS(825),
        [anon_sym_internal] = ACTIONS(825),
        [anon_sym_private] = ACTIONS(825),
        [anon_sym_unsafe] = ACTIONS(825),
        [anon_sym_readonly] = ACTIONS(825),
        [anon_sym_volatile] = ACTIONS(825),
        [anon_sym_bool] = ACTIONS(825),
        [anon_sym_byte] = ACTIONS(825),
        [anon_sym_char] = ACTIONS(825),
        [anon_sym_decimal] = ACTIONS(825),
        [anon_sym_double] = ACTIONS(825),
        [anon_sym_float] = ACTIONS(825),
        [anon_sym_int] = ACTIONS(825),
        [anon_sym_long] = ACTIONS(825),
        [anon_sym_object] = ACTIONS(825),
        [anon_sym_sbyte] = ACTIONS(825),
        [anon_sym_short] = ACTIONS(825),
        [anon_sym_string] = ACTIONS(825),
        [anon_sym_uint] = ACTIONS(825),
        [anon_sym_ulong] = ACTIONS(825),
        [anon_sym_ushort] = ACTIONS(825),
        [sym_identifier_name] = ACTIONS(828),
        [sym_comment] = ACTIONS(69),
    },
    [203] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(800),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [204] = {
        [sym_type_parameter_list] = STATE(206),
        [anon_sym_LBRACE] = ACTIONS(831),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [205] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(212),
        [anon_sym_RBRACE] = ACTIONS(833),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [206] = {
        [anon_sym_LBRACE] = ACTIONS(835),
        [sym_comment] = ACTIONS(69),
    },
    [207] = {
        [sym_class_declaration] = STATE(32),
        [sym_struct_declaration] = STATE(32),
        [sym_field_declaration] = STATE(32),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [aux_sym_class_declaration_repeat1] = STATE(209),
        [anon_sym_RBRACE] = ACTIONS(837),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [208] = {
        [ts_builtin_sym_end] = ACTIONS(839),
        [anon_sym_namespace] = ACTIONS(842),
        [anon_sym_RBRACE] = ACTIONS(839),
        [anon_sym_class] = ACTIONS(842),
        [anon_sym_struct] = ACTIONS(842),
        [anon_sym_abstract] = ACTIONS(842),
        [anon_sym_sealed] = ACTIONS(842),
        [anon_sym_static] = ACTIONS(842),
        [anon_sym_new] = ACTIONS(842),
        [anon_sym_public] = ACTIONS(842),
        [anon_sym_protected] = ACTIONS(842),
        [anon_sym_internal] = ACTIONS(842),
        [anon_sym_private] = ACTIONS(842),
        [anon_sym_unsafe] = ACTIONS(842),
        [anon_sym_readonly] = ACTIONS(842),
        [anon_sym_volatile] = ACTIONS(842),
        [anon_sym_bool] = ACTIONS(842),
        [anon_sym_byte] = ACTIONS(842),
        [anon_sym_char] = ACTIONS(842),
        [anon_sym_decimal] = ACTIONS(842),
        [anon_sym_double] = ACTIONS(842),
        [anon_sym_float] = ACTIONS(842),
        [anon_sym_int] = ACTIONS(842),
        [anon_sym_long] = ACTIONS(842),
        [anon_sym_object] = ACTIONS(842),
        [anon_sym_sbyte] = ACTIONS(842),
        [anon_sym_short] = ACTIONS(842),
        [anon_sym_string] = ACTIONS(842),
        [anon_sym_uint] = ACTIONS(842),
        [anon_sym_ulong] = ACTIONS(842),
        [anon_sym_ushort] = ACTIONS(842),
        [sym_identifier_name] = ACTIONS(845),
        [sym_comment] = ACTIONS(69),
    },
    [209] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(848),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [210] = {
        [ts_builtin_sym_end] = ACTIONS(850),
        [anon_sym_namespace] = ACTIONS(853),
        [anon_sym_RBRACE] = ACTIONS(850),
        [anon_sym_class] = ACTIONS(853),
        [anon_sym_struct] = ACTIONS(853),
        [anon_sym_abstract] = ACTIONS(853),
        [anon_sym_sealed] = ACTIONS(853),
        [anon_sym_static] = ACTIONS(853),
        [anon_sym_new] = ACTIONS(853),
        [anon_sym_public] = ACTIONS(853),
        [anon_sym_protected] = ACTIONS(853),
        [anon_sym_internal] = ACTIONS(853),
        [anon_sym_private] = ACTIONS(853),
        [anon_sym_unsafe] = ACTIONS(853),
        [anon_sym_readonly] = ACTIONS(853),
        [anon_sym_volatile] = ACTIONS(853),
        [anon_sym_bool] = ACTIONS(853),
        [anon_sym_byte] = ACTIONS(853),
        [anon_sym_char] = ACTIONS(853),
        [anon_sym_decimal] = ACTIONS(853),
        [anon_sym_double] = ACTIONS(853),
        [anon_sym_float] = ACTIONS(853),
        [anon_sym_int] = ACTIONS(853),
        [anon_sym_long] = ACTIONS(853),
        [anon_sym_object] = ACTIONS(853),
        [anon_sym_sbyte] = ACTIONS(853),
        [anon_sym_short] = ACTIONS(853),
        [anon_sym_string] = ACTIONS(853),
        [anon_sym_uint] = ACTIONS(853),
        [anon_sym_ulong] = ACTIONS(853),
        [anon_sym_ushort] = ACTIONS(853),
        [sym_identifier_name] = ACTIONS(856),
        [sym_comment] = ACTIONS(69),
    },
    [211] = {
        [ts_builtin_sym_end] = ACTIONS(859),
        [anon_sym_namespace] = ACTIONS(862),
        [anon_sym_RBRACE] = ACTIONS(859),
        [anon_sym_class] = ACTIONS(862),
        [anon_sym_struct] = ACTIONS(862),
        [anon_sym_abstract] = ACTIONS(862),
        [anon_sym_sealed] = ACTIONS(862),
        [anon_sym_static] = ACTIONS(862),
        [anon_sym_new] = ACTIONS(862),
        [anon_sym_public] = ACTIONS(862),
        [anon_sym_protected] = ACTIONS(862),
        [anon_sym_internal] = ACTIONS(862),
        [anon_sym_private] = ACTIONS(862),
        [anon_sym_unsafe] = ACTIONS(862),
        [anon_sym_readonly] = ACTIONS(862),
        [anon_sym_volatile] = ACTIONS(862),
        [anon_sym_bool] = ACTIONS(862),
        [anon_sym_byte] = ACTIONS(862),
        [anon_sym_char] = ACTIONS(862),
        [anon_sym_decimal] = ACTIONS(862),
        [anon_sym_double] = ACTIONS(862),
        [anon_sym_float] = ACTIONS(862),
        [anon_sym_int] = ACTIONS(862),
        [anon_sym_long] = ACTIONS(862),
        [anon_sym_object] = ACTIONS(862),
        [anon_sym_sbyte] = ACTIONS(862),
        [anon_sym_short] = ACTIONS(862),
        [anon_sym_string] = ACTIONS(862),
        [anon_sym_uint] = ACTIONS(862),
        [anon_sym_ulong] = ACTIONS(862),
        [anon_sym_ushort] = ACTIONS(862),
        [sym_identifier_name] = ACTIONS(865),
        [sym_comment] = ACTIONS(69),
    },
    [212] = {
        [sym_class_declaration] = STATE(40),
        [sym_struct_declaration] = STATE(40),
        [sym_field_declaration] = STATE(40),
        [sym_variable_declaration] = STATE(33),
        [sym__type] = STATE(34),
        [sym_generic_name] = STATE(35),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(36),
        [sym__field_modifiers] = STATE(37),
        [sym_predefined_type] = STATE(35),
        [anon_sym_RBRACE] = ACTIONS(837),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(141),
        [anon_sym_volatile] = ACTIONS(141),
        [anon_sym_bool] = ACTIONS(143),
        [anon_sym_byte] = ACTIONS(143),
        [anon_sym_char] = ACTIONS(143),
        [anon_sym_decimal] = ACTIONS(143),
        [anon_sym_double] = ACTIONS(143),
        [anon_sym_float] = ACTIONS(143),
        [anon_sym_int] = ACTIONS(143),
        [anon_sym_long] = ACTIONS(143),
        [anon_sym_object] = ACTIONS(143),
        [anon_sym_sbyte] = ACTIONS(143),
        [anon_sym_short] = ACTIONS(143),
        [anon_sym_string] = ACTIONS(143),
        [anon_sym_uint] = ACTIONS(143),
        [anon_sym_ulong] = ACTIONS(143),
        [anon_sym_ushort] = ACTIONS(143),
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [213] = {
        [ts_builtin_sym_end] = ACTIONS(868),
        [anon_sym_namespace] = ACTIONS(876),
        [anon_sym_RBRACE] = ACTIONS(868),
        [anon_sym_class] = ACTIONS(876),
        [anon_sym_struct] = ACTIONS(876),
        [anon_sym_abstract] = ACTIONS(876),
        [anon_sym_sealed] = ACTIONS(876),
        [anon_sym_static] = ACTIONS(876),
        [anon_sym_new] = ACTIONS(876),
        [anon_sym_public] = ACTIONS(876),
        [anon_sym_protected] = ACTIONS(876),
        [anon_sym_internal] = ACTIONS(876),
        [anon_sym_private] = ACTIONS(876),
        [anon_sym_unsafe] = ACTIONS(876),
        [anon_sym_readonly] = ACTIONS(884),
        [anon_sym_volatile] = ACTIONS(884),
        [anon_sym_bool] = ACTIONS(884),
        [anon_sym_byte] = ACTIONS(884),
        [anon_sym_char] = ACTIONS(884),
        [anon_sym_decimal] = ACTIONS(884),
        [anon_sym_double] = ACTIONS(884),
        [anon_sym_float] = ACTIONS(884),
        [anon_sym_int] = ACTIONS(884),
        [anon_sym_long] = ACTIONS(884),
        [anon_sym_object] = ACTIONS(884),
        [anon_sym_sbyte] = ACTIONS(884),
        [anon_sym_short] = ACTIONS(884),
        [anon_sym_string] = ACTIONS(884),
        [anon_sym_uint] = ACTIONS(884),
        [anon_sym_ulong] = ACTIONS(884),
        [anon_sym_ushort] = ACTIONS(884),
        [sym_identifier_name] = ACTIONS(891),
        [sym_comment] = ACTIONS(69),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(142),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(143),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(144),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(145),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(146),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(147),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(148),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(64),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(149),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(150),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(77),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(78),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(151),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(67),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(88),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(68),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(152),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(153),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(154),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(155),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(71),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(156),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(28),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(29),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(30),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(157),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(132),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(123),
    [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(158),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
    [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
    [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
    [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
    [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [425] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [479] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [482] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [485] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [488] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4),
    [493] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [496] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [503] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [514] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [525] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [534] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
    [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
    [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
    [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [557] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
    [567] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [572] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [578] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
    [584] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [587] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [590] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [593] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(176),
    [597] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(182),
    [600] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [605] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(126),
    [609] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [612] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [615] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [618] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [623] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [628] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [631] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [634] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [639] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [643] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(57),
    [647] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [650] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [653] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [656] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [659] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [662] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [667] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(103),
    [671] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(104),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [677] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [682] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [689] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [696] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [705] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [710] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [715] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [722] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [727] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [732] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [739] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [745] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [751] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [756] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [763] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [766] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [769] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [773] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
    [780] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [785] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [788] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [791] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [798] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [802] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [805] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [808] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [813] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [816] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [819] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [822] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [825] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [828] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [839] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [842] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [845] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [848] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [850] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [853] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [856] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [859] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [862] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [865] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [868] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [876] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [884] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [891] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
