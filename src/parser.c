#include "tree_sitter/parser.h"

#define STATE_COUNT 178
#define SYMBOL_COUNT 101
#define TOKEN_COUNT 65

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
    sym_null_literal = 14,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 15,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 16,
    sym__hexadecimal_escape_sequence = 17,
    aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 18,
    aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 19,
    anon_sym_BSLASH_SQUOTE = 20,
    anon_sym_BSLASH_DQUOTE = 21,
    anon_sym_BSLASH_BSLASH = 22,
    anon_sym_BSLASH0 = 23,
    anon_sym_BSLASHa = 24,
    anon_sym_BSLASHb = 25,
    anon_sym_BSLASHf = 26,
    anon_sym_BSLASHn = 27,
    anon_sym_BSLASHr = 28,
    anon_sym_BSLASHt = 29,
    anon_sym_BSLASHv = 30,
    sym__integer_type_suffix = 31,
    anon_sym_abstract = 32,
    anon_sym_sealed = 33,
    anon_sym_static = 34,
    anon_sym_new = 35,
    anon_sym_public = 36,
    anon_sym_protected = 37,
    anon_sym_internal = 38,
    anon_sym_private = 39,
    anon_sym_unsafe = 40,
    anon_sym_readonly = 41,
    anon_sym_volatile = 42,
    anon_sym_bool = 43,
    anon_sym_byte = 44,
    anon_sym_char = 45,
    anon_sym_decimal = 46,
    anon_sym_double = 47,
    anon_sym_float = 48,
    anon_sym_int = 49,
    anon_sym_long = 50,
    anon_sym_object = 51,
    anon_sym_sbyte = 52,
    anon_sym_short = 53,
    anon_sym_string = 54,
    anon_sym_uint = 55,
    anon_sym_ulong = 56,
    anon_sym_ushort = 57,
    anon_sym_LT = 58,
    anon_sym_GT = 59,
    anon_sym_DOT = 60,
    anon_sym_COLON_COLON = 61,
    sym_global = 62,
    sym_identifier_name = 63,
    sym_comment = 64,
    sym_compilation_unit = 65,
    sym_using_directive = 66,
    sym_namespace_declaration = 67,
    sym_class_declaration = 68,
    sym_struct_declaration = 69,
    sym_field_declaration = 70,
    sym_variable_declaration = 71,
    sym__type = 72,
    sym_generic_name = 73,
    sym_variable_declarator = 74,
    sym_equals_value_clause = 75,
    sym__literal = 76,
    sym_boolean_literal = 77,
    sym_character_literal = 78,
    sym_integer_literal = 79,
    sym__unicode_escape_sequence = 80,
    sym__simple_escape_sequence = 81,
    sym_class_modifiers = 82,
    sym__class_modifiers = 83,
    sym_struct_modifiers = 84,
    sym__struct_modifiers = 85,
    sym_field_modifiers = 86,
    sym__field_modifiers = 87,
    sym_predefined_type = 88,
    sym_type_parameter_list = 89,
    sym_type_parameter = 90,
    sym_qualified_name = 91,
    sym_alias_qualified_name = 92,
    sym_name_equals = 93,
    sym_static = 94,
    aux_sym_compilation_unit_repeat1 = 95,
    aux_sym_compilation_unit_repeat2 = 96,
    aux_sym_class_declaration_repeat1 = 97,
    aux_sym_struct_declaration_repeat1 = 98,
    aux_sym_variable_declaration_repeat1 = 99,
    aux_sym_type_parameter_list_repeat1 = 100,
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
    [sym_null_literal] = "null_literal",
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = "/[0-9]+/",
    [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = "/0x[0-9a-fA-F]+/",
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
    [sym__integer_type_suffix] = "_integer_type_suffix",
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
    [anon_sym_DOT] = ".",
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
    [sym_integer_literal] = "integer_literal",
    [sym__unicode_escape_sequence] = "_unicode_escape_sequence",
    [sym__simple_escape_sequence] = "_simple_escape_sequence",
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
    [sym_null_literal] = {
        .visible = true,
        .named = true,
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
    [sym__integer_type_suffix] = {
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
    [anon_sym_DOT] = {
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
    [sym_integer_literal] = {
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
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == '\\')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(52);
            if (lookahead == 'b')
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(87);
            if (lookahead == 'g')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(110);
            if (lookahead == 'n')
                ADVANCE(115);
            if (lookahead == 'o')
                ADVANCE(129);
            if (lookahead == 'p')
                ADVANCE(135);
            if (lookahead == 'r')
                ADVANCE(154);
            if (lookahead == 's')
                ADVANCE(162);
            if (lookahead == 't')
                ADVANCE(188);
            if (lookahead == 'u')
                ADVANCE(192);
            if (lookahead == 'v')
                ADVANCE(213);
            if (lookahead == '{')
                ADVANCE(221);
            if (lookahead == '}')
                ADVANCE(222);
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
            if (lookahead == '\"')
                ADVANCE(22);
            if (lookahead == '\'')
                ADVANCE(23);
            if (lookahead == '0')
                ADVANCE(24);
            if (lookahead == 'U')
                ADVANCE(25);
            if (lookahead == '\\')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(35);
            if (lookahead == 'b')
                ADVANCE(36);
            if (lookahead == 'f')
                ADVANCE(37);
            if (lookahead == 'n')
                ADVANCE(38);
            if (lookahead == 'r')
                ADVANCE(39);
            if (lookahead == 't')
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(41);
            if (lookahead == 'v')
                ADVANCE(46);
            if (lookahead == 'x')
                ADVANCE(47);
            LEX_ERROR();
        case 22:
            ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
        case 23:
            ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
        case 24:
            ACCEPT_TOKEN(anon_sym_BSLASH0);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(26);
            LEX_ERROR();
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(27);
            LEX_ERROR();
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(28);
            LEX_ERROR();
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(29);
            LEX_ERROR();
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(30);
            LEX_ERROR();
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(31);
            LEX_ERROR();
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(32);
            LEX_ERROR();
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(33);
            LEX_ERROR();
        case 33:
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
        case 34:
            ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
        case 35:
            ACCEPT_TOKEN(anon_sym_BSLASHa);
        case 36:
            ACCEPT_TOKEN(anon_sym_BSLASHb);
        case 37:
            ACCEPT_TOKEN(anon_sym_BSLASHf);
        case 38:
            ACCEPT_TOKEN(anon_sym_BSLASHn);
        case 39:
            ACCEPT_TOKEN(anon_sym_BSLASHr);
        case 40:
            ACCEPT_TOKEN(anon_sym_BSLASHt);
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
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
        case 46:
            ACCEPT_TOKEN(anon_sym_BSLASHv);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(48);
            LEX_ERROR();
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(49);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(50);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(51);
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 51:
            ACCEPT_TOKEN(sym__hexadecimal_escape_sequence);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier_name);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier_name);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier_name);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier_name);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier_name);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier_name);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier_name);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_abstract);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(61);
            if (lookahead == 'y')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier_name);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier_name);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier_name);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_bool);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier_name);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier_name);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_byte);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(68);
            if (lookahead == 'l')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier_name);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier_name);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier_name);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_char);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier_name);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier_name);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier_name);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_class);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(76);
            if (lookahead == 'o')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier_name);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier_name);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'm')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier_name);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier_name);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier_name);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_decimal);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'u')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier_name);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier_name);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier_name);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_double);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(88);
            if (lookahead == 'l')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier_name);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier_name);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier_name);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_false);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier_name);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier_name);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_float);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier_name);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier_name);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier_name);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier_name);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier_name);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(sym_global);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier_name);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier_name);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(105);
            ACCEPT_TOKEN(anon_sym_int);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier_name);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier_name);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier_name);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_internal);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(111);
            if (lookahead == 'u')
                ADVANCE(114);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(112);
            ACCEPT_TOKEN(sym_identifier_name);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_long);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(116);
            if (lookahead == 'e')
                ADVANCE(124);
            if (lookahead == 'u')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'm')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier_name);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'p')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(121);
            ACCEPT_TOKEN(sym_identifier_name);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier_name);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'w')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_new);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier_name);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier_name);
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(sym_null_literal);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'j')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier_name);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_object);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(136);
            if (lookahead == 'u')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(137);
            if (lookahead == 'o')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier_name);
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'v')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier_name);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_private);
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier_name);
        case 143:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier_name);
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
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
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'd')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier_name);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_protected);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier_name);
        case 152:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier_name);
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_public);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'd')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier_name);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier_name);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(20);
            if (lookahead == 'y')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier_name);
        case 161:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 162:
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
                ADVANCE(163);
            if (lookahead == 'e')
                ADVANCE(167);
            if (lookahead == 'h')
                ADVANCE(172);
            if (lookahead == 't')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier_name);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(20);
            if (lookahead == 'y')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier_name);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier_name);
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'd')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier_name);
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier_name);
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_short);
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(177);
            if (lookahead == 'r')
                ADVANCE(181);
            ACCEPT_TOKEN(sym_identifier_name);
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(178);
            ACCEPT_TOKEN(sym_identifier_name);
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier_name);
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(180);
            ACCEPT_TOKEN(sym_identifier_name);
        case 180:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_static);
        case 181:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(182);
            if (lookahead == 'u')
                ADVANCE(185);
            ACCEPT_TOKEN(sym_identifier_name);
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(183);
            ACCEPT_TOKEN(sym_identifier_name);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(184);
            ACCEPT_TOKEN(sym_identifier_name);
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_string);
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(187);
            ACCEPT_TOKEN(sym_identifier_name);
        case 187:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_struct);
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(189);
            ACCEPT_TOKEN(sym_identifier_name);
        case 189:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'u')
                ADVANCE(190);
            ACCEPT_TOKEN(sym_identifier_name);
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(191);
            ACCEPT_TOKEN(sym_identifier_name);
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_true);
        case 192:
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
                ADVANCE(193);
            if (lookahead == 'l')
                ADVANCE(196);
            if (lookahead == 'n')
                ADVANCE(200);
            if (lookahead == 's')
                ADVANCE(205);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 193:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(194);
            ACCEPT_TOKEN(sym_identifier_name);
        case 194:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(195);
            ACCEPT_TOKEN(sym_identifier_name);
        case 195:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_uint);
        case 196:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(197);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(198);
            ACCEPT_TOKEN(sym_identifier_name);
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(199);
            ACCEPT_TOKEN(sym_identifier_name);
        case 199:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier_name);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(202);
            ACCEPT_TOKEN(sym_identifier_name);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(203);
            ACCEPT_TOKEN(sym_identifier_name);
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(204);
            ACCEPT_TOKEN(sym_identifier_name);
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(206);
            if (lookahead == 'i')
                ADVANCE(210);
            ACCEPT_TOKEN(sym_identifier_name);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier_name);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier_name);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier_name);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier_name);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier_name);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_using);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier_name);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier_name);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier_name);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier_name);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(219);
            ACCEPT_TOKEN(sym_identifier_name);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier_name);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 221:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 222:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 223:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(223);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(224);
            if (lookahead == 'c')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(237);
            if (lookahead == 'n')
                ADVANCE(245);
            if (lookahead == 'p')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(275);
            if (lookahead == 'u')
                ADVANCE(290);
            LEX_ERROR();
        case 224:
            if (lookahead == 'b')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 's')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 't')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            if (lookahead == 'r')
                ADVANCE(228);
            LEX_ERROR();
        case 228:
            if (lookahead == 'a')
                ADVANCE(229);
            LEX_ERROR();
        case 229:
            if (lookahead == 'c')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            if (lookahead == 't')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 232:
            if (lookahead == 'l')
                ADVANCE(233);
            LEX_ERROR();
        case 233:
            if (lookahead == 'a')
                ADVANCE(234);
            LEX_ERROR();
        case 234:
            if (lookahead == 's')
                ADVANCE(235);
            LEX_ERROR();
        case 235:
            if (lookahead == 's')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            ACCEPT_TOKEN(anon_sym_class);
        case 237:
            if (lookahead == 'n')
                ADVANCE(238);
            LEX_ERROR();
        case 238:
            if (lookahead == 't')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            if (lookahead == 'e')
                ADVANCE(240);
            LEX_ERROR();
        case 240:
            if (lookahead == 'r')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            if (lookahead == 'n')
                ADVANCE(242);
            LEX_ERROR();
        case 242:
            if (lookahead == 'a')
                ADVANCE(243);
            LEX_ERROR();
        case 243:
            if (lookahead == 'l')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            ACCEPT_TOKEN(anon_sym_internal);
        case 245:
            if (lookahead == 'a')
                ADVANCE(246);
            if (lookahead == 'e')
                ADVANCE(254);
            LEX_ERROR();
        case 246:
            if (lookahead == 'm')
                ADVANCE(247);
            LEX_ERROR();
        case 247:
            if (lookahead == 'e')
                ADVANCE(248);
            LEX_ERROR();
        case 248:
            if (lookahead == 's')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            if (lookahead == 'p')
                ADVANCE(250);
            LEX_ERROR();
        case 250:
            if (lookahead == 'a')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            if (lookahead == 'c')
                ADVANCE(252);
            LEX_ERROR();
        case 252:
            if (lookahead == 'e')
                ADVANCE(253);
            LEX_ERROR();
        case 253:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 254:
            if (lookahead == 'w')
                ADVANCE(255);
            LEX_ERROR();
        case 255:
            ACCEPT_TOKEN(anon_sym_new);
        case 256:
            if (lookahead == 'r')
                ADVANCE(257);
            if (lookahead == 'u')
                ADVANCE(270);
            LEX_ERROR();
        case 257:
            if (lookahead == 'i')
                ADVANCE(258);
            if (lookahead == 'o')
                ADVANCE(263);
            LEX_ERROR();
        case 258:
            if (lookahead == 'v')
                ADVANCE(259);
            LEX_ERROR();
        case 259:
            if (lookahead == 'a')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if (lookahead == 't')
                ADVANCE(261);
            LEX_ERROR();
        case 261:
            if (lookahead == 'e')
                ADVANCE(262);
            LEX_ERROR();
        case 262:
            ACCEPT_TOKEN(anon_sym_private);
        case 263:
            if (lookahead == 't')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            if (lookahead == 'e')
                ADVANCE(265);
            LEX_ERROR();
        case 265:
            if (lookahead == 'c')
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
            if (lookahead == 'd')
                ADVANCE(269);
            LEX_ERROR();
        case 269:
            ACCEPT_TOKEN(anon_sym_protected);
        case 270:
            if (lookahead == 'b')
                ADVANCE(271);
            LEX_ERROR();
        case 271:
            if (lookahead == 'l')
                ADVANCE(272);
            LEX_ERROR();
        case 272:
            if (lookahead == 'i')
                ADVANCE(273);
            LEX_ERROR();
        case 273:
            if (lookahead == 'c')
                ADVANCE(274);
            LEX_ERROR();
        case 274:
            ACCEPT_TOKEN(anon_sym_public);
        case 275:
            if (lookahead == 'e')
                ADVANCE(276);
            if (lookahead == 't')
                ADVANCE(281);
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
            if (lookahead == 'e')
                ADVANCE(279);
            LEX_ERROR();
        case 279:
            if (lookahead == 'd')
                ADVANCE(280);
            LEX_ERROR();
        case 280:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 281:
            if (lookahead == 'a')
                ADVANCE(282);
            if (lookahead == 'r')
                ADVANCE(286);
            LEX_ERROR();
        case 282:
            if (lookahead == 't')
                ADVANCE(283);
            LEX_ERROR();
        case 283:
            if (lookahead == 'i')
                ADVANCE(284);
            LEX_ERROR();
        case 284:
            if (lookahead == 'c')
                ADVANCE(285);
            LEX_ERROR();
        case 285:
            ACCEPT_TOKEN(anon_sym_static);
        case 286:
            if (lookahead == 'u')
                ADVANCE(287);
            LEX_ERROR();
        case 287:
            if (lookahead == 'c')
                ADVANCE(288);
            LEX_ERROR();
        case 288:
            if (lookahead == 't')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            ACCEPT_TOKEN(anon_sym_struct);
        case 290:
            if (lookahead == 'n')
                ADVANCE(291);
            if (lookahead == 's')
                ADVANCE(296);
            LEX_ERROR();
        case 291:
            if (lookahead == 's')
                ADVANCE(292);
            LEX_ERROR();
        case 292:
            if (lookahead == 'a')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            if (lookahead == 'f')
                ADVANCE(294);
            LEX_ERROR();
        case 294:
            if (lookahead == 'e')
                ADVANCE(295);
            LEX_ERROR();
        case 295:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 296:
            if (lookahead == 'i')
                ADVANCE(297);
            LEX_ERROR();
        case 297:
            if (lookahead == 'n')
                ADVANCE(298);
            LEX_ERROR();
        case 298:
            if (lookahead == 'g')
                ADVANCE(299);
            LEX_ERROR();
        case 299:
            ACCEPT_TOKEN(anon_sym_using);
        case 300:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(300);
            if (lookahead == '/')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(96);
            if (lookahead == 's')
                ADVANCE(301);
            LEX_ERROR();
        case 301:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(302);
            ACCEPT_TOKEN(sym_identifier_name);
        case 302:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier_name);
        case 303:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(303);
            if (lookahead == '/')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(96);
            LEX_ERROR();
        case 304:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(304);
            if (lookahead == '/')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            LEX_ERROR();
        case 305:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(305);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(224);
            if (lookahead == 'c')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(237);
            if (lookahead == 'n')
                ADVANCE(306);
            if (lookahead == 'p')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(307);
            if (lookahead == 'u')
                ADVANCE(309);
            LEX_ERROR();
        case 306:
            if (lookahead == 'e')
                ADVANCE(254);
            LEX_ERROR();
        case 307:
            if (lookahead == 'e')
                ADVANCE(276);
            if (lookahead == 't')
                ADVANCE(308);
            LEX_ERROR();
        case 308:
            if (lookahead == 'a')
                ADVANCE(282);
            LEX_ERROR();
        case 309:
            if (lookahead == 'n')
                ADVANCE(291);
            LEX_ERROR();
        case 310:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(310);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(224);
            if (lookahead == 'c')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(237);
            if (lookahead == 'n')
                ADVANCE(306);
            if (lookahead == 'p')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(275);
            if (lookahead == 'u')
                ADVANCE(309);
            LEX_ERROR();
        case 311:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(311);
            if (lookahead == '/')
                ADVANCE(5);
            LEX_ERROR();
        case 312:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(312);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(224);
            if (lookahead == 'c')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(237);
            if (lookahead == 'n')
                ADVANCE(245);
            if (lookahead == 'p')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(275);
            if (lookahead == 'u')
                ADVANCE(309);
            if (lookahead == '}')
                ADVANCE(222);
            LEX_ERROR();
        case 313:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(313);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'c')
                ADVANCE(232);
            LEX_ERROR();
        case 314:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(314);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(315);
            LEX_ERROR();
        case 315:
            if (lookahead == 't')
                ADVANCE(316);
            LEX_ERROR();
        case 316:
            if (lookahead == 'r')
                ADVANCE(286);
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
            if (lookahead == 'a')
                ADVANCE(224);
            if (lookahead == 'c')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(237);
            if (lookahead == 'n')
                ADVANCE(245);
            if (lookahead == 'p')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(275);
            if (lookahead == 'u')
                ADVANCE(309);
            LEX_ERROR();
        case 318:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(318);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '<')
                ADVANCE(17);
            if (lookahead == '{')
                ADVANCE(221);
            LEX_ERROR();
        case 319:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(319);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(224);
            if (lookahead == 'c')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(237);
            if (lookahead == 'n')
                ADVANCE(306);
            if (lookahead == 'p')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(275);
            if (lookahead == 'u')
                ADVANCE(309);
            if (lookahead == '}')
                ADVANCE(222);
            LEX_ERROR();
        case 320:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(320);
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
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(321);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(322);
            if (lookahead == 'i')
                ADVANCE(323);
            if (lookahead == 'l')
                ADVANCE(326);
            if (lookahead == 'o')
                ADVANCE(129);
            if (lookahead == 's')
                ADVANCE(327);
            if (lookahead == 'u')
                ADVANCE(330);
            LEX_ERROR();
        case 321:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier_name);
        case 322:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier_name);
        case 323:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(324);
            ACCEPT_TOKEN(sym_identifier_name);
        case 324:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(325);
            ACCEPT_TOKEN(sym_identifier_name);
        case 325:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_int);
        case 326:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 327:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(163);
            if (lookahead == 'h')
                ADVANCE(172);
            if (lookahead == 't')
                ADVANCE(328);
            ACCEPT_TOKEN(sym_identifier_name);
        case 328:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(329);
            ACCEPT_TOKEN(sym_identifier_name);
        case 329:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(182);
            ACCEPT_TOKEN(sym_identifier_name);
        case 330:
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
                ADVANCE(193);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 's')
                ADVANCE(332);
            ACCEPT_TOKEN(sym_identifier_name);
        case 331:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(197);
            ACCEPT_TOKEN(sym_identifier_name);
        case 332:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(206);
            ACCEPT_TOKEN(sym_identifier_name);
        case 333:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(333);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '{')
                ADVANCE(221);
            LEX_ERROR();
        case 334:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(334);
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
                ADVANCE(52);
            if (lookahead == 'b')
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(322);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(326);
            if (lookahead == 'n')
                ADVANCE(335);
            if (lookahead == 'o')
                ADVANCE(129);
            if (lookahead == 'p')
                ADVANCE(135);
            if (lookahead == 'r')
                ADVANCE(154);
            if (lookahead == 's')
                ADVANCE(162);
            if (lookahead == 'u')
                ADVANCE(336);
            if (lookahead == 'v')
                ADVANCE(213);
            if (lookahead == '}')
                ADVANCE(222);
            LEX_ERROR();
        case 335:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(116);
            if (lookahead == 'e')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 336:
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
                ADVANCE(193);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'n')
                ADVANCE(200);
            if (lookahead == 's')
                ADVANCE(332);
            ACCEPT_TOKEN(sym_identifier_name);
        case 337:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(337);
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
                ADVANCE(52);
            if (lookahead == 'b')
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(322);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(326);
            if (lookahead == 'n')
                ADVANCE(338);
            if (lookahead == 'o')
                ADVANCE(129);
            if (lookahead == 'p')
                ADVANCE(135);
            if (lookahead == 'r')
                ADVANCE(154);
            if (lookahead == 's')
                ADVANCE(162);
            if (lookahead == 'u')
                ADVANCE(336);
            if (lookahead == 'v')
                ADVANCE(213);
            if (lookahead == '}')
                ADVANCE(222);
            LEX_ERROR();
        case 338:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 339:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(339);
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
                ADVANCE(52);
            if (lookahead == 'b')
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(322);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(326);
            if (lookahead == 'n')
                ADVANCE(338);
            if (lookahead == 'o')
                ADVANCE(129);
            if (lookahead == 'p')
                ADVANCE(135);
            if (lookahead == 'r')
                ADVANCE(154);
            if (lookahead == 's')
                ADVANCE(340);
            if (lookahead == 'u')
                ADVANCE(336);
            if (lookahead == 'v')
                ADVANCE(213);
            LEX_ERROR();
        case 340:
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
                ADVANCE(163);
            if (lookahead == 'e')
                ADVANCE(167);
            if (lookahead == 'h')
                ADVANCE(172);
            if (lookahead == 't')
                ADVANCE(341);
            ACCEPT_TOKEN(sym_identifier_name);
        case 341:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(177);
            if (lookahead == 'r')
                ADVANCE(329);
            ACCEPT_TOKEN(sym_identifier_name);
        case 342:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(342);
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
                ADVANCE(52);
            if (lookahead == 'b')
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(322);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(326);
            if (lookahead == 'n')
                ADVANCE(338);
            if (lookahead == 'o')
                ADVANCE(129);
            if (lookahead == 'p')
                ADVANCE(135);
            if (lookahead == 'r')
                ADVANCE(154);
            if (lookahead == 's')
                ADVANCE(162);
            if (lookahead == 'u')
                ADVANCE(336);
            if (lookahead == 'v')
                ADVANCE(213);
            LEX_ERROR();
        case 343:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(343);
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
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(321);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(322);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(326);
            if (lookahead == 'n')
                ADVANCE(338);
            if (lookahead == 'o')
                ADVANCE(129);
            if (lookahead == 'p')
                ADVANCE(135);
            if (lookahead == 'r')
                ADVANCE(154);
            if (lookahead == 's')
                ADVANCE(344);
            if (lookahead == 'u')
                ADVANCE(336);
            if (lookahead == 'v')
                ADVANCE(213);
            LEX_ERROR();
        case 344:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(163);
            if (lookahead == 'h')
                ADVANCE(172);
            if (lookahead == 't')
                ADVANCE(341);
            ACCEPT_TOKEN(sym_identifier_name);
        case 345:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(345);
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
        case 346:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(346);
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
        case 347:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(347);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            LEX_ERROR();
        case 348:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(348);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(18);
            LEX_ERROR();
        case 349:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(349);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            LEX_ERROR();
        case 350:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(350);
            if (lookahead == '\'')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '0')
                ADVANCE(10);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(351);
            if (lookahead == 'n')
                ADVANCE(356);
            if (lookahead == 't')
                ADVANCE(360);
            LEX_ERROR();
        case 351:
            if (lookahead == 'a')
                ADVANCE(352);
            LEX_ERROR();
        case 352:
            if (lookahead == 'l')
                ADVANCE(353);
            LEX_ERROR();
        case 353:
            if (lookahead == 's')
                ADVANCE(354);
            LEX_ERROR();
        case 354:
            if (lookahead == 'e')
                ADVANCE(355);
            LEX_ERROR();
        case 355:
            ACCEPT_TOKEN(anon_sym_false);
        case 356:
            if (lookahead == 'u')
                ADVANCE(357);
            LEX_ERROR();
        case 357:
            if (lookahead == 'l')
                ADVANCE(358);
            LEX_ERROR();
        case 358:
            if (lookahead == 'l')
                ADVANCE(359);
            LEX_ERROR();
        case 359:
            ACCEPT_TOKEN(sym_null_literal);
        case 360:
            if (lookahead == 'r')
                ADVANCE(361);
            LEX_ERROR();
        case 361:
            if (lookahead == 'u')
                ADVANCE(362);
            LEX_ERROR();
        case 362:
            if (lookahead == 'e')
                ADVANCE(363);
            LEX_ERROR();
        case 363:
            ACCEPT_TOKEN(anon_sym_true);
        case 364:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(365);
            if (lookahead == '/')
                ADVANCE(366);
            if (lookahead == '\\')
                ADVANCE(367);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(365);
            LEX_ERROR();
        case 365:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 366:
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(9);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 367:
            if (lookahead == '\"')
                ADVANCE(22);
            if (lookahead == '\'')
                ADVANCE(23);
            if (lookahead == '0')
                ADVANCE(24);
            if (lookahead == 'U')
                ADVANCE(25);
            if (lookahead == '\\')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(35);
            if (lookahead == 'b')
                ADVANCE(36);
            if (lookahead == 'f')
                ADVANCE(37);
            if (lookahead == 'n')
                ADVANCE(38);
            if (lookahead == 'r')
                ADVANCE(39);
            if (lookahead == 't')
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(41);
            if (lookahead == 'v')
                ADVANCE(46);
            if (lookahead == 'x')
                ADVANCE(47);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 368:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(368);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == 'l')
                ADVANCE(369);
            if (lookahead == 'u')
                ADVANCE(371);
            LEX_ERROR();
        case 369:
            if (lookahead == 'u')
                ADVANCE(370);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 370:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 371:
            if (lookahead == 'l')
                ADVANCE(370);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 372:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(372);
            if (lookahead == '\'')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(5);
            LEX_ERROR();
        case 373:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(373);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '>')
                ADVANCE(19);
            LEX_ERROR();
        case 374:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(374);
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
                ADVANCE(221);
            LEX_ERROR();
        case 375:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(375);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(14);
            LEX_ERROR();
        case 376:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(376);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '{')
                ADVANCE(221);
            LEX_ERROR();
        case 377:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(377);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            LEX_ERROR();
        case 378:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(378);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '{')
                ADVANCE(221);
            LEX_ERROR();
        case 379:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(379);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(224);
            if (lookahead == 'c')
                ADVANCE(232);
            if (lookahead == 'i')
                ADVANCE(237);
            if (lookahead == 'n')
                ADVANCE(245);
            if (lookahead == 'p')
                ADVANCE(256);
            if (lookahead == 's')
                ADVANCE(275);
            if (lookahead == 'u')
                ADVANCE(309);
            if (lookahead == '}')
                ADVANCE(222);
            LEX_ERROR();
        case 380:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(380);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(18);
            LEX_ERROR();
        case 381:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(381);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
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
                ADVANCE(52);
            if (lookahead == 'b')
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(322);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(326);
            if (lookahead == 'n')
                ADVANCE(335);
            if (lookahead == 'o')
                ADVANCE(129);
            if (lookahead == 'p')
                ADVANCE(135);
            if (lookahead == 'r')
                ADVANCE(154);
            if (lookahead == 's')
                ADVANCE(162);
            if (lookahead == 'u')
                ADVANCE(383);
            if (lookahead == 'v')
                ADVANCE(213);
            if (lookahead == '}')
                ADVANCE(222);
            LEX_ERROR();
        case 383:
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
                ADVANCE(193);
            if (lookahead == 'l')
                ADVANCE(331);
            if (lookahead == 'n')
                ADVANCE(200);
            if (lookahead == 's')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier_name);
        case 384:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(384);
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
                ADVANCE(52);
            if (lookahead == 'b')
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(322);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(326);
            if (lookahead == 'n')
                ADVANCE(335);
            if (lookahead == 'o')
                ADVANCE(129);
            if (lookahead == 'p')
                ADVANCE(135);
            if (lookahead == 'r')
                ADVANCE(154);
            if (lookahead == 's')
                ADVANCE(162);
            if (lookahead == 'u')
                ADVANCE(336);
            if (lookahead == 'v')
                ADVANCE(213);
            if (lookahead == '}')
                ADVANCE(222);
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
                ADVANCE(386);
            if (lookahead == 'g')
                ADVANCE(96);
            if (lookahead == 'n')
                ADVANCE(387);
            if (lookahead == 't')
                ADVANCE(188);
            LEX_ERROR();
        case 386:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 387:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'u')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 388:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(365);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(366);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '\\')
                ADVANCE(367);
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
                ADVANCE(365);
            LEX_ERROR();
        case 389:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(389);
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
                ADVANCE(52);
            if (lookahead == 'b')
                ADVANCE(60);
            if (lookahead == 'c')
                ADVANCE(67);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(322);
            if (lookahead == 'g')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(326);
            if (lookahead == 'n')
                ADVANCE(338);
            if (lookahead == 'o')
                ADVANCE(129);
            if (lookahead == 'p')
                ADVANCE(135);
            if (lookahead == 'r')
                ADVANCE(154);
            if (lookahead == 's')
                ADVANCE(340);
            if (lookahead == 'u')
                ADVANCE(336);
            if (lookahead == 'v')
                ADVANCE(213);
            LEX_ERROR();
        case 390:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(390);
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
                ADVANCE(221);
            LEX_ERROR();
        case 391:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(391);
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
    [1] = 223,
    [2] = 300,
    [3] = 303,
    [4] = 304,
    [5] = 304,
    [6] = 305,
    [7] = 310,
    [8] = 311,
    [9] = 223,
    [10] = 312,
    [11] = 313,
    [12] = 313,
    [13] = 314,
    [14] = 314,
    [15] = 223,
    [16] = 317,
    [17] = 312,
    [18] = 223,
    [19] = 317,
    [20] = 304,
    [21] = 318,
    [22] = 319,
    [23] = 320,
    [24] = 333,
    [25] = 319,
    [26] = 334,
    [27] = 319,
    [28] = 319,
    [29] = 334,
    [30] = 319,
    [31] = 334,
    [32] = 319,
    [33] = 304,
    [34] = 318,
    [35] = 337,
    [36] = 333,
    [37] = 337,
    [38] = 334,
    [39] = 339,
    [40] = 342,
    [41] = 343,
    [42] = 345,
    [43] = 346,
    [44] = 337,
    [45] = 347,
    [46] = 304,
    [47] = 345,
    [48] = 320,
    [49] = 320,
    [50] = 337,
    [51] = 334,
    [52] = 337,
    [53] = 347,
    [54] = 337,
    [55] = 334,
    [56] = 337,
    [57] = 348,
    [58] = 349,
    [59] = 304,
    [60] = 349,
    [61] = 304,
    [62] = 349,
    [63] = 349,
    [64] = 350,
    [65] = 349,
    [66] = 349,
    [67] = 364,
    [68] = 349,
    [69] = 368,
    [70] = 349,
    [71] = 349,
    [72] = 372,
    [73] = 372,
    [74] = 372,
    [75] = 349,
    [76] = 337,
    [77] = 345,
    [78] = 373,
    [79] = 373,
    [80] = 320,
    [81] = 374,
    [82] = 373,
    [83] = 320,
    [84] = 374,
    [85] = 373,
    [86] = 373,
    [87] = 320,
    [88] = 313,
    [89] = 314,
    [90] = 318,
    [91] = 319,
    [92] = 333,
    [93] = 334,
    [94] = 319,
    [95] = 318,
    [96] = 337,
    [97] = 333,
    [98] = 334,
    [99] = 337,
    [100] = 375,
    [101] = 376,
    [102] = 377,
    [103] = 304,
    [104] = 378,
    [105] = 379,
    [106] = 312,
    [107] = 379,
    [108] = 312,
    [109] = 304,
    [110] = 377,
    [111] = 303,
    [112] = 380,
    [113] = 381,
    [114] = 303,
    [115] = 381,
    [116] = 223,
    [117] = 223,
    [118] = 303,
    [119] = 382,
    [120] = 384,
    [121] = 334,
    [122] = 304,
    [123] = 304,
    [124] = 320,
    [125] = 385,
    [126] = 388,
    [127] = 389,
    [128] = 374,
    [129] = 390,
    [130] = 223,
    [131] = 312,
    [132] = 334,
    [133] = 337,
    [134] = 347,
    [135] = 345,
    [136] = 349,
    [137] = 313,
    [138] = 314,
    [139] = 320,
    [140] = 374,
    [141] = 373,
    [142] = 378,
    [143] = 312,
    [144] = 337,
    [145] = 319,
    [146] = 334,
    [147] = 334,
    [148] = 223,
    [149] = 337,
    [150] = 334,
    [151] = 337,
    [152] = 337,
    [153] = 319,
    [154] = 334,
    [155] = 334,
    [156] = 337,
    [157] = 384,
    [158] = 334,
    [159] = 384,
    [160] = 337,
    [161] = 319,
    [162] = 334,
    [163] = 334,
    [164] = 391,
    [165] = 349,
    [166] = 373,
    [167] = 318,
    [168] = 319,
    [169] = 333,
    [170] = 319,
    [171] = 334,
    [172] = 318,
    [173] = 337,
    [174] = 333,
    [175] = 337,
    [176] = 334,
    [177] = 334,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(130),
        [sym_namespace_declaration] = STATE(131),
        [sym_class_declaration] = STATE(132),
        [sym_struct_declaration] = STATE(132),
        [sym_field_declaration] = STATE(133),
        [sym_variable_declaration] = STATE(134),
        [sym__type] = STATE(135),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(136),
        [sym_equals_value_clause] = STATE(65),
        [sym__literal] = STATE(70),
        [sym_boolean_literal] = STATE(68),
        [sym_character_literal] = STATE(68),
        [sym_integer_literal] = STATE(68),
        [sym__unicode_escape_sequence] = STATE(72),
        [sym__simple_escape_sequence] = STATE(72),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(137),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(138),
        [sym_field_modifiers] = STATE(48),
        [sym__field_modifiers] = STATE(139),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter_list] = STATE(140),
        [sym_type_parameter] = STATE(141),
        [sym_qualified_name] = STATE(142),
        [sym_alias_qualified_name] = STATE(102),
        [sym_name_equals] = STATE(114),
        [sym_static] = STATE(114),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(143),
        [aux_sym_class_declaration_repeat1] = STATE(144),
        [aux_sym_struct_declaration_repeat1] = STATE(145),
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [aux_sym_type_parameter_list_repeat1] = STATE(82),
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
        [sym_null_literal] = ACTIONS(25),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(27),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(27),
        [sym__hexadecimal_escape_sequence] = ACTIONS(29),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(31),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(31),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(33),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(33),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(33),
        [anon_sym_BSLASH0] = ACTIONS(33),
        [anon_sym_BSLASHa] = ACTIONS(33),
        [anon_sym_BSLASHb] = ACTIONS(33),
        [anon_sym_BSLASHf] = ACTIONS(33),
        [anon_sym_BSLASHn] = ACTIONS(33),
        [anon_sym_BSLASHr] = ACTIONS(33),
        [anon_sym_BSLASHt] = ACTIONS(33),
        [anon_sym_BSLASHv] = ACTIONS(33),
        [sym__integer_type_suffix] = ACTIONS(35),
        [anon_sym_abstract] = ACTIONS(37),
        [anon_sym_sealed] = ACTIONS(37),
        [anon_sym_static] = ACTIONS(39),
        [anon_sym_new] = ACTIONS(41),
        [anon_sym_public] = ACTIONS(41),
        [anon_sym_protected] = ACTIONS(41),
        [anon_sym_internal] = ACTIONS(41),
        [anon_sym_private] = ACTIONS(41),
        [anon_sym_unsafe] = ACTIONS(41),
        [anon_sym_readonly] = ACTIONS(43),
        [anon_sym_volatile] = ACTIONS(43),
        [anon_sym_bool] = ACTIONS(45),
        [anon_sym_byte] = ACTIONS(45),
        [anon_sym_char] = ACTIONS(45),
        [anon_sym_decimal] = ACTIONS(45),
        [anon_sym_double] = ACTIONS(45),
        [anon_sym_float] = ACTIONS(45),
        [anon_sym_int] = ACTIONS(45),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_object] = ACTIONS(45),
        [anon_sym_sbyte] = ACTIONS(45),
        [anon_sym_short] = ACTIONS(45),
        [anon_sym_string] = ACTIONS(45),
        [anon_sym_uint] = ACTIONS(45),
        [anon_sym_ulong] = ACTIONS(45),
        [anon_sym_ushort] = ACTIONS(45),
        [anon_sym_LT] = ACTIONS(47),
        [anon_sym_GT] = ACTIONS(49),
        [anon_sym_DOT] = ACTIONS(51),
        [anon_sym_COLON_COLON] = ACTIONS(53),
        [sym_global] = ACTIONS(55),
        [sym_identifier_name] = ACTIONS(57),
        [sym_comment] = ACTIONS(59),
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
        [ts_builtin_sym_end] = ACTIONS(61),
        [anon_sym_using] = ACTIONS(63),
        [anon_sym_namespace] = ACTIONS(65),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [2] = {
        [sym_qualified_name] = STATE(113),
        [sym_alias_qualified_name] = STATE(102),
        [sym_name_equals] = STATE(114),
        [sym_static] = STATE(114),
        [anon_sym_static] = ACTIONS(75),
        [sym_global] = ACTIONS(77),
        [sym_identifier_name] = ACTIONS(79),
        [sym_comment] = ACTIONS(59),
    },
    [3] = {
        [sym_qualified_name] = STATE(101),
        [sym_alias_qualified_name] = STATE(102),
        [sym_global] = ACTIONS(77),
        [sym_identifier_name] = ACTIONS(81),
        [sym_comment] = ACTIONS(59),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(83),
        [sym_comment] = ACTIONS(59),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(85),
        [sym_comment] = ACTIONS(59),
    },
    [6] = {
        [sym__class_modifiers] = STATE(88),
        [anon_sym_class] = ACTIONS(87),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(59),
    },
    [7] = {
        [sym__class_modifiers] = STATE(88),
        [sym__struct_modifiers] = STATE(89),
        [anon_sym_class] = ACTIONS(87),
        [anon_sym_struct] = ACTIONS(89),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(91),
        [sym_comment] = ACTIONS(59),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_using] = ACTIONS(93),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_class] = ACTIONS(93),
        [anon_sym_struct] = ACTIONS(93),
        [anon_sym_abstract] = ACTIONS(93),
        [anon_sym_sealed] = ACTIONS(93),
        [anon_sym_static] = ACTIONS(93),
        [anon_sym_new] = ACTIONS(93),
        [anon_sym_public] = ACTIONS(93),
        [anon_sym_protected] = ACTIONS(93),
        [anon_sym_internal] = ACTIONS(93),
        [anon_sym_private] = ACTIONS(93),
        [anon_sym_unsafe] = ACTIONS(93),
        [sym_comment] = ACTIONS(59),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_namespace] = ACTIONS(95),
        [anon_sym_RBRACE] = ACTIONS(95),
        [anon_sym_class] = ACTIONS(95),
        [anon_sym_struct] = ACTIONS(95),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(95),
        [anon_sym_protected] = ACTIONS(95),
        [anon_sym_internal] = ACTIONS(95),
        [anon_sym_private] = ACTIONS(95),
        [anon_sym_unsafe] = ACTIONS(95),
        [sym_comment] = ACTIONS(59),
    },
    [11] = {
        [anon_sym_class] = ACTIONS(97),
        [sym_comment] = ACTIONS(59),
    },
    [12] = {
        [anon_sym_class] = ACTIONS(99),
        [sym_comment] = ACTIONS(59),
    },
    [13] = {
        [anon_sym_struct] = ACTIONS(101),
        [sym_comment] = ACTIONS(59),
    },
    [14] = {
        [anon_sym_struct] = ACTIONS(103),
        [sym_comment] = ACTIONS(59),
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
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_using] = ACTIONS(63),
        [anon_sym_namespace] = ACTIONS(65),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [16] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_namespace] = ACTIONS(65),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(107),
        [anon_sym_namespace] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(107),
        [sym_comment] = ACTIONS(59),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_using] = ACTIONS(109),
        [anon_sym_namespace] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(109),
        [anon_sym_struct] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(109),
        [anon_sym_sealed] = ACTIONS(109),
        [anon_sym_static] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(109),
        [anon_sym_public] = ACTIONS(109),
        [anon_sym_protected] = ACTIONS(109),
        [anon_sym_internal] = ACTIONS(109),
        [anon_sym_private] = ACTIONS(109),
        [anon_sym_unsafe] = ACTIONS(109),
        [sym_comment] = ACTIONS(59),
    },
    [19] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_namespace] = ACTIONS(65),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [20] = {
        [sym_identifier_name] = ACTIONS(113),
        [sym_comment] = ACTIONS(59),
    },
    [21] = {
        [sym_type_parameter_list] = STATE(24),
        [anon_sym_LBRACE] = ACTIONS(115),
        [anon_sym_LT] = ACTIONS(117),
        [sym_comment] = ACTIONS(59),
    },
    [22] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(32),
        [anon_sym_RBRACE] = ACTIONS(119),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [23] = {
        [sym__type] = STATE(78),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(79),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_comment] = ACTIONS(59),
    },
    [25] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(28),
        [anon_sym_RBRACE] = ACTIONS(127),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_namespace] = ACTIONS(131),
        [anon_sym_RBRACE] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(131),
        [anon_sym_abstract] = ACTIONS(131),
        [anon_sym_sealed] = ACTIONS(131),
        [anon_sym_static] = ACTIONS(131),
        [anon_sym_new] = ACTIONS(131),
        [anon_sym_public] = ACTIONS(131),
        [anon_sym_protected] = ACTIONS(131),
        [anon_sym_internal] = ACTIONS(131),
        [anon_sym_private] = ACTIONS(131),
        [anon_sym_unsafe] = ACTIONS(131),
        [anon_sym_readonly] = ACTIONS(131),
        [anon_sym_volatile] = ACTIONS(131),
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
        [sym_comment] = ACTIONS(59),
    },
    [27] = {
        [anon_sym_RBRACE] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_struct] = ACTIONS(135),
        [anon_sym_abstract] = ACTIONS(135),
        [anon_sym_sealed] = ACTIONS(135),
        [anon_sym_static] = ACTIONS(135),
        [anon_sym_new] = ACTIONS(135),
        [anon_sym_public] = ACTIONS(135),
        [anon_sym_protected] = ACTIONS(135),
        [anon_sym_internal] = ACTIONS(135),
        [anon_sym_private] = ACTIONS(135),
        [anon_sym_unsafe] = ACTIONS(135),
        [sym_comment] = ACTIONS(59),
    },
    [28] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(137),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [29] = {
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
        [sym_comment] = ACTIONS(59),
    },
    [30] = {
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
        [sym_comment] = ACTIONS(59),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_namespace] = ACTIONS(149),
        [anon_sym_RBRACE] = ACTIONS(147),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_struct] = ACTIONS(149),
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
        [sym_identifier_name] = ACTIONS(151),
        [sym_comment] = ACTIONS(59),
    },
    [32] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(127),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [33] = {
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(59),
    },
    [34] = {
        [sym_type_parameter_list] = STATE(36),
        [anon_sym_LBRACE] = ACTIONS(155),
        [anon_sym_LT] = ACTIONS(117),
        [sym_comment] = ACTIONS(59),
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
        [anon_sym_RBRACE] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [36] = {
        [anon_sym_LBRACE] = ACTIONS(171),
        [sym_comment] = ACTIONS(59),
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
        [anon_sym_RBRACE] = ACTIONS(173),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_namespace] = ACTIONS(177),
        [anon_sym_RBRACE] = ACTIONS(175),
        [anon_sym_class] = ACTIONS(177),
        [anon_sym_struct] = ACTIONS(177),
        [anon_sym_abstract] = ACTIONS(177),
        [anon_sym_sealed] = ACTIONS(177),
        [anon_sym_static] = ACTIONS(177),
        [anon_sym_new] = ACTIONS(177),
        [anon_sym_public] = ACTIONS(177),
        [anon_sym_protected] = ACTIONS(177),
        [anon_sym_internal] = ACTIONS(177),
        [anon_sym_private] = ACTIONS(177),
        [anon_sym_unsafe] = ACTIONS(177),
        [anon_sym_readonly] = ACTIONS(177),
        [anon_sym_volatile] = ACTIONS(177),
        [anon_sym_bool] = ACTIONS(177),
        [anon_sym_byte] = ACTIONS(177),
        [anon_sym_char] = ACTIONS(177),
        [anon_sym_decimal] = ACTIONS(177),
        [anon_sym_double] = ACTIONS(177),
        [anon_sym_float] = ACTIONS(177),
        [anon_sym_int] = ACTIONS(177),
        [anon_sym_long] = ACTIONS(177),
        [anon_sym_object] = ACTIONS(177),
        [anon_sym_sbyte] = ACTIONS(177),
        [anon_sym_short] = ACTIONS(177),
        [anon_sym_string] = ACTIONS(177),
        [anon_sym_uint] = ACTIONS(177),
        [anon_sym_ulong] = ACTIONS(177),
        [anon_sym_ushort] = ACTIONS(177),
        [sym_identifier_name] = ACTIONS(179),
        [sym_comment] = ACTIONS(59),
    },
    [39] = {
        [sym__class_modifiers] = STATE(88),
        [sym__field_modifiers] = STATE(87),
        [anon_sym_class] = ACTIONS(181),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
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
        [sym_comment] = ACTIONS(59),
    },
    [40] = {
        [sym__class_modifiers] = STATE(88),
        [sym__struct_modifiers] = STATE(89),
        [sym__field_modifiers] = STATE(87),
        [anon_sym_class] = ACTIONS(181),
        [anon_sym_struct] = ACTIONS(187),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
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
        [sym_comment] = ACTIONS(59),
    },
    [41] = {
        [sym__field_modifiers] = STATE(87),
        [anon_sym_static] = ACTIONS(169),
        [anon_sym_new] = ACTIONS(169),
        [anon_sym_public] = ACTIONS(169),
        [anon_sym_protected] = ACTIONS(169),
        [anon_sym_internal] = ACTIONS(169),
        [anon_sym_private] = ACTIONS(169),
        [anon_sym_unsafe] = ACTIONS(169),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
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
        [sym_comment] = ACTIONS(59),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(189),
        [anon_sym_GT] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(191),
        [sym_comment] = ACTIONS(59),
    },
    [43] = {
        [sym_type_parameter_list] = STATE(77),
        [anon_sym_COMMA] = ACTIONS(193),
        [anon_sym_LT] = ACTIONS(117),
        [anon_sym_GT] = ACTIONS(193),
        [sym_identifier_name] = ACTIONS(195),
        [sym_comment] = ACTIONS(59),
    },
    [44] = {
        [anon_sym_RBRACE] = ACTIONS(197),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(199),
        [anon_sym_abstract] = ACTIONS(199),
        [anon_sym_sealed] = ACTIONS(199),
        [anon_sym_static] = ACTIONS(199),
        [anon_sym_new] = ACTIONS(199),
        [anon_sym_public] = ACTIONS(199),
        [anon_sym_protected] = ACTIONS(199),
        [anon_sym_internal] = ACTIONS(199),
        [anon_sym_private] = ACTIONS(199),
        [anon_sym_unsafe] = ACTIONS(199),
        [anon_sym_readonly] = ACTIONS(199),
        [anon_sym_volatile] = ACTIONS(199),
        [anon_sym_bool] = ACTIONS(199),
        [anon_sym_byte] = ACTIONS(199),
        [anon_sym_char] = ACTIONS(199),
        [anon_sym_decimal] = ACTIONS(199),
        [anon_sym_double] = ACTIONS(199),
        [anon_sym_float] = ACTIONS(199),
        [anon_sym_int] = ACTIONS(199),
        [anon_sym_long] = ACTIONS(199),
        [anon_sym_object] = ACTIONS(199),
        [anon_sym_sbyte] = ACTIONS(199),
        [anon_sym_short] = ACTIONS(199),
        [anon_sym_string] = ACTIONS(199),
        [anon_sym_uint] = ACTIONS(199),
        [anon_sym_ulong] = ACTIONS(199),
        [anon_sym_ushort] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(59),
    },
    [45] = {
        [anon_sym_SEMI] = ACTIONS(203),
        [sym_comment] = ACTIONS(59),
    },
    [46] = {
        [sym_variable_declarator] = STATE(58),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(59),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(193),
        [anon_sym_GT] = ACTIONS(193),
        [sym_identifier_name] = ACTIONS(195),
        [sym_comment] = ACTIONS(59),
    },
    [48] = {
        [sym_variable_declaration] = STATE(53),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [49] = {
        [anon_sym_bool] = ACTIONS(207),
        [anon_sym_byte] = ACTIONS(207),
        [anon_sym_char] = ACTIONS(207),
        [anon_sym_decimal] = ACTIONS(207),
        [anon_sym_double] = ACTIONS(207),
        [anon_sym_float] = ACTIONS(207),
        [anon_sym_int] = ACTIONS(207),
        [anon_sym_long] = ACTIONS(207),
        [anon_sym_object] = ACTIONS(207),
        [anon_sym_sbyte] = ACTIONS(207),
        [anon_sym_short] = ACTIONS(207),
        [anon_sym_string] = ACTIONS(207),
        [anon_sym_uint] = ACTIONS(207),
        [anon_sym_ulong] = ACTIONS(207),
        [anon_sym_ushort] = ACTIONS(207),
        [sym_identifier_name] = ACTIONS(209),
        [sym_comment] = ACTIONS(59),
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
        [anon_sym_RBRACE] = ACTIONS(211),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [51] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_namespace] = ACTIONS(215),
        [anon_sym_RBRACE] = ACTIONS(213),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_struct] = ACTIONS(215),
        [anon_sym_abstract] = ACTIONS(215),
        [anon_sym_sealed] = ACTIONS(215),
        [anon_sym_static] = ACTIONS(215),
        [anon_sym_new] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(215),
        [anon_sym_protected] = ACTIONS(215),
        [anon_sym_internal] = ACTIONS(215),
        [anon_sym_private] = ACTIONS(215),
        [anon_sym_unsafe] = ACTIONS(215),
        [anon_sym_readonly] = ACTIONS(215),
        [anon_sym_volatile] = ACTIONS(215),
        [anon_sym_bool] = ACTIONS(215),
        [anon_sym_byte] = ACTIONS(215),
        [anon_sym_char] = ACTIONS(215),
        [anon_sym_decimal] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_int] = ACTIONS(215),
        [anon_sym_long] = ACTIONS(215),
        [anon_sym_object] = ACTIONS(215),
        [anon_sym_sbyte] = ACTIONS(215),
        [anon_sym_short] = ACTIONS(215),
        [anon_sym_string] = ACTIONS(215),
        [anon_sym_uint] = ACTIONS(215),
        [anon_sym_ulong] = ACTIONS(215),
        [anon_sym_ushort] = ACTIONS(215),
        [sym_identifier_name] = ACTIONS(217),
        [sym_comment] = ACTIONS(59),
    },
    [52] = {
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
        [sym_comment] = ACTIONS(59),
    },
    [53] = {
        [anon_sym_SEMI] = ACTIONS(225),
        [sym_comment] = ACTIONS(59),
    },
    [54] = {
        [anon_sym_RBRACE] = ACTIONS(227),
        [anon_sym_class] = ACTIONS(229),
        [anon_sym_struct] = ACTIONS(229),
        [anon_sym_abstract] = ACTIONS(229),
        [anon_sym_sealed] = ACTIONS(229),
        [anon_sym_static] = ACTIONS(229),
        [anon_sym_new] = ACTIONS(229),
        [anon_sym_public] = ACTIONS(229),
        [anon_sym_protected] = ACTIONS(229),
        [anon_sym_internal] = ACTIONS(229),
        [anon_sym_private] = ACTIONS(229),
        [anon_sym_unsafe] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(229),
        [anon_sym_volatile] = ACTIONS(229),
        [anon_sym_bool] = ACTIONS(229),
        [anon_sym_byte] = ACTIONS(229),
        [anon_sym_char] = ACTIONS(229),
        [anon_sym_decimal] = ACTIONS(229),
        [anon_sym_double] = ACTIONS(229),
        [anon_sym_float] = ACTIONS(229),
        [anon_sym_int] = ACTIONS(229),
        [anon_sym_long] = ACTIONS(229),
        [anon_sym_object] = ACTIONS(229),
        [anon_sym_sbyte] = ACTIONS(229),
        [anon_sym_short] = ACTIONS(229),
        [anon_sym_string] = ACTIONS(229),
        [anon_sym_uint] = ACTIONS(229),
        [anon_sym_ulong] = ACTIONS(229),
        [anon_sym_ushort] = ACTIONS(229),
        [sym_identifier_name] = ACTIONS(231),
        [sym_comment] = ACTIONS(59),
    },
    [55] = {
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
        [sym_comment] = ACTIONS(59),
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
        [anon_sym_RBRACE] = ACTIONS(173),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [57] = {
        [sym_equals_value_clause] = STATE(65),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_EQ] = ACTIONS(241),
        [sym_comment] = ACTIONS(59),
    },
    [58] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(243),
        [anon_sym_COMMA] = ACTIONS(245),
        [sym_comment] = ACTIONS(59),
    },
    [59] = {
        [sym_variable_declarator] = STATE(63),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(59),
    },
    [60] = {
        [anon_sym_SEMI] = ACTIONS(247),
        [anon_sym_COMMA] = ACTIONS(249),
        [sym_comment] = ACTIONS(59),
    },
    [61] = {
        [sym_variable_declarator] = STATE(62),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(59),
    },
    [62] = {
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_COMMA] = ACTIONS(251),
        [sym_comment] = ACTIONS(59),
    },
    [63] = {
        [anon_sym_SEMI] = ACTIONS(253),
        [anon_sym_COMMA] = ACTIONS(253),
        [sym_comment] = ACTIONS(59),
    },
    [64] = {
        [sym__literal] = STATE(70),
        [sym_boolean_literal] = STATE(68),
        [sym_character_literal] = STATE(68),
        [sym_integer_literal] = STATE(68),
        [anon_sym_true] = ACTIONS(255),
        [anon_sym_false] = ACTIONS(255),
        [anon_sym_SQUOTE] = ACTIONS(257),
        [sym_null_literal] = ACTIONS(259),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(261),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(261),
        [sym_comment] = ACTIONS(59),
    },
    [65] = {
        [anon_sym_SEMI] = ACTIONS(263),
        [anon_sym_COMMA] = ACTIONS(263),
        [sym_comment] = ACTIONS(59),
    },
    [66] = {
        [anon_sym_SEMI] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(265),
        [sym_comment] = ACTIONS(59),
    },
    [67] = {
        [sym__unicode_escape_sequence] = STATE(72),
        [sym__simple_escape_sequence] = STATE(72),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(267),
        [sym__hexadecimal_escape_sequence] = ACTIONS(267),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(269),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(269),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(271),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(271),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(271),
        [anon_sym_BSLASH0] = ACTIONS(271),
        [anon_sym_BSLASHa] = ACTIONS(271),
        [anon_sym_BSLASHb] = ACTIONS(271),
        [anon_sym_BSLASHf] = ACTIONS(271),
        [anon_sym_BSLASHn] = ACTIONS(271),
        [anon_sym_BSLASHr] = ACTIONS(271),
        [anon_sym_BSLASHt] = ACTIONS(271),
        [anon_sym_BSLASHv] = ACTIONS(271),
        [sym_comment] = ACTIONS(59),
    },
    [68] = {
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_COMMA] = ACTIONS(273),
        [sym_comment] = ACTIONS(59),
    },
    [69] = {
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(275),
        [sym__integer_type_suffix] = ACTIONS(277),
        [sym_comment] = ACTIONS(59),
    },
    [70] = {
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_COMMA] = ACTIONS(279),
        [sym_comment] = ACTIONS(59),
    },
    [71] = {
        [anon_sym_SEMI] = ACTIONS(281),
        [anon_sym_COMMA] = ACTIONS(281),
        [sym_comment] = ACTIONS(59),
    },
    [72] = {
        [anon_sym_SQUOTE] = ACTIONS(283),
        [sym_comment] = ACTIONS(59),
    },
    [73] = {
        [anon_sym_SQUOTE] = ACTIONS(285),
        [sym_comment] = ACTIONS(59),
    },
    [74] = {
        [anon_sym_SQUOTE] = ACTIONS(287),
        [sym_comment] = ACTIONS(59),
    },
    [75] = {
        [anon_sym_SEMI] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(289),
        [sym_comment] = ACTIONS(59),
    },
    [76] = {
        [anon_sym_RBRACE] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(293),
        [anon_sym_struct] = ACTIONS(293),
        [anon_sym_abstract] = ACTIONS(293),
        [anon_sym_sealed] = ACTIONS(293),
        [anon_sym_static] = ACTIONS(293),
        [anon_sym_new] = ACTIONS(293),
        [anon_sym_public] = ACTIONS(293),
        [anon_sym_protected] = ACTIONS(293),
        [anon_sym_internal] = ACTIONS(293),
        [anon_sym_private] = ACTIONS(293),
        [anon_sym_unsafe] = ACTIONS(293),
        [anon_sym_readonly] = ACTIONS(293),
        [anon_sym_volatile] = ACTIONS(293),
        [anon_sym_bool] = ACTIONS(293),
        [anon_sym_byte] = ACTIONS(293),
        [anon_sym_char] = ACTIONS(293),
        [anon_sym_decimal] = ACTIONS(293),
        [anon_sym_double] = ACTIONS(293),
        [anon_sym_float] = ACTIONS(293),
        [anon_sym_int] = ACTIONS(293),
        [anon_sym_long] = ACTIONS(293),
        [anon_sym_object] = ACTIONS(293),
        [anon_sym_sbyte] = ACTIONS(293),
        [anon_sym_short] = ACTIONS(293),
        [anon_sym_string] = ACTIONS(293),
        [anon_sym_uint] = ACTIONS(293),
        [anon_sym_ulong] = ACTIONS(293),
        [anon_sym_ushort] = ACTIONS(293),
        [sym_identifier_name] = ACTIONS(295),
        [sym_comment] = ACTIONS(59),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_GT] = ACTIONS(297),
        [sym_identifier_name] = ACTIONS(299),
        [sym_comment] = ACTIONS(59),
    },
    [78] = {
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_GT] = ACTIONS(301),
        [sym_comment] = ACTIONS(59),
    },
    [79] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(82),
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_GT] = ACTIONS(305),
        [sym_comment] = ACTIONS(59),
    },
    [80] = {
        [sym__type] = STATE(78),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(86),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [81] = {
        [anon_sym_LBRACE] = ACTIONS(307),
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_GT] = ACTIONS(307),
        [sym_identifier_name] = ACTIONS(309),
        [sym_comment] = ACTIONS(59),
    },
    [82] = {
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_GT] = ACTIONS(313),
        [sym_comment] = ACTIONS(59),
    },
    [83] = {
        [sym__type] = STATE(78),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(85),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [84] = {
        [anon_sym_LBRACE] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_GT] = ACTIONS(315),
        [sym_identifier_name] = ACTIONS(317),
        [sym_comment] = ACTIONS(59),
    },
    [85] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_GT] = ACTIONS(319),
        [sym_comment] = ACTIONS(59),
    },
    [86] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_GT] = ACTIONS(321),
        [sym_comment] = ACTIONS(59),
    },
    [87] = {
        [anon_sym_bool] = ACTIONS(323),
        [anon_sym_byte] = ACTIONS(323),
        [anon_sym_char] = ACTIONS(323),
        [anon_sym_decimal] = ACTIONS(323),
        [anon_sym_double] = ACTIONS(323),
        [anon_sym_float] = ACTIONS(323),
        [anon_sym_int] = ACTIONS(323),
        [anon_sym_long] = ACTIONS(323),
        [anon_sym_object] = ACTIONS(323),
        [anon_sym_sbyte] = ACTIONS(323),
        [anon_sym_short] = ACTIONS(323),
        [anon_sym_string] = ACTIONS(323),
        [anon_sym_uint] = ACTIONS(323),
        [anon_sym_ulong] = ACTIONS(323),
        [anon_sym_ushort] = ACTIONS(323),
        [sym_identifier_name] = ACTIONS(325),
        [sym_comment] = ACTIONS(59),
    },
    [88] = {
        [anon_sym_class] = ACTIONS(327),
        [sym_comment] = ACTIONS(59),
    },
    [89] = {
        [anon_sym_struct] = ACTIONS(329),
        [sym_comment] = ACTIONS(59),
    },
    [90] = {
        [sym_type_parameter_list] = STATE(92),
        [anon_sym_LBRACE] = ACTIONS(331),
        [anon_sym_LT] = ACTIONS(117),
        [sym_comment] = ACTIONS(59),
    },
    [91] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(94),
        [anon_sym_RBRACE] = ACTIONS(333),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [92] = {
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_comment] = ACTIONS(59),
    },
    [93] = {
        [ts_builtin_sym_end] = ACTIONS(335),
        [anon_sym_namespace] = ACTIONS(337),
        [anon_sym_RBRACE] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(337),
        [anon_sym_struct] = ACTIONS(337),
        [anon_sym_abstract] = ACTIONS(337),
        [anon_sym_sealed] = ACTIONS(337),
        [anon_sym_static] = ACTIONS(337),
        [anon_sym_new] = ACTIONS(337),
        [anon_sym_public] = ACTIONS(337),
        [anon_sym_protected] = ACTIONS(337),
        [anon_sym_internal] = ACTIONS(337),
        [anon_sym_private] = ACTIONS(337),
        [anon_sym_unsafe] = ACTIONS(337),
        [anon_sym_readonly] = ACTIONS(337),
        [anon_sym_volatile] = ACTIONS(337),
        [anon_sym_bool] = ACTIONS(337),
        [anon_sym_byte] = ACTIONS(337),
        [anon_sym_char] = ACTIONS(337),
        [anon_sym_decimal] = ACTIONS(337),
        [anon_sym_double] = ACTIONS(337),
        [anon_sym_float] = ACTIONS(337),
        [anon_sym_int] = ACTIONS(337),
        [anon_sym_long] = ACTIONS(337),
        [anon_sym_object] = ACTIONS(337),
        [anon_sym_sbyte] = ACTIONS(337),
        [anon_sym_short] = ACTIONS(337),
        [anon_sym_string] = ACTIONS(337),
        [anon_sym_uint] = ACTIONS(337),
        [anon_sym_ulong] = ACTIONS(337),
        [anon_sym_ushort] = ACTIONS(337),
        [sym_identifier_name] = ACTIONS(339),
        [sym_comment] = ACTIONS(59),
    },
    [94] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(119),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [95] = {
        [sym_type_parameter_list] = STATE(97),
        [anon_sym_LBRACE] = ACTIONS(341),
        [anon_sym_LT] = ACTIONS(117),
        [sym_comment] = ACTIONS(59),
    },
    [96] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(99),
        [anon_sym_RBRACE] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [97] = {
        [anon_sym_LBRACE] = ACTIONS(155),
        [sym_comment] = ACTIONS(59),
    },
    [98] = {
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_namespace] = ACTIONS(347),
        [anon_sym_RBRACE] = ACTIONS(345),
        [anon_sym_class] = ACTIONS(347),
        [anon_sym_struct] = ACTIONS(347),
        [anon_sym_abstract] = ACTIONS(347),
        [anon_sym_sealed] = ACTIONS(347),
        [anon_sym_static] = ACTIONS(347),
        [anon_sym_new] = ACTIONS(347),
        [anon_sym_public] = ACTIONS(347),
        [anon_sym_protected] = ACTIONS(347),
        [anon_sym_internal] = ACTIONS(347),
        [anon_sym_private] = ACTIONS(347),
        [anon_sym_unsafe] = ACTIONS(347),
        [anon_sym_readonly] = ACTIONS(347),
        [anon_sym_volatile] = ACTIONS(347),
        [anon_sym_bool] = ACTIONS(347),
        [anon_sym_byte] = ACTIONS(347),
        [anon_sym_char] = ACTIONS(347),
        [anon_sym_decimal] = ACTIONS(347),
        [anon_sym_double] = ACTIONS(347),
        [anon_sym_float] = ACTIONS(347),
        [anon_sym_int] = ACTIONS(347),
        [anon_sym_long] = ACTIONS(347),
        [anon_sym_object] = ACTIONS(347),
        [anon_sym_sbyte] = ACTIONS(347),
        [anon_sym_short] = ACTIONS(347),
        [anon_sym_string] = ACTIONS(347),
        [anon_sym_uint] = ACTIONS(347),
        [anon_sym_ulong] = ACTIONS(347),
        [anon_sym_ushort] = ACTIONS(347),
        [sym_identifier_name] = ACTIONS(349),
        [sym_comment] = ACTIONS(59),
    },
    [99] = {
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
        [anon_sym_RBRACE] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [100] = {
        [anon_sym_COLON_COLON] = ACTIONS(351),
        [sym_comment] = ACTIONS(59),
    },
    [101] = {
        [anon_sym_LBRACE] = ACTIONS(353),
        [anon_sym_DOT] = ACTIONS(355),
        [sym_comment] = ACTIONS(59),
    },
    [102] = {
        [anon_sym_DOT] = ACTIONS(355),
        [sym_comment] = ACTIONS(59),
    },
    [103] = {
        [sym_identifier_name] = ACTIONS(357),
        [sym_comment] = ACTIONS(59),
    },
    [104] = {
        [anon_sym_SEMI] = ACTIONS(359),
        [anon_sym_LBRACE] = ACTIONS(359),
        [anon_sym_DOT] = ACTIONS(359),
        [sym_comment] = ACTIONS(59),
    },
    [105] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(107),
        [anon_sym_namespace] = ACTIONS(65),
        [anon_sym_RBRACE] = ACTIONS(361),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [106] = {
        [ts_builtin_sym_end] = ACTIONS(363),
        [anon_sym_namespace] = ACTIONS(363),
        [anon_sym_RBRACE] = ACTIONS(363),
        [anon_sym_class] = ACTIONS(363),
        [anon_sym_struct] = ACTIONS(363),
        [anon_sym_abstract] = ACTIONS(363),
        [anon_sym_sealed] = ACTIONS(363),
        [anon_sym_static] = ACTIONS(363),
        [anon_sym_new] = ACTIONS(363),
        [anon_sym_public] = ACTIONS(363),
        [anon_sym_protected] = ACTIONS(363),
        [anon_sym_internal] = ACTIONS(363),
        [anon_sym_private] = ACTIONS(363),
        [anon_sym_unsafe] = ACTIONS(363),
        [sym_comment] = ACTIONS(59),
    },
    [107] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_namespace] = ACTIONS(65),
        [anon_sym_RBRACE] = ACTIONS(365),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [108] = {
        [ts_builtin_sym_end] = ACTIONS(367),
        [anon_sym_namespace] = ACTIONS(367),
        [anon_sym_RBRACE] = ACTIONS(367),
        [anon_sym_class] = ACTIONS(367),
        [anon_sym_struct] = ACTIONS(367),
        [anon_sym_abstract] = ACTIONS(367),
        [anon_sym_sealed] = ACTIONS(367),
        [anon_sym_static] = ACTIONS(367),
        [anon_sym_new] = ACTIONS(367),
        [anon_sym_public] = ACTIONS(367),
        [anon_sym_protected] = ACTIONS(367),
        [anon_sym_internal] = ACTIONS(367),
        [anon_sym_private] = ACTIONS(367),
        [anon_sym_unsafe] = ACTIONS(367),
        [sym_comment] = ACTIONS(59),
    },
    [109] = {
        [sym_identifier_name] = ACTIONS(369),
        [sym_comment] = ACTIONS(59),
    },
    [110] = {
        [anon_sym_DOT] = ACTIONS(371),
        [sym_comment] = ACTIONS(59),
    },
    [111] = {
        [sym_global] = ACTIONS(373),
        [sym_identifier_name] = ACTIONS(375),
        [sym_comment] = ACTIONS(59),
    },
    [112] = {
        [anon_sym_SEMI] = ACTIONS(377),
        [anon_sym_EQ] = ACTIONS(379),
        [anon_sym_DOT] = ACTIONS(355),
        [sym_comment] = ACTIONS(59),
    },
    [113] = {
        [anon_sym_SEMI] = ACTIONS(377),
        [anon_sym_DOT] = ACTIONS(355),
        [sym_comment] = ACTIONS(59),
    },
    [114] = {
        [sym_qualified_name] = STATE(115),
        [sym_alias_qualified_name] = STATE(102),
        [sym_global] = ACTIONS(77),
        [sym_identifier_name] = ACTIONS(381),
        [sym_comment] = ACTIONS(59),
    },
    [115] = {
        [anon_sym_SEMI] = ACTIONS(383),
        [anon_sym_DOT] = ACTIONS(355),
        [sym_comment] = ACTIONS(59),
    },
    [116] = {
        [ts_builtin_sym_end] = ACTIONS(385),
        [anon_sym_using] = ACTIONS(385),
        [anon_sym_namespace] = ACTIONS(385),
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
        [sym_comment] = ACTIONS(59),
    },
    [117] = {
        [ts_builtin_sym_end] = ACTIONS(387),
        [anon_sym_using] = ACTIONS(387),
        [anon_sym_namespace] = ACTIONS(387),
        [anon_sym_class] = ACTIONS(387),
        [anon_sym_struct] = ACTIONS(387),
        [anon_sym_abstract] = ACTIONS(387),
        [anon_sym_sealed] = ACTIONS(387),
        [anon_sym_static] = ACTIONS(387),
        [anon_sym_new] = ACTIONS(387),
        [anon_sym_public] = ACTIONS(387),
        [anon_sym_protected] = ACTIONS(387),
        [anon_sym_internal] = ACTIONS(387),
        [anon_sym_private] = ACTIONS(387),
        [anon_sym_unsafe] = ACTIONS(387),
        [sym_comment] = ACTIONS(59),
    },
    [118] = {
        [sym_global] = ACTIONS(389),
        [sym_identifier_name] = ACTIONS(391),
        [sym_comment] = ACTIONS(59),
    },
    [119] = {
        [ts_builtin_sym_end] = ACTIONS(393),
        [anon_sym_using] = ACTIONS(396),
        [anon_sym_namespace] = ACTIONS(396),
        [anon_sym_RBRACE] = ACTIONS(399),
        [anon_sym_class] = ACTIONS(402),
        [anon_sym_struct] = ACTIONS(402),
        [anon_sym_abstract] = ACTIONS(402),
        [anon_sym_sealed] = ACTIONS(402),
        [anon_sym_static] = ACTIONS(402),
        [anon_sym_new] = ACTIONS(402),
        [anon_sym_public] = ACTIONS(402),
        [anon_sym_protected] = ACTIONS(402),
        [anon_sym_internal] = ACTIONS(402),
        [anon_sym_private] = ACTIONS(402),
        [anon_sym_unsafe] = ACTIONS(402),
        [anon_sym_readonly] = ACTIONS(407),
        [anon_sym_volatile] = ACTIONS(407),
        [anon_sym_bool] = ACTIONS(407),
        [anon_sym_byte] = ACTIONS(407),
        [anon_sym_char] = ACTIONS(407),
        [anon_sym_decimal] = ACTIONS(407),
        [anon_sym_double] = ACTIONS(407),
        [anon_sym_float] = ACTIONS(407),
        [anon_sym_int] = ACTIONS(407),
        [anon_sym_long] = ACTIONS(407),
        [anon_sym_object] = ACTIONS(407),
        [anon_sym_sbyte] = ACTIONS(407),
        [anon_sym_short] = ACTIONS(407),
        [anon_sym_string] = ACTIONS(407),
        [anon_sym_uint] = ACTIONS(407),
        [anon_sym_ulong] = ACTIONS(407),
        [anon_sym_ushort] = ACTIONS(407),
        [sym_identifier_name] = ACTIONS(410),
        [sym_comment] = ACTIONS(59),
    },
    [120] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(159),
        [sym_struct_declaration] = STATE(159),
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
        [aux_sym_compilation_unit_repeat2] = STATE(107),
        [aux_sym_class_declaration_repeat1] = STATE(144),
        [aux_sym_struct_declaration_repeat1] = STATE(145),
        [anon_sym_namespace] = ACTIONS(413),
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [121] = {
        [ts_builtin_sym_end] = ACTIONS(417),
        [anon_sym_namespace] = ACTIONS(428),
        [anon_sym_RBRACE] = ACTIONS(417),
        [anon_sym_class] = ACTIONS(428),
        [anon_sym_struct] = ACTIONS(428),
        [anon_sym_abstract] = ACTIONS(428),
        [anon_sym_sealed] = ACTIONS(428),
        [anon_sym_static] = ACTIONS(428),
        [anon_sym_new] = ACTIONS(428),
        [anon_sym_public] = ACTIONS(428),
        [anon_sym_protected] = ACTIONS(428),
        [anon_sym_internal] = ACTIONS(428),
        [anon_sym_private] = ACTIONS(428),
        [anon_sym_unsafe] = ACTIONS(428),
        [anon_sym_readonly] = ACTIONS(439),
        [anon_sym_volatile] = ACTIONS(439),
        [anon_sym_bool] = ACTIONS(439),
        [anon_sym_byte] = ACTIONS(439),
        [anon_sym_char] = ACTIONS(439),
        [anon_sym_decimal] = ACTIONS(439),
        [anon_sym_double] = ACTIONS(439),
        [anon_sym_float] = ACTIONS(439),
        [anon_sym_int] = ACTIONS(439),
        [anon_sym_long] = ACTIONS(439),
        [anon_sym_object] = ACTIONS(439),
        [anon_sym_sbyte] = ACTIONS(439),
        [anon_sym_short] = ACTIONS(439),
        [anon_sym_string] = ACTIONS(439),
        [anon_sym_uint] = ACTIONS(439),
        [anon_sym_ulong] = ACTIONS(439),
        [anon_sym_ushort] = ACTIONS(439),
        [sym_identifier_name] = ACTIONS(448),
        [sym_comment] = ACTIONS(59),
    },
    [122] = {
        [sym_identifier_name] = ACTIONS(457),
        [sym_comment] = ACTIONS(59),
    },
    [123] = {
        [sym_identifier_name] = ACTIONS(459),
        [sym_comment] = ACTIONS(59),
    },
    [124] = {
        [sym__type] = STATE(78),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(165),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(166),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(461),
        [sym_comment] = ACTIONS(59),
    },
    [125] = {
        [sym__literal] = STATE(70),
        [sym_boolean_literal] = STATE(68),
        [sym_character_literal] = STATE(68),
        [sym_integer_literal] = STATE(68),
        [anon_sym_true] = ACTIONS(463),
        [anon_sym_false] = ACTIONS(463),
        [anon_sym_SQUOTE] = ACTIONS(257),
        [sym_null_literal] = ACTIONS(465),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(261),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(261),
        [sym_global] = ACTIONS(389),
        [sym_identifier_name] = ACTIONS(391),
        [sym_comment] = ACTIONS(59),
    },
    [126] = {
        [sym__unicode_escape_sequence] = STATE(72),
        [sym__simple_escape_sequence] = STATE(72),
        [anon_sym_SEMI] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(289),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(467),
        [sym__hexadecimal_escape_sequence] = ACTIONS(267),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(269),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(269),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(271),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(271),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(271),
        [anon_sym_BSLASH0] = ACTIONS(271),
        [anon_sym_BSLASHa] = ACTIONS(271),
        [anon_sym_BSLASHb] = ACTIONS(271),
        [anon_sym_BSLASHf] = ACTIONS(271),
        [anon_sym_BSLASHn] = ACTIONS(271),
        [anon_sym_BSLASHr] = ACTIONS(271),
        [anon_sym_BSLASHt] = ACTIONS(271),
        [anon_sym_BSLASHv] = ACTIONS(271),
        [sym_comment] = ACTIONS(59),
    },
    [127] = {
        [sym__class_modifiers] = STATE(88),
        [sym__field_modifiers] = STATE(87),
        [anon_sym_class] = ACTIONS(181),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
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
        [sym_global] = ACTIONS(373),
        [sym_identifier_name] = ACTIONS(469),
        [sym_comment] = ACTIONS(59),
    },
    [128] = {
        [anon_sym_LBRACE] = ACTIONS(472),
        [anon_sym_COMMA] = ACTIONS(472),
        [anon_sym_GT] = ACTIONS(472),
        [sym_identifier_name] = ACTIONS(475),
        [sym_comment] = ACTIONS(59),
    },
    [129] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(140),
        [anon_sym_SEMI] = ACTIONS(478),
        [anon_sym_LBRACE] = ACTIONS(482),
        [anon_sym_COMMA] = ACTIONS(485),
        [anon_sym_EQ] = ACTIONS(488),
        [anon_sym_LT] = ACTIONS(117),
        [anon_sym_GT] = ACTIONS(193),
        [anon_sym_DOT] = ACTIONS(490),
        [sym_identifier_name] = ACTIONS(195),
        [sym_comment] = ACTIONS(59),
    },
    [130] = {
        [ts_builtin_sym_end] = ACTIONS(494),
        [anon_sym_using] = ACTIONS(494),
        [anon_sym_namespace] = ACTIONS(494),
        [anon_sym_class] = ACTIONS(494),
        [anon_sym_struct] = ACTIONS(494),
        [anon_sym_abstract] = ACTIONS(494),
        [anon_sym_sealed] = ACTIONS(494),
        [anon_sym_static] = ACTIONS(494),
        [anon_sym_new] = ACTIONS(494),
        [anon_sym_public] = ACTIONS(494),
        [anon_sym_protected] = ACTIONS(494),
        [anon_sym_internal] = ACTIONS(494),
        [anon_sym_private] = ACTIONS(494),
        [anon_sym_unsafe] = ACTIONS(494),
        [sym_comment] = ACTIONS(59),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_namespace] = ACTIONS(497),
        [anon_sym_RBRACE] = ACTIONS(497),
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
        [sym_comment] = ACTIONS(59),
    },
    [132] = {
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_namespace] = ACTIONS(500),
        [anon_sym_RBRACE] = ACTIONS(503),
        [anon_sym_class] = ACTIONS(510),
        [anon_sym_struct] = ACTIONS(510),
        [anon_sym_abstract] = ACTIONS(510),
        [anon_sym_sealed] = ACTIONS(510),
        [anon_sym_static] = ACTIONS(510),
        [anon_sym_new] = ACTIONS(510),
        [anon_sym_public] = ACTIONS(510),
        [anon_sym_protected] = ACTIONS(510),
        [anon_sym_internal] = ACTIONS(510),
        [anon_sym_private] = ACTIONS(510),
        [anon_sym_unsafe] = ACTIONS(510),
        [anon_sym_readonly] = ACTIONS(517),
        [anon_sym_volatile] = ACTIONS(517),
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
        [sym_identifier_name] = ACTIONS(520),
        [sym_comment] = ACTIONS(59),
    },
    [133] = {
        [anon_sym_RBRACE] = ACTIONS(523),
        [anon_sym_class] = ACTIONS(517),
        [anon_sym_struct] = ACTIONS(517),
        [anon_sym_abstract] = ACTIONS(517),
        [anon_sym_sealed] = ACTIONS(517),
        [anon_sym_static] = ACTIONS(517),
        [anon_sym_new] = ACTIONS(517),
        [anon_sym_public] = ACTIONS(517),
        [anon_sym_protected] = ACTIONS(517),
        [anon_sym_internal] = ACTIONS(517),
        [anon_sym_private] = ACTIONS(517),
        [anon_sym_unsafe] = ACTIONS(517),
        [anon_sym_readonly] = ACTIONS(517),
        [anon_sym_volatile] = ACTIONS(517),
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
        [sym_identifier_name] = ACTIONS(520),
        [sym_comment] = ACTIONS(59),
    },
    [134] = {
        [anon_sym_SEMI] = ACTIONS(526),
        [sym_comment] = ACTIONS(59),
    },
    [135] = {
        [sym_variable_declarator] = STATE(58),
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_GT] = ACTIONS(301),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(59),
    },
    [136] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(528),
        [anon_sym_COMMA] = ACTIONS(532),
        [sym_comment] = ACTIONS(59),
    },
    [137] = {
        [anon_sym_class] = ACTIONS(536),
        [sym_comment] = ACTIONS(59),
    },
    [138] = {
        [anon_sym_struct] = ACTIONS(539),
        [sym_comment] = ACTIONS(59),
    },
    [139] = {
        [anon_sym_bool] = ACTIONS(542),
        [anon_sym_byte] = ACTIONS(542),
        [anon_sym_char] = ACTIONS(542),
        [anon_sym_decimal] = ACTIONS(542),
        [anon_sym_double] = ACTIONS(542),
        [anon_sym_float] = ACTIONS(542),
        [anon_sym_int] = ACTIONS(542),
        [anon_sym_long] = ACTIONS(542),
        [anon_sym_object] = ACTIONS(542),
        [anon_sym_sbyte] = ACTIONS(542),
        [anon_sym_short] = ACTIONS(542),
        [anon_sym_string] = ACTIONS(542),
        [anon_sym_uint] = ACTIONS(542),
        [anon_sym_ulong] = ACTIONS(542),
        [anon_sym_ushort] = ACTIONS(542),
        [sym_identifier_name] = ACTIONS(545),
        [sym_comment] = ACTIONS(59),
    },
    [140] = {
        [anon_sym_LBRACE] = ACTIONS(548),
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_GT] = ACTIONS(297),
        [sym_identifier_name] = ACTIONS(299),
        [sym_comment] = ACTIONS(59),
    },
    [141] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(82),
        [anon_sym_COMMA] = ACTIONS(550),
        [anon_sym_GT] = ACTIONS(554),
        [sym_comment] = ACTIONS(59),
    },
    [142] = {
        [anon_sym_SEMI] = ACTIONS(558),
        [anon_sym_LBRACE] = ACTIONS(353),
        [anon_sym_DOT] = ACTIONS(355),
        [sym_comment] = ACTIONS(59),
    },
    [143] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(560),
        [anon_sym_namespace] = ACTIONS(65),
        [anon_sym_RBRACE] = ACTIONS(365),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [144] = {
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
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [145] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(565),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [146] = {
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_namespace] = ACTIONS(571),
        [anon_sym_RBRACE] = ACTIONS(567),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_struct] = ACTIONS(571),
        [anon_sym_abstract] = ACTIONS(571),
        [anon_sym_sealed] = ACTIONS(571),
        [anon_sym_static] = ACTIONS(571),
        [anon_sym_new] = ACTIONS(571),
        [anon_sym_public] = ACTIONS(571),
        [anon_sym_protected] = ACTIONS(571),
        [anon_sym_internal] = ACTIONS(571),
        [anon_sym_private] = ACTIONS(571),
        [anon_sym_unsafe] = ACTIONS(571),
        [anon_sym_readonly] = ACTIONS(571),
        [anon_sym_volatile] = ACTIONS(571),
        [anon_sym_bool] = ACTIONS(571),
        [anon_sym_byte] = ACTIONS(571),
        [anon_sym_char] = ACTIONS(571),
        [anon_sym_decimal] = ACTIONS(571),
        [anon_sym_double] = ACTIONS(571),
        [anon_sym_float] = ACTIONS(571),
        [anon_sym_int] = ACTIONS(571),
        [anon_sym_long] = ACTIONS(571),
        [anon_sym_object] = ACTIONS(571),
        [anon_sym_sbyte] = ACTIONS(571),
        [anon_sym_short] = ACTIONS(571),
        [anon_sym_string] = ACTIONS(571),
        [anon_sym_uint] = ACTIONS(571),
        [anon_sym_ulong] = ACTIONS(571),
        [anon_sym_ushort] = ACTIONS(571),
        [sym_identifier_name] = ACTIONS(575),
        [sym_comment] = ACTIONS(59),
    },
    [147] = {
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_namespace] = ACTIONS(583),
        [anon_sym_RBRACE] = ACTIONS(579),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_struct] = ACTIONS(583),
        [anon_sym_abstract] = ACTIONS(583),
        [anon_sym_sealed] = ACTIONS(583),
        [anon_sym_static] = ACTIONS(583),
        [anon_sym_new] = ACTIONS(583),
        [anon_sym_public] = ACTIONS(583),
        [anon_sym_protected] = ACTIONS(583),
        [anon_sym_internal] = ACTIONS(583),
        [anon_sym_private] = ACTIONS(583),
        [anon_sym_unsafe] = ACTIONS(583),
        [anon_sym_readonly] = ACTIONS(583),
        [anon_sym_volatile] = ACTIONS(583),
        [anon_sym_bool] = ACTIONS(583),
        [anon_sym_byte] = ACTIONS(583),
        [anon_sym_char] = ACTIONS(583),
        [anon_sym_decimal] = ACTIONS(583),
        [anon_sym_double] = ACTIONS(583),
        [anon_sym_float] = ACTIONS(583),
        [anon_sym_int] = ACTIONS(583),
        [anon_sym_long] = ACTIONS(583),
        [anon_sym_object] = ACTIONS(583),
        [anon_sym_sbyte] = ACTIONS(583),
        [anon_sym_short] = ACTIONS(583),
        [anon_sym_string] = ACTIONS(583),
        [anon_sym_uint] = ACTIONS(583),
        [anon_sym_ulong] = ACTIONS(583),
        [anon_sym_ushort] = ACTIONS(583),
        [sym_identifier_name] = ACTIONS(587),
        [sym_comment] = ACTIONS(59),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(393),
        [anon_sym_using] = ACTIONS(393),
        [anon_sym_namespace] = ACTIONS(393),
        [anon_sym_class] = ACTIONS(393),
        [anon_sym_struct] = ACTIONS(393),
        [anon_sym_abstract] = ACTIONS(393),
        [anon_sym_sealed] = ACTIONS(393),
        [anon_sym_static] = ACTIONS(393),
        [anon_sym_new] = ACTIONS(393),
        [anon_sym_public] = ACTIONS(393),
        [anon_sym_protected] = ACTIONS(393),
        [anon_sym_internal] = ACTIONS(393),
        [anon_sym_private] = ACTIONS(393),
        [anon_sym_unsafe] = ACTIONS(393),
        [sym_comment] = ACTIONS(59),
    },
    [149] = {
        [sym_class_declaration] = STATE(151),
        [sym_struct_declaration] = STATE(151),
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
        [aux_sym_class_declaration_repeat1] = STATE(152),
        [aux_sym_struct_declaration_repeat1] = STATE(153),
        [anon_sym_RBRACE] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [150] = {
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_namespace] = ACTIONS(598),
        [anon_sym_RBRACE] = ACTIONS(593),
        [anon_sym_class] = ACTIONS(598),
        [anon_sym_struct] = ACTIONS(598),
        [anon_sym_abstract] = ACTIONS(598),
        [anon_sym_sealed] = ACTIONS(598),
        [anon_sym_static] = ACTIONS(598),
        [anon_sym_new] = ACTIONS(598),
        [anon_sym_public] = ACTIONS(598),
        [anon_sym_protected] = ACTIONS(598),
        [anon_sym_internal] = ACTIONS(598),
        [anon_sym_private] = ACTIONS(598),
        [anon_sym_unsafe] = ACTIONS(598),
        [anon_sym_readonly] = ACTIONS(598),
        [anon_sym_volatile] = ACTIONS(598),
        [anon_sym_bool] = ACTIONS(598),
        [anon_sym_byte] = ACTIONS(598),
        [anon_sym_char] = ACTIONS(598),
        [anon_sym_decimal] = ACTIONS(598),
        [anon_sym_double] = ACTIONS(598),
        [anon_sym_float] = ACTIONS(598),
        [anon_sym_int] = ACTIONS(598),
        [anon_sym_long] = ACTIONS(598),
        [anon_sym_object] = ACTIONS(598),
        [anon_sym_sbyte] = ACTIONS(598),
        [anon_sym_short] = ACTIONS(598),
        [anon_sym_string] = ACTIONS(598),
        [anon_sym_uint] = ACTIONS(598),
        [anon_sym_ulong] = ACTIONS(598),
        [anon_sym_ushort] = ACTIONS(598),
        [sym_identifier_name] = ACTIONS(603),
        [sym_comment] = ACTIONS(59),
    },
    [151] = {
        [anon_sym_RBRACE] = ACTIONS(608),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_struct] = ACTIONS(611),
        [anon_sym_abstract] = ACTIONS(611),
        [anon_sym_sealed] = ACTIONS(611),
        [anon_sym_static] = ACTIONS(611),
        [anon_sym_new] = ACTIONS(611),
        [anon_sym_public] = ACTIONS(611),
        [anon_sym_protected] = ACTIONS(611),
        [anon_sym_internal] = ACTIONS(611),
        [anon_sym_private] = ACTIONS(611),
        [anon_sym_unsafe] = ACTIONS(611),
        [anon_sym_readonly] = ACTIONS(199),
        [anon_sym_volatile] = ACTIONS(199),
        [anon_sym_bool] = ACTIONS(199),
        [anon_sym_byte] = ACTIONS(199),
        [anon_sym_char] = ACTIONS(199),
        [anon_sym_decimal] = ACTIONS(199),
        [anon_sym_double] = ACTIONS(199),
        [anon_sym_float] = ACTIONS(199),
        [anon_sym_int] = ACTIONS(199),
        [anon_sym_long] = ACTIONS(199),
        [anon_sym_object] = ACTIONS(199),
        [anon_sym_sbyte] = ACTIONS(199),
        [anon_sym_short] = ACTIONS(199),
        [anon_sym_string] = ACTIONS(199),
        [anon_sym_uint] = ACTIONS(199),
        [anon_sym_ulong] = ACTIONS(199),
        [anon_sym_ushort] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(59),
    },
    [152] = {
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
        [anon_sym_RBRACE] = ACTIONS(614),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [153] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(616),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [154] = {
        [ts_builtin_sym_end] = ACTIONS(618),
        [anon_sym_namespace] = ACTIONS(621),
        [anon_sym_RBRACE] = ACTIONS(618),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_struct] = ACTIONS(621),
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
        [sym_identifier_name] = ACTIONS(624),
        [sym_comment] = ACTIONS(59),
    },
    [155] = {
        [ts_builtin_sym_end] = ACTIONS(627),
        [anon_sym_namespace] = ACTIONS(630),
        [anon_sym_RBRACE] = ACTIONS(627),
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
        [sym_identifier_name] = ACTIONS(633),
        [sym_comment] = ACTIONS(59),
    },
    [156] = {
        [anon_sym_RBRACE] = ACTIONS(399),
        [anon_sym_class] = ACTIONS(407),
        [anon_sym_struct] = ACTIONS(407),
        [anon_sym_abstract] = ACTIONS(407),
        [anon_sym_sealed] = ACTIONS(407),
        [anon_sym_static] = ACTIONS(407),
        [anon_sym_new] = ACTIONS(407),
        [anon_sym_public] = ACTIONS(407),
        [anon_sym_protected] = ACTIONS(407),
        [anon_sym_internal] = ACTIONS(407),
        [anon_sym_private] = ACTIONS(407),
        [anon_sym_unsafe] = ACTIONS(407),
        [anon_sym_readonly] = ACTIONS(407),
        [anon_sym_volatile] = ACTIONS(407),
        [anon_sym_bool] = ACTIONS(407),
        [anon_sym_byte] = ACTIONS(407),
        [anon_sym_char] = ACTIONS(407),
        [anon_sym_decimal] = ACTIONS(407),
        [anon_sym_double] = ACTIONS(407),
        [anon_sym_float] = ACTIONS(407),
        [anon_sym_int] = ACTIONS(407),
        [anon_sym_long] = ACTIONS(407),
        [anon_sym_object] = ACTIONS(407),
        [anon_sym_sbyte] = ACTIONS(407),
        [anon_sym_short] = ACTIONS(407),
        [anon_sym_string] = ACTIONS(407),
        [anon_sym_uint] = ACTIONS(407),
        [anon_sym_ulong] = ACTIONS(407),
        [anon_sym_ushort] = ACTIONS(407),
        [sym_identifier_name] = ACTIONS(410),
        [sym_comment] = ACTIONS(59),
    },
    [157] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(159),
        [sym_struct_declaration] = STATE(159),
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
        [aux_sym_compilation_unit_repeat2] = STATE(107),
        [aux_sym_class_declaration_repeat1] = STATE(160),
        [aux_sym_struct_declaration_repeat1] = STATE(161),
        [anon_sym_namespace] = ACTIONS(413),
        [anon_sym_RBRACE] = ACTIONS(636),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [158] = {
        [ts_builtin_sym_end] = ACTIONS(638),
        [anon_sym_namespace] = ACTIONS(644),
        [anon_sym_RBRACE] = ACTIONS(638),
        [anon_sym_class] = ACTIONS(644),
        [anon_sym_struct] = ACTIONS(644),
        [anon_sym_abstract] = ACTIONS(644),
        [anon_sym_sealed] = ACTIONS(644),
        [anon_sym_static] = ACTIONS(644),
        [anon_sym_new] = ACTIONS(644),
        [anon_sym_public] = ACTIONS(644),
        [anon_sym_protected] = ACTIONS(644),
        [anon_sym_internal] = ACTIONS(644),
        [anon_sym_private] = ACTIONS(644),
        [anon_sym_unsafe] = ACTIONS(644),
        [anon_sym_readonly] = ACTIONS(650),
        [anon_sym_volatile] = ACTIONS(650),
        [anon_sym_bool] = ACTIONS(650),
        [anon_sym_byte] = ACTIONS(650),
        [anon_sym_char] = ACTIONS(650),
        [anon_sym_decimal] = ACTIONS(650),
        [anon_sym_double] = ACTIONS(650),
        [anon_sym_float] = ACTIONS(650),
        [anon_sym_int] = ACTIONS(650),
        [anon_sym_long] = ACTIONS(650),
        [anon_sym_object] = ACTIONS(650),
        [anon_sym_sbyte] = ACTIONS(650),
        [anon_sym_short] = ACTIONS(650),
        [anon_sym_string] = ACTIONS(650),
        [anon_sym_uint] = ACTIONS(650),
        [anon_sym_ulong] = ACTIONS(650),
        [anon_sym_ushort] = ACTIONS(650),
        [sym_identifier_name] = ACTIONS(655),
        [sym_comment] = ACTIONS(59),
    },
    [159] = {
        [anon_sym_namespace] = ACTIONS(660),
        [anon_sym_RBRACE] = ACTIONS(662),
        [anon_sym_class] = ACTIONS(666),
        [anon_sym_struct] = ACTIONS(666),
        [anon_sym_abstract] = ACTIONS(666),
        [anon_sym_sealed] = ACTIONS(666),
        [anon_sym_static] = ACTIONS(666),
        [anon_sym_new] = ACTIONS(666),
        [anon_sym_public] = ACTIONS(666),
        [anon_sym_protected] = ACTIONS(666),
        [anon_sym_internal] = ACTIONS(666),
        [anon_sym_private] = ACTIONS(666),
        [anon_sym_unsafe] = ACTIONS(666),
        [anon_sym_readonly] = ACTIONS(199),
        [anon_sym_volatile] = ACTIONS(199),
        [anon_sym_bool] = ACTIONS(199),
        [anon_sym_byte] = ACTIONS(199),
        [anon_sym_char] = ACTIONS(199),
        [anon_sym_decimal] = ACTIONS(199),
        [anon_sym_double] = ACTIONS(199),
        [anon_sym_float] = ACTIONS(199),
        [anon_sym_int] = ACTIONS(199),
        [anon_sym_long] = ACTIONS(199),
        [anon_sym_object] = ACTIONS(199),
        [anon_sym_sbyte] = ACTIONS(199),
        [anon_sym_short] = ACTIONS(199),
        [anon_sym_string] = ACTIONS(199),
        [anon_sym_uint] = ACTIONS(199),
        [anon_sym_ulong] = ACTIONS(199),
        [anon_sym_ushort] = ACTIONS(199),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(59),
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
        [anon_sym_RBRACE] = ACTIONS(670),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [161] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(672),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [162] = {
        [ts_builtin_sym_end] = ACTIONS(674),
        [anon_sym_namespace] = ACTIONS(677),
        [anon_sym_RBRACE] = ACTIONS(674),
        [anon_sym_class] = ACTIONS(677),
        [anon_sym_struct] = ACTIONS(677),
        [anon_sym_abstract] = ACTIONS(677),
        [anon_sym_sealed] = ACTIONS(677),
        [anon_sym_static] = ACTIONS(677),
        [anon_sym_new] = ACTIONS(677),
        [anon_sym_public] = ACTIONS(677),
        [anon_sym_protected] = ACTIONS(677),
        [anon_sym_internal] = ACTIONS(677),
        [anon_sym_private] = ACTIONS(677),
        [anon_sym_unsafe] = ACTIONS(677),
        [anon_sym_readonly] = ACTIONS(677),
        [anon_sym_volatile] = ACTIONS(677),
        [anon_sym_bool] = ACTIONS(677),
        [anon_sym_byte] = ACTIONS(677),
        [anon_sym_char] = ACTIONS(677),
        [anon_sym_decimal] = ACTIONS(677),
        [anon_sym_double] = ACTIONS(677),
        [anon_sym_float] = ACTIONS(677),
        [anon_sym_int] = ACTIONS(677),
        [anon_sym_long] = ACTIONS(677),
        [anon_sym_object] = ACTIONS(677),
        [anon_sym_sbyte] = ACTIONS(677),
        [anon_sym_short] = ACTIONS(677),
        [anon_sym_string] = ACTIONS(677),
        [anon_sym_uint] = ACTIONS(677),
        [anon_sym_ulong] = ACTIONS(677),
        [anon_sym_ushort] = ACTIONS(677),
        [sym_identifier_name] = ACTIONS(680),
        [sym_comment] = ACTIONS(59),
    },
    [163] = {
        [ts_builtin_sym_end] = ACTIONS(683),
        [anon_sym_namespace] = ACTIONS(686),
        [anon_sym_RBRACE] = ACTIONS(683),
        [anon_sym_class] = ACTIONS(686),
        [anon_sym_struct] = ACTIONS(686),
        [anon_sym_abstract] = ACTIONS(686),
        [anon_sym_sealed] = ACTIONS(686),
        [anon_sym_static] = ACTIONS(686),
        [anon_sym_new] = ACTIONS(686),
        [anon_sym_public] = ACTIONS(686),
        [anon_sym_protected] = ACTIONS(686),
        [anon_sym_internal] = ACTIONS(686),
        [anon_sym_private] = ACTIONS(686),
        [anon_sym_unsafe] = ACTIONS(686),
        [anon_sym_readonly] = ACTIONS(686),
        [anon_sym_volatile] = ACTIONS(686),
        [anon_sym_bool] = ACTIONS(686),
        [anon_sym_byte] = ACTIONS(686),
        [anon_sym_char] = ACTIONS(686),
        [anon_sym_decimal] = ACTIONS(686),
        [anon_sym_double] = ACTIONS(686),
        [anon_sym_float] = ACTIONS(686),
        [anon_sym_int] = ACTIONS(686),
        [anon_sym_long] = ACTIONS(686),
        [anon_sym_object] = ACTIONS(686),
        [anon_sym_sbyte] = ACTIONS(686),
        [anon_sym_short] = ACTIONS(686),
        [anon_sym_string] = ACTIONS(686),
        [anon_sym_uint] = ACTIONS(686),
        [anon_sym_ulong] = ACTIONS(686),
        [anon_sym_ushort] = ACTIONS(686),
        [sym_identifier_name] = ACTIONS(689),
        [sym_comment] = ACTIONS(59),
    },
    [164] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(77),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(485),
        [anon_sym_EQ] = ACTIONS(241),
        [anon_sym_LT] = ACTIONS(117),
        [anon_sym_GT] = ACTIONS(193),
        [sym_comment] = ACTIONS(59),
    },
    [165] = {
        [anon_sym_SEMI] = ACTIONS(692),
        [anon_sym_COMMA] = ACTIONS(692),
        [sym_comment] = ACTIONS(59),
    },
    [166] = {
        [anon_sym_COMMA] = ACTIONS(695),
        [anon_sym_GT] = ACTIONS(695),
        [sym_comment] = ACTIONS(59),
    },
    [167] = {
        [sym_type_parameter_list] = STATE(169),
        [anon_sym_LBRACE] = ACTIONS(698),
        [anon_sym_LT] = ACTIONS(117),
        [sym_comment] = ACTIONS(59),
    },
    [168] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(161),
        [anon_sym_RBRACE] = ACTIONS(700),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [169] = {
        [anon_sym_LBRACE] = ACTIONS(702),
        [sym_comment] = ACTIONS(59),
    },
    [170] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(153),
        [anon_sym_RBRACE] = ACTIONS(672),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_new] = ACTIONS(73),
        [anon_sym_public] = ACTIONS(73),
        [anon_sym_protected] = ACTIONS(73),
        [anon_sym_internal] = ACTIONS(73),
        [anon_sym_private] = ACTIONS(73),
        [anon_sym_unsafe] = ACTIONS(73),
        [sym_comment] = ACTIONS(59),
    },
    [171] = {
        [ts_builtin_sym_end] = ACTIONS(704),
        [anon_sym_namespace] = ACTIONS(707),
        [anon_sym_RBRACE] = ACTIONS(704),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_struct] = ACTIONS(707),
        [anon_sym_abstract] = ACTIONS(707),
        [anon_sym_sealed] = ACTIONS(707),
        [anon_sym_static] = ACTIONS(707),
        [anon_sym_new] = ACTIONS(707),
        [anon_sym_public] = ACTIONS(707),
        [anon_sym_protected] = ACTIONS(707),
        [anon_sym_internal] = ACTIONS(707),
        [anon_sym_private] = ACTIONS(707),
        [anon_sym_unsafe] = ACTIONS(707),
        [anon_sym_readonly] = ACTIONS(707),
        [anon_sym_volatile] = ACTIONS(707),
        [anon_sym_bool] = ACTIONS(707),
        [anon_sym_byte] = ACTIONS(707),
        [anon_sym_char] = ACTIONS(707),
        [anon_sym_decimal] = ACTIONS(707),
        [anon_sym_double] = ACTIONS(707),
        [anon_sym_float] = ACTIONS(707),
        [anon_sym_int] = ACTIONS(707),
        [anon_sym_long] = ACTIONS(707),
        [anon_sym_object] = ACTIONS(707),
        [anon_sym_sbyte] = ACTIONS(707),
        [anon_sym_short] = ACTIONS(707),
        [anon_sym_string] = ACTIONS(707),
        [anon_sym_uint] = ACTIONS(707),
        [anon_sym_ulong] = ACTIONS(707),
        [anon_sym_ushort] = ACTIONS(707),
        [sym_identifier_name] = ACTIONS(710),
        [sym_comment] = ACTIONS(59),
    },
    [172] = {
        [sym_type_parameter_list] = STATE(174),
        [anon_sym_LBRACE] = ACTIONS(713),
        [anon_sym_LT] = ACTIONS(117),
        [sym_comment] = ACTIONS(59),
    },
    [173] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(160),
        [anon_sym_RBRACE] = ACTIONS(715),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [174] = {
        [anon_sym_LBRACE] = ACTIONS(717),
        [sym_comment] = ACTIONS(59),
    },
    [175] = {
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
        [aux_sym_class_declaration_repeat1] = STATE(152),
        [anon_sym_RBRACE] = ACTIONS(670),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(121),
        [anon_sym_byte] = ACTIONS(121),
        [anon_sym_char] = ACTIONS(121),
        [anon_sym_decimal] = ACTIONS(121),
        [anon_sym_double] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(121),
        [anon_sym_int] = ACTIONS(121),
        [anon_sym_long] = ACTIONS(121),
        [anon_sym_object] = ACTIONS(121),
        [anon_sym_sbyte] = ACTIONS(121),
        [anon_sym_short] = ACTIONS(121),
        [anon_sym_string] = ACTIONS(121),
        [anon_sym_uint] = ACTIONS(121),
        [anon_sym_ulong] = ACTIONS(121),
        [anon_sym_ushort] = ACTIONS(121),
        [sym_identifier_name] = ACTIONS(123),
        [sym_comment] = ACTIONS(59),
    },
    [176] = {
        [ts_builtin_sym_end] = ACTIONS(719),
        [anon_sym_namespace] = ACTIONS(722),
        [anon_sym_RBRACE] = ACTIONS(719),
        [anon_sym_class] = ACTIONS(722),
        [anon_sym_struct] = ACTIONS(722),
        [anon_sym_abstract] = ACTIONS(722),
        [anon_sym_sealed] = ACTIONS(722),
        [anon_sym_static] = ACTIONS(722),
        [anon_sym_new] = ACTIONS(722),
        [anon_sym_public] = ACTIONS(722),
        [anon_sym_protected] = ACTIONS(722),
        [anon_sym_internal] = ACTIONS(722),
        [anon_sym_private] = ACTIONS(722),
        [anon_sym_unsafe] = ACTIONS(722),
        [anon_sym_readonly] = ACTIONS(722),
        [anon_sym_volatile] = ACTIONS(722),
        [anon_sym_bool] = ACTIONS(722),
        [anon_sym_byte] = ACTIONS(722),
        [anon_sym_char] = ACTIONS(722),
        [anon_sym_decimal] = ACTIONS(722),
        [anon_sym_double] = ACTIONS(722),
        [anon_sym_float] = ACTIONS(722),
        [anon_sym_int] = ACTIONS(722),
        [anon_sym_long] = ACTIONS(722),
        [anon_sym_object] = ACTIONS(722),
        [anon_sym_sbyte] = ACTIONS(722),
        [anon_sym_short] = ACTIONS(722),
        [anon_sym_string] = ACTIONS(722),
        [anon_sym_uint] = ACTIONS(722),
        [anon_sym_ulong] = ACTIONS(722),
        [anon_sym_ushort] = ACTIONS(722),
        [sym_identifier_name] = ACTIONS(725),
        [sym_comment] = ACTIONS(59),
    },
    [177] = {
        [ts_builtin_sym_end] = ACTIONS(728),
        [anon_sym_namespace] = ACTIONS(736),
        [anon_sym_RBRACE] = ACTIONS(728),
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
        [anon_sym_readonly] = ACTIONS(744),
        [anon_sym_volatile] = ACTIONS(744),
        [anon_sym_bool] = ACTIONS(744),
        [anon_sym_byte] = ACTIONS(744),
        [anon_sym_char] = ACTIONS(744),
        [anon_sym_decimal] = ACTIONS(744),
        [anon_sym_double] = ACTIONS(744),
        [anon_sym_float] = ACTIONS(744),
        [anon_sym_int] = ACTIONS(744),
        [anon_sym_long] = ACTIONS(744),
        [anon_sym_object] = ACTIONS(744),
        [anon_sym_sbyte] = ACTIONS(744),
        [anon_sym_short] = ACTIONS(744),
        [anon_sym_string] = ACTIONS(744),
        [anon_sym_uint] = ACTIONS(744),
        [anon_sym_ulong] = ACTIONS(744),
        [anon_sym_ushort] = ACTIONS(744),
        [sym_identifier_name] = ACTIONS(751),
        [sym_comment] = ACTIONS(59),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(119),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(120),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(121),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(122),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(123),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(124),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(125),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(126),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(68),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(69),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(72),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(73),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(74),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(71),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(127),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(40),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(41),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(42),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(128),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(103),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(109),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(100),
    [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(129),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
    [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
    [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [393] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [396] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [399] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [402] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4),
    [407] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [410] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [417] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [428] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [439] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [448] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
    [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
    [467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
    [469] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [472] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [475] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [478] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(148),
    [482] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(157),
    [485] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [490] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(103),
    [494] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [497] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [500] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [503] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [510] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [517] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [520] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [523] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [528] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [532] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(59),
    [536] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [539] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [542] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [545] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [550] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(80),
    [554] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(81),
    [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [560] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [567] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [571] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [575] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [579] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [583] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [587] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [593] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [598] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [603] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [608] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [611] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [618] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [621] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [624] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [627] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [630] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [633] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [638] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [644] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [650] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [655] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [662] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [666] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [674] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [677] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [680] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [683] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [686] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [689] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [692] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [695] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [704] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [707] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [710] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [719] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [722] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [725] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [728] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [736] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [744] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [751] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
