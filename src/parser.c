#include "tree_sitter/parser.h"

#define STATE_COUNT 178
#define SYMBOL_COUNT 100
#define TOKEN_COUNT 64

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
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 14,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 15,
    sym__hexadecimal_escape_sequence = 16,
    aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 17,
    aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 18,
    anon_sym_BSLASH_SQUOTE = 19,
    anon_sym_BSLASH_DQUOTE = 20,
    anon_sym_BSLASH_BSLASH = 21,
    anon_sym_BSLASH0 = 22,
    anon_sym_BSLASHa = 23,
    anon_sym_BSLASHb = 24,
    anon_sym_BSLASHf = 25,
    anon_sym_BSLASHn = 26,
    anon_sym_BSLASHr = 27,
    anon_sym_BSLASHt = 28,
    anon_sym_BSLASHv = 29,
    sym__integer_type_suffix = 30,
    anon_sym_abstract = 31,
    anon_sym_sealed = 32,
    anon_sym_static = 33,
    anon_sym_new = 34,
    anon_sym_public = 35,
    anon_sym_protected = 36,
    anon_sym_internal = 37,
    anon_sym_private = 38,
    anon_sym_unsafe = 39,
    anon_sym_readonly = 40,
    anon_sym_volatile = 41,
    anon_sym_bool = 42,
    anon_sym_byte = 43,
    anon_sym_char = 44,
    anon_sym_decimal = 45,
    anon_sym_double = 46,
    anon_sym_float = 47,
    anon_sym_int = 48,
    anon_sym_long = 49,
    anon_sym_object = 50,
    anon_sym_sbyte = 51,
    anon_sym_short = 52,
    anon_sym_string = 53,
    anon_sym_uint = 54,
    anon_sym_ulong = 55,
    anon_sym_ushort = 56,
    anon_sym_LT = 57,
    anon_sym_GT = 58,
    anon_sym_DOT = 59,
    anon_sym_COLON_COLON = 60,
    sym_global = 61,
    sym_identifier_name = 62,
    sym_comment = 63,
    sym_compilation_unit = 64,
    sym_using_directive = 65,
    sym_namespace_declaration = 66,
    sym_class_declaration = 67,
    sym_struct_declaration = 68,
    sym_field_declaration = 69,
    sym_variable_declaration = 70,
    sym__type = 71,
    sym_generic_name = 72,
    sym_variable_declarator = 73,
    sym_equals_value_clause = 74,
    sym__literal = 75,
    sym_boolean_literal = 76,
    sym_character_literal = 77,
    sym_integer_literal = 78,
    sym__unicode_escape_sequence = 79,
    sym__simple_escape_sequence = 80,
    sym_class_modifiers = 81,
    sym__class_modifiers = 82,
    sym_struct_modifiers = 83,
    sym__struct_modifiers = 84,
    sym_field_modifiers = 85,
    sym__field_modifiers = 86,
    sym_predefined_type = 87,
    sym_type_parameter_list = 88,
    sym_type_parameter = 89,
    sym_qualified_name = 90,
    sym_alias_qualified_name = 91,
    sym_name_equals = 92,
    sym_static = 93,
    aux_sym_compilation_unit_repeat1 = 94,
    aux_sym_compilation_unit_repeat2 = 95,
    aux_sym_class_declaration_repeat1 = 96,
    aux_sym_struct_declaration_repeat1 = 97,
    aux_sym_variable_declaration_repeat1 = 98,
    aux_sym_type_parameter_list_repeat1 = 99,
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
                ADVANCE(126);
            if (lookahead == 'p')
                ADVANCE(132);
            if (lookahead == 'r')
                ADVANCE(151);
            if (lookahead == 's')
                ADVANCE(159);
            if (lookahead == 't')
                ADVANCE(185);
            if (lookahead == 'u')
                ADVANCE(189);
            if (lookahead == 'v')
                ADVANCE(210);
            if (lookahead == '{')
                ADVANCE(218);
            if (lookahead == '}')
                ADVANCE(219);
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
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(116);
            if (lookahead == 'e')
                ADVANCE(124);
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
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier_name);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'j')
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier_name);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_object);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(133);
            if (lookahead == 'u')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier_name);
        case 133:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(134);
            if (lookahead == 'o')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'v')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_private);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'd')
                ADVANCE(145);
            ACCEPT_TOKEN(sym_identifier_name);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_protected);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier_name);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 150:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_public);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier_name);
        case 152:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
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
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
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
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(20);
            if (lookahead == 'y')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 159:
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
                ADVANCE(160);
            if (lookahead == 'e')
                ADVANCE(164);
            if (lookahead == 'h')
                ADVANCE(169);
            if (lookahead == 't')
                ADVANCE(173);
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier_name);
        case 162:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier_name);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'd')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier_name);
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_short);
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(178);
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier_name);
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier_name);
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_static);
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(179);
            if (lookahead == 'u')
                ADVANCE(182);
            ACCEPT_TOKEN(sym_identifier_name);
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(180);
            ACCEPT_TOKEN(sym_identifier_name);
        case 180:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(181);
            ACCEPT_TOKEN(sym_identifier_name);
        case 181:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_string);
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(183);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_struct);
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(186);
            ACCEPT_TOKEN(sym_identifier_name);
        case 186:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'u')
                ADVANCE(187);
            ACCEPT_TOKEN(sym_identifier_name);
        case 187:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(188);
            ACCEPT_TOKEN(sym_identifier_name);
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_true);
        case 189:
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
                ADVANCE(190);
            if (lookahead == 'l')
                ADVANCE(193);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 's')
                ADVANCE(202);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(191);
            ACCEPT_TOKEN(sym_identifier_name);
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(192);
            ACCEPT_TOKEN(sym_identifier_name);
        case 192:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_uint);
        case 193:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(194);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 194:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(195);
            ACCEPT_TOKEN(sym_identifier_name);
        case 195:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(196);
            ACCEPT_TOKEN(sym_identifier_name);
        case 196:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 's')
                ADVANCE(198);
            ACCEPT_TOKEN(sym_identifier_name);
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(199);
            ACCEPT_TOKEN(sym_identifier_name);
        case 199:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(200);
            ACCEPT_TOKEN(sym_identifier_name);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier_name);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(203);
            if (lookahead == 'i')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier_name);
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(204);
            ACCEPT_TOKEN(sym_identifier_name);
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier_name);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(206);
            ACCEPT_TOKEN(sym_identifier_name);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier_name);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier_name);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_using);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier_name);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier_name);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier_name);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier_name);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier_name);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier_name);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 218:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 219:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 220:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(220);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(221);
            if (lookahead == 'c')
                ADVANCE(229);
            if (lookahead == 'i')
                ADVANCE(234);
            if (lookahead == 'n')
                ADVANCE(242);
            if (lookahead == 'p')
                ADVANCE(253);
            if (lookahead == 's')
                ADVANCE(272);
            if (lookahead == 'u')
                ADVANCE(287);
            LEX_ERROR();
        case 221:
            if (lookahead == 'b')
                ADVANCE(222);
            LEX_ERROR();
        case 222:
            if (lookahead == 's')
                ADVANCE(223);
            LEX_ERROR();
        case 223:
            if (lookahead == 't')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            if (lookahead == 'r')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 'a')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 'c')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            if (lookahead == 't')
                ADVANCE(228);
            LEX_ERROR();
        case 228:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 229:
            if (lookahead == 'l')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            if (lookahead == 'a')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            if (lookahead == 's')
                ADVANCE(232);
            LEX_ERROR();
        case 232:
            if (lookahead == 's')
                ADVANCE(233);
            LEX_ERROR();
        case 233:
            ACCEPT_TOKEN(anon_sym_class);
        case 234:
            if (lookahead == 'n')
                ADVANCE(235);
            LEX_ERROR();
        case 235:
            if (lookahead == 't')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 'e')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            if (lookahead == 'r')
                ADVANCE(238);
            LEX_ERROR();
        case 238:
            if (lookahead == 'n')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            if (lookahead == 'a')
                ADVANCE(240);
            LEX_ERROR();
        case 240:
            if (lookahead == 'l')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            ACCEPT_TOKEN(anon_sym_internal);
        case 242:
            if (lookahead == 'a')
                ADVANCE(243);
            if (lookahead == 'e')
                ADVANCE(251);
            LEX_ERROR();
        case 243:
            if (lookahead == 'm')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            if (lookahead == 'e')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            if (lookahead == 's')
                ADVANCE(246);
            LEX_ERROR();
        case 246:
            if (lookahead == 'p')
                ADVANCE(247);
            LEX_ERROR();
        case 247:
            if (lookahead == 'a')
                ADVANCE(248);
            LEX_ERROR();
        case 248:
            if (lookahead == 'c')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            if (lookahead == 'e')
                ADVANCE(250);
            LEX_ERROR();
        case 250:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 251:
            if (lookahead == 'w')
                ADVANCE(252);
            LEX_ERROR();
        case 252:
            ACCEPT_TOKEN(anon_sym_new);
        case 253:
            if (lookahead == 'r')
                ADVANCE(254);
            if (lookahead == 'u')
                ADVANCE(267);
            LEX_ERROR();
        case 254:
            if (lookahead == 'i')
                ADVANCE(255);
            if (lookahead == 'o')
                ADVANCE(260);
            LEX_ERROR();
        case 255:
            if (lookahead == 'v')
                ADVANCE(256);
            LEX_ERROR();
        case 256:
            if (lookahead == 'a')
                ADVANCE(257);
            LEX_ERROR();
        case 257:
            if (lookahead == 't')
                ADVANCE(258);
            LEX_ERROR();
        case 258:
            if (lookahead == 'e')
                ADVANCE(259);
            LEX_ERROR();
        case 259:
            ACCEPT_TOKEN(anon_sym_private);
        case 260:
            if (lookahead == 't')
                ADVANCE(261);
            LEX_ERROR();
        case 261:
            if (lookahead == 'e')
                ADVANCE(262);
            LEX_ERROR();
        case 262:
            if (lookahead == 'c')
                ADVANCE(263);
            LEX_ERROR();
        case 263:
            if (lookahead == 't')
                ADVANCE(264);
            LEX_ERROR();
        case 264:
            if (lookahead == 'e')
                ADVANCE(265);
            LEX_ERROR();
        case 265:
            if (lookahead == 'd')
                ADVANCE(266);
            LEX_ERROR();
        case 266:
            ACCEPT_TOKEN(anon_sym_protected);
        case 267:
            if (lookahead == 'b')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            if (lookahead == 'l')
                ADVANCE(269);
            LEX_ERROR();
        case 269:
            if (lookahead == 'i')
                ADVANCE(270);
            LEX_ERROR();
        case 270:
            if (lookahead == 'c')
                ADVANCE(271);
            LEX_ERROR();
        case 271:
            ACCEPT_TOKEN(anon_sym_public);
        case 272:
            if (lookahead == 'e')
                ADVANCE(273);
            if (lookahead == 't')
                ADVANCE(278);
            LEX_ERROR();
        case 273:
            if (lookahead == 'a')
                ADVANCE(274);
            LEX_ERROR();
        case 274:
            if (lookahead == 'l')
                ADVANCE(275);
            LEX_ERROR();
        case 275:
            if (lookahead == 'e')
                ADVANCE(276);
            LEX_ERROR();
        case 276:
            if (lookahead == 'd')
                ADVANCE(277);
            LEX_ERROR();
        case 277:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 278:
            if (lookahead == 'a')
                ADVANCE(279);
            if (lookahead == 'r')
                ADVANCE(283);
            LEX_ERROR();
        case 279:
            if (lookahead == 't')
                ADVANCE(280);
            LEX_ERROR();
        case 280:
            if (lookahead == 'i')
                ADVANCE(281);
            LEX_ERROR();
        case 281:
            if (lookahead == 'c')
                ADVANCE(282);
            LEX_ERROR();
        case 282:
            ACCEPT_TOKEN(anon_sym_static);
        case 283:
            if (lookahead == 'u')
                ADVANCE(284);
            LEX_ERROR();
        case 284:
            if (lookahead == 'c')
                ADVANCE(285);
            LEX_ERROR();
        case 285:
            if (lookahead == 't')
                ADVANCE(286);
            LEX_ERROR();
        case 286:
            ACCEPT_TOKEN(anon_sym_struct);
        case 287:
            if (lookahead == 'n')
                ADVANCE(288);
            if (lookahead == 's')
                ADVANCE(293);
            LEX_ERROR();
        case 288:
            if (lookahead == 's')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            if (lookahead == 'a')
                ADVANCE(290);
            LEX_ERROR();
        case 290:
            if (lookahead == 'f')
                ADVANCE(291);
            LEX_ERROR();
        case 291:
            if (lookahead == 'e')
                ADVANCE(292);
            LEX_ERROR();
        case 292:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 293:
            if (lookahead == 'i')
                ADVANCE(294);
            LEX_ERROR();
        case 294:
            if (lookahead == 'n')
                ADVANCE(295);
            LEX_ERROR();
        case 295:
            if (lookahead == 'g')
                ADVANCE(296);
            LEX_ERROR();
        case 296:
            ACCEPT_TOKEN(anon_sym_using);
        case 297:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(297);
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
                ADVANCE(298);
            LEX_ERROR();
        case 298:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(299);
            ACCEPT_TOKEN(sym_identifier_name);
        case 299:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(174);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'g')
                ADVANCE(96);
            LEX_ERROR();
        case 301:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(301);
            if (lookahead == '/')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            LEX_ERROR();
        case 302:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(302);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(221);
            if (lookahead == 'c')
                ADVANCE(229);
            if (lookahead == 'i')
                ADVANCE(234);
            if (lookahead == 'n')
                ADVANCE(303);
            if (lookahead == 'p')
                ADVANCE(253);
            if (lookahead == 's')
                ADVANCE(304);
            if (lookahead == 'u')
                ADVANCE(306);
            LEX_ERROR();
        case 303:
            if (lookahead == 'e')
                ADVANCE(251);
            LEX_ERROR();
        case 304:
            if (lookahead == 'e')
                ADVANCE(273);
            if (lookahead == 't')
                ADVANCE(305);
            LEX_ERROR();
        case 305:
            if (lookahead == 'a')
                ADVANCE(279);
            LEX_ERROR();
        case 306:
            if (lookahead == 'n')
                ADVANCE(288);
            LEX_ERROR();
        case 307:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(307);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(221);
            if (lookahead == 'c')
                ADVANCE(229);
            if (lookahead == 'i')
                ADVANCE(234);
            if (lookahead == 'n')
                ADVANCE(303);
            if (lookahead == 'p')
                ADVANCE(253);
            if (lookahead == 's')
                ADVANCE(272);
            if (lookahead == 'u')
                ADVANCE(306);
            LEX_ERROR();
        case 308:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(308);
            if (lookahead == '/')
                ADVANCE(5);
            LEX_ERROR();
        case 309:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(309);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(221);
            if (lookahead == 'c')
                ADVANCE(229);
            if (lookahead == 'i')
                ADVANCE(234);
            if (lookahead == 'n')
                ADVANCE(242);
            if (lookahead == 'p')
                ADVANCE(253);
            if (lookahead == 's')
                ADVANCE(272);
            if (lookahead == 'u')
                ADVANCE(306);
            if (lookahead == '}')
                ADVANCE(219);
            LEX_ERROR();
        case 310:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(310);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'c')
                ADVANCE(229);
            LEX_ERROR();
        case 311:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(311);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(312);
            LEX_ERROR();
        case 312:
            if (lookahead == 't')
                ADVANCE(313);
            LEX_ERROR();
        case 313:
            if (lookahead == 'r')
                ADVANCE(283);
            LEX_ERROR();
        case 314:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(314);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(221);
            if (lookahead == 'c')
                ADVANCE(229);
            if (lookahead == 'i')
                ADVANCE(234);
            if (lookahead == 'n')
                ADVANCE(242);
            if (lookahead == 'p')
                ADVANCE(253);
            if (lookahead == 's')
                ADVANCE(272);
            if (lookahead == 'u')
                ADVANCE(306);
            LEX_ERROR();
        case 315:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(315);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '<')
                ADVANCE(17);
            if (lookahead == '{')
                ADVANCE(218);
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
                ADVANCE(221);
            if (lookahead == 'c')
                ADVANCE(229);
            if (lookahead == 'i')
                ADVANCE(234);
            if (lookahead == 'n')
                ADVANCE(303);
            if (lookahead == 'p')
                ADVANCE(253);
            if (lookahead == 's')
                ADVANCE(272);
            if (lookahead == 'u')
                ADVANCE(306);
            if (lookahead == '}')
                ADVANCE(219);
            LEX_ERROR();
        case 317:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(317);
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
                ADVANCE(318);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(319);
            if (lookahead == 'i')
                ADVANCE(320);
            if (lookahead == 'l')
                ADVANCE(323);
            if (lookahead == 'o')
                ADVANCE(126);
            if (lookahead == 's')
                ADVANCE(324);
            if (lookahead == 'u')
                ADVANCE(327);
            LEX_ERROR();
        case 318:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier_name);
        case 319:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'l')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier_name);
        case 320:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'n')
                ADVANCE(321);
            ACCEPT_TOKEN(sym_identifier_name);
        case 321:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 't')
                ADVANCE(322);
            ACCEPT_TOKEN(sym_identifier_name);
        case 322:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            ACCEPT_TOKEN(anon_sym_int);
        case 323:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 324:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(160);
            if (lookahead == 'h')
                ADVANCE(169);
            if (lookahead == 't')
                ADVANCE(325);
            ACCEPT_TOKEN(sym_identifier_name);
        case 325:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'r')
                ADVANCE(326);
            ACCEPT_TOKEN(sym_identifier_name);
        case 326:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier_name);
        case 327:
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
                ADVANCE(190);
            if (lookahead == 'l')
                ADVANCE(328);
            if (lookahead == 's')
                ADVANCE(329);
            ACCEPT_TOKEN(sym_identifier_name);
        case 328:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'o')
                ADVANCE(194);
            ACCEPT_TOKEN(sym_identifier_name);
        case 329:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'h')
                ADVANCE(203);
            ACCEPT_TOKEN(sym_identifier_name);
        case 330:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(330);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '{')
                ADVANCE(218);
            LEX_ERROR();
        case 331:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(331);
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
                ADVANCE(319);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(323);
            if (lookahead == 'n')
                ADVANCE(115);
            if (lookahead == 'o')
                ADVANCE(126);
            if (lookahead == 'p')
                ADVANCE(132);
            if (lookahead == 'r')
                ADVANCE(151);
            if (lookahead == 's')
                ADVANCE(159);
            if (lookahead == 'u')
                ADVANCE(332);
            if (lookahead == 'v')
                ADVANCE(210);
            if (lookahead == '}')
                ADVANCE(219);
            LEX_ERROR();
        case 332:
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
                ADVANCE(190);
            if (lookahead == 'l')
                ADVANCE(328);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 's')
                ADVANCE(329);
            ACCEPT_TOKEN(sym_identifier_name);
        case 333:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(333);
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
                ADVANCE(319);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(323);
            if (lookahead == 'n')
                ADVANCE(334);
            if (lookahead == 'o')
                ADVANCE(126);
            if (lookahead == 'p')
                ADVANCE(132);
            if (lookahead == 'r')
                ADVANCE(151);
            if (lookahead == 's')
                ADVANCE(159);
            if (lookahead == 'u')
                ADVANCE(332);
            if (lookahead == 'v')
                ADVANCE(210);
            if (lookahead == '}')
                ADVANCE(219);
            LEX_ERROR();
        case 334:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'e')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 335:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(335);
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
                ADVANCE(319);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(323);
            if (lookahead == 'n')
                ADVANCE(334);
            if (lookahead == 'o')
                ADVANCE(126);
            if (lookahead == 'p')
                ADVANCE(132);
            if (lookahead == 'r')
                ADVANCE(151);
            if (lookahead == 's')
                ADVANCE(336);
            if (lookahead == 'u')
                ADVANCE(332);
            if (lookahead == 'v')
                ADVANCE(210);
            LEX_ERROR();
        case 336:
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
                ADVANCE(160);
            if (lookahead == 'e')
                ADVANCE(164);
            if (lookahead == 'h')
                ADVANCE(169);
            if (lookahead == 't')
                ADVANCE(337);
            ACCEPT_TOKEN(sym_identifier_name);
        case 337:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(326);
            ACCEPT_TOKEN(sym_identifier_name);
        case 338:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(338);
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
                ADVANCE(319);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(323);
            if (lookahead == 'n')
                ADVANCE(334);
            if (lookahead == 'o')
                ADVANCE(126);
            if (lookahead == 'p')
                ADVANCE(132);
            if (lookahead == 'r')
                ADVANCE(151);
            if (lookahead == 's')
                ADVANCE(159);
            if (lookahead == 'u')
                ADVANCE(332);
            if (lookahead == 'v')
                ADVANCE(210);
            LEX_ERROR();
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
                ADVANCE(318);
            if (lookahead == 'd')
                ADVANCE(75);
            if (lookahead == 'f')
                ADVANCE(319);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(323);
            if (lookahead == 'n')
                ADVANCE(334);
            if (lookahead == 'o')
                ADVANCE(126);
            if (lookahead == 'p')
                ADVANCE(132);
            if (lookahead == 'r')
                ADVANCE(151);
            if (lookahead == 's')
                ADVANCE(340);
            if (lookahead == 'u')
                ADVANCE(332);
            if (lookahead == 'v')
                ADVANCE(210);
            LEX_ERROR();
        case 340:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(160);
            if (lookahead == 'h')
                ADVANCE(169);
            if (lookahead == 't')
                ADVANCE(337);
            ACCEPT_TOKEN(sym_identifier_name);
        case 341:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(341);
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
        case 342:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(342);
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
        case 343:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(343);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            LEX_ERROR();
        case 344:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(344);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(18);
            LEX_ERROR();
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
            if (lookahead == ';')
                ADVANCE(16);
            LEX_ERROR();
        case 346:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(346);
            if (lookahead == '\'')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '0')
                ADVANCE(10);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(347);
            if (lookahead == 't')
                ADVANCE(352);
            LEX_ERROR();
        case 347:
            if (lookahead == 'a')
                ADVANCE(348);
            LEX_ERROR();
        case 348:
            if (lookahead == 'l')
                ADVANCE(349);
            LEX_ERROR();
        case 349:
            if (lookahead == 's')
                ADVANCE(350);
            LEX_ERROR();
        case 350:
            if (lookahead == 'e')
                ADVANCE(351);
            LEX_ERROR();
        case 351:
            ACCEPT_TOKEN(anon_sym_false);
        case 352:
            if (lookahead == 'r')
                ADVANCE(353);
            LEX_ERROR();
        case 353:
            if (lookahead == 'u')
                ADVANCE(354);
            LEX_ERROR();
        case 354:
            if (lookahead == 'e')
                ADVANCE(355);
            LEX_ERROR();
        case 355:
            ACCEPT_TOKEN(anon_sym_true);
        case 356:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(357);
            if (lookahead == '/')
                ADVANCE(358);
            if (lookahead == '\\')
                ADVANCE(359);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(357);
            LEX_ERROR();
        case 357:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 358:
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(9);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 359:
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
        case 360:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(360);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == 'l')
                ADVANCE(361);
            if (lookahead == 'u')
                ADVANCE(363);
            LEX_ERROR();
        case 361:
            if (lookahead == 'u')
                ADVANCE(362);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 362:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 363:
            if (lookahead == 'l')
                ADVANCE(362);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 364:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(364);
            if (lookahead == '\'')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(5);
            LEX_ERROR();
        case 365:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(365);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '>')
                ADVANCE(19);
            LEX_ERROR();
        case 366:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(366);
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
                ADVANCE(218);
            LEX_ERROR();
        case 367:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(367);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(14);
            LEX_ERROR();
        case 368:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(368);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == '{')
                ADVANCE(218);
            LEX_ERROR();
        case 369:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(369);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            LEX_ERROR();
        case 370:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(370);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '{')
                ADVANCE(218);
            LEX_ERROR();
        case 371:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(371);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == 'a')
                ADVANCE(221);
            if (lookahead == 'c')
                ADVANCE(229);
            if (lookahead == 'i')
                ADVANCE(234);
            if (lookahead == 'n')
                ADVANCE(242);
            if (lookahead == 'p')
                ADVANCE(253);
            if (lookahead == 's')
                ADVANCE(272);
            if (lookahead == 'u')
                ADVANCE(306);
            if (lookahead == '}')
                ADVANCE(219);
            LEX_ERROR();
        case 372:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(372);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(18);
            LEX_ERROR();
        case 373:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(373);
            if (lookahead == '.')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(5);
            if (lookahead == ';')
                ADVANCE(16);
            LEX_ERROR();
        case 374:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(374);
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
                ADVANCE(319);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(323);
            if (lookahead == 'n')
                ADVANCE(115);
            if (lookahead == 'o')
                ADVANCE(126);
            if (lookahead == 'p')
                ADVANCE(132);
            if (lookahead == 'r')
                ADVANCE(151);
            if (lookahead == 's')
                ADVANCE(159);
            if (lookahead == 'u')
                ADVANCE(375);
            if (lookahead == 'v')
                ADVANCE(210);
            if (lookahead == '}')
                ADVANCE(219);
            LEX_ERROR();
        case 375:
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
                ADVANCE(190);
            if (lookahead == 'l')
                ADVANCE(328);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 's')
                ADVANCE(202);
            ACCEPT_TOKEN(sym_identifier_name);
        case 376:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(376);
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
                ADVANCE(319);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(323);
            if (lookahead == 'n')
                ADVANCE(115);
            if (lookahead == 'o')
                ADVANCE(126);
            if (lookahead == 'p')
                ADVANCE(132);
            if (lookahead == 'r')
                ADVANCE(151);
            if (lookahead == 's')
                ADVANCE(159);
            if (lookahead == 'u')
                ADVANCE(332);
            if (lookahead == 'v')
                ADVANCE(210);
            if (lookahead == '}')
                ADVANCE(219);
            LEX_ERROR();
        case 377:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(377);
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
                ('h' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(378);
            if (lookahead == 'g')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(185);
            LEX_ERROR();
        case 378:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 379:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(357);
            if (lookahead == ',')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(358);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '\\')
                ADVANCE(359);
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
                ADVANCE(357);
            LEX_ERROR();
        case 380:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(380);
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
                ADVANCE(319);
            if (lookahead == 'g')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(323);
            if (lookahead == 'n')
                ADVANCE(334);
            if (lookahead == 'o')
                ADVANCE(126);
            if (lookahead == 'p')
                ADVANCE(132);
            if (lookahead == 'r')
                ADVANCE(151);
            if (lookahead == 's')
                ADVANCE(336);
            if (lookahead == 'u')
                ADVANCE(332);
            if (lookahead == 'v')
                ADVANCE(210);
            LEX_ERROR();
        case 381:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(381);
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
                ADVANCE(218);
            LEX_ERROR();
        case 382:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(382);
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
    [1] = 220,
    [2] = 297,
    [3] = 300,
    [4] = 301,
    [5] = 301,
    [6] = 302,
    [7] = 307,
    [8] = 308,
    [9] = 220,
    [10] = 309,
    [11] = 310,
    [12] = 310,
    [13] = 311,
    [14] = 311,
    [15] = 220,
    [16] = 314,
    [17] = 309,
    [18] = 220,
    [19] = 314,
    [20] = 301,
    [21] = 315,
    [22] = 316,
    [23] = 317,
    [24] = 330,
    [25] = 316,
    [26] = 331,
    [27] = 316,
    [28] = 316,
    [29] = 331,
    [30] = 316,
    [31] = 331,
    [32] = 316,
    [33] = 301,
    [34] = 315,
    [35] = 333,
    [36] = 330,
    [37] = 333,
    [38] = 331,
    [39] = 335,
    [40] = 338,
    [41] = 339,
    [42] = 341,
    [43] = 342,
    [44] = 333,
    [45] = 343,
    [46] = 301,
    [47] = 341,
    [48] = 317,
    [49] = 317,
    [50] = 333,
    [51] = 331,
    [52] = 333,
    [53] = 343,
    [54] = 333,
    [55] = 331,
    [56] = 333,
    [57] = 344,
    [58] = 345,
    [59] = 301,
    [60] = 345,
    [61] = 301,
    [62] = 345,
    [63] = 345,
    [64] = 346,
    [65] = 345,
    [66] = 345,
    [67] = 356,
    [68] = 360,
    [69] = 345,
    [70] = 345,
    [71] = 345,
    [72] = 364,
    [73] = 364,
    [74] = 364,
    [75] = 345,
    [76] = 333,
    [77] = 341,
    [78] = 365,
    [79] = 365,
    [80] = 317,
    [81] = 366,
    [82] = 365,
    [83] = 317,
    [84] = 366,
    [85] = 365,
    [86] = 365,
    [87] = 317,
    [88] = 310,
    [89] = 311,
    [90] = 315,
    [91] = 316,
    [92] = 330,
    [93] = 331,
    [94] = 316,
    [95] = 315,
    [96] = 333,
    [97] = 330,
    [98] = 331,
    [99] = 333,
    [100] = 367,
    [101] = 368,
    [102] = 369,
    [103] = 301,
    [104] = 370,
    [105] = 371,
    [106] = 309,
    [107] = 371,
    [108] = 309,
    [109] = 301,
    [110] = 369,
    [111] = 300,
    [112] = 372,
    [113] = 373,
    [114] = 300,
    [115] = 373,
    [116] = 220,
    [117] = 220,
    [118] = 300,
    [119] = 374,
    [120] = 376,
    [121] = 331,
    [122] = 301,
    [123] = 301,
    [124] = 317,
    [125] = 377,
    [126] = 379,
    [127] = 380,
    [128] = 366,
    [129] = 381,
    [130] = 220,
    [131] = 309,
    [132] = 331,
    [133] = 333,
    [134] = 343,
    [135] = 341,
    [136] = 345,
    [137] = 310,
    [138] = 311,
    [139] = 317,
    [140] = 366,
    [141] = 365,
    [142] = 370,
    [143] = 309,
    [144] = 333,
    [145] = 316,
    [146] = 331,
    [147] = 331,
    [148] = 220,
    [149] = 333,
    [150] = 331,
    [151] = 333,
    [152] = 333,
    [153] = 316,
    [154] = 331,
    [155] = 331,
    [156] = 333,
    [157] = 376,
    [158] = 331,
    [159] = 376,
    [160] = 333,
    [161] = 316,
    [162] = 331,
    [163] = 331,
    [164] = 382,
    [165] = 345,
    [166] = 365,
    [167] = 315,
    [168] = 316,
    [169] = 330,
    [170] = 316,
    [171] = 331,
    [172] = 315,
    [173] = 333,
    [174] = 330,
    [175] = 333,
    [176] = 331,
    [177] = 331,
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
        [sym__literal] = STATE(69),
        [sym_boolean_literal] = STATE(70),
        [sym_character_literal] = STATE(70),
        [sym_integer_literal] = STATE(70),
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
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(25),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(25),
        [sym__hexadecimal_escape_sequence] = ACTIONS(27),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(29),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(29),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(31),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(31),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(31),
        [anon_sym_BSLASH0] = ACTIONS(31),
        [anon_sym_BSLASHa] = ACTIONS(31),
        [anon_sym_BSLASHb] = ACTIONS(31),
        [anon_sym_BSLASHf] = ACTIONS(31),
        [anon_sym_BSLASHn] = ACTIONS(31),
        [anon_sym_BSLASHr] = ACTIONS(31),
        [anon_sym_BSLASHt] = ACTIONS(31),
        [anon_sym_BSLASHv] = ACTIONS(31),
        [sym__integer_type_suffix] = ACTIONS(33),
        [anon_sym_abstract] = ACTIONS(35),
        [anon_sym_sealed] = ACTIONS(35),
        [anon_sym_static] = ACTIONS(37),
        [anon_sym_new] = ACTIONS(39),
        [anon_sym_public] = ACTIONS(39),
        [anon_sym_protected] = ACTIONS(39),
        [anon_sym_internal] = ACTIONS(39),
        [anon_sym_private] = ACTIONS(39),
        [anon_sym_unsafe] = ACTIONS(39),
        [anon_sym_readonly] = ACTIONS(41),
        [anon_sym_volatile] = ACTIONS(41),
        [anon_sym_bool] = ACTIONS(43),
        [anon_sym_byte] = ACTIONS(43),
        [anon_sym_char] = ACTIONS(43),
        [anon_sym_decimal] = ACTIONS(43),
        [anon_sym_double] = ACTIONS(43),
        [anon_sym_float] = ACTIONS(43),
        [anon_sym_int] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(43),
        [anon_sym_object] = ACTIONS(43),
        [anon_sym_sbyte] = ACTIONS(43),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_string] = ACTIONS(43),
        [anon_sym_uint] = ACTIONS(43),
        [anon_sym_ulong] = ACTIONS(43),
        [anon_sym_ushort] = ACTIONS(43),
        [anon_sym_LT] = ACTIONS(45),
        [anon_sym_GT] = ACTIONS(47),
        [anon_sym_DOT] = ACTIONS(49),
        [anon_sym_COLON_COLON] = ACTIONS(51),
        [sym_global] = ACTIONS(53),
        [sym_identifier_name] = ACTIONS(55),
        [sym_comment] = ACTIONS(57),
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
        [ts_builtin_sym_end] = ACTIONS(59),
        [anon_sym_using] = ACTIONS(61),
        [anon_sym_namespace] = ACTIONS(63),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [2] = {
        [sym_qualified_name] = STATE(113),
        [sym_alias_qualified_name] = STATE(102),
        [sym_name_equals] = STATE(114),
        [sym_static] = STATE(114),
        [anon_sym_static] = ACTIONS(73),
        [sym_global] = ACTIONS(75),
        [sym_identifier_name] = ACTIONS(77),
        [sym_comment] = ACTIONS(57),
    },
    [3] = {
        [sym_qualified_name] = STATE(101),
        [sym_alias_qualified_name] = STATE(102),
        [sym_global] = ACTIONS(75),
        [sym_identifier_name] = ACTIONS(79),
        [sym_comment] = ACTIONS(57),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(81),
        [sym_comment] = ACTIONS(57),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(83),
        [sym_comment] = ACTIONS(57),
    },
    [6] = {
        [sym__class_modifiers] = STATE(88),
        [anon_sym_class] = ACTIONS(85),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(69),
        [anon_sym_public] = ACTIONS(69),
        [anon_sym_protected] = ACTIONS(69),
        [anon_sym_internal] = ACTIONS(69),
        [anon_sym_private] = ACTIONS(69),
        [anon_sym_unsafe] = ACTIONS(69),
        [sym_comment] = ACTIONS(57),
    },
    [7] = {
        [sym__class_modifiers] = STATE(88),
        [sym__struct_modifiers] = STATE(89),
        [anon_sym_class] = ACTIONS(85),
        [anon_sym_struct] = ACTIONS(87),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(89),
        [sym_comment] = ACTIONS(57),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(91),
        [anon_sym_using] = ACTIONS(91),
        [anon_sym_namespace] = ACTIONS(91),
        [anon_sym_class] = ACTIONS(91),
        [anon_sym_struct] = ACTIONS(91),
        [anon_sym_abstract] = ACTIONS(91),
        [anon_sym_sealed] = ACTIONS(91),
        [anon_sym_static] = ACTIONS(91),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_public] = ACTIONS(91),
        [anon_sym_protected] = ACTIONS(91),
        [anon_sym_internal] = ACTIONS(91),
        [anon_sym_private] = ACTIONS(91),
        [anon_sym_unsafe] = ACTIONS(91),
        [sym_comment] = ACTIONS(57),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(93),
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
        [sym_comment] = ACTIONS(57),
    },
    [11] = {
        [anon_sym_class] = ACTIONS(95),
        [sym_comment] = ACTIONS(57),
    },
    [12] = {
        [anon_sym_class] = ACTIONS(97),
        [sym_comment] = ACTIONS(57),
    },
    [13] = {
        [anon_sym_struct] = ACTIONS(99),
        [sym_comment] = ACTIONS(57),
    },
    [14] = {
        [anon_sym_struct] = ACTIONS(101),
        [sym_comment] = ACTIONS(57),
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
        [ts_builtin_sym_end] = ACTIONS(103),
        [anon_sym_using] = ACTIONS(61),
        [anon_sym_namespace] = ACTIONS(63),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [16] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(103),
        [anon_sym_namespace] = ACTIONS(63),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [17] = {
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
        [sym_comment] = ACTIONS(57),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(107),
        [anon_sym_using] = ACTIONS(107),
        [anon_sym_namespace] = ACTIONS(107),
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
        [sym_comment] = ACTIONS(57),
    },
    [19] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_namespace] = ACTIONS(63),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [20] = {
        [sym_identifier_name] = ACTIONS(111),
        [sym_comment] = ACTIONS(57),
    },
    [21] = {
        [sym_type_parameter_list] = STATE(24),
        [anon_sym_LBRACE] = ACTIONS(113),
        [anon_sym_LT] = ACTIONS(115),
        [sym_comment] = ACTIONS(57),
    },
    [22] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(32),
        [anon_sym_RBRACE] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [23] = {
        [sym__type] = STATE(78),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(79),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_comment] = ACTIONS(57),
    },
    [25] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(28),
        [anon_sym_RBRACE] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_namespace] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(127),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_struct] = ACTIONS(129),
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
        [sym_identifier_name] = ACTIONS(131),
        [sym_comment] = ACTIONS(57),
    },
    [27] = {
        [anon_sym_RBRACE] = ACTIONS(133),
        [anon_sym_class] = ACTIONS(133),
        [anon_sym_struct] = ACTIONS(133),
        [anon_sym_abstract] = ACTIONS(133),
        [anon_sym_sealed] = ACTIONS(133),
        [anon_sym_static] = ACTIONS(133),
        [anon_sym_new] = ACTIONS(133),
        [anon_sym_public] = ACTIONS(133),
        [anon_sym_protected] = ACTIONS(133),
        [anon_sym_internal] = ACTIONS(133),
        [anon_sym_private] = ACTIONS(133),
        [anon_sym_unsafe] = ACTIONS(133),
        [sym_comment] = ACTIONS(57),
    },
    [28] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_namespace] = ACTIONS(139),
        [anon_sym_RBRACE] = ACTIONS(137),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_struct] = ACTIONS(139),
        [anon_sym_abstract] = ACTIONS(139),
        [anon_sym_sealed] = ACTIONS(139),
        [anon_sym_static] = ACTIONS(139),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_public] = ACTIONS(139),
        [anon_sym_protected] = ACTIONS(139),
        [anon_sym_internal] = ACTIONS(139),
        [anon_sym_private] = ACTIONS(139),
        [anon_sym_unsafe] = ACTIONS(139),
        [anon_sym_readonly] = ACTIONS(139),
        [anon_sym_volatile] = ACTIONS(139),
        [anon_sym_bool] = ACTIONS(139),
        [anon_sym_byte] = ACTIONS(139),
        [anon_sym_char] = ACTIONS(139),
        [anon_sym_decimal] = ACTIONS(139),
        [anon_sym_double] = ACTIONS(139),
        [anon_sym_float] = ACTIONS(139),
        [anon_sym_int] = ACTIONS(139),
        [anon_sym_long] = ACTIONS(139),
        [anon_sym_object] = ACTIONS(139),
        [anon_sym_sbyte] = ACTIONS(139),
        [anon_sym_short] = ACTIONS(139),
        [anon_sym_string] = ACTIONS(139),
        [anon_sym_uint] = ACTIONS(139),
        [anon_sym_ulong] = ACTIONS(139),
        [anon_sym_ushort] = ACTIONS(139),
        [sym_identifier_name] = ACTIONS(141),
        [sym_comment] = ACTIONS(57),
    },
    [30] = {
        [anon_sym_RBRACE] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(143),
        [anon_sym_sealed] = ACTIONS(143),
        [anon_sym_static] = ACTIONS(143),
        [anon_sym_new] = ACTIONS(143),
        [anon_sym_public] = ACTIONS(143),
        [anon_sym_protected] = ACTIONS(143),
        [anon_sym_internal] = ACTIONS(143),
        [anon_sym_private] = ACTIONS(143),
        [anon_sym_unsafe] = ACTIONS(143),
        [sym_comment] = ACTIONS(57),
    },
    [31] = {
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
        [sym_comment] = ACTIONS(57),
    },
    [32] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [33] = {
        [sym_identifier_name] = ACTIONS(151),
        [sym_comment] = ACTIONS(57),
    },
    [34] = {
        [sym_type_parameter_list] = STATE(36),
        [anon_sym_LBRACE] = ACTIONS(153),
        [anon_sym_LT] = ACTIONS(115),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [36] = {
        [anon_sym_LBRACE] = ACTIONS(169),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_namespace] = ACTIONS(175),
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
        [sym_comment] = ACTIONS(57),
    },
    [39] = {
        [sym__class_modifiers] = STATE(88),
        [sym__field_modifiers] = STATE(87),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(163),
        [anon_sym_public] = ACTIONS(163),
        [anon_sym_protected] = ACTIONS(163),
        [anon_sym_internal] = ACTIONS(163),
        [anon_sym_private] = ACTIONS(163),
        [anon_sym_unsafe] = ACTIONS(163),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(57),
    },
    [40] = {
        [sym__class_modifiers] = STATE(88),
        [sym__struct_modifiers] = STATE(89),
        [sym__field_modifiers] = STATE(87),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_struct] = ACTIONS(185),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(57),
    },
    [41] = {
        [sym__field_modifiers] = STATE(87),
        [anon_sym_static] = ACTIONS(167),
        [anon_sym_new] = ACTIONS(167),
        [anon_sym_public] = ACTIONS(167),
        [anon_sym_protected] = ACTIONS(167),
        [anon_sym_internal] = ACTIONS(167),
        [anon_sym_private] = ACTIONS(167),
        [anon_sym_unsafe] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(57),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(187),
        [anon_sym_GT] = ACTIONS(187),
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(57),
    },
    [43] = {
        [sym_type_parameter_list] = STATE(77),
        [anon_sym_COMMA] = ACTIONS(191),
        [anon_sym_LT] = ACTIONS(115),
        [anon_sym_GT] = ACTIONS(191),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(57),
    },
    [44] = {
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
        [sym_comment] = ACTIONS(57),
    },
    [45] = {
        [anon_sym_SEMI] = ACTIONS(201),
        [sym_comment] = ACTIONS(57),
    },
    [46] = {
        [sym_variable_declarator] = STATE(58),
        [sym_identifier_name] = ACTIONS(203),
        [sym_comment] = ACTIONS(57),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(191),
        [anon_sym_GT] = ACTIONS(191),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(57),
    },
    [48] = {
        [sym_variable_declaration] = STATE(53),
        [sym__type] = STATE(46),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [49] = {
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
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(209),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [51] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_namespace] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(211),
        [anon_sym_class] = ACTIONS(213),
        [anon_sym_struct] = ACTIONS(213),
        [anon_sym_abstract] = ACTIONS(213),
        [anon_sym_sealed] = ACTIONS(213),
        [anon_sym_static] = ACTIONS(213),
        [anon_sym_new] = ACTIONS(213),
        [anon_sym_public] = ACTIONS(213),
        [anon_sym_protected] = ACTIONS(213),
        [anon_sym_internal] = ACTIONS(213),
        [anon_sym_private] = ACTIONS(213),
        [anon_sym_unsafe] = ACTIONS(213),
        [anon_sym_readonly] = ACTIONS(213),
        [anon_sym_volatile] = ACTIONS(213),
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
        [sym_comment] = ACTIONS(57),
    },
    [52] = {
        [anon_sym_RBRACE] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(219),
        [anon_sym_struct] = ACTIONS(219),
        [anon_sym_abstract] = ACTIONS(219),
        [anon_sym_sealed] = ACTIONS(219),
        [anon_sym_static] = ACTIONS(219),
        [anon_sym_new] = ACTIONS(219),
        [anon_sym_public] = ACTIONS(219),
        [anon_sym_protected] = ACTIONS(219),
        [anon_sym_internal] = ACTIONS(219),
        [anon_sym_private] = ACTIONS(219),
        [anon_sym_unsafe] = ACTIONS(219),
        [anon_sym_readonly] = ACTIONS(219),
        [anon_sym_volatile] = ACTIONS(219),
        [anon_sym_bool] = ACTIONS(219),
        [anon_sym_byte] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_decimal] = ACTIONS(219),
        [anon_sym_double] = ACTIONS(219),
        [anon_sym_float] = ACTIONS(219),
        [anon_sym_int] = ACTIONS(219),
        [anon_sym_long] = ACTIONS(219),
        [anon_sym_object] = ACTIONS(219),
        [anon_sym_sbyte] = ACTIONS(219),
        [anon_sym_short] = ACTIONS(219),
        [anon_sym_string] = ACTIONS(219),
        [anon_sym_uint] = ACTIONS(219),
        [anon_sym_ulong] = ACTIONS(219),
        [anon_sym_ushort] = ACTIONS(219),
        [sym_identifier_name] = ACTIONS(221),
        [sym_comment] = ACTIONS(57),
    },
    [53] = {
        [anon_sym_SEMI] = ACTIONS(223),
        [sym_comment] = ACTIONS(57),
    },
    [54] = {
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
        [sym_comment] = ACTIONS(57),
    },
    [55] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_namespace] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(231),
        [anon_sym_class] = ACTIONS(233),
        [anon_sym_struct] = ACTIONS(233),
        [anon_sym_abstract] = ACTIONS(233),
        [anon_sym_sealed] = ACTIONS(233),
        [anon_sym_static] = ACTIONS(233),
        [anon_sym_new] = ACTIONS(233),
        [anon_sym_public] = ACTIONS(233),
        [anon_sym_protected] = ACTIONS(233),
        [anon_sym_internal] = ACTIONS(233),
        [anon_sym_private] = ACTIONS(233),
        [anon_sym_unsafe] = ACTIONS(233),
        [anon_sym_readonly] = ACTIONS(233),
        [anon_sym_volatile] = ACTIONS(233),
        [anon_sym_bool] = ACTIONS(233),
        [anon_sym_byte] = ACTIONS(233),
        [anon_sym_char] = ACTIONS(233),
        [anon_sym_decimal] = ACTIONS(233),
        [anon_sym_double] = ACTIONS(233),
        [anon_sym_float] = ACTIONS(233),
        [anon_sym_int] = ACTIONS(233),
        [anon_sym_long] = ACTIONS(233),
        [anon_sym_object] = ACTIONS(233),
        [anon_sym_sbyte] = ACTIONS(233),
        [anon_sym_short] = ACTIONS(233),
        [anon_sym_string] = ACTIONS(233),
        [anon_sym_uint] = ACTIONS(233),
        [anon_sym_ulong] = ACTIONS(233),
        [anon_sym_ushort] = ACTIONS(233),
        [sym_identifier_name] = ACTIONS(235),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [57] = {
        [sym_equals_value_clause] = STATE(65),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_EQ] = ACTIONS(239),
        [sym_comment] = ACTIONS(57),
    },
    [58] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(243),
        [sym_comment] = ACTIONS(57),
    },
    [59] = {
        [sym_variable_declarator] = STATE(63),
        [sym_identifier_name] = ACTIONS(203),
        [sym_comment] = ACTIONS(57),
    },
    [60] = {
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_COMMA] = ACTIONS(247),
        [sym_comment] = ACTIONS(57),
    },
    [61] = {
        [sym_variable_declarator] = STATE(62),
        [sym_identifier_name] = ACTIONS(203),
        [sym_comment] = ACTIONS(57),
    },
    [62] = {
        [anon_sym_SEMI] = ACTIONS(249),
        [anon_sym_COMMA] = ACTIONS(249),
        [sym_comment] = ACTIONS(57),
    },
    [63] = {
        [anon_sym_SEMI] = ACTIONS(251),
        [anon_sym_COMMA] = ACTIONS(251),
        [sym_comment] = ACTIONS(57),
    },
    [64] = {
        [sym__literal] = STATE(69),
        [sym_boolean_literal] = STATE(70),
        [sym_character_literal] = STATE(70),
        [sym_integer_literal] = STATE(70),
        [anon_sym_true] = ACTIONS(253),
        [anon_sym_false] = ACTIONS(253),
        [anon_sym_SQUOTE] = ACTIONS(255),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(257),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(257),
        [sym_comment] = ACTIONS(57),
    },
    [65] = {
        [anon_sym_SEMI] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(259),
        [sym_comment] = ACTIONS(57),
    },
    [66] = {
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_COMMA] = ACTIONS(261),
        [sym_comment] = ACTIONS(57),
    },
    [67] = {
        [sym__unicode_escape_sequence] = STATE(72),
        [sym__simple_escape_sequence] = STATE(72),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(263),
        [sym__hexadecimal_escape_sequence] = ACTIONS(263),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(265),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(265),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(267),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(267),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(267),
        [anon_sym_BSLASH0] = ACTIONS(267),
        [anon_sym_BSLASHa] = ACTIONS(267),
        [anon_sym_BSLASHb] = ACTIONS(267),
        [anon_sym_BSLASHf] = ACTIONS(267),
        [anon_sym_BSLASHn] = ACTIONS(267),
        [anon_sym_BSLASHr] = ACTIONS(267),
        [anon_sym_BSLASHt] = ACTIONS(267),
        [anon_sym_BSLASHv] = ACTIONS(267),
        [sym_comment] = ACTIONS(57),
    },
    [68] = {
        [anon_sym_SEMI] = ACTIONS(269),
        [anon_sym_COMMA] = ACTIONS(269),
        [sym__integer_type_suffix] = ACTIONS(271),
        [sym_comment] = ACTIONS(57),
    },
    [69] = {
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_COMMA] = ACTIONS(273),
        [sym_comment] = ACTIONS(57),
    },
    [70] = {
        [anon_sym_SEMI] = ACTIONS(275),
        [anon_sym_COMMA] = ACTIONS(275),
        [sym_comment] = ACTIONS(57),
    },
    [71] = {
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_COMMA] = ACTIONS(277),
        [sym_comment] = ACTIONS(57),
    },
    [72] = {
        [anon_sym_SQUOTE] = ACTIONS(279),
        [sym_comment] = ACTIONS(57),
    },
    [73] = {
        [anon_sym_SQUOTE] = ACTIONS(281),
        [sym_comment] = ACTIONS(57),
    },
    [74] = {
        [anon_sym_SQUOTE] = ACTIONS(283),
        [sym_comment] = ACTIONS(57),
    },
    [75] = {
        [anon_sym_SEMI] = ACTIONS(285),
        [anon_sym_COMMA] = ACTIONS(285),
        [sym_comment] = ACTIONS(57),
    },
    [76] = {
        [anon_sym_RBRACE] = ACTIONS(287),
        [anon_sym_class] = ACTIONS(289),
        [anon_sym_struct] = ACTIONS(289),
        [anon_sym_abstract] = ACTIONS(289),
        [anon_sym_sealed] = ACTIONS(289),
        [anon_sym_static] = ACTIONS(289),
        [anon_sym_new] = ACTIONS(289),
        [anon_sym_public] = ACTIONS(289),
        [anon_sym_protected] = ACTIONS(289),
        [anon_sym_internal] = ACTIONS(289),
        [anon_sym_private] = ACTIONS(289),
        [anon_sym_unsafe] = ACTIONS(289),
        [anon_sym_readonly] = ACTIONS(289),
        [anon_sym_volatile] = ACTIONS(289),
        [anon_sym_bool] = ACTIONS(289),
        [anon_sym_byte] = ACTIONS(289),
        [anon_sym_char] = ACTIONS(289),
        [anon_sym_decimal] = ACTIONS(289),
        [anon_sym_double] = ACTIONS(289),
        [anon_sym_float] = ACTIONS(289),
        [anon_sym_int] = ACTIONS(289),
        [anon_sym_long] = ACTIONS(289),
        [anon_sym_object] = ACTIONS(289),
        [anon_sym_sbyte] = ACTIONS(289),
        [anon_sym_short] = ACTIONS(289),
        [anon_sym_string] = ACTIONS(289),
        [anon_sym_uint] = ACTIONS(289),
        [anon_sym_ulong] = ACTIONS(289),
        [anon_sym_ushort] = ACTIONS(289),
        [sym_identifier_name] = ACTIONS(291),
        [sym_comment] = ACTIONS(57),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_GT] = ACTIONS(293),
        [sym_identifier_name] = ACTIONS(295),
        [sym_comment] = ACTIONS(57),
    },
    [78] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_GT] = ACTIONS(297),
        [sym_comment] = ACTIONS(57),
    },
    [79] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(82),
        [anon_sym_COMMA] = ACTIONS(299),
        [anon_sym_GT] = ACTIONS(301),
        [sym_comment] = ACTIONS(57),
    },
    [80] = {
        [sym__type] = STATE(78),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(86),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [81] = {
        [anon_sym_LBRACE] = ACTIONS(303),
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_GT] = ACTIONS(303),
        [sym_identifier_name] = ACTIONS(305),
        [sym_comment] = ACTIONS(57),
    },
    [82] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_GT] = ACTIONS(309),
        [sym_comment] = ACTIONS(57),
    },
    [83] = {
        [sym__type] = STATE(78),
        [sym_generic_name] = STATE(47),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(85),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [84] = {
        [anon_sym_LBRACE] = ACTIONS(311),
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_GT] = ACTIONS(311),
        [sym_identifier_name] = ACTIONS(313),
        [sym_comment] = ACTIONS(57),
    },
    [85] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_GT] = ACTIONS(315),
        [sym_comment] = ACTIONS(57),
    },
    [86] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_GT] = ACTIONS(317),
        [sym_comment] = ACTIONS(57),
    },
    [87] = {
        [anon_sym_bool] = ACTIONS(319),
        [anon_sym_byte] = ACTIONS(319),
        [anon_sym_char] = ACTIONS(319),
        [anon_sym_decimal] = ACTIONS(319),
        [anon_sym_double] = ACTIONS(319),
        [anon_sym_float] = ACTIONS(319),
        [anon_sym_int] = ACTIONS(319),
        [anon_sym_long] = ACTIONS(319),
        [anon_sym_object] = ACTIONS(319),
        [anon_sym_sbyte] = ACTIONS(319),
        [anon_sym_short] = ACTIONS(319),
        [anon_sym_string] = ACTIONS(319),
        [anon_sym_uint] = ACTIONS(319),
        [anon_sym_ulong] = ACTIONS(319),
        [anon_sym_ushort] = ACTIONS(319),
        [sym_identifier_name] = ACTIONS(321),
        [sym_comment] = ACTIONS(57),
    },
    [88] = {
        [anon_sym_class] = ACTIONS(323),
        [sym_comment] = ACTIONS(57),
    },
    [89] = {
        [anon_sym_struct] = ACTIONS(325),
        [sym_comment] = ACTIONS(57),
    },
    [90] = {
        [sym_type_parameter_list] = STATE(92),
        [anon_sym_LBRACE] = ACTIONS(327),
        [anon_sym_LT] = ACTIONS(115),
        [sym_comment] = ACTIONS(57),
    },
    [91] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(94),
        [anon_sym_RBRACE] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [92] = {
        [anon_sym_LBRACE] = ACTIONS(113),
        [sym_comment] = ACTIONS(57),
    },
    [93] = {
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_namespace] = ACTIONS(333),
        [anon_sym_RBRACE] = ACTIONS(331),
        [anon_sym_class] = ACTIONS(333),
        [anon_sym_struct] = ACTIONS(333),
        [anon_sym_abstract] = ACTIONS(333),
        [anon_sym_sealed] = ACTIONS(333),
        [anon_sym_static] = ACTIONS(333),
        [anon_sym_new] = ACTIONS(333),
        [anon_sym_public] = ACTIONS(333),
        [anon_sym_protected] = ACTIONS(333),
        [anon_sym_internal] = ACTIONS(333),
        [anon_sym_private] = ACTIONS(333),
        [anon_sym_unsafe] = ACTIONS(333),
        [anon_sym_readonly] = ACTIONS(333),
        [anon_sym_volatile] = ACTIONS(333),
        [anon_sym_bool] = ACTIONS(333),
        [anon_sym_byte] = ACTIONS(333),
        [anon_sym_char] = ACTIONS(333),
        [anon_sym_decimal] = ACTIONS(333),
        [anon_sym_double] = ACTIONS(333),
        [anon_sym_float] = ACTIONS(333),
        [anon_sym_int] = ACTIONS(333),
        [anon_sym_long] = ACTIONS(333),
        [anon_sym_object] = ACTIONS(333),
        [anon_sym_sbyte] = ACTIONS(333),
        [anon_sym_short] = ACTIONS(333),
        [anon_sym_string] = ACTIONS(333),
        [anon_sym_uint] = ACTIONS(333),
        [anon_sym_ulong] = ACTIONS(333),
        [anon_sym_ushort] = ACTIONS(333),
        [sym_identifier_name] = ACTIONS(335),
        [sym_comment] = ACTIONS(57),
    },
    [94] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [95] = {
        [sym_type_parameter_list] = STATE(97),
        [anon_sym_LBRACE] = ACTIONS(337),
        [anon_sym_LT] = ACTIONS(115),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [97] = {
        [anon_sym_LBRACE] = ACTIONS(153),
        [sym_comment] = ACTIONS(57),
    },
    [98] = {
        [ts_builtin_sym_end] = ACTIONS(341),
        [anon_sym_namespace] = ACTIONS(343),
        [anon_sym_RBRACE] = ACTIONS(341),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_struct] = ACTIONS(343),
        [anon_sym_abstract] = ACTIONS(343),
        [anon_sym_sealed] = ACTIONS(343),
        [anon_sym_static] = ACTIONS(343),
        [anon_sym_new] = ACTIONS(343),
        [anon_sym_public] = ACTIONS(343),
        [anon_sym_protected] = ACTIONS(343),
        [anon_sym_internal] = ACTIONS(343),
        [anon_sym_private] = ACTIONS(343),
        [anon_sym_unsafe] = ACTIONS(343),
        [anon_sym_readonly] = ACTIONS(343),
        [anon_sym_volatile] = ACTIONS(343),
        [anon_sym_bool] = ACTIONS(343),
        [anon_sym_byte] = ACTIONS(343),
        [anon_sym_char] = ACTIONS(343),
        [anon_sym_decimal] = ACTIONS(343),
        [anon_sym_double] = ACTIONS(343),
        [anon_sym_float] = ACTIONS(343),
        [anon_sym_int] = ACTIONS(343),
        [anon_sym_long] = ACTIONS(343),
        [anon_sym_object] = ACTIONS(343),
        [anon_sym_sbyte] = ACTIONS(343),
        [anon_sym_short] = ACTIONS(343),
        [anon_sym_string] = ACTIONS(343),
        [anon_sym_uint] = ACTIONS(343),
        [anon_sym_ulong] = ACTIONS(343),
        [anon_sym_ushort] = ACTIONS(343),
        [sym_identifier_name] = ACTIONS(345),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [100] = {
        [anon_sym_COLON_COLON] = ACTIONS(347),
        [sym_comment] = ACTIONS(57),
    },
    [101] = {
        [anon_sym_LBRACE] = ACTIONS(349),
        [anon_sym_DOT] = ACTIONS(351),
        [sym_comment] = ACTIONS(57),
    },
    [102] = {
        [anon_sym_DOT] = ACTIONS(351),
        [sym_comment] = ACTIONS(57),
    },
    [103] = {
        [sym_identifier_name] = ACTIONS(353),
        [sym_comment] = ACTIONS(57),
    },
    [104] = {
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_LBRACE] = ACTIONS(355),
        [anon_sym_DOT] = ACTIONS(355),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_namespace] = ACTIONS(63),
        [anon_sym_RBRACE] = ACTIONS(357),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [106] = {
        [ts_builtin_sym_end] = ACTIONS(359),
        [anon_sym_namespace] = ACTIONS(359),
        [anon_sym_RBRACE] = ACTIONS(359),
        [anon_sym_class] = ACTIONS(359),
        [anon_sym_struct] = ACTIONS(359),
        [anon_sym_abstract] = ACTIONS(359),
        [anon_sym_sealed] = ACTIONS(359),
        [anon_sym_static] = ACTIONS(359),
        [anon_sym_new] = ACTIONS(359),
        [anon_sym_public] = ACTIONS(359),
        [anon_sym_protected] = ACTIONS(359),
        [anon_sym_internal] = ACTIONS(359),
        [anon_sym_private] = ACTIONS(359),
        [anon_sym_unsafe] = ACTIONS(359),
        [sym_comment] = ACTIONS(57),
    },
    [107] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_namespace] = ACTIONS(63),
        [anon_sym_RBRACE] = ACTIONS(361),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [108] = {
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
        [sym_comment] = ACTIONS(57),
    },
    [109] = {
        [sym_identifier_name] = ACTIONS(365),
        [sym_comment] = ACTIONS(57),
    },
    [110] = {
        [anon_sym_DOT] = ACTIONS(367),
        [sym_comment] = ACTIONS(57),
    },
    [111] = {
        [sym_global] = ACTIONS(369),
        [sym_identifier_name] = ACTIONS(371),
        [sym_comment] = ACTIONS(57),
    },
    [112] = {
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_EQ] = ACTIONS(375),
        [anon_sym_DOT] = ACTIONS(351),
        [sym_comment] = ACTIONS(57),
    },
    [113] = {
        [anon_sym_SEMI] = ACTIONS(373),
        [anon_sym_DOT] = ACTIONS(351),
        [sym_comment] = ACTIONS(57),
    },
    [114] = {
        [sym_qualified_name] = STATE(115),
        [sym_alias_qualified_name] = STATE(102),
        [sym_global] = ACTIONS(75),
        [sym_identifier_name] = ACTIONS(377),
        [sym_comment] = ACTIONS(57),
    },
    [115] = {
        [anon_sym_SEMI] = ACTIONS(379),
        [anon_sym_DOT] = ACTIONS(351),
        [sym_comment] = ACTIONS(57),
    },
    [116] = {
        [ts_builtin_sym_end] = ACTIONS(381),
        [anon_sym_using] = ACTIONS(381),
        [anon_sym_namespace] = ACTIONS(381),
        [anon_sym_class] = ACTIONS(381),
        [anon_sym_struct] = ACTIONS(381),
        [anon_sym_abstract] = ACTIONS(381),
        [anon_sym_sealed] = ACTIONS(381),
        [anon_sym_static] = ACTIONS(381),
        [anon_sym_new] = ACTIONS(381),
        [anon_sym_public] = ACTIONS(381),
        [anon_sym_protected] = ACTIONS(381),
        [anon_sym_internal] = ACTIONS(381),
        [anon_sym_private] = ACTIONS(381),
        [anon_sym_unsafe] = ACTIONS(381),
        [sym_comment] = ACTIONS(57),
    },
    [117] = {
        [ts_builtin_sym_end] = ACTIONS(383),
        [anon_sym_using] = ACTIONS(383),
        [anon_sym_namespace] = ACTIONS(383),
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
        [sym_comment] = ACTIONS(57),
    },
    [118] = {
        [sym_global] = ACTIONS(385),
        [sym_identifier_name] = ACTIONS(387),
        [sym_comment] = ACTIONS(57),
    },
    [119] = {
        [ts_builtin_sym_end] = ACTIONS(389),
        [anon_sym_using] = ACTIONS(392),
        [anon_sym_namespace] = ACTIONS(392),
        [anon_sym_RBRACE] = ACTIONS(395),
        [anon_sym_class] = ACTIONS(398),
        [anon_sym_struct] = ACTIONS(398),
        [anon_sym_abstract] = ACTIONS(398),
        [anon_sym_sealed] = ACTIONS(398),
        [anon_sym_static] = ACTIONS(398),
        [anon_sym_new] = ACTIONS(398),
        [anon_sym_public] = ACTIONS(398),
        [anon_sym_protected] = ACTIONS(398),
        [anon_sym_internal] = ACTIONS(398),
        [anon_sym_private] = ACTIONS(398),
        [anon_sym_unsafe] = ACTIONS(398),
        [anon_sym_readonly] = ACTIONS(403),
        [anon_sym_volatile] = ACTIONS(403),
        [anon_sym_bool] = ACTIONS(403),
        [anon_sym_byte] = ACTIONS(403),
        [anon_sym_char] = ACTIONS(403),
        [anon_sym_decimal] = ACTIONS(403),
        [anon_sym_double] = ACTIONS(403),
        [anon_sym_float] = ACTIONS(403),
        [anon_sym_int] = ACTIONS(403),
        [anon_sym_long] = ACTIONS(403),
        [anon_sym_object] = ACTIONS(403),
        [anon_sym_sbyte] = ACTIONS(403),
        [anon_sym_short] = ACTIONS(403),
        [anon_sym_string] = ACTIONS(403),
        [anon_sym_uint] = ACTIONS(403),
        [anon_sym_ulong] = ACTIONS(403),
        [anon_sym_ushort] = ACTIONS(403),
        [sym_identifier_name] = ACTIONS(406),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_namespace] = ACTIONS(409),
        [anon_sym_RBRACE] = ACTIONS(411),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [121] = {
        [ts_builtin_sym_end] = ACTIONS(413),
        [anon_sym_namespace] = ACTIONS(424),
        [anon_sym_RBRACE] = ACTIONS(413),
        [anon_sym_class] = ACTIONS(424),
        [anon_sym_struct] = ACTIONS(424),
        [anon_sym_abstract] = ACTIONS(424),
        [anon_sym_sealed] = ACTIONS(424),
        [anon_sym_static] = ACTIONS(424),
        [anon_sym_new] = ACTIONS(424),
        [anon_sym_public] = ACTIONS(424),
        [anon_sym_protected] = ACTIONS(424),
        [anon_sym_internal] = ACTIONS(424),
        [anon_sym_private] = ACTIONS(424),
        [anon_sym_unsafe] = ACTIONS(424),
        [anon_sym_readonly] = ACTIONS(435),
        [anon_sym_volatile] = ACTIONS(435),
        [anon_sym_bool] = ACTIONS(435),
        [anon_sym_byte] = ACTIONS(435),
        [anon_sym_char] = ACTIONS(435),
        [anon_sym_decimal] = ACTIONS(435),
        [anon_sym_double] = ACTIONS(435),
        [anon_sym_float] = ACTIONS(435),
        [anon_sym_int] = ACTIONS(435),
        [anon_sym_long] = ACTIONS(435),
        [anon_sym_object] = ACTIONS(435),
        [anon_sym_sbyte] = ACTIONS(435),
        [anon_sym_short] = ACTIONS(435),
        [anon_sym_string] = ACTIONS(435),
        [anon_sym_uint] = ACTIONS(435),
        [anon_sym_ulong] = ACTIONS(435),
        [anon_sym_ushort] = ACTIONS(435),
        [sym_identifier_name] = ACTIONS(444),
        [sym_comment] = ACTIONS(57),
    },
    [122] = {
        [sym_identifier_name] = ACTIONS(453),
        [sym_comment] = ACTIONS(57),
    },
    [123] = {
        [sym_identifier_name] = ACTIONS(455),
        [sym_comment] = ACTIONS(57),
    },
    [124] = {
        [sym__type] = STATE(78),
        [sym_generic_name] = STATE(47),
        [sym_variable_declarator] = STATE(165),
        [sym_predefined_type] = STATE(47),
        [sym_type_parameter] = STATE(166),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(457),
        [sym_comment] = ACTIONS(57),
    },
    [125] = {
        [sym__literal] = STATE(69),
        [sym_boolean_literal] = STATE(70),
        [sym_character_literal] = STATE(70),
        [sym_integer_literal] = STATE(70),
        [anon_sym_true] = ACTIONS(459),
        [anon_sym_false] = ACTIONS(459),
        [anon_sym_SQUOTE] = ACTIONS(255),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(257),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(257),
        [sym_global] = ACTIONS(385),
        [sym_identifier_name] = ACTIONS(387),
        [sym_comment] = ACTIONS(57),
    },
    [126] = {
        [sym__unicode_escape_sequence] = STATE(72),
        [sym__simple_escape_sequence] = STATE(72),
        [anon_sym_SEMI] = ACTIONS(285),
        [anon_sym_COMMA] = ACTIONS(285),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(461),
        [sym__hexadecimal_escape_sequence] = ACTIONS(263),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(265),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(265),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(267),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(267),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(267),
        [anon_sym_BSLASH0] = ACTIONS(267),
        [anon_sym_BSLASHa] = ACTIONS(267),
        [anon_sym_BSLASHb] = ACTIONS(267),
        [anon_sym_BSLASHf] = ACTIONS(267),
        [anon_sym_BSLASHn] = ACTIONS(267),
        [anon_sym_BSLASHr] = ACTIONS(267),
        [anon_sym_BSLASHt] = ACTIONS(267),
        [anon_sym_BSLASHv] = ACTIONS(267),
        [sym_comment] = ACTIONS(57),
    },
    [127] = {
        [sym__class_modifiers] = STATE(88),
        [sym__field_modifiers] = STATE(87),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(163),
        [anon_sym_public] = ACTIONS(163),
        [anon_sym_protected] = ACTIONS(163),
        [anon_sym_internal] = ACTIONS(163),
        [anon_sym_private] = ACTIONS(163),
        [anon_sym_unsafe] = ACTIONS(163),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [sym_global] = ACTIONS(369),
        [sym_identifier_name] = ACTIONS(463),
        [sym_comment] = ACTIONS(57),
    },
    [128] = {
        [anon_sym_LBRACE] = ACTIONS(466),
        [anon_sym_COMMA] = ACTIONS(466),
        [anon_sym_GT] = ACTIONS(466),
        [sym_identifier_name] = ACTIONS(469),
        [sym_comment] = ACTIONS(57),
    },
    [129] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(140),
        [anon_sym_SEMI] = ACTIONS(472),
        [anon_sym_LBRACE] = ACTIONS(476),
        [anon_sym_COMMA] = ACTIONS(479),
        [anon_sym_EQ] = ACTIONS(482),
        [anon_sym_LT] = ACTIONS(115),
        [anon_sym_GT] = ACTIONS(191),
        [anon_sym_DOT] = ACTIONS(484),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(57),
    },
    [130] = {
        [ts_builtin_sym_end] = ACTIONS(488),
        [anon_sym_using] = ACTIONS(488),
        [anon_sym_namespace] = ACTIONS(488),
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
        [sym_comment] = ACTIONS(57),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(491),
        [anon_sym_namespace] = ACTIONS(491),
        [anon_sym_RBRACE] = ACTIONS(491),
        [anon_sym_class] = ACTIONS(491),
        [anon_sym_struct] = ACTIONS(491),
        [anon_sym_abstract] = ACTIONS(491),
        [anon_sym_sealed] = ACTIONS(491),
        [anon_sym_static] = ACTIONS(491),
        [anon_sym_new] = ACTIONS(491),
        [anon_sym_public] = ACTIONS(491),
        [anon_sym_protected] = ACTIONS(491),
        [anon_sym_internal] = ACTIONS(491),
        [anon_sym_private] = ACTIONS(491),
        [anon_sym_unsafe] = ACTIONS(491),
        [sym_comment] = ACTIONS(57),
    },
    [132] = {
        [ts_builtin_sym_end] = ACTIONS(491),
        [anon_sym_namespace] = ACTIONS(494),
        [anon_sym_RBRACE] = ACTIONS(497),
        [anon_sym_class] = ACTIONS(504),
        [anon_sym_struct] = ACTIONS(504),
        [anon_sym_abstract] = ACTIONS(504),
        [anon_sym_sealed] = ACTIONS(504),
        [anon_sym_static] = ACTIONS(504),
        [anon_sym_new] = ACTIONS(504),
        [anon_sym_public] = ACTIONS(504),
        [anon_sym_protected] = ACTIONS(504),
        [anon_sym_internal] = ACTIONS(504),
        [anon_sym_private] = ACTIONS(504),
        [anon_sym_unsafe] = ACTIONS(504),
        [anon_sym_readonly] = ACTIONS(511),
        [anon_sym_volatile] = ACTIONS(511),
        [anon_sym_bool] = ACTIONS(511),
        [anon_sym_byte] = ACTIONS(511),
        [anon_sym_char] = ACTIONS(511),
        [anon_sym_decimal] = ACTIONS(511),
        [anon_sym_double] = ACTIONS(511),
        [anon_sym_float] = ACTIONS(511),
        [anon_sym_int] = ACTIONS(511),
        [anon_sym_long] = ACTIONS(511),
        [anon_sym_object] = ACTIONS(511),
        [anon_sym_sbyte] = ACTIONS(511),
        [anon_sym_short] = ACTIONS(511),
        [anon_sym_string] = ACTIONS(511),
        [anon_sym_uint] = ACTIONS(511),
        [anon_sym_ulong] = ACTIONS(511),
        [anon_sym_ushort] = ACTIONS(511),
        [sym_identifier_name] = ACTIONS(514),
        [sym_comment] = ACTIONS(57),
    },
    [133] = {
        [anon_sym_RBRACE] = ACTIONS(517),
        [anon_sym_class] = ACTIONS(511),
        [anon_sym_struct] = ACTIONS(511),
        [anon_sym_abstract] = ACTIONS(511),
        [anon_sym_sealed] = ACTIONS(511),
        [anon_sym_static] = ACTIONS(511),
        [anon_sym_new] = ACTIONS(511),
        [anon_sym_public] = ACTIONS(511),
        [anon_sym_protected] = ACTIONS(511),
        [anon_sym_internal] = ACTIONS(511),
        [anon_sym_private] = ACTIONS(511),
        [anon_sym_unsafe] = ACTIONS(511),
        [anon_sym_readonly] = ACTIONS(511),
        [anon_sym_volatile] = ACTIONS(511),
        [anon_sym_bool] = ACTIONS(511),
        [anon_sym_byte] = ACTIONS(511),
        [anon_sym_char] = ACTIONS(511),
        [anon_sym_decimal] = ACTIONS(511),
        [anon_sym_double] = ACTIONS(511),
        [anon_sym_float] = ACTIONS(511),
        [anon_sym_int] = ACTIONS(511),
        [anon_sym_long] = ACTIONS(511),
        [anon_sym_object] = ACTIONS(511),
        [anon_sym_sbyte] = ACTIONS(511),
        [anon_sym_short] = ACTIONS(511),
        [anon_sym_string] = ACTIONS(511),
        [anon_sym_uint] = ACTIONS(511),
        [anon_sym_ulong] = ACTIONS(511),
        [anon_sym_ushort] = ACTIONS(511),
        [sym_identifier_name] = ACTIONS(514),
        [sym_comment] = ACTIONS(57),
    },
    [134] = {
        [anon_sym_SEMI] = ACTIONS(520),
        [sym_comment] = ACTIONS(57),
    },
    [135] = {
        [sym_variable_declarator] = STATE(58),
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_GT] = ACTIONS(297),
        [sym_identifier_name] = ACTIONS(203),
        [sym_comment] = ACTIONS(57),
    },
    [136] = {
        [aux_sym_variable_declaration_repeat1] = STATE(60),
        [anon_sym_SEMI] = ACTIONS(522),
        [anon_sym_COMMA] = ACTIONS(526),
        [sym_comment] = ACTIONS(57),
    },
    [137] = {
        [anon_sym_class] = ACTIONS(530),
        [sym_comment] = ACTIONS(57),
    },
    [138] = {
        [anon_sym_struct] = ACTIONS(533),
        [sym_comment] = ACTIONS(57),
    },
    [139] = {
        [anon_sym_bool] = ACTIONS(536),
        [anon_sym_byte] = ACTIONS(536),
        [anon_sym_char] = ACTIONS(536),
        [anon_sym_decimal] = ACTIONS(536),
        [anon_sym_double] = ACTIONS(536),
        [anon_sym_float] = ACTIONS(536),
        [anon_sym_int] = ACTIONS(536),
        [anon_sym_long] = ACTIONS(536),
        [anon_sym_object] = ACTIONS(536),
        [anon_sym_sbyte] = ACTIONS(536),
        [anon_sym_short] = ACTIONS(536),
        [anon_sym_string] = ACTIONS(536),
        [anon_sym_uint] = ACTIONS(536),
        [anon_sym_ulong] = ACTIONS(536),
        [anon_sym_ushort] = ACTIONS(536),
        [sym_identifier_name] = ACTIONS(539),
        [sym_comment] = ACTIONS(57),
    },
    [140] = {
        [anon_sym_LBRACE] = ACTIONS(542),
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_GT] = ACTIONS(293),
        [sym_identifier_name] = ACTIONS(295),
        [sym_comment] = ACTIONS(57),
    },
    [141] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(82),
        [anon_sym_COMMA] = ACTIONS(544),
        [anon_sym_GT] = ACTIONS(548),
        [sym_comment] = ACTIONS(57),
    },
    [142] = {
        [anon_sym_SEMI] = ACTIONS(552),
        [anon_sym_LBRACE] = ACTIONS(349),
        [anon_sym_DOT] = ACTIONS(351),
        [sym_comment] = ACTIONS(57),
    },
    [143] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(554),
        [anon_sym_namespace] = ACTIONS(63),
        [anon_sym_RBRACE] = ACTIONS(361),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(557),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [145] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(559),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [146] = {
        [ts_builtin_sym_end] = ACTIONS(561),
        [anon_sym_namespace] = ACTIONS(565),
        [anon_sym_RBRACE] = ACTIONS(561),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_struct] = ACTIONS(565),
        [anon_sym_abstract] = ACTIONS(565),
        [anon_sym_sealed] = ACTIONS(565),
        [anon_sym_static] = ACTIONS(565),
        [anon_sym_new] = ACTIONS(565),
        [anon_sym_public] = ACTIONS(565),
        [anon_sym_protected] = ACTIONS(565),
        [anon_sym_internal] = ACTIONS(565),
        [anon_sym_private] = ACTIONS(565),
        [anon_sym_unsafe] = ACTIONS(565),
        [anon_sym_readonly] = ACTIONS(565),
        [anon_sym_volatile] = ACTIONS(565),
        [anon_sym_bool] = ACTIONS(565),
        [anon_sym_byte] = ACTIONS(565),
        [anon_sym_char] = ACTIONS(565),
        [anon_sym_decimal] = ACTIONS(565),
        [anon_sym_double] = ACTIONS(565),
        [anon_sym_float] = ACTIONS(565),
        [anon_sym_int] = ACTIONS(565),
        [anon_sym_long] = ACTIONS(565),
        [anon_sym_object] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(565),
        [anon_sym_short] = ACTIONS(565),
        [anon_sym_string] = ACTIONS(565),
        [anon_sym_uint] = ACTIONS(565),
        [anon_sym_ulong] = ACTIONS(565),
        [anon_sym_ushort] = ACTIONS(565),
        [sym_identifier_name] = ACTIONS(569),
        [sym_comment] = ACTIONS(57),
    },
    [147] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_namespace] = ACTIONS(577),
        [anon_sym_RBRACE] = ACTIONS(573),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_struct] = ACTIONS(577),
        [anon_sym_abstract] = ACTIONS(577),
        [anon_sym_sealed] = ACTIONS(577),
        [anon_sym_static] = ACTIONS(577),
        [anon_sym_new] = ACTIONS(577),
        [anon_sym_public] = ACTIONS(577),
        [anon_sym_protected] = ACTIONS(577),
        [anon_sym_internal] = ACTIONS(577),
        [anon_sym_private] = ACTIONS(577),
        [anon_sym_unsafe] = ACTIONS(577),
        [anon_sym_readonly] = ACTIONS(577),
        [anon_sym_volatile] = ACTIONS(577),
        [anon_sym_bool] = ACTIONS(577),
        [anon_sym_byte] = ACTIONS(577),
        [anon_sym_char] = ACTIONS(577),
        [anon_sym_decimal] = ACTIONS(577),
        [anon_sym_double] = ACTIONS(577),
        [anon_sym_float] = ACTIONS(577),
        [anon_sym_int] = ACTIONS(577),
        [anon_sym_long] = ACTIONS(577),
        [anon_sym_object] = ACTIONS(577),
        [anon_sym_sbyte] = ACTIONS(577),
        [anon_sym_short] = ACTIONS(577),
        [anon_sym_string] = ACTIONS(577),
        [anon_sym_uint] = ACTIONS(577),
        [anon_sym_ulong] = ACTIONS(577),
        [anon_sym_ushort] = ACTIONS(577),
        [sym_identifier_name] = ACTIONS(581),
        [sym_comment] = ACTIONS(57),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(389),
        [anon_sym_using] = ACTIONS(389),
        [anon_sym_namespace] = ACTIONS(389),
        [anon_sym_class] = ACTIONS(389),
        [anon_sym_struct] = ACTIONS(389),
        [anon_sym_abstract] = ACTIONS(389),
        [anon_sym_sealed] = ACTIONS(389),
        [anon_sym_static] = ACTIONS(389),
        [anon_sym_new] = ACTIONS(389),
        [anon_sym_public] = ACTIONS(389),
        [anon_sym_protected] = ACTIONS(389),
        [anon_sym_internal] = ACTIONS(389),
        [anon_sym_private] = ACTIONS(389),
        [anon_sym_unsafe] = ACTIONS(389),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(585),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [150] = {
        [ts_builtin_sym_end] = ACTIONS(587),
        [anon_sym_namespace] = ACTIONS(592),
        [anon_sym_RBRACE] = ACTIONS(587),
        [anon_sym_class] = ACTIONS(592),
        [anon_sym_struct] = ACTIONS(592),
        [anon_sym_abstract] = ACTIONS(592),
        [anon_sym_sealed] = ACTIONS(592),
        [anon_sym_static] = ACTIONS(592),
        [anon_sym_new] = ACTIONS(592),
        [anon_sym_public] = ACTIONS(592),
        [anon_sym_protected] = ACTIONS(592),
        [anon_sym_internal] = ACTIONS(592),
        [anon_sym_private] = ACTIONS(592),
        [anon_sym_unsafe] = ACTIONS(592),
        [anon_sym_readonly] = ACTIONS(592),
        [anon_sym_volatile] = ACTIONS(592),
        [anon_sym_bool] = ACTIONS(592),
        [anon_sym_byte] = ACTIONS(592),
        [anon_sym_char] = ACTIONS(592),
        [anon_sym_decimal] = ACTIONS(592),
        [anon_sym_double] = ACTIONS(592),
        [anon_sym_float] = ACTIONS(592),
        [anon_sym_int] = ACTIONS(592),
        [anon_sym_long] = ACTIONS(592),
        [anon_sym_object] = ACTIONS(592),
        [anon_sym_sbyte] = ACTIONS(592),
        [anon_sym_short] = ACTIONS(592),
        [anon_sym_string] = ACTIONS(592),
        [anon_sym_uint] = ACTIONS(592),
        [anon_sym_ulong] = ACTIONS(592),
        [anon_sym_ushort] = ACTIONS(592),
        [sym_identifier_name] = ACTIONS(597),
        [sym_comment] = ACTIONS(57),
    },
    [151] = {
        [anon_sym_RBRACE] = ACTIONS(602),
        [anon_sym_class] = ACTIONS(605),
        [anon_sym_struct] = ACTIONS(605),
        [anon_sym_abstract] = ACTIONS(605),
        [anon_sym_sealed] = ACTIONS(605),
        [anon_sym_static] = ACTIONS(605),
        [anon_sym_new] = ACTIONS(605),
        [anon_sym_public] = ACTIONS(605),
        [anon_sym_protected] = ACTIONS(605),
        [anon_sym_internal] = ACTIONS(605),
        [anon_sym_private] = ACTIONS(605),
        [anon_sym_unsafe] = ACTIONS(605),
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
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(608),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [153] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(610),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [154] = {
        [ts_builtin_sym_end] = ACTIONS(612),
        [anon_sym_namespace] = ACTIONS(615),
        [anon_sym_RBRACE] = ACTIONS(612),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_struct] = ACTIONS(615),
        [anon_sym_abstract] = ACTIONS(615),
        [anon_sym_sealed] = ACTIONS(615),
        [anon_sym_static] = ACTIONS(615),
        [anon_sym_new] = ACTIONS(615),
        [anon_sym_public] = ACTIONS(615),
        [anon_sym_protected] = ACTIONS(615),
        [anon_sym_internal] = ACTIONS(615),
        [anon_sym_private] = ACTIONS(615),
        [anon_sym_unsafe] = ACTIONS(615),
        [anon_sym_readonly] = ACTIONS(615),
        [anon_sym_volatile] = ACTIONS(615),
        [anon_sym_bool] = ACTIONS(615),
        [anon_sym_byte] = ACTIONS(615),
        [anon_sym_char] = ACTIONS(615),
        [anon_sym_decimal] = ACTIONS(615),
        [anon_sym_double] = ACTIONS(615),
        [anon_sym_float] = ACTIONS(615),
        [anon_sym_int] = ACTIONS(615),
        [anon_sym_long] = ACTIONS(615),
        [anon_sym_object] = ACTIONS(615),
        [anon_sym_sbyte] = ACTIONS(615),
        [anon_sym_short] = ACTIONS(615),
        [anon_sym_string] = ACTIONS(615),
        [anon_sym_uint] = ACTIONS(615),
        [anon_sym_ulong] = ACTIONS(615),
        [anon_sym_ushort] = ACTIONS(615),
        [sym_identifier_name] = ACTIONS(618),
        [sym_comment] = ACTIONS(57),
    },
    [155] = {
        [ts_builtin_sym_end] = ACTIONS(621),
        [anon_sym_namespace] = ACTIONS(624),
        [anon_sym_RBRACE] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(624),
        [anon_sym_struct] = ACTIONS(624),
        [anon_sym_abstract] = ACTIONS(624),
        [anon_sym_sealed] = ACTIONS(624),
        [anon_sym_static] = ACTIONS(624),
        [anon_sym_new] = ACTIONS(624),
        [anon_sym_public] = ACTIONS(624),
        [anon_sym_protected] = ACTIONS(624),
        [anon_sym_internal] = ACTIONS(624),
        [anon_sym_private] = ACTIONS(624),
        [anon_sym_unsafe] = ACTIONS(624),
        [anon_sym_readonly] = ACTIONS(624),
        [anon_sym_volatile] = ACTIONS(624),
        [anon_sym_bool] = ACTIONS(624),
        [anon_sym_byte] = ACTIONS(624),
        [anon_sym_char] = ACTIONS(624),
        [anon_sym_decimal] = ACTIONS(624),
        [anon_sym_double] = ACTIONS(624),
        [anon_sym_float] = ACTIONS(624),
        [anon_sym_int] = ACTIONS(624),
        [anon_sym_long] = ACTIONS(624),
        [anon_sym_object] = ACTIONS(624),
        [anon_sym_sbyte] = ACTIONS(624),
        [anon_sym_short] = ACTIONS(624),
        [anon_sym_string] = ACTIONS(624),
        [anon_sym_uint] = ACTIONS(624),
        [anon_sym_ulong] = ACTIONS(624),
        [anon_sym_ushort] = ACTIONS(624),
        [sym_identifier_name] = ACTIONS(627),
        [sym_comment] = ACTIONS(57),
    },
    [156] = {
        [anon_sym_RBRACE] = ACTIONS(395),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_struct] = ACTIONS(403),
        [anon_sym_abstract] = ACTIONS(403),
        [anon_sym_sealed] = ACTIONS(403),
        [anon_sym_static] = ACTIONS(403),
        [anon_sym_new] = ACTIONS(403),
        [anon_sym_public] = ACTIONS(403),
        [anon_sym_protected] = ACTIONS(403),
        [anon_sym_internal] = ACTIONS(403),
        [anon_sym_private] = ACTIONS(403),
        [anon_sym_unsafe] = ACTIONS(403),
        [anon_sym_readonly] = ACTIONS(403),
        [anon_sym_volatile] = ACTIONS(403),
        [anon_sym_bool] = ACTIONS(403),
        [anon_sym_byte] = ACTIONS(403),
        [anon_sym_char] = ACTIONS(403),
        [anon_sym_decimal] = ACTIONS(403),
        [anon_sym_double] = ACTIONS(403),
        [anon_sym_float] = ACTIONS(403),
        [anon_sym_int] = ACTIONS(403),
        [anon_sym_long] = ACTIONS(403),
        [anon_sym_object] = ACTIONS(403),
        [anon_sym_sbyte] = ACTIONS(403),
        [anon_sym_short] = ACTIONS(403),
        [anon_sym_string] = ACTIONS(403),
        [anon_sym_uint] = ACTIONS(403),
        [anon_sym_ulong] = ACTIONS(403),
        [anon_sym_ushort] = ACTIONS(403),
        [sym_identifier_name] = ACTIONS(406),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_namespace] = ACTIONS(409),
        [anon_sym_RBRACE] = ACTIONS(630),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [158] = {
        [ts_builtin_sym_end] = ACTIONS(632),
        [anon_sym_namespace] = ACTIONS(638),
        [anon_sym_RBRACE] = ACTIONS(632),
        [anon_sym_class] = ACTIONS(638),
        [anon_sym_struct] = ACTIONS(638),
        [anon_sym_abstract] = ACTIONS(638),
        [anon_sym_sealed] = ACTIONS(638),
        [anon_sym_static] = ACTIONS(638),
        [anon_sym_new] = ACTIONS(638),
        [anon_sym_public] = ACTIONS(638),
        [anon_sym_protected] = ACTIONS(638),
        [anon_sym_internal] = ACTIONS(638),
        [anon_sym_private] = ACTIONS(638),
        [anon_sym_unsafe] = ACTIONS(638),
        [anon_sym_readonly] = ACTIONS(644),
        [anon_sym_volatile] = ACTIONS(644),
        [anon_sym_bool] = ACTIONS(644),
        [anon_sym_byte] = ACTIONS(644),
        [anon_sym_char] = ACTIONS(644),
        [anon_sym_decimal] = ACTIONS(644),
        [anon_sym_double] = ACTIONS(644),
        [anon_sym_float] = ACTIONS(644),
        [anon_sym_int] = ACTIONS(644),
        [anon_sym_long] = ACTIONS(644),
        [anon_sym_object] = ACTIONS(644),
        [anon_sym_sbyte] = ACTIONS(644),
        [anon_sym_short] = ACTIONS(644),
        [anon_sym_string] = ACTIONS(644),
        [anon_sym_uint] = ACTIONS(644),
        [anon_sym_ulong] = ACTIONS(644),
        [anon_sym_ushort] = ACTIONS(644),
        [sym_identifier_name] = ACTIONS(649),
        [sym_comment] = ACTIONS(57),
    },
    [159] = {
        [anon_sym_namespace] = ACTIONS(654),
        [anon_sym_RBRACE] = ACTIONS(656),
        [anon_sym_class] = ACTIONS(660),
        [anon_sym_struct] = ACTIONS(660),
        [anon_sym_abstract] = ACTIONS(660),
        [anon_sym_sealed] = ACTIONS(660),
        [anon_sym_static] = ACTIONS(660),
        [anon_sym_new] = ACTIONS(660),
        [anon_sym_public] = ACTIONS(660),
        [anon_sym_protected] = ACTIONS(660),
        [anon_sym_internal] = ACTIONS(660),
        [anon_sym_private] = ACTIONS(660),
        [anon_sym_unsafe] = ACTIONS(660),
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
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(664),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [161] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(666),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [162] = {
        [ts_builtin_sym_end] = ACTIONS(668),
        [anon_sym_namespace] = ACTIONS(671),
        [anon_sym_RBRACE] = ACTIONS(668),
        [anon_sym_class] = ACTIONS(671),
        [anon_sym_struct] = ACTIONS(671),
        [anon_sym_abstract] = ACTIONS(671),
        [anon_sym_sealed] = ACTIONS(671),
        [anon_sym_static] = ACTIONS(671),
        [anon_sym_new] = ACTIONS(671),
        [anon_sym_public] = ACTIONS(671),
        [anon_sym_protected] = ACTIONS(671),
        [anon_sym_internal] = ACTIONS(671),
        [anon_sym_private] = ACTIONS(671),
        [anon_sym_unsafe] = ACTIONS(671),
        [anon_sym_readonly] = ACTIONS(671),
        [anon_sym_volatile] = ACTIONS(671),
        [anon_sym_bool] = ACTIONS(671),
        [anon_sym_byte] = ACTIONS(671),
        [anon_sym_char] = ACTIONS(671),
        [anon_sym_decimal] = ACTIONS(671),
        [anon_sym_double] = ACTIONS(671),
        [anon_sym_float] = ACTIONS(671),
        [anon_sym_int] = ACTIONS(671),
        [anon_sym_long] = ACTIONS(671),
        [anon_sym_object] = ACTIONS(671),
        [anon_sym_sbyte] = ACTIONS(671),
        [anon_sym_short] = ACTIONS(671),
        [anon_sym_string] = ACTIONS(671),
        [anon_sym_uint] = ACTIONS(671),
        [anon_sym_ulong] = ACTIONS(671),
        [anon_sym_ushort] = ACTIONS(671),
        [sym_identifier_name] = ACTIONS(674),
        [sym_comment] = ACTIONS(57),
    },
    [163] = {
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
        [sym_comment] = ACTIONS(57),
    },
    [164] = {
        [sym_equals_value_clause] = STATE(65),
        [sym_type_parameter_list] = STATE(77),
        [anon_sym_SEMI] = ACTIONS(237),
        [anon_sym_COMMA] = ACTIONS(479),
        [anon_sym_EQ] = ACTIONS(239),
        [anon_sym_LT] = ACTIONS(115),
        [anon_sym_GT] = ACTIONS(191),
        [sym_comment] = ACTIONS(57),
    },
    [165] = {
        [anon_sym_SEMI] = ACTIONS(686),
        [anon_sym_COMMA] = ACTIONS(686),
        [sym_comment] = ACTIONS(57),
    },
    [166] = {
        [anon_sym_COMMA] = ACTIONS(689),
        [anon_sym_GT] = ACTIONS(689),
        [sym_comment] = ACTIONS(57),
    },
    [167] = {
        [sym_type_parameter_list] = STATE(169),
        [anon_sym_LBRACE] = ACTIONS(692),
        [anon_sym_LT] = ACTIONS(115),
        [sym_comment] = ACTIONS(57),
    },
    [168] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(161),
        [anon_sym_RBRACE] = ACTIONS(694),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [169] = {
        [anon_sym_LBRACE] = ACTIONS(696),
        [sym_comment] = ACTIONS(57),
    },
    [170] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(153),
        [anon_sym_RBRACE] = ACTIONS(666),
        [anon_sym_class] = ACTIONS(65),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_unsafe] = ACTIONS(71),
        [sym_comment] = ACTIONS(57),
    },
    [171] = {
        [ts_builtin_sym_end] = ACTIONS(698),
        [anon_sym_namespace] = ACTIONS(701),
        [anon_sym_RBRACE] = ACTIONS(698),
        [anon_sym_class] = ACTIONS(701),
        [anon_sym_struct] = ACTIONS(701),
        [anon_sym_abstract] = ACTIONS(701),
        [anon_sym_sealed] = ACTIONS(701),
        [anon_sym_static] = ACTIONS(701),
        [anon_sym_new] = ACTIONS(701),
        [anon_sym_public] = ACTIONS(701),
        [anon_sym_protected] = ACTIONS(701),
        [anon_sym_internal] = ACTIONS(701),
        [anon_sym_private] = ACTIONS(701),
        [anon_sym_unsafe] = ACTIONS(701),
        [anon_sym_readonly] = ACTIONS(701),
        [anon_sym_volatile] = ACTIONS(701),
        [anon_sym_bool] = ACTIONS(701),
        [anon_sym_byte] = ACTIONS(701),
        [anon_sym_char] = ACTIONS(701),
        [anon_sym_decimal] = ACTIONS(701),
        [anon_sym_double] = ACTIONS(701),
        [anon_sym_float] = ACTIONS(701),
        [anon_sym_int] = ACTIONS(701),
        [anon_sym_long] = ACTIONS(701),
        [anon_sym_object] = ACTIONS(701),
        [anon_sym_sbyte] = ACTIONS(701),
        [anon_sym_short] = ACTIONS(701),
        [anon_sym_string] = ACTIONS(701),
        [anon_sym_uint] = ACTIONS(701),
        [anon_sym_ulong] = ACTIONS(701),
        [anon_sym_ushort] = ACTIONS(701),
        [sym_identifier_name] = ACTIONS(704),
        [sym_comment] = ACTIONS(57),
    },
    [172] = {
        [sym_type_parameter_list] = STATE(174),
        [anon_sym_LBRACE] = ACTIONS(707),
        [anon_sym_LT] = ACTIONS(115),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(709),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [174] = {
        [anon_sym_LBRACE] = ACTIONS(711),
        [sym_comment] = ACTIONS(57),
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
        [anon_sym_RBRACE] = ACTIONS(664),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_struct] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_unsafe] = ACTIONS(165),
        [anon_sym_readonly] = ACTIONS(167),
        [anon_sym_volatile] = ACTIONS(167),
        [anon_sym_bool] = ACTIONS(119),
        [anon_sym_byte] = ACTIONS(119),
        [anon_sym_char] = ACTIONS(119),
        [anon_sym_decimal] = ACTIONS(119),
        [anon_sym_double] = ACTIONS(119),
        [anon_sym_float] = ACTIONS(119),
        [anon_sym_int] = ACTIONS(119),
        [anon_sym_long] = ACTIONS(119),
        [anon_sym_object] = ACTIONS(119),
        [anon_sym_sbyte] = ACTIONS(119),
        [anon_sym_short] = ACTIONS(119),
        [anon_sym_string] = ACTIONS(119),
        [anon_sym_uint] = ACTIONS(119),
        [anon_sym_ulong] = ACTIONS(119),
        [anon_sym_ushort] = ACTIONS(119),
        [sym_identifier_name] = ACTIONS(121),
        [sym_comment] = ACTIONS(57),
    },
    [176] = {
        [ts_builtin_sym_end] = ACTIONS(713),
        [anon_sym_namespace] = ACTIONS(716),
        [anon_sym_RBRACE] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(716),
        [anon_sym_struct] = ACTIONS(716),
        [anon_sym_abstract] = ACTIONS(716),
        [anon_sym_sealed] = ACTIONS(716),
        [anon_sym_static] = ACTIONS(716),
        [anon_sym_new] = ACTIONS(716),
        [anon_sym_public] = ACTIONS(716),
        [anon_sym_protected] = ACTIONS(716),
        [anon_sym_internal] = ACTIONS(716),
        [anon_sym_private] = ACTIONS(716),
        [anon_sym_unsafe] = ACTIONS(716),
        [anon_sym_readonly] = ACTIONS(716),
        [anon_sym_volatile] = ACTIONS(716),
        [anon_sym_bool] = ACTIONS(716),
        [anon_sym_byte] = ACTIONS(716),
        [anon_sym_char] = ACTIONS(716),
        [anon_sym_decimal] = ACTIONS(716),
        [anon_sym_double] = ACTIONS(716),
        [anon_sym_float] = ACTIONS(716),
        [anon_sym_int] = ACTIONS(716),
        [anon_sym_long] = ACTIONS(716),
        [anon_sym_object] = ACTIONS(716),
        [anon_sym_sbyte] = ACTIONS(716),
        [anon_sym_short] = ACTIONS(716),
        [anon_sym_string] = ACTIONS(716),
        [anon_sym_uint] = ACTIONS(716),
        [anon_sym_ulong] = ACTIONS(716),
        [anon_sym_ushort] = ACTIONS(716),
        [sym_identifier_name] = ACTIONS(719),
        [sym_comment] = ACTIONS(57),
    },
    [177] = {
        [ts_builtin_sym_end] = ACTIONS(722),
        [anon_sym_namespace] = ACTIONS(730),
        [anon_sym_RBRACE] = ACTIONS(722),
        [anon_sym_class] = ACTIONS(730),
        [anon_sym_struct] = ACTIONS(730),
        [anon_sym_abstract] = ACTIONS(730),
        [anon_sym_sealed] = ACTIONS(730),
        [anon_sym_static] = ACTIONS(730),
        [anon_sym_new] = ACTIONS(730),
        [anon_sym_public] = ACTIONS(730),
        [anon_sym_protected] = ACTIONS(730),
        [anon_sym_internal] = ACTIONS(730),
        [anon_sym_private] = ACTIONS(730),
        [anon_sym_unsafe] = ACTIONS(730),
        [anon_sym_readonly] = ACTIONS(738),
        [anon_sym_volatile] = ACTIONS(738),
        [anon_sym_bool] = ACTIONS(738),
        [anon_sym_byte] = ACTIONS(738),
        [anon_sym_char] = ACTIONS(738),
        [anon_sym_decimal] = ACTIONS(738),
        [anon_sym_double] = ACTIONS(738),
        [anon_sym_float] = ACTIONS(738),
        [anon_sym_int] = ACTIONS(738),
        [anon_sym_long] = ACTIONS(738),
        [anon_sym_object] = ACTIONS(738),
        [anon_sym_sbyte] = ACTIONS(738),
        [anon_sym_short] = ACTIONS(738),
        [anon_sym_string] = ACTIONS(738),
        [anon_sym_uint] = ACTIONS(738),
        [anon_sym_ulong] = ACTIONS(738),
        [anon_sym_ushort] = ACTIONS(738),
        [sym_identifier_name] = ACTIONS(745),
        [sym_comment] = ACTIONS(57),
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
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(72),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(73),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(74),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(71),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(127),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(40),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(41),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(42),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(128),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(103),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(109),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(100),
    [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(129),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
    [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
    [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [389] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [392] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [395] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [398] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4),
    [403] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [406] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [413] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [424] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [435] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [444] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
    [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
    [463] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [466] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [469] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [472] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(148),
    [476] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(157),
    [479] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [484] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(103),
    [488] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [491] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [494] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [497] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [504] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [511] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [514] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [517] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [522] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [526] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(59),
    [530] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [533] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [536] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [539] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [544] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(80),
    [548] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(81),
    [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [554] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [561] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [565] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [569] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [573] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [577] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [581] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [587] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [592] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [597] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [602] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [605] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [612] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [615] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [618] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [621] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [624] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [627] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [632] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [638] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [644] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [649] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [656] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [660] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [668] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [671] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [674] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [677] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [680] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [683] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [686] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [689] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [698] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [701] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [704] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [713] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [716] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [719] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [722] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [730] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [738] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [745] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
