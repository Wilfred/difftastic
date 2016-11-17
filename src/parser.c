#include "tree_sitter/parser.h"

#define STATE_COUNT 200
#define SYMBOL_COUNT 104
#define TOKEN_COUNT 67

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
    anon_sym_abstract = 35,
    anon_sym_sealed = 36,
    anon_sym_static = 37,
    anon_sym_new = 38,
    anon_sym_public = 39,
    anon_sym_protected = 40,
    anon_sym_internal = 41,
    anon_sym_private = 42,
    anon_sym_unsafe = 43,
    anon_sym_readonly = 44,
    anon_sym_volatile = 45,
    anon_sym_bool = 46,
    anon_sym_byte = 47,
    anon_sym_char = 48,
    anon_sym_decimal = 49,
    anon_sym_double = 50,
    anon_sym_float = 51,
    anon_sym_int = 52,
    anon_sym_long = 53,
    anon_sym_object = 54,
    anon_sym_sbyte = 55,
    anon_sym_short = 56,
    anon_sym_string = 57,
    anon_sym_uint = 58,
    anon_sym_ulong = 59,
    anon_sym_ushort = 60,
    anon_sym_LT = 61,
    anon_sym_GT = 62,
    anon_sym_COLON_COLON = 63,
    sym_global = 64,
    sym_identifier_name = 65,
    sym_comment = 66,
    sym_compilation_unit = 67,
    sym_using_directive = 68,
    sym_namespace_declaration = 69,
    sym_class_declaration = 70,
    sym_struct_declaration = 71,
    sym_field_declaration = 72,
    sym_variable_declaration = 73,
    sym__type = 74,
    sym_generic_name = 75,
    sym_variable_declarator = 76,
    sym_equals_value_clause = 77,
    sym__literal = 78,
    sym_boolean_literal = 79,
    sym_character_literal = 80,
    sym__unicode_escape_sequence = 81,
    sym__simple_escape_sequence = 82,
    sym_integer_literal = 83,
    sym_real_literal = 84,
    sym_class_modifiers = 85,
    sym__class_modifiers = 86,
    sym_struct_modifiers = 87,
    sym__struct_modifiers = 88,
    sym_field_modifiers = 89,
    sym__field_modifiers = 90,
    sym_predefined_type = 91,
    sym_type_parameter_list = 92,
    sym_type_parameter = 93,
    sym_qualified_name = 94,
    sym_alias_qualified_name = 95,
    sym_name_equals = 96,
    sym_static = 97,
    aux_sym_compilation_unit_repeat1 = 98,
    aux_sym_compilation_unit_repeat2 = 99,
    aux_sym_class_declaration_repeat1 = 100,
    aux_sym_struct_declaration_repeat1 = 101,
    aux_sym_variable_declaration_repeat1 = 102,
    aux_sym_type_parameter_list_repeat1 = 103,
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
            if (lookahead == '\'')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '0')
                ADVANCE(10);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(11);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '<')
                ADVANCE(17);
            if (lookahead == '=')
                ADVANCE(18);
            if (lookahead == '>')
                ADVANCE(19);
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
                ADVANCE(20);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'm'))
                ADVANCE(21);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(22);
            if (lookahead == 'L')
                ADVANCE(25);
            if (lookahead == 'U')
                ADVANCE(27);
            if (lookahead == '\\')
                ADVANCE(28);
            if (lookahead == 'a')
                ADVANCE(59);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(74);
            if (lookahead == 'd')
                ADVANCE(82);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'g')
                ADVANCE(103);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(117);
            if (lookahead == 'n')
                ADVANCE(121);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == 'p')
                ADVANCE(141);
            if (lookahead == 'r')
                ADVANCE(160);
            if (lookahead == 's')
                ADVANCE(168);
            if (lookahead == 't')
                ADVANCE(194);
            if (lookahead == 'u')
                ADVANCE(198);
            if (lookahead == 'v')
                ADVANCE(219);
            if (lookahead == '{')
                ADVANCE(227);
            if (lookahead == '}')
                ADVANCE(228);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
        case 3:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 4:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 5:
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(9);
            LEX_ERROR();
        case 6:
            if (lookahead == '*')
                ADVANCE(7);
            if (!((lookahead == 0) ||
                (lookahead == '*')))
                ADVANCE(6);
            LEX_ERROR();
        case 7:
            if (lookahead == '/')
                ADVANCE(8);
            if (!((lookahead == 0) ||
                (lookahead == '/')))
                ADVANCE(6);
            LEX_ERROR();
        case 8:
            ACCEPT_TOKEN(sym_comment);
        case 9:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(9);
            ACCEPT_TOKEN(sym_comment);
        case 10:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(11);
            if (lookahead == 'x')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 11:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(11);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
        case 12:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(13);
            LEX_ERROR();
        case 13:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(13);
            ACCEPT_TOKEN(aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH);
        case 14:
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 15:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
        case 16:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 17:
            ACCEPT_TOKEN(anon_sym_LT);
        case 18:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 19:
            ACCEPT_TOKEN(anon_sym_GT);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier_name);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 22:
            if (('+' <= lookahead && lookahead <= '/') ||
                (':' <= lookahead && lookahead <= '@') ||
                ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(23);
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(24);
            if ((lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier_name);
        case 23:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(23);
            ACCEPT_TOKEN(sym__exponent_part);
        case 24:
            if (('+' <= lookahead && lookahead <= '/') ||
                (':' <= lookahead && lookahead <= '@') ||
                ('[' <= lookahead && lookahead <= ']'))
                ADVANCE(23);
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z'))
                ADVANCE(24);
            if ((lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(sym__exponent_part);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'T') ||
                ('V' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'U')
                ADVANCE(26);
            if (lookahead == 'u')
                ADVANCE(26);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'K') ||
                ('M' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'L')
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(26);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 28:
            if (lookahead == '\"')
                ADVANCE(29);
            if (lookahead == '\'')
                ADVANCE(30);
            if (lookahead == '0')
                ADVANCE(31);
            if (lookahead == 'U')
                ADVANCE(32);
            if (lookahead == '\\')
                ADVANCE(41);
            if (lookahead == 'a')
                ADVANCE(42);
            if (lookahead == 'b')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(44);
            if (lookahead == 'n')
                ADVANCE(45);
            if (lookahead == 'r')
                ADVANCE(46);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'u')
                ADVANCE(48);
            if (lookahead == 'v')
                ADVANCE(53);
            if (lookahead == 'x')
                ADVANCE(54);
            LEX_ERROR();
        case 29:
            ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
        case 30:
            ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
        case 31:
            ACCEPT_TOKEN(anon_sym_BSLASH0);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(33);
            LEX_ERROR();
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(34);
            LEX_ERROR();
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(35);
            LEX_ERROR();
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
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
        case 41:
            ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
        case 42:
            ACCEPT_TOKEN(anon_sym_BSLASHa);
        case 43:
            ACCEPT_TOKEN(anon_sym_BSLASHb);
        case 44:
            ACCEPT_TOKEN(anon_sym_BSLASHf);
        case 45:
            ACCEPT_TOKEN(anon_sym_BSLASHn);
        case 46:
            ACCEPT_TOKEN(anon_sym_BSLASHr);
        case 47:
            ACCEPT_TOKEN(anon_sym_BSLASHt);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(49);
            LEX_ERROR();
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(50);
            LEX_ERROR();
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(51);
            LEX_ERROR();
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(52);
            LEX_ERROR();
        case 52:
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
        case 53:
            ACCEPT_TOKEN(anon_sym_BSLASHv);
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
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(57);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(58);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 58:
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier_name);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier_name);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier_name);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier_name);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier_name);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier_name);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier_name);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_abstract);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(68);
            if (lookahead == 'y')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier_name);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier_name);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier_name);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_bool);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier_name);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier_name);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_byte);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(75);
            if (lookahead == 'l')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier_name);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier_name);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_char);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier_name);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier_name);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier_name);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_class);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(83);
            if (lookahead == 'o')
                ADVANCE(89);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier_name);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier_name);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'm')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier_name);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier_name);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_decimal);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'u')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier_name);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier_name);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier_name);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_double);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(95);
            if (lookahead == 'l')
                ADVANCE(99);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier_name);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier_name);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier_name);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_false);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier_name);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier_name);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier_name);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_float);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier_name);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(105);
            ACCEPT_TOKEN(sym_identifier_name);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier_name);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier_name);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier_name);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(sym_global);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier_name);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(112);
            ACCEPT_TOKEN(anon_sym_int);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier_name);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier_name);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_internal);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'T') ||
                ('V' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'U')
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(26);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_long);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(122);
            if (lookahead == 'e')
                ADVANCE(130);
            if (lookahead == 'u')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'm')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier_name);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'p')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier_name);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier_name);
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier_name);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'w')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier_name);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_new);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(sym_null_literal);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'j')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier_name);
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier_name);
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier_name);
        case 140:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_object);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(142);
            if (lookahead == 'u')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(143);
            if (lookahead == 'o')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier_name);
        case 143:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'v')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier_name);
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier_name);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier_name);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_private);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier_name);
        case 152:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier_name);
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'd')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier_name);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_protected);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier_name);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_public);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier_name);
        case 161:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier_name);
        case 162:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'd')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier_name);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(20);
            if (lookahead == 'y')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier_name);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 168:
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
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(169);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'h')
                ADVANCE(178);
            if (lookahead == 't')
                ADVANCE(182);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(20);
            if (lookahead == 'y')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier_name);
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier_name);
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier_name);
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'd')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier_name);
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier_name);
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(180);
            ACCEPT_TOKEN(sym_identifier_name);
        case 180:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(181);
            ACCEPT_TOKEN(sym_identifier_name);
        case 181:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_short);
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(183);
            if (lookahead == 'r')
                ADVANCE(187);
            ACCEPT_TOKEN(sym_identifier_name);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(184);
            ACCEPT_TOKEN(sym_identifier_name);
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(185);
            ACCEPT_TOKEN(sym_identifier_name);
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(186);
            ACCEPT_TOKEN(sym_identifier_name);
        case 186:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_static);
        case 187:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(191);
            ACCEPT_TOKEN(sym_identifier_name);
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(189);
            ACCEPT_TOKEN(sym_identifier_name);
        case 189:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(190);
            ACCEPT_TOKEN(sym_identifier_name);
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_string);
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(192);
            ACCEPT_TOKEN(sym_identifier_name);
        case 192:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(193);
            ACCEPT_TOKEN(sym_identifier_name);
        case 193:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_struct);
        case 194:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(195);
            ACCEPT_TOKEN(sym_identifier_name);
        case 195:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'u')
                ADVANCE(196);
            ACCEPT_TOKEN(sym_identifier_name);
        case 196:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(197);
            ACCEPT_TOKEN(sym_identifier_name);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_true);
        case 198:
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
                ADVANCE(20);
            if (lookahead == 'L')
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(199);
            if (lookahead == 'l')
                ADVANCE(202);
            if (lookahead == 'n')
                ADVANCE(206);
            if (lookahead == 's')
                ADVANCE(211);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 199:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(200);
            ACCEPT_TOKEN(sym_identifier_name);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier_name);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_uint);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(203);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(204);
            ACCEPT_TOKEN(sym_identifier_name);
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier_name);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier_name);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier_name);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier_name);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(210);
            ACCEPT_TOKEN(sym_identifier_name);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(212);
            if (lookahead == 'i')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier_name);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier_name);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier_name);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier_name);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier_name);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_using);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier_name);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier_name);
        case 221:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(222);
            ACCEPT_TOKEN(sym_identifier_name);
        case 222:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(223);
            ACCEPT_TOKEN(sym_identifier_name);
        case 223:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(224);
            ACCEPT_TOKEN(sym_identifier_name);
        case 224:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier_name);
        case 225:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(226);
            ACCEPT_TOKEN(sym_identifier_name);
        case 226:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 227:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 228:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 229:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(229);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(230);
            if (lookahead == 'c')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(243);
            if (lookahead == 'n')
                ADVANCE(251);
            if (lookahead == 'p')
                ADVANCE(262);
            if (lookahead == 's')
                ADVANCE(281);
            if (lookahead == 'u')
                ADVANCE(296);
            LEX_ERROR();
        case 230:
            if (lookahead == 'b')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            if (lookahead == 's')
                ADVANCE(232);
            LEX_ERROR();
        case 232:
            if (lookahead == 't')
                ADVANCE(233);
            LEX_ERROR();
        case 233:
            if (lookahead == 'r')
                ADVANCE(234);
            LEX_ERROR();
        case 234:
            if (lookahead == 'a')
                ADVANCE(235);
            LEX_ERROR();
        case 235:
            if (lookahead == 'c')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 't')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 238:
            if (lookahead == 'l')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            if (lookahead == 'a')
                ADVANCE(240);
            LEX_ERROR();
        case 240:
            if (lookahead == 's')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            if (lookahead == 's')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            ACCEPT_TOKEN(anon_sym_class);
        case 243:
            if (lookahead == 'n')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            if (lookahead == 't')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            if (lookahead == 'e')
                ADVANCE(246);
            LEX_ERROR();
        case 246:
            if (lookahead == 'r')
                ADVANCE(247);
            LEX_ERROR();
        case 247:
            if (lookahead == 'n')
                ADVANCE(248);
            LEX_ERROR();
        case 248:
            if (lookahead == 'a')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            if (lookahead == 'l')
                ADVANCE(250);
            LEX_ERROR();
        case 250:
            ACCEPT_TOKEN(anon_sym_internal);
        case 251:
            if (lookahead == 'a')
                ADVANCE(252);
            if (lookahead == 'e')
                ADVANCE(260);
            LEX_ERROR();
        case 252:
            if (lookahead == 'm')
                ADVANCE(253);
            LEX_ERROR();
        case 253:
            if (lookahead == 'e')
                ADVANCE(254);
            LEX_ERROR();
        case 254:
            if (lookahead == 's')
                ADVANCE(255);
            LEX_ERROR();
        case 255:
            if (lookahead == 'p')
                ADVANCE(256);
            LEX_ERROR();
        case 256:
            if (lookahead == 'a')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            if (lookahead == 'c')
                ADVANCE(258);
            LEX_ERROR();
        case 258:
            if (lookahead == 'e')
                ADVANCE(259);
            LEX_ERROR();
        case 259:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 260:
            if (lookahead == 'w')
                ADVANCE(261);
            LEX_ERROR();
        case 261:
            ACCEPT_TOKEN(anon_sym_new);
        case 262:
            if (lookahead == 'r')
                ADVANCE(263);
            if (lookahead == 'u')
                ADVANCE(276);
            LEX_ERROR();
        case 263:
            if (lookahead == 'i')
                ADVANCE(264);
            if (lookahead == 'o')
                ADVANCE(269);
            LEX_ERROR();
        case 264:
            if (lookahead == 'v')
                ADVANCE(265);
            LEX_ERROR();
        case 265:
            if (lookahead == 'a')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            if (lookahead == 't')
                ADVANCE(267);
            LEX_ERROR();
        case 267:
            if (lookahead == 'e')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            ACCEPT_TOKEN(anon_sym_private);
        case 269:
            if (lookahead == 't')
                ADVANCE(270);
            LEX_ERROR();
        case 270:
            if (lookahead == 'e')
                ADVANCE(271);
            LEX_ERROR();
        case 271:
            if (lookahead == 'c')
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
            if (lookahead == 'd')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            ACCEPT_TOKEN(anon_sym_protected);
        case 276:
            if (lookahead == 'b')
                ADVANCE(277);
            LEX_ERROR();
        case 277:
            if (lookahead == 'l')
                ADVANCE(278);
            LEX_ERROR();
        case 278:
            if (lookahead == 'i')
                ADVANCE(279);
            LEX_ERROR();
        case 279:
            if (lookahead == 'c')
                ADVANCE(280);
            LEX_ERROR();
        case 280:
            ACCEPT_TOKEN(anon_sym_public);
        case 281:
            if (lookahead == 'e')
                ADVANCE(282);
            if (lookahead == 't')
                ADVANCE(287);
            LEX_ERROR();
        case 282:
            if (lookahead == 'a')
                ADVANCE(283);
            LEX_ERROR();
        case 283:
            if (lookahead == 'l')
                ADVANCE(284);
            LEX_ERROR();
        case 284:
            if (lookahead == 'e')
                ADVANCE(285);
            LEX_ERROR();
        case 285:
            if (lookahead == 'd')
                ADVANCE(286);
            LEX_ERROR();
        case 286:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 287:
            if (lookahead == 'a')
                ADVANCE(288);
            if (lookahead == 'r')
                ADVANCE(292);
            LEX_ERROR();
        case 288:
            if (lookahead == 't')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            if (lookahead == 'i')
                ADVANCE(290);
            LEX_ERROR();
        case 290:
            if (lookahead == 'c')
                ADVANCE(291);
            LEX_ERROR();
        case 291:
            ACCEPT_TOKEN(anon_sym_static);
        case 292:
            if (lookahead == 'u')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            if (lookahead == 'c')
                ADVANCE(294);
            LEX_ERROR();
        case 294:
            if (lookahead == 't')
                ADVANCE(295);
            LEX_ERROR();
        case 295:
            ACCEPT_TOKEN(anon_sym_struct);
        case 296:
            if (lookahead == 'n')
                ADVANCE(297);
            if (lookahead == 's')
                ADVANCE(302);
            LEX_ERROR();
        case 297:
            if (lookahead == 's')
                ADVANCE(298);
            LEX_ERROR();
        case 298:
            if (lookahead == 'a')
                ADVANCE(299);
            LEX_ERROR();
        case 299:
            if (lookahead == 'f')
                ADVANCE(300);
            LEX_ERROR();
        case 300:
            if (lookahead == 'e')
                ADVANCE(301);
            LEX_ERROR();
        case 301:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 302:
            if (lookahead == 'i')
                ADVANCE(303);
            LEX_ERROR();
        case 303:
            if (lookahead == 'n')
                ADVANCE(304);
            LEX_ERROR();
        case 304:
            if (lookahead == 'g')
                ADVANCE(305);
            LEX_ERROR();
        case 305:
            ACCEPT_TOKEN(anon_sym_using);
        case 306:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(306);
            if (lookahead == '/')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(103);
            if (lookahead == 's')
                ADVANCE(307);
            LEX_ERROR();
        case 307:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(308);
            ACCEPT_TOKEN(sym_identifier_name);
        case 308:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(183);
            ACCEPT_TOKEN(sym_identifier_name);
        case 309:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(309);
            if (lookahead == '/')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(103);
            LEX_ERROR();
        case 310:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(310);
            if (lookahead == '/')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            LEX_ERROR();
        case 311:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(311);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(230);
            if (lookahead == 'c')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(243);
            if (lookahead == 'n')
                ADVANCE(312);
            if (lookahead == 'p')
                ADVANCE(262);
            if (lookahead == 's')
                ADVANCE(313);
            if (lookahead == 'u')
                ADVANCE(315);
            LEX_ERROR();
        case 312:
            if (lookahead == 'e')
                ADVANCE(260);
            LEX_ERROR();
        case 313:
            if (lookahead == 'e')
                ADVANCE(282);
            if (lookahead == 't')
                ADVANCE(314);
            LEX_ERROR();
        case 314:
            if (lookahead == 'a')
                ADVANCE(288);
            LEX_ERROR();
        case 315:
            if (lookahead == 'n')
                ADVANCE(297);
            LEX_ERROR();
        case 316:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(316);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(230);
            if (lookahead == 'c')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(243);
            if (lookahead == 'n')
                ADVANCE(312);
            if (lookahead == 'p')
                ADVANCE(262);
            if (lookahead == 's')
                ADVANCE(281);
            if (lookahead == 'u')
                ADVANCE(315);
            LEX_ERROR();
        case 317:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(317);
            if (lookahead == '/')
                ADVANCE(5);
            LEX_ERROR();
        case 318:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(318);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(230);
            if (lookahead == 'c')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(243);
            if (lookahead == 'n')
                ADVANCE(251);
            if (lookahead == 'p')
                ADVANCE(262);
            if (lookahead == 's')
                ADVANCE(281);
            if (lookahead == 'u')
                ADVANCE(315);
            if (lookahead == '}')
                ADVANCE(228);
            LEX_ERROR();
        case 319:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(319);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'c')
                ADVANCE(238);
            LEX_ERROR();
        case 320:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(320);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(321);
            LEX_ERROR();
        case 321:
            if (lookahead == 't')
                ADVANCE(322);
            LEX_ERROR();
        case 322:
            if (lookahead == 'r')
                ADVANCE(292);
            LEX_ERROR();
        case 323:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(323);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(230);
            if (lookahead == 'c')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(243);
            if (lookahead == 'n')
                ADVANCE(251);
            if (lookahead == 'p')
                ADVANCE(262);
            if (lookahead == 's')
                ADVANCE(281);
            if (lookahead == 'u')
                ADVANCE(315);
            LEX_ERROR();
        case 324:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(324);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '<')
                ADVANCE(17);
            if (lookahead == '{')
                ADVANCE(227);
            LEX_ERROR();
        case 325:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(325);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(230);
            if (lookahead == 'c')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(243);
            if (lookahead == 'n')
                ADVANCE(312);
            if (lookahead == 'p')
                ADVANCE(262);
            if (lookahead == 's')
                ADVANCE(281);
            if (lookahead == 'u')
                ADVANCE(315);
            if (lookahead == '}')
                ADVANCE(228);
            LEX_ERROR();
        case 326:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(326);
            if (lookahead == '/')
                ADVANCE(5);
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
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(327);
            if (lookahead == 'd')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(329);
            if (lookahead == 'i')
                ADVANCE(330);
            if (lookahead == 'l')
                ADVANCE(333);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == 's')
                ADVANCE(334);
            if (lookahead == 'u')
                ADVANCE(337);
            LEX_ERROR();
        case 327:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier_name);
        case 328:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(83);
            if (lookahead == 'o')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 329:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier_name);
        case 330:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(331);
            ACCEPT_TOKEN(sym_identifier_name);
        case 331:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(332);
            ACCEPT_TOKEN(sym_identifier_name);
        case 332:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_int);
        case 333:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier_name);
        case 334:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(169);
            if (lookahead == 'h')
                ADVANCE(178);
            if (lookahead == 't')
                ADVANCE(335);
            ACCEPT_TOKEN(sym_identifier_name);
        case 335:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(336);
            ACCEPT_TOKEN(sym_identifier_name);
        case 336:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(188);
            ACCEPT_TOKEN(sym_identifier_name);
        case 337:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(199);
            if (lookahead == 'l')
                ADVANCE(338);
            if (lookahead == 's')
                ADVANCE(339);
            ACCEPT_TOKEN(sym_identifier_name);
        case 338:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(203);
            ACCEPT_TOKEN(sym_identifier_name);
        case 339:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier_name);
        case 340:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(340);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '{')
                ADVANCE(227);
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
                ADVANCE(5);
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
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(59);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(74);
            if (lookahead == 'd')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(329);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(333);
            if (lookahead == 'n')
                ADVANCE(342);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == 'p')
                ADVANCE(141);
            if (lookahead == 'r')
                ADVANCE(160);
            if (lookahead == 's')
                ADVANCE(168);
            if (lookahead == 'u')
                ADVANCE(343);
            if (lookahead == 'v')
                ADVANCE(219);
            if (lookahead == '}')
                ADVANCE(228);
            LEX_ERROR();
        case 342:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(122);
            if (lookahead == 'e')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 343:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(199);
            if (lookahead == 'l')
                ADVANCE(338);
            if (lookahead == 'n')
                ADVANCE(206);
            if (lookahead == 's')
                ADVANCE(339);
            ACCEPT_TOKEN(sym_identifier_name);
        case 344:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(344);
            if (lookahead == '/')
                ADVANCE(5);
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
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(59);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(74);
            if (lookahead == 'd')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(329);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(333);
            if (lookahead == 'n')
                ADVANCE(345);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == 'p')
                ADVANCE(141);
            if (lookahead == 'r')
                ADVANCE(160);
            if (lookahead == 's')
                ADVANCE(168);
            if (lookahead == 'u')
                ADVANCE(343);
            if (lookahead == 'v')
                ADVANCE(219);
            if (lookahead == '}')
                ADVANCE(228);
            LEX_ERROR();
        case 345:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 346:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(346);
            if (lookahead == '/')
                ADVANCE(5);
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
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(59);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(74);
            if (lookahead == 'd')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(329);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(333);
            if (lookahead == 'n')
                ADVANCE(345);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == 'p')
                ADVANCE(141);
            if (lookahead == 'r')
                ADVANCE(160);
            if (lookahead == 's')
                ADVANCE(347);
            if (lookahead == 'u')
                ADVANCE(343);
            if (lookahead == 'v')
                ADVANCE(219);
            LEX_ERROR();
        case 347:
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
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(169);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'h')
                ADVANCE(178);
            if (lookahead == 't')
                ADVANCE(348);
            ACCEPT_TOKEN(sym_identifier_name);
        case 348:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(183);
            if (lookahead == 'r')
                ADVANCE(336);
            ACCEPT_TOKEN(sym_identifier_name);
        case 349:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(349);
            if (lookahead == '/')
                ADVANCE(5);
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
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(59);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(74);
            if (lookahead == 'd')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(329);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(333);
            if (lookahead == 'n')
                ADVANCE(345);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == 'p')
                ADVANCE(141);
            if (lookahead == 'r')
                ADVANCE(160);
            if (lookahead == 's')
                ADVANCE(168);
            if (lookahead == 'u')
                ADVANCE(343);
            if (lookahead == 'v')
                ADVANCE(219);
            LEX_ERROR();
        case 350:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(350);
            if (lookahead == '/')
                ADVANCE(5);
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
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(327);
            if (lookahead == 'd')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(329);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(333);
            if (lookahead == 'n')
                ADVANCE(345);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == 'p')
                ADVANCE(141);
            if (lookahead == 'r')
                ADVANCE(160);
            if (lookahead == 's')
                ADVANCE(351);
            if (lookahead == 'u')
                ADVANCE(343);
            if (lookahead == 'v')
                ADVANCE(219);
            LEX_ERROR();
        case 351:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(169);
            if (lookahead == 'h')
                ADVANCE(178);
            if (lookahead == 't')
                ADVANCE(348);
            ACCEPT_TOKEN(sym_identifier_name);
        case 352:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(352);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '>')
                ADVANCE(19);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            LEX_ERROR();
        case 353:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(353);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '<')
                ADVANCE(17);
            if (lookahead == '>')
                ADVANCE(19);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            LEX_ERROR();
        case 354:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(354);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            LEX_ERROR();
        case 355:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(355);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(18);
            LEX_ERROR();
        case 356:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(356);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            LEX_ERROR();
        case 357:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(357);
            if (lookahead == '\'')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '0')
                ADVANCE(10);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(358);
            if (lookahead == 'n')
                ADVANCE(363);
            if (lookahead == 't')
                ADVANCE(367);
            LEX_ERROR();
        case 358:
            if (lookahead == 'a')
                ADVANCE(359);
            LEX_ERROR();
        case 359:
            if (lookahead == 'l')
                ADVANCE(360);
            LEX_ERROR();
        case 360:
            if (lookahead == 's')
                ADVANCE(361);
            LEX_ERROR();
        case 361:
            if (lookahead == 'e')
                ADVANCE(362);
            LEX_ERROR();
        case 362:
            ACCEPT_TOKEN(anon_sym_false);
        case 363:
            if (lookahead == 'u')
                ADVANCE(364);
            LEX_ERROR();
        case 364:
            if (lookahead == 'l')
                ADVANCE(365);
            LEX_ERROR();
        case 365:
            if (lookahead == 'l')
                ADVANCE(366);
            LEX_ERROR();
        case 366:
            ACCEPT_TOKEN(sym_null_literal);
        case 367:
            if (lookahead == 'r')
                ADVANCE(368);
            LEX_ERROR();
        case 368:
            if (lookahead == 'u')
                ADVANCE(369);
            LEX_ERROR();
        case 369:
            if (lookahead == 'e')
                ADVANCE(370);
            LEX_ERROR();
        case 370:
            ACCEPT_TOKEN(anon_sym_true);
        case 371:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(372);
            if (lookahead == '/')
                ADVANCE(373);
            if (lookahead == '\\')
                ADVANCE(374);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(372);
            LEX_ERROR();
        case 372:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 373:
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(9);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 374:
            if (lookahead == '\"')
                ADVANCE(29);
            if (lookahead == '\'')
                ADVANCE(30);
            if (lookahead == '0')
                ADVANCE(31);
            if (lookahead == 'U')
                ADVANCE(32);
            if (lookahead == '\\')
                ADVANCE(41);
            if (lookahead == 'a')
                ADVANCE(42);
            if (lookahead == 'b')
                ADVANCE(43);
            if (lookahead == 'f')
                ADVANCE(44);
            if (lookahead == 'n')
                ADVANCE(45);
            if (lookahead == 'r')
                ADVANCE(46);
            if (lookahead == 't')
                ADVANCE(47);
            if (lookahead == 'u')
                ADVANCE(48);
            if (lookahead == 'v')
                ADVANCE(53);
            if (lookahead == 'x')
                ADVANCE(54);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 375:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(375);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'm'))
                ADVANCE(376);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(377);
            if (lookahead == 'L')
                ADVANCE(378);
            if (lookahead == 'U')
                ADVANCE(380);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'u')
                ADVANCE(380);
            LEX_ERROR();
        case 376:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 377:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(23);
            LEX_ERROR();
        case 378:
            if (lookahead == 'U')
                ADVANCE(379);
            if (lookahead == 'u')
                ADVANCE(379);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 379:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 380:
            if (lookahead == 'L')
                ADVANCE(379);
            if (lookahead == 'l')
                ADVANCE(379);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 381:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(381);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == 'L')
                ADVANCE(378);
            if (lookahead == 'U')
                ADVANCE(380);
            if (lookahead == 'l')
                ADVANCE(378);
            if (lookahead == 'u')
                ADVANCE(380);
            LEX_ERROR();
        case 382:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(382);
            if (lookahead == '/')
                ADVANCE(5);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(11);
            LEX_ERROR();
        case 383:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(383);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'm'))
                ADVANCE(376);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(377);
            LEX_ERROR();
        case 384:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(384);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'm'))
                ADVANCE(376);
            LEX_ERROR();
        case 385:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(385);
            if (lookahead == '\'')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(5);
            LEX_ERROR();
        case 386:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(386);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '>')
                ADVANCE(19);
            LEX_ERROR();
        case 387:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(387);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '>')
                ADVANCE(19);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(227);
            LEX_ERROR();
        case 388:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(388);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(14);
            LEX_ERROR();
        case 389:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(389);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '{')
                ADVANCE(227);
            LEX_ERROR();
        case 390:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(390);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            LEX_ERROR();
        case 391:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(391);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '{')
                ADVANCE(227);
            LEX_ERROR();
        case 392:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(392);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(230);
            if (lookahead == 'c')
                ADVANCE(238);
            if (lookahead == 'i')
                ADVANCE(243);
            if (lookahead == 'n')
                ADVANCE(251);
            if (lookahead == 'p')
                ADVANCE(262);
            if (lookahead == 's')
                ADVANCE(281);
            if (lookahead == 'u')
                ADVANCE(315);
            if (lookahead == '}')
                ADVANCE(228);
            LEX_ERROR();
        case 393:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(393);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(18);
            LEX_ERROR();
        case 394:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(394);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            LEX_ERROR();
        case 395:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(395);
            if (lookahead == '/')
                ADVANCE(5);
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
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(59);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(74);
            if (lookahead == 'd')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(329);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(333);
            if (lookahead == 'n')
                ADVANCE(342);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == 'p')
                ADVANCE(141);
            if (lookahead == 'r')
                ADVANCE(160);
            if (lookahead == 's')
                ADVANCE(168);
            if (lookahead == 'u')
                ADVANCE(396);
            if (lookahead == 'v')
                ADVANCE(219);
            if (lookahead == '}')
                ADVANCE(228);
            LEX_ERROR();
        case 396:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(199);
            if (lookahead == 'l')
                ADVANCE(338);
            if (lookahead == 'n')
                ADVANCE(206);
            if (lookahead == 's')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier_name);
        case 397:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(397);
            if (lookahead == '/')
                ADVANCE(5);
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
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(59);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(74);
            if (lookahead == 'd')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(329);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(333);
            if (lookahead == 'n')
                ADVANCE(342);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == 'p')
                ADVANCE(141);
            if (lookahead == 'r')
                ADVANCE(160);
            if (lookahead == 's')
                ADVANCE(168);
            if (lookahead == 'u')
                ADVANCE(343);
            if (lookahead == 'v')
                ADVANCE(219);
            if (lookahead == '}')
                ADVANCE(228);
            LEX_ERROR();
        case 398:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(398);
            if (lookahead == '\'')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '0')
                ADVANCE(10);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('h' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(399);
            if (lookahead == 'g')
                ADVANCE(103);
            if (lookahead == 'n')
                ADVANCE(400);
            if (lookahead == 't')
                ADVANCE(194);
            LEX_ERROR();
        case 399:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier_name);
        case 400:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'u')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 401:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(372);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(373);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '\\')
                ADVANCE(374);
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
                ADVANCE(372);
            LEX_ERROR();
        case 402:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(402);
            if (lookahead == '/')
                ADVANCE(5);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            LEX_ERROR();
        case 403:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(403);
            if (lookahead == '/')
                ADVANCE(5);
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
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(59);
            if (lookahead == 'b')
                ADVANCE(67);
            if (lookahead == 'c')
                ADVANCE(74);
            if (lookahead == 'd')
                ADVANCE(328);
            if (lookahead == 'f')
                ADVANCE(329);
            if (lookahead == 'g')
                ADVANCE(103);
            if (lookahead == 'i')
                ADVANCE(109);
            if (lookahead == 'l')
                ADVANCE(333);
            if (lookahead == 'n')
                ADVANCE(345);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == 'p')
                ADVANCE(141);
            if (lookahead == 'r')
                ADVANCE(160);
            if (lookahead == 's')
                ADVANCE(347);
            if (lookahead == 'u')
                ADVANCE(343);
            if (lookahead == 'v')
                ADVANCE(219);
            LEX_ERROR();
        case 404:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(404);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '<')
                ADVANCE(17);
            if (lookahead == '=')
                ADVANCE(18);
            if (lookahead == '>')
                ADVANCE(19);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(227);
            LEX_ERROR();
        case 405:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(405);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '<')
                ADVANCE(17);
            if (lookahead == '=')
                ADVANCE(18);
            if (lookahead == '>')
                ADVANCE(19);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 229,
    [2] = 306,
    [3] = 309,
    [4] = 310,
    [5] = 310,
    [6] = 311,
    [7] = 316,
    [8] = 317,
    [9] = 229,
    [10] = 318,
    [11] = 319,
    [12] = 319,
    [13] = 320,
    [14] = 320,
    [15] = 229,
    [16] = 323,
    [17] = 318,
    [18] = 229,
    [19] = 323,
    [20] = 310,
    [21] = 324,
    [22] = 325,
    [23] = 326,
    [24] = 340,
    [25] = 325,
    [26] = 341,
    [27] = 325,
    [28] = 325,
    [29] = 341,
    [30] = 325,
    [31] = 341,
    [32] = 325,
    [33] = 310,
    [34] = 324,
    [35] = 344,
    [36] = 340,
    [37] = 344,
    [38] = 341,
    [39] = 346,
    [40] = 349,
    [41] = 350,
    [42] = 352,
    [43] = 353,
    [44] = 344,
    [45] = 354,
    [46] = 310,
    [47] = 352,
    [48] = 326,
    [49] = 326,
    [50] = 344,
    [51] = 341,
    [52] = 344,
    [53] = 354,
    [54] = 344,
    [55] = 341,
    [56] = 344,
    [57] = 355,
    [58] = 356,
    [59] = 310,
    [60] = 356,
    [61] = 310,
    [62] = 356,
    [63] = 356,
    [64] = 357,
    [65] = 356,
    [66] = 356,
    [67] = 371,
    [68] = 375,
    [69] = 381,
    [70] = 356,
    [71] = 382,
    [72] = 356,
    [73] = 383,
    [74] = 356,
    [75] = 384,
    [76] = 356,
    [77] = 356,
    [78] = 382,
    [79] = 356,
    [80] = 384,
    [81] = 383,
    [82] = 384,
    [83] = 356,
    [84] = 385,
    [85] = 385,
    [86] = 385,
    [87] = 356,
    [88] = 344,
    [89] = 352,
    [90] = 386,
    [91] = 386,
    [92] = 326,
    [93] = 387,
    [94] = 386,
    [95] = 326,
    [96] = 387,
    [97] = 386,
    [98] = 386,
    [99] = 326,
    [100] = 319,
    [101] = 320,
    [102] = 324,
    [103] = 325,
    [104] = 340,
    [105] = 341,
    [106] = 325,
    [107] = 324,
    [108] = 344,
    [109] = 340,
    [110] = 341,
    [111] = 344,
    [112] = 388,
    [113] = 389,
    [114] = 390,
    [115] = 310,
    [116] = 391,
    [117] = 392,
    [118] = 318,
    [119] = 392,
    [120] = 318,
    [121] = 310,
    [122] = 390,
    [123] = 309,
    [124] = 393,
    [125] = 394,
    [126] = 309,
    [127] = 394,
    [128] = 229,
    [129] = 229,
    [130] = 309,
    [131] = 395,
    [132] = 397,
    [133] = 341,
    [134] = 310,
    [135] = 310,
    [136] = 326,
    [137] = 398,
    [138] = 401,
    [139] = 375,
    [140] = 402,
    [141] = 356,
    [142] = 384,
    [143] = 403,
    [144] = 387,
    [145] = 404,
    [146] = 229,
    [147] = 318,
    [148] = 341,
    [149] = 344,
    [150] = 354,
    [151] = 352,
    [152] = 356,
    [153] = 319,
    [154] = 320,
    [155] = 326,
    [156] = 387,
    [157] = 386,
    [158] = 391,
    [159] = 318,
    [160] = 344,
    [161] = 325,
    [162] = 341,
    [163] = 341,
    [164] = 229,
    [165] = 344,
    [166] = 341,
    [167] = 344,
    [168] = 344,
    [169] = 325,
    [170] = 341,
    [171] = 341,
    [172] = 344,
    [173] = 397,
    [174] = 341,
    [175] = 397,
    [176] = 344,
    [177] = 325,
    [178] = 341,
    [179] = 341,
    [180] = 356,
    [181] = 383,
    [182] = 356,
    [183] = 384,
    [184] = 356,
    [185] = 356,
    [186] = 405,
    [187] = 356,
    [188] = 386,
    [189] = 324,
    [190] = 325,
    [191] = 340,
    [192] = 325,
    [193] = 341,
    [194] = 324,
    [195] = 344,
    [196] = 340,
    [197] = 344,
    [198] = 341,
    [199] = 341,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(146),
        [sym_namespace_declaration] = STATE(147),
        [sym_class_declaration] = STATE(148),
        [sym_struct_declaration] = STATE(148),
        [sym_field_declaration] = STATE(149),
        [sym_variable_declaration] = STATE(150),
        [sym__type] = STATE(151),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(152),
        [sym_equals_value_clause] = STATE(65),
        [sym__literal] = STATE(72),
        [sym_boolean_literal] = STATE(70),
        [sym_character_literal] = STATE(70),
        [sym__unicode_escape_sequence] = STATE(84),
        [sym__simple_escape_sequence] = STATE(84),
        [sym_integer_literal] = STATE(70),
        [sym_real_literal] = STATE(70),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(153),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(154),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(155),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter_list] = STATE(156),
        [sym_type_parameter] = STATE(157),
        [sym_qualified_name] = STATE(158),
        [sym_alias_qualified_name] = STATE(114),
        [sym_name_equals] = STATE(126),
        [sym_static] = STATE(126),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(159),
        [aux_sym_class_declaration_repeat1] = STATE(160),
        [aux_sym_struct_declaration_repeat1] = STATE(161),
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [aux_sym_type_parameter_list_repeat1] = STATE(94),
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
        [anon_sym_abstract] = ACTIONS(45),
        [anon_sym_sealed] = ACTIONS(45),
        [anon_sym_static] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [anon_sym_readonly] = ACTIONS(51),
        [anon_sym_volatile] = ACTIONS(51),
        [anon_sym_bool] = ACTIONS(53),
        [anon_sym_byte] = ACTIONS(53),
        [anon_sym_char] = ACTIONS(53),
        [anon_sym_decimal] = ACTIONS(53),
        [anon_sym_double] = ACTIONS(53),
        [anon_sym_float] = ACTIONS(53),
        [anon_sym_int] = ACTIONS(53),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_object] = ACTIONS(53),
        [anon_sym_sbyte] = ACTIONS(53),
        [anon_sym_short] = ACTIONS(53),
        [anon_sym_string] = ACTIONS(53),
        [anon_sym_uint] = ACTIONS(53),
        [anon_sym_ulong] = ACTIONS(53),
        [anon_sym_ushort] = ACTIONS(53),
        [anon_sym_LT] = ACTIONS(55),
        [anon_sym_GT] = ACTIONS(57),
        [anon_sym_COLON_COLON] = ACTIONS(59),
        [sym_global] = ACTIONS(61),
        [sym_identifier_name] = ACTIONS(63),
        [sym_comment] = ACTIONS(65),
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
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_using] = ACTIONS(69),
        [anon_sym_namespace] = ACTIONS(71),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [2] = {
        [sym_qualified_name] = STATE(125),
        [sym_alias_qualified_name] = STATE(114),
        [sym_name_equals] = STATE(126),
        [sym_static] = STATE(126),
        [anon_sym_static] = ACTIONS(81),
        [sym_global] = ACTIONS(83),
        [sym_identifier_name] = ACTIONS(85),
        [sym_comment] = ACTIONS(65),
    },
    [3] = {
        [sym_qualified_name] = STATE(113),
        [sym_alias_qualified_name] = STATE(114),
        [sym_global] = ACTIONS(83),
        [sym_identifier_name] = ACTIONS(87),
        [sym_comment] = ACTIONS(65),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(89),
        [sym_comment] = ACTIONS(65),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(91),
        [sym_comment] = ACTIONS(65),
    },
    [6] = {
        [sym__class_modifiers] = STATE(100),
        [anon_sym_class] = ACTIONS(93),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(77),
        [anon_sym_public] = ACTIONS(77),
        [anon_sym_protected] = ACTIONS(77),
        [anon_sym_internal] = ACTIONS(77),
        [anon_sym_private] = ACTIONS(77),
        [anon_sym_unsafe] = ACTIONS(77),
        [sym_comment] = ACTIONS(65),
    },
    [7] = {
        [sym__class_modifiers] = STATE(100),
        [sym__struct_modifiers] = STATE(101),
        [anon_sym_class] = ACTIONS(93),
        [anon_sym_struct] = ACTIONS(95),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [sym_comment] = ACTIONS(65),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_using] = ACTIONS(99),
        [anon_sym_namespace] = ACTIONS(99),
        [anon_sym_class] = ACTIONS(99),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_abstract] = ACTIONS(99),
        [anon_sym_sealed] = ACTIONS(99),
        [anon_sym_static] = ACTIONS(99),
        [anon_sym_new] = ACTIONS(99),
        [anon_sym_public] = ACTIONS(99),
        [anon_sym_protected] = ACTIONS(99),
        [anon_sym_internal] = ACTIONS(99),
        [anon_sym_private] = ACTIONS(99),
        [anon_sym_unsafe] = ACTIONS(99),
        [sym_comment] = ACTIONS(65),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_namespace] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(101),
        [anon_sym_class] = ACTIONS(101),
        [anon_sym_struct] = ACTIONS(101),
        [anon_sym_abstract] = ACTIONS(101),
        [anon_sym_sealed] = ACTIONS(101),
        [anon_sym_static] = ACTIONS(101),
        [anon_sym_new] = ACTIONS(101),
        [anon_sym_public] = ACTIONS(101),
        [anon_sym_protected] = ACTIONS(101),
        [anon_sym_internal] = ACTIONS(101),
        [anon_sym_private] = ACTIONS(101),
        [anon_sym_unsafe] = ACTIONS(101),
        [sym_comment] = ACTIONS(65),
    },
    [11] = {
        [anon_sym_class] = ACTIONS(103),
        [sym_comment] = ACTIONS(65),
    },
    [12] = {
        [anon_sym_class] = ACTIONS(105),
        [sym_comment] = ACTIONS(65),
    },
    [13] = {
        [anon_sym_struct] = ACTIONS(107),
        [sym_comment] = ACTIONS(65),
    },
    [14] = {
        [anon_sym_struct] = ACTIONS(109),
        [sym_comment] = ACTIONS(65),
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
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_using] = ACTIONS(69),
        [anon_sym_namespace] = ACTIONS(71),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [16] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_namespace] = ACTIONS(71),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [anon_sym_namespace] = ACTIONS(113),
        [anon_sym_RBRACE] = ACTIONS(113),
        [anon_sym_class] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_unsafe] = ACTIONS(113),
        [sym_comment] = ACTIONS(65),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_using] = ACTIONS(115),
        [anon_sym_namespace] = ACTIONS(115),
        [anon_sym_class] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_unsafe] = ACTIONS(115),
        [sym_comment] = ACTIONS(65),
    },
    [19] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_namespace] = ACTIONS(71),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [20] = {
        [sym_identifier_name] = ACTIONS(119),
        [sym_comment] = ACTIONS(65),
    },
    [21] = {
        [sym_type_parameter_list] = STATE(24),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_LT] = ACTIONS(123),
        [sym_comment] = ACTIONS(65),
    },
    [22] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(32),
        [anon_sym_RBRACE] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [23] = {
        [sym__type] = STATE(90),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(91),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(131),
        [sym_comment] = ACTIONS(65),
    },
    [25] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(28),
        [anon_sym_RBRACE] = ACTIONS(133),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(135),
        [anon_sym_namespace] = ACTIONS(137),
        [anon_sym_RBRACE] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(137),
        [anon_sym_struct] = ACTIONS(137),
        [anon_sym_abstract] = ACTIONS(137),
        [anon_sym_sealed] = ACTIONS(137),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(137),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_protected] = ACTIONS(137),
        [anon_sym_internal] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_unsafe] = ACTIONS(137),
        [anon_sym_readonly] = ACTIONS(137),
        [anon_sym_volatile] = ACTIONS(137),
        [anon_sym_bool] = ACTIONS(137),
        [anon_sym_byte] = ACTIONS(137),
        [anon_sym_char] = ACTIONS(137),
        [anon_sym_decimal] = ACTIONS(137),
        [anon_sym_double] = ACTIONS(137),
        [anon_sym_float] = ACTIONS(137),
        [anon_sym_int] = ACTIONS(137),
        [anon_sym_long] = ACTIONS(137),
        [anon_sym_object] = ACTIONS(137),
        [anon_sym_sbyte] = ACTIONS(137),
        [anon_sym_short] = ACTIONS(137),
        [anon_sym_string] = ACTIONS(137),
        [anon_sym_uint] = ACTIONS(137),
        [anon_sym_ulong] = ACTIONS(137),
        [anon_sym_ushort] = ACTIONS(137),
        [sym_identifier_name] = ACTIONS(139),
        [sym_comment] = ACTIONS(65),
    },
    [27] = {
        [anon_sym_RBRACE] = ACTIONS(141),
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
        [sym_comment] = ACTIONS(65),
    },
    [28] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_namespace] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(145),
        [anon_sym_class] = ACTIONS(147),
        [anon_sym_struct] = ACTIONS(147),
        [anon_sym_abstract] = ACTIONS(147),
        [anon_sym_sealed] = ACTIONS(147),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(147),
        [anon_sym_public] = ACTIONS(147),
        [anon_sym_protected] = ACTIONS(147),
        [anon_sym_internal] = ACTIONS(147),
        [anon_sym_private] = ACTIONS(147),
        [anon_sym_unsafe] = ACTIONS(147),
        [anon_sym_readonly] = ACTIONS(147),
        [anon_sym_volatile] = ACTIONS(147),
        [anon_sym_bool] = ACTIONS(147),
        [anon_sym_byte] = ACTIONS(147),
        [anon_sym_char] = ACTIONS(147),
        [anon_sym_decimal] = ACTIONS(147),
        [anon_sym_double] = ACTIONS(147),
        [anon_sym_float] = ACTIONS(147),
        [anon_sym_int] = ACTIONS(147),
        [anon_sym_long] = ACTIONS(147),
        [anon_sym_object] = ACTIONS(147),
        [anon_sym_sbyte] = ACTIONS(147),
        [anon_sym_short] = ACTIONS(147),
        [anon_sym_string] = ACTIONS(147),
        [anon_sym_uint] = ACTIONS(147),
        [anon_sym_ulong] = ACTIONS(147),
        [anon_sym_ushort] = ACTIONS(147),
        [sym_identifier_name] = ACTIONS(149),
        [sym_comment] = ACTIONS(65),
    },
    [30] = {
        [anon_sym_RBRACE] = ACTIONS(151),
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
        [sym_comment] = ACTIONS(65),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_namespace] = ACTIONS(155),
        [anon_sym_RBRACE] = ACTIONS(153),
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
        [anon_sym_readonly] = ACTIONS(155),
        [anon_sym_volatile] = ACTIONS(155),
        [anon_sym_bool] = ACTIONS(155),
        [anon_sym_byte] = ACTIONS(155),
        [anon_sym_char] = ACTIONS(155),
        [anon_sym_decimal] = ACTIONS(155),
        [anon_sym_double] = ACTIONS(155),
        [anon_sym_float] = ACTIONS(155),
        [anon_sym_int] = ACTIONS(155),
        [anon_sym_long] = ACTIONS(155),
        [anon_sym_object] = ACTIONS(155),
        [anon_sym_sbyte] = ACTIONS(155),
        [anon_sym_short] = ACTIONS(155),
        [anon_sym_string] = ACTIONS(155),
        [anon_sym_uint] = ACTIONS(155),
        [anon_sym_ulong] = ACTIONS(155),
        [anon_sym_ushort] = ACTIONS(155),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(65),
    },
    [32] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(133),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [33] = {
        [sym_identifier_name] = ACTIONS(159),
        [sym_comment] = ACTIONS(65),
    },
    [34] = {
        [sym_type_parameter_list] = STATE(36),
        [anon_sym_LBRACE] = ACTIONS(161),
        [anon_sym_LT] = ACTIONS(123),
        [sym_comment] = ACTIONS(65),
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
        [anon_sym_RBRACE] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [36] = {
        [anon_sym_LBRACE] = ACTIONS(177),
        [sym_comment] = ACTIONS(65),
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
        [anon_sym_RBRACE] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_namespace] = ACTIONS(183),
        [anon_sym_RBRACE] = ACTIONS(181),
        [anon_sym_class] = ACTIONS(183),
        [anon_sym_struct] = ACTIONS(183),
        [anon_sym_abstract] = ACTIONS(183),
        [anon_sym_sealed] = ACTIONS(183),
        [anon_sym_static] = ACTIONS(183),
        [anon_sym_new] = ACTIONS(183),
        [anon_sym_public] = ACTIONS(183),
        [anon_sym_protected] = ACTIONS(183),
        [anon_sym_internal] = ACTIONS(183),
        [anon_sym_private] = ACTIONS(183),
        [anon_sym_unsafe] = ACTIONS(183),
        [anon_sym_readonly] = ACTIONS(183),
        [anon_sym_volatile] = ACTIONS(183),
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
        [sym_comment] = ACTIONS(65),
    },
    [39] = {
        [sym__class_modifiers] = STATE(100),
        [sym__field_modifiers] = STATE(99),
        [anon_sym_class] = ACTIONS(187),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(171),
        [anon_sym_public] = ACTIONS(171),
        [anon_sym_protected] = ACTIONS(171),
        [anon_sym_internal] = ACTIONS(171),
        [anon_sym_private] = ACTIONS(171),
        [anon_sym_unsafe] = ACTIONS(171),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(191),
        [sym_comment] = ACTIONS(65),
    },
    [40] = {
        [sym__class_modifiers] = STATE(100),
        [sym__struct_modifiers] = STATE(101),
        [sym__field_modifiers] = STATE(99),
        [anon_sym_class] = ACTIONS(187),
        [anon_sym_struct] = ACTIONS(193),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(191),
        [sym_comment] = ACTIONS(65),
    },
    [41] = {
        [sym__field_modifiers] = STATE(99),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(175),
        [anon_sym_public] = ACTIONS(175),
        [anon_sym_protected] = ACTIONS(175),
        [anon_sym_internal] = ACTIONS(175),
        [anon_sym_private] = ACTIONS(175),
        [anon_sym_unsafe] = ACTIONS(175),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(191),
        [sym_comment] = ACTIONS(65),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(195),
        [anon_sym_GT] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(197),
        [sym_comment] = ACTIONS(65),
    },
    [43] = {
        [sym_type_parameter_list] = STATE(89),
        [anon_sym_COMMA] = ACTIONS(199),
        [anon_sym_LT] = ACTIONS(123),
        [anon_sym_GT] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(65),
    },
    [44] = {
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
        [sym_comment] = ACTIONS(65),
    },
    [45] = {
        [anon_sym_SEMI] = ACTIONS(209),
        [sym_comment] = ACTIONS(65),
    },
    [46] = {
        [sym_variable_declarator] = STATE(58),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(65),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(199),
        [anon_sym_GT] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(65),
    },
    [48] = {
        [sym_variable_declaration] = STATE(53),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [49] = {
        [anon_sym_bool] = ACTIONS(213),
        [anon_sym_byte] = ACTIONS(213),
        [anon_sym_char] = ACTIONS(213),
        [anon_sym_decimal] = ACTIONS(213),
        [anon_sym_double] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(213),
        [anon_sym_int] = ACTIONS(213),
        [anon_sym_long] = ACTIONS(213),
        [anon_sym_object] = ACTIONS(213),
        [anon_sym_sbyte] = ACTIONS(213),
        [anon_sym_short] = ACTIONS(213),
        [anon_sym_string] = ACTIONS(213),
        [anon_sym_uint] = ACTIONS(213),
        [anon_sym_ulong] = ACTIONS(213),
        [anon_sym_ushort] = ACTIONS(213),
        [sym_identifier_name] = ACTIONS(215),
        [sym_comment] = ACTIONS(65),
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
        [anon_sym_RBRACE] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [51] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_namespace] = ACTIONS(221),
        [anon_sym_RBRACE] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(221),
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
        [sym_comment] = ACTIONS(65),
    },
    [52] = {
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
        [sym_comment] = ACTIONS(65),
    },
    [53] = {
        [anon_sym_SEMI] = ACTIONS(231),
        [sym_comment] = ACTIONS(65),
    },
    [54] = {
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
        [sym_comment] = ACTIONS(65),
    },
    [55] = {
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
        [sym_comment] = ACTIONS(65),
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
        [anon_sym_RBRACE] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [57] = {
        [sym_equals_value_clause] = STATE(65),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_EQ] = ACTIONS(247),
        [sym_comment] = ACTIONS(65),
    },
    [58] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(249),
        [anon_sym_COMMA] = ACTIONS(251),
        [sym_comment] = ACTIONS(65),
    },
    [59] = {
        [sym_variable_declarator] = STATE(63),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(65),
    },
    [60] = {
        [anon_sym_SEMI] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(255),
        [sym_comment] = ACTIONS(65),
    },
    [61] = {
        [sym_variable_declarator] = STATE(62),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(65),
    },
    [62] = {
        [anon_sym_SEMI] = ACTIONS(257),
        [anon_sym_COMMA] = ACTIONS(257),
        [sym_comment] = ACTIONS(65),
    },
    [63] = {
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(259),
        [sym_comment] = ACTIONS(65),
    },
    [64] = {
        [sym__literal] = STATE(72),
        [sym_boolean_literal] = STATE(70),
        [sym_character_literal] = STATE(70),
        [sym_integer_literal] = STATE(70),
        [sym_real_literal] = STATE(70),
        [anon_sym_true] = ACTIONS(261),
        [anon_sym_false] = ACTIONS(261),
        [anon_sym_SQUOTE] = ACTIONS(263),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(265),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(267),
        [sym_null_literal] = ACTIONS(269),
        [anon_sym_DOT] = ACTIONS(271),
        [sym_comment] = ACTIONS(65),
    },
    [65] = {
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_COMMA] = ACTIONS(273),
        [sym_comment] = ACTIONS(65),
    },
    [66] = {
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(275),
        [sym_comment] = ACTIONS(65),
    },
    [67] = {
        [sym__unicode_escape_sequence] = STATE(84),
        [sym__simple_escape_sequence] = STATE(84),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(277),
        [sym__hexadecimal_escape_sequence] = ACTIONS(277),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(279),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(279),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(281),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(281),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(281),
        [anon_sym_BSLASH0] = ACTIONS(281),
        [anon_sym_BSLASHa] = ACTIONS(281),
        [anon_sym_BSLASHb] = ACTIONS(281),
        [anon_sym_BSLASHf] = ACTIONS(281),
        [anon_sym_BSLASHn] = ACTIONS(281),
        [anon_sym_BSLASHr] = ACTIONS(281),
        [anon_sym_BSLASHt] = ACTIONS(281),
        [anon_sym_BSLASHv] = ACTIONS(281),
        [sym_comment] = ACTIONS(65),
    },
    [68] = {
        [anon_sym_SEMI] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(283),
        [sym__integer_type_suffix] = ACTIONS(285),
        [anon_sym_DOT] = ACTIONS(287),
        [sym__real_type_suffix] = ACTIONS(289),
        [sym__exponent_part] = ACTIONS(291),
        [sym_comment] = ACTIONS(65),
    },
    [69] = {
        [anon_sym_SEMI] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(283),
        [sym__integer_type_suffix] = ACTIONS(285),
        [sym_comment] = ACTIONS(65),
    },
    [70] = {
        [anon_sym_SEMI] = ACTIONS(293),
        [anon_sym_COMMA] = ACTIONS(293),
        [sym_comment] = ACTIONS(65),
    },
    [71] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(295),
        [sym_comment] = ACTIONS(65),
    },
    [72] = {
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_COMMA] = ACTIONS(297),
        [sym_comment] = ACTIONS(65),
    },
    [73] = {
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_COMMA] = ACTIONS(299),
        [sym__real_type_suffix] = ACTIONS(301),
        [sym__exponent_part] = ACTIONS(303),
        [sym_comment] = ACTIONS(65),
    },
    [74] = {
        [anon_sym_SEMI] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(305),
        [sym_comment] = ACTIONS(65),
    },
    [75] = {
        [anon_sym_SEMI] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(305),
        [sym__real_type_suffix] = ACTIONS(307),
        [sym_comment] = ACTIONS(65),
    },
    [76] = {
        [anon_sym_SEMI] = ACTIONS(309),
        [anon_sym_COMMA] = ACTIONS(309),
        [sym_comment] = ACTIONS(65),
    },
    [77] = {
        [anon_sym_SEMI] = ACTIONS(311),
        [anon_sym_COMMA] = ACTIONS(311),
        [sym_comment] = ACTIONS(65),
    },
    [78] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(313),
        [sym_comment] = ACTIONS(65),
    },
    [79] = {
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_COMMA] = ACTIONS(299),
        [sym_comment] = ACTIONS(65),
    },
    [80] = {
        [anon_sym_SEMI] = ACTIONS(299),
        [anon_sym_COMMA] = ACTIONS(299),
        [sym__real_type_suffix] = ACTIONS(301),
        [sym_comment] = ACTIONS(65),
    },
    [81] = {
        [anon_sym_SEMI] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(305),
        [sym__real_type_suffix] = ACTIONS(307),
        [sym__exponent_part] = ACTIONS(315),
        [sym_comment] = ACTIONS(65),
    },
    [82] = {
        [anon_sym_SEMI] = ACTIONS(309),
        [anon_sym_COMMA] = ACTIONS(309),
        [sym__real_type_suffix] = ACTIONS(317),
        [sym_comment] = ACTIONS(65),
    },
    [83] = {
        [anon_sym_SEMI] = ACTIONS(319),
        [anon_sym_COMMA] = ACTIONS(319),
        [sym_comment] = ACTIONS(65),
    },
    [84] = {
        [anon_sym_SQUOTE] = ACTIONS(321),
        [sym_comment] = ACTIONS(65),
    },
    [85] = {
        [anon_sym_SQUOTE] = ACTIONS(323),
        [sym_comment] = ACTIONS(65),
    },
    [86] = {
        [anon_sym_SQUOTE] = ACTIONS(325),
        [sym_comment] = ACTIONS(65),
    },
    [87] = {
        [anon_sym_SEMI] = ACTIONS(327),
        [anon_sym_COMMA] = ACTIONS(327),
        [sym_comment] = ACTIONS(65),
    },
    [88] = {
        [anon_sym_RBRACE] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(331),
        [anon_sym_struct] = ACTIONS(331),
        [anon_sym_abstract] = ACTIONS(331),
        [anon_sym_sealed] = ACTIONS(331),
        [anon_sym_static] = ACTIONS(331),
        [anon_sym_new] = ACTIONS(331),
        [anon_sym_public] = ACTIONS(331),
        [anon_sym_protected] = ACTIONS(331),
        [anon_sym_internal] = ACTIONS(331),
        [anon_sym_private] = ACTIONS(331),
        [anon_sym_unsafe] = ACTIONS(331),
        [anon_sym_readonly] = ACTIONS(331),
        [anon_sym_volatile] = ACTIONS(331),
        [anon_sym_bool] = ACTIONS(331),
        [anon_sym_byte] = ACTIONS(331),
        [anon_sym_char] = ACTIONS(331),
        [anon_sym_decimal] = ACTIONS(331),
        [anon_sym_double] = ACTIONS(331),
        [anon_sym_float] = ACTIONS(331),
        [anon_sym_int] = ACTIONS(331),
        [anon_sym_long] = ACTIONS(331),
        [anon_sym_object] = ACTIONS(331),
        [anon_sym_sbyte] = ACTIONS(331),
        [anon_sym_short] = ACTIONS(331),
        [anon_sym_string] = ACTIONS(331),
        [anon_sym_uint] = ACTIONS(331),
        [anon_sym_ulong] = ACTIONS(331),
        [anon_sym_ushort] = ACTIONS(331),
        [sym_identifier_name] = ACTIONS(333),
        [sym_comment] = ACTIONS(65),
    },
    [89] = {
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_GT] = ACTIONS(335),
        [sym_identifier_name] = ACTIONS(337),
        [sym_comment] = ACTIONS(65),
    },
    [90] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_GT] = ACTIONS(339),
        [sym_comment] = ACTIONS(65),
    },
    [91] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(94),
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_GT] = ACTIONS(343),
        [sym_comment] = ACTIONS(65),
    },
    [92] = {
        [sym__type] = STATE(90),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(98),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [93] = {
        [anon_sym_LBRACE] = ACTIONS(345),
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_GT] = ACTIONS(345),
        [sym_identifier_name] = ACTIONS(347),
        [sym_comment] = ACTIONS(65),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_GT] = ACTIONS(351),
        [sym_comment] = ACTIONS(65),
    },
    [95] = {
        [sym__type] = STATE(90),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(97),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [96] = {
        [anon_sym_LBRACE] = ACTIONS(353),
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_GT] = ACTIONS(353),
        [sym_identifier_name] = ACTIONS(355),
        [sym_comment] = ACTIONS(65),
    },
    [97] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_GT] = ACTIONS(357),
        [sym_comment] = ACTIONS(65),
    },
    [98] = {
        [anon_sym_COMMA] = ACTIONS(359),
        [anon_sym_GT] = ACTIONS(359),
        [sym_comment] = ACTIONS(65),
    },
    [99] = {
        [anon_sym_bool] = ACTIONS(361),
        [anon_sym_byte] = ACTIONS(361),
        [anon_sym_char] = ACTIONS(361),
        [anon_sym_decimal] = ACTIONS(361),
        [anon_sym_double] = ACTIONS(361),
        [anon_sym_float] = ACTIONS(361),
        [anon_sym_int] = ACTIONS(361),
        [anon_sym_long] = ACTIONS(361),
        [anon_sym_object] = ACTIONS(361),
        [anon_sym_sbyte] = ACTIONS(361),
        [anon_sym_short] = ACTIONS(361),
        [anon_sym_string] = ACTIONS(361),
        [anon_sym_uint] = ACTIONS(361),
        [anon_sym_ulong] = ACTIONS(361),
        [anon_sym_ushort] = ACTIONS(361),
        [sym_identifier_name] = ACTIONS(363),
        [sym_comment] = ACTIONS(65),
    },
    [100] = {
        [anon_sym_class] = ACTIONS(365),
        [sym_comment] = ACTIONS(65),
    },
    [101] = {
        [anon_sym_struct] = ACTIONS(367),
        [sym_comment] = ACTIONS(65),
    },
    [102] = {
        [sym_type_parameter_list] = STATE(104),
        [anon_sym_LBRACE] = ACTIONS(369),
        [anon_sym_LT] = ACTIONS(123),
        [sym_comment] = ACTIONS(65),
    },
    [103] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(106),
        [anon_sym_RBRACE] = ACTIONS(371),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [104] = {
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_comment] = ACTIONS(65),
    },
    [105] = {
        [ts_builtin_sym_end] = ACTIONS(373),
        [anon_sym_namespace] = ACTIONS(375),
        [anon_sym_RBRACE] = ACTIONS(373),
        [anon_sym_class] = ACTIONS(375),
        [anon_sym_struct] = ACTIONS(375),
        [anon_sym_abstract] = ACTIONS(375),
        [anon_sym_sealed] = ACTIONS(375),
        [anon_sym_static] = ACTIONS(375),
        [anon_sym_new] = ACTIONS(375),
        [anon_sym_public] = ACTIONS(375),
        [anon_sym_protected] = ACTIONS(375),
        [anon_sym_internal] = ACTIONS(375),
        [anon_sym_private] = ACTIONS(375),
        [anon_sym_unsafe] = ACTIONS(375),
        [anon_sym_readonly] = ACTIONS(375),
        [anon_sym_volatile] = ACTIONS(375),
        [anon_sym_bool] = ACTIONS(375),
        [anon_sym_byte] = ACTIONS(375),
        [anon_sym_char] = ACTIONS(375),
        [anon_sym_decimal] = ACTIONS(375),
        [anon_sym_double] = ACTIONS(375),
        [anon_sym_float] = ACTIONS(375),
        [anon_sym_int] = ACTIONS(375),
        [anon_sym_long] = ACTIONS(375),
        [anon_sym_object] = ACTIONS(375),
        [anon_sym_sbyte] = ACTIONS(375),
        [anon_sym_short] = ACTIONS(375),
        [anon_sym_string] = ACTIONS(375),
        [anon_sym_uint] = ACTIONS(375),
        [anon_sym_ulong] = ACTIONS(375),
        [anon_sym_ushort] = ACTIONS(375),
        [sym_identifier_name] = ACTIONS(377),
        [sym_comment] = ACTIONS(65),
    },
    [106] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [107] = {
        [sym_type_parameter_list] = STATE(109),
        [anon_sym_LBRACE] = ACTIONS(379),
        [anon_sym_LT] = ACTIONS(123),
        [sym_comment] = ACTIONS(65),
    },
    [108] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(111),
        [anon_sym_RBRACE] = ACTIONS(381),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [109] = {
        [anon_sym_LBRACE] = ACTIONS(161),
        [sym_comment] = ACTIONS(65),
    },
    [110] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_namespace] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(383),
        [anon_sym_class] = ACTIONS(385),
        [anon_sym_struct] = ACTIONS(385),
        [anon_sym_abstract] = ACTIONS(385),
        [anon_sym_sealed] = ACTIONS(385),
        [anon_sym_static] = ACTIONS(385),
        [anon_sym_new] = ACTIONS(385),
        [anon_sym_public] = ACTIONS(385),
        [anon_sym_protected] = ACTIONS(385),
        [anon_sym_internal] = ACTIONS(385),
        [anon_sym_private] = ACTIONS(385),
        [anon_sym_unsafe] = ACTIONS(385),
        [anon_sym_readonly] = ACTIONS(385),
        [anon_sym_volatile] = ACTIONS(385),
        [anon_sym_bool] = ACTIONS(385),
        [anon_sym_byte] = ACTIONS(385),
        [anon_sym_char] = ACTIONS(385),
        [anon_sym_decimal] = ACTIONS(385),
        [anon_sym_double] = ACTIONS(385),
        [anon_sym_float] = ACTIONS(385),
        [anon_sym_int] = ACTIONS(385),
        [anon_sym_long] = ACTIONS(385),
        [anon_sym_object] = ACTIONS(385),
        [anon_sym_sbyte] = ACTIONS(385),
        [anon_sym_short] = ACTIONS(385),
        [anon_sym_string] = ACTIONS(385),
        [anon_sym_uint] = ACTIONS(385),
        [anon_sym_ulong] = ACTIONS(385),
        [anon_sym_ushort] = ACTIONS(385),
        [sym_identifier_name] = ACTIONS(387),
        [sym_comment] = ACTIONS(65),
    },
    [111] = {
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
        [anon_sym_RBRACE] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [112] = {
        [anon_sym_COLON_COLON] = ACTIONS(389),
        [sym_comment] = ACTIONS(65),
    },
    [113] = {
        [anon_sym_LBRACE] = ACTIONS(391),
        [anon_sym_DOT] = ACTIONS(393),
        [sym_comment] = ACTIONS(65),
    },
    [114] = {
        [anon_sym_DOT] = ACTIONS(393),
        [sym_comment] = ACTIONS(65),
    },
    [115] = {
        [sym_identifier_name] = ACTIONS(395),
        [sym_comment] = ACTIONS(65),
    },
    [116] = {
        [anon_sym_SEMI] = ACTIONS(397),
        [anon_sym_LBRACE] = ACTIONS(397),
        [anon_sym_DOT] = ACTIONS(397),
        [sym_comment] = ACTIONS(65),
    },
    [117] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(119),
        [anon_sym_namespace] = ACTIONS(71),
        [anon_sym_RBRACE] = ACTIONS(399),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [118] = {
        [ts_builtin_sym_end] = ACTIONS(401),
        [anon_sym_namespace] = ACTIONS(401),
        [anon_sym_RBRACE] = ACTIONS(401),
        [anon_sym_class] = ACTIONS(401),
        [anon_sym_struct] = ACTIONS(401),
        [anon_sym_abstract] = ACTIONS(401),
        [anon_sym_sealed] = ACTIONS(401),
        [anon_sym_static] = ACTIONS(401),
        [anon_sym_new] = ACTIONS(401),
        [anon_sym_public] = ACTIONS(401),
        [anon_sym_protected] = ACTIONS(401),
        [anon_sym_internal] = ACTIONS(401),
        [anon_sym_private] = ACTIONS(401),
        [anon_sym_unsafe] = ACTIONS(401),
        [sym_comment] = ACTIONS(65),
    },
    [119] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_namespace] = ACTIONS(71),
        [anon_sym_RBRACE] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [120] = {
        [ts_builtin_sym_end] = ACTIONS(405),
        [anon_sym_namespace] = ACTIONS(405),
        [anon_sym_RBRACE] = ACTIONS(405),
        [anon_sym_class] = ACTIONS(405),
        [anon_sym_struct] = ACTIONS(405),
        [anon_sym_abstract] = ACTIONS(405),
        [anon_sym_sealed] = ACTIONS(405),
        [anon_sym_static] = ACTIONS(405),
        [anon_sym_new] = ACTIONS(405),
        [anon_sym_public] = ACTIONS(405),
        [anon_sym_protected] = ACTIONS(405),
        [anon_sym_internal] = ACTIONS(405),
        [anon_sym_private] = ACTIONS(405),
        [anon_sym_unsafe] = ACTIONS(405),
        [sym_comment] = ACTIONS(65),
    },
    [121] = {
        [sym_identifier_name] = ACTIONS(407),
        [sym_comment] = ACTIONS(65),
    },
    [122] = {
        [anon_sym_DOT] = ACTIONS(409),
        [sym_comment] = ACTIONS(65),
    },
    [123] = {
        [sym_global] = ACTIONS(411),
        [sym_identifier_name] = ACTIONS(413),
        [sym_comment] = ACTIONS(65),
    },
    [124] = {
        [anon_sym_SEMI] = ACTIONS(415),
        [anon_sym_EQ] = ACTIONS(417),
        [anon_sym_DOT] = ACTIONS(393),
        [sym_comment] = ACTIONS(65),
    },
    [125] = {
        [anon_sym_SEMI] = ACTIONS(415),
        [anon_sym_DOT] = ACTIONS(393),
        [sym_comment] = ACTIONS(65),
    },
    [126] = {
        [sym_qualified_name] = STATE(127),
        [sym_alias_qualified_name] = STATE(114),
        [sym_global] = ACTIONS(83),
        [sym_identifier_name] = ACTIONS(419),
        [sym_comment] = ACTIONS(65),
    },
    [127] = {
        [anon_sym_SEMI] = ACTIONS(421),
        [anon_sym_DOT] = ACTIONS(393),
        [sym_comment] = ACTIONS(65),
    },
    [128] = {
        [ts_builtin_sym_end] = ACTIONS(423),
        [anon_sym_using] = ACTIONS(423),
        [anon_sym_namespace] = ACTIONS(423),
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
        [sym_comment] = ACTIONS(65),
    },
    [129] = {
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_using] = ACTIONS(425),
        [anon_sym_namespace] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_struct] = ACTIONS(425),
        [anon_sym_abstract] = ACTIONS(425),
        [anon_sym_sealed] = ACTIONS(425),
        [anon_sym_static] = ACTIONS(425),
        [anon_sym_new] = ACTIONS(425),
        [anon_sym_public] = ACTIONS(425),
        [anon_sym_protected] = ACTIONS(425),
        [anon_sym_internal] = ACTIONS(425),
        [anon_sym_private] = ACTIONS(425),
        [anon_sym_unsafe] = ACTIONS(425),
        [sym_comment] = ACTIONS(65),
    },
    [130] = {
        [sym_global] = ACTIONS(427),
        [sym_identifier_name] = ACTIONS(429),
        [sym_comment] = ACTIONS(65),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_using] = ACTIONS(434),
        [anon_sym_namespace] = ACTIONS(434),
        [anon_sym_RBRACE] = ACTIONS(437),
        [anon_sym_class] = ACTIONS(440),
        [anon_sym_struct] = ACTIONS(440),
        [anon_sym_abstract] = ACTIONS(440),
        [anon_sym_sealed] = ACTIONS(440),
        [anon_sym_static] = ACTIONS(440),
        [anon_sym_new] = ACTIONS(440),
        [anon_sym_public] = ACTIONS(440),
        [anon_sym_protected] = ACTIONS(440),
        [anon_sym_internal] = ACTIONS(440),
        [anon_sym_private] = ACTIONS(440),
        [anon_sym_unsafe] = ACTIONS(440),
        [anon_sym_readonly] = ACTIONS(445),
        [anon_sym_volatile] = ACTIONS(445),
        [anon_sym_bool] = ACTIONS(445),
        [anon_sym_byte] = ACTIONS(445),
        [anon_sym_char] = ACTIONS(445),
        [anon_sym_decimal] = ACTIONS(445),
        [anon_sym_double] = ACTIONS(445),
        [anon_sym_float] = ACTIONS(445),
        [anon_sym_int] = ACTIONS(445),
        [anon_sym_long] = ACTIONS(445),
        [anon_sym_object] = ACTIONS(445),
        [anon_sym_sbyte] = ACTIONS(445),
        [anon_sym_short] = ACTIONS(445),
        [anon_sym_string] = ACTIONS(445),
        [anon_sym_uint] = ACTIONS(445),
        [anon_sym_ulong] = ACTIONS(445),
        [anon_sym_ushort] = ACTIONS(445),
        [sym_identifier_name] = ACTIONS(448),
        [sym_comment] = ACTIONS(65),
    },
    [132] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(175),
        [sym_struct_declaration] = STATE(175),
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
        [aux_sym_compilation_unit_repeat2] = STATE(119),
        [aux_sym_class_declaration_repeat1] = STATE(160),
        [aux_sym_struct_declaration_repeat1] = STATE(161),
        [anon_sym_namespace] = ACTIONS(451),
        [anon_sym_RBRACE] = ACTIONS(453),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [133] = {
        [ts_builtin_sym_end] = ACTIONS(455),
        [anon_sym_namespace] = ACTIONS(466),
        [anon_sym_RBRACE] = ACTIONS(455),
        [anon_sym_class] = ACTIONS(466),
        [anon_sym_struct] = ACTIONS(466),
        [anon_sym_abstract] = ACTIONS(466),
        [anon_sym_sealed] = ACTIONS(466),
        [anon_sym_static] = ACTIONS(466),
        [anon_sym_new] = ACTIONS(466),
        [anon_sym_public] = ACTIONS(466),
        [anon_sym_protected] = ACTIONS(466),
        [anon_sym_internal] = ACTIONS(466),
        [anon_sym_private] = ACTIONS(466),
        [anon_sym_unsafe] = ACTIONS(466),
        [anon_sym_readonly] = ACTIONS(477),
        [anon_sym_volatile] = ACTIONS(477),
        [anon_sym_bool] = ACTIONS(477),
        [anon_sym_byte] = ACTIONS(477),
        [anon_sym_char] = ACTIONS(477),
        [anon_sym_decimal] = ACTIONS(477),
        [anon_sym_double] = ACTIONS(477),
        [anon_sym_float] = ACTIONS(477),
        [anon_sym_int] = ACTIONS(477),
        [anon_sym_long] = ACTIONS(477),
        [anon_sym_object] = ACTIONS(477),
        [anon_sym_sbyte] = ACTIONS(477),
        [anon_sym_short] = ACTIONS(477),
        [anon_sym_string] = ACTIONS(477),
        [anon_sym_uint] = ACTIONS(477),
        [anon_sym_ulong] = ACTIONS(477),
        [anon_sym_ushort] = ACTIONS(477),
        [sym_identifier_name] = ACTIONS(486),
        [sym_comment] = ACTIONS(65),
    },
    [134] = {
        [sym_identifier_name] = ACTIONS(495),
        [sym_comment] = ACTIONS(65),
    },
    [135] = {
        [sym_identifier_name] = ACTIONS(497),
        [sym_comment] = ACTIONS(65),
    },
    [136] = {
        [sym__type] = STATE(90),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(187),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(188),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(499),
        [sym_comment] = ACTIONS(65),
    },
    [137] = {
        [sym__literal] = STATE(72),
        [sym_boolean_literal] = STATE(70),
        [sym_character_literal] = STATE(70),
        [sym_integer_literal] = STATE(70),
        [sym_real_literal] = STATE(70),
        [anon_sym_true] = ACTIONS(501),
        [anon_sym_false] = ACTIONS(501),
        [anon_sym_SQUOTE] = ACTIONS(263),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(265),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(267),
        [sym_null_literal] = ACTIONS(503),
        [anon_sym_DOT] = ACTIONS(271),
        [sym_global] = ACTIONS(427),
        [sym_identifier_name] = ACTIONS(429),
        [sym_comment] = ACTIONS(65),
    },
    [138] = {
        [sym__unicode_escape_sequence] = STATE(84),
        [sym__simple_escape_sequence] = STATE(84),
        [anon_sym_SEMI] = ACTIONS(327),
        [anon_sym_COMMA] = ACTIONS(327),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(505),
        [sym__hexadecimal_escape_sequence] = ACTIONS(277),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(279),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(279),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(281),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(281),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(281),
        [anon_sym_BSLASH0] = ACTIONS(281),
        [anon_sym_BSLASHa] = ACTIONS(281),
        [anon_sym_BSLASHb] = ACTIONS(281),
        [anon_sym_BSLASHf] = ACTIONS(281),
        [anon_sym_BSLASHn] = ACTIONS(281),
        [anon_sym_BSLASHr] = ACTIONS(281),
        [anon_sym_BSLASHt] = ACTIONS(281),
        [anon_sym_BSLASHv] = ACTIONS(281),
        [sym_comment] = ACTIONS(65),
    },
    [139] = {
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym__integer_type_suffix] = ACTIONS(285),
        [anon_sym_DOT] = ACTIONS(287),
        [sym__real_type_suffix] = ACTIONS(511),
        [sym__exponent_part] = ACTIONS(513),
        [sym_comment] = ACTIONS(65),
    },
    [140] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(515),
        [sym_identifier_name] = ACTIONS(395),
        [sym_comment] = ACTIONS(65),
    },
    [141] = {
        [anon_sym_SEMI] = ACTIONS(517),
        [anon_sym_COMMA] = ACTIONS(517),
        [sym_comment] = ACTIONS(65),
    },
    [142] = {
        [anon_sym_SEMI] = ACTIONS(522),
        [anon_sym_COMMA] = ACTIONS(522),
        [sym__real_type_suffix] = ACTIONS(526),
        [sym_comment] = ACTIONS(65),
    },
    [143] = {
        [sym__class_modifiers] = STATE(100),
        [sym__field_modifiers] = STATE(99),
        [anon_sym_class] = ACTIONS(187),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(171),
        [anon_sym_public] = ACTIONS(171),
        [anon_sym_protected] = ACTIONS(171),
        [anon_sym_internal] = ACTIONS(171),
        [anon_sym_private] = ACTIONS(171),
        [anon_sym_unsafe] = ACTIONS(171),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [sym_global] = ACTIONS(411),
        [sym_identifier_name] = ACTIONS(528),
        [sym_comment] = ACTIONS(65),
    },
    [144] = {
        [anon_sym_LBRACE] = ACTIONS(531),
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_GT] = ACTIONS(531),
        [sym_identifier_name] = ACTIONS(534),
        [sym_comment] = ACTIONS(65),
    },
    [145] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(156),
        [anon_sym_SEMI] = ACTIONS(537),
        [anon_sym_LBRACE] = ACTIONS(541),
        [anon_sym_COMMA] = ACTIONS(544),
        [anon_sym_EQ] = ACTIONS(547),
        [anon_sym_DOT] = ACTIONS(549),
        [anon_sym_LT] = ACTIONS(123),
        [anon_sym_GT] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(65),
    },
    [146] = {
        [ts_builtin_sym_end] = ACTIONS(553),
        [anon_sym_using] = ACTIONS(553),
        [anon_sym_namespace] = ACTIONS(553),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_struct] = ACTIONS(553),
        [anon_sym_abstract] = ACTIONS(553),
        [anon_sym_sealed] = ACTIONS(553),
        [anon_sym_static] = ACTIONS(553),
        [anon_sym_new] = ACTIONS(553),
        [anon_sym_public] = ACTIONS(553),
        [anon_sym_protected] = ACTIONS(553),
        [anon_sym_internal] = ACTIONS(553),
        [anon_sym_private] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(553),
        [sym_comment] = ACTIONS(65),
    },
    [147] = {
        [ts_builtin_sym_end] = ACTIONS(556),
        [anon_sym_namespace] = ACTIONS(556),
        [anon_sym_RBRACE] = ACTIONS(556),
        [anon_sym_class] = ACTIONS(556),
        [anon_sym_struct] = ACTIONS(556),
        [anon_sym_abstract] = ACTIONS(556),
        [anon_sym_sealed] = ACTIONS(556),
        [anon_sym_static] = ACTIONS(556),
        [anon_sym_new] = ACTIONS(556),
        [anon_sym_public] = ACTIONS(556),
        [anon_sym_protected] = ACTIONS(556),
        [anon_sym_internal] = ACTIONS(556),
        [anon_sym_private] = ACTIONS(556),
        [anon_sym_unsafe] = ACTIONS(556),
        [sym_comment] = ACTIONS(65),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(556),
        [anon_sym_namespace] = ACTIONS(559),
        [anon_sym_RBRACE] = ACTIONS(562),
        [anon_sym_class] = ACTIONS(569),
        [anon_sym_struct] = ACTIONS(569),
        [anon_sym_abstract] = ACTIONS(569),
        [anon_sym_sealed] = ACTIONS(569),
        [anon_sym_static] = ACTIONS(569),
        [anon_sym_new] = ACTIONS(569),
        [anon_sym_public] = ACTIONS(569),
        [anon_sym_protected] = ACTIONS(569),
        [anon_sym_internal] = ACTIONS(569),
        [anon_sym_private] = ACTIONS(569),
        [anon_sym_unsafe] = ACTIONS(569),
        [anon_sym_readonly] = ACTIONS(576),
        [anon_sym_volatile] = ACTIONS(576),
        [anon_sym_bool] = ACTIONS(576),
        [anon_sym_byte] = ACTIONS(576),
        [anon_sym_char] = ACTIONS(576),
        [anon_sym_decimal] = ACTIONS(576),
        [anon_sym_double] = ACTIONS(576),
        [anon_sym_float] = ACTIONS(576),
        [anon_sym_int] = ACTIONS(576),
        [anon_sym_long] = ACTIONS(576),
        [anon_sym_object] = ACTIONS(576),
        [anon_sym_sbyte] = ACTIONS(576),
        [anon_sym_short] = ACTIONS(576),
        [anon_sym_string] = ACTIONS(576),
        [anon_sym_uint] = ACTIONS(576),
        [anon_sym_ulong] = ACTIONS(576),
        [anon_sym_ushort] = ACTIONS(576),
        [sym_identifier_name] = ACTIONS(579),
        [sym_comment] = ACTIONS(65),
    },
    [149] = {
        [anon_sym_RBRACE] = ACTIONS(582),
        [anon_sym_class] = ACTIONS(576),
        [anon_sym_struct] = ACTIONS(576),
        [anon_sym_abstract] = ACTIONS(576),
        [anon_sym_sealed] = ACTIONS(576),
        [anon_sym_static] = ACTIONS(576),
        [anon_sym_new] = ACTIONS(576),
        [anon_sym_public] = ACTIONS(576),
        [anon_sym_protected] = ACTIONS(576),
        [anon_sym_internal] = ACTIONS(576),
        [anon_sym_private] = ACTIONS(576),
        [anon_sym_unsafe] = ACTIONS(576),
        [anon_sym_readonly] = ACTIONS(576),
        [anon_sym_volatile] = ACTIONS(576),
        [anon_sym_bool] = ACTIONS(576),
        [anon_sym_byte] = ACTIONS(576),
        [anon_sym_char] = ACTIONS(576),
        [anon_sym_decimal] = ACTIONS(576),
        [anon_sym_double] = ACTIONS(576),
        [anon_sym_float] = ACTIONS(576),
        [anon_sym_int] = ACTIONS(576),
        [anon_sym_long] = ACTIONS(576),
        [anon_sym_object] = ACTIONS(576),
        [anon_sym_sbyte] = ACTIONS(576),
        [anon_sym_short] = ACTIONS(576),
        [anon_sym_string] = ACTIONS(576),
        [anon_sym_uint] = ACTIONS(576),
        [anon_sym_ulong] = ACTIONS(576),
        [anon_sym_ushort] = ACTIONS(576),
        [sym_identifier_name] = ACTIONS(579),
        [sym_comment] = ACTIONS(65),
    },
    [150] = {
        [anon_sym_SEMI] = ACTIONS(585),
        [sym_comment] = ACTIONS(65),
    },
    [151] = {
        [sym_variable_declarator] = STATE(58),
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_GT] = ACTIONS(339),
        [sym_identifier_name] = ACTIONS(211),
        [sym_comment] = ACTIONS(65),
    },
    [152] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(587),
        [anon_sym_COMMA] = ACTIONS(591),
        [sym_comment] = ACTIONS(65),
    },
    [153] = {
        [anon_sym_class] = ACTIONS(595),
        [sym_comment] = ACTIONS(65),
    },
    [154] = {
        [anon_sym_struct] = ACTIONS(598),
        [sym_comment] = ACTIONS(65),
    },
    [155] = {
        [anon_sym_bool] = ACTIONS(601),
        [anon_sym_byte] = ACTIONS(601),
        [anon_sym_char] = ACTIONS(601),
        [anon_sym_decimal] = ACTIONS(601),
        [anon_sym_double] = ACTIONS(601),
        [anon_sym_float] = ACTIONS(601),
        [anon_sym_int] = ACTIONS(601),
        [anon_sym_long] = ACTIONS(601),
        [anon_sym_object] = ACTIONS(601),
        [anon_sym_sbyte] = ACTIONS(601),
        [anon_sym_short] = ACTIONS(601),
        [anon_sym_string] = ACTIONS(601),
        [anon_sym_uint] = ACTIONS(601),
        [anon_sym_ulong] = ACTIONS(601),
        [anon_sym_ushort] = ACTIONS(601),
        [sym_identifier_name] = ACTIONS(604),
        [sym_comment] = ACTIONS(65),
    },
    [156] = {
        [anon_sym_LBRACE] = ACTIONS(607),
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_GT] = ACTIONS(335),
        [sym_identifier_name] = ACTIONS(337),
        [sym_comment] = ACTIONS(65),
    },
    [157] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(94),
        [anon_sym_COMMA] = ACTIONS(609),
        [anon_sym_GT] = ACTIONS(613),
        [sym_comment] = ACTIONS(65),
    },
    [158] = {
        [anon_sym_SEMI] = ACTIONS(617),
        [anon_sym_LBRACE] = ACTIONS(391),
        [anon_sym_DOT] = ACTIONS(393),
        [sym_comment] = ACTIONS(65),
    },
    [159] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(619),
        [anon_sym_namespace] = ACTIONS(71),
        [anon_sym_RBRACE] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [160] = {
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
        [anon_sym_RBRACE] = ACTIONS(622),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [161] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(624),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [162] = {
        [ts_builtin_sym_end] = ACTIONS(626),
        [anon_sym_namespace] = ACTIONS(630),
        [anon_sym_RBRACE] = ACTIONS(626),
        [anon_sym_class] = ACTIONS(630),
        [anon_sym_struct] = ACTIONS(630),
        [anon_sym_abstract] = ACTIONS(630),
        [anon_sym_sealed] = ACTIONS(630),
        [anon_sym_static] = ACTIONS(630),
        [anon_sym_new] = ACTIONS(630),
        [anon_sym_public] = ACTIONS(630),
        [anon_sym_protected] = ACTIONS(630),
        [anon_sym_internal] = ACTIONS(630),
        [anon_sym_private] = ACTIONS(630),
        [anon_sym_unsafe] = ACTIONS(630),
        [anon_sym_readonly] = ACTIONS(630),
        [anon_sym_volatile] = ACTIONS(630),
        [anon_sym_bool] = ACTIONS(630),
        [anon_sym_byte] = ACTIONS(630),
        [anon_sym_char] = ACTIONS(630),
        [anon_sym_decimal] = ACTIONS(630),
        [anon_sym_double] = ACTIONS(630),
        [anon_sym_float] = ACTIONS(630),
        [anon_sym_int] = ACTIONS(630),
        [anon_sym_long] = ACTIONS(630),
        [anon_sym_object] = ACTIONS(630),
        [anon_sym_sbyte] = ACTIONS(630),
        [anon_sym_short] = ACTIONS(630),
        [anon_sym_string] = ACTIONS(630),
        [anon_sym_uint] = ACTIONS(630),
        [anon_sym_ulong] = ACTIONS(630),
        [anon_sym_ushort] = ACTIONS(630),
        [sym_identifier_name] = ACTIONS(634),
        [sym_comment] = ACTIONS(65),
    },
    [163] = {
        [ts_builtin_sym_end] = ACTIONS(638),
        [anon_sym_namespace] = ACTIONS(642),
        [anon_sym_RBRACE] = ACTIONS(638),
        [anon_sym_class] = ACTIONS(642),
        [anon_sym_struct] = ACTIONS(642),
        [anon_sym_abstract] = ACTIONS(642),
        [anon_sym_sealed] = ACTIONS(642),
        [anon_sym_static] = ACTIONS(642),
        [anon_sym_new] = ACTIONS(642),
        [anon_sym_public] = ACTIONS(642),
        [anon_sym_protected] = ACTIONS(642),
        [anon_sym_internal] = ACTIONS(642),
        [anon_sym_private] = ACTIONS(642),
        [anon_sym_unsafe] = ACTIONS(642),
        [anon_sym_readonly] = ACTIONS(642),
        [anon_sym_volatile] = ACTIONS(642),
        [anon_sym_bool] = ACTIONS(642),
        [anon_sym_byte] = ACTIONS(642),
        [anon_sym_char] = ACTIONS(642),
        [anon_sym_decimal] = ACTIONS(642),
        [anon_sym_double] = ACTIONS(642),
        [anon_sym_float] = ACTIONS(642),
        [anon_sym_int] = ACTIONS(642),
        [anon_sym_long] = ACTIONS(642),
        [anon_sym_object] = ACTIONS(642),
        [anon_sym_sbyte] = ACTIONS(642),
        [anon_sym_short] = ACTIONS(642),
        [anon_sym_string] = ACTIONS(642),
        [anon_sym_uint] = ACTIONS(642),
        [anon_sym_ulong] = ACTIONS(642),
        [anon_sym_ushort] = ACTIONS(642),
        [sym_identifier_name] = ACTIONS(646),
        [sym_comment] = ACTIONS(65),
    },
    [164] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_using] = ACTIONS(431),
        [anon_sym_namespace] = ACTIONS(431),
        [anon_sym_class] = ACTIONS(431),
        [anon_sym_struct] = ACTIONS(431),
        [anon_sym_abstract] = ACTIONS(431),
        [anon_sym_sealed] = ACTIONS(431),
        [anon_sym_static] = ACTIONS(431),
        [anon_sym_new] = ACTIONS(431),
        [anon_sym_public] = ACTIONS(431),
        [anon_sym_protected] = ACTIONS(431),
        [anon_sym_internal] = ACTIONS(431),
        [anon_sym_private] = ACTIONS(431),
        [anon_sym_unsafe] = ACTIONS(431),
        [sym_comment] = ACTIONS(65),
    },
    [165] = {
        [sym_class_declaration] = STATE(167),
        [sym_struct_declaration] = STATE(167),
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
        [aux_sym_class_declaration_repeat1] = STATE(168),
        [aux_sym_struct_declaration_repeat1] = STATE(169),
        [anon_sym_RBRACE] = ACTIONS(650),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [166] = {
        [ts_builtin_sym_end] = ACTIONS(652),
        [anon_sym_namespace] = ACTIONS(657),
        [anon_sym_RBRACE] = ACTIONS(652),
        [anon_sym_class] = ACTIONS(657),
        [anon_sym_struct] = ACTIONS(657),
        [anon_sym_abstract] = ACTIONS(657),
        [anon_sym_sealed] = ACTIONS(657),
        [anon_sym_static] = ACTIONS(657),
        [anon_sym_new] = ACTIONS(657),
        [anon_sym_public] = ACTIONS(657),
        [anon_sym_protected] = ACTIONS(657),
        [anon_sym_internal] = ACTIONS(657),
        [anon_sym_private] = ACTIONS(657),
        [anon_sym_unsafe] = ACTIONS(657),
        [anon_sym_readonly] = ACTIONS(657),
        [anon_sym_volatile] = ACTIONS(657),
        [anon_sym_bool] = ACTIONS(657),
        [anon_sym_byte] = ACTIONS(657),
        [anon_sym_char] = ACTIONS(657),
        [anon_sym_decimal] = ACTIONS(657),
        [anon_sym_double] = ACTIONS(657),
        [anon_sym_float] = ACTIONS(657),
        [anon_sym_int] = ACTIONS(657),
        [anon_sym_long] = ACTIONS(657),
        [anon_sym_object] = ACTIONS(657),
        [anon_sym_sbyte] = ACTIONS(657),
        [anon_sym_short] = ACTIONS(657),
        [anon_sym_string] = ACTIONS(657),
        [anon_sym_uint] = ACTIONS(657),
        [anon_sym_ulong] = ACTIONS(657),
        [anon_sym_ushort] = ACTIONS(657),
        [sym_identifier_name] = ACTIONS(662),
        [sym_comment] = ACTIONS(65),
    },
    [167] = {
        [anon_sym_RBRACE] = ACTIONS(667),
        [anon_sym_class] = ACTIONS(670),
        [anon_sym_struct] = ACTIONS(670),
        [anon_sym_abstract] = ACTIONS(670),
        [anon_sym_sealed] = ACTIONS(670),
        [anon_sym_static] = ACTIONS(670),
        [anon_sym_new] = ACTIONS(670),
        [anon_sym_public] = ACTIONS(670),
        [anon_sym_protected] = ACTIONS(670),
        [anon_sym_internal] = ACTIONS(670),
        [anon_sym_private] = ACTIONS(670),
        [anon_sym_unsafe] = ACTIONS(670),
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
        [sym_comment] = ACTIONS(65),
    },
    [168] = {
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
        [anon_sym_RBRACE] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [169] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(675),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [170] = {
        [ts_builtin_sym_end] = ACTIONS(677),
        [anon_sym_namespace] = ACTIONS(680),
        [anon_sym_RBRACE] = ACTIONS(677),
        [anon_sym_class] = ACTIONS(680),
        [anon_sym_struct] = ACTIONS(680),
        [anon_sym_abstract] = ACTIONS(680),
        [anon_sym_sealed] = ACTIONS(680),
        [anon_sym_static] = ACTIONS(680),
        [anon_sym_new] = ACTIONS(680),
        [anon_sym_public] = ACTIONS(680),
        [anon_sym_protected] = ACTIONS(680),
        [anon_sym_internal] = ACTIONS(680),
        [anon_sym_private] = ACTIONS(680),
        [anon_sym_unsafe] = ACTIONS(680),
        [anon_sym_readonly] = ACTIONS(680),
        [anon_sym_volatile] = ACTIONS(680),
        [anon_sym_bool] = ACTIONS(680),
        [anon_sym_byte] = ACTIONS(680),
        [anon_sym_char] = ACTIONS(680),
        [anon_sym_decimal] = ACTIONS(680),
        [anon_sym_double] = ACTIONS(680),
        [anon_sym_float] = ACTIONS(680),
        [anon_sym_int] = ACTIONS(680),
        [anon_sym_long] = ACTIONS(680),
        [anon_sym_object] = ACTIONS(680),
        [anon_sym_sbyte] = ACTIONS(680),
        [anon_sym_short] = ACTIONS(680),
        [anon_sym_string] = ACTIONS(680),
        [anon_sym_uint] = ACTIONS(680),
        [anon_sym_ulong] = ACTIONS(680),
        [anon_sym_ushort] = ACTIONS(680),
        [sym_identifier_name] = ACTIONS(683),
        [sym_comment] = ACTIONS(65),
    },
    [171] = {
        [ts_builtin_sym_end] = ACTIONS(686),
        [anon_sym_namespace] = ACTIONS(689),
        [anon_sym_RBRACE] = ACTIONS(686),
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
        [sym_identifier_name] = ACTIONS(692),
        [sym_comment] = ACTIONS(65),
    },
    [172] = {
        [anon_sym_RBRACE] = ACTIONS(437),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_struct] = ACTIONS(445),
        [anon_sym_abstract] = ACTIONS(445),
        [anon_sym_sealed] = ACTIONS(445),
        [anon_sym_static] = ACTIONS(445),
        [anon_sym_new] = ACTIONS(445),
        [anon_sym_public] = ACTIONS(445),
        [anon_sym_protected] = ACTIONS(445),
        [anon_sym_internal] = ACTIONS(445),
        [anon_sym_private] = ACTIONS(445),
        [anon_sym_unsafe] = ACTIONS(445),
        [anon_sym_readonly] = ACTIONS(445),
        [anon_sym_volatile] = ACTIONS(445),
        [anon_sym_bool] = ACTIONS(445),
        [anon_sym_byte] = ACTIONS(445),
        [anon_sym_char] = ACTIONS(445),
        [anon_sym_decimal] = ACTIONS(445),
        [anon_sym_double] = ACTIONS(445),
        [anon_sym_float] = ACTIONS(445),
        [anon_sym_int] = ACTIONS(445),
        [anon_sym_long] = ACTIONS(445),
        [anon_sym_object] = ACTIONS(445),
        [anon_sym_sbyte] = ACTIONS(445),
        [anon_sym_short] = ACTIONS(445),
        [anon_sym_string] = ACTIONS(445),
        [anon_sym_uint] = ACTIONS(445),
        [anon_sym_ulong] = ACTIONS(445),
        [anon_sym_ushort] = ACTIONS(445),
        [sym_identifier_name] = ACTIONS(448),
        [sym_comment] = ACTIONS(65),
    },
    [173] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(175),
        [sym_struct_declaration] = STATE(175),
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
        [aux_sym_compilation_unit_repeat2] = STATE(119),
        [aux_sym_class_declaration_repeat1] = STATE(176),
        [aux_sym_struct_declaration_repeat1] = STATE(177),
        [anon_sym_namespace] = ACTIONS(451),
        [anon_sym_RBRACE] = ACTIONS(695),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [174] = {
        [ts_builtin_sym_end] = ACTIONS(697),
        [anon_sym_namespace] = ACTIONS(703),
        [anon_sym_RBRACE] = ACTIONS(697),
        [anon_sym_class] = ACTIONS(703),
        [anon_sym_struct] = ACTIONS(703),
        [anon_sym_abstract] = ACTIONS(703),
        [anon_sym_sealed] = ACTIONS(703),
        [anon_sym_static] = ACTIONS(703),
        [anon_sym_new] = ACTIONS(703),
        [anon_sym_public] = ACTIONS(703),
        [anon_sym_protected] = ACTIONS(703),
        [anon_sym_internal] = ACTIONS(703),
        [anon_sym_private] = ACTIONS(703),
        [anon_sym_unsafe] = ACTIONS(703),
        [anon_sym_readonly] = ACTIONS(709),
        [anon_sym_volatile] = ACTIONS(709),
        [anon_sym_bool] = ACTIONS(709),
        [anon_sym_byte] = ACTIONS(709),
        [anon_sym_char] = ACTIONS(709),
        [anon_sym_decimal] = ACTIONS(709),
        [anon_sym_double] = ACTIONS(709),
        [anon_sym_float] = ACTIONS(709),
        [anon_sym_int] = ACTIONS(709),
        [anon_sym_long] = ACTIONS(709),
        [anon_sym_object] = ACTIONS(709),
        [anon_sym_sbyte] = ACTIONS(709),
        [anon_sym_short] = ACTIONS(709),
        [anon_sym_string] = ACTIONS(709),
        [anon_sym_uint] = ACTIONS(709),
        [anon_sym_ulong] = ACTIONS(709),
        [anon_sym_ushort] = ACTIONS(709),
        [sym_identifier_name] = ACTIONS(714),
        [sym_comment] = ACTIONS(65),
    },
    [175] = {
        [anon_sym_namespace] = ACTIONS(719),
        [anon_sym_RBRACE] = ACTIONS(721),
        [anon_sym_class] = ACTIONS(725),
        [anon_sym_struct] = ACTIONS(725),
        [anon_sym_abstract] = ACTIONS(725),
        [anon_sym_sealed] = ACTIONS(725),
        [anon_sym_static] = ACTIONS(725),
        [anon_sym_new] = ACTIONS(725),
        [anon_sym_public] = ACTIONS(725),
        [anon_sym_protected] = ACTIONS(725),
        [anon_sym_internal] = ACTIONS(725),
        [anon_sym_private] = ACTIONS(725),
        [anon_sym_unsafe] = ACTIONS(725),
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
        [sym_comment] = ACTIONS(65),
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
        [anon_sym_RBRACE] = ACTIONS(729),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [177] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(731),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [178] = {
        [ts_builtin_sym_end] = ACTIONS(733),
        [anon_sym_namespace] = ACTIONS(736),
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
        [anon_sym_readonly] = ACTIONS(736),
        [anon_sym_volatile] = ACTIONS(736),
        [anon_sym_bool] = ACTIONS(736),
        [anon_sym_byte] = ACTIONS(736),
        [anon_sym_char] = ACTIONS(736),
        [anon_sym_decimal] = ACTIONS(736),
        [anon_sym_double] = ACTIONS(736),
        [anon_sym_float] = ACTIONS(736),
        [anon_sym_int] = ACTIONS(736),
        [anon_sym_long] = ACTIONS(736),
        [anon_sym_object] = ACTIONS(736),
        [anon_sym_sbyte] = ACTIONS(736),
        [anon_sym_short] = ACTIONS(736),
        [anon_sym_string] = ACTIONS(736),
        [anon_sym_uint] = ACTIONS(736),
        [anon_sym_ulong] = ACTIONS(736),
        [anon_sym_ushort] = ACTIONS(736),
        [sym_identifier_name] = ACTIONS(739),
        [sym_comment] = ACTIONS(65),
    },
    [179] = {
        [ts_builtin_sym_end] = ACTIONS(742),
        [anon_sym_namespace] = ACTIONS(745),
        [anon_sym_RBRACE] = ACTIONS(742),
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
        [anon_sym_readonly] = ACTIONS(745),
        [anon_sym_volatile] = ACTIONS(745),
        [anon_sym_bool] = ACTIONS(745),
        [anon_sym_byte] = ACTIONS(745),
        [anon_sym_char] = ACTIONS(745),
        [anon_sym_decimal] = ACTIONS(745),
        [anon_sym_double] = ACTIONS(745),
        [anon_sym_float] = ACTIONS(745),
        [anon_sym_int] = ACTIONS(745),
        [anon_sym_long] = ACTIONS(745),
        [anon_sym_object] = ACTIONS(745),
        [anon_sym_sbyte] = ACTIONS(745),
        [anon_sym_short] = ACTIONS(745),
        [anon_sym_string] = ACTIONS(745),
        [anon_sym_uint] = ACTIONS(745),
        [anon_sym_ulong] = ACTIONS(745),
        [anon_sym_ushort] = ACTIONS(745),
        [sym_identifier_name] = ACTIONS(748),
        [sym_comment] = ACTIONS(65),
    },
    [180] = {
        [anon_sym_SEMI] = ACTIONS(751),
        [anon_sym_COMMA] = ACTIONS(751),
        [sym_comment] = ACTIONS(65),
    },
    [181] = {
        [anon_sym_SEMI] = ACTIONS(755),
        [anon_sym_COMMA] = ACTIONS(755),
        [sym__real_type_suffix] = ACTIONS(758),
        [sym__exponent_part] = ACTIONS(760),
        [sym_comment] = ACTIONS(65),
    },
    [182] = {
        [anon_sym_SEMI] = ACTIONS(762),
        [anon_sym_COMMA] = ACTIONS(762),
        [sym_comment] = ACTIONS(65),
    },
    [183] = {
        [anon_sym_SEMI] = ACTIONS(762),
        [anon_sym_COMMA] = ACTIONS(762),
        [sym__real_type_suffix] = ACTIONS(765),
        [sym_comment] = ACTIONS(65),
    },
    [184] = {
        [anon_sym_SEMI] = ACTIONS(767),
        [anon_sym_COMMA] = ACTIONS(767),
        [sym_comment] = ACTIONS(65),
    },
    [185] = {
        [anon_sym_SEMI] = ACTIONS(522),
        [anon_sym_COMMA] = ACTIONS(522),
        [sym_comment] = ACTIONS(65),
    },
    [186] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(89),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(544),
        [anon_sym_EQ] = ACTIONS(247),
        [anon_sym_LT] = ACTIONS(123),
        [anon_sym_GT] = ACTIONS(199),
        [sym_comment] = ACTIONS(65),
    },
    [187] = {
        [anon_sym_SEMI] = ACTIONS(770),
        [anon_sym_COMMA] = ACTIONS(770),
        [sym_comment] = ACTIONS(65),
    },
    [188] = {
        [anon_sym_COMMA] = ACTIONS(773),
        [anon_sym_GT] = ACTIONS(773),
        [sym_comment] = ACTIONS(65),
    },
    [189] = {
        [sym_type_parameter_list] = STATE(191),
        [anon_sym_LBRACE] = ACTIONS(776),
        [anon_sym_LT] = ACTIONS(123),
        [sym_comment] = ACTIONS(65),
    },
    [190] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(177),
        [anon_sym_RBRACE] = ACTIONS(778),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [191] = {
        [anon_sym_LBRACE] = ACTIONS(780),
        [sym_comment] = ACTIONS(65),
    },
    [192] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(169),
        [anon_sym_RBRACE] = ACTIONS(731),
        [anon_sym_class] = ACTIONS(73),
        [anon_sym_struct] = ACTIONS(75),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(65),
    },
    [193] = {
        [ts_builtin_sym_end] = ACTIONS(782),
        [anon_sym_namespace] = ACTIONS(785),
        [anon_sym_RBRACE] = ACTIONS(782),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_struct] = ACTIONS(785),
        [anon_sym_abstract] = ACTIONS(785),
        [anon_sym_sealed] = ACTIONS(785),
        [anon_sym_static] = ACTIONS(785),
        [anon_sym_new] = ACTIONS(785),
        [anon_sym_public] = ACTIONS(785),
        [anon_sym_protected] = ACTIONS(785),
        [anon_sym_internal] = ACTIONS(785),
        [anon_sym_private] = ACTIONS(785),
        [anon_sym_unsafe] = ACTIONS(785),
        [anon_sym_readonly] = ACTIONS(785),
        [anon_sym_volatile] = ACTIONS(785),
        [anon_sym_bool] = ACTIONS(785),
        [anon_sym_byte] = ACTIONS(785),
        [anon_sym_char] = ACTIONS(785),
        [anon_sym_decimal] = ACTIONS(785),
        [anon_sym_double] = ACTIONS(785),
        [anon_sym_float] = ACTIONS(785),
        [anon_sym_int] = ACTIONS(785),
        [anon_sym_long] = ACTIONS(785),
        [anon_sym_object] = ACTIONS(785),
        [anon_sym_sbyte] = ACTIONS(785),
        [anon_sym_short] = ACTIONS(785),
        [anon_sym_string] = ACTIONS(785),
        [anon_sym_uint] = ACTIONS(785),
        [anon_sym_ulong] = ACTIONS(785),
        [anon_sym_ushort] = ACTIONS(785),
        [sym_identifier_name] = ACTIONS(788),
        [sym_comment] = ACTIONS(65),
    },
    [194] = {
        [sym_type_parameter_list] = STATE(196),
        [anon_sym_LBRACE] = ACTIONS(791),
        [anon_sym_LT] = ACTIONS(123),
        [sym_comment] = ACTIONS(65),
    },
    [195] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(176),
        [anon_sym_RBRACE] = ACTIONS(793),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [196] = {
        [anon_sym_LBRACE] = ACTIONS(795),
        [sym_comment] = ACTIONS(65),
    },
    [197] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(168),
        [anon_sym_RBRACE] = ACTIONS(729),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_struct] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(173),
        [anon_sym_public] = ACTIONS(173),
        [anon_sym_protected] = ACTIONS(173),
        [anon_sym_internal] = ACTIONS(173),
        [anon_sym_private] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(173),
        [anon_sym_readonly] = ACTIONS(175),
        [anon_sym_volatile] = ACTIONS(175),
        [anon_sym_bool] = ACTIONS(127),
        [anon_sym_byte] = ACTIONS(127),
        [anon_sym_char] = ACTIONS(127),
        [anon_sym_decimal] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_int] = ACTIONS(127),
        [anon_sym_long] = ACTIONS(127),
        [anon_sym_object] = ACTIONS(127),
        [anon_sym_sbyte] = ACTIONS(127),
        [anon_sym_short] = ACTIONS(127),
        [anon_sym_string] = ACTIONS(127),
        [anon_sym_uint] = ACTIONS(127),
        [anon_sym_ulong] = ACTIONS(127),
        [anon_sym_ushort] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(65),
    },
    [198] = {
        [ts_builtin_sym_end] = ACTIONS(797),
        [anon_sym_namespace] = ACTIONS(800),
        [anon_sym_RBRACE] = ACTIONS(797),
        [anon_sym_class] = ACTIONS(800),
        [anon_sym_struct] = ACTIONS(800),
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
        [sym_identifier_name] = ACTIONS(803),
        [sym_comment] = ACTIONS(65),
    },
    [199] = {
        [ts_builtin_sym_end] = ACTIONS(806),
        [anon_sym_namespace] = ACTIONS(814),
        [anon_sym_RBRACE] = ACTIONS(806),
        [anon_sym_class] = ACTIONS(814),
        [anon_sym_struct] = ACTIONS(814),
        [anon_sym_abstract] = ACTIONS(814),
        [anon_sym_sealed] = ACTIONS(814),
        [anon_sym_static] = ACTIONS(814),
        [anon_sym_new] = ACTIONS(814),
        [anon_sym_public] = ACTIONS(814),
        [anon_sym_protected] = ACTIONS(814),
        [anon_sym_internal] = ACTIONS(814),
        [anon_sym_private] = ACTIONS(814),
        [anon_sym_unsafe] = ACTIONS(814),
        [anon_sym_readonly] = ACTIONS(822),
        [anon_sym_volatile] = ACTIONS(822),
        [anon_sym_bool] = ACTIONS(822),
        [anon_sym_byte] = ACTIONS(822),
        [anon_sym_char] = ACTIONS(822),
        [anon_sym_decimal] = ACTIONS(822),
        [anon_sym_double] = ACTIONS(822),
        [anon_sym_float] = ACTIONS(822),
        [anon_sym_int] = ACTIONS(822),
        [anon_sym_long] = ACTIONS(822),
        [anon_sym_object] = ACTIONS(822),
        [anon_sym_sbyte] = ACTIONS(822),
        [anon_sym_short] = ACTIONS(822),
        [anon_sym_string] = ACTIONS(822),
        [anon_sym_uint] = ACTIONS(822),
        [anon_sym_ulong] = ACTIONS(822),
        [anon_sym_ushort] = ACTIONS(822),
        [sym_identifier_name] = ACTIONS(829),
        [sym_comment] = ACTIONS(65),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(131),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(132),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(133),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(134),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(135),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(136),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(137),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(138),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(84),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(85),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(86),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(139),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(69),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(77),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(70),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(140),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(141),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(142),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(143),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(40),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(41),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(42),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(144),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(121),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(112),
    [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(145),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
    [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
    [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(127),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [431] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [434] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [437] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [440] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4),
    [445] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [448] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [455] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [466] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [477] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [486] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
    [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
    [505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
    [507] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
    [517] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [522] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [528] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [531] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [534] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [537] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(164),
    [541] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(173),
    [544] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [549] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(115),
    [553] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [556] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [559] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [562] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [569] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [576] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [579] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [582] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [587] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [591] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(59),
    [595] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [598] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [601] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [604] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [609] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(92),
    [613] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(93),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [619] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [626] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [630] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [634] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [638] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [642] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [646] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [652] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [657] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [662] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [667] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [670] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [677] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [680] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [683] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [686] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [689] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [692] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [697] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [703] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [709] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [714] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [721] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [725] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [733] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [736] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [739] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [742] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [745] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [748] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [751] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [755] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [758] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
    [762] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [767] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [770] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [773] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [782] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [785] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [788] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [797] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [800] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [803] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [806] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [814] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [822] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [829] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
