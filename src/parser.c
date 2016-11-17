#include "tree_sitter/parser.h"

#define STATE_COUNT 216
#define SYMBOL_COUNT 113
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
    aux_sym_struct_declaration_repeat1 = 109,
    aux_sym_variable_declaration_repeat1 = 110,
    aux_sym__regular_string_literal_repeat1 = 111,
    aux_sym_type_parameter_list_repeat1 = 112,
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
    [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
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
    [aux_sym_struct_declaration_repeat1] = {
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
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 329:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(329);
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
                ADVANCE(330);
            if (lookahead == 'd')
                ADVANCE(331);
            if (lookahead == 'f')
                ADVANCE(332);
            if (lookahead == 'i')
                ADVANCE(333);
            if (lookahead == 'l')
                ADVANCE(336);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 's')
                ADVANCE(337);
            if (lookahead == 'u')
                ADVANCE(340);
            LEX_ERROR();
        case 330:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'h')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 331:
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
        case 332:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'l')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier_name);
        case 333:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'n')
                ADVANCE(334);
            ACCEPT_TOKEN(sym_identifier_name);
        case 334:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 't')
                ADVANCE(335);
            ACCEPT_TOKEN(sym_identifier_name);
        case 335:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(anon_sym_int);
        case 336:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(121);
            ACCEPT_TOKEN(sym_identifier_name);
        case 337:
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
                ADVANCE(338);
            ACCEPT_TOKEN(sym_identifier_name);
        case 338:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'r')
                ADVANCE(339);
            ACCEPT_TOKEN(sym_identifier_name);
        case 339:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(191);
            ACCEPT_TOKEN(sym_identifier_name);
        case 340:
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
                ADVANCE(341);
            if (lookahead == 's')
                ADVANCE(342);
            ACCEPT_TOKEN(sym_identifier_name);
        case 341:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'o')
                ADVANCE(206);
            ACCEPT_TOKEN(sym_identifier_name);
        case 342:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'h')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier_name);
        case 343:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(343);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == '{')
                ADVANCE(230);
            LEX_ERROR();
        case 344:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(344);
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
                ADVANCE(331);
            if (lookahead == 'f')
                ADVANCE(332);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(336);
            if (lookahead == 'n')
                ADVANCE(345);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 'u')
                ADVANCE(346);
            if (lookahead == 'v')
                ADVANCE(222);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 345:
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
        case 346:
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
                ADVANCE(341);
            if (lookahead == 'n')
                ADVANCE(209);
            if (lookahead == 's')
                ADVANCE(342);
            ACCEPT_TOKEN(sym_identifier_name);
        case 347:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(347);
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
                ADVANCE(331);
            if (lookahead == 'f')
                ADVANCE(332);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(336);
            if (lookahead == 'n')
                ADVANCE(348);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 'u')
                ADVANCE(346);
            if (lookahead == 'v')
                ADVANCE(222);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 348:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'e')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 349:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(349);
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
                ADVANCE(331);
            if (lookahead == 'f')
                ADVANCE(332);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(336);
            if (lookahead == 'n')
                ADVANCE(348);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(350);
            if (lookahead == 'u')
                ADVANCE(346);
            if (lookahead == 'v')
                ADVANCE(222);
            LEX_ERROR();
        case 350:
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
                ADVANCE(351);
            ACCEPT_TOKEN(sym_identifier_name);
        case 351:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(186);
            if (lookahead == 'r')
                ADVANCE(339);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ADVANCE(331);
            if (lookahead == 'f')
                ADVANCE(332);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(336);
            if (lookahead == 'n')
                ADVANCE(348);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 'u')
                ADVANCE(346);
            if (lookahead == 'v')
                ADVANCE(222);
            LEX_ERROR();
        case 353:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(353);
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
                ADVANCE(330);
            if (lookahead == 'd')
                ADVANCE(331);
            if (lookahead == 'f')
                ADVANCE(332);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(336);
            if (lookahead == 'n')
                ADVANCE(348);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(354);
            if (lookahead == 'u')
                ADVANCE(346);
            if (lookahead == 'v')
                ADVANCE(222);
            LEX_ERROR();
        case 354:
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
                ADVANCE(351);
            ACCEPT_TOKEN(sym_identifier_name);
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
        case 357:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(357);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
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
            if (lookahead == '=')
                ADVANCE(19);
            LEX_ERROR();
        case 359:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(359);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            LEX_ERROR();
        case 360:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(360);
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
                ADVANCE(361);
            if (lookahead == 'n')
                ADVANCE(366);
            if (lookahead == 't')
                ADVANCE(370);
            LEX_ERROR();
        case 361:
            if (lookahead == 'a')
                ADVANCE(362);
            LEX_ERROR();
        case 362:
            if (lookahead == 'l')
                ADVANCE(363);
            LEX_ERROR();
        case 363:
            if (lookahead == 's')
                ADVANCE(364);
            LEX_ERROR();
        case 364:
            if (lookahead == 'e')
                ADVANCE(365);
            LEX_ERROR();
        case 365:
            ACCEPT_TOKEN(anon_sym_false);
        case 366:
            if (lookahead == 'u')
                ADVANCE(367);
            LEX_ERROR();
        case 367:
            if (lookahead == 'l')
                ADVANCE(368);
            LEX_ERROR();
        case 368:
            if (lookahead == 'l')
                ADVANCE(369);
            LEX_ERROR();
        case 369:
            ACCEPT_TOKEN(sym_null_literal);
        case 370:
            if (lookahead == 'r')
                ADVANCE(371);
            LEX_ERROR();
        case 371:
            if (lookahead == 'u')
                ADVANCE(372);
            LEX_ERROR();
        case 372:
            if (lookahead == 'e')
                ADVANCE(373);
            LEX_ERROR();
        case 373:
            ACCEPT_TOKEN(anon_sym_true);
        case 374:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(375);
            if (lookahead == '/')
                ADVANCE(376);
            if (lookahead == '\\')
                ADVANCE(377);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(375);
            LEX_ERROR();
        case 375:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 376:
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(10);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 377:
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
        case 378:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(378);
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
                ADVANCE(379);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(380);
            if (lookahead == 'L')
                ADVANCE(381);
            if (lookahead == 'U')
                ADVANCE(383);
            if (lookahead == 'l')
                ADVANCE(381);
            if (lookahead == 'u')
                ADVANCE(383);
            LEX_ERROR();
        case 379:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 380:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(26);
            LEX_ERROR();
        case 381:
            if (lookahead == 'U')
                ADVANCE(382);
            if (lookahead == 'u')
                ADVANCE(382);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 382:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 383:
            if (lookahead == 'L')
                ADVANCE(382);
            if (lookahead == 'l')
                ADVANCE(382);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 384:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(384);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == 'L')
                ADVANCE(381);
            if (lookahead == 'U')
                ADVANCE(383);
            if (lookahead == 'l')
                ADVANCE(381);
            if (lookahead == 'u')
                ADVANCE(383);
            LEX_ERROR();
        case 385:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(385);
            if (lookahead == '/')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            LEX_ERROR();
        case 386:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(387);
            if (lookahead == '\n')
                SKIP(386);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(388);
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
                ADVANCE(387);
            LEX_ERROR();
        case 387:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 388:
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(10);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 389:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(390);
            if (lookahead == '/')
                ADVANCE(391);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(395);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 390:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(390);
            if (lookahead == '/')
                ADVANCE(391);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(395);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 391:
            if (lookahead == '*')
                ADVANCE(392);
            if (lookahead == '/')
                ADVANCE(396);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(395);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 392:
            if (lookahead == '\"')
                ADVANCE(7);
            if (lookahead == '*')
                ADVANCE(393);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*')))
                ADVANCE(392);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 393:
            if (lookahead == '\"')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(394);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(392);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 394:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(395);
            ACCEPT_TOKEN(sym_comment);
        case 395:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(395);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 396:
            if (lookahead == '\n')
                ADVANCE(395);
            if (lookahead == '\"')
                ADVANCE(10);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(397);
            ACCEPT_TOKEN(sym_comment);
        case 397:
            if (lookahead == '\n')
                ADVANCE(395);
            if (lookahead == '\"')
                ADVANCE(10);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(397);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 398:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(398);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(6);
            LEX_ERROR();
        case 399:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(387);
            if (lookahead == '\n')
                SKIP(399);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(388);
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
                ADVANCE(387);
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
                ADVANCE(379);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(380);
            LEX_ERROR();
        case 401:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(401);
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
                ADVANCE(379);
            LEX_ERROR();
        case 402:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(402);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(6);
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
            LEX_ERROR();
        case 404:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(404);
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
        case 405:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(405);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ':')
                ADVANCE(15);
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
            if (lookahead == '{')
                ADVANCE(230);
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
            LEX_ERROR();
        case 408:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(408);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '{')
                ADVANCE(230);
            LEX_ERROR();
        case 409:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(409);
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
            if (lookahead == '=')
                ADVANCE(19);
            LEX_ERROR();
        case 411:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(411);
            if (lookahead == '.')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(17);
            LEX_ERROR();
        case 412:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(412);
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
                ADVANCE(331);
            if (lookahead == 'f')
                ADVANCE(332);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(336);
            if (lookahead == 'n')
                ADVANCE(345);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 'u')
                ADVANCE(413);
            if (lookahead == 'v')
                ADVANCE(222);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 413:
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
                ADVANCE(341);
            if (lookahead == 'n')
                ADVANCE(209);
            if (lookahead == 's')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 414:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(414);
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
                ADVANCE(331);
            if (lookahead == 'f')
                ADVANCE(332);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(336);
            if (lookahead == 'n')
                ADVANCE(345);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(171);
            if (lookahead == 'u')
                ADVANCE(346);
            if (lookahead == 'v')
                ADVANCE(222);
            if (lookahead == '}')
                ADVANCE(231);
            LEX_ERROR();
        case 415:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(415);
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
                ADVANCE(416);
            if (lookahead == 'g')
                ADVANCE(106);
            if (lookahead == 'n')
                ADVANCE(417);
            if (lookahead == 't')
                ADVANCE(197);
            LEX_ERROR();
        case 416:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'a')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier_name);
        case 417:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == 'u')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 418:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(375);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(376);
            if (lookahead == ';')
                ADVANCE(17);
            if (lookahead == '\\')
                ADVANCE(377);
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
                ADVANCE(375);
            LEX_ERROR();
        case 419:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(419);
            if (lookahead == '/')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            LEX_ERROR();
        case 420:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(387);
            if (lookahead == '\n')
                SKIP(420);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(388);
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
                ADVANCE(387);
            LEX_ERROR();
        case 421:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(421);
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
                ADVANCE(331);
            if (lookahead == 'f')
                ADVANCE(332);
            if (lookahead == 'g')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'l')
                ADVANCE(336);
            if (lookahead == 'n')
                ADVANCE(348);
            if (lookahead == 'o')
                ADVANCE(138);
            if (lookahead == 'p')
                ADVANCE(144);
            if (lookahead == 'r')
                ADVANCE(163);
            if (lookahead == 's')
                ADVANCE(350);
            if (lookahead == 'u')
                ADVANCE(346);
            if (lookahead == 'v')
                ADVANCE(222);
            LEX_ERROR();
        case 422:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(422);
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
        case 423:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(423);
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
    [23] = 329,
    [24] = 343,
    [25] = 328,
    [26] = 344,
    [27] = 328,
    [28] = 328,
    [29] = 344,
    [30] = 328,
    [31] = 344,
    [32] = 328,
    [33] = 313,
    [34] = 327,
    [35] = 347,
    [36] = 343,
    [37] = 347,
    [38] = 344,
    [39] = 349,
    [40] = 352,
    [41] = 353,
    [42] = 355,
    [43] = 356,
    [44] = 347,
    [45] = 357,
    [46] = 313,
    [47] = 355,
    [48] = 329,
    [49] = 329,
    [50] = 347,
    [51] = 344,
    [52] = 347,
    [53] = 357,
    [54] = 347,
    [55] = 344,
    [56] = 347,
    [57] = 358,
    [58] = 359,
    [59] = 313,
    [60] = 359,
    [61] = 313,
    [62] = 359,
    [63] = 359,
    [64] = 360,
    [65] = 359,
    [66] = 359,
    [67] = 374,
    [68] = 378,
    [69] = 384,
    [70] = 359,
    [71] = 385,
    [72] = 386,
    [73] = 389,
    [74] = 359,
    [75] = 359,
    [76] = 398,
    [77] = 359,
    [78] = 386,
    [79] = 399,
    [80] = 399,
    [81] = 359,
    [82] = 386,
    [83] = 386,
    [84] = 359,
    [85] = 386,
    [86] = 400,
    [87] = 359,
    [88] = 401,
    [89] = 359,
    [90] = 359,
    [91] = 385,
    [92] = 359,
    [93] = 401,
    [94] = 400,
    [95] = 401,
    [96] = 359,
    [97] = 402,
    [98] = 402,
    [99] = 402,
    [100] = 359,
    [101] = 347,
    [102] = 355,
    [103] = 403,
    [104] = 403,
    [105] = 329,
    [106] = 404,
    [107] = 403,
    [108] = 329,
    [109] = 404,
    [110] = 403,
    [111] = 403,
    [112] = 329,
    [113] = 322,
    [114] = 323,
    [115] = 327,
    [116] = 328,
    [117] = 343,
    [118] = 344,
    [119] = 328,
    [120] = 327,
    [121] = 347,
    [122] = 343,
    [123] = 344,
    [124] = 347,
    [125] = 405,
    [126] = 406,
    [127] = 407,
    [128] = 313,
    [129] = 408,
    [130] = 409,
    [131] = 321,
    [132] = 409,
    [133] = 321,
    [134] = 313,
    [135] = 407,
    [136] = 312,
    [137] = 410,
    [138] = 411,
    [139] = 312,
    [140] = 411,
    [141] = 232,
    [142] = 232,
    [143] = 312,
    [144] = 412,
    [145] = 414,
    [146] = 344,
    [147] = 313,
    [148] = 313,
    [149] = 329,
    [150] = 415,
    [151] = 418,
    [152] = 399,
    [153] = 378,
    [154] = 419,
    [155] = 359,
    [156] = 401,
    [157] = 420,
    [158] = 421,
    [159] = 404,
    [160] = 422,
    [161] = 232,
    [162] = 321,
    [163] = 344,
    [164] = 347,
    [165] = 357,
    [166] = 355,
    [167] = 359,
    [168] = 386,
    [169] = 322,
    [170] = 323,
    [171] = 329,
    [172] = 404,
    [173] = 403,
    [174] = 408,
    [175] = 321,
    [176] = 347,
    [177] = 328,
    [178] = 344,
    [179] = 344,
    [180] = 232,
    [181] = 347,
    [182] = 344,
    [183] = 347,
    [184] = 347,
    [185] = 328,
    [186] = 344,
    [187] = 344,
    [188] = 347,
    [189] = 414,
    [190] = 344,
    [191] = 414,
    [192] = 347,
    [193] = 328,
    [194] = 344,
    [195] = 344,
    [196] = 359,
    [197] = 400,
    [198] = 359,
    [199] = 401,
    [200] = 359,
    [201] = 359,
    [202] = 423,
    [203] = 359,
    [204] = 403,
    [205] = 327,
    [206] = 328,
    [207] = 343,
    [208] = 328,
    [209] = 344,
    [210] = 327,
    [211] = 347,
    [212] = 343,
    [213] = 347,
    [214] = 344,
    [215] = 344,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(161),
        [sym_namespace_declaration] = STATE(162),
        [sym_class_declaration] = STATE(163),
        [sym_struct_declaration] = STATE(163),
        [sym_field_declaration] = STATE(164),
        [sym_variable_declaration] = STATE(165),
        [sym__type] = STATE(166),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(167),
        [sym_equals_value_clause] = STATE(65),
        [sym__literal] = STATE(74),
        [sym_boolean_literal] = STATE(70),
        [sym_character_literal] = STATE(70),
        [sym__unicode_escape_sequence] = STATE(152),
        [sym__simple_escape_sequence] = STATE(152),
        [sym_integer_literal] = STATE(70),
        [sym_real_literal] = STATE(70),
        [sym_string_literal] = STATE(70),
        [sym__regular_string_literal] = STATE(75),
        [sym__regular_string_literal_character] = STATE(168),
        [sym__verbatim_string_literal] = STATE(75),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(169),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(170),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(171),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter_list] = STATE(172),
        [sym_type_parameter] = STATE(173),
        [sym_qualified_name] = STATE(174),
        [sym_alias_qualified_name] = STATE(127),
        [sym_name_equals] = STATE(139),
        [sym_static] = STATE(139),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(175),
        [aux_sym_class_declaration_repeat1] = STATE(176),
        [aux_sym_struct_declaration_repeat1] = STATE(177),
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [aux_sym__regular_string_literal_repeat1] = STATE(83),
        [aux_sym_type_parameter_list_repeat1] = STATE(107),
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
        [sym_qualified_name] = STATE(138),
        [sym_alias_qualified_name] = STATE(127),
        [sym_name_equals] = STATE(139),
        [sym_static] = STATE(139),
        [anon_sym_static] = ACTIONS(85),
        [sym_global] = ACTIONS(87),
        [sym_identifier_name] = ACTIONS(89),
        [sym_comment] = ACTIONS(69),
    },
    [3] = {
        [sym_qualified_name] = STATE(126),
        [sym_alias_qualified_name] = STATE(127),
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
        [sym__class_modifiers] = STATE(113),
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
        [sym__class_modifiers] = STATE(113),
        [sym__struct_modifiers] = STATE(114),
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
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(32),
        [anon_sym_RBRACE] = ACTIONS(129),
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
    [23] = {
        [sym__type] = STATE(103),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(104),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(69),
    },
    [25] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(28),
        [anon_sym_RBRACE] = ACTIONS(137),
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
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_namespace] = ACTIONS(141),
        [anon_sym_RBRACE] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(141),
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
        [sym_identifier_name] = ACTIONS(143),
        [sym_comment] = ACTIONS(69),
    },
    [27] = {
        [anon_sym_RBRACE] = ACTIONS(145),
        [anon_sym_class] = ACTIONS(145),
        [anon_sym_struct] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(145),
        [anon_sym_new] = ACTIONS(145),
        [anon_sym_public] = ACTIONS(145),
        [anon_sym_protected] = ACTIONS(145),
        [anon_sym_internal] = ACTIONS(145),
        [anon_sym_private] = ACTIONS(145),
        [anon_sym_unsafe] = ACTIONS(145),
        [sym_comment] = ACTIONS(69),
    },
    [28] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(147),
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
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(149),
        [anon_sym_namespace] = ACTIONS(151),
        [anon_sym_RBRACE] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_struct] = ACTIONS(151),
        [anon_sym_abstract] = ACTIONS(151),
        [anon_sym_sealed] = ACTIONS(151),
        [anon_sym_static] = ACTIONS(151),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(151),
        [anon_sym_byte] = ACTIONS(151),
        [anon_sym_char] = ACTIONS(151),
        [anon_sym_decimal] = ACTIONS(151),
        [anon_sym_double] = ACTIONS(151),
        [anon_sym_float] = ACTIONS(151),
        [anon_sym_int] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(151),
        [anon_sym_object] = ACTIONS(151),
        [anon_sym_sbyte] = ACTIONS(151),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_string] = ACTIONS(151),
        [anon_sym_uint] = ACTIONS(151),
        [anon_sym_ulong] = ACTIONS(151),
        [anon_sym_ushort] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(69),
    },
    [30] = {
        [anon_sym_RBRACE] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_struct] = ACTIONS(155),
        [anon_sym_abstract] = ACTIONS(155),
        [anon_sym_sealed] = ACTIONS(155),
        [anon_sym_static] = ACTIONS(155),
        [anon_sym_new] = ACTIONS(155),
        [anon_sym_public] = ACTIONS(155),
        [anon_sym_protected] = ACTIONS(155),
        [anon_sym_internal] = ACTIONS(155),
        [anon_sym_private] = ACTIONS(155),
        [anon_sym_unsafe] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(157),
        [anon_sym_namespace] = ACTIONS(159),
        [anon_sym_RBRACE] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(159),
        [anon_sym_sealed] = ACTIONS(159),
        [anon_sym_static] = ACTIONS(159),
        [anon_sym_new] = ACTIONS(159),
        [anon_sym_public] = ACTIONS(159),
        [anon_sym_protected] = ACTIONS(159),
        [anon_sym_internal] = ACTIONS(159),
        [anon_sym_private] = ACTIONS(159),
        [anon_sym_unsafe] = ACTIONS(159),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_volatile] = ACTIONS(159),
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
    [32] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(137),
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
    [33] = {
        [sym_identifier_name] = ACTIONS(163),
        [sym_comment] = ACTIONS(69),
    },
    [34] = {
        [sym_type_parameter_list] = STATE(36),
        [anon_sym_LBRACE] = ACTIONS(165),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [35] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(56),
        [anon_sym_RBRACE] = ACTIONS(167),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [36] = {
        [anon_sym_LBRACE] = ACTIONS(181),
        [sym_comment] = ACTIONS(69),
    },
    [37] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(50),
        [anon_sym_RBRACE] = ACTIONS(183),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(185),
        [anon_sym_namespace] = ACTIONS(187),
        [anon_sym_RBRACE] = ACTIONS(185),
        [anon_sym_class] = ACTIONS(187),
        [anon_sym_struct] = ACTIONS(187),
        [anon_sym_abstract] = ACTIONS(187),
        [anon_sym_sealed] = ACTIONS(187),
        [anon_sym_static] = ACTIONS(187),
        [anon_sym_new] = ACTIONS(187),
        [anon_sym_public] = ACTIONS(187),
        [anon_sym_protected] = ACTIONS(187),
        [anon_sym_internal] = ACTIONS(187),
        [anon_sym_private] = ACTIONS(187),
        [anon_sym_unsafe] = ACTIONS(187),
        [anon_sym_readonly] = ACTIONS(187),
        [anon_sym_volatile] = ACTIONS(187),
        [anon_sym_bool] = ACTIONS(187),
        [anon_sym_byte] = ACTIONS(187),
        [anon_sym_char] = ACTIONS(187),
        [anon_sym_decimal] = ACTIONS(187),
        [anon_sym_double] = ACTIONS(187),
        [anon_sym_float] = ACTIONS(187),
        [anon_sym_int] = ACTIONS(187),
        [anon_sym_long] = ACTIONS(187),
        [anon_sym_object] = ACTIONS(187),
        [anon_sym_sbyte] = ACTIONS(187),
        [anon_sym_short] = ACTIONS(187),
        [anon_sym_string] = ACTIONS(187),
        [anon_sym_uint] = ACTIONS(187),
        [anon_sym_ulong] = ACTIONS(187),
        [anon_sym_ushort] = ACTIONS(187),
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(69),
    },
    [39] = {
        [sym__class_modifiers] = STATE(113),
        [sym__field_modifiers] = STATE(112),
        [anon_sym_class] = ACTIONS(191),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(175),
        [anon_sym_public] = ACTIONS(175),
        [anon_sym_protected] = ACTIONS(175),
        [anon_sym_internal] = ACTIONS(175),
        [anon_sym_private] = ACTIONS(175),
        [anon_sym_unsafe] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(193),
        [anon_sym_byte] = ACTIONS(193),
        [anon_sym_char] = ACTIONS(193),
        [anon_sym_decimal] = ACTIONS(193),
        [anon_sym_double] = ACTIONS(193),
        [anon_sym_float] = ACTIONS(193),
        [anon_sym_int] = ACTIONS(193),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_object] = ACTIONS(193),
        [anon_sym_sbyte] = ACTIONS(193),
        [anon_sym_short] = ACTIONS(193),
        [anon_sym_string] = ACTIONS(193),
        [anon_sym_uint] = ACTIONS(193),
        [anon_sym_ulong] = ACTIONS(193),
        [anon_sym_ushort] = ACTIONS(193),
        [sym_identifier_name] = ACTIONS(195),
        [sym_comment] = ACTIONS(69),
    },
    [40] = {
        [sym__class_modifiers] = STATE(113),
        [sym__struct_modifiers] = STATE(114),
        [sym__field_modifiers] = STATE(112),
        [anon_sym_class] = ACTIONS(191),
        [anon_sym_struct] = ACTIONS(197),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(193),
        [anon_sym_byte] = ACTIONS(193),
        [anon_sym_char] = ACTIONS(193),
        [anon_sym_decimal] = ACTIONS(193),
        [anon_sym_double] = ACTIONS(193),
        [anon_sym_float] = ACTIONS(193),
        [anon_sym_int] = ACTIONS(193),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_object] = ACTIONS(193),
        [anon_sym_sbyte] = ACTIONS(193),
        [anon_sym_short] = ACTIONS(193),
        [anon_sym_string] = ACTIONS(193),
        [anon_sym_uint] = ACTIONS(193),
        [anon_sym_ulong] = ACTIONS(193),
        [anon_sym_ushort] = ACTIONS(193),
        [sym_identifier_name] = ACTIONS(195),
        [sym_comment] = ACTIONS(69),
    },
    [41] = {
        [sym__field_modifiers] = STATE(112),
        [anon_sym_static] = ACTIONS(179),
        [anon_sym_new] = ACTIONS(179),
        [anon_sym_public] = ACTIONS(179),
        [anon_sym_protected] = ACTIONS(179),
        [anon_sym_internal] = ACTIONS(179),
        [anon_sym_private] = ACTIONS(179),
        [anon_sym_unsafe] = ACTIONS(179),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(193),
        [anon_sym_byte] = ACTIONS(193),
        [anon_sym_char] = ACTIONS(193),
        [anon_sym_decimal] = ACTIONS(193),
        [anon_sym_double] = ACTIONS(193),
        [anon_sym_float] = ACTIONS(193),
        [anon_sym_int] = ACTIONS(193),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_object] = ACTIONS(193),
        [anon_sym_sbyte] = ACTIONS(193),
        [anon_sym_short] = ACTIONS(193),
        [anon_sym_string] = ACTIONS(193),
        [anon_sym_uint] = ACTIONS(193),
        [anon_sym_ulong] = ACTIONS(193),
        [anon_sym_ushort] = ACTIONS(193),
        [sym_identifier_name] = ACTIONS(195),
        [sym_comment] = ACTIONS(69),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(199),
        [anon_sym_GT] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [43] = {
        [sym_type_parameter_list] = STATE(102),
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_LT] = ACTIONS(127),
        [anon_sym_GT] = ACTIONS(203),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [44] = {
        [anon_sym_RBRACE] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(209),
        [anon_sym_struct] = ACTIONS(209),
        [anon_sym_abstract] = ACTIONS(209),
        [anon_sym_sealed] = ACTIONS(209),
        [anon_sym_static] = ACTIONS(209),
        [anon_sym_new] = ACTIONS(209),
        [anon_sym_public] = ACTIONS(209),
        [anon_sym_protected] = ACTIONS(209),
        [anon_sym_internal] = ACTIONS(209),
        [anon_sym_private] = ACTIONS(209),
        [anon_sym_unsafe] = ACTIONS(209),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(209),
        [anon_sym_byte] = ACTIONS(209),
        [anon_sym_char] = ACTIONS(209),
        [anon_sym_decimal] = ACTIONS(209),
        [anon_sym_double] = ACTIONS(209),
        [anon_sym_float] = ACTIONS(209),
        [anon_sym_int] = ACTIONS(209),
        [anon_sym_long] = ACTIONS(209),
        [anon_sym_object] = ACTIONS(209),
        [anon_sym_sbyte] = ACTIONS(209),
        [anon_sym_short] = ACTIONS(209),
        [anon_sym_string] = ACTIONS(209),
        [anon_sym_uint] = ACTIONS(209),
        [anon_sym_ulong] = ACTIONS(209),
        [anon_sym_ushort] = ACTIONS(209),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(69),
    },
    [45] = {
        [anon_sym_SEMI] = ACTIONS(213),
        [sym_comment] = ACTIONS(69),
    },
    [46] = {
        [sym_variable_declarator] = STATE(58),
        [sym_identifier_name] = ACTIONS(215),
        [sym_comment] = ACTIONS(69),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_GT] = ACTIONS(203),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [48] = {
        [sym_variable_declaration] = STATE(53),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [49] = {
        [anon_sym_bool] = ACTIONS(217),
        [anon_sym_byte] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(217),
        [anon_sym_decimal] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_int] = ACTIONS(217),
        [anon_sym_long] = ACTIONS(217),
        [anon_sym_object] = ACTIONS(217),
        [anon_sym_sbyte] = ACTIONS(217),
        [anon_sym_short] = ACTIONS(217),
        [anon_sym_string] = ACTIONS(217),
        [anon_sym_uint] = ACTIONS(217),
        [anon_sym_ulong] = ACTIONS(217),
        [anon_sym_ushort] = ACTIONS(217),
        [sym_identifier_name] = ACTIONS(219),
        [sym_comment] = ACTIONS(69),
    },
    [50] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(221),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [51] = {
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_namespace] = ACTIONS(225),
        [anon_sym_RBRACE] = ACTIONS(223),
        [anon_sym_class] = ACTIONS(225),
        [anon_sym_struct] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(225),
        [anon_sym_sealed] = ACTIONS(225),
        [anon_sym_static] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(225),
        [anon_sym_public] = ACTIONS(225),
        [anon_sym_protected] = ACTIONS(225),
        [anon_sym_internal] = ACTIONS(225),
        [anon_sym_private] = ACTIONS(225),
        [anon_sym_unsafe] = ACTIONS(225),
        [anon_sym_readonly] = ACTIONS(225),
        [anon_sym_volatile] = ACTIONS(225),
        [anon_sym_bool] = ACTIONS(225),
        [anon_sym_byte] = ACTIONS(225),
        [anon_sym_char] = ACTIONS(225),
        [anon_sym_decimal] = ACTIONS(225),
        [anon_sym_double] = ACTIONS(225),
        [anon_sym_float] = ACTIONS(225),
        [anon_sym_int] = ACTIONS(225),
        [anon_sym_long] = ACTIONS(225),
        [anon_sym_object] = ACTIONS(225),
        [anon_sym_sbyte] = ACTIONS(225),
        [anon_sym_short] = ACTIONS(225),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_uint] = ACTIONS(225),
        [anon_sym_ulong] = ACTIONS(225),
        [anon_sym_ushort] = ACTIONS(225),
        [sym_identifier_name] = ACTIONS(227),
        [sym_comment] = ACTIONS(69),
    },
    [52] = {
        [anon_sym_RBRACE] = ACTIONS(229),
        [anon_sym_class] = ACTIONS(231),
        [anon_sym_struct] = ACTIONS(231),
        [anon_sym_abstract] = ACTIONS(231),
        [anon_sym_sealed] = ACTIONS(231),
        [anon_sym_static] = ACTIONS(231),
        [anon_sym_new] = ACTIONS(231),
        [anon_sym_public] = ACTIONS(231),
        [anon_sym_protected] = ACTIONS(231),
        [anon_sym_internal] = ACTIONS(231),
        [anon_sym_private] = ACTIONS(231),
        [anon_sym_unsafe] = ACTIONS(231),
        [anon_sym_readonly] = ACTIONS(231),
        [anon_sym_volatile] = ACTIONS(231),
        [anon_sym_bool] = ACTIONS(231),
        [anon_sym_byte] = ACTIONS(231),
        [anon_sym_char] = ACTIONS(231),
        [anon_sym_decimal] = ACTIONS(231),
        [anon_sym_double] = ACTIONS(231),
        [anon_sym_float] = ACTIONS(231),
        [anon_sym_int] = ACTIONS(231),
        [anon_sym_long] = ACTIONS(231),
        [anon_sym_object] = ACTIONS(231),
        [anon_sym_sbyte] = ACTIONS(231),
        [anon_sym_short] = ACTIONS(231),
        [anon_sym_string] = ACTIONS(231),
        [anon_sym_uint] = ACTIONS(231),
        [anon_sym_ulong] = ACTIONS(231),
        [anon_sym_ushort] = ACTIONS(231),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(69),
    },
    [53] = {
        [anon_sym_SEMI] = ACTIONS(235),
        [sym_comment] = ACTIONS(69),
    },
    [54] = {
        [anon_sym_RBRACE] = ACTIONS(237),
        [anon_sym_class] = ACTIONS(239),
        [anon_sym_struct] = ACTIONS(239),
        [anon_sym_abstract] = ACTIONS(239),
        [anon_sym_sealed] = ACTIONS(239),
        [anon_sym_static] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(239),
        [anon_sym_public] = ACTIONS(239),
        [anon_sym_protected] = ACTIONS(239),
        [anon_sym_internal] = ACTIONS(239),
        [anon_sym_private] = ACTIONS(239),
        [anon_sym_unsafe] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_volatile] = ACTIONS(239),
        [anon_sym_bool] = ACTIONS(239),
        [anon_sym_byte] = ACTIONS(239),
        [anon_sym_char] = ACTIONS(239),
        [anon_sym_decimal] = ACTIONS(239),
        [anon_sym_double] = ACTIONS(239),
        [anon_sym_float] = ACTIONS(239),
        [anon_sym_int] = ACTIONS(239),
        [anon_sym_long] = ACTIONS(239),
        [anon_sym_object] = ACTIONS(239),
        [anon_sym_sbyte] = ACTIONS(239),
        [anon_sym_short] = ACTIONS(239),
        [anon_sym_string] = ACTIONS(239),
        [anon_sym_uint] = ACTIONS(239),
        [anon_sym_ulong] = ACTIONS(239),
        [anon_sym_ushort] = ACTIONS(239),
        [sym_identifier_name] = ACTIONS(241),
        [sym_comment] = ACTIONS(69),
    },
    [55] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_namespace] = ACTIONS(245),
        [anon_sym_RBRACE] = ACTIONS(243),
        [anon_sym_class] = ACTIONS(245),
        [anon_sym_struct] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(245),
        [anon_sym_sealed] = ACTIONS(245),
        [anon_sym_static] = ACTIONS(245),
        [anon_sym_new] = ACTIONS(245),
        [anon_sym_public] = ACTIONS(245),
        [anon_sym_protected] = ACTIONS(245),
        [anon_sym_internal] = ACTIONS(245),
        [anon_sym_private] = ACTIONS(245),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_readonly] = ACTIONS(245),
        [anon_sym_volatile] = ACTIONS(245),
        [anon_sym_bool] = ACTIONS(245),
        [anon_sym_byte] = ACTIONS(245),
        [anon_sym_char] = ACTIONS(245),
        [anon_sym_decimal] = ACTIONS(245),
        [anon_sym_double] = ACTIONS(245),
        [anon_sym_float] = ACTIONS(245),
        [anon_sym_int] = ACTIONS(245),
        [anon_sym_long] = ACTIONS(245),
        [anon_sym_object] = ACTIONS(245),
        [anon_sym_sbyte] = ACTIONS(245),
        [anon_sym_short] = ACTIONS(245),
        [anon_sym_string] = ACTIONS(245),
        [anon_sym_uint] = ACTIONS(245),
        [anon_sym_ulong] = ACTIONS(245),
        [anon_sym_ushort] = ACTIONS(245),
        [sym_identifier_name] = ACTIONS(247),
        [sym_comment] = ACTIONS(69),
    },
    [56] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(183),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [57] = {
        [sym_equals_value_clause] = STATE(65),
        [anon_sym_SEMI] = ACTIONS(249),
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_EQ] = ACTIONS(251),
        [sym_comment] = ACTIONS(69),
    },
    [58] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(255),
        [sym_comment] = ACTIONS(69),
    },
    [59] = {
        [sym_variable_declarator] = STATE(63),
        [sym_identifier_name] = ACTIONS(215),
        [sym_comment] = ACTIONS(69),
    },
    [60] = {
        [anon_sym_SEMI] = ACTIONS(257),
        [anon_sym_COMMA] = ACTIONS(259),
        [sym_comment] = ACTIONS(69),
    },
    [61] = {
        [sym_variable_declarator] = STATE(62),
        [sym_identifier_name] = ACTIONS(215),
        [sym_comment] = ACTIONS(69),
    },
    [62] = {
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(261),
        [sym_comment] = ACTIONS(69),
    },
    [63] = {
        [anon_sym_SEMI] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(263),
        [sym_comment] = ACTIONS(69),
    },
    [64] = {
        [sym__literal] = STATE(74),
        [sym_boolean_literal] = STATE(70),
        [sym_character_literal] = STATE(70),
        [sym_integer_literal] = STATE(70),
        [sym_real_literal] = STATE(70),
        [sym_string_literal] = STATE(70),
        [sym__regular_string_literal] = STATE(75),
        [sym__verbatim_string_literal] = STATE(75),
        [anon_sym_true] = ACTIONS(265),
        [anon_sym_false] = ACTIONS(265),
        [anon_sym_SQUOTE] = ACTIONS(267),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(269),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(271),
        [sym_null_literal] = ACTIONS(273),
        [anon_sym_DOT] = ACTIONS(275),
        [anon_sym_DQUOTE] = ACTIONS(277),
        [anon_sym_AT_DQUOTE] = ACTIONS(279),
        [sym_comment] = ACTIONS(69),
    },
    [65] = {
        [anon_sym_SEMI] = ACTIONS(281),
        [anon_sym_COMMA] = ACTIONS(281),
        [sym_comment] = ACTIONS(69),
    },
    [66] = {
        [anon_sym_SEMI] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(283),
        [sym_comment] = ACTIONS(69),
    },
    [67] = {
        [sym__unicode_escape_sequence] = STATE(97),
        [sym__simple_escape_sequence] = STATE(97),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(285),
        [sym__hexadecimal_escape_sequence] = ACTIONS(285),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(287),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(287),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(289),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(289),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(289),
        [anon_sym_BSLASH0] = ACTIONS(289),
        [anon_sym_BSLASHa] = ACTIONS(289),
        [anon_sym_BSLASHb] = ACTIONS(289),
        [anon_sym_BSLASHf] = ACTIONS(289),
        [anon_sym_BSLASHn] = ACTIONS(289),
        [anon_sym_BSLASHr] = ACTIONS(289),
        [anon_sym_BSLASHt] = ACTIONS(289),
        [anon_sym_BSLASHv] = ACTIONS(289),
        [sym_comment] = ACTIONS(69),
    },
    [68] = {
        [anon_sym_SEMI] = ACTIONS(291),
        [anon_sym_COMMA] = ACTIONS(291),
        [sym__integer_type_suffix] = ACTIONS(293),
        [anon_sym_DOT] = ACTIONS(295),
        [sym__real_type_suffix] = ACTIONS(297),
        [sym__exponent_part] = ACTIONS(299),
        [sym_comment] = ACTIONS(69),
    },
    [69] = {
        [anon_sym_SEMI] = ACTIONS(291),
        [anon_sym_COMMA] = ACTIONS(291),
        [sym__integer_type_suffix] = ACTIONS(293),
        [sym_comment] = ACTIONS(69),
    },
    [70] = {
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_COMMA] = ACTIONS(301),
        [sym_comment] = ACTIONS(69),
    },
    [71] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(303),
        [sym_comment] = ACTIONS(69),
    },
    [72] = {
        [sym__unicode_escape_sequence] = STATE(78),
        [sym__simple_escape_sequence] = STATE(78),
        [sym__regular_string_literal_character] = STATE(82),
        [aux_sym__regular_string_literal_repeat1] = STATE(83),
        [sym__hexadecimal_escape_sequence] = ACTIONS(305),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(307),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(307),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(309),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(309),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(309),
        [anon_sym_BSLASH0] = ACTIONS(309),
        [anon_sym_BSLASHa] = ACTIONS(309),
        [anon_sym_BSLASHb] = ACTIONS(309),
        [anon_sym_BSLASHf] = ACTIONS(309),
        [anon_sym_BSLASHn] = ACTIONS(309),
        [anon_sym_BSLASHr] = ACTIONS(309),
        [anon_sym_BSLASHt] = ACTIONS(309),
        [anon_sym_BSLASHv] = ACTIONS(309),
        [anon_sym_DQUOTE] = ACTIONS(311),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(305),
        [sym_comment] = ACTIONS(69),
    },
    [73] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(313),
        [sym_comment] = ACTIONS(315),
    },
    [74] = {
        [anon_sym_SEMI] = ACTIONS(317),
        [anon_sym_COMMA] = ACTIONS(317),
        [sym_comment] = ACTIONS(69),
    },
    [75] = {
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_COMMA] = ACTIONS(319),
        [sym_comment] = ACTIONS(69),
    },
    [76] = {
        [anon_sym_DQUOTE] = ACTIONS(321),
        [sym_comment] = ACTIONS(69),
    },
    [77] = {
        [anon_sym_SEMI] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(323),
        [sym_comment] = ACTIONS(69),
    },
    [78] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(325),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(327),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(327),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(327),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(327),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(327),
        [anon_sym_BSLASH0] = ACTIONS(327),
        [anon_sym_BSLASHa] = ACTIONS(327),
        [anon_sym_BSLASHb] = ACTIONS(327),
        [anon_sym_BSLASHf] = ACTIONS(327),
        [anon_sym_BSLASHn] = ACTIONS(327),
        [anon_sym_BSLASHr] = ACTIONS(327),
        [anon_sym_BSLASHt] = ACTIONS(327),
        [anon_sym_BSLASHv] = ACTIONS(327),
        [anon_sym_DQUOTE] = ACTIONS(327),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(325),
        [sym_comment] = ACTIONS(69),
    },
    [79] = {
        [anon_sym_SQUOTE] = ACTIONS(329),
        [sym__hexadecimal_escape_sequence] = ACTIONS(331),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(329),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(329),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(329),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(329),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(329),
        [anon_sym_BSLASH0] = ACTIONS(329),
        [anon_sym_BSLASHa] = ACTIONS(329),
        [anon_sym_BSLASHb] = ACTIONS(329),
        [anon_sym_BSLASHf] = ACTIONS(329),
        [anon_sym_BSLASHn] = ACTIONS(329),
        [anon_sym_BSLASHr] = ACTIONS(329),
        [anon_sym_BSLASHt] = ACTIONS(329),
        [anon_sym_BSLASHv] = ACTIONS(329),
        [anon_sym_DQUOTE] = ACTIONS(329),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(333),
        [sym_comment] = ACTIONS(69),
    },
    [80] = {
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
        [sym_comment] = ACTIONS(69),
    },
    [81] = {
        [anon_sym_SEMI] = ACTIONS(341),
        [anon_sym_COMMA] = ACTIONS(341),
        [sym_comment] = ACTIONS(69),
    },
    [82] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(343),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(345),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(345),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(345),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(345),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(345),
        [anon_sym_BSLASH0] = ACTIONS(345),
        [anon_sym_BSLASHa] = ACTIONS(345),
        [anon_sym_BSLASHb] = ACTIONS(345),
        [anon_sym_BSLASHf] = ACTIONS(345),
        [anon_sym_BSLASHn] = ACTIONS(345),
        [anon_sym_BSLASHr] = ACTIONS(345),
        [anon_sym_BSLASHt] = ACTIONS(345),
        [anon_sym_BSLASHv] = ACTIONS(345),
        [anon_sym_DQUOTE] = ACTIONS(345),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(343),
        [sym_comment] = ACTIONS(69),
    },
    [83] = {
        [sym__unicode_escape_sequence] = STATE(78),
        [sym__simple_escape_sequence] = STATE(78),
        [sym__regular_string_literal_character] = STATE(85),
        [sym__hexadecimal_escape_sequence] = ACTIONS(305),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(307),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(307),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(309),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(309),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(309),
        [anon_sym_BSLASH0] = ACTIONS(309),
        [anon_sym_BSLASHa] = ACTIONS(309),
        [anon_sym_BSLASHb] = ACTIONS(309),
        [anon_sym_BSLASHf] = ACTIONS(309),
        [anon_sym_BSLASHn] = ACTIONS(309),
        [anon_sym_BSLASHr] = ACTIONS(309),
        [anon_sym_BSLASHt] = ACTIONS(309),
        [anon_sym_BSLASHv] = ACTIONS(309),
        [anon_sym_DQUOTE] = ACTIONS(347),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(305),
        [sym_comment] = ACTIONS(69),
    },
    [84] = {
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(349),
        [sym_comment] = ACTIONS(69),
    },
    [85] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(351),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(353),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(353),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(353),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(353),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(353),
        [anon_sym_BSLASH0] = ACTIONS(353),
        [anon_sym_BSLASHa] = ACTIONS(353),
        [anon_sym_BSLASHb] = ACTIONS(353),
        [anon_sym_BSLASHf] = ACTIONS(353),
        [anon_sym_BSLASHn] = ACTIONS(353),
        [anon_sym_BSLASHr] = ACTIONS(353),
        [anon_sym_BSLASHt] = ACTIONS(353),
        [anon_sym_BSLASHv] = ACTIONS(353),
        [anon_sym_DQUOTE] = ACTIONS(353),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(351),
        [sym_comment] = ACTIONS(69),
    },
    [86] = {
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_COMMA] = ACTIONS(355),
        [sym__real_type_suffix] = ACTIONS(357),
        [sym__exponent_part] = ACTIONS(359),
        [sym_comment] = ACTIONS(69),
    },
    [87] = {
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym_comment] = ACTIONS(69),
    },
    [88] = {
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym__real_type_suffix] = ACTIONS(363),
        [sym_comment] = ACTIONS(69),
    },
    [89] = {
        [anon_sym_SEMI] = ACTIONS(365),
        [anon_sym_COMMA] = ACTIONS(365),
        [sym_comment] = ACTIONS(69),
    },
    [90] = {
        [anon_sym_SEMI] = ACTIONS(367),
        [anon_sym_COMMA] = ACTIONS(367),
        [sym_comment] = ACTIONS(69),
    },
    [91] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(369),
        [sym_comment] = ACTIONS(69),
    },
    [92] = {
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_COMMA] = ACTIONS(355),
        [sym_comment] = ACTIONS(69),
    },
    [93] = {
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_COMMA] = ACTIONS(355),
        [sym__real_type_suffix] = ACTIONS(357),
        [sym_comment] = ACTIONS(69),
    },
    [94] = {
        [anon_sym_SEMI] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym__real_type_suffix] = ACTIONS(363),
        [sym__exponent_part] = ACTIONS(371),
        [sym_comment] = ACTIONS(69),
    },
    [95] = {
        [anon_sym_SEMI] = ACTIONS(365),
        [anon_sym_COMMA] = ACTIONS(365),
        [sym__real_type_suffix] = ACTIONS(373),
        [sym_comment] = ACTIONS(69),
    },
    [96] = {
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(69),
    },
    [97] = {
        [anon_sym_SQUOTE] = ACTIONS(377),
        [sym_comment] = ACTIONS(69),
    },
    [98] = {
        [anon_sym_SQUOTE] = ACTIONS(329),
        [sym_comment] = ACTIONS(69),
    },
    [99] = {
        [anon_sym_SQUOTE] = ACTIONS(335),
        [sym_comment] = ACTIONS(69),
    },
    [100] = {
        [anon_sym_SEMI] = ACTIONS(379),
        [anon_sym_COMMA] = ACTIONS(379),
        [sym_comment] = ACTIONS(69),
    },
    [101] = {
        [anon_sym_RBRACE] = ACTIONS(381),
        [anon_sym_class] = ACTIONS(383),
        [anon_sym_struct] = ACTIONS(383),
        [anon_sym_abstract] = ACTIONS(383),
        [anon_sym_sealed] = ACTIONS(383),
        [anon_sym_static] = ACTIONS(383),
        [anon_sym_new] = ACTIONS(383),
        [anon_sym_public] = ACTIONS(383),
        [anon_sym_protected] = ACTIONS(383),
        [anon_sym_internal] = ACTIONS(383),
        [anon_sym_private] = ACTIONS(383),
        [anon_sym_unsafe] = ACTIONS(383),
        [anon_sym_readonly] = ACTIONS(383),
        [anon_sym_volatile] = ACTIONS(383),
        [anon_sym_bool] = ACTIONS(383),
        [anon_sym_byte] = ACTIONS(383),
        [anon_sym_char] = ACTIONS(383),
        [anon_sym_decimal] = ACTIONS(383),
        [anon_sym_double] = ACTIONS(383),
        [anon_sym_float] = ACTIONS(383),
        [anon_sym_int] = ACTIONS(383),
        [anon_sym_long] = ACTIONS(383),
        [anon_sym_object] = ACTIONS(383),
        [anon_sym_sbyte] = ACTIONS(383),
        [anon_sym_short] = ACTIONS(383),
        [anon_sym_string] = ACTIONS(383),
        [anon_sym_uint] = ACTIONS(383),
        [anon_sym_ulong] = ACTIONS(383),
        [anon_sym_ushort] = ACTIONS(383),
        [sym_identifier_name] = ACTIONS(385),
        [sym_comment] = ACTIONS(69),
    },
    [102] = {
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_GT] = ACTIONS(387),
        [sym_identifier_name] = ACTIONS(389),
        [sym_comment] = ACTIONS(69),
    },
    [103] = {
        [anon_sym_COMMA] = ACTIONS(391),
        [anon_sym_GT] = ACTIONS(391),
        [sym_comment] = ACTIONS(69),
    },
    [104] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(107),
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_GT] = ACTIONS(395),
        [sym_comment] = ACTIONS(69),
    },
    [105] = {
        [sym__type] = STATE(103),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(111),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [106] = {
        [anon_sym_LBRACE] = ACTIONS(397),
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_GT] = ACTIONS(397),
        [sym_identifier_name] = ACTIONS(399),
        [sym_comment] = ACTIONS(69),
    },
    [107] = {
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_GT] = ACTIONS(403),
        [sym_comment] = ACTIONS(69),
    },
    [108] = {
        [sym__type] = STATE(103),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(110),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [109] = {
        [anon_sym_LBRACE] = ACTIONS(405),
        [anon_sym_COMMA] = ACTIONS(405),
        [anon_sym_GT] = ACTIONS(405),
        [sym_identifier_name] = ACTIONS(407),
        [sym_comment] = ACTIONS(69),
    },
    [110] = {
        [anon_sym_COMMA] = ACTIONS(409),
        [anon_sym_GT] = ACTIONS(409),
        [sym_comment] = ACTIONS(69),
    },
    [111] = {
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_GT] = ACTIONS(411),
        [sym_comment] = ACTIONS(69),
    },
    [112] = {
        [anon_sym_bool] = ACTIONS(413),
        [anon_sym_byte] = ACTIONS(413),
        [anon_sym_char] = ACTIONS(413),
        [anon_sym_decimal] = ACTIONS(413),
        [anon_sym_double] = ACTIONS(413),
        [anon_sym_float] = ACTIONS(413),
        [anon_sym_int] = ACTIONS(413),
        [anon_sym_long] = ACTIONS(413),
        [anon_sym_object] = ACTIONS(413),
        [anon_sym_sbyte] = ACTIONS(413),
        [anon_sym_short] = ACTIONS(413),
        [anon_sym_string] = ACTIONS(413),
        [anon_sym_uint] = ACTIONS(413),
        [anon_sym_ulong] = ACTIONS(413),
        [anon_sym_ushort] = ACTIONS(413),
        [sym_identifier_name] = ACTIONS(415),
        [sym_comment] = ACTIONS(69),
    },
    [113] = {
        [anon_sym_class] = ACTIONS(417),
        [sym_comment] = ACTIONS(69),
    },
    [114] = {
        [anon_sym_struct] = ACTIONS(419),
        [sym_comment] = ACTIONS(69),
    },
    [115] = {
        [sym_type_parameter_list] = STATE(117),
        [anon_sym_LBRACE] = ACTIONS(421),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [116] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(119),
        [anon_sym_RBRACE] = ACTIONS(423),
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
    [117] = {
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [118] = {
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_namespace] = ACTIONS(427),
        [anon_sym_RBRACE] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_struct] = ACTIONS(427),
        [anon_sym_abstract] = ACTIONS(427),
        [anon_sym_sealed] = ACTIONS(427),
        [anon_sym_static] = ACTIONS(427),
        [anon_sym_new] = ACTIONS(427),
        [anon_sym_public] = ACTIONS(427),
        [anon_sym_protected] = ACTIONS(427),
        [anon_sym_internal] = ACTIONS(427),
        [anon_sym_private] = ACTIONS(427),
        [anon_sym_unsafe] = ACTIONS(427),
        [anon_sym_readonly] = ACTIONS(427),
        [anon_sym_volatile] = ACTIONS(427),
        [anon_sym_bool] = ACTIONS(427),
        [anon_sym_byte] = ACTIONS(427),
        [anon_sym_char] = ACTIONS(427),
        [anon_sym_decimal] = ACTIONS(427),
        [anon_sym_double] = ACTIONS(427),
        [anon_sym_float] = ACTIONS(427),
        [anon_sym_int] = ACTIONS(427),
        [anon_sym_long] = ACTIONS(427),
        [anon_sym_object] = ACTIONS(427),
        [anon_sym_sbyte] = ACTIONS(427),
        [anon_sym_short] = ACTIONS(427),
        [anon_sym_string] = ACTIONS(427),
        [anon_sym_uint] = ACTIONS(427),
        [anon_sym_ulong] = ACTIONS(427),
        [anon_sym_ushort] = ACTIONS(427),
        [sym_identifier_name] = ACTIONS(429),
        [sym_comment] = ACTIONS(69),
    },
    [119] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(129),
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
    [120] = {
        [sym_type_parameter_list] = STATE(122),
        [anon_sym_LBRACE] = ACTIONS(431),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [121] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(124),
        [anon_sym_RBRACE] = ACTIONS(433),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [122] = {
        [anon_sym_LBRACE] = ACTIONS(165),
        [sym_comment] = ACTIONS(69),
    },
    [123] = {
        [ts_builtin_sym_end] = ACTIONS(435),
        [anon_sym_namespace] = ACTIONS(437),
        [anon_sym_RBRACE] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(437),
        [anon_sym_struct] = ACTIONS(437),
        [anon_sym_abstract] = ACTIONS(437),
        [anon_sym_sealed] = ACTIONS(437),
        [anon_sym_static] = ACTIONS(437),
        [anon_sym_new] = ACTIONS(437),
        [anon_sym_public] = ACTIONS(437),
        [anon_sym_protected] = ACTIONS(437),
        [anon_sym_internal] = ACTIONS(437),
        [anon_sym_private] = ACTIONS(437),
        [anon_sym_unsafe] = ACTIONS(437),
        [anon_sym_readonly] = ACTIONS(437),
        [anon_sym_volatile] = ACTIONS(437),
        [anon_sym_bool] = ACTIONS(437),
        [anon_sym_byte] = ACTIONS(437),
        [anon_sym_char] = ACTIONS(437),
        [anon_sym_decimal] = ACTIONS(437),
        [anon_sym_double] = ACTIONS(437),
        [anon_sym_float] = ACTIONS(437),
        [anon_sym_int] = ACTIONS(437),
        [anon_sym_long] = ACTIONS(437),
        [anon_sym_object] = ACTIONS(437),
        [anon_sym_sbyte] = ACTIONS(437),
        [anon_sym_short] = ACTIONS(437),
        [anon_sym_string] = ACTIONS(437),
        [anon_sym_uint] = ACTIONS(437),
        [anon_sym_ulong] = ACTIONS(437),
        [anon_sym_ushort] = ACTIONS(437),
        [sym_identifier_name] = ACTIONS(439),
        [sym_comment] = ACTIONS(69),
    },
    [124] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(167),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [125] = {
        [anon_sym_COLON_COLON] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
    },
    [126] = {
        [anon_sym_LBRACE] = ACTIONS(443),
        [anon_sym_DOT] = ACTIONS(445),
        [sym_comment] = ACTIONS(69),
    },
    [127] = {
        [anon_sym_DOT] = ACTIONS(445),
        [sym_comment] = ACTIONS(69),
    },
    [128] = {
        [sym_identifier_name] = ACTIONS(447),
        [sym_comment] = ACTIONS(69),
    },
    [129] = {
        [anon_sym_SEMI] = ACTIONS(449),
        [anon_sym_LBRACE] = ACTIONS(449),
        [anon_sym_DOT] = ACTIONS(449),
        [sym_comment] = ACTIONS(69),
    },
    [130] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(132),
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
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_namespace] = ACTIONS(75),
        [anon_sym_RBRACE] = ACTIONS(455),
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
    [133] = {
        [ts_builtin_sym_end] = ACTIONS(457),
        [anon_sym_namespace] = ACTIONS(457),
        [anon_sym_RBRACE] = ACTIONS(457),
        [anon_sym_class] = ACTIONS(457),
        [anon_sym_struct] = ACTIONS(457),
        [anon_sym_abstract] = ACTIONS(457),
        [anon_sym_sealed] = ACTIONS(457),
        [anon_sym_static] = ACTIONS(457),
        [anon_sym_new] = ACTIONS(457),
        [anon_sym_public] = ACTIONS(457),
        [anon_sym_protected] = ACTIONS(457),
        [anon_sym_internal] = ACTIONS(457),
        [anon_sym_private] = ACTIONS(457),
        [anon_sym_unsafe] = ACTIONS(457),
        [sym_comment] = ACTIONS(69),
    },
    [134] = {
        [sym_identifier_name] = ACTIONS(459),
        [sym_comment] = ACTIONS(69),
    },
    [135] = {
        [anon_sym_DOT] = ACTIONS(461),
        [sym_comment] = ACTIONS(69),
    },
    [136] = {
        [sym_global] = ACTIONS(463),
        [sym_identifier_name] = ACTIONS(465),
        [sym_comment] = ACTIONS(69),
    },
    [137] = {
        [anon_sym_SEMI] = ACTIONS(467),
        [anon_sym_EQ] = ACTIONS(469),
        [anon_sym_DOT] = ACTIONS(445),
        [sym_comment] = ACTIONS(69),
    },
    [138] = {
        [anon_sym_SEMI] = ACTIONS(467),
        [anon_sym_DOT] = ACTIONS(445),
        [sym_comment] = ACTIONS(69),
    },
    [139] = {
        [sym_qualified_name] = STATE(140),
        [sym_alias_qualified_name] = STATE(127),
        [sym_global] = ACTIONS(87),
        [sym_identifier_name] = ACTIONS(471),
        [sym_comment] = ACTIONS(69),
    },
    [140] = {
        [anon_sym_SEMI] = ACTIONS(473),
        [anon_sym_DOT] = ACTIONS(445),
        [sym_comment] = ACTIONS(69),
    },
    [141] = {
        [ts_builtin_sym_end] = ACTIONS(475),
        [anon_sym_using] = ACTIONS(475),
        [anon_sym_namespace] = ACTIONS(475),
        [anon_sym_class] = ACTIONS(475),
        [anon_sym_struct] = ACTIONS(475),
        [anon_sym_abstract] = ACTIONS(475),
        [anon_sym_sealed] = ACTIONS(475),
        [anon_sym_static] = ACTIONS(475),
        [anon_sym_new] = ACTIONS(475),
        [anon_sym_public] = ACTIONS(475),
        [anon_sym_protected] = ACTIONS(475),
        [anon_sym_internal] = ACTIONS(475),
        [anon_sym_private] = ACTIONS(475),
        [anon_sym_unsafe] = ACTIONS(475),
        [sym_comment] = ACTIONS(69),
    },
    [142] = {
        [ts_builtin_sym_end] = ACTIONS(477),
        [anon_sym_using] = ACTIONS(477),
        [anon_sym_namespace] = ACTIONS(477),
        [anon_sym_class] = ACTIONS(477),
        [anon_sym_struct] = ACTIONS(477),
        [anon_sym_abstract] = ACTIONS(477),
        [anon_sym_sealed] = ACTIONS(477),
        [anon_sym_static] = ACTIONS(477),
        [anon_sym_new] = ACTIONS(477),
        [anon_sym_public] = ACTIONS(477),
        [anon_sym_protected] = ACTIONS(477),
        [anon_sym_internal] = ACTIONS(477),
        [anon_sym_private] = ACTIONS(477),
        [anon_sym_unsafe] = ACTIONS(477),
        [sym_comment] = ACTIONS(69),
    },
    [143] = {
        [sym_global] = ACTIONS(479),
        [sym_identifier_name] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
    },
    [144] = {
        [ts_builtin_sym_end] = ACTIONS(483),
        [anon_sym_using] = ACTIONS(486),
        [anon_sym_namespace] = ACTIONS(486),
        [anon_sym_RBRACE] = ACTIONS(489),
        [anon_sym_class] = ACTIONS(492),
        [anon_sym_struct] = ACTIONS(492),
        [anon_sym_abstract] = ACTIONS(492),
        [anon_sym_sealed] = ACTIONS(492),
        [anon_sym_static] = ACTIONS(492),
        [anon_sym_new] = ACTIONS(492),
        [anon_sym_public] = ACTIONS(492),
        [anon_sym_protected] = ACTIONS(492),
        [anon_sym_internal] = ACTIONS(492),
        [anon_sym_private] = ACTIONS(492),
        [anon_sym_unsafe] = ACTIONS(492),
        [anon_sym_readonly] = ACTIONS(497),
        [anon_sym_volatile] = ACTIONS(497),
        [anon_sym_bool] = ACTIONS(497),
        [anon_sym_byte] = ACTIONS(497),
        [anon_sym_char] = ACTIONS(497),
        [anon_sym_decimal] = ACTIONS(497),
        [anon_sym_double] = ACTIONS(497),
        [anon_sym_float] = ACTIONS(497),
        [anon_sym_int] = ACTIONS(497),
        [anon_sym_long] = ACTIONS(497),
        [anon_sym_object] = ACTIONS(497),
        [anon_sym_sbyte] = ACTIONS(497),
        [anon_sym_short] = ACTIONS(497),
        [anon_sym_string] = ACTIONS(497),
        [anon_sym_uint] = ACTIONS(497),
        [anon_sym_ulong] = ACTIONS(497),
        [anon_sym_ushort] = ACTIONS(497),
        [sym_identifier_name] = ACTIONS(500),
        [sym_comment] = ACTIONS(69),
    },
    [145] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(191),
        [sym_struct_declaration] = STATE(191),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_compilation_unit_repeat2] = STATE(132),
        [aux_sym_class_declaration_repeat1] = STATE(176),
        [aux_sym_struct_declaration_repeat1] = STATE(177),
        [anon_sym_namespace] = ACTIONS(503),
        [anon_sym_RBRACE] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [146] = {
        [ts_builtin_sym_end] = ACTIONS(507),
        [anon_sym_namespace] = ACTIONS(518),
        [anon_sym_RBRACE] = ACTIONS(507),
        [anon_sym_class] = ACTIONS(518),
        [anon_sym_struct] = ACTIONS(518),
        [anon_sym_abstract] = ACTIONS(518),
        [anon_sym_sealed] = ACTIONS(518),
        [anon_sym_static] = ACTIONS(518),
        [anon_sym_new] = ACTIONS(518),
        [anon_sym_public] = ACTIONS(518),
        [anon_sym_protected] = ACTIONS(518),
        [anon_sym_internal] = ACTIONS(518),
        [anon_sym_private] = ACTIONS(518),
        [anon_sym_unsafe] = ACTIONS(518),
        [anon_sym_readonly] = ACTIONS(529),
        [anon_sym_volatile] = ACTIONS(529),
        [anon_sym_bool] = ACTIONS(529),
        [anon_sym_byte] = ACTIONS(529),
        [anon_sym_char] = ACTIONS(529),
        [anon_sym_decimal] = ACTIONS(529),
        [anon_sym_double] = ACTIONS(529),
        [anon_sym_float] = ACTIONS(529),
        [anon_sym_int] = ACTIONS(529),
        [anon_sym_long] = ACTIONS(529),
        [anon_sym_object] = ACTIONS(529),
        [anon_sym_sbyte] = ACTIONS(529),
        [anon_sym_short] = ACTIONS(529),
        [anon_sym_string] = ACTIONS(529),
        [anon_sym_uint] = ACTIONS(529),
        [anon_sym_ulong] = ACTIONS(529),
        [anon_sym_ushort] = ACTIONS(529),
        [sym_identifier_name] = ACTIONS(538),
        [sym_comment] = ACTIONS(69),
    },
    [147] = {
        [sym_identifier_name] = ACTIONS(547),
        [sym_comment] = ACTIONS(69),
    },
    [148] = {
        [sym_identifier_name] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
    },
    [149] = {
        [sym__type] = STATE(103),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(203),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(204),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(551),
        [sym_comment] = ACTIONS(69),
    },
    [150] = {
        [sym__literal] = STATE(74),
        [sym_boolean_literal] = STATE(70),
        [sym_character_literal] = STATE(70),
        [sym_integer_literal] = STATE(70),
        [sym_real_literal] = STATE(70),
        [sym_string_literal] = STATE(70),
        [sym__regular_string_literal] = STATE(75),
        [sym__verbatim_string_literal] = STATE(75),
        [anon_sym_true] = ACTIONS(553),
        [anon_sym_false] = ACTIONS(553),
        [anon_sym_SQUOTE] = ACTIONS(267),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(269),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(271),
        [sym_null_literal] = ACTIONS(555),
        [anon_sym_DOT] = ACTIONS(275),
        [anon_sym_DQUOTE] = ACTIONS(277),
        [anon_sym_AT_DQUOTE] = ACTIONS(279),
        [sym_global] = ACTIONS(479),
        [sym_identifier_name] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
    },
    [151] = {
        [sym__unicode_escape_sequence] = STATE(97),
        [sym__simple_escape_sequence] = STATE(97),
        [anon_sym_SEMI] = ACTIONS(379),
        [anon_sym_COMMA] = ACTIONS(379),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(557),
        [sym__hexadecimal_escape_sequence] = ACTIONS(285),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(287),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(287),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(289),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(289),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(289),
        [anon_sym_BSLASH0] = ACTIONS(289),
        [anon_sym_BSLASHa] = ACTIONS(289),
        [anon_sym_BSLASHb] = ACTIONS(289),
        [anon_sym_BSLASHf] = ACTIONS(289),
        [anon_sym_BSLASHn] = ACTIONS(289),
        [anon_sym_BSLASHr] = ACTIONS(289),
        [anon_sym_BSLASHt] = ACTIONS(289),
        [anon_sym_BSLASHv] = ACTIONS(289),
        [sym_comment] = ACTIONS(69),
    },
    [152] = {
        [anon_sym_SQUOTE] = ACTIONS(377),
        [sym__hexadecimal_escape_sequence] = ACTIONS(325),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(327),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(327),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(327),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(327),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(327),
        [anon_sym_BSLASH0] = ACTIONS(327),
        [anon_sym_BSLASHa] = ACTIONS(327),
        [anon_sym_BSLASHb] = ACTIONS(327),
        [anon_sym_BSLASHf] = ACTIONS(327),
        [anon_sym_BSLASHn] = ACTIONS(327),
        [anon_sym_BSLASHr] = ACTIONS(327),
        [anon_sym_BSLASHt] = ACTIONS(327),
        [anon_sym_BSLASHv] = ACTIONS(327),
        [anon_sym_DQUOTE] = ACTIONS(327),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(559),
        [sym_comment] = ACTIONS(69),
    },
    [153] = {
        [anon_sym_SEMI] = ACTIONS(561),
        [anon_sym_COMMA] = ACTIONS(561),
        [sym__integer_type_suffix] = ACTIONS(293),
        [anon_sym_DOT] = ACTIONS(295),
        [sym__real_type_suffix] = ACTIONS(565),
        [sym__exponent_part] = ACTIONS(567),
        [sym_comment] = ACTIONS(69),
    },
    [154] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(569),
        [sym_identifier_name] = ACTIONS(447),
        [sym_comment] = ACTIONS(69),
    },
    [155] = {
        [anon_sym_SEMI] = ACTIONS(571),
        [anon_sym_COMMA] = ACTIONS(571),
        [sym_comment] = ACTIONS(69),
    },
    [156] = {
        [anon_sym_SEMI] = ACTIONS(576),
        [anon_sym_COMMA] = ACTIONS(576),
        [sym__real_type_suffix] = ACTIONS(580),
        [sym_comment] = ACTIONS(69),
    },
    [157] = {
        [sym__unicode_escape_sequence] = STATE(78),
        [sym__simple_escape_sequence] = STATE(78),
        [sym__regular_string_literal_character] = STATE(82),
        [aux_sym__regular_string_literal_repeat1] = STATE(83),
        [anon_sym_SEMI] = ACTIONS(582),
        [anon_sym_COMMA] = ACTIONS(582),
        [sym__hexadecimal_escape_sequence] = ACTIONS(305),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(307),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(307),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(309),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(309),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(309),
        [anon_sym_BSLASH0] = ACTIONS(309),
        [anon_sym_BSLASHa] = ACTIONS(309),
        [anon_sym_BSLASHb] = ACTIONS(309),
        [anon_sym_BSLASHf] = ACTIONS(309),
        [anon_sym_BSLASHn] = ACTIONS(309),
        [anon_sym_BSLASHr] = ACTIONS(309),
        [anon_sym_BSLASHt] = ACTIONS(309),
        [anon_sym_BSLASHv] = ACTIONS(309),
        [anon_sym_DQUOTE] = ACTIONS(311),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(586),
        [sym_comment] = ACTIONS(69),
    },
    [158] = {
        [sym__class_modifiers] = STATE(113),
        [sym__field_modifiers] = STATE(112),
        [anon_sym_class] = ACTIONS(191),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(175),
        [anon_sym_public] = ACTIONS(175),
        [anon_sym_protected] = ACTIONS(175),
        [anon_sym_internal] = ACTIONS(175),
        [anon_sym_private] = ACTIONS(175),
        [anon_sym_unsafe] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(193),
        [anon_sym_byte] = ACTIONS(193),
        [anon_sym_char] = ACTIONS(193),
        [anon_sym_decimal] = ACTIONS(193),
        [anon_sym_double] = ACTIONS(193),
        [anon_sym_float] = ACTIONS(193),
        [anon_sym_int] = ACTIONS(193),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_object] = ACTIONS(193),
        [anon_sym_sbyte] = ACTIONS(193),
        [anon_sym_short] = ACTIONS(193),
        [anon_sym_string] = ACTIONS(193),
        [anon_sym_uint] = ACTIONS(193),
        [anon_sym_ulong] = ACTIONS(193),
        [anon_sym_ushort] = ACTIONS(193),
        [sym_global] = ACTIONS(463),
        [sym_identifier_name] = ACTIONS(588),
        [sym_comment] = ACTIONS(69),
    },
    [159] = {
        [anon_sym_LBRACE] = ACTIONS(591),
        [anon_sym_COMMA] = ACTIONS(591),
        [anon_sym_GT] = ACTIONS(591),
        [sym_identifier_name] = ACTIONS(594),
        [sym_comment] = ACTIONS(69),
    },
    [160] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(172),
        [anon_sym_SEMI] = ACTIONS(597),
        [anon_sym_LBRACE] = ACTIONS(601),
        [anon_sym_COMMA] = ACTIONS(604),
        [anon_sym_EQ] = ACTIONS(607),
        [anon_sym_DOT] = ACTIONS(609),
        [anon_sym_LT] = ACTIONS(127),
        [anon_sym_GT] = ACTIONS(203),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [161] = {
        [ts_builtin_sym_end] = ACTIONS(613),
        [anon_sym_using] = ACTIONS(613),
        [anon_sym_namespace] = ACTIONS(613),
        [anon_sym_class] = ACTIONS(613),
        [anon_sym_struct] = ACTIONS(613),
        [anon_sym_abstract] = ACTIONS(613),
        [anon_sym_sealed] = ACTIONS(613),
        [anon_sym_static] = ACTIONS(613),
        [anon_sym_new] = ACTIONS(613),
        [anon_sym_public] = ACTIONS(613),
        [anon_sym_protected] = ACTIONS(613),
        [anon_sym_internal] = ACTIONS(613),
        [anon_sym_private] = ACTIONS(613),
        [anon_sym_unsafe] = ACTIONS(613),
        [sym_comment] = ACTIONS(69),
    },
    [162] = {
        [ts_builtin_sym_end] = ACTIONS(616),
        [anon_sym_namespace] = ACTIONS(616),
        [anon_sym_RBRACE] = ACTIONS(616),
        [anon_sym_class] = ACTIONS(616),
        [anon_sym_struct] = ACTIONS(616),
        [anon_sym_abstract] = ACTIONS(616),
        [anon_sym_sealed] = ACTIONS(616),
        [anon_sym_static] = ACTIONS(616),
        [anon_sym_new] = ACTIONS(616),
        [anon_sym_public] = ACTIONS(616),
        [anon_sym_protected] = ACTIONS(616),
        [anon_sym_internal] = ACTIONS(616),
        [anon_sym_private] = ACTIONS(616),
        [anon_sym_unsafe] = ACTIONS(616),
        [sym_comment] = ACTIONS(69),
    },
    [163] = {
        [ts_builtin_sym_end] = ACTIONS(616),
        [anon_sym_namespace] = ACTIONS(619),
        [anon_sym_RBRACE] = ACTIONS(622),
        [anon_sym_class] = ACTIONS(629),
        [anon_sym_struct] = ACTIONS(629),
        [anon_sym_abstract] = ACTIONS(629),
        [anon_sym_sealed] = ACTIONS(629),
        [anon_sym_static] = ACTIONS(629),
        [anon_sym_new] = ACTIONS(629),
        [anon_sym_public] = ACTIONS(629),
        [anon_sym_protected] = ACTIONS(629),
        [anon_sym_internal] = ACTIONS(629),
        [anon_sym_private] = ACTIONS(629),
        [anon_sym_unsafe] = ACTIONS(629),
        [anon_sym_readonly] = ACTIONS(636),
        [anon_sym_volatile] = ACTIONS(636),
        [anon_sym_bool] = ACTIONS(636),
        [anon_sym_byte] = ACTIONS(636),
        [anon_sym_char] = ACTIONS(636),
        [anon_sym_decimal] = ACTIONS(636),
        [anon_sym_double] = ACTIONS(636),
        [anon_sym_float] = ACTIONS(636),
        [anon_sym_int] = ACTIONS(636),
        [anon_sym_long] = ACTIONS(636),
        [anon_sym_object] = ACTIONS(636),
        [anon_sym_sbyte] = ACTIONS(636),
        [anon_sym_short] = ACTIONS(636),
        [anon_sym_string] = ACTIONS(636),
        [anon_sym_uint] = ACTIONS(636),
        [anon_sym_ulong] = ACTIONS(636),
        [anon_sym_ushort] = ACTIONS(636),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(69),
    },
    [164] = {
        [anon_sym_RBRACE] = ACTIONS(642),
        [anon_sym_class] = ACTIONS(636),
        [anon_sym_struct] = ACTIONS(636),
        [anon_sym_abstract] = ACTIONS(636),
        [anon_sym_sealed] = ACTIONS(636),
        [anon_sym_static] = ACTIONS(636),
        [anon_sym_new] = ACTIONS(636),
        [anon_sym_public] = ACTIONS(636),
        [anon_sym_protected] = ACTIONS(636),
        [anon_sym_internal] = ACTIONS(636),
        [anon_sym_private] = ACTIONS(636),
        [anon_sym_unsafe] = ACTIONS(636),
        [anon_sym_readonly] = ACTIONS(636),
        [anon_sym_volatile] = ACTIONS(636),
        [anon_sym_bool] = ACTIONS(636),
        [anon_sym_byte] = ACTIONS(636),
        [anon_sym_char] = ACTIONS(636),
        [anon_sym_decimal] = ACTIONS(636),
        [anon_sym_double] = ACTIONS(636),
        [anon_sym_float] = ACTIONS(636),
        [anon_sym_int] = ACTIONS(636),
        [anon_sym_long] = ACTIONS(636),
        [anon_sym_object] = ACTIONS(636),
        [anon_sym_sbyte] = ACTIONS(636),
        [anon_sym_short] = ACTIONS(636),
        [anon_sym_string] = ACTIONS(636),
        [anon_sym_uint] = ACTIONS(636),
        [anon_sym_ulong] = ACTIONS(636),
        [anon_sym_ushort] = ACTIONS(636),
        [sym_identifier_name] = ACTIONS(639),
        [sym_comment] = ACTIONS(69),
    },
    [165] = {
        [anon_sym_SEMI] = ACTIONS(645),
        [sym_comment] = ACTIONS(69),
    },
    [166] = {
        [sym_variable_declarator] = STATE(58),
        [anon_sym_COMMA] = ACTIONS(391),
        [anon_sym_GT] = ACTIONS(391),
        [sym_identifier_name] = ACTIONS(215),
        [sym_comment] = ACTIONS(69),
    },
    [167] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(647),
        [anon_sym_COMMA] = ACTIONS(651),
        [sym_comment] = ACTIONS(69),
    },
    [168] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(655),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(658),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(658),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(658),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(658),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(658),
        [anon_sym_BSLASH0] = ACTIONS(658),
        [anon_sym_BSLASHa] = ACTIONS(658),
        [anon_sym_BSLASHb] = ACTIONS(658),
        [anon_sym_BSLASHf] = ACTIONS(658),
        [anon_sym_BSLASHn] = ACTIONS(658),
        [anon_sym_BSLASHr] = ACTIONS(658),
        [anon_sym_BSLASHt] = ACTIONS(658),
        [anon_sym_BSLASHv] = ACTIONS(658),
        [anon_sym_DQUOTE] = ACTIONS(658),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(655),
        [sym_comment] = ACTIONS(69),
    },
    [169] = {
        [anon_sym_class] = ACTIONS(661),
        [sym_comment] = ACTIONS(69),
    },
    [170] = {
        [anon_sym_struct] = ACTIONS(664),
        [sym_comment] = ACTIONS(69),
    },
    [171] = {
        [anon_sym_bool] = ACTIONS(667),
        [anon_sym_byte] = ACTIONS(667),
        [anon_sym_char] = ACTIONS(667),
        [anon_sym_decimal] = ACTIONS(667),
        [anon_sym_double] = ACTIONS(667),
        [anon_sym_float] = ACTIONS(667),
        [anon_sym_int] = ACTIONS(667),
        [anon_sym_long] = ACTIONS(667),
        [anon_sym_object] = ACTIONS(667),
        [anon_sym_sbyte] = ACTIONS(667),
        [anon_sym_short] = ACTIONS(667),
        [anon_sym_string] = ACTIONS(667),
        [anon_sym_uint] = ACTIONS(667),
        [anon_sym_ulong] = ACTIONS(667),
        [anon_sym_ushort] = ACTIONS(667),
        [sym_identifier_name] = ACTIONS(670),
        [sym_comment] = ACTIONS(69),
    },
    [172] = {
        [anon_sym_LBRACE] = ACTIONS(673),
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_GT] = ACTIONS(387),
        [sym_identifier_name] = ACTIONS(389),
        [sym_comment] = ACTIONS(69),
    },
    [173] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(107),
        [anon_sym_COMMA] = ACTIONS(675),
        [anon_sym_GT] = ACTIONS(679),
        [sym_comment] = ACTIONS(69),
    },
    [174] = {
        [anon_sym_SEMI] = ACTIONS(683),
        [anon_sym_LBRACE] = ACTIONS(443),
        [anon_sym_DOT] = ACTIONS(445),
        [sym_comment] = ACTIONS(69),
    },
    [175] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(685),
        [anon_sym_namespace] = ACTIONS(75),
        [anon_sym_RBRACE] = ACTIONS(455),
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
    [176] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(688),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [177] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(690),
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
    [178] = {
        [ts_builtin_sym_end] = ACTIONS(692),
        [anon_sym_namespace] = ACTIONS(696),
        [anon_sym_RBRACE] = ACTIONS(692),
        [anon_sym_class] = ACTIONS(696),
        [anon_sym_struct] = ACTIONS(696),
        [anon_sym_abstract] = ACTIONS(696),
        [anon_sym_sealed] = ACTIONS(696),
        [anon_sym_static] = ACTIONS(696),
        [anon_sym_new] = ACTIONS(696),
        [anon_sym_public] = ACTIONS(696),
        [anon_sym_protected] = ACTIONS(696),
        [anon_sym_internal] = ACTIONS(696),
        [anon_sym_private] = ACTIONS(696),
        [anon_sym_unsafe] = ACTIONS(696),
        [anon_sym_readonly] = ACTIONS(696),
        [anon_sym_volatile] = ACTIONS(696),
        [anon_sym_bool] = ACTIONS(696),
        [anon_sym_byte] = ACTIONS(696),
        [anon_sym_char] = ACTIONS(696),
        [anon_sym_decimal] = ACTIONS(696),
        [anon_sym_double] = ACTIONS(696),
        [anon_sym_float] = ACTIONS(696),
        [anon_sym_int] = ACTIONS(696),
        [anon_sym_long] = ACTIONS(696),
        [anon_sym_object] = ACTIONS(696),
        [anon_sym_sbyte] = ACTIONS(696),
        [anon_sym_short] = ACTIONS(696),
        [anon_sym_string] = ACTIONS(696),
        [anon_sym_uint] = ACTIONS(696),
        [anon_sym_ulong] = ACTIONS(696),
        [anon_sym_ushort] = ACTIONS(696),
        [sym_identifier_name] = ACTIONS(700),
        [sym_comment] = ACTIONS(69),
    },
    [179] = {
        [ts_builtin_sym_end] = ACTIONS(704),
        [anon_sym_namespace] = ACTIONS(708),
        [anon_sym_RBRACE] = ACTIONS(704),
        [anon_sym_class] = ACTIONS(708),
        [anon_sym_struct] = ACTIONS(708),
        [anon_sym_abstract] = ACTIONS(708),
        [anon_sym_sealed] = ACTIONS(708),
        [anon_sym_static] = ACTIONS(708),
        [anon_sym_new] = ACTIONS(708),
        [anon_sym_public] = ACTIONS(708),
        [anon_sym_protected] = ACTIONS(708),
        [anon_sym_internal] = ACTIONS(708),
        [anon_sym_private] = ACTIONS(708),
        [anon_sym_unsafe] = ACTIONS(708),
        [anon_sym_readonly] = ACTIONS(708),
        [anon_sym_volatile] = ACTIONS(708),
        [anon_sym_bool] = ACTIONS(708),
        [anon_sym_byte] = ACTIONS(708),
        [anon_sym_char] = ACTIONS(708),
        [anon_sym_decimal] = ACTIONS(708),
        [anon_sym_double] = ACTIONS(708),
        [anon_sym_float] = ACTIONS(708),
        [anon_sym_int] = ACTIONS(708),
        [anon_sym_long] = ACTIONS(708),
        [anon_sym_object] = ACTIONS(708),
        [anon_sym_sbyte] = ACTIONS(708),
        [anon_sym_short] = ACTIONS(708),
        [anon_sym_string] = ACTIONS(708),
        [anon_sym_uint] = ACTIONS(708),
        [anon_sym_ulong] = ACTIONS(708),
        [anon_sym_ushort] = ACTIONS(708),
        [sym_identifier_name] = ACTIONS(712),
        [sym_comment] = ACTIONS(69),
    },
    [180] = {
        [ts_builtin_sym_end] = ACTIONS(483),
        [anon_sym_using] = ACTIONS(483),
        [anon_sym_namespace] = ACTIONS(483),
        [anon_sym_class] = ACTIONS(483),
        [anon_sym_struct] = ACTIONS(483),
        [anon_sym_abstract] = ACTIONS(483),
        [anon_sym_sealed] = ACTIONS(483),
        [anon_sym_static] = ACTIONS(483),
        [anon_sym_new] = ACTIONS(483),
        [anon_sym_public] = ACTIONS(483),
        [anon_sym_protected] = ACTIONS(483),
        [anon_sym_internal] = ACTIONS(483),
        [anon_sym_private] = ACTIONS(483),
        [anon_sym_unsafe] = ACTIONS(483),
        [sym_comment] = ACTIONS(69),
    },
    [181] = {
        [sym_class_declaration] = STATE(183),
        [sym_struct_declaration] = STATE(183),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(184),
        [aux_sym_struct_declaration_repeat1] = STATE(185),
        [anon_sym_RBRACE] = ACTIONS(716),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [182] = {
        [ts_builtin_sym_end] = ACTIONS(718),
        [anon_sym_namespace] = ACTIONS(723),
        [anon_sym_RBRACE] = ACTIONS(718),
        [anon_sym_class] = ACTIONS(723),
        [anon_sym_struct] = ACTIONS(723),
        [anon_sym_abstract] = ACTIONS(723),
        [anon_sym_sealed] = ACTIONS(723),
        [anon_sym_static] = ACTIONS(723),
        [anon_sym_new] = ACTIONS(723),
        [anon_sym_public] = ACTIONS(723),
        [anon_sym_protected] = ACTIONS(723),
        [anon_sym_internal] = ACTIONS(723),
        [anon_sym_private] = ACTIONS(723),
        [anon_sym_unsafe] = ACTIONS(723),
        [anon_sym_readonly] = ACTIONS(723),
        [anon_sym_volatile] = ACTIONS(723),
        [anon_sym_bool] = ACTIONS(723),
        [anon_sym_byte] = ACTIONS(723),
        [anon_sym_char] = ACTIONS(723),
        [anon_sym_decimal] = ACTIONS(723),
        [anon_sym_double] = ACTIONS(723),
        [anon_sym_float] = ACTIONS(723),
        [anon_sym_int] = ACTIONS(723),
        [anon_sym_long] = ACTIONS(723),
        [anon_sym_object] = ACTIONS(723),
        [anon_sym_sbyte] = ACTIONS(723),
        [anon_sym_short] = ACTIONS(723),
        [anon_sym_string] = ACTIONS(723),
        [anon_sym_uint] = ACTIONS(723),
        [anon_sym_ulong] = ACTIONS(723),
        [anon_sym_ushort] = ACTIONS(723),
        [sym_identifier_name] = ACTIONS(728),
        [sym_comment] = ACTIONS(69),
    },
    [183] = {
        [anon_sym_RBRACE] = ACTIONS(733),
        [anon_sym_class] = ACTIONS(736),
        [anon_sym_struct] = ACTIONS(736),
        [anon_sym_abstract] = ACTIONS(736),
        [anon_sym_sealed] = ACTIONS(736),
        [anon_sym_static] = ACTIONS(736),
        [anon_sym_new] = ACTIONS(736),
        [anon_sym_public] = ACTIONS(736),
        [anon_sym_protected] = ACTIONS(736),
        [anon_sym_internal] = ACTIONS(736),
        [anon_sym_private] = ACTIONS(736),
        [anon_sym_unsafe] = ACTIONS(736),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(209),
        [anon_sym_byte] = ACTIONS(209),
        [anon_sym_char] = ACTIONS(209),
        [anon_sym_decimal] = ACTIONS(209),
        [anon_sym_double] = ACTIONS(209),
        [anon_sym_float] = ACTIONS(209),
        [anon_sym_int] = ACTIONS(209),
        [anon_sym_long] = ACTIONS(209),
        [anon_sym_object] = ACTIONS(209),
        [anon_sym_sbyte] = ACTIONS(209),
        [anon_sym_short] = ACTIONS(209),
        [anon_sym_string] = ACTIONS(209),
        [anon_sym_uint] = ACTIONS(209),
        [anon_sym_ulong] = ACTIONS(209),
        [anon_sym_ushort] = ACTIONS(209),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(69),
    },
    [184] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [185] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(741),
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
    [186] = {
        [ts_builtin_sym_end] = ACTIONS(743),
        [anon_sym_namespace] = ACTIONS(746),
        [anon_sym_RBRACE] = ACTIONS(743),
        [anon_sym_class] = ACTIONS(746),
        [anon_sym_struct] = ACTIONS(746),
        [anon_sym_abstract] = ACTIONS(746),
        [anon_sym_sealed] = ACTIONS(746),
        [anon_sym_static] = ACTIONS(746),
        [anon_sym_new] = ACTIONS(746),
        [anon_sym_public] = ACTIONS(746),
        [anon_sym_protected] = ACTIONS(746),
        [anon_sym_internal] = ACTIONS(746),
        [anon_sym_private] = ACTIONS(746),
        [anon_sym_unsafe] = ACTIONS(746),
        [anon_sym_readonly] = ACTIONS(746),
        [anon_sym_volatile] = ACTIONS(746),
        [anon_sym_bool] = ACTIONS(746),
        [anon_sym_byte] = ACTIONS(746),
        [anon_sym_char] = ACTIONS(746),
        [anon_sym_decimal] = ACTIONS(746),
        [anon_sym_double] = ACTIONS(746),
        [anon_sym_float] = ACTIONS(746),
        [anon_sym_int] = ACTIONS(746),
        [anon_sym_long] = ACTIONS(746),
        [anon_sym_object] = ACTIONS(746),
        [anon_sym_sbyte] = ACTIONS(746),
        [anon_sym_short] = ACTIONS(746),
        [anon_sym_string] = ACTIONS(746),
        [anon_sym_uint] = ACTIONS(746),
        [anon_sym_ulong] = ACTIONS(746),
        [anon_sym_ushort] = ACTIONS(746),
        [sym_identifier_name] = ACTIONS(749),
        [sym_comment] = ACTIONS(69),
    },
    [187] = {
        [ts_builtin_sym_end] = ACTIONS(752),
        [anon_sym_namespace] = ACTIONS(755),
        [anon_sym_RBRACE] = ACTIONS(752),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_struct] = ACTIONS(755),
        [anon_sym_abstract] = ACTIONS(755),
        [anon_sym_sealed] = ACTIONS(755),
        [anon_sym_static] = ACTIONS(755),
        [anon_sym_new] = ACTIONS(755),
        [anon_sym_public] = ACTIONS(755),
        [anon_sym_protected] = ACTIONS(755),
        [anon_sym_internal] = ACTIONS(755),
        [anon_sym_private] = ACTIONS(755),
        [anon_sym_unsafe] = ACTIONS(755),
        [anon_sym_readonly] = ACTIONS(755),
        [anon_sym_volatile] = ACTIONS(755),
        [anon_sym_bool] = ACTIONS(755),
        [anon_sym_byte] = ACTIONS(755),
        [anon_sym_char] = ACTIONS(755),
        [anon_sym_decimal] = ACTIONS(755),
        [anon_sym_double] = ACTIONS(755),
        [anon_sym_float] = ACTIONS(755),
        [anon_sym_int] = ACTIONS(755),
        [anon_sym_long] = ACTIONS(755),
        [anon_sym_object] = ACTIONS(755),
        [anon_sym_sbyte] = ACTIONS(755),
        [anon_sym_short] = ACTIONS(755),
        [anon_sym_string] = ACTIONS(755),
        [anon_sym_uint] = ACTIONS(755),
        [anon_sym_ulong] = ACTIONS(755),
        [anon_sym_ushort] = ACTIONS(755),
        [sym_identifier_name] = ACTIONS(758),
        [sym_comment] = ACTIONS(69),
    },
    [188] = {
        [anon_sym_RBRACE] = ACTIONS(489),
        [anon_sym_class] = ACTIONS(497),
        [anon_sym_struct] = ACTIONS(497),
        [anon_sym_abstract] = ACTIONS(497),
        [anon_sym_sealed] = ACTIONS(497),
        [anon_sym_static] = ACTIONS(497),
        [anon_sym_new] = ACTIONS(497),
        [anon_sym_public] = ACTIONS(497),
        [anon_sym_protected] = ACTIONS(497),
        [anon_sym_internal] = ACTIONS(497),
        [anon_sym_private] = ACTIONS(497),
        [anon_sym_unsafe] = ACTIONS(497),
        [anon_sym_readonly] = ACTIONS(497),
        [anon_sym_volatile] = ACTIONS(497),
        [anon_sym_bool] = ACTIONS(497),
        [anon_sym_byte] = ACTIONS(497),
        [anon_sym_char] = ACTIONS(497),
        [anon_sym_decimal] = ACTIONS(497),
        [anon_sym_double] = ACTIONS(497),
        [anon_sym_float] = ACTIONS(497),
        [anon_sym_int] = ACTIONS(497),
        [anon_sym_long] = ACTIONS(497),
        [anon_sym_object] = ACTIONS(497),
        [anon_sym_sbyte] = ACTIONS(497),
        [anon_sym_short] = ACTIONS(497),
        [anon_sym_string] = ACTIONS(497),
        [anon_sym_uint] = ACTIONS(497),
        [anon_sym_ulong] = ACTIONS(497),
        [anon_sym_ushort] = ACTIONS(497),
        [sym_identifier_name] = ACTIONS(500),
        [sym_comment] = ACTIONS(69),
    },
    [189] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(191),
        [sym_struct_declaration] = STATE(191),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_compilation_unit_repeat2] = STATE(132),
        [aux_sym_class_declaration_repeat1] = STATE(192),
        [aux_sym_struct_declaration_repeat1] = STATE(193),
        [anon_sym_namespace] = ACTIONS(503),
        [anon_sym_RBRACE] = ACTIONS(761),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [190] = {
        [ts_builtin_sym_end] = ACTIONS(763),
        [anon_sym_namespace] = ACTIONS(769),
        [anon_sym_RBRACE] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(769),
        [anon_sym_struct] = ACTIONS(769),
        [anon_sym_abstract] = ACTIONS(769),
        [anon_sym_sealed] = ACTIONS(769),
        [anon_sym_static] = ACTIONS(769),
        [anon_sym_new] = ACTIONS(769),
        [anon_sym_public] = ACTIONS(769),
        [anon_sym_protected] = ACTIONS(769),
        [anon_sym_internal] = ACTIONS(769),
        [anon_sym_private] = ACTIONS(769),
        [anon_sym_unsafe] = ACTIONS(769),
        [anon_sym_readonly] = ACTIONS(775),
        [anon_sym_volatile] = ACTIONS(775),
        [anon_sym_bool] = ACTIONS(775),
        [anon_sym_byte] = ACTIONS(775),
        [anon_sym_char] = ACTIONS(775),
        [anon_sym_decimal] = ACTIONS(775),
        [anon_sym_double] = ACTIONS(775),
        [anon_sym_float] = ACTIONS(775),
        [anon_sym_int] = ACTIONS(775),
        [anon_sym_long] = ACTIONS(775),
        [anon_sym_object] = ACTIONS(775),
        [anon_sym_sbyte] = ACTIONS(775),
        [anon_sym_short] = ACTIONS(775),
        [anon_sym_string] = ACTIONS(775),
        [anon_sym_uint] = ACTIONS(775),
        [anon_sym_ulong] = ACTIONS(775),
        [anon_sym_ushort] = ACTIONS(775),
        [sym_identifier_name] = ACTIONS(780),
        [sym_comment] = ACTIONS(69),
    },
    [191] = {
        [anon_sym_namespace] = ACTIONS(785),
        [anon_sym_RBRACE] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(791),
        [anon_sym_struct] = ACTIONS(791),
        [anon_sym_abstract] = ACTIONS(791),
        [anon_sym_sealed] = ACTIONS(791),
        [anon_sym_static] = ACTIONS(791),
        [anon_sym_new] = ACTIONS(791),
        [anon_sym_public] = ACTIONS(791),
        [anon_sym_protected] = ACTIONS(791),
        [anon_sym_internal] = ACTIONS(791),
        [anon_sym_private] = ACTIONS(791),
        [anon_sym_unsafe] = ACTIONS(791),
        [anon_sym_readonly] = ACTIONS(209),
        [anon_sym_volatile] = ACTIONS(209),
        [anon_sym_bool] = ACTIONS(209),
        [anon_sym_byte] = ACTIONS(209),
        [anon_sym_char] = ACTIONS(209),
        [anon_sym_decimal] = ACTIONS(209),
        [anon_sym_double] = ACTIONS(209),
        [anon_sym_float] = ACTIONS(209),
        [anon_sym_int] = ACTIONS(209),
        [anon_sym_long] = ACTIONS(209),
        [anon_sym_object] = ACTIONS(209),
        [anon_sym_sbyte] = ACTIONS(209),
        [anon_sym_short] = ACTIONS(209),
        [anon_sym_string] = ACTIONS(209),
        [anon_sym_uint] = ACTIONS(209),
        [anon_sym_ulong] = ACTIONS(209),
        [anon_sym_ushort] = ACTIONS(209),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(69),
    },
    [192] = {
        [sym_class_declaration] = STATE(52),
        [sym_struct_declaration] = STATE(52),
        [sym_field_declaration] = STATE(52),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [anon_sym_RBRACE] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [193] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(797),
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
    [194] = {
        [ts_builtin_sym_end] = ACTIONS(799),
        [anon_sym_namespace] = ACTIONS(802),
        [anon_sym_RBRACE] = ACTIONS(799),
        [anon_sym_class] = ACTIONS(802),
        [anon_sym_struct] = ACTIONS(802),
        [anon_sym_abstract] = ACTIONS(802),
        [anon_sym_sealed] = ACTIONS(802),
        [anon_sym_static] = ACTIONS(802),
        [anon_sym_new] = ACTIONS(802),
        [anon_sym_public] = ACTIONS(802),
        [anon_sym_protected] = ACTIONS(802),
        [anon_sym_internal] = ACTIONS(802),
        [anon_sym_private] = ACTIONS(802),
        [anon_sym_unsafe] = ACTIONS(802),
        [anon_sym_readonly] = ACTIONS(802),
        [anon_sym_volatile] = ACTIONS(802),
        [anon_sym_bool] = ACTIONS(802),
        [anon_sym_byte] = ACTIONS(802),
        [anon_sym_char] = ACTIONS(802),
        [anon_sym_decimal] = ACTIONS(802),
        [anon_sym_double] = ACTIONS(802),
        [anon_sym_float] = ACTIONS(802),
        [anon_sym_int] = ACTIONS(802),
        [anon_sym_long] = ACTIONS(802),
        [anon_sym_object] = ACTIONS(802),
        [anon_sym_sbyte] = ACTIONS(802),
        [anon_sym_short] = ACTIONS(802),
        [anon_sym_string] = ACTIONS(802),
        [anon_sym_uint] = ACTIONS(802),
        [anon_sym_ulong] = ACTIONS(802),
        [anon_sym_ushort] = ACTIONS(802),
        [sym_identifier_name] = ACTIONS(805),
        [sym_comment] = ACTIONS(69),
    },
    [195] = {
        [ts_builtin_sym_end] = ACTIONS(808),
        [anon_sym_namespace] = ACTIONS(811),
        [anon_sym_RBRACE] = ACTIONS(808),
        [anon_sym_class] = ACTIONS(811),
        [anon_sym_struct] = ACTIONS(811),
        [anon_sym_abstract] = ACTIONS(811),
        [anon_sym_sealed] = ACTIONS(811),
        [anon_sym_static] = ACTIONS(811),
        [anon_sym_new] = ACTIONS(811),
        [anon_sym_public] = ACTIONS(811),
        [anon_sym_protected] = ACTIONS(811),
        [anon_sym_internal] = ACTIONS(811),
        [anon_sym_private] = ACTIONS(811),
        [anon_sym_unsafe] = ACTIONS(811),
        [anon_sym_readonly] = ACTIONS(811),
        [anon_sym_volatile] = ACTIONS(811),
        [anon_sym_bool] = ACTIONS(811),
        [anon_sym_byte] = ACTIONS(811),
        [anon_sym_char] = ACTIONS(811),
        [anon_sym_decimal] = ACTIONS(811),
        [anon_sym_double] = ACTIONS(811),
        [anon_sym_float] = ACTIONS(811),
        [anon_sym_int] = ACTIONS(811),
        [anon_sym_long] = ACTIONS(811),
        [anon_sym_object] = ACTIONS(811),
        [anon_sym_sbyte] = ACTIONS(811),
        [anon_sym_short] = ACTIONS(811),
        [anon_sym_string] = ACTIONS(811),
        [anon_sym_uint] = ACTIONS(811),
        [anon_sym_ulong] = ACTIONS(811),
        [anon_sym_ushort] = ACTIONS(811),
        [sym_identifier_name] = ACTIONS(814),
        [sym_comment] = ACTIONS(69),
    },
    [196] = {
        [anon_sym_SEMI] = ACTIONS(817),
        [anon_sym_COMMA] = ACTIONS(817),
        [sym_comment] = ACTIONS(69),
    },
    [197] = {
        [anon_sym_SEMI] = ACTIONS(821),
        [anon_sym_COMMA] = ACTIONS(821),
        [sym__real_type_suffix] = ACTIONS(824),
        [sym__exponent_part] = ACTIONS(826),
        [sym_comment] = ACTIONS(69),
    },
    [198] = {
        [anon_sym_SEMI] = ACTIONS(828),
        [anon_sym_COMMA] = ACTIONS(828),
        [sym_comment] = ACTIONS(69),
    },
    [199] = {
        [anon_sym_SEMI] = ACTIONS(828),
        [anon_sym_COMMA] = ACTIONS(828),
        [sym__real_type_suffix] = ACTIONS(831),
        [sym_comment] = ACTIONS(69),
    },
    [200] = {
        [anon_sym_SEMI] = ACTIONS(833),
        [anon_sym_COMMA] = ACTIONS(833),
        [sym_comment] = ACTIONS(69),
    },
    [201] = {
        [anon_sym_SEMI] = ACTIONS(576),
        [anon_sym_COMMA] = ACTIONS(576),
        [sym_comment] = ACTIONS(69),
    },
    [202] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(102),
        [anon_sym_SEMI] = ACTIONS(249),
        [anon_sym_COMMA] = ACTIONS(604),
        [anon_sym_EQ] = ACTIONS(251),
        [anon_sym_LT] = ACTIONS(127),
        [anon_sym_GT] = ACTIONS(203),
        [sym_comment] = ACTIONS(69),
    },
    [203] = {
        [anon_sym_SEMI] = ACTIONS(836),
        [anon_sym_COMMA] = ACTIONS(836),
        [sym_comment] = ACTIONS(69),
    },
    [204] = {
        [anon_sym_COMMA] = ACTIONS(839),
        [anon_sym_GT] = ACTIONS(839),
        [sym_comment] = ACTIONS(69),
    },
    [205] = {
        [sym_type_parameter_list] = STATE(207),
        [anon_sym_LBRACE] = ACTIONS(842),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [206] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(193),
        [anon_sym_RBRACE] = ACTIONS(844),
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
    [207] = {
        [anon_sym_LBRACE] = ACTIONS(846),
        [sym_comment] = ACTIONS(69),
    },
    [208] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(185),
        [anon_sym_RBRACE] = ACTIONS(797),
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
    [209] = {
        [ts_builtin_sym_end] = ACTIONS(848),
        [anon_sym_namespace] = ACTIONS(851),
        [anon_sym_RBRACE] = ACTIONS(848),
        [anon_sym_class] = ACTIONS(851),
        [anon_sym_struct] = ACTIONS(851),
        [anon_sym_abstract] = ACTIONS(851),
        [anon_sym_sealed] = ACTIONS(851),
        [anon_sym_static] = ACTIONS(851),
        [anon_sym_new] = ACTIONS(851),
        [anon_sym_public] = ACTIONS(851),
        [anon_sym_protected] = ACTIONS(851),
        [anon_sym_internal] = ACTIONS(851),
        [anon_sym_private] = ACTIONS(851),
        [anon_sym_unsafe] = ACTIONS(851),
        [anon_sym_readonly] = ACTIONS(851),
        [anon_sym_volatile] = ACTIONS(851),
        [anon_sym_bool] = ACTIONS(851),
        [anon_sym_byte] = ACTIONS(851),
        [anon_sym_char] = ACTIONS(851),
        [anon_sym_decimal] = ACTIONS(851),
        [anon_sym_double] = ACTIONS(851),
        [anon_sym_float] = ACTIONS(851),
        [anon_sym_int] = ACTIONS(851),
        [anon_sym_long] = ACTIONS(851),
        [anon_sym_object] = ACTIONS(851),
        [anon_sym_sbyte] = ACTIONS(851),
        [anon_sym_short] = ACTIONS(851),
        [anon_sym_string] = ACTIONS(851),
        [anon_sym_uint] = ACTIONS(851),
        [anon_sym_ulong] = ACTIONS(851),
        [anon_sym_ushort] = ACTIONS(851),
        [sym_identifier_name] = ACTIONS(854),
        [sym_comment] = ACTIONS(69),
    },
    [210] = {
        [sym_type_parameter_list] = STATE(212),
        [anon_sym_LBRACE] = ACTIONS(857),
        [anon_sym_LT] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [211] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(192),
        [anon_sym_RBRACE] = ACTIONS(859),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [212] = {
        [anon_sym_LBRACE] = ACTIONS(861),
        [sym_comment] = ACTIONS(69),
    },
    [213] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(49),
        [sym_predefined_type] = STATE(47),
        [aux_sym_class_declaration_repeat1] = STATE(184),
        [anon_sym_RBRACE] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(173),
        [anon_sym_sealed] = ACTIONS(173),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(179),
        [anon_sym_volatile] = ACTIONS(179),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
    },
    [214] = {
        [ts_builtin_sym_end] = ACTIONS(863),
        [anon_sym_namespace] = ACTIONS(866),
        [anon_sym_RBRACE] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(866),
        [anon_sym_struct] = ACTIONS(866),
        [anon_sym_abstract] = ACTIONS(866),
        [anon_sym_sealed] = ACTIONS(866),
        [anon_sym_static] = ACTIONS(866),
        [anon_sym_new] = ACTIONS(866),
        [anon_sym_public] = ACTIONS(866),
        [anon_sym_protected] = ACTIONS(866),
        [anon_sym_internal] = ACTIONS(866),
        [anon_sym_private] = ACTIONS(866),
        [anon_sym_unsafe] = ACTIONS(866),
        [anon_sym_readonly] = ACTIONS(866),
        [anon_sym_volatile] = ACTIONS(866),
        [anon_sym_bool] = ACTIONS(866),
        [anon_sym_byte] = ACTIONS(866),
        [anon_sym_char] = ACTIONS(866),
        [anon_sym_decimal] = ACTIONS(866),
        [anon_sym_double] = ACTIONS(866),
        [anon_sym_float] = ACTIONS(866),
        [anon_sym_int] = ACTIONS(866),
        [anon_sym_long] = ACTIONS(866),
        [anon_sym_object] = ACTIONS(866),
        [anon_sym_sbyte] = ACTIONS(866),
        [anon_sym_short] = ACTIONS(866),
        [anon_sym_string] = ACTIONS(866),
        [anon_sym_uint] = ACTIONS(866),
        [anon_sym_ulong] = ACTIONS(866),
        [anon_sym_ushort] = ACTIONS(866),
        [sym_identifier_name] = ACTIONS(869),
        [sym_comment] = ACTIONS(69),
    },
    [215] = {
        [ts_builtin_sym_end] = ACTIONS(872),
        [anon_sym_namespace] = ACTIONS(880),
        [anon_sym_RBRACE] = ACTIONS(872),
        [anon_sym_class] = ACTIONS(880),
        [anon_sym_struct] = ACTIONS(880),
        [anon_sym_abstract] = ACTIONS(880),
        [anon_sym_sealed] = ACTIONS(880),
        [anon_sym_static] = ACTIONS(880),
        [anon_sym_new] = ACTIONS(880),
        [anon_sym_public] = ACTIONS(880),
        [anon_sym_protected] = ACTIONS(880),
        [anon_sym_internal] = ACTIONS(880),
        [anon_sym_private] = ACTIONS(880),
        [anon_sym_unsafe] = ACTIONS(880),
        [anon_sym_readonly] = ACTIONS(888),
        [anon_sym_volatile] = ACTIONS(888),
        [anon_sym_bool] = ACTIONS(888),
        [anon_sym_byte] = ACTIONS(888),
        [anon_sym_char] = ACTIONS(888),
        [anon_sym_decimal] = ACTIONS(888),
        [anon_sym_double] = ACTIONS(888),
        [anon_sym_float] = ACTIONS(888),
        [anon_sym_int] = ACTIONS(888),
        [anon_sym_long] = ACTIONS(888),
        [anon_sym_object] = ACTIONS(888),
        [anon_sym_sbyte] = ACTIONS(888),
        [anon_sym_short] = ACTIONS(888),
        [anon_sym_string] = ACTIONS(888),
        [anon_sym_uint] = ACTIONS(888),
        [anon_sym_ulong] = ACTIONS(888),
        [anon_sym_ushort] = ACTIONS(888),
        [sym_identifier_name] = ACTIONS(895),
        [sym_comment] = ACTIONS(69),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(144),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(145),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(146),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(147),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(148),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(149),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(150),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(151),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(152),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(79),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(80),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(153),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(69),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(90),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(70),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(154),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(155),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(156),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(157),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(73),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(158),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(40),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(41),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(42),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(159),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(134),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(125),
    [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(160),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
    [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(137),
    [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
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
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
    [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [483] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [486] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [489] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [492] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4),
    [497] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [500] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
    [507] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [518] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [529] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [538] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
    [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
    [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
    [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [561] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
    [571] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [576] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [582] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
    [588] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [591] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [594] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [597] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(180),
    [601] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(189),
    [604] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [609] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(128),
    [613] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [616] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [619] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [622] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [629] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [636] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [639] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [642] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [647] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [651] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(59),
    [655] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [658] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [661] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [664] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [667] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [670] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [675] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(105),
    [679] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(106),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [685] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [692] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [696] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [700] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [704] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [708] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [712] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [718] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [723] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [728] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [733] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [736] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [743] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [746] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [749] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [752] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [755] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [758] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [763] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [769] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [775] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [780] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [787] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [791] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [799] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [802] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [805] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [808] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [811] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [814] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [817] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [821] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
    [828] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [833] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [836] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [839] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [842] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [844] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [848] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [851] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [854] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [863] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [866] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [869] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [872] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [880] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [888] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [895] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
