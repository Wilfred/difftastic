#include "tree_sitter/parser.h"

#define STATE_COUNT 480
#define SYMBOL_COUNT 151
#define TOKEN_COUNT 86

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
    anon_sym_delegate = 31,
    sym_void_keyword = 32,
    anon_sym_LPAREN = 33,
    anon_sym_RPAREN = 34,
    anon_sym_ref = 35,
    anon_sym_out = 36,
    anon_sym_this = 37,
    anon_sym_LBRACK = 38,
    anon_sym_RBRACK = 39,
    anon_sym_assembly = 40,
    anon_sym_module = 41,
    anon_sym_readonly = 42,
    anon_sym_volatile = 43,
    anon_sym_EQ = 44,
    anon_sym_true = 45,
    anon_sym_false = 46,
    anon_sym_SQUOTE = 47,
    aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 48,
    sym__hexadecimal_escape_sequence = 49,
    aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 50,
    aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 51,
    anon_sym_BSLASH_SQUOTE = 52,
    anon_sym_BSLASH_DQUOTE = 53,
    anon_sym_BSLASH_BSLASH = 54,
    anon_sym_BSLASH0 = 55,
    anon_sym_BSLASHa = 56,
    anon_sym_BSLASHb = 57,
    anon_sym_BSLASHf = 58,
    anon_sym_BSLASHn = 59,
    anon_sym_BSLASHr = 60,
    anon_sym_BSLASHt = 61,
    anon_sym_BSLASHv = 62,
    aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 63,
    aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH = 64,
    sym__integer_type_suffix = 65,
    sym_null_literal = 66,
    anon_sym_DOT = 67,
    sym__real_type_suffix = 68,
    sym__exponent_part = 69,
    anon_sym_DQUOTE = 70,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH = 71,
    anon_sym_AT_DQUOTE = 72,
    aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 73,
    anon_sym_bool = 74,
    anon_sym_decimal = 75,
    anon_sym_double = 76,
    anon_sym_float = 77,
    anon_sym_object = 78,
    anon_sym_string = 79,
    anon_sym_LT = 80,
    anon_sym_GT = 81,
    anon_sym_COLON_COLON = 82,
    sym_global = 83,
    sym_identifier_name = 84,
    sym_comment = 85,
    sym_compilation_unit = 86,
    sym__type_declaration = 87,
    sym_extern_alias_directive = 88,
    sym_using_directive = 89,
    sym_namespace_declaration = 90,
    sym_class_declaration = 91,
    sym_class_modifiers = 92,
    sym__class_modifiers = 93,
    sym_struct_declaration = 94,
    sym_struct_modifiers = 95,
    sym__struct_modifiers = 96,
    sym_enum_declaration = 97,
    sym_enum_member_declaration = 98,
    sym_enum_modifier = 99,
    sym__integral_type = 100,
    sym_delegate_declaration = 101,
    sym_delegate_modifier = 102,
    sym__return_type = 103,
    sym_parameter_list = 104,
    sym_parameter = 105,
    sym_parameter_modifier = 106,
    sym__attributes = 107,
    sym__attribute_section = 108,
    sym_attribute_list = 109,
    sym_attribute = 110,
    sym_attribute_argument_list = 111,
    sym__global_attributes = 112,
    sym_field_declaration = 113,
    sym_field_modifiers = 114,
    sym__field_modifiers = 115,
    sym_variable_declaration = 116,
    sym__type = 117,
    sym_generic_name = 118,
    sym_variable_declarator = 119,
    sym_equals_value_clause = 120,
    sym__literal = 121,
    sym_boolean_literal = 122,
    sym_character_literal = 123,
    sym__unicode_escape_sequence = 124,
    sym__simple_escape_sequence = 125,
    sym_integer_literal = 126,
    sym_real_literal = 127,
    sym_string_literal = 128,
    sym__regular_string_literal = 129,
    sym__regular_string_literal_character = 130,
    sym__verbatim_string_literal = 131,
    sym_predefined_type = 132,
    sym_type_parameter_list = 133,
    sym_type_parameter = 134,
    sym_qualified_name = 135,
    sym_alias_qualified_name = 136,
    sym_name_equals = 137,
    sym_static = 138,
    aux_sym_compilation_unit_repeat1 = 139,
    aux_sym_compilation_unit_repeat2 = 140,
    aux_sym_compilation_unit_repeat3 = 141,
    aux_sym_compilation_unit_repeat4 = 142,
    aux_sym_class_declaration_repeat1 = 143,
    aux_sym_enum_declaration_repeat1 = 144,
    aux_sym_parameter_list_repeat1 = 145,
    aux_sym__attributes_repeat1 = 146,
    aux_sym_attribute_list_repeat1 = 147,
    aux_sym_variable_declaration_repeat1 = 148,
    aux_sym__regular_string_literal_repeat1 = 149,
    aux_sym_type_parameter_list_repeat1 = 150,
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
    [anon_sym_delegate] = "delegate",
    [sym_void_keyword] = "void_keyword",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_ref] = "ref",
    [anon_sym_out] = "out",
    [anon_sym_this] = "this",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
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
    [sym_delegate_declaration] = "delegate_declaration",
    [sym_delegate_modifier] = "delegate_modifier",
    [sym__return_type] = "_return_type",
    [sym_parameter_list] = "parameter_list",
    [sym_parameter] = "parameter",
    [sym_parameter_modifier] = "parameter_modifier",
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
    [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
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
    [anon_sym_delegate] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_void_keyword] = {
        .visible = true,
        .named = true,
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
    [anon_sym_ref] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_out] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_this] = {
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
    [sym_delegate_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_delegate_modifier] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__return_type] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_parameter_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_parameter_modifier] = {
        .visible = true,
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
    [aux_sym_parameter_list_repeat1] = {
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
                ADVANCE(118);
            if (lookahead == 'f')
                ADVANCE(127);
            if (lookahead == 'g')
                ADVANCE(136);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(150);
            if (lookahead == 'm')
                ADVANCE(154);
            if (lookahead == 'n')
                ADVANCE(160);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(201);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 't')
                ADVANCE(236);
            if (lookahead == 'u')
                ADVANCE(243);
            if (lookahead == 'v')
                ADVANCE(264);
            if (lookahead == '{')
                ADVANCE(274);
            if (lookahead == '}')
                ADVANCE(275);
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
                ADVANCE(113);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(102);
            if (lookahead == 'l')
                ADVANCE(107);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier_name);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier_name);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
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
            ACCEPT_TOKEN(anon_sym_delegate);
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
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier_name);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_double);
        case 118:
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
                ADVANCE(119);
            if (lookahead == 'x')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(121);
            ACCEPT_TOKEN(sym_identifier_name);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_enum);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier_name);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 124:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_extern);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(128);
            if (lookahead == 'l')
                ADVANCE(132);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 128:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier_name);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier_name);
        case 131:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_false);
        case 132:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 135:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_float);
        case 136:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier_name);
        case 137:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier_name);
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier_name);
        case 140:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier_name);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_global);
        case 142:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier_name);
        case 143:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_identifier_name);
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(145);
            ACCEPT_TOKEN(anon_sym_int);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier_name);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier_name);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_internal);
        case 150:
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
                ADVANCE(151);
            if (lookahead == 'u')
                ADVANCE(31);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 151:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(152);
            ACCEPT_TOKEN(sym_identifier_name);
        case 152:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier_name);
        case 153:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_long);
        case 154:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(155);
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 159:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_module);
        case 160:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(161);
            if (lookahead == 'e')
                ADVANCE(169);
            if (lookahead == 'u')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 161:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'm')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier_name);
        case 162:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 163:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'p')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier_name);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier_name);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 168:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 169:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'w')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier_name);
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_new);
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(173);
            ACCEPT_TOKEN(sym_identifier_name);
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_null_literal);
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(175);
            if (lookahead == 'u')
                ADVANCE(180);
            ACCEPT_TOKEN(sym_identifier_name);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'j')
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_object);
        case 180:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(181);
            ACCEPT_TOKEN(sym_identifier_name);
        case 181:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_out);
        case 182:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(183);
            if (lookahead == 'u')
                ADVANCE(196);
            ACCEPT_TOKEN(sym_identifier_name);
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(184);
            if (lookahead == 'o')
                ADVANCE(189);
            ACCEPT_TOKEN(sym_identifier_name);
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'v')
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(187);
            ACCEPT_TOKEN(sym_identifier_name);
        case 187:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(188);
            ACCEPT_TOKEN(sym_identifier_name);
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_private);
        case 189:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(190);
            ACCEPT_TOKEN(sym_identifier_name);
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(193);
            ACCEPT_TOKEN(sym_identifier_name);
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
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(195);
            ACCEPT_TOKEN(sym_identifier_name);
        case 195:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_protected);
        case 196:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(197);
            ACCEPT_TOKEN(sym_identifier_name);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(198);
            ACCEPT_TOKEN(sym_identifier_name);
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(199);
            ACCEPT_TOKEN(sym_identifier_name);
        case 199:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(200);
            ACCEPT_TOKEN(sym_identifier_name);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_public);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(202);
            ACCEPT_TOKEN(sym_identifier_name);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(203);
            if (lookahead == 'f')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier_name);
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(204);
            ACCEPT_TOKEN(sym_identifier_name);
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(205);
            ACCEPT_TOKEN(sym_identifier_name);
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(206);
            ACCEPT_TOKEN(sym_identifier_name);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier_name);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier_name);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ref);
        case 210:
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
                ADVANCE(211);
            if (lookahead == 'e')
                ADVANCE(215);
            if (lookahead == 'h')
                ADVANCE(220);
            if (lookahead == 't')
                ADVANCE(224);
            ACCEPT_TOKEN(sym_identifier_name);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier_name);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier_name);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier_name);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier_name);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(219);
            ACCEPT_TOKEN(sym_identifier_name);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier_name);
        case 221:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(222);
            ACCEPT_TOKEN(sym_identifier_name);
        case 222:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(223);
            ACCEPT_TOKEN(sym_identifier_name);
        case 223:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_short);
        case 224:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(225);
            if (lookahead == 'r')
                ADVANCE(229);
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
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(227);
            ACCEPT_TOKEN(sym_identifier_name);
        case 227:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(228);
            ACCEPT_TOKEN(sym_identifier_name);
        case 228:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_static);
        case 229:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(230);
            if (lookahead == 'u')
                ADVANCE(233);
            ACCEPT_TOKEN(sym_identifier_name);
        case 230:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(231);
            ACCEPT_TOKEN(sym_identifier_name);
        case 231:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(232);
            ACCEPT_TOKEN(sym_identifier_name);
        case 232:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_string);
        case 233:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'c')
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
            ACCEPT_TOKEN(anon_sym_struct);
        case 236:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(237);
            if (lookahead == 'r')
                ADVANCE(240);
            ACCEPT_TOKEN(sym_identifier_name);
        case 237:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(238);
            ACCEPT_TOKEN(sym_identifier_name);
        case 238:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(239);
            ACCEPT_TOKEN(sym_identifier_name);
        case 239:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_this);
        case 240:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(241);
            ACCEPT_TOKEN(sym_identifier_name);
        case 241:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(242);
            ACCEPT_TOKEN(sym_identifier_name);
        case 242:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_true);
        case 243:
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
                ADVANCE(244);
            if (lookahead == 'l')
                ADVANCE(247);
            if (lookahead == 'n')
                ADVANCE(251);
            if (lookahead == 's')
                ADVANCE(256);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 244:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(245);
            ACCEPT_TOKEN(sym_identifier_name);
        case 245:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(246);
            ACCEPT_TOKEN(sym_identifier_name);
        case 246:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_uint);
        case 247:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(248);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 248:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(249);
            ACCEPT_TOKEN(sym_identifier_name);
        case 249:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(250);
            ACCEPT_TOKEN(sym_identifier_name);
        case 250:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 251:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(252);
            ACCEPT_TOKEN(sym_identifier_name);
        case 252:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(253);
            ACCEPT_TOKEN(sym_identifier_name);
        case 253:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(254);
            ACCEPT_TOKEN(sym_identifier_name);
        case 254:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(255);
            ACCEPT_TOKEN(sym_identifier_name);
        case 255:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 256:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(257);
            if (lookahead == 'i')
                ADVANCE(261);
            ACCEPT_TOKEN(sym_identifier_name);
        case 257:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(258);
            ACCEPT_TOKEN(sym_identifier_name);
        case 258:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(259);
            ACCEPT_TOKEN(sym_identifier_name);
        case 259:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(260);
            ACCEPT_TOKEN(sym_identifier_name);
        case 260:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 261:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(262);
            ACCEPT_TOKEN(sym_identifier_name);
        case 262:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(263);
            ACCEPT_TOKEN(sym_identifier_name);
        case 263:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_using);
        case 264:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(265);
            ACCEPT_TOKEN(sym_identifier_name);
        case 265:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(266);
            if (lookahead == 'l')
                ADVANCE(268);
            ACCEPT_TOKEN(sym_identifier_name);
        case 266:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'd')
                ADVANCE(267);
            ACCEPT_TOKEN(sym_identifier_name);
        case 267:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_void_keyword);
        case 268:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(269);
            ACCEPT_TOKEN(sym_identifier_name);
        case 269:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(270);
            ACCEPT_TOKEN(sym_identifier_name);
        case 270:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(271);
            ACCEPT_TOKEN(sym_identifier_name);
        case 271:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(272);
            ACCEPT_TOKEN(sym_identifier_name);
        case 272:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(273);
            ACCEPT_TOKEN(sym_identifier_name);
        case 273:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 274:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 275:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 276:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(276);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(277);
            if (lookahead == 'c')
                ADVANCE(285);
            if (lookahead == 'd')
                ADVANCE(290);
            if (lookahead == 'e')
                ADVANCE(298);
            if (lookahead == 'i')
                ADVANCE(307);
            if (lookahead == 'n')
                ADVANCE(315);
            if (lookahead == 'p')
                ADVANCE(326);
            if (lookahead == 's')
                ADVANCE(345);
            if (lookahead == 'u')
                ADVANCE(360);
            LEX_ERROR();
        case 277:
            if (lookahead == 'b')
                ADVANCE(278);
            LEX_ERROR();
        case 278:
            if (lookahead == 's')
                ADVANCE(279);
            LEX_ERROR();
        case 279:
            if (lookahead == 't')
                ADVANCE(280);
            LEX_ERROR();
        case 280:
            if (lookahead == 'r')
                ADVANCE(281);
            LEX_ERROR();
        case 281:
            if (lookahead == 'a')
                ADVANCE(282);
            LEX_ERROR();
        case 282:
            if (lookahead == 'c')
                ADVANCE(283);
            LEX_ERROR();
        case 283:
            if (lookahead == 't')
                ADVANCE(284);
            LEX_ERROR();
        case 284:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 285:
            if (lookahead == 'l')
                ADVANCE(286);
            LEX_ERROR();
        case 286:
            if (lookahead == 'a')
                ADVANCE(287);
            LEX_ERROR();
        case 287:
            if (lookahead == 's')
                ADVANCE(288);
            LEX_ERROR();
        case 288:
            if (lookahead == 's')
                ADVANCE(289);
            LEX_ERROR();
        case 289:
            ACCEPT_TOKEN(anon_sym_class);
        case 290:
            if (lookahead == 'e')
                ADVANCE(291);
            LEX_ERROR();
        case 291:
            if (lookahead == 'l')
                ADVANCE(292);
            LEX_ERROR();
        case 292:
            if (lookahead == 'e')
                ADVANCE(293);
            LEX_ERROR();
        case 293:
            if (lookahead == 'g')
                ADVANCE(294);
            LEX_ERROR();
        case 294:
            if (lookahead == 'a')
                ADVANCE(295);
            LEX_ERROR();
        case 295:
            if (lookahead == 't')
                ADVANCE(296);
            LEX_ERROR();
        case 296:
            if (lookahead == 'e')
                ADVANCE(297);
            LEX_ERROR();
        case 297:
            ACCEPT_TOKEN(anon_sym_delegate);
        case 298:
            if (lookahead == 'n')
                ADVANCE(299);
            if (lookahead == 'x')
                ADVANCE(302);
            LEX_ERROR();
        case 299:
            if (lookahead == 'u')
                ADVANCE(300);
            LEX_ERROR();
        case 300:
            if (lookahead == 'm')
                ADVANCE(301);
            LEX_ERROR();
        case 301:
            ACCEPT_TOKEN(anon_sym_enum);
        case 302:
            if (lookahead == 't')
                ADVANCE(303);
            LEX_ERROR();
        case 303:
            if (lookahead == 'e')
                ADVANCE(304);
            LEX_ERROR();
        case 304:
            if (lookahead == 'r')
                ADVANCE(305);
            LEX_ERROR();
        case 305:
            if (lookahead == 'n')
                ADVANCE(306);
            LEX_ERROR();
        case 306:
            ACCEPT_TOKEN(anon_sym_extern);
        case 307:
            if (lookahead == 'n')
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
            if (lookahead == 'r')
                ADVANCE(311);
            LEX_ERROR();
        case 311:
            if (lookahead == 'n')
                ADVANCE(312);
            LEX_ERROR();
        case 312:
            if (lookahead == 'a')
                ADVANCE(313);
            LEX_ERROR();
        case 313:
            if (lookahead == 'l')
                ADVANCE(314);
            LEX_ERROR();
        case 314:
            ACCEPT_TOKEN(anon_sym_internal);
        case 315:
            if (lookahead == 'a')
                ADVANCE(316);
            if (lookahead == 'e')
                ADVANCE(324);
            LEX_ERROR();
        case 316:
            if (lookahead == 'm')
                ADVANCE(317);
            LEX_ERROR();
        case 317:
            if (lookahead == 'e')
                ADVANCE(318);
            LEX_ERROR();
        case 318:
            if (lookahead == 's')
                ADVANCE(319);
            LEX_ERROR();
        case 319:
            if (lookahead == 'p')
                ADVANCE(320);
            LEX_ERROR();
        case 320:
            if (lookahead == 'a')
                ADVANCE(321);
            LEX_ERROR();
        case 321:
            if (lookahead == 'c')
                ADVANCE(322);
            LEX_ERROR();
        case 322:
            if (lookahead == 'e')
                ADVANCE(323);
            LEX_ERROR();
        case 323:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 324:
            if (lookahead == 'w')
                ADVANCE(325);
            LEX_ERROR();
        case 325:
            ACCEPT_TOKEN(anon_sym_new);
        case 326:
            if (lookahead == 'r')
                ADVANCE(327);
            if (lookahead == 'u')
                ADVANCE(340);
            LEX_ERROR();
        case 327:
            if (lookahead == 'i')
                ADVANCE(328);
            if (lookahead == 'o')
                ADVANCE(333);
            LEX_ERROR();
        case 328:
            if (lookahead == 'v')
                ADVANCE(329);
            LEX_ERROR();
        case 329:
            if (lookahead == 'a')
                ADVANCE(330);
            LEX_ERROR();
        case 330:
            if (lookahead == 't')
                ADVANCE(331);
            LEX_ERROR();
        case 331:
            if (lookahead == 'e')
                ADVANCE(332);
            LEX_ERROR();
        case 332:
            ACCEPT_TOKEN(anon_sym_private);
        case 333:
            if (lookahead == 't')
                ADVANCE(334);
            LEX_ERROR();
        case 334:
            if (lookahead == 'e')
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
            if (lookahead == 'e')
                ADVANCE(338);
            LEX_ERROR();
        case 338:
            if (lookahead == 'd')
                ADVANCE(339);
            LEX_ERROR();
        case 339:
            ACCEPT_TOKEN(anon_sym_protected);
        case 340:
            if (lookahead == 'b')
                ADVANCE(341);
            LEX_ERROR();
        case 341:
            if (lookahead == 'l')
                ADVANCE(342);
            LEX_ERROR();
        case 342:
            if (lookahead == 'i')
                ADVANCE(343);
            LEX_ERROR();
        case 343:
            if (lookahead == 'c')
                ADVANCE(344);
            LEX_ERROR();
        case 344:
            ACCEPT_TOKEN(anon_sym_public);
        case 345:
            if (lookahead == 'e')
                ADVANCE(346);
            if (lookahead == 't')
                ADVANCE(351);
            LEX_ERROR();
        case 346:
            if (lookahead == 'a')
                ADVANCE(347);
            LEX_ERROR();
        case 347:
            if (lookahead == 'l')
                ADVANCE(348);
            LEX_ERROR();
        case 348:
            if (lookahead == 'e')
                ADVANCE(349);
            LEX_ERROR();
        case 349:
            if (lookahead == 'd')
                ADVANCE(350);
            LEX_ERROR();
        case 350:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 351:
            if (lookahead == 'a')
                ADVANCE(352);
            if (lookahead == 'r')
                ADVANCE(356);
            LEX_ERROR();
        case 352:
            if (lookahead == 't')
                ADVANCE(353);
            LEX_ERROR();
        case 353:
            if (lookahead == 'i')
                ADVANCE(354);
            LEX_ERROR();
        case 354:
            if (lookahead == 'c')
                ADVANCE(355);
            LEX_ERROR();
        case 355:
            ACCEPT_TOKEN(anon_sym_static);
        case 356:
            if (lookahead == 'u')
                ADVANCE(357);
            LEX_ERROR();
        case 357:
            if (lookahead == 'c')
                ADVANCE(358);
            LEX_ERROR();
        case 358:
            if (lookahead == 't')
                ADVANCE(359);
            LEX_ERROR();
        case 359:
            ACCEPT_TOKEN(anon_sym_struct);
        case 360:
            if (lookahead == 'n')
                ADVANCE(361);
            if (lookahead == 's')
                ADVANCE(366);
            LEX_ERROR();
        case 361:
            if (lookahead == 's')
                ADVANCE(362);
            LEX_ERROR();
        case 362:
            if (lookahead == 'a')
                ADVANCE(363);
            LEX_ERROR();
        case 363:
            if (lookahead == 'f')
                ADVANCE(364);
            LEX_ERROR();
        case 364:
            if (lookahead == 'e')
                ADVANCE(365);
            LEX_ERROR();
        case 365:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 366:
            if (lookahead == 'i')
                ADVANCE(367);
            LEX_ERROR();
        case 367:
            if (lookahead == 'n')
                ADVANCE(368);
            LEX_ERROR();
        case 368:
            if (lookahead == 'g')
                ADVANCE(369);
            LEX_ERROR();
        case 369:
            ACCEPT_TOKEN(anon_sym_using);
        case 370:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(370);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(371);
            LEX_ERROR();
        case 371:
            if (lookahead == 'l')
                ADVANCE(372);
            LEX_ERROR();
        case 372:
            if (lookahead == 'i')
                ADVANCE(373);
            LEX_ERROR();
        case 373:
            if (lookahead == 'a')
                ADVANCE(374);
            LEX_ERROR();
        case 374:
            if (lookahead == 's')
                ADVANCE(375);
            LEX_ERROR();
        case 375:
            ACCEPT_TOKEN(anon_sym_alias);
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
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(136);
            if (lookahead == 's')
                ADVANCE(377);
            LEX_ERROR();
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
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(225);
            ACCEPT_TOKEN(sym_identifier_name);
        case 379:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(379);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'g')
                ADVANCE(136);
            LEX_ERROR();
        case 380:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(380);
            if (lookahead == '/')
                ADVANCE(8);
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
            if (lookahead == 'a')
                ADVANCE(277);
            if (lookahead == 'c')
                ADVANCE(285);
            if (lookahead == 'd')
                ADVANCE(290);
            if (lookahead == 'i')
                ADVANCE(307);
            if (lookahead == 'n')
                ADVANCE(382);
            if (lookahead == 'p')
                ADVANCE(326);
            if (lookahead == 's')
                ADVANCE(345);
            if (lookahead == 'u')
                ADVANCE(383);
            LEX_ERROR();
        case 382:
            if (lookahead == 'e')
                ADVANCE(324);
            LEX_ERROR();
        case 383:
            if (lookahead == 'n')
                ADVANCE(361);
            LEX_ERROR();
        case 384:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(384);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(277);
            if (lookahead == 'c')
                ADVANCE(285);
            if (lookahead == 'i')
                ADVANCE(307);
            if (lookahead == 'n')
                ADVANCE(382);
            if (lookahead == 'p')
                ADVANCE(326);
            if (lookahead == 's')
                ADVANCE(385);
            if (lookahead == 'u')
                ADVANCE(383);
            LEX_ERROR();
        case 385:
            if (lookahead == 'e')
                ADVANCE(346);
            if (lookahead == 't')
                ADVANCE(386);
            LEX_ERROR();
        case 386:
            if (lookahead == 'a')
                ADVANCE(352);
            LEX_ERROR();
        case 387:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(387);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(277);
            if (lookahead == 'c')
                ADVANCE(285);
            if (lookahead == 'd')
                ADVANCE(290);
            if (lookahead == 'e')
                ADVANCE(388);
            if (lookahead == 'i')
                ADVANCE(307);
            if (lookahead == 'n')
                ADVANCE(382);
            if (lookahead == 'p')
                ADVANCE(326);
            if (lookahead == 's')
                ADVANCE(345);
            if (lookahead == 'u')
                ADVANCE(383);
            LEX_ERROR();
        case 388:
            if (lookahead == 'n')
                ADVANCE(299);
            LEX_ERROR();
        case 389:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(389);
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
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(390);
            if (lookahead == 'd')
                ADVANCE(391);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(394);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 's')
                ADVANCE(399);
            if (lookahead == 'u')
                ADVANCE(402);
            if (lookahead == 'v')
                ADVANCE(405);
            LEX_ERROR();
        case 390:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 391:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(392);
            if (lookahead == 'o')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 392:
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
        case 393:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 394:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(395);
            ACCEPT_TOKEN(sym_identifier_name);
        case 395:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 't')
                ADVANCE(396);
            ACCEPT_TOKEN(sym_identifier_name);
        case 396:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            ACCEPT_TOKEN(anon_sym_int);
        case 397:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 398:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(175);
            ACCEPT_TOKEN(sym_identifier_name);
        case 399:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(211);
            if (lookahead == 'h')
                ADVANCE(220);
            if (lookahead == 't')
                ADVANCE(400);
            ACCEPT_TOKEN(sym_identifier_name);
        case 400:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(401);
            ACCEPT_TOKEN(sym_identifier_name);
        case 401:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(230);
            ACCEPT_TOKEN(sym_identifier_name);
        case 402:
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
                ADVANCE(244);
            if (lookahead == 'l')
                ADVANCE(403);
            if (lookahead == 's')
                ADVANCE(404);
            ACCEPT_TOKEN(sym_identifier_name);
        case 403:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(248);
            ACCEPT_TOKEN(sym_identifier_name);
        case 404:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(257);
            ACCEPT_TOKEN(sym_identifier_name);
        case 405:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(406);
            ACCEPT_TOKEN(sym_identifier_name);
        case 406:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'i')
                ADVANCE(266);
            ACCEPT_TOKEN(sym_identifier_name);
        case 407:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(407);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(408);
            if (lookahead == 'm')
                ADVANCE(409);
            LEX_ERROR();
        case 408:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 409:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 410:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(410);
            if (lookahead == '/')
                ADVANCE(8);
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
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(277);
            if (lookahead == 'c')
                ADVANCE(285);
            if (lookahead == 'd')
                ADVANCE(290);
            if (lookahead == 'e')
                ADVANCE(388);
            if (lookahead == 'i')
                ADVANCE(307);
            if (lookahead == 'n')
                ADVANCE(315);
            if (lookahead == 'p')
                ADVANCE(326);
            if (lookahead == 's')
                ADVANCE(345);
            if (lookahead == 'u')
                ADVANCE(383);
            if (lookahead == '}')
                ADVANCE(275);
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
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(277);
            if (lookahead == 'c')
                ADVANCE(285);
            if (lookahead == 'd')
                ADVANCE(290);
            if (lookahead == 'e')
                ADVANCE(388);
            if (lookahead == 'i')
                ADVANCE(307);
            if (lookahead == 'n')
                ADVANCE(315);
            if (lookahead == 'p')
                ADVANCE(326);
            if (lookahead == 's')
                ADVANCE(345);
            if (lookahead == 'u')
                ADVANCE(360);
            LEX_ERROR();
        case 413:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(413);
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
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(415);
            if (lookahead == 'e')
                ADVANCE(416);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(417);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 414:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 415:
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
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 416:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier_name);
        case 417:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(161);
            if (lookahead == 'e')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 418:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(419);
            ACCEPT_TOKEN(sym_identifier_name);
        case 419:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(203);
            ACCEPT_TOKEN(sym_identifier_name);
        case 420:
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
                ADVANCE(244);
            if (lookahead == 'l')
                ADVANCE(403);
            if (lookahead == 'n')
                ADVANCE(251);
            if (lookahead == 's')
                ADVANCE(404);
            ACCEPT_TOKEN(sym_identifier_name);
        case 421:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'o')
                ADVANCE(422);
            ACCEPT_TOKEN(sym_identifier_name);
        case 422:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'l')
                ADVANCE(268);
            ACCEPT_TOKEN(sym_identifier_name);
        case 423:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(423);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'c')
                ADVANCE(285);
            LEX_ERROR();
        case 424:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(424);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 's')
                ADVANCE(425);
            LEX_ERROR();
        case 425:
            if (lookahead == 't')
                ADVANCE(426);
            LEX_ERROR();
        case 426:
            if (lookahead == 'r')
                ADVANCE(356);
            LEX_ERROR();
        case 427:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(427);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(388);
            LEX_ERROR();
        case 428:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(428);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'd')
                ADVANCE(290);
            LEX_ERROR();
        case 429:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(429);
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
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(415);
            if (lookahead == 'e')
                ADVANCE(416);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(430);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(201);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 't')
                ADVANCE(431);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            LEX_ERROR();
        case 430:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 431:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'h')
                ADVANCE(237);
            ACCEPT_TOKEN(sym_identifier_name);
        case 432:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(432);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(277);
            if (lookahead == 'c')
                ADVANCE(285);
            if (lookahead == 'd')
                ADVANCE(290);
            if (lookahead == 'e')
                ADVANCE(388);
            if (lookahead == 'i')
                ADVANCE(307);
            if (lookahead == 'n')
                ADVANCE(315);
            if (lookahead == 'p')
                ADVANCE(326);
            if (lookahead == 's')
                ADVANCE(345);
            if (lookahead == 'u')
                ADVANCE(383);
            LEX_ERROR();
        case 433:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(433);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 434:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(434);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 435:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(435);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 436:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(436);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(8);
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
            if (lookahead == '>')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
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
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 439:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(439);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 440:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(440);
            if (lookahead == ')')
                ADVANCE(5);
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
                (lookahead == 'p') ||
                (lookahead == 'q') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(390);
            if (lookahead == 'd')
                ADVANCE(391);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(394);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(441);
            if (lookahead == 's')
                ADVANCE(399);
            if (lookahead == 't')
                ADVANCE(431);
            if (lookahead == 'u')
                ADVANCE(402);
            LEX_ERROR();
        case 441:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'e')
                ADVANCE(442);
            ACCEPT_TOKEN(sym_identifier_name);
        case 442:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'f')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier_name);
        case 443:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(443);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 444:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(444);
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
                ADVANCE(390);
            if (lookahead == 'd')
                ADVANCE(391);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(394);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 's')
                ADVANCE(399);
            if (lookahead == 'u')
                ADVANCE(402);
            LEX_ERROR();
        case 445:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(445);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 446:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(446);
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
                (lookahead == 'p') ||
                (lookahead == 'q') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(390);
            if (lookahead == 'd')
                ADVANCE(391);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(394);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(441);
            if (lookahead == 's')
                ADVANCE(399);
            if (lookahead == 't')
                ADVANCE(431);
            if (lookahead == 'u')
                ADVANCE(402);
            LEX_ERROR();
        case 447:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(447);
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
                (lookahead == 'p') ||
                (lookahead == 'q') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(390);
            if (lookahead == 'd')
                ADVANCE(391);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(394);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'r')
                ADVANCE(441);
            if (lookahead == 's')
                ADVANCE(399);
            if (lookahead == 't')
                ADVANCE(431);
            if (lookahead == 'u')
                ADVANCE(402);
            LEX_ERROR();
        case 448:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(448);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(22);
            LEX_ERROR();
        case 449:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(449);
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
                ADVANCE(274);
            LEX_ERROR();
        case 450:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(450);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(451);
            if (lookahead == '{')
                ADVANCE(274);
            LEX_ERROR();
        case 451:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 452:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(452);
            if (lookahead == '/')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            LEX_ERROR();
        case 453:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(453);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'b')
                ADVANCE(454);
            if (lookahead == 'c')
                ADVANCE(458);
            if (lookahead == 'i')
                ADVANCE(462);
            if (lookahead == 'l')
                ADVANCE(465);
            if (lookahead == 's')
                ADVANCE(469);
            if (lookahead == 'u')
                ADVANCE(478);
            LEX_ERROR();
        case 454:
            if (lookahead == 'y')
                ADVANCE(455);
            LEX_ERROR();
        case 455:
            if (lookahead == 't')
                ADVANCE(456);
            LEX_ERROR();
        case 456:
            if (lookahead == 'e')
                ADVANCE(457);
            LEX_ERROR();
        case 457:
            ACCEPT_TOKEN(anon_sym_byte);
        case 458:
            if (lookahead == 'h')
                ADVANCE(459);
            LEX_ERROR();
        case 459:
            if (lookahead == 'a')
                ADVANCE(460);
            LEX_ERROR();
        case 460:
            if (lookahead == 'r')
                ADVANCE(461);
            LEX_ERROR();
        case 461:
            ACCEPT_TOKEN(anon_sym_char);
        case 462:
            if (lookahead == 'n')
                ADVANCE(463);
            LEX_ERROR();
        case 463:
            if (lookahead == 't')
                ADVANCE(464);
            LEX_ERROR();
        case 464:
            ACCEPT_TOKEN(anon_sym_int);
        case 465:
            if (lookahead == 'o')
                ADVANCE(466);
            LEX_ERROR();
        case 466:
            if (lookahead == 'n')
                ADVANCE(467);
            LEX_ERROR();
        case 467:
            if (lookahead == 'g')
                ADVANCE(468);
            LEX_ERROR();
        case 468:
            ACCEPT_TOKEN(anon_sym_long);
        case 469:
            if (lookahead == 'b')
                ADVANCE(470);
            if (lookahead == 'h')
                ADVANCE(474);
            LEX_ERROR();
        case 470:
            if (lookahead == 'y')
                ADVANCE(471);
            LEX_ERROR();
        case 471:
            if (lookahead == 't')
                ADVANCE(472);
            LEX_ERROR();
        case 472:
            if (lookahead == 'e')
                ADVANCE(473);
            LEX_ERROR();
        case 473:
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 474:
            if (lookahead == 'o')
                ADVANCE(475);
            LEX_ERROR();
        case 475:
            if (lookahead == 'r')
                ADVANCE(476);
            LEX_ERROR();
        case 476:
            if (lookahead == 't')
                ADVANCE(477);
            LEX_ERROR();
        case 477:
            ACCEPT_TOKEN(anon_sym_short);
        case 478:
            if (lookahead == 'i')
                ADVANCE(479);
            if (lookahead == 'l')
                ADVANCE(482);
            if (lookahead == 's')
                ADVANCE(486);
            LEX_ERROR();
        case 479:
            if (lookahead == 'n')
                ADVANCE(480);
            LEX_ERROR();
        case 480:
            if (lookahead == 't')
                ADVANCE(481);
            LEX_ERROR();
        case 481:
            ACCEPT_TOKEN(anon_sym_uint);
        case 482:
            if (lookahead == 'o')
                ADVANCE(483);
            LEX_ERROR();
        case 483:
            if (lookahead == 'n')
                ADVANCE(484);
            LEX_ERROR();
        case 484:
            if (lookahead == 'g')
                ADVANCE(485);
            LEX_ERROR();
        case 485:
            ACCEPT_TOKEN(anon_sym_ulong);
        case 486:
            if (lookahead == 'h')
                ADVANCE(487);
            LEX_ERROR();
        case 487:
            if (lookahead == 'o')
                ADVANCE(488);
            LEX_ERROR();
        case 488:
            if (lookahead == 'r')
                ADVANCE(489);
            LEX_ERROR();
        case 489:
            if (lookahead == 't')
                ADVANCE(490);
            LEX_ERROR();
        case 490:
            ACCEPT_TOKEN(anon_sym_ushort);
        case 491:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(491);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(274);
            LEX_ERROR();
        case 492:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(492);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(21);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 493:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(493);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 494:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(494);
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
                ADVANCE(495);
            if (lookahead == 'n')
                ADVANCE(500);
            if (lookahead == 't')
                ADVANCE(504);
            LEX_ERROR();
        case 495:
            if (lookahead == 'a')
                ADVANCE(496);
            LEX_ERROR();
        case 496:
            if (lookahead == 'l')
                ADVANCE(497);
            LEX_ERROR();
        case 497:
            if (lookahead == 's')
                ADVANCE(498);
            LEX_ERROR();
        case 498:
            if (lookahead == 'e')
                ADVANCE(499);
            LEX_ERROR();
        case 499:
            ACCEPT_TOKEN(anon_sym_false);
        case 500:
            if (lookahead == 'u')
                ADVANCE(501);
            LEX_ERROR();
        case 501:
            if (lookahead == 'l')
                ADVANCE(502);
            LEX_ERROR();
        case 502:
            if (lookahead == 'l')
                ADVANCE(503);
            LEX_ERROR();
        case 503:
            ACCEPT_TOKEN(sym_null_literal);
        case 504:
            if (lookahead == 'r')
                ADVANCE(505);
            LEX_ERROR();
        case 505:
            if (lookahead == 'u')
                ADVANCE(506);
            LEX_ERROR();
        case 506:
            if (lookahead == 'e')
                ADVANCE(507);
            LEX_ERROR();
        case 507:
            ACCEPT_TOKEN(anon_sym_true);
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
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 509:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(510);
            if (lookahead == '/')
                ADVANCE(511);
            if (lookahead == '\\')
                ADVANCE(512);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\'') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(510);
            LEX_ERROR();
        case 510:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 511:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
        case 512:
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
        case 513:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(513);
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
                ADVANCE(514);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(515);
            if (lookahead == 'L')
                ADVANCE(516);
            if (lookahead == 'U')
                ADVANCE(518);
            if (lookahead == 'l')
                ADVANCE(516);
            if (lookahead == 'u')
                ADVANCE(518);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 514:
            ACCEPT_TOKEN(sym__real_type_suffix);
        case 515:
            if ('+' <= lookahead && lookahead <= ']')
                ADVANCE(28);
            LEX_ERROR();
        case 516:
            if (lookahead == 'U')
                ADVANCE(517);
            if (lookahead == 'u')
                ADVANCE(517);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 517:
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 518:
            if (lookahead == 'L')
                ADVANCE(517);
            if (lookahead == 'l')
                ADVANCE(517);
            ACCEPT_TOKEN(sym__integer_type_suffix);
        case 519:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(519);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == 'L')
                ADVANCE(516);
            if (lookahead == 'U')
                ADVANCE(518);
            if (lookahead == 'l')
                ADVANCE(516);
            if (lookahead == 'u')
                ADVANCE(518);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 520:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(520);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            LEX_ERROR();
        case 521:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(522);
            if (lookahead == '\n')
                SKIP(521);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(523);
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
                ADVANCE(522);
            LEX_ERROR();
        case 522:
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 523:
            if (lookahead == '*')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH);
        case 524:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(525);
            if (lookahead == '/')
                ADVANCE(526);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(530);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 525:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(525);
            if (lookahead == '/')
                ADVANCE(526);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(530);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 526:
            if (lookahead == '*')
                ADVANCE(527);
            if (lookahead == '/')
                ADVANCE(531);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(530);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 527:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '*')
                ADVANCE(528);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '*')))
                ADVANCE(527);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 528:
            if (lookahead == '\"')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(529);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '/')))
                ADVANCE(527);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 529:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(530);
            ACCEPT_TOKEN(sym_comment);
        case 530:
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(530);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 531:
            if (lookahead == '\n')
                ADVANCE(530);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(532);
            ACCEPT_TOKEN(sym_comment);
        case 532:
            if (lookahead == '\n')
                ADVANCE(530);
            if (lookahead == '\"')
                ADVANCE(12);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(532);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
        case 533:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(533);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 534:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(522);
            if (lookahead == '\n')
                SKIP(534);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(523);
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
                ADVANCE(522);
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
            if (lookahead == ';')
                ADVANCE(19);
            if ((lookahead == 'D') ||
                (lookahead == 'F') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'm'))
                ADVANCE(514);
            if ((lookahead == 'E') ||
                (lookahead == 'e'))
                ADVANCE(515);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 536:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(536);
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
                ADVANCE(514);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 537:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(537);
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 538:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(538);
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
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(415);
            if (lookahead == 'e')
                ADVANCE(416);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(417);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 539:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(539);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(274);
            LEX_ERROR();
        case 540:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(540);
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
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(415);
            if (lookahead == 'e')
                ADVANCE(416);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(430);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 541:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(541);
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
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(415);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(430);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            LEX_ERROR();
        case 542:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(542);
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
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(391);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(430);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(543);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            LEX_ERROR();
        case 543:
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
                ADVANCE(211);
            if (lookahead == 'e')
                ADVANCE(215);
            if (lookahead == 'h')
                ADVANCE(220);
            if (lookahead == 't')
                ADVANCE(544);
            ACCEPT_TOKEN(sym_identifier_name);
        case 544:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(225);
            if (lookahead == 'r')
                ADVANCE(401);
            ACCEPT_TOKEN(sym_identifier_name);
        case 545:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(545);
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
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(415);
            if (lookahead == 'e')
                ADVANCE(416);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(430);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            LEX_ERROR();
        case 546:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(546);
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
                ADVANCE(390);
            if (lookahead == 'd')
                ADVANCE(391);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(430);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(547);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            LEX_ERROR();
        case 547:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(211);
            if (lookahead == 'h')
                ADVANCE(220);
            if (lookahead == 't')
                ADVANCE(544);
            ACCEPT_TOKEN(sym_identifier_name);
        case 548:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(548);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 549:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(549);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 550:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(550);
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
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(391);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(430);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            LEX_ERROR();
        case 551:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(551);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(451);
            LEX_ERROR();
        case 552:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(552);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(277);
            if (lookahead == 'c')
                ADVANCE(285);
            if (lookahead == 'i')
                ADVANCE(307);
            if (lookahead == 'n')
                ADVANCE(382);
            if (lookahead == 'p')
                ADVANCE(326);
            if (lookahead == 's')
                ADVANCE(345);
            if (lookahead == 'u')
                ADVANCE(383);
            LEX_ERROR();
        case 553:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(553);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(554);
            LEX_ERROR();
        case 554:
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 555:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(555);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '{')
                ADVANCE(274);
            LEX_ERROR();
        case 556:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(556);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 557:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(557);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '{')
                ADVANCE(274);
            LEX_ERROR();
        case 558:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(558);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(277);
            if (lookahead == 'c')
                ADVANCE(285);
            if (lookahead == 'd')
                ADVANCE(290);
            if (lookahead == 'e')
                ADVANCE(388);
            if (lookahead == 'i')
                ADVANCE(307);
            if (lookahead == 'n')
                ADVANCE(315);
            if (lookahead == 'p')
                ADVANCE(326);
            if (lookahead == 's')
                ADVANCE(345);
            if (lookahead == 'u')
                ADVANCE(383);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 559:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(559);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 560:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(560);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 561:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(561);
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
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(415);
            if (lookahead == 'e')
                ADVANCE(562);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(417);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 'u')
                ADVANCE(563);
            if (lookahead == 'v')
                ADVANCE(421);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 562:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'n')
                ADVANCE(119);
            if (lookahead == 'x')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 563:
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
                ADVANCE(244);
            if (lookahead == 'l')
                ADVANCE(403);
            if (lookahead == 'n')
                ADVANCE(251);
            if (lookahead == 's')
                ADVANCE(256);
            ACCEPT_TOKEN(sym_identifier_name);
        case 564:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(564);
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
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(415);
            if (lookahead == 'e')
                ADVANCE(416);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(417);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 565:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(565);
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
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(391);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'g')
                ADVANCE(136);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(430);
            if (lookahead == 'o')
                ADVANCE(398);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(418);
            if (lookahead == 's')
                ADVANCE(543);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            LEX_ERROR();
        case 566:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(566);
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
                ADVANCE(567);
            if (lookahead == 'c')
                ADVANCE(390);
            if (lookahead == 'i')
                ADVANCE(394);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 's')
                ADVANCE(568);
            if (lookahead == 'u')
                ADVANCE(402);
            LEX_ERROR();
        case 567:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 568:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'b')
                ADVANCE(211);
            if (lookahead == 'h')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier_name);
        case 569:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(569);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(65);
            LEX_ERROR();
        case 570:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(570);
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
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(415);
            if (lookahead == 'e')
                ADVANCE(416);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(417);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(201);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 't')
                ADVANCE(431);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            LEX_ERROR();
        case 571:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(571);
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
                ADVANCE(572);
            if (lookahead == 'g')
                ADVANCE(136);
            if (lookahead == 'n')
                ADVANCE(573);
            if (lookahead == 't')
                ADVANCE(574);
            LEX_ERROR();
        case 572:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(128);
            ACCEPT_TOKEN(sym_identifier_name);
        case 573:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'u')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 574:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'r')
                ADVANCE(240);
            ACCEPT_TOKEN(sym_identifier_name);
        case 575:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(510);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(511);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(512);
            if (lookahead == '}')
                ADVANCE(275);
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
                ADVANCE(510);
            LEX_ERROR();
        case 576:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(576);
            if (lookahead == '/')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            LEX_ERROR();
        case 577:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(522);
            if (lookahead == '\n')
                SKIP(577);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(523);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '\\')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(275);
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
                ADVANCE(522);
            LEX_ERROR();
        case 578:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(578);
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
            if (lookahead == ':')
                ADVANCE(451);
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
                ADVANCE(274);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        case 579:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(579);
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
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == 'a')
                ADVANCE(414);
            if (lookahead == 'b')
                ADVANCE(85);
            if (lookahead == 'c')
                ADVANCE(92);
            if (lookahead == 'd')
                ADVANCE(415);
            if (lookahead == 'e')
                ADVANCE(416);
            if (lookahead == 'f')
                ADVANCE(393);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'l')
                ADVANCE(397);
            if (lookahead == 'n')
                ADVANCE(430);
            if (lookahead == 'o')
                ADVANCE(174);
            if (lookahead == 'p')
                ADVANCE(182);
            if (lookahead == 'r')
                ADVANCE(201);
            if (lookahead == 's')
                ADVANCE(210);
            if (lookahead == 't')
                ADVANCE(431);
            if (lookahead == 'u')
                ADVANCE(420);
            if (lookahead == 'v')
                ADVANCE(421);
            LEX_ERROR();
        case 580:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(580);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(21);
            LEX_ERROR();
        case 581:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(581);
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
                ADVANCE(275);
            LEX_ERROR();
        case 582:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(582);
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
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(25);
            if (lookahead == ']')
                ADVANCE(65);
            if (lookahead == '}')
                ADVANCE(275);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 276,
    [2] = 370,
    [3] = 376,
    [4] = 379,
    [5] = 380,
    [6] = 381,
    [7] = 384,
    [8] = 387,
    [9] = 380,
    [10] = 380,
    [11] = 389,
    [12] = 407,
    [13] = 410,
    [14] = 411,
    [15] = 276,
    [16] = 412,
    [17] = 413,
    [18] = 423,
    [19] = 423,
    [20] = 424,
    [21] = 424,
    [22] = 427,
    [23] = 428,
    [24] = 387,
    [25] = 429,
    [26] = 432,
    [27] = 276,
    [28] = 412,
    [29] = 432,
    [30] = 432,
    [31] = 429,
    [32] = 380,
    [33] = 429,
    [34] = 433,
    [35] = 434,
    [36] = 435,
    [37] = 380,
    [38] = 435,
    [39] = 380,
    [40] = 435,
    [41] = 435,
    [42] = 429,
    [43] = 436,
    [44] = 435,
    [45] = 435,
    [46] = 411,
    [47] = 432,
    [48] = 432,
    [49] = 412,
    [50] = 432,
    [51] = 432,
    [52] = 276,
    [53] = 412,
    [54] = 432,
    [55] = 432,
    [56] = 380,
    [57] = 380,
    [58] = 380,
    [59] = 389,
    [60] = 423,
    [61] = 424,
    [62] = 427,
    [63] = 428,
    [64] = 389,
    [65] = 437,
    [66] = 380,
    [67] = 438,
    [68] = 380,
    [69] = 437,
    [70] = 439,
    [71] = 440,
    [72] = 443,
    [73] = 413,
    [74] = 443,
    [75] = 444,
    [76] = 445,
    [77] = 444,
    [78] = 446,
    [79] = 380,
    [80] = 445,
    [81] = 444,
    [82] = 380,
    [83] = 445,
    [84] = 380,
    [85] = 445,
    [86] = 447,
    [87] = 443,
    [88] = 445,
    [89] = 447,
    [90] = 443,
    [91] = 445,
    [92] = 445,
    [93] = 444,
    [94] = 437,
    [95] = 448,
    [96] = 448,
    [97] = 444,
    [98] = 449,
    [99] = 448,
    [100] = 444,
    [101] = 449,
    [102] = 448,
    [103] = 448,
    [104] = 380,
    [105] = 450,
    [106] = 452,
    [107] = 453,
    [108] = 491,
    [109] = 491,
    [110] = 452,
    [111] = 492,
    [112] = 493,
    [113] = 380,
    [114] = 492,
    [115] = 494,
    [116] = 493,
    [117] = 508,
    [118] = 509,
    [119] = 513,
    [120] = 519,
    [121] = 508,
    [122] = 520,
    [123] = 521,
    [124] = 524,
    [125] = 508,
    [126] = 508,
    [127] = 533,
    [128] = 508,
    [129] = 521,
    [130] = 534,
    [131] = 534,
    [132] = 508,
    [133] = 521,
    [134] = 521,
    [135] = 508,
    [136] = 521,
    [137] = 535,
    [138] = 508,
    [139] = 536,
    [140] = 508,
    [141] = 508,
    [142] = 520,
    [143] = 508,
    [144] = 536,
    [145] = 535,
    [146] = 536,
    [147] = 508,
    [148] = 537,
    [149] = 537,
    [150] = 537,
    [151] = 508,
    [152] = 538,
    [153] = 452,
    [154] = 493,
    [155] = 538,
    [156] = 452,
    [157] = 493,
    [158] = 413,
    [159] = 493,
    [160] = 413,
    [161] = 493,
    [162] = 493,
    [163] = 538,
    [164] = 493,
    [165] = 538,
    [166] = 413,
    [167] = 413,
    [168] = 380,
    [169] = 539,
    [170] = 540,
    [171] = 491,
    [172] = 540,
    [173] = 413,
    [174] = 541,
    [175] = 542,
    [176] = 545,
    [177] = 546,
    [178] = 540,
    [179] = 545,
    [180] = 444,
    [181] = 444,
    [182] = 443,
    [183] = 380,
    [184] = 540,
    [185] = 413,
    [186] = 540,
    [187] = 548,
    [188] = 549,
    [189] = 380,
    [190] = 549,
    [191] = 380,
    [192] = 549,
    [193] = 549,
    [194] = 549,
    [195] = 540,
    [196] = 443,
    [197] = 540,
    [198] = 444,
    [199] = 443,
    [200] = 540,
    [201] = 413,
    [202] = 540,
    [203] = 380,
    [204] = 539,
    [205] = 540,
    [206] = 491,
    [207] = 540,
    [208] = 413,
    [209] = 540,
    [210] = 413,
    [211] = 413,
    [212] = 540,
    [213] = 380,
    [214] = 439,
    [215] = 443,
    [216] = 413,
    [217] = 450,
    [218] = 452,
    [219] = 453,
    [220] = 491,
    [221] = 452,
    [222] = 493,
    [223] = 493,
    [224] = 493,
    [225] = 538,
    [226] = 493,
    [227] = 413,
    [228] = 539,
    [229] = 540,
    [230] = 491,
    [231] = 413,
    [232] = 540,
    [233] = 539,
    [234] = 540,
    [235] = 491,
    [236] = 413,
    [237] = 540,
    [238] = 444,
    [239] = 380,
    [240] = 439,
    [241] = 443,
    [242] = 413,
    [243] = 450,
    [244] = 452,
    [245] = 453,
    [246] = 491,
    [247] = 493,
    [248] = 538,
    [249] = 493,
    [250] = 413,
    [251] = 539,
    [252] = 540,
    [253] = 491,
    [254] = 413,
    [255] = 540,
    [256] = 550,
    [257] = 423,
    [258] = 424,
    [259] = 539,
    [260] = 540,
    [261] = 491,
    [262] = 413,
    [263] = 540,
    [264] = 551,
    [265] = 380,
    [266] = 434,
    [267] = 432,
    [268] = 552,
    [269] = 553,
    [270] = 555,
    [271] = 556,
    [272] = 380,
    [273] = 557,
    [274] = 558,
    [275] = 411,
    [276] = 558,
    [277] = 411,
    [278] = 380,
    [279] = 556,
    [280] = 379,
    [281] = 559,
    [282] = 560,
    [283] = 379,
    [284] = 560,
    [285] = 412,
    [286] = 412,
    [287] = 379,
    [288] = 380,
    [289] = 443,
    [290] = 276,
    [291] = 561,
    [292] = 564,
    [293] = 538,
    [294] = 380,
    [295] = 565,
    [296] = 380,
    [297] = 380,
    [298] = 566,
    [299] = 447,
    [300] = 449,
    [301] = 389,
    [302] = 440,
    [303] = 569,
    [304] = 570,
    [305] = 571,
    [306] = 575,
    [307] = 534,
    [308] = 513,
    [309] = 576,
    [310] = 508,
    [311] = 536,
    [312] = 577,
    [313] = 449,
    [314] = 578,
    [315] = 413,
    [316] = 276,
    [317] = 412,
    [318] = 411,
    [319] = 423,
    [320] = 423,
    [321] = 424,
    [322] = 424,
    [323] = 493,
    [324] = 427,
    [325] = 491,
    [326] = 428,
    [327] = 380,
    [328] = 443,
    [329] = 445,
    [330] = 444,
    [331] = 579,
    [332] = 429,
    [333] = 434,
    [334] = 435,
    [335] = 432,
    [336] = 540,
    [337] = 444,
    [338] = 444,
    [339] = 443,
    [340] = 437,
    [341] = 549,
    [342] = 508,
    [343] = 521,
    [344] = 449,
    [345] = 448,
    [346] = 557,
    [347] = 412,
    [348] = 432,
    [349] = 411,
    [350] = 540,
    [351] = 493,
    [352] = 538,
    [353] = 413,
    [354] = 413,
    [355] = 432,
    [356] = 432,
    [357] = 432,
    [358] = 432,
    [359] = 412,
    [360] = 540,
    [361] = 413,
    [362] = 540,
    [363] = 413,
    [364] = 580,
    [365] = 540,
    [366] = 443,
    [367] = 540,
    [368] = 581,
    [369] = 380,
    [370] = 580,
    [371] = 380,
    [372] = 445,
    [373] = 413,
    [374] = 439,
    [375] = 389,
    [376] = 380,
    [377] = 439,
    [378] = 443,
    [379] = 413,
    [380] = 452,
    [381] = 493,
    [382] = 538,
    [383] = 493,
    [384] = 538,
    [385] = 413,
    [386] = 413,
    [387] = 380,
    [388] = 450,
    [389] = 452,
    [390] = 453,
    [391] = 491,
    [392] = 452,
    [393] = 493,
    [394] = 538,
    [395] = 493,
    [396] = 538,
    [397] = 413,
    [398] = 413,
    [399] = 493,
    [400] = 538,
    [401] = 493,
    [402] = 538,
    [403] = 413,
    [404] = 413,
    [405] = 538,
    [406] = 413,
    [407] = 380,
    [408] = 539,
    [409] = 540,
    [410] = 491,
    [411] = 540,
    [412] = 413,
    [413] = 540,
    [414] = 413,
    [415] = 413,
    [416] = 540,
    [417] = 380,
    [418] = 539,
    [419] = 540,
    [420] = 491,
    [421] = 540,
    [422] = 413,
    [423] = 540,
    [424] = 413,
    [425] = 413,
    [426] = 540,
    [427] = 276,
    [428] = 564,
    [429] = 453,
    [430] = 413,
    [431] = 581,
    [432] = 564,
    [433] = 493,
    [434] = 545,
    [435] = 540,
    [436] = 538,
    [437] = 493,
    [438] = 538,
    [439] = 413,
    [440] = 413,
    [441] = 508,
    [442] = 535,
    [443] = 508,
    [444] = 536,
    [445] = 508,
    [446] = 508,
    [447] = 569,
    [448] = 582,
    [449] = 493,
    [450] = 445,
    [451] = 446,
    [452] = 435,
    [453] = 437,
    [454] = 549,
    [455] = 448,
    [456] = 508,
    [457] = 450,
    [458] = 452,
    [459] = 539,
    [460] = 540,
    [461] = 491,
    [462] = 540,
    [463] = 413,
    [464] = 540,
    [465] = 413,
    [466] = 413,
    [467] = 540,
    [468] = 539,
    [469] = 540,
    [470] = 491,
    [471] = 540,
    [472] = 413,
    [473] = 540,
    [474] = 413,
    [475] = 413,
    [476] = 540,
    [477] = 413,
    [478] = 413,
    [479] = 493,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(13),
        [sym__type_declaration] = STATE(315),
        [sym_extern_alias_directive] = STATE(316),
        [sym_using_directive] = STATE(317),
        [sym_namespace_declaration] = STATE(318),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(319),
        [sym__class_modifiers] = STATE(320),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(321),
        [sym__struct_modifiers] = STATE(322),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(323),
        [sym_enum_modifier] = STATE(324),
        [sym__integral_type] = STATE(325),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(326),
        [sym__return_type] = STATE(327),
        [sym_parameter_list] = STATE(328),
        [sym_parameter] = STATE(329),
        [sym_parameter_modifier] = STATE(330),
        [sym__attributes] = STATE(331),
        [sym__attribute_section] = STATE(332),
        [sym_attribute_list] = STATE(333),
        [sym_attribute] = STATE(334),
        [sym_attribute_argument_list] = STATE(44),
        [sym__global_attributes] = STATE(335),
        [sym_field_declaration] = STATE(336),
        [sym_field_modifiers] = STATE(337),
        [sym__field_modifiers] = STATE(338),
        [sym_variable_declaration] = STATE(339),
        [sym__type] = STATE(340),
        [sym_generic_name] = STATE(69),
        [sym_variable_declarator] = STATE(341),
        [sym_equals_value_clause] = STATE(342),
        [sym__literal] = STATE(125),
        [sym_boolean_literal] = STATE(121),
        [sym_character_literal] = STATE(121),
        [sym__unicode_escape_sequence] = STATE(307),
        [sym__simple_escape_sequence] = STATE(307),
        [sym_integer_literal] = STATE(121),
        [sym_real_literal] = STATE(121),
        [sym_string_literal] = STATE(121),
        [sym__regular_string_literal] = STATE(126),
        [sym__regular_string_literal_character] = STATE(343),
        [sym__verbatim_string_literal] = STATE(126),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter_list] = STATE(344),
        [sym_type_parameter] = STATE(345),
        [sym_qualified_name] = STATE(346),
        [sym_alias_qualified_name] = STATE(271),
        [sym_name_equals] = STATE(283),
        [sym_static] = STATE(283),
        [aux_sym_compilation_unit_repeat1] = STATE(27),
        [aux_sym_compilation_unit_repeat2] = STATE(347),
        [aux_sym_compilation_unit_repeat3] = STATE(348),
        [aux_sym_compilation_unit_repeat4] = STATE(349),
        [aux_sym_class_declaration_repeat1] = STATE(350),
        [aux_sym_enum_declaration_repeat1] = STATE(351),
        [aux_sym_parameter_list_repeat1] = STATE(88),
        [aux_sym__attributes_repeat1] = STATE(31),
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [aux_sym_variable_declaration_repeat1] = STATE(190),
        [aux_sym__regular_string_literal_repeat1] = STATE(134),
        [aux_sym_type_parameter_list_repeat1] = STATE(99),
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
        [anon_sym_delegate] = ACTIONS(37),
        [sym_void_keyword] = ACTIONS(39),
        [anon_sym_LPAREN] = ACTIONS(41),
        [anon_sym_RPAREN] = ACTIONS(43),
        [anon_sym_ref] = ACTIONS(45),
        [anon_sym_out] = ACTIONS(45),
        [anon_sym_this] = ACTIONS(45),
        [anon_sym_LBRACK] = ACTIONS(47),
        [anon_sym_RBRACK] = ACTIONS(49),
        [anon_sym_assembly] = ACTIONS(51),
        [anon_sym_module] = ACTIONS(51),
        [anon_sym_readonly] = ACTIONS(53),
        [anon_sym_volatile] = ACTIONS(53),
        [anon_sym_EQ] = ACTIONS(55),
        [anon_sym_true] = ACTIONS(57),
        [anon_sym_false] = ACTIONS(57),
        [anon_sym_SQUOTE] = ACTIONS(59),
        [sym__hexadecimal_escape_sequence] = ACTIONS(61),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(63),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(63),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(65),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(65),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(65),
        [anon_sym_BSLASH0] = ACTIONS(65),
        [anon_sym_BSLASHa] = ACTIONS(65),
        [anon_sym_BSLASHb] = ACTIONS(65),
        [anon_sym_BSLASHf] = ACTIONS(65),
        [anon_sym_BSLASHn] = ACTIONS(65),
        [anon_sym_BSLASHr] = ACTIONS(65),
        [anon_sym_BSLASHt] = ACTIONS(65),
        [anon_sym_BSLASHv] = ACTIONS(65),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(67),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(69),
        [sym__integer_type_suffix] = ACTIONS(71),
        [sym_null_literal] = ACTIONS(73),
        [anon_sym_DOT] = ACTIONS(75),
        [sym__real_type_suffix] = ACTIONS(77),
        [sym__exponent_part] = ACTIONS(79),
        [anon_sym_DQUOTE] = ACTIONS(81),
        [anon_sym_AT_DQUOTE] = ACTIONS(83),
        [anon_sym_bool] = ACTIONS(85),
        [anon_sym_decimal] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_object] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_LT] = ACTIONS(87),
        [anon_sym_GT] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [sym_global] = ACTIONS(93),
        [sym_identifier_name] = ACTIONS(95),
        [sym_comment] = ACTIONS(97),
    },
    [1] = {
        [sym_compilation_unit] = STATE(13),
        [sym__type_declaration] = STATE(14),
        [sym_extern_alias_directive] = STATE(15),
        [sym_using_directive] = STATE(16),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [sym__global_attributes] = STATE(26),
        [aux_sym_compilation_unit_repeat1] = STATE(27),
        [aux_sym_compilation_unit_repeat2] = STATE(28),
        [aux_sym_compilation_unit_repeat3] = STATE(29),
        [aux_sym_compilation_unit_repeat4] = STATE(30),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(99),
        [anon_sym_extern] = ACTIONS(101),
        [anon_sym_using] = ACTIONS(103),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(97),
    },
    [2] = {
        [anon_sym_alias] = ACTIONS(123),
        [sym_comment] = ACTIONS(97),
    },
    [3] = {
        [sym_qualified_name] = STATE(282),
        [sym_alias_qualified_name] = STATE(271),
        [sym_name_equals] = STATE(283),
        [sym_static] = STATE(283),
        [anon_sym_static] = ACTIONS(125),
        [sym_global] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(129),
        [sym_comment] = ACTIONS(97),
    },
    [4] = {
        [sym_qualified_name] = STATE(270),
        [sym_alias_qualified_name] = STATE(271),
        [sym_global] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(131),
        [sym_comment] = ACTIONS(97),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(97),
    },
    [6] = {
        [sym__class_modifiers] = STATE(257),
        [sym__struct_modifiers] = STATE(258),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_unsafe] = ACTIONS(137),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(137),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_protected] = ACTIONS(137),
        [anon_sym_internal] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_struct] = ACTIONS(139),
        [anon_sym_delegate] = ACTIONS(141),
        [sym_comment] = ACTIONS(97),
    },
    [7] = {
        [sym__class_modifiers] = STATE(257),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_unsafe] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_public] = ACTIONS(111),
        [anon_sym_protected] = ACTIONS(111),
        [anon_sym_internal] = ACTIONS(111),
        [anon_sym_private] = ACTIONS(111),
        [sym_comment] = ACTIONS(97),
    },
    [8] = {
        [sym__class_modifiers] = STATE(257),
        [sym__struct_modifiers] = STATE(258),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_unsafe] = ACTIONS(137),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(137),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_protected] = ACTIONS(137),
        [anon_sym_internal] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_struct] = ACTIONS(139),
        [anon_sym_enum] = ACTIONS(143),
        [anon_sym_delegate] = ACTIONS(141),
        [sym_comment] = ACTIONS(97),
    },
    [9] = {
        [sym_identifier_name] = ACTIONS(145),
        [sym_comment] = ACTIONS(97),
    },
    [10] = {
        [sym_identifier_name] = ACTIONS(147),
        [sym_comment] = ACTIONS(97),
    },
    [11] = {
        [sym__return_type] = STATE(239),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [sym_void_keyword] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [12] = {
        [sym_attribute_list] = STATE(35),
        [sym_attribute] = STATE(36),
        [anon_sym_assembly] = ACTIONS(155),
        [anon_sym_module] = ACTIONS(155),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(97),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(159),
        [sym_comment] = ACTIONS(97),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_namespace] = ACTIONS(161),
        [anon_sym_RBRACE] = ACTIONS(161),
        [anon_sym_class] = ACTIONS(161),
        [anon_sym_unsafe] = ACTIONS(161),
        [anon_sym_abstract] = ACTIONS(161),
        [anon_sym_sealed] = ACTIONS(161),
        [anon_sym_static] = ACTIONS(161),
        [anon_sym_new] = ACTIONS(161),
        [anon_sym_public] = ACTIONS(161),
        [anon_sym_protected] = ACTIONS(161),
        [anon_sym_internal] = ACTIONS(161),
        [anon_sym_private] = ACTIONS(161),
        [anon_sym_struct] = ACTIONS(161),
        [anon_sym_enum] = ACTIONS(161),
        [anon_sym_delegate] = ACTIONS(161),
        [anon_sym_LBRACK] = ACTIONS(161),
        [sym_comment] = ACTIONS(97),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_extern] = ACTIONS(163),
        [anon_sym_using] = ACTIONS(163),
        [anon_sym_namespace] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(163),
        [anon_sym_unsafe] = ACTIONS(163),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(163),
        [anon_sym_public] = ACTIONS(163),
        [anon_sym_protected] = ACTIONS(163),
        [anon_sym_internal] = ACTIONS(163),
        [anon_sym_private] = ACTIONS(163),
        [anon_sym_struct] = ACTIONS(163),
        [anon_sym_enum] = ACTIONS(163),
        [anon_sym_delegate] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(163),
        [sym_comment] = ACTIONS(97),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_using] = ACTIONS(165),
        [anon_sym_namespace] = ACTIONS(165),
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
        [anon_sym_delegate] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(97),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(167),
        [anon_sym_namespace] = ACTIONS(169),
        [anon_sym_RBRACE] = ACTIONS(167),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_unsafe] = ACTIONS(169),
        [anon_sym_abstract] = ACTIONS(169),
        [anon_sym_sealed] = ACTIONS(169),
        [anon_sym_static] = ACTIONS(169),
        [anon_sym_new] = ACTIONS(169),
        [anon_sym_public] = ACTIONS(169),
        [anon_sym_protected] = ACTIONS(169),
        [anon_sym_internal] = ACTIONS(169),
        [anon_sym_private] = ACTIONS(169),
        [anon_sym_struct] = ACTIONS(169),
        [anon_sym_enum] = ACTIONS(169),
        [anon_sym_sbyte] = ACTIONS(169),
        [anon_sym_byte] = ACTIONS(169),
        [anon_sym_short] = ACTIONS(169),
        [anon_sym_ushort] = ACTIONS(169),
        [anon_sym_int] = ACTIONS(169),
        [anon_sym_uint] = ACTIONS(169),
        [anon_sym_long] = ACTIONS(169),
        [anon_sym_ulong] = ACTIONS(169),
        [anon_sym_char] = ACTIONS(169),
        [anon_sym_delegate] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(167),
        [anon_sym_readonly] = ACTIONS(169),
        [anon_sym_volatile] = ACTIONS(169),
        [anon_sym_bool] = ACTIONS(169),
        [anon_sym_decimal] = ACTIONS(169),
        [anon_sym_double] = ACTIONS(169),
        [anon_sym_float] = ACTIONS(169),
        [anon_sym_object] = ACTIONS(169),
        [anon_sym_string] = ACTIONS(169),
        [sym_identifier_name] = ACTIONS(171),
        [sym_comment] = ACTIONS(97),
    },
    [18] = {
        [anon_sym_class] = ACTIONS(173),
        [sym_comment] = ACTIONS(97),
    },
    [19] = {
        [anon_sym_class] = ACTIONS(175),
        [sym_comment] = ACTIONS(97),
    },
    [20] = {
        [anon_sym_struct] = ACTIONS(177),
        [sym_comment] = ACTIONS(97),
    },
    [21] = {
        [anon_sym_struct] = ACTIONS(179),
        [sym_comment] = ACTIONS(97),
    },
    [22] = {
        [anon_sym_enum] = ACTIONS(181),
        [sym_comment] = ACTIONS(97),
    },
    [23] = {
        [anon_sym_delegate] = ACTIONS(183),
        [sym_comment] = ACTIONS(97),
    },
    [24] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [anon_sym_class] = ACTIONS(173),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(177),
        [anon_sym_enum] = ACTIONS(181),
        [anon_sym_delegate] = ACTIONS(183),
        [sym_comment] = ACTIONS(97),
    },
    [25] = {
        [anon_sym_class] = ACTIONS(185),
        [anon_sym_unsafe] = ACTIONS(185),
        [anon_sym_abstract] = ACTIONS(185),
        [anon_sym_sealed] = ACTIONS(185),
        [anon_sym_static] = ACTIONS(185),
        [anon_sym_new] = ACTIONS(185),
        [anon_sym_public] = ACTIONS(185),
        [anon_sym_protected] = ACTIONS(185),
        [anon_sym_internal] = ACTIONS(185),
        [anon_sym_private] = ACTIONS(185),
        [anon_sym_struct] = ACTIONS(185),
        [anon_sym_enum] = ACTIONS(185),
        [anon_sym_sbyte] = ACTIONS(185),
        [anon_sym_byte] = ACTIONS(185),
        [anon_sym_short] = ACTIONS(185),
        [anon_sym_ushort] = ACTIONS(185),
        [anon_sym_int] = ACTIONS(185),
        [anon_sym_uint] = ACTIONS(185),
        [anon_sym_long] = ACTIONS(185),
        [anon_sym_ulong] = ACTIONS(185),
        [anon_sym_char] = ACTIONS(185),
        [anon_sym_delegate] = ACTIONS(185),
        [anon_sym_ref] = ACTIONS(185),
        [anon_sym_out] = ACTIONS(185),
        [anon_sym_this] = ACTIONS(185),
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_readonly] = ACTIONS(185),
        [anon_sym_volatile] = ACTIONS(185),
        [anon_sym_bool] = ACTIONS(185),
        [anon_sym_decimal] = ACTIONS(185),
        [anon_sym_double] = ACTIONS(185),
        [anon_sym_float] = ACTIONS(185),
        [anon_sym_object] = ACTIONS(185),
        [anon_sym_string] = ACTIONS(185),
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(97),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(191),
        [anon_sym_namespace] = ACTIONS(191),
        [anon_sym_class] = ACTIONS(191),
        [anon_sym_unsafe] = ACTIONS(191),
        [anon_sym_abstract] = ACTIONS(191),
        [anon_sym_sealed] = ACTIONS(191),
        [anon_sym_static] = ACTIONS(191),
        [anon_sym_new] = ACTIONS(191),
        [anon_sym_public] = ACTIONS(191),
        [anon_sym_protected] = ACTIONS(191),
        [anon_sym_internal] = ACTIONS(191),
        [anon_sym_private] = ACTIONS(191),
        [anon_sym_struct] = ACTIONS(191),
        [anon_sym_enum] = ACTIONS(191),
        [anon_sym_delegate] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(191),
        [sym_comment] = ACTIONS(97),
    },
    [27] = {
        [sym__type_declaration] = STATE(14),
        [sym_extern_alias_directive] = STATE(52),
        [sym_using_directive] = STATE(16),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [sym__global_attributes] = STATE(26),
        [aux_sym_compilation_unit_repeat2] = STATE(53),
        [aux_sym_compilation_unit_repeat3] = STATE(50),
        [aux_sym_compilation_unit_repeat4] = STATE(48),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_extern] = ACTIONS(101),
        [anon_sym_using] = ACTIONS(103),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(97),
    },
    [28] = {
        [sym__type_declaration] = STATE(14),
        [sym_using_directive] = STATE(49),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [sym__global_attributes] = STATE(26),
        [aux_sym_compilation_unit_repeat3] = STATE(50),
        [aux_sym_compilation_unit_repeat4] = STATE(48),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_using] = ACTIONS(103),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(97),
    },
    [29] = {
        [sym__type_declaration] = STATE(14),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [sym__global_attributes] = STATE(47),
        [aux_sym_compilation_unit_repeat4] = STATE(48),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(97),
    },
    [30] = {
        [sym__type_declaration] = STATE(46),
        [sym_namespace_declaration] = STATE(46),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(97),
    },
    [31] = {
        [sym__attribute_section] = STATE(33),
        [anon_sym_class] = ACTIONS(197),
        [anon_sym_unsafe] = ACTIONS(197),
        [anon_sym_abstract] = ACTIONS(197),
        [anon_sym_sealed] = ACTIONS(197),
        [anon_sym_static] = ACTIONS(197),
        [anon_sym_new] = ACTIONS(197),
        [anon_sym_public] = ACTIONS(197),
        [anon_sym_protected] = ACTIONS(197),
        [anon_sym_internal] = ACTIONS(197),
        [anon_sym_private] = ACTIONS(197),
        [anon_sym_struct] = ACTIONS(197),
        [anon_sym_enum] = ACTIONS(197),
        [anon_sym_sbyte] = ACTIONS(197),
        [anon_sym_byte] = ACTIONS(197),
        [anon_sym_short] = ACTIONS(197),
        [anon_sym_ushort] = ACTIONS(197),
        [anon_sym_int] = ACTIONS(197),
        [anon_sym_uint] = ACTIONS(197),
        [anon_sym_long] = ACTIONS(197),
        [anon_sym_ulong] = ACTIONS(197),
        [anon_sym_char] = ACTIONS(197),
        [anon_sym_delegate] = ACTIONS(197),
        [anon_sym_ref] = ACTIONS(197),
        [anon_sym_out] = ACTIONS(197),
        [anon_sym_this] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(197),
        [anon_sym_volatile] = ACTIONS(197),
        [anon_sym_bool] = ACTIONS(197),
        [anon_sym_decimal] = ACTIONS(197),
        [anon_sym_double] = ACTIONS(197),
        [anon_sym_float] = ACTIONS(197),
        [anon_sym_object] = ACTIONS(197),
        [anon_sym_string] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(199),
        [sym_comment] = ACTIONS(97),
    },
    [32] = {
        [sym_attribute_list] = STATE(35),
        [sym_attribute] = STATE(36),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(97),
    },
    [33] = {
        [anon_sym_class] = ACTIONS(203),
        [anon_sym_unsafe] = ACTIONS(203),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(203),
        [anon_sym_new] = ACTIONS(203),
        [anon_sym_public] = ACTIONS(203),
        [anon_sym_protected] = ACTIONS(203),
        [anon_sym_internal] = ACTIONS(203),
        [anon_sym_private] = ACTIONS(203),
        [anon_sym_struct] = ACTIONS(203),
        [anon_sym_enum] = ACTIONS(203),
        [anon_sym_sbyte] = ACTIONS(203),
        [anon_sym_byte] = ACTIONS(203),
        [anon_sym_short] = ACTIONS(203),
        [anon_sym_ushort] = ACTIONS(203),
        [anon_sym_int] = ACTIONS(203),
        [anon_sym_uint] = ACTIONS(203),
        [anon_sym_long] = ACTIONS(203),
        [anon_sym_ulong] = ACTIONS(203),
        [anon_sym_char] = ACTIONS(203),
        [anon_sym_delegate] = ACTIONS(203),
        [anon_sym_ref] = ACTIONS(203),
        [anon_sym_out] = ACTIONS(203),
        [anon_sym_this] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(205),
        [anon_sym_readonly] = ACTIONS(203),
        [anon_sym_volatile] = ACTIONS(203),
        [anon_sym_bool] = ACTIONS(203),
        [anon_sym_decimal] = ACTIONS(203),
        [anon_sym_double] = ACTIONS(203),
        [anon_sym_float] = ACTIONS(203),
        [anon_sym_object] = ACTIONS(203),
        [anon_sym_string] = ACTIONS(203),
        [sym_identifier_name] = ACTIONS(207),
        [sym_comment] = ACTIONS(97),
    },
    [34] = {
        [sym_attribute_argument_list] = STATE(44),
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_LPAREN] = ACTIONS(211),
        [anon_sym_RBRACK] = ACTIONS(209),
        [sym_comment] = ACTIONS(97),
    },
    [35] = {
        [anon_sym_RBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(97),
    },
    [36] = {
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [anon_sym_COMMA] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(97),
    },
    [37] = {
        [sym_attribute] = STATE(41),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(97),
    },
    [38] = {
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_RBRACK] = ACTIONS(221),
        [sym_comment] = ACTIONS(97),
    },
    [39] = {
        [sym_attribute] = STATE(40),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(97),
    },
    [40] = {
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_RBRACK] = ACTIONS(223),
        [sym_comment] = ACTIONS(97),
    },
    [41] = {
        [anon_sym_COMMA] = ACTIONS(225),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(97),
    },
    [42] = {
        [anon_sym_class] = ACTIONS(227),
        [anon_sym_unsafe] = ACTIONS(227),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(227),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_struct] = ACTIONS(227),
        [anon_sym_enum] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(227),
        [anon_sym_byte] = ACTIONS(227),
        [anon_sym_short] = ACTIONS(227),
        [anon_sym_ushort] = ACTIONS(227),
        [anon_sym_int] = ACTIONS(227),
        [anon_sym_uint] = ACTIONS(227),
        [anon_sym_long] = ACTIONS(227),
        [anon_sym_ulong] = ACTIONS(227),
        [anon_sym_char] = ACTIONS(227),
        [anon_sym_delegate] = ACTIONS(227),
        [anon_sym_ref] = ACTIONS(227),
        [anon_sym_out] = ACTIONS(227),
        [anon_sym_this] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(229),
        [anon_sym_readonly] = ACTIONS(227),
        [anon_sym_volatile] = ACTIONS(227),
        [anon_sym_bool] = ACTIONS(227),
        [anon_sym_decimal] = ACTIONS(227),
        [anon_sym_double] = ACTIONS(227),
        [anon_sym_float] = ACTIONS(227),
        [anon_sym_object] = ACTIONS(227),
        [anon_sym_string] = ACTIONS(227),
        [sym_identifier_name] = ACTIONS(231),
        [sym_comment] = ACTIONS(97),
    },
    [43] = {
        [anon_sym_RPAREN] = ACTIONS(233),
        [sym_comment] = ACTIONS(97),
    },
    [44] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(97),
    },
    [45] = {
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(97),
    },
    [46] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_namespace] = ACTIONS(239),
        [anon_sym_RBRACE] = ACTIONS(239),
        [anon_sym_class] = ACTIONS(239),
        [anon_sym_unsafe] = ACTIONS(239),
        [anon_sym_abstract] = ACTIONS(239),
        [anon_sym_sealed] = ACTIONS(239),
        [anon_sym_static] = ACTIONS(239),
        [anon_sym_new] = ACTIONS(239),
        [anon_sym_public] = ACTIONS(239),
        [anon_sym_protected] = ACTIONS(239),
        [anon_sym_internal] = ACTIONS(239),
        [anon_sym_private] = ACTIONS(239),
        [anon_sym_struct] = ACTIONS(239),
        [anon_sym_enum] = ACTIONS(239),
        [anon_sym_delegate] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(97),
    },
    [47] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_namespace] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_unsafe] = ACTIONS(241),
        [anon_sym_abstract] = ACTIONS(241),
        [anon_sym_sealed] = ACTIONS(241),
        [anon_sym_static] = ACTIONS(241),
        [anon_sym_new] = ACTIONS(241),
        [anon_sym_public] = ACTIONS(241),
        [anon_sym_protected] = ACTIONS(241),
        [anon_sym_internal] = ACTIONS(241),
        [anon_sym_private] = ACTIONS(241),
        [anon_sym_struct] = ACTIONS(241),
        [anon_sym_enum] = ACTIONS(241),
        [anon_sym_delegate] = ACTIONS(241),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(97),
    },
    [48] = {
        [sym__type_declaration] = STATE(46),
        [sym_namespace_declaration] = STATE(46),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(97),
    },
    [49] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_using] = ACTIONS(245),
        [anon_sym_namespace] = ACTIONS(245),
        [anon_sym_class] = ACTIONS(245),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(245),
        [anon_sym_sealed] = ACTIONS(245),
        [anon_sym_static] = ACTIONS(245),
        [anon_sym_new] = ACTIONS(245),
        [anon_sym_public] = ACTIONS(245),
        [anon_sym_protected] = ACTIONS(245),
        [anon_sym_internal] = ACTIONS(245),
        [anon_sym_private] = ACTIONS(245),
        [anon_sym_struct] = ACTIONS(245),
        [anon_sym_enum] = ACTIONS(245),
        [anon_sym_delegate] = ACTIONS(245),
        [anon_sym_LBRACK] = ACTIONS(245),
        [sym_comment] = ACTIONS(97),
    },
    [50] = {
        [sym__type_declaration] = STATE(14),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [sym__global_attributes] = STATE(47),
        [aux_sym_compilation_unit_repeat4] = STATE(51),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(97),
    },
    [51] = {
        [sym__type_declaration] = STATE(46),
        [sym_namespace_declaration] = STATE(46),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(97),
    },
    [52] = {
        [ts_builtin_sym_end] = ACTIONS(249),
        [anon_sym_extern] = ACTIONS(249),
        [anon_sym_using] = ACTIONS(249),
        [anon_sym_namespace] = ACTIONS(249),
        [anon_sym_class] = ACTIONS(249),
        [anon_sym_unsafe] = ACTIONS(249),
        [anon_sym_abstract] = ACTIONS(249),
        [anon_sym_sealed] = ACTIONS(249),
        [anon_sym_static] = ACTIONS(249),
        [anon_sym_new] = ACTIONS(249),
        [anon_sym_public] = ACTIONS(249),
        [anon_sym_protected] = ACTIONS(249),
        [anon_sym_internal] = ACTIONS(249),
        [anon_sym_private] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(249),
        [anon_sym_enum] = ACTIONS(249),
        [anon_sym_delegate] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(249),
        [sym_comment] = ACTIONS(97),
    },
    [53] = {
        [sym__type_declaration] = STATE(14),
        [sym_using_directive] = STATE(49),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [sym__global_attributes] = STATE(26),
        [aux_sym_compilation_unit_repeat3] = STATE(54),
        [aux_sym_compilation_unit_repeat4] = STATE(51),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_using] = ACTIONS(103),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(97),
    },
    [54] = {
        [sym__type_declaration] = STATE(14),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [sym__global_attributes] = STATE(47),
        [aux_sym_compilation_unit_repeat4] = STATE(55),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(97),
    },
    [55] = {
        [sym__type_declaration] = STATE(46),
        [sym_namespace_declaration] = STATE(46),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(251),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(97),
    },
    [56] = {
        [sym_identifier_name] = ACTIONS(253),
        [sym_comment] = ACTIONS(97),
    },
    [57] = {
        [sym_identifier_name] = ACTIONS(255),
        [sym_comment] = ACTIONS(97),
    },
    [58] = {
        [sym_identifier_name] = ACTIONS(257),
        [sym_comment] = ACTIONS(97),
    },
    [59] = {
        [sym__return_type] = STATE(213),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [sym_void_keyword] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [60] = {
        [anon_sym_class] = ACTIONS(259),
        [sym_comment] = ACTIONS(97),
    },
    [61] = {
        [anon_sym_struct] = ACTIONS(261),
        [sym_comment] = ACTIONS(97),
    },
    [62] = {
        [anon_sym_enum] = ACTIONS(263),
        [sym_comment] = ACTIONS(97),
    },
    [63] = {
        [anon_sym_delegate] = ACTIONS(265),
        [sym_comment] = ACTIONS(97),
    },
    [64] = {
        [sym__return_type] = STATE(68),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [sym_void_keyword] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_GT] = ACTIONS(267),
        [sym_identifier_name] = ACTIONS(269),
        [sym_comment] = ACTIONS(97),
    },
    [66] = {
        [sym_identifier_name] = ACTIONS(271),
        [sym_comment] = ACTIONS(97),
    },
    [67] = {
        [sym_type_parameter_list] = STATE(94),
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_LT] = ACTIONS(275),
        [anon_sym_GT] = ACTIONS(273),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(97),
    },
    [68] = {
        [sym_identifier_name] = ACTIONS(279),
        [sym_comment] = ACTIONS(97),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_GT] = ACTIONS(273),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(97),
    },
    [70] = {
        [sym_parameter_list] = STATE(72),
        [anon_sym_LPAREN] = ACTIONS(281),
        [sym_comment] = ACTIONS(97),
    },
    [71] = {
        [sym_parameter] = STATE(76),
        [sym_parameter_modifier] = STATE(77),
        [sym__attributes] = STATE(78),
        [sym__attribute_section] = STATE(25),
        [sym__type] = STATE(79),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_RPAREN] = ACTIONS(283),
        [anon_sym_ref] = ACTIONS(285),
        [anon_sym_out] = ACTIONS(285),
        [anon_sym_this] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [72] = {
        [anon_sym_SEMI] = ACTIONS(287),
        [sym_comment] = ACTIONS(97),
    },
    [73] = {
        [ts_builtin_sym_end] = ACTIONS(289),
        [anon_sym_namespace] = ACTIONS(291),
        [anon_sym_RBRACE] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(291),
        [anon_sym_unsafe] = ACTIONS(291),
        [anon_sym_abstract] = ACTIONS(291),
        [anon_sym_sealed] = ACTIONS(291),
        [anon_sym_static] = ACTIONS(291),
        [anon_sym_new] = ACTIONS(291),
        [anon_sym_public] = ACTIONS(291),
        [anon_sym_protected] = ACTIONS(291),
        [anon_sym_internal] = ACTIONS(291),
        [anon_sym_private] = ACTIONS(291),
        [anon_sym_struct] = ACTIONS(291),
        [anon_sym_enum] = ACTIONS(291),
        [anon_sym_sbyte] = ACTIONS(291),
        [anon_sym_byte] = ACTIONS(291),
        [anon_sym_short] = ACTIONS(291),
        [anon_sym_ushort] = ACTIONS(291),
        [anon_sym_int] = ACTIONS(291),
        [anon_sym_uint] = ACTIONS(291),
        [anon_sym_long] = ACTIONS(291),
        [anon_sym_ulong] = ACTIONS(291),
        [anon_sym_char] = ACTIONS(291),
        [anon_sym_delegate] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(289),
        [anon_sym_readonly] = ACTIONS(291),
        [anon_sym_volatile] = ACTIONS(291),
        [anon_sym_bool] = ACTIONS(291),
        [anon_sym_decimal] = ACTIONS(291),
        [anon_sym_double] = ACTIONS(291),
        [anon_sym_float] = ACTIONS(291),
        [anon_sym_object] = ACTIONS(291),
        [anon_sym_string] = ACTIONS(291),
        [sym_identifier_name] = ACTIONS(293),
        [sym_comment] = ACTIONS(97),
    },
    [74] = {
        [anon_sym_SEMI] = ACTIONS(295),
        [sym_comment] = ACTIONS(97),
    },
    [75] = {
        [anon_sym_sbyte] = ACTIONS(297),
        [anon_sym_byte] = ACTIONS(297),
        [anon_sym_short] = ACTIONS(297),
        [anon_sym_ushort] = ACTIONS(297),
        [anon_sym_int] = ACTIONS(297),
        [anon_sym_uint] = ACTIONS(297),
        [anon_sym_long] = ACTIONS(297),
        [anon_sym_ulong] = ACTIONS(297),
        [anon_sym_char] = ACTIONS(297),
        [anon_sym_bool] = ACTIONS(297),
        [anon_sym_decimal] = ACTIONS(297),
        [anon_sym_double] = ACTIONS(297),
        [anon_sym_float] = ACTIONS(297),
        [anon_sym_object] = ACTIONS(297),
        [anon_sym_string] = ACTIONS(297),
        [sym_identifier_name] = ACTIONS(299),
        [sym_comment] = ACTIONS(97),
    },
    [76] = {
        [aux_sym_parameter_list_repeat1] = STATE(88),
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_RPAREN] = ACTIONS(303),
        [sym_comment] = ACTIONS(97),
    },
    [77] = {
        [sym__type] = STATE(82),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [78] = {
        [sym_parameter_modifier] = STATE(81),
        [sym__type] = STATE(82),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_ref] = ACTIONS(285),
        [anon_sym_out] = ACTIONS(285),
        [anon_sym_this] = ACTIONS(285),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [79] = {
        [sym_identifier_name] = ACTIONS(305),
        [sym_comment] = ACTIONS(97),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_RPAREN] = ACTIONS(307),
        [sym_comment] = ACTIONS(97),
    },
    [81] = {
        [sym__type] = STATE(84),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [82] = {
        [sym_identifier_name] = ACTIONS(309),
        [sym_comment] = ACTIONS(97),
    },
    [83] = {
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_RPAREN] = ACTIONS(311),
        [sym_comment] = ACTIONS(97),
    },
    [84] = {
        [sym_identifier_name] = ACTIONS(313),
        [sym_comment] = ACTIONS(97),
    },
    [85] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(315),
        [sym_comment] = ACTIONS(97),
    },
    [86] = {
        [sym_parameter] = STATE(92),
        [sym_parameter_modifier] = STATE(77),
        [sym__attributes] = STATE(78),
        [sym__attribute_section] = STATE(25),
        [sym__type] = STATE(79),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_ref] = ACTIONS(285),
        [anon_sym_out] = ACTIONS(285),
        [anon_sym_this] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [87] = {
        [anon_sym_SEMI] = ACTIONS(317),
        [sym_comment] = ACTIONS(97),
    },
    [88] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_RPAREN] = ACTIONS(321),
        [sym_comment] = ACTIONS(97),
    },
    [89] = {
        [sym_parameter] = STATE(91),
        [sym_parameter_modifier] = STATE(77),
        [sym__attributes] = STATE(78),
        [sym__attribute_section] = STATE(25),
        [sym__type] = STATE(79),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_ref] = ACTIONS(285),
        [anon_sym_out] = ACTIONS(285),
        [anon_sym_this] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [90] = {
        [anon_sym_SEMI] = ACTIONS(323),
        [sym_comment] = ACTIONS(97),
    },
    [91] = {
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_RPAREN] = ACTIONS(325),
        [sym_comment] = ACTIONS(97),
    },
    [92] = {
        [anon_sym_COMMA] = ACTIONS(327),
        [anon_sym_RPAREN] = ACTIONS(327),
        [sym_comment] = ACTIONS(97),
    },
    [93] = {
        [sym__type] = STATE(95),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(96),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_GT] = ACTIONS(329),
        [sym_identifier_name] = ACTIONS(331),
        [sym_comment] = ACTIONS(97),
    },
    [95] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_GT] = ACTIONS(333),
        [sym_comment] = ACTIONS(97),
    },
    [96] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(99),
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_GT] = ACTIONS(337),
        [sym_comment] = ACTIONS(97),
    },
    [97] = {
        [sym__type] = STATE(95),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(103),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [98] = {
        [anon_sym_LBRACE] = ACTIONS(339),
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_GT] = ACTIONS(339),
        [sym_identifier_name] = ACTIONS(341),
        [sym_comment] = ACTIONS(97),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(343),
        [anon_sym_GT] = ACTIONS(345),
        [sym_comment] = ACTIONS(97),
    },
    [100] = {
        [sym__type] = STATE(95),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(102),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [101] = {
        [anon_sym_LBRACE] = ACTIONS(347),
        [anon_sym_COMMA] = ACTIONS(347),
        [anon_sym_GT] = ACTIONS(347),
        [sym_identifier_name] = ACTIONS(349),
        [sym_comment] = ACTIONS(97),
    },
    [102] = {
        [anon_sym_COMMA] = ACTIONS(351),
        [anon_sym_GT] = ACTIONS(351),
        [sym_comment] = ACTIONS(97),
    },
    [103] = {
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_GT] = ACTIONS(353),
        [sym_comment] = ACTIONS(97),
    },
    [104] = {
        [sym_identifier_name] = ACTIONS(355),
        [sym_comment] = ACTIONS(97),
    },
    [105] = {
        [anon_sym_LBRACE] = ACTIONS(357),
        [anon_sym_COLON] = ACTIONS(359),
        [sym_comment] = ACTIONS(97),
    },
    [106] = {
        [sym_enum_member_declaration] = STATE(162),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [107] = {
        [sym__integral_type] = STATE(109),
        [anon_sym_sbyte] = ACTIONS(363),
        [anon_sym_byte] = ACTIONS(363),
        [anon_sym_short] = ACTIONS(363),
        [anon_sym_ushort] = ACTIONS(363),
        [anon_sym_int] = ACTIONS(363),
        [anon_sym_uint] = ACTIONS(363),
        [anon_sym_long] = ACTIONS(363),
        [anon_sym_ulong] = ACTIONS(363),
        [anon_sym_char] = ACTIONS(363),
        [sym_comment] = ACTIONS(97),
    },
    [108] = {
        [anon_sym_LBRACE] = ACTIONS(365),
        [sym_comment] = ACTIONS(97),
    },
    [109] = {
        [anon_sym_LBRACE] = ACTIONS(367),
        [sym_comment] = ACTIONS(97),
    },
    [110] = {
        [sym_enum_member_declaration] = STATE(112),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [111] = {
        [sym_equals_value_clause] = STATE(161),
        [anon_sym_RBRACE] = ACTIONS(369),
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_EQ] = ACTIONS(371),
        [sym_comment] = ACTIONS(97),
    },
    [112] = {
        [aux_sym_enum_declaration_repeat1] = STATE(154),
        [anon_sym_RBRACE] = ACTIONS(373),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(97),
    },
    [113] = {
        [sym_identifier_name] = ACTIONS(377),
        [sym_comment] = ACTIONS(97),
    },
    [114] = {
        [sym_equals_value_clause] = STATE(116),
        [anon_sym_RBRACE] = ACTIONS(379),
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_EQ] = ACTIONS(371),
        [sym_comment] = ACTIONS(97),
    },
    [115] = {
        [sym__literal] = STATE(125),
        [sym_boolean_literal] = STATE(121),
        [sym_character_literal] = STATE(121),
        [sym_integer_literal] = STATE(121),
        [sym_real_literal] = STATE(121),
        [sym_string_literal] = STATE(121),
        [sym__regular_string_literal] = STATE(126),
        [sym__verbatim_string_literal] = STATE(126),
        [anon_sym_true] = ACTIONS(381),
        [anon_sym_false] = ACTIONS(381),
        [anon_sym_SQUOTE] = ACTIONS(383),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(385),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(387),
        [sym_null_literal] = ACTIONS(389),
        [anon_sym_DOT] = ACTIONS(391),
        [anon_sym_DQUOTE] = ACTIONS(393),
        [anon_sym_AT_DQUOTE] = ACTIONS(395),
        [sym_comment] = ACTIONS(97),
    },
    [116] = {
        [anon_sym_RBRACE] = ACTIONS(397),
        [anon_sym_COMMA] = ACTIONS(397),
        [sym_comment] = ACTIONS(97),
    },
    [117] = {
        [anon_sym_SEMI] = ACTIONS(399),
        [anon_sym_RBRACE] = ACTIONS(399),
        [anon_sym_COMMA] = ACTIONS(399),
        [sym_comment] = ACTIONS(97),
    },
    [118] = {
        [sym__unicode_escape_sequence] = STATE(148),
        [sym__simple_escape_sequence] = STATE(148),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(401),
        [sym__hexadecimal_escape_sequence] = ACTIONS(401),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(403),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(403),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(405),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(405),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(405),
        [anon_sym_BSLASH0] = ACTIONS(405),
        [anon_sym_BSLASHa] = ACTIONS(405),
        [anon_sym_BSLASHb] = ACTIONS(405),
        [anon_sym_BSLASHf] = ACTIONS(405),
        [anon_sym_BSLASHn] = ACTIONS(405),
        [anon_sym_BSLASHr] = ACTIONS(405),
        [anon_sym_BSLASHt] = ACTIONS(405),
        [anon_sym_BSLASHv] = ACTIONS(405),
        [sym_comment] = ACTIONS(97),
    },
    [119] = {
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_RBRACE] = ACTIONS(407),
        [anon_sym_COMMA] = ACTIONS(407),
        [sym__integer_type_suffix] = ACTIONS(409),
        [anon_sym_DOT] = ACTIONS(411),
        [sym__real_type_suffix] = ACTIONS(413),
        [sym__exponent_part] = ACTIONS(415),
        [sym_comment] = ACTIONS(97),
    },
    [120] = {
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_RBRACE] = ACTIONS(407),
        [anon_sym_COMMA] = ACTIONS(407),
        [sym__integer_type_suffix] = ACTIONS(409),
        [sym_comment] = ACTIONS(97),
    },
    [121] = {
        [anon_sym_SEMI] = ACTIONS(417),
        [anon_sym_RBRACE] = ACTIONS(417),
        [anon_sym_COMMA] = ACTIONS(417),
        [sym_comment] = ACTIONS(97),
    },
    [122] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(419),
        [sym_comment] = ACTIONS(97),
    },
    [123] = {
        [sym__unicode_escape_sequence] = STATE(129),
        [sym__simple_escape_sequence] = STATE(129),
        [sym__regular_string_literal_character] = STATE(133),
        [aux_sym__regular_string_literal_repeat1] = STATE(134),
        [sym__hexadecimal_escape_sequence] = ACTIONS(421),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(423),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(423),
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
        [anon_sym_DQUOTE] = ACTIONS(427),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(421),
        [sym_comment] = ACTIONS(97),
    },
    [124] = {
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(429),
        [sym_comment] = ACTIONS(431),
    },
    [125] = {
        [anon_sym_SEMI] = ACTIONS(433),
        [anon_sym_RBRACE] = ACTIONS(433),
        [anon_sym_COMMA] = ACTIONS(433),
        [sym_comment] = ACTIONS(97),
    },
    [126] = {
        [anon_sym_SEMI] = ACTIONS(435),
        [anon_sym_RBRACE] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(435),
        [sym_comment] = ACTIONS(97),
    },
    [127] = {
        [anon_sym_DQUOTE] = ACTIONS(437),
        [sym_comment] = ACTIONS(97),
    },
    [128] = {
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_RBRACE] = ACTIONS(439),
        [anon_sym_COMMA] = ACTIONS(439),
        [sym_comment] = ACTIONS(97),
    },
    [129] = {
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
        [sym_comment] = ACTIONS(97),
    },
    [130] = {
        [anon_sym_SQUOTE] = ACTIONS(445),
        [sym__hexadecimal_escape_sequence] = ACTIONS(447),
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
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(449),
        [sym_comment] = ACTIONS(97),
    },
    [131] = {
        [anon_sym_SQUOTE] = ACTIONS(451),
        [sym__hexadecimal_escape_sequence] = ACTIONS(453),
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
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(455),
        [sym_comment] = ACTIONS(97),
    },
    [132] = {
        [anon_sym_SEMI] = ACTIONS(457),
        [anon_sym_RBRACE] = ACTIONS(457),
        [anon_sym_COMMA] = ACTIONS(457),
        [sym_comment] = ACTIONS(97),
    },
    [133] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(459),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(461),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(461),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(461),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(461),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(461),
        [anon_sym_BSLASH0] = ACTIONS(461),
        [anon_sym_BSLASHa] = ACTIONS(461),
        [anon_sym_BSLASHb] = ACTIONS(461),
        [anon_sym_BSLASHf] = ACTIONS(461),
        [anon_sym_BSLASHn] = ACTIONS(461),
        [anon_sym_BSLASHr] = ACTIONS(461),
        [anon_sym_BSLASHt] = ACTIONS(461),
        [anon_sym_BSLASHv] = ACTIONS(461),
        [anon_sym_DQUOTE] = ACTIONS(461),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(459),
        [sym_comment] = ACTIONS(97),
    },
    [134] = {
        [sym__unicode_escape_sequence] = STATE(129),
        [sym__simple_escape_sequence] = STATE(129),
        [sym__regular_string_literal_character] = STATE(136),
        [sym__hexadecimal_escape_sequence] = ACTIONS(421),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(423),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(423),
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
        [anon_sym_DQUOTE] = ACTIONS(463),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(421),
        [sym_comment] = ACTIONS(97),
    },
    [135] = {
        [anon_sym_SEMI] = ACTIONS(465),
        [anon_sym_RBRACE] = ACTIONS(465),
        [anon_sym_COMMA] = ACTIONS(465),
        [sym_comment] = ACTIONS(97),
    },
    [136] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(467),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(469),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(469),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(469),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(469),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(469),
        [anon_sym_BSLASH0] = ACTIONS(469),
        [anon_sym_BSLASHa] = ACTIONS(469),
        [anon_sym_BSLASHb] = ACTIONS(469),
        [anon_sym_BSLASHf] = ACTIONS(469),
        [anon_sym_BSLASHn] = ACTIONS(469),
        [anon_sym_BSLASHr] = ACTIONS(469),
        [anon_sym_BSLASHt] = ACTIONS(469),
        [anon_sym_BSLASHv] = ACTIONS(469),
        [anon_sym_DQUOTE] = ACTIONS(469),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(467),
        [sym_comment] = ACTIONS(97),
    },
    [137] = {
        [anon_sym_SEMI] = ACTIONS(471),
        [anon_sym_RBRACE] = ACTIONS(471),
        [anon_sym_COMMA] = ACTIONS(471),
        [sym__real_type_suffix] = ACTIONS(473),
        [sym__exponent_part] = ACTIONS(475),
        [sym_comment] = ACTIONS(97),
    },
    [138] = {
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_RBRACE] = ACTIONS(477),
        [anon_sym_COMMA] = ACTIONS(477),
        [sym_comment] = ACTIONS(97),
    },
    [139] = {
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_RBRACE] = ACTIONS(477),
        [anon_sym_COMMA] = ACTIONS(477),
        [sym__real_type_suffix] = ACTIONS(479),
        [sym_comment] = ACTIONS(97),
    },
    [140] = {
        [anon_sym_SEMI] = ACTIONS(481),
        [anon_sym_RBRACE] = ACTIONS(481),
        [anon_sym_COMMA] = ACTIONS(481),
        [sym_comment] = ACTIONS(97),
    },
    [141] = {
        [anon_sym_SEMI] = ACTIONS(483),
        [anon_sym_RBRACE] = ACTIONS(483),
        [anon_sym_COMMA] = ACTIONS(483),
        [sym_comment] = ACTIONS(97),
    },
    [142] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(485),
        [sym_comment] = ACTIONS(97),
    },
    [143] = {
        [anon_sym_SEMI] = ACTIONS(471),
        [anon_sym_RBRACE] = ACTIONS(471),
        [anon_sym_COMMA] = ACTIONS(471),
        [sym_comment] = ACTIONS(97),
    },
    [144] = {
        [anon_sym_SEMI] = ACTIONS(471),
        [anon_sym_RBRACE] = ACTIONS(471),
        [anon_sym_COMMA] = ACTIONS(471),
        [sym__real_type_suffix] = ACTIONS(473),
        [sym_comment] = ACTIONS(97),
    },
    [145] = {
        [anon_sym_SEMI] = ACTIONS(477),
        [anon_sym_RBRACE] = ACTIONS(477),
        [anon_sym_COMMA] = ACTIONS(477),
        [sym__real_type_suffix] = ACTIONS(479),
        [sym__exponent_part] = ACTIONS(487),
        [sym_comment] = ACTIONS(97),
    },
    [146] = {
        [anon_sym_SEMI] = ACTIONS(481),
        [anon_sym_RBRACE] = ACTIONS(481),
        [anon_sym_COMMA] = ACTIONS(481),
        [sym__real_type_suffix] = ACTIONS(489),
        [sym_comment] = ACTIONS(97),
    },
    [147] = {
        [anon_sym_SEMI] = ACTIONS(491),
        [anon_sym_RBRACE] = ACTIONS(491),
        [anon_sym_COMMA] = ACTIONS(491),
        [sym_comment] = ACTIONS(97),
    },
    [148] = {
        [anon_sym_SQUOTE] = ACTIONS(493),
        [sym_comment] = ACTIONS(97),
    },
    [149] = {
        [anon_sym_SQUOTE] = ACTIONS(445),
        [sym_comment] = ACTIONS(97),
    },
    [150] = {
        [anon_sym_SQUOTE] = ACTIONS(451),
        [sym_comment] = ACTIONS(97),
    },
    [151] = {
        [anon_sym_SEMI] = ACTIONS(495),
        [anon_sym_RBRACE] = ACTIONS(495),
        [anon_sym_COMMA] = ACTIONS(495),
        [sym_comment] = ACTIONS(97),
    },
    [152] = {
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_SEMI] = ACTIONS(499),
        [anon_sym_namespace] = ACTIONS(501),
        [anon_sym_RBRACE] = ACTIONS(497),
        [anon_sym_class] = ACTIONS(501),
        [anon_sym_unsafe] = ACTIONS(501),
        [anon_sym_abstract] = ACTIONS(501),
        [anon_sym_sealed] = ACTIONS(501),
        [anon_sym_static] = ACTIONS(501),
        [anon_sym_new] = ACTIONS(501),
        [anon_sym_public] = ACTIONS(501),
        [anon_sym_protected] = ACTIONS(501),
        [anon_sym_internal] = ACTIONS(501),
        [anon_sym_private] = ACTIONS(501),
        [anon_sym_struct] = ACTIONS(501),
        [anon_sym_enum] = ACTIONS(501),
        [anon_sym_sbyte] = ACTIONS(501),
        [anon_sym_byte] = ACTIONS(501),
        [anon_sym_short] = ACTIONS(501),
        [anon_sym_ushort] = ACTIONS(501),
        [anon_sym_int] = ACTIONS(501),
        [anon_sym_uint] = ACTIONS(501),
        [anon_sym_long] = ACTIONS(501),
        [anon_sym_ulong] = ACTIONS(501),
        [anon_sym_char] = ACTIONS(501),
        [anon_sym_delegate] = ACTIONS(501),
        [anon_sym_LBRACK] = ACTIONS(497),
        [anon_sym_readonly] = ACTIONS(501),
        [anon_sym_volatile] = ACTIONS(501),
        [anon_sym_bool] = ACTIONS(501),
        [anon_sym_decimal] = ACTIONS(501),
        [anon_sym_double] = ACTIONS(501),
        [anon_sym_float] = ACTIONS(501),
        [anon_sym_object] = ACTIONS(501),
        [anon_sym_string] = ACTIONS(501),
        [sym_identifier_name] = ACTIONS(503),
        [sym_comment] = ACTIONS(97),
    },
    [153] = {
        [sym_enum_member_declaration] = STATE(159),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [154] = {
        [anon_sym_RBRACE] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(97),
    },
    [155] = {
        [ts_builtin_sym_end] = ACTIONS(509),
        [anon_sym_SEMI] = ACTIONS(511),
        [anon_sym_namespace] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(509),
        [anon_sym_class] = ACTIONS(513),
        [anon_sym_unsafe] = ACTIONS(513),
        [anon_sym_abstract] = ACTIONS(513),
        [anon_sym_sealed] = ACTIONS(513),
        [anon_sym_static] = ACTIONS(513),
        [anon_sym_new] = ACTIONS(513),
        [anon_sym_public] = ACTIONS(513),
        [anon_sym_protected] = ACTIONS(513),
        [anon_sym_internal] = ACTIONS(513),
        [anon_sym_private] = ACTIONS(513),
        [anon_sym_struct] = ACTIONS(513),
        [anon_sym_enum] = ACTIONS(513),
        [anon_sym_sbyte] = ACTIONS(513),
        [anon_sym_byte] = ACTIONS(513),
        [anon_sym_short] = ACTIONS(513),
        [anon_sym_ushort] = ACTIONS(513),
        [anon_sym_int] = ACTIONS(513),
        [anon_sym_uint] = ACTIONS(513),
        [anon_sym_long] = ACTIONS(513),
        [anon_sym_ulong] = ACTIONS(513),
        [anon_sym_char] = ACTIONS(513),
        [anon_sym_delegate] = ACTIONS(513),
        [anon_sym_LBRACK] = ACTIONS(509),
        [anon_sym_readonly] = ACTIONS(513),
        [anon_sym_volatile] = ACTIONS(513),
        [anon_sym_bool] = ACTIONS(513),
        [anon_sym_decimal] = ACTIONS(513),
        [anon_sym_double] = ACTIONS(513),
        [anon_sym_float] = ACTIONS(513),
        [anon_sym_object] = ACTIONS(513),
        [anon_sym_string] = ACTIONS(513),
        [sym_identifier_name] = ACTIONS(515),
        [sym_comment] = ACTIONS(97),
    },
    [156] = {
        [sym_enum_member_declaration] = STATE(157),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [157] = {
        [anon_sym_RBRACE] = ACTIONS(517),
        [anon_sym_COMMA] = ACTIONS(517),
        [sym_comment] = ACTIONS(97),
    },
    [158] = {
        [ts_builtin_sym_end] = ACTIONS(519),
        [anon_sym_namespace] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(519),
        [anon_sym_class] = ACTIONS(521),
        [anon_sym_unsafe] = ACTIONS(521),
        [anon_sym_abstract] = ACTIONS(521),
        [anon_sym_sealed] = ACTIONS(521),
        [anon_sym_static] = ACTIONS(521),
        [anon_sym_new] = ACTIONS(521),
        [anon_sym_public] = ACTIONS(521),
        [anon_sym_protected] = ACTIONS(521),
        [anon_sym_internal] = ACTIONS(521),
        [anon_sym_private] = ACTIONS(521),
        [anon_sym_struct] = ACTIONS(521),
        [anon_sym_enum] = ACTIONS(521),
        [anon_sym_sbyte] = ACTIONS(521),
        [anon_sym_byte] = ACTIONS(521),
        [anon_sym_short] = ACTIONS(521),
        [anon_sym_ushort] = ACTIONS(521),
        [anon_sym_int] = ACTIONS(521),
        [anon_sym_uint] = ACTIONS(521),
        [anon_sym_long] = ACTIONS(521),
        [anon_sym_ulong] = ACTIONS(521),
        [anon_sym_char] = ACTIONS(521),
        [anon_sym_delegate] = ACTIONS(521),
        [anon_sym_LBRACK] = ACTIONS(519),
        [anon_sym_readonly] = ACTIONS(521),
        [anon_sym_volatile] = ACTIONS(521),
        [anon_sym_bool] = ACTIONS(521),
        [anon_sym_decimal] = ACTIONS(521),
        [anon_sym_double] = ACTIONS(521),
        [anon_sym_float] = ACTIONS(521),
        [anon_sym_object] = ACTIONS(521),
        [anon_sym_string] = ACTIONS(521),
        [sym_identifier_name] = ACTIONS(523),
        [sym_comment] = ACTIONS(97),
    },
    [159] = {
        [anon_sym_RBRACE] = ACTIONS(525),
        [anon_sym_COMMA] = ACTIONS(525),
        [sym_comment] = ACTIONS(97),
    },
    [160] = {
        [ts_builtin_sym_end] = ACTIONS(509),
        [anon_sym_namespace] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(509),
        [anon_sym_class] = ACTIONS(513),
        [anon_sym_unsafe] = ACTIONS(513),
        [anon_sym_abstract] = ACTIONS(513),
        [anon_sym_sealed] = ACTIONS(513),
        [anon_sym_static] = ACTIONS(513),
        [anon_sym_new] = ACTIONS(513),
        [anon_sym_public] = ACTIONS(513),
        [anon_sym_protected] = ACTIONS(513),
        [anon_sym_internal] = ACTIONS(513),
        [anon_sym_private] = ACTIONS(513),
        [anon_sym_struct] = ACTIONS(513),
        [anon_sym_enum] = ACTIONS(513),
        [anon_sym_sbyte] = ACTIONS(513),
        [anon_sym_byte] = ACTIONS(513),
        [anon_sym_short] = ACTIONS(513),
        [anon_sym_ushort] = ACTIONS(513),
        [anon_sym_int] = ACTIONS(513),
        [anon_sym_uint] = ACTIONS(513),
        [anon_sym_long] = ACTIONS(513),
        [anon_sym_ulong] = ACTIONS(513),
        [anon_sym_char] = ACTIONS(513),
        [anon_sym_delegate] = ACTIONS(513),
        [anon_sym_LBRACK] = ACTIONS(509),
        [anon_sym_readonly] = ACTIONS(513),
        [anon_sym_volatile] = ACTIONS(513),
        [anon_sym_bool] = ACTIONS(513),
        [anon_sym_decimal] = ACTIONS(513),
        [anon_sym_double] = ACTIONS(513),
        [anon_sym_float] = ACTIONS(513),
        [anon_sym_object] = ACTIONS(513),
        [anon_sym_string] = ACTIONS(513),
        [sym_identifier_name] = ACTIONS(515),
        [sym_comment] = ACTIONS(97),
    },
    [161] = {
        [anon_sym_RBRACE] = ACTIONS(379),
        [anon_sym_COMMA] = ACTIONS(379),
        [sym_comment] = ACTIONS(97),
    },
    [162] = {
        [aux_sym_enum_declaration_repeat1] = STATE(164),
        [anon_sym_RBRACE] = ACTIONS(527),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(97),
    },
    [163] = {
        [ts_builtin_sym_end] = ACTIONS(529),
        [anon_sym_SEMI] = ACTIONS(531),
        [anon_sym_namespace] = ACTIONS(533),
        [anon_sym_RBRACE] = ACTIONS(529),
        [anon_sym_class] = ACTIONS(533),
        [anon_sym_unsafe] = ACTIONS(533),
        [anon_sym_abstract] = ACTIONS(533),
        [anon_sym_sealed] = ACTIONS(533),
        [anon_sym_static] = ACTIONS(533),
        [anon_sym_new] = ACTIONS(533),
        [anon_sym_public] = ACTIONS(533),
        [anon_sym_protected] = ACTIONS(533),
        [anon_sym_internal] = ACTIONS(533),
        [anon_sym_private] = ACTIONS(533),
        [anon_sym_struct] = ACTIONS(533),
        [anon_sym_enum] = ACTIONS(533),
        [anon_sym_sbyte] = ACTIONS(533),
        [anon_sym_byte] = ACTIONS(533),
        [anon_sym_short] = ACTIONS(533),
        [anon_sym_ushort] = ACTIONS(533),
        [anon_sym_int] = ACTIONS(533),
        [anon_sym_uint] = ACTIONS(533),
        [anon_sym_long] = ACTIONS(533),
        [anon_sym_ulong] = ACTIONS(533),
        [anon_sym_char] = ACTIONS(533),
        [anon_sym_delegate] = ACTIONS(533),
        [anon_sym_LBRACK] = ACTIONS(529),
        [anon_sym_readonly] = ACTIONS(533),
        [anon_sym_volatile] = ACTIONS(533),
        [anon_sym_bool] = ACTIONS(533),
        [anon_sym_decimal] = ACTIONS(533),
        [anon_sym_double] = ACTIONS(533),
        [anon_sym_float] = ACTIONS(533),
        [anon_sym_object] = ACTIONS(533),
        [anon_sym_string] = ACTIONS(533),
        [sym_identifier_name] = ACTIONS(535),
        [sym_comment] = ACTIONS(97),
    },
    [164] = {
        [anon_sym_RBRACE] = ACTIONS(537),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(97),
    },
    [165] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_SEMI] = ACTIONS(541),
        [anon_sym_namespace] = ACTIONS(543),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_class] = ACTIONS(543),
        [anon_sym_unsafe] = ACTIONS(543),
        [anon_sym_abstract] = ACTIONS(543),
        [anon_sym_sealed] = ACTIONS(543),
        [anon_sym_static] = ACTIONS(543),
        [anon_sym_new] = ACTIONS(543),
        [anon_sym_public] = ACTIONS(543),
        [anon_sym_protected] = ACTIONS(543),
        [anon_sym_internal] = ACTIONS(543),
        [anon_sym_private] = ACTIONS(543),
        [anon_sym_struct] = ACTIONS(543),
        [anon_sym_enum] = ACTIONS(543),
        [anon_sym_sbyte] = ACTIONS(543),
        [anon_sym_byte] = ACTIONS(543),
        [anon_sym_short] = ACTIONS(543),
        [anon_sym_ushort] = ACTIONS(543),
        [anon_sym_int] = ACTIONS(543),
        [anon_sym_uint] = ACTIONS(543),
        [anon_sym_long] = ACTIONS(543),
        [anon_sym_ulong] = ACTIONS(543),
        [anon_sym_char] = ACTIONS(543),
        [anon_sym_delegate] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(539),
        [anon_sym_readonly] = ACTIONS(543),
        [anon_sym_volatile] = ACTIONS(543),
        [anon_sym_bool] = ACTIONS(543),
        [anon_sym_decimal] = ACTIONS(543),
        [anon_sym_double] = ACTIONS(543),
        [anon_sym_float] = ACTIONS(543),
        [anon_sym_object] = ACTIONS(543),
        [anon_sym_string] = ACTIONS(543),
        [sym_identifier_name] = ACTIONS(545),
        [sym_comment] = ACTIONS(97),
    },
    [166] = {
        [ts_builtin_sym_end] = ACTIONS(497),
        [anon_sym_namespace] = ACTIONS(501),
        [anon_sym_RBRACE] = ACTIONS(497),
        [anon_sym_class] = ACTIONS(501),
        [anon_sym_unsafe] = ACTIONS(501),
        [anon_sym_abstract] = ACTIONS(501),
        [anon_sym_sealed] = ACTIONS(501),
        [anon_sym_static] = ACTIONS(501),
        [anon_sym_new] = ACTIONS(501),
        [anon_sym_public] = ACTIONS(501),
        [anon_sym_protected] = ACTIONS(501),
        [anon_sym_internal] = ACTIONS(501),
        [anon_sym_private] = ACTIONS(501),
        [anon_sym_struct] = ACTIONS(501),
        [anon_sym_enum] = ACTIONS(501),
        [anon_sym_sbyte] = ACTIONS(501),
        [anon_sym_byte] = ACTIONS(501),
        [anon_sym_short] = ACTIONS(501),
        [anon_sym_ushort] = ACTIONS(501),
        [anon_sym_int] = ACTIONS(501),
        [anon_sym_uint] = ACTIONS(501),
        [anon_sym_long] = ACTIONS(501),
        [anon_sym_ulong] = ACTIONS(501),
        [anon_sym_char] = ACTIONS(501),
        [anon_sym_delegate] = ACTIONS(501),
        [anon_sym_LBRACK] = ACTIONS(497),
        [anon_sym_readonly] = ACTIONS(501),
        [anon_sym_volatile] = ACTIONS(501),
        [anon_sym_bool] = ACTIONS(501),
        [anon_sym_decimal] = ACTIONS(501),
        [anon_sym_double] = ACTIONS(501),
        [anon_sym_float] = ACTIONS(501),
        [anon_sym_object] = ACTIONS(501),
        [anon_sym_string] = ACTIONS(501),
        [sym_identifier_name] = ACTIONS(503),
        [sym_comment] = ACTIONS(97),
    },
    [167] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_namespace] = ACTIONS(543),
        [anon_sym_RBRACE] = ACTIONS(539),
        [anon_sym_class] = ACTIONS(543),
        [anon_sym_unsafe] = ACTIONS(543),
        [anon_sym_abstract] = ACTIONS(543),
        [anon_sym_sealed] = ACTIONS(543),
        [anon_sym_static] = ACTIONS(543),
        [anon_sym_new] = ACTIONS(543),
        [anon_sym_public] = ACTIONS(543),
        [anon_sym_protected] = ACTIONS(543),
        [anon_sym_internal] = ACTIONS(543),
        [anon_sym_private] = ACTIONS(543),
        [anon_sym_struct] = ACTIONS(543),
        [anon_sym_enum] = ACTIONS(543),
        [anon_sym_sbyte] = ACTIONS(543),
        [anon_sym_byte] = ACTIONS(543),
        [anon_sym_short] = ACTIONS(543),
        [anon_sym_ushort] = ACTIONS(543),
        [anon_sym_int] = ACTIONS(543),
        [anon_sym_uint] = ACTIONS(543),
        [anon_sym_long] = ACTIONS(543),
        [anon_sym_ulong] = ACTIONS(543),
        [anon_sym_char] = ACTIONS(543),
        [anon_sym_delegate] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(539),
        [anon_sym_readonly] = ACTIONS(543),
        [anon_sym_volatile] = ACTIONS(543),
        [anon_sym_bool] = ACTIONS(543),
        [anon_sym_decimal] = ACTIONS(543),
        [anon_sym_double] = ACTIONS(543),
        [anon_sym_float] = ACTIONS(543),
        [anon_sym_object] = ACTIONS(543),
        [anon_sym_string] = ACTIONS(543),
        [sym_identifier_name] = ACTIONS(545),
        [sym_comment] = ACTIONS(97),
    },
    [168] = {
        [sym_identifier_name] = ACTIONS(547),
        [sym_comment] = ACTIONS(97),
    },
    [169] = {
        [sym_type_parameter_list] = STATE(171),
        [anon_sym_LBRACE] = ACTIONS(549),
        [anon_sym_LT] = ACTIONS(275),
        [sym_comment] = ACTIONS(97),
    },
    [170] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(202),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [171] = {
        [anon_sym_LBRACE] = ACTIONS(571),
        [sym_comment] = ACTIONS(97),
    },
    [172] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(184),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(573),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [173] = {
        [ts_builtin_sym_end] = ACTIONS(575),
        [anon_sym_namespace] = ACTIONS(577),
        [anon_sym_RBRACE] = ACTIONS(575),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_unsafe] = ACTIONS(577),
        [anon_sym_abstract] = ACTIONS(577),
        [anon_sym_sealed] = ACTIONS(577),
        [anon_sym_static] = ACTIONS(577),
        [anon_sym_new] = ACTIONS(577),
        [anon_sym_public] = ACTIONS(577),
        [anon_sym_protected] = ACTIONS(577),
        [anon_sym_internal] = ACTIONS(577),
        [anon_sym_private] = ACTIONS(577),
        [anon_sym_struct] = ACTIONS(577),
        [anon_sym_enum] = ACTIONS(577),
        [anon_sym_sbyte] = ACTIONS(577),
        [anon_sym_byte] = ACTIONS(577),
        [anon_sym_short] = ACTIONS(577),
        [anon_sym_ushort] = ACTIONS(577),
        [anon_sym_int] = ACTIONS(577),
        [anon_sym_uint] = ACTIONS(577),
        [anon_sym_long] = ACTIONS(577),
        [anon_sym_ulong] = ACTIONS(577),
        [anon_sym_char] = ACTIONS(577),
        [anon_sym_delegate] = ACTIONS(577),
        [anon_sym_LBRACK] = ACTIONS(575),
        [anon_sym_readonly] = ACTIONS(577),
        [anon_sym_volatile] = ACTIONS(577),
        [anon_sym_bool] = ACTIONS(577),
        [anon_sym_decimal] = ACTIONS(577),
        [anon_sym_double] = ACTIONS(577),
        [anon_sym_float] = ACTIONS(577),
        [anon_sym_object] = ACTIONS(577),
        [anon_sym_string] = ACTIONS(577),
        [sym_identifier_name] = ACTIONS(579),
        [sym_comment] = ACTIONS(97),
    },
    [174] = {
        [sym__class_modifiers] = STATE(257),
        [sym__struct_modifiers] = STATE(258),
        [sym__field_modifiers] = STATE(238),
        [anon_sym_class] = ACTIONS(581),
        [anon_sym_unsafe] = ACTIONS(583),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(583),
        [anon_sym_public] = ACTIONS(583),
        [anon_sym_protected] = ACTIONS(583),
        [anon_sym_internal] = ACTIONS(583),
        [anon_sym_private] = ACTIONS(583),
        [anon_sym_struct] = ACTIONS(585),
        [anon_sym_sbyte] = ACTIONS(587),
        [anon_sym_byte] = ACTIONS(587),
        [anon_sym_short] = ACTIONS(587),
        [anon_sym_ushort] = ACTIONS(587),
        [anon_sym_int] = ACTIONS(587),
        [anon_sym_uint] = ACTIONS(587),
        [anon_sym_long] = ACTIONS(587),
        [anon_sym_ulong] = ACTIONS(587),
        [anon_sym_char] = ACTIONS(587),
        [anon_sym_delegate] = ACTIONS(589),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(587),
        [anon_sym_decimal] = ACTIONS(587),
        [anon_sym_double] = ACTIONS(587),
        [anon_sym_float] = ACTIONS(587),
        [anon_sym_object] = ACTIONS(587),
        [anon_sym_string] = ACTIONS(587),
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(97),
    },
    [175] = {
        [sym__class_modifiers] = STATE(257),
        [sym__field_modifiers] = STATE(238),
        [anon_sym_class] = ACTIONS(581),
        [anon_sym_unsafe] = ACTIONS(559),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(559),
        [anon_sym_public] = ACTIONS(559),
        [anon_sym_protected] = ACTIONS(559),
        [anon_sym_internal] = ACTIONS(559),
        [anon_sym_private] = ACTIONS(559),
        [anon_sym_sbyte] = ACTIONS(587),
        [anon_sym_byte] = ACTIONS(587),
        [anon_sym_short] = ACTIONS(587),
        [anon_sym_ushort] = ACTIONS(587),
        [anon_sym_int] = ACTIONS(587),
        [anon_sym_uint] = ACTIONS(587),
        [anon_sym_long] = ACTIONS(587),
        [anon_sym_ulong] = ACTIONS(587),
        [anon_sym_char] = ACTIONS(587),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(587),
        [anon_sym_decimal] = ACTIONS(587),
        [anon_sym_double] = ACTIONS(587),
        [anon_sym_float] = ACTIONS(587),
        [anon_sym_object] = ACTIONS(587),
        [anon_sym_string] = ACTIONS(587),
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(97),
    },
    [176] = {
        [sym__class_modifiers] = STATE(257),
        [sym__struct_modifiers] = STATE(258),
        [sym__field_modifiers] = STATE(238),
        [anon_sym_class] = ACTIONS(581),
        [anon_sym_unsafe] = ACTIONS(583),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(583),
        [anon_sym_public] = ACTIONS(583),
        [anon_sym_protected] = ACTIONS(583),
        [anon_sym_internal] = ACTIONS(583),
        [anon_sym_private] = ACTIONS(583),
        [anon_sym_struct] = ACTIONS(585),
        [anon_sym_enum] = ACTIONS(593),
        [anon_sym_sbyte] = ACTIONS(587),
        [anon_sym_byte] = ACTIONS(587),
        [anon_sym_short] = ACTIONS(587),
        [anon_sym_ushort] = ACTIONS(587),
        [anon_sym_int] = ACTIONS(587),
        [anon_sym_uint] = ACTIONS(587),
        [anon_sym_long] = ACTIONS(587),
        [anon_sym_ulong] = ACTIONS(587),
        [anon_sym_char] = ACTIONS(587),
        [anon_sym_delegate] = ACTIONS(589),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(587),
        [anon_sym_decimal] = ACTIONS(587),
        [anon_sym_double] = ACTIONS(587),
        [anon_sym_float] = ACTIONS(587),
        [anon_sym_object] = ACTIONS(587),
        [anon_sym_string] = ACTIONS(587),
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(97),
    },
    [177] = {
        [sym__field_modifiers] = STATE(238),
        [anon_sym_unsafe] = ACTIONS(569),
        [anon_sym_static] = ACTIONS(569),
        [anon_sym_new] = ACTIONS(569),
        [anon_sym_public] = ACTIONS(569),
        [anon_sym_protected] = ACTIONS(569),
        [anon_sym_internal] = ACTIONS(569),
        [anon_sym_private] = ACTIONS(569),
        [anon_sym_sbyte] = ACTIONS(587),
        [anon_sym_byte] = ACTIONS(587),
        [anon_sym_short] = ACTIONS(587),
        [anon_sym_ushort] = ACTIONS(587),
        [anon_sym_int] = ACTIONS(587),
        [anon_sym_uint] = ACTIONS(587),
        [anon_sym_long] = ACTIONS(587),
        [anon_sym_ulong] = ACTIONS(587),
        [anon_sym_char] = ACTIONS(587),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(587),
        [anon_sym_decimal] = ACTIONS(587),
        [anon_sym_double] = ACTIONS(587),
        [anon_sym_float] = ACTIONS(587),
        [anon_sym_object] = ACTIONS(587),
        [anon_sym_string] = ACTIONS(587),
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(97),
    },
    [178] = {
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
        [anon_sym_delegate] = ACTIONS(597),
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
        [sym_comment] = ACTIONS(97),
    },
    [179] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_field_modifiers] = STATE(198),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(196),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [180] = {
        [sym_variable_declaration] = STATE(196),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [181] = {
        [anon_sym_sbyte] = ACTIONS(609),
        [anon_sym_byte] = ACTIONS(609),
        [anon_sym_short] = ACTIONS(609),
        [anon_sym_ushort] = ACTIONS(609),
        [anon_sym_int] = ACTIONS(609),
        [anon_sym_uint] = ACTIONS(609),
        [anon_sym_long] = ACTIONS(609),
        [anon_sym_ulong] = ACTIONS(609),
        [anon_sym_char] = ACTIONS(609),
        [anon_sym_bool] = ACTIONS(609),
        [anon_sym_decimal] = ACTIONS(609),
        [anon_sym_double] = ACTIONS(609),
        [anon_sym_float] = ACTIONS(609),
        [anon_sym_object] = ACTIONS(609),
        [anon_sym_string] = ACTIONS(609),
        [sym_identifier_name] = ACTIONS(611),
        [sym_comment] = ACTIONS(97),
    },
    [182] = {
        [anon_sym_SEMI] = ACTIONS(613),
        [sym_comment] = ACTIONS(97),
    },
    [183] = {
        [sym_variable_declarator] = STATE(188),
        [sym_identifier_name] = ACTIONS(615),
        [sym_comment] = ACTIONS(97),
    },
    [184] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(617),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [185] = {
        [ts_builtin_sym_end] = ACTIONS(619),
        [anon_sym_namespace] = ACTIONS(621),
        [anon_sym_RBRACE] = ACTIONS(619),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_unsafe] = ACTIONS(621),
        [anon_sym_abstract] = ACTIONS(621),
        [anon_sym_sealed] = ACTIONS(621),
        [anon_sym_static] = ACTIONS(621),
        [anon_sym_new] = ACTIONS(621),
        [anon_sym_public] = ACTIONS(621),
        [anon_sym_protected] = ACTIONS(621),
        [anon_sym_internal] = ACTIONS(621),
        [anon_sym_private] = ACTIONS(621),
        [anon_sym_struct] = ACTIONS(621),
        [anon_sym_enum] = ACTIONS(621),
        [anon_sym_sbyte] = ACTIONS(621),
        [anon_sym_byte] = ACTIONS(621),
        [anon_sym_short] = ACTIONS(621),
        [anon_sym_ushort] = ACTIONS(621),
        [anon_sym_int] = ACTIONS(621),
        [anon_sym_uint] = ACTIONS(621),
        [anon_sym_long] = ACTIONS(621),
        [anon_sym_ulong] = ACTIONS(621),
        [anon_sym_char] = ACTIONS(621),
        [anon_sym_delegate] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(619),
        [anon_sym_readonly] = ACTIONS(621),
        [anon_sym_volatile] = ACTIONS(621),
        [anon_sym_bool] = ACTIONS(621),
        [anon_sym_decimal] = ACTIONS(621),
        [anon_sym_double] = ACTIONS(621),
        [anon_sym_float] = ACTIONS(621),
        [anon_sym_object] = ACTIONS(621),
        [anon_sym_string] = ACTIONS(621),
        [sym_identifier_name] = ACTIONS(623),
        [sym_comment] = ACTIONS(97),
    },
    [186] = {
        [anon_sym_RBRACE] = ACTIONS(625),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_unsafe] = ACTIONS(627),
        [anon_sym_abstract] = ACTIONS(627),
        [anon_sym_sealed] = ACTIONS(627),
        [anon_sym_static] = ACTIONS(627),
        [anon_sym_new] = ACTIONS(627),
        [anon_sym_public] = ACTIONS(627),
        [anon_sym_protected] = ACTIONS(627),
        [anon_sym_internal] = ACTIONS(627),
        [anon_sym_private] = ACTIONS(627),
        [anon_sym_struct] = ACTIONS(627),
        [anon_sym_enum] = ACTIONS(627),
        [anon_sym_sbyte] = ACTIONS(627),
        [anon_sym_byte] = ACTIONS(627),
        [anon_sym_short] = ACTIONS(627),
        [anon_sym_ushort] = ACTIONS(627),
        [anon_sym_int] = ACTIONS(627),
        [anon_sym_uint] = ACTIONS(627),
        [anon_sym_long] = ACTIONS(627),
        [anon_sym_ulong] = ACTIONS(627),
        [anon_sym_char] = ACTIONS(627),
        [anon_sym_delegate] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(625),
        [anon_sym_readonly] = ACTIONS(627),
        [anon_sym_volatile] = ACTIONS(627),
        [anon_sym_bool] = ACTIONS(627),
        [anon_sym_decimal] = ACTIONS(627),
        [anon_sym_double] = ACTIONS(627),
        [anon_sym_float] = ACTIONS(627),
        [anon_sym_object] = ACTIONS(627),
        [anon_sym_string] = ACTIONS(627),
        [sym_identifier_name] = ACTIONS(629),
        [sym_comment] = ACTIONS(97),
    },
    [187] = {
        [sym_equals_value_clause] = STATE(194),
        [anon_sym_SEMI] = ACTIONS(631),
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_EQ] = ACTIONS(371),
        [sym_comment] = ACTIONS(97),
    },
    [188] = {
        [aux_sym_variable_declaration_repeat1] = STATE(190),
        [anon_sym_SEMI] = ACTIONS(633),
        [anon_sym_COMMA] = ACTIONS(635),
        [sym_comment] = ACTIONS(97),
    },
    [189] = {
        [sym_variable_declarator] = STATE(193),
        [sym_identifier_name] = ACTIONS(615),
        [sym_comment] = ACTIONS(97),
    },
    [190] = {
        [anon_sym_SEMI] = ACTIONS(637),
        [anon_sym_COMMA] = ACTIONS(639),
        [sym_comment] = ACTIONS(97),
    },
    [191] = {
        [sym_variable_declarator] = STATE(192),
        [sym_identifier_name] = ACTIONS(615),
        [sym_comment] = ACTIONS(97),
    },
    [192] = {
        [anon_sym_SEMI] = ACTIONS(641),
        [anon_sym_COMMA] = ACTIONS(641),
        [sym_comment] = ACTIONS(97),
    },
    [193] = {
        [anon_sym_SEMI] = ACTIONS(643),
        [anon_sym_COMMA] = ACTIONS(643),
        [sym_comment] = ACTIONS(97),
    },
    [194] = {
        [anon_sym_SEMI] = ACTIONS(645),
        [anon_sym_COMMA] = ACTIONS(645),
        [sym_comment] = ACTIONS(97),
    },
    [195] = {
        [anon_sym_RBRACE] = ACTIONS(647),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_unsafe] = ACTIONS(649),
        [anon_sym_abstract] = ACTIONS(649),
        [anon_sym_sealed] = ACTIONS(649),
        [anon_sym_static] = ACTIONS(649),
        [anon_sym_new] = ACTIONS(649),
        [anon_sym_public] = ACTIONS(649),
        [anon_sym_protected] = ACTIONS(649),
        [anon_sym_internal] = ACTIONS(649),
        [anon_sym_private] = ACTIONS(649),
        [anon_sym_struct] = ACTIONS(649),
        [anon_sym_enum] = ACTIONS(649),
        [anon_sym_sbyte] = ACTIONS(649),
        [anon_sym_byte] = ACTIONS(649),
        [anon_sym_short] = ACTIONS(649),
        [anon_sym_ushort] = ACTIONS(649),
        [anon_sym_int] = ACTIONS(649),
        [anon_sym_uint] = ACTIONS(649),
        [anon_sym_long] = ACTIONS(649),
        [anon_sym_ulong] = ACTIONS(649),
        [anon_sym_char] = ACTIONS(649),
        [anon_sym_delegate] = ACTIONS(649),
        [anon_sym_LBRACK] = ACTIONS(647),
        [anon_sym_readonly] = ACTIONS(649),
        [anon_sym_volatile] = ACTIONS(649),
        [anon_sym_bool] = ACTIONS(649),
        [anon_sym_decimal] = ACTIONS(649),
        [anon_sym_double] = ACTIONS(649),
        [anon_sym_float] = ACTIONS(649),
        [anon_sym_object] = ACTIONS(649),
        [anon_sym_string] = ACTIONS(649),
        [sym_identifier_name] = ACTIONS(651),
        [sym_comment] = ACTIONS(97),
    },
    [196] = {
        [anon_sym_SEMI] = ACTIONS(653),
        [sym_comment] = ACTIONS(97),
    },
    [197] = {
        [anon_sym_RBRACE] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(657),
        [anon_sym_unsafe] = ACTIONS(657),
        [anon_sym_abstract] = ACTIONS(657),
        [anon_sym_sealed] = ACTIONS(657),
        [anon_sym_static] = ACTIONS(657),
        [anon_sym_new] = ACTIONS(657),
        [anon_sym_public] = ACTIONS(657),
        [anon_sym_protected] = ACTIONS(657),
        [anon_sym_internal] = ACTIONS(657),
        [anon_sym_private] = ACTIONS(657),
        [anon_sym_struct] = ACTIONS(657),
        [anon_sym_enum] = ACTIONS(657),
        [anon_sym_sbyte] = ACTIONS(657),
        [anon_sym_byte] = ACTIONS(657),
        [anon_sym_short] = ACTIONS(657),
        [anon_sym_ushort] = ACTIONS(657),
        [anon_sym_int] = ACTIONS(657),
        [anon_sym_uint] = ACTIONS(657),
        [anon_sym_long] = ACTIONS(657),
        [anon_sym_ulong] = ACTIONS(657),
        [anon_sym_char] = ACTIONS(657),
        [anon_sym_delegate] = ACTIONS(657),
        [anon_sym_LBRACK] = ACTIONS(655),
        [anon_sym_readonly] = ACTIONS(657),
        [anon_sym_volatile] = ACTIONS(657),
        [anon_sym_bool] = ACTIONS(657),
        [anon_sym_decimal] = ACTIONS(657),
        [anon_sym_double] = ACTIONS(657),
        [anon_sym_float] = ACTIONS(657),
        [anon_sym_object] = ACTIONS(657),
        [anon_sym_string] = ACTIONS(657),
        [sym_identifier_name] = ACTIONS(659),
        [sym_comment] = ACTIONS(97),
    },
    [198] = {
        [sym_variable_declaration] = STATE(199),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [199] = {
        [anon_sym_SEMI] = ACTIONS(661),
        [sym_comment] = ACTIONS(97),
    },
    [200] = {
        [anon_sym_RBRACE] = ACTIONS(663),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_unsafe] = ACTIONS(665),
        [anon_sym_abstract] = ACTIONS(665),
        [anon_sym_sealed] = ACTIONS(665),
        [anon_sym_static] = ACTIONS(665),
        [anon_sym_new] = ACTIONS(665),
        [anon_sym_public] = ACTIONS(665),
        [anon_sym_protected] = ACTIONS(665),
        [anon_sym_internal] = ACTIONS(665),
        [anon_sym_private] = ACTIONS(665),
        [anon_sym_struct] = ACTIONS(665),
        [anon_sym_enum] = ACTIONS(665),
        [anon_sym_sbyte] = ACTIONS(665),
        [anon_sym_byte] = ACTIONS(665),
        [anon_sym_short] = ACTIONS(665),
        [anon_sym_ushort] = ACTIONS(665),
        [anon_sym_int] = ACTIONS(665),
        [anon_sym_uint] = ACTIONS(665),
        [anon_sym_long] = ACTIONS(665),
        [anon_sym_ulong] = ACTIONS(665),
        [anon_sym_char] = ACTIONS(665),
        [anon_sym_delegate] = ACTIONS(665),
        [anon_sym_LBRACK] = ACTIONS(663),
        [anon_sym_readonly] = ACTIONS(665),
        [anon_sym_volatile] = ACTIONS(665),
        [anon_sym_bool] = ACTIONS(665),
        [anon_sym_decimal] = ACTIONS(665),
        [anon_sym_double] = ACTIONS(665),
        [anon_sym_float] = ACTIONS(665),
        [anon_sym_object] = ACTIONS(665),
        [anon_sym_string] = ACTIONS(665),
        [sym_identifier_name] = ACTIONS(667),
        [sym_comment] = ACTIONS(97),
    },
    [201] = {
        [ts_builtin_sym_end] = ACTIONS(669),
        [anon_sym_namespace] = ACTIONS(671),
        [anon_sym_RBRACE] = ACTIONS(669),
        [anon_sym_class] = ACTIONS(671),
        [anon_sym_unsafe] = ACTIONS(671),
        [anon_sym_abstract] = ACTIONS(671),
        [anon_sym_sealed] = ACTIONS(671),
        [anon_sym_static] = ACTIONS(671),
        [anon_sym_new] = ACTIONS(671),
        [anon_sym_public] = ACTIONS(671),
        [anon_sym_protected] = ACTIONS(671),
        [anon_sym_internal] = ACTIONS(671),
        [anon_sym_private] = ACTIONS(671),
        [anon_sym_struct] = ACTIONS(671),
        [anon_sym_enum] = ACTIONS(671),
        [anon_sym_sbyte] = ACTIONS(671),
        [anon_sym_byte] = ACTIONS(671),
        [anon_sym_short] = ACTIONS(671),
        [anon_sym_ushort] = ACTIONS(671),
        [anon_sym_int] = ACTIONS(671),
        [anon_sym_uint] = ACTIONS(671),
        [anon_sym_long] = ACTIONS(671),
        [anon_sym_ulong] = ACTIONS(671),
        [anon_sym_char] = ACTIONS(671),
        [anon_sym_delegate] = ACTIONS(671),
        [anon_sym_LBRACK] = ACTIONS(669),
        [anon_sym_readonly] = ACTIONS(671),
        [anon_sym_volatile] = ACTIONS(671),
        [anon_sym_bool] = ACTIONS(671),
        [anon_sym_decimal] = ACTIONS(671),
        [anon_sym_double] = ACTIONS(671),
        [anon_sym_float] = ACTIONS(671),
        [anon_sym_object] = ACTIONS(671),
        [anon_sym_string] = ACTIONS(671),
        [sym_identifier_name] = ACTIONS(673),
        [sym_comment] = ACTIONS(97),
    },
    [202] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(573),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [203] = {
        [sym_identifier_name] = ACTIONS(675),
        [sym_comment] = ACTIONS(97),
    },
    [204] = {
        [sym_type_parameter_list] = STATE(206),
        [anon_sym_LBRACE] = ACTIONS(677),
        [anon_sym_LT] = ACTIONS(275),
        [sym_comment] = ACTIONS(97),
    },
    [205] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(212),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [206] = {
        [anon_sym_LBRACE] = ACTIONS(681),
        [sym_comment] = ACTIONS(97),
    },
    [207] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(209),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(683),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [208] = {
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
        [anon_sym_delegate] = ACTIONS(687),
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
        [sym_comment] = ACTIONS(97),
    },
    [209] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [210] = {
        [ts_builtin_sym_end] = ACTIONS(693),
        [anon_sym_namespace] = ACTIONS(695),
        [anon_sym_RBRACE] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(695),
        [anon_sym_unsafe] = ACTIONS(695),
        [anon_sym_abstract] = ACTIONS(695),
        [anon_sym_sealed] = ACTIONS(695),
        [anon_sym_static] = ACTIONS(695),
        [anon_sym_new] = ACTIONS(695),
        [anon_sym_public] = ACTIONS(695),
        [anon_sym_protected] = ACTIONS(695),
        [anon_sym_internal] = ACTIONS(695),
        [anon_sym_private] = ACTIONS(695),
        [anon_sym_struct] = ACTIONS(695),
        [anon_sym_enum] = ACTIONS(695),
        [anon_sym_sbyte] = ACTIONS(695),
        [anon_sym_byte] = ACTIONS(695),
        [anon_sym_short] = ACTIONS(695),
        [anon_sym_ushort] = ACTIONS(695),
        [anon_sym_int] = ACTIONS(695),
        [anon_sym_uint] = ACTIONS(695),
        [anon_sym_long] = ACTIONS(695),
        [anon_sym_ulong] = ACTIONS(695),
        [anon_sym_char] = ACTIONS(695),
        [anon_sym_delegate] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(693),
        [anon_sym_readonly] = ACTIONS(695),
        [anon_sym_volatile] = ACTIONS(695),
        [anon_sym_bool] = ACTIONS(695),
        [anon_sym_decimal] = ACTIONS(695),
        [anon_sym_double] = ACTIONS(695),
        [anon_sym_float] = ACTIONS(695),
        [anon_sym_object] = ACTIONS(695),
        [anon_sym_string] = ACTIONS(695),
        [sym_identifier_name] = ACTIONS(697),
        [sym_comment] = ACTIONS(97),
    },
    [211] = {
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
        [anon_sym_delegate] = ACTIONS(701),
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
        [sym_comment] = ACTIONS(97),
    },
    [212] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(683),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [213] = {
        [sym_identifier_name] = ACTIONS(705),
        [sym_comment] = ACTIONS(97),
    },
    [214] = {
        [sym_parameter_list] = STATE(215),
        [anon_sym_LPAREN] = ACTIONS(281),
        [sym_comment] = ACTIONS(97),
    },
    [215] = {
        [anon_sym_SEMI] = ACTIONS(707),
        [sym_comment] = ACTIONS(97),
    },
    [216] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_namespace] = ACTIONS(711),
        [anon_sym_RBRACE] = ACTIONS(709),
        [anon_sym_class] = ACTIONS(711),
        [anon_sym_unsafe] = ACTIONS(711),
        [anon_sym_abstract] = ACTIONS(711),
        [anon_sym_sealed] = ACTIONS(711),
        [anon_sym_static] = ACTIONS(711),
        [anon_sym_new] = ACTIONS(711),
        [anon_sym_public] = ACTIONS(711),
        [anon_sym_protected] = ACTIONS(711),
        [anon_sym_internal] = ACTIONS(711),
        [anon_sym_private] = ACTIONS(711),
        [anon_sym_struct] = ACTIONS(711),
        [anon_sym_enum] = ACTIONS(711),
        [anon_sym_sbyte] = ACTIONS(711),
        [anon_sym_byte] = ACTIONS(711),
        [anon_sym_short] = ACTIONS(711),
        [anon_sym_ushort] = ACTIONS(711),
        [anon_sym_int] = ACTIONS(711),
        [anon_sym_uint] = ACTIONS(711),
        [anon_sym_long] = ACTIONS(711),
        [anon_sym_ulong] = ACTIONS(711),
        [anon_sym_char] = ACTIONS(711),
        [anon_sym_delegate] = ACTIONS(711),
        [anon_sym_LBRACK] = ACTIONS(709),
        [anon_sym_readonly] = ACTIONS(711),
        [anon_sym_volatile] = ACTIONS(711),
        [anon_sym_bool] = ACTIONS(711),
        [anon_sym_decimal] = ACTIONS(711),
        [anon_sym_double] = ACTIONS(711),
        [anon_sym_float] = ACTIONS(711),
        [anon_sym_object] = ACTIONS(711),
        [anon_sym_string] = ACTIONS(711),
        [sym_identifier_name] = ACTIONS(713),
        [sym_comment] = ACTIONS(97),
    },
    [217] = {
        [anon_sym_LBRACE] = ACTIONS(715),
        [anon_sym_COLON] = ACTIONS(717),
        [sym_comment] = ACTIONS(97),
    },
    [218] = {
        [sym_enum_member_declaration] = STATE(224),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [219] = {
        [sym__integral_type] = STATE(220),
        [anon_sym_sbyte] = ACTIONS(363),
        [anon_sym_byte] = ACTIONS(363),
        [anon_sym_short] = ACTIONS(363),
        [anon_sym_ushort] = ACTIONS(363),
        [anon_sym_int] = ACTIONS(363),
        [anon_sym_uint] = ACTIONS(363),
        [anon_sym_long] = ACTIONS(363),
        [anon_sym_ulong] = ACTIONS(363),
        [anon_sym_char] = ACTIONS(363),
        [sym_comment] = ACTIONS(97),
    },
    [220] = {
        [anon_sym_LBRACE] = ACTIONS(719),
        [sym_comment] = ACTIONS(97),
    },
    [221] = {
        [sym_enum_member_declaration] = STATE(222),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [222] = {
        [aux_sym_enum_declaration_repeat1] = STATE(223),
        [anon_sym_RBRACE] = ACTIONS(537),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(97),
    },
    [223] = {
        [anon_sym_RBRACE] = ACTIONS(373),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(97),
    },
    [224] = {
        [aux_sym_enum_declaration_repeat1] = STATE(226),
        [anon_sym_RBRACE] = ACTIONS(721),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(97),
    },
    [225] = {
        [ts_builtin_sym_end] = ACTIONS(723),
        [anon_sym_SEMI] = ACTIONS(725),
        [anon_sym_namespace] = ACTIONS(727),
        [anon_sym_RBRACE] = ACTIONS(723),
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
        [anon_sym_sbyte] = ACTIONS(727),
        [anon_sym_byte] = ACTIONS(727),
        [anon_sym_short] = ACTIONS(727),
        [anon_sym_ushort] = ACTIONS(727),
        [anon_sym_int] = ACTIONS(727),
        [anon_sym_uint] = ACTIONS(727),
        [anon_sym_long] = ACTIONS(727),
        [anon_sym_ulong] = ACTIONS(727),
        [anon_sym_char] = ACTIONS(727),
        [anon_sym_delegate] = ACTIONS(727),
        [anon_sym_LBRACK] = ACTIONS(723),
        [anon_sym_readonly] = ACTIONS(727),
        [anon_sym_volatile] = ACTIONS(727),
        [anon_sym_bool] = ACTIONS(727),
        [anon_sym_decimal] = ACTIONS(727),
        [anon_sym_double] = ACTIONS(727),
        [anon_sym_float] = ACTIONS(727),
        [anon_sym_object] = ACTIONS(727),
        [anon_sym_string] = ACTIONS(727),
        [sym_identifier_name] = ACTIONS(729),
        [sym_comment] = ACTIONS(97),
    },
    [226] = {
        [anon_sym_RBRACE] = ACTIONS(527),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(97),
    },
    [227] = {
        [ts_builtin_sym_end] = ACTIONS(529),
        [anon_sym_namespace] = ACTIONS(533),
        [anon_sym_RBRACE] = ACTIONS(529),
        [anon_sym_class] = ACTIONS(533),
        [anon_sym_unsafe] = ACTIONS(533),
        [anon_sym_abstract] = ACTIONS(533),
        [anon_sym_sealed] = ACTIONS(533),
        [anon_sym_static] = ACTIONS(533),
        [anon_sym_new] = ACTIONS(533),
        [anon_sym_public] = ACTIONS(533),
        [anon_sym_protected] = ACTIONS(533),
        [anon_sym_internal] = ACTIONS(533),
        [anon_sym_private] = ACTIONS(533),
        [anon_sym_struct] = ACTIONS(533),
        [anon_sym_enum] = ACTIONS(533),
        [anon_sym_sbyte] = ACTIONS(533),
        [anon_sym_byte] = ACTIONS(533),
        [anon_sym_short] = ACTIONS(533),
        [anon_sym_ushort] = ACTIONS(533),
        [anon_sym_int] = ACTIONS(533),
        [anon_sym_uint] = ACTIONS(533),
        [anon_sym_long] = ACTIONS(533),
        [anon_sym_ulong] = ACTIONS(533),
        [anon_sym_char] = ACTIONS(533),
        [anon_sym_delegate] = ACTIONS(533),
        [anon_sym_LBRACK] = ACTIONS(529),
        [anon_sym_readonly] = ACTIONS(533),
        [anon_sym_volatile] = ACTIONS(533),
        [anon_sym_bool] = ACTIONS(533),
        [anon_sym_decimal] = ACTIONS(533),
        [anon_sym_double] = ACTIONS(533),
        [anon_sym_float] = ACTIONS(533),
        [anon_sym_object] = ACTIONS(533),
        [anon_sym_string] = ACTIONS(533),
        [sym_identifier_name] = ACTIONS(535),
        [sym_comment] = ACTIONS(97),
    },
    [228] = {
        [sym_type_parameter_list] = STATE(230),
        [anon_sym_LBRACE] = ACTIONS(731),
        [anon_sym_LT] = ACTIONS(275),
        [sym_comment] = ACTIONS(97),
    },
    [229] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(232),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(733),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [230] = {
        [anon_sym_LBRACE] = ACTIONS(549),
        [sym_comment] = ACTIONS(97),
    },
    [231] = {
        [ts_builtin_sym_end] = ACTIONS(735),
        [anon_sym_namespace] = ACTIONS(737),
        [anon_sym_RBRACE] = ACTIONS(735),
        [anon_sym_class] = ACTIONS(737),
        [anon_sym_unsafe] = ACTIONS(737),
        [anon_sym_abstract] = ACTIONS(737),
        [anon_sym_sealed] = ACTIONS(737),
        [anon_sym_static] = ACTIONS(737),
        [anon_sym_new] = ACTIONS(737),
        [anon_sym_public] = ACTIONS(737),
        [anon_sym_protected] = ACTIONS(737),
        [anon_sym_internal] = ACTIONS(737),
        [anon_sym_private] = ACTIONS(737),
        [anon_sym_struct] = ACTIONS(737),
        [anon_sym_enum] = ACTIONS(737),
        [anon_sym_sbyte] = ACTIONS(737),
        [anon_sym_byte] = ACTIONS(737),
        [anon_sym_short] = ACTIONS(737),
        [anon_sym_ushort] = ACTIONS(737),
        [anon_sym_int] = ACTIONS(737),
        [anon_sym_uint] = ACTIONS(737),
        [anon_sym_long] = ACTIONS(737),
        [anon_sym_ulong] = ACTIONS(737),
        [anon_sym_char] = ACTIONS(737),
        [anon_sym_delegate] = ACTIONS(737),
        [anon_sym_LBRACK] = ACTIONS(735),
        [anon_sym_readonly] = ACTIONS(737),
        [anon_sym_volatile] = ACTIONS(737),
        [anon_sym_bool] = ACTIONS(737),
        [anon_sym_decimal] = ACTIONS(737),
        [anon_sym_double] = ACTIONS(737),
        [anon_sym_float] = ACTIONS(737),
        [anon_sym_object] = ACTIONS(737),
        [anon_sym_string] = ACTIONS(737),
        [sym_identifier_name] = ACTIONS(739),
        [sym_comment] = ACTIONS(97),
    },
    [232] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [233] = {
        [sym_type_parameter_list] = STATE(235),
        [anon_sym_LBRACE] = ACTIONS(741),
        [anon_sym_LT] = ACTIONS(275),
        [sym_comment] = ACTIONS(97),
    },
    [234] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(237),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(743),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [235] = {
        [anon_sym_LBRACE] = ACTIONS(677),
        [sym_comment] = ACTIONS(97),
    },
    [236] = {
        [ts_builtin_sym_end] = ACTIONS(745),
        [anon_sym_namespace] = ACTIONS(747),
        [anon_sym_RBRACE] = ACTIONS(745),
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
        [anon_sym_sbyte] = ACTIONS(747),
        [anon_sym_byte] = ACTIONS(747),
        [anon_sym_short] = ACTIONS(747),
        [anon_sym_ushort] = ACTIONS(747),
        [anon_sym_int] = ACTIONS(747),
        [anon_sym_uint] = ACTIONS(747),
        [anon_sym_long] = ACTIONS(747),
        [anon_sym_ulong] = ACTIONS(747),
        [anon_sym_char] = ACTIONS(747),
        [anon_sym_delegate] = ACTIONS(747),
        [anon_sym_LBRACK] = ACTIONS(745),
        [anon_sym_readonly] = ACTIONS(747),
        [anon_sym_volatile] = ACTIONS(747),
        [anon_sym_bool] = ACTIONS(747),
        [anon_sym_decimal] = ACTIONS(747),
        [anon_sym_double] = ACTIONS(747),
        [anon_sym_float] = ACTIONS(747),
        [anon_sym_object] = ACTIONS(747),
        [anon_sym_string] = ACTIONS(747),
        [sym_identifier_name] = ACTIONS(749),
        [sym_comment] = ACTIONS(97),
    },
    [237] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [238] = {
        [anon_sym_sbyte] = ACTIONS(751),
        [anon_sym_byte] = ACTIONS(751),
        [anon_sym_short] = ACTIONS(751),
        [anon_sym_ushort] = ACTIONS(751),
        [anon_sym_int] = ACTIONS(751),
        [anon_sym_uint] = ACTIONS(751),
        [anon_sym_long] = ACTIONS(751),
        [anon_sym_ulong] = ACTIONS(751),
        [anon_sym_char] = ACTIONS(751),
        [anon_sym_bool] = ACTIONS(751),
        [anon_sym_decimal] = ACTIONS(751),
        [anon_sym_double] = ACTIONS(751),
        [anon_sym_float] = ACTIONS(751),
        [anon_sym_object] = ACTIONS(751),
        [anon_sym_string] = ACTIONS(751),
        [sym_identifier_name] = ACTIONS(753),
        [sym_comment] = ACTIONS(97),
    },
    [239] = {
        [sym_identifier_name] = ACTIONS(755),
        [sym_comment] = ACTIONS(97),
    },
    [240] = {
        [sym_parameter_list] = STATE(241),
        [anon_sym_LPAREN] = ACTIONS(281),
        [sym_comment] = ACTIONS(97),
    },
    [241] = {
        [anon_sym_SEMI] = ACTIONS(757),
        [sym_comment] = ACTIONS(97),
    },
    [242] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_namespace] = ACTIONS(761),
        [anon_sym_RBRACE] = ACTIONS(759),
        [anon_sym_class] = ACTIONS(761),
        [anon_sym_unsafe] = ACTIONS(761),
        [anon_sym_abstract] = ACTIONS(761),
        [anon_sym_sealed] = ACTIONS(761),
        [anon_sym_static] = ACTIONS(761),
        [anon_sym_new] = ACTIONS(761),
        [anon_sym_public] = ACTIONS(761),
        [anon_sym_protected] = ACTIONS(761),
        [anon_sym_internal] = ACTIONS(761),
        [anon_sym_private] = ACTIONS(761),
        [anon_sym_struct] = ACTIONS(761),
        [anon_sym_enum] = ACTIONS(761),
        [anon_sym_sbyte] = ACTIONS(761),
        [anon_sym_byte] = ACTIONS(761),
        [anon_sym_short] = ACTIONS(761),
        [anon_sym_ushort] = ACTIONS(761),
        [anon_sym_int] = ACTIONS(761),
        [anon_sym_uint] = ACTIONS(761),
        [anon_sym_long] = ACTIONS(761),
        [anon_sym_ulong] = ACTIONS(761),
        [anon_sym_char] = ACTIONS(761),
        [anon_sym_delegate] = ACTIONS(761),
        [anon_sym_LBRACK] = ACTIONS(759),
        [anon_sym_readonly] = ACTIONS(761),
        [anon_sym_volatile] = ACTIONS(761),
        [anon_sym_bool] = ACTIONS(761),
        [anon_sym_decimal] = ACTIONS(761),
        [anon_sym_double] = ACTIONS(761),
        [anon_sym_float] = ACTIONS(761),
        [anon_sym_object] = ACTIONS(761),
        [anon_sym_string] = ACTIONS(761),
        [sym_identifier_name] = ACTIONS(763),
        [sym_comment] = ACTIONS(97),
    },
    [243] = {
        [anon_sym_LBRACE] = ACTIONS(765),
        [anon_sym_COLON] = ACTIONS(767),
        [sym_comment] = ACTIONS(97),
    },
    [244] = {
        [sym_enum_member_declaration] = STATE(247),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [245] = {
        [sym__integral_type] = STATE(246),
        [anon_sym_sbyte] = ACTIONS(363),
        [anon_sym_byte] = ACTIONS(363),
        [anon_sym_short] = ACTIONS(363),
        [anon_sym_ushort] = ACTIONS(363),
        [anon_sym_int] = ACTIONS(363),
        [anon_sym_uint] = ACTIONS(363),
        [anon_sym_long] = ACTIONS(363),
        [anon_sym_ulong] = ACTIONS(363),
        [anon_sym_char] = ACTIONS(363),
        [sym_comment] = ACTIONS(97),
    },
    [246] = {
        [anon_sym_LBRACE] = ACTIONS(357),
        [sym_comment] = ACTIONS(97),
    },
    [247] = {
        [aux_sym_enum_declaration_repeat1] = STATE(249),
        [anon_sym_RBRACE] = ACTIONS(769),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(97),
    },
    [248] = {
        [ts_builtin_sym_end] = ACTIONS(771),
        [anon_sym_SEMI] = ACTIONS(773),
        [anon_sym_namespace] = ACTIONS(775),
        [anon_sym_RBRACE] = ACTIONS(771),
        [anon_sym_class] = ACTIONS(775),
        [anon_sym_unsafe] = ACTIONS(775),
        [anon_sym_abstract] = ACTIONS(775),
        [anon_sym_sealed] = ACTIONS(775),
        [anon_sym_static] = ACTIONS(775),
        [anon_sym_new] = ACTIONS(775),
        [anon_sym_public] = ACTIONS(775),
        [anon_sym_protected] = ACTIONS(775),
        [anon_sym_internal] = ACTIONS(775),
        [anon_sym_private] = ACTIONS(775),
        [anon_sym_struct] = ACTIONS(775),
        [anon_sym_enum] = ACTIONS(775),
        [anon_sym_sbyte] = ACTIONS(775),
        [anon_sym_byte] = ACTIONS(775),
        [anon_sym_short] = ACTIONS(775),
        [anon_sym_ushort] = ACTIONS(775),
        [anon_sym_int] = ACTIONS(775),
        [anon_sym_uint] = ACTIONS(775),
        [anon_sym_long] = ACTIONS(775),
        [anon_sym_ulong] = ACTIONS(775),
        [anon_sym_char] = ACTIONS(775),
        [anon_sym_delegate] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(771),
        [anon_sym_readonly] = ACTIONS(775),
        [anon_sym_volatile] = ACTIONS(775),
        [anon_sym_bool] = ACTIONS(775),
        [anon_sym_decimal] = ACTIONS(775),
        [anon_sym_double] = ACTIONS(775),
        [anon_sym_float] = ACTIONS(775),
        [anon_sym_object] = ACTIONS(775),
        [anon_sym_string] = ACTIONS(775),
        [sym_identifier_name] = ACTIONS(777),
        [sym_comment] = ACTIONS(97),
    },
    [249] = {
        [anon_sym_RBRACE] = ACTIONS(721),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(97),
    },
    [250] = {
        [ts_builtin_sym_end] = ACTIONS(723),
        [anon_sym_namespace] = ACTIONS(727),
        [anon_sym_RBRACE] = ACTIONS(723),
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
        [anon_sym_sbyte] = ACTIONS(727),
        [anon_sym_byte] = ACTIONS(727),
        [anon_sym_short] = ACTIONS(727),
        [anon_sym_ushort] = ACTIONS(727),
        [anon_sym_int] = ACTIONS(727),
        [anon_sym_uint] = ACTIONS(727),
        [anon_sym_long] = ACTIONS(727),
        [anon_sym_ulong] = ACTIONS(727),
        [anon_sym_char] = ACTIONS(727),
        [anon_sym_delegate] = ACTIONS(727),
        [anon_sym_LBRACK] = ACTIONS(723),
        [anon_sym_readonly] = ACTIONS(727),
        [anon_sym_volatile] = ACTIONS(727),
        [anon_sym_bool] = ACTIONS(727),
        [anon_sym_decimal] = ACTIONS(727),
        [anon_sym_double] = ACTIONS(727),
        [anon_sym_float] = ACTIONS(727),
        [anon_sym_object] = ACTIONS(727),
        [anon_sym_string] = ACTIONS(727),
        [sym_identifier_name] = ACTIONS(729),
        [sym_comment] = ACTIONS(97),
    },
    [251] = {
        [sym_type_parameter_list] = STATE(253),
        [anon_sym_LBRACE] = ACTIONS(779),
        [anon_sym_LT] = ACTIONS(275),
        [sym_comment] = ACTIONS(97),
    },
    [252] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(255),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(781),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [253] = {
        [anon_sym_LBRACE] = ACTIONS(731),
        [sym_comment] = ACTIONS(97),
    },
    [254] = {
        [ts_builtin_sym_end] = ACTIONS(783),
        [anon_sym_namespace] = ACTIONS(785),
        [anon_sym_RBRACE] = ACTIONS(783),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_unsafe] = ACTIONS(785),
        [anon_sym_abstract] = ACTIONS(785),
        [anon_sym_sealed] = ACTIONS(785),
        [anon_sym_static] = ACTIONS(785),
        [anon_sym_new] = ACTIONS(785),
        [anon_sym_public] = ACTIONS(785),
        [anon_sym_protected] = ACTIONS(785),
        [anon_sym_internal] = ACTIONS(785),
        [anon_sym_private] = ACTIONS(785),
        [anon_sym_struct] = ACTIONS(785),
        [anon_sym_enum] = ACTIONS(785),
        [anon_sym_sbyte] = ACTIONS(785),
        [anon_sym_byte] = ACTIONS(785),
        [anon_sym_short] = ACTIONS(785),
        [anon_sym_ushort] = ACTIONS(785),
        [anon_sym_int] = ACTIONS(785),
        [anon_sym_uint] = ACTIONS(785),
        [anon_sym_long] = ACTIONS(785),
        [anon_sym_ulong] = ACTIONS(785),
        [anon_sym_char] = ACTIONS(785),
        [anon_sym_delegate] = ACTIONS(785),
        [anon_sym_LBRACK] = ACTIONS(783),
        [anon_sym_readonly] = ACTIONS(785),
        [anon_sym_volatile] = ACTIONS(785),
        [anon_sym_bool] = ACTIONS(785),
        [anon_sym_decimal] = ACTIONS(785),
        [anon_sym_double] = ACTIONS(785),
        [anon_sym_float] = ACTIONS(785),
        [anon_sym_object] = ACTIONS(785),
        [anon_sym_string] = ACTIONS(785),
        [sym_identifier_name] = ACTIONS(787),
        [sym_comment] = ACTIONS(97),
    },
    [255] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(733),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [256] = {
        [sym__class_modifiers] = STATE(257),
        [sym__struct_modifiers] = STATE(258),
        [sym__field_modifiers] = STATE(238),
        [anon_sym_class] = ACTIONS(581),
        [anon_sym_unsafe] = ACTIONS(583),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(583),
        [anon_sym_public] = ACTIONS(583),
        [anon_sym_protected] = ACTIONS(583),
        [anon_sym_internal] = ACTIONS(583),
        [anon_sym_private] = ACTIONS(583),
        [anon_sym_struct] = ACTIONS(585),
        [anon_sym_sbyte] = ACTIONS(587),
        [anon_sym_byte] = ACTIONS(587),
        [anon_sym_short] = ACTIONS(587),
        [anon_sym_ushort] = ACTIONS(587),
        [anon_sym_int] = ACTIONS(587),
        [anon_sym_uint] = ACTIONS(587),
        [anon_sym_long] = ACTIONS(587),
        [anon_sym_ulong] = ACTIONS(587),
        [anon_sym_char] = ACTIONS(587),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(587),
        [anon_sym_decimal] = ACTIONS(587),
        [anon_sym_double] = ACTIONS(587),
        [anon_sym_float] = ACTIONS(587),
        [anon_sym_object] = ACTIONS(587),
        [anon_sym_string] = ACTIONS(587),
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(97),
    },
    [257] = {
        [anon_sym_class] = ACTIONS(789),
        [sym_comment] = ACTIONS(97),
    },
    [258] = {
        [anon_sym_struct] = ACTIONS(791),
        [sym_comment] = ACTIONS(97),
    },
    [259] = {
        [sym_type_parameter_list] = STATE(261),
        [anon_sym_LBRACE] = ACTIONS(793),
        [anon_sym_LT] = ACTIONS(275),
        [sym_comment] = ACTIONS(97),
    },
    [260] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(263),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [261] = {
        [anon_sym_LBRACE] = ACTIONS(741),
        [sym_comment] = ACTIONS(97),
    },
    [262] = {
        [ts_builtin_sym_end] = ACTIONS(797),
        [anon_sym_namespace] = ACTIONS(799),
        [anon_sym_RBRACE] = ACTIONS(797),
        [anon_sym_class] = ACTIONS(799),
        [anon_sym_unsafe] = ACTIONS(799),
        [anon_sym_abstract] = ACTIONS(799),
        [anon_sym_sealed] = ACTIONS(799),
        [anon_sym_static] = ACTIONS(799),
        [anon_sym_new] = ACTIONS(799),
        [anon_sym_public] = ACTIONS(799),
        [anon_sym_protected] = ACTIONS(799),
        [anon_sym_internal] = ACTIONS(799),
        [anon_sym_private] = ACTIONS(799),
        [anon_sym_struct] = ACTIONS(799),
        [anon_sym_enum] = ACTIONS(799),
        [anon_sym_sbyte] = ACTIONS(799),
        [anon_sym_byte] = ACTIONS(799),
        [anon_sym_short] = ACTIONS(799),
        [anon_sym_ushort] = ACTIONS(799),
        [anon_sym_int] = ACTIONS(799),
        [anon_sym_uint] = ACTIONS(799),
        [anon_sym_long] = ACTIONS(799),
        [anon_sym_ulong] = ACTIONS(799),
        [anon_sym_char] = ACTIONS(799),
        [anon_sym_delegate] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(797),
        [anon_sym_readonly] = ACTIONS(799),
        [anon_sym_volatile] = ACTIONS(799),
        [anon_sym_bool] = ACTIONS(799),
        [anon_sym_decimal] = ACTIONS(799),
        [anon_sym_double] = ACTIONS(799),
        [anon_sym_float] = ACTIONS(799),
        [anon_sym_object] = ACTIONS(799),
        [anon_sym_string] = ACTIONS(799),
        [sym_identifier_name] = ACTIONS(801),
        [sym_comment] = ACTIONS(97),
    },
    [263] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(743),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [264] = {
        [anon_sym_COLON] = ACTIONS(803),
        [sym_comment] = ACTIONS(97),
    },
    [265] = {
        [sym_attribute_list] = STATE(266),
        [sym_attribute] = STATE(36),
        [sym_identifier_name] = ACTIONS(201),
        [sym_comment] = ACTIONS(97),
    },
    [266] = {
        [anon_sym_RBRACK] = ACTIONS(805),
        [sym_comment] = ACTIONS(97),
    },
    [267] = {
        [ts_builtin_sym_end] = ACTIONS(807),
        [anon_sym_namespace] = ACTIONS(807),
        [anon_sym_class] = ACTIONS(807),
        [anon_sym_unsafe] = ACTIONS(807),
        [anon_sym_abstract] = ACTIONS(807),
        [anon_sym_sealed] = ACTIONS(807),
        [anon_sym_static] = ACTIONS(807),
        [anon_sym_new] = ACTIONS(807),
        [anon_sym_public] = ACTIONS(807),
        [anon_sym_protected] = ACTIONS(807),
        [anon_sym_internal] = ACTIONS(807),
        [anon_sym_private] = ACTIONS(807),
        [anon_sym_struct] = ACTIONS(807),
        [anon_sym_enum] = ACTIONS(807),
        [anon_sym_delegate] = ACTIONS(807),
        [anon_sym_LBRACK] = ACTIONS(807),
        [sym_comment] = ACTIONS(97),
    },
    [268] = {
        [sym__class_modifiers] = STATE(257),
        [sym__struct_modifiers] = STATE(258),
        [anon_sym_class] = ACTIONS(135),
        [anon_sym_unsafe] = ACTIONS(137),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(137),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_protected] = ACTIONS(137),
        [anon_sym_internal] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_struct] = ACTIONS(139),
        [sym_comment] = ACTIONS(97),
    },
    [269] = {
        [anon_sym_COLON_COLON] = ACTIONS(809),
        [sym_comment] = ACTIONS(97),
    },
    [270] = {
        [anon_sym_LBRACE] = ACTIONS(811),
        [anon_sym_DOT] = ACTIONS(813),
        [sym_comment] = ACTIONS(97),
    },
    [271] = {
        [anon_sym_DOT] = ACTIONS(813),
        [sym_comment] = ACTIONS(97),
    },
    [272] = {
        [sym_identifier_name] = ACTIONS(815),
        [sym_comment] = ACTIONS(97),
    },
    [273] = {
        [anon_sym_SEMI] = ACTIONS(817),
        [anon_sym_LBRACE] = ACTIONS(817),
        [anon_sym_DOT] = ACTIONS(817),
        [sym_comment] = ACTIONS(97),
    },
    [274] = {
        [sym__type_declaration] = STATE(14),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [aux_sym_compilation_unit_repeat4] = STATE(276),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_RBRACE] = ACTIONS(819),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(97),
    },
    [275] = {
        [ts_builtin_sym_end] = ACTIONS(821),
        [anon_sym_namespace] = ACTIONS(821),
        [anon_sym_RBRACE] = ACTIONS(821),
        [anon_sym_class] = ACTIONS(821),
        [anon_sym_unsafe] = ACTIONS(821),
        [anon_sym_abstract] = ACTIONS(821),
        [anon_sym_sealed] = ACTIONS(821),
        [anon_sym_static] = ACTIONS(821),
        [anon_sym_new] = ACTIONS(821),
        [anon_sym_public] = ACTIONS(821),
        [anon_sym_protected] = ACTIONS(821),
        [anon_sym_internal] = ACTIONS(821),
        [anon_sym_private] = ACTIONS(821),
        [anon_sym_struct] = ACTIONS(821),
        [anon_sym_enum] = ACTIONS(821),
        [anon_sym_delegate] = ACTIONS(821),
        [anon_sym_LBRACK] = ACTIONS(821),
        [sym_comment] = ACTIONS(97),
    },
    [276] = {
        [sym__type_declaration] = STATE(46),
        [sym_namespace_declaration] = STATE(46),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_RBRACE] = ACTIONS(823),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(97),
    },
    [277] = {
        [ts_builtin_sym_end] = ACTIONS(825),
        [anon_sym_namespace] = ACTIONS(825),
        [anon_sym_RBRACE] = ACTIONS(825),
        [anon_sym_class] = ACTIONS(825),
        [anon_sym_unsafe] = ACTIONS(825),
        [anon_sym_abstract] = ACTIONS(825),
        [anon_sym_sealed] = ACTIONS(825),
        [anon_sym_static] = ACTIONS(825),
        [anon_sym_new] = ACTIONS(825),
        [anon_sym_public] = ACTIONS(825),
        [anon_sym_protected] = ACTIONS(825),
        [anon_sym_internal] = ACTIONS(825),
        [anon_sym_private] = ACTIONS(825),
        [anon_sym_struct] = ACTIONS(825),
        [anon_sym_enum] = ACTIONS(825),
        [anon_sym_delegate] = ACTIONS(825),
        [anon_sym_LBRACK] = ACTIONS(825),
        [sym_comment] = ACTIONS(97),
    },
    [278] = {
        [sym_identifier_name] = ACTIONS(827),
        [sym_comment] = ACTIONS(97),
    },
    [279] = {
        [anon_sym_DOT] = ACTIONS(829),
        [sym_comment] = ACTIONS(97),
    },
    [280] = {
        [sym_global] = ACTIONS(831),
        [sym_identifier_name] = ACTIONS(833),
        [sym_comment] = ACTIONS(97),
    },
    [281] = {
        [anon_sym_SEMI] = ACTIONS(835),
        [anon_sym_EQ] = ACTIONS(837),
        [anon_sym_DOT] = ACTIONS(813),
        [sym_comment] = ACTIONS(97),
    },
    [282] = {
        [anon_sym_SEMI] = ACTIONS(835),
        [anon_sym_DOT] = ACTIONS(813),
        [sym_comment] = ACTIONS(97),
    },
    [283] = {
        [sym_qualified_name] = STATE(284),
        [sym_alias_qualified_name] = STATE(271),
        [sym_global] = ACTIONS(127),
        [sym_identifier_name] = ACTIONS(839),
        [sym_comment] = ACTIONS(97),
    },
    [284] = {
        [anon_sym_SEMI] = ACTIONS(841),
        [anon_sym_DOT] = ACTIONS(813),
        [sym_comment] = ACTIONS(97),
    },
    [285] = {
        [ts_builtin_sym_end] = ACTIONS(843),
        [anon_sym_using] = ACTIONS(843),
        [anon_sym_namespace] = ACTIONS(843),
        [anon_sym_class] = ACTIONS(843),
        [anon_sym_unsafe] = ACTIONS(843),
        [anon_sym_abstract] = ACTIONS(843),
        [anon_sym_sealed] = ACTIONS(843),
        [anon_sym_static] = ACTIONS(843),
        [anon_sym_new] = ACTIONS(843),
        [anon_sym_public] = ACTIONS(843),
        [anon_sym_protected] = ACTIONS(843),
        [anon_sym_internal] = ACTIONS(843),
        [anon_sym_private] = ACTIONS(843),
        [anon_sym_struct] = ACTIONS(843),
        [anon_sym_enum] = ACTIONS(843),
        [anon_sym_delegate] = ACTIONS(843),
        [anon_sym_LBRACK] = ACTIONS(843),
        [sym_comment] = ACTIONS(97),
    },
    [286] = {
        [ts_builtin_sym_end] = ACTIONS(845),
        [anon_sym_using] = ACTIONS(845),
        [anon_sym_namespace] = ACTIONS(845),
        [anon_sym_class] = ACTIONS(845),
        [anon_sym_unsafe] = ACTIONS(845),
        [anon_sym_abstract] = ACTIONS(845),
        [anon_sym_sealed] = ACTIONS(845),
        [anon_sym_static] = ACTIONS(845),
        [anon_sym_new] = ACTIONS(845),
        [anon_sym_public] = ACTIONS(845),
        [anon_sym_protected] = ACTIONS(845),
        [anon_sym_internal] = ACTIONS(845),
        [anon_sym_private] = ACTIONS(845),
        [anon_sym_struct] = ACTIONS(845),
        [anon_sym_enum] = ACTIONS(845),
        [anon_sym_delegate] = ACTIONS(845),
        [anon_sym_LBRACK] = ACTIONS(845),
        [sym_comment] = ACTIONS(97),
    },
    [287] = {
        [sym_global] = ACTIONS(847),
        [sym_identifier_name] = ACTIONS(849),
        [sym_comment] = ACTIONS(97),
    },
    [288] = {
        [sym_identifier_name] = ACTIONS(851),
        [sym_comment] = ACTIONS(97),
    },
    [289] = {
        [anon_sym_SEMI] = ACTIONS(853),
        [sym_comment] = ACTIONS(97),
    },
    [290] = {
        [ts_builtin_sym_end] = ACTIONS(855),
        [anon_sym_extern] = ACTIONS(855),
        [anon_sym_using] = ACTIONS(855),
        [anon_sym_namespace] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(855),
        [anon_sym_unsafe] = ACTIONS(855),
        [anon_sym_abstract] = ACTIONS(855),
        [anon_sym_sealed] = ACTIONS(855),
        [anon_sym_static] = ACTIONS(855),
        [anon_sym_new] = ACTIONS(855),
        [anon_sym_public] = ACTIONS(855),
        [anon_sym_protected] = ACTIONS(855),
        [anon_sym_internal] = ACTIONS(855),
        [anon_sym_private] = ACTIONS(855),
        [anon_sym_struct] = ACTIONS(855),
        [anon_sym_enum] = ACTIONS(855),
        [anon_sym_delegate] = ACTIONS(855),
        [anon_sym_LBRACK] = ACTIONS(855),
        [sym_comment] = ACTIONS(97),
    },
    [291] = {
        [ts_builtin_sym_end] = ACTIONS(857),
        [anon_sym_extern] = ACTIONS(870),
        [anon_sym_using] = ACTIONS(872),
        [anon_sym_namespace] = ACTIONS(876),
        [anon_sym_RBRACE] = ACTIONS(889),
        [anon_sym_class] = ACTIONS(902),
        [anon_sym_unsafe] = ACTIONS(902),
        [anon_sym_abstract] = ACTIONS(902),
        [anon_sym_sealed] = ACTIONS(902),
        [anon_sym_static] = ACTIONS(902),
        [anon_sym_new] = ACTIONS(902),
        [anon_sym_public] = ACTIONS(902),
        [anon_sym_protected] = ACTIONS(902),
        [anon_sym_internal] = ACTIONS(902),
        [anon_sym_private] = ACTIONS(902),
        [anon_sym_struct] = ACTIONS(902),
        [anon_sym_enum] = ACTIONS(902),
        [anon_sym_sbyte] = ACTIONS(918),
        [anon_sym_byte] = ACTIONS(918),
        [anon_sym_short] = ACTIONS(918),
        [anon_sym_ushort] = ACTIONS(918),
        [anon_sym_int] = ACTIONS(918),
        [anon_sym_uint] = ACTIONS(918),
        [anon_sym_long] = ACTIONS(918),
        [anon_sym_ulong] = ACTIONS(918),
        [anon_sym_char] = ACTIONS(918),
        [anon_sym_delegate] = ACTIONS(902),
        [anon_sym_LBRACK] = ACTIONS(931),
        [anon_sym_readonly] = ACTIONS(918),
        [anon_sym_volatile] = ACTIONS(918),
        [anon_sym_bool] = ACTIONS(918),
        [anon_sym_decimal] = ACTIONS(918),
        [anon_sym_double] = ACTIONS(918),
        [anon_sym_float] = ACTIONS(918),
        [anon_sym_object] = ACTIONS(918),
        [anon_sym_string] = ACTIONS(918),
        [sym_identifier_name] = ACTIONS(947),
        [sym_comment] = ACTIONS(97),
    },
    [292] = {
        [sym__type_declaration] = STATE(432),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(479),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(434),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_compilation_unit_repeat4] = STATE(276),
        [aux_sym_class_declaration_repeat1] = STATE(350),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(960),
        [anon_sym_RBRACE] = ACTIONS(962),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(964),
        [sym_comment] = ACTIONS(97),
    },
    [293] = {
        [ts_builtin_sym_end] = ACTIONS(966),
        [anon_sym_SEMI] = ACTIONS(985),
        [anon_sym_namespace] = ACTIONS(987),
        [anon_sym_RBRACE] = ACTIONS(966),
        [anon_sym_class] = ACTIONS(987),
        [anon_sym_unsafe] = ACTIONS(987),
        [anon_sym_abstract] = ACTIONS(987),
        [anon_sym_sealed] = ACTIONS(987),
        [anon_sym_static] = ACTIONS(987),
        [anon_sym_new] = ACTIONS(987),
        [anon_sym_public] = ACTIONS(987),
        [anon_sym_protected] = ACTIONS(987),
        [anon_sym_internal] = ACTIONS(987),
        [anon_sym_private] = ACTIONS(987),
        [anon_sym_struct] = ACTIONS(987),
        [anon_sym_enum] = ACTIONS(987),
        [anon_sym_sbyte] = ACTIONS(1006),
        [anon_sym_byte] = ACTIONS(1006),
        [anon_sym_short] = ACTIONS(1006),
        [anon_sym_ushort] = ACTIONS(1006),
        [anon_sym_int] = ACTIONS(1006),
        [anon_sym_uint] = ACTIONS(1006),
        [anon_sym_long] = ACTIONS(1006),
        [anon_sym_ulong] = ACTIONS(1006),
        [anon_sym_char] = ACTIONS(1006),
        [anon_sym_delegate] = ACTIONS(987),
        [anon_sym_LBRACK] = ACTIONS(966),
        [anon_sym_readonly] = ACTIONS(1006),
        [anon_sym_volatile] = ACTIONS(1006),
        [anon_sym_bool] = ACTIONS(1006),
        [anon_sym_decimal] = ACTIONS(1006),
        [anon_sym_double] = ACTIONS(1006),
        [anon_sym_float] = ACTIONS(1006),
        [anon_sym_object] = ACTIONS(1006),
        [anon_sym_string] = ACTIONS(1006),
        [sym_identifier_name] = ACTIONS(1023),
        [sym_comment] = ACTIONS(97),
    },
    [294] = {
        [sym_identifier_name] = ACTIONS(1040),
        [sym_comment] = ACTIONS(97),
    },
    [295] = {
        [sym__class_modifiers] = STATE(257),
        [sym__field_modifiers] = STATE(238),
        [anon_sym_class] = ACTIONS(581),
        [anon_sym_unsafe] = ACTIONS(559),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(559),
        [anon_sym_public] = ACTIONS(559),
        [anon_sym_protected] = ACTIONS(559),
        [anon_sym_internal] = ACTIONS(559),
        [anon_sym_private] = ACTIONS(559),
        [anon_sym_sbyte] = ACTIONS(587),
        [anon_sym_byte] = ACTIONS(587),
        [anon_sym_short] = ACTIONS(587),
        [anon_sym_ushort] = ACTIONS(587),
        [anon_sym_int] = ACTIONS(587),
        [anon_sym_uint] = ACTIONS(587),
        [anon_sym_long] = ACTIONS(587),
        [anon_sym_ulong] = ACTIONS(587),
        [anon_sym_char] = ACTIONS(587),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(587),
        [anon_sym_decimal] = ACTIONS(587),
        [anon_sym_double] = ACTIONS(587),
        [anon_sym_float] = ACTIONS(587),
        [anon_sym_object] = ACTIONS(587),
        [anon_sym_string] = ACTIONS(587),
        [sym_global] = ACTIONS(831),
        [sym_identifier_name] = ACTIONS(1042),
        [sym_comment] = ACTIONS(97),
    },
    [296] = {
        [sym_identifier_name] = ACTIONS(1045),
        [sym_comment] = ACTIONS(97),
    },
    [297] = {
        [sym_identifier_name] = ACTIONS(1047),
        [sym_comment] = ACTIONS(97),
    },
    [298] = {
        [sym__integral_type] = STATE(325),
        [sym_attribute_list] = STATE(266),
        [sym_attribute] = STATE(36),
        [anon_sym_sbyte] = ACTIONS(1049),
        [anon_sym_byte] = ACTIONS(1049),
        [anon_sym_short] = ACTIONS(1049),
        [anon_sym_ushort] = ACTIONS(1049),
        [anon_sym_int] = ACTIONS(1049),
        [anon_sym_uint] = ACTIONS(1049),
        [anon_sym_long] = ACTIONS(1049),
        [anon_sym_ulong] = ACTIONS(1049),
        [anon_sym_char] = ACTIONS(1049),
        [sym_identifier_name] = ACTIONS(157),
        [sym_comment] = ACTIONS(97),
    },
    [299] = {
        [sym_enum_member_declaration] = STATE(449),
        [sym_parameter] = STATE(450),
        [sym_parameter_modifier] = STATE(77),
        [sym__attributes] = STATE(451),
        [sym__attribute_section] = STATE(25),
        [sym_attribute] = STATE(452),
        [sym__type] = STATE(453),
        [sym_generic_name] = STATE(69),
        [sym_variable_declarator] = STATE(454),
        [sym_predefined_type] = STATE(69),
        [sym_type_parameter] = STATE(455),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_ref] = ACTIONS(285),
        [anon_sym_out] = ACTIONS(285),
        [anon_sym_this] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(1051),
        [sym_comment] = ACTIONS(97),
    },
    [300] = {
        [anon_sym_LBRACE] = ACTIONS(365),
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_GT] = ACTIONS(267),
        [sym_identifier_name] = ACTIONS(269),
        [sym_comment] = ACTIONS(97),
    },
    [301] = {
        [sym__return_type] = STATE(327),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [sym_void_keyword] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [302] = {
        [sym_parameter] = STATE(76),
        [sym_parameter_modifier] = STATE(77),
        [sym__attributes] = STATE(78),
        [sym__attribute_section] = STATE(25),
        [sym__type] = STATE(79),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_RPAREN] = ACTIONS(1053),
        [anon_sym_ref] = ACTIONS(285),
        [anon_sym_out] = ACTIONS(285),
        [anon_sym_this] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [303] = {
        [anon_sym_SEMI] = ACTIONS(1055),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(97),
    },
    [304] = {
        [ts_builtin_sym_end] = ACTIONS(807),
        [anon_sym_namespace] = ACTIONS(1059),
        [anon_sym_class] = ACTIONS(1061),
        [anon_sym_unsafe] = ACTIONS(1061),
        [anon_sym_abstract] = ACTIONS(1061),
        [anon_sym_sealed] = ACTIONS(1061),
        [anon_sym_static] = ACTIONS(1061),
        [anon_sym_new] = ACTIONS(1061),
        [anon_sym_public] = ACTIONS(1061),
        [anon_sym_protected] = ACTIONS(1061),
        [anon_sym_internal] = ACTIONS(1061),
        [anon_sym_private] = ACTIONS(1061),
        [anon_sym_struct] = ACTIONS(1061),
        [anon_sym_enum] = ACTIONS(1061),
        [anon_sym_sbyte] = ACTIONS(227),
        [anon_sym_byte] = ACTIONS(227),
        [anon_sym_short] = ACTIONS(227),
        [anon_sym_ushort] = ACTIONS(227),
        [anon_sym_int] = ACTIONS(227),
        [anon_sym_uint] = ACTIONS(227),
        [anon_sym_long] = ACTIONS(227),
        [anon_sym_ulong] = ACTIONS(227),
        [anon_sym_char] = ACTIONS(227),
        [anon_sym_delegate] = ACTIONS(1061),
        [anon_sym_ref] = ACTIONS(227),
        [anon_sym_out] = ACTIONS(227),
        [anon_sym_this] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(1064),
        [anon_sym_readonly] = ACTIONS(227),
        [anon_sym_volatile] = ACTIONS(227),
        [anon_sym_bool] = ACTIONS(227),
        [anon_sym_decimal] = ACTIONS(227),
        [anon_sym_double] = ACTIONS(227),
        [anon_sym_float] = ACTIONS(227),
        [anon_sym_object] = ACTIONS(227),
        [anon_sym_string] = ACTIONS(227),
        [sym_identifier_name] = ACTIONS(231),
        [sym_comment] = ACTIONS(97),
    },
    [305] = {
        [sym__literal] = STATE(125),
        [sym_boolean_literal] = STATE(121),
        [sym_character_literal] = STATE(121),
        [sym_integer_literal] = STATE(121),
        [sym_real_literal] = STATE(121),
        [sym_string_literal] = STATE(121),
        [sym__regular_string_literal] = STATE(126),
        [sym__verbatim_string_literal] = STATE(126),
        [anon_sym_true] = ACTIONS(1067),
        [anon_sym_false] = ACTIONS(1067),
        [anon_sym_SQUOTE] = ACTIONS(383),
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(385),
        [aux_sym_SLASH0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_SLASH] = ACTIONS(387),
        [sym_null_literal] = ACTIONS(1069),
        [anon_sym_DOT] = ACTIONS(391),
        [anon_sym_DQUOTE] = ACTIONS(393),
        [anon_sym_AT_DQUOTE] = ACTIONS(395),
        [sym_global] = ACTIONS(847),
        [sym_identifier_name] = ACTIONS(849),
        [sym_comment] = ACTIONS(97),
    },
    [306] = {
        [sym__unicode_escape_sequence] = STATE(148),
        [sym__simple_escape_sequence] = STATE(148),
        [anon_sym_SEMI] = ACTIONS(495),
        [anon_sym_RBRACE] = ACTIONS(495),
        [anon_sym_COMMA] = ACTIONS(495),
        [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(1071),
        [sym__hexadecimal_escape_sequence] = ACTIONS(401),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(403),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(403),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(405),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(405),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(405),
        [anon_sym_BSLASH0] = ACTIONS(405),
        [anon_sym_BSLASHa] = ACTIONS(405),
        [anon_sym_BSLASHb] = ACTIONS(405),
        [anon_sym_BSLASHf] = ACTIONS(405),
        [anon_sym_BSLASHn] = ACTIONS(405),
        [anon_sym_BSLASHr] = ACTIONS(405),
        [anon_sym_BSLASHt] = ACTIONS(405),
        [anon_sym_BSLASHv] = ACTIONS(405),
        [sym_comment] = ACTIONS(97),
    },
    [307] = {
        [anon_sym_SQUOTE] = ACTIONS(493),
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
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1073),
        [sym_comment] = ACTIONS(97),
    },
    [308] = {
        [anon_sym_SEMI] = ACTIONS(1075),
        [anon_sym_RBRACE] = ACTIONS(1075),
        [anon_sym_COMMA] = ACTIONS(1075),
        [sym__integer_type_suffix] = ACTIONS(409),
        [anon_sym_DOT] = ACTIONS(411),
        [sym__real_type_suffix] = ACTIONS(1079),
        [sym__exponent_part] = ACTIONS(1081),
        [sym_comment] = ACTIONS(97),
    },
    [309] = {
        [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1083),
        [sym_identifier_name] = ACTIONS(815),
        [sym_comment] = ACTIONS(97),
    },
    [310] = {
        [anon_sym_SEMI] = ACTIONS(1085),
        [anon_sym_RBRACE] = ACTIONS(1085),
        [anon_sym_COMMA] = ACTIONS(1085),
        [sym_comment] = ACTIONS(97),
    },
    [311] = {
        [anon_sym_SEMI] = ACTIONS(1090),
        [anon_sym_RBRACE] = ACTIONS(1090),
        [anon_sym_COMMA] = ACTIONS(1090),
        [sym__real_type_suffix] = ACTIONS(1094),
        [sym_comment] = ACTIONS(97),
    },
    [312] = {
        [sym__unicode_escape_sequence] = STATE(129),
        [sym__simple_escape_sequence] = STATE(129),
        [sym__regular_string_literal_character] = STATE(133),
        [aux_sym__regular_string_literal_repeat1] = STATE(134),
        [anon_sym_SEMI] = ACTIONS(1096),
        [anon_sym_RBRACE] = ACTIONS(1096),
        [anon_sym_COMMA] = ACTIONS(1096),
        [sym__hexadecimal_escape_sequence] = ACTIONS(421),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(423),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(423),
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
        [anon_sym_DQUOTE] = ACTIONS(427),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1100),
        [sym_comment] = ACTIONS(97),
    },
    [313] = {
        [anon_sym_LBRACE] = ACTIONS(1102),
        [anon_sym_COMMA] = ACTIONS(1102),
        [anon_sym_GT] = ACTIONS(1102),
        [sym_identifier_name] = ACTIONS(1105),
        [sym_comment] = ACTIONS(97),
    },
    [314] = {
        [sym_parameter_list] = STATE(328),
        [sym_attribute_argument_list] = STATE(44),
        [sym_equals_value_clause] = STATE(342),
        [sym_type_parameter_list] = STATE(344),
        [anon_sym_SEMI] = ACTIONS(1108),
        [anon_sym_LBRACE] = ACTIONS(1112),
        [anon_sym_RBRACE] = ACTIONS(1115),
        [anon_sym_COLON] = ACTIONS(1118),
        [anon_sym_COMMA] = ACTIONS(1120),
        [anon_sym_LPAREN] = ACTIONS(1129),
        [anon_sym_RPAREN] = ACTIONS(1131),
        [anon_sym_RBRACK] = ACTIONS(209),
        [anon_sym_EQ] = ACTIONS(1135),
        [anon_sym_DOT] = ACTIONS(1137),
        [anon_sym_LT] = ACTIONS(275),
        [anon_sym_GT] = ACTIONS(273),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(97),
    },
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(1141),
        [anon_sym_namespace] = ACTIONS(1144),
        [anon_sym_RBRACE] = ACTIONS(1147),
        [anon_sym_class] = ACTIONS(1152),
        [anon_sym_unsafe] = ACTIONS(1152),
        [anon_sym_abstract] = ACTIONS(1152),
        [anon_sym_sealed] = ACTIONS(1152),
        [anon_sym_static] = ACTIONS(1152),
        [anon_sym_new] = ACTIONS(1152),
        [anon_sym_public] = ACTIONS(1152),
        [anon_sym_protected] = ACTIONS(1152),
        [anon_sym_internal] = ACTIONS(1152),
        [anon_sym_private] = ACTIONS(1152),
        [anon_sym_struct] = ACTIONS(1152),
        [anon_sym_enum] = ACTIONS(1152),
        [anon_sym_sbyte] = ACTIONS(1157),
        [anon_sym_byte] = ACTIONS(1157),
        [anon_sym_short] = ACTIONS(1157),
        [anon_sym_ushort] = ACTIONS(1157),
        [anon_sym_int] = ACTIONS(1157),
        [anon_sym_uint] = ACTIONS(1157),
        [anon_sym_long] = ACTIONS(1157),
        [anon_sym_ulong] = ACTIONS(1157),
        [anon_sym_char] = ACTIONS(1157),
        [anon_sym_delegate] = ACTIONS(1152),
        [anon_sym_LBRACK] = ACTIONS(1147),
        [anon_sym_readonly] = ACTIONS(1157),
        [anon_sym_volatile] = ACTIONS(1157),
        [anon_sym_bool] = ACTIONS(1157),
        [anon_sym_decimal] = ACTIONS(1157),
        [anon_sym_double] = ACTIONS(1157),
        [anon_sym_float] = ACTIONS(1157),
        [anon_sym_object] = ACTIONS(1157),
        [anon_sym_string] = ACTIONS(1157),
        [sym_identifier_name] = ACTIONS(1160),
        [sym_comment] = ACTIONS(97),
    },
    [316] = {
        [ts_builtin_sym_end] = ACTIONS(1163),
        [anon_sym_extern] = ACTIONS(1163),
        [anon_sym_using] = ACTIONS(1163),
        [anon_sym_namespace] = ACTIONS(1163),
        [anon_sym_class] = ACTIONS(1163),
        [anon_sym_unsafe] = ACTIONS(1163),
        [anon_sym_abstract] = ACTIONS(1163),
        [anon_sym_sealed] = ACTIONS(1163),
        [anon_sym_static] = ACTIONS(1163),
        [anon_sym_new] = ACTIONS(1163),
        [anon_sym_public] = ACTIONS(1163),
        [anon_sym_protected] = ACTIONS(1163),
        [anon_sym_internal] = ACTIONS(1163),
        [anon_sym_private] = ACTIONS(1163),
        [anon_sym_struct] = ACTIONS(1163),
        [anon_sym_enum] = ACTIONS(1163),
        [anon_sym_delegate] = ACTIONS(1163),
        [anon_sym_LBRACK] = ACTIONS(1163),
        [sym_comment] = ACTIONS(97),
    },
    [317] = {
        [ts_builtin_sym_end] = ACTIONS(1166),
        [anon_sym_using] = ACTIONS(1166),
        [anon_sym_namespace] = ACTIONS(1166),
        [anon_sym_class] = ACTIONS(1166),
        [anon_sym_unsafe] = ACTIONS(1166),
        [anon_sym_abstract] = ACTIONS(1166),
        [anon_sym_sealed] = ACTIONS(1166),
        [anon_sym_static] = ACTIONS(1166),
        [anon_sym_new] = ACTIONS(1166),
        [anon_sym_public] = ACTIONS(1166),
        [anon_sym_protected] = ACTIONS(1166),
        [anon_sym_internal] = ACTIONS(1166),
        [anon_sym_private] = ACTIONS(1166),
        [anon_sym_struct] = ACTIONS(1166),
        [anon_sym_enum] = ACTIONS(1166),
        [anon_sym_delegate] = ACTIONS(1166),
        [anon_sym_LBRACK] = ACTIONS(1166),
        [sym_comment] = ACTIONS(97),
    },
    [318] = {
        [ts_builtin_sym_end] = ACTIONS(1141),
        [anon_sym_namespace] = ACTIONS(1141),
        [anon_sym_RBRACE] = ACTIONS(1141),
        [anon_sym_class] = ACTIONS(1141),
        [anon_sym_unsafe] = ACTIONS(1141),
        [anon_sym_abstract] = ACTIONS(1141),
        [anon_sym_sealed] = ACTIONS(1141),
        [anon_sym_static] = ACTIONS(1141),
        [anon_sym_new] = ACTIONS(1141),
        [anon_sym_public] = ACTIONS(1141),
        [anon_sym_protected] = ACTIONS(1141),
        [anon_sym_internal] = ACTIONS(1141),
        [anon_sym_private] = ACTIONS(1141),
        [anon_sym_struct] = ACTIONS(1141),
        [anon_sym_enum] = ACTIONS(1141),
        [anon_sym_delegate] = ACTIONS(1141),
        [anon_sym_LBRACK] = ACTIONS(1141),
        [sym_comment] = ACTIONS(97),
    },
    [319] = {
        [anon_sym_class] = ACTIONS(1169),
        [sym_comment] = ACTIONS(97),
    },
    [320] = {
        [anon_sym_class] = ACTIONS(1171),
        [sym_comment] = ACTIONS(97),
    },
    [321] = {
        [anon_sym_struct] = ACTIONS(1174),
        [sym_comment] = ACTIONS(97),
    },
    [322] = {
        [anon_sym_struct] = ACTIONS(1176),
        [sym_comment] = ACTIONS(97),
    },
    [323] = {
        [aux_sym_enum_declaration_repeat1] = STATE(351),
        [anon_sym_RBRACE] = ACTIONS(1179),
        [anon_sym_COMMA] = ACTIONS(1183),
        [sym_comment] = ACTIONS(97),
    },
    [324] = {
        [anon_sym_enum] = ACTIONS(1187),
        [sym_comment] = ACTIONS(97),
    },
    [325] = {
        [anon_sym_LBRACE] = ACTIONS(1189),
        [sym_comment] = ACTIONS(97),
    },
    [326] = {
        [anon_sym_delegate] = ACTIONS(1191),
        [sym_comment] = ACTIONS(97),
    },
    [327] = {
        [sym_identifier_name] = ACTIONS(1193),
        [sym_comment] = ACTIONS(97),
    },
    [328] = {
        [anon_sym_SEMI] = ACTIONS(1195),
        [sym_comment] = ACTIONS(97),
    },
    [329] = {
        [aux_sym_parameter_list_repeat1] = STATE(88),
        [anon_sym_COMMA] = ACTIONS(1197),
        [anon_sym_RPAREN] = ACTIONS(1201),
        [sym_comment] = ACTIONS(97),
    },
    [330] = {
        [sym__type] = STATE(371),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [331] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_parameter_modifier] = STATE(81),
        [sym_field_modifiers] = STATE(198),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(196),
        [sym__type] = STATE(369),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_ref] = ACTIONS(285),
        [anon_sym_out] = ACTIONS(285),
        [anon_sym_this] = ACTIONS(285),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(1205),
        [sym_comment] = ACTIONS(97),
    },
    [332] = {
        [anon_sym_class] = ACTIONS(1207),
        [anon_sym_unsafe] = ACTIONS(1207),
        [anon_sym_abstract] = ACTIONS(1207),
        [anon_sym_sealed] = ACTIONS(1207),
        [anon_sym_static] = ACTIONS(1207),
        [anon_sym_new] = ACTIONS(1207),
        [anon_sym_public] = ACTIONS(1207),
        [anon_sym_protected] = ACTIONS(1207),
        [anon_sym_internal] = ACTIONS(1207),
        [anon_sym_private] = ACTIONS(1207),
        [anon_sym_struct] = ACTIONS(1207),
        [anon_sym_enum] = ACTIONS(1207),
        [anon_sym_sbyte] = ACTIONS(1207),
        [anon_sym_byte] = ACTIONS(1207),
        [anon_sym_short] = ACTIONS(1207),
        [anon_sym_ushort] = ACTIONS(1207),
        [anon_sym_int] = ACTIONS(1207),
        [anon_sym_uint] = ACTIONS(1207),
        [anon_sym_long] = ACTIONS(1207),
        [anon_sym_ulong] = ACTIONS(1207),
        [anon_sym_char] = ACTIONS(1207),
        [anon_sym_delegate] = ACTIONS(1207),
        [anon_sym_ref] = ACTIONS(1207),
        [anon_sym_out] = ACTIONS(1207),
        [anon_sym_this] = ACTIONS(1207),
        [anon_sym_LBRACK] = ACTIONS(1210),
        [anon_sym_readonly] = ACTIONS(1207),
        [anon_sym_volatile] = ACTIONS(1207),
        [anon_sym_bool] = ACTIONS(1207),
        [anon_sym_decimal] = ACTIONS(1207),
        [anon_sym_double] = ACTIONS(1207),
        [anon_sym_float] = ACTIONS(1207),
        [anon_sym_object] = ACTIONS(1207),
        [anon_sym_string] = ACTIONS(1207),
        [sym_identifier_name] = ACTIONS(1213),
        [sym_comment] = ACTIONS(97),
    },
    [333] = {
        [anon_sym_RBRACK] = ACTIONS(1216),
        [sym_comment] = ACTIONS(97),
    },
    [334] = {
        [aux_sym_attribute_list_repeat1] = STATE(38),
        [anon_sym_COMMA] = ACTIONS(1218),
        [anon_sym_RBRACK] = ACTIONS(1222),
        [sym_comment] = ACTIONS(97),
    },
    [335] = {
        [ts_builtin_sym_end] = ACTIONS(1226),
        [anon_sym_namespace] = ACTIONS(1226),
        [anon_sym_class] = ACTIONS(1226),
        [anon_sym_unsafe] = ACTIONS(1226),
        [anon_sym_abstract] = ACTIONS(1226),
        [anon_sym_sealed] = ACTIONS(1226),
        [anon_sym_static] = ACTIONS(1226),
        [anon_sym_new] = ACTIONS(1226),
        [anon_sym_public] = ACTIONS(1226),
        [anon_sym_protected] = ACTIONS(1226),
        [anon_sym_internal] = ACTIONS(1226),
        [anon_sym_private] = ACTIONS(1226),
        [anon_sym_struct] = ACTIONS(1226),
        [anon_sym_enum] = ACTIONS(1226),
        [anon_sym_delegate] = ACTIONS(1226),
        [anon_sym_LBRACK] = ACTIONS(1226),
        [sym_comment] = ACTIONS(97),
    },
    [336] = {
        [anon_sym_RBRACE] = ACTIONS(1229),
        [anon_sym_class] = ACTIONS(1157),
        [anon_sym_unsafe] = ACTIONS(1157),
        [anon_sym_abstract] = ACTIONS(1157),
        [anon_sym_sealed] = ACTIONS(1157),
        [anon_sym_static] = ACTIONS(1157),
        [anon_sym_new] = ACTIONS(1157),
        [anon_sym_public] = ACTIONS(1157),
        [anon_sym_protected] = ACTIONS(1157),
        [anon_sym_internal] = ACTIONS(1157),
        [anon_sym_private] = ACTIONS(1157),
        [anon_sym_struct] = ACTIONS(1157),
        [anon_sym_enum] = ACTIONS(1157),
        [anon_sym_sbyte] = ACTIONS(1157),
        [anon_sym_byte] = ACTIONS(1157),
        [anon_sym_short] = ACTIONS(1157),
        [anon_sym_ushort] = ACTIONS(1157),
        [anon_sym_int] = ACTIONS(1157),
        [anon_sym_uint] = ACTIONS(1157),
        [anon_sym_long] = ACTIONS(1157),
        [anon_sym_ulong] = ACTIONS(1157),
        [anon_sym_char] = ACTIONS(1157),
        [anon_sym_delegate] = ACTIONS(1157),
        [anon_sym_LBRACK] = ACTIONS(1229),
        [anon_sym_readonly] = ACTIONS(1157),
        [anon_sym_volatile] = ACTIONS(1157),
        [anon_sym_bool] = ACTIONS(1157),
        [anon_sym_decimal] = ACTIONS(1157),
        [anon_sym_double] = ACTIONS(1157),
        [anon_sym_float] = ACTIONS(1157),
        [anon_sym_object] = ACTIONS(1157),
        [anon_sym_string] = ACTIONS(1157),
        [sym_identifier_name] = ACTIONS(1160),
        [sym_comment] = ACTIONS(97),
    },
    [337] = {
        [sym_variable_declaration] = STATE(366),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [338] = {
        [anon_sym_sbyte] = ACTIONS(1232),
        [anon_sym_byte] = ACTIONS(1232),
        [anon_sym_short] = ACTIONS(1232),
        [anon_sym_ushort] = ACTIONS(1232),
        [anon_sym_int] = ACTIONS(1232),
        [anon_sym_uint] = ACTIONS(1232),
        [anon_sym_long] = ACTIONS(1232),
        [anon_sym_ulong] = ACTIONS(1232),
        [anon_sym_char] = ACTIONS(1232),
        [anon_sym_bool] = ACTIONS(1232),
        [anon_sym_decimal] = ACTIONS(1232),
        [anon_sym_double] = ACTIONS(1232),
        [anon_sym_float] = ACTIONS(1232),
        [anon_sym_object] = ACTIONS(1232),
        [anon_sym_string] = ACTIONS(1232),
        [sym_identifier_name] = ACTIONS(1235),
        [sym_comment] = ACTIONS(97),
    },
    [339] = {
        [anon_sym_SEMI] = ACTIONS(1238),
        [sym_comment] = ACTIONS(97),
    },
    [340] = {
        [sym_variable_declarator] = STATE(188),
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_GT] = ACTIONS(333),
        [sym_identifier_name] = ACTIONS(1240),
        [sym_comment] = ACTIONS(97),
    },
    [341] = {
        [aux_sym_variable_declaration_repeat1] = STATE(190),
        [anon_sym_SEMI] = ACTIONS(1243),
        [anon_sym_COMMA] = ACTIONS(1247),
        [sym_comment] = ACTIONS(97),
    },
    [342] = {
        [anon_sym_SEMI] = ACTIONS(645),
        [anon_sym_RBRACE] = ACTIONS(1251),
        [anon_sym_COMMA] = ACTIONS(1254),
        [sym_comment] = ACTIONS(97),
    },
    [343] = {
        [sym__hexadecimal_escape_sequence] = ACTIONS(1258),
        [aux_sym_SLASH_BSLASH_BSLASHu_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1261),
        [aux_sym_SLASH_BSLASH_BSLASHU_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1261),
        [anon_sym_BSLASH_SQUOTE] = ACTIONS(1261),
        [anon_sym_BSLASH_DQUOTE] = ACTIONS(1261),
        [anon_sym_BSLASH_BSLASH] = ACTIONS(1261),
        [anon_sym_BSLASH0] = ACTIONS(1261),
        [anon_sym_BSLASHa] = ACTIONS(1261),
        [anon_sym_BSLASHb] = ACTIONS(1261),
        [anon_sym_BSLASHf] = ACTIONS(1261),
        [anon_sym_BSLASHn] = ACTIONS(1261),
        [anon_sym_BSLASHr] = ACTIONS(1261),
        [anon_sym_BSLASHt] = ACTIONS(1261),
        [anon_sym_BSLASHv] = ACTIONS(1261),
        [anon_sym_DQUOTE] = ACTIONS(1261),
        [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_SLASH] = ACTIONS(1258),
        [sym_comment] = ACTIONS(97),
    },
    [344] = {
        [anon_sym_LBRACE] = ACTIONS(1264),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_GT] = ACTIONS(329),
        [sym_identifier_name] = ACTIONS(331),
        [sym_comment] = ACTIONS(97),
    },
    [345] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(99),
        [anon_sym_COMMA] = ACTIONS(1266),
        [anon_sym_GT] = ACTIONS(1270),
        [sym_comment] = ACTIONS(97),
    },
    [346] = {
        [anon_sym_SEMI] = ACTIONS(1274),
        [anon_sym_LBRACE] = ACTIONS(811),
        [anon_sym_DOT] = ACTIONS(813),
        [sym_comment] = ACTIONS(97),
    },
    [347] = {
        [sym__type_declaration] = STATE(14),
        [sym_using_directive] = STATE(49),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [sym__global_attributes] = STATE(26),
        [aux_sym_compilation_unit_repeat3] = STATE(356),
        [aux_sym_compilation_unit_repeat4] = STATE(357),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1276),
        [anon_sym_using] = ACTIONS(103),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(97),
    },
    [348] = {
        [sym__type_declaration] = STATE(14),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [sym__global_attributes] = STATE(47),
        [aux_sym_compilation_unit_repeat4] = STATE(355),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1279),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(97),
    },
    [349] = {
        [sym__type_declaration] = STATE(46),
        [sym_namespace_declaration] = STATE(46),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1283),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_RBRACE] = ACTIONS(823),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(97),
    },
    [350] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1288),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [351] = {
        [anon_sym_RBRACE] = ACTIONS(1290),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(97),
    },
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(1292),
        [anon_sym_SEMI] = ACTIONS(1298),
        [anon_sym_namespace] = ACTIONS(1300),
        [anon_sym_RBRACE] = ACTIONS(1292),
        [anon_sym_class] = ACTIONS(1300),
        [anon_sym_unsafe] = ACTIONS(1300),
        [anon_sym_abstract] = ACTIONS(1300),
        [anon_sym_sealed] = ACTIONS(1300),
        [anon_sym_static] = ACTIONS(1300),
        [anon_sym_new] = ACTIONS(1300),
        [anon_sym_public] = ACTIONS(1300),
        [anon_sym_protected] = ACTIONS(1300),
        [anon_sym_internal] = ACTIONS(1300),
        [anon_sym_private] = ACTIONS(1300),
        [anon_sym_struct] = ACTIONS(1300),
        [anon_sym_enum] = ACTIONS(1300),
        [anon_sym_sbyte] = ACTIONS(1300),
        [anon_sym_byte] = ACTIONS(1300),
        [anon_sym_short] = ACTIONS(1300),
        [anon_sym_ushort] = ACTIONS(1300),
        [anon_sym_int] = ACTIONS(1300),
        [anon_sym_uint] = ACTIONS(1300),
        [anon_sym_long] = ACTIONS(1300),
        [anon_sym_ulong] = ACTIONS(1300),
        [anon_sym_char] = ACTIONS(1300),
        [anon_sym_delegate] = ACTIONS(1300),
        [anon_sym_LBRACK] = ACTIONS(1292),
        [anon_sym_readonly] = ACTIONS(1300),
        [anon_sym_volatile] = ACTIONS(1300),
        [anon_sym_bool] = ACTIONS(1300),
        [anon_sym_decimal] = ACTIONS(1300),
        [anon_sym_double] = ACTIONS(1300),
        [anon_sym_float] = ACTIONS(1300),
        [anon_sym_object] = ACTIONS(1300),
        [anon_sym_string] = ACTIONS(1300),
        [sym_identifier_name] = ACTIONS(1306),
        [sym_comment] = ACTIONS(97),
    },
    [353] = {
        [ts_builtin_sym_end] = ACTIONS(1312),
        [anon_sym_namespace] = ACTIONS(1318),
        [anon_sym_RBRACE] = ACTIONS(1312),
        [anon_sym_class] = ACTIONS(1318),
        [anon_sym_unsafe] = ACTIONS(1318),
        [anon_sym_abstract] = ACTIONS(1318),
        [anon_sym_sealed] = ACTIONS(1318),
        [anon_sym_static] = ACTIONS(1318),
        [anon_sym_new] = ACTIONS(1318),
        [anon_sym_public] = ACTIONS(1318),
        [anon_sym_protected] = ACTIONS(1318),
        [anon_sym_internal] = ACTIONS(1318),
        [anon_sym_private] = ACTIONS(1318),
        [anon_sym_struct] = ACTIONS(1318),
        [anon_sym_enum] = ACTIONS(1318),
        [anon_sym_sbyte] = ACTIONS(1318),
        [anon_sym_byte] = ACTIONS(1318),
        [anon_sym_short] = ACTIONS(1318),
        [anon_sym_ushort] = ACTIONS(1318),
        [anon_sym_int] = ACTIONS(1318),
        [anon_sym_uint] = ACTIONS(1318),
        [anon_sym_long] = ACTIONS(1318),
        [anon_sym_ulong] = ACTIONS(1318),
        [anon_sym_char] = ACTIONS(1318),
        [anon_sym_delegate] = ACTIONS(1318),
        [anon_sym_LBRACK] = ACTIONS(1312),
        [anon_sym_readonly] = ACTIONS(1318),
        [anon_sym_volatile] = ACTIONS(1318),
        [anon_sym_bool] = ACTIONS(1318),
        [anon_sym_decimal] = ACTIONS(1318),
        [anon_sym_double] = ACTIONS(1318),
        [anon_sym_float] = ACTIONS(1318),
        [anon_sym_object] = ACTIONS(1318),
        [anon_sym_string] = ACTIONS(1318),
        [sym_identifier_name] = ACTIONS(1324),
        [sym_comment] = ACTIONS(97),
    },
    [354] = {
        [ts_builtin_sym_end] = ACTIONS(1330),
        [anon_sym_namespace] = ACTIONS(1339),
        [anon_sym_RBRACE] = ACTIONS(1330),
        [anon_sym_class] = ACTIONS(1339),
        [anon_sym_unsafe] = ACTIONS(1339),
        [anon_sym_abstract] = ACTIONS(1339),
        [anon_sym_sealed] = ACTIONS(1339),
        [anon_sym_static] = ACTIONS(1339),
        [anon_sym_new] = ACTIONS(1339),
        [anon_sym_public] = ACTIONS(1339),
        [anon_sym_protected] = ACTIONS(1339),
        [anon_sym_internal] = ACTIONS(1339),
        [anon_sym_private] = ACTIONS(1339),
        [anon_sym_struct] = ACTIONS(1339),
        [anon_sym_enum] = ACTIONS(1339),
        [anon_sym_sbyte] = ACTIONS(1339),
        [anon_sym_byte] = ACTIONS(1339),
        [anon_sym_short] = ACTIONS(1339),
        [anon_sym_ushort] = ACTIONS(1339),
        [anon_sym_int] = ACTIONS(1339),
        [anon_sym_uint] = ACTIONS(1339),
        [anon_sym_long] = ACTIONS(1339),
        [anon_sym_ulong] = ACTIONS(1339),
        [anon_sym_char] = ACTIONS(1339),
        [anon_sym_delegate] = ACTIONS(1339),
        [anon_sym_LBRACK] = ACTIONS(1330),
        [anon_sym_readonly] = ACTIONS(1339),
        [anon_sym_volatile] = ACTIONS(1339),
        [anon_sym_bool] = ACTIONS(1339),
        [anon_sym_decimal] = ACTIONS(1339),
        [anon_sym_double] = ACTIONS(1339),
        [anon_sym_float] = ACTIONS(1339),
        [anon_sym_object] = ACTIONS(1339),
        [anon_sym_string] = ACTIONS(1339),
        [sym_identifier_name] = ACTIONS(1348),
        [sym_comment] = ACTIONS(97),
    },
    [355] = {
        [sym__type_declaration] = STATE(46),
        [sym_namespace_declaration] = STATE(46),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1357),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(97),
    },
    [356] = {
        [sym__type_declaration] = STATE(14),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [sym__global_attributes] = STATE(47),
        [aux_sym_compilation_unit_repeat4] = STATE(358),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1361),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(97),
    },
    [357] = {
        [sym__type_declaration] = STATE(46),
        [sym_namespace_declaration] = STATE(46),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1361),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(97),
    },
    [358] = {
        [sym__type_declaration] = STATE(46),
        [sym_namespace_declaration] = STATE(46),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(24),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [ts_builtin_sym_end] = ACTIONS(1364),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_enum] = ACTIONS(117),
        [anon_sym_delegate] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(97),
    },
    [359] = {
        [ts_builtin_sym_end] = ACTIONS(1367),
        [anon_sym_using] = ACTIONS(1367),
        [anon_sym_namespace] = ACTIONS(1367),
        [anon_sym_class] = ACTIONS(1367),
        [anon_sym_unsafe] = ACTIONS(1367),
        [anon_sym_abstract] = ACTIONS(1367),
        [anon_sym_sealed] = ACTIONS(1367),
        [anon_sym_static] = ACTIONS(1367),
        [anon_sym_new] = ACTIONS(1367),
        [anon_sym_public] = ACTIONS(1367),
        [anon_sym_protected] = ACTIONS(1367),
        [anon_sym_internal] = ACTIONS(1367),
        [anon_sym_private] = ACTIONS(1367),
        [anon_sym_struct] = ACTIONS(1367),
        [anon_sym_enum] = ACTIONS(1367),
        [anon_sym_delegate] = ACTIONS(1367),
        [anon_sym_LBRACK] = ACTIONS(1367),
        [sym_comment] = ACTIONS(97),
    },
    [360] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(362),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1370),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [361] = {
        [ts_builtin_sym_end] = ACTIONS(1372),
        [anon_sym_namespace] = ACTIONS(1379),
        [anon_sym_RBRACE] = ACTIONS(1372),
        [anon_sym_class] = ACTIONS(1379),
        [anon_sym_unsafe] = ACTIONS(1379),
        [anon_sym_abstract] = ACTIONS(1379),
        [anon_sym_sealed] = ACTIONS(1379),
        [anon_sym_static] = ACTIONS(1379),
        [anon_sym_new] = ACTIONS(1379),
        [anon_sym_public] = ACTIONS(1379),
        [anon_sym_protected] = ACTIONS(1379),
        [anon_sym_internal] = ACTIONS(1379),
        [anon_sym_private] = ACTIONS(1379),
        [anon_sym_struct] = ACTIONS(1379),
        [anon_sym_enum] = ACTIONS(1379),
        [anon_sym_sbyte] = ACTIONS(1379),
        [anon_sym_byte] = ACTIONS(1379),
        [anon_sym_short] = ACTIONS(1379),
        [anon_sym_ushort] = ACTIONS(1379),
        [anon_sym_int] = ACTIONS(1379),
        [anon_sym_uint] = ACTIONS(1379),
        [anon_sym_long] = ACTIONS(1379),
        [anon_sym_ulong] = ACTIONS(1379),
        [anon_sym_char] = ACTIONS(1379),
        [anon_sym_delegate] = ACTIONS(1379),
        [anon_sym_LBRACK] = ACTIONS(1372),
        [anon_sym_readonly] = ACTIONS(1379),
        [anon_sym_volatile] = ACTIONS(1379),
        [anon_sym_bool] = ACTIONS(1379),
        [anon_sym_decimal] = ACTIONS(1379),
        [anon_sym_double] = ACTIONS(1379),
        [anon_sym_float] = ACTIONS(1379),
        [anon_sym_object] = ACTIONS(1379),
        [anon_sym_string] = ACTIONS(1379),
        [sym_identifier_name] = ACTIONS(1386),
        [sym_comment] = ACTIONS(97),
    },
    [362] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1393),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [363] = {
        [ts_builtin_sym_end] = ACTIONS(1395),
        [anon_sym_namespace] = ACTIONS(1402),
        [anon_sym_RBRACE] = ACTIONS(1395),
        [anon_sym_class] = ACTIONS(1402),
        [anon_sym_unsafe] = ACTIONS(1402),
        [anon_sym_abstract] = ACTIONS(1402),
        [anon_sym_sealed] = ACTIONS(1402),
        [anon_sym_static] = ACTIONS(1402),
        [anon_sym_new] = ACTIONS(1402),
        [anon_sym_public] = ACTIONS(1402),
        [anon_sym_protected] = ACTIONS(1402),
        [anon_sym_internal] = ACTIONS(1402),
        [anon_sym_private] = ACTIONS(1402),
        [anon_sym_struct] = ACTIONS(1402),
        [anon_sym_enum] = ACTIONS(1402),
        [anon_sym_sbyte] = ACTIONS(1402),
        [anon_sym_byte] = ACTIONS(1402),
        [anon_sym_short] = ACTIONS(1402),
        [anon_sym_ushort] = ACTIONS(1402),
        [anon_sym_int] = ACTIONS(1402),
        [anon_sym_uint] = ACTIONS(1402),
        [anon_sym_long] = ACTIONS(1402),
        [anon_sym_ulong] = ACTIONS(1402),
        [anon_sym_char] = ACTIONS(1402),
        [anon_sym_delegate] = ACTIONS(1402),
        [anon_sym_LBRACK] = ACTIONS(1395),
        [anon_sym_readonly] = ACTIONS(1402),
        [anon_sym_volatile] = ACTIONS(1402),
        [anon_sym_bool] = ACTIONS(1402),
        [anon_sym_decimal] = ACTIONS(1402),
        [anon_sym_double] = ACTIONS(1402),
        [anon_sym_float] = ACTIONS(1402),
        [anon_sym_object] = ACTIONS(1402),
        [anon_sym_string] = ACTIONS(1402),
        [sym_identifier_name] = ACTIONS(1409),
        [sym_comment] = ACTIONS(97),
    },
    [364] = {
        [sym_equals_value_clause] = STATE(194),
        [anon_sym_SEMI] = ACTIONS(631),
        [anon_sym_COMMA] = ACTIONS(1416),
        [anon_sym_RPAREN] = ACTIONS(1131),
        [anon_sym_EQ] = ACTIONS(371),
        [sym_comment] = ACTIONS(97),
    },
    [365] = {
        [anon_sym_RBRACE] = ACTIONS(1421),
        [anon_sym_class] = ACTIONS(1425),
        [anon_sym_unsafe] = ACTIONS(1425),
        [anon_sym_abstract] = ACTIONS(1425),
        [anon_sym_sealed] = ACTIONS(1425),
        [anon_sym_static] = ACTIONS(1425),
        [anon_sym_new] = ACTIONS(1425),
        [anon_sym_public] = ACTIONS(1425),
        [anon_sym_protected] = ACTIONS(1425),
        [anon_sym_internal] = ACTIONS(1425),
        [anon_sym_private] = ACTIONS(1425),
        [anon_sym_struct] = ACTIONS(1425),
        [anon_sym_enum] = ACTIONS(1425),
        [anon_sym_sbyte] = ACTIONS(1425),
        [anon_sym_byte] = ACTIONS(1425),
        [anon_sym_short] = ACTIONS(1425),
        [anon_sym_ushort] = ACTIONS(1425),
        [anon_sym_int] = ACTIONS(1425),
        [anon_sym_uint] = ACTIONS(1425),
        [anon_sym_long] = ACTIONS(1425),
        [anon_sym_ulong] = ACTIONS(1425),
        [anon_sym_char] = ACTIONS(1425),
        [anon_sym_delegate] = ACTIONS(1425),
        [anon_sym_LBRACK] = ACTIONS(1421),
        [anon_sym_readonly] = ACTIONS(1425),
        [anon_sym_volatile] = ACTIONS(1425),
        [anon_sym_bool] = ACTIONS(1425),
        [anon_sym_decimal] = ACTIONS(1425),
        [anon_sym_double] = ACTIONS(1425),
        [anon_sym_float] = ACTIONS(1425),
        [anon_sym_object] = ACTIONS(1425),
        [anon_sym_string] = ACTIONS(1425),
        [sym_identifier_name] = ACTIONS(1429),
        [sym_comment] = ACTIONS(97),
    },
    [366] = {
        [anon_sym_SEMI] = ACTIONS(1433),
        [sym_comment] = ACTIONS(97),
    },
    [367] = {
        [anon_sym_RBRACE] = ACTIONS(1435),
        [anon_sym_class] = ACTIONS(1438),
        [anon_sym_unsafe] = ACTIONS(1438),
        [anon_sym_abstract] = ACTIONS(1438),
        [anon_sym_sealed] = ACTIONS(1438),
        [anon_sym_static] = ACTIONS(1438),
        [anon_sym_new] = ACTIONS(1438),
        [anon_sym_public] = ACTIONS(1438),
        [anon_sym_protected] = ACTIONS(1438),
        [anon_sym_internal] = ACTIONS(1438),
        [anon_sym_private] = ACTIONS(1438),
        [anon_sym_struct] = ACTIONS(1438),
        [anon_sym_enum] = ACTIONS(1438),
        [anon_sym_sbyte] = ACTIONS(1438),
        [anon_sym_byte] = ACTIONS(1438),
        [anon_sym_short] = ACTIONS(1438),
        [anon_sym_ushort] = ACTIONS(1438),
        [anon_sym_int] = ACTIONS(1438),
        [anon_sym_uint] = ACTIONS(1438),
        [anon_sym_long] = ACTIONS(1438),
        [anon_sym_ulong] = ACTIONS(1438),
        [anon_sym_char] = ACTIONS(1438),
        [anon_sym_delegate] = ACTIONS(1438),
        [anon_sym_LBRACK] = ACTIONS(1435),
        [anon_sym_readonly] = ACTIONS(1438),
        [anon_sym_volatile] = ACTIONS(1438),
        [anon_sym_bool] = ACTIONS(1438),
        [anon_sym_decimal] = ACTIONS(1438),
        [anon_sym_double] = ACTIONS(1438),
        [anon_sym_float] = ACTIONS(1438),
        [anon_sym_object] = ACTIONS(1438),
        [anon_sym_string] = ACTIONS(1438),
        [sym_identifier_name] = ACTIONS(1441),
        [sym_comment] = ACTIONS(97),
    },
    [368] = {
        [sym_equals_value_clause] = STATE(116),
        [sym_type_parameter_list] = STATE(94),
        [anon_sym_RBRACE] = ACTIONS(379),
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_EQ] = ACTIONS(371),
        [anon_sym_LT] = ACTIONS(275),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(97),
    },
    [369] = {
        [sym_variable_declarator] = STATE(188),
        [sym_identifier_name] = ACTIONS(1444),
        [sym_comment] = ACTIONS(97),
    },
    [370] = {
        [sym_equals_value_clause] = STATE(194),
        [anon_sym_SEMI] = ACTIONS(631),
        [anon_sym_COMMA] = ACTIONS(1446),
        [anon_sym_RPAREN] = ACTIONS(311),
        [anon_sym_EQ] = ACTIONS(371),
        [sym_comment] = ACTIONS(97),
    },
    [371] = {
        [sym_identifier_name] = ACTIONS(1449),
        [sym_comment] = ACTIONS(97),
    },
    [372] = {
        [anon_sym_COMMA] = ACTIONS(1451),
        [anon_sym_RPAREN] = ACTIONS(1451),
        [sym_comment] = ACTIONS(97),
    },
    [373] = {
        [ts_builtin_sym_end] = ACTIONS(1454),
        [anon_sym_namespace] = ACTIONS(1458),
        [anon_sym_RBRACE] = ACTIONS(1454),
        [anon_sym_class] = ACTIONS(1458),
        [anon_sym_unsafe] = ACTIONS(1458),
        [anon_sym_abstract] = ACTIONS(1458),
        [anon_sym_sealed] = ACTIONS(1458),
        [anon_sym_static] = ACTIONS(1458),
        [anon_sym_new] = ACTIONS(1458),
        [anon_sym_public] = ACTIONS(1458),
        [anon_sym_protected] = ACTIONS(1458),
        [anon_sym_internal] = ACTIONS(1458),
        [anon_sym_private] = ACTIONS(1458),
        [anon_sym_struct] = ACTIONS(1458),
        [anon_sym_enum] = ACTIONS(1458),
        [anon_sym_sbyte] = ACTIONS(1458),
        [anon_sym_byte] = ACTIONS(1458),
        [anon_sym_short] = ACTIONS(1458),
        [anon_sym_ushort] = ACTIONS(1458),
        [anon_sym_int] = ACTIONS(1458),
        [anon_sym_uint] = ACTIONS(1458),
        [anon_sym_long] = ACTIONS(1458),
        [anon_sym_ulong] = ACTIONS(1458),
        [anon_sym_char] = ACTIONS(1458),
        [anon_sym_delegate] = ACTIONS(1458),
        [anon_sym_LBRACK] = ACTIONS(1454),
        [anon_sym_readonly] = ACTIONS(1458),
        [anon_sym_volatile] = ACTIONS(1458),
        [anon_sym_bool] = ACTIONS(1458),
        [anon_sym_decimal] = ACTIONS(1458),
        [anon_sym_double] = ACTIONS(1458),
        [anon_sym_float] = ACTIONS(1458),
        [anon_sym_object] = ACTIONS(1458),
        [anon_sym_string] = ACTIONS(1458),
        [sym_identifier_name] = ACTIONS(1462),
        [sym_comment] = ACTIONS(97),
    },
    [374] = {
        [sym_parameter_list] = STATE(328),
        [anon_sym_LPAREN] = ACTIONS(281),
        [sym_comment] = ACTIONS(97),
    },
    [375] = {
        [sym__return_type] = STATE(376),
        [sym__type] = STATE(66),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [sym_void_keyword] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [376] = {
        [sym_identifier_name] = ACTIONS(1466),
        [sym_comment] = ACTIONS(97),
    },
    [377] = {
        [sym_parameter_list] = STATE(378),
        [anon_sym_LPAREN] = ACTIONS(281),
        [sym_comment] = ACTIONS(97),
    },
    [378] = {
        [anon_sym_SEMI] = ACTIONS(1468),
        [sym_comment] = ACTIONS(97),
    },
    [379] = {
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
        [anon_sym_delegate] = ACTIONS(1473),
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
        [sym_comment] = ACTIONS(97),
    },
    [380] = {
        [sym_enum_member_declaration] = STATE(381),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [381] = {
        [aux_sym_enum_declaration_repeat1] = STATE(383),
        [anon_sym_RBRACE] = ACTIONS(1479),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(97),
    },
    [382] = {
        [ts_builtin_sym_end] = ACTIONS(1481),
        [anon_sym_SEMI] = ACTIONS(1485),
        [anon_sym_namespace] = ACTIONS(1487),
        [anon_sym_RBRACE] = ACTIONS(1481),
        [anon_sym_class] = ACTIONS(1487),
        [anon_sym_unsafe] = ACTIONS(1487),
        [anon_sym_abstract] = ACTIONS(1487),
        [anon_sym_sealed] = ACTIONS(1487),
        [anon_sym_static] = ACTIONS(1487),
        [anon_sym_new] = ACTIONS(1487),
        [anon_sym_public] = ACTIONS(1487),
        [anon_sym_protected] = ACTIONS(1487),
        [anon_sym_internal] = ACTIONS(1487),
        [anon_sym_private] = ACTIONS(1487),
        [anon_sym_struct] = ACTIONS(1487),
        [anon_sym_enum] = ACTIONS(1487),
        [anon_sym_sbyte] = ACTIONS(1487),
        [anon_sym_byte] = ACTIONS(1487),
        [anon_sym_short] = ACTIONS(1487),
        [anon_sym_ushort] = ACTIONS(1487),
        [anon_sym_int] = ACTIONS(1487),
        [anon_sym_uint] = ACTIONS(1487),
        [anon_sym_long] = ACTIONS(1487),
        [anon_sym_ulong] = ACTIONS(1487),
        [anon_sym_char] = ACTIONS(1487),
        [anon_sym_delegate] = ACTIONS(1487),
        [anon_sym_LBRACK] = ACTIONS(1481),
        [anon_sym_readonly] = ACTIONS(1487),
        [anon_sym_volatile] = ACTIONS(1487),
        [anon_sym_bool] = ACTIONS(1487),
        [anon_sym_decimal] = ACTIONS(1487),
        [anon_sym_double] = ACTIONS(1487),
        [anon_sym_float] = ACTIONS(1487),
        [anon_sym_object] = ACTIONS(1487),
        [anon_sym_string] = ACTIONS(1487),
        [sym_identifier_name] = ACTIONS(1491),
        [sym_comment] = ACTIONS(97),
    },
    [383] = {
        [anon_sym_RBRACE] = ACTIONS(1495),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(97),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(1497),
        [anon_sym_SEMI] = ACTIONS(1501),
        [anon_sym_namespace] = ACTIONS(1503),
        [anon_sym_RBRACE] = ACTIONS(1497),
        [anon_sym_class] = ACTIONS(1503),
        [anon_sym_unsafe] = ACTIONS(1503),
        [anon_sym_abstract] = ACTIONS(1503),
        [anon_sym_sealed] = ACTIONS(1503),
        [anon_sym_static] = ACTIONS(1503),
        [anon_sym_new] = ACTIONS(1503),
        [anon_sym_public] = ACTIONS(1503),
        [anon_sym_protected] = ACTIONS(1503),
        [anon_sym_internal] = ACTIONS(1503),
        [anon_sym_private] = ACTIONS(1503),
        [anon_sym_struct] = ACTIONS(1503),
        [anon_sym_enum] = ACTIONS(1503),
        [anon_sym_sbyte] = ACTIONS(1503),
        [anon_sym_byte] = ACTIONS(1503),
        [anon_sym_short] = ACTIONS(1503),
        [anon_sym_ushort] = ACTIONS(1503),
        [anon_sym_int] = ACTIONS(1503),
        [anon_sym_uint] = ACTIONS(1503),
        [anon_sym_long] = ACTIONS(1503),
        [anon_sym_ulong] = ACTIONS(1503),
        [anon_sym_char] = ACTIONS(1503),
        [anon_sym_delegate] = ACTIONS(1503),
        [anon_sym_LBRACK] = ACTIONS(1497),
        [anon_sym_readonly] = ACTIONS(1503),
        [anon_sym_volatile] = ACTIONS(1503),
        [anon_sym_bool] = ACTIONS(1503),
        [anon_sym_decimal] = ACTIONS(1503),
        [anon_sym_double] = ACTIONS(1503),
        [anon_sym_float] = ACTIONS(1503),
        [anon_sym_object] = ACTIONS(1503),
        [anon_sym_string] = ACTIONS(1503),
        [sym_identifier_name] = ACTIONS(1507),
        [sym_comment] = ACTIONS(97),
    },
    [385] = {
        [ts_builtin_sym_end] = ACTIONS(1511),
        [anon_sym_namespace] = ACTIONS(1515),
        [anon_sym_RBRACE] = ACTIONS(1511),
        [anon_sym_class] = ACTIONS(1515),
        [anon_sym_unsafe] = ACTIONS(1515),
        [anon_sym_abstract] = ACTIONS(1515),
        [anon_sym_sealed] = ACTIONS(1515),
        [anon_sym_static] = ACTIONS(1515),
        [anon_sym_new] = ACTIONS(1515),
        [anon_sym_public] = ACTIONS(1515),
        [anon_sym_protected] = ACTIONS(1515),
        [anon_sym_internal] = ACTIONS(1515),
        [anon_sym_private] = ACTIONS(1515),
        [anon_sym_struct] = ACTIONS(1515),
        [anon_sym_enum] = ACTIONS(1515),
        [anon_sym_sbyte] = ACTIONS(1515),
        [anon_sym_byte] = ACTIONS(1515),
        [anon_sym_short] = ACTIONS(1515),
        [anon_sym_ushort] = ACTIONS(1515),
        [anon_sym_int] = ACTIONS(1515),
        [anon_sym_uint] = ACTIONS(1515),
        [anon_sym_long] = ACTIONS(1515),
        [anon_sym_ulong] = ACTIONS(1515),
        [anon_sym_char] = ACTIONS(1515),
        [anon_sym_delegate] = ACTIONS(1515),
        [anon_sym_LBRACK] = ACTIONS(1511),
        [anon_sym_readonly] = ACTIONS(1515),
        [anon_sym_volatile] = ACTIONS(1515),
        [anon_sym_bool] = ACTIONS(1515),
        [anon_sym_decimal] = ACTIONS(1515),
        [anon_sym_double] = ACTIONS(1515),
        [anon_sym_float] = ACTIONS(1515),
        [anon_sym_object] = ACTIONS(1515),
        [anon_sym_string] = ACTIONS(1515),
        [sym_identifier_name] = ACTIONS(1519),
        [sym_comment] = ACTIONS(97),
    },
    [386] = {
        [ts_builtin_sym_end] = ACTIONS(1497),
        [anon_sym_namespace] = ACTIONS(1503),
        [anon_sym_RBRACE] = ACTIONS(1497),
        [anon_sym_class] = ACTIONS(1503),
        [anon_sym_unsafe] = ACTIONS(1503),
        [anon_sym_abstract] = ACTIONS(1503),
        [anon_sym_sealed] = ACTIONS(1503),
        [anon_sym_static] = ACTIONS(1503),
        [anon_sym_new] = ACTIONS(1503),
        [anon_sym_public] = ACTIONS(1503),
        [anon_sym_protected] = ACTIONS(1503),
        [anon_sym_internal] = ACTIONS(1503),
        [anon_sym_private] = ACTIONS(1503),
        [anon_sym_struct] = ACTIONS(1503),
        [anon_sym_enum] = ACTIONS(1503),
        [anon_sym_sbyte] = ACTIONS(1503),
        [anon_sym_byte] = ACTIONS(1503),
        [anon_sym_short] = ACTIONS(1503),
        [anon_sym_ushort] = ACTIONS(1503),
        [anon_sym_int] = ACTIONS(1503),
        [anon_sym_uint] = ACTIONS(1503),
        [anon_sym_long] = ACTIONS(1503),
        [anon_sym_ulong] = ACTIONS(1503),
        [anon_sym_char] = ACTIONS(1503),
        [anon_sym_delegate] = ACTIONS(1503),
        [anon_sym_LBRACK] = ACTIONS(1497),
        [anon_sym_readonly] = ACTIONS(1503),
        [anon_sym_volatile] = ACTIONS(1503),
        [anon_sym_bool] = ACTIONS(1503),
        [anon_sym_decimal] = ACTIONS(1503),
        [anon_sym_double] = ACTIONS(1503),
        [anon_sym_float] = ACTIONS(1503),
        [anon_sym_object] = ACTIONS(1503),
        [anon_sym_string] = ACTIONS(1503),
        [sym_identifier_name] = ACTIONS(1507),
        [sym_comment] = ACTIONS(97),
    },
    [387] = {
        [sym_identifier_name] = ACTIONS(1523),
        [sym_comment] = ACTIONS(97),
    },
    [388] = {
        [anon_sym_LBRACE] = ACTIONS(1525),
        [anon_sym_COLON] = ACTIONS(1527),
        [sym_comment] = ACTIONS(97),
    },
    [389] = {
        [sym_enum_member_declaration] = STATE(399),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [390] = {
        [sym__integral_type] = STATE(391),
        [anon_sym_sbyte] = ACTIONS(363),
        [anon_sym_byte] = ACTIONS(363),
        [anon_sym_short] = ACTIONS(363),
        [anon_sym_ushort] = ACTIONS(363),
        [anon_sym_int] = ACTIONS(363),
        [anon_sym_uint] = ACTIONS(363),
        [anon_sym_long] = ACTIONS(363),
        [anon_sym_ulong] = ACTIONS(363),
        [anon_sym_char] = ACTIONS(363),
        [sym_comment] = ACTIONS(97),
    },
    [391] = {
        [anon_sym_LBRACE] = ACTIONS(1529),
        [sym_comment] = ACTIONS(97),
    },
    [392] = {
        [sym_enum_member_declaration] = STATE(393),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [393] = {
        [aux_sym_enum_declaration_repeat1] = STATE(395),
        [anon_sym_RBRACE] = ACTIONS(1531),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(97),
    },
    [394] = {
        [ts_builtin_sym_end] = ACTIONS(1533),
        [anon_sym_SEMI] = ACTIONS(1536),
        [anon_sym_namespace] = ACTIONS(1538),
        [anon_sym_RBRACE] = ACTIONS(1533),
        [anon_sym_class] = ACTIONS(1538),
        [anon_sym_unsafe] = ACTIONS(1538),
        [anon_sym_abstract] = ACTIONS(1538),
        [anon_sym_sealed] = ACTIONS(1538),
        [anon_sym_static] = ACTIONS(1538),
        [anon_sym_new] = ACTIONS(1538),
        [anon_sym_public] = ACTIONS(1538),
        [anon_sym_protected] = ACTIONS(1538),
        [anon_sym_internal] = ACTIONS(1538),
        [anon_sym_private] = ACTIONS(1538),
        [anon_sym_struct] = ACTIONS(1538),
        [anon_sym_enum] = ACTIONS(1538),
        [anon_sym_sbyte] = ACTIONS(1538),
        [anon_sym_byte] = ACTIONS(1538),
        [anon_sym_short] = ACTIONS(1538),
        [anon_sym_ushort] = ACTIONS(1538),
        [anon_sym_int] = ACTIONS(1538),
        [anon_sym_uint] = ACTIONS(1538),
        [anon_sym_long] = ACTIONS(1538),
        [anon_sym_ulong] = ACTIONS(1538),
        [anon_sym_char] = ACTIONS(1538),
        [anon_sym_delegate] = ACTIONS(1538),
        [anon_sym_LBRACK] = ACTIONS(1533),
        [anon_sym_readonly] = ACTIONS(1538),
        [anon_sym_volatile] = ACTIONS(1538),
        [anon_sym_bool] = ACTIONS(1538),
        [anon_sym_decimal] = ACTIONS(1538),
        [anon_sym_double] = ACTIONS(1538),
        [anon_sym_float] = ACTIONS(1538),
        [anon_sym_object] = ACTIONS(1538),
        [anon_sym_string] = ACTIONS(1538),
        [sym_identifier_name] = ACTIONS(1541),
        [sym_comment] = ACTIONS(97),
    },
    [395] = {
        [anon_sym_RBRACE] = ACTIONS(1544),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(97),
    },
    [396] = {
        [ts_builtin_sym_end] = ACTIONS(1546),
        [anon_sym_SEMI] = ACTIONS(1549),
        [anon_sym_namespace] = ACTIONS(1551),
        [anon_sym_RBRACE] = ACTIONS(1546),
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
        [anon_sym_delegate] = ACTIONS(1551),
        [anon_sym_LBRACK] = ACTIONS(1546),
        [anon_sym_readonly] = ACTIONS(1551),
        [anon_sym_volatile] = ACTIONS(1551),
        [anon_sym_bool] = ACTIONS(1551),
        [anon_sym_decimal] = ACTIONS(1551),
        [anon_sym_double] = ACTIONS(1551),
        [anon_sym_float] = ACTIONS(1551),
        [anon_sym_object] = ACTIONS(1551),
        [anon_sym_string] = ACTIONS(1551),
        [sym_identifier_name] = ACTIONS(1554),
        [sym_comment] = ACTIONS(97),
    },
    [397] = {
        [ts_builtin_sym_end] = ACTIONS(1557),
        [anon_sym_namespace] = ACTIONS(1560),
        [anon_sym_RBRACE] = ACTIONS(1557),
        [anon_sym_class] = ACTIONS(1560),
        [anon_sym_unsafe] = ACTIONS(1560),
        [anon_sym_abstract] = ACTIONS(1560),
        [anon_sym_sealed] = ACTIONS(1560),
        [anon_sym_static] = ACTIONS(1560),
        [anon_sym_new] = ACTIONS(1560),
        [anon_sym_public] = ACTIONS(1560),
        [anon_sym_protected] = ACTIONS(1560),
        [anon_sym_internal] = ACTIONS(1560),
        [anon_sym_private] = ACTIONS(1560),
        [anon_sym_struct] = ACTIONS(1560),
        [anon_sym_enum] = ACTIONS(1560),
        [anon_sym_sbyte] = ACTIONS(1560),
        [anon_sym_byte] = ACTIONS(1560),
        [anon_sym_short] = ACTIONS(1560),
        [anon_sym_ushort] = ACTIONS(1560),
        [anon_sym_int] = ACTIONS(1560),
        [anon_sym_uint] = ACTIONS(1560),
        [anon_sym_long] = ACTIONS(1560),
        [anon_sym_ulong] = ACTIONS(1560),
        [anon_sym_char] = ACTIONS(1560),
        [anon_sym_delegate] = ACTIONS(1560),
        [anon_sym_LBRACK] = ACTIONS(1557),
        [anon_sym_readonly] = ACTIONS(1560),
        [anon_sym_volatile] = ACTIONS(1560),
        [anon_sym_bool] = ACTIONS(1560),
        [anon_sym_decimal] = ACTIONS(1560),
        [anon_sym_double] = ACTIONS(1560),
        [anon_sym_float] = ACTIONS(1560),
        [anon_sym_object] = ACTIONS(1560),
        [anon_sym_string] = ACTIONS(1560),
        [sym_identifier_name] = ACTIONS(1563),
        [sym_comment] = ACTIONS(97),
    },
    [398] = {
        [ts_builtin_sym_end] = ACTIONS(1546),
        [anon_sym_namespace] = ACTIONS(1551),
        [anon_sym_RBRACE] = ACTIONS(1546),
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
        [anon_sym_delegate] = ACTIONS(1551),
        [anon_sym_LBRACK] = ACTIONS(1546),
        [anon_sym_readonly] = ACTIONS(1551),
        [anon_sym_volatile] = ACTIONS(1551),
        [anon_sym_bool] = ACTIONS(1551),
        [anon_sym_decimal] = ACTIONS(1551),
        [anon_sym_double] = ACTIONS(1551),
        [anon_sym_float] = ACTIONS(1551),
        [anon_sym_object] = ACTIONS(1551),
        [anon_sym_string] = ACTIONS(1551),
        [sym_identifier_name] = ACTIONS(1554),
        [sym_comment] = ACTIONS(97),
    },
    [399] = {
        [aux_sym_enum_declaration_repeat1] = STATE(401),
        [anon_sym_RBRACE] = ACTIONS(1566),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(97),
    },
    [400] = {
        [ts_builtin_sym_end] = ACTIONS(1568),
        [anon_sym_SEMI] = ACTIONS(1571),
        [anon_sym_namespace] = ACTIONS(1573),
        [anon_sym_RBRACE] = ACTIONS(1568),
        [anon_sym_class] = ACTIONS(1573),
        [anon_sym_unsafe] = ACTIONS(1573),
        [anon_sym_abstract] = ACTIONS(1573),
        [anon_sym_sealed] = ACTIONS(1573),
        [anon_sym_static] = ACTIONS(1573),
        [anon_sym_new] = ACTIONS(1573),
        [anon_sym_public] = ACTIONS(1573),
        [anon_sym_protected] = ACTIONS(1573),
        [anon_sym_internal] = ACTIONS(1573),
        [anon_sym_private] = ACTIONS(1573),
        [anon_sym_struct] = ACTIONS(1573),
        [anon_sym_enum] = ACTIONS(1573),
        [anon_sym_sbyte] = ACTIONS(1573),
        [anon_sym_byte] = ACTIONS(1573),
        [anon_sym_short] = ACTIONS(1573),
        [anon_sym_ushort] = ACTIONS(1573),
        [anon_sym_int] = ACTIONS(1573),
        [anon_sym_uint] = ACTIONS(1573),
        [anon_sym_long] = ACTIONS(1573),
        [anon_sym_ulong] = ACTIONS(1573),
        [anon_sym_char] = ACTIONS(1573),
        [anon_sym_delegate] = ACTIONS(1573),
        [anon_sym_LBRACK] = ACTIONS(1568),
        [anon_sym_readonly] = ACTIONS(1573),
        [anon_sym_volatile] = ACTIONS(1573),
        [anon_sym_bool] = ACTIONS(1573),
        [anon_sym_decimal] = ACTIONS(1573),
        [anon_sym_double] = ACTIONS(1573),
        [anon_sym_float] = ACTIONS(1573),
        [anon_sym_object] = ACTIONS(1573),
        [anon_sym_string] = ACTIONS(1573),
        [sym_identifier_name] = ACTIONS(1576),
        [sym_comment] = ACTIONS(97),
    },
    [401] = {
        [anon_sym_RBRACE] = ACTIONS(1579),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(97),
    },
    [402] = {
        [ts_builtin_sym_end] = ACTIONS(1581),
        [anon_sym_SEMI] = ACTIONS(1584),
        [anon_sym_namespace] = ACTIONS(1586),
        [anon_sym_RBRACE] = ACTIONS(1581),
        [anon_sym_class] = ACTIONS(1586),
        [anon_sym_unsafe] = ACTIONS(1586),
        [anon_sym_abstract] = ACTIONS(1586),
        [anon_sym_sealed] = ACTIONS(1586),
        [anon_sym_static] = ACTIONS(1586),
        [anon_sym_new] = ACTIONS(1586),
        [anon_sym_public] = ACTIONS(1586),
        [anon_sym_protected] = ACTIONS(1586),
        [anon_sym_internal] = ACTIONS(1586),
        [anon_sym_private] = ACTIONS(1586),
        [anon_sym_struct] = ACTIONS(1586),
        [anon_sym_enum] = ACTIONS(1586),
        [anon_sym_sbyte] = ACTIONS(1586),
        [anon_sym_byte] = ACTIONS(1586),
        [anon_sym_short] = ACTIONS(1586),
        [anon_sym_ushort] = ACTIONS(1586),
        [anon_sym_int] = ACTIONS(1586),
        [anon_sym_uint] = ACTIONS(1586),
        [anon_sym_long] = ACTIONS(1586),
        [anon_sym_ulong] = ACTIONS(1586),
        [anon_sym_char] = ACTIONS(1586),
        [anon_sym_delegate] = ACTIONS(1586),
        [anon_sym_LBRACK] = ACTIONS(1581),
        [anon_sym_readonly] = ACTIONS(1586),
        [anon_sym_volatile] = ACTIONS(1586),
        [anon_sym_bool] = ACTIONS(1586),
        [anon_sym_decimal] = ACTIONS(1586),
        [anon_sym_double] = ACTIONS(1586),
        [anon_sym_float] = ACTIONS(1586),
        [anon_sym_object] = ACTIONS(1586),
        [anon_sym_string] = ACTIONS(1586),
        [sym_identifier_name] = ACTIONS(1589),
        [sym_comment] = ACTIONS(97),
    },
    [403] = {
        [ts_builtin_sym_end] = ACTIONS(1533),
        [anon_sym_namespace] = ACTIONS(1538),
        [anon_sym_RBRACE] = ACTIONS(1533),
        [anon_sym_class] = ACTIONS(1538),
        [anon_sym_unsafe] = ACTIONS(1538),
        [anon_sym_abstract] = ACTIONS(1538),
        [anon_sym_sealed] = ACTIONS(1538),
        [anon_sym_static] = ACTIONS(1538),
        [anon_sym_new] = ACTIONS(1538),
        [anon_sym_public] = ACTIONS(1538),
        [anon_sym_protected] = ACTIONS(1538),
        [anon_sym_internal] = ACTIONS(1538),
        [anon_sym_private] = ACTIONS(1538),
        [anon_sym_struct] = ACTIONS(1538),
        [anon_sym_enum] = ACTIONS(1538),
        [anon_sym_sbyte] = ACTIONS(1538),
        [anon_sym_byte] = ACTIONS(1538),
        [anon_sym_short] = ACTIONS(1538),
        [anon_sym_ushort] = ACTIONS(1538),
        [anon_sym_int] = ACTIONS(1538),
        [anon_sym_uint] = ACTIONS(1538),
        [anon_sym_long] = ACTIONS(1538),
        [anon_sym_ulong] = ACTIONS(1538),
        [anon_sym_char] = ACTIONS(1538),
        [anon_sym_delegate] = ACTIONS(1538),
        [anon_sym_LBRACK] = ACTIONS(1533),
        [anon_sym_readonly] = ACTIONS(1538),
        [anon_sym_volatile] = ACTIONS(1538),
        [anon_sym_bool] = ACTIONS(1538),
        [anon_sym_decimal] = ACTIONS(1538),
        [anon_sym_double] = ACTIONS(1538),
        [anon_sym_float] = ACTIONS(1538),
        [anon_sym_object] = ACTIONS(1538),
        [anon_sym_string] = ACTIONS(1538),
        [sym_identifier_name] = ACTIONS(1541),
        [sym_comment] = ACTIONS(97),
    },
    [404] = {
        [ts_builtin_sym_end] = ACTIONS(1581),
        [anon_sym_namespace] = ACTIONS(1586),
        [anon_sym_RBRACE] = ACTIONS(1581),
        [anon_sym_class] = ACTIONS(1586),
        [anon_sym_unsafe] = ACTIONS(1586),
        [anon_sym_abstract] = ACTIONS(1586),
        [anon_sym_sealed] = ACTIONS(1586),
        [anon_sym_static] = ACTIONS(1586),
        [anon_sym_new] = ACTIONS(1586),
        [anon_sym_public] = ACTIONS(1586),
        [anon_sym_protected] = ACTIONS(1586),
        [anon_sym_internal] = ACTIONS(1586),
        [anon_sym_private] = ACTIONS(1586),
        [anon_sym_struct] = ACTIONS(1586),
        [anon_sym_enum] = ACTIONS(1586),
        [anon_sym_sbyte] = ACTIONS(1586),
        [anon_sym_byte] = ACTIONS(1586),
        [anon_sym_short] = ACTIONS(1586),
        [anon_sym_ushort] = ACTIONS(1586),
        [anon_sym_int] = ACTIONS(1586),
        [anon_sym_uint] = ACTIONS(1586),
        [anon_sym_long] = ACTIONS(1586),
        [anon_sym_ulong] = ACTIONS(1586),
        [anon_sym_char] = ACTIONS(1586),
        [anon_sym_delegate] = ACTIONS(1586),
        [anon_sym_LBRACK] = ACTIONS(1581),
        [anon_sym_readonly] = ACTIONS(1586),
        [anon_sym_volatile] = ACTIONS(1586),
        [anon_sym_bool] = ACTIONS(1586),
        [anon_sym_decimal] = ACTIONS(1586),
        [anon_sym_double] = ACTIONS(1586),
        [anon_sym_float] = ACTIONS(1586),
        [anon_sym_object] = ACTIONS(1586),
        [anon_sym_string] = ACTIONS(1586),
        [sym_identifier_name] = ACTIONS(1589),
        [sym_comment] = ACTIONS(97),
    },
    [405] = {
        [ts_builtin_sym_end] = ACTIONS(1592),
        [anon_sym_SEMI] = ACTIONS(1598),
        [anon_sym_namespace] = ACTIONS(1600),
        [anon_sym_RBRACE] = ACTIONS(1592),
        [anon_sym_class] = ACTIONS(1600),
        [anon_sym_unsafe] = ACTIONS(1600),
        [anon_sym_abstract] = ACTIONS(1600),
        [anon_sym_sealed] = ACTIONS(1600),
        [anon_sym_static] = ACTIONS(1600),
        [anon_sym_new] = ACTIONS(1600),
        [anon_sym_public] = ACTIONS(1600),
        [anon_sym_protected] = ACTIONS(1600),
        [anon_sym_internal] = ACTIONS(1600),
        [anon_sym_private] = ACTIONS(1600),
        [anon_sym_struct] = ACTIONS(1600),
        [anon_sym_enum] = ACTIONS(1600),
        [anon_sym_sbyte] = ACTIONS(1600),
        [anon_sym_byte] = ACTIONS(1600),
        [anon_sym_short] = ACTIONS(1600),
        [anon_sym_ushort] = ACTIONS(1600),
        [anon_sym_int] = ACTIONS(1600),
        [anon_sym_uint] = ACTIONS(1600),
        [anon_sym_long] = ACTIONS(1600),
        [anon_sym_ulong] = ACTIONS(1600),
        [anon_sym_char] = ACTIONS(1600),
        [anon_sym_delegate] = ACTIONS(1600),
        [anon_sym_LBRACK] = ACTIONS(1592),
        [anon_sym_readonly] = ACTIONS(1600),
        [anon_sym_volatile] = ACTIONS(1600),
        [anon_sym_bool] = ACTIONS(1600),
        [anon_sym_decimal] = ACTIONS(1600),
        [anon_sym_double] = ACTIONS(1600),
        [anon_sym_float] = ACTIONS(1600),
        [anon_sym_object] = ACTIONS(1600),
        [anon_sym_string] = ACTIONS(1600),
        [sym_identifier_name] = ACTIONS(1606),
        [sym_comment] = ACTIONS(97),
    },
    [406] = {
        [ts_builtin_sym_end] = ACTIONS(1292),
        [anon_sym_namespace] = ACTIONS(1300),
        [anon_sym_RBRACE] = ACTIONS(1292),
        [anon_sym_class] = ACTIONS(1300),
        [anon_sym_unsafe] = ACTIONS(1300),
        [anon_sym_abstract] = ACTIONS(1300),
        [anon_sym_sealed] = ACTIONS(1300),
        [anon_sym_static] = ACTIONS(1300),
        [anon_sym_new] = ACTIONS(1300),
        [anon_sym_public] = ACTIONS(1300),
        [anon_sym_protected] = ACTIONS(1300),
        [anon_sym_internal] = ACTIONS(1300),
        [anon_sym_private] = ACTIONS(1300),
        [anon_sym_struct] = ACTIONS(1300),
        [anon_sym_enum] = ACTIONS(1300),
        [anon_sym_sbyte] = ACTIONS(1300),
        [anon_sym_byte] = ACTIONS(1300),
        [anon_sym_short] = ACTIONS(1300),
        [anon_sym_ushort] = ACTIONS(1300),
        [anon_sym_int] = ACTIONS(1300),
        [anon_sym_uint] = ACTIONS(1300),
        [anon_sym_long] = ACTIONS(1300),
        [anon_sym_ulong] = ACTIONS(1300),
        [anon_sym_char] = ACTIONS(1300),
        [anon_sym_delegate] = ACTIONS(1300),
        [anon_sym_LBRACK] = ACTIONS(1292),
        [anon_sym_readonly] = ACTIONS(1300),
        [anon_sym_volatile] = ACTIONS(1300),
        [anon_sym_bool] = ACTIONS(1300),
        [anon_sym_decimal] = ACTIONS(1300),
        [anon_sym_double] = ACTIONS(1300),
        [anon_sym_float] = ACTIONS(1300),
        [anon_sym_object] = ACTIONS(1300),
        [anon_sym_string] = ACTIONS(1300),
        [sym_identifier_name] = ACTIONS(1306),
        [sym_comment] = ACTIONS(97),
    },
    [407] = {
        [sym_identifier_name] = ACTIONS(1612),
        [sym_comment] = ACTIONS(97),
    },
    [408] = {
        [sym_type_parameter_list] = STATE(410),
        [anon_sym_LBRACE] = ACTIONS(1614),
        [anon_sym_LT] = ACTIONS(275),
        [sym_comment] = ACTIONS(97),
    },
    [409] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(416),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1616),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [410] = {
        [anon_sym_LBRACE] = ACTIONS(1618),
        [sym_comment] = ACTIONS(97),
    },
    [411] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(413),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1620),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [412] = {
        [ts_builtin_sym_end] = ACTIONS(1622),
        [anon_sym_namespace] = ACTIONS(1625),
        [anon_sym_RBRACE] = ACTIONS(1622),
        [anon_sym_class] = ACTIONS(1625),
        [anon_sym_unsafe] = ACTIONS(1625),
        [anon_sym_abstract] = ACTIONS(1625),
        [anon_sym_sealed] = ACTIONS(1625),
        [anon_sym_static] = ACTIONS(1625),
        [anon_sym_new] = ACTIONS(1625),
        [anon_sym_public] = ACTIONS(1625),
        [anon_sym_protected] = ACTIONS(1625),
        [anon_sym_internal] = ACTIONS(1625),
        [anon_sym_private] = ACTIONS(1625),
        [anon_sym_struct] = ACTIONS(1625),
        [anon_sym_enum] = ACTIONS(1625),
        [anon_sym_sbyte] = ACTIONS(1625),
        [anon_sym_byte] = ACTIONS(1625),
        [anon_sym_short] = ACTIONS(1625),
        [anon_sym_ushort] = ACTIONS(1625),
        [anon_sym_int] = ACTIONS(1625),
        [anon_sym_uint] = ACTIONS(1625),
        [anon_sym_long] = ACTIONS(1625),
        [anon_sym_ulong] = ACTIONS(1625),
        [anon_sym_char] = ACTIONS(1625),
        [anon_sym_delegate] = ACTIONS(1625),
        [anon_sym_LBRACK] = ACTIONS(1622),
        [anon_sym_readonly] = ACTIONS(1625),
        [anon_sym_volatile] = ACTIONS(1625),
        [anon_sym_bool] = ACTIONS(1625),
        [anon_sym_decimal] = ACTIONS(1625),
        [anon_sym_double] = ACTIONS(1625),
        [anon_sym_float] = ACTIONS(1625),
        [anon_sym_object] = ACTIONS(1625),
        [anon_sym_string] = ACTIONS(1625),
        [sym_identifier_name] = ACTIONS(1628),
        [sym_comment] = ACTIONS(97),
    },
    [413] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1631),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [414] = {
        [ts_builtin_sym_end] = ACTIONS(1633),
        [anon_sym_namespace] = ACTIONS(1636),
        [anon_sym_RBRACE] = ACTIONS(1633),
        [anon_sym_class] = ACTIONS(1636),
        [anon_sym_unsafe] = ACTIONS(1636),
        [anon_sym_abstract] = ACTIONS(1636),
        [anon_sym_sealed] = ACTIONS(1636),
        [anon_sym_static] = ACTIONS(1636),
        [anon_sym_new] = ACTIONS(1636),
        [anon_sym_public] = ACTIONS(1636),
        [anon_sym_protected] = ACTIONS(1636),
        [anon_sym_internal] = ACTIONS(1636),
        [anon_sym_private] = ACTIONS(1636),
        [anon_sym_struct] = ACTIONS(1636),
        [anon_sym_enum] = ACTIONS(1636),
        [anon_sym_sbyte] = ACTIONS(1636),
        [anon_sym_byte] = ACTIONS(1636),
        [anon_sym_short] = ACTIONS(1636),
        [anon_sym_ushort] = ACTIONS(1636),
        [anon_sym_int] = ACTIONS(1636),
        [anon_sym_uint] = ACTIONS(1636),
        [anon_sym_long] = ACTIONS(1636),
        [anon_sym_ulong] = ACTIONS(1636),
        [anon_sym_char] = ACTIONS(1636),
        [anon_sym_delegate] = ACTIONS(1636),
        [anon_sym_LBRACK] = ACTIONS(1633),
        [anon_sym_readonly] = ACTIONS(1636),
        [anon_sym_volatile] = ACTIONS(1636),
        [anon_sym_bool] = ACTIONS(1636),
        [anon_sym_decimal] = ACTIONS(1636),
        [anon_sym_double] = ACTIONS(1636),
        [anon_sym_float] = ACTIONS(1636),
        [anon_sym_object] = ACTIONS(1636),
        [anon_sym_string] = ACTIONS(1636),
        [sym_identifier_name] = ACTIONS(1639),
        [sym_comment] = ACTIONS(97),
    },
    [415] = {
        [ts_builtin_sym_end] = ACTIONS(1642),
        [anon_sym_namespace] = ACTIONS(1645),
        [anon_sym_RBRACE] = ACTIONS(1642),
        [anon_sym_class] = ACTIONS(1645),
        [anon_sym_unsafe] = ACTIONS(1645),
        [anon_sym_abstract] = ACTIONS(1645),
        [anon_sym_sealed] = ACTIONS(1645),
        [anon_sym_static] = ACTIONS(1645),
        [anon_sym_new] = ACTIONS(1645),
        [anon_sym_public] = ACTIONS(1645),
        [anon_sym_protected] = ACTIONS(1645),
        [anon_sym_internal] = ACTIONS(1645),
        [anon_sym_private] = ACTIONS(1645),
        [anon_sym_struct] = ACTIONS(1645),
        [anon_sym_enum] = ACTIONS(1645),
        [anon_sym_sbyte] = ACTIONS(1645),
        [anon_sym_byte] = ACTIONS(1645),
        [anon_sym_short] = ACTIONS(1645),
        [anon_sym_ushort] = ACTIONS(1645),
        [anon_sym_int] = ACTIONS(1645),
        [anon_sym_uint] = ACTIONS(1645),
        [anon_sym_long] = ACTIONS(1645),
        [anon_sym_ulong] = ACTIONS(1645),
        [anon_sym_char] = ACTIONS(1645),
        [anon_sym_delegate] = ACTIONS(1645),
        [anon_sym_LBRACK] = ACTIONS(1642),
        [anon_sym_readonly] = ACTIONS(1645),
        [anon_sym_volatile] = ACTIONS(1645),
        [anon_sym_bool] = ACTIONS(1645),
        [anon_sym_decimal] = ACTIONS(1645),
        [anon_sym_double] = ACTIONS(1645),
        [anon_sym_float] = ACTIONS(1645),
        [anon_sym_object] = ACTIONS(1645),
        [anon_sym_string] = ACTIONS(1645),
        [sym_identifier_name] = ACTIONS(1648),
        [sym_comment] = ACTIONS(97),
    },
    [416] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1620),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [417] = {
        [sym_identifier_name] = ACTIONS(1651),
        [sym_comment] = ACTIONS(97),
    },
    [418] = {
        [sym_type_parameter_list] = STATE(420),
        [anon_sym_LBRACE] = ACTIONS(1653),
        [anon_sym_LT] = ACTIONS(275),
        [sym_comment] = ACTIONS(97),
    },
    [419] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(426),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1655),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [420] = {
        [anon_sym_LBRACE] = ACTIONS(1657),
        [sym_comment] = ACTIONS(97),
    },
    [421] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(423),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1659),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [422] = {
        [ts_builtin_sym_end] = ACTIONS(1661),
        [anon_sym_namespace] = ACTIONS(1664),
        [anon_sym_RBRACE] = ACTIONS(1661),
        [anon_sym_class] = ACTIONS(1664),
        [anon_sym_unsafe] = ACTIONS(1664),
        [anon_sym_abstract] = ACTIONS(1664),
        [anon_sym_sealed] = ACTIONS(1664),
        [anon_sym_static] = ACTIONS(1664),
        [anon_sym_new] = ACTIONS(1664),
        [anon_sym_public] = ACTIONS(1664),
        [anon_sym_protected] = ACTIONS(1664),
        [anon_sym_internal] = ACTIONS(1664),
        [anon_sym_private] = ACTIONS(1664),
        [anon_sym_struct] = ACTIONS(1664),
        [anon_sym_enum] = ACTIONS(1664),
        [anon_sym_sbyte] = ACTIONS(1664),
        [anon_sym_byte] = ACTIONS(1664),
        [anon_sym_short] = ACTIONS(1664),
        [anon_sym_ushort] = ACTIONS(1664),
        [anon_sym_int] = ACTIONS(1664),
        [anon_sym_uint] = ACTIONS(1664),
        [anon_sym_long] = ACTIONS(1664),
        [anon_sym_ulong] = ACTIONS(1664),
        [anon_sym_char] = ACTIONS(1664),
        [anon_sym_delegate] = ACTIONS(1664),
        [anon_sym_LBRACK] = ACTIONS(1661),
        [anon_sym_readonly] = ACTIONS(1664),
        [anon_sym_volatile] = ACTIONS(1664),
        [anon_sym_bool] = ACTIONS(1664),
        [anon_sym_decimal] = ACTIONS(1664),
        [anon_sym_double] = ACTIONS(1664),
        [anon_sym_float] = ACTIONS(1664),
        [anon_sym_object] = ACTIONS(1664),
        [anon_sym_string] = ACTIONS(1664),
        [sym_identifier_name] = ACTIONS(1667),
        [sym_comment] = ACTIONS(97),
    },
    [423] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1670),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [424] = {
        [ts_builtin_sym_end] = ACTIONS(1672),
        [anon_sym_namespace] = ACTIONS(1675),
        [anon_sym_RBRACE] = ACTIONS(1672),
        [anon_sym_class] = ACTIONS(1675),
        [anon_sym_unsafe] = ACTIONS(1675),
        [anon_sym_abstract] = ACTIONS(1675),
        [anon_sym_sealed] = ACTIONS(1675),
        [anon_sym_static] = ACTIONS(1675),
        [anon_sym_new] = ACTIONS(1675),
        [anon_sym_public] = ACTIONS(1675),
        [anon_sym_protected] = ACTIONS(1675),
        [anon_sym_internal] = ACTIONS(1675),
        [anon_sym_private] = ACTIONS(1675),
        [anon_sym_struct] = ACTIONS(1675),
        [anon_sym_enum] = ACTIONS(1675),
        [anon_sym_sbyte] = ACTIONS(1675),
        [anon_sym_byte] = ACTIONS(1675),
        [anon_sym_short] = ACTIONS(1675),
        [anon_sym_ushort] = ACTIONS(1675),
        [anon_sym_int] = ACTIONS(1675),
        [anon_sym_uint] = ACTIONS(1675),
        [anon_sym_long] = ACTIONS(1675),
        [anon_sym_ulong] = ACTIONS(1675),
        [anon_sym_char] = ACTIONS(1675),
        [anon_sym_delegate] = ACTIONS(1675),
        [anon_sym_LBRACK] = ACTIONS(1672),
        [anon_sym_readonly] = ACTIONS(1675),
        [anon_sym_volatile] = ACTIONS(1675),
        [anon_sym_bool] = ACTIONS(1675),
        [anon_sym_decimal] = ACTIONS(1675),
        [anon_sym_double] = ACTIONS(1675),
        [anon_sym_float] = ACTIONS(1675),
        [anon_sym_object] = ACTIONS(1675),
        [anon_sym_string] = ACTIONS(1675),
        [sym_identifier_name] = ACTIONS(1678),
        [sym_comment] = ACTIONS(97),
    },
    [425] = {
        [ts_builtin_sym_end] = ACTIONS(1681),
        [anon_sym_namespace] = ACTIONS(1684),
        [anon_sym_RBRACE] = ACTIONS(1681),
        [anon_sym_class] = ACTIONS(1684),
        [anon_sym_unsafe] = ACTIONS(1684),
        [anon_sym_abstract] = ACTIONS(1684),
        [anon_sym_sealed] = ACTIONS(1684),
        [anon_sym_static] = ACTIONS(1684),
        [anon_sym_new] = ACTIONS(1684),
        [anon_sym_public] = ACTIONS(1684),
        [anon_sym_protected] = ACTIONS(1684),
        [anon_sym_internal] = ACTIONS(1684),
        [anon_sym_private] = ACTIONS(1684),
        [anon_sym_struct] = ACTIONS(1684),
        [anon_sym_enum] = ACTIONS(1684),
        [anon_sym_sbyte] = ACTIONS(1684),
        [anon_sym_byte] = ACTIONS(1684),
        [anon_sym_short] = ACTIONS(1684),
        [anon_sym_ushort] = ACTIONS(1684),
        [anon_sym_int] = ACTIONS(1684),
        [anon_sym_uint] = ACTIONS(1684),
        [anon_sym_long] = ACTIONS(1684),
        [anon_sym_ulong] = ACTIONS(1684),
        [anon_sym_char] = ACTIONS(1684),
        [anon_sym_delegate] = ACTIONS(1684),
        [anon_sym_LBRACK] = ACTIONS(1681),
        [anon_sym_readonly] = ACTIONS(1684),
        [anon_sym_volatile] = ACTIONS(1684),
        [anon_sym_bool] = ACTIONS(1684),
        [anon_sym_decimal] = ACTIONS(1684),
        [anon_sym_double] = ACTIONS(1684),
        [anon_sym_float] = ACTIONS(1684),
        [anon_sym_object] = ACTIONS(1684),
        [anon_sym_string] = ACTIONS(1684),
        [sym_identifier_name] = ACTIONS(1687),
        [sym_comment] = ACTIONS(97),
    },
    [426] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1659),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [427] = {
        [ts_builtin_sym_end] = ACTIONS(1690),
        [anon_sym_extern] = ACTIONS(855),
        [anon_sym_using] = ACTIONS(1690),
        [anon_sym_namespace] = ACTIONS(1690),
        [anon_sym_class] = ACTIONS(1690),
        [anon_sym_unsafe] = ACTIONS(1690),
        [anon_sym_abstract] = ACTIONS(1690),
        [anon_sym_sealed] = ACTIONS(1690),
        [anon_sym_static] = ACTIONS(1690),
        [anon_sym_new] = ACTIONS(1690),
        [anon_sym_public] = ACTIONS(1690),
        [anon_sym_protected] = ACTIONS(1690),
        [anon_sym_internal] = ACTIONS(1690),
        [anon_sym_private] = ACTIONS(1690),
        [anon_sym_struct] = ACTIONS(1690),
        [anon_sym_enum] = ACTIONS(1690),
        [anon_sym_delegate] = ACTIONS(1690),
        [anon_sym_LBRACK] = ACTIONS(1690),
        [sym_comment] = ACTIONS(97),
    },
    [428] = {
        [sym__type_declaration] = STATE(432),
        [sym_namespace_declaration] = STATE(14),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_member_declaration] = STATE(433),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(434),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_compilation_unit_repeat4] = STATE(276),
        [aux_sym_class_declaration_repeat1] = STATE(435),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_namespace] = ACTIONS(960),
        [anon_sym_RBRACE] = ACTIONS(1694),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(964),
        [sym_comment] = ACTIONS(97),
    },
    [429] = {
        [sym__integral_type] = STATE(325),
        [anon_sym_sbyte] = ACTIONS(363),
        [anon_sym_byte] = ACTIONS(363),
        [anon_sym_short] = ACTIONS(363),
        [anon_sym_ushort] = ACTIONS(363),
        [anon_sym_int] = ACTIONS(363),
        [anon_sym_uint] = ACTIONS(363),
        [anon_sym_long] = ACTIONS(363),
        [anon_sym_ulong] = ACTIONS(363),
        [anon_sym_char] = ACTIONS(363),
        [sym_comment] = ACTIONS(97),
    },
    [430] = {
        [ts_builtin_sym_end] = ACTIONS(1696),
        [anon_sym_namespace] = ACTIONS(1704),
        [anon_sym_RBRACE] = ACTIONS(1696),
        [anon_sym_class] = ACTIONS(1704),
        [anon_sym_unsafe] = ACTIONS(1704),
        [anon_sym_abstract] = ACTIONS(1704),
        [anon_sym_sealed] = ACTIONS(1704),
        [anon_sym_static] = ACTIONS(1704),
        [anon_sym_new] = ACTIONS(1704),
        [anon_sym_public] = ACTIONS(1704),
        [anon_sym_protected] = ACTIONS(1704),
        [anon_sym_internal] = ACTIONS(1704),
        [anon_sym_private] = ACTIONS(1704),
        [anon_sym_struct] = ACTIONS(1704),
        [anon_sym_enum] = ACTIONS(1704),
        [anon_sym_sbyte] = ACTIONS(1712),
        [anon_sym_byte] = ACTIONS(1712),
        [anon_sym_short] = ACTIONS(1712),
        [anon_sym_ushort] = ACTIONS(1712),
        [anon_sym_int] = ACTIONS(1712),
        [anon_sym_uint] = ACTIONS(1712),
        [anon_sym_long] = ACTIONS(1712),
        [anon_sym_ulong] = ACTIONS(1712),
        [anon_sym_char] = ACTIONS(1712),
        [anon_sym_delegate] = ACTIONS(1704),
        [anon_sym_LBRACK] = ACTIONS(1696),
        [anon_sym_readonly] = ACTIONS(1712),
        [anon_sym_volatile] = ACTIONS(1712),
        [anon_sym_bool] = ACTIONS(1712),
        [anon_sym_decimal] = ACTIONS(1712),
        [anon_sym_double] = ACTIONS(1712),
        [anon_sym_float] = ACTIONS(1712),
        [anon_sym_object] = ACTIONS(1712),
        [anon_sym_string] = ACTIONS(1712),
        [sym_identifier_name] = ACTIONS(1719),
        [sym_comment] = ACTIONS(97),
    },
    [431] = {
        [sym_equals_value_clause] = STATE(161),
        [sym_type_parameter_list] = STATE(94),
        [anon_sym_RBRACE] = ACTIONS(369),
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_EQ] = ACTIONS(371),
        [anon_sym_LT] = ACTIONS(275),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(97),
    },
    [432] = {
        [anon_sym_namespace] = ACTIONS(1726),
        [anon_sym_RBRACE] = ACTIONS(1728),
        [anon_sym_class] = ACTIONS(1731),
        [anon_sym_unsafe] = ACTIONS(1731),
        [anon_sym_abstract] = ACTIONS(1731),
        [anon_sym_sealed] = ACTIONS(1731),
        [anon_sym_static] = ACTIONS(1731),
        [anon_sym_new] = ACTIONS(1731),
        [anon_sym_public] = ACTIONS(1731),
        [anon_sym_protected] = ACTIONS(1731),
        [anon_sym_internal] = ACTIONS(1731),
        [anon_sym_private] = ACTIONS(1731),
        [anon_sym_struct] = ACTIONS(1731),
        [anon_sym_enum] = ACTIONS(1731),
        [anon_sym_sbyte] = ACTIONS(597),
        [anon_sym_byte] = ACTIONS(597),
        [anon_sym_short] = ACTIONS(597),
        [anon_sym_ushort] = ACTIONS(597),
        [anon_sym_int] = ACTIONS(597),
        [anon_sym_uint] = ACTIONS(597),
        [anon_sym_long] = ACTIONS(597),
        [anon_sym_ulong] = ACTIONS(597),
        [anon_sym_char] = ACTIONS(597),
        [anon_sym_delegate] = ACTIONS(1731),
        [anon_sym_LBRACK] = ACTIONS(1728),
        [anon_sym_readonly] = ACTIONS(597),
        [anon_sym_volatile] = ACTIONS(597),
        [anon_sym_bool] = ACTIONS(597),
        [anon_sym_decimal] = ACTIONS(597),
        [anon_sym_double] = ACTIONS(597),
        [anon_sym_float] = ACTIONS(597),
        [anon_sym_object] = ACTIONS(597),
        [anon_sym_string] = ACTIONS(597),
        [sym_identifier_name] = ACTIONS(599),
        [sym_comment] = ACTIONS(97),
    },
    [433] = {
        [aux_sym_enum_declaration_repeat1] = STATE(437),
        [anon_sym_RBRACE] = ACTIONS(1734),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(97),
    },
    [434] = {
        [sym_class_modifiers] = STATE(60),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_modifiers] = STATE(61),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_modifier] = STATE(62),
        [sym_delegate_modifier] = STATE(63),
        [sym_field_modifiers] = STATE(198),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(196),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(603),
        [anon_sym_enum] = ACTIONS(605),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(607),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(1205),
        [sym_comment] = ACTIONS(97),
    },
    [435] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1370),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [436] = {
        [ts_builtin_sym_end] = ACTIONS(1736),
        [anon_sym_SEMI] = ACTIONS(1740),
        [anon_sym_namespace] = ACTIONS(1742),
        [anon_sym_RBRACE] = ACTIONS(1736),
        [anon_sym_class] = ACTIONS(1742),
        [anon_sym_unsafe] = ACTIONS(1742),
        [anon_sym_abstract] = ACTIONS(1742),
        [anon_sym_sealed] = ACTIONS(1742),
        [anon_sym_static] = ACTIONS(1742),
        [anon_sym_new] = ACTIONS(1742),
        [anon_sym_public] = ACTIONS(1742),
        [anon_sym_protected] = ACTIONS(1742),
        [anon_sym_internal] = ACTIONS(1742),
        [anon_sym_private] = ACTIONS(1742),
        [anon_sym_struct] = ACTIONS(1742),
        [anon_sym_enum] = ACTIONS(1742),
        [anon_sym_sbyte] = ACTIONS(1742),
        [anon_sym_byte] = ACTIONS(1742),
        [anon_sym_short] = ACTIONS(1742),
        [anon_sym_ushort] = ACTIONS(1742),
        [anon_sym_int] = ACTIONS(1742),
        [anon_sym_uint] = ACTIONS(1742),
        [anon_sym_long] = ACTIONS(1742),
        [anon_sym_ulong] = ACTIONS(1742),
        [anon_sym_char] = ACTIONS(1742),
        [anon_sym_delegate] = ACTIONS(1742),
        [anon_sym_LBRACK] = ACTIONS(1736),
        [anon_sym_readonly] = ACTIONS(1742),
        [anon_sym_volatile] = ACTIONS(1742),
        [anon_sym_bool] = ACTIONS(1742),
        [anon_sym_decimal] = ACTIONS(1742),
        [anon_sym_double] = ACTIONS(1742),
        [anon_sym_float] = ACTIONS(1742),
        [anon_sym_object] = ACTIONS(1742),
        [anon_sym_string] = ACTIONS(1742),
        [sym_identifier_name] = ACTIONS(1746),
        [sym_comment] = ACTIONS(97),
    },
    [437] = {
        [anon_sym_RBRACE] = ACTIONS(1750),
        [anon_sym_COMMA] = ACTIONS(507),
        [sym_comment] = ACTIONS(97),
    },
    [438] = {
        [ts_builtin_sym_end] = ACTIONS(1752),
        [anon_sym_SEMI] = ACTIONS(1756),
        [anon_sym_namespace] = ACTIONS(1758),
        [anon_sym_RBRACE] = ACTIONS(1752),
        [anon_sym_class] = ACTIONS(1758),
        [anon_sym_unsafe] = ACTIONS(1758),
        [anon_sym_abstract] = ACTIONS(1758),
        [anon_sym_sealed] = ACTIONS(1758),
        [anon_sym_static] = ACTIONS(1758),
        [anon_sym_new] = ACTIONS(1758),
        [anon_sym_public] = ACTIONS(1758),
        [anon_sym_protected] = ACTIONS(1758),
        [anon_sym_internal] = ACTIONS(1758),
        [anon_sym_private] = ACTIONS(1758),
        [anon_sym_struct] = ACTIONS(1758),
        [anon_sym_enum] = ACTIONS(1758),
        [anon_sym_sbyte] = ACTIONS(1758),
        [anon_sym_byte] = ACTIONS(1758),
        [anon_sym_short] = ACTIONS(1758),
        [anon_sym_ushort] = ACTIONS(1758),
        [anon_sym_int] = ACTIONS(1758),
        [anon_sym_uint] = ACTIONS(1758),
        [anon_sym_long] = ACTIONS(1758),
        [anon_sym_ulong] = ACTIONS(1758),
        [anon_sym_char] = ACTIONS(1758),
        [anon_sym_delegate] = ACTIONS(1758),
        [anon_sym_LBRACK] = ACTIONS(1752),
        [anon_sym_readonly] = ACTIONS(1758),
        [anon_sym_volatile] = ACTIONS(1758),
        [anon_sym_bool] = ACTIONS(1758),
        [anon_sym_decimal] = ACTIONS(1758),
        [anon_sym_double] = ACTIONS(1758),
        [anon_sym_float] = ACTIONS(1758),
        [anon_sym_object] = ACTIONS(1758),
        [anon_sym_string] = ACTIONS(1758),
        [sym_identifier_name] = ACTIONS(1762),
        [sym_comment] = ACTIONS(97),
    },
    [439] = {
        [ts_builtin_sym_end] = ACTIONS(1481),
        [anon_sym_namespace] = ACTIONS(1487),
        [anon_sym_RBRACE] = ACTIONS(1481),
        [anon_sym_class] = ACTIONS(1487),
        [anon_sym_unsafe] = ACTIONS(1487),
        [anon_sym_abstract] = ACTIONS(1487),
        [anon_sym_sealed] = ACTIONS(1487),
        [anon_sym_static] = ACTIONS(1487),
        [anon_sym_new] = ACTIONS(1487),
        [anon_sym_public] = ACTIONS(1487),
        [anon_sym_protected] = ACTIONS(1487),
        [anon_sym_internal] = ACTIONS(1487),
        [anon_sym_private] = ACTIONS(1487),
        [anon_sym_struct] = ACTIONS(1487),
        [anon_sym_enum] = ACTIONS(1487),
        [anon_sym_sbyte] = ACTIONS(1487),
        [anon_sym_byte] = ACTIONS(1487),
        [anon_sym_short] = ACTIONS(1487),
        [anon_sym_ushort] = ACTIONS(1487),
        [anon_sym_int] = ACTIONS(1487),
        [anon_sym_uint] = ACTIONS(1487),
        [anon_sym_long] = ACTIONS(1487),
        [anon_sym_ulong] = ACTIONS(1487),
        [anon_sym_char] = ACTIONS(1487),
        [anon_sym_delegate] = ACTIONS(1487),
        [anon_sym_LBRACK] = ACTIONS(1481),
        [anon_sym_readonly] = ACTIONS(1487),
        [anon_sym_volatile] = ACTIONS(1487),
        [anon_sym_bool] = ACTIONS(1487),
        [anon_sym_decimal] = ACTIONS(1487),
        [anon_sym_double] = ACTIONS(1487),
        [anon_sym_float] = ACTIONS(1487),
        [anon_sym_object] = ACTIONS(1487),
        [anon_sym_string] = ACTIONS(1487),
        [sym_identifier_name] = ACTIONS(1491),
        [sym_comment] = ACTIONS(97),
    },
    [440] = {
        [ts_builtin_sym_end] = ACTIONS(1752),
        [anon_sym_namespace] = ACTIONS(1758),
        [anon_sym_RBRACE] = ACTIONS(1752),
        [anon_sym_class] = ACTIONS(1758),
        [anon_sym_unsafe] = ACTIONS(1758),
        [anon_sym_abstract] = ACTIONS(1758),
        [anon_sym_sealed] = ACTIONS(1758),
        [anon_sym_static] = ACTIONS(1758),
        [anon_sym_new] = ACTIONS(1758),
        [anon_sym_public] = ACTIONS(1758),
        [anon_sym_protected] = ACTIONS(1758),
        [anon_sym_internal] = ACTIONS(1758),
        [anon_sym_private] = ACTIONS(1758),
        [anon_sym_struct] = ACTIONS(1758),
        [anon_sym_enum] = ACTIONS(1758),
        [anon_sym_sbyte] = ACTIONS(1758),
        [anon_sym_byte] = ACTIONS(1758),
        [anon_sym_short] = ACTIONS(1758),
        [anon_sym_ushort] = ACTIONS(1758),
        [anon_sym_int] = ACTIONS(1758),
        [anon_sym_uint] = ACTIONS(1758),
        [anon_sym_long] = ACTIONS(1758),
        [anon_sym_ulong] = ACTIONS(1758),
        [anon_sym_char] = ACTIONS(1758),
        [anon_sym_delegate] = ACTIONS(1758),
        [anon_sym_LBRACK] = ACTIONS(1752),
        [anon_sym_readonly] = ACTIONS(1758),
        [anon_sym_volatile] = ACTIONS(1758),
        [anon_sym_bool] = ACTIONS(1758),
        [anon_sym_decimal] = ACTIONS(1758),
        [anon_sym_double] = ACTIONS(1758),
        [anon_sym_float] = ACTIONS(1758),
        [anon_sym_object] = ACTIONS(1758),
        [anon_sym_string] = ACTIONS(1758),
        [sym_identifier_name] = ACTIONS(1762),
        [sym_comment] = ACTIONS(97),
    },
    [441] = {
        [anon_sym_SEMI] = ACTIONS(1766),
        [anon_sym_RBRACE] = ACTIONS(1766),
        [anon_sym_COMMA] = ACTIONS(1766),
        [sym_comment] = ACTIONS(97),
    },
    [442] = {
        [anon_sym_SEMI] = ACTIONS(1770),
        [anon_sym_RBRACE] = ACTIONS(1770),
        [anon_sym_COMMA] = ACTIONS(1770),
        [sym__real_type_suffix] = ACTIONS(1773),
        [sym__exponent_part] = ACTIONS(1775),
        [sym_comment] = ACTIONS(97),
    },
    [443] = {
        [anon_sym_SEMI] = ACTIONS(1777),
        [anon_sym_RBRACE] = ACTIONS(1777),
        [anon_sym_COMMA] = ACTIONS(1777),
        [sym_comment] = ACTIONS(97),
    },
    [444] = {
        [anon_sym_SEMI] = ACTIONS(1777),
        [anon_sym_RBRACE] = ACTIONS(1777),
        [anon_sym_COMMA] = ACTIONS(1777),
        [sym__real_type_suffix] = ACTIONS(1780),
        [sym_comment] = ACTIONS(97),
    },
    [445] = {
        [anon_sym_SEMI] = ACTIONS(1782),
        [anon_sym_RBRACE] = ACTIONS(1782),
        [anon_sym_COMMA] = ACTIONS(1782),
        [sym_comment] = ACTIONS(97),
    },
    [446] = {
        [anon_sym_SEMI] = ACTIONS(1090),
        [anon_sym_RBRACE] = ACTIONS(1090),
        [anon_sym_COMMA] = ACTIONS(1090),
        [sym_comment] = ACTIONS(97),
    },
    [447] = {
        [anon_sym_SEMI] = ACTIONS(295),
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(97),
    },
    [448] = {
        [sym_attribute_argument_list] = STATE(44),
        [sym_equals_value_clause] = STATE(456),
        [sym_type_parameter_list] = STATE(94),
        [anon_sym_SEMI] = ACTIONS(631),
        [anon_sym_RBRACE] = ACTIONS(369),
        [anon_sym_COMMA] = ACTIONS(1785),
        [anon_sym_LPAREN] = ACTIONS(211),
        [anon_sym_RBRACK] = ACTIONS(209),
        [anon_sym_EQ] = ACTIONS(371),
        [anon_sym_LT] = ACTIONS(275),
        [anon_sym_GT] = ACTIONS(273),
        [sym_identifier_name] = ACTIONS(277),
        [sym_comment] = ACTIONS(97),
    },
    [449] = {
        [anon_sym_RBRACE] = ACTIONS(1790),
        [anon_sym_COMMA] = ACTIONS(1790),
        [sym_comment] = ACTIONS(97),
    },
    [450] = {
        [anon_sym_COMMA] = ACTIONS(1793),
        [anon_sym_RPAREN] = ACTIONS(1793),
        [sym_comment] = ACTIONS(97),
    },
    [451] = {
        [sym_parameter_modifier] = STATE(81),
        [sym__type] = STATE(82),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_ref] = ACTIONS(285),
        [anon_sym_out] = ACTIONS(285),
        [anon_sym_this] = ACTIONS(285),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(1205),
        [sym_comment] = ACTIONS(97),
    },
    [452] = {
        [anon_sym_COMMA] = ACTIONS(1796),
        [anon_sym_RBRACK] = ACTIONS(1796),
        [sym_comment] = ACTIONS(97),
    },
    [453] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_GT] = ACTIONS(333),
        [sym_identifier_name] = ACTIONS(305),
        [sym_comment] = ACTIONS(97),
    },
    [454] = {
        [anon_sym_SEMI] = ACTIONS(1799),
        [anon_sym_COMMA] = ACTIONS(1799),
        [sym_comment] = ACTIONS(97),
    },
    [455] = {
        [anon_sym_COMMA] = ACTIONS(1802),
        [anon_sym_GT] = ACTIONS(1802),
        [sym_comment] = ACTIONS(97),
    },
    [456] = {
        [anon_sym_SEMI] = ACTIONS(645),
        [anon_sym_RBRACE] = ACTIONS(379),
        [anon_sym_COMMA] = ACTIONS(1805),
        [sym_comment] = ACTIONS(97),
    },
    [457] = {
        [anon_sym_LBRACE] = ACTIONS(1808),
        [anon_sym_COLON] = ACTIONS(1118),
        [sym_comment] = ACTIONS(97),
    },
    [458] = {
        [sym_enum_member_declaration] = STATE(433),
        [sym__attributes] = STATE(113),
        [sym__attribute_section] = STATE(25),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_LBRACK] = ACTIONS(195),
        [sym_identifier_name] = ACTIONS(361),
        [sym_comment] = ACTIONS(97),
    },
    [459] = {
        [sym_type_parameter_list] = STATE(461),
        [anon_sym_LBRACE] = ACTIONS(1810),
        [anon_sym_LT] = ACTIONS(275),
        [sym_comment] = ACTIONS(97),
    },
    [460] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(467),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1812),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [461] = {
        [anon_sym_LBRACE] = ACTIONS(1814),
        [sym_comment] = ACTIONS(97),
    },
    [462] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(464),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1816),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [463] = {
        [ts_builtin_sym_end] = ACTIONS(1818),
        [anon_sym_namespace] = ACTIONS(1822),
        [anon_sym_RBRACE] = ACTIONS(1818),
        [anon_sym_class] = ACTIONS(1822),
        [anon_sym_unsafe] = ACTIONS(1822),
        [anon_sym_abstract] = ACTIONS(1822),
        [anon_sym_sealed] = ACTIONS(1822),
        [anon_sym_static] = ACTIONS(1822),
        [anon_sym_new] = ACTIONS(1822),
        [anon_sym_public] = ACTIONS(1822),
        [anon_sym_protected] = ACTIONS(1822),
        [anon_sym_internal] = ACTIONS(1822),
        [anon_sym_private] = ACTIONS(1822),
        [anon_sym_struct] = ACTIONS(1822),
        [anon_sym_enum] = ACTIONS(1822),
        [anon_sym_sbyte] = ACTIONS(1822),
        [anon_sym_byte] = ACTIONS(1822),
        [anon_sym_short] = ACTIONS(1822),
        [anon_sym_ushort] = ACTIONS(1822),
        [anon_sym_int] = ACTIONS(1822),
        [anon_sym_uint] = ACTIONS(1822),
        [anon_sym_long] = ACTIONS(1822),
        [anon_sym_ulong] = ACTIONS(1822),
        [anon_sym_char] = ACTIONS(1822),
        [anon_sym_delegate] = ACTIONS(1822),
        [anon_sym_LBRACK] = ACTIONS(1818),
        [anon_sym_readonly] = ACTIONS(1822),
        [anon_sym_volatile] = ACTIONS(1822),
        [anon_sym_bool] = ACTIONS(1822),
        [anon_sym_decimal] = ACTIONS(1822),
        [anon_sym_double] = ACTIONS(1822),
        [anon_sym_float] = ACTIONS(1822),
        [anon_sym_object] = ACTIONS(1822),
        [anon_sym_string] = ACTIONS(1822),
        [sym_identifier_name] = ACTIONS(1826),
        [sym_comment] = ACTIONS(97),
    },
    [464] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1830),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [465] = {
        [ts_builtin_sym_end] = ACTIONS(1832),
        [anon_sym_namespace] = ACTIONS(1836),
        [anon_sym_RBRACE] = ACTIONS(1832),
        [anon_sym_class] = ACTIONS(1836),
        [anon_sym_unsafe] = ACTIONS(1836),
        [anon_sym_abstract] = ACTIONS(1836),
        [anon_sym_sealed] = ACTIONS(1836),
        [anon_sym_static] = ACTIONS(1836),
        [anon_sym_new] = ACTIONS(1836),
        [anon_sym_public] = ACTIONS(1836),
        [anon_sym_protected] = ACTIONS(1836),
        [anon_sym_internal] = ACTIONS(1836),
        [anon_sym_private] = ACTIONS(1836),
        [anon_sym_struct] = ACTIONS(1836),
        [anon_sym_enum] = ACTIONS(1836),
        [anon_sym_sbyte] = ACTIONS(1836),
        [anon_sym_byte] = ACTIONS(1836),
        [anon_sym_short] = ACTIONS(1836),
        [anon_sym_ushort] = ACTIONS(1836),
        [anon_sym_int] = ACTIONS(1836),
        [anon_sym_uint] = ACTIONS(1836),
        [anon_sym_long] = ACTIONS(1836),
        [anon_sym_ulong] = ACTIONS(1836),
        [anon_sym_char] = ACTIONS(1836),
        [anon_sym_delegate] = ACTIONS(1836),
        [anon_sym_LBRACK] = ACTIONS(1832),
        [anon_sym_readonly] = ACTIONS(1836),
        [anon_sym_volatile] = ACTIONS(1836),
        [anon_sym_bool] = ACTIONS(1836),
        [anon_sym_decimal] = ACTIONS(1836),
        [anon_sym_double] = ACTIONS(1836),
        [anon_sym_float] = ACTIONS(1836),
        [anon_sym_object] = ACTIONS(1836),
        [anon_sym_string] = ACTIONS(1836),
        [sym_identifier_name] = ACTIONS(1840),
        [sym_comment] = ACTIONS(97),
    },
    [466] = {
        [ts_builtin_sym_end] = ACTIONS(1844),
        [anon_sym_namespace] = ACTIONS(1848),
        [anon_sym_RBRACE] = ACTIONS(1844),
        [anon_sym_class] = ACTIONS(1848),
        [anon_sym_unsafe] = ACTIONS(1848),
        [anon_sym_abstract] = ACTIONS(1848),
        [anon_sym_sealed] = ACTIONS(1848),
        [anon_sym_static] = ACTIONS(1848),
        [anon_sym_new] = ACTIONS(1848),
        [anon_sym_public] = ACTIONS(1848),
        [anon_sym_protected] = ACTIONS(1848),
        [anon_sym_internal] = ACTIONS(1848),
        [anon_sym_private] = ACTIONS(1848),
        [anon_sym_struct] = ACTIONS(1848),
        [anon_sym_enum] = ACTIONS(1848),
        [anon_sym_sbyte] = ACTIONS(1848),
        [anon_sym_byte] = ACTIONS(1848),
        [anon_sym_short] = ACTIONS(1848),
        [anon_sym_ushort] = ACTIONS(1848),
        [anon_sym_int] = ACTIONS(1848),
        [anon_sym_uint] = ACTIONS(1848),
        [anon_sym_long] = ACTIONS(1848),
        [anon_sym_ulong] = ACTIONS(1848),
        [anon_sym_char] = ACTIONS(1848),
        [anon_sym_delegate] = ACTIONS(1848),
        [anon_sym_LBRACK] = ACTIONS(1844),
        [anon_sym_readonly] = ACTIONS(1848),
        [anon_sym_volatile] = ACTIONS(1848),
        [anon_sym_bool] = ACTIONS(1848),
        [anon_sym_decimal] = ACTIONS(1848),
        [anon_sym_double] = ACTIONS(1848),
        [anon_sym_float] = ACTIONS(1848),
        [anon_sym_object] = ACTIONS(1848),
        [anon_sym_string] = ACTIONS(1848),
        [sym_identifier_name] = ACTIONS(1852),
        [sym_comment] = ACTIONS(97),
    },
    [467] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1816),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [468] = {
        [sym_type_parameter_list] = STATE(470),
        [anon_sym_LBRACE] = ACTIONS(1856),
        [anon_sym_LT] = ACTIONS(275),
        [sym_comment] = ACTIONS(97),
    },
    [469] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(476),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1858),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [470] = {
        [anon_sym_LBRACE] = ACTIONS(1860),
        [sym_comment] = ACTIONS(97),
    },
    [471] = {
        [sym__type_declaration] = STATE(178),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(178),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym_class_declaration_repeat1] = STATE(473),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1862),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [472] = {
        [ts_builtin_sym_end] = ACTIONS(1864),
        [anon_sym_namespace] = ACTIONS(1868),
        [anon_sym_RBRACE] = ACTIONS(1864),
        [anon_sym_class] = ACTIONS(1868),
        [anon_sym_unsafe] = ACTIONS(1868),
        [anon_sym_abstract] = ACTIONS(1868),
        [anon_sym_sealed] = ACTIONS(1868),
        [anon_sym_static] = ACTIONS(1868),
        [anon_sym_new] = ACTIONS(1868),
        [anon_sym_public] = ACTIONS(1868),
        [anon_sym_protected] = ACTIONS(1868),
        [anon_sym_internal] = ACTIONS(1868),
        [anon_sym_private] = ACTIONS(1868),
        [anon_sym_struct] = ACTIONS(1868),
        [anon_sym_enum] = ACTIONS(1868),
        [anon_sym_sbyte] = ACTIONS(1868),
        [anon_sym_byte] = ACTIONS(1868),
        [anon_sym_short] = ACTIONS(1868),
        [anon_sym_ushort] = ACTIONS(1868),
        [anon_sym_int] = ACTIONS(1868),
        [anon_sym_uint] = ACTIONS(1868),
        [anon_sym_long] = ACTIONS(1868),
        [anon_sym_ulong] = ACTIONS(1868),
        [anon_sym_char] = ACTIONS(1868),
        [anon_sym_delegate] = ACTIONS(1868),
        [anon_sym_LBRACK] = ACTIONS(1864),
        [anon_sym_readonly] = ACTIONS(1868),
        [anon_sym_volatile] = ACTIONS(1868),
        [anon_sym_bool] = ACTIONS(1868),
        [anon_sym_decimal] = ACTIONS(1868),
        [anon_sym_double] = ACTIONS(1868),
        [anon_sym_float] = ACTIONS(1868),
        [anon_sym_object] = ACTIONS(1868),
        [anon_sym_string] = ACTIONS(1868),
        [sym_identifier_name] = ACTIONS(1872),
        [sym_comment] = ACTIONS(97),
    },
    [473] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1876),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [474] = {
        [ts_builtin_sym_end] = ACTIONS(1878),
        [anon_sym_namespace] = ACTIONS(1882),
        [anon_sym_RBRACE] = ACTIONS(1878),
        [anon_sym_class] = ACTIONS(1882),
        [anon_sym_unsafe] = ACTIONS(1882),
        [anon_sym_abstract] = ACTIONS(1882),
        [anon_sym_sealed] = ACTIONS(1882),
        [anon_sym_static] = ACTIONS(1882),
        [anon_sym_new] = ACTIONS(1882),
        [anon_sym_public] = ACTIONS(1882),
        [anon_sym_protected] = ACTIONS(1882),
        [anon_sym_internal] = ACTIONS(1882),
        [anon_sym_private] = ACTIONS(1882),
        [anon_sym_struct] = ACTIONS(1882),
        [anon_sym_enum] = ACTIONS(1882),
        [anon_sym_sbyte] = ACTIONS(1882),
        [anon_sym_byte] = ACTIONS(1882),
        [anon_sym_short] = ACTIONS(1882),
        [anon_sym_ushort] = ACTIONS(1882),
        [anon_sym_int] = ACTIONS(1882),
        [anon_sym_uint] = ACTIONS(1882),
        [anon_sym_long] = ACTIONS(1882),
        [anon_sym_ulong] = ACTIONS(1882),
        [anon_sym_char] = ACTIONS(1882),
        [anon_sym_delegate] = ACTIONS(1882),
        [anon_sym_LBRACK] = ACTIONS(1878),
        [anon_sym_readonly] = ACTIONS(1882),
        [anon_sym_volatile] = ACTIONS(1882),
        [anon_sym_bool] = ACTIONS(1882),
        [anon_sym_decimal] = ACTIONS(1882),
        [anon_sym_double] = ACTIONS(1882),
        [anon_sym_float] = ACTIONS(1882),
        [anon_sym_object] = ACTIONS(1882),
        [anon_sym_string] = ACTIONS(1882),
        [sym_identifier_name] = ACTIONS(1886),
        [sym_comment] = ACTIONS(97),
    },
    [475] = {
        [ts_builtin_sym_end] = ACTIONS(1890),
        [anon_sym_namespace] = ACTIONS(1894),
        [anon_sym_RBRACE] = ACTIONS(1890),
        [anon_sym_class] = ACTIONS(1894),
        [anon_sym_unsafe] = ACTIONS(1894),
        [anon_sym_abstract] = ACTIONS(1894),
        [anon_sym_sealed] = ACTIONS(1894),
        [anon_sym_static] = ACTIONS(1894),
        [anon_sym_new] = ACTIONS(1894),
        [anon_sym_public] = ACTIONS(1894),
        [anon_sym_protected] = ACTIONS(1894),
        [anon_sym_internal] = ACTIONS(1894),
        [anon_sym_private] = ACTIONS(1894),
        [anon_sym_struct] = ACTIONS(1894),
        [anon_sym_enum] = ACTIONS(1894),
        [anon_sym_sbyte] = ACTIONS(1894),
        [anon_sym_byte] = ACTIONS(1894),
        [anon_sym_short] = ACTIONS(1894),
        [anon_sym_ushort] = ACTIONS(1894),
        [anon_sym_int] = ACTIONS(1894),
        [anon_sym_uint] = ACTIONS(1894),
        [anon_sym_long] = ACTIONS(1894),
        [anon_sym_ulong] = ACTIONS(1894),
        [anon_sym_char] = ACTIONS(1894),
        [anon_sym_delegate] = ACTIONS(1894),
        [anon_sym_LBRACK] = ACTIONS(1890),
        [anon_sym_readonly] = ACTIONS(1894),
        [anon_sym_volatile] = ACTIONS(1894),
        [anon_sym_bool] = ACTIONS(1894),
        [anon_sym_decimal] = ACTIONS(1894),
        [anon_sym_double] = ACTIONS(1894),
        [anon_sym_float] = ACTIONS(1894),
        [anon_sym_object] = ACTIONS(1894),
        [anon_sym_string] = ACTIONS(1894),
        [sym_identifier_name] = ACTIONS(1898),
        [sym_comment] = ACTIONS(97),
    },
    [476] = {
        [sym__type_declaration] = STATE(186),
        [sym_class_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(18),
        [sym__class_modifiers] = STATE(19),
        [sym_struct_declaration] = STATE(17),
        [sym_struct_modifiers] = STATE(20),
        [sym__struct_modifiers] = STATE(21),
        [sym_enum_declaration] = STATE(17),
        [sym_enum_modifier] = STATE(22),
        [sym_delegate_declaration] = STATE(17),
        [sym_delegate_modifier] = STATE(23),
        [sym__attributes] = STATE(179),
        [sym__attribute_section] = STATE(25),
        [sym_field_declaration] = STATE(186),
        [sym_field_modifiers] = STATE(180),
        [sym__field_modifiers] = STATE(181),
        [sym_variable_declaration] = STATE(182),
        [sym__type] = STATE(183),
        [sym_generic_name] = STATE(69),
        [sym_predefined_type] = STATE(69),
        [aux_sym__attributes_repeat1] = STATE(31),
        [anon_sym_RBRACE] = ACTIONS(1862),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_unsafe] = ACTIONS(555),
        [anon_sym_abstract] = ACTIONS(557),
        [anon_sym_sealed] = ACTIONS(557),
        [anon_sym_static] = ACTIONS(559),
        [anon_sym_new] = ACTIONS(561),
        [anon_sym_public] = ACTIONS(561),
        [anon_sym_protected] = ACTIONS(561),
        [anon_sym_internal] = ACTIONS(561),
        [anon_sym_private] = ACTIONS(561),
        [anon_sym_struct] = ACTIONS(563),
        [anon_sym_enum] = ACTIONS(565),
        [anon_sym_sbyte] = ACTIONS(149),
        [anon_sym_byte] = ACTIONS(149),
        [anon_sym_short] = ACTIONS(149),
        [anon_sym_ushort] = ACTIONS(149),
        [anon_sym_int] = ACTIONS(149),
        [anon_sym_uint] = ACTIONS(149),
        [anon_sym_long] = ACTIONS(149),
        [anon_sym_ulong] = ACTIONS(149),
        [anon_sym_char] = ACTIONS(149),
        [anon_sym_delegate] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(195),
        [anon_sym_readonly] = ACTIONS(569),
        [anon_sym_volatile] = ACTIONS(569),
        [anon_sym_bool] = ACTIONS(149),
        [anon_sym_decimal] = ACTIONS(149),
        [anon_sym_double] = ACTIONS(149),
        [anon_sym_float] = ACTIONS(149),
        [anon_sym_object] = ACTIONS(149),
        [anon_sym_string] = ACTIONS(149),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(97),
    },
    [477] = {
        [ts_builtin_sym_end] = ACTIONS(1902),
        [anon_sym_namespace] = ACTIONS(1909),
        [anon_sym_RBRACE] = ACTIONS(1902),
        [anon_sym_class] = ACTIONS(1909),
        [anon_sym_unsafe] = ACTIONS(1909),
        [anon_sym_abstract] = ACTIONS(1909),
        [anon_sym_sealed] = ACTIONS(1909),
        [anon_sym_static] = ACTIONS(1909),
        [anon_sym_new] = ACTIONS(1909),
        [anon_sym_public] = ACTIONS(1909),
        [anon_sym_protected] = ACTIONS(1909),
        [anon_sym_internal] = ACTIONS(1909),
        [anon_sym_private] = ACTIONS(1909),
        [anon_sym_struct] = ACTIONS(1909),
        [anon_sym_enum] = ACTIONS(1909),
        [anon_sym_sbyte] = ACTIONS(1909),
        [anon_sym_byte] = ACTIONS(1909),
        [anon_sym_short] = ACTIONS(1909),
        [anon_sym_ushort] = ACTIONS(1909),
        [anon_sym_int] = ACTIONS(1909),
        [anon_sym_uint] = ACTIONS(1909),
        [anon_sym_long] = ACTIONS(1909),
        [anon_sym_ulong] = ACTIONS(1909),
        [anon_sym_char] = ACTIONS(1909),
        [anon_sym_delegate] = ACTIONS(1909),
        [anon_sym_LBRACK] = ACTIONS(1902),
        [anon_sym_readonly] = ACTIONS(1909),
        [anon_sym_volatile] = ACTIONS(1909),
        [anon_sym_bool] = ACTIONS(1909),
        [anon_sym_decimal] = ACTIONS(1909),
        [anon_sym_double] = ACTIONS(1909),
        [anon_sym_float] = ACTIONS(1909),
        [anon_sym_object] = ACTIONS(1909),
        [anon_sym_string] = ACTIONS(1909),
        [sym_identifier_name] = ACTIONS(1916),
        [sym_comment] = ACTIONS(97),
    },
    [478] = {
        [ts_builtin_sym_end] = ACTIONS(1923),
        [anon_sym_namespace] = ACTIONS(1933),
        [anon_sym_RBRACE] = ACTIONS(1923),
        [anon_sym_class] = ACTIONS(1933),
        [anon_sym_unsafe] = ACTIONS(1933),
        [anon_sym_abstract] = ACTIONS(1933),
        [anon_sym_sealed] = ACTIONS(1933),
        [anon_sym_static] = ACTIONS(1933),
        [anon_sym_new] = ACTIONS(1933),
        [anon_sym_public] = ACTIONS(1933),
        [anon_sym_protected] = ACTIONS(1933),
        [anon_sym_internal] = ACTIONS(1933),
        [anon_sym_private] = ACTIONS(1933),
        [anon_sym_struct] = ACTIONS(1933),
        [anon_sym_enum] = ACTIONS(1933),
        [anon_sym_sbyte] = ACTIONS(1943),
        [anon_sym_byte] = ACTIONS(1943),
        [anon_sym_short] = ACTIONS(1943),
        [anon_sym_ushort] = ACTIONS(1943),
        [anon_sym_int] = ACTIONS(1943),
        [anon_sym_uint] = ACTIONS(1943),
        [anon_sym_long] = ACTIONS(1943),
        [anon_sym_ulong] = ACTIONS(1943),
        [anon_sym_char] = ACTIONS(1943),
        [anon_sym_delegate] = ACTIONS(1933),
        [anon_sym_LBRACK] = ACTIONS(1923),
        [anon_sym_readonly] = ACTIONS(1943),
        [anon_sym_volatile] = ACTIONS(1943),
        [anon_sym_bool] = ACTIONS(1943),
        [anon_sym_decimal] = ACTIONS(1943),
        [anon_sym_double] = ACTIONS(1943),
        [anon_sym_float] = ACTIONS(1943),
        [anon_sym_object] = ACTIONS(1943),
        [anon_sym_string] = ACTIONS(1943),
        [sym_identifier_name] = ACTIONS(1952),
        [sym_comment] = ACTIONS(97),
    },
    [479] = {
        [aux_sym_enum_declaration_repeat1] = STATE(351),
        [anon_sym_RBRACE] = ACTIONS(1961),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(97),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(288),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(291),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(292),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(293),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(294),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(174),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(7),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(295),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(176),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(296),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(297),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(298),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(299),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(300),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(301),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(302),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(303),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(75),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(12),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(304),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(264),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(177),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(305),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(117),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(306),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(307),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(130),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(131),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(308),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(120),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(141),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(121),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(309),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(310),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(311),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(312),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(124),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(65),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(93),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(313),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(278),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(269),
    [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(314),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
    [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(281),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(270),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_modifier, 1),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_modifier, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_declaration, 1),
    [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_declaration, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attributes, 1),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attributes, 1),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 2),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 2),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 1),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 2),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 3),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 2),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_argument_list, 2),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 4),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 7),
    [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 7),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_modifier, 1),
    [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_modifier, 1),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 4),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 3),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_generic_name, 2),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_generic_name, 2),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 4),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__integral_type, 1),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 3),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(127),
    [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equals_value_clause, 2),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__verbatim_string_literal, 3),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__regular_string_literal_character, 1),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__unicode_escape_sequence, 1),
    [449] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__unicode_escape_sequence, 1),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_escape_sequence, 1),
    [455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_escape_sequence, 1),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 3),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 2),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 5),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9),
    [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10),
    [515] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 11),
    [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 11),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7),
    [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8),
    [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_modifier, 1),
    [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_modifier, 1),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 8),
    [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 8),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 4),
    [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 8),
    [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 8),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6),
    [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6),
    [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [739] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5),
    [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5),
    [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [787] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [801] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__global_attributes, 5),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(284),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extern_alias_directive, 4),
    [857] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_extern_alias_directive, 4),
    [872] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [876] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [889] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [902] = {.count = 15, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [918] = {.count = 12, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [931] = {.count = 15, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [947] = {.count = 12, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4), REDUCE(sym_delegate_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_delegate_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
    [964] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(431),
    [966] = {.count = 18, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
    [987] = {.count = 18, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1006] = {.count = 16, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1023] = {.count = 16, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_enum_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_enum_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_enum_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
    [1042] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(459),
    [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
    [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
    [1051] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(448),
    [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
    [1055] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2), REDUCE(sym_parameter_list, 3), REDUCE(sym_parameter_list, 4),
    [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__global_attributes, 5),
    [1061] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [1064] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__attribute_section, 3), REDUCE(sym__global_attributes, 5),
    [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
    [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
    [1071] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
    [1073] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal_character, 1),
    [1075] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1), REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
    [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
    [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
    [1085] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1090] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
    [1096] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__regular_string_literal, 2), REDUCE(sym__regular_string_literal, 3), REDUCE(sym__verbatim_string_literal, 3),
    [1100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
    [1102] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [1105] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [1108] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(427),
    [1112] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(428),
    [1115] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_enum_member_declaration, 2),
    [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
    [1120] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1), REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [1131] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [1137] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(272),
    [1141] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1144] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2),
    [1147] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1152] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat4, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1157] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1160] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1163] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [1166] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
    [1171] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [1176] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [1179] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(405),
    [1183] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3), SHIFT(153),
    [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
    [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
    [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
    [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
    [1197] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), REDUCE(aux_sym_parameter_list_repeat1, 3), SHIFT(86),
    [1201] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), REDUCE(aux_sym_parameter_list_repeat1, 3), SHIFT(87),
    [1205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(368),
    [1207] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1210] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1213] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__attributes_repeat1, 1), REDUCE(aux_sym__attributes_repeat1, 2),
    [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
    [1218] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3), SHIFT(37),
    [1222] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute_list, 1), REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1226] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat3, 1), REDUCE(aux_sym_compilation_unit_repeat3, 2),
    [1229] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [1232] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1235] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [1240] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__return_type, 1), SHIFT(364),
    [1243] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2), REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1247] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3), SHIFT(189),
    [1251] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_enum_member_declaration, 3),
    [1254] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2), REDUCE(sym_enum_member_declaration, 3),
    [1258] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1261] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__regular_string_literal_repeat1, 1), REDUCE(aux_sym__regular_string_literal_repeat1, 2),
    [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
    [1266] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(97),
    [1270] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(98),
    [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [1276] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [1279] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1283] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
    [1290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
    [1292] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
    [1300] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1306] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1312] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1318] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1324] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1330] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1339] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1348] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1357] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1361] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2), REDUCE(sym_compilation_unit, 3),
    [1364] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 3), REDUCE(sym_compilation_unit, 4),
    [1367] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [1372] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1379] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1386] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [1395] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1402] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1409] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7), REDUCE(sym_class_declaration, 8), REDUCE(sym_struct_declaration, 8),
    [1416] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_parameter, 2), REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1421] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1425] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1429] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [1435] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1438] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1441] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3), REDUCE(sym_field_declaration, 4),
    [1444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
    [1446] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_parameter, 3),
    [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
    [1451] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 3), REDUCE(sym_parameter, 4),
    [1454] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1458] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1462] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 5), REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
    [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
    [1470] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1473] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1476] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delegate_declaration, 6), REDUCE(sym_delegate_declaration, 7),
    [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [1481] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [1487] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1491] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
    [1497] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [1503] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1507] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1511] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1515] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1519] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
    [1525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
    [1527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
    [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [1533] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
    [1538] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1541] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [1546] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
    [1551] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1554] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10),
    [1557] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1560] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1563] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
    [1568] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
    [1573] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1576] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
    [1581] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
    [1586] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1589] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1592] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
    [1600] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1606] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9),
    [1612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
    [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
    [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
    [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
    [1620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
    [1622] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1625] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1628] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [1633] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1636] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1639] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1642] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1645] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1648] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
    [1653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
    [1655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [1657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
    [1659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
    [1661] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1664] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1667] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
    [1672] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1675] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1678] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1681] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1684] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1687] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1690] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_extern_alias_directive, 4), REDUCE(sym_using_directive, 4),
    [1694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
    [1696] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1704] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1712] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1719] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [1726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1),
    [1728] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1731] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat4, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [1734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
    [1736] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [1742] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1746] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 5), REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7),
    [1750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [1752] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1756] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [1758] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1762] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8),
    [1766] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1770] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 2), REDUCE(sym_real_literal, 3),
    [1773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
    [1775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
    [1777] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 3), REDUCE(sym_real_literal, 4),
    [1780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [1782] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_real_literal, 4), REDUCE(sym_real_literal, 5),
    [1785] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 1), REDUCE(sym_attribute, 1), REDUCE(sym__type, 1), REDUCE(sym_variable_declarator, 1),
    [1790] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_enum_declaration_repeat1, 2), REDUCE(aux_sym_enum_declaration_repeat1, 3),
    [1793] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), REDUCE(aux_sym_parameter_list_repeat1, 3),
    [1796] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_attribute_list_repeat1, 2), REDUCE(aux_sym_attribute_list_repeat1, 3),
    [1799] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), REDUCE(aux_sym_variable_declaration_repeat1, 3),
    [1802] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [1805] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_member_declaration, 2), REDUCE(sym_variable_declarator, 2),
    [1808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [1810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [1812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
    [1814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
    [1816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
    [1818] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1822] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1826] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [1830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
    [1832] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1836] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1840] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7), REDUCE(sym_struct_declaration, 8),
    [1844] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1848] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1852] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [1856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
    [1858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [1860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [1862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
    [1864] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1868] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1872] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [1876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [1878] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1882] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1886] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_class_declaration, 8),
    [1890] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1894] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1898] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [1902] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1909] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1916] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_enum_declaration, 6), REDUCE(sym_enum_declaration, 7), REDUCE(sym_enum_declaration, 8), REDUCE(sym_enum_declaration, 9), REDUCE(sym_enum_declaration, 10), REDUCE(sym_enum_declaration, 11),
    [1923] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1933] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1943] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1952] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [1961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
